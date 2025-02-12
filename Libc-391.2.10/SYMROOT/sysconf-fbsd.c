/*-
 * Copyright (c) 1993
 *	The Regents of the University of California.  All rights reserved.
 *
 * This code is derived from software contributed to Berkeley by
 * Sean Eric Fagan of Cygnus Support.
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
static char sccsid[] = "@(#)sysconf.c	8.2 (Berkeley) 3/20/94";
#endif /* LIBC_SCCS and not lint */
#include <sys/cdefs.h>
__FBSDID("$FreeBSD: src/lib/libc/gen/sysconf.c,v 1.20 2002/11/17 08:54:29 dougb Exp $");

#include <sys/param.h>
#include <sys/time.h>
#include <sys/sysctl.h>
#include <sys/resource.h>
#include <sys/socket.h>
#include <sys/aio.h>
#include <sys/semaphore.h>

#include <errno.h>
#include <limits.h>
#include <paths.h>
#include <pthread.h>		/* we just need the limits */
#include <time.h>
#include <unistd.h>

#include "atexit.h"
#include "tzfile.h"

#define	_PATH_ZONEINFO	TZDIR	/* from tzfile.h */

/*
 * sysconf --
 *	get configurable system variables.
 *
 * XXX
 * POSIX 1003.1 (ISO/IEC 9945-1, 4.8.1.3) states that the variable values
 * not change during the lifetime of the calling process.  This would seem
 * to require that any change to system limits kill all running processes.
 * A workaround might be to cache the values when they are first retrieved
 * and then simply return the cached value on subsequent calls.  This is
 * less useful than returning up-to-date values, however.
 */
long
sysconf(name)
	int name;
{
	struct rlimit rl;
	quad_t qdvalue;	/* for kern.sysv.shmmin */
	size_t len;
	int mib[3], sverrno, value;
	long defaultresult;
	const char *path;

	len = sizeof(value);
	defaultresult = -1;

	switch (name) {
	case _SC_ARG_MAX:
		mib[0] = CTL_KERN;
		mib[1] = KERN_ARGMAX;
		break;
	case _SC_CHILD_MAX:
		if (getrlimit(RLIMIT_NPROC, &rl) != 0)
			return (-1);
		if (rl.rlim_cur == RLIM_INFINITY)
			return (-1);
		if (rl.rlim_cur > LONG_MAX) {
			errno = EOVERFLOW;
			return (-1);
		}
		return ((long)rl.rlim_cur);
	case _SC_CLK_TCK:
		return (CLK_TCK);
	case _SC_NGROUPS_MAX:
		mib[0] = CTL_KERN;
		mib[1] = KERN_NGROUPS;
		break;
	case _SC_OPEN_MAX:
	case _SC_STREAM_MAX:	/* assume fds run out before memory does */
		if (getrlimit(RLIMIT_NOFILE, &rl) != 0)
			return (-1);
		if (rl.rlim_cur == RLIM_INFINITY)
			return (-1);
		if (rl.rlim_cur > LONG_MAX) {
			errno = EOVERFLOW;
			return (-1);
		}
		return ((long)rl.rlim_cur);
	case _SC_JOB_CONTROL:
		return (_POSIX_JOB_CONTROL);
	case _SC_SAVED_IDS:
		/* XXX - must be 1 */
		mib[0] = CTL_KERN;
		mib[1] = KERN_SAVED_IDS;
		goto yesno;
	case _SC_VERSION:
		mib[0] = CTL_KERN;
		mib[1] = KERN_POSIX1;
		break;
	case _SC_BC_BASE_MAX:
		return (BC_BASE_MAX);
	case _SC_BC_DIM_MAX:
		return (BC_DIM_MAX);
	case _SC_BC_SCALE_MAX:
		return (BC_SCALE_MAX);
	case _SC_BC_STRING_MAX:
		return (BC_STRING_MAX);
	case _SC_COLL_WEIGHTS_MAX:
		return (COLL_WEIGHTS_MAX);
	case _SC_EXPR_NEST_MAX:
		return (EXPR_NEST_MAX);
	case _SC_LINE_MAX:
		return (LINE_MAX);
	case _SC_RE_DUP_MAX:
		return (RE_DUP_MAX);
	case _SC_2_VERSION:
		/*
		 * This is something of a lie, but it would be silly at
		 * this point to try to deduce this from the contents
		 * of the filesystem.
		 */
		return (_POSIX2_VERSION);
	case _SC_2_C_BIND:
		return (_POSIX2_C_BIND);
	case _SC_2_C_DEV:
		return (_POSIX2_C_DEV);
	case _SC_2_CHAR_TERM:
		return (_POSIX2_CHAR_TERM);
	case _SC_2_FORT_DEV:
		return (_POSIX2_FORT_DEV);
	case _SC_2_FORT_RUN:
		return (_POSIX2_FORT_RUN);
	case _SC_2_LOCALEDEF:
		return (_POSIX2_LOCALEDEF);
	case _SC_2_SW_DEV:
		return (_POSIX2_SW_DEV);
	case _SC_2_UPE:
		return (_POSIX2_UPE);
	case _SC_TZNAME_MAX:
		path = _PATH_ZONEINFO;
do_NAME_MAX:
		sverrno = errno;
		errno = 0;
		value = pathconf(path, _PC_NAME_MAX);
		if (value == -1 && errno != 0)
			return (-1);
		errno = sverrno;
		return (value);

	case _SC_ASYNCHRONOUS_IO:
#if _POSIX_ASYNCHRONOUS_IO == 0
		mib[0] = CTL_P1003_1B;
		mib[1] = CTL_P1003_1B_ASYNCHRONOUS_IO;
		break;
#else
		return (_POSIX_ASYNCHRONOUS_IO);
#endif
	case _SC_MAPPED_FILES:
		return (_POSIX_MAPPED_FILES);
	case _SC_MEMLOCK:
		return (_POSIX_MEMLOCK);
	case _SC_MEMLOCK_RANGE:
		return (_POSIX_MEMLOCK_RANGE);
	case _SC_MEMORY_PROTECTION:
		return (_POSIX_MEMORY_PROTECTION);
	case _SC_MESSAGE_PASSING:
#if _POSIX_MESSAGE_PASSING == 0
		mib[0] = CTL_P1003_1B;
		mib[1] = CTL_P1003_1B_MESSAGE_PASSING;
		goto yesno;
#else
		return (_POSIX_MESSAGE_PASSING);
#endif
	case _SC_PRIORITIZED_IO:
#if _POSIX_PRIORITIZED_IO == 0
		mib[0] = CTL_P1003_1B;
		mib[1] = CTL_P1003_1B_PRIORITIZED_IO;
		goto yesno;
#else
		return (_POSIX_PRIORITIZED_IO);
#endif
	case _SC_PRIORITY_SCHEDULING:
#if _POSIX_PRIORITY_SCHEDULING == 0
		mib[0] = CTL_P1003_1B;
		mib[1] = CTL_P1003_1B_PRIORITY_SCHEDULING;
		goto yesno;
#else
		return (_POSIX_PRIORITY_SCHEDULING);
#endif
	case _SC_REALTIME_SIGNALS:
#if _POSIX_REALTIME_SIGNALS == 0
		mib[0] = CTL_P1003_1B;
		mib[1] = CTL_P1003_1B_REALTIME_SIGNALS;
		goto yesno;
#else
		return (_POSIX_REALTIME_SIGNALS);
#endif
	case _SC_SEMAPHORES:
#if _POSIX_SEMAPHORES == 0
		mib[0] = CTL_P1003_1B;
		mib[1] = CTL_P1003_1B_SEMAPHORES;
		goto yesno;
#else
		return (_POSIX_SEMAPHORES);
#endif
	case _SC_FSYNC:
		return (_POSIX_FSYNC);

	case _SC_SHARED_MEMORY_OBJECTS:
		return (_POSIX_SHARED_MEMORY_OBJECTS);
	case _SC_SYNCHRONIZED_IO:
#if _POSIX_SYNCHRONIZED_IO == 0
		mib[0] = CTL_P1003_1B;
		mib[1] = CTL_P1003_1B_SYNCHRONIZED_IO;
		goto yesno;
#else
		return (_POSIX_SYNCHRONIZED_IO);
#endif
	case _SC_TIMERS:
#if _POSIX_TIMERS == 0
		mib[0] = CTL_P1003_1B;
		mib[1] = CTL_P1003_1B_TIMERS;
		goto yesno;
#else
		return (_POSIX_TIMERS);
#endif
	case _SC_AIO_LISTIO_MAX:
	case _SC_AIO_MAX:
		mib[0] = CTL_KERN;;
		mib[1] = KERN_AIOMAX;
		break;

	case _SC_AIO_PRIO_DELTA_MAX:
#if defined(CTL_P1003_1B) && defined(CTL_P1003_1B_AIO_PRIO_DELTA_MAX)
		mib[0] = CTL_P1003_1B;
		mib[1] = CTL_P1003_1B_AIO_PRIO_DELTA_MAX;
		break;
#else
		return (-1);
#endif
	case _SC_DELAYTIMER_MAX:
#if defined(CTL_P1003_1B) && defined(CTL_P1003_1B_DELAYTIMER_MAX)
		mib[0] = CTL_P1003_1B;
		mib[1] = CTL_P1003_1B_DELAYTIMER_MAX;
		goto yesno;
#else
		return (-1);
#endif
	case _SC_MQ_OPEN_MAX:
#if defined(CTL_P1003_1B) && defined(CTL_P1003_1B_MQ_OPEN_MAX)
		mib[0] = CTL_P1003_1B;
		mib[1] = CTL_P1003_1B_MQ_OPEN_MAX;
		goto yesno;
#else
		return (-1);
#endif
	case _SC_PAGESIZE:
		defaultresult = getpagesize();
#if defined(CTL_P1003_1B) && defined(CTL_P1003_1B_PAGESIZE)
		mib[0] = CTL_P1003_1B;
		mib[1] = CTL_P1003_1B_PAGESIZE;
		goto yesno;
#else
		return defaultresult;
#endif
	case _SC_RTSIG_MAX:
#if defined(CTL_P1003_1B) && defined(CTL_P1003_1B_RTSIG_MAX)
		mib[0] = CTL_P1003_1B;
		mib[1] = CTL_P1003_1B_RTSIG_MAX;
		goto yesno;
#else
		return (-1);
#endif
	case _SC_SEM_NSEMS_MAX:
		mib[0] = CTL_KERN;
		mib[1] = KERN_SYSV;
		mib[2] = KSYSV_SEMMNS;
		return (sysctl(mib, 3, &value, &len, NULL, 0) == -1 ? -1 : value);

	case _SC_SEM_VALUE_MAX:
#if SEM_VALUE_MAX == 0
		mib[0] = CTL_P1003_1B;
		mib[1] = CTL_P1003_1B_SEM_VALUE_MAX;
		goto yesno;
#else
		return (SEM_VALUE_MAX);
#endif
	case _SC_SIGQUEUE_MAX:
#if defined(CTL_P1003_1B) && defined(CTL_P1003_1B_SIGQUEUE_MAX)
		mib[0] = CTL_P1003_1B;
		mib[1] = CTL_P1003_1B_SIGQUEUE_MAX;
		goto yesno;
#else
		return (-1);
#endif
	case _SC_TIMER_MAX:
#if defined(CTL_P1003_1B) && defined(CTL_P1003_1B_TIMER_MAX)
		mib[0] = CTL_P1003_1B;
		mib[1] = CTL_P1003_1B_TIMER_MAX;
#else
		return (-1);
#endif

yesno:		if (sysctl(mib, 2, &value, &len, NULL, 0) == -1)
			return (-1);
		if (value == 0)
			return (defaultresult);
		return (value);
	case _SC_2_PBS:
	case _SC_2_PBS_ACCOUNTING:
	case _SC_2_PBS_CHECKPOINT:
	case _SC_2_PBS_LOCATE:
	case _SC_2_PBS_MESSAGE:
	case _SC_2_PBS_TRACK:
		return -1;
	case _SC_ADVISORY_INFO:
#if _POSIX_ADVISORY_INFO == 0
#error "_POSIX_ADVISORY_INFO"
#else
		return (_POSIX_ADVISORY_INFO);
#endif
	case _SC_BARRIERS:
#if _POSIX_BARRIERS == 0
#error "_POSIX_BARRIERS"
#else
		return (_POSIX_BARRIERS);
#endif
	case _SC_CLOCK_SELECTION:
#if _POSIX_CLOCK_SELECTION == 0
#error "_POSIX_CLOCK_SELECTION"
#else
		return (_POSIX_CLOCK_SELECTION);
#endif
	case _SC_CPUTIME:
#if _POSIX_CPUTIME == 0
#error "_POSIX_CPUTIME"
#else
		return (_POSIX_CPUTIME);
#endif
	case _SC_FILE_LOCKING:
	case _SC_GETGR_R_SIZE_MAX:
	case _SC_GETPW_R_SIZE_MAX:
		return (-1);
	case _SC_HOST_NAME_MAX:
		return (MAXHOSTNAMELEN - 1); /* does not include \0 */
	case _SC_LOGIN_NAME_MAX:
		return (MAXLOGNAME);
	case _SC_MONOTONIC_CLOCK:
#if _POSIX_MONOTONIC_CLOCK == 0
#error "_POSIX_MONOTONIC_CLOCK"
#else
		return (_POSIX_MONOTONIC_CLOCK);
#endif
	case _SC_MQ_PRIO_MAX:
		return (-1);
	case _SC_READER_WRITER_LOCKS:
		return (_POSIX_READER_WRITER_LOCKS);
	case _SC_REGEXP:
		return (_POSIX_REGEXP);
	case _SC_SHELL:
		return (_POSIX_SHELL);
	case _SC_SPAWN:
		return (_POSIX_SPAWN);
	case _SC_SPIN_LOCKS:
		return (_POSIX_SPIN_LOCKS);
	case _SC_SPORADIC_SERVER:
#if _POSIX_SPORADIC_SERVER == 0
#error "_POSIX_SPORADIC_SERVER"
#else
		return (_POSIX_SPORADIC_SERVER);
#endif
	case _SC_THREAD_ATTR_STACKADDR:
		return (_POSIX_THREAD_ATTR_STACKADDR);
	case _SC_THREAD_ATTR_STACKSIZE:
		return (_POSIX_THREAD_ATTR_STACKSIZE);
	case _SC_THREAD_CPUTIME:
		return (_POSIX_THREAD_CPUTIME);
	case _SC_THREAD_DESTRUCTOR_ITERATIONS:
		return (PTHREAD_DESTRUCTOR_ITERATIONS);
	case _SC_THREAD_KEYS_MAX:
		return (PTHREAD_KEYS_MAX);
	case _SC_THREAD_PRIO_INHERIT:
		return (_POSIX_THREAD_PRIO_INHERIT);
	case _SC_THREAD_PRIO_PROTECT:
		return (_POSIX_THREAD_PRIO_PROTECT);
	case _SC_THREAD_PRIORITY_SCHEDULING:
		return (_POSIX_THREAD_PRIORITY_SCHEDULING);
	case _SC_THREAD_PROCESS_SHARED:
		return (_POSIX_THREAD_PROCESS_SHARED);
	case _SC_THREAD_SAFE_FUNCTIONS:
		return (_POSIX_THREAD_SAFE_FUNCTIONS);
	case _SC_THREAD_SPORADIC_SERVER:
		return (_POSIX_THREAD_SPORADIC_SERVER);
	case _SC_THREAD_STACK_MIN:
		return (PTHREAD_STACK_MIN);
	case _SC_THREAD_THREADS_MAX:
#ifdef PTHREAD_THREADS_MAX
		return (PTHREAD_THREADS_MAX); /* XXX wrong type! */
#else
		return (-1);
#endif
	case _SC_TIMEOUTS:
		return (_POSIX_TIMEOUTS);
	case _SC_THREADS:
		return (_POSIX_THREADS);
	case _SC_TRACE:
#if _POSIX_TRACE == 0
#error "_POSIX_TRACE"
		/* While you're implementing this, also do the ones below. */
#else
		return (_POSIX_TRACE);
#endif
	case _SC_TRACE_EVENT_FILTER:
		return (_POSIX_TRACE_EVENT_FILTER);
	case _SC_TRACE_INHERIT:
		return (_POSIX_TRACE_INHERIT);
	case _SC_TRACE_LOG:
		return (_POSIX_TRACE_LOG);
	case _SC_TTY_NAME_MAX:
		path = "/"; // should be _PATH_DEV (PR-3624562)
		goto do_NAME_MAX;
	case _SC_TYPED_MEMORY_OBJECTS:
#if _POSIX_TYPED_MEMORY_OBJECTS == 0
#error "_POSIX_TYPED_MEMORY_OBJECTS"
#else
		return (_POSIX_TYPED_MEMORY_OBJECTS);
#endif
	case _SC_V6_ILP32_OFF32:
#if _V6_ILP32_OFF32 == 0
		if (sizeof(int) * CHAR_BIT == 32 &&
		    sizeof(int) == sizeof(long) &&
		    sizeof(long) == sizeof(void *) &&
		    sizeof(void *) == sizeof(off_t))
			return 1;
		else
			return -1;
#else
		return (_V6_ILP32_OFF32);
#endif
	case _SC_V6_ILP32_OFFBIG:
#if _V6_ILP32_OFFBIG == 0
		if (sizeof(int) * CHAR_BIT == 32 &&
		    sizeof(int) == sizeof(long) &&
		    sizeof(long) == sizeof(void *) &&
		    sizeof(off_t) * CHAR_BIT >= 64)
			return 1;
		else
			return -1;
#else
		return (_V6_ILP32_OFFBIG);
#endif
	case _SC_V6_LP64_OFF64:
#if _V6_LP64_OFF64 == 0
		if (sizeof(int) * CHAR_BIT == 32 &&
		    sizeof(long) * CHAR_BIT == 64 &&
		    sizeof(long) == sizeof(void *) &&
		    sizeof(void *) == sizeof(off_t))
			return 1;
		else
			return -1;
#else
		return (_V6_LP64_OFF64);
#endif
	case _SC_V6_LPBIG_OFFBIG:
#if _V6_LPBIG_OFFBIG == 0
		if (sizeof(int) * CHAR_BIT >= 32 &&
		    sizeof(long) * CHAR_BIT >= 64 &&
		    sizeof(void *) * CHAR_BIT >= 64 &&
		    sizeof(off_t) * CHAR_BIT >= 64)
			return 1;
		else
			return -1;
#else
		return (_V6_LPBIG_OFFBIG);
#endif
	case _SC_ATEXIT_MAX:
		return (ATEXIT_SIZE);
	case _SC_IOV_MAX:
#ifdef KERN_IOV_MAX
		mib[0] = CTL_KERN;
		mib[1] = KERN_IOV_MAX;
		break;
#else
		return (IOV_MAX);
#endif
	case _SC_XOPEN_CRYPT:
		return (_XOPEN_CRYPT);
	case _SC_XOPEN_ENH_I18N:
		return (_XOPEN_ENH_I18N);
	case _SC_XOPEN_LEGACY:
		return (_XOPEN_LEGACY);
	case _SC_XOPEN_REALTIME:
#if _XOPEN_REALTIME == 0
		sverrno = errno;
		value = sysconf(_SC_ASYNCHRONOUS_IO) > 0 &&
			sysconf(_SC_MEMLOCK) > 0 &&
			sysconf(_SC_MEMLOCK_RANGE) > 0 &&
			sysconf(_SC_MESSAGE_PASSING) > 0 &&
			sysconf(_SC_PRIORITY_SCHEDULING) > 0 &&
			sysconf(_SC_REALTIME_SIGNALS) > 0 &&
			sysconf(_SC_SEMAPHORES) > 0 &&
			sysconf(_SC_SHARED_MEMORY_OBJECTS) > 0 &&
			sysconf(_SC_SYNCHRONIZED_IO) > 0 &&
			sysconf(_SC_TIMERS) > 0;
		errno = sverrno;
		if (value)
			return (200112L);
		else
			return (-1);
#else
		return (_XOPEN_REALTIME);
#endif
	case _SC_XOPEN_REALTIME_THREADS:
#if _XOPEN_REALTIME_THREADS == 0
#error "_XOPEN_REALTIME_THREADS"
#else
		return (_XOPEN_REALTIME_THREADS);
#endif
	case _SC_XOPEN_SHM:
		sverrno = errno;
		len = sizeof(qdvalue);
		if (sysctlbyname("kern.sysv.shmmin", &qdvalue, &len, NULL, 
		    0) == -1) {
			errno = sverrno;
			return (-1);
		}
		errno = sverrno;
		return (1);
	case _SC_XOPEN_STREAMS:
		return (_XOPEN_STREAMS);
	case _SC_XOPEN_UNIX:
		return (_XOPEN_UNIX);
#ifdef _XOPEN_VERSION
	case _SC_XOPEN_VERSION:
		return (_XOPEN_VERSION);
#endif
#ifdef _XOPEN_XCU_VERSION
	case _SC_XOPEN_XCU_VERSION:
		return (_XOPEN_XCU_VERSION);
#endif
	case _SC_SYMLOOP_MAX:
		return (MAXSYMLINKS);
	case _SC_RAW_SOCKETS:
		return (_POSIX_RAW_SOCKETS);
	case _SC_IPV6:
#if _POSIX_IPV6 == 0
		sverrno = errno;
		value = socket(PF_INET6, SOCK_DGRAM, 0);
		errno = sverrno;
		if (value >= 0) {
			close(value);
			return (200112L);
		} else
			return (0);
#else
		return (_POSIX_IPV6);
#endif

#ifdef _SC_NPROCESSORS_CONF
	case _SC_NPROCESSORS_CONF:
#endif
#ifdef _SC_NPROCESSORS_ONLN
	case _SC_NPROCESSORS_ONLN:
#endif
#if defined(_SC_NPROCESSORS_CONF) || defined(_SC_NPROCESSORS_ONLN)
		mib[0] = CTL_HW;
		mib[1] = HW_NCPU;
		break;
#endif
	case _SC_XBS5_ILP32_OFF32:
		return (_XBS5_ILP32_OFF32);
	case _SC_XBS5_ILP32_OFFBIG:
		return (_XBS5_ILP32_OFFBIG);
	case _SC_XBS5_LP64_OFF64:
		return (_XBS5_LP64_OFF64);
	case _SC_XBS5_LPBIG_OFFBIG:
		return (_XBS5_LPBIG_OFFBIG);

	default:
		errno = EINVAL;
		return (-1);
	}
	return (sysctl(mib, 2, &value, &len, NULL, 0) == -1 ? -1 : value);
}
