/*
 * Copyright (c) 2000-2009 Apple Inc. All rights reserved.
 *
 * @APPLE_OSREFERENCE_LICENSE_HEADER_START@
 * 
 * This file contains Original Code and/or Modifications of Original Code
 * as defined in and that are subject to the Apple Public Source License
 * Version 2.0 (the 'License'). You may not use this file except in
 * compliance with the License. The rights granted to you under the License
 * may not be used to create, or enable the creation or redistribution of,
 * unlawful or unlicensed copies of an Apple operating system, or to
 * circumvent, violate, or enable the circumvention or violation of, any
 * terms of an Apple operating system software license agreement.
 * 
 * Please obtain a copy of the License at
 * http://www.opensource.apple.com/apsl/ and read it before using this file.
 * 
 * The Original Code and all software distributed under the License are
 * distributed on an 'AS IS' basis, WITHOUT WARRANTY OF ANY KIND, EITHER
 * EXPRESS OR IMPLIED, AND APPLE HEREBY DISCLAIMS ALL SUCH WARRANTIES,
 * INCLUDING WITHOUT LIMITATION, ANY WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE, QUIET ENJOYMENT OR NON-INFRINGEMENT.
 * Please see the License for the specific language governing rights and
 * limitations under the License.
 * 
 * @APPLE_OSREFERENCE_LICENSE_HEADER_END@
 */

#include <vm/pmap.h>
#include <sys/kdebug.h>
#include <kern/debug.h>

#ifdef MACH_KERNEL_PRIVATE

/*
 * pmap locking
 */

#define PMAP_LOCK(pmap) {		\
	simple_lock(&(pmap)->lock);	\
}

#define PMAP_UNLOCK(pmap) {			\
	simple_unlock(&(pmap)->lock);		\
}


#define PMAP_UPDATE_TLBS(pmap, s, e)					\
	pmap_flush_tlbs(pmap)

#define	iswired(pte)	((pte) & INTEL_PTE_WIRED)

#ifdef	PMAP_TRACES
extern	boolean_t	pmap_trace;
#define PMAP_TRACE(x,a,b,c,d,e)						\
	if (pmap_trace) {						\
		KERNEL_DEBUG_CONSTANT(x,a,b,c,d,e);			\
	}
#else
#define PMAP_TRACE(x,a,b,c,d,e)	KERNEL_DEBUG(x,a,b,c,d,e)
#endif /* PMAP_TRACES */

void		pmap_expand_pml4(
			pmap_t		map,
			vm_map_offset_t	v);

void		pmap_expand_pdpt(
			pmap_t		map,
			vm_map_offset_t	v);
extern void 	pmap_flush_tlbs(pmap_t pmap);

#if	defined(__x86_64__)
extern const boolean_t cpu_64bit;
#else
extern boolean_t cpu_64bit;
#endif

/*
 *	Private data structures.
 */

/*
 *	For each vm_page_t, there is a list of all currently
 *	valid virtual mappings of that page.  An entry is
 *	a pv_rooted_entry_t; the list is the pv_table.
 *
 *      N.B.  with the new combo rooted/hashed scheme it is
 *      only possibly to remove individual non-rooted entries
 *      if they are found via the hashed chains as there is no
 *      way to unlink the singly linked hashed entries if navigated to
 *      via the queue list off the rooted entries.  Think of it as
 *      hash/walk/pull, keeping track of the prev pointer while walking
 *      the singly linked hash list.  All of this is to save memory and
 *      keep both types of pv_entries as small as possible.
 */

/*

PV HASHING Changes - JK 1/2007

Pve's establish physical to virtual mappings.  These are used for aliasing of a 
physical page to (potentially many) virtual addresses within pmaps. In the previous 
implementation the structure of the pv_entries (each 16 bytes in size) was

typedef struct pv_entry {
    struct pv_entry_t    next;
    pmap_t                    pmap;
    vm_map_offset_t   va;
} *pv_entry_t;

An initial array of these is created at boot time, one per physical page of memory, 
indexed by the physical page number. Additionally, a pool of entries is created from a 
pv_zone to be used as needed by pmap_enter() when it is creating new mappings.  
Originally, we kept this pool around because the code in pmap_enter() was unable to 
block if it needed an entry and none were available - we'd panic.  Some time ago I 
restructured the pmap_enter() code so that for user pmaps it can block while zalloc'ing 
a pv structure and restart, removing a panic from the code (in the case of the kernel 
pmap we cannot block and still panic, so, we keep a separate hot pool for use only on 
kernel pmaps).  The pool has not been removed since there is a large performance gain 
keeping freed pv's around for reuse and not suffering the overhead of zalloc for every new pv we need.

As pmap_enter() created new mappings it linked the new pve's for them off the fixed 
pv array for that ppn (off the next pointer).  These pve's are accessed for several 
operations, one of them being address space teardown.  In that case, we basically do this

	for (every page/pte in the space) {
		calc pve_ptr from the ppn in the pte
		for (every pv in the list for the ppn) {
			if (this pv is for this pmap/vaddr) {
				do housekeeping
				unlink/free the pv
			}
		}
	}

The problem arose when we were running, say 8000 (or even 2000) apache or other processes 
and one or all terminate. The list hanging off each pv array entry could have thousands of 
entries.  We were continuously linearly searching each of these lists as we stepped through 
the address space we were tearing down.  Because of the locks we hold, likely taking a cache 
miss for each node,  and interrupt disabling for MP issues the system became completely 
unresponsive for many seconds while we did this.

Realizing that pve's are accessed in two distinct ways (linearly running the list by ppn 
for operations like pmap_page_protect and finding and modifying/removing a single pve as 
part of pmap_enter processing) has led to modifying the pve structures and databases.

There are now two types of pve structures.  A "rooted" structure which is basically the 
original structure accessed in an array by ppn, and a ''hashed'' structure accessed on a 
hash list via a hash of [pmap, vaddr].  These have been designed with the two goals of 
minimizing wired memory and making the lookup of a ppn faster.  Since a vast majority of 
pages in the system are not aliased and hence represented by a single pv entry I've kept 
the rooted entry size as small as possible because there is one of these dedicated for 
every physical page of memory.  The hashed pve's are larger due to the addition of the hash 
link and the ppn entry needed for matching while running the hash list to find the entry we 
are looking for.  This way, only systems that have lots of aliasing (like 2000+ httpd procs) 
will pay the extra memory price. Both structures have the same first three fields allowing 
some simplification in the code.

They have these shapes

typedef struct pv_rooted_entry {
        queue_head_t qlink;
        vm_map_offset_t va;
        pmap_t          pmap;
} *pv_rooted_entry_t;


typedef struct pv_hashed_entry {
  queue_head_t qlink;
  vm_map_offset_t va;
  pmap_t        pmap;
  ppnum_t ppn;
  struct pv_hashed_entry *nexth;
} *pv_hashed_entry_t;

The main flow difference is that the code is now aware of the rooted entry and the hashed 
entries.  Code that runs the pv list still starts with the rooted entry and then continues 
down the qlink onto the hashed entries.  Code that is looking up a specific pv entry first 
checks the rooted entry and then hashes and runs the hash list for the match. The hash list 
lengths are much smaller than the original pv lists that contained all aliases for the specific ppn.

*/

typedef struct pv_rooted_entry {     /* first three entries must match pv_hashed_entry_t */
        queue_head_t qlink;
	vm_map_offset_t	va;		/* virtual address for mapping */
	pmap_t		pmap;		/* pmap where mapping lies */
} *pv_rooted_entry_t;

#define PV_ROOTED_ENTRY_NULL	((pv_rooted_entry_t) 0)


typedef struct pv_hashed_entry {     /* first three entries must match pv_rooted_entry_t */
	queue_head_t qlink;
	vm_map_offset_t va;
	pmap_t        pmap;
	ppnum_t ppn;
	struct pv_hashed_entry *nexth;
} *pv_hashed_entry_t;

#define PV_HASHED_ENTRY_NULL ((pv_hashed_entry_t)0)

/* #define PV_DEBUG 1   uncomment to enable some PV debugging code */
#ifdef PV_DEBUG
#define CHK_NPVHASH() if(0 == npvhash) panic("npvhash uninitialized");
#else
#define CHK_NPVHASH()
#endif

#define NPVHASH 4095   /* MUST BE 2^N - 1 */
#define PV_HASHED_LOW_WATER_MARK 5000
#define PV_HASHED_KERN_LOW_WATER_MARK 400
#define PV_HASHED_ALLOC_CHUNK 2000
#define PV_HASHED_KERN_ALLOC_CHUNK 200

#define	PV_HASHED_ALLOC(pvh_e) { \
	simple_lock(&pv_hashed_free_list_lock); \
	if ((pvh_e = pv_hashed_free_list) != 0) { \
	  pv_hashed_free_list = (pv_hashed_entry_t)pvh_e->qlink.next;	\
	  pv_hashed_free_count--;					\
	  if (pv_hashed_free_count < PV_HASHED_LOW_WATER_MARK)		\
		  if (hw_compare_and_store(0,1,(u_int *)&mappingrecurse)) \
			  thread_call_enter(mapping_adjust_call);	\
	}								\
	simple_unlock(&pv_hashed_free_list_lock); \
}

#define	PV_HASHED_FREE_LIST(pvh_eh, pvh_et, pv_cnt) {	\
	simple_lock(&pv_hashed_free_list_lock); \
	pvh_et->qlink.next = (queue_entry_t)pv_hashed_free_list;	\
	pv_hashed_free_list = pvh_eh; \
	pv_hashed_free_count += pv_cnt;		  \
	simple_unlock(&pv_hashed_free_list_lock); \
}

#define	PV_HASHED_KERN_ALLOC(pvh_e) { \
	simple_lock(&pv_hashed_kern_free_list_lock); \
	if ((pvh_e = pv_hashed_kern_free_list) != 0) { \
	  pv_hashed_kern_free_list = (pv_hashed_entry_t)pvh_e->qlink.next;	\
	  pv_hashed_kern_free_count--;					\
	  if (pv_hashed_kern_free_count < PV_HASHED_KERN_LOW_WATER_MARK) \
		  if (hw_compare_and_store(0,1,(u_int *)&mappingrecurse)) \
			  thread_call_enter(mapping_adjust_call);	\
	}								\
	simple_unlock(&pv_hashed_kern_free_list_lock); \
}

#define	PV_HASHED_KERN_FREE_LIST(pvh_eh, pvh_et, pv_cnt) {	 \
	simple_lock(&pv_hashed_kern_free_list_lock); \
	pvh_et->qlink.next = (queue_entry_t)pv_hashed_kern_free_list;	\
	pv_hashed_kern_free_list = pvh_eh; \
	pv_hashed_kern_free_count += pv_cnt;	       \
	simple_unlock(&pv_hashed_kern_free_list_lock); \
}

/*
 *	Index into pv_head table, its lock bits, and the modify/reference and managed bits
 */

#define pa_index(pa)		(i386_btop(pa))
#define ppn_to_pai(ppn)		((int)ppn)

#define pai_to_pvh(pai)		(&pv_head_table[pai])
#define lock_pvh_pai(pai)	bit_lock(pai, (void *)pv_lock_table)
#define unlock_pvh_pai(pai)	bit_unlock(pai, (void *)pv_lock_table)
#define pvhash(idx)		(&pv_hash_table[idx])

#define lock_hash_hash(hash)	bit_lock(hash, (void *)pv_hash_lock_table)
#define unlock_hash_hash(hash)	bit_unlock(hash, (void *)pv_hash_lock_table)

#define IS_MANAGED_PAGE(x)				\
	((unsigned int)(x) <= last_managed_page &&	\
	 (pmap_phys_attributes[x] & PHYS_MANAGED))

/*
 *	Physical page attributes.  Copy bits from PTE definition.
 */
#define	PHYS_MODIFIED	INTEL_PTE_MOD	/* page modified */
#define	PHYS_REFERENCED	INTEL_PTE_REF	/* page referenced */
#define PHYS_MANAGED	INTEL_PTE_VALID /* page is managed */
#define PHYS_NOENCRYPT	INTEL_PTE_USER	/* no need to encrypt this page in the hibernation image */

/*
 *	Amount of virtual memory mapped by one
 *	page-directory entry.
 */
#define	PDE_MAPPED_SIZE		(pdetova(1))


/*
 *	Locking and TLB invalidation
 */

/*
 *	Locking Protocols: (changed 2/2007 JK)
 *
 *	There are two structures in the pmap module that need locking:
 *	the pmaps themselves, and the per-page pv_lists (which are locked
 *	by locking the pv_lock_table entry that corresponds to the pv_head
 *	for the list in question.)  Most routines want to lock a pmap and
 *	then do operations in it that require pv_list locking -- however
 *	pmap_remove_all and pmap_copy_on_write operate on a physical page
 *	basis and want to do the locking in the reverse order, i.e. lock
 *	a pv_list and then go through all the pmaps referenced by that list.
 *
 *      The system wide pmap lock has been removed. Now, paths take a lock
 *      on the pmap before changing its 'shape' and the reverse order lockers
 *      (coming in by phys ppn) take a lock on the corresponding pv and then
 *      retest to be sure nothing changed during the window before they locked
 *      and can then run up/down the pv lists holding the list lock. This also
 *      lets the pmap layer run (nearly completely) interrupt enabled, unlike
 *      previously.
 */

/*
 * PV locking
 */

#define LOCK_PVH(index)	{		\
	mp_disable_preemption();	\
	lock_pvh_pai(index);		\
}

#define UNLOCK_PVH(index) {		\
	unlock_pvh_pai(index);		\
	mp_enable_preemption();		\
}
/*
 * PV hash locking
 */

#define LOCK_PV_HASH(hash)         lock_hash_hash(hash)
#define UNLOCK_PV_HASH(hash)       unlock_hash_hash(hash)
extern uint32_t npvhash;
extern pv_hashed_entry_t     	*pv_hash_table;  /* hash lists */
extern pv_hashed_entry_t	pv_hashed_free_list;
extern pv_hashed_entry_t	pv_hashed_kern_free_list;
decl_simple_lock_data(extern, pv_hashed_free_list_lock)
decl_simple_lock_data(extern, pv_hashed_kern_free_list_lock)
decl_simple_lock_data(extern, pv_hash_table_lock)

extern zone_t		pv_hashed_list_zone;	/* zone of pv_hashed_entry structures */

extern int			pv_hashed_free_count;
extern int			pv_hashed_kern_free_count;
#define pv_lock_table_size(n)	(((n)+BYTE_SIZE-1)/BYTE_SIZE)
#define pv_hash_lock_table_size(n)  (((n)+BYTE_SIZE-1)/BYTE_SIZE)
extern char	*pv_lock_table;		/* pointer to array of bits */

extern char    *pv_hash_lock_table;
extern pv_rooted_entry_t	pv_head_table;		/* array of entries, one
							 * per page */
extern uint64_t pde_mapped_size;

extern char		*pmap_phys_attributes;
extern unsigned int	last_managed_page;

extern ppnum_t	lowest_lo;
extern ppnum_t	lowest_hi;
extern ppnum_t	highest_hi;

/*
 * when spinning through pmap_remove
 * ensure that we don't spend too much
 * time with preemption disabled.
 * I'm setting the current threshold
 * to 20us
 */
#define MAX_PREEMPTION_LATENCY_NS 20000
extern uint64_t max_preemption_latency_tsc;

/* #define DEBUGINTERRUPTS 1  uncomment to ensure pmap callers have interrupts enabled */
#ifdef DEBUGINTERRUPTS
#define pmap_intr_assert() {							\
	if (processor_avail_count > 1 && !ml_get_interrupts_enabled())		\
		panic("pmap interrupt assert %s, %d",__FILE__, __LINE__);	\
}
#else
#define pmap_intr_assert()
#endif

extern int		nx_enabled;
extern unsigned int	inuse_ptepages_count;

static inline uint32_t
pvhashidx(pmap_t pmap, vm_map_offset_t va)
{
	return ((uint32_t)(uintptr_t)pmap ^
		((uint32_t)((uint64_t)va >> PAGE_SHIFT) & 0xFFFFFFFF)) &
	       npvhash;
}

/*
 * unlinks the pv_hashed_entry_t pvh from the singly linked hash chain.
 * properly deals with the anchor.
 * must be called with the hash locked, does not unlock it
 */

static inline void 
pmap_pvh_unlink(pv_hashed_entry_t pvh)
{
	pv_hashed_entry_t	curh;
	pv_hashed_entry_t	*pprevh;
	int           		pvhash_idx;

	CHK_NPVHASH();
	pvhash_idx = pvhashidx(pvh->pmap, pvh->va);

	pprevh = pvhash(pvhash_idx);

#if PV_DEBUG
	if (NULL == *pprevh)
		panic("pvh_unlink null anchor"); /* JK DEBUG */
#endif
	curh = *pprevh;

	while (PV_HASHED_ENTRY_NULL != curh) {
		if (pvh == curh)
			break;
		pprevh = &curh->nexth;
		curh = curh->nexth;
	}
	if (PV_HASHED_ENTRY_NULL == curh) panic("pmap_pvh_unlink no pvh");
	*pprevh = pvh->nexth;
	return;
}

static inline void
pv_hash_add(pv_hashed_entry_t	pvh_e,
	    pv_rooted_entry_t	pv_h)
{
	pv_hashed_entry_t       *hashp;
	int                     pvhash_idx;

	CHK_NPVHASH();
	pvhash_idx = pvhashidx(pvh_e->pmap, pvh_e->va);
	LOCK_PV_HASH(pvhash_idx);
	insque(&pvh_e->qlink, &pv_h->qlink);
	hashp = pvhash(pvhash_idx);
#if PV_DEBUG
	if (NULL==hashp)
		panic("pv_hash_add(%p) null hash bucket", pvh_e);
#endif
	pvh_e->nexth = *hashp;
	*hashp = pvh_e;
	UNLOCK_PV_HASH(pvhash_idx);
}

static inline void
pv_hash_remove(pv_hashed_entry_t pvh_e)
{
	int                     pvhash_idx;

	CHK_NPVHASH();
	pvhash_idx = pvhashidx(pvh_e->pmap,pvh_e->va);
	LOCK_PV_HASH(pvhash_idx);
	remque(&pvh_e->qlink);
	pmap_pvh_unlink(pvh_e);
	UNLOCK_PV_HASH(pvhash_idx);
}

static inline boolean_t popcnt1(uint64_t distance) {
	return ((distance & (distance - 1)) == 0);
}

/*
 * Routines to handle suppression of/recovery from some forms of pagetable corruption
 * incidents observed in the field. These can be either software induced (wild
 * stores to the mapwindows where applicable, use after free errors
 * (typically of pages addressed physically), mis-directed DMAs etc., or due
 * to DRAM/memory hierarchy/interconnect errors. Given the theoretical rarity of these errors,
 * the recording mechanism is deliberately not MP-safe. The overarching goal is to
 * still assert on potential software races, but attempt recovery from incidents
 * identifiable as occurring due to issues beyond the control of the pmap module.
 * The latter includes single-bit errors and malformed pagetable entries.
 * We currently limit ourselves to recovery/suppression of one incident per
 * PMAP_PAGETABLE_CORRUPTION_INTERVAL seconds, and details of the incident
 * are logged.
 * Assertions are not suppressed if kernel debugging is enabled. (DRK 09)
 */

typedef enum {
	PTE_VALID		= 0x0,
	PTE_INVALID		= 0x1,
	PTE_RSVD		= 0x2,
	PTE_SUPERVISOR		= 0x4,
	PTE_BITFLIP		= 0x8,
	PV_BITFLIP		= 0x10,
	PTE_INVALID_CACHEABILITY = 0x20
} pmap_pagetable_corruption_t;

typedef enum {
	ROOT_PRESENT = 0,
	ROOT_ABSENT = 1
} pmap_pv_assertion_t;

typedef enum {
	PMAP_ACTION_IGNORE	= 0x0,
	PMAP_ACTION_ASSERT	= 0x1,
	PMAP_ACTION_RETRY	= 0x2,
	PMAP_ACTION_RETRY_RELOCK = 0x4
} pmap_pagetable_corruption_action_t;

#define	PMAP_PAGETABLE_CORRUPTION_INTERVAL (6ULL * 3600ULL)
extern uint64_t pmap_pagetable_corruption_interval_abstime;

extern uint32_t pmap_pagetable_corruption_incidents;
#define PMAP_PAGETABLE_CORRUPTION_MAX_LOG (8)
typedef struct {
	pmap_pv_assertion_t incident;
	pmap_pagetable_corruption_t reason;
	pmap_pagetable_corruption_action_t action;
	pmap_t	pmap;
	vm_map_offset_t vaddr;
	pt_entry_t pte;
	ppnum_t ppn;
	pmap_t pvpmap;
	vm_map_offset_t pvva;
	uint64_t abstime;
} pmap_pagetable_corruption_record_t;

extern pmap_pagetable_corruption_record_t pmap_pagetable_corruption_records[];
extern uint64_t pmap_pagetable_corruption_last_abstime;
extern thread_call_t 	pmap_pagetable_corruption_log_call;
extern boolean_t pmap_pagetable_corruption_timeout;

static inline void
pmap_pagetable_corruption_log(pmap_pv_assertion_t incident, pmap_pagetable_corruption_t suppress_reason, pmap_pagetable_corruption_action_t action, pmap_t pmap, vm_map_offset_t vaddr, pt_entry_t *ptep, ppnum_t ppn, pmap_t pvpmap, vm_map_offset_t pvva) {
	uint32_t pmap_pagetable_corruption_log_index;
	pmap_pagetable_corruption_log_index = pmap_pagetable_corruption_incidents++ % PMAP_PAGETABLE_CORRUPTION_MAX_LOG;
	pmap_pagetable_corruption_records[pmap_pagetable_corruption_log_index].incident = incident;
	pmap_pagetable_corruption_records[pmap_pagetable_corruption_log_index].reason = suppress_reason;
	pmap_pagetable_corruption_records[pmap_pagetable_corruption_log_index].action = action;
	pmap_pagetable_corruption_records[pmap_pagetable_corruption_log_index].pmap = pmap;
	pmap_pagetable_corruption_records[pmap_pagetable_corruption_log_index].vaddr = vaddr;
	pmap_pagetable_corruption_records[pmap_pagetable_corruption_log_index].pte = *ptep;
	pmap_pagetable_corruption_records[pmap_pagetable_corruption_log_index].ppn = ppn;
	pmap_pagetable_corruption_records[pmap_pagetable_corruption_log_index].pvpmap = pvpmap;
	pmap_pagetable_corruption_records[pmap_pagetable_corruption_log_index].pvva = pvva;
	pmap_pagetable_corruption_records[pmap_pagetable_corruption_log_index].abstime = mach_absolute_time();
	/* Asynchronously log */
	thread_call_enter(pmap_pagetable_corruption_log_call);
}

static inline pmap_pagetable_corruption_action_t
pmap_classify_pagetable_corruption(pmap_t pmap, vm_map_offset_t vaddr, ppnum_t *ppnp, pt_entry_t *ptep, pmap_pv_assertion_t incident) {
	pmap_pv_assertion_t	action = PMAP_ACTION_ASSERT;
	pmap_pagetable_corruption_t	suppress_reason = PTE_VALID;
	ppnum_t			suppress_ppn = 0;
	pt_entry_t cpte = *ptep;
	ppnum_t	cpn = pa_index(pte_to_pa(cpte));
	ppnum_t	ppn = *ppnp;
	pv_rooted_entry_t	pv_h = pai_to_pvh(ppn_to_pai(ppn));
	pv_rooted_entry_t	pv_e = pv_h;
	uint32_t	bitdex;
	pmap_t pvpmap = pv_h->pmap;
	vm_map_offset_t pvva = pv_h->va;
	boolean_t ppcd = FALSE;

	/* Ideally, we'd consult the Mach VM here to definitively determine
	 * the nature of the mapping for this address space and address.
	 * As that would be a layering violation in this context, we
	 * use various heuristics to recover from single bit errors,
	 * malformed pagetable entries etc. These are not intended
	 * to be comprehensive.
	 */

	/* As a precautionary measure, mark A+D */
	pmap_phys_attributes[ppn_to_pai(ppn)] |= (PHYS_MODIFIED | PHYS_REFERENCED);

	/*
	 * Correct potential single bit errors in either (but not both) element
	 * of the PV
	 */
	do {
		if ((popcnt1((uintptr_t)pv_e->pmap ^ (uintptr_t)pmap) && pv_e->va == vaddr) ||
		    (pv_e->pmap == pmap && popcnt1(pv_e->va ^ vaddr))) {
			pv_e->pmap = pmap;
			pv_e->va = vaddr;
			suppress_reason = PV_BITFLIP;
			action = PMAP_ACTION_RETRY;
			goto pmap_cpc_exit;
		}
	} while((pv_e = (pv_rooted_entry_t) queue_next(&pv_e->qlink)) != pv_h);

	/* Discover root entries with a Hamming
	 * distance of 1 from the supplied
	 * physical page frame.
	 */
	for (bitdex = 0; bitdex < (sizeof(ppnum_t) << 3); bitdex++) {
		ppnum_t npn = cpn ^ (ppnum_t) (1ULL << bitdex);
		if (IS_MANAGED_PAGE(npn)) {
			pv_rooted_entry_t npv_h = pai_to_pvh(ppn_to_pai(npn));
			if (npv_h->va == vaddr && npv_h->pmap == pmap) {
				suppress_reason = PTE_BITFLIP;
				suppress_ppn = npn;
				action = PMAP_ACTION_RETRY_RELOCK;
				UNLOCK_PVH(ppn_to_pai(ppn));
				*ppnp = npn;
				goto pmap_cpc_exit;
			}
		}
	}

	if (pmap == kernel_pmap) {
		action = PMAP_ACTION_ASSERT;
		goto pmap_cpc_exit;
	}

	/* Check for malformed/inconsistent entries */

	if ((cpte & (INTEL_PTE_NCACHE | INTEL_PTE_WTHRU | INTEL_PTE_PTA)) ==  (INTEL_PTE_NCACHE | INTEL_PTE_WTHRU)) {
		action = PMAP_ACTION_IGNORE;
		suppress_reason = PTE_INVALID_CACHEABILITY;
	}
	else if (cpte & INTEL_PTE_RSVD) {
		action = PMAP_ACTION_IGNORE;
		suppress_reason = PTE_RSVD;
	}
	else if ((pmap != kernel_pmap) && ((cpte & INTEL_PTE_USER) == 0)) {
		action = PMAP_ACTION_IGNORE;
		suppress_reason = PTE_SUPERVISOR;
	}
pmap_cpc_exit:
	PE_parse_boot_argn("-pmap_pagetable_corruption_deassert", &ppcd, sizeof(ppcd));

	if (debug_boot_arg && !ppcd) {
		action = PMAP_ACTION_ASSERT;
	}

	if ((mach_absolute_time() - pmap_pagetable_corruption_last_abstime) < pmap_pagetable_corruption_interval_abstime) {
		action = PMAP_ACTION_ASSERT;
		pmap_pagetable_corruption_timeout = TRUE;
	}
	else
	{
		pmap_pagetable_corruption_last_abstime = mach_absolute_time();
	}
	pmap_pagetable_corruption_log(incident, suppress_reason, action, pmap, vaddr, &cpte, *ppnp, pvpmap, pvva);
	return action;
}
/*
 * Remove pv list entry.
 * Called with pv_head_table entry locked.
 * Returns pv entry to be freed (or NULL).
 */

static inline __attribute__((always_inline)) pv_hashed_entry_t
pmap_pv_remove( pmap_t		pmap,
		vm_map_offset_t	vaddr,
		ppnum_t		*ppnp,
		pt_entry_t	*pte) 
{
	pv_hashed_entry_t       pvh_e;
	pv_rooted_entry_t	pv_h;
	pv_hashed_entry_t	*pprevh;
	int                     pvhash_idx;
	uint32_t                pv_cnt;
	ppnum_t			ppn;

pmap_pv_remove_retry:
	ppn = *ppnp;
	pvh_e = PV_HASHED_ENTRY_NULL;
	pv_h = pai_to_pvh(ppn_to_pai(ppn));

	if (pv_h->pmap == PMAP_NULL) {
		pmap_pagetable_corruption_action_t pac = pmap_classify_pagetable_corruption(pmap, vaddr, ppnp, pte, ROOT_ABSENT);
		if (pac == PMAP_ACTION_IGNORE)
			goto pmap_pv_remove_exit;
		else if (pac == PMAP_ACTION_ASSERT)
			panic("pmap_pv_remove(%p,0x%llx,0x%x, 0x%llx): null pv_list!", pmap, vaddr, ppn, *pte);
		else if (pac == PMAP_ACTION_RETRY_RELOCK) {
			LOCK_PVH(ppn_to_pai(*ppnp));
			pmap_phys_attributes[ppn_to_pai(*ppnp)] |= (PHYS_MODIFIED | PHYS_REFERENCED);
			goto pmap_pv_remove_retry;
		}
		else if (pac == PMAP_ACTION_RETRY)
			goto pmap_pv_remove_retry;
	}

	if (pv_h->va == vaddr && pv_h->pmap == pmap) {
		/*
	         * Header is the pv_rooted_entry.
		 * We can't free that. If there is a queued
	         * entry after this one we remove that
	         * from the ppn queue, we remove it from the hash chain
	         * and copy it to the rooted entry. Then free it instead.
	         */
		pvh_e = (pv_hashed_entry_t) queue_next(&pv_h->qlink);
		if (pv_h != (pv_rooted_entry_t) pvh_e) {
			/*
			 * Entry queued to root, remove this from hash
			 * and install as new root.
			 */
			CHK_NPVHASH();
			pvhash_idx = pvhashidx(pvh_e->pmap, pvh_e->va);
			LOCK_PV_HASH(pvhash_idx);
			remque(&pvh_e->qlink);
			pprevh = pvhash(pvhash_idx);
			if (PV_HASHED_ENTRY_NULL == *pprevh) {
				panic("pmap_pv_remove(%p,0x%llx,0x%x): "
				      "empty hash, removing rooted",
				      pmap, vaddr, ppn);
			}
			pmap_pvh_unlink(pvh_e);
			UNLOCK_PV_HASH(pvhash_idx);
			pv_h->pmap = pvh_e->pmap;
			pv_h->va = pvh_e->va;	/* dispose of pvh_e */
		} else {
			/* none queued after rooted */
			pv_h->pmap = PMAP_NULL;
			pvh_e = PV_HASHED_ENTRY_NULL;
		}
	} else {
		/*
		 * not removing rooted pv. find it on hash chain, remove from
		 * ppn queue and hash chain and free it
		 */
		CHK_NPVHASH();
		pvhash_idx = pvhashidx(pmap, vaddr);
		LOCK_PV_HASH(pvhash_idx);
		pprevh = pvhash(pvhash_idx);
		if (PV_HASHED_ENTRY_NULL == *pprevh) {
			panic("pmap_pv_remove(%p,0x%llx,0x%x): empty hash", pmap, vaddr, ppn);
		}
		pvh_e = *pprevh;
		pmap_pv_hashlist_walks++;
		pv_cnt = 0;
		while (PV_HASHED_ENTRY_NULL != pvh_e) {
			pv_cnt++;
			if (pvh_e->pmap == pmap &&
			    pvh_e->va == vaddr &&
			    pvh_e->ppn == ppn)
				break;
			pprevh = &pvh_e->nexth;
			pvh_e = pvh_e->nexth;
		}
		if (PV_HASHED_ENTRY_NULL == pvh_e) {
			pmap_pagetable_corruption_action_t pac = pmap_classify_pagetable_corruption(pmap, vaddr, ppnp, pte, ROOT_PRESENT);

			if (pac == PMAP_ACTION_ASSERT)
				panic("pmap_pv_remove(%p,0x%llx,0x%x, 0x%llx): pv not on hash, head: %p, 0x%llx", pmap, vaddr, ppn, *pte, pv_h->pmap, pv_h->va);
			else {
				UNLOCK_PV_HASH(pvhash_idx);
				if (pac == PMAP_ACTION_RETRY_RELOCK) {
					LOCK_PVH(ppn_to_pai(*ppnp));
					pmap_phys_attributes[ppn_to_pai(*ppnp)] |= (PHYS_MODIFIED | PHYS_REFERENCED);
					goto pmap_pv_remove_retry;
				}
				else if (pac == PMAP_ACTION_RETRY) {
					goto pmap_pv_remove_retry;
				}
				else if (pac == PMAP_ACTION_IGNORE) {
					goto pmap_pv_remove_exit;
				}
			}
		}
		pmap_pv_hashlist_cnts += pv_cnt;
		if (pmap_pv_hashlist_max < pv_cnt)
			pmap_pv_hashlist_max = pv_cnt;
		*pprevh = pvh_e->nexth;
		remque(&pvh_e->qlink);
		UNLOCK_PV_HASH(pvhash_idx);
	}
pmap_pv_remove_exit:
	return pvh_e;
}

#endif /* MACH_KERNEL_PRIVATE */
