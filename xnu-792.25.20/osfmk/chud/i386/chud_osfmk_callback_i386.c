/*
 * Copyright (c) 2003-2004 Apple Computer, Inc. All rights reserved.
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

#include <stdint.h>
#include <mach/boolean.h>
#include <mach/mach_types.h>

#include <kern/kern_types.h>
#include <kern/processor.h>
#include <kern/timer_call.h>
#include <kern/thread_call.h>
#include <kern/kalloc.h>
#include <kern/thread.h>

#include <machine/machine_routines.h>
#include <machine/cpu_data.h>
#include <machine/trap.h>

#include <chud/chud_xnu.h>
#include <chud/chud_xnu_private.h>

#include <i386/misc_protos.h>
#include <i386/mp.h>
#include <i386/machine_cpu.h>

#include <sys/kdebug.h>
#define CHUD_TIMER_CALLBACK_CANCEL	0
#define CHUD_TIMER_CALLBACK_ENTER	1
#define CHUD_TIMER_CALLBACK		2
#define CHUD_AST_SEND			3
#define CHUD_AST_CALLBACK		4
#define CHUD_CPUSIG_SEND		5
#define CHUD_CPUSIG_CALLBACK		6

__private_extern__
void chudxnu_cancel_all_callbacks(void)
{
    chudxnu_cpusig_callback_cancel();
    chudxnu_cpu_timer_callback_cancel_all();
    chudxnu_interrupt_callback_cancel();
    chudxnu_perfmon_ast_callback_cancel();
    chudxnu_kdebug_callback_cancel();
    chudxnu_thread_timer_callback_cancel();
    chudxnu_trap_callback_cancel();
#if XXX
	chudxnu_syscall_callback_cancel();
#endif
}

static chudcpu_data_t chudcpu_boot_cpu;
void *
chudxnu_cpu_alloc(boolean_t boot_processor)
{
	chudcpu_data_t	*chud_proc_info;


	if (boot_processor) {
		chud_proc_info = &chudcpu_boot_cpu;
	} else {
		chud_proc_info = (chudcpu_data_t *)
					kalloc(sizeof(chudcpu_data_t));
		if (chud_proc_info == (chudcpu_data_t *)NULL) {
			return (void *)NULL;
		}
	}
	bzero((char *)chud_proc_info, sizeof(chudcpu_data_t));
	chud_proc_info->t_deadline = 0xFFFFFFFFFFFFFFFFULL;
	mpqueue_init(&chud_proc_info->cpu_request_queue);


	return (void *)chud_proc_info;
}

void
chudxnu_cpu_free(void *cp)
{
	if (cp == NULL || cp == (void *)&chudcpu_boot_cpu) {
		return;
	} else {
		kfree(cp,sizeof(chudcpu_data_t));
	}
}

static void
chudxnu_private_cpu_timer_callback(
	timer_call_param_t param0,
	timer_call_param_t param1)
{
#pragma unused (param0)
#pragma unused (param1)
	chudcpu_data_t			*chud_proc_info;
	boolean_t			oldlevel;
	x86_thread_state_t 		state;
	mach_msg_type_number_t		count;
	chudxnu_cpu_timer_callback_func_t fn;

	oldlevel = ml_set_interrupts_enabled(FALSE);
	chud_proc_info = (chudcpu_data_t *)(current_cpu_datap()->cpu_chud);

	count = x86_THREAD_STATE_COUNT;
	if (chudxnu_thread_get_state(current_thread(),
				     x86_THREAD_STATE,
				     (thread_state_t)&state,
				     &count,
				     FALSE) == KERN_SUCCESS) {
			fn = chud_proc_info->cpu_timer_callback_fn;
       		if (fn) {
			KERNEL_DEBUG_CONSTANT(
				MACHDBG_CODE(DBG_MACH_CHUD,
					CHUD_TIMER_CALLBACK) | DBG_FUNC_NONE,
				(uint32_t)fn, 0,0,0,0);
				//state.eip, state.cs, 0, 0);
       			(fn)(
				x86_THREAD_STATE,
				(thread_state_t)&state,
				count);
       		} 
	} 
	
	ml_set_interrupts_enabled(oldlevel);
}

__private_extern__ kern_return_t
chudxnu_cpu_timer_callback_enter(
	chudxnu_cpu_timer_callback_func_t	func,
	uint32_t				time,
	uint32_t				units)
{
	chudcpu_data_t	*chud_proc_info;
	boolean_t	oldlevel;

	oldlevel = ml_set_interrupts_enabled(FALSE);
	chud_proc_info = (chudcpu_data_t *)(current_cpu_datap()->cpu_chud);

	// cancel any existing callback for this cpu
	timer_call_cancel(&(chud_proc_info->cpu_timer_call));

	chud_proc_info->cpu_timer_callback_fn = func;

	clock_interval_to_deadline(time, units, &(chud_proc_info->t_deadline));
	timer_call_setup(&(chud_proc_info->cpu_timer_call),
			 chudxnu_private_cpu_timer_callback, NULL);
	timer_call_enter(&(chud_proc_info->cpu_timer_call),
			 chud_proc_info->t_deadline);

	KERNEL_DEBUG_CONSTANT(
		MACHDBG_CODE(DBG_MACH_CHUD,
			     CHUD_TIMER_CALLBACK_ENTER) | DBG_FUNC_NONE,
		(uint32_t) func, time, units, 0, 0);

	ml_set_interrupts_enabled(oldlevel);
	return KERN_SUCCESS;
}

__private_extern__ kern_return_t
chudxnu_cpu_timer_callback_cancel(void)
{
	chudcpu_data_t	*chud_proc_info;
	boolean_t	oldlevel;

	oldlevel = ml_set_interrupts_enabled(FALSE);
	chud_proc_info = (chudcpu_data_t *)(current_cpu_datap()->cpu_chud);

	timer_call_cancel(&(chud_proc_info->cpu_timer_call));

	KERNEL_DEBUG_CONSTANT(
		MACHDBG_CODE(DBG_MACH_CHUD,
			     CHUD_TIMER_CALLBACK_CANCEL) | DBG_FUNC_NONE,
		0, 0, 0, 0, 0);

	// set to max value:
	chud_proc_info->t_deadline |= ~(chud_proc_info->t_deadline);
	chud_proc_info->cpu_timer_callback_fn = NULL;

	ml_set_interrupts_enabled(oldlevel);
 	return KERN_SUCCESS;
}

__private_extern__ kern_return_t
chudxnu_cpu_timer_callback_cancel_all(void)
{
	unsigned int	cpu;
	chudcpu_data_t	*chud_proc_info;

	for(cpu=0; cpu < real_ncpus; cpu++) {
		chud_proc_info = (chudcpu_data_t *) cpu_data_ptr[cpu]->cpu_chud;
		if (chud_proc_info == NULL)
			continue;
		timer_call_cancel(&(chud_proc_info->cpu_timer_call));
		chud_proc_info->t_deadline |= ~(chud_proc_info->t_deadline);
		chud_proc_info->cpu_timer_callback_fn = NULL;
	}
	return KERN_SUCCESS;
}

#pragma mark **** trap ****
static chudxnu_trap_callback_func_t trap_callback_fn = NULL;

static kern_return_t
chudxnu_private_trap_callback(
	int			trapno,
	void			*regs,
	int			unused1,
	int			unused2)
{
#pragma unused (regs)
#pragma unused (unused1)
#pragma unused (unused2)
    kern_return_t retval = KERN_FAILURE;
	chudxnu_trap_callback_func_t fn = trap_callback_fn;

        if(fn) {
		boolean_t			oldlevel;
		x86_thread_state_t	state;	// once we have an 64bit- independent way to determine if a thread is
									// running kernel code, we'll switch to x86_thread_state_t.
		mach_msg_type_number_t		count;	

		oldlevel = ml_set_interrupts_enabled(FALSE);

		count = x86_THREAD_STATE_COUNT;
		if(chudxnu_thread_get_state(current_thread(),
				x86_THREAD_STATE,
				(thread_state_t)&state,
				&count,
				FALSE) == KERN_SUCCESS) {
	  
		  retval = (fn)(
				  trapno,
				  x86_THREAD_STATE,
				  (thread_state_t)&state,
				  count);
		}
    ml_set_interrupts_enabled(oldlevel);
	}

    return retval;
}

__private_extern__ kern_return_t
chudxnu_trap_callback_enter(chudxnu_trap_callback_func_t func)
{
    trap_callback_fn = func;
    perfTrapHook = chudxnu_private_trap_callback;
    return KERN_SUCCESS;
}

__private_extern__ kern_return_t
chudxnu_trap_callback_cancel(void)
{
    trap_callback_fn = NULL;
        perfTrapHook = NULL;
    return KERN_SUCCESS;
}

#pragma mark **** ast ****
static
chudxnu_perfmon_ast_callback_func_t perfmon_ast_callback_fn = NULL;

static kern_return_t
chudxnu_private_chud_ast_callback(
	int			trapno,
	void			*regs,
	int			unused1,
	int			unused2)
{
#pragma unused (trapno)
#pragma unused (regs)
#pragma unused (unused1)
#pragma unused (unused2)
	boolean_t	oldlevel = ml_set_interrupts_enabled(FALSE);
	ast_t		*myast = ast_pending();
	kern_return_t	retval = KERN_FAILURE;
	chudxnu_perfmon_ast_callback_func_t fn = perfmon_ast_callback_fn;
    
	if (*myast & AST_CHUD_URGENT) {
		*myast &= ~(AST_CHUD_URGENT | AST_CHUD);
		if ((*myast & AST_PREEMPTION) != AST_PREEMPTION)
			*myast &= ~(AST_URGENT);
		retval = KERN_SUCCESS;
	} else if (*myast & AST_CHUD) {
		*myast &= ~(AST_CHUD);
		retval = KERN_SUCCESS;
	}

	if (fn) {
		x86_thread_state_t state;
		mach_msg_type_number_t count;
		count = x86_THREAD_STATE_COUNT;
		
		if (chudxnu_thread_get_state(
			current_thread(),
			x86_THREAD_STATE,
			(thread_state_t) &state, &count,
			TRUE) == KERN_SUCCESS) {

			KERNEL_DEBUG_CONSTANT(
				MACHDBG_CODE(DBG_MACH_CHUD,
				    CHUD_AST_CALLBACK) | DBG_FUNC_NONE,
				(uint32_t) fn, 0, 0, 0, 0);

			(fn)(
				x86_THREAD_STATE,
				(thread_state_t) &state,
				count);
		}
	}
    
	ml_set_interrupts_enabled(oldlevel);
	return retval;
}

__private_extern__ kern_return_t
chudxnu_perfmon_ast_callback_enter(chudxnu_perfmon_ast_callback_func_t func)
{
	perfmon_ast_callback_fn = func;
	perfASTHook = chudxnu_private_chud_ast_callback;
	return KERN_SUCCESS;
}

__private_extern__ kern_return_t
chudxnu_perfmon_ast_callback_cancel(void)
{
    perfmon_ast_callback_fn = NULL;
    perfASTHook = NULL;
    return KERN_SUCCESS;
}

__private_extern__ kern_return_t
chudxnu_perfmon_ast_send_urgent(boolean_t urgent)
{
    boolean_t oldlevel = ml_set_interrupts_enabled(FALSE);
	ast_t *myast = ast_pending();

    if(urgent) {
        *myast |= (AST_CHUD_URGENT | AST_URGENT);
    } else {
        *myast |= (AST_CHUD);
    }

    KERNEL_DEBUG_CONSTANT(
	MACHDBG_CODE(DBG_MACH_CHUD, CHUD_AST_SEND) | DBG_FUNC_NONE,
	urgent, 0, 0, 0, 0);

    ml_set_interrupts_enabled(oldlevel);
    return KERN_SUCCESS;
}

__private_extern__ kern_return_t
chudxnu_perfmon_ast_send(void)
{
    return chudxnu_perfmon_ast_send_urgent(TRUE);
}

#pragma mark **** interrupt ****
static chudxnu_interrupt_callback_func_t interrupt_callback_fn = NULL;

static void
chudxnu_private_interrupt_callback(void *foo)
{
#pragma unused (foo)
	chudxnu_interrupt_callback_func_t fn = interrupt_callback_fn;

	if(fn) {
		boolean_t			oldlevel;
		x86_thread_state_t		state;
		mach_msg_type_number_t		count;

		oldlevel = ml_set_interrupts_enabled(FALSE);

		count = x86_THREAD_STATE_COUNT;
		if(chudxnu_thread_get_state(current_thread(),
					    x86_THREAD_STATE,
					    (thread_state_t)&state,
					    &count,
					    FALSE) == KERN_SUCCESS) {
			(fn)(
				X86_INTERRUPT_PERFMON,
				x86_THREAD_STATE,
				(thread_state_t)&state,
				count);
		}
		ml_set_interrupts_enabled(oldlevel);
	}
}

__private_extern__ kern_return_t
chudxnu_interrupt_callback_enter(chudxnu_interrupt_callback_func_t func)
{
    interrupt_callback_fn = func;
    lapic_set_pmi_func((i386_intr_func_t)chudxnu_private_interrupt_callback);
    return KERN_SUCCESS;
}

__private_extern__ kern_return_t
chudxnu_interrupt_callback_cancel(void)
{
    interrupt_callback_fn = NULL;
    lapic_set_pmi_func(NULL);
    return KERN_SUCCESS;
}

#pragma mark **** cpu signal ****
static chudxnu_cpusig_callback_func_t cpusig_callback_fn = NULL;

static          kern_return_t
chudxnu_private_cpu_signal_handler(int request)
{
	chudxnu_cpusig_callback_func_t fn = cpusig_callback_fn;
	
	if (fn) {
	x86_thread_state_t  state;
		mach_msg_type_number_t count = x86_THREAD_STATE_COUNT;

		if (chudxnu_thread_get_state(current_thread(),
					     x86_THREAD_STATE,
					     (thread_state_t) &state, &count,
					     FALSE) == KERN_SUCCESS) {
			KERNEL_DEBUG_CONSTANT(
				MACHDBG_CODE(DBG_MACH_CHUD,
					CHUD_CPUSIG_CALLBACK) | DBG_FUNC_NONE,
				(uint32_t)fn, request, 0, 0, 0);
			return (fn)(
					request, x86_THREAD_STATE,
					(thread_state_t) &state, count);
		} else {
			return KERN_FAILURE;
		}
	}
	return KERN_SUCCESS; //ignored
}
/*
 * chudxnu_cpu_signal_handler() is called from the IPI handler
 * when a CHUD signal arrives from another processor.
 */
__private_extern__ void
chudxnu_cpu_signal_handler(void)
{
	chudcpu_signal_request_t	*reqp;
	chudcpu_data_t			*chudinfop;

	chudinfop = (chudcpu_data_t *) current_cpu_datap()->cpu_chud;

	mpdequeue_head(&(chudinfop->cpu_request_queue),
		       (queue_entry_t *) &reqp);
	while (reqp != NULL) {
		chudxnu_private_cpu_signal_handler(reqp->req_code);
		reqp->req_sync = 0;
		mpdequeue_head(&(chudinfop->cpu_request_queue),
			       (queue_entry_t *) &reqp);
	}
}

__private_extern__ kern_return_t
chudxnu_cpusig_callback_enter(chudxnu_cpusig_callback_func_t func)
{
	cpusig_callback_fn = func;
	return KERN_SUCCESS;
}

__private_extern__ kern_return_t
chudxnu_cpusig_callback_cancel(void)
{
	cpusig_callback_fn = NULL;
	return KERN_SUCCESS;
}

__private_extern__ kern_return_t
chudxnu_cpusig_send(int otherCPU, uint32_t request_code)
{
	int				thisCPU;
	kern_return_t			retval = KERN_FAILURE;
	chudcpu_signal_request_t	request;
	uint64_t			deadline;
	chudcpu_data_t			*target_chudp;
	boolean_t old_level;

	disable_preemption();
	// force interrupts on for a cross CPU signal.
	old_level = chudxnu_set_interrupts_enabled(TRUE);
	thisCPU = cpu_number();

	if ((unsigned) otherCPU < real_ncpus &&
	    thisCPU != otherCPU &&
	    cpu_data_ptr[otherCPU]->cpu_running) {

		target_chudp = (chudcpu_data_t *)
					cpu_data_ptr[otherCPU]->cpu_chud;

		/* Fill out request */
		request.req_sync = 0xFFFFFFFF;		/* set sync flag */
		//request.req_type = CPRQchud;		/* set request type */
		request.req_code = request_code;	/* set request */

		KERNEL_DEBUG_CONSTANT(
			MACHDBG_CODE(DBG_MACH_CHUD,
				     CHUD_CPUSIG_SEND) | DBG_FUNC_NONE,
			otherCPU, request_code, 0, 0, 0);

		/*
		 * Insert the new request in the target cpu's request queue
		 * and signal target cpu.
		 */
		mpenqueue_tail(&target_chudp->cpu_request_queue,
			       &request.req_entry);
		i386_signal_cpu(otherCPU, MP_CHUD, ASYNC);

		/* Wait for response or timeout */
		deadline = mach_absolute_time() + LockTimeOut;
		while (request.req_sync != 0) {
			if (mach_absolute_time() > deadline) {
				panic("chudxnu_cpusig_send(%d,%d) timed out\n",
					otherCPU, request_code);
			}
			cpu_pause();
		}
		retval = KERN_SUCCESS;
	} else {
		retval = KERN_INVALID_ARGUMENT;
	}

	chudxnu_set_interrupts_enabled(old_level);
	enable_preemption();
	return retval;
}

#ifdef XXX
#pragma mark **** CHUD syscall (PPC) ****

typedef int (*PPCcallEnt)(struct savearea *save);
extern PPCcallEnt      PPCcalls[];

static chudxnu_syscall_callback_func_t syscall_callback_fn = NULL;

static int
chudxnu_private_syscall_callback(struct savearea *ssp)
{
	if(ssp) {
		if(syscall_callback_fn) {
			struct ppc_thread_state64 state;
			kern_return_t retval;
			mach_msg_type_number_t count = PPC_THREAD_STATE64_COUNT;
			chudxnu_copy_savearea_to_threadstate(PPC_THREAD_STATE64, (thread_state_t)&state, &count, ssp);
			ssp->save_r3 = (syscall_callback_fn)(PPC_THREAD_STATE64, (thread_state_t)&state, count);
		} else {
			ssp->save_r3 = KERN_FAILURE;
		}
	}
	
    return 1; // check for ASTs (always)
}

__private_extern__ kern_return_t
chudxnu_syscall_callback_enter(chudxnu_syscall_callback_func_t func)
{
	syscall_callback_fn = func;
	PPCcalls[9] = chudxnu_private_syscall_callback;
    __asm__ volatile("eieio");	/* force order */
    __asm__ volatile("sync");	/* force to memory */
    return KERN_SUCCESS;
}

__private_extern__ kern_return_t
chudxnu_syscall_callback_cancel(void)
{
	syscall_callback_fn = NULL;
	PPCcalls[9] = NULL;
    __asm__ volatile("eieio");	/* force order */
    __asm__ volatile("sync");	/* force to memory */
    return KERN_SUCCESS;
}
#endif
