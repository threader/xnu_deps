/*
 * Copyright (c) 2000-2003 Apple Computer, Inc. All rights reserved.
 *
 * @APPLE_LICENSE_HEADER_START@
 *
 * This file contains Original Code and/or Modifications of Original Code
 * as defined in and that are subject to the Apple Public Source License
 * Version 2.0 (the 'License'). You may not use this file except in
 * compliance with the License. Please obtain a copy of the License at
 * http://www.opensource.apple.com/apsl/ and read it before using this
 * file.
 *
 * The Original Code and all software distributed under the License are
 * distributed on an 'AS IS' basis, WITHOUT WARRANTY OF ANY KIND, EITHER
 * EXPRESS OR IMPLIED, AND APPLE HEREBY DISCLAIMS ALL SUCH WARRANTIES,
 * INCLUDING WITHOUT LIMITATION, ANY WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE, QUIET ENJOYMENT OR NON-INFRINGEMENT.
 * Please see the License for the specific language governing rights and
 * limitations under the License.
 *
 * @APPLE_LICENSE_HEADER_END@
 */
/*
 * Copyright 1996 1995 by Open Software Foundation, Inc. 1997 1996 1995 1994 1993 1992 1991
 *              All Rights Reserved
 *
 * Permission to use, copy, modify, and distribute this software and
 * its documentation for any purpose and without fee is hereby granted,
 * provided that the above copyright notice appears in all copies and
 * that both the copyright notice and this permission notice appear in
 * supporting documentation.
 *
 * OSF DISCLAIMS ALL WARRANTIES WITH REGARD TO THIS SOFTWARE
 * INCLUDING ALL IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE.
 *
 * IN NO EVENT SHALL OSF BE LIABLE FOR ANY SPECIAL, INDIRECT, OR
 * CONSEQUENTIAL DAMAGES OR ANY DAMAGES WHATSOEVER RESULTING FROM
 * LOSS OF USE, DATA OR PROFITS, WHETHER IN ACTION OF CONTRACT,
 * NEGLIGENCE, OR OTHER TORTIOUS ACTION, ARISING OUT OF OR IN CONNECTION
 * WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
 *
 */
/*
 * MkLinux
 */

/*
 * POSIX Threads - IEEE 1003.1c
 */

#ifndef _PTHREAD_H
#define _PTHREAD_H

#include <_types.h>
#ifndef __POSIX_LIB__
#include <pthread_impl.h>
#endif
#include <sched.h>
#include <time.h>

#ifndef _PTHREAD_ATTR_T
#define _PTHREAD_ATTR_T
typedef __darwin_pthread_attr_t		pthread_attr_t;
#endif

#ifndef _PTHREAD_COND_T
#define _PTHREAD_COND_T
typedef __darwin_pthread_cond_t		pthread_cond_t;
#endif

#ifndef _PTHREAD_CONDATTR_T
#define _PTHREAD_CONDATTR_T
typedef __darwin_pthread_condattr_t	pthread_condattr_t;
#endif

#ifndef _PTHREAD_KEY_T
#define _PTHREAD_KEY_T
typedef __darwin_pthread_key_t		pthread_key_t;
#endif

#ifndef _PTHREAD_MUTEX_T
#define _PTHREAD_MUTEX_T
typedef __darwin_pthread_mutex_t	pthread_mutex_t;
#endif

#ifndef _PTHREAD_MUTEXATTR_T
#define _PTHREAD_MUTEXATTR_T
typedef __darwin_pthread_mutexattr_t	pthread_mutexattr_t;
#endif

#ifndef _PTHREAD_ONCE_T
#define _PTHREAD_ONCE_T
typedef __darwin_pthread_once_t		pthread_once_t;
#endif

#ifndef _PTHREAD_RWLOCK_T
#define _PTHREAD_RWLOCK_T
typedef __darwin_pthread_rwlock_t	pthread_rwlock_t;
#endif

#ifndef _PTHREAD_RWLOCKATTR_T
#define _PTHREAD_RWLOCKATTR_T
typedef __darwin_pthread_rwlockattr_t	pthread_rwlockattr_t;
#endif

#ifndef _PTHREAD_T
#define _PTHREAD_T
typedef __darwin_pthread_t		pthread_t;
#endif

#if (!defined(_POSIX_C_SOURCE) && !defined(_XOPEN_SOURCE)) || defined(_DARWIN_C_SOURCE)

#ifndef _MACH_PORT_T
#define _MACH_PORT_T
typedef __darwin_mach_port_t		mach_port_t;
#endif

#ifndef _SIGSET_T
#define _SIGSET_T
typedef __darwin_sigset_t		sigset_t;
#endif

#endif /* (!_POSIX_C_SOURCE && !_XOPEN_SOURCE) || _DARWIN_C_SOURCE */

/*
 * These symbols indicate which [optional] features are available
 * They can be tested at compile time via '#ifdef XXX'
 * The way to check for pthreads is like so:

 * #include <unistd.h>
 * #ifdef _POSIX_THREADS
 * #include <pthread.h>
 * #endif

 */

/* These will be moved to unistd.h */

/*
 * Note: These data structures are meant to be opaque.  Only enough
 * structure is exposed to support initializers.
 * All of the typedefs will be moved to <sys/types.h>
 */

#include <sys/cdefs.h>

__BEGIN_DECLS
/*
 * Threads
 */


/*
 * Cancel cleanup handler management.  Note, since these are implemented as macros,
 * they *MUST* occur in matched pairs!
 */

#define pthread_cleanup_push(func, val) \
   { \
	     struct __darwin_pthread_handler_rec __handler; \
	     pthread_t __self = pthread_self(); \
	     __handler.__routine = func; \
	     __handler.__arg = val; \
	     __handler.__next = __self->__cleanup_stack; \
	     __self->__cleanup_stack = &__handler;

#define pthread_cleanup_pop(execute) \
	     /* Note: 'handler' must be in this same lexical context! */ \
	     __self->__cleanup_stack = __handler.__next; \
	     if (execute) (__handler.__routine)(__handler.__arg); \
   }

/*
 * Thread attributes
 */

#define PTHREAD_CREATE_JOINABLE      1
#define PTHREAD_CREATE_DETACHED      2

#define PTHREAD_INHERIT_SCHED        1
#define PTHREAD_EXPLICIT_SCHED       2

#define PTHREAD_CANCEL_ENABLE        0x01  /* Cancel takes place at next cancellation point */
#define PTHREAD_CANCEL_DISABLE       0x00  /* Cancel postponed */
#define PTHREAD_CANCEL_DEFERRED      0x02  /* Cancel waits until cancellation point */
#define PTHREAD_CANCEL_ASYNCHRONOUS  0x00  /* Cancel occurs immediately */

/* Value returned from pthread_join() when a thread is canceled */
#define PTHREAD_CANCELED	     ((void *) 1)

/* We only support PTHREAD_SCOPE_SYSTEM */
#define PTHREAD_SCOPE_SYSTEM         1
#define PTHREAD_SCOPE_PROCESS        2

/* We only support PTHREAD_PROCESS_PRIVATE */
#define PTHREAD_PROCESS_SHARED         1
#define PTHREAD_PROCESS_PRIVATE        2

/*
 * Mutex protocol attributes
 */
#define PTHREAD_PRIO_NONE            0
#define PTHREAD_PRIO_INHERIT         1
#define PTHREAD_PRIO_PROTECT         2

/*
 * Mutex type attributes
 */
#define PTHREAD_MUTEX_NORMAL		0
#define PTHREAD_MUTEX_ERRORCHECK	1
#define PTHREAD_MUTEX_RECURSIVE		2
#define PTHREAD_MUTEX_DEFAULT		PTHREAD_MUTEX_NORMAL
/*
 * RWLock variables
 */

#define PTHREAD_RWLOCK_INITIALIZER {_PTHREAD_RWLOCK_SIG_init, {0}}
/*
 * Mutex variables
 */

#define PTHREAD_MUTEX_INITIALIZER {_PTHREAD_MUTEX_SIG_init, {0}}

/*
 * Condition variable attributes
 */

/*
 * Condition variables
 */

#define PTHREAD_COND_INITIALIZER {_PTHREAD_COND_SIG_init, {0}}

/*
 * Initialization control (once) variables
 */

#define PTHREAD_ONCE_INIT {_PTHREAD_ONCE_SIG_init, {0}}

/*
 * Prototypes for all PTHREAD interfaces
 */
int       pthread_atfork(void (*)(void), void (*)(void),
                      void (*)(void));
int       pthread_attr_destroy(pthread_attr_t *);
int       pthread_attr_getdetachstate(const pthread_attr_t *,
				      int *);
int       pthread_attr_getguardsize(const pthread_attr_t * __restrict,
                                      size_t * __restrict);
int       pthread_attr_getinheritsched(const pthread_attr_t * __restrict,
				       int * __restrict);
int       pthread_attr_getschedparam(const pthread_attr_t * __restrict,
                                     struct sched_param * __restrict);
int       pthread_attr_getschedpolicy(const pthread_attr_t * __restrict,
				      int * __restrict);
int       pthread_attr_getscope(const pthread_attr_t * __restrict, int * __restrict);
int       pthread_attr_getstack(const pthread_attr_t * __restrict,
                                      void ** __restrict, size_t * __restrict);
int       pthread_attr_getstackaddr(const pthread_attr_t * __restrict,
                                      void ** __restrict);
int       pthread_attr_getstacksize(const pthread_attr_t * __restrict,
                                      size_t * __restrict);
int       pthread_attr_init(pthread_attr_t *);
int       pthread_attr_setdetachstate(pthread_attr_t *,
				      int );
int       pthread_attr_setguardsize(pthread_attr_t *, size_t );
int       pthread_attr_setinheritsched(pthread_attr_t *,
				       int );
int       pthread_attr_setschedparam(pthread_attr_t * __restrict,
                                     const struct sched_param * __restrict);
int       pthread_attr_setschedpolicy(pthread_attr_t *,
				      int );
int       pthread_attr_setscope(pthread_attr_t *, int);
int       pthread_attr_setstack(pthread_attr_t *,
                                      void *, size_t );
int       pthread_attr_setstackaddr(pthread_attr_t *,
                                      void *);
int       pthread_attr_setstacksize(pthread_attr_t *, size_t );
int       pthread_cancel(pthread_t ) __DARWIN_ALIAS(pthread_cancel);

int       pthread_cond_broadcast(pthread_cond_t *);
int       pthread_cond_destroy(pthread_cond_t *);
//Begin-Libc
#ifndef LIBC_ALIAS_PTHREAD_COND_INIT
//End-Libc
int       pthread_cond_init(pthread_cond_t * __restrict,
                            const pthread_condattr_t * __restrict) __DARWIN_ALIAS(pthread_cond_init);
//Begin-Libc
#else /* LIBC_ALIAS_PTHREAD_COND_INIT */
int       pthread_cond_init(pthread_cond_t * __restrict,
                            const pthread_condattr_t * __restrict) LIBC_ALIAS(pthread_cond_init);
#endif /* !LIBC_ALIAS_PTHREAD_COND_INIT */
//End-Libc
int       pthread_cond_signal(pthread_cond_t *);
//Begin-Libc
#ifndef LIBC_ALIAS_PTHREAD_COND_TIMEDWAIT
//End-Libc
int       pthread_cond_timedwait(pthread_cond_t * __restrict,
				 pthread_mutex_t * __restrict,
				 const struct timespec * __restrict) __DARWIN_ALIAS_C(pthread_cond_timedwait);
//Begin-Libc
#else /* LIBC_ALIAS_PTHREAD_COND_TIMEDWAIT */
int       pthread_cond_timedwait(pthread_cond_t * __restrict,
				 pthread_mutex_t * __restrict,
				 const struct timespec * __restrict) LIBC_ALIAS_C(pthread_cond_timedwait);
#endif /* !LIBC_ALIAS_PTHREAD_COND_TIMEDWAIT */
//End-Libc
//Begin-Libc
#ifndef LIBC_ALIAS_PTHREAD_COND_WAIT
//End-Libc
int       pthread_cond_wait(pthread_cond_t * __restrict,
			    pthread_mutex_t * __restrict) __DARWIN_ALIAS_C(pthread_cond_wait);
//Begin-Libc
#else /* LIBC_ALIAS_PTHREAD_COND_WAIT */
int       pthread_cond_wait(pthread_cond_t * __restrict,
			    pthread_mutex_t * __restrict) LIBC_ALIAS_C(pthread_cond_wait);
#endif /* !LIBC_ALIAS_PTHREAD_COND_WAIT */
//End-Libc
int       pthread_condattr_destroy(pthread_condattr_t *);
int       pthread_condattr_init(pthread_condattr_t *);
int       pthread_condattr_getpshared(const pthread_condattr_t * __restrict,
			int * __restrict);
int       pthread_condattr_setpshared(pthread_condattr_t *,
			int );
int       pthread_create(pthread_t * __restrict,
                         const pthread_attr_t * __restrict,
                         void *(*)(void *),
                         void * __restrict);
int       pthread_detach(pthread_t );
int       pthread_equal(pthread_t ,
			pthread_t );
void      pthread_exit(void *) __dead2;
int       pthread_getconcurrency(void);
int       pthread_getschedparam(pthread_t , int * __restrict, struct sched_param * __restrict);
void     *pthread_getspecific(pthread_key_t );
//Begin-Libc
#ifndef LIBC_ALIAS_PTHREAD_JOIN
//End-Libc
int       pthread_join(pthread_t , void **) __DARWIN_ALIAS_C(pthread_join);
//Begin-Libc
#else /* LIBC_ALIAS_PTHREAD_JOIN */
int       pthread_join(pthread_t , void **) LIBC_ALIAS_C(pthread_join);
#endif /* !LIBC_ALIAS_PTHREAD_JOIN */
//End-Libc
int       pthread_key_create(pthread_key_t *, void (*)(void *));
int       pthread_key_delete(pthread_key_t );
int       pthread_mutex_destroy(pthread_mutex_t *);
int       pthread_mutex_getprioceiling(const pthread_mutex_t * __restrict, int * __restrict);
int       pthread_mutex_init(pthread_mutex_t * __restrict, const pthread_mutexattr_t * __restrict);
int       pthread_mutex_lock(pthread_mutex_t *);
int       pthread_mutex_setprioceiling(pthread_mutex_t * __restrict, int, int * __restrict);
int       pthread_mutex_trylock(pthread_mutex_t *);
int       pthread_mutex_unlock(pthread_mutex_t *);
//Begin-Libc
#ifndef LIBC_ALIAS_PTHREAD_MUTEXATTR_DESTROY
//End-Libc
int       pthread_mutexattr_destroy(pthread_mutexattr_t *) __DARWIN_ALIAS(pthread_mutexattr_destroy);
//Begin-Libc
#else /* LIBC_ALIAS_PTHREAD_MUTEXATTR_DESTROY */
int       pthread_mutexattr_destroy(pthread_mutexattr_t *) LIBC_ALIAS(pthread_mutexattr_destroy);
#endif /* !LIBC_ALIAS_PTHREAD_MUTEXATTR_DESTROY */
//End-Libc
int       pthread_mutexattr_getprioceiling(const pthread_mutexattr_t * __restrict, int * __restrict);
int       pthread_mutexattr_getprotocol(const pthread_mutexattr_t * __restrict, int * __restrict);
int       pthread_mutexattr_getpshared(const pthread_mutexattr_t * __restrict, int * __restrict);
int       pthread_mutexattr_gettype(const pthread_mutexattr_t * __restrict, int * __restrict);
int       pthread_mutexattr_init(pthread_mutexattr_t *);
int       pthread_mutexattr_setprioceiling(pthread_mutexattr_t *, int);
int       pthread_mutexattr_setprotocol(pthread_mutexattr_t *, int);
int       pthread_mutexattr_setpshared(pthread_mutexattr_t *, int );
int       pthread_mutexattr_settype(pthread_mutexattr_t *, int);
int       pthread_once(pthread_once_t *, void (*)(void));
//Begin-Libc
#ifndef LIBC_ALIAS_PTHREAD_RWLOCK_DESTROY
//End-Libc
int       pthread_rwlock_destroy(pthread_rwlock_t * ) __DARWIN_ALIAS(pthread_rwlock_destroy);
//Begin-Libc
#else /* LIBC_ALIAS_PTHREAD_RWLOCK_DESTROY */
int       pthread_rwlock_destroy(pthread_rwlock_t * ) LIBC_ALIAS(pthread_rwlock_destroy);
#endif /* !LIBC_ALIAS_PTHREAD_RWLOCK_DESTROY */
//End-Libc
//Begin-Libc
#ifndef LIBC_ALIAS_PTHREAD_RWLOCK_INIT
//End-Libc
int       pthread_rwlock_init(pthread_rwlock_t * __restrict, const pthread_rwlockattr_t * __restrict) __DARWIN_ALIAS(pthread_rwlock_init);
//Begin-Libc
#else /* LIBC_ALIAS_PTHREAD_RWLOCK_INIT */
int       pthread_rwlock_init(pthread_rwlock_t * __restrict, const pthread_rwlockattr_t * __restrict) LIBC_ALIAS(pthread_rwlock_init);
#endif /* !LIBC_ALIAS_PTHREAD_RWLOCK_INIT */
//End-Libc
//Begin-Libc
#ifndef LIBC_ALIAS_PTHREAD_RWLOCK_RDLOCK
//End-Libc
int       pthread_rwlock_rdlock(pthread_rwlock_t *) __DARWIN_ALIAS(pthread_rwlock_rdlock);
//Begin-Libc
#else /* LIBC_ALIAS_PTHREAD_RWLOCK_RDLOCK */
int       pthread_rwlock_rdlock(pthread_rwlock_t *) LIBC_ALIAS(pthread_rwlock_rdlock);
#endif /* !LIBC_ALIAS_PTHREAD_RWLOCK_RDLOCK */
//End-Libc
//Begin-Libc
#ifndef LIBC_ALIAS_PTHREAD_RWLOCK_TRYRDLOCK
//End-Libc
int       pthread_rwlock_tryrdlock(pthread_rwlock_t *) __DARWIN_ALIAS(pthread_rwlock_tryrdlock);
//Begin-Libc
#else /* LIBC_ALIAS_PTHREAD_RWLOCK_TRYRDLOCK */
int       pthread_rwlock_tryrdlock(pthread_rwlock_t *) LIBC_ALIAS(pthread_rwlock_tryrdlock);
#endif /* !LIBC_ALIAS_PTHREAD_RWLOCK_TRYRDLOCK */
//End-Libc
//Begin-Libc
#ifndef LIBC_ALIAS_PTHREAD_RWLOCK_TRYWRLOCK
//End-Libc
int       pthread_rwlock_trywrlock(pthread_rwlock_t *) __DARWIN_ALIAS(pthread_rwlock_trywrlock);
//Begin-Libc
#else /* LIBC_ALIAS_PTHREAD_RWLOCK_TRYWRLOCK */
int       pthread_rwlock_trywrlock(pthread_rwlock_t *) LIBC_ALIAS(pthread_rwlock_trywrlock);
#endif /* !LIBC_ALIAS_PTHREAD_RWLOCK_TRYWRLOCK */
//End-Libc
//Begin-Libc
#ifndef LIBC_ALIAS_PTHREAD_RWLOCK_WRLOCK
//End-Libc
int       pthread_rwlock_wrlock(pthread_rwlock_t *) __DARWIN_ALIAS(pthread_rwlock_wrlock);
//Begin-Libc
#else /* LIBC_ALIAS_PTHREAD_RWLOCK_WRLOCK */
int       pthread_rwlock_wrlock(pthread_rwlock_t *) LIBC_ALIAS(pthread_rwlock_wrlock);
#endif /* !LIBC_ALIAS_PTHREAD_RWLOCK_WRLOCK */
//End-Libc
//Begin-Libc
#ifndef LIBC_ALIAS_PTHREAD_RWLOCK_UNLOCK
//End-Libc
int       pthread_rwlock_unlock(pthread_rwlock_t *) __DARWIN_ALIAS(pthread_rwlock_unlock);
//Begin-Libc
#else /* LIBC_ALIAS_PTHREAD_RWLOCK_UNLOCK */
int       pthread_rwlock_unlock(pthread_rwlock_t *) LIBC_ALIAS(pthread_rwlock_unlock);
#endif /* !LIBC_ALIAS_PTHREAD_RWLOCK_UNLOCK */
//End-Libc
int       pthread_rwlockattr_destroy(pthread_rwlockattr_t *);
int       pthread_rwlockattr_getpshared(const pthread_rwlockattr_t * __restrict,
			int * __restrict);
int       pthread_rwlockattr_init(pthread_rwlockattr_t *);
int       pthread_rwlockattr_setpshared(pthread_rwlockattr_t *,
			int );
pthread_t pthread_self(void);

//Begin-Libc
#ifndef LIBC_ALIAS_PTHREAD_SETCANCELSTATE
//End-Libc
int       pthread_setcancelstate(int , int *) __DARWIN_ALIAS(pthread_setcancelstate);
//Begin-Libc
#else /* LIBC_ALIAS_PTHREAD_SETCANCELSTATE */
int       pthread_setcancelstate(int , int *) LIBC_ALIAS(pthread_setcancelstate);
#endif /* !LIBC_ALIAS_PTHREAD_SETCANCELSTATE */
//End-Libc
//Begin-Libc
#ifndef LIBC_ALIAS_PTHREAD_SETCANCELTYPE
//End-Libc
int       pthread_setcanceltype(int , int *) __DARWIN_ALIAS(pthread_setcanceltype);
//Begin-Libc
#else /* LIBC_ALIAS_PTHREAD_SETCANCELTYPE */
int       pthread_setcanceltype(int , int *) LIBC_ALIAS(pthread_setcanceltype);
#endif /* !LIBC_ALIAS_PTHREAD_SETCANCELTYPE */
//End-Libc
int       pthread_setconcurrency(int);
int       pthread_setschedparam(pthread_t ,
				int ,
                                const struct sched_param *);
int       pthread_setspecific(pthread_key_t ,
			      const void *);
void      pthread_testcancel(void) __DARWIN_ALIAS(pthread_testcancel);

#if (!defined(_POSIX_C_SOURCE) && !defined(_XOPEN_SOURCE)) || defined(_DARWIN_C_SOURCE)
/* returns non-zero if pthread_create or cthread_fork have been called */
int		pthread_is_threaded_np(void);

/* returns non-zero if the current thread is the main thread */
int		pthread_main_np(void);

/* return the mach thread bound to the pthread */
mach_port_t 	pthread_mach_thread_np(pthread_t);
size_t	 	pthread_get_stacksize_np(pthread_t);
void *		pthread_get_stackaddr_np(pthread_t);

/* Like pthread_cond_signal(), but only wake up the specified pthread */
int		pthread_cond_signal_thread_np(pthread_cond_t *, pthread_t);

/* Like pthread_cond_timedwait, but use a relative timeout */
int		pthread_cond_timedwait_relative_np(pthread_cond_t *,
				 pthread_mutex_t *,
				 const struct timespec *);

/* Like pthread_create(), but leaves the thread suspended */
int       pthread_create_suspended_np(pthread_t *,
                         const pthread_attr_t *,
                         void *(*)(void *),
                         void *);
int       pthread_kill(pthread_t, int);

pthread_t pthread_from_mach_thread_np(mach_port_t);

//Begin-Libc
#ifndef LIBC_ALIAS_PTHREAD_SIGMASK
//End-Libc
int       pthread_sigmask(int, const sigset_t *, sigset_t *) __DARWIN_ALIAS(pthread_sigmask);
//Begin-Libc
#else /* LIBC_ALIAS_PTHREAD_SIGMASK */
int       pthread_sigmask(int, const sigset_t *, sigset_t *) LIBC_ALIAS(pthread_sigmask);
#endif /* !LIBC_ALIAS_PTHREAD_SIGMASK */
//End-Libc
void	  pthread_yield_np(void);
#endif /* (!_POSIX_C_SOURCE && !_XOPEN_SOURCE) || _DARWIN_C_SOURCE */
__END_DECLS
#endif /* _PTHREAD_H */
