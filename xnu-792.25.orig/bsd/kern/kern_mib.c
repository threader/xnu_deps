/*
 * Copyright (c) 2000-2006 Apple Computer, Inc. All rights reserved.
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
 * Copyright (c) 1982, 1986, 1989, 1993
 *	The Regents of the University of California.  All rights reserved.
 *
 * This code is derived from software contributed to Berkeley by
 * Mike Karels at Berkeley Software Design, Inc.
 *
 * Quite extensively rewritten by Poul-Henning Kamp of the FreeBSD
 * project, to make these variables more userfriendly.
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
 *
 *	@(#)kern_sysctl.c	8.4 (Berkeley) 4/14/94
 */

#include <sys/param.h>
#include <sys/kernel.h>
#include <sys/systm.h>
#include <sys/sysctl.h>
#include <sys/proc_internal.h>
#include <sys/unistd.h>

#if defined(SMP)
#include <machine/smp.h>
#endif

#include <sys/param.h>  /* XXX prune includes */
#include <sys/systm.h>
#include <sys/kernel.h>
#include <sys/malloc.h>
#include <sys/proc.h>
#include <sys/file_internal.h>
#include <sys/vnode.h>
#include <sys/unistd.h>
#include <sys/ioctl.h>
#include <sys/namei.h>
#include <sys/tty.h>
#include <sys/disklabel.h>
#include <sys/vm.h>
#include <sys/sysctl.h>
#include <sys/user.h>
#include <mach/machine.h>
#include <mach/mach_types.h>
#include <mach/vm_param.h>
#include <kern/task.h>
#include <vm/vm_kern.h>
#include <mach/host_info.h>
#include <kern/pms.h>

extern vm_map_t bsd_pageable_map;

#include <sys/mount_internal.h>
#include <sys/kdebug.h>

#include <IOKit/IOPlatformExpert.h>
#include <pexpert/pexpert.h>

#include <machine/machine_routines.h>
#include <machine/cpu_capabilities.h>

#ifdef __i386__
#include <i386/cpuid.h>		/* for cpuid_info() */
#endif

#ifndef MAX
#define MAX(a,b) (a >= b ? a : b)
#endif

static int	cputype, cpusubtype, cputhreadtype, cpufamily, cacheconfig[10];;

SYSCTL_NODE(, 0,	  sysctl, CTLFLAG_RW, 0,
	"Sysctl internal magic");
SYSCTL_NODE(, CTL_KERN,	  kern,   CTLFLAG_RW, 0,
	"High kernel, proc, limits &c");
SYSCTL_NODE(, CTL_VM,	  vm,     CTLFLAG_RW, 0,
	"Virtual memory");
SYSCTL_NODE(, CTL_VFS,	  vfs,     CTLFLAG_RW, 0,
	"File system");
SYSCTL_NODE(, CTL_NET,	  net,    CTLFLAG_RW, 0,
	"Network, (see socket.h)");
SYSCTL_NODE(, CTL_DEBUG,  debug,  CTLFLAG_RW, 0,
	"Debugging");
SYSCTL_NODE(, CTL_HW,	  hw,     CTLFLAG_RW, 0,
	"hardware");
SYSCTL_NODE(, CTL_MACHDEP, machdep, CTLFLAG_RW, 0,
	"machine dependent");
SYSCTL_NODE(, CTL_USER,	  user,   CTLFLAG_RW, 0,
	"user-level");

#define SYSCTL_RETURN(r, x)	SYSCTL_OUT(r, &x, sizeof(x))

/******************************************************************************
 * hw.* MIB
 */

#define CTLHW_RETQUAD	(1 << 31)
#define CTLHW_LOCAL	(1 << 30)

#define HW_LOCAL_CPUTHREADTYPE	(1 | CTLHW_LOCAL)
#define HW_LOCAL_PHYSICALCPU	(2 | CTLHW_LOCAL)
#define HW_LOCAL_PHYSICALCPUMAX	(3 | CTLHW_LOCAL)
#define HW_LOCAL_LOGICALCPU	(4 | CTLHW_LOCAL)
#define HW_LOCAL_LOGICALCPUMAX	(5 | CTLHW_LOCAL)


/*
 * Supporting some variables requires us to do "real" work.  We 
 * gather some of that here.
 */
static int
sysctl_hw_generic SYSCTL_HANDLER_ARGS
{
	char dummy[65];
	int  epochTemp;
	extern int vm_page_wire_count;
	ml_cpu_info_t cpu_info;
	int val, doquad;
	long long qval;
	host_basic_info_data_t hinfo;
	kern_return_t kret;
	int count = HOST_BASIC_INFO_COUNT;

	/*
	 * Test and mask off the 'return quad' flag.
	 * Note that only some things here support it.
	 */
	doquad = arg2 & CTLHW_RETQUAD;
	arg2 &= ~CTLHW_RETQUAD;

	ml_cpu_get_info(&cpu_info);

#define BSD_HOST 1
	kret = host_info(BSD_HOST, HOST_BASIC_INFO, &hinfo, &count);

	/*
	 * Handle various OIDs.
	 *
	 * OIDs that can return int or quad set val and qval and then break.
	 * Errors and int-only values return inline.
	 */
	switch (arg2) {
	case HW_NCPU:
		if (kret == KERN_SUCCESS) {
			return(SYSCTL_RETURN(req, hinfo.max_cpus));
		} else {
			return(EINVAL);
		}
	case HW_AVAILCPU:
		if (kret == KERN_SUCCESS) {
			return(SYSCTL_RETURN(req, hinfo.avail_cpus));
		} else {
			return(EINVAL);
		}
	case HW_LOCAL_PHYSICALCPU:
		if (kret == KERN_SUCCESS) {
			return(SYSCTL_RETURN(req, hinfo.physical_cpu));
		} else {
			return(EINVAL);
		}
	case HW_LOCAL_PHYSICALCPUMAX:
		if (kret == KERN_SUCCESS) {
			return(SYSCTL_RETURN(req, hinfo.physical_cpu_max));
		} else {
			return(EINVAL);
		}
	case HW_LOCAL_LOGICALCPU:
		if (kret == KERN_SUCCESS) {
			return(SYSCTL_RETURN(req, hinfo.logical_cpu));
		} else {
			return(EINVAL);
		}
	case HW_LOCAL_LOGICALCPUMAX:
		if (kret == KERN_SUCCESS) {
			return(SYSCTL_RETURN(req, hinfo.logical_cpu_max));
		} else {
			return(EINVAL);
		}
	case HW_CACHELINE:
		val = cpu_info.cache_line_size;
		qval = (long long)val;
		break;
	case HW_L1ICACHESIZE:
		val = cpu_info.l1_icache_size;
		qval = (long long)val;
		break;
	case HW_L1DCACHESIZE:
		val = cpu_info.l1_dcache_size;
		qval = (long long)val;
		break;
	case HW_L2CACHESIZE:
		if (cpu_info.l2_cache_size == 0xFFFFFFFF)
			return(EINVAL);
		val = cpu_info.l2_cache_size;
		qval = (long long)val;
		break;
	case HW_L3CACHESIZE:
		if (cpu_info.l3_cache_size == 0xFFFFFFFF)
			return(EINVAL);
		val = cpu_info.l3_cache_size;
		qval = (long long)val;
		break;

		/*
		 * Deprecated variables.  We still support these for
		 * backwards compatibility purposes only.
		 */
	case HW_MACHINE:
		bzero(dummy, sizeof(dummy));
		if(!PEGetMachineName(dummy,64))
			return(EINVAL);
		dummy[64] = 0;
		return(SYSCTL_OUT(req, dummy, strlen(dummy) + 1));
	case HW_MODEL:
		bzero(dummy, sizeof(dummy));
		if(!PEGetModelName(dummy,64))
			return(EINVAL);
		dummy[64] = 0;
		return(SYSCTL_OUT(req, dummy, strlen(dummy) + 1));
	case HW_USERMEM:
		{
		int usermem = mem_size - vm_page_wire_count * page_size;

			return(SYSCTL_RETURN(req, usermem));
		}
	case HW_EPOCH:
	        epochTemp = PEGetPlatformEpoch();
		if (epochTemp == -1)
			return(EINVAL);
		return(SYSCTL_RETURN(req, epochTemp));
	case HW_VECTORUNIT: {
		int vector = cpu_info.vector_unit == 0? 0 : 1;
		return(SYSCTL_RETURN(req, vector));
	}
	case HW_L2SETTINGS:
		if (cpu_info.l2_cache_size == 0xFFFFFFFF)
			return(EINVAL);
		return(SYSCTL_RETURN(req, cpu_info.l2_settings));
	case HW_L3SETTINGS:
		if (cpu_info.l3_cache_size == 0xFFFFFFFF)
			return(EINVAL);
		return(SYSCTL_RETURN(req, cpu_info.l3_settings));
	default:
		return(ENOTSUP);
	}
	/*
	 * Callers may come to us with either int or quad buffers.
	 */
	if (doquad) {
		return(SYSCTL_RETURN(req, qval));
	}
	return(SYSCTL_RETURN(req, val));
}

/*
 * hw.* MIB variables.
 */
SYSCTL_PROC    (_hw, HW_NCPU, ncpu, CTLTYPE_INT | CTLFLAG_RD | CTLFLAG_KERN, 0, HW_NCPU, sysctl_hw_generic, "I", "");
SYSCTL_PROC    (_hw, HW_AVAILCPU, activecpu, CTLTYPE_INT | CTLFLAG_RD | CTLFLAG_KERN, 0, HW_AVAILCPU, sysctl_hw_generic, "I", "");
SYSCTL_PROC    (_hw, OID_AUTO, physicalcpu, CTLTYPE_INT | CTLFLAG_RD | CTLFLAG_KERN, 0, HW_LOCAL_PHYSICALCPU, sysctl_hw_generic, "I", "");
SYSCTL_PROC    (_hw, OID_AUTO, physicalcpu_max, CTLTYPE_INT | CTLFLAG_RD | CTLFLAG_KERN, 0, HW_LOCAL_PHYSICALCPUMAX, sysctl_hw_generic, "I", "");
SYSCTL_PROC    (_hw, OID_AUTO, logicalcpu, CTLTYPE_INT | CTLFLAG_RD | CTLFLAG_KERN, 0, HW_LOCAL_LOGICALCPU, sysctl_hw_generic, "I", "");
SYSCTL_PROC    (_hw, OID_AUTO, logicalcpu_max, CTLTYPE_INT | CTLFLAG_RD | CTLFLAG_KERN, 0, HW_LOCAL_LOGICALCPUMAX, sysctl_hw_generic, "I", "");
SYSCTL_INT     (_hw, HW_BYTEORDER, byteorder, CTLFLAG_RD | CTLFLAG_KERN, NULL, BYTE_ORDER, "");
SYSCTL_INT     (_hw, OID_AUTO, cputype, CTLFLAG_RD | CTLFLAG_KERN, &cputype, 0, "");
SYSCTL_INT     (_hw, OID_AUTO, cpusubtype, CTLFLAG_RD | CTLFLAG_KERN, &cpusubtype, 0, "");
SYSCTL_INT     (_hw, OID_AUTO, cpufamily, CTLFLAG_RD | CTLFLAG_KERN, &cpufamily, 0, "");
SYSCTL_OPAQUE  (_hw, OID_AUTO, cacheconfig, CTLFLAG_RD, &cacheconfig, sizeof(cacheconfig), "I", "");
SYSCTL_INT2QUAD(_hw, OID_AUTO, pagesize, CTLFLAG_RD | CTLFLAG_KERN, &page_size, "");
SYSCTL_QUAD    (_hw, OID_AUTO, busfrequency, CTLFLAG_RD | CTLFLAG_KERN, &gPEClockFrequencyInfo.bus_frequency_hz, "");
SYSCTL_QUAD    (_hw, OID_AUTO, busfrequency_min, CTLFLAG_RD | CTLFLAG_KERN, &gPEClockFrequencyInfo.bus_frequency_min_hz, "");
SYSCTL_QUAD    (_hw, OID_AUTO, busfrequency_max, CTLFLAG_RD | CTLFLAG_KERN, &gPEClockFrequencyInfo.bus_frequency_max_hz, "");
SYSCTL_QUAD    (_hw, OID_AUTO, cpufrequency, CTLFLAG_RD | CTLFLAG_KERN, &gPEClockFrequencyInfo.cpu_frequency_hz, "");
SYSCTL_QUAD    (_hw, OID_AUTO, cpufrequency_min, CTLFLAG_RD | CTLFLAG_KERN, &gPEClockFrequencyInfo.cpu_frequency_min_hz, "");
SYSCTL_QUAD    (_hw, OID_AUTO, cpufrequency_max, CTLFLAG_RD | CTLFLAG_KERN, &gPEClockFrequencyInfo.cpu_frequency_max_hz, "");
SYSCTL_PROC    (_hw, OID_AUTO, cachelinesize, CTLTYPE_QUAD | CTLFLAG_RD | CTLFLAG_KERN, 0, HW_CACHELINE | CTLHW_RETQUAD, sysctl_hw_generic, "Q", "");
SYSCTL_PROC    (_hw, OID_AUTO, l1icachesize, CTLTYPE_QUAD | CTLFLAG_RD | CTLFLAG_KERN, 0, HW_L1ICACHESIZE | CTLHW_RETQUAD, sysctl_hw_generic, "Q", "");
SYSCTL_PROC    (_hw, OID_AUTO, l1dcachesize, CTLTYPE_QUAD | CTLFLAG_RD | CTLFLAG_KERN, 0, HW_L1DCACHESIZE | CTLHW_RETQUAD, sysctl_hw_generic, "Q", "");
SYSCTL_PROC    (_hw, OID_AUTO, l2cachesize, CTLTYPE_QUAD | CTLFLAG_RD | CTLFLAG_KERN, 0, HW_L2CACHESIZE | CTLHW_RETQUAD, sysctl_hw_generic, "Q", "");
SYSCTL_PROC    (_hw, OID_AUTO, l3cachesize, CTLTYPE_QUAD | CTLFLAG_RD | CTLFLAG_KERN, 0, HW_L3CACHESIZE | CTLHW_RETQUAD, sysctl_hw_generic, "Q", "");
SYSCTL_INT2QUAD(_hw, OID_AUTO, tbfrequency, CTLFLAG_RD | CTLFLAG_KERN, &gPEClockFrequencyInfo.timebase_frequency_hz, "");
SYSCTL_QUAD    (_hw, HW_MEMSIZE, memsize, CTLFLAG_RD | CTLFLAG_KERN, &max_mem, "");

/*
 * Optional features can register nodes below hw.optional.
 *
 * If the feature is not present, the node should either not be registered,
 * or it should return -1.  If the feature is present, the node should return
 * 0.  If the feature is present and its use is advised, the node should 
 * return 1.
 */
SYSCTL_NODE(_hw, OID_AUTO, optional, CTLFLAG_RW, NULL, "optional features");

SYSCTL_INT(_hw_optional, OID_AUTO, floatingpoint, CTLFLAG_RD | CTLFLAG_KERN, 0, 1, "");	/* always set */

/*
 * Deprecated variables.  These are supported for backwards compatibility
 * purposes only.  The MASKED flag requests that the variables not be
 * printed by sysctl(8) and similar utilities.
 *
 * The variables named *_compat here are int-sized versions of variables
 * that are now exported as quads.  The int-sized versions are normally
 * looked up only by number, wheras the quad-sized versions should be
 * looked up by name.
 *
 * The *_compat nodes are *NOT* visible within the kernel.
 */
SYSCTL_INT (_hw, HW_PAGESIZE,     pagesize_compat, CTLFLAG_RD | CTLFLAG_MASKED, &page_size, 0, "");
SYSCTL_INT (_hw, HW_BUS_FREQ,     busfrequency_compat, CTLFLAG_RD | CTLFLAG_MASKED, &gPEClockFrequencyInfo.bus_clock_rate_hz, 0, "");
SYSCTL_INT (_hw, HW_CPU_FREQ,     cpufrequency_compat, CTLFLAG_RD | CTLFLAG_MASKED, &gPEClockFrequencyInfo.cpu_clock_rate_hz, 0, "");
SYSCTL_PROC(_hw, HW_CACHELINE,    cachelinesize_compat, CTLTYPE_INT | CTLFLAG_RD | CTLFLAG_MASKED, 0, HW_CACHELINE, sysctl_hw_generic, "I", "");
SYSCTL_PROC(_hw, HW_L1ICACHESIZE, l1icachesize_compat, CTLTYPE_INT | CTLFLAG_RD | CTLFLAG_MASKED, 0, HW_L1ICACHESIZE, sysctl_hw_generic, "I", "");
SYSCTL_PROC(_hw, HW_L1DCACHESIZE, l1dcachesize_compat, CTLTYPE_INT | CTLFLAG_RD | CTLFLAG_MASKED, 0, HW_L1DCACHESIZE, sysctl_hw_generic, "I", "");
SYSCTL_PROC(_hw, HW_L2CACHESIZE,  l2cachesize_compat, CTLTYPE_INT | CTLFLAG_RD | CTLFLAG_MASKED, 0, HW_L2CACHESIZE, sysctl_hw_generic, "I", "");
SYSCTL_PROC(_hw, HW_L3CACHESIZE,  l3cachesize_compat, CTLTYPE_INT | CTLFLAG_RD | CTLFLAG_MASKED, 0, HW_L3CACHESIZE, sysctl_hw_generic, "I", "");
SYSCTL_INT (_hw, HW_TB_FREQ,      tbfrequency_compat, CTLFLAG_RD | CTLFLAG_MASKED, &gPEClockFrequencyInfo.timebase_frequency_hz, 0, "");
SYSCTL_PROC(_hw, HW_MACHINE,      machine, CTLTYPE_STRING | CTLFLAG_RD | CTLFLAG_MASKED, 0, HW_MACHINE, sysctl_hw_generic, "A", "");
SYSCTL_PROC(_hw, HW_MODEL,        model, CTLTYPE_STRING | CTLFLAG_RD | CTLFLAG_MASKED, 0, HW_MODEL, sysctl_hw_generic, "A", "");
SYSCTL_UINT(_hw, HW_PHYSMEM,      physmem, CTLFLAG_RD | CTLFLAG_MASKED, &mem_size, 0, "");
SYSCTL_PROC(_hw, HW_USERMEM,      usermem, CTLTYPE_INT | CTLFLAG_RD | CTLFLAG_MASKED, 0, HW_USERMEM,	sysctl_hw_generic, "I", "");
SYSCTL_PROC(_hw, HW_EPOCH,        epoch, CTLTYPE_INT | CTLFLAG_RD | CTLFLAG_MASKED, 0, HW_EPOCH, sysctl_hw_generic, "I", "");
SYSCTL_PROC(_hw, HW_VECTORUNIT,   vectorunit, CTLTYPE_INT | CTLFLAG_RD | CTLFLAG_MASKED, 0, HW_VECTORUNIT, sysctl_hw_generic, "I", "");
SYSCTL_PROC(_hw, HW_L2SETTINGS,   l2settings, CTLTYPE_INT | CTLFLAG_RD | CTLFLAG_MASKED, 0, HW_L2SETTINGS, sysctl_hw_generic, "I", "");
SYSCTL_PROC(_hw, HW_L3SETTINGS,   l3settings, CTLTYPE_INT | CTLFLAG_RD | CTLFLAG_MASKED, 0, HW_L3SETTINGS, sysctl_hw_generic, "I", "");

/*
 * Debugging interface to the CPU power management code.
 */
static void pmsSysctl SYSCTL_HANDLER_ARGS {

	pmsctl_t	ctl;
	int		error;
	boolean_t	intr;

	if ((error = SYSCTL_IN(req, &ctl, sizeof(ctl))))
		return(error);

	intr = ml_set_interrupts_enabled(FALSE);		/* No interruptions in here */
	error = pmsControl(ctl.request, (user_addr_t)ctl.reqaddr, ctl.reqsize);
	(void)ml_set_interrupts_enabled(intr);			/* Restore interruptions */

	return(error);
}

SYSCTL_PROC(_hw, OID_AUTO, pms, CTLTYPE_STRUCT | CTLFLAG_WR, 0, 0, pmsSysctl, "S", "Processor Power Management");



/******************************************************************************
 * Generic MIB initialisation.
 *
 * This is a hack, and should be replaced with SYSINITs
 * at some point.
 */
void
sysctl_mib_init(void)
{
	cputype = cpu_type();
	cpusubtype = cpu_subtype();
	cputhreadtype = cpu_threadtype();

	/*
	 * Populate the optional portion of the hw.* MIB.
	 *
	 * XXX This could be broken out into parts of the code
	 *     that actually directly relate to the functions in
	 *     question.
	 */

	if (cputhreadtype != CPU_THREADTYPE_NONE) {
		static SYSCTL_INT(_hw, OID_AUTO, cputhreadtype, CTLFLAG_RD | CTLFLAG_NOAUTO | CTLFLAG_KERN, &cputhreadtype, 0, "");
		sysctl_register_oid(&sysctl__hw_cputhreadtype);
	}

#ifdef __ppc__
	{
		static int altivec_flag = -1;
		static SYSCTL_INT(_hw_optional, OID_AUTO, altivec, CTLFLAG_RD | CTLFLAG_NOAUTO | CTLFLAG_KERN, &altivec_flag, 0, "");

		if (_cpu_capabilities & kHasAltivec) {
			altivec_flag = 1;
			sysctl_register_oid(&sysctl__hw_optional_altivec);
		}
	}
	{
		static int graphicsops_flag = -1;
		static SYSCTL_INT(_hw_optional, OID_AUTO, graphicsops, CTLFLAG_RD | CTLFLAG_NOAUTO | CTLFLAG_KERN, &graphicsops_flag, 0, "");

		if (_cpu_capabilities & kHasGraphicsOps) {
			graphicsops_flag = 1;
			sysctl_register_oid(&sysctl__hw_optional_graphicsops);
		}		
	}
	{
		static int x64bitops_flag = -1;
		static SYSCTL_INT(_hw_optional, OID_AUTO, 64bitops, CTLFLAG_RD | CTLFLAG_NOAUTO | CTLFLAG_KERN, &x64bitops_flag, 0, "");

		if (_cpu_capabilities & k64Bit) {
			x64bitops_flag = 1;
			sysctl_register_oid(&sysctl__hw_optional_64bitops);
		}		
	}
	{
		static int fsqrt_flag = -1;
		static SYSCTL_INT(_hw_optional, OID_AUTO, fsqrt, CTLFLAG_RD | CTLFLAG_NOAUTO | CTLFLAG_KERN, &fsqrt_flag, 0, "");

		if (_cpu_capabilities & kHasFsqrt) {
			fsqrt_flag = 1;
			sysctl_register_oid(&sysctl__hw_optional_fsqrt);
		}		
	}
	{
		static int stfiwx_flag = -1;
		static SYSCTL_INT(_hw_optional, OID_AUTO, stfiwx, CTLFLAG_RD | CTLFLAG_NOAUTO | CTLFLAG_KERN, &stfiwx_flag, 0, "");

		if (_cpu_capabilities & kHasStfiwx) {
			stfiwx_flag = 1;
			sysctl_register_oid(&sysctl__hw_optional_stfiwx);
		}		
	}
	{
		static int dcba_flag = -1;
		static SYSCTL_INT(_hw_optional, OID_AUTO, dcba, CTLFLAG_RD | CTLFLAG_NOAUTO | CTLFLAG_KERN, &dcba_flag, 0, "");

		if (_cpu_capabilities & kDcbaAvailable)
			dcba_flag = 0;
		if (_cpu_capabilities & kDcbaRecommended)
			dcba_flag = 1;
		if (dcba_flag >= 0)
			sysctl_register_oid(&sysctl__hw_optional_dcba);
	}
	{
		static int datastreams_flag = -1;
		static SYSCTL_INT(_hw_optional, OID_AUTO, datastreams, CTLFLAG_RD | CTLFLAG_NOAUTO | CTLFLAG_KERN, &datastreams_flag, 0, "");

		if (_cpu_capabilities & kDataStreamsAvailable)
			datastreams_flag = 0;
		if (_cpu_capabilities & kDataStreamsRecommended)
			datastreams_flag = 1;
		if (datastreams_flag >= 0)
			sysctl_register_oid(&sysctl__hw_optional_datastreams);
	}
	{
		static int dcbtstreams_flag = -1;
		static SYSCTL_INT(_hw_optional, OID_AUTO, dcbtstreams, CTLFLAG_RD | CTLFLAG_NOAUTO | CTLFLAG_KERN, &dcbtstreams_flag, 0, "");

		if (_cpu_capabilities & kDcbtStreamsAvailable)
			dcbtstreams_flag = 0;
		if (_cpu_capabilities & kDcbtStreamsRecommended)
			dcbtstreams_flag = 1;
		if (dcbtstreams_flag >= 0)
			sysctl_register_oid(&sysctl__hw_optional_dcbtstreams);
	}

	/* hw.cpufamily */
	switch (cpusubtype) {
	case CPU_SUBTYPE_POWERPC_750:
		cpufamily = CPUFAMILY_POWERPC_G3;
		break;
	case CPU_SUBTYPE_POWERPC_7400:
	case CPU_SUBTYPE_POWERPC_7450:
		cpufamily = CPUFAMILY_POWERPC_G4;
		break;
	case CPU_SUBTYPE_POWERPC_970:
		cpufamily = CPUFAMILY_POWERPC_G5;
		break;
	default:
		cpufamily = CPUFAMILY_UNKNOWN;
	}

	/* hw.cacheconfig */
	cacheconfig[0] = 0; /* XXX not supported on PowerPC */

#elif defined (__i386__)


#define DECLARE_X86_HW_OPTIONAL_FLAGS(named, BITS, flags) { \
	static int named##_flag = -1;	\
	static SYSCTL_INT(_hw_optional, OID_AUTO, named, CTLFLAG_RD | CTLFLAG_NOAUTO | CTLFLAG_KERN | flags, &named##_flag, 0, "");	\
	named##_flag = ((_get_cpu_capabilities() & BITS) == BITS)? 1 : 0;	\
	sysctl_register_oid(&sysctl__hw_optional_##named);	\
	}

#define DECLARE_X86_HW_OPTIONAL(named, BITS) \
	DECLARE_X86_HW_OPTIONAL_FLAGS(named, BITS, 0)

#define DECLARE_X86_HW_OPTIONAL_MASKED(named, BITS) \
	DECLARE_X86_HW_OPTIONAL_FLAGS(named, BITS, CTLFLAG_MASKED)

	DECLARE_X86_HW_OPTIONAL(mmx, kHasMMX);
	DECLARE_X86_HW_OPTIONAL(sse, kHasSSE);
	DECLARE_X86_HW_OPTIONAL(sse2, kHasSSE2);
	DECLARE_X86_HW_OPTIONAL(sse3, kHasSSE3);
	if (_get_cpu_capabilities() & k64Bit)
		DECLARE_X86_HW_OPTIONAL(x86_64, k64Bit);
	if (_get_cpu_capabilities() & kHasSupplementalSSE3) {
		DECLARE_X86_HW_OPTIONAL_MASKED(mni, kHasSupplementalSSE3); /* XXX */
		DECLARE_X86_HW_OPTIONAL(supplementalsse3, kHasSupplementalSSE3);
	}

	/* hw.cpufamily */
	switch (cpuid_info()->cpuid_family) {
	case 6:
		switch (cpuid_info()->cpuid_model) {
		case 14:
			cpufamily = CPUFAMILY_INTEL_6_14; /* Core Solo/Duo */
			break;
		case 15:
			cpufamily = CPUFAMILY_INTEL_6_15;
			break;
		default:
			cpufamily = CPUFAMILY_UNKNOWN;
		}
		break;
	default:
		cpufamily = CPUFAMILY_UNKNOWN;
	}
	/* hw.cacheconfig */
	cacheconfig[0] = cpuid_info()->cpuid_cores_per_package;
	cacheconfig[1] = MAX(cpuid_info()->cache_sharing[L1I], cpuid_info()->cache_sharing[L1D]);
	cacheconfig[2] = cpuid_info()->cache_sharing[L2U];
	cacheconfig[3] = cpuid_info()->cache_sharing[L3U];
	cacheconfig[4] = 0;

#else /* end __i386 */
# warning we do not support this platform yet
#endif /* __ppc__ */


}
