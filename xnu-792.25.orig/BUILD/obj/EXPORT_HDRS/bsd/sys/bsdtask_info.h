
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

#ifndef _SYS_BSDTASK_INFO_H
#define _SYS_BSDTASK_INFO_H

struct proc_taskinfo_internal {          
        uint64_t                pti_virtual_size;   /* virtual memory size (bytes) */
        uint64_t                pti_resident_size;  /* resident memory size (bytes) */
        uint64_t                pti_total_user;         /* total time */
        uint64_t                pti_total_system;
        uint64_t                pti_threads_user;       /* existing threads only */
        uint64_t                pti_threads_system;
        int32_t                 pti_policy;             /* default policy for new threads */
        int32_t                 pti_faults;             /* number of page faults */
        int32_t                 pti_pageins;    /* number of actual pageins */
        int32_t                 pti_cow_faults; /* number of copy-on-write faults */
        int32_t                 pti_messages_sent;      /* number of messages sent */
        int32_t                 pti_messages_received; /* number of messages received */
        int32_t                 pti_syscalls_mach;  /* number of mach system calls */
        int32_t                 pti_syscalls_unix;  /* number of unix system calls */
        int32_t                 pti_csw;            /* number of context switches */
        int32_t                 pti_threadnum;          /* number of threads in the task */
        int32_t                 pti_numrunning;         /* number of running threads */
	int32_t                 pti_priority;           /* task priority*/
};


struct proc_threadinfo_internal {
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



struct proc_regioninfo_internal {
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

#ifdef  MACH_KERNEL_PRIVATE

#define PROC_REGION_SUBMAP	1
#define PROC_REGION_SHARED	2

void  vm_map_region_top_walk(vm_map_entry_t entry, vm_region_top_info_t top);
void vm_map_region_walk(vm_map_t map, vm_map_offset_t a, vm_map_entry_t entry, vm_object_offset_t offset, vm_object_size_t range, vm_region_extended_info_t extended);
kern_return_t vnode_pager_get_object_vnode(memory_object_t mem_obj,uint32_t * vnodeaddr, uint32_t * vid);
extern uint32_t vnode_vid(void *vp);

#endif /* MACH_KERNEL_PRIVATE */

extern int fill_procregioninfo(task_t t, uint64_t arg, struct proc_regioninfo_internal *pinfo, uint32_t *vp, uint32_t *vid);
void fill_taskprocinfo(task_t task, struct proc_taskinfo_internal * ptinfo);
int fill_taskthreadinfo(task_t task, uint64_t thaddr, struct proc_threadinfo_internal * ptinfo);
int fill_taskthreadlist(task_t task, void * buffer, int thcount);
int get_numthreads(task_t);


#endif /*_SYS_BSDTASK_INFO_H */

