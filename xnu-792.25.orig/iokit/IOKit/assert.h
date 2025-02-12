/*
 * Copyright (c) 1998-2000 Apple Computer, Inc. All rights reserved.
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

#ifndef	_IO_ASSERT_H_
#define	_IO_ASSERT_H_
#include <sys/cdefs.h>

#ifdef __cplusplus
extern "C" {
#endif

#ifdef KERNEL
#if IOASSERT
#undef MACH_ASSERT
#define MACH_ASSERT	1
#endif
#endif
#include <kern/assert.h>

#ifdef __cplusplus
}
#endif


#if( !defined( OSCompileAssert ) )
#	define OSCompileAssert( TEST )     \
	extern int OSCompileAssertFailed[ ( TEST ) ? 1 : -1 ] __unused;
#endif

#endif	/* _IO_ASSERT_H_ */

