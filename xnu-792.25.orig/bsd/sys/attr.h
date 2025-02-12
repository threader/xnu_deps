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

/*
 * attr.h - attribute data structures and interfaces
 *
 * Copyright (c) 1998, Apple Computer, Inc.  All Rights Reserved.
 */

#ifndef _SYS_ATTR_H_
#define _SYS_ATTR_H_

#include <sys/appleapiopts.h>

#ifdef __APPLE_API_UNSTABLE
#include <sys/types.h>
#include <sys/ucred.h>
#include <sys/time.h>
#include <sys/cdefs.h>

#define FSOPT_NOFOLLOW 		0x00000001
#define FSOPT_NOINMEMUPDATE 	0x00000002
#define FSOPT_REPORT_FULLSIZE	0x00000004

/* we currently aren't anywhere near this amount for a valid
 * fssearchblock.sizeofsearchparams1 or fssearchblock.sizeofsearchparams2
 * but we put a sanity check in to avoid abuse of the value passed in from
 * user land.
 */
#define SEARCHFS_MAX_SEARCHPARMS  4096

typedef u_int32_t text_encoding_t;

typedef u_int32_t fsobj_type_t;

typedef u_int32_t fsobj_tag_t;

typedef u_int32_t fsfile_type_t;

typedef u_int32_t fsvolid_t;

typedef struct fsobj_id {
	u_int32_t		fid_objno;
	u_int32_t		fid_generation;
} fsobj_id_t;

typedef u_int32_t attrgroup_t;

struct attrlist {
	u_short bitmapcount;			/* number of attr. bit sets in list (should be 5) */
	u_int16_t reserved;				/* (to maintain 4-byte alignment) */
	attrgroup_t commonattr;			/* common attribute group */
	attrgroup_t volattr;			/* Volume attribute group */
	attrgroup_t dirattr;			/* directory attribute group */
	attrgroup_t fileattr;			/* file attribute group */
	attrgroup_t forkattr;			/* fork attribute group */
};
#define ATTR_BIT_MAP_COUNT 5

typedef struct attribute_set {
	attrgroup_t commonattr;			/* common attribute group */
	attrgroup_t volattr;			/* Volume attribute group */
	attrgroup_t dirattr;			/* directory attribute group */
	attrgroup_t fileattr;			/* file attribute group */
	attrgroup_t forkattr;			/* fork attribute group */
} attribute_set_t;

typedef struct attrreference {
	int32_t     attr_dataoffset;
	u_int32_t   attr_length;
} attrreference_t;

/* XXX PPD This is derived from HFSVolumePriv.h and should perhaps be referenced from there? */

struct diskextent {
	u_int32_t					startblock;				/* first block allocated */
	u_int32_t					blockcount;				/* number of blocks allocated */
};

typedef struct diskextent extentrecord[8];

typedef u_int32_t vol_capabilities_set_t[4];

#define VOL_CAPABILITIES_FORMAT 0
#define VOL_CAPABILITIES_INTERFACES 1
#define VOL_CAPABILITIES_RESERVED1 2
#define VOL_CAPABILITIES_RESERVED2 3

typedef struct vol_capabilities_attr {
	vol_capabilities_set_t capabilities;
	vol_capabilities_set_t valid;
} vol_capabilities_attr_t;

/*
 * XXX this value needs to be raised - 3893388
 */
#define ATTR_MAX_BUFFER		8192

/*
 * VOL_CAP_FMT_PERSISTENTOBJECTIDS: When set, the volume has object IDs
 * that are persistent (retain their values even when the volume is
 * unmounted and remounted), and a file or directory can be looked up
 * by ID.  Volumes that support VolFS and can support Carbon File ID
 * references should set this bit.
 *
 * VOL_CAP_FMT_SYMBOLICLINKS: When set, the volume supports symbolic
 * links.  The symlink(), readlink(), and lstat() calls all use this
 * symbolic link.
 *
 * VOL_CAP_FMT_HARDLINKS: When set, the volume supports hard links.
 * The link() call creates hard links.
 *
 * VOL_CAP_FMT_JOURNAL: When set, the volume is capable of supporting
 * a journal used to speed recovery in case of unplanned shutdown
 * (such as a power outage or crash).  This bit does not necessarily
 * mean the volume is actively using a journal for recovery.
 *
 * VOL_CAP_FMT_JOURNAL_ACTIVE: When set, the volume is currently using
 * a journal for use in speeding recovery after an unplanned shutdown.
 * This bit can be set only if VOL_CAP_FMT_JOURNAL is also set.
 *
 * VOL_CAP_FMT_NO_ROOT_TIMES: When set, the volume format does not
 * store reliable times for the root directory, so you should not
 * depend on them to detect changes, etc.
 *
 * VOL_CAP_FMT_SPARSE_FILES: When set, the volume supports sparse files.
 * That is, files which can have "holes" that have never been written
 * to, and are not allocated on disk.  Sparse files may have an
 * allocated size that is less than the file's logical length.
 *
 * VOL_CAP_FMT_ZERO_RUNS: For security reasons, parts of a file (runs)
 * that have never been written to must appear to contain zeroes.  When
 * this bit is set, the volume keeps track of allocated but unwritten
 * runs of a file so that it can substitute zeroes without actually
 * writing zeroes to the media.  This provides performance similar to
 * sparse files, but not the space savings.
 *
 * VOL_CAP_FMT_CASE_SENSITIVE: When set, file and directory names are
 * case sensitive (upper and lower case are different).  When clear,
 * an upper case character is equivalent to a lower case character,
 * and you can't have two names that differ solely in the case of
 * the characters.
 *
 * VOL_CAP_FMT_CASE_PRESERVING: When set, file and directory names
 * preserve the difference between upper and lower case.  If clear,
 * the volume may change the case of some characters (typically
 * making them all upper or all lower case).  A volume that sets
 * VOL_CAP_FMT_CASE_SENSITIVE should also set VOL_CAP_FMT_CASE_PRESERVING.
 *
 * VOL_CAP_FMT_FAST_STATFS: This bit is used as a hint to upper layers
 * (especially Carbon) that statfs() is fast enough that its results
 * need not be cached by those upper layers.  A volume that caches
 * the statfs information in its in-memory structures should set this bit.
 * A volume that must always read from disk or always perform a network
 * transaction should not set this bit.  
 * 
 * VOL_CAP_FMT_2TB_FILESIZE: When set, the volume format supports file 
 * size upto 2TB.  This bit does not necessarily mean that the file 
 * system does not support file size more than 2TB.   This bit does 
 * not mean that the currently available space on the volume is 2TB. 
 */
#define VOL_CAP_FMT_PERSISTENTOBJECTIDS		0x00000001
#define VOL_CAP_FMT_SYMBOLICLINKS 		0x00000002
#define VOL_CAP_FMT_HARDLINKS      		0x00000004
#define VOL_CAP_FMT_JOURNAL       		0x00000008
#define VOL_CAP_FMT_JOURNAL_ACTIVE 		0x00000010
#define VOL_CAP_FMT_NO_ROOT_TIMES 		0x00000020
#define VOL_CAP_FMT_SPARSE_FILES 		0x00000040
#define VOL_CAP_FMT_ZERO_RUNS     		0x00000080
#define VOL_CAP_FMT_CASE_SENSITIVE 		0x00000100
#define VOL_CAP_FMT_CASE_PRESERVING		0x00000200
#define VOL_CAP_FMT_FAST_STATFS 		0x00000400
#define VOL_CAP_FMT_2TB_FILESIZE		0x00000800


/*
 * VOL_CAP_INT_SEARCHFS: When set, the volume implements the
 * searchfs() system call (the vnop_searchfs vnode operation).
 *
 * VOL_CAP_INT_ATTRLIST: When set, the volume implements the
 * getattrlist() and setattrlist() system calls (vnop_getattrlist
 * and vnop_setattrlist vnode operations) for the volume, files,
 * and directories.  The volume may or may not implement the
 * readdirattr() system call.  XXX Is there any minimum set
 * of attributes that should be supported?  To determine the
 * set of supported attributes, get the ATTR_VOL_ATTRIBUTES
 * attribute of the volume.
 *
 * VOL_CAP_INT_NFSEXPORT: When set, the volume implements exporting
 * of NFS volumes.
 *
 * VOL_CAP_INT_READDIRATTR: When set, the volume implements the
 * readdirattr() system call (vnop_readdirattr vnode operation).
 *
 * VOL_CAP_INT_EXCHANGEDATA: When set, the volume implements the
 * exchangedata() system call (VNOP_EXCHANGE vnode operation).
 *
 * VOL_CAP_INT_COPYFILE: When set, the volume implements the
 * VOP_COPYFILE vnode operation.  (XXX There should be a copyfile()
 * system call in <unistd.h>.)
 *
 * VOL_CAP_INT_ALLOCATE: When set, the volume implements the
 * VNOP_ALLOCATE vnode operation, which means it implements the
 * F_PREALLOCATE selector of fcntl(2).
 *
 * VOL_CAP_INT_VOL_RENAME: When set, the volume implements the
 * ATTR_VOL_NAME attribute for both getattrlist() and setattrlist().
 * The volume can be renamed by setting ATTR_VOL_NAME with setattrlist().
 *
 * VOL_CAP_INT_ADVLOCK: When set, the volume implements POSIX style
 * byte range locks via vnop_advlock (accessible from fcntl(2)).
 *
 * VOL_CAP_INT_FLOCK: When set, the volume implements whole-file flock(2)
 * style locks via vnop_advlock.  This includes the O_EXLOCK and O_SHLOCK
 * flags of the open(2) call.
 *
 */
#define VOL_CAP_INT_SEARCHFS			0x00000001
#define VOL_CAP_INT_ATTRLIST			0x00000002
#define VOL_CAP_INT_NFSEXPORT			0x00000004
#define VOL_CAP_INT_READDIRATTR			0x00000008
#define VOL_CAP_INT_EXCHANGEDATA		0x00000010
#define VOL_CAP_INT_COPYFILE			0x00000020
#define VOL_CAP_INT_ALLOCATE			0x00000040
#define VOL_CAP_INT_VOL_RENAME			0x00000080
#define VOL_CAP_INT_ADVLOCK			0x00000100
#define VOL_CAP_INT_FLOCK			0x00000200
#define VOL_CAP_INT_EXTENDED_SECURITY		0x00000400
#define VOL_CAP_INT_USERACCESS			0x00000800

typedef struct vol_attributes_attr {
	attribute_set_t validattr;
	attribute_set_t nativeattr;
} vol_attributes_attr_t;

#define ATTR_CMN_NAME				0x00000001
#define ATTR_CMN_DEVID				0x00000002
#define ATTR_CMN_FSID				0x00000004
#define ATTR_CMN_OBJTYPE			0x00000008
#define ATTR_CMN_OBJTAG				0x00000010
#define ATTR_CMN_OBJID				0x00000020
#define ATTR_CMN_OBJPERMANENTID			0x00000040
#define ATTR_CMN_PAROBJID			0x00000080
#define ATTR_CMN_SCRIPT				0x00000100
#define ATTR_CMN_CRTIME				0x00000200
#define ATTR_CMN_MODTIME			0x00000400
#define ATTR_CMN_CHGTIME			0x00000800
#define ATTR_CMN_ACCTIME			0x00001000
#define ATTR_CMN_BKUPTIME			0x00002000
#define ATTR_CMN_FNDRINFO			0x00004000
#define ATTR_CMN_OWNERID			0x00008000
#define ATTR_CMN_GRPID				0x00010000
#define ATTR_CMN_ACCESSMASK			0x00020000
#define ATTR_CMN_FLAGS				0x00040000
#define ATTR_CMN_USERACCESS			0x00200000
#define ATTR_CMN_EXTENDED_SECURITY		0x00400000
#define ATTR_CMN_UUID				0x00800000
#define ATTR_CMN_GRPUUID			0x01000000

#define ATTR_CMN_VALIDMASK			0x003FFFFF
#define ATTR_CMN_SETMASK			0x01C7FF00
#define ATTR_CMN_VOLSETMASK			0x00006700

#define ATTR_VOL_FSTYPE				0x00000001
#define ATTR_VOL_SIGNATURE			0x00000002
#define ATTR_VOL_SIZE				0x00000004
#define ATTR_VOL_SPACEFREE			0x00000008
#define ATTR_VOL_SPACEAVAIL			0x00000010
#define ATTR_VOL_MINALLOCATION			0x00000020
#define ATTR_VOL_ALLOCATIONCLUMP		0x00000040
#define ATTR_VOL_IOBLOCKSIZE			0x00000080
#define ATTR_VOL_OBJCOUNT			0x00000100
#define ATTR_VOL_FILECOUNT			0x00000200
#define ATTR_VOL_DIRCOUNT			0x00000400
#define ATTR_VOL_MAXOBJCOUNT			0x00000800
#define ATTR_VOL_MOUNTPOINT			0x00001000
#define ATTR_VOL_NAME				0x00002000
#define ATTR_VOL_MOUNTFLAGS			0x00004000
#define ATTR_VOL_MOUNTEDDEVICE			0x00008000
#define ATTR_VOL_ENCODINGSUSED			0x00010000
#define ATTR_VOL_CAPABILITIES			0x00020000
#define ATTR_VOL_ATTRIBUTES			0x40000000
#define ATTR_VOL_INFO				0x80000000

#define ATTR_VOL_VALIDMASK			0xC003FFFF
#define ATTR_VOL_SETMASK			0x80002000


/* File/directory attributes: */
#define ATTR_DIR_LINKCOUNT			0x00000001
#define ATTR_DIR_ENTRYCOUNT			0x00000002
#define ATTR_DIR_MOUNTSTATUS			0x00000004
#define DIR_MNTSTATUS_MNTPOINT		0x00000001

#define ATTR_DIR_VALIDMASK			0x00000007
#define ATTR_DIR_SETMASK			0x00000000

#define ATTR_FILE_LINKCOUNT			0x00000001
#define ATTR_FILE_TOTALSIZE			0x00000002
#define ATTR_FILE_ALLOCSIZE			0x00000004
#define ATTR_FILE_IOBLOCKSIZE			0x00000008
#define ATTR_FILE_DEVTYPE			0x00000020
#define ATTR_FILE_FORKCOUNT			0x00000080
#define ATTR_FILE_FORKLIST			0x00000100
#define ATTR_FILE_DATALENGTH			0x00000200
#define ATTR_FILE_DATAALLOCSIZE			0x00000400
#define ATTR_FILE_RSRCLENGTH			0x00001000
#define ATTR_FILE_RSRCALLOCSIZE			0x00002000

#define ATTR_FILE_VALIDMASK			0x00007FFF
#define ATTR_FILE_SETMASK			0x00000020

#define ATTR_FORK_TOTALSIZE			0x00000001
#define ATTR_FORK_ALLOCSIZE			0x00000002

#define ATTR_FORK_VALIDMASK			0x00000003
#define ATTR_FORK_SETMASK			0x00000000

/* Obsolete, implemented, not supported */
#define ATTR_CMN_NAMEDATTRCOUNT			0x00080000	/* not implemented */
#define ATTR_CMN_NAMEDATTRLIST			0x00100000	/* not implemented */
#define ATTR_FILE_CLUMPSIZE			0x00000010	/* obsolete */
#define ATTR_FILE_FILETYPE			0x00000040	/* always zero */
#define ATTR_FILE_DATAEXTENTS			0x00000800	/* obsolete, HFS-specific */
#define ATTR_FILE_RSRCEXTENTS			0x00004000	/* obsolete, HFS-specific */

/*
 * Searchfs
 */
#define SRCHFS_START 				0x00000001
#define SRCHFS_MATCHPARTIALNAMES 		0x00000002
#define SRCHFS_MATCHDIRS 			0x00000004
#define SRCHFS_MATCHFILES 			0x00000008
#define SRCHFS_SKIPLINKS 			0x00000010
#define SRCHFS_SKIPINVISIBLE			0x00000020
#define SRCHFS_SKIPPACKAGES			0x00000040
#define SRCHFS_SKIPINAPPROPRIATE		0x00000080

#define SRCHFS_NEGATEPARAMS 			0x80000000
#define SRCHFS_VALIDOPTIONSMASK			0x800000FF

struct fssearchblock {
	struct attrlist		*returnattrs;
	void				*returnbuffer;
	size_t				returnbuffersize;
	u_long				maxmatches;
	struct timeval		timelimit;
	void				*searchparams1;
	size_t				sizeofsearchparams1;
	void				*searchparams2;
	size_t				sizeofsearchparams2;
	struct attrlist		searchattrs;
};

#ifdef KERNEL
/* LP64 version of fssearchblock.  all pointers and longs
 * grow when we're dealing with a 64-bit process.
 * WARNING - keep in sync with fssearchblock
 */
// LP64todo - should this move?

struct user_fssearchblock {
	user_addr_t         returnattrs;
	user_addr_t         returnbuffer;
	user_size_t         returnbuffersize;
	user_ulong_t        maxmatches;
	struct user_timeval	timelimit;
	user_addr_t         searchparams1 __attribute((aligned(8)));
	user_size_t         sizeofsearchparams1;
	user_addr_t         searchparams2;
	user_size_t         sizeofsearchparams2;
	struct attrlist		searchattrs;
};


#endif // KERNEL


struct searchstate {
	u_char				reserved[556];		//	sizeof( SearchState )
};


#define FST_EOF (-1)				/* end-of-file offset */

#endif /* __APPLE_API_UNSTABLE */
#endif /* !_SYS_ATTR_H_ */
