/*
 * Copyright (c) 2000 Apple Computer, Inc. All rights reserved.
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
 * Copyright (c) 1992 NeXT Computer, Inc.
 *
 * Machine dependent kernel call table defines.
 *
 * HISTORY
 *
 * 17 June 1992 ? at NeXT
 *	Created.
 */

typedef union {
	kern_return_t		(*args_0)(void);
	kern_return_t		(*args_1)(uint32_t);
	kern_return_t		(*args64_1)(uint64_t);
	kern_return_t		(*args_2)(uint32_t,uint32_t);
	kern_return_t		(*args_3)(uint32_t,uint32_t,uint32_t);
	kern_return_t		(*args_4)(uint32_t,uint32_t,uint32_t,uint32_t);
	kern_return_t		(*args_var)(uint32_t,...);
	int			(*args_bsd_3)(int *, uint32_t,uint32_t,uint32_t);
} machdep_call_routine_t;

#define MACHDEP_CALL_ROUTINE(func, args)	\
	{ { .args_ ## args = func }, args, 0 }
	
#define MACHDEP_CALL_ROUTINE64(func, args)	\
	{ { .args64_ ## args = func }, args, 0 }
	
#define MACHDEP_BSD_CALL_ROUTINE(func, args)	\
	{ { .args_bsd_ ## args = func }, args, 1 }

typedef struct {
    machdep_call_routine_t	routine;
    int				nargs;
    int				bsd_style;
} machdep_call_t;

extern machdep_call_t		machdep_call_table[];
extern machdep_call_t		machdep_call_table64[];

extern int			machdep_call_count;

extern kern_return_t		thread_get_cthread_self(void);
extern kern_return_t		thread_set_cthread_self(uint32_t);
extern kern_return_t		thread_fast_set_cthread_self(uint32_t);
extern kern_return_t		thread_fast_set_cthread_self64(uint64_t);
extern kern_return_t		thread_set_user_ldt(uint32_t,uint32_t,uint32_t);

extern int			i386_set_ldt(int *,uint32_t,uint32_t,uint32_t);
extern int			i386_get_ldt(int *,uint32_t,uint32_t,uint32_t);

extern void			machdep_syscall(x86_saved_state_t *);
extern void			machdep_syscall64(x86_saved_state_t *);
