/*
 * Copyright (c) 2000-2005 Apple Computer, Inc. All rights reserved.
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
/* Copyright (c) 1995 NeXT Computer, Inc. All Rights Reserved */
/*
 * Copyright (c) 1989, 1993
 *	The Regents of the University of California.  All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 * 3. All advertising materials mentioning features or use of this software
 *    must display the following acknowledgement:
 *	This product includes software developed by the University of
 *	California, Berkeley and its contributors.
 * 4. Neither the name of the University nor the names of its contributors
 *    may be used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE REGENTS AND CONTRIBUTORS ``AS IS'' AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE REGENTS OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
 * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 *
 *	@(#)vnode.h	8.17 (Berkeley) 5/20/95
 */
 
#ifndef _SYS_VNODE_INTERNAL_H_
#define _SYS_VNODE_INTERNAL_H_

#define INTERIM_FSNODE_LOCK	1

#include <sys/appleapiopts.h>
#include <sys/cdefs.h>
#include <sys/queue.h>
#include <sys/lock.h>

#include <sys/time.h>
#include <sys/uio.h>

#include <sys/vm.h>
#include <sys/systm.h>
#include <kern/locks.h>
#include <vm/vm_kern.h>
#include <sys/vnode.h>
#include <sys/namei.h>
#include <sys/vfs_context.h>


struct lockf;

LIST_HEAD(buflists, buf);


struct unsafe_fsnode {
	lck_mtx_t fsnodelock;
	int32_t	  fsnode_count;
	void *	  fsnodeowner;
};

/*
 * Reading or writing any of these items requires holding the appropriate lock.
 * v_freelist is locked by the global vnode_list_lock
 * v_mntvnodes is locked by the mount_lock
 * v_nclinks and v_ncchildren are protected by the global name_cache_lock
 * v_cleanblkhd and v_dirtyblkhd and v_iterblkflags are locked via the global buf_mtxp
 * the rest of the structure is protected by the vnode_lock
 */
struct vnode {
	lck_mtx_t v_lock;			/* vnode mutex */
	TAILQ_ENTRY(vnode) v_freelist;		/* vnode freelist */
	TAILQ_ENTRY(vnode) v_mntvnodes;		/* vnodes for mount point */
        LIST_HEAD(, namecache) v_nclinks;	/* name cache entries that name this vnode */
        LIST_HEAD(, namecache) v_ncchildren;	/* name cache entries that regard us as there parent */
        vnode_t	 v_defer_reclaimlist;		/* in case we have to defer the reclaim to avoid recursion */
	u_long	 v_flag;			/* vnode flags (see below) */
	u_short	 v_lflag;			/* vnode local and named ref flags */
	u_char	 v_iterblkflags;		/* buf iterator flags */
        u_char	 v_references;			/* number of times io_count has been granted */
	int32_t	 v_kusecount;			/* count of in-kernel refs */
	int32_t	 v_usecount;			/* reference count of users */
	int32_t	 v_iocount;			/* iocounters */
	void *   v_owner;			/* act that owns the vnode */
	enum vtype v_type;			/* vnode type */
	u_long	 v_id;				/* identity of vnode contents */
	union {
		struct mount	*vu_mountedhere;/* ptr to mounted vfs (VDIR) */
		struct socket	*vu_socket;	/* unix ipc (VSOCK) */
		struct specinfo	*vu_specinfo;	/* device (VCHR, VBLK) */
		struct fifoinfo	*vu_fifoinfo;	/* fifo (VFIFO) */
	        struct ubc_info *vu_ubcinfo;	/* valid for (VREG) */
	} v_un;
	struct	buflists v_cleanblkhd;		/* clean blocklist head */
	struct	buflists v_dirtyblkhd;		/* dirty blocklist head */
        kauth_cred_t v_cred;
        int	v_cred_timestamp;
	long	v_numoutput;			/* num of writes in progress */
	long	v_writecount;			/* reference count of writers */
	char *	v_name;				/* name component of the vnode */
	vnode_t v_parent;			/* pointer to parent vnode */
#ifdef INTERIM_FSNODE_LOCK
	struct lockf	*v_lockf;		/* advisory lock list head */
        struct unsafe_fsnode *v_unsafefs;	/* pointer to struct used to lock */
#endif						/* vnodes on unsafe filesystems */
	int 	(**v_op)(void *);		/* vnode operations vector */
	enum vtagtype v_tag;			/* type of underlying data */
	mount_t v_mount;			/* ptr to vfs we are in */
	void *	v_data;				/* private data for fs */
};

#define	v_mountedhere	v_un.vu_mountedhere
#define	v_socket	v_un.vu_socket
#define	v_specinfo	v_un.vu_specinfo
#define	v_fifoinfo	v_un.vu_fifoinfo
#define v_ubcinfo	v_un.vu_ubcinfo


/*
 * v_iterblkflags
 */
#define VBI_ITER		0x1
#define VBI_ITERWANT		0x2
#define VBI_CLEAN		0x4
#define VBI_DIRTY		0x8
#define VBI_NEWBUF		0x10


/*
 * v_lflags
 */
#define	VL_SUSPENDED 	0x0001		/* vnode is suspended */
#define	VL_DRAIN	0x0002		/* vnode is being drained */
#define	VL_TERMINATE	0x0004		/* vnode is marked for termination */
#define	VL_TERMWANT	0x0008		/* vnode is marked for termination */
#define	VL_DEAD		0x0010		/* vnode is dead and completed recycle */
#define	VL_MARKTERM	0x0020		/* vnode is dead and completed recycle */
#define	VL_MOUNTDEAD	0x0040		/* v_moutnedhere is dead   */
#define VL_NEEDINACTIVE	0x0080		/* delay VNOP_INACTIVE until iocount goes to 0 */

#define	VNAMED_UBC	0x2000		/* ubc named reference */
#define VNAMED_MOUNT	0x4000		/* mount point named reference */
#define	VNAMED_FSHASH	0x8000		/* FS hash named reference */


/*
 * v_flags
 */
#define	VROOT		0x000001	/* root of its file system */
#define	VTEXT		0x000002	/* vnode is a pure text prototype */
#define	VSYSTEM		0x000004	/* vnode being used by kernel */
#define	VISTTY		0x000008	/* vnode represents a tty */
#define	VWASMAPPED	0x000010	/* vnode was mapped before */
#define	VTERMINATE	0x000020	/* terminating memory object */
#define	VTERMWANT	0x000040	/* wating for memory object death */
#define	VMOUNT		0x000080	/* mount operation in progress */
#define	VBWAIT		0x000100	/* waiting for output to complete */
#define	VALIASED	0x000200	/* vnode has an alias */
#define	VNOCACHE_DATA	0x000400	/* don't keep data cached once it's been consumed */
#define	VSTANDARD	0x000800	/* vnode obtained from common pool */
#define	VAGE		0x001000	/* Insert vnode at head of free list */
#define	VRAOFF		0x002000	/* read ahead disabled */
#define	VNCACHEABLE	0x004000	/* vnode is allowed to be put back in name cache */
#define	VUINACTIVE	0x008000	/* UBC vnode is on inactive list */
#define	VSWAP		0x010000	/* vnode is being used as swapfile */
#define	VTHROTTLED	0x020000	/* writes or pageouts have been throttled */
		/* wakeup tasks waiting when count falls below threshold */
#define	VNOFLUSH	0x040000	/* don't vflush() if SKIPSYSTEM */
#define	VLOCKLOCAL	0x080000	/* this vnode does adv locking in vfs */
#define	VISHARDLINK	0x100000	/* hard link needs special processing on lookup and in volfs */

#define VCRED_EXPIRED	2		/* number of seconds to keep cached credential valid */


/*
 * Global vnode data.
 */
extern	struct vnode *rootvnode;	/* root (i.e. "/") vnode */


/*
 * Mods for exensibility.
 */

/*
 * Flags for vdesc_flags:
 */
#define VDESC_MAX_VPS		16
/* Low order 16 flag bits are reserved for willrele flags for vp arguments. */
#define VDESC_VP0_WILLRELE	0x0001
#define VDESC_VP1_WILLRELE	0x0002
#define VDESC_VP2_WILLRELE	0x0004
#define VDESC_VP3_WILLRELE	0x0008
#define VDESC_NOMAP_VPP		0x0100
#define VDESC_VPP_WILLRELE	0x0200

/*
 * VDESC_NO_OFFSET is used to identify the end of the offset list
 * and in places where no such field exists.
 */
#define VDESC_NO_OFFSET -1

/*
 * This structure describes the vnode operation taking place.
 */
struct vnodeop_desc {
	int	vdesc_offset;		/* offset in vector--first for speed */
	char    *vdesc_name;		/* a readable name for debugging */
	int	vdesc_flags;		/* VDESC_* flags */

	/*
	 * These ops are used by bypass routines to map and locate arguments.
	 * Creds and procs are not needed in bypass routines, but sometimes
	 * they are useful to (for example) transport layers.
	 * Nameidata is useful because it has a cred in it.
	 */
	int	*vdesc_vp_offsets;	/* list ended by VDESC_NO_OFFSET */
	int	vdesc_vpp_offset;	/* return vpp location */
	int	vdesc_cred_offset;	/* cred location, if any */
	int	vdesc_proc_offset;	/* proc location, if any */
	int	vdesc_componentname_offset; /* if any */
	int	vdesc_context_offset;	/* context location, if any */
	/*
	 * Finally, we've got a list of private data (about each operation)
	 * for each transport layer.  (Support to manage this list is not
	 * yet part of BSD.)
	 */
	caddr_t	*vdesc_transports;
};

/*
 * A list of all the operation descs.
 */
extern struct vnodeop_desc *vnodeop_descs[];

/*
 * Interlock for scanning list of vnodes attached to a mountpoint
 */
extern void * mntvnode_slock;

/*
 * This macro is very helpful in defining those offsets in the vdesc struct.
 *
 * This is stolen from X11R4.  I ingored all the fancy stuff for
 * Crays, so if you decide to port this to such a serious machine,
 * you might want to consult Intrisics.h's XtOffset{,Of,To}.
 */
#define VOPARG_OFFSET(p_type,field) \
        ((int) (((char *) (&(((p_type)NULL)->field))) - ((char *) NULL)))
#define VOPARG_OFFSETOF(s_type,field) \
	VOPARG_OFFSET(s_type*,field)
#define VOPARG_OFFSETTO(S_TYPE,S_OFFSET,STRUCT_P) \
	((S_TYPE)(((char*)(STRUCT_P))+(S_OFFSET)))



/*
 * VOCALL calls an op given an ops vector.  We break it out because BSD's
 * vclean changes the ops vector and then wants to call ops with the old
 * vector.
 */
#define VOCALL(OPSV,OFF,AP) (( *((OPSV)[(OFF)])) (AP))

/*
 * This call works for vnodes in the kernel.
 */
#define VCALL(VP,OFF,AP) VOCALL((VP)->v_op,(OFF),(AP))
#define VDESC(OP) (& __CONCAT(OP,_desc))
#define VOFFSET(OP) (VDESC(OP)->vdesc_offset)

struct ostat;

int	build_path(vnode_t first_vp, char *buff, int buflen, int *outlen);
int 	bdevvp(dev_t dev, struct vnode **vpp);
void	cvtstat(struct stat *st, struct ostat *ost);
void	vprint(const char *label, struct vnode *vp);


__private_extern__ int is_package_name(char *name, int len);
__private_extern__ int set_package_extensions_table(void *data, int nentries, int maxwidth);
int 	vn_rdwr(enum uio_rw rw, struct vnode *vp, caddr_t base,
	    		int len, off_t offset, enum uio_seg segflg, int ioflg,
	    		struct ucred *cred, int *aresid, struct proc *p);
int 	vn_rdwr_64(enum uio_rw rw, struct vnode *vp, uint64_t base,
	    		int64_t len, off_t offset, enum uio_seg segflg,
			int ioflg, struct ucred *cred, int *aresid,
			struct proc *p);
void	fifo_printinfo(struct vnode *vp);
int	vn_lock(struct vnode *vp, int flags, struct proc *p);
int 	vn_open(struct nameidata *ndp, int fmode, int cmode);
int	vn_open_modflags(struct nameidata *ndp, int *fmode, int cmode);
int	vn_open_auth(struct nameidata *ndp, int *fmode, struct vnode_attr *);
int 	vn_close(vnode_t, int flags, struct ucred *cred, struct proc *p);

#define VN_CREATE_NOAUTH		(1<<0)
#define VN_CREATE_NOINHERIT		(1<<1)
errno_t vn_create(vnode_t, vnode_t *, struct componentname *, struct vnode_attr *, int flags, vfs_context_t);


int	vn_getxattr(vnode_t, const char *, uio_t, size_t *, int, vfs_context_t);
int	vn_setxattr(vnode_t, const char *, uio_t, int, vfs_context_t);
int	vn_removexattr(vnode_t, const char *, int, vfs_context_t);
int	vn_listxattr(vnode_t, uio_t, size_t *, int, vfs_context_t);

void	name_cache_lock_shared(void);
void	name_cache_lock(void);
void	name_cache_unlock(void);

char *	vnode_getname(vnode_t vp);
void	vnode_putname(char *name);

vnode_t	vnode_getparent(vnode_t vp);

int vn_pathconf(vnode_t, int, register_t *, vfs_context_t);

void	vnode_list_lock(void);
void	vnode_list_unlock(void);
int	vnode_ref_ext(vnode_t, int);
void	vnode_rele_ext(vnode_t, int, int);
void	vnode_rele_internal(vnode_t, int, int, int);
int	vnode_getwithref(vnode_t);
int	vnode_put_locked(vnode_t);

int	vnode_issock(vnode_t);

void	unlock_fsnode(vnode_t, int *);
int	lock_fsnode(vnode_t, int *);

errno_t	vnode_resume(vnode_t);

errno_t	vnode_size(vnode_t, off_t *, vfs_context_t);
errno_t	vnode_setsize(vnode_t, off_t, int ioflag, vfs_context_t);
int	vnode_setattr_fallback(vnode_t vp, struct vnode_attr *vap, vfs_context_t ctx);

void SPECHASH_LOCK(void);
void SPECHASH_UNLOCK(void);

int check_cdevmounted(dev_t, enum vtype, int *);

void	vnode_authorize_init(void);

#endif /* !_SYS_VNODE_INTERNAL_H_ */
