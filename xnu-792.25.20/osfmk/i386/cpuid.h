/*
 * Copyright (c) 2000-2005 Apple Computer, Inc. All rights reserved.
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
 * x86 CPU identification
 *
 */

#ifndef _MACHINE_CPUID_H_
#define _MACHINE_CPUID_H_

#include <sys/appleapiopts.h>

#ifdef __APPLE_API_PRIVATE

#define	CPUID_VID_SIZE		12
#define	CPUID_VID_INTEL		"GenuineIntel"
#define	CPUID_VID_UMC		"UMC UMC UMC "
#define	CPUID_VID_AMD		"AuthenticAMD"
#define	CPUID_VID_CYRIX		"CyrixInstead"
#define	CPUID_VID_NEXGEN	"NexGenDriven"
#define CPUID_VID_CENTAUR       "CentaurHauls"
#define CPUID_VID_RISE          "RiseRiseRise"
#define CPUID_VID_SIS           "SiS SiS SiS "
#define CPUID_VID_TRANSMETA     "GenuineTMx86"
#define CPUID_VID_NSC           "Geode by NSC"

#define CPUID_STRING_UNKNOWN    "Unknown CPU Typ"

#define _Bit(n)			(1ULL << n)
#define _HBit(n)		(1ULL << ((n)+32))

/*
 * The CPUID_FEATURE_XXX values define 64-bit values
 * returned in %ecx:%edx to a CPUID request with %eax of 1: 
 */
#define	CPUID_FEATURE_FPU     _Bit(0)	/* Floating point unit on-chip */
#define	CPUID_FEATURE_VME     _Bit(1)	/* Virtual Mode Extension */
#define	CPUID_FEATURE_DE      _Bit(2)	/* Debugging Extension */
#define	CPUID_FEATURE_PSE     _Bit(3)	/* Page Size Extension */
#define	CPUID_FEATURE_TSC     _Bit(4)	/* Time Stamp Counter */
#define	CPUID_FEATURE_MSR     _Bit(5)	/* Model Specific Registers */
#define CPUID_FEATURE_PAE     _Bit(6)	/* Physical Address Extension */
#define	CPUID_FEATURE_MCE     _Bit(7)	/* Machine Check Exception */
#define	CPUID_FEATURE_CX8     _Bit(8)	/* CMPXCHG8B */
#define	CPUID_FEATURE_APIC    _Bit(9)	/* On-chip APIC */
#define CPUID_FEATURE_SEP     _Bit(11)	/* Fast System Call */
#define	CPUID_FEATURE_MTRR    _Bit(12)	/* Memory Type Range Register */
#define	CPUID_FEATURE_PGE     _Bit(13)	/* Page Global Enable */
#define	CPUID_FEATURE_MCA     _Bit(14)	/* Machine Check Architecture */
#define	CPUID_FEATURE_CMOV    _Bit(15)	/* Conditional Move Instruction */
#define CPUID_FEATURE_PAT     _Bit(16)	/* Page Attribute Table */
#define CPUID_FEATURE_PSE36   _Bit(17)	/* 36-bit Page Size Extension */
#define CPUID_FEATURE_PSN     _Bit(18)	/* Processor Serial Number */
#define CPUID_FEATURE_CLFSH   _Bit(19)	/* CLFLUSH Instruction supported */
#define CPUID_FEATURE_DS      _Bit(21)	/* Debug Store */
#define CPUID_FEATURE_ACPI    _Bit(22)	/* Thermal monitor and Clock Ctrl */
#define CPUID_FEATURE_MMX     _Bit(23)	/* MMX supported */
#define CPUID_FEATURE_FXSR    _Bit(24)	/* Fast floating pt save/restore */
#define CPUID_FEATURE_SSE     _Bit(25)	/* Streaming SIMD extensions */
#define CPUID_FEATURE_SSE2    _Bit(26)	/* Streaming SIMD extensions 2 */
#define CPUID_FEATURE_SS      _Bit(27)	/* Self-Snoop */
#define CPUID_FEATURE_HTT     _Bit(28)	/* Hyper-Threading Technology */
#define CPUID_FEATURE_TM      _Bit(29)	/* Thermal Monitor (TM1) */
#define CPUID_FEATURE_PBE     _Bit(31)	/* Pend Break Enable */

#define CPUID_FEATURE_SSE3    _HBit(0)	/* Prescott New Inst. */
#define CPUID_FEATURE_MONITOR _HBit(3)	/* Monitor/mwait */
#define CPUID_FEATURE_DSCPL   _HBit(4)	/* Debug Store CPL */
#define CPUID_FEATURE_VMX     _HBit(5)	/* VMX */
#define CPUID_FEATURE_SMX     _HBit(6)	/* SMX */
#define CPUID_FEATURE_EST     _HBit(7)	/* Enhanced SpeedsTep (GV3) */
#define CPUID_FEATURE_TM2     _HBit(8)	/* Thermal Monitor 2 */
#define CPUID_FEATURE_SSSE3   _HBit(9)	/* Supplemental SSE3 instructions */
#define CPUID_FEATURE_MNI     CPUID_FEATURE_SSSE3
#define CPUID_FEATURE_CID     _HBit(10)	/* L1 Context ID */
#define CPUID_FEATURE_CX16    _HBit(13)	/* CmpXchg16b instruction */
#define CPUID_FEATURE_xTPR    _HBit(14)	/* Send Task PRiority msgs */
#define CPUID_FEATURE_PDCM    _HBit(15)	/* Perf/Debug Capability MSR */
#define CPUID_FEATURE_DCA     _HBit(18)	/* Direct Cache Control */
#define CPUID_FEATURE_SSE4_1  _HBit(19)	/* Streaming SIMD extensions 4.1 */
#define CPUID_FEATURE_SSE4_2  _HBit(20)	/* Streaming SIMD extensions 4.2 */
#define CPUID_FEATURE_POPCNT  _HBit(23)	/* POPCNT instruction */

/*
 * The CPUID_EXTFEATURE_XXX values define 64-bit values
 * returned in %ecx:%edx to a CPUID request with %eax of 0x80000001: 
 */
#define CPUID_EXTFEATURE_SYSCALL   _Bit(11)	/* SYSCALL/sysret */
#define CPUID_EXTFEATURE_XD	   _Bit(20)	/* eXecute Disable */
#define CPUID_EXTFEATURE_EM64T	   _Bit(29)	/* Extended Mem 64 Technology */

#define CPUID_EXTFEATURE_LAHF	   _HBit(20)	/* LAFH/SAHF instructions */


#define	CPUID_TYPE_OEM		    0x0	/* Original processor */
#define	CPUID_TYPE_OVERDRIVE	    0x1	/* Overdrive processor */
#define	CPUID_TYPE_DUAL		    0x2	/* Can be used as dual processor */
#define	CPUID_TYPE_RESERVED	    0x3	/* Reserved */

#define	CPUID_FAMILY_386	    0x3	/* Intel 386 (not part of CPUID) */

#define	CPUID_MODEL_I386_DX	    0x0	/* Intel 386 (not part of CPUID) */

#define	CPUID_FAMILY_486	    0x4	/* Intel 486 */

#define	CPUID_MODEL_I486_DX	    0x0	/* Intel 486DX */
#define	CPUID_MODEL_I486_DX_S	    0x1	/* Intel 486DX-S */
#define	CPUID_MODEL_I486_SX	    0x2	/* Intel 486SX */
#define	CPUID_MODEL_I486_DX2	    0x3	/* Intel 486DX2 */
#define	CPUID_MODEL_I486_SL	    0x4	/* Intel 486SL */
#define	CPUID_MODEL_I486_SX2	    0x5	/* Intel 486SX2 */
#define	CPUID_MODEL_I486_DX2WB	    0x7	/* Intel 486DX2WB */
#define	CPUID_MODEL_I486_DX4	    0x8	/* Intel 486DX4 */
#define	CPUID_MODEL_I486_DX4WB	    0x9	/* Intel 486DX4WB */

#define	CPUID_MODEL_AM486_DX	    0x1	/* AMD 486DX */
#define	CPUID_MODEL_AM486_DX2	    0x3	/* AMD 486DX2 */
#define	CPUID_MODEL_AM486_DX2WB	    0x7	/* AMD 486DX2WB */
#define	CPUID_MODEL_AM486_DX4	    0x8	/* AMD 486DX4 */
#define	CPUID_MODEL_AM486_DX4WB	    0x9	/* AMD 486DX4WB */
#define	CPUID_MODEL_AM486_5X86	    0xE	/* AMD 5x86 */
#define	CPUID_MODEL_AM486_5X86WB    0xF	/* AMD 5x86WB */

#define CPUID_MODEL_MEDIAGX         0x4 /* Cyrix MediaGX */
#define	CPUID_MODEL_CYRIX5X86	    0x9	/* CYRIX 5X86 */

#define	CPUID_FAMILY_586            0x5	/* Intel Pentium, AMD K5/K6*/

#define	CPUID_MODEL_UMC5D	    0x1	/* UMC U5D */
#define	CPUID_MODEL_UMC5S	    0x2	/* UMC U5S */
#define	CPUID_MODEL_UMC486_DX2	    0x3	/* UMC U486_DX2 */
#define	CPUID_MODEL_UMC486_SX2	    0x5	/* UMC U486_SX2 */

#define	CPUID_MODEL_P5A		    0x0	/* Intel P5 60/66 Step A */
#define	CPUID_MODEL_P5		    0x1	/* Intel P5 60/66 */
#define	CPUID_MODEL_P54		    0x2	/* Intel P5 75/80/100/120/133/166 */
#define	CPUID_MODEL_P24T	    0x3	/* Intel P5 Overdrive 63/83 */

#define CPUID_MODEL_K5M0            0x0 /* AMD-K5 Model 0 */
#define CPUID_MODEL_K5M1            0x1 /* AMD-K5 Model 1 */
#define CPUID_MODEL_K5M2            0x2 /* AMD-K5 Model 2 */
#define CPUID_MODEL_K5M3            0x3 /* AMD-K5 Model 3 */
#define CPUID_MODEL_K6M6            0x6 /* AMD-K6 Model 6 */
#define CPUID_MODEL_K6M7            0x7 /* AMD-K6 Model 7 */
#define CPUID_MODEL_K6_2            0x8 /* AMD-K6-2 Model 8 */
#define CPUID_MODEL_K6_III          0x9 /* AMD-K6-III Model 9 */

#define CPUID_MODEL_CYRIX_M1              0x2 /* Cyrix M1 */
#define CPUID_MODEL_MEDIAGX_MMX           0x4 /* Cyrix MediaGX MMX Enhanced */

#define	CPUID_FAMILY_686            0x6	/* Intel Pentium Pro, II, III; AMD Athlon */

#define	CPUID_MODEL_P6		    0x1	/* Intel P6 */
#define	CPUID_MODEL_PII		    0x3	/* Intel PII */
#define CPUID_MODEL_P65             0x5 /* Intel PII/Xeon/Celeron model 5 */
#define CPUID_MODEL_P66             0x6 /* Intel Celeron model 6 */
#define CPUID_MODEL_P67             0x7 /* Intel PIII/Xeon model 7 */
#define CPUID_MODEL_P68             0x8 /* Intel PIII/Xeon/Celeron model 8 */
#define CPUID_MODEL_PM9             0x9 /* Intel Pentium M model 9 */
#define CPUID_MODEL_P6A             0xA /* Intel PIII Xeon model A */
#define CPUID_MODEL_P6B             0xB /* Intel PIII model B */
#define CPUID_MODEL_PMD             0xD /* Intel Pentium M model D */
#define CPUID_MODEL_CORE            0xE /* Intel Core Solo & Duo */
#define CPUID_MODEL_YONAH           CPUID_MODEL_YONAH
#define CPUID_MODEL_CORE2	    0xF /* Intel Core2 Duo */
#define CPUID_MODEL_MEROM           CPUID_MODEL_CORE2
#define CPUID_MODEL_PENRYN          0x17

#define CPUID_MODEL_ATHLON_M1       0x1 /* AMD Athlon Model 1 */
#define CPUID_MODEL_ATHLON_M2       0x2 /* AMD Athlon Model 2 */
#define CPUID_MODEL_DURON_M3        0x3 /* AMD Duron Model 3 */
#define CPUID_MODEL_ATHLON_M4       0x4 /* AMD Athlon Model 4 */
#define CPUID_MODEL_ATHLON_M6       0x6 /* (Mobile) AMD Athlon/Duron MP/XP/4 Model 6 */
#define CPUID_MODEL_DURON_M7        0x7 /* (Mobile) AMD Duron Model 7 */
#define CPUID_MODEL_ATHLON_M8       0x8 /* (Mobile) Athlon XP/MP/XP-M Model 8 */
#define CPUID_MODEL_ATHLON_M10      0xA /* (Mobile) AMD Athlon XP/MP/XP-M/XP-M(LV) Model 10 */

#define CPUID_MODEL_CYRIX_M2        0x0 /* Cyrix M2 */
#define CPUID_MODEL_CYRIX_MII       0x2 /* VIA Cyrix MII (6x86MX) */
#define CPUID_MODEL_VIA_CYRIX_M2    0x5 /* VIA C3 Cyrix M2 */
#define CPUID_MODEL_WINCHIP_C5A     0x6 /* VIA C3 WinChip C5A */
#define CPUID_MODEL_WINCHIP_C5BC    0x7 /* VIA C3 WinChip C5B/C5C */
#define CPUID_MODEL_WINCHIP_C5N     0x8 /* VIA C3 WinChip C5N */
#define CPUID_MODEL_WINCHIP_C5XLP   0x9 /* VIA C3 WinChip C5P */

#define CPUID_MODEL_NX586           0x0 /* NexGen Nx586 */

#define CPUID_MODEL_RISE_MP6_0      0x0 /* Rise mP6 */
#define CPUID_MODEL_RISE_MP6_2      0x2 /* Rise mP6 */

#define CPUID_MODEL_SIS_55X         0x0 /* SIS 55x */

#define CPUID_MODEL_TM_CRUSOE       0x4 /* Transmeta Crusoe TM3x00 and TM5x00 */

#define CPUID_MODEL_CENTAUR_C6            0x4 /* Centaur C6 */
#define CPUID_MODEL_CENTAUR_C2            0x8 /* Centaur C2 */
#define CPUID_MODEL_CENTAUR_C3            0x9 /* Centaur C3 */

#define CPUID_MODEL_GX1               0x4 /* AMD Geode GX1 */
#define CPUID_MODEL_GX2               0x5 /* AMD Geode GX */

#define	CPUID_FAMILY_ITANIUM        0x7	/* Intel Intanium */
#define CPUID_FAMILY_EXTENDED       0xF /* Intel Pentium 4, Itanium II */

#define CPUID_EXTFAMILY_PENTIUM4    0x0 /* Intel Pentium 4 */
#define CPUID_EXTFAMILY_ITANIUM2    0x1 /* Intel Itanium 2 */

#define CPUID_MODEL_ATHLON64        0x4 /* AMD Athlon 64 Model 4 */
#define CPUID_MODEL_OPTERON         0x5 /* AMD Opteron Model 4 */

#define CPUID_BRAND_UNSUPPORTED     0x00
#define CPUID_BRAND_CELERON_1       0x01 /* Intel Celeron */
#define CPUID_BRAND_PENTIUM_III_2   0x02 /* Intel Pentium III */
#define CPUID_BRAND_PIII_XEON       0x03 /* Intel Pentium III Xeon / Celeron */
#define CPUID_BRAND_PENTIUM_III_4   0x04 /* Intel Pentium III */
#define CPUID_BRAND_PENTIUM_III_M   0x05 /* Mobile Intel Pentium III-M */
#define CPUID_BRAND_M_CELERON_7     0x07 /* Mobile Intel Celeron */
#define CPUID_BRAND_PENTIUM4_8      0x08 /* Intel Pentium 4 */
#define CPUID_BRAND_PENTIUM4_9      0x09 /* Intel Pentium 4 */
#define CPUID_BRAND_CELERON_A       0x0A /* Intel Celeron */
#define CPUID_BRAND_XEON            0x0B /* Intel Xeon (MP) */
#define CPUID_BRAND_XEON_MP         0x0C /* Intel Xeon MP */
#define CPUID_BRAND_PENTIUM4_M      0x0E /* Mobile Intel Pentium 4-M / Xeon */
#define CPUID_BRAND_M_CELERON_F     0x0F /* Mobile Intel Celeron */
#define CPUID_BRAND_MOBILE_17       0x11 /* Mobile Genuine Intel */
#define CPUID_BRAND_CELERON_M       0x12 /* Intel Celeron M */
#define CPUID_BRAND_M_CELERON_13    0x13 /* Mobile Intel Celeron */
#define CPUID_BRAND_CELERON_14      0x14 /* Intel Celeron */
#define CPUID_BRAND_MOBILE_15       0x15 /* Mobile Genuine Intel */
#define CPUID_BRAND_PENTIUM_M       0x16 /* Intel Pentium M */
#define CPUID_BRAND_M_CELERON_17    0x17 /* Mobile Intel Celeron */

#define	CPUID_CACHE_SIZE	16	/* Number of descriptor vales */

#define	CPUID_CACHE_NULL	   0x00	/* NULL */
#define	CPUID_CACHE_ITLB_4K	   0x01	/* Instruction TLB: 4K pages */
#define	CPUID_CACHE_ITLB_4M	   0x02	/* Instruction TLB: 4M pages */
#define	CPUID_CACHE_DTLB_4K	   0x03	/* Data TLB: 4K pages */
#define	CPUID_CACHE_DTLB_4M	   0x04	/* Data TLB: 4M pages */
#define	CPUID_CACHE_ICACHE_8K	   0x06	/* Instruction cache: 8K */
#define	CPUID_CACHE_ICACHE_16K	   0x08	/* Instruction cache: 16K */
#define	CPUID_CACHE_DCACHE_8K	   0x0A	/* Data cache: 8K */
#define	CPUID_CACHE_DCACHE_16K     0x0C	/* Data cache: 16K */
#define CPUID_CACHE_L3_512K        0x22 /* L3: 512K */
#define CPUID_CACHE_L3_1M          0x23 /* L3: 1M */
#define CPUID_CACHE_L3_2M          0x25 /* L3: 2M */
#define CPUID_CACHE_L3_4M          0x29 /* L3: 4M */
#define CPUID_CACHE_DCACHE_32K     0x2C /* Data cache: 32K, 8-way */
#define CPUID_CACHE_ICACHE_32K     0x30 /* Instruction cache: 32K, 8-way */
#define CPUID_CACHE_L2_128K_S4     0x39 /* L2: 128K, 4-way, sectored */
#define CPUID_CACHE_L2_128K_S2     0x3B /* L2: 128K, 2-way, sectored */
#define CPUID_CACHE_L2_256K_S4     0x3C /* L2: 256K, 4-way, sectored */
#define CPUID_CACHE_NOCACHE        0x40 /* No 2nd level or 3rd-level cache */
#define	CPUID_CACHE_L2_128K	   0x41	/* L2: 128K */
#define	CPUID_CACHE_L2_256K	   0x42	/* L2: 256K */
#define	CPUID_CACHE_L2_512K	   0x43	/* L2: 512K */
#define	CPUID_CACHE_L2_1M_4	   0x44	/* L2: 1M, 4-way */
#define	CPUID_CACHE_L2_2M_4	   0x45	/* L2: 2M, 4-way */
#define CPUID_CACHE_L3_4M_4_64     0x46 /* L3:  4M,  4-way, 64 bytes */
#define CPUID_CACHE_L3_8M_8_64     0x47 /* L3:  8M,  8-way, 64 bytes*/
#define CPUID_CACHE_L2_4M_16_64    0x49 /* L2:  4M, 16-way, 64 bytes */
#define CPUID_CACHE_L2_6M_12_64    0x4A /* L2:  6M, 12-way, 64 bytes */
#define CPUID_CACHE_L2_8M_16_64    0x4B /* L2:  8M, 16-way, 64 bytes */
#define CPUID_CACHE_L2_12M_12_64   0x4C /* L2: 12M, 12-way, 64 bytes */
#define CPUID_CACHE_L2_16M_16_64   0x4D /* L2: 16M, 16-way, 64 bytes */
#define CPUID_CACHE_L2_6M_24_64    0x4E /* L2:  6M, 24-way, 64 bytes */
#define CPUID_CACHE_ITLB_64        0x50 /* Instruction TLB: 64 entries */
#define CPUID_CACHE_ITLB_128       0x51 /* Instruction TLB: 128 entries */
#define CPUID_CACHE_ITLB_256       0x52 /* Instruction TLB: 256 entries */
#define CPUID_CACHE_DTLB_64        0x5B /* Data TLB: 64 entries */
#define CPUID_CACHE_DTLB_128       0x5C /* Data TLB: 128 entries */
#define CPUID_CACHE_DTLB_256       0x5D /* Data TLB: 256 entries */
#define	CPUID_CACHE_DCACHE_16K_8_64 0x60 /* Data cache: 16K, 8-way, 64 bytes */
#define	CPUID_CACHE_DCACHE_8K_4_64  0x66 /* Data cache:  8K, 4-way, 64 bytes */
#define	CPUID_CACHE_DCACHE_16K_4_64 0x67 /* Data cache: 16K, 4-way, 64 bytes */
#define	CPUID_CACHE_DCACHE_32K_4_64 0x68 /* Data cache: 32K, 4-way, 64 bytes */
#define CPUID_CACHE_TRACE_12K_8    0x70 /* Trace cache 12K-uop, 8-way */
#define CPUID_CACHE_TRACE_16K_8    0x71 /* Trace cache 16K-uop, 8-way */
#define CPUID_CACHE_TRACE_32K_8    0x72 /* Trace cache 32K-uop, 8-way */
#define	CPUID_CACHE_L2_1M_4_64     0x78 /* L2:   1M, 4-way, 64 bytes */
#define	CPUID_CACHE_L2_128K_8_64_2 0x79 /* L2: 128K, 8-way, 64b, 2 lines/sec */
#define	CPUID_CACHE_L2_256K_8_64_2 0x7A /* L2: 256K, 8-way, 64b, 2 lines/sec */
#define	CPUID_CACHE_L2_512K_8_64_2 0x7B /* L2: 512K, 8-way, 64b, 2 lines/sec */
#define	CPUID_CACHE_L2_1M_8_64_2   0x7C /* L2:   1M, 8-way, 64b, 2 lines/sec */
#define	CPUID_CACHE_L2_2M_8_64     0x7D /* L2:   2M, 8-way, 64 bytes */
#define	CPUID_CACHE_L2_512K_2_64   0x7F /* L2: 512K, 2-way, 64 bytes */
#define CPUID_CACHE_L2_256K_8_32   0x82 /* L2: 256K, 8-way, 32 bytes */
#define CPUID_CACHE_L2_512K_8_32   0x83 /* L2: 512K, 8-way, 32 bytes */
#define CPUID_CACHE_L2_1M_8_32     0x84 /* L2:   1M, 8-way, 32 bytes */
#define CPUID_CACHE_L2_2M_8_32     0x85 /* L2:   2M, 8-way, 32 bytes */
#define CPUID_CACHE_L2_512K_4_64   0x86 /* L2: 512K, 4-way, 64 bytes */
#define CPUID_CACHE_L2_1M_8_64     0x87 /* L2:   1M, 8-way, 64 bytes */
#define CPUID_CACHE_ITLB_4K_128_4  0xB0 /* ITLB: 4KB, 128 entries, 4-way */
#define CPUID_CACHE_ITLB_4M_4_4    0xB1 /* ITLB: 4MB,   4 entries, 4-way, or  */
#define CPUID_CACHE_ITLB_2M_8_4    0xB1 /* ITLB: 2MB,   8 entries, 4-way */
#define CPUID_CACHE_DTLB_4K_128_4  0xB3 /* DTLB: 4KB, 128 entries, 4-way */
#define CPUID_CACHE_DTLB_4K_256_4  0xB3 /* DTLB: 4KB, 256 entries, 4-way */
#define CPUID_CACHE_PREFETCH_64    0xF0 /* 64-Byte Prefetching */
#define CPUID_CACHE_PREFETCH_128   0xF1 /* 128-Byte Prefetching */

#ifndef ASSEMBLER
#include <stdint.h>
#include <mach/mach_types.h>
#include <kern/kern_types.h>
#include <mach/machine.h>


typedef enum { eax, ebx, ecx, edx } cpuid_register_t;
static inline void
cpuid(uint32_t *data)
{
	asm("cpuid"
		: "=a" (data[eax]),
		  "=b" (data[ebx]),
		  "=c" (data[ecx]),
		  "=d" (data[edx])
		: "a"  (data[eax]),
		  "b"  (data[ebx]),
		  "c"  (data[ecx]),
		  "d"  (data[edx]));
}
static inline void
do_cpuid(uint32_t selector, uint32_t *data)
{
	asm("cpuid"
		: "=a" (data[0]),
		  "=b" (data[1]),
		  "=c" (data[2]),
		  "=d" (data[3])
		: "a"(selector));
}

/*
 * Cache ID descriptor structure.
 * Note: description string absent in kernel.
 */
typedef enum { Lnone, L1I, L1D, L2U, L3U, LCACHE_MAX } cache_type_t ; 
typedef struct {
	unsigned char	value;          /* Descriptor value */
	cache_type_t 	type;           /* Cache type */
	unsigned int 	size;           /* Cache size */
	unsigned int 	linesize;       /* Cache line size */
#ifdef KERNEL
	const char	*description;   /* Cache description */
#endif /* KERNEL */
} cpuid_cache_desc_t;  

#ifdef KERNEL
#define CACHE_DESC(value,type,size,linesize,text) \
	{ value, type, size, linesize, text }
#else
#define CACHE_DESC(value,type,size,linesize,text) \
	{ value, type, size, linesize }
#endif /* KERNEL */

/* Physical CPU info - this is exported out of the kernel (kexts), so be wary of changes */
typedef struct {
	char		cpuid_vendor[16];
	char		cpuid_brand_string[48];
	const char	*cpuid_model_string;

	cpu_type_t	cpuid_type;					/* this is *not* a cpu_type_t in our <mach/machine.h> */
	uint8_t		cpuid_family;
	uint8_t		cpuid_model;
	uint8_t		cpuid_extmodel;
	uint8_t		cpuid_extfamily;
	uint8_t		cpuid_stepping;
	uint64_t	cpuid_features;
	uint64_t	cpuid_extfeatures;
	uint32_t	cpuid_signature;
	uint8_t   	cpuid_brand; 
	
	uint32_t	cache_size[LCACHE_MAX];
	uint32_t	cache_linesize;

	uint8_t		cache_info[64];    /* list of cache descriptors */

	uint32_t	cpuid_cores_per_package;
	uint32_t	cpuid_logical_per_package;
	uint32_t	cache_sharing[LCACHE_MAX];

	cpu_type_t		cpuid_cpu_type;			/* <mach/machine.h> */
	cpu_subtype_t	cpuid_cpu_subtype;		/* <mach/machine.h> */	
} i386_cpu_info_t;

#ifdef __cplusplus
extern "C" {
#endif

/*
 * External declarations
 */
extern cpu_type_t	cpuid_cputype(void);
extern cpu_subtype_t	cpuid_cpusubtype(void);
extern void		cpuid_cpu_display(const char *);
extern void		cpuid_feature_display(const char *);
extern void		cpuid_extfeature_display(const char *);
extern char *		cpuid_get_feature_names(uint64_t, char *, unsigned);
extern char *		cpuid_get_extfeature_names(uint64_t, char *, unsigned);

extern uint64_t		cpuid_features(void);
extern uint64_t		cpuid_extfeatures(void);
extern uint32_t		cpuid_family(void);
	
extern void		cpuid_get_info(i386_cpu_info_t *info_p);
extern i386_cpu_info_t	*cpuid_info(void);

extern void		cpuid_set_info(void);

#ifdef __cplusplus
}
#endif

#endif /* ASSEMBLER */

#endif /* __APPLE_API_PRIVATE */
#endif /* _MACHINE_CPUID_H_ */
