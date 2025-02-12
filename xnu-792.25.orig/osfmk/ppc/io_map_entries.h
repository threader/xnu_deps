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
 * @OSF_COPYRIGHT@
 * 
 */
#ifdef	KERNEL_PRIVATE

#ifndef	_PPC_IO_MAP_ENTRIES_H_
#define	_PPC_IO_MAP_ENTRIES_H_

extern vm_offset_t	io_map(
				vm_offset_t		phys_addr,
				vm_size_t		size,
				unsigned int            flags);
extern vm_offset_t io_map_spec(vm_offset_t phys_addr, vm_size_t size, unsigned int flags);

#endif	/* _PPC_IO_MAP_ENTRIES_H_ */

#endif	/* KERNEL_PRIVATE */
