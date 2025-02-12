/*
 * Copyright (c) 1985, 1993
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
 */

#if defined(LIBC_SCCS) && !defined(lint)
static char sccsid[] = "@(#)abort.c	8.1 (Berkeley) 6/4/93";
#endif /* LIBC_SCCS and not lint */
#include <sys/cdefs.h>
__FBSDID("$FreeBSD: src/lib/libc/stdlib/abort.c,v 1.9 2003/08/16 11:43:57 davidxu Exp $");

#include "namespace.h"
#include <signal.h>
#include <stdlib.h>
#include <stddef.h>
#include <unistd.h>
#include <pthread.h>
#include "un-namespace.h"

extern void (*__cleanup)();
extern void __abort(void) __dead2;

#define TIMEOUT	10000	/* 10 milliseconds */

void
abort()
{
	struct sigaction act;

	/*
	 * POSIX requires we flush stdio buffers on abort.
	 * XXX ISO C requires that abort() be async-signal-safe.
	 */
	if (__cleanup)
		(*__cleanup)();

	sigfillset(&act.sa_mask);
	/*
	 * Don't block SIGABRT to give any handler a chance; we ignore
	 * any errors -- ISO C doesn't allow abort to return anyway.
	 */
	sigdelset(&act.sa_mask, SIGABRT);
	(void)_sigprocmask(SIG_SETMASK, &act.sa_mask, NULL);
	(void)raise(SIGABRT);
	usleep(TIMEOUT); /* give time for signal to happen */

	/*
	 * If SIGABRT was ignored, or caught and the handler returns, do
	 * it again, only harder.
	 */
	 __abort();
}

__private_extern__ void
__abort()
{
	struct sigaction act;

	act.sa_handler = SIG_DFL;
	act.sa_flags = 0;
	sigfillset(&act.sa_mask);
	(void)_sigaction(SIGABRT, &act, NULL);
	sigdelset(&act.sa_mask, SIGABRT);
	(void)_sigprocmask(SIG_SETMASK, &act.sa_mask, NULL);
	(void)raise(SIGABRT);
	usleep(TIMEOUT); /* give time for signal to happen */
	__builtin_trap(); /* never exit normally */
}
