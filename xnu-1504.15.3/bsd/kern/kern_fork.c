/*
 * Copyright (c) 2000-2007 Apple Inc. All rights reserved.
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
/* Copyright (c) 1995, 1997 Apple Computer, Inc. All Rights Reserved */
/*
 * Copyright (c) 1982, 1986, 1989, 1991, 1993
 *	The Regents of the University of California.  All rights reserved.
 * (c) UNIX System Laboratories, Inc.
 * All or some portions of this file are derived from material licensed
 * to the University of California by American Telephone and Telegraph
 * Co. or Unix System Laboratories, Inc. and are reproduced herein with
 * the permission of UNIX System Laboratories, Inc.
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
 *	@(#)kern_fork.c	8.8 (Berkeley) 2/14/95
 */
/*
 * NOTICE: This file was modified by McAfee Research in 2004 to introduce
 * support for mandatory and extensible security protections.  This notice
 * is included in support of clause 2.2 (b) of the Apple Public License,
 * Version 2.0.
 */
/*
 * NOTICE: This file was modified by SPARTA, Inc. in 2005 to introduce
 * support for mandatory and extensible security protections.  This notice
 * is included in support of clause 2.2 (b) of the Apple Public License,
 * Version 2.0.
 */

#include <kern/assert.h>
#include <sys/param.h>
#include <sys/systm.h>
#include <sys/filedesc.h>
#include <sys/kernel.h>
#include <sys/malloc.h>
#include <sys/proc_internal.h>
#include <sys/kauth.h>
#include <sys/user.h>
#include <sys/resourcevar.h>
#include <sys/vnode_internal.h>
#include <sys/file_internal.h>
#include <sys/acct.h>
#include <sys/codesign.h>
#include <sys/sysproto.h>
#if CONFIG_DTRACE
/* Do not include dtrace.h, it redefines kmem_[alloc/free] */
extern void dtrace_fasttrap_fork(proc_t, proc_t);
extern void (*dtrace_helpers_fork)(proc_t, proc_t);
extern void dtrace_lazy_dofs_duplicate(proc_t, proc_t);

#include <sys/dtrace_ptss.h>
#endif

#include <security/audit/audit.h>

#include <mach/mach_types.h>
#include <kern/kern_types.h>
#include <kern/kalloc.h>
#include <kern/mach_param.h>
#include <kern/task.h>
#include <kern/thread_call.h>
#include <kern/zalloc.h>

#include <machine/spl.h>

#if CONFIG_MACF
#include <security/mac.h>
#include <security/mac_mach_internal.h>
#endif

#include <vm/vm_map.h>
#include <vm/vm_protos.h>
#include <vm/vm_shared_region.h>

#include <sys/shm_internal.h>	/* for shmfork() */
#include <mach/task.h>		/* for thread_create() */
#include <mach/thread_act.h>	/* for thread_resume() */

#include <sys/sdt.h>


/* XXX routines which should have Mach prototypes, but don't */
void thread_set_parent(thread_t parent, int pid);
extern void act_thread_catt(void *ctx);
void thread_set_child(thread_t child, int pid);
void *act_thread_csave(void);


thread_t cloneproc(task_t, proc_t, int);
proc_t forkproc(proc_t);
void forkproc_free(proc_t);
thread_t fork_create_child(task_t parent_task, proc_t child, int inherit_memory, int is64bit);
void proc_vfork_begin(proc_t parent_proc);
void proc_vfork_end(proc_t parent_proc);

#define	DOFORK	0x1	/* fork() system call */
#define	DOVFORK	0x2	/* vfork() system call */

/*
 * proc_vfork_begin
 *
 * Description:	start a vfork on a process
 *
 * Parameters:	parent_proc		process (re)entering vfork state
 *
 * Returns:	(void)
 *
 * Notes:	Although this function increments a count, a count in
 *		excess of 1 is not currently supported.  According to the
 *		POSIX standard, calling anything other than execve() or
 *		_exit() fillowing a vfork(), including calling vfork()
 *		itself again, will result in undefned behaviour
 */
void
proc_vfork_begin(proc_t parent_proc)
{
	proc_lock(parent_proc);
	parent_proc->p_lflag  |= P_LVFORK;
	parent_proc->p_vforkcnt++;
	proc_unlock(parent_proc);
}

/*
 * proc_vfork_end
 *
 * Description:	stop a vfork on a process
 *
 * Parameters:	parent_proc		process leaving vfork state
 *
 * Returns:	(void)
 *
 * Notes:	Decerements the count; currently, reentrancy of vfork()
 *		is unsupported on the current process
 */
void
proc_vfork_end(proc_t parent_proc)
{
	proc_lock(parent_proc);
	parent_proc->p_vforkcnt--;
	if (parent_proc->p_vforkcnt < 0)
		panic("vfork cnt is -ve");
	/* resude the vfork count; clear the flag when it goes to 0 */
	if (parent_proc->p_vforkcnt == 0)
		parent_proc->p_lflag  &= ~P_LVFORK;
	proc_unlock(parent_proc);
}


/*
 * vfork
 *
 * Description:	vfork system call
 *
 * Parameters:	void			[no arguments]
 *
 * Retval:	0			(to child process)
 *		!0			pid of child (to parent process)
 *		-1			error (see "Returns:")
 *
 * Returns:	EAGAIN			Administrative limit reached
 *		EINVAL			vfork() called during vfork()
 *		ENOMEM			Failed to allocate new process
 *
 * Note:	After a successful call to this function, the parent process
 *		has its task, thread, and uthread lent to the child process,
 *		and control is returned to the caller; if this function is
 *		invoked as a system call, the return is to user space, and
 *		is effectively running on the child process.
 *
 *		Subsequent calls that operate on process state are permitted,
 *		though discouraged, and will operate on the child process; any
 *		operations on the task, thread, or uthread will result in
 *		changes in the parent state, and, if inheritable, the child
 *		state, when a task, thread, and uthread are realized for the
 *		child process at execve() time, will also be effected.  Given
 *		this, it's recemmended that people use the posix_spawn() call
 *		instead.
 *
 * BLOCK DIAGRAM OF VFORK
 *
 * Before:
 *
 *     ,----------------.         ,-------------.
 *     |                |   task  |             |
 *     | parent_thread  | ------> | parent_task |
 *     |                | <.list. |             |
 *     `----------------'         `-------------'
 *    uthread |  ^             bsd_info |  ^
 *            v  | vc_thread            v  | task
 *     ,----------------.         ,-------------.
 *     |                |         |             |
 *     | parent_uthread | <.list. | parent_proc | <-- current_proc()
 *     |                |         |             |
 *     `----------------'         `-------------'
 *    uu_proc |
 *            v
 *           NULL
 *
 * After:
 *
 *                 ,----------------.         ,-------------.
 *                 |                |   task  |             |
 *          ,----> | parent_thread  | ------> | parent_task |
 *          |      |                | <.list. |             |
 *          |      `----------------'         `-------------'
 *          |     uthread |  ^             bsd_info |  ^
 *          |             v  | vc_thread            v  | task
 *          |      ,----------------.         ,-------------.
 *          |      |                |         |             |
 *          |      | parent_uthread | <.list. | parent_proc |
 *          |      |                |         |             |
 *          |      `----------------'         `-------------'
 *          |     uu_proc |  . list
 *          |             v  v
 *          |      ,----------------.
 *          `----- |                |
 *      p_vforkact | child_proc     | <-- current_proc()
 *                 |                |
 *                 `----------------'
 */
int
vfork(proc_t parent_proc, __unused struct vfork_args *uap, int32_t *retval)
{
	thread_t child_thread;
	int err;

	if ((err = fork1(parent_proc, &child_thread, PROC_CREATE_VFORK)) != 0) {
		retval[1] = 0;
	} else {
		/*
		 * kludge: rely on uu_proc being set in the vfork case,
		 * rather than returning the actual thread.  We can remove
		 * this when we remove the uu_proc/current_proc() kludge.
		 */
		proc_t child_proc = current_proc();

		retval[0] = child_proc->p_pid;
		retval[1] = 1;		/* flag child return for user space */

		/*
		 * Drop the signal lock on the child which was taken on our
		 * behalf by forkproc()/cloneproc() to prevent signals being
		 * received by the child in a partially constructed state.
		 */
		proc_signalend(child_proc, 0);
		proc_transend(child_proc, 0);

		/* flag the fork has occurred */
		proc_knote(parent_proc, NOTE_FORK | child_proc->p_pid);
		DTRACE_PROC1(create, proc_t, child_proc);
	}

	return(err);
}


/*
 * fork1
 *
 * Description:	common code used by all new process creation other than the
 *		bootstrap of the initial process on the system
 *
 * Parameters: parent_proc		parent process of the process being
 *		child_threadp		pointer to location to receive the
 *					Mach thread_t of the child process
 *					breated
 *		kind			kind of creation being requested
 *
 * Notes:	Permissable values for 'kind':
 *
 *		PROC_CREATE_FORK	Create a complete process which will
 *					return actively running in both the
 *					parent and the child; the child copies
 *					the parent address space.
 *		PROC_CREATE_SPAWN	Create a complete process which will
 *					return actively running in the parent
 *					only after returning actively running
 *					in the child; the child address space
 *					is newly created by an image activator,
 *					after which the child is run.
 *		PROC_CREATE_VFORK	Creates a partial process which will
 *					borrow the parent task, thread, and
 *					uthread to return running in the child;
 *					the child address space and other parts
 *					are lazily created at execve() time, or
 *					the child is terminated, and the parent
 *					does not actively run until that
 *					happens.
 *
 *		At first it may seem strange that we return the child thread
 *		address rather than process structure, since the process is
 *		the only part guaranteed to be "new"; however, since we do
 *		not actualy adjust other references between Mach and BSD (see
 *		the block diagram above the implementation of vfork()), this
 *		is the only method which guarantees us the ability to get
 *		back to the other information.
 */
int
fork1(proc_t parent_proc, thread_t *child_threadp, int kind)
{
	thread_t parent_thread = (thread_t)current_thread();
	uthread_t parent_uthread = (uthread_t)get_bsdthread_info(parent_thread);
	proc_t child_proc = NULL;	/* set in switch, but compiler... */
	thread_t child_thread = NULL;
	uid_t uid;
	int count;
	int err = 0;
	int spawn = 0;

	/*
	 * Although process entries are dynamically created, we still keep
	 * a global limit on the maximum number we will create.  Don't allow
	 * a nonprivileged user to use the last process; don't let root
	 * exceed the limit. The variable nprocs is the current number of
	 * processes, maxproc is the limit.
	 */
	uid = kauth_cred_get()->cr_ruid;
	proc_list_lock();
	if ((nprocs >= maxproc - 1 && uid != 0) || nprocs >= maxproc) {
		proc_list_unlock();
		tablefull("proc");
		return (EAGAIN);
	}
	proc_list_unlock();

	/*
	 * Increment the count of procs running with this uid. Don't allow
	 * a nonprivileged user to exceed their current limit, which is
	 * always less than what an rlim_t can hold.
	 * (locking protection is provided by list lock held in chgproccnt)
	 */
	count = chgproccnt(uid, 1);
	if (uid != 0 &&
	    (rlim_t)count > parent_proc->p_rlimit[RLIMIT_NPROC].rlim_cur) {
	    	err = EAGAIN;
		goto bad;
	}

#if CONFIG_MACF
	/*
	 * Determine if MAC policies applied to the process will allow
	 * it to fork.  This is an advisory-only check.
	 */
	err = mac_proc_check_fork(parent_proc);
	if (err  != 0) {
		goto bad;
	}
#endif

	switch(kind) {
	case PROC_CREATE_VFORK:
		/*
		 * Prevent a vfork while we are in vfork(); we should
		 * also likely preventing a fork here as well, and this
		 * check should then be outside the switch statement,
		 * since the proc struct contents will copy from the
		 * child and the tash/thread/uthread from the parent in
		 * that case.  We do not support vfork() in vfork()
		 * because we don't have to; the same non-requirement
		 * is true of both fork() and posix_spawn() and any
		 * call  other than execve() amd _exit(), but we've
		 * been historically lenient, so we continue to be so
		 * (for now).
		 *
		 * <rdar://6640521> Probably a source of random panics
		 */
		if (parent_uthread->uu_flag & UT_VFORK) {
			printf("fork1 called within vfork by %s\n", parent_proc->p_comm);
			err = EINVAL;
			goto bad;
		}

		/*
		 * Flag us in progress; if we chose to support vfork() in
		 * vfork(), we would chain our parent at this point (in
		 * effect, a stack push).  We don't, since we actually want
		 * to disallow everything not specified in the standard
		 */
		proc_vfork_begin(parent_proc);

		/* The newly created process comes with signal lock held */
		if ((child_proc = forkproc(parent_proc)) == NULL) {
			/* Failed to allocate new process */
			proc_vfork_end(parent_proc);
			err = ENOMEM;
			goto bad;
		}

// XXX BEGIN: wants to move to be common code (and safe)
#if CONFIG_MACF
		/*
		 * allow policies to associate the credential/label that
		 * we referenced from the parent ... with the child
		 * JMM - this really isn't safe, as we can drop that
		 *       association without informing the policy in other
		 *       situations (keep long enough to get policies changed)
		 */
		mac_cred_label_associate_fork(child_proc->p_ucred, child_proc);
#endif

		/*
		 * Propogate change of PID - may get new cred if auditing.
		 *
		 * NOTE: This has no effect in the vfork case, since
		 *	child_proc->task != current_task(), but we duplicate it
		 *	because this is probably, ultimately, wrong, since we
		 *	will be running in the "child" which is the parent task
		 *	with the wrong token until we get to the execve() or
		 *	_exit() call; a lot of "undefined" can happen before
		 *	that.
		 *
		 * <rdar://6640530> disallow everything but exeve()/_exit()?
		 */
		set_security_token(child_proc);

		AUDIT_ARG(pid, child_proc->p_pid);

		AUDIT_SESSION_PROCNEW(child_proc->p_ucred);
// XXX END: wants to move to be common code (and safe)

		/*
		 * BORROW PARENT TASK, THREAD, UTHREAD FOR CHILD
		 *
		 * Note: this is where we would "push" state instead of setting
		 * it for nested vfork() support (see proc_vfork_end() for
		 * description if issues here).
		 */
		child_proc->task = parent_proc->task;

		child_proc->p_lflag  |= P_LINVFORK;
		child_proc->p_vforkact = parent_thread;
		child_proc->p_stat = SRUN;

		parent_uthread->uu_flag |= UT_VFORK;
		parent_uthread->uu_proc = child_proc;
		parent_uthread->uu_userstate = (void *)act_thread_csave();
		parent_uthread->uu_vforkmask = parent_uthread->uu_sigmask;

		/* temporarily drop thread-set-id state */
		if (parent_uthread->uu_flag & UT_SETUID) {
			parent_uthread->uu_flag |= UT_WASSETUID;
			parent_uthread->uu_flag &= ~UT_SETUID;
		}

		/* blow thread state information */
		/* XXX is this actually necessary, given syscall return? */
		thread_set_child(parent_thread, child_proc->p_pid);

		child_proc->p_acflag = AFORK;	/* forked but not exec'ed */

		/*
		 * Preserve synchronization semantics of vfork.  If
		 * waiting for child to exec or exit, set P_PPWAIT
		 * on child, and sleep on our proc (in case of exit).
		 */
		child_proc->p_lflag |= P_LPPWAIT;
		pinsertchild(parent_proc, child_proc);	/* set visible */

		break;

	case PROC_CREATE_SPAWN:
		/*
		 * A spawned process differs from a forked process in that
		 * the spawned process does not carry around the parents
		 * baggage with regard to address space copying, dtrace,
		 * and so on.
		 */
		spawn = 1;

		/* FALLSTHROUGH */

	case PROC_CREATE_FORK:
		/*
		 * When we clone the parent process, we are going to inherit
		 * its task attributes and memory, since when we fork, we
		 * will, in effect, create a duplicate of it, with only minor
		 * differences.  Contrarily, spawned processes do not inherit.
		 */
		if ((child_thread = cloneproc(parent_proc->task, parent_proc, spawn ? FALSE : TRUE)) == NULL) {
			/* Failed to create thread */
			err = EAGAIN;
			goto bad;
		}

		/* copy current thread state into the child thread (only for fork) */
		if (!spawn) {
			thread_dup(child_thread);
		}

		/* child_proc = child_thread->task->proc; */
		child_proc = (proc_t)(get_bsdtask_info(get_threadtask(child_thread)));

// XXX BEGIN: wants to move to be common code (and safe)
#if CONFIG_MACF
		/*
		 * allow policies to associate the credential/label that
		 * we referenced from the parent ... with the child
		 * JMM - this really isn't safe, as we can drop that
		 *       association without informing the policy in other
		 *       situations (keep long enough to get policies changed)
		 */
		mac_cred_label_associate_fork(child_proc->p_ucred, child_proc);
#endif

		/*
		 * Propogate change of PID - may get new cred if auditing.
		 *
		 * NOTE: This has no effect in the vfork case, since
		 *	child_proc->task != current_task(), but we duplicate it
		 *	because this is probably, ultimately, wrong, since we
		 *	will be running in the "child" which is the parent task
		 *	with the wrong token until we get to the execve() or
		 *	_exit() call; a lot of "undefined" can happen before
		 *	that.
		 *
		 * <rdar://6640530> disallow everything but exeve()/_exit()?
		 */
		set_security_token(child_proc);

		AUDIT_ARG(pid, child_proc->p_pid);

		AUDIT_SESSION_PROCNEW(child_proc->p_ucred);
// XXX END: wants to move to be common code (and safe)

		/*
		 * Blow thread state information; this is what gives the child
		 * process its "return" value from a fork() call.
		 *
		 * Note: this should probably move to fork() proper, since it
		 * is not relevent to spawn, and the value won't matter
		 * until we resume the child there.  If you are in here
		 * refactoring code, consider doing this at the same time.
		 */
		thread_set_child(child_thread, child_proc->p_pid);

		child_proc->p_acflag = AFORK;	/* forked but not exec'ed */

// <rdar://6598155> dtrace code cleanup needed
#if CONFIG_DTRACE
		/*
		 * This code applies to new processes who are copying the task
		 * and thread state and address spaces of their parent process.
		 */
		if (!spawn) {
// <rdar://6598155> call dtrace specific function here instead of all this...
		/*
		 * APPLE NOTE: Solaris does a sprlock() and drops the
		 * proc_lock here. We're cheating a bit and only taking
		 * the p_dtrace_sprlock lock. A full sprlock would
		 * task_suspend the parent.
		 */
		lck_mtx_lock(&parent_proc->p_dtrace_sprlock);

		/*
		 * Remove all DTrace tracepoints from the child process. We
		 * need to do this _before_ duplicating USDT providers since
		 * any associated probes may be immediately enabled.
		 */
		if (parent_proc->p_dtrace_count > 0) {
			dtrace_fasttrap_fork(parent_proc, child_proc);
		}

		lck_mtx_unlock(&parent_proc->p_dtrace_sprlock);

		/*
		 * Duplicate any lazy dof(s). This must be done while NOT
		 * holding the parent sprlock! Lock ordering is
		 * dtrace_dof_mode_lock, then sprlock.  It is imperative we
		 * always call dtrace_lazy_dofs_duplicate, rather than null
		 * check and call if !NULL. If we NULL test, during lazy dof
		 * faulting we can race with the faulting code and proceed
		 * from here to beyond the helpers copy. The lazy dof
		 * faulting will then fail to copy the helpers to the child
		 * process.
		 */
		dtrace_lazy_dofs_duplicate(parent_proc, child_proc);
		
		/*
		 * Duplicate any helper actions and providers. The SFORKING
		 * we set above informs the code to enable USDT probes that
		 * sprlock() may fail because the child is being forked.
		 */
		/*
		 * APPLE NOTE: As best I can tell, Apple's sprlock() equivalent
		 * never fails to find the child. We do not set SFORKING.
		 */
		if (parent_proc->p_dtrace_helpers != NULL && dtrace_helpers_fork) {
			(*dtrace_helpers_fork)(parent_proc, child_proc);
		}

		}
#endif	/* CONFIG_DTRACE */

		break;

	default:
		panic("fork1 called with unknown kind %d", kind);
		break;
	}


	/* return the thread pointer to the caller */
	*child_threadp = child_thread;

bad:
	/*
	 * In the error case, we return a 0 value for the returned pid (but
	 * it is ignored in the trampoline due to the error return); this
	 * is probably not necessary.
	 */
	if (err) {
		(void)chgproccnt(uid, -1);
	}

	return (err);
}


/*
 * vfork_return
 *
 * Description:	"Return" to parent vfork thread() following execve/_exit;
 *		this is done by reassociating the parent process structure
 *		with the task, thread, and uthread.
 *
 * Parameters:	child_proc		Child process
 *		retval			System call return value array
 *		rval			Return value to present to parent
 *
 * Returns:	void
 *
 * Note:	The caller resumes or exits the parent, as appropriate, after
 *		callling this function.
 */
void
vfork_return(proc_t child_proc, int32_t *retval, int rval)
{
	proc_t parent_proc = child_proc->p_pptr;
	thread_t parent_thread = (thread_t)current_thread();
	uthread_t parent_uthread = (uthread_t)get_bsdthread_info(parent_thread);
	

	act_thread_catt(parent_uthread->uu_userstate);

	/* end vfork in parent */
	proc_vfork_end(parent_proc);

	/* REPATRIATE PARENT TASK, THREAD, UTHREAD */
	parent_uthread->uu_userstate = 0;
	parent_uthread->uu_flag &= ~UT_VFORK;
	/* restore thread-set-id state */
	if (parent_uthread->uu_flag & UT_WASSETUID) {
		parent_uthread->uu_flag |= UT_SETUID;
		parent_uthread->uu_flag &= UT_WASSETUID;
	}
	parent_uthread->uu_proc = 0;
	parent_uthread->uu_sigmask = parent_uthread->uu_vforkmask;
	child_proc->p_lflag  &= ~P_LINVFORK;
	child_proc->p_vforkact = (void *)0;

	thread_set_parent(parent_thread, rval);

	if (retval) {
		retval[0] = rval;
		retval[1] = 0;			/* mark parent */
	}

	return;
}


/*
 * fork_create_child
 *
 * Description:	Common operations associated with the creation of a child
 *		process
 *
 * Parameters:	parent_task		parent task
 *		child_proc		child process
 *		inherit_memory		TRUE, if the parents address space is
 *					to be inherited by the child
 *		is64bit			TRUE, if the child being created will
 *					be associated with a 64 bit process
 *					rather than a 32 bit process
 *
 * Note:	This code is called in the fork() case, from the execve() call
 *		graph, if implementing an execve() following a vfork(), from
 *		the posix_spawn() call graph (which implicitly includes a
 *		vfork() equivalent call, and in the system bootstrap case.
 *
 *		It creates a new task and thread (and as a side effect of the
 *		thread creation, a uthread), which is then associated with the
 *		process 'child'.  If the parent process address space is to
 *		be inherited, then a flag indicates that the newly created
 *		task should inherit this from the child task.
 *
 *		As a special concession to bootstrapping the initial process
 *		in the system, it's possible for 'parent_task' to be TASK_NULL;
 *		in this case, 'inherit_memory' MUST be FALSE.
 */
thread_t
fork_create_child(task_t parent_task, proc_t child_proc, int inherit_memory, int is64bit)
{
	thread_t	child_thread = NULL;
	task_t		child_task;
	kern_return_t	result;

	/* Create a new task for the child process */
	result = task_create_internal(parent_task,
					inherit_memory,
					is64bit,
					&child_task);
	if (result != KERN_SUCCESS) {
		printf("execve: task_create_internal failed.  Code: %d\n", result);
		goto bad;
	}

	/* Set the child process task to the new task */
	child_proc->task = child_task;

	/* Set child task process to child proc */
	set_bsdtask_info(child_task, child_proc);

	/* Propagate CPU limit timer from parent */
	if (timerisset(&child_proc->p_rlim_cpu))
		task_vtimer_set(child_task, TASK_VTIMER_RLIM);

	/* Set/clear 64 bit vm_map flag */
	if (is64bit)
		vm_map_set_64bit(get_task_map(child_task));
	else
		vm_map_set_32bit(get_task_map(child_task));

#if CONFIG_MACF
	/* Update task for MAC framework */
	/* valid to use p_ucred as child is still not running ... */
	mac_task_label_update_cred(child_proc->p_ucred, child_task);
#endif

	/*
	 * Set child process BSD visible scheduler priority if nice value
	 * inherited from parent
	 */
	if (child_proc->p_nice != 0)
		resetpriority(child_proc);

	/* Create a new thread for the child process */
	result = thread_create(child_task, &child_thread);
	if (result != KERN_SUCCESS) {
		printf("execve: thread_create failed. Code: %d\n", result);
		task_deallocate(child_task);
		child_task = NULL;
	}
bad:
	thread_yield_internal(1);

	return(child_thread);
}


/*
 * fork
 *
 * Description:	fork system call.
 *
 * Parameters:	parent			Parent process to fork
 *		uap (void)		[unused]
 *		retval			Return value
 *
 * Returns:	0			Success
 *		EAGAIN			Resource unavailable, try again
 *
 * Notes:	Attempts to create a new child process which inherits state
 *		from the parent process.  If successful, the call returns
 *		having created an initially suspended child process with an
 *		extra Mach task and thread reference, for which the thread
 *		is initially suspended.  Until we resume the child process,
 *		it is not yet running.
 *
 *		The return information to the child is contained in the
 *		thread state structure of the new child, and does not
 *		become visible to the child through a normal return process,
 *		since it never made the call into the kernel itself in the
 *		first place.
 *
 *		After resuming the thread, this function returns directly to
 *		the parent process which invoked the fork() system call.
 *
 * Important:	The child thread_resume occurs before the parent returns;
 *		depending on scheduling latency, this means that it is not
 *		deterministic as to whether the parent or child is scheduled
 *		to run first.  It is entirely possible that the child could
 *		run to completion prior to the parent running.
 */
int
fork(proc_t parent_proc, __unused struct fork_args *uap, int32_t *retval)
{
	thread_t child_thread;
	int err;

	retval[1] = 0;		/* flag parent return for user space */

	if ((err = fork1(parent_proc, &child_thread, PROC_CREATE_FORK)) == 0) {
		task_t child_task;
		proc_t child_proc;

		/* Return to the parent */
		child_proc = (proc_t)get_bsdthreadtask_info(child_thread);
		retval[0] = child_proc->p_pid;

		/*
		 * Drop the signal lock on the child which was taken on our
		 * behalf by forkproc()/cloneproc() to prevent signals being
		 * received by the child in a partially constructed state.
		 */
		proc_signalend(child_proc, 0);
		proc_transend(child_proc, 0);

		/* flag the fork has occurred */
		proc_knote(parent_proc, NOTE_FORK | child_proc->p_pid);
		DTRACE_PROC1(create, proc_t, child_proc);

		/* "Return" to the child */
		(void)thread_resume(child_thread);

		/* drop the extra references we got during the creation */
		if ((child_task = (task_t)get_threadtask(child_thread)) != NULL) {
			task_deallocate(child_task);
		}
		thread_deallocate(child_thread);
	}

	return(err);
}


/*
 * cloneproc
 *
 * Description: Create a new process from a specified process.
 *
 * Parameters:	parent_task		The parent task to be cloned, or
 *					TASK_NULL is task characteristics
 *					are not to be inherited
 *					be cloned, or TASK_NULL if the new
 *					task is not to inherit the VM
 *					characteristics of the parent
 *		parent_proc		The parent process to be cloned
 *		inherit_memory		True if the child is to inherit
 *					memory from the parent; if this is
 *					non-NULL, then the parent_task must
 *					also be non-NULL
 *
 * Returns:	!NULL			pointer to new child thread
 *		NULL			Failure (unspecified)
 *
 * Note:	On return newly created child process has signal lock held
 *		to block delivery of signal to it if called with lock set.
 *		fork() code needs to explicity remove this lock before
 *		signals can be delivered
 *
 *		In the case of bootstrap, this function can be called from
 *		bsd_utaskbootstrap() in order to bootstrap the first process;
 *		the net effect is to provide a uthread structure for the
 *		kernel process associated with the kernel task.
 *
 * XXX:		Tristating using the value parent_task as the major key
 *		and inherit_memory as the minor key is something we should
 *		refactor later; we owe the current semantics, ultimately,
 *		to the semantics of task_create_internal.  For now, we will
 *		live with this being somewhat awkward.
 */
thread_t
cloneproc(task_t parent_task, proc_t parent_proc, int inherit_memory)
{
	task_t child_task;
	proc_t child_proc;
	thread_t child_thread = NULL;

	if ((child_proc = forkproc(parent_proc)) == NULL) {
		/* Failed to allocate new process */
		goto bad;
	}

	child_thread = fork_create_child(parent_task, child_proc, inherit_memory, (parent_task == TASK_NULL) ? FALSE : (parent_proc->p_flag & P_LP64));

	if (child_thread == NULL) {
		/*
		 * Failed to create thread; now we must deconstruct the new
		 * process previously obtained from forkproc().
		 */
		forkproc_free(child_proc);
		goto bad;
	}

	child_task = get_threadtask(child_thread);
	if (parent_proc->p_flag & P_LP64) {
		task_set_64bit(child_task, TRUE);
		OSBitOrAtomic(P_LP64, (UInt32 *)&child_proc->p_flag);
#ifdef __ppc__
		/*
		 * PPC51: ppc64 is limited to 51-bit addresses.
		 * Memory above that limit is handled specially at
		 * the pmap level.
		 */
		pmap_map_sharedpage(child_task, get_map_pmap(get_task_map(child_task)));
#endif /* __ppc__ */
	} else {
		task_set_64bit(child_task, FALSE);
		OSBitAndAtomic(~((uint32_t)P_LP64), (UInt32 *)&child_proc->p_flag);
	}

	/* make child visible */
	pinsertchild(parent_proc, child_proc);

	/*
	 * Make child runnable, set start time.
	 */
	child_proc->p_stat = SRUN;
bad:
	return(child_thread);
}


/*
 * Destroy a process structure that resulted from a call to forkproc(), but
 * which must be returned to the system because of a subsequent failure
 * preventing it from becoming active.
 *
 * Parameters:	p			The incomplete process from forkproc()
 *
 * Returns:	(void)
 *
 * Note:	This function should only be used in an error handler following
 *		a call to forkproc().
 *
 *		Operations occur in reverse order of those in forkproc().
 */
void
forkproc_free(proc_t p)
{

	/* We held signal and a transition locks; drop them */
	proc_signalend(p, 0);
	proc_transend(p, 0);

	/*
	 * If we have our own copy of the resource limits structure, we
	 * need to free it.  If it's a shared copy, we need to drop our
	 * reference on it.
	 */
	proc_limitdrop(p, 0);
	p->p_limit = NULL;

#if SYSV_SHM
	/* Need to drop references to the shared memory segment(s), if any */
	if (p->vm_shm) {
		/*
		 * Use shmexec(): we have no address space, so no mappings
		 *
		 * XXX Yes, the routine is badly named.
		 */
		shmexec(p);
	}
#endif

	/* Need to undo the effects of the fdcopy(), if any */
	fdfree(p);

	/*
	 * Drop the reference on a text vnode pointer, if any
	 * XXX This code is broken in forkproc(); see <rdar://4256419>;
	 * XXX if anyone ever uses this field, we will be extremely unhappy.
	 */
	if (p->p_textvp) {
		vnode_rele(p->p_textvp);
		p->p_textvp = NULL;
	}

	/* Stop the profiling clock */
	stopprofclock(p);

	/* Release the credential reference */
	kauth_cred_unref(&p->p_ucred);

	proc_list_lock();
	/* Decrement the count of processes in the system */
	nprocs--;
	proc_list_unlock();

	thread_call_free(p->p_rcall);

	/* Free allocated memory */
	FREE_ZONE(p->p_sigacts, sizeof *p->p_sigacts, M_SIGACTS);
	FREE_ZONE(p->p_stats, sizeof *p->p_stats, M_PSTATS);
	proc_checkdeadrefs(p);
	FREE_ZONE(p, sizeof *p, M_PROC);
}


/*
 * forkproc
 *
 * Description:	Create a new process structure, given a parent process
 *		structure.
 *
 * Parameters:	parent_proc		The parent process
 *
 * Returns:	!NULL			The new process structure
 *		NULL			Error (insufficient free memory)
 *
 * Note:	When successful, the newly created process structure is
 *		partially initialized; if a caller needs to deconstruct the
 *		returned structure, they must call forkproc_free() to do so.
 */
proc_t
forkproc(proc_t parent_proc)
{
	proc_t child_proc;	/* Our new process */
	static int nextpid = 0, pidwrap = 0, nextpidversion = 0;
	int error = 0;
	struct session *sessp;
	uthread_t parent_uthread = (uthread_t)get_bsdthread_info(current_thread());

	MALLOC_ZONE(child_proc, proc_t , sizeof *child_proc, M_PROC, M_WAITOK);
	if (child_proc == NULL) {
		printf("forkproc: M_PROC zone exhausted\n");
		goto bad;
	}
	/* zero it out as we need to insert in hash */
	bzero(child_proc, sizeof *child_proc);

	MALLOC_ZONE(child_proc->p_stats, struct pstats *,
			sizeof *child_proc->p_stats, M_PSTATS, M_WAITOK);
	if (child_proc->p_stats == NULL) {
		printf("forkproc: M_SUBPROC zone exhausted (p_stats)\n");
		FREE_ZONE(child_proc, sizeof *child_proc, M_PROC);
		child_proc = NULL;
		goto bad;
	}
	MALLOC_ZONE(child_proc->p_sigacts, struct sigacts *,
			sizeof *child_proc->p_sigacts, M_SIGACTS, M_WAITOK);
	if (child_proc->p_sigacts == NULL) {
		printf("forkproc: M_SUBPROC zone exhausted (p_sigacts)\n");
		FREE_ZONE(child_proc->p_stats, sizeof *child_proc->p_stats, M_PSTATS);
		FREE_ZONE(child_proc, sizeof *child_proc, M_PROC);
		child_proc = NULL;
		goto bad;
	}

	/* allocate a callout for use by interval timers */
	child_proc->p_rcall = thread_call_allocate((thread_call_func_t)realitexpire, child_proc);
	if (child_proc->p_rcall == NULL) {
		FREE_ZONE(child_proc->p_sigacts, sizeof *child_proc->p_sigacts, M_SIGACTS);
		FREE_ZONE(child_proc->p_stats, sizeof *child_proc->p_stats, M_PSTATS);
		FREE_ZONE(child_proc, sizeof *child_proc, M_PROC);
		child_proc = NULL;
		goto bad;
	}


	/*
	 * Find an unused PID.  
	 */

	proc_list_lock();

	nextpid++;
retry:
	/*
	 * If the process ID prototype has wrapped around,
	 * restart somewhat above 0, as the low-numbered procs
	 * tend to include daemons that don't exit.
	 */
	if (nextpid >= PID_MAX) {
		nextpid = 100;
		pidwrap = 1;
	}
	if (pidwrap != 0) {

		/* if the pid stays in hash both for zombie and runniing state */
		if  (pfind_locked(nextpid) != PROC_NULL) {
			nextpid++;
			goto retry;
		}

		if (pgfind_internal(nextpid) != PGRP_NULL) {
			nextpid++;
			goto retry;
		}	
		if (session_find_internal(nextpid) != SESSION_NULL) {
			nextpid++;
			goto retry;
		}	
	}
	nprocs++;
	child_proc->p_pid = nextpid;
	child_proc->p_idversion = nextpidversion++;
#if 1
	if (child_proc->p_pid != 0) {
		if (pfind_locked(child_proc->p_pid) != PROC_NULL)
			panic("proc in the list already\n");
	}
#endif
	/* Insert in the hash */
	child_proc->p_listflag |= (P_LIST_INHASH | P_LIST_INCREATE);
	LIST_INSERT_HEAD(PIDHASH(child_proc->p_pid), child_proc, p_hash);
	proc_list_unlock();


	/*
	 * We've identified the PID we are going to use; initialize the new
	 * process structure.
	 */
	child_proc->p_stat = SIDL;
	child_proc->p_pgrpid = PGRPID_DEAD;

	/*
	 * The zero'ing of the proc was at the allocation time due to need
	 * for insertion to hash.  Copy the section that is to be copied
	 * directly from the parent.
	 */
	bcopy(&parent_proc->p_startcopy, &child_proc->p_startcopy,
	    (unsigned) ((caddr_t)&child_proc->p_endcopy - (caddr_t)&child_proc->p_startcopy));

	/*
	 * Some flags are inherited from the parent.
	 * Duplicate sub-structures as needed.
	 * Increase reference counts on shared objects.
	 * The p_stats and p_sigacts substructs are set in vm_fork.
	 */
	child_proc->p_flag = (parent_proc->p_flag & (P_LP64 | P_TRANSLATED | P_AFFINITY));
	if (parent_proc->p_flag & P_PROFIL)
		startprofclock(child_proc);
	/*
	 * Note that if the current thread has an assumed identity, this
	 * credential will be granted to the new process.
	 */
	child_proc->p_ucred = kauth_cred_get_with_ref();

#ifdef CONFIG_EMBEDDED
	lck_mtx_init(&child_proc->p_mlock, proc_lck_grp, proc_lck_attr);
	lck_mtx_init(&child_proc->p_fdmlock, proc_lck_grp, proc_lck_attr);
#if CONFIG_DTRACE
	lck_mtx_init(&child_proc->p_dtrace_sprlock, proc_lck_grp, proc_lck_attr);
#endif
	lck_spin_init(&child_proc->p_slock, proc_lck_grp, proc_lck_attr);
#else /* !CONFIG_EMBEDDED */
	lck_mtx_init(&child_proc->p_mlock, proc_mlock_grp, proc_lck_attr);
	lck_mtx_init(&child_proc->p_fdmlock, proc_fdmlock_grp, proc_lck_attr);
#if CONFIG_DTRACE
	lck_mtx_init(&child_proc->p_dtrace_sprlock, proc_lck_grp, proc_lck_attr);
#endif
	lck_spin_init(&child_proc->p_slock, proc_slock_grp, proc_lck_attr);
#endif /* !CONFIG_EMBEDDED */
	klist_init(&child_proc->p_klist);

	if (child_proc->p_textvp != NULLVP) {
		/* bump references to the text vnode */
		/* Need to hold iocount across the ref call */
		if (vnode_getwithref(child_proc->p_textvp) == 0) {
			error = vnode_ref(child_proc->p_textvp);
			vnode_put(child_proc->p_textvp);
			if (error != 0)
				child_proc->p_textvp = NULLVP;
		}
	}

	/*
	 * Copy the parents per process open file table to the child; if
	 * there is a per-thread current working directory, set the childs
	 * per-process current working directory to that instead of the
	 * parents.
	 *
	 * XXX may fail to copy descriptors to child
	 */
	child_proc->p_fd = fdcopy(parent_proc, parent_uthread->uu_cdir);

#if SYSV_SHM
	if (parent_proc->vm_shm) {
		/* XXX may fail to attach shm to child */
		(void)shmfork(parent_proc, child_proc);
	}
#endif
	/*
	 * inherit the limit structure to child
	 */
	proc_limitfork(parent_proc, child_proc);

	if (child_proc->p_limit->pl_rlimit[RLIMIT_CPU].rlim_cur != RLIM_INFINITY) {
		uint64_t rlim_cur = child_proc->p_limit->pl_rlimit[RLIMIT_CPU].rlim_cur;
		child_proc->p_rlim_cpu.tv_sec = (rlim_cur > __INT_MAX__) ? __INT_MAX__ : rlim_cur;
	}

	/* Intialize new process stats, including start time */
	/* <rdar://6640543> non-zeroed portion contains garbage AFAICT */
	bzero(&child_proc->p_stats->pstat_startzero,
	    (unsigned) ((caddr_t)&child_proc->p_stats->pstat_endzero -
	    (caddr_t)&child_proc->p_stats->pstat_startzero));
	bzero(&child_proc->p_stats->user_p_prof, sizeof(struct user_uprof));
	microtime(&child_proc->p_start);
	child_proc->p_stats->p_start = child_proc->p_start;     /* for compat */

	if (parent_proc->p_sigacts != NULL)
		(void)memcpy(child_proc->p_sigacts,
				parent_proc->p_sigacts, sizeof *child_proc->p_sigacts);
	else
		(void)memset(child_proc->p_sigacts, 0, sizeof *child_proc->p_sigacts);

	sessp = proc_session(parent_proc);
	if (sessp->s_ttyvp != NULL && parent_proc->p_flag & P_CONTROLT)
		OSBitOrAtomic(P_CONTROLT, &child_proc->p_flag);
	session_rele(sessp);

	/*
	 * block all signals to reach the process.
	 * no transition race should be occuring with the child yet,
	 * but indicate that the process is in (the creation) transition.
	 */
	proc_signalstart(child_proc, 0);
	proc_transstart(child_proc, 0);

	child_proc->p_pcaction = (parent_proc->p_pcaction) & P_PCMAX;
	TAILQ_INIT(&child_proc->p_uthlist);
	TAILQ_INIT(&child_proc->p_aio_activeq);
	TAILQ_INIT(&child_proc->p_aio_doneq);

	/* Inherit the parent flags for code sign */
	child_proc->p_csflags = (parent_proc->p_csflags & ~CS_KILLED);

	/*
	 * All processes have work queue locks; cleaned up by
	 * reap_child_locked()
	 */
	workqueue_init_lock(child_proc);

	/*
	 * Copy work queue information
	 *
	 * Note: This should probably only happen in the case where we are
	 *	creating a child that is a copy of the parent; since this
	 *	routine is called in the non-duplication case of vfork()
	 *	or posix_spawn(), then this information should likely not
	 *	be duplicated.
	 *
	 * <rdar://6640553> Work queue pointers that no longer point to code
	 */
	child_proc->p_wqthread = parent_proc->p_wqthread;
	child_proc->p_threadstart = parent_proc->p_threadstart;
	child_proc->p_pthsize = parent_proc->p_pthsize;
	child_proc->p_targconc = parent_proc->p_targconc;
	if ((parent_proc->p_lflag & P_LREGISTER) != 0) {
		child_proc->p_lflag |= P_LREGISTER;
	}
	child_proc->p_dispatchqueue_offset = parent_proc->p_dispatchqueue_offset;
#if PSYNCH
	pth_proc_hashinit(child_proc);
#endif /* PSYNCH */

#if CONFIG_LCTX
	child_proc->p_lctx = NULL;
	/* Add new process to login context (if any). */
	if (parent_proc->p_lctx != NULL) {
		/*
		 * <rdar://6640564> This should probably be delayed in the
		 * vfork() or posix_spawn() cases.
		 */
		LCTX_LOCK(parent_proc->p_lctx);
		enterlctx(child_proc, parent_proc->p_lctx, 0);
	}
#endif

bad:
	return(child_proc);
}

void
proc_lock(proc_t p)
{
	lck_mtx_lock(&p->p_mlock);
}

void
proc_unlock(proc_t p)
{
	lck_mtx_unlock(&p->p_mlock);
}

void
proc_spinlock(proc_t p)
{
	lck_spin_lock(&p->p_slock);
}

void
proc_spinunlock(proc_t p)
{
	lck_spin_unlock(&p->p_slock);
}

void 
proc_list_lock(void)
{
	lck_mtx_lock(proc_list_mlock);
}

void 
proc_list_unlock(void)
{
	lck_mtx_unlock(proc_list_mlock);
}

#include <kern/zalloc.h>

struct zone	*uthread_zone;
static int uthread_zone_inited = 0;

static void
uthread_zone_init(void)
{
	if (!uthread_zone_inited) {
		uthread_zone = zinit(sizeof(struct uthread),
					thread_max * sizeof(struct uthread),
					THREAD_CHUNK * sizeof(struct uthread),
					"uthreads");
		uthread_zone_inited = 1;

		zone_change(uthread_zone, Z_NOENCRYPT, TRUE);
	}
}

void *
uthread_alloc(task_t task, thread_t thread, int noinherit)
{
	proc_t p;
	uthread_t uth;
	uthread_t uth_parent;
	void *ut;

	if (!uthread_zone_inited)
		uthread_zone_init();

	ut = (void *)zalloc(uthread_zone);
	bzero(ut, sizeof(struct uthread));

	p = (proc_t) get_bsdtask_info(task);
	uth = (uthread_t)ut;

	/*
	 * Thread inherits credential from the creating thread, if both
	 * are in the same task.
	 *
	 * If the creating thread has no credential or is from another
	 * task we can leave the new thread credential NULL.  If it needs
	 * one later, it will be lazily assigned from the task's process.
	 */
	uth_parent = (uthread_t)get_bsdthread_info(current_thread());
	if ((noinherit == 0) && task == current_task() && 
	    uth_parent != NULL &&
	    IS_VALID_CRED(uth_parent->uu_ucred)) {
		/*
		 * XXX The new thread is, in theory, being created in context
		 * XXX of parent thread, so a direct reference to the parent
		 * XXX is OK.
		 */
		kauth_cred_ref(uth_parent->uu_ucred);
		uth->uu_ucred = uth_parent->uu_ucred;
		/* the credential we just inherited is an assumed credential */
		if (uth_parent->uu_flag & UT_SETUID)
			uth->uu_flag |= UT_SETUID;
	} else {
		/* sometimes workqueue threads are created out task context */
		if ((task != kernel_task) && (p != PROC_NULL))
			uth->uu_ucred = kauth_cred_proc_ref(p);
		else
			uth->uu_ucred = NOCRED;
	}

	
	if ((task != kernel_task) && p) {
		
		proc_lock(p);
		if (noinherit != 0) {
			/* workq threads will not inherit masks */
			uth->uu_sigmask = ~workq_threadmask;
		} else if (uth_parent) {
			if (uth_parent->uu_flag & UT_SAS_OLDMASK)
				uth->uu_sigmask = uth_parent->uu_oldmask;
			else
				uth->uu_sigmask = uth_parent->uu_sigmask;
		}
		uth->uu_context.vc_thread = thread;
		TAILQ_INSERT_TAIL(&p->p_uthlist, uth, uu_list);
		proc_unlock(p);

#if CONFIG_DTRACE
		if (p->p_dtrace_ptss_pages != NULL) {
			uth->t_dtrace_scratch = dtrace_ptss_claim_entry(p);
		}
#endif
	}

	return (ut);
}


/* 
 * This routine frees all the BSD context in uthread except the credential.
 * It does not free the uthread structure as well
 */
void
uthread_cleanup(task_t task, void *uthread, void * bsd_info)
{
	struct _select *sel;
	uthread_t uth = (uthread_t)uthread;
	proc_t p = (proc_t)bsd_info;


	if (uth->uu_lowpri_window || uth->uu_throttle_info) {
	        /*
		 * task is marked as a low priority I/O type
		 * and we've somehow managed to not dismiss the throttle
		 * through the normal exit paths back to user space...
		 * no need to throttle this thread since its going away
		 * but we do need to update our bookeeping w/r to throttled threads
		 *
		 * Calling this routine will clean up any throttle info reference
		 * still inuse by the thread.
		 */
		throttle_lowpri_io(FALSE);
	}
	/*
	 * Per-thread audit state should never last beyond system
	 * call return.  Since we don't audit the thread creation/
	 * removal, the thread state pointer should never be
	 * non-NULL when we get here.
	 */
	assert(uth->uu_ar == NULL);

	sel = &uth->uu_select;
	/* cleanup the select bit space */
	if (sel->nbytes) {
		FREE(sel->ibits, M_TEMP);
		FREE(sel->obits, M_TEMP);
		sel->nbytes = 0;
	}

	if (uth->uu_cdir) {
		vnode_rele(uth->uu_cdir);
		uth->uu_cdir = NULLVP;
	}

	if (uth->uu_allocsize && uth->uu_wqset){
		kfree(uth->uu_wqset, uth->uu_allocsize);
		sel->count = 0;
		uth->uu_allocsize = 0;
		uth->uu_wqset = 0;
		sel->wql = 0;
	}

	if(uth->pth_name != NULL)
	{
		kfree(uth->pth_name, MAXTHREADNAMESIZE);
		uth->pth_name = 0;
	}
	if ((task != kernel_task) && p) {

		if (((uth->uu_flag & UT_VFORK) == UT_VFORK) && (uth->uu_proc != PROC_NULL))  {
			vfork_exit_internal(uth->uu_proc, 0, 1);
		}
		/*
		 * Remove the thread from the process list and
		 * transfer [appropriate] pending signals to the process.
		 */
		if (get_bsdtask_info(task) == p) { 
			proc_lock(p);
			TAILQ_REMOVE(&p->p_uthlist, uth, uu_list);
			p->p_siglist |= (uth->uu_siglist & execmask & (~p->p_sigignore | sigcantmask));
			proc_unlock(p);
		}
#if CONFIG_DTRACE
		struct dtrace_ptss_page_entry *tmpptr = uth->t_dtrace_scratch;
		uth->t_dtrace_scratch = NULL;
		if (tmpptr != NULL) {
			dtrace_ptss_release_entry(p, tmpptr);
		}
#endif
	}
}

/* This routine releases the credential stored in uthread */
void
uthread_cred_free(void *uthread)
{
	uthread_t uth = (uthread_t)uthread;

	/* and free the uthread itself */
	if (IS_VALID_CRED(uth->uu_ucred)) {
		kauth_cred_t oldcred = uth->uu_ucred;
		uth->uu_ucred = NOCRED;
		kauth_cred_unref(&oldcred);
	}
}

/* This routine frees the uthread structure held in thread structure */
void
uthread_zone_free(void *uthread)
{
	/* and free the uthread itself */
	zfree(uthread_zone, uthread);
}
