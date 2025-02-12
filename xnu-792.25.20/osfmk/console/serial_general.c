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
/*
 * @OSF_COPYRIGHT@
 */
/*
 * @APPLE_FREE_COPYRIGHT@
 */

#include <mach_kdb.h>
#include <platforms.h>
#include <kern/spl.h>
#include <mach/std_types.h>
#include <types.h>
#include <kern/thread.h>
#include <console/serial_protos.h>

extern unsigned int disableSerialOuput;
extern void cons_cinput(char ch);		/* The BSD routine that gets characters */

unsigned int serialmode;				/* Serial mode keyboard and console control */

/*
 *  This routine will start a thread that polls the serial port, listening for
 *  characters that have been typed.
 */

void
serial_keyboard_init(void)
{
	kern_return_t	result;
	thread_t		thread;

	if(!(serialmode & 2)) return;		/* Leave if we do not want a serial console */

	kprintf("Serial keyboard started\n");
	result = kernel_thread_start_priority((thread_continue_t)serial_keyboard_start, NULL, MAXPRI_KERNEL, &thread);
	if (result != KERN_SUCCESS)
		panic("serial_keyboard_init");

	thread_deallocate(thread);
}

void
serial_keyboard_start(void)
{

	serial_keyboard_poll();				/* Go see if there are any characters pending now */
	panic("serial_keyboard_start: we can't get back here\n");

}

void
serial_keyboard_poll(void)
{
	int chr;
	uint64_t next;


	while(1) {							/* Do this for a while */
		chr = _serial_getc(0, 1, 0, 1);	/* Get a character if there is one */
		if(chr < 0) break;				/* The serial buffer is empty */
		cons_cinput((char)chr);			/* Buffer up the character */
	}

	clock_interval_to_deadline(16, 1000000, &next);	/* Get time of pop */

	assert_wait_deadline((event_t)serial_keyboard_poll, THREAD_UNINT, next);	/* Show we are "waiting" */
	thread_block((thread_continue_t)serial_keyboard_poll);	/* Wait for it */
	panic("serial_keyboard_poll: Shouldn't never ever get here...\n");
}

boolean_t console_is_serial()
{
	return cons_ops_index == SERIAL_CONS_OPS;
}

int
switch_to_video_console()
{
	int old_cons_ops = cons_ops_index;
	cons_ops_index = VC_CONS_OPS;
	return old_cons_ops;
}

int
switch_to_serial_console()
{
	int old_cons_ops = cons_ops_index;
	cons_ops_index = SERIAL_CONS_OPS;
	return old_cons_ops;
}

/* The switch_to_{video,serial,kgdb}_console functions return a cookie that
   can be used to restore the console to whatever it was before, in the
   same way that splwhatever() and splx() work.  */
void
switch_to_old_console(int old_console)
{
	static boolean_t squawked;
	uint32_t ops = old_console;

	if ((ops >= nconsops) && !squawked) {
		squawked = TRUE;
		printf("switch_to_old_console: unknown ops %d\n", ops);
	} else
		cons_ops_index = ops;
}
