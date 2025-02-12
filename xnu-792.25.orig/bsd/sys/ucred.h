/*
 * Copyright (c) 2000-2004 Apple Computer, Inc. All rights reserved.
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
/* Copyright (c) 1995, 1997 Apple Computer, Inc. All Rights Reserved */
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
 *	@(#)ucred.h	8.4 (Berkeley) 1/9/95
 */

#ifndef _SYS_UCRED_H_
#define	_SYS_UCRED_H_

#include <sys/appleapiopts.h>
#include <sys/cdefs.h>
#include <sys/param.h>
#include <bsm/audit.h>

#ifdef __APPLE_API_UNSTABLE

/*
 * In-kernel credential structure.
 *
 * Note that this structure should not be used outside the kernel, nor should
 * it or copies of it be exported outside.  
 */
struct ucred {
	TAILQ_ENTRY(ucred)	cr_link; /* never modify this without KAUTH_CRED_HASH_LOCK */
	u_long	cr_ref;			/* reference count */
	
	/* credential hash depends on everything from this point on (see kauth_cred_get_hashkey) */
	uid_t	cr_uid;			/* effective user id */
	uid_t	cr_ruid;		/* real user id */
	uid_t	cr_svuid;		/* saved user id */
	short	cr_ngroups;		/* number of groups in advisory list */
	gid_t	cr_groups[NGROUPS];	/* advisory group list */
	gid_t	cr_rgid;		/* real group id */
	gid_t	cr_svgid;		/* saved group id */
	uid_t	cr_gmuid;		/* user id for group membership purposes */
	struct auditinfo cr_au;		/* user auditing data */
};
typedef struct ucred *kauth_cred_t;

/*
 * This is the external representation of struct ucred.
 */
struct xucred {
        u_int   cr_version;             /* structure layout version */
        uid_t   cr_uid;                 /* effective user id */
        short   cr_ngroups;             /* number of advisory groups */
        gid_t   cr_groups[NGROUPS];     /* advisory group list */
};
#define XUCRED_VERSION  0

#define cr_gid cr_groups[0]
#define NOCRED ((kauth_cred_t )0)	/* no credential available */
#define FSCRED ((kauth_cred_t )-1)	/* filesystem credential */

#define IS_VALID_CRED(_cr)	((_cr) != NOCRED && (_cr) != FSCRED)

#ifdef KERNEL
#ifdef __APPLE_API_OBSOLETE
__BEGIN_DECLS
int		crcmp(kauth_cred_t cr1, kauth_cred_t cr2);
int		suser(kauth_cred_t cred, u_short *acflag);
int		set_security_token(struct proc * p);
void		cru2x(kauth_cred_t cr, struct xucred *xcr);
__END_DECLS
#endif /* __APPLE_API_OBSOLETE */
#endif /* KERNEL */
#endif /* __APPLE_API_UNSTABLE */

#endif /* !_SYS_UCRED_H_ */
