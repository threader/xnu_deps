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

/*-
 * Copyright (c) 1990 The Regents of the University of California.
 * All rights reserved.
 *
 * This code is derived from locore.s.
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
 *      This product includes software developed by the University of
 *      California, Berkeley and its contributors.
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
        
#include <sys/appleapiopts.h>
#include <machine/cpu_capabilities.h>
#include <machine/commpage.h>
#include <machine/asm.h>

        /*
         * (ov)bcopy (src,dst,cnt)
         *  ws@tools.de     (Wolfgang Solfrank, TooLs GmbH) +49-228-985800
         */
 
.text
.align 5, 0x90
Lbcopy_scalar:
	pushl	%ebp		/* set up a frame for backtraces */
	movl	%esp,%ebp
        pushl   %esi
        pushl   %edi
        movl    8(%ebp),%esi
        movl    12(%ebp),%edi
	jmp	1f
/*
** These need to be 32 bytes from Lbcopy_scalar
*/
.align 5, 0x90
Lmemcpy_scalar:
Lmemmove_scalar:
	pushl	%ebp		/* set up a frame for backtraces */
	movl	%esp,%ebp
        pushl   %esi
        pushl   %edi
        movl    8(%ebp),%edi
        movl    12(%ebp),%esi
        movl    %edi,%eax
1:
        movl    16(%ebp),%ecx
        movl    %edi,%edx
        subl    %esi,%edx
        cmpl    %ecx,%edx       /* overlapping? */
        jb      2f
        cld                     /* nope, copy forwards. */
        movl    %ecx,%edx
        shrl    $2,%ecx         /* copy by words */
        rep
        movsl
        movl    %edx,%ecx
        andl    $3,%ecx         /* any bytes left? */
        rep
        movsb
        popl    %edi
        popl    %esi
	popl	%ebp
        ret
2:
        addl    %ecx,%edi       /* copy backwards. */
        addl    %ecx,%esi
        std
        movl    %ecx,%edx
        andl    $3,%ecx         /* any fractional bytes? */
        decl    %edi
        decl    %esi
        rep
        movsb
        movl    %edx,%ecx       /* copy remainder by words */
        shrl    $2,%ecx
        subl    $3,%esi
        subl    $3,%edi
        rep
        movsl
        popl    %edi
        popl    %esi
	popl	%ebp
        cld
        ret

	COMMPAGE_DESCRIPTOR(bcopy_scalar,_COMM_PAGE_BCOPY,0,kHasSSE2+kHasSupplementalSSE3)
