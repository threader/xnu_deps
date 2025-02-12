/*
 * Copyright (c) 2003-2006 Apple Computer, Inc. All rights reserved.
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

#include <machine/cpu_capabilities.h>
#include <machine/commpage.h>

        .text
        .align  2, 0x90

// void sysFlushDcache( void *p, size_t len );
// 32-bit version

Lsys_flush_dcache:
	movl	4(%esp),%ecx		// get length
	movl	8(%esp),%edx		// get ptr
	testl	%ecx,%ecx		// length 0?
	jz	2f			// yes
	mfence				// ensure previous stores make it to memory
1:
	clflush	(%edx)			// flush a line
	addl	$64,%edx
	subl	$64,%ecx
	jnc	1b
	mfence				// make sure memory is updated before we return
2:
	ret

	COMMPAGE_DESCRIPTOR(sys_flush_dcache,_COMM_PAGE_FLUSH_DCACHE,kCache64,0)


// void sysFlushDcache( void *p, size_t len );
// 64-bit version
	.code64
Lsys_flush_dcache_64:			// %rdi = ptr,  %rsi = length
	testq	%rsi,%rsi		// length 0?
	jz	2f			// yes
	mfence				// ensure previous stores make it to memory
1:
	clflush	(%rdi)			// flush a line
	addq	$64,%rdi
	subq	$64,%rsi
	jnc	1b
	mfence				// make sure memory is updated before we return
2:
	ret
	.code32
	COMMPAGE_DESCRIPTOR(sys_flush_dcache_64,_COMM_PAGE_FLUSH_DCACHE,kCache64,0)


// void sysIcacheInvalidate( void *p, size_t len );

Lsys_icache_invalidate:
	// This is a NOP on intel processors, since the intent of the API
	// is to make data executable, and Intel L1Is are coherent with L1D.
	// We can use same routine both in 32 and 64-bit mode, since it is
	// just a RET instruction.
	ret

	COMMPAGE_DESCRIPTOR(sys_icache_invalidate,_COMM_PAGE_FLUSH_ICACHE,0,0)
