/*
 * Copyright (c) 1988, 1993
 *	The Regents of the University of California.  All rights reserved.
 *
 * This code is derived from software written by Ken Arnold and
 * published in UNIX Review, Vol. 6, No. 8.
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
static char sccsid[] = "@(#)popen.c	8.3 (Berkeley) 5/3/95";
#endif /* LIBC_SCCS and not lint */
#include <sys/cdefs.h>
__FBSDID("$FreeBSD: src/lib/libc/gen/popen.c,v 1.18 2003/01/04 00:15:15 tjr Exp $");

#include "namespace.h"
#include <sys/param.h>
#include <sys/wait.h>
#include <sys/socket.h>
#include <wchar.h>		/* fwide() */
#include <signal.h>
#include <errno.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <paths.h>
#include <pthread.h>
#include "un-namespace.h"
#include "libc_private.h"

#include <crt_externs.h>
#define environ (*_NSGetEnviron())

/* 3516149 - store file descriptor and use that to close to prevent blocking */
static struct pid {
	struct pid *next;
	FILE *fp;
	int fd;
	pid_t pid;
} *pidlist;
static pthread_mutex_t pidlist_mutex = PTHREAD_MUTEX_INITIALIZER;

#define	THREAD_LOCK()	if (__isthreaded) _pthread_mutex_lock(&pidlist_mutex)
#define	THREAD_UNLOCK()	if (__isthreaded) _pthread_mutex_unlock(&pidlist_mutex)

FILE *
popen(command, type)
	const char *command, *type;
{
	struct pid *cur;
	FILE *iop;
	int pdes[2], pid, twoway;
	char *argv[4];
	struct pid *p;

	if (type == NULL) {
		errno = EINVAL;
		return (NULL);
	}
	if (strcmp(type, "r+") == 0) {
		twoway = 1;
		type = "r+";
		if (socketpair(AF_UNIX, SOCK_STREAM, 0, pdes) < 0)
			return (NULL);
	} else  {
		twoway = 0;
		if ((*type != 'r' && *type != 'w') || type[1]) {
			errno = EINVAL;
			return (NULL);
	}
	if (pipe(pdes) < 0)
		return (NULL);
	}

	if ((cur = malloc(sizeof(struct pid))) == NULL) {
		(void)_close(pdes[0]);
		(void)_close(pdes[1]);
		return (NULL);
	}

	argv[0] = "sh";
	argv[1] = "-c";
	argv[2] = (char *)command;
	argv[3] = NULL;

	THREAD_LOCK();
	switch (pid = fork()) {
	case -1:			/* Error. */
		THREAD_UNLOCK();
		(void)_close(pdes[0]);
		(void)_close(pdes[1]);
		free(cur);
		return (NULL);
		/* NOTREACHED */
	case 0:				/* Child. */
		if (*type == 'r') {
			/*
			 * The _dup2() to STDIN_FILENO is repeated to avoid
			 * writing to pdes[1], which might corrupt the
			 * parent's copy.  This isn't good enough in
			 * general, since the _exit() is no return, so
			 * the compiler is free to corrupt all the local
			 * variables.
			 */
			(void)_close(pdes[0]);
			if (pdes[1] != STDOUT_FILENO) {
				(void)_dup2(pdes[1], STDOUT_FILENO);
				(void)_close(pdes[1]);
				if (twoway)
					(void)_dup2(STDOUT_FILENO, STDIN_FILENO);
			} else if (twoway && (pdes[1] != STDIN_FILENO))
				(void)_dup2(pdes[1], STDIN_FILENO);
		} else {
			if (pdes[0] != STDIN_FILENO) {
				(void)_dup2(pdes[0], STDIN_FILENO);
				(void)_close(pdes[0]);
			}
			(void)_close(pdes[1]);
		}
		for (p = pidlist; p; p = p->next) {
			(void)_close(p->fd);
		}
		_execve(_PATH_BSHELL, argv, environ);
		_exit(127);
		/* NOTREACHED */
	}
	THREAD_UNLOCK();

	/* Parent; assume fdopen can't fail. */
	if (*type == 'r') {
		iop = fdopen(pdes[0], type);
		cur->fd = pdes[0];
		(void)_close(pdes[1]);
	} else {
		iop = fdopen(pdes[1], type);
		cur->fd = pdes[1];
		(void)_close(pdes[0]);
	}

	/* Link into list of file descriptors. */
	cur->fp = iop;
	cur->pid = pid;
	THREAD_LOCK();
	cur->next = pidlist;
	pidlist = cur;
	THREAD_UNLOCK();
	fwide(iop, -1);		/* byte stream */
	return (iop);
}

/*
 * pclose --
 *	Pclose returns -1 if stream is not associated with a `popened' command,
 *	if already `pclosed', or waitpid returns an error.
 */
int
pclose(iop)
	FILE *iop;
{
	struct pid *cur, *last;
	int pstat;
	pid_t pid;

	/*
	 * Find the appropriate file pointer and remove it from the list.
	 */
	THREAD_LOCK();
	for (last = NULL, cur = pidlist; cur; last = cur, cur = cur->next)
		if (cur->fp == iop)
			break;
	if (cur == NULL) {
		THREAD_UNLOCK();
		return (-1);
	}
	if (last == NULL)
		pidlist = cur->next;
	else
		last->next = cur->next;
	THREAD_UNLOCK();

	(void)fclose(iop);

	do {
		pid = _wait4(cur->pid, &pstat, 0, (struct rusage *)0);
	} while (pid == -1 && errno == EINTR);

	free(cur);

	return (pid == -1 ? -1 : pstat);
}
