/*
 * Copyright (c) 2003-2005 Apple Computer, Inc. All rights reserved.
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

#include <sys/syscall.h>
#include <sys/types.h> /* u_int */
#include <sys/proc.h> /* struct proc */
#include <sys/systm.h> /* struct sysent */
#include <sys/sysproto.h>

#pragma mark **** kern debug ****
typedef void (*chudxnu_kdebug_callback_func_t)(uint32_t debugid, uint32_t arg0, uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4);
static chudxnu_kdebug_callback_func_t kdebug_callback_fn = NULL;

kern_return_t chudxnu_kdebug_callback_enter(chudxnu_kdebug_callback_func_t);
kern_return_t chudxnu_kdebug_callback_cancel(void);

extern void kdbg_control_chud(int val, void *fn);
extern unsigned int kdebug_enable;

static void
chudxnu_private_kdebug_callback(
	unsigned int debugid,
	unsigned int arg0,
	unsigned int arg1,
	unsigned int arg2,
	unsigned int arg3,
	unsigned int arg4)
{
    chudxnu_kdebug_callback_func_t fn = kdebug_callback_fn;
    
    if(fn) {
        (fn)(debugid, arg0, arg1, arg2, arg3, arg4);
    }
}

__private_extern__ kern_return_t
chudxnu_kdebug_callback_enter(chudxnu_kdebug_callback_func_t func)
{
    kdebug_callback_fn = func;

    kdbg_control_chud(TRUE, (void *)chudxnu_private_kdebug_callback);
    kdebug_enable |= 0x10;

    return KERN_SUCCESS;
}

__private_extern__ kern_return_t
chudxnu_kdebug_callback_cancel(void)
{
    kdebug_callback_fn = NULL;
    kdbg_control_chud(FALSE, NULL);
    kdebug_enable &= ~(0x10);

    return KERN_SUCCESS;
}

#pragma mark **** CHUD syscall ****
typedef kern_return_t (*chudxnu_syscall_callback_func_t)(uint32_t code, uint32_t arg0, uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4);
static chudxnu_syscall_callback_func_t syscall_callback_fn = NULL;

kern_return_t chudxnu_syscall_callback_enter(chudxnu_syscall_callback_func_t func);
kern_return_t chudxnu_syscall_callback_cancel(void);

int chud(p, uap, retval)
     struct proc *p;
     struct chud_args *uap;
     register_t *retval;
{
#pragma unused (p)

    chudxnu_syscall_callback_func_t fn = syscall_callback_fn;
    
	if(!fn) {
		return EINVAL;
	}
	
	*retval = fn(uap->code, uap->arg1, uap->arg2, uap->arg3, uap->arg4, uap->arg5);
		
	return 0;
}

__private_extern__
kern_return_t chudxnu_syscall_callback_enter(chudxnu_syscall_callback_func_t func)
{
	syscall_callback_fn = func;
    return KERN_SUCCESS;
}

__private_extern__
kern_return_t chudxnu_syscall_callback_cancel(void)
{
	syscall_callback_fn = NULL;
    return KERN_SUCCESS;
}
