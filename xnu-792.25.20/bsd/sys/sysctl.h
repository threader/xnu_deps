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
 * This code is derived from software contributed to Berkeley by
 * Mike Karels at Berkeley Software Design, Inc.
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
 *	@(#)sysctl.h	8.1 (Berkeley) 6/2/93
 */

#ifndef _SYS_SYSCTL_H_
#define	_SYS_SYSCTL_H_

/*
 * These are for the eproc structure defined below.
 */
#include <sys/cdefs.h>

#include <sys/appleapiopts.h>
#ifndef KERNEL
#include <sys/time.h>
#include <sys/ucred.h>
#else
#include <libkern/sysctl.h>
#endif
#include <sys/proc.h>
#include <sys/vm.h>

#ifdef BSD_KERNEL_PRIVATE
#include <sys/linker_set.h>
#endif

/*
 * Definitions for sysctl call.  The sysctl call uses a hierarchical name
 * for objects that can be examined or modified.  The name is expressed as
 * a sequence of integers.  Like a file path name, the meaning of each
 * component depends on its place in the hierarchy.  The top-level and kern
 * identifiers are defined here, and other identifiers are defined in the
 * respective subsystem header files.
 */

#define CTL_MAXNAME	12	/* largest number of components supported */

/*
 * Each subsystem defined by sysctl defines a list of variables
 * for that subsystem. Each name is either a node with further 
 * levels defined below it, or it is a leaf of some particular
 * type given below. Each sysctl level defines a set of name/type
 * pairs to be used by sysctl(1) in manipulating the subsystem.
 */
struct ctlname {
	char	*ctl_name;	/* subsystem name */
	int	ctl_type;	/* type of name */
};

#define CTLTYPE		0xf	/* Mask for the type */
#define	CTLTYPE_NODE	1	/* name is a node */
#define	CTLTYPE_INT	2	/* name describes an integer */
#define	CTLTYPE_STRING	3	/* name describes a string */
#define	CTLTYPE_QUAD	4	/* name describes a 64-bit number */
#define	CTLTYPE_OPAQUE	5	/* name describes a structure */
#define	CTLTYPE_STRUCT	CTLTYPE_OPAQUE	/* name describes a structure */

#define CTLFLAG_RD	0x80000000	/* Allow reads of variable */
#define CTLFLAG_WR	0x40000000	/* Allow writes to the variable */
#define CTLFLAG_RW	(CTLFLAG_RD|CTLFLAG_WR)
#define CTLFLAG_NOLOCK	0x20000000	/* XXX Don't Lock */
#define CTLFLAG_ANYBODY	0x10000000	/* All users can set this var */
#define CTLFLAG_SECURE	0x08000000	/* Permit set only if securelevel<=0 */
#define CTLFLAG_MASKED	0x04000000	/* deprecated variable, do not display */
#define CTLFLAG_NOAUTO	0x02000000	/* do not auto-register */
#define CTLFLAG_KERN	0x01000000	/* valid inside the kernel */

/*
 * USE THIS instead of a hardwired number from the categories below
 * to get dynamically assigned sysctl entries using the linker-set
 * technology. This is the way nearly all new sysctl variables should
 * be implemented.
 * e.g. SYSCTL_INT(_parent, OID_AUTO, name, CTLFLAG_RW, &variable, 0, "");
 */ 
#define OID_AUTO	(-1)

#ifdef KERNEL
#define SYSCTL_HANDLER_ARGS (struct sysctl_oid *oidp, void *arg1, int arg2, \
	struct sysctl_req *req)

/*
 * This describes the access space for a sysctl request.  This is needed
 * so that we can use the interface from the kernel or from user-space.
 */
struct sysctl_req {
	struct proc	*p;
	int         lock;
	user_addr_t oldptr;
	size_t		oldlen;
	size_t		oldidx;
	int		    (*oldfunc)(struct sysctl_req *, const void *, size_t);
	user_addr_t newptr;
	size_t		newlen;
	size_t		newidx;
	int		    (*newfunc)(struct sysctl_req *, void *, size_t);
};

SLIST_HEAD(sysctl_oid_list, sysctl_oid);

/*
 * This describes one "oid" in the MIB tree.  Potentially more nodes can
 * be hidden behind it, expanded by the handler.
 */
struct sysctl_oid {
	struct sysctl_oid_list *oid_parent;
	SLIST_ENTRY(sysctl_oid) oid_link;
	int		oid_number;
	int		oid_kind;
	void		*oid_arg1;
	int		oid_arg2;
	const char	*oid_name;
	int 		(*oid_handler) SYSCTL_HANDLER_ARGS;
	const char	*oid_fmt;
};

#define SYSCTL_IN(r, p, l) (r->newfunc)(r, p, l)
#define SYSCTL_OUT(r, p, l) (r->oldfunc)(r, p, l)

__BEGIN_DECLS

int sysctl_handle_int SYSCTL_HANDLER_ARGS;
int sysctl_handle_long SYSCTL_HANDLER_ARGS;
int sysctl_handle_quad SYSCTL_HANDLER_ARGS;
int sysctl_handle_int2quad SYSCTL_HANDLER_ARGS;
/*int sysctl_handle_intptr SYSCTL_HANDLER_ARGS; XXX not implemented */
int sysctl_handle_string SYSCTL_HANDLER_ARGS;
int sysctl_handle_opaque SYSCTL_HANDLER_ARGS;

/*
 * These functions are used to add/remove an oid from the mib.
 */
void sysctl_register_oid(struct sysctl_oid *oidp);
void sysctl_unregister_oid(struct sysctl_oid *oidp);

__END_DECLS

/* Declare an oid to allow child oids to be added to it. */
#define SYSCTL_DECL(name)					\
	extern struct sysctl_oid_list sysctl_##name##_children

/* This constructs a "raw" MIB oid. */
#define SYSCTL_OID(parent, nbr, name, kind, a1, a2, handler, fmt, descr) \
	struct sysctl_oid sysctl_##parent##_##name = {		 \
		&sysctl_##parent##_children, { 0 },			 \
		nbr, kind, a1, a2, #name, handler, fmt };


/* This constructs a node from which other oids can hang. */
#define SYSCTL_NODE(parent, nbr, name, access, handler, descr)		    \
	struct sysctl_oid_list sysctl_##parent##_##name##_children;	    \
	SYSCTL_OID(parent, nbr, name, CTLTYPE_NODE|access,		    \
		   (void*)&sysctl_##parent##_##name##_children, 0, handler, \
		   "N", descr);

/* Oid for a string.  len can be 0 to indicate '\0' termination. */
#define SYSCTL_STRING(parent, nbr, name, access, arg, len, descr) \
	SYSCTL_OID(parent, nbr, name, CTLTYPE_STRING|access, \
		arg, len, sysctl_handle_string, "A", descr)

/* Oid for an int.  If ptr is NULL, val is returned. */
#define SYSCTL_INT(parent, nbr, name, access, ptr, val, descr) \
	SYSCTL_OID(parent, nbr, name, CTLTYPE_INT|access, \
		ptr, val, sysctl_handle_int, "I", descr)

/* Oid for an unsigned int.  If ptr is NULL, val is returned. */
#define SYSCTL_UINT(parent, nbr, name, access, ptr, val, descr) \
	SYSCTL_OID(parent, nbr, name, CTLTYPE_INT|access, \
		ptr, val, sysctl_handle_int, "IU", descr)

/* Oid for a long.  The pointer must be non NULL. */
#define SYSCTL_LONG(parent, nbr, name, access, ptr, descr) \
	SYSCTL_OID(parent, nbr, name, CTLTYPE_INT|access, \
		ptr, 0, sysctl_handle_long, "L", descr)

/* Oid for a quad.  The pointer must be non NULL. */
#define SYSCTL_QUAD(parent, nbr, name, access, ptr, descr) \
	SYSCTL_OID(parent, nbr, name, CTLTYPE_QUAD|access, \
		ptr, 0, sysctl_handle_quad, "Q", descr)

/* Oid for a int returned as quad.  The pointer must be non NULL. */
#define SYSCTL_INT2QUAD(parent, nbr, name, access, ptr, descr) \
	SYSCTL_OID(parent, nbr, name, CTLTYPE_QUAD|access, \
		ptr, 0, sysctl_handle_int2quad, "Q", descr)

/* Oid for an opaque object.  Specified by a pointer and a length. */
#define SYSCTL_OPAQUE(parent, nbr, name, access, ptr, len, fmt, descr) \
	SYSCTL_OID(parent, nbr, name, CTLTYPE_OPAQUE|access, \
		ptr, len, sysctl_handle_opaque, fmt, descr)

/* Oid for a struct.  Specified by a pointer and a type. */
#define SYSCTL_STRUCT(parent, nbr, name, access, ptr, type, descr) \
	SYSCTL_OID(parent, nbr, name, CTLTYPE_OPAQUE|access, \
		ptr, sizeof(struct type), sysctl_handle_opaque, \
		"S," #type, descr)

/* Oid for a procedure.  Specified by a pointer and an arg. */
#define SYSCTL_PROC(parent, nbr, name, access, ptr, arg, handler, fmt, descr) \
	SYSCTL_OID(parent, nbr, name, access, \
		ptr, arg, handler, fmt, descr)
		
		
extern struct sysctl_oid_list sysctl__children;
SYSCTL_DECL(_kern);
SYSCTL_DECL(_sysctl);
SYSCTL_DECL(_vm);
SYSCTL_DECL(_vfs);
SYSCTL_DECL(_net);
SYSCTL_DECL(_debug);
SYSCTL_DECL(_hw);
SYSCTL_DECL(_machdep);
SYSCTL_DECL(_user);

#endif /* KERNEL */

#ifdef XNU_KERNEL_PRIVATE
#define SYSCTL_DEF_ENABLED
#else
#ifndef KERNEL
#define SYSCTL_DEF_ENABLED
#endif
#endif

#ifdef SYSCTL_DEF_ENABLED
/*
 * Top-level identifiers
 */
#define	CTL_UNSPEC	0		/* unused */
#define	CTL_KERN	1		/* "high kernel": proc, limits */
#define	CTL_VM		2		/* virtual memory */
#define	CTL_VFS		3		/* file system, mount type is next */
#define	CTL_NET		4		/* network, see socket.h */
#define	CTL_DEBUG	5		/* debugging parameters */
#define	CTL_HW		6		/* generic cpu/io */
#define	CTL_MACHDEP	7		/* machine dependent */
#define	CTL_USER	8		/* user-level */
#define	CTL_MAXID	9		/* number of valid top-level ids */

#define CTL_NAMES { \
	{ 0, 0 }, \
	{ "kern", CTLTYPE_NODE }, \
	{ "vm", CTLTYPE_NODE }, \
	{ "vfs", CTLTYPE_NODE }, \
	{ "net", CTLTYPE_NODE }, \
	{ "debug", CTLTYPE_NODE }, \
	{ "hw", CTLTYPE_NODE }, \
	{ "machdep", CTLTYPE_NODE }, \
	{ "user", CTLTYPE_NODE }, \
}

/*
 * CTL_KERN identifiers
 */
#define	KERN_OSTYPE	 	 1	/* string: system version */
#define	KERN_OSRELEASE	 	 2	/* string: system release */
#define	KERN_OSREV	 	 3	/* int: system revision */
#define	KERN_VERSION	 	 4	/* string: compile time info */
#define	KERN_MAXVNODES	 	 5	/* int: max vnodes */
#define	KERN_MAXPROC	 	 6	/* int: max processes */
#define	KERN_MAXFILES	 	 7	/* int: max open files */
#define	KERN_ARGMAX	 	 8	/* int: max arguments to exec */
#define	KERN_SECURELVL	 	 9	/* int: system security level */
#define	KERN_HOSTNAME		10	/* string: hostname */
#define	KERN_HOSTID		11	/* int: host identifier */
#define	KERN_CLOCKRATE		12	/* struct: struct clockrate */
#define	KERN_VNODE		13	/* struct: vnode structures */
#define	KERN_PROC		14	/* struct: process entries */
#define	KERN_FILE		15	/* struct: file entries */
#define	KERN_PROF		16	/* node: kernel profiling info */
#define	KERN_POSIX1		17	/* int: POSIX.1 version */
#define	KERN_NGROUPS		18	/* int: # of supplemental group ids */
#define	KERN_JOB_CONTROL	19	/* int: is job control available */
#define	KERN_SAVED_IDS		20	/* int: saved set-user/group-ID */
#define	KERN_BOOTTIME		21	/* struct: time kernel was booted */
#define KERN_NISDOMAINNAME	22	/* string: YP domain name */
#define KERN_DOMAINNAME		KERN_NISDOMAINNAME
#define	KERN_MAXPARTITIONS	23	/* int: number of partitions/disk */
#define	KERN_KDEBUG			24	/* int: kernel trace points */
#define KERN_UPDATEINTERVAL	25	/* int: update process sleep time */
#define KERN_OSRELDATE		26	/* int: OS release date */
#define KERN_NTP_PLL		27	/* node: NTP PLL control */
#define	KERN_BOOTFILE		28	/* string: name of booted kernel */
#define	KERN_MAXFILESPERPROC	29	/* int: max open files per proc */
#define	KERN_MAXPROCPERUID 	30	/* int: max processes per uid */
#define KERN_DUMPDEV		31	/* dev_t: device to dump on */
#define	KERN_IPC		32	/* node: anything related to IPC */
#define	KERN_DUMMY		33	/* unused */
#define	KERN_PS_STRINGS	34	/* int: address of PS_STRINGS */
#define	KERN_USRSTACK32	35	/* int: address of USRSTACK */
#define	KERN_LOGSIGEXIT	36	/* int: do we log sigexit procs? */
#define KERN_SYMFILE		37	/* string: kernel symbol filename */
#define KERN_PROCARGS		38
#define KERN_PCSAMPLES		39	/* node: pc sampling */
#define KERN_NETBOOT		40	/* int: are we netbooted? 1=yes,0=no */
#define	KERN_PANICINFO		41	/* node: panic UI information */
#define	KERN_SYSV		42	/* node: System V IPC information */
#define KERN_AFFINITY		43	/* xxx */
#define KERN_TRANSLATE	   	44	/* xxx */
#define KERN_CLASSIC	   	KERN_TRANSLATE	/* XXX backwards compat */
#define KERN_EXEC		45	/* xxx */
#define KERN_CLASSICHANDLER	KERN_EXEC /* XXX backwards compatibility */
#define	KERN_AIOMAX		46	/* int: max aio requests */
#define	KERN_AIOPROCMAX		47	/* int: max aio requests per process */
#define	KERN_AIOTHREADS		48	/* int: max aio worker threads */
#ifdef __APPLE_API_UNSTABLE
#define	KERN_PROCARGS2		49
#endif /* __APPLE_API_UNSTABLE */
#define KERN_COREFILE		50	/* string: corefile format string */
#define KERN_COREDUMP		51	/* int: whether to coredump at all */
#define	KERN_SUGID_COREDUMP	52	/* int: whether to dump SUGID cores */
#define	KERN_PROCDELAYTERM	53	/* int: set/reset current proc for delayed termination during shutdown */
#define KERN_SHREG_PRIVATIZABLE	54	/* int: can shared regions be privatized ? */
#define	KERN_PROC_LOW_PRI_IO	55	/* int: set/reset current proc for low priority I/O */
#define	KERN_LOW_PRI_WINDOW	56	/* int: set/reset throttle window - milliseconds */
#define	KERN_LOW_PRI_DELAY	57	/* int: set/reset throttle delay - milliseconds */
#define	KERN_POSIX		58	/* node: posix tunables */
#define	KERN_USRSTACK64		59	/* LP64 user stack query */
#define KERN_NX_PROTECTION	60	/* int: whether no-execute protection is enabled */
#define	KERN_TFP 		61	/* Task for pid settings */
#define	KERN_PROCNAME 		62	/* setup process program  name(2*MAXCOMLEN) */
#define	KERN_THALTSTACK 	63	/* setup process to have per thread sigaltstack */
#define	KERN_MAXID		64	/* number of valid kern ids */

#if defined(__LP64__)
#define	KERN_USRSTACK KERN_USRSTACK64
#else
#define	KERN_USRSTACK KERN_USRSTACK32
#endif

/* KERN_TFP types */
#define KERN_TFP_POLICY 		1
#define KERN_TFP_READ_GROUP 	2
#define KERN_TFP_RW_GROUP 		3

/* KERN_TFP_POLICY values . All policies allow task port for self */
#define KERN_TFP_POLICY_DENY 		0 	/* Deny Mode: None allowed except privileged */
#define KERN_TFP_POLICY_PERMISSIVE 	1	/* Permissive Mode: related ones allowed or privileged */
#define KERN_TFP_POLICY_RESTRICTED 	2	/* Restricted Mode: privileged or setgid and realted */

/* KERN_KDEBUG types */
#define KERN_KDEFLAGS		1
#define KERN_KDDFLAGS		2
#define KERN_KDENABLE		3
#define KERN_KDSETBUF		4
#define KERN_KDGETBUF		5
#define KERN_KDSETUP		6
#define KERN_KDREMOVE		7
#define KERN_KDSETREG		8
#define KERN_KDGETREG		9
#define KERN_KDREADTR		10
#define KERN_KDPIDTR        11
#define KERN_KDTHRMAP           12
/* Don't use 13 as it is overloaded with KERN_VNODE */
#define KERN_KDPIDEX            14
#define KERN_KDSETRTCDEC        15
#define KERN_KDGETENTROPY       16

/* KERN_PCSAMPLES types */
#define KERN_PCDISABLE		1
#define KERN_PCSETBUF	        2
#define KERN_PCGETBUF		3
#define KERN_PCSETUP		4
#define KERN_PCREMOVE		5
#define KERN_PCREADBUF		6
#define KERN_PCSETREG           7
#define KERN_PCCOMM             8

/* KERN_PANICINFO types */
#define	KERN_PANICINFO_MAXSIZE	1	/* quad: panic UI image size limit */
#define	KERN_PANICINFO_IMAGE	2	/* panic UI in 8-bit kraw format */

/*
 * KERN_SYSV identifiers
 */
#define KSYSV_SHMMAX		1	/* int: max shared memory segment size (bytes) */
#define	KSYSV_SHMMIN		2	/* int: min shared memory segment size (bytes) */
#define	KSYSV_SHMMNI		3	/* int: max number of shared memory identifiers */
#define	KSYSV_SHMSEG		4	/* int: max shared memory segments per process */
#define	KSYSV_SHMALL		5	/* int: max amount of shared memory (pages) */
#define KSYSV_SEMMNI		6	/* int: max num of semaphore identifiers  */
#define KSYSV_SEMMNS		7	/* int: max num of semaphores in system */
#define KSYSV_SEMMNU		8	/* int: max num of undo structures in system  */
#define KSYSV_SEMMSL		9	/* int: max num of semaphores per id  */
#define KSYSV_SEMUNE		10	/* int: max num of undo entries per process */


#define CTL_KERN_NAMES { \
	{ 0, 0 }, \
	{ "ostype", CTLTYPE_STRING }, \
	{ "osrelease", CTLTYPE_STRING }, \
	{ "osrevision", CTLTYPE_INT }, \
	{ "version", CTLTYPE_STRING }, \
	{ "maxvnodes", CTLTYPE_INT }, \
	{ "maxproc", CTLTYPE_INT }, \
	{ "maxfiles", CTLTYPE_INT }, \
	{ "argmax", CTLTYPE_INT }, \
	{ "securelevel", CTLTYPE_INT }, \
	{ "hostname", CTLTYPE_STRING }, \
	{ "hostid", CTLTYPE_INT }, \
	{ "clockrate", CTLTYPE_STRUCT }, \
	{ "vnode", CTLTYPE_STRUCT }, \
	{ "proc", CTLTYPE_STRUCT }, \
	{ "file", CTLTYPE_STRUCT }, \
	{ "profiling", CTLTYPE_NODE }, \
	{ "posix1version", CTLTYPE_INT }, \
	{ "ngroups", CTLTYPE_INT }, \
	{ "job_control", CTLTYPE_INT }, \
	{ "saved_ids", CTLTYPE_INT }, \
	{ "boottime", CTLTYPE_STRUCT }, \
	{ "nisdomainname", CTLTYPE_STRING }, \
	{ "maxpartitions", CTLTYPE_INT }, \
	{ "kdebug", CTLTYPE_INT }, \
	{ "update", CTLTYPE_INT }, \
	{ "osreldate", CTLTYPE_INT }, \
	{ "ntp_pll", CTLTYPE_NODE }, \
	{ "bootfile", CTLTYPE_STRING }, \
	{ "maxfilesperproc", CTLTYPE_INT }, \
	{ "maxprocperuid", CTLTYPE_INT }, \
	{ "dumpdev", CTLTYPE_STRUCT }, /* we lie; don't print as int */ \
	{ "ipc", CTLTYPE_NODE }, \
	{ "dummy", CTLTYPE_INT }, \
	{ "dummy", CTLTYPE_INT }, \
	{ "usrstack", CTLTYPE_INT }, \
	{ "logsigexit", CTLTYPE_INT }, \
	{ "symfile",CTLTYPE_STRING },\
	{ "procargs",CTLTYPE_STRUCT },\
	{ "pcsamples",CTLTYPE_STRUCT },\
	{ "netboot", CTLTYPE_INT }, \
	{ "panicinfo", CTLTYPE_NODE }, \
	{ "sysv", CTLTYPE_NODE }, \
	{ "dummy", CTLTYPE_INT }, \
	{ "dummy", CTLTYPE_INT }, \
	{ "exec", CTLTYPE_NODE }, \
	{ "aiomax", CTLTYPE_INT }, \
	{ "aioprocmax", CTLTYPE_INT }, \
	{ "aiothreads", CTLTYPE_INT }, \
	{ "procargs2",CTLTYPE_STRUCT }, \
	{ "corefile",CTLTYPE_STRING }, \
	{ "coredump", CTLTYPE_INT }, \
	{ "sugid_coredump", CTLTYPE_INT }, \
	{ "delayterm", CTLTYPE_INT }, \
	{ "shreg_private", CTLTYPE_INT }, \
	{ "proc_low_pri_io", CTLTYPE_INT }, \
	{ "low_pri_window", CTLTYPE_INT }, \
	{ "low_pri_delay", CTLTYPE_INT }, \
	{ "posix", CTLTYPE_NODE }, \
	{ "usrstack64", CTLTYPE_QUAD }, \
	{ "nx", CTLTYPE_INT }, \
	{ "tfp", CTLTYPE_NODE }, \
	{ "procname", CTLTYPE_STRING }, \
	{ "threadsigaltstack", CTLTYPE_INT } \
}

/*
 * CTL_VFS identifiers
 */
#define CTL_VFS_NAMES { \
	{ "vfsconf", CTLTYPE_STRUCT } \
}

/* 
 * KERN_PROC subtypes
 */
#define KERN_PROC_ALL		0	/* everything */
#define	KERN_PROC_PID		1	/* by process id */
#define	KERN_PROC_PGRP		2	/* by process group id */
#define	KERN_PROC_SESSION	3	/* by session of pid */
#define	KERN_PROC_TTY		4	/* by controlling tty */
#define	KERN_PROC_UID		5	/* by effective uid */
#define	KERN_PROC_RUID		6	/* by real uid */

/* 
 * KERN_PROC subtype ops return arrays of augmented proc structures:
 */
#ifdef __APPLE_API_UNSTABLE

struct _pcred {
	char	pc_lock[72];		/* opaque content */
	struct	ucred *pc_ucred;	/* Current credentials. */
	uid_t	p_ruid;			/* Real user id. */
	uid_t	p_svuid;		/* Saved effective user id. */
	gid_t	p_rgid;			/* Real group id. */
	gid_t	p_svgid;		/* Saved effective group id. */
	int	p_refcnt;		/* Number of references. */
};

struct _ucred {
	int32_t	cr_ref;			/* reference count */
	uid_t	cr_uid;			/* effective user id */
	short	cr_ngroups;		/* number of groups */
	gid_t	cr_groups[NGROUPS];	/* groups */
};

struct kinfo_proc {
	struct	extern_proc kp_proc;			/* proc structure */
	struct	eproc {
		struct	proc *e_paddr;		/* address of proc */
		struct	session *e_sess;	/* session pointer */
		struct	_pcred e_pcred;		/* process credentials */
		struct	_ucred e_ucred;		/* current credentials */
		struct	 vmspace e_vm;		/* address space */
		pid_t	e_ppid;			/* parent process id */
		pid_t	e_pgid;			/* process group id */
		short	e_jobc;			/* job control counter */
		dev_t	e_tdev;			/* controlling tty dev */
		pid_t	e_tpgid;		/* tty process group id */
		struct	session *e_tsess;	/* tty session pointer */
#define	WMESGLEN	7
		char	e_wmesg[WMESGLEN+1];	/* wchan message */
		segsz_t e_xsize;		/* text size */
		short	e_xrssize;		/* text rss */
		short	e_xccount;		/* text references */
		short	e_xswrss;
		int32_t	e_flag;
#define	EPROC_CTTY	0x01	/* controlling tty vnode active */
#define	EPROC_SLEADER	0x02	/* session leader */
#define	COMAPT_MAXLOGNAME	12
		char	e_login[COMAPT_MAXLOGNAME];	/* short setlogin() name */
		int32_t	e_spare[4];
	} kp_eproc;
};

#ifdef BSD_KERNEL_PRIVATE
#include <sys/proc_internal.h>

// LP64todo - should this move?

/* LP64 version of _pcred.  all pointers 
 * grow when we're dealing with a 64-bit process.
 * WARNING - keep in sync with _pcred
 */

struct user_pcred {
	char	pc_lock[72];		/* opaque content */
	user_addr_t	pc_ucred;	/* Current credentials. */
	uid_t	p_ruid;			/* Real user id. */
	uid_t	p_svuid;		/* Saved effective user id. */
	gid_t	p_rgid;			/* Real group id. */
	gid_t	p_svgid;		/* Saved effective group id. */
	int	p_refcnt __attribute((aligned(8)));		/* Number of references. */
};

/* LP64 version of kinfo_proc.  all pointers 
 * grow when we're dealing with a 64-bit process.
 * WARNING - keep in sync with kinfo_proc
 */
struct user_kinfo_proc {
	struct	user_extern_proc kp_proc;	/* proc structure */
	struct	user_eproc {
		user_addr_t e_paddr;		/* address of proc */
		user_addr_t e_sess;			/* session pointer */
		struct	user_pcred e_pcred;		/* process credentials */
		struct	_ucred e_ucred;		/* current credentials */
		struct	 user_vmspace e_vm; /* address space */
		pid_t	e_ppid;			/* parent process id */
		pid_t	e_pgid;			/* process group id */
		short	e_jobc;			/* job control counter */
		dev_t	e_tdev;			/* controlling tty dev */
		pid_t	e_tpgid;		/* tty process group id */
		user_addr_t	e_tsess __attribute((aligned(8)));	/* tty session pointer */
		char	e_wmesg[WMESGLEN+1];	/* wchan message */
		segsz_t e_xsize;		/* text size */
		short	e_xrssize;		/* text rss */
		short	e_xccount;		/* text references */
		short	e_xswrss;
		int32_t	e_flag;
		char	e_login[COMAPT_MAXLOGNAME];	/* short setlogin() name */
		int32_t	e_spare[4];
	} kp_eproc;
};

#endif	/* BSD_KERNEL_PRIVATE */

#endif /* __APPLE_API_UNSTABLE */

/*
 * KERN_IPC identifiers
 */
#define KIPC_MAXSOCKBUF		1	/* int: max size of a socket buffer */
#define	KIPC_SOCKBUF_WASTE	2	/* int: wastage factor in sockbuf */
#define	KIPC_SOMAXCONN		3	/* int: max length of connection q */
#define	KIPC_MAX_LINKHDR	4	/* int: max length of link header */
#define	KIPC_MAX_PROTOHDR	5	/* int: max length of network header */
#define	KIPC_MAX_HDR		6	/* int: max total length of headers */
#define	KIPC_MAX_DATALEN	7	/* int: max length of data? */
#define	KIPC_MBSTAT		8	/* struct: mbuf usage statistics */
#define	KIPC_NMBCLUSTERS	9	/* int: maximum mbuf clusters */

/*
 * CTL_VM identifiers
 */
#define	VM_METER	1		/* struct vmmeter */
#define	VM_LOADAVG	2		/* struct loadavg */
/*
 * Note: "3" was skipped sometime ago and should probably remain unused
 * to avoid any new entry from being accepted by older kernels...
 */ 
#define	VM_MACHFACTOR	4		/* struct loadavg with mach factor*/
#define VM_SWAPUSAGE	5		/* total swap usage */
#define	VM_MAXID	6		/* number of valid vm ids */

#define	CTL_VM_NAMES { \
	{ 0, 0 }, \
	{ "vmmeter", CTLTYPE_STRUCT }, \
	{ "loadavg", CTLTYPE_STRUCT }, \
	{ 0, 0 }, /* placeholder for "3" (see comment above) */ \
	{ "machfactor", CTLTYPE_STRUCT }, \
	{ "swapusage", CTLTYPE_STRUCT } \
}

struct xsw_usage {
	u_int64_t	xsu_total;
	u_int64_t	xsu_avail;
	u_int64_t	xsu_used;
	u_int32_t	xsu_pagesize;
	boolean_t	xsu_encrypted;
};

#ifdef __APPLE_API_PRIVATE
/* Load average structure.  Use of fixpt_t assume <sys/types.h> in scope. */
/* XXX perhaps we should protect fixpt_t, and define it here (or discard it) */
struct loadavg {
	fixpt_t	ldavg[3];
	long	fscale;
};
extern struct loadavg averunnable;
#define LSCALE	1000		/* scaling for "fixed point" arithmetic */

// LP64todo - should this move?
#ifdef BSD_KERNEL_PRIVATE

struct user_loadavg {
	fixpt_t	ldavg[3];
        user_long_t	fscale __attribute((aligned(8)));
};

#endif	/* BSD_KERNEL_PRIVATE */
#endif /* __APPLE_API_PRIVATE */


/*
 * CTL_HW identifiers
 */
#define	HW_MACHINE	 1		/* string: machine class */
#define	HW_MODEL	 2		/* string: specific machine model */
#define	HW_NCPU		 3		/* int: number of cpus */
#define	HW_BYTEORDER	 4		/* int: machine byte order */
#define	HW_PHYSMEM	 5		/* int: total memory */
#define	HW_USERMEM	 6		/* int: non-kernel memory */
#define	HW_PAGESIZE	 7		/* int: software page size */
#define	HW_DISKNAMES	 8		/* strings: disk drive names */
#define	HW_DISKSTATS	 9		/* struct: diskstats[] */
#define	HW_EPOCH  	10		/* int: 0 for Legacy, else NewWorld */
#define HW_FLOATINGPT	11		/* int: has HW floating point? */
#define HW_MACHINE_ARCH	12		/* string: machine architecture */
#define HW_VECTORUNIT	13		/* int: has HW vector unit? */
#define HW_BUS_FREQ	14		/* int: Bus Frequency */
#define HW_CPU_FREQ	15		/* int: CPU Frequency */
#define HW_CACHELINE	16		/* int: Cache Line Size in Bytes */
#define HW_L1ICACHESIZE	17		/* int: L1 I Cache Size in Bytes */
#define HW_L1DCACHESIZE	18		/* int: L1 D Cache Size in Bytes */
#define HW_L2SETTINGS	19		/* int: L2 Cache Settings */
#define HW_L2CACHESIZE	20		/* int: L2 Cache Size in Bytes */
#define HW_L3SETTINGS	21		/* int: L3 Cache Settings */
#define HW_L3CACHESIZE	22		/* int: L3 Cache Size in Bytes */
#define HW_TB_FREQ	23		/* int: Bus Frequency */
#define HW_MEMSIZE	24		/* uint64_t: physical ram size */
#define HW_AVAILCPU	25		/* int: number of available CPUs */
#define	HW_MAXID	26		/* number of valid hw ids */

#define CTL_HW_NAMES { \
	{ 0, 0 }, \
	{ "machine", CTLTYPE_STRING }, \
	{ "model", CTLTYPE_STRING }, \
	{ "ncpu", CTLTYPE_INT }, \
	{ "byteorder", CTLTYPE_INT }, \
	{ "physmem", CTLTYPE_INT }, \
	{ "usermem", CTLTYPE_INT }, \
	{ "pagesize", CTLTYPE_INT }, \
	{ "disknames", CTLTYPE_STRUCT }, \
	{ "diskstats", CTLTYPE_STRUCT }, \
	{ "epoch", CTLTYPE_INT }, \
	{ "floatingpoint", CTLTYPE_INT }, \
	{ "machinearch", CTLTYPE_STRING }, \
	{ "vectorunit", CTLTYPE_INT }, \
	{ "busfrequency", CTLTYPE_INT }, \
	{ "cpufrequency", CTLTYPE_INT }, \
	{ "cachelinesize", CTLTYPE_INT }, \
	{ "l1icachesize", CTLTYPE_INT }, \
	{ "l1dcachesize", CTLTYPE_INT }, \
	{ "l2settings", CTLTYPE_INT }, \
	{ "l2cachesize", CTLTYPE_INT }, \
	{ "l3settings", CTLTYPE_INT }, \
	{ "l3cachesize", CTLTYPE_INT }, \
	{ "tbfrequency", CTLTYPE_INT }, \
	{ "memsize", CTLTYPE_QUAD }, \
	{ "availcpu", CTLTYPE_INT } \
}

/*
 * These are the support HW selectors for sysctlbyname.  Parameters that are byte counts or frequencies are 64 bit numbers.
 * All other parameters are 32 bit numbers.
 *
 *   hw.memsize                - The number of bytes of physical memory in the system.
 *
 *   hw.ncpu                   - The maximum number of processors that could be available this boot.
 *                               Use this value for sizing of static per processor arrays; i.e. processor load statistics.
 *
 *   hw.activecpu              - The number of processors currently available for executing threads.
 *                               Use this number to determine the number threads to create in SMP aware applications.
 *                               This number can change when power management modes are changed.
 *
 *   hw.physicalcpu            - The number of physical processors available in the current power management mode.
 *   hw.physicalcpu_max        - The maximum number of physical processors that could be available this boot
 *
 *   hw.logicalcpu             - The number of logical processors available in the current power management mode.
 *   hw.logicalcpu_max         - The maximum number of logical processors that could be available this boot
 *
 *   hw.tbfrequency            - This gives the time base frequency used by the OS and is the basis of all timing services.
 *                               In general is is better to use mach's or higher level timing services, but this value
 *                               is needed to convert the PPC Time Base registers to real time.
 *
 *   hw.cpufrequency           - These values provide the current, min and max cpu frequency.  The min and max are for
 *   hw.cpufrequency_max       - all power management modes.  The current frequency is the max frequency in the current mode.
 *   hw.cpufrequency_min       - All frequencies are in Hz.
 *
 *   hw.busfrequency           - These values provide the current, min and max bus frequency.  The min and max are for
 *   hw.busfrequency_max       - all power management modes.  The current frequency is the max frequency in the current mode.
 *   hw.busfrequency_min       - All frequencies are in Hz.
 *
 *   hw.cputype                - These values provide the mach-o cpu type and subtype.  A complete list is in <mach/machine.h>
 *   hw.cpusubtype             - These values should be used to determine what processor family the running cpu is from so that
 *                               the best binary can be chosen, or the best dynamic code generated.  They should not be used
 *                               to determine if a given processor feature is available.
 *   hw.cputhreadtype          - This value will be present if the processor supports threads.  Like hw.cpusubtype this selector
 *                               should not be used to infer features, and only used to name the processors thread architecture.
 *                               The values are defined in <mach/machine.h>
 *
 *   hw.byteorder              - Gives the byte order of the processor.  4321 for big endian, 1234 for little.
 *
 *   hw.pagesize               - Gives the size in bytes of the pages used by the processor and VM system.
 *
 *   hw.cachelinesize          - Gives the size in bytes of the processor's cache lines.
 *                               This value should be use to control the strides of loops that use cache control instructions
 *                               like dcbz, dcbt or dcbst.
 *
 *   hw.l1dcachesize           - These values provide the size in bytes of the L1, L2 and L3 caches.  If a cache is not present
 *   hw.l1icachesize           - then the selector will return and error.
 *   hw.l2cachesize            -
 *   hw.l3cachesize            -
 *
 *
 * These are the selectors for optional processor features for specific processors.  Selectors that return errors are not support 
 * on the system.  Supported features will return 1 if they are recommended or 0 if they are supported but are not expected to help .
 * performance.  Future versions of these selectors may return larger values as necessary so it is best to test for non zero.
 *
 * For PowerPC:
 *
 *   hw.optional.floatingpoint - Floating Point Instructions
 *   hw.optional.altivec       - AltiVec Instructions
 *   hw.optional.graphicsops   - Graphics Operations
 *   hw.optional.64bitops      - 64-bit Instructions
 *   hw.optional.fsqrt         - HW Floating Point Square Root Instruction
 *   hw.optional.stfiwx        - Store Floating Point as Integer Word Indexed Instructions
 *   hw.optional.dcba          - Data Cache Block Allocate Instruction
 *   hw.optional.datastreams   - Data Streams Instructions
 *   hw.optional.dcbtstreams   - Data Cache Block Touch Steams Instruction Form
 *
 * For x86 Architecture:
 * 
 *   hw.optional.floatingpoint - Floating Point Instructions
 *   hw.optional.mmx           - Original MMX vector instructions
 *   hw.optional.sse           - Streaming SIMD Extensions
 *   hw.optional.sse2          - Streaming SIMD Extensions 2
 *   hw.optional.sse3          - Streaming SIMD Extensions 3
 *   hw.optional.x86_64        - 64-bit support
 */


/*
 * CTL_USER definitions
 */
#define	USER_CS_PATH		 1	/* string: _CS_PATH */
#define	USER_BC_BASE_MAX	 2	/* int: BC_BASE_MAX */
#define	USER_BC_DIM_MAX		 3	/* int: BC_DIM_MAX */
#define	USER_BC_SCALE_MAX	 4	/* int: BC_SCALE_MAX */
#define	USER_BC_STRING_MAX	 5	/* int: BC_STRING_MAX */
#define	USER_COLL_WEIGHTS_MAX	 6	/* int: COLL_WEIGHTS_MAX */
#define	USER_EXPR_NEST_MAX	 7	/* int: EXPR_NEST_MAX */
#define	USER_LINE_MAX		 8	/* int: LINE_MAX */
#define	USER_RE_DUP_MAX		 9	/* int: RE_DUP_MAX */
#define	USER_POSIX2_VERSION	10	/* int: POSIX2_VERSION */
#define	USER_POSIX2_C_BIND	11	/* int: POSIX2_C_BIND */
#define	USER_POSIX2_C_DEV	12	/* int: POSIX2_C_DEV */
#define	USER_POSIX2_CHAR_TERM	13	/* int: POSIX2_CHAR_TERM */
#define	USER_POSIX2_FORT_DEV	14	/* int: POSIX2_FORT_DEV */
#define	USER_POSIX2_FORT_RUN	15	/* int: POSIX2_FORT_RUN */
#define	USER_POSIX2_LOCALEDEF	16	/* int: POSIX2_LOCALEDEF */
#define	USER_POSIX2_SW_DEV	17	/* int: POSIX2_SW_DEV */
#define	USER_POSIX2_UPE		18	/* int: POSIX2_UPE */
#define	USER_STREAM_MAX		19	/* int: POSIX2_STREAM_MAX */
#define	USER_TZNAME_MAX		20	/* int: POSIX2_TZNAME_MAX */
#define	USER_MAXID		21	/* number of valid user ids */

#define	CTL_USER_NAMES { \
	{ 0, 0 }, \
	{ "cs_path", CTLTYPE_STRING }, \
	{ "bc_base_max", CTLTYPE_INT }, \
	{ "bc_dim_max", CTLTYPE_INT }, \
	{ "bc_scale_max", CTLTYPE_INT }, \
	{ "bc_string_max", CTLTYPE_INT }, \
	{ "coll_weights_max", CTLTYPE_INT }, \
	{ "expr_nest_max", CTLTYPE_INT }, \
	{ "line_max", CTLTYPE_INT }, \
	{ "re_dup_max", CTLTYPE_INT }, \
	{ "posix2_version", CTLTYPE_INT }, \
	{ "posix2_c_bind", CTLTYPE_INT }, \
	{ "posix2_c_dev", CTLTYPE_INT }, \
	{ "posix2_char_term", CTLTYPE_INT }, \
	{ "posix2_fort_dev", CTLTYPE_INT }, \
	{ "posix2_fort_run", CTLTYPE_INT }, \
	{ "posix2_localedef", CTLTYPE_INT }, \
	{ "posix2_sw_dev", CTLTYPE_INT }, \
	{ "posix2_upe", CTLTYPE_INT }, \
	{ "stream_max", CTLTYPE_INT }, \
	{ "tzname_max", CTLTYPE_INT } \
}



/*
 * CTL_DEBUG definitions
 *
 * Second level identifier specifies which debug variable.
 * Third level identifier specifies which stucture component.
 */
#define	CTL_DEBUG_NAME		0	/* string: variable name */
#define	CTL_DEBUG_VALUE		1	/* int: variable value */
#define	CTL_DEBUG_MAXID		20

#ifdef	KERNEL
#ifdef DEBUG
/*
 * CTL_DEBUG variables.
 *
 * These are declared as separate variables so that they can be
 * individually initialized at the location of their associated
 * variable. The loader prevents multiple use by issuing errors
 * if a variable is initialized in more than one place. They are
 * aggregated into an array in debug_sysctl(), so that it can
 * conveniently locate them when querried. If more debugging
 * variables are added, they must also be declared here and also
 * entered into the array.
 */
struct ctldebug {
	char	*debugname;	/* name of debugging variable */
	int	*debugvar;	/* pointer to debugging variable */
};
extern struct ctldebug debug0, debug1, debug2, debug3, debug4;
extern struct ctldebug debug5, debug6, debug7, debug8, debug9;
extern struct ctldebug debug10, debug11, debug12, debug13, debug14;
extern struct ctldebug debug15, debug16, debug17, debug18, debug19;
#endif	/* DEBUG */

#ifdef BSD_KERNEL_PRIVATE
extern char	machine[];
extern char	osrelease[];
extern char	ostype[];

struct linker_set;

void	sysctl_register_set(struct linker_set *lsp);
void	sysctl_unregister_set(struct linker_set *lsp);
void	sysctl_mib_init(void);
int	kernel_sysctl(struct proc *p, int *name, u_int namelen, void *old,
		      size_t *oldlenp, void *newp, size_t newlen);
int	userland_sysctl(struct proc *p, int *name, u_int namelen, user_addr_t old,
			size_t *oldlenp, int inkernel, user_addr_t newp, size_t newlen,
			size_t *retval);

/*
 * Internal sysctl function calling convention:
 *
 *	(*sysctlfn)(name, namelen, oldval, oldlenp, newval, newlen);
 *
 * The name parameter points at the next component of the name to be
 * interpreted.  The namelen parameter is the number of integers in
 * the name.
 */
typedef int (sysctlfn)
   (int *, u_int, user_addr_t, size_t *, user_addr_t, size_t, struct proc *);

int sysctl_int(user_addr_t, size_t *, user_addr_t, size_t, int *);
int sysctl_rdint(user_addr_t, size_t *, user_addr_t, int);
int sysctl_quad(user_addr_t, size_t *, user_addr_t, size_t, quad_t *);
int sysctl_rdquad(void *, size_t *, void *, quad_t);
int sysctl_string(user_addr_t, size_t *, user_addr_t, size_t, char *, int);
int sysctl_trstring(user_addr_t, size_t *, user_addr_t, size_t, char *, int);
int sysctl_rdstring(user_addr_t, size_t *, user_addr_t, char *);
int sysctl_rdstruct(user_addr_t, size_t *, user_addr_t, void *, int);

#endif /* BSD_KERNEL_PRIVATE */
#else	/* !KERNEL */

__BEGIN_DECLS
int	sysctl(int *, u_int, void *, size_t *, void *, size_t);
int	sysctlbyname(const char *, void *, size_t *, void *, size_t);
int	sysctlnametomib(const char *, int *, size_t *);
__END_DECLS

#endif	/* KERNEL */


#endif /* SYSCTL_DEF_ENABLED */


#endif	/* !_SYS_SYSCTL_H_ */
