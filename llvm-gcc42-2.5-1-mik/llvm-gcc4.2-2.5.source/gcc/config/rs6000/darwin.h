/* Target definitions for PowerPC running Darwin (Mac OS X).
   Copyright (C) 1997, 2000, 2001, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   Contributed by Apple Computer Inc.

   This file is part of GCC.

   GCC is free software; you can redistribute it and/or modify it
   under the terms of the GNU General Public License as published
   by the Free Software Foundation; either version 2, or (at your
   option) any later version.

   GCC is distributed in the hope that it will be useful, but WITHOUT
   ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
   or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public
   License for more details.

   You should have received a copy of the GNU General Public License
   along with GCC; see the file COPYING.  If not, write to the
   Free Software Foundation, 51 Franklin Street, Fifth Floor, Boston,
   MA 02110-1301, USA.  */

#undef  TARGET_VERSION
#define TARGET_VERSION fprintf (stderr, " (Darwin/PowerPC)");

/* The "Darwin ABI" is mostly like AIX, but with some key differences.  */

#define DEFAULT_ABI ABI_DARWIN

#ifdef IN_LIBGCC2
#undef TARGET_64BIT
#ifdef __powerpc64__
#define TARGET_64BIT 1
#else
#define TARGET_64BIT 0
#endif
#endif

/* The object file format is Mach-O.  */

#define TARGET_OBJECT_FORMAT OBJECT_MACHO

/* Size of the Obj-C jump buffer.  */
#define OBJC_JBLEN ((TARGET_64BIT) ? (26*2 + 18*2 + 129 + 1) : (26 + 18*2 + 129 + 1))

/* We're not ever going to do TOCs.  */

#define TARGET_TOC 0
#define TARGET_NO_TOC 1

/* Override the default rs6000 definition.  */
#undef  PTRDIFF_TYPE
#define PTRDIFF_TYPE (TARGET_64BIT ? "long int" : "int")

/* APPLE LOCAL begin mdynamic-no-pic */ 
/* This was a stupid idea in the first place.  */
#if 0
/* Translate config/rs6000/darwin.opt to config/darwin.h.  */
#define TARGET_DYNAMIC_NO_PIC (TARGET_MACHO_DYNAMIC_NO_PIC)
#endif
/* APPLE LOCAL end mdynamic-no-pic */ 

#define TARGET_OS_CPP_BUILTINS()                \
  do                                            \
    {                                           \
      if (!TARGET_64BIT) builtin_define ("__ppc__");   \
      if (TARGET_64BIT) builtin_define ("__ppc64__");  \
      builtin_define ("__POWERPC__");           \
      builtin_define ("__NATURAL_ALIGNMENT__"); \
      darwin_cpp_builtins (pfile);		\
    }                                           \
  while (0)

/* APPLE LOCAL begin mainline 2007-02-20 5005743 */ \
#define SUBTARGET_OVERRIDE_OPTIONS darwin_rs6000_override_options ()

/* APPLE LOCAL end mainline 2007-02-20 5005743 */ \
/* APPLE LOCAL begin mainline */
#define C_COMMON_OVERRIDE_OPTIONS do {					\
  /* On powerpc, __cxa_get_exception_ptr is available starting in the	\
     10.4.6 libstdc++.dylib.  */					\
/* APPLE LOCAL begin ARM 5683689 */					\
  if (!darwin_iphoneos_version_min					\
      && (!darwin_macosx_version_min					\
	  || strverscmp (darwin_macosx_version_min, "10.4.6") < 0)	\
/* APPLE LOCAL end 5683689 */						\
      && flag_use_cxa_get_exception_ptr == 2)				\
    flag_use_cxa_get_exception_ptr = 0;					\
  /* APPLE LOCAL begin 5731065 */					\
  /* moved flag_no_builtin to darwin.h */				\
  /* APPLE LOCAL end 5731065 */						\
  SUBTARGET_C_COMMON_OVERRIDE_OPTIONS;					\
} while (0)
/* APPLE LOCAL end mainline */

/* Darwin has 128-bit long double support in libc in 10.4 and later.
   Default to 128-bit long doubles even on earlier platforms for ABI
   consistency; arithmetic will work even if libc and libm support is
   not available.  */

#define RS6000_DEFAULT_LONG_DOUBLE_SIZE 128


/* We want -fPIC by default, unless we're using -static to compile for
   the kernel or some such.  */

#define CC1_SPEC "\
  "/* APPLE LOCAL ARM ignore -mthumb and -mno-thumb */"\
  %<mthumb %<mno-thumb \
  "/* APPLE LOCAL ignore -msse and -msse2 and other x86 options */"\
  %<msse  %<msse2 %<msse3 %<march=pentium4 %<mcpu=pentium4 \
  %{g: %{!fno-eliminate-unused-debug-symbols: -feliminate-unused-debug-symbols }} \
  %{static: %{Zdynamic: %e conflicting code gen style switches are used}}\
  "/* APPLE LOCAL ARM 5683689 */"\
  %{!mmacosx-version-min=*: %{!miphoneos-version-min=*: %(darwin_cc1_minversion)}} \
  "/* APPLE LOCAL -fast or -fastf or -fastcp */"\
  %{!mkernel:%{!static:%{!fast:%{!fastf:%{!fastcp:%{!mdynamic-no-pic:-fPIC}}}}}}"

#define DARWIN_ARCH_SPEC "%{m64:ppc64;:ppc}"

#define DARWIN_SUBARCH_SPEC "			\
 %{m64: ppc64}					\
 %{!m64:					\
 %{mcpu=601:ppc601;				\
   mcpu=603:ppc603;				\
   mcpu=603e:ppc603;				\
   mcpu=604:ppc604;				\
   mcpu=604e:ppc604e;				\
   mcpu=740:ppc750;				\
   mcpu=750:ppc750;				\
   mcpu=G3:ppc750;				\
   mcpu=7400:ppc7400;				\
   mcpu=G4:ppc7400;				\
   mcpu=7450:ppc7450;				\
   mcpu=970:ppc970;				\
   mcpu=power4:ppc970;				\
   mcpu=G5:ppc970;				\
   :ppc}}"

/* crt2.o is at least partially required for 10.3.x and earlier.  */
/* APPLE LOCAL begin ARM 5683689 */
#define DARWIN_CRT2_SPEC \
  "%{!m64: %{mmacosx-version-min=*:		\
	%:version-compare(!> 10.4 mmacosx-version-min= crt2.o%s)}}"
/* APPLE LOCAL end ARM 5683689 */

/* APPLE LOCAL begin mainline 2007-03-13 5005743 5040758 */ \
/* Determine a minimum version based on compiler options.  */
#define DARWIN_MINVERSION_SPEC					\
  "%{m64:%{fgnu-runtime:10.4;					\
	   ,objective-c|,objc-cpp-output:10.5;			\
	   ,objective-c-header:10.5;				\
	   ,objective-c++|,objective-c++-cpp-output:10.5;	\
	   ,objective-c++-header|,objc++-cpp-output:10.5;	\
	   :10.4};						\
     shared-libgcc:10.3;					\
     :10.1}"

/* APPLE LOCAL end mainline 2007-03-13 5040758 5005743 */
/* APPLE LOCAL begin ARM 5683689 */
/* Default cc1 option for specifying minimum version number.  */
#define DARWIN_CC1_MINVERSION_SPEC "-mmacosx-version-min=%(darwin_minversion)"

/* Default ld option for specifying minimum version number.  */
#define DARWIN_LD_MINVERSION_SPEC "-macosx_version_min %(darwin_minversion)"

/* Use macosx version numbers by default.  */
#define DARWIN_DEFAULT_VERSION_TYPE  DARWIN_VERSION_MACOSX
/* APPLE LOCAL end ARM 5683689 */

/* APPLE LOCAL ARM 5681645 */
#define DARWIN_IPHONEOS_LIBGCC_SPEC "-lgcc_s.10.5 -lgcc"

/* APPLE LOCAL begin 5342595 */
/* LLVM LOCAL begin */
#ifdef ENABLE_LLVM
#ifdef HAVE_DSYMUTIL
#define DARWIN_DSYMUTIL_SPEC	\
  "%{g*:%{!gstabs*:%{!g0: dsymutil %{o*:%*}%{!o:a.out}}}}"
#else
#define DARWIN_DSYMUTIL_SPEC ""
#endif
#endif
/* LLVM LOCAL end */
/* APPLE LOCAL end 5342595 */

/* APPLE LOCAL begin mainline */
#undef SUBTARGET_EXTRA_SPECS
#define SUBTARGET_EXTRA_SPECS			\
  DARWIN_EXTRA_SPECS                            \
  { "darwin_arch", DARWIN_ARCH_SPEC },		\
  { "darwin_crt2", DARWIN_CRT2_SPEC },		\
  { "darwin_subarch", DARWIN_SUBARCH_SPEC },
/* APPLE LOCAL end mainline */

/* Output a .machine directive.  */
#undef TARGET_ASM_FILE_START
#define TARGET_ASM_FILE_START rs6000_darwin_file_start

/* The "-faltivec" option should have been called "-maltivec" all
   along.  -ffix-and-continue and -findirect-data is for compatibility
   for old compilers.  */

#define SUBTARGET_OPTION_TRANSLATE_TABLE				\
  { "-ffix-and-continue", "-mfix-and-continue" },			\
  { "-findirect-data", "-mfix-and-continue" },				\
  /* APPLE LOCAL AltiVec */						\
  { "-faltivec", "-faltivec -mpim-altivec" },				\
  { "-fno-altivec", "-mno-altivec" },					\
  { "-Waltivec-long-deprecated",	"-mwarn-altivec-long" },	\
  { "-Wno-altivec-long-deprecated", "-mno-warn-altivec-long" }

/* Make both r2 and r13 available for allocation.  */
#define FIXED_R2 0
#define FIXED_R13 0

/* Base register for access to local variables of the function.  */

#undef  HARD_FRAME_POINTER_REGNUM
#define HARD_FRAME_POINTER_REGNUM 30

#undef  RS6000_PIC_OFFSET_TABLE_REGNUM
#define RS6000_PIC_OFFSET_TABLE_REGNUM 31

/* APPLE LOCAL begin -pg fix */
/* -pg has a problem which is normally concealed by -fPIC;
   either -mdynamic-no-pic or -static exposes the -pg problem, causing the
   crash.  FSF gcc for Darwin also has this bug.  The problem is that -pg
   causes several int registers to be saved and restored although they may
   not actually be used (config/rs6000/rs6000.c:first_reg_to_save()).  In the
   rare case where none of them is actually used, a consistency check fails
   (correctly).  This cannot happen with -fPIC because the PIC register (R31)
   is always "used" in the sense checked by the consistency check.  The
   easy fix, here, is therefore to mark R31 always "used" whenever -pg is on.
   A better, but harder, fix would be to improve -pg's register-use
   logic along the lines suggested by comments in the function listed above. */
#undef PIC_OFFSET_TABLE_REGNUM
#define PIC_OFFSET_TABLE_REGNUM ((flag_pic || profile_flag) \
    ? RS6000_PIC_OFFSET_TABLE_REGNUM \
    : INVALID_REGNUM)
/* APPLE LOCAL end -pg fix */

/* Pad the outgoing args area to 16 bytes instead of the usual 8.  */

#undef STARTING_FRAME_OFFSET
#define STARTING_FRAME_OFFSET						\
  (FRAME_GROWS_DOWNWARD							\
   ? 0									\
   : (RS6000_ALIGN (current_function_outgoing_args_size, 16)		\
      + RS6000_SAVE_AREA))

#undef STACK_DYNAMIC_OFFSET
#define STACK_DYNAMIC_OFFSET(FUNDECL)					\
  (RS6000_ALIGN (current_function_outgoing_args_size, 16)		\
   + (STACK_POINTER_OFFSET))

/* These are used by -fbranch-probabilities */
#define HOT_TEXT_SECTION_NAME "__TEXT,__text,regular,pure_instructions"
#define UNLIKELY_EXECUTED_TEXT_SECTION_NAME \
                              "__TEXT,__unlikely,regular,pure_instructions"

/* APPLE LOCAL begin long call hot cold */
/* The following is used by hot/cold partitioning to determine whether to
   unconditional branches are "long enough" to span the distance between
   hot and cold sections  (otherwise we have to use indirect jumps).  It 
   is set based on the -mlongcall flag.
   If -mlongcall is set, we use the indirect jumps (the macro below gets '0');
   otherwise we use unconditional branches (the macro below gets '1').  */
#define HAS_LONG_UNCOND_BRANCH (rs6000_default_long_calls ? 0 : 1)
/* APPLE LOCAL end long call hot cold */

/* APPLE LOCAL begin long-branch */
/* Define cutoff for using external functions to save floating point.
   For Darwin, use the function for more than a few registers.  */

/* APPLE LOCAL begin inline FP save/restore (radar 3414605) */
#undef FP_SAVE_INLINE
#define FP_SAVE_INLINE(FIRST_REG) \
(optimize >= 3   \
|| ((FIRST_REG) > 60 && (FIRST_REG) < 64) \
|| rs6000_default_long_calls)
/* APPLE LOCAL end inline FP save/restore (radar 3414605) */

/* Define cutoff for using external functions to save vector registers.  */

#undef VECTOR_SAVE_INLINE
#define VECTOR_SAVE_INLINE(FIRST_REG) \
  (((FIRST_REG) >= LAST_ALTIVEC_REGNO - 1 && (FIRST_REG) <= LAST_ALTIVEC_REGNO) \
   || rs6000_default_long_calls)
/* APPLE LOCAL end long-branch */

/* Darwin uses a function call if everything needs to be saved/restored.  */
#undef WORLD_SAVE_P
#define WORLD_SAVE_P(INFO) ((INFO)->world_save_p)

/* The assembler wants the alternate register names, but without
   leading percent sign.  */
#undef REGISTER_NAMES
#define REGISTER_NAMES							\
{									\
     "r0",  "r1",  "r2",  "r3",  "r4",  "r5",  "r6",  "r7",		\
     "r8",  "r9", "r10", "r11", "r12", "r13", "r14", "r15",		\
    "r16", "r17", "r18", "r19", "r20", "r21", "r22", "r23",		\
    "r24", "r25", "r26", "r27", "r28", "r29", "r30", "r31",		\
     "f0",  "f1",  "f2",  "f3",  "f4",  "f5",  "f6",  "f7",		\
     "f8",  "f9", "f10", "f11", "f12", "f13", "f14", "f15",		\
    "f16", "f17", "f18", "f19", "f20", "f21", "f22", "f23",		\
    "f24", "f25", "f26", "f27", "f28", "f29", "f30", "f31",		\
     "mq",  "lr", "ctr",  "ap",						\
    "cr0", "cr1", "cr2", "cr3", "cr4", "cr5", "cr6", "cr7",		\
    "xer",								\
     "v0",  "v1",  "v2",  "v3",  "v4",  "v5",  "v6",  "v7",             \
     "v8",  "v9", "v10", "v11", "v12", "v13", "v14", "v15",             \
    "v16", "v17", "v18", "v19", "v20", "v21", "v22", "v23",             \
    "v24", "v25", "v26", "v27", "v28", "v29", "v30", "v31",             \
    "vrsave", "vscr",							\
    "spe_acc", "spefscr",                                               \
    "sfp"								\
    /* APPLE LOCAL 3399553 */                                           \
    , "fpscr"								\
}

/* This outputs NAME to FILE.  */

#undef  RS6000_OUTPUT_BASENAME
#define RS6000_OUTPUT_BASENAME(FILE, NAME)	\
    assemble_name (FILE, NAME)

/* Globalizing directive for a label.  */
#undef GLOBAL_ASM_OP
#define GLOBAL_ASM_OP "\t.globl "
#undef TARGET_ASM_GLOBALIZE_LABEL

/* This is how to output an internal label prefix.  rs6000.c uses this
   when generating traceback tables.  */
/* Not really used for Darwin?  */

#undef ASM_OUTPUT_INTERNAL_LABEL_PREFIX
#define ASM_OUTPUT_INTERNAL_LABEL_PREFIX(FILE,PREFIX)	\
  fprintf (FILE, "%s", PREFIX)

/* This says how to output an assembler line to define a global common
   symbol.  */
#define ASM_OUTPUT_COMMON(FILE, NAME, SIZE, ROUNDED)			\
  do {									\
    unsigned HOST_WIDE_INT _new_size = SIZE;				\
    fputs (".comm ", (FILE));						\
    RS6000_OUTPUT_BASENAME ((FILE), (NAME));				\
    if (_new_size == 0) _new_size = 1;					\
    fprintf ((FILE), ","HOST_WIDE_INT_PRINT_UNSIGNED"\n", _new_size);	\
  } while (0)

/* Override the standard rs6000 definition.  */

#undef ASM_COMMENT_START
#define ASM_COMMENT_START ";"

/* APPLE LOCAL reduce code size */
/* Don't define SAVE_FP_PREFIX and friends */

/* This is how to output an assembler line that says to advance
   the location counter to a multiple of 2**LOG bytes using the
   "nop" instruction as padding.  */

#define ASM_OUTPUT_ALIGN_WITH_NOP(FILE,LOG)                   \
  do                                                          \
    {                                                         \
      if ((LOG) < 3)                                          \
        {                                                     \
          ASM_OUTPUT_ALIGN (FILE,LOG);                        \
        }                                                     \
      else /* nop == ori r0,r0,0 */                           \
        fprintf (FILE, "\t.align32 %d,0x60000000\n", (LOG));  \
    } while (0)

#ifdef HAVE_GAS_MAX_SKIP_P2ALIGN
/* This is supported in cctools 465 and later.  The macro test
   above prevents using it in earlier build environments.  */
#define ASM_OUTPUT_MAX_SKIP_ALIGN(FILE,LOG,MAX_SKIP)          \
  if ((LOG) != 0)                                             \
    {                                                         \
      if ((MAX_SKIP) == 0)                                    \
        fprintf ((FILE), "\t.p2align %d\n", (LOG));           \
      else                                                    \
        fprintf ((FILE), "\t.p2align %d,,%d\n", (LOG), (MAX_SKIP)); \
    }
#endif

/* Generate insns to call the profiler.  */

#define PROFILE_HOOK(LABEL)   output_profile_hook (LABEL)

/* Function name to call to do profiling.  */

#define RS6000_MCOUNT "*mcount"

/* APPLE LOCAL begin 4298879.  */
/* Default processor (for -mtune): G5 when not optimizing for size othwerise G4. 
   It is G5 by default for 64-bit in all cases.  */
/* APPLE LOCAL end 4298879.  */
#undef PROCESSOR_DEFAULT
/* APPLE LOCAL 4298879.  */
#define PROCESSOR_DEFAULT  (optimize_size ? PROCESSOR_PPC7400 : PROCESSOR_POWER4)
#undef PROCESSOR_DEFAULT64
#define PROCESSOR_DEFAULT64  PROCESSOR_POWER4

/* Default target flag settings.  Despite the fact that STMW/LMW
   serializes, it's still a big code size win to use them.  Use FSEL by
   default as well.  */

#undef  TARGET_DEFAULT
#define TARGET_DEFAULT (MASK_POWERPC | MASK_MULTIPLE | MASK_NEW_MNEMONICS \
                      | MASK_PPC_GFXOPT)

/* Darwin only runs on PowerPC, so short-circuit POWER patterns.  */
#undef  TARGET_POWER
#define TARGET_POWER 0
#undef  TARGET_IEEEQUAD
#define TARGET_IEEEQUAD 0

/* Since Darwin doesn't do TOCs, stub this out.  */

#define ASM_OUTPUT_SPECIAL_POOL_ENTRY_P(X, MODE)  ((void)X, (void)MODE, 0)

/* Unlike most other PowerPC targets, chars are signed, for
   consistency with other Darwin architectures.  */

#undef DEFAULT_SIGNED_CHAR
#define DEFAULT_SIGNED_CHAR (1)

/* Given an rtx X being reloaded into a reg required to be
   in class CLASS, return the class of reg to actually use.
   In general this is just CLASS; but on some machines
   in some cases it is preferable to use a more restrictive class.

   On the RS/6000, we have to return NO_REGS when we want to reload a
   floating-point CONST_DOUBLE to force it to be copied to memory.

   Don't allow R0 when loading the address of, or otherwise furtling with,
   a SYMBOL_REF.  */

#undef PREFERRED_RELOAD_CLASS
#define PREFERRED_RELOAD_CLASS(X,CLASS)				\
  ((CONSTANT_P (X)						\
    && reg_classes_intersect_p ((CLASS), FLOAT_REGS))		\
   ? NO_REGS							\
   : ((GET_CODE (X) == SYMBOL_REF || GET_CODE (X) == HIGH)	\
      && reg_class_subset_p (BASE_REGS, (CLASS)))		\
   ? BASE_REGS							\
   : (GET_MODE_CLASS (GET_MODE (X)) == MODE_INT			\
      && (CLASS) == NON_SPECIAL_REGS)				\
   ? GENERAL_REGS						\
   : (CLASS))

/* APPLE LOCAL begin Macintosh alignment 2002-2-26 --ff */
#define darwin_alignment_flags rs6000_alignment_flags
#define OPTION_ALIGN_NATURAL TARGET_ALIGN_NATURAL
#define OPTION_MASK_ALIGN_NATURAL MASK_ALIGN_NATURAL
/* APPLE LOCAL begin mainline 2006-10-31 PR 23067, radar 4869885 */
/* This now supports the Macintosh power, mac68k, and natural 
   alignment modes.

   Compute field alignment.  This is similar to the version of the
   macro in the Apple version of GCC, except that version supports
   'mac68k' alignment, and that version uses the computed alignment
   always for the first field of a structure.  The first-field
   behavior is dealt with by
   darwin_rs6000_special_round_type_align.  */
/* APPLE LOCAL end mainline 2006-10-31 PR 23067, radar 4869885 */
#undef ADJUST_FIELD_ALIGN
/* APPLE LOCAL begin mainline 2006-10-31 PR 23067, radar 4869885 */
#define ADJUST_FIELD_ALIGN(FIELD, COMPUTED)	\
  (TARGET_ALIGN_NATURAL ? (COMPUTED)		\
   : (((COMPUTED) == RS6000_VECTOR_ALIGNMENT)	\
      ? RS6000_VECTOR_ALIGNMENT			\
      : (MIN ((COMPUTED), 			\
	      (OPTION_ALIGN_MAC68K ? 16		\
	       : 32)))))
/* APPLE LOCAL end mainline 2006-10-31 PR 23067, radar 4869885 */

/* When adjusting (lowering) the alignment of fields when in the
   mac68k alignment mode, the 128-bit alignment of vectors *MUST*
   be preserved.  */
#undef PEG_ALIGN_FOR_MAC68K
#define PEG_ALIGN_FOR_MAC68K(DESIRED)					\
        ((DESIRED) == RS6000_VECTOR_ALIGNMENT ? RS6000_VECTOR_ALIGNMENT	\
         : MIN ((DESIRED), 16))

/* APPLE LOCAL begin mainline 2006-10-31 PR 23067, radar 4869885 */
/* Darwin increases natural record alignment to doubleword if the first
   field is an FP double while the FP fields remain word aligned.  */
#define ROUND_TYPE_ALIGN(STRUCT, COMPUTED, SPECIFIED)			  \
  ((TREE_CODE (STRUCT) == RECORD_TYPE					  \
    || TREE_CODE (STRUCT) == UNION_TYPE					  \
    || TREE_CODE (STRUCT) == QUAL_UNION_TYPE)				  \
   && TARGET_ALIGN_NATURAL == 0						  \
   ? darwin_rs6000_special_round_type_align (STRUCT, COMPUTED, SPECIFIED) \
   : (TREE_CODE (STRUCT) == VECTOR_TYPE					  \
      && ALTIVEC_VECTOR_MODE (TYPE_MODE (STRUCT)))			  \
   ? MAX (MAX ((COMPUTED), (SPECIFIED)), 128)				  \
   : MAX ((COMPUTED), (SPECIFIED)))
/* APPLE LOCAL end mainline 2006-10-31 PR 23067, radar 4869885 */
/* APPLE LOCAL end Macintosh alignment 2002-2-26 --ff */

/* APPLE LOCAL begin alignment */
/* Make sure local alignments come from the type node, not the mode;
   mode-based alignments are wrong for vectors.  */
#undef LOCAL_ALIGNMENT
#define LOCAL_ALIGNMENT(TYPE, ALIGN)			\
  (MIN (BIGGEST_ALIGNMENT,				\
	MAX ((unsigned) ALIGN, TYPE_ALIGN (TYPE))))
/* APPLE LOCAL end alignment */

/* Specify padding for the last element of a block move between
   registers and memory.  FIRST is nonzero if this is the only
   element.  */
#define BLOCK_REG_PADDING(MODE, TYPE, FIRST) \
  (!(FIRST) ? upward : FUNCTION_ARG_PADDING (MODE, TYPE))

/* XXX: Darwin supports neither .quad, or .llong, but it also doesn't
   support 64 bit PowerPC either, so this just keeps things happy.  */
#define DOUBLE_INT_ASM_OP "\t.quad\t"

/* APPLE LOCAL begin branch cost */
#undef BRANCH_COST
/* Better code is generated by saying conditional branches take 1 tick.  */
#define BRANCH_COST	1
/* APPLE LOCAL end branch cost */

/* APPLE LOCAL begin indirect calls in R12 */
/* Address of indirect call must be computed here */
#define MAGIC_INDIRECT_CALL_REG 12
/* APPLE LOCAL end indirect calls in R12 */

/* For binary compatibility with 2.95; Darwin C APIs use bool from
   stdbool.h, which was an int-sized enum in 2.95.  Users can explicitly
   choose to have sizeof(bool)==1 with the -mone-byte-bool switch. */
#define BOOL_TYPE_SIZE (darwin_one_byte_bool ? CHAR_TYPE_SIZE : INT_TYPE_SIZE)

#undef REGISTER_TARGET_PRAGMAS
#define REGISTER_TARGET_PRAGMAS() \
  do \
    { \
      DARWIN_REGISTER_TARGET_PRAGMAS(); \
      targetm.resolve_overloaded_builtin = altivec_resolve_overloaded_builtin; \
    } \
  while (0)

#ifdef IN_LIBGCC2
#include <stdbool.h>
#endif

#define MD_UNWIND_SUPPORT "config/rs6000/darwin-unwind.h"

#define HAS_MD_FALLBACK_FRAME_STATE_FOR 1

/* True, iff we're generating fast turn around debugging code.  When
   true, we arrange for function prologues to start with 5 nops so
   that gdb may insert code to redirect them, and for data to be
   accessed indirectly.  The runtime uses this indirection to forward
   references for data to the original instance of that data.  */

#define TARGET_FIX_AND_CONTINUE (darwin_fix_and_continue)

/* APPLE LOCAL begin radar 4590221 */
/* This is reserved to set flag_objc_direct_dispatch for Objective-C. */
#define HAVE_OFFS_MSGSEND_FAST		\
    (flag_next_runtime			\
     && flag_objc_direct_dispatch != 0	\
     && !TARGET_64BIT			\
/* APPLE LOCAL begin ARM 5683689 */				\
     && (darwin_iphoneos_version_min				\
         || strverscmp (darwin_macosx_version_min, "10.4") >= 0	\
/* APPLE LOCAL end ARM 5683689 */ 				\
         || flag_objc_direct_dispatch == 1))

/* This is the reserved direct dispatch address for Objective-C.  */
#define OFFS_MSGSEND_FAST \
  (HAVE_OFFS_MSGSEND_FAST ? 0xFFFEFF00 : 0)

/* This is the reserved ivar address Objective-C.  */
#define OFFS_ASSIGNIVAR_FAST \
  (HAVE_OFFS_MSGSEND_FAST ? 0xFFFEFEC0 : 0)
/* APPLE LOCAL end radar 4590221 */

/* Old versions of Mac OS/Darwin don't have C99 functions available.  */
#undef TARGET_C99_FUNCTIONS
#define TARGET_C99_FUNCTIONS					\
  (TARGET_64BIT							\
   /* APPLE LOCAL begin ARM 5683689 */				\
   || darwin_iphoneos_version_min				\
   || strverscmp (darwin_macosx_version_min, "10.3") >= 0)
   /* APPLE LOCAL end ARM 5683689 */

/* APPLE LOCAL begin track initialization status 4964532  */
/* APPLE LOCAL begin ARM 5683689 */
#undef  TARGET_DWARF_UNINIT_VARS
#define TARGET_DWARF_UNINIT_VARS	\
  (darwin_iphoneos_version_min 		\
   || (strverscmp (darwin_macosx_version_min, "10.4") >= 0))
/* APPLE LOCAL end ARM 5683689 */
/* APPLE LOCAL end track initialization status 4964532  */

/* When generating kernel code or kexts, we don't use Altivec by
   default, as kernel code doesn't save/restore those registers.  */
#define OS_MISSING_ALTIVEC (flag_mkernel || flag_apple_kext)

/* APPLE LOCAL begin x86_64 */
#define ASM_MAYBE_OUTPUT_ENCODED_ADDR_RTX(ASM_OUT_FILE, ENCODING, SIZE, ADDR, DONE)	\
  if (ENCODING == ASM_PREFERRED_EH_DATA_FORMAT (2, 1))       \
    {				                                         \
	  darwin_non_lazy_pcrel (ASM_OUT_FILE, ADDR);            \
	  goto DONE;                                             \
    }
/* APPLE LOCAL end x86_64 */

/* APPLE LOCAL KEXT */
#define TARGET_SUPPORTS_KEXTABI1 (! TARGET_64BIT)
