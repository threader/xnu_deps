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
/* Copyright (c) 1998, 1999 Apple Computer, Inc. All Rights Reserved */
/* Copyright (c) 1995 NeXT Computer, Inc. All Rights Reserved */
/*
 * Copyright (c) 1982, 1985, 1986, 1988, 1993, 1994
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
 *	@(#)socket.h	8.4 (Berkeley) 2/21/94
 * $FreeBSD: src/sys/sys/socket.h,v 1.39.2.7 2001/07/03 11:02:01 ume Exp $
 */

#ifndef _SYS_SOCKET_H_
#define	_SYS_SOCKET_H_

#include <sys/_types.h>
#include <sys/cdefs.h>

#define _NO_NAMESPACE_POLLUTION
#include <machine/param.h>
#undef _NO_NAMESPACE_POLLUTION

/*
 * Definitions related to sockets: types, address families, options.
 */

/*
 * Data types.
 */
#ifndef _GID_T
typedef __darwin_gid_t		gid_t;
#define _GID_T
#endif

#ifndef _OFF_T
typedef __darwin_off_t		off_t;
#define _OFF_T
#endif

#ifndef _PID_T
typedef __darwin_pid_t		pid_t;
#define _PID_T
#endif

#ifndef _SA_FAMILY_T
#define _SA_FAMILY_T
typedef __uint8_t		sa_family_t;
#endif

#ifndef _SOCKLEN_T
#define _SOCKLEN_T
typedef	__darwin_socklen_t	socklen_t;
#endif

/* XXX Not explicitly defined by POSIX, but function return types are */
#ifndef _SIZE_T
#define _SIZE_T
typedef __darwin_size_t		size_t;
#endif
 
/* XXX Not explicitly defined by POSIX, but function return types are */
#ifndef	_SSIZE_T
#define	_SSIZE_T
typedef	__darwin_ssize_t	ssize_t;
#endif

/*
 * [XSI] The iovec structure shall be defined as described in <sys/uio.h>.
 */
#ifndef _STRUCT_IOVEC
#define	_STRUCT_IOVEC
struct iovec {
	void *   iov_base;	/* [XSI] Base address of I/O memory region */
	size_t	 iov_len;	/* [XSI] Size of region iov_base points to */
};
#endif
 
/*
 * Types
 */
#define	SOCK_STREAM	1		/* stream socket */
#define	SOCK_DGRAM	2		/* datagram socket */
#define	SOCK_RAW	3		/* raw-protocol interface */
#ifndef _POSIX_C_SOURCE
#define	SOCK_RDM	4		/* reliably-delivered message */
#endif	/* !_POSIX_C_SOURCE */
#define	SOCK_SEQPACKET	5		/* sequenced packet stream */

/*
 * Option flags per-socket.
 */
#define	SO_DEBUG	0x0001		/* turn on debugging info recording */
#define	SO_ACCEPTCONN	0x0002		/* socket has had listen() */
#define	SO_REUSEADDR	0x0004		/* allow local address reuse */
#define	SO_KEEPALIVE	0x0008		/* keep connections alive */
#define	SO_DONTROUTE	0x0010		/* just use interface addresses */
#define	SO_BROADCAST	0x0020		/* permit sending of broadcast msgs */
#ifndef _POSIX_C_SOURCE
#define	SO_USELOOPBACK	0x0040		/* bypass hardware when possible */
#define SO_LINGER	0x0080          /* linger on close if data present (in ticks) */
#else
#define SO_LINGER	0x1080          /* linger on close if data present (in seconds) */
#endif	/* !_POSIX_C_SOURCE */
#define	SO_OOBINLINE	0x0100		/* leave received OOB data in line */
#ifndef _POSIX_C_SOURCE
#define	SO_REUSEPORT	0x0200		/* allow local address & port reuse */
#define	SO_TIMESTAMP	0x0400		/* timestamp received dgram traffic */
#ifndef __APPLE__
#define	SO_ACCEPTFILTER	0x1000		/* there is an accept filter */
#else
#define SO_DONTTRUNC	0x2000		/* APPLE: Retain unread data */
					/*  (ATOMIC proto) */
#define SO_WANTMORE		0x4000		/* APPLE: Give hint when more data ready */
#define SO_WANTOOBFLAG	0x8000		/* APPLE: Want OOB in MSG_FLAG on receive */
#endif
#endif	/* !_POSIX_C_SOURCE */

/*
 * Additional options, not kept in so_options.
 */
#define SO_SNDBUF	0x1001		/* send buffer size */
#define SO_RCVBUF	0x1002		/* receive buffer size */
#define SO_SNDLOWAT	0x1003		/* send low-water mark */
#define SO_RCVLOWAT	0x1004		/* receive low-water mark */
#define SO_SNDTIMEO	0x1005		/* send timeout */
#define SO_RCVTIMEO	0x1006		/* receive timeout */
#define	SO_ERROR	0x1007		/* get error status and clear */
#define	SO_TYPE		0x1008		/* get socket type */
#ifndef _POSIX_C_SOURCE
/*efine	SO_PRIVSTATE	0x1009		   get/deny privileged state */
#ifdef __APPLE__
#define SO_NREAD	0x1020		/* APPLE: get 1st-packet byte count */
#define SO_NKE		0x1021		/* APPLE: Install socket-level NKE */
#define SO_NOSIGPIPE	0x1022		/* APPLE: No SIGPIPE on EPIPE */
#define SO_NOADDRERR	0x1023		/* APPLE: Returns EADDRNOTAVAIL when src is not available anymore */
#define SO_NWRITE	0x1024		/* APPLE: Get number of bytes currently in send socket buffer */
#define SO_LINGER_SEC	0x1080          /* linger on close if data present (in seconds) */
#endif
#endif	/* !_POSIX_C_SOURCE */

/*
 * Structure used for manipulating linger option.
 */
struct	linger {
	int	l_onoff;		/* option on/off */
	int	l_linger;		/* linger time */
};

#ifndef __APPLE__
struct	accept_filter_arg {
	char	af_name[16];
	char	af_arg[256-16];
};
#endif

/*
 * Level number for (get/set)sockopt() to apply to socket itself.
 */
#define	SOL_SOCKET	0xffff		/* options for socket level */

/*
 * Address families.
 */
#define	AF_UNSPEC	0		/* unspecified */
#define	AF_UNIX		1		/* local to host (pipes) */
#ifndef _POSIX_C_SOURCE
#define	AF_LOCAL	AF_UNIX		/* backward compatibility */
#endif	/* !_POSIX_C_SOURCE */
#define	AF_INET		2		/* internetwork: UDP, TCP, etc. */
#ifndef _POSIX_C_SOURCE
#define	AF_IMPLINK	3		/* arpanet imp addresses */
#define	AF_PUP		4		/* pup protocols: e.g. BSP */
#define	AF_CHAOS	5		/* mit CHAOS protocols */
#define	AF_NS		6		/* XEROX NS protocols */
#define	AF_ISO		7		/* ISO protocols */
#define	AF_OSI		AF_ISO
#define	AF_ECMA		8		/* European computer manufacturers */
#define	AF_DATAKIT	9		/* datakit protocols */
#define	AF_CCITT	10		/* CCITT protocols, X.25 etc */
#define	AF_SNA		11		/* IBM SNA */
#define AF_DECnet	12		/* DECnet */
#define AF_DLI		13		/* DEC Direct data link interface */
#define AF_LAT		14		/* LAT */
#define	AF_HYLINK	15		/* NSC Hyperchannel */
#define	AF_APPLETALK	16		/* Apple Talk */
#define	AF_ROUTE	17		/* Internal Routing Protocol */
#define	AF_LINK		18		/* Link layer interface */
#define	pseudo_AF_XTP	19		/* eXpress Transfer Protocol (no AF) */
#define	AF_COIP		20		/* connection-oriented IP, aka ST II */
#define	AF_CNT		21		/* Computer Network Technology */
#define pseudo_AF_RTIP	22		/* Help Identify RTIP packets */
#define	AF_IPX		23		/* Novell Internet Protocol */
#define	AF_SIP		24		/* Simple Internet Protocol */
#define pseudo_AF_PIP	25		/* Help Identify PIP packets */
#ifdef __APPLE__
/*define pseudo_AF_BLUE	26	   Identify packets for Blue Box - Not used */
#define AF_NDRV		27		/* Network Driver 'raw' access */
#endif
#define	AF_ISDN		28		/* Integrated Services Digital Network*/
#define	AF_E164		AF_ISDN		/* CCITT E.164 recommendation */
#define	pseudo_AF_KEY	29		/* Internal key-management function */
#endif	/* !_POSIX_C_SOURCE */
#define	AF_INET6	30		/* IPv6 */
#ifndef _POSIX_C_SOURCE
#define	AF_NATM		31		/* native ATM access */
#ifdef __APPLE__
#define AF_SYSTEM	32		/* Kernel event messages */
#define AF_NETBIOS	33		/* NetBIOS */
#define AF_PPP		34		/* PPP communication protocol */
#else
#define	AF_ATM		30		/* ATM */
#endif
#define pseudo_AF_HDRCMPLT 35		/* Used by BPF to not rewrite headers
					 * in interface output routine
					 */
#ifdef PRIVATE
#define AF_AFP	36			/* Used by AFP */
#else
#define AF_RESERVED_36	36		/* Reserved for internal usage */
#endif

#ifndef __APPLE__
#define	AF_NETGRAPH	32		/* Netgraph sockets */
#endif
#define	AF_MAX		37
#endif	/* !_POSIX_C_SOURCE */

/*
 * [XSI] Structure used by kernel to store most addresses.
 */
struct sockaddr {
	__uint8_t	sa_len;		/* total length */
	sa_family_t	sa_family;	/* [XSI] address family */
	char		sa_data[14];	/* [XSI] addr value (actually larger) */
};

#ifndef _POSIX_C_SOURCE
#define	SOCK_MAXADDRLEN	255		/* longest possible addresses */

/*
 * Structure used by kernel to pass protocol
 * information in raw sockets.
 */
struct sockproto {
	__uint16_t	sp_family;		/* address family */
	__uint16_t	sp_protocol;		/* protocol */
};
#endif	/* !_POSIX_C_SOURCE*/

/*
 * RFC 2553: protocol-independent placeholder for socket addresses
 */
#define	_SS_MAXSIZE	128
#define	_SS_ALIGNSIZE	(sizeof(__int64_t))
#define	_SS_PAD1SIZE	\
		(_SS_ALIGNSIZE - sizeof(__uint8_t) - sizeof(sa_family_t))
#define	_SS_PAD2SIZE	\
		(_SS_MAXSIZE - sizeof(__uint8_t) - sizeof(sa_family_t) - \
				_SS_PAD1SIZE - _SS_ALIGNSIZE)

/*
 * [XSI] sockaddr_storage
 */
struct sockaddr_storage {
	__uint8_t	ss_len;		/* address length */
	sa_family_t	ss_family;	/* [XSI] address family */
	char			__ss_pad1[_SS_PAD1SIZE];
	__int64_t	__ss_align;	/* force structure storage alignment */
	char			__ss_pad2[_SS_PAD2SIZE];
};

/*
 * Protocol families, same as address families for now.
 */
#define	PF_UNSPEC	AF_UNSPEC
#define	PF_LOCAL	AF_LOCAL
#define	PF_UNIX		PF_LOCAL	/* backward compatibility */
#define	PF_INET		AF_INET
#define	PF_IMPLINK	AF_IMPLINK
#define	PF_PUP		AF_PUP
#define	PF_CHAOS	AF_CHAOS
#define	PF_NS		AF_NS
#define	PF_ISO		AF_ISO
#define	PF_OSI		AF_ISO
#define	PF_ECMA		AF_ECMA
#define	PF_DATAKIT	AF_DATAKIT
#define	PF_CCITT	AF_CCITT
#define	PF_SNA		AF_SNA
#define PF_DECnet	AF_DECnet
#define PF_DLI		AF_DLI
#define PF_LAT		AF_LAT
#define	PF_HYLINK	AF_HYLINK
#define	PF_APPLETALK	AF_APPLETALK
#define	PF_ROUTE	AF_ROUTE
#define	PF_LINK		AF_LINK
#define	PF_XTP		pseudo_AF_XTP	/* really just proto family, no AF */
#define	PF_COIP		AF_COIP
#define	PF_CNT		AF_CNT
#define	PF_SIP		AF_SIP
#define	PF_IPX		AF_IPX		/* same format as AF_NS */
#define PF_RTIP		pseudo_AF_RTIP	/* same format as AF_INET */
#define PF_PIP		pseudo_AF_PIP
#ifdef __APPLE__
#define PF_NDRV		AF_NDRV
#endif
#define	PF_ISDN		AF_ISDN
#define	PF_KEY		pseudo_AF_KEY
#define	PF_INET6	AF_INET6
#define	PF_NATM		AF_NATM
#ifdef __APPLE__
#define PF_SYSTEM	AF_SYSTEM
#define PF_NETBIOS	AF_NETBIOS
#define PF_PPP		AF_PPP
#ifdef PRIVATE
#define PF_AFP   	AF_AFP
#else
#define PF_RESERVED_36  AF_RESERVED_36
#endif

#else
#define	PF_ATM		AF_ATM
#define	PF_NETGRAPH	AF_NETGRAPH
#endif

#define	PF_MAX		AF_MAX

/*
 * These do not have socket-layer support:
 */
#define	PF_VLAN		((uint32_t)0x766c616e)	/* 'vlan' */
#define PF_BOND		((uint32_t)0x626f6e64)	/* 'bond' */

/*
 * Definitions for network related sysctl, CTL_NET.
 *
 * Second level is protocol family.
 * Third level is protocol number.
 *
 * Further levels are defined by the individual families below.
 */
#define NET_MAXID	AF_MAX


#ifdef KERNEL_PRIVATE
#define CTL_NET_NAMES { \
	{ 0, 0 }, \
	{ "local", CTLTYPE_NODE }, \
	{ "inet", CTLTYPE_NODE }, \
	{ "implink", CTLTYPE_NODE }, \
	{ "pup", CTLTYPE_NODE }, \
	{ "chaos", CTLTYPE_NODE }, \
	{ "xerox_ns", CTLTYPE_NODE }, \
	{ "iso", CTLTYPE_NODE }, \
	{ "emca", CTLTYPE_NODE }, \
	{ "datakit", CTLTYPE_NODE }, \
	{ "ccitt", CTLTYPE_NODE }, \
	{ "ibm_sna", CTLTYPE_NODE }, \
	{ "decnet", CTLTYPE_NODE }, \
	{ "dec_dli", CTLTYPE_NODE }, \
	{ "lat", CTLTYPE_NODE }, \
	{ "hylink", CTLTYPE_NODE }, \
	{ "appletalk", CTLTYPE_NODE }, \
	{ "route", CTLTYPE_NODE }, \
	{ "link_layer", CTLTYPE_NODE }, \
	{ "xtp", CTLTYPE_NODE }, \
	{ "coip", CTLTYPE_NODE }, \
	{ "cnt", CTLTYPE_NODE }, \
	{ "rtip", CTLTYPE_NODE }, \
	{ "ipx", CTLTYPE_NODE }, \
	{ "sip", CTLTYPE_NODE }, \
	{ "pip", CTLTYPE_NODE }, \
	{ 0, 0 }, \
	{ "ndrv", CTLTYPE_NODE }, \
	{ "isdn", CTLTYPE_NODE }, \
	{ "key", CTLTYPE_NODE }, \
	{ "inet6", CTLTYPE_NODE }, \
	{ "natm", CTLTYPE_NODE }, \
	{ "sys", CTLTYPE_NODE }, \
	{ "netbios", CTLTYPE_NODE }, \
	{ "ppp", CTLTYPE_NODE }, \
	{ "hdrcomplete", CTLTYPE_NODE }, \
}
#endif KERNEL_PRIVATE

/*
 * PF_ROUTE - Routing table
 *
 * Three additional levels are defined:
 *	Fourth: address family, 0 is wildcard
 *	Fifth: type of info, defined below
 *	Sixth: flag(s) to mask with for NET_RT_FLAGS
 */
#define NET_RT_DUMP			1		/* dump; may limit to a.f. */
#define NET_RT_FLAGS		2		/* by flags, e.g. RESOLVING */
#define NET_RT_IFLIST		3		/* survey interface list */
#define NET_RT_STAT			4		/* routing statistics */
#define NET_RT_TRASH		5		/* routes not in table but not freed */
#define NET_RT_IFLIST2	6		/* interface list with addresses */
#define NET_RT_DUMP2                     7               /* dump; may limit to a.f. */
#define	NET_RT_MAXID		8

#ifdef KERNEL_PRIVATE
#define CTL_NET_RT_NAMES { \
	{ 0, 0 }, \
	{ "dump", CTLTYPE_STRUCT }, \
	{ "flags", CTLTYPE_STRUCT }, \
	{ "iflist", CTLTYPE_STRUCT }, \
	{ "stat", CTLTYPE_STRUCT }, \
	{ "trash", CTLTYPE_INT }, \
	{ "iflist2", CTLTYPE_STRUCT }, \
        { "dump2", CTLTYPE_STRUCT }, \
}

#endif KERNEL_PRIVATE

/*
 * Maximum queue length specifiable by listen.
 */
#define	SOMAXCONN	128

/*
 * [XSI] Message header for recvmsg and sendmsg calls.
 * Used value-result for recvmsg, value only for sendmsg.
 */
struct msghdr {
	void		*msg_name;	/* [XSI] optional address */
	socklen_t	msg_namelen;	/* [XSI] size of address */
	struct		iovec *msg_iov;	/* [XSI] scatter/gather array */
	int		msg_iovlen;	/* [XSI] # elements in msg_iov */
	void		*msg_control;	/* [XSI] ancillary data, see below */
	socklen_t	msg_controllen;	/* [XSI] ancillary data buffer len */
	int		msg_flags;	/* [XSI] flags on received message */
};

// LP64todo - should this move?
#ifdef KERNEL
/* LP64 version of struct msghdr.  all pointers 
 * grow when we're dealing with a 64-bit process.
 * WARNING - keep in sync with struct msghdr
 */

struct user_msghdr {
	user_addr_t	msg_name;		/* optional address */
	socklen_t	msg_namelen;		/* size of address */
	user_addr_t	msg_iov __attribute((aligned(8)));		/* scatter/gather array */
	int		msg_iovlen;		/* # elements in msg_iov */
	user_addr_t	msg_control __attribute((aligned(8)));		/* ancillary data, see below */
	socklen_t	msg_controllen;		/* ancillary data buffer len */
	int		msg_flags;		/* flags on received message */
};

#endif // KERNEL

#define	MSG_OOB		0x1		/* process out-of-band data */
#define	MSG_PEEK	0x2		/* peek at incoming message */
#define	MSG_DONTROUTE	0x4		/* send without using routing tables */
#define	MSG_EOR		0x8		/* data completes record */
#define	MSG_TRUNC	0x10		/* data discarded before delivery */
#define	MSG_CTRUNC	0x20		/* control data lost before delivery */
#define	MSG_WAITALL	0x40		/* wait for full request or error */
#ifndef _POSIX_C_SOURCE
#define	MSG_DONTWAIT	0x80		/* this message should be nonblocking */
#define	MSG_EOF		0x100		/* data completes connection */
#ifdef __APPLE__
#define MSG_WAITSTREAM  0x200           /* wait up to full request.. may return partial */
#define MSG_FLUSH	0x400		/* Start of 'hold' seq; dump so_temp */
#define MSG_HOLD	0x800		/* Hold frag in so_temp */
#define MSG_SEND	0x1000		/* Send the packet in so_temp */
#define MSG_HAVEMORE	0x2000		/* Data ready to be read */
#define MSG_RCVMORE	0x4000		/* Data remains in current pkt */
#endif
#define MSG_COMPAT      0x8000		/* used in sendit() */
#define MSG_NEEDSA	0x10000		/* Fail receive if socket address cannot be allocated */
#ifdef KERNEL_PRIVATE
#define MSG_NBIO	0x20000		/* FIONBIO mode, used by fifofs */
#endif
#ifdef	KERNEL
#define MSG_USEUPCALL	0x80000000 /* Inherit upcall in sock_accept */
#endif
#endif	/* !_POSIX_C_SOURCE */

/*
 * Header for ancillary data objects in msg_control buffer.
 * Used for additional information with/about a datagram
 * not expressible by flags.  The format is a sequence
 * of message elements headed by cmsghdr structures.
 */
struct cmsghdr {
	socklen_t	cmsg_len;	/* [XSI] data byte count, including hdr */
	int		cmsg_level;	/* [XSI] originating protocol */
	int		cmsg_type;	/* [XSI] protocol-specific type */
/* followed by	unsigned char  cmsg_data[]; */
};

#ifndef _POSIX_C_SOURCE
#ifndef __APPLE__
/*
 * While we may have more groups than this, the cmsgcred struct must
 * be able to fit in an mbuf, and NGROUPS_MAX is too large to allow
 * this.
*/
#define CMGROUP_MAX 16

/*
 * Credentials structure, used to verify the identity of a peer
 * process that has sent us a message. This is allocated by the
 * peer process but filled in by the kernel. This prevents the
 * peer from lying about its identity. (Note that cmcred_groups[0]
 * is the effective GID.)
 */
struct cmsgcred {
	pid_t	cmcred_pid;		/* PID of sending process */
	uid_t	cmcred_uid;		/* real UID of sending process */
	uid_t	cmcred_euid;		/* effective UID of sending process */
	gid_t	cmcred_gid;		/* real GID of sending process */
	short	cmcred_ngroups;		/* number or groups */
	gid_t	cmcred_groups[CMGROUP_MAX];	/* groups */
};
#endif
#endif	/* !_POSIX_C_SOURCE */

/* given pointer to struct cmsghdr, return pointer to data */
#define	CMSG_DATA(cmsg)		((unsigned char *)(cmsg) + \
				 ALIGN(sizeof(struct cmsghdr)))

/* given pointer to struct cmsghdr, return pointer to next cmsghdr */
#define	CMSG_NXTHDR(mhdr, cmsg)	\
	(((unsigned char *)(cmsg) + ALIGN((cmsg)->cmsg_len) + \
	  ALIGN(sizeof(struct cmsghdr)) > \
	    (unsigned char *)(mhdr)->msg_control + (mhdr)->msg_controllen) ? \
	    (struct cmsghdr *)0 /* NULL */ : \
	    (struct cmsghdr *)((unsigned char *)(cmsg) + ALIGN((cmsg)->cmsg_len)))

#define	CMSG_FIRSTHDR(mhdr)	((struct cmsghdr *)(mhdr)->msg_control)

#ifndef _POSIX_C_SOURCE
/* RFC 2292 additions */
#define	CMSG_SPACE(l)		(ALIGN(sizeof(struct cmsghdr)) + ALIGN(l))
#define	CMSG_LEN(l)		(ALIGN(sizeof(struct cmsghdr)) + (l))

#ifdef KERNEL
#define	CMSG_ALIGN(n)	ALIGN(n)
#endif
#endif	/* !_POSIX_C_SOURCE */

/* "Socket"-level control message types: */
#define	SCM_RIGHTS	0x01		/* access rights (array of int) */
#ifndef _POSIX_C_SOURCE
#define	SCM_TIMESTAMP	0x02		/* timestamp (struct timeval) */
#define	SCM_CREDS	0x03		/* process creds (struct cmsgcred) */

/*
 * 4.3 compat sockaddr, move to compat file later
 */
struct osockaddr {
	__uint16_t	sa_family;	/* address family */
	char	sa_data[14];		/* up to 14 bytes of direct address */
};

/*
 * 4.3-compat message header (move to compat file later).
 */
	// LP64todo - fix this.  should msg_iov be * iovec_64?
struct omsghdr {
	void		*msg_name;		/* optional address */
	socklen_t	msg_namelen;		/* size of address */
	struct	iovec	*msg_iov;		/* scatter/gather array */
	int		msg_iovlen;		/* # elements in msg_iov */
	void		*msg_accrights;		/* access rights sent/rcvd */
	int		msg_accrightslen;
};
#endif	/* !_POSIX_C_SOURCE */

/*
 * howto arguments for shutdown(2), specified by Posix.1g.
 */
#define	SHUT_RD		0		/* shut down the reading side */
#define	SHUT_WR		1		/* shut down the writing side */
#define	SHUT_RDWR	2		/* shut down both sides */

#ifndef _POSIX_C_SOURCE
#if SENDFILE
/*
 * sendfile(2) header/trailer struct
 */
struct sf_hdtr {
	struct iovec *headers;	/* pointer to an array of header struct iovec's */
	int hdr_cnt;		/* number of header iovec's */
	struct iovec *trailers;	/* pointer to an array of trailer struct iovec's */
	int trl_cnt;		/* number of trailer iovec's */
};
#endif
#endif	/* !_POSIX_C_SOURCE */

#ifndef	KERNEL
__BEGIN_DECLS
int	accept(int, struct sockaddr * __restrict, socklen_t * __restrict)
		__DARWIN_ALIAS(accept);
int	bind(int, const struct sockaddr *, socklen_t) __DARWIN_ALIAS(bind);
int	connect(int, const struct sockaddr *, socklen_t) __DARWIN_ALIAS( connect);
int	getpeername(int, struct sockaddr * __restrict, socklen_t * __restrict)
		__DARWIN_ALIAS(getpeername);
int	getsockname(int, struct sockaddr * __restrict, socklen_t * __restrict)
		__DARWIN_ALIAS(getsockname);
int	getsockopt(int, int, int, void * __restrict, socklen_t * __restrict);
int	listen(int, int) __DARWIN_ALIAS(listen);
ssize_t	recv(int, void *, size_t, int) __DARWIN_ALIAS(recv);
ssize_t	recvfrom(int, void *, size_t, int, struct sockaddr * __restrict,
		socklen_t * __restrict) __DARWIN_ALIAS(recvfrom);
ssize_t	recvmsg(int, struct msghdr *, int) __DARWIN_ALIAS(recvmsg);
ssize_t	send(int, const void *, size_t, int) __DARWIN_ALIAS(send);
ssize_t	sendmsg(int, const struct msghdr *, int) __DARWIN_ALIAS(sendmsg);
ssize_t	sendto(int, const void *, size_t,
		int, const struct sockaddr *, socklen_t) __DARWIN_ALIAS(sendto);
int	setsockopt(int, int, int, const void *, socklen_t);
int	shutdown(int, int);
int	socket(int, int, int);
int	socketpair(int, int, int, int *) __DARWIN_ALIAS(socketpair);
/*
 * NOTIMP:
 * int sockatmark(int s);
 */

#ifndef _POSIX_C_SOURCE
#if SENDFILE
int	sendfile(int, int, off_t, size_t, struct sf_hdtr *, off_t *, int);
#endif
void	pfctlinput(int, struct sockaddr *);
#endif	/* !_POSIX_C_SOURCE */
__END_DECLS

#endif /* !KERNEL */

#ifdef KERNEL
#include <sys/kpi_socket.h>
#endif

#endif /* !_SYS_SOCKET_H_ */
