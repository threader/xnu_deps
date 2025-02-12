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
/*
 * @OSF_COPYRIGHT@
 */
/* 
 * Mach Operating System
 * Copyright (c) 1991,1990,1989,1988,1987 Carnegie Mellon University
 * All Rights Reserved.
 * 
 * Permission to use, copy, modify and distribute this software and its
 * documentation is hereby granted, provided that both the copyright
 * notice and this permission notice appear in all copies of the
 * software, derivative works or modified versions, and any portions
 * thereof, and that both notices appear in supporting documentation.
 * 
 * CARNEGIE MELLON ALLOWS FREE USE OF THIS SOFTWARE IN ITS "AS IS"
 * CONDITION.  CARNEGIE MELLON DISCLAIMS ANY LIABILITY OF ANY KIND FOR
 * ANY DAMAGES WHATSOEVER RESULTING FROM THE USE OF THIS SOFTWARE.
 * 
 * Carnegie Mellon requests users of this software to return to
 * 
 *  Software Distribution Coordinator  or  Software.Distribution@CS.CMU.EDU
 *  School of Computer Science
 *  Carnegie Mellon University
 *  Pittsburgh PA 15213-3890
 * 
 * any improvements or extensions that they make and grant Carnegie Mellon
 * the rights to redistribute these changes.
 */
/*
 */

#ifndef	_KERN_IPC_TT_H_
#define _KERN_IPC_TT_H_

#include <mach/boolean.h>
#include <mach/port.h>
#include <vm/vm_kern.h>
#include <kern/kern_types.h>
#include <kern/ipc_kobject.h>
#include <ipc/ipc_space.h>
#include <ipc/ipc_table.h>
#include <ipc/ipc_port.h>
#include <ipc/ipc_right.h>
#include <ipc/ipc_entry.h>
#include <ipc/ipc_object.h>


/* Initialize a task's IPC state */
extern void ipc_task_init(
	task_t		task,
	task_t		parent);

/* Enable a task for IPC access */
extern void ipc_task_enable(
	task_t		task);

/* Disable IPC access to a task */
extern void ipc_task_disable(
	task_t		task);

/* Clear out a task's IPC state */
extern void ipc_task_reset(
	task_t		task);

/* Clean up and destroy a task's IPC state */
extern void ipc_task_terminate(
	task_t		task);

/* Initialize a thread's IPC state */
extern void ipc_thread_init(
	thread_t	thread);

/* Disable IPC access to a thread */
extern void ipc_thread_disable(
	thread_t	thread);

/* Clean up and destroy a thread's IPC state */
extern void ipc_thread_terminate(
	thread_t	thread);

/* Clear out a thread's IPC state */
extern void ipc_thread_reset(
	thread_t	thread);

/* Return a send right for the task's user-visible self port */
extern ipc_port_t retrieve_task_self_fast(
	task_t		task);

/* Return a send right for the thread's user-visible self port */
extern ipc_port_t retrieve_thread_self_fast(
	thread_t	thread);

/* Convert from a port to a task name */
extern task_name_t convert_port_to_task_name(
	ipc_port_t	port);

/* Convert from a port to a task */
extern task_t convert_port_to_task(
	ipc_port_t	port);

extern task_t port_name_to_task(
	mach_port_name_t name);

extern boolean_t ref_task_port_locked(
	ipc_port_t port, task_t *ptask);

/* Convert from a port to a space */
extern ipc_space_t convert_port_to_space(
	ipc_port_t	port);

extern boolean_t ref_space_port_locked(
	ipc_port_t port, ipc_space_t *pspace);

/* Convert from a port to a map */
extern vm_map_t convert_port_to_map(
	ipc_port_t	port);

/* Convert from a port to a thread */
extern thread_t	convert_port_to_thread(
	ipc_port_t		port);

extern thread_t	port_name_to_thread(
	mach_port_name_t	port_name);

/* Convert from a task to a port */
extern ipc_port_t convert_task_to_port(
	task_t			task);

/* Convert from a task name to a port */
extern ipc_port_t convert_task_name_to_port(
	task_name_t		task_name);

/* Convert from a thread to a port */
extern ipc_port_t	convert_thread_to_port(
	thread_t		thread);

/* Deallocate a space ref produced by convert_port_to_space */
extern void space_deallocate(
	ipc_space_t		space);

#endif	/* _KERN_IPC_TT_H_ */
