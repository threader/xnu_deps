/*
 * Copyright (c) 2000 Apple Computer, Inc. All rights reserved.
 *
 * @APPLE_LICENSE_HEADER_START@
 * 
 * The contents of this file constitute Original Code as defined in and
 * are subject to the Apple Public Source License Version 1.1 (the
 * "License").  You may not use this file except in compliance with the
 * License.  Please obtain a copy of the License at
 * http://www.apple.com/publicsource and read it before using this file.
 * 
 * This Original Code and all software distributed under the License are
 * distributed on an "AS IS" basis, WITHOUT WARRANTY OF ANY KIND, EITHER
 * EXPRESS OR IMPLIED, AND APPLE HEREBY DISCLAIMS ALL SUCH WARRANTIES,
 * INCLUDING WITHOUT LIMITATION, ANY WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE OR NON-INFRINGEMENT.  Please see the
 * License for the specific language governing rights and limitations
 * under the License.
 * 
 * @APPLE_LICENSE_HEADER_END@
 */
#include <mach/mach_types.h>
#include <mach/vm_attributes.h>
#include <mach/vm_param.h>
#include <libsa/types.h>

#include <vm/vm_map.h>
#include <i386/pmap.h>

#include <kdp/kdp_core.h>
#include <kdp/kdp_internal.h>
#include <mach-o/loader.h>
#include <mach/vm_map.h>
#include <mach/vm_statistics.h>
#include <mach/thread_status.h>
#include <i386/thread.h>

#include <vm/vm_protos.h>
#include <vm/vm_kern.h>

unsigned kdp_vm_read( caddr_t, caddr_t, unsigned);
unsigned kdp_vm_write( caddr_t, caddr_t, unsigned);

boolean_t kdp_trans_off = 0;
uint32_t kdp_src_high32 = 0;
extern pmap_paddr_t avail_start, avail_end;

extern void bcopy_phys(addr64_t from, addr64_t to, int size);
static addr64_t kdp_vtophys(pmap_t pmap, addr64_t va);

pmap_t kdp_pmap = 0;

unsigned int not_in_kdp = 1; /* Cleared when we begin to access vm functions in kdp */

extern vm_offset_t sectTEXTB, sectDATAB, sectLINKB, sectPRELINKB;
extern int sectSizeTEXT, sectSizeDATA, sectSizeLINK, sectSizePRELINK;

int	kern_dump(void);
int	kdp_dump_trap(int type, x86_saved_state32_t *regs);

typedef struct {
	int	flavor;			/* the number for this flavor */
	mach_msg_type_number_t	count;	/* count of ints in this flavor */
} mythread_state_flavor_t;

static mythread_state_flavor_t thread_flavor_array [] = { 
	{x86_THREAD_STATE32, x86_THREAD_STATE32_COUNT}
};

static int kdp_mynum_flavors = 1;
static int MAX_TSTATE_FLAVORS = 1;

typedef struct {
	vm_offset_t header; 
	int  hoffset;
	mythread_state_flavor_t *flavors;
	int tstate_size;
} tir_t;

char command_buffer[512];

static addr64_t
kdp_vtophys(
	pmap_t pmap,
	addr64_t va)
{
	addr64_t    pa;
	ppnum_t pp;
/* Clear high 32 - pmap_find_phys() may panic() otherwise */
	va &= 0xFFFFFFFFULL;
	pp = pmap_find_phys(pmap, va);
	if(!pp) return 0;
	
	pa = ((addr64_t)pp << 12) | (va & 0x0000000000000FFFULL);
	return(pa);
}

/*
 *
 */
unsigned kdp_vm_read(
	caddr_t src, 
	caddr_t dst, 
	unsigned len)
{
	addr64_t cur_virt_src = (addr64_t)((unsigned int)src | (((uint64_t)kdp_src_high32) << 32));
	addr64_t cur_virt_dst = (addr64_t)((unsigned int)dst);
	addr64_t cur_phys_dst, cur_phys_src;
	unsigned resid = len;
	unsigned cnt = 0;
	pmap_t src_pmap = kernel_pmap;

/* If a different pmap has been specified with kdp_pmap, use it to translate the
 * source (cur_virt_src); otherwise, the source is translated using the
 * kernel_pmap.
 */
	if (kdp_pmap)
		src_pmap = kdp_pmap;

	while (resid != 0) {
/* Translate, unless kdp_trans_off is set */
		if (!kdp_trans_off) {
			if (!(cur_phys_src = kdp_vtophys(src_pmap,
				    cur_virt_src)))
				goto exit;
		}
		else
			cur_phys_src = cur_virt_src;

/* Always translate the destination buffer using the kernel_pmap */
		if(!(cur_phys_dst = kdp_vtophys(kernel_pmap, cur_virt_dst)))
			goto exit;

		/* Validate physical page numbers when performing a crashdump */
		if (not_in_kdp == 0)
			if (!pmap_valid_page(i386_btop(cur_phys_dst)) || !pmap_valid_page(i386_btop(cur_phys_src)))
				goto exit;

/* Get length left on page */
		cnt = PAGE_SIZE - (cur_phys_src & PAGE_MASK);
		if (cnt > (PAGE_SIZE - (cur_phys_dst & PAGE_MASK)))
			cnt = PAGE_SIZE - (cur_phys_dst & PAGE_MASK);
		if (cnt > resid)
			cnt = resid;

/* Do a physical copy */
		bcopy_phys(cur_phys_src, cur_phys_dst, cnt);

		cur_virt_src += cnt;
		cur_virt_dst += cnt;
		resid -= cnt;
	}
exit:
	return (len - resid);
}

/*
 * 
 */
unsigned kdp_vm_write(
        caddr_t src,
        caddr_t dst,
        unsigned len)
{       
	addr64_t cur_virt_src, cur_virt_dst;
	addr64_t cur_phys_src, cur_phys_dst;
	unsigned resid, cnt, cnt_src, cnt_dst;

#ifdef KDP_VM_WRITE_DEBUG
	printf("kdp_vm_write: src %x dst %x len %x - %08X %08X\n", src, dst, len, ((unsigned long *)src)[0], ((unsigned long *)src)[1]);
#endif

	cur_virt_src = (addr64_t)((unsigned int)src);
	cur_virt_dst = (addr64_t)((unsigned int)dst);

	resid = len;

	while (resid != 0) {
		if ((cur_phys_dst = kdp_vtophys(kernel_pmap, cur_virt_dst)) == 0) 
			goto exit;

		if ((cur_phys_src = kdp_vtophys(kernel_pmap, cur_virt_src)) == 0) 
			goto exit;

		cnt_src = ((cur_phys_src + PAGE_SIZE) & (PAGE_MASK)) - cur_phys_src;
		cnt_dst = ((cur_phys_dst + PAGE_SIZE) & (PAGE_MASK)) - cur_phys_dst;

		if (cnt_src > cnt_dst)
			cnt = cnt_dst;
		else
			cnt = cnt_src;
		if (cnt > resid) 
			cnt = resid;

		bcopy_phys(cur_phys_src, cur_phys_dst, cnt);		/* Copy stuff over */

		cur_virt_src +=cnt;
		cur_virt_dst +=cnt;
		resid -= cnt;
	}
exit:
	return (len - resid);
}

static void
kern_collectth_state(thread_t thread, tir_t *t)
{
	vm_offset_t	header;
	int  hoffset, i ;
	mythread_state_flavor_t *flavors;
	struct thread_command	*tc;
	/*
	 *	Fill in thread command structure.
	 */
	header = t->header;
	hoffset = t->hoffset;
	flavors = t->flavors;
	
	tc = (struct thread_command *) (header + hoffset);
	tc->cmd = LC_THREAD;
	tc->cmdsize = sizeof(struct thread_command) + t->tstate_size;
	hoffset += sizeof(struct thread_command);
	/*
	 * Follow with a struct thread_state_flavor and
	 * the appropriate thread state struct for each
	 * thread state flavor.
	 */
	for (i = 0; i < kdp_mynum_flavors; i++) {
		*(mythread_state_flavor_t *)(header+hoffset) =
		    flavors[i];
		hoffset += sizeof(mythread_state_flavor_t);
		/* Locate and obtain the non-volatile register context
		 * for this kernel thread. This should ideally be
		 * encapsulated in machine_thread_get_kern_state()
		 * but that routine appears to have been co-opted
		 * by CHUD to obtain pre-interrupt state.
		 */
		if (flavors[i].flavor == x86_THREAD_STATE32) {
			x86_thread_state32_t *tstate = (x86_thread_state32_t *) (header + hoffset);
			vm_offset_t kstack;
			bzero(tstate, x86_THREAD_STATE32_COUNT * sizeof(int));
			if ((kstack = thread->kernel_stack) != 0){
				struct x86_kernel_state32 *iks = STACK_IKS(kstack);
				tstate->ebx = iks->k_ebx;
				tstate->esp = iks->k_esp;
				tstate->ebp = iks->k_ebp;
				tstate->edi = iks->k_edi;
				tstate->esi = iks->k_esi;
				tstate->eip = iks->k_eip;
		}
		}
		else if (machine_thread_get_kern_state(thread,
			flavors[i].flavor, (thread_state_t) (header+hoffset),
			&flavors[i].count) != KERN_SUCCESS)
			printf ("Failure in machine_thread_get_kern_state()\n");
		hoffset += flavors[i].count*sizeof(int);
	}

	t->hoffset = hoffset;
}

/* Intended to be called from the kernel trap handler if an unrecoverable fault
 * occurs during a crashdump (which shouldn't happen since we validate mappings
 * and so on). This should be reworked to attempt some form of recovery.
 */
int
kdp_dump_trap(
	int type,
	__unused x86_saved_state32_t	*saved_state)
{
	printf ("An unexpected trap (type %d) occurred during the system dump, terminating.\n", type);
	kdp_send_crashdump_pkt (KDP_EOF, NULL, 0, ((void *) 0));
	abort_panic_transfer();
	kdp_flag &= ~KDP_PANIC_DUMP_ENABLED;
	kdp_flag &= ~PANIC_CORE_ON_NMI;
	kdp_flag &= ~PANIC_LOG_DUMP;

	kdp_reset();

	kdp_raise_exception(EXC_BAD_ACCESS, 0, 0, kdp.saved_state);
	return( 0 );
}

int
kern_dump(void)
{
	vm_map_t	map;
	unsigned int	thread_count, segment_count;
	unsigned int	command_size = 0, header_size = 0, tstate_size = 0;
	unsigned int	hoffset = 0, foffset = 0, nfoffset = 0,  vmoffset = 0;
	unsigned int	max_header_size = 0;
	vm_offset_t	header;
	struct mach_header	*mh;
	struct segment_command	*sc;
	vm_size_t	size;
	vm_prot_t	prot = 0;
	vm_prot_t	maxprot = 0;
	vm_inherit_t	inherit = 0;
	mythread_state_flavor_t flavors[MAX_TSTATE_FLAVORS];
	vm_size_t	nflavors;
	vm_size_t	i;
	uint32_t	nesting_depth = 0;
	kern_return_t	kret = 0;
	struct vm_region_submap_info_64	vbr;
	mach_msg_type_number_t	vbrcount  = 0;
	tir_t tir1;

	int error = 0;
	int panic_error = 0;
	unsigned int txstart = 0;
	unsigned int mach_section_count = 4;
	unsigned int num_sects_txed = 0;

	map = kernel_map;

	not_in_kdp = 0; /* Signal vm functions not to acquire locks */

	thread_count = 1;
	segment_count = get_vmmap_entries(map); 
  
	printf("Kernel map has %d entries\n", segment_count);

	nflavors = kdp_mynum_flavors;
	bcopy((char *)thread_flavor_array,(char *) flavors,sizeof(thread_flavor_array));

	for (i = 0; i < nflavors; i++)
		tstate_size += sizeof(mythread_state_flavor_t) +
		    (flavors[i].count * sizeof(int));

	command_size = (segment_count + mach_section_count) *
	    sizeof(struct segment_command) +
	    thread_count * sizeof(struct thread_command) +
	    tstate_size * thread_count;

	header_size = command_size + sizeof(struct mach_header);
	header = (vm_offset_t) command_buffer;
	
	/*
	 *	Set up Mach-O header for currently executing 32 bit kernel.
	 */
	printf ("Generated Mach-O header size was %d\n", header_size);

	mh = (struct mach_header *) header;
	mh->magic = MH_MAGIC;
	mh->cputype = cpu_type();
	mh->cpusubtype = cpu_subtype();
	mh->filetype = MH_CORE;
	mh->ncmds = segment_count + thread_count + mach_section_count;
	mh->sizeofcmds = command_size;
	mh->flags = 0;

	hoffset = sizeof(struct mach_header);	/* offset into header */
	foffset = round_page_32(header_size);	/* offset into file */
	/* Padding */
	if ((foffset - header_size) < (4*sizeof(struct segment_command))) {
		foffset += ((4*sizeof(struct segment_command)) - (foffset-header_size)); 
	}

	max_header_size = foffset;

	vmoffset = VM_MIN_ADDRESS;		/* offset into VM */

	/* Transmit the Mach-O MH_CORE header, and seek forward past the 
	 * area reserved for the segment and thread commands 
	 * to begin data transmission 
	 */

	if ((panic_error = kdp_send_crashdump_pkt (KDP_SEEK, NULL, sizeof(nfoffset) , &nfoffset)) < 0) { 
		printf ("kdp_send_crashdump_pkt failed with error %d\n", panic_error);
		error = panic_error;
		goto out;
	} 

	if ((panic_error = kdp_send_crashdump_data (KDP_DATA, NULL, sizeof(struct mach_header), (caddr_t) mh) < 0)) {
		printf ("kdp_send_crashdump_data failed with error %d\n", panic_error);
		error = panic_error;
		goto out;
	}

	if ((panic_error = kdp_send_crashdump_pkt (KDP_SEEK, NULL, sizeof(foffset) , &foffset) < 0)) {
		printf ("kdp_send_crashdump_pkt failed with error %d\n", panic_error);
		error = panic_error;
		goto out;
	}
	printf ("Transmitting kernel state, please wait: ");

	while ((segment_count > 0) || (kret == KERN_SUCCESS)){
		/* Check if we've transmitted all the kernel sections */
		if (num_sects_txed == mach_section_count) {

			while (1) {

				/*
				 *	Get region information for next region.
				 */

				vbrcount = VM_REGION_SUBMAP_INFO_COUNT_64;
				if((kret = vm_region_recurse_64(map, 
					    &vmoffset, &size, &nesting_depth, 
					    (vm_region_recurse_info_t)&vbr,
					    &vbrcount)) != KERN_SUCCESS) {
					break;
				}

				if(vbr.is_submap) {
					nesting_depth++;
					continue;
				} else {
					break;
				}
			}

			if(kret != KERN_SUCCESS)
				break;

			prot = vbr.protection;
			maxprot = vbr.max_protection;
			inherit = vbr.inheritance;
		}
		else
		{
			switch (num_sects_txed) {
			case 0:
				/* Transmit the kernel text section */
				vmoffset = sectTEXTB;
				size = sectSizeTEXT;
				break;
			case 1:
				vmoffset = sectDATAB;
				size = sectSizeDATA;
				break;
			case 2:
				vmoffset = sectPRELINKB;
				size = sectSizePRELINK;
				break;
			case 3:
				vmoffset = sectLINKB;
				size = sectSizeLINK;
				break;
			}
			num_sects_txed++;
		}
		/*
		 *	Fill in segment command structure.
		 */
    
		if (hoffset > max_header_size)
			break;
		sc = (struct segment_command *) (header);
		sc->cmd = LC_SEGMENT;
		sc->cmdsize = sizeof(struct segment_command);
		sc->segname[0] = 0;
		sc->vmaddr = vmoffset;
		sc->vmsize = size;
		sc->fileoff = foffset;
		sc->filesize = size;
		sc->maxprot = maxprot;
		sc->initprot = prot;
		sc->nsects = 0;

		if ((panic_error = kdp_send_crashdump_pkt (KDP_SEEK, NULL, sizeof(hoffset) , &hoffset)) < 0) { 
			printf ("kdp_send_crashdump_pkt failed with error %d\n", panic_error);
			error = panic_error;
			goto out;
		} 
    
		if ((panic_error = kdp_send_crashdump_data (KDP_DATA, NULL, sizeof(struct segment_command) , (caddr_t) sc)) < 0) {
			printf ("kdp_send_crashdump_data failed with error %d\n", panic_error);
			error = panic_error;
			goto out;
		}

		/* Do not transmit memory tagged VM_MEMORY_IOKIT - instead,
		 * seek past that region on the server - this creates a
		 * hole in the file.
		 */

		if ((vbr.user_tag != VM_MEMORY_IOKIT)) {
      
			if ((panic_error = kdp_send_crashdump_pkt (KDP_SEEK, NULL, sizeof(foffset) , &foffset)) < 0) {
				printf ("kdp_send_crashdump_pkt failed with error %d\n", panic_error);
				error = panic_error;
				goto out;
			}

			txstart = vmoffset;

			if ((panic_error = kdp_send_crashdump_data (KDP_DATA, NULL, size, (caddr_t) txstart)) < 0)	{
				printf ("kdp_send_crashdump_data failed with error %d\n", panic_error);
				error = panic_error;
				goto out;
			}
		}

		hoffset += sizeof(struct segment_command);
		foffset += size;
		vmoffset += size;
		segment_count--;
	}
	tir1.header = header;
	tir1.hoffset = 0;
	tir1.flavors = flavors;
	tir1.tstate_size = tstate_size;

	/* Now send out the LC_THREAD load command, with the thread information
	 * for the current activation.
	 * Note that the corefile can contain LC_SEGMENT commands with file
	 * offsets that point past the edge of the corefile, in the event that
	 * the last N VM regions were all I/O mapped or otherwise
	 * non-transferable memory,  not followed by a normal VM region;
	 * i.e. there will be no hole that reaches to the end of the core file.
	 */
	kern_collectth_state (current_thread(), &tir1);

	if ((panic_error = kdp_send_crashdump_pkt (KDP_SEEK, NULL, sizeof(hoffset) , &hoffset)) < 0) { 
		printf ("kdp_send_crashdump_pkt failed with error %d\n", panic_error);
		error = panic_error;
		goto out;
	}
  
	if ((panic_error = kdp_send_crashdump_data (KDP_DATA, NULL, tir1.hoffset , (caddr_t) header)) < 0) {
		printf ("kdp_send_crashdump_data failed with error %d\n", panic_error);
		error = panic_error;
		goto out;
	}
    
	/* last packet */
	if ((panic_error = kdp_send_crashdump_pkt (KDP_EOF, NULL, 0, ((void *) 0))) < 0)
	{
		printf ("kdp_send_crashdump_pkt failed with error %d\n", panic_error);
		error = panic_error;
		goto out;
	}
out:
	return (error);
}
