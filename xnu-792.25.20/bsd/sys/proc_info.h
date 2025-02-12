/*
 * Copyright (c) 2005 Apple Computer, Inc. All rights reserved.
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

#ifndef _SYS_PROC_INFO_H
#define _SYS_PROC_INFO_H

#include <sys/cdefs.h>
#include <sys/param.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/mount.h>
#include <sys/socket.h>
#include <sys/un.h>
#include <sys/kern_control.h>
#include <net/if.h>
#include <net/route.h>
#include <netinet/in.h>
#include <netinet/tcp.h>

__BEGIN_DECLS


#define PROC_ALL_PIDS 		1
#define PROC_PGRP_ONLY		2
#define PROC_TTY_ONLY		3
#define PROC_UID_ONLY		4
#define PROC_RUID_ONLY		5

struct proc_bsdinfo {
	uint32_t		pbi_flags;		/* 64bit; emulated etc */
	uint32_t		pbi_status;
	uint32_t		pbi_xstatus;
	uint32_t		pbi_pid;
	uint32_t		pbi_ppid;
	uid_t			pbi_uid;
	gid_t			pbi_gid;
	uid_t			pbi_ruid;
	gid_t			pbi_rgid;
	uid_t			pbi_svuid;
	gid_t			pbi_svgid;
	char			pbi_comm[MAXCOMLEN + 1];
	char			pbi_name[2*MAXCOMLEN + 1];	/* empty if no name is registered */
	uint32_t		pbi_nfiles;
	uint32_t		pbi_pgid;
	uint32_t		pbi_pjobc;
	uint32_t		e_tdev;			/* controlling tty dev */
	uint32_t		e_tpgid;		/* tty process group id */
	struct timeval 		pbi_start;
	int32_t			pbi_nice;
};



/* pbi_flags values */
#define PROC_FLAG_SYSTEM	1
#define PROC_FLAG_TRACED	2
#define PROC_FLAG_INEXIT	4
#define PROC_FLAG_PPWAIT	8
#define PROC_FLAG_LP64		0x10
#define PROC_FLAG_SLEADER	0x20
#define PROC_FLAG_CTTY		0x40
#define PROC_FLAG_CONTROLT	0x80


struct proc_taskinfo {
	uint64_t		pti_virtual_size;   /* virtual memory size (bytes) */
	uint64_t		pti_resident_size;  /* resident memory size (bytes) */
	uint64_t		pti_total_user;		/* total time */
	uint64_t		pti_total_system;
	uint64_t		pti_threads_user;	/* existing threads only */
	uint64_t		pti_threads_system;
	int32_t			pti_policy;		/* default policy for new threads */
	int32_t			pti_faults;		/* number of page faults */
	int32_t			pti_pageins;	/* number of actual pageins */
	int32_t			pti_cow_faults;	/* number of copy-on-write faults */
	int32_t			pti_messages_sent;	/* number of messages sent */
	int32_t			pti_messages_received; /* number of messages received */
	int32_t			pti_syscalls_mach;  /* number of mach system calls */
	int32_t			pti_syscalls_unix;  /* number of unix system calls */
	int32_t			pti_csw;            /* number of context switches */
	int32_t			pti_threadnum;		/* number of threads in the task */
	int32_t			pti_numrunning;		/* number of running threads */
	int32_t			pti_priority;		/* task priority*/
};

struct proc_taskallinfo {
	struct  proc_bsdinfo pbsd;
	struct  proc_taskinfo ptinfo;
};


struct proc_threadinfo {
	uint64_t		pth_user_time;      /* user run time */
	uint64_t		pth_system_time;    /* system run time */
	int32_t			pth_cpu_usage;      /* scaled cpu usage percentage */
	int32_t			pth_policy;		/* scheduling policy in effect */
	int32_t			pth_run_state;      /* run state (see below) */
	int32_t			pth_flags;          /* various flags (see below) */
	int32_t			pth_sleep_time;     /* number of seconds that thread */
	int32_t			pth_curpri;		/* cur priority*/
	int32_t			pth_priority;		/*  priority*/
	int32_t			pth_maxpriority;		/* max priority*/
};

struct proc_regioninfo {
	uint32_t		pri_protection;
	uint32_t		pri_max_protection;
	uint32_t		pri_inheritance;
	uint32_t		pri_flags;		/* shared, external pager, is submap */
	uint64_t		pri_offset;
	uint32_t		pri_behavior;
	uint32_t		pri_user_wired_count;
	uint32_t		pri_user_tag;
	uint32_t		pri_pages_resident;
	uint32_t		pri_pages_shared_now_private;
    	uint32_t		pri_pages_swapped_out;
    	uint32_t		pri_pages_dirtied;
    	uint32_t		pri_ref_count;
    	uint32_t		pri_shadow_depth;
    	uint32_t		pri_share_mode;
	uint32_t		pri_private_pages_resident;
	uint32_t		pri_shared_pages_resident;
	uint32_t		pri_obj_id;
	uint64_t		pri_address;
	uint64_t		pri_size;
	uint32_t		pri_depth;
};

#define PROC_REGION_SUBMAP	1
#define PROC_REGION_SHARED	2

#define SM_COW             1
#define SM_PRIVATE         2
#define SM_EMPTY           3
#define SM_SHARED          4
#define SM_TRUESHARED      5
#define SM_PRIVATE_ALIASED 6
#define SM_SHARED_ALIASED  7


/*
 *	Thread run states (state field).
 */

#define TH_STATE_RUNNING	1	/* thread is running normally */
#define TH_STATE_STOPPED	2	/* thread is stopped */
#define TH_STATE_WAITING	3	/* thread is waiting normally */
#define TH_STATE_UNINTERRUPTIBLE 4	/* thread is in an uninterruptible
					   wait */
#define TH_STATE_HALTED		5	/* thread is halted at a
					   clean point */

/*
 *	Thread flags (flags field).
 */
#define TH_FLAGS_SWAPPED	0x1	/* thread is swapped out */
#define TH_FLAGS_IDLE		0x2	/* thread is an idle thread */



struct proc_fileinfo {
	uint32_t		fi_openflags;
	uint32_t		fi_status;	
	off_t			fi_offset;
	int32_t			fi_type;
};


struct vnode_info {
	struct stat 	vi_stat;
	int		vi_type;
	fsid_t		vi_fsid;
};

struct vnode_info_path {
	struct vnode_info	vip_vi;
	char vip_path[MAXPATHLEN];  /* tail end of it  */
};

struct vnode_fdinfo {
	struct proc_fileinfo pfi;
	struct vnode_info	pvi;
};

struct vnode_fdinfowithpath {
	struct proc_fileinfo pfi;
	struct vnode_info_path pvip;

};


struct proc_regionwithpathinfo {
	struct proc_regioninfo prp_prinfo;
	struct vnode_info_path prp_vip;
};

struct proc_vnodepathinfo {
	struct vnode_info_path pvi_cdir;
	struct vnode_info_path pvi_rdir;
};


/*
 *  Socket 
 */


/*
 * IPv4 and IPv6 Sockets
 */

#define INI_IPV4        0x1
#define INI_IPV6        0x2

struct in4in6_addr {
        u_int32_t       i46a_pad32[3];
        struct  in_addr i46a_addr4;
};

struct in_sockinfo {
	int						insi_fport;		/* foreign port */
	int						insi_lport;		/* local port */
	uint64_t				insi_gencnt;		/* generation count of this instance */
	uint32_t				insi_flags;		/* generic IP/datagram flags */
	uint32_t				insi_flow;

	uint8_t					insi_vflag;		/* ini_IPV4 or ini_IPV6 */
	uint8_t					insi_ip_ttl;	/* time to live proto */
	/* protocol dependent part */
	union {
		struct in4in6_addr		ina_46;
		struct in6_addr			ina_6;
	} 						insi_faddr;		/* foreign host table entry */
	union {
		struct in4in6_addr		ina_46;
		struct in6_addr			ina_6;
	} 						insi_laddr;		/* local host table entry */
	struct {
		u_char 					in4_tos;	/* type of service  */
	} 						insi_v4;
	struct {
		uint8_t					in6_hlim;
		int						in6_cksum;
		u_short					in6_ifindex;
		short					in6_hops;
	} 						insi_v6;
};

/*
 * TCP Sockets
 */

#define TSI_T_REXMT			0		/* retransmit */
#define TSI_T_PERSIST		1		/* retransmit persistence */
#define TSI_T_KEEP			2		/* keep alive */
#define TSI_T_2MSL			3		/* 2*msl quiet time timer */
#define TSI_T_NTIMERS		4

#define TSI_S_CLOSED		0       /* closed */
#define TSI_S_LISTEN		1       /* listening for connection */
#define TSI_S_SYN_SENT		2       /* active, have sent syn */
#define TSI_S_SYN_RECEIVED	3       /* have send and received syn */
#define TSI_S_ESTABLISHED	4       /* established */
#define TSI_S__CLOSE_WAIT	5       /* rcvd fin, waiting for close */
#define TSI_S_FIN_WAIT_1	6       /* have closed, sent fin */
#define TSI_S_CLOSING		7       /* closed xchd FIN; await FIN ACK */
#define TSI_S_LAST_ACK		8       /* had fin and close; await FIN ACK */
#define TSI_S_FIN_WAIT_2	9       /* have closed, fin is acked */
#define TSI_S_TIME_WAIT		10      /* in 2*msl quiet wait after close */
#define TSI_S_RESERVED		11      /* pseudo state: reserved */

struct tcp_sockinfo {
	struct in_sockinfo 		tcpsi_ini;
	int 					tcpsi_state;
	int 					tcpsi_timer[TSI_T_NTIMERS];
	int						tcpsi_mss;
	uint32_t				tcpsi_flags;
	uint64_t				tcpsi_tp;	/* opaque handle of TCP protocol control block */
};

/*
 * Unix Domain Sockets
 */


struct un_sockinfo {
	uint64_t					unsi_conn_so;	/* opaque handle of connected socket */
	uint64_t					unsi_conn_pcb;	/* opaque handle of connected protocol control block */
	union {
		struct  sockaddr_un 	ua_sun;
		char					ua_dummy[SOCK_MAXADDRLEN];
	} 							unsi_addr;		/* bound address */
	union {
		struct  sockaddr_un 	ua_sun;
		char					ua_dummy[SOCK_MAXADDRLEN];
	} 							unsi_caddr;		/* address of socket connected to */
};

/*
 * PF_NDRV Sockets
 */

struct ndrv_info {
	uint32_t				ndrvsi_if_family;
	uint32_t				ndrvsi_if_unit;
	char					ndrvsi_if_name[IF_NAMESIZE];
};

/*
 * Kernel Event Sockets
 */

struct kern_event_info {
     uint32_t         		kesi_vendor_code_filter;
     uint32_t         		kesi_class_filter;
     uint32_t         		kesi_subclass_filter;
};	

/*
 * Kernel Control Sockets
 */

struct kern_ctl_info {
	uint32_t				kcsi_id;
	uint32_t				kcsi_reg_unit;
	uint32_t				kcsi_flags;                  /* support flags */
	uint32_t				kcsi_recvbufsize;            /* request more than the default buffer size */
	uint32_t				kcsi_sendbufsize;            /* request more than the default buffer size */
	uint32_t				kcsi_unit;
	char					kcsi_name[MAX_KCTL_NAME];	/* unique nke identifier, provided by DTS */
};

/* soi_state */

#define SOI_S_NOFDREF				0x0001	/* no file table ref any more */
#define SOI_S_ISCONNECTED			0x0002	/* socket connected to a peer */
#define SOI_S_ISCONNECTING			0x0004	/* in process of connecting to peer */
#define SOI_S_ISDISCONNECTING		0x0008	/* in process of disconnecting */
#define SOI_S_CANTSENDMORE			0x0010	/* can't send more data to peer */
#define SOI_S_CANTRCVMORE			0x0020	/* can't receive more data from peer */
#define SOI_S_RCVATMARK				0x0040	/* at mark on input */
#define SOI_S_PRIV					0x0080	/* privileged for broadcast, raw... */
#define SOI_S_NBIO					0x0100	/* non-blocking ops */
#define SOI_S_ASYNC					0x0200	/* async i/o notify */
#define SOI_S_INCOMP				0x0800	/* Unaccepted, incomplete connection */
#define SOI_S_COMP					0x1000	/* unaccepted, complete connection */
#define SOI_S_ISDISCONNECTED		0x2000	/* socket disconnected from peer */
#define SOI_S_DRAINING				0x4000	/* close waiting for blocked system calls to drain */

struct sockbuf_info {
	uint32_t			sbi_cc;
	uint32_t			sbi_hiwat;			/* SO_RCVBUF, SO_SNDBUF */
	uint32_t			sbi_mbcnt;
	uint32_t			sbi_mbmax;
	uint32_t			sbi_lowat;
	short				sbi_flags;
	short				sbi_timeo;
};

enum {
	SOCKINFO_GENERIC 	= 0,
	SOCKINFO_IN			= 1,
	SOCKINFO_TCP		= 2,
	SOCKINFO_UN			= 3,
	SOCKINFO_NDRV		= 4,
	SOCKINFO_KERN_EVENT	= 5,
	SOCKINFO_KERN_CTL	= 6
};

struct socket_info {
	struct stat 			soi_stat;
	uint64_t				soi_so;		/* opaque handle of socket */
	uint64_t				soi_pcb;	/* opaque handle of protocol control block */
	int						soi_type;
	int						soi_protocol;
	int						soi_family;
	short					soi_options;
	short					soi_linger;
	short					soi_state;
	short					soi_qlen;
	short					soi_incqlen;
	short					soi_qlimit;
	short					soi_timeo;
	u_short					soi_error;
	uint32_t				soi_oobmark;
	struct sockbuf_info		soi_rcv;
	struct sockbuf_info		soi_snd;
	int						soi_kind;
	union {
		struct in_sockinfo		pri_in;			/* SOCKINFO_IN */
		struct tcp_sockinfo		pri_tcp;		/* SOCKINFO_TCP */
		struct un_sockinfo		pri_un;			/* SOCKINFO_UN */
		struct ndrv_info		pri_ndrv;		/* SOCKINFO_NDRV */
		struct kern_event_info	pri_kern_event;	/* SOCKINFO_KERN_EVENT */
		struct kern_ctl_info	pri_kern_ctl;	/* SOCKINFO_KERN_CTL */
	} 						soi_proto;
};

struct socket_fdinfo {
	struct proc_fileinfo pfi;
	struct socket_info  psi;
};



struct psem_info {
	struct stat 	psem_stat;
	char			psem_name[MAXPATHLEN];
};

struct psem_fdinfo {
	struct proc_fileinfo pfi;
	struct psem_info	pseminfo;
};



struct pshm_info  {
	struct stat		pshm_stat;
	uint64_t		pshm_mappaddr;
	char			pshm_name[MAXPATHLEN];
};

struct pshm_fdinfo {
	struct proc_fileinfo pfi;
	struct pshm_info pshminfo;
};


struct pipe_info {
	struct stat pipe_stat;
	uint64_t	pipe_handle;
	uint64_t	pipe_peerhandle;
	int			pipe_status;
};

struct pipe_fdinfo {
	struct proc_fileinfo pfi;
	struct pipe_info	pipeinfo;
};


struct kqueue_info {
	struct stat 	kq_stat;
	uint32_t	kq_state;
};
#define PROC_KQUEUE_SELECT	1
#define PROC_KQUEUE_SLEEP	2

struct kqueue_fdinfo {
	struct proc_fileinfo pfi;
	struct kqueue_info	kqueueinfo;
};

struct appletalk_info {
	struct stat 	atalk_stat;
};

struct appletalk_fdinfo {
	struct proc_fileinfo pfi;
	struct appletalk_info appletalkinfo;
};



/* defns of process file desc type */
#define PROX_FDTYPE_ATALK 	0
#define PROX_FDTYPE_VNODE 	1
#define PROX_FDTYPE_SOCKET 	2
#define PROX_FDTYPE_PSHM 	3
#define PROX_FDTYPE_PSEM 	4
#define PROX_FDTYPE_KQUEUE 	5
#define PROX_FDTYPE_PIPE 	6
#define PROX_FDTYPE_FSEVENTS 	7

struct proc_fdinfo {
	int32_t	proc_fd;
	uint32_t proc_fdtype;	
};

/* Falvors for proc_pidinfo() */
#define PROC_PIDLISTFDS 1
#define PROC_PIDLISTFD_SIZE  (sizeof(struct proc_fdinfo))

#define PROC_PIDTASKALLINFO 2
#define PROC_PIDTASKALLINFO_SIZE  (sizeof(struct proc_taskallinfo))

#define PROC_PIDTBSDINFO 3
#define PROC_PIDTBSDINFO_SIZE  (sizeof(struct proc_bsdinfo))

#define PROC_PIDTASKINFO 4
#define PROC_PIDTASKINFO_SIZE  (sizeof(struct proc_taskinfo))

#define PROC_PIDTHREADINFO 5
#define PROC_PIDTHREADINFO_SIZE  (sizeof(struct proc_threadinfo))

#define PROC_PIDLISTTHREADS 6
#define PROC_PIDLISTTHREADS_SIZE  (2* sizeof(uint32_t))


#define PROC_PIDREGIONINFO 7
#define PROC_PIDREGIONINFO_SIZE  (sizeof(struct proc_regioninfo))

#define PROC_PIDREGIONPATHINFO 8
#define PROC_PIDREGIONPATHINFO_SIZE  (sizeof(struct proc_regionwithpathinfo))

#define PROC_PIDVNODEPATHINFO 9
#define PROC_PIDVNODEPATHINFO_SIZE  (sizeof(struct proc_vnodepathinfo))

/* Flavors for proc_pidfdinfo */

#define PROC_PIDFDVNODEINFO 1
#define PROC_PIDFDVNODEINFO_SIZE  (sizeof(struct vnode_fdinfo))

#define PROC_PIDFDVNODEPATHINFO 2
#define PROC_PIDFDVNODEPATHINFO_SIZE  (sizeof(struct vnode_fdinfowithpath))

#define PROC_PIDFDSOCKETINFO 3
#define PROC_PIDFDSOCKETINFO_SIZE  (sizeof(struct socket_fdinfo))

#define PROC_PIDFDPSEMINFO 4
#define PROC_PIDFDPSEMINFO_SIZE  (sizeof(struct psem_fdinfo))

#define PROC_PIDFDPSHMINFO 5
#define PROC_PIDFDPSHMINFO_SIZE  (sizeof(struct pshm_fdinfo))

#define PROC_PIDFDPIPEINFO 6
#define PROC_PIDFDPIPEINFO_SIZE  (sizeof(struct pipe_fdinfo))

#define PROC_PIDFDKQUEUEINFO 7
#define PROC_PIDFDKQUEUEINFO_SIZE  (sizeof(struct kqueue_fdinfo))

#define PROC_PIDFDATALKINFO 8
#define PROC_PIDFDATALKINFO_SIZE  (sizeof(struct appletalk_fdinfo))



#ifdef XNU_KERNEL_PRIVATE
extern int fill_socketinfo(socket_t so, struct socket_info *si);
extern int fill_pshminfo(struct pshmnode * pshm, struct pshm_info * pinfo);
extern int fill_pseminfo(struct psemnode * psem, struct psem_info * pinfo);
extern int fill_pipeinfo(struct pipe * cpipe, struct pipe_info * pinfo);
extern int fill_kqueueinfo(struct kqueue * kq, struct kqueue_info * kinfo);
#endif /* XNU_KERNEL_PRIVATE */


__END_DECLS

#endif /*_SYS_PROC_INFO_H */
