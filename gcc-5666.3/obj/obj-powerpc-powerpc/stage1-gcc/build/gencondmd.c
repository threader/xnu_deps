/* Generated automatically by the program `genconditions' from the target
   machine description file.  */

#include "bconfig.h"
#include "system.h"

/* It is necessary, but not entirely safe, to include the headers below
   in a generator program.  As a defensive measure, don't do so when the
   table isn't going to have anything in it.  */
#if GCC_VERSION >= 3001

/* Do not allow checking to confuse the issue.  */
#undef ENABLE_CHECKING
#undef ENABLE_TREE_CHECKING
#undef ENABLE_RTL_CHECKING
#undef ENABLE_RTL_FLAG_CHECKING
#undef ENABLE_GC_CHECKING
#undef ENABLE_GC_ALWAYS_COLLECT

#include "coretypes.h"
#include "tm.h"
#include "insn-constants.h"
#include "rtl.h"
#include "tm_p.h"
#include "function.h"

/* Fake - insn-config.h doesn't exist yet.  */
#define MAX_RECOG_OPERANDS 10
#define MAX_DUP_OPERANDS 10
#define MAX_INSNS_PER_SPLIT 5

#include "regs.h"
#include "recog.h"
#include "real.h"
#include "output.h"
#include "flags.h"
#include "hard-reg-set.h"
#include "resource.h"
#include "toplev.h"
#include "reload.h"
#include "tm-constrs.h"

#define HAVE_eh_return 1
#include "except.h"

/* Dummy external declarations.  */
extern rtx insn;
extern rtx ins1;
extern rtx operands[];

#endif /* gcc >= 3.0.1 */

/* Structure definition duplicated from gensupport.h rather than
   drag in that file and its dependencies.  */
struct c_test
{
  const char *expr;
  int value;
};

/* This table lists each condition found in the machine description.
   Each condition is mapped to its truth value (0 or 1), or -1 if that
   cannot be calculated at compile time.
   If we don't have __builtin_constant_p, or it's not acceptable in array
   initializers, fall back to assuming that all conditions potentially
   vary at run time.  It works in 3.0.1 and later; 3.0 only when not
   optimizing.  */

#if GCC_VERSION >= 3001
static const struct c_test insn_conditions[] = {

#line 8035 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
  { "(gpc_reg_operand (operands[0], SFmode)\n\
   || gpc_reg_operand (operands[1], SFmode))\n\
   && (TARGET_HARD_FLOAT && TARGET_FPRS)",
    __builtin_constant_p 
#line 8035 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
((gpc_reg_operand (operands[0], SFmode)
   || gpc_reg_operand (operands[1], SFmode))
   && (TARGET_HARD_FLOAT && TARGET_FPRS))
    ? (int) 
#line 8035 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
((gpc_reg_operand (operands[0], SFmode)
   || gpc_reg_operand (operands[1], SFmode))
   && (TARGET_HARD_FLOAT && TARGET_FPRS))
    : -1 },
#line 4474 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
  { "! TARGET_POWER && TARGET_32BIT",
    __builtin_constant_p 
#line 4474 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(! TARGET_POWER && TARGET_32BIT)
    ? (int) 
#line 4474 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(! TARGET_POWER && TARGET_32BIT)
    : -1 },
#line 3474 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
  { "(32 - (INTVAL (operands[4]) & 31)) >= INTVAL (operands[1])",
    __builtin_constant_p 
#line 3474 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
((32 - (INTVAL (operands[4]) & 31)) >= INTVAL (operands[1]))
    ? (int) 
#line 3474 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
((32 - (INTVAL (operands[4]) & 31)) >= INTVAL (operands[1]))
    : -1 },
#line 10297 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
  { "TARGET_ELF && ! TARGET_64BIT",
    __builtin_constant_p 
#line 10297 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_ELF && ! TARGET_64BIT)
    ? (int) 
#line 10297 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_ELF && ! TARGET_64BIT)
    : -1 },
#line 9096 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
  { "TARGET_STRING && !TARGET_POWER && XVECLEN (operands[0], 0) == 7",
    __builtin_constant_p 
#line 9096 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_STRING && !TARGET_POWER && XVECLEN (operands[0], 0) == 7)
    ? (int) 
#line 9096 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_STRING && !TARGET_POWER && XVECLEN (operands[0], 0) == 7)
    : -1 },
#line 5944 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
  { "TARGET_FPRND && TARGET_HARD_FLOAT && TARGET_FPRS",
    __builtin_constant_p 
#line 5944 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_FPRND && TARGET_HARD_FLOAT && TARGET_FPRS)
    ? (int) 
#line 5944 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_FPRND && TARGET_HARD_FLOAT && TARGET_FPRS)
    : -1 },
  { "(! TARGET_POWERPC64 && TARGET_HARD_FLOAT && TARGET_FPRS) && ( (!no_new_pseudos || offsettable_nonstrict_memref_p (operands[4])))",
    __builtin_constant_p (
#line 5783 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(! TARGET_POWERPC64 && TARGET_HARD_FLOAT && TARGET_FPRS) && 
#line 5785 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
( (!no_new_pseudos || offsettable_nonstrict_memref_p (operands[4]))))
    ? (int) (
#line 5783 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(! TARGET_POWERPC64 && TARGET_HARD_FLOAT && TARGET_FPRS) && 
#line 5785 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
( (!no_new_pseudos || offsettable_nonstrict_memref_p (operands[4]))))
    : -1 },
#line 8897 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
  { "TARGET_STRING && XVECLEN (operands[0], 0) == 8",
    __builtin_constant_p 
#line 8897 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_STRING && XVECLEN (operands[0], 0) == 8)
    ? (int) 
#line 8897 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_STRING && XVECLEN (operands[0], 0) == 8)
    : -1 },
#line 11082 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
  { "(INTVAL (operands[3]) & CALL_LONG) == 0",
    __builtin_constant_p 
#line 11082 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
((INTVAL (operands[3]) & CALL_LONG) == 0)
    ? (int) 
#line 11082 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
((INTVAL (operands[3]) & CALL_LONG) == 0)
    : -1 },
#line 11151 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
  { "TARGET_32BIT\n\
   && DEFAULT_ABI == ABI_AIX\n\
   && (INTVAL (operands[3]) & CALL_LONG) == 0",
    __builtin_constant_p 
#line 11151 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_32BIT
   && DEFAULT_ABI == ABI_AIX
   && (INTVAL (operands[3]) & CALL_LONG) == 0)
    ? (int) 
#line 11151 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_32BIT
   && DEFAULT_ABI == ABI_AIX
   && (INTVAL (operands[3]) & CALL_LONG) == 0)
    : -1 },
  { "(reload_completed && ! gpc_reg_operand (operands[0], SImode)) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 14140 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(reload_completed && ! gpc_reg_operand (operands[0], SImode)) && 
#line 160 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_64BIT))
    ? (int) (
#line 14140 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(reload_completed && ! gpc_reg_operand (operands[0], SImode)) && 
#line 160 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_64BIT))
    : -1 },
#line 2435 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/spe.md"
  { "TARGET_SPE",
    __builtin_constant_p 
#line 2435 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/spe.md"
(TARGET_SPE)
    ? (int) 
#line 2435 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/spe.md"
(TARGET_SPE)
    : -1 },
#line 2345 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
  { "TARGET_POWER || (! TARGET_POWER && ! TARGET_POWERPC)",
    __builtin_constant_p 
#line 2345 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_POWER || (! TARGET_POWER && ! TARGET_POWERPC))
    ? (int) 
#line 2345 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_POWER || (! TARGET_POWER && ! TARGET_POWERPC))
    : -1 },
#line 6998 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
  { "TARGET_POWERPC64 && includes_rldic_lshift_p (operands[2], operands[3])",
    __builtin_constant_p 
#line 6998 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC64 && includes_rldic_lshift_p (operands[2], operands[3]))
    ? (int) 
#line 6998 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC64 && includes_rldic_lshift_p (operands[2], operands[3]))
    : -1 },
#line 5198 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
  { "TARGET_POWERPC && TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_FUSED_MADD",
    __builtin_constant_p 
#line 5198 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC && TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_FUSED_MADD)
    ? (int) 
#line 5198 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC && TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_FUSED_MADD)
    : -1 },
#line 2276 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/spe.md"
  { "(TARGET_E500_DOUBLE && DFmode == DFmode) || (TARGET_SPE && DFmode != DFmode)",
    __builtin_constant_p 
#line 2276 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/spe.md"
((TARGET_E500_DOUBLE && DFmode == DFmode) || (TARGET_SPE && DFmode != DFmode))
    ? (int) 
#line 2276 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/spe.md"
((TARGET_E500_DOUBLE && DFmode == DFmode) || (TARGET_SPE && DFmode != DFmode))
    : -1 },
#line 177 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/altivec.md"
  { "TARGET_ALTIVEC \n\
   && (register_operand (operands[0], V4SImode) \n\
       || register_operand (operands[1], V4SImode))",
    __builtin_constant_p 
#line 177 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/altivec.md"
(TARGET_ALTIVEC 
   && (register_operand (operands[0], V4SImode) 
       || register_operand (operands[1], V4SImode)))
    ? (int) 
#line 177 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/altivec.md"
(TARGET_ALTIVEC 
   && (register_operand (operands[0], V4SImode) 
       || register_operand (operands[1], V4SImode)))
    : -1 },
  { "(TARGET_POWERPC) && (TARGET_32BIT)",
    __builtin_constant_p (
#line 1724 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC) && 
#line 160 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_32BIT))
    ? (int) (
#line 1724 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC) && 
#line 160 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_32BIT))
    : -1 },
#line 9696 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
  { "TARGET_UPDATE",
    __builtin_constant_p 
#line 9696 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_UPDATE)
    ? (int) 
#line 9696 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_UPDATE)
    : -1 },
#line 9236 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
  { "TARGET_STRING && TARGET_POWER && XVECLEN (operands[0], 0) == 5",
    __builtin_constant_p 
#line 9236 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_STRING && TARGET_POWER && XVECLEN (operands[0], 0) == 5)
    ? (int) 
#line 9236 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_STRING && TARGET_POWER && XVECLEN (operands[0], 0) == 5)
    : -1 },
#line 5237 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
  { "TARGET_POWER2 && TARGET_HARD_FLOAT && TARGET_FPRS",
    __builtin_constant_p 
#line 5237 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_POWER2 && TARGET_HARD_FLOAT && TARGET_FPRS)
    ? (int) 
#line 5237 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_POWER2 && TARGET_HARD_FLOAT && TARGET_FPRS)
    : -1 },
#line 7912 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
  { "gpc_reg_operand (operands[0], HImode)\n\
   || gpc_reg_operand (operands[1], HImode)",
    __builtin_constant_p 
#line 7912 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(gpc_reg_operand (operands[0], HImode)
   || gpc_reg_operand (operands[1], HImode))
    ? (int) 
#line 7912 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(gpc_reg_operand (operands[0], HImode)
   || gpc_reg_operand (operands[1], HImode))
    : -1 },
#line 6357 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
  { "TARGET_POWERPC && ! TARGET_POWER",
    __builtin_constant_p 
#line 6357 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC && ! TARGET_POWER)
    ? (int) 
#line 6357 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC && ! TARGET_POWER)
    : -1 },
#line 8136 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
  { "TARGET_POWERPC64 && reload_completed\n\
   && ((GET_CODE (operands[0]) == REG && REGNO (operands[0]) <= 31)\n\
       || (GET_CODE (operands[0]) == SUBREG\n\
	   && GET_CODE (SUBREG_REG (operands[0])) == REG\n\
	   && REGNO (SUBREG_REG (operands[0])) <= 31))",
    __builtin_constant_p 
#line 8136 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC64 && reload_completed
   && ((GET_CODE (operands[0]) == REG && REGNO (operands[0]) <= 31)
       || (GET_CODE (operands[0]) == SUBREG
	   && GET_CODE (SUBREG_REG (operands[0])) == REG
	   && REGNO (SUBREG_REG (operands[0])) <= 31)))
    ? (int) 
#line 8136 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC64 && reload_completed
   && ((GET_CODE (operands[0]) == REG && REGNO (operands[0]) <= 31)
       || (GET_CODE (operands[0]) == SUBREG
	   && GET_CODE (SUBREG_REG (operands[0])) == REG
	   && REGNO (SUBREG_REG (operands[0])) <= 31)))
    : -1 },
#line 426 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/darwin.md"
  { "(DEFAULT_ABI == ABI_DARWIN)\n\
   && (INTVAL (operands[3]) & CALL_LONG) == 0",
    __builtin_constant_p 
#line 426 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/darwin.md"
((DEFAULT_ABI == ABI_DARWIN)
   && (INTVAL (operands[3]) & CALL_LONG) == 0)
    ? (int) 
#line 426 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/darwin.md"
((DEFAULT_ABI == ABI_DARWIN)
   && (INTVAL (operands[3]) & CALL_LONG) == 0)
    : -1 },
#line 8741 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
  { "TARGET_POWER && ! TARGET_POWERPC64\n\
   && (gpc_reg_operand (operands[0], TImode) || gpc_reg_operand (operands[1], TImode))",
    __builtin_constant_p 
#line 8741 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_POWER && ! TARGET_POWERPC64
   && (gpc_reg_operand (operands[0], TImode) || gpc_reg_operand (operands[1], TImode)))
    ? (int) 
#line 8741 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_POWER && ! TARGET_POWERPC64
   && (gpc_reg_operand (operands[0], TImode) || gpc_reg_operand (operands[1], TImode)))
    : -1 },
  { "((DEFAULT_ABI == ABI_DARWIN\n\
     || DEFAULT_ABI == ABI_V4)\n\
   && (INTVAL (operands[2]) & CALL_LONG) == 0) && (TARGET_32BIT)",
    __builtin_constant_p (
#line 11178 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
((DEFAULT_ABI == ABI_DARWIN
     || DEFAULT_ABI == ABI_V4)
   && (INTVAL (operands[2]) & CALL_LONG) == 0) && 
#line 160 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_32BIT))
    ? (int) (
#line 11178 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
((DEFAULT_ABI == ABI_DARWIN
     || DEFAULT_ABI == ABI_V4)
   && (INTVAL (operands[2]) & CALL_LONG) == 0) && 
#line 160 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_32BIT))
    : -1 },
#line 11165 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
  { "TARGET_64BIT\n\
   && DEFAULT_ABI == ABI_AIX\n\
   && (INTVAL (operands[3]) & CALL_LONG) == 0",
    __builtin_constant_p 
#line 11165 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_64BIT
   && DEFAULT_ABI == ABI_AIX
   && (INTVAL (operands[3]) & CALL_LONG) == 0)
    ? (int) 
#line 11165 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_64BIT
   && DEFAULT_ABI == ABI_AIX
   && (INTVAL (operands[3]) & CALL_LONG) == 0)
    : -1 },
#line 1376 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
  { "TARGET_DLMZB && WORDS_BIG_ENDIAN && !optimize_size",
    __builtin_constant_p 
#line 1376 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_DLMZB && WORDS_BIG_ENDIAN && !optimize_size)
    ? (int) 
#line 1376 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_DLMZB && WORDS_BIG_ENDIAN && !optimize_size)
    : -1 },
#line 7934 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
  { "gpc_reg_operand (operands[0], QImode)\n\
   || gpc_reg_operand (operands[1], QImode)",
    __builtin_constant_p 
#line 7934 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(gpc_reg_operand (operands[0], QImode)
   || gpc_reg_operand (operands[1], QImode))
    ? (int) 
#line 7934 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(gpc_reg_operand (operands[0], QImode)
   || gpc_reg_operand (operands[1], QImode))
    : -1 },
#line 4721 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
  { "includes_rshift_p (operands[2], GEN_INT (65535)) && reload_completed",
    __builtin_constant_p 
#line 4721 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(includes_rshift_p (operands[2], GEN_INT (65535)) && reload_completed)
    ? (int) 
#line 4721 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(includes_rshift_p (operands[2], GEN_INT (65535)) && reload_completed)
    : -1 },
#line 9528 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
  { "TARGET_STRING && TARGET_POWER\n\
   && INTVAL (operands[2]) > 0 && INTVAL (operands[2]) <= 4",
    __builtin_constant_p 
#line 9528 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_STRING && TARGET_POWER
   && INTVAL (operands[2]) > 0 && INTVAL (operands[2]) <= 4)
    ? (int) 
#line 9528 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_STRING && TARGET_POWER
   && INTVAL (operands[2]) > 0 && INTVAL (operands[2]) <= 4)
    : -1 },
  { "(TARGET_STRING && ! TARGET_POWER\n\
   && INTVAL (operands[2]) > 8 && INTVAL (operands[2]) <= 16\n\
   && (REGNO (operands[0]) < 5 || REGNO (operands[0]) > 8)\n\
   && (REGNO (operands[1]) < 5 || REGNO (operands[1]) > 8)\n\
   && REGNO (operands[4]) == 5) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 9464 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_STRING && ! TARGET_POWER
   && INTVAL (operands[2]) > 8 && INTVAL (operands[2]) <= 16
   && (REGNO (operands[0]) < 5 || REGNO (operands[0]) > 8)
   && (REGNO (operands[1]) < 5 || REGNO (operands[1]) > 8)
   && REGNO (operands[4]) == 5) && 
#line 160 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_64BIT))
    ? (int) (
#line 9464 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_STRING && ! TARGET_POWER
   && INTVAL (operands[2]) > 8 && INTVAL (operands[2]) <= 16
   && (REGNO (operands[0]) < 5 || REGNO (operands[0]) > 8)
   && (REGNO (operands[1]) < 5 || REGNO (operands[1]) > 8)
   && REGNO (operands[4]) == 5) && 
#line 160 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_64BIT))
    : -1 },
#line 9141 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
  { "TARGET_STRING && !TARGET_POWER && XVECLEN (operands[0], 0) == 4",
    __builtin_constant_p 
#line 9141 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_STRING && !TARGET_POWER && XVECLEN (operands[0], 0) == 4)
    ? (int) 
#line 9141 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_STRING && !TARGET_POWER && XVECLEN (operands[0], 0) == 4)
    : -1 },
#line 7868 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
  { "(unsigned HOST_WIDE_INT) (INTVAL (operands[1]) + 0x8000) >= 0x10000\n\
   && (INTVAL (operands[1]) & 0xffff) != 0",
    __builtin_constant_p 
#line 7868 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
((unsigned HOST_WIDE_INT) (INTVAL (operands[1]) + 0x8000) >= 0x10000
   && (INTVAL (operands[1]) & 0xffff) != 0)
    ? (int) 
#line 7868 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
((unsigned HOST_WIDE_INT) (INTVAL (operands[1]) + 0x8000) >= 0x10000
   && (INTVAL (operands[1]) & 0xffff) != 0)
    : -1 },
#line 11041 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
  { "(INTVAL (operands[2]) & CALL_LONG) == 0",
    __builtin_constant_p 
#line 11041 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
((INTVAL (operands[2]) & CALL_LONG) == 0)
    ? (int) 
#line 11041 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
((INTVAL (operands[2]) & CALL_LONG) == 0)
    : -1 },
#line 301 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/darwin.md"
  { "(DEFAULT_ABI == ABI_DARWIN) && flag_pic && TARGET_64BIT",
    __builtin_constant_p 
#line 301 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/darwin.md"
((DEFAULT_ABI == ABI_DARWIN) && flag_pic && TARGET_64BIT)
    ? (int) 
#line 301 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/darwin.md"
((DEFAULT_ABI == ABI_DARWIN) && flag_pic && TARGET_64BIT)
    : -1 },
#line 279 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/darwin.md"
  { "(DEFAULT_ABI == ABI_DARWIN) && flag_pic",
    __builtin_constant_p 
#line 279 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/darwin.md"
((DEFAULT_ABI == ABI_DARWIN) && flag_pic)
    ? (int) 
#line 279 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/darwin.md"
((DEFAULT_ABI == ABI_DARWIN) && flag_pic)
    : -1 },
#line 7334 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
  { "TARGET_POWERPC64\n\
    && (fixed_regs[CR0_REGNO] || !logical_operand (operands[2], DImode))\n\
    && !mask_operand (operands[2], DImode)\n\
    && !mask64_operand (operands[2], DImode)",
    __builtin_constant_p 
#line 7334 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC64
    && (fixed_regs[CR0_REGNO] || !logical_operand (operands[2], DImode))
    && !mask_operand (operands[2], DImode)
    && !mask64_operand (operands[2], DImode))
    ? (int) 
#line 7334 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC64
    && (fixed_regs[CR0_REGNO] || !logical_operand (operands[2], DImode))
    && !mask_operand (operands[2], DImode)
    && !mask64_operand (operands[2], DImode))
    : -1 },
#line 11104 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
  { "TARGET_64BIT && (INTVAL (operands[3]) & CALL_LONG) == 0",
    __builtin_constant_p 
#line 11104 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_64BIT && (INTVAL (operands[3]) & CALL_LONG) == 0)
    ? (int) 
#line 11104 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_64BIT && (INTVAL (operands[3]) & CALL_LONG) == 0)
    : -1 },
#line 8111 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
  { "! TARGET_POWERPC64 && reload_completed\n\
   && ((GET_CODE (operands[0]) == REG && REGNO (operands[0]) <= 31)\n\
       || (GET_CODE (operands[0]) == SUBREG\n\
	   && GET_CODE (SUBREG_REG (operands[0])) == REG\n\
	   && REGNO (SUBREG_REG (operands[0])) <= 31))",
    __builtin_constant_p 
#line 8111 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(! TARGET_POWERPC64 && reload_completed
   && ((GET_CODE (operands[0]) == REG && REGNO (operands[0]) <= 31)
       || (GET_CODE (operands[0]) == SUBREG
	   && GET_CODE (SUBREG_REG (operands[0])) == REG
	   && REGNO (SUBREG_REG (operands[0])) <= 31)))
    ? (int) 
#line 8111 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(! TARGET_POWERPC64 && reload_completed
   && ((GET_CODE (operands[0]) == REG && REGNO (operands[0]) <= 31)
       || (GET_CODE (operands[0]) == SUBREG
	   && GET_CODE (SUBREG_REG (operands[0])) == REG
	   && REGNO (SUBREG_REG (operands[0])) <= 31)))
    : -1 },
#line 6066 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
  { "TARGET_POWERPC64 && TARGET_HARD_FLOAT && TARGET_FPRS",
    __builtin_constant_p 
#line 6066 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC64 && TARGET_HARD_FLOAT && TARGET_FPRS)
    ? (int) 
#line 6066 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC64 && TARGET_HARD_FLOAT && TARGET_FPRS)
    : -1 },
#line 234 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/altivec.md"
  { "TARGET_ALTIVEC && reload_completed",
    __builtin_constant_p 
#line 234 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/altivec.md"
(TARGET_ALTIVEC && reload_completed)
    ? (int) 
#line 234 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/altivec.md"
(TARGET_ALTIVEC && reload_completed)
    : -1 },
#line 3536 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
  { "TARGET_POWERPC && INTVAL(operands[1]) == ~INTVAL(operands[5])",
    __builtin_constant_p 
#line 3536 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC && INTVAL(operands[1]) == ~INTVAL(operands[5]))
    ? (int) 
#line 3536 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC && INTVAL(operands[1]) == ~INTVAL(operands[5]))
    : -1 },
#line 8374 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
  { "!TARGET_IEEEQUAD\n\
   && (TARGET_SOFT_FLOAT || !TARGET_FPRS) && TARGET_LONG_DOUBLE_128\n\
   && (gpc_reg_operand (operands[0], TFmode)\n\
       || gpc_reg_operand (operands[1], TFmode))",
    __builtin_constant_p 
#line 8374 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(!TARGET_IEEEQUAD
   && (TARGET_SOFT_FLOAT || !TARGET_FPRS) && TARGET_LONG_DOUBLE_128
   && (gpc_reg_operand (operands[0], TFmode)
       || gpc_reg_operand (operands[1], TFmode)))
    ? (int) 
#line 8374 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(!TARGET_IEEEQUAD
   && (TARGET_SOFT_FLOAT || !TARGET_FPRS) && TARGET_LONG_DOUBLE_128
   && (gpc_reg_operand (operands[0], TFmode)
       || gpc_reg_operand (operands[1], TFmode)))
    : -1 },
#line 1868 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
  { "TARGET_POWER || TARGET_ISEL",
    __builtin_constant_p 
#line 1868 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_POWER || TARGET_ISEL)
    ? (int) 
#line 1868 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_POWER || TARGET_ISEL)
    : -1 },
#line 10966 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
  { "! TARGET_64BIT && DEFAULT_ABI == ABI_DARWIN",
    __builtin_constant_p 
#line 10966 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(! TARGET_64BIT && DEFAULT_ABI == ABI_DARWIN)
    ? (int) 
#line 10966 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(! TARGET_64BIT && DEFAULT_ABI == ABI_DARWIN)
    : -1 },
#line 7843 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
  { "gpc_reg_operand (operands[0], SImode)\n\
   || gpc_reg_operand (operands[1], SImode)",
    __builtin_constant_p 
#line 7843 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(gpc_reg_operand (operands[0], SImode)
   || gpc_reg_operand (operands[1], SImode))
    ? (int) 
#line 7843 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(gpc_reg_operand (operands[0], SImode)
   || gpc_reg_operand (operands[1], SImode))
    : -1 },
#line 10021 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
  { "HAVE_AS_TLS && TARGET_64BIT",
    __builtin_constant_p 
#line 10021 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(HAVE_AS_TLS && TARGET_64BIT)
    ? (int) 
#line 10021 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(HAVE_AS_TLS && TARGET_64BIT)
    : -1 },
#line 2276 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/spe.md"
  { "(TARGET_E500_DOUBLE && V4HImode == DFmode) || (TARGET_SPE && V4HImode != DFmode)",
    __builtin_constant_p 
#line 2276 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/spe.md"
((TARGET_E500_DOUBLE && V4HImode == DFmode) || (TARGET_SPE && V4HImode != DFmode))
    ? (int) 
#line 2276 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/spe.md"
((TARGET_E500_DOUBLE && V4HImode == DFmode) || (TARGET_SPE && V4HImode != DFmode))
    : -1 },
#line 1877 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/altivec.md"
  { "TARGET_ALTIVEC && GET_MODE (operands[0]) == Pmode",
    __builtin_constant_p 
#line 1877 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/altivec.md"
(TARGET_ALTIVEC && GET_MODE (operands[0]) == Pmode)
    ? (int) 
#line 1877 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/altivec.md"
(TARGET_ALTIVEC && GET_MODE (operands[0]) == Pmode)
    : -1 },
#line 2183 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/spe.md"
  { "TARGET_SPE && INTVAL (operands[1]) >= 0 && INTVAL (operands[1]) <= 31",
    __builtin_constant_p 
#line 2183 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/spe.md"
(TARGET_SPE && INTVAL (operands[1]) >= 0 && INTVAL (operands[1]) <= 31)
    ? (int) 
#line 2183 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/spe.md"
(TARGET_SPE && INTVAL (operands[1]) >= 0 && INTVAL (operands[1]) <= 31)
    : -1 },
#line 2740 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/spe.md"
  { "TARGET_HARD_FLOAT && !TARGET_FPRS && flag_unsafe_math_optimizations",
    __builtin_constant_p 
#line 2740 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/spe.md"
(TARGET_HARD_FLOAT && !TARGET_FPRS && flag_unsafe_math_optimizations)
    ? (int) 
#line 2740 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/spe.md"
(TARGET_HARD_FLOAT && !TARGET_FPRS && flag_unsafe_math_optimizations)
    : -1 },
#line 4888 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
  { "! TARGET_POWER",
    __builtin_constant_p 
#line 4888 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(! TARGET_POWER)
    ? (int) 
#line 4888 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(! TARGET_POWER)
    : -1 },
#line 7149 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
  { "TARGET_POWERPC64 || TARGET_POWER",
    __builtin_constant_p 
#line 7149 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC64 || TARGET_POWER)
    ? (int) 
#line 7149 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC64 || TARGET_POWER)
    : -1 },
#line 11124 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
  { "TARGET_32BIT\n\
   && DEFAULT_ABI == ABI_AIX\n\
   && (INTVAL (operands[2]) & CALL_LONG) == 0",
    __builtin_constant_p 
#line 11124 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_32BIT
   && DEFAULT_ABI == ABI_AIX
   && (INTVAL (operands[2]) & CALL_LONG) == 0)
    ? (int) 
#line 11124 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_32BIT
   && DEFAULT_ABI == ABI_AIX
   && (INTVAL (operands[2]) & CALL_LONG) == 0)
    : -1 },
#line 11646 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
  { "peep2_reg_dead_p (3, operands[0])\n\
   && peep2_reg_dead_p (4, operands[4])",
    __builtin_constant_p 
#line 11646 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(peep2_reg_dead_p (3, operands[0])
   && peep2_reg_dead_p (4, operands[4]))
    ? (int) 
#line 11646 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(peep2_reg_dead_p (3, operands[0])
   && peep2_reg_dead_p (4, operands[4]))
    : -1 },
#line 2368 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/spe.md"
  { "TARGET_SPE\n\
   && (gpc_reg_operand (operands[0], V2SImode)\n\
       || gpc_reg_operand (operands[1], V2SImode))",
    __builtin_constant_p 
#line 2368 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/spe.md"
(TARGET_SPE
   && (gpc_reg_operand (operands[0], V2SImode)
       || gpc_reg_operand (operands[1], V2SImode)))
    ? (int) 
#line 2368 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/spe.md"
(TARGET_SPE
   && (gpc_reg_operand (operands[0], V2SImode)
       || gpc_reg_operand (operands[1], V2SImode)))
    : -1 },
  { "(!TARGET_IEEEQUAD && !TARGET_XL_COMPAT\n\
   && TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_LONG_DOUBLE_128) && ( reload_completed && REGNO (operands[0]) == REGNO (operands[1]))",
    __builtin_constant_p (
#line 8438 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(!TARGET_IEEEQUAD && !TARGET_XL_COMPAT
   && TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_LONG_DOUBLE_128) && 
#line 8443 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
( reload_completed && REGNO (operands[0]) == REGNO (operands[1])))
    ? (int) (
#line 8438 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(!TARGET_IEEEQUAD && !TARGET_XL_COMPAT
   && TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_LONG_DOUBLE_128) && 
#line 8443 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
( reload_completed && REGNO (operands[0]) == REGNO (operands[1])))
    : -1 },
#line 2402 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/spe.md"
  { "TARGET_SPE\n\
   && (gpc_reg_operand (operands[0], V1DImode)\n\
       || gpc_reg_operand (operands[1], V1DImode))",
    __builtin_constant_p 
#line 2402 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/spe.md"
(TARGET_SPE
   && (gpc_reg_operand (operands[0], V1DImode)
       || gpc_reg_operand (operands[1], V1DImode)))
    ? (int) 
#line 2402 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/spe.md"
(TARGET_SPE
   && (gpc_reg_operand (operands[0], V1DImode)
       || gpc_reg_operand (operands[1], V1DImode)))
    : -1 },
#line 8352 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
  { "!TARGET_IEEEQUAD && TARGET_LONG_DOUBLE_128",
    __builtin_constant_p 
#line 8352 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(!TARGET_IEEEQUAD && TARGET_LONG_DOUBLE_128)
    ? (int) 
#line 8352 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(!TARGET_IEEEQUAD && TARGET_LONG_DOUBLE_128)
    : -1 },
  { "(TARGET_POWERPC64 && TARGET_UPDATE) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 9574 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC64 && TARGET_UPDATE) && 
#line 160 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_64BIT))
    ? (int) (
#line 9574 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC64 && TARGET_UPDATE) && 
#line 160 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_64BIT))
    : -1 },
#line 164 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
  { "TARGET_HARD_FLOAT && (TARGET_FPRS || TARGET_E500_DOUBLE)",
    __builtin_constant_p 
#line 164 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_HARD_FLOAT && (TARGET_FPRS || TARGET_E500_DOUBLE))
    ? (int) 
#line 164 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_HARD_FLOAT && (TARGET_FPRS || TARGET_E500_DOUBLE))
    : -1 },
#line 919 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/spe.md"
  { "TARGET_SPE && INTVAL (operands[2]) >= 0 && INTVAL (operands[2]) <= 31",
    __builtin_constant_p 
#line 919 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/spe.md"
(TARGET_SPE && INTVAL (operands[2]) >= 0 && INTVAL (operands[2]) <= 31)
    ? (int) 
#line 919 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/spe.md"
(TARGET_SPE && INTVAL (operands[2]) >= 0 && INTVAL (operands[2]) <= 31)
    : -1 },
#line 10256 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
  { "(DEFAULT_ABI == ABI_V4 && flag_pic == 1)\n\
   || (TARGET_TOC && TARGET_MINIMAL_TOC)\n\
   || (DEFAULT_ABI == ABI_DARWIN && flag_pic)",
    __builtin_constant_p 
#line 10256 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
((DEFAULT_ABI == ABI_V4 && flag_pic == 1)
   || (TARGET_TOC && TARGET_MINIMAL_TOC)
   || (DEFAULT_ABI == ABI_DARWIN && flag_pic))
    ? (int) 
#line 10256 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
((DEFAULT_ABI == ABI_V4 && flag_pic == 1)
   || (TARGET_TOC && TARGET_MINIMAL_TOC)
   || (DEFAULT_ABI == ABI_DARWIN && flag_pic))
    : -1 },
#line 8311 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
  { "TARGET_POWERPC64 && TARGET_HARD_FLOAT && TARGET_FPRS\n\
   && (gpc_reg_operand (operands[0], DFmode)\n\
       || gpc_reg_operand (operands[1], DFmode))",
    __builtin_constant_p 
#line 8311 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC64 && TARGET_HARD_FLOAT && TARGET_FPRS
   && (gpc_reg_operand (operands[0], DFmode)
       || gpc_reg_operand (operands[1], DFmode)))
    ? (int) 
#line 8311 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC64 && TARGET_HARD_FLOAT && TARGET_FPRS
   && (gpc_reg_operand (operands[0], DFmode)
       || gpc_reg_operand (operands[1], DFmode)))
    : -1 },
#line 9504 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
  { "TARGET_STRING && ! TARGET_POWER && ! TARGET_POWERPC64\n\
   && INTVAL (operands[2]) > 4 && INTVAL (operands[2]) <= 8",
    __builtin_constant_p 
#line 9504 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_STRING && ! TARGET_POWER && ! TARGET_POWERPC64
   && INTVAL (operands[2]) > 4 && INTVAL (operands[2]) <= 8)
    ? (int) 
#line 9504 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_STRING && ! TARGET_POWER && ! TARGET_POWERPC64
   && INTVAL (operands[2]) > 4 && INTVAL (operands[2]) <= 8)
    : -1 },
#line 9445 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
  { "TARGET_STRING && TARGET_POWER\n\
   && INTVAL (operands[2]) > 8 && INTVAL (operands[2]) <= 16\n\
   && (REGNO (operands[0]) < 5 || REGNO (operands[0]) > 8)\n\
   && (REGNO (operands[1]) < 5 || REGNO (operands[1]) > 8)\n\
   && REGNO (operands[4]) == 5",
    __builtin_constant_p 
#line 9445 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_STRING && TARGET_POWER
   && INTVAL (operands[2]) > 8 && INTVAL (operands[2]) <= 16
   && (REGNO (operands[0]) < 5 || REGNO (operands[0]) > 8)
   && (REGNO (operands[1]) < 5 || REGNO (operands[1]) > 8)
   && REGNO (operands[4]) == 5)
    ? (int) 
#line 9445 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_STRING && TARGET_POWER
   && INTVAL (operands[2]) > 8 && INTVAL (operands[2]) <= 16
   && (REGNO (operands[0]) < 5 || REGNO (operands[0]) > 8)
   && (REGNO (operands[1]) < 5 || REGNO (operands[1]) > 8)
   && REGNO (operands[4]) == 5)
    : -1 },
#line 10178 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
  { "DEFAULT_ABI == ABI_AIX && TARGET_64BIT",
    __builtin_constant_p 
#line 10178 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(DEFAULT_ABI == ABI_AIX && TARGET_64BIT)
    ? (int) 
#line 10178 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(DEFAULT_ABI == ABI_AIX && TARGET_64BIT)
    : -1 },
#line 11767 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
  { "!TARGET_IEEEQUAD && TARGET_XL_COMPAT\n\
   && TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_LONG_DOUBLE_128",
    __builtin_constant_p 
#line 11767 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(!TARGET_IEEEQUAD && TARGET_XL_COMPAT
   && TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_LONG_DOUBLE_128)
    ? (int) 
#line 11767 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(!TARGET_IEEEQUAD && TARGET_XL_COMPAT
   && TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_LONG_DOUBLE_128)
    : -1 },
#line 9164 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
  { "TARGET_STRING && TARGET_POWER && XVECLEN (operands[0], 0) == 9",
    __builtin_constant_p 
#line 9164 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_STRING && TARGET_POWER && XVECLEN (operands[0], 0) == 9)
    ? (int) 
#line 9164 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_STRING && TARGET_POWER && XVECLEN (operands[0], 0) == 9)
    : -1 },
  { "(TARGET_STRING && ! TARGET_POWER\n\
   && INTVAL (operands[2]) > 16 && INTVAL (operands[2]) <= 32\n\
   && (REGNO (operands[0]) < 5 || REGNO (operands[0]) > 10)\n\
   && (REGNO (operands[1]) < 5 || REGNO (operands[1]) > 10)\n\
   && REGNO (operands[4]) == 5) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 9410 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_STRING && ! TARGET_POWER
   && INTVAL (operands[2]) > 16 && INTVAL (operands[2]) <= 32
   && (REGNO (operands[0]) < 5 || REGNO (operands[0]) > 10)
   && (REGNO (operands[1]) < 5 || REGNO (operands[1]) > 10)
   && REGNO (operands[4]) == 5) && 
#line 160 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_64BIT))
    ? (int) (
#line 9410 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_STRING && ! TARGET_POWER
   && INTVAL (operands[2]) > 16 && INTVAL (operands[2]) <= 32
   && (REGNO (operands[0]) < 5 || REGNO (operands[0]) > 10)
   && (REGNO (operands[1]) < 5 || REGNO (operands[1]) > 10)
   && REGNO (operands[4]) == 5) && 
#line 160 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_64BIT))
    : -1 },
#line 165 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
  { "!TARGET_IEEEQUAD\n\
   && TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_LONG_DOUBLE_128",
    __builtin_constant_p 
#line 165 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(!TARGET_IEEEQUAD
   && TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_LONG_DOUBLE_128)
    ? (int) 
#line 165 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(!TARGET_IEEEQUAD
   && TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_LONG_DOUBLE_128)
    : -1 },
#line 8333 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
  { "TARGET_POWERPC64 && (TARGET_SOFT_FLOAT || !TARGET_FPRS)\n\
   && (gpc_reg_operand (operands[0], DFmode)\n\
       || gpc_reg_operand (operands[1], DFmode))",
    __builtin_constant_p 
#line 8333 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC64 && (TARGET_SOFT_FLOAT || !TARGET_FPRS)
   && (gpc_reg_operand (operands[0], DFmode)
       || gpc_reg_operand (operands[1], DFmode)))
    ? (int) 
#line 8333 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC64 && (TARGET_SOFT_FLOAT || !TARGET_FPRS)
   && (gpc_reg_operand (operands[0], DFmode)
       || gpc_reg_operand (operands[1], DFmode)))
    : -1 },
#line 736 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
  { "TARGET_POWERPC && reload_completed",
    __builtin_constant_p 
#line 736 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC && reload_completed)
    ? (int) 
#line 736 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC && reload_completed)
    : -1 },
  { "(TARGET_POWERPC64 && TARGET_HARD_FLOAT && TARGET_FPRS) && ( 1)",
    __builtin_constant_p (
#line 5991 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC64 && TARGET_HARD_FLOAT && TARGET_FPRS) && 
#line 5993 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
( 1))
    ? (int) (
#line 5991 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC64 && TARGET_HARD_FLOAT && TARGET_FPRS) && 
#line 5993 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
( 1))
    : -1 },
#line 11995 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
  { "REGNO (operands[2]) != REGNO (operands[5])",
    __builtin_constant_p 
#line 11995 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(REGNO (operands[2]) != REGNO (operands[5]))
    ? (int) 
#line 11995 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(REGNO (operands[2]) != REGNO (operands[5]))
    : -1 },
#line 9221 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
  { "TARGET_STRING && TARGET_POWER && XVECLEN (operands[0], 0) == 6",
    __builtin_constant_p 
#line 9221 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_STRING && TARGET_POWER && XVECLEN (operands[0], 0) == 6)
    ? (int) 
#line 9221 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_STRING && TARGET_POWER && XVECLEN (operands[0], 0) == 6)
    : -1 },
#line 11749 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
  { "!TARGET_IEEEQUAD && !TARGET_XL_COMPAT\n\
   && TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_LONG_DOUBLE_128",
    __builtin_constant_p 
#line 11749 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(!TARGET_IEEEQUAD && !TARGET_XL_COMPAT
   && TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_LONG_DOUBLE_128)
    ? (int) 
#line 11749 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(!TARGET_IEEEQUAD && !TARGET_XL_COMPAT
   && TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_LONG_DOUBLE_128)
    : -1 },
  { "(DEFAULT_ABI == ABI_V4\n\
   || DEFAULT_ABI == ABI_DARWIN) && (TARGET_32BIT)",
    __builtin_constant_p (
#line 10827 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(DEFAULT_ABI == ABI_V4
   || DEFAULT_ABI == ABI_DARWIN) && 
#line 160 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_32BIT))
    ? (int) (
#line 10827 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(DEFAULT_ABI == ABI_V4
   || DEFAULT_ABI == ABI_DARWIN) && 
#line 160 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_32BIT))
    : -1 },
  { "((DEFAULT_ABI == ABI_DARWIN\n\
   || (DEFAULT_ABI == ABI_V4\n\
       && (INTVAL (operands[3]) & CALL_LONG) == 0))) && (TARGET_32BIT)",
    __builtin_constant_p (
#line 10847 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
((DEFAULT_ABI == ABI_DARWIN
   || (DEFAULT_ABI == ABI_V4
       && (INTVAL (operands[3]) & CALL_LONG) == 0))) && 
#line 160 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_32BIT))
    ? (int) (
#line 10847 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
((DEFAULT_ABI == ABI_DARWIN
   || (DEFAULT_ABI == ABI_V4
       && (INTVAL (operands[3]) & CALL_LONG) == 0))) && 
#line 160 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_32BIT))
    : -1 },
#line 4308 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
  { "includes_lshift_p (operands[2], operands[3])",
    __builtin_constant_p 
#line 4308 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(includes_lshift_p (operands[2], operands[3]))
    ? (int) 
#line 4308 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(includes_lshift_p (operands[2], operands[3]))
    : -1 },
#line 2373 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
  { "TARGET_POWERPC || (! TARGET_POWER && ! TARGET_POWERPC)",
    __builtin_constant_p 
#line 2373 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC || (! TARGET_POWER && ! TARGET_POWERPC))
    ? (int) 
#line 2373 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC || (! TARGET_POWER && ! TARGET_POWERPC))
    : -1 },
#line 4902 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
  { "! TARGET_POWER && reload_completed",
    __builtin_constant_p 
#line 4902 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(! TARGET_POWER && reload_completed)
    ? (int) 
#line 4902 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(! TARGET_POWER && reload_completed)
    : -1 },
#line 13492 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
  { "TARGET_32BIT && reload_completed",
    __builtin_constant_p 
#line 13492 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_32BIT && reload_completed)
    ? (int) 
#line 13492 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_32BIT && reload_completed)
    : -1 },
#line 8804 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
  { "TARGET_POWERPC64 && (gpc_reg_operand (operands[0], TImode)\n\
   || gpc_reg_operand (operands[1], TImode))",
    __builtin_constant_p 
#line 8804 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC64 && (gpc_reg_operand (operands[0], TImode)
   || gpc_reg_operand (operands[1], TImode)))
    ? (int) 
#line 8804 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC64 && (gpc_reg_operand (operands[0], TImode)
   || gpc_reg_operand (operands[1], TImode)))
    : -1 },
  { "((DEFAULT_ABI == ABI_DARWIN\n\
       || DEFAULT_ABI == ABI_V4)\n\
   && (INTVAL (operands[3]) & CALL_LONG) == 0) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 11232 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
((DEFAULT_ABI == ABI_DARWIN
       || DEFAULT_ABI == ABI_V4)
   && (INTVAL (operands[3]) & CALL_LONG) == 0) && 
#line 160 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_64BIT))
    ? (int) (
#line 11232 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
((DEFAULT_ABI == ABI_DARWIN
       || DEFAULT_ABI == ABI_V4)
   && (INTVAL (operands[3]) & CALL_LONG) == 0) && 
#line 160 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_64BIT))
    : -1 },
#line 8175 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
  { "! TARGET_POWERPC64 && TARGET_HARD_FLOAT && TARGET_FPRS\n\
   && (gpc_reg_operand (operands[0], DFmode)\n\
       || gpc_reg_operand (operands[1], DFmode))",
    __builtin_constant_p 
#line 8175 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(! TARGET_POWERPC64 && TARGET_HARD_FLOAT && TARGET_FPRS
   && (gpc_reg_operand (operands[0], DFmode)
       || gpc_reg_operand (operands[1], DFmode)))
    ? (int) 
#line 8175 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(! TARGET_POWERPC64 && TARGET_HARD_FLOAT && TARGET_FPRS
   && (gpc_reg_operand (operands[0], DFmode)
       || gpc_reg_operand (operands[1], DFmode)))
    : -1 },
#line 2276 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/spe.md"
  { "(TARGET_E500_DOUBLE && V2SImode == DFmode) || (TARGET_SPE && V2SImode != DFmode)",
    __builtin_constant_p 
#line 2276 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/spe.md"
((TARGET_E500_DOUBLE && V2SImode == DFmode) || (TARGET_SPE && V2SImode != DFmode))
    ? (int) 
#line 2276 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/spe.md"
((TARGET_E500_DOUBLE && V2SImode == DFmode) || (TARGET_SPE && V2SImode != DFmode))
    : -1 },
#line 2336 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/altivec.md"
  { "TARGET_ALTIVEC",
    __builtin_constant_p 
#line 2336 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/altivec.md"
(TARGET_ALTIVEC)
    ? (int) 
#line 2336 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/altivec.md"
(TARGET_ALTIVEC)
    : -1 },
#line 8773 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
  { "! TARGET_POWER && ! TARGET_POWERPC64\n\
   && (gpc_reg_operand (operands[0], TImode) || gpc_reg_operand (operands[1], TImode))",
    __builtin_constant_p 
#line 8773 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(! TARGET_POWER && ! TARGET_POWERPC64
   && (gpc_reg_operand (operands[0], TImode) || gpc_reg_operand (operands[1], TImode)))
    ? (int) 
#line 8773 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(! TARGET_POWER && ! TARGET_POWERPC64
   && (gpc_reg_operand (operands[0], TImode) || gpc_reg_operand (operands[1], TImode)))
    : -1 },
#line 163 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
  { "TARGET_HARD_FLOAT",
    __builtin_constant_p 
#line 163 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_HARD_FLOAT)
    ? (int) 
#line 163 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_HARD_FLOAT)
    : -1 },
  { "((DEFAULT_ABI == ABI_DARWIN\n\
   || (DEFAULT_ABI == ABI_V4\n\
       && (INTVAL (operands[2]) & CALL_LONG) == 0))) && (TARGET_32BIT)",
    __builtin_constant_p (
#line 10776 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
((DEFAULT_ABI == ABI_DARWIN
   || (DEFAULT_ABI == ABI_V4
       && (INTVAL (operands[2]) & CALL_LONG) == 0))) && 
#line 160 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_32BIT))
    ? (int) (
#line 10776 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
((DEFAULT_ABI == ABI_DARWIN
   || (DEFAULT_ABI == ABI_V4
       && (INTVAL (operands[2]) & CALL_LONG) == 0))) && 
#line 160 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_32BIT))
    : -1 },
#line 9518 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
  { "TARGET_STRING",
    __builtin_constant_p 
#line 9518 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_STRING)
    ? (int) 
#line 9518 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_STRING)
    : -1 },
#line 12202 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
  { "TARGET_32BIT && optimize_size",
    __builtin_constant_p 
#line 12202 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_32BIT && optimize_size)
    ? (int) 
#line 12202 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_32BIT && optimize_size)
    : -1 },
#line 5269 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
  { "TARGET_PPC_GFXOPT && TARGET_HARD_FLOAT && TARGET_FPRS\n\
   && !HONOR_NANS (DFmode) && !HONOR_SIGNED_ZEROS (DFmode)",
    __builtin_constant_p 
#line 5269 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_PPC_GFXOPT && TARGET_HARD_FLOAT && TARGET_FPRS
   && !HONOR_NANS (DFmode) && !HONOR_SIGNED_ZEROS (DFmode))
    ? (int) 
#line 5269 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_PPC_GFXOPT && TARGET_HARD_FLOAT && TARGET_FPRS
   && !HONOR_NANS (DFmode) && !HONOR_SIGNED_ZEROS (DFmode))
    : -1 },
  { "(TARGET_32BIT) && ( !reg_overlap_mentioned_p (operands[0], operands[3]))",
    __builtin_constant_p (
#line 160 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_32BIT) && 
#line 13665 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
( !reg_overlap_mentioned_p (operands[0], operands[3])))
    ? (int) (
#line 160 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_32BIT) && 
#line 13665 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
( !reg_overlap_mentioned_p (operands[0], operands[3])))
    : -1 },
#line 2015 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
  { "! TARGET_POWER && ! TARGET_ISEL",
    __builtin_constant_p 
#line 2015 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(! TARGET_POWER && ! TARGET_ISEL)
    ? (int) 
#line 2015 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(! TARGET_POWER && ! TARGET_ISEL)
    : -1 },
#line 14336 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
  { "TARGET_MULTIPLE",
    __builtin_constant_p 
#line 14336 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_MULTIPLE)
    ? (int) 
#line 14336 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_MULTIPLE)
    : -1 },
#line 2276 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/spe.md"
  { "(TARGET_E500_DOUBLE && V2SFmode == DFmode) || (TARGET_SPE && V2SFmode != DFmode)",
    __builtin_constant_p 
#line 2276 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/spe.md"
((TARGET_E500_DOUBLE && V2SFmode == DFmode) || (TARGET_SPE && V2SFmode != DFmode))
    ? (int) 
#line 2276 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/spe.md"
((TARGET_E500_DOUBLE && V2SFmode == DFmode) || (TARGET_SPE && V2SFmode != DFmode))
    : -1 },
#line 177 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/altivec.md"
  { "TARGET_ALTIVEC \n\
   && (register_operand (operands[0], V4SFmode) \n\
       || register_operand (operands[1], V4SFmode))",
    __builtin_constant_p 
#line 177 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/altivec.md"
(TARGET_ALTIVEC 
   && (register_operand (operands[0], V4SFmode) 
       || register_operand (operands[1], V4SFmode)))
    ? (int) 
#line 177 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/altivec.md"
(TARGET_ALTIVEC 
   && (register_operand (operands[0], V4SFmode) 
       || register_operand (operands[1], V4SFmode)))
    : -1 },
#line 2388 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/spe.md"
  { "TARGET_SPE && reload_completed",
    __builtin_constant_p 
#line 2388 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/spe.md"
(TARGET_SPE && reload_completed)
    ? (int) 
#line 2388 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/spe.md"
(TARGET_SPE && reload_completed)
    : -1 },
  { "(TARGET_STRING && ! TARGET_POWER\n\
   && INTVAL (operands[2]) > 8 && INTVAL (operands[2]) <= 16\n\
   && (REGNO (operands[0]) < 5 || REGNO (operands[0]) > 8)\n\
   && (REGNO (operands[1]) < 5 || REGNO (operands[1]) > 8)\n\
   && REGNO (operands[4]) == 5) && (TARGET_32BIT)",
    __builtin_constant_p (
#line 9464 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_STRING && ! TARGET_POWER
   && INTVAL (operands[2]) > 8 && INTVAL (operands[2]) <= 16
   && (REGNO (operands[0]) < 5 || REGNO (operands[0]) > 8)
   && (REGNO (operands[1]) < 5 || REGNO (operands[1]) > 8)
   && REGNO (operands[4]) == 5) && 
#line 160 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_32BIT))
    ? (int) (
#line 9464 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_STRING && ! TARGET_POWER
   && INTVAL (operands[2]) > 8 && INTVAL (operands[2]) <= 16
   && (REGNO (operands[0]) < 5 || REGNO (operands[0]) > 8)
   && (REGNO (operands[1]) < 5 || REGNO (operands[1]) > 8)
   && REGNO (operands[4]) == 5) && 
#line 160 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_32BIT))
    : -1 },
#line 136 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/darwin.md"
  { "TARGET_MACHO && TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_64BIT",
    __builtin_constant_p 
#line 136 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/darwin.md"
(TARGET_MACHO && TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_64BIT)
    ? (int) 
#line 136 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/darwin.md"
(TARGET_MACHO && TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_64BIT)
    : -1 },
#line 2219 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/spe.md"
  { "TARGET_E500_DOUBLE",
    __builtin_constant_p 
#line 2219 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/spe.md"
(TARGET_E500_DOUBLE)
    ? (int) 
#line 2219 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/spe.md"
(TARGET_E500_DOUBLE)
    : -1 },
#line 13525 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
  { "TARGET_64BIT && reload_completed",
    __builtin_constant_p 
#line 13525 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_64BIT && reload_completed)
    ? (int) 
#line 13525 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_64BIT && reload_completed)
    : -1 },
#line 9077 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
  { "TARGET_STRING && !TARGET_POWER && XVECLEN (operands[0], 0) == 8",
    __builtin_constant_p 
#line 9077 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_STRING && !TARGET_POWER && XVECLEN (operands[0], 0) == 8)
    ? (int) 
#line 9077 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_STRING && !TARGET_POWER && XVECLEN (operands[0], 0) == 8)
    : -1 },
#line 9249 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
  { "TARGET_STRING && TARGET_POWER && XVECLEN (operands[0], 0) == 4",
    __builtin_constant_p 
#line 9249 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_STRING && TARGET_POWER && XVECLEN (operands[0], 0) == 4)
    ? (int) 
#line 9249 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_STRING && TARGET_POWER && XVECLEN (operands[0], 0) == 4)
    : -1 },
#line 313 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/darwin.md"
  { "DEFAULT_ABI == ABI_DARWIN",
    __builtin_constant_p 
#line 313 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/darwin.md"
(DEFAULT_ABI == ABI_DARWIN)
    ? (int) 
#line 313 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/darwin.md"
(DEFAULT_ABI == ABI_DARWIN)
    : -1 },
#line 8361 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
  { "!TARGET_IEEEQUAD\n\
   && TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_LONG_DOUBLE_128\n\
   && (gpc_reg_operand (operands[0], TFmode)\n\
       || gpc_reg_operand (operands[1], TFmode))",
    __builtin_constant_p 
#line 8361 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(!TARGET_IEEEQUAD
   && TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_LONG_DOUBLE_128
   && (gpc_reg_operand (operands[0], TFmode)
       || gpc_reg_operand (operands[1], TFmode)))
    ? (int) 
#line 8361 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(!TARGET_IEEEQUAD
   && TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_LONG_DOUBLE_128
   && (gpc_reg_operand (operands[0], TFmode)
       || gpc_reg_operand (operands[1], TFmode)))
    : -1 },
  { "(TARGET_STRING && ! TARGET_POWER\n\
   && INTVAL (operands[2]) > 0 && INTVAL (operands[2]) <= 4) && (TARGET_32BIT)",
    __builtin_constant_p (
#line 9541 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_STRING && ! TARGET_POWER
   && INTVAL (operands[2]) > 0 && INTVAL (operands[2]) <= 4) && 
#line 160 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_32BIT))
    ? (int) (
#line 9541 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_STRING && ! TARGET_POWER
   && INTVAL (operands[2]) > 0 && INTVAL (operands[2]) <= 4) && 
#line 160 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_32BIT))
    : -1 },
#line 8645 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
  { "TARGET_POWERPC64\n\
   && (gpc_reg_operand (operands[0], DImode)\n\
       || gpc_reg_operand (operands[1], DImode))",
    __builtin_constant_p 
#line 8645 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC64
   && (gpc_reg_operand (operands[0], DImode)
       || gpc_reg_operand (operands[1], DImode)))
    ? (int) 
#line 8645 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC64
   && (gpc_reg_operand (operands[0], DImode)
       || gpc_reg_operand (operands[1], DImode)))
    : -1 },
#line 2792 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/spe.md"
  { "TARGET_HARD_FLOAT && TARGET_E500_DOUBLE && !flag_unsafe_math_optimizations",
    __builtin_constant_p 
#line 2792 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/spe.md"
(TARGET_HARD_FLOAT && TARGET_E500_DOUBLE && !flag_unsafe_math_optimizations)
    ? (int) 
#line 2792 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/spe.md"
(TARGET_HARD_FLOAT && TARGET_E500_DOUBLE && !flag_unsafe_math_optimizations)
    : -1 },
  { "(TARGET_POWERPC64 && TARGET_HARD_FLOAT && TARGET_FPRS) && ( reload_completed)",
    __builtin_constant_p (
#line 6032 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC64 && TARGET_HARD_FLOAT && TARGET_FPRS) && 
#line 6034 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
( reload_completed))
    ? (int) (
#line 6032 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC64 && TARGET_HARD_FLOAT && TARGET_FPRS) && 
#line 6034 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
( reload_completed))
    : -1 },
#line 5095 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
  { "TARGET_POWERPC && TARGET_HARD_FLOAT && TARGET_FPRS",
    __builtin_constant_p 
#line 5095 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC && TARGET_HARD_FLOAT && TARGET_FPRS)
    ? (int) 
#line 5095 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC && TARGET_HARD_FLOAT && TARGET_FPRS)
    : -1 },
#line 2812 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/spe.md"
  { "TARGET_E500",
    __builtin_constant_p 
#line 2812 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/spe.md"
(TARGET_E500)
    ? (int) 
#line 2812 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/spe.md"
(TARGET_E500)
    : -1 },
#line 9491 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
  { "TARGET_STRING && TARGET_POWER && ! TARGET_POWERPC64\n\
   && INTVAL (operands[2]) > 4 && INTVAL (operands[2]) <= 8",
    __builtin_constant_p 
#line 9491 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_STRING && TARGET_POWER && ! TARGET_POWERPC64
   && INTVAL (operands[2]) > 4 && INTVAL (operands[2]) <= 8)
    ? (int) 
#line 9491 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_STRING && TARGET_POWER && ! TARGET_POWERPC64
   && INTVAL (operands[2]) > 4 && INTVAL (operands[2]) <= 8)
    : -1 },
#line 4490 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
  { "! TARGET_POWER && TARGET_32BIT && reload_completed",
    __builtin_constant_p 
#line 4490 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(! TARGET_POWER && TARGET_32BIT && reload_completed)
    ? (int) 
#line 4490 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(! TARGET_POWER && TARGET_32BIT && reload_completed)
    : -1 },
#line 8613 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
  { "! TARGET_POWERPC64 && reload_completed",
    __builtin_constant_p 
#line 8613 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(! TARGET_POWERPC64 && reload_completed)
    ? (int) 
#line 8613 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(! TARGET_POWERPC64 && reload_completed)
    : -1 },
  { "(!TARGET_POWER && optimize_size) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 12074 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(!TARGET_POWER && optimize_size) && 
#line 160 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_64BIT))
    ? (int) (
#line 12074 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(!TARGET_POWER && optimize_size) && 
#line 160 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_64BIT))
    : -1 },
#line 766 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
  { "! TARGET_POWER && ! TARGET_POWERPC",
    __builtin_constant_p 
#line 766 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(! TARGET_POWER && ! TARGET_POWERPC)
    ? (int) 
#line 766 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(! TARGET_POWER && ! TARGET_POWERPC)
    : -1 },
#line 8597 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
  { "! TARGET_POWERPC64\n\
   && (gpc_reg_operand (operands[0], DImode)\n\
       || gpc_reg_operand (operands[1], DImode))",
    __builtin_constant_p 
#line 8597 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(! TARGET_POWERPC64
   && (gpc_reg_operand (operands[0], DImode)
       || gpc_reg_operand (operands[1], DImode)))
    ? (int) 
#line 8597 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(! TARGET_POWERPC64
   && (gpc_reg_operand (operands[0], DImode)
       || gpc_reg_operand (operands[1], DImode)))
    : -1 },
#line 8670 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
  { "HOST_BITS_PER_WIDE_INT == 32 && TARGET_POWERPC64\n\
   && GET_CODE (operands[1]) == CONST_DOUBLE\n\
   && num_insns_constant (operands[1], DImode) == 1",
    __builtin_constant_p 
#line 8670 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(HOST_BITS_PER_WIDE_INT == 32 && TARGET_POWERPC64
   && GET_CODE (operands[1]) == CONST_DOUBLE
   && num_insns_constant (operands[1], DImode) == 1)
    ? (int) 
#line 8670 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(HOST_BITS_PER_WIDE_INT == 32 && TARGET_POWERPC64
   && GET_CODE (operands[1]) == CONST_DOUBLE
   && num_insns_constant (operands[1], DImode) == 1)
    : -1 },
#line 12279 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
  { "! TARGET_POWER && TARGET_32BIT && !TARGET_ISEL",
    __builtin_constant_p 
#line 12279 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(! TARGET_POWER && TARGET_32BIT && !TARGET_ISEL)
    ? (int) 
#line 12279 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(! TARGET_POWER && TARGET_32BIT && !TARGET_ISEL)
    : -1 },
#line 7176 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
  { "TARGET_64BIT ",
    __builtin_constant_p 
#line 7176 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_64BIT )
    ? (int) 
#line 7176 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_64BIT )
    : -1 },
#line 8634 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
  { "reload_completed && !TARGET_POWERPC64\n\
   && gpr_or_gpr_p (operands[0], operands[1])",
    __builtin_constant_p 
#line 8634 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(reload_completed && !TARGET_POWERPC64
   && gpr_or_gpr_p (operands[0], operands[1]))
    ? (int) 
#line 8634 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(reload_completed && !TARGET_POWERPC64
   && gpr_or_gpr_p (operands[0], operands[1]))
    : -1 },
#line 5661 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
  { "TARGET_HARD_FLOAT && TARGET_FPRS",
    __builtin_constant_p 
#line 5661 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_HARD_FLOAT && TARGET_FPRS)
    ? (int) 
#line 5661 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_HARD_FLOAT && TARGET_FPRS)
    : -1 },
#line 7059 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
  { "TARGET_POWERPC64 && reload_completed\n\
   && includes_rldic_lshift_p (operands[2], operands[3])",
    __builtin_constant_p 
#line 7059 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC64 && reload_completed
   && includes_rldic_lshift_p (operands[2], operands[3]))
    ? (int) 
#line 7059 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC64 && reload_completed
   && includes_rldic_lshift_p (operands[2], operands[3]))
    : -1 },
#line 7230 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
  { "WORDS_BIG_ENDIAN",
    __builtin_constant_p 
#line 7230 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(WORDS_BIG_ENDIAN)
    ? (int) 
#line 7230 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(WORDS_BIG_ENDIAN)
    : -1 },
#line 8998 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
  { "TARGET_STRING && !TARGET_POWERPC64",
    __builtin_constant_p 
#line 8998 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_STRING && !TARGET_POWERPC64)
    ? (int) 
#line 8998 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_STRING && !TARGET_POWERPC64)
    : -1 },
#line 7450 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
  { "TARGET_64BIT && reload_completed\n\
    && (fixed_regs[CR0_REGNO] || !logical_operand (operands[2], DImode))\n\
    && !mask_operand (operands[2], DImode)\n\
    && !mask64_operand (operands[2], DImode)",
    __builtin_constant_p 
#line 7450 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_64BIT && reload_completed
    && (fixed_regs[CR0_REGNO] || !logical_operand (operands[2], DImode))
    && !mask_operand (operands[2], DImode)
    && !mask64_operand (operands[2], DImode))
    ? (int) 
#line 7450 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_64BIT && reload_completed
    && (fixed_regs[CR0_REGNO] || !logical_operand (operands[2], DImode))
    && !mask_operand (operands[2], DImode)
    && !mask64_operand (operands[2], DImode))
    : -1 },
#line 12227 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
  { "TARGET_32BIT && optimize_size && reload_completed",
    __builtin_constant_p 
#line 12227 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_32BIT && optimize_size && reload_completed)
    ? (int) 
#line 12227 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_32BIT && optimize_size && reload_completed)
    : -1 },
#line 6407 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
  { "TARGET_32BIT && !TARGET_POWERPC64 && !TARGET_POWER && WORDS_BIG_ENDIAN",
    __builtin_constant_p 
#line 6407 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_32BIT && !TARGET_POWERPC64 && !TARGET_POWER && WORDS_BIG_ENDIAN)
    ? (int) 
#line 6407 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_32BIT && !TARGET_POWERPC64 && !TARGET_POWER && WORDS_BIG_ENDIAN)
    : -1 },
#line 9481 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
  { "TARGET_STRING && ! TARGET_POWERPC64",
    __builtin_constant_p 
#line 9481 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_STRING && ! TARGET_POWERPC64)
    ? (int) 
#line 9481 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_STRING && ! TARGET_POWERPC64)
    : -1 },
#line 8957 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
  { "TARGET_STRING && XVECLEN (operands[0], 0) == 5",
    __builtin_constant_p 
#line 8957 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_STRING && XVECLEN (operands[0], 0) == 5)
    ? (int) 
#line 8957 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_STRING && XVECLEN (operands[0], 0) == 5)
    : -1 },
#line 10013 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
  { "HAVE_AS_TLS && !TARGET_64BIT",
    __builtin_constant_p 
#line 10013 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(HAVE_AS_TLS && !TARGET_64BIT)
    ? (int) 
#line 10013 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(HAVE_AS_TLS && !TARGET_64BIT)
    : -1 },
#line 13598 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
  { "TARGET_POWER && reload_completed",
    __builtin_constant_p 
#line 13598 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_POWER && reload_completed)
    ? (int) 
#line 13598 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_POWER && reload_completed)
    : -1 },
#line 5475 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
  { "TARGET_POPCNTB && flag_finite_math_only",
    __builtin_constant_p 
#line 5475 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_POPCNTB && flag_finite_math_only)
    ? (int) 
#line 5475 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_POPCNTB && flag_finite_math_only)
    : -1 },
  { "(TARGET_ISEL) && ( reload_completed)",
    __builtin_constant_p (
#line 1997 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_ISEL) && 
#line 1999 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
( reload_completed))
    ? (int) (
#line 1997 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_ISEL) && 
#line 1999 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
( reload_completed))
    : -1 },
#line 9113 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
  { "TARGET_STRING && !TARGET_POWER && XVECLEN (operands[0], 0) == 6",
    __builtin_constant_p 
#line 9113 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_STRING && !TARGET_POWER && XVECLEN (operands[0], 0) == 6)
    ? (int) 
#line 9113 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_STRING && !TARGET_POWER && XVECLEN (operands[0], 0) == 6)
    : -1 },
  { "(!TARGET_IEEEQUAD\n\
   && TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_LONG_DOUBLE_128\n\
   && (gpc_reg_operand (operands[0], TFmode)\n\
       || gpc_reg_operand (operands[1], TFmode))) && ( reload_completed)",
    __builtin_constant_p (
#line 8361 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(!TARGET_IEEEQUAD
   && TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_LONG_DOUBLE_128
   && (gpc_reg_operand (operands[0], TFmode)
       || gpc_reg_operand (operands[1], TFmode))) && 
#line 8366 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
( reload_completed))
    ? (int) (
#line 8361 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(!TARGET_IEEEQUAD
   && TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_LONG_DOUBLE_128
   && (gpc_reg_operand (operands[0], TFmode)
       || gpc_reg_operand (operands[1], TFmode))) && 
#line 8366 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
( reload_completed))
    : -1 },
#line 10728 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
  { "TARGET_64BIT && DEFAULT_ABI == ABI_AIX",
    __builtin_constant_p 
#line 10728 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_64BIT && DEFAULT_ABI == ABI_AIX)
    ? (int) 
#line 10728 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_64BIT && DEFAULT_ABI == ABI_AIX)
    : -1 },
#line 5953 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
  { "TARGET_PPC_GFXOPT",
    __builtin_constant_p 
#line 5953 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_PPC_GFXOPT)
    ? (int) 
#line 5953 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_PPC_GFXOPT)
    : -1 },
#line 11137 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
  { "TARGET_64BIT\n\
   && DEFAULT_ABI == ABI_AIX\n\
   && (INTVAL (operands[2]) & CALL_LONG) == 0",
    __builtin_constant_p 
#line 11137 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_64BIT
   && DEFAULT_ABI == ABI_AIX
   && (INTVAL (operands[2]) & CALL_LONG) == 0)
    ? (int) 
#line 11137 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_64BIT
   && DEFAULT_ABI == ABI_AIX
   && (INTVAL (operands[2]) & CALL_LONG) == 0)
    : -1 },
#line 14196 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
  { "TARGET_MFCRF",
    __builtin_constant_p 
#line 14196 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_MFCRF)
    ? (int) 
#line 14196 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_MFCRF)
    : -1 },
#line 4625 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
  { "includes_rshift_p (operands[2], GEN_INT (255))",
    __builtin_constant_p 
#line 4625 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(includes_rshift_p (operands[2], GEN_INT (255)))
    ? (int) 
#line 4625 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(includes_rshift_p (operands[2], GEN_INT (255)))
    : -1 },
#line 14280 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
  { "TARGET_SCHED_PROLOG",
    __builtin_constant_p 
#line 14280 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_SCHED_PROLOG)
    ? (int) 
#line 14280 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_SCHED_PROLOG)
    : -1 },
#line 462 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/darwin.md"
  { "TARGET_64BIT && DEFAULT_ABI == ABI_DARWIN",
    __builtin_constant_p 
#line 462 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/darwin.md"
(TARGET_64BIT && DEFAULT_ABI == ABI_DARWIN)
    ? (int) 
#line 462 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/darwin.md"
(TARGET_64BIT && DEFAULT_ABI == ABI_DARWIN)
    : -1 },
#line 160 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
  { "TARGET_32BIT",
    __builtin_constant_p 
#line 160 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_32BIT)
    ? (int) 
#line 160 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_32BIT)
    : -1 },
#line 9056 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
  { "TARGET_STRING && !TARGET_POWER && XVECLEN (operands[0], 0) == 9",
    __builtin_constant_p 
#line 9056 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_STRING && !TARGET_POWER && XVECLEN (operands[0], 0) == 9)
    ? (int) 
#line 9056 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_STRING && !TARGET_POWER && XVECLEN (operands[0], 0) == 9)
    : -1 },
#line 10208 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
  { "TARGET_ELF && DEFAULT_ABI != ABI_AIX\n\
   && (flag_pic == 2 || (flag_pic && TARGET_SECURE_PLT))",
    __builtin_constant_p 
#line 10208 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_ELF && DEFAULT_ABI != ABI_AIX
   && (flag_pic == 2 || (flag_pic && TARGET_SECURE_PLT)))
    ? (int) 
#line 10208 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_ELF && DEFAULT_ABI != ABI_AIX
   && (flag_pic == 2 || (flag_pic && TARGET_SECURE_PLT)))
    : -1 },
#line 3494 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
  { "INTVAL (operands[4]) >= INTVAL (operands[1])",
    __builtin_constant_p 
#line 3494 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(INTVAL (operands[4]) >= INTVAL (operands[1]))
    ? (int) 
#line 3494 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(INTVAL (operands[4]) >= INTVAL (operands[1]))
    : -1 },
#line 1490 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
  { "TARGET_MACHO && !TARGET_64BIT",
    __builtin_constant_p 
#line 1490 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_MACHO && !TARGET_64BIT)
    ? (int) 
#line 1490 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_MACHO && !TARGET_64BIT)
    : -1 },
#line 1709 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
  { "! TARGET_POWERPC",
    __builtin_constant_p 
#line 1709 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(! TARGET_POWERPC)
    ? (int) 
#line 1709 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(! TARGET_POWERPC)
    : -1 },
#line 9831 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
  { "!(TARGET_E500_DOUBLE && GET_CODE (operands[2]) == SUBREG)\n\
   && peep2_reg_dead_p (2, operands[0])",
    __builtin_constant_p 
#line 9831 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(!(TARGET_E500_DOUBLE && GET_CODE (operands[2]) == SUBREG)
   && peep2_reg_dead_p (2, operands[0]))
    ? (int) 
#line 9831 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(!(TARGET_E500_DOUBLE && GET_CODE (operands[2]) == SUBREG)
   && peep2_reg_dead_p (2, operands[0]))
    : -1 },
#line 5544 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
  { "TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_FUSED_MADD\n\
   && HONOR_SIGNED_ZEROS (DFmode)",
    __builtin_constant_p 
#line 5544 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_FUSED_MADD
   && HONOR_SIGNED_ZEROS (DFmode))
    ? (int) 
#line 5544 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_FUSED_MADD
   && HONOR_SIGNED_ZEROS (DFmode))
    : -1 },
#line 6208 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
  { "TARGET_POWERPC && ! TARGET_POWERPC64",
    __builtin_constant_p 
#line 6208 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC && ! TARGET_POWERPC64)
    ? (int) 
#line 6208 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC && ! TARGET_POWERPC64)
    : -1 },
#line 6418 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
  { "TARGET_32BIT && !TARGET_POWERPC64",
    __builtin_constant_p 
#line 6418 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_32BIT && !TARGET_POWERPC64)
    ? (int) 
#line 6418 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_32BIT && !TARGET_POWERPC64)
    : -1 },
#line 5103 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
  { "! TARGET_POWERPC && TARGET_HARD_FLOAT && TARGET_FPRS",
    __builtin_constant_p 
#line 5103 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(! TARGET_POWERPC && TARGET_HARD_FLOAT && TARGET_FPRS)
    ? (int) 
#line 5103 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(! TARGET_POWERPC && TARGET_HARD_FLOAT && TARGET_FPRS)
    : -1 },
#line 3589 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
  { "TARGET_POWERPC64\n\
   && insvdi_rshift_rlwimi_p (operands[1], operands[2], operands[4])",
    __builtin_constant_p 
#line 3589 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC64
   && insvdi_rshift_rlwimi_p (operands[1], operands[2], operands[4]))
    ? (int) 
#line 3589 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC64
   && insvdi_rshift_rlwimi_p (operands[1], operands[2], operands[4]))
    : -1 },
#line 9810 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
  { "TARGET_POWER2\n\
   && TARGET_HARD_FLOAT && TARGET_FPRS\n\
   && registers_ok_for_quad_peep (operands[1], operands[3])\n\
   && mems_ok_for_quad_peep (operands[0], operands[2])",
    __builtin_constant_p 
#line 9810 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_POWER2
   && TARGET_HARD_FLOAT && TARGET_FPRS
   && registers_ok_for_quad_peep (operands[1], operands[3])
   && mems_ok_for_quad_peep (operands[0], operands[2]))
    ? (int) 
#line 9810 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_POWER2
   && TARGET_HARD_FLOAT && TARGET_FPRS
   && registers_ok_for_quad_peep (operands[1], operands[3])
   && mems_ok_for_quad_peep (operands[0], operands[2]))
    : -1 },
  { "(reload_completed) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 14114 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(reload_completed) && 
#line 160 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_64BIT))
    ? (int) (
#line 14114 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(reload_completed) && 
#line 160 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_64BIT))
    : -1 },
#line 11061 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
  { "TARGET_64BIT && (INTVAL (operands[2]) & CALL_LONG) == 0",
    __builtin_constant_p 
#line 11061 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_64BIT && (INTVAL (operands[2]) & CALL_LONG) == 0)
    ? (int) 
#line 11061 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_64BIT && (INTVAL (operands[2]) & CALL_LONG) == 0)
    : -1 },
#line 2730 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/spe.md"
  { "TARGET_HARD_FLOAT && !TARGET_FPRS && !flag_unsafe_math_optimizations",
    __builtin_constant_p 
#line 2730 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/spe.md"
(TARGET_HARD_FLOAT && !TARGET_FPRS && !flag_unsafe_math_optimizations)
    ? (int) 
#line 2730 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/spe.md"
(TARGET_HARD_FLOAT && !TARGET_FPRS && !flag_unsafe_math_optimizations)
    : -1 },
#line 6345 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
  { "TARGET_POWERPC && TARGET_POWER",
    __builtin_constant_p 
#line 6345 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC && TARGET_POWER)
    ? (int) 
#line 6345 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC && TARGET_POWER)
    : -1 },
  { "(!TARGET_IEEEQUAD\n\
   && TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_LONG_DOUBLE_128) && ( (!no_new_pseudos || offsettable_nonstrict_memref_p (operands[5])))",
    __builtin_constant_p (
#line 8521 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(!TARGET_IEEEQUAD
   && TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_LONG_DOUBLE_128) && 
#line 8524 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
( (!no_new_pseudos || offsettable_nonstrict_memref_p (operands[5]))))
    ? (int) (
#line 8521 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(!TARGET_IEEEQUAD
   && TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_LONG_DOUBLE_128) && 
#line 8524 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
( (!no_new_pseudos || offsettable_nonstrict_memref_p (operands[5]))))
    : -1 },
  { "(!TARGET_IEEEQUAD\n\
   && TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_LONG_DOUBLE_128) && ( reload_completed)",
    __builtin_constant_p (
#line 8463 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(!TARGET_IEEEQUAD
   && TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_LONG_DOUBLE_128) && 
#line 8466 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
( reload_completed))
    ? (int) (
#line 8463 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(!TARGET_IEEEQUAD
   && TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_LONG_DOUBLE_128) && 
#line 8466 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
( reload_completed))
    : -1 },
#line 7043 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
  { "TARGET_64BIT && includes_rldic_lshift_p (operands[2], operands[3])",
    __builtin_constant_p 
#line 7043 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_64BIT && includes_rldic_lshift_p (operands[2], operands[3]))
    ? (int) 
#line 7043 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_64BIT && includes_rldic_lshift_p (operands[2], operands[3]))
    : -1 },
  { "(TARGET_POWERPC) && (TARGET_POWERPC64)",
    __builtin_constant_p (
#line 437 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/sync.md"
(TARGET_POWERPC) && 
#line 150 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC64))
    ? (int) (
#line 437 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/sync.md"
(TARGET_POWERPC) && 
#line 150 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC64))
    : -1 },
#line 235 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/darwin.md"
  { "TARGET_MACHO && TARGET_64BIT",
    __builtin_constant_p 
#line 235 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/darwin.md"
(TARGET_MACHO && TARGET_64BIT)
    ? (int) 
#line 235 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/darwin.md"
(TARGET_MACHO && TARGET_64BIT)
    : -1 },
#line 8919 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
  { "TARGET_STRING && XVECLEN (operands[0], 0) == 7",
    __builtin_constant_p 
#line 8919 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_STRING && XVECLEN (operands[0], 0) == 7)
    ? (int) 
#line 8919 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_STRING && XVECLEN (operands[0], 0) == 7)
    : -1 },
#line 2354 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/spe.md"
  { "TARGET_HARD_FLOAT && TARGET_E500_DOUBLE",
    __builtin_constant_p 
#line 2354 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/spe.md"
(TARGET_HARD_FLOAT && TARGET_E500_DOUBLE)
    ? (int) 
#line 2354 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/spe.md"
(TARGET_HARD_FLOAT && TARGET_E500_DOUBLE)
    : -1 },
#line 7959 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
  { "register_operand (operands[0], CCmode)\n\
   || register_operand (operands[1], CCmode)",
    __builtin_constant_p 
#line 7959 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(register_operand (operands[0], CCmode)
   || register_operand (operands[1], CCmode))
    ? (int) 
#line 7959 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(register_operand (operands[0], CCmode)
   || register_operand (operands[1], CCmode))
    : -1 },
#line 2673 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/spe.md"
  { "!TARGET_FPRS && TARGET_HARD_FLOAT",
    __builtin_constant_p 
#line 2673 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/spe.md"
(!TARGET_FPRS && TARGET_HARD_FLOAT)
    ? (int) 
#line 2673 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/spe.md"
(!TARGET_FPRS && TARGET_HARD_FLOAT)
    : -1 },
  { "(TARGET_POWERPC) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 1724 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC) && 
#line 160 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_64BIT))
    ? (int) (
#line 1724 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC) && 
#line 160 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_64BIT))
    : -1 },
#line 5960 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
  { "TARGET_HARD_FLOAT && !TARGET_FPRS",
    __builtin_constant_p 
#line 5960 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_HARD_FLOAT && !TARGET_FPRS)
    ? (int) 
#line 5960 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_HARD_FLOAT && !TARGET_FPRS)
    : -1 },
  { "(TARGET_POWERPC64) && ( reload_completed)",
    __builtin_constant_p (
#line 6447 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC64) && 
#line 6449 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
( reload_completed))
    ? (int) (
#line 6447 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC64) && 
#line 6449 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
( reload_completed))
    : -1 },
  { "(TARGET_STRING && ! TARGET_POWER\n\
   && INTVAL (operands[2]) > 0 && INTVAL (operands[2]) <= 4) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 9541 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_STRING && ! TARGET_POWER
   && INTVAL (operands[2]) > 0 && INTVAL (operands[2]) <= 4) && 
#line 160 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_64BIT))
    ? (int) (
#line 9541 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_STRING && ! TARGET_POWER
   && INTVAL (operands[2]) > 0 && INTVAL (operands[2]) <= 4) && 
#line 160 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_64BIT))
    : -1 },
#line 10246 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
  { "TARGET_ELF && TARGET_SECURE_PLT && DEFAULT_ABI != ABI_AIX && flag_pic",
    __builtin_constant_p 
#line 10246 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_ELF && TARGET_SECURE_PLT && DEFAULT_ABI != ABI_AIX && flag_pic)
    ? (int) 
#line 10246 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_ELF && TARGET_SECURE_PLT && DEFAULT_ABI != ABI_AIX && flag_pic)
    : -1 },
  { "(!TARGET_POWER) && (TARGET_POWERPC64)",
    __builtin_constant_p (
#line 12037 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(!TARGET_POWER) && 
#line 144 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC64))
    ? (int) (
#line 12037 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(!TARGET_POWER) && 
#line 144 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC64))
    : -1 },
  { "(DEFAULT_ABI == ABI_V4\n\
   || DEFAULT_ABI == ABI_DARWIN) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 10827 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(DEFAULT_ABI == ABI_V4
   || DEFAULT_ABI == ABI_DARWIN) && 
#line 160 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_64BIT))
    ? (int) (
#line 10827 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(DEFAULT_ABI == ABI_V4
   || DEFAULT_ABI == ABI_DARWIN) && 
#line 160 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_64BIT))
    : -1 },
#line 4324 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
  { "includes_lshift_p (operands[2], operands[3]) && reload_completed",
    __builtin_constant_p 
#line 4324 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(includes_lshift_p (operands[2], operands[3]) && reload_completed)
    ? (int) 
#line 4324 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(includes_lshift_p (operands[2], operands[3]) && reload_completed)
    : -1 },
#line 8987 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
  { "TARGET_STRING && XVECLEN (operands[0], 0) == 3",
    __builtin_constant_p 
#line 8987 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_STRING && XVECLEN (operands[0], 0) == 3)
    ? (int) 
#line 8987 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_STRING && XVECLEN (operands[0], 0) == 3)
    : -1 },
#line 7781 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
  { "DEFAULT_ABI == ABI_V4 && flag_pic == 1",
    __builtin_constant_p 
#line 7781 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(DEFAULT_ABI == ABI_V4 && flag_pic == 1)
    ? (int) 
#line 7781 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(DEFAULT_ABI == ABI_V4 && flag_pic == 1)
    : -1 },
#line 9562 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
  { "TARGET_POWERPC64 && TARGET_UPDATE",
    __builtin_constant_p 
#line 9562 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC64 && TARGET_UPDATE)
    ? (int) 
#line 9562 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC64 && TARGET_UPDATE)
    : -1 },
#line 5888 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
  { "(TARGET_POWER2 || TARGET_POWERPC) && TARGET_HARD_FLOAT && TARGET_FPRS",
    __builtin_constant_p 
#line 5888 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
((TARGET_POWER2 || TARGET_POWERPC) && TARGET_HARD_FLOAT && TARGET_FPRS)
    ? (int) 
#line 5888 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
((TARGET_POWER2 || TARGET_POWERPC) && TARGET_HARD_FLOAT && TARGET_FPRS)
    : -1 },
  { "((TARGET_POWERPC) && (TARGET_POWERPC64)) && ( reload_completed)",
    __builtin_constant_p ((
#line 463 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/sync.md"
(TARGET_POWERPC) && 
#line 144 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC64)) && 
#line 465 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/sync.md"
( reload_completed))
    ? (int) ((
#line 463 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/sync.md"
(TARGET_POWERPC) && 
#line 144 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC64)) && 
#line 465 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/sync.md"
( reload_completed))
    : -1 },
#line 4563 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
  { "includes_rshift_p (operands[2], operands[3]) && reload_completed",
    __builtin_constant_p 
#line 4563 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(includes_rshift_p (operands[2], operands[3]) && reload_completed)
    ? (int) 
#line 4563 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(includes_rshift_p (operands[2], operands[3]) && reload_completed)
    : -1 },
#line 8973 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
  { "TARGET_STRING && XVECLEN (operands[0], 0) == 4",
    __builtin_constant_p 
#line 8973 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_STRING && XVECLEN (operands[0], 0) == 4)
    ? (int) 
#line 8973 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_STRING && XVECLEN (operands[0], 0) == 4)
    : -1 },
#line 7135 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
  { "TARGET_POWERPC64 && reload_completed\n\
   && includes_rldicr_lshift_p (operands[2], operands[3])",
    __builtin_constant_p 
#line 7135 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC64 && reload_completed
   && includes_rldicr_lshift_p (operands[2], operands[3]))
    ? (int) 
#line 7135 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC64 && reload_completed
   && includes_rldicr_lshift_p (operands[2], operands[3]))
    : -1 },
  { "(TARGET_STRING && ! TARGET_POWER\n\
   && INTVAL (operands[2]) > 16 && INTVAL (operands[2]) <= 32\n\
   && (REGNO (operands[0]) < 5 || REGNO (operands[0]) > 10)\n\
   && (REGNO (operands[1]) < 5 || REGNO (operands[1]) > 10)\n\
   && REGNO (operands[4]) == 5) && (TARGET_32BIT)",
    __builtin_constant_p (
#line 9410 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_STRING && ! TARGET_POWER
   && INTVAL (operands[2]) > 16 && INTVAL (operands[2]) <= 32
   && (REGNO (operands[0]) < 5 || REGNO (operands[0]) > 10)
   && (REGNO (operands[1]) < 5 || REGNO (operands[1]) > 10)
   && REGNO (operands[4]) == 5) && 
#line 160 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_32BIT))
    ? (int) (
#line 9410 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_STRING && ! TARGET_POWER
   && INTVAL (operands[2]) > 16 && INTVAL (operands[2]) <= 32
   && (REGNO (operands[0]) < 5 || REGNO (operands[0]) > 10)
   && (REGNO (operands[1]) < 5 || REGNO (operands[1]) > 10)
   && REGNO (operands[4]) == 5) && 
#line 160 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_32BIT))
    : -1 },
#line 10163 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
  { "DEFAULT_ABI == ABI_AIX && TARGET_32BIT",
    __builtin_constant_p 
#line 10163 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(DEFAULT_ABI == ABI_AIX && TARGET_32BIT)
    ? (int) 
#line 10163 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(DEFAULT_ABI == ABI_AIX && TARGET_32BIT)
    : -1 },
  { "(reload_completed) && (TARGET_POWERPC64)",
    __builtin_constant_p (
#line 2793 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(reload_completed) && 
#line 144 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC64))
    ? (int) (
#line 2793 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(reload_completed) && 
#line 144 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC64))
    : -1 },
#line 5605 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
  { "TARGET_PPC_GFXOPT && TARGET_HARD_FLOAT && TARGET_FPRS",
    __builtin_constant_p 
#line 5605 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_PPC_GFXOPT && TARGET_HARD_FLOAT && TARGET_FPRS)
    ? (int) 
#line 5605 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_PPC_GFXOPT && TARGET_HARD_FLOAT && TARGET_FPRS)
    : -1 },
#line 9788 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
  { "TARGET_POWER2\n\
   && TARGET_HARD_FLOAT && TARGET_FPRS\n\
   && registers_ok_for_quad_peep (operands[0], operands[2])\n\
   && mems_ok_for_quad_peep (operands[1], operands[3])",
    __builtin_constant_p 
#line 9788 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_POWER2
   && TARGET_HARD_FLOAT && TARGET_FPRS
   && registers_ok_for_quad_peep (operands[0], operands[2])
   && mems_ok_for_quad_peep (operands[1], operands[3]))
    ? (int) 
#line 9788 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_POWER2
   && TARGET_HARD_FLOAT && TARGET_FPRS
   && registers_ok_for_quad_peep (operands[0], operands[2])
   && mems_ok_for_quad_peep (operands[1], operands[3]))
    : -1 },
#line 7074 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
  { "TARGET_POWERPC64 && includes_rldicr_lshift_p (operands[2], operands[3])",
    __builtin_constant_p 
#line 7074 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC64 && includes_rldicr_lshift_p (operands[2], operands[3]))
    ? (int) 
#line 7074 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC64 && includes_rldicr_lshift_p (operands[2], operands[3]))
    : -1 },
#line 12037 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
  { "!TARGET_POWER",
    __builtin_constant_p 
#line 12037 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(!TARGET_POWER)
    ? (int) 
#line 12037 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(!TARGET_POWER)
    : -1 },
  { "(TARGET_POWERPC) && ( reload_completed)",
    __builtin_constant_p (
#line 463 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/sync.md"
(TARGET_POWERPC) && 
#line 465 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/sync.md"
( reload_completed))
    ? (int) (
#line 463 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/sync.md"
(TARGET_POWERPC) && 
#line 465 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/sync.md"
( reload_completed))
    : -1 },
#line 11501 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
  { "! (TARGET_HARD_FLOAT && TARGET_E500 && !TARGET_FPRS)",
    __builtin_constant_p 
#line 11501 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(! (TARGET_HARD_FLOAT && TARGET_E500 && !TARGET_FPRS))
    ? (int) 
#line 11501 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(! (TARGET_HARD_FLOAT && TARGET_E500 && !TARGET_FPRS))
    : -1 },
#line 6237 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
  { "TARGET_POWERPC && ! TARGET_POWER && ! TARGET_POWERPC64",
    __builtin_constant_p 
#line 6237 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC && ! TARGET_POWER && ! TARGET_POWERPC64)
    ? (int) 
#line 6237 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC && ! TARGET_POWER && ! TARGET_POWERPC64)
    : -1 },
#line 8504 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
  { "!TARGET_IEEEQUAD\n\
   && (TARGET_POWER2 || TARGET_POWERPC)\n\
   && TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_LONG_DOUBLE_128",
    __builtin_constant_p 
#line 8504 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(!TARGET_IEEEQUAD
   && (TARGET_POWER2 || TARGET_POWERPC)
   && TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_LONG_DOUBLE_128)
    ? (int) 
#line 8504 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(!TARGET_IEEEQUAD
   && (TARGET_POWER2 || TARGET_POWERPC)
   && TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_LONG_DOUBLE_128)
    : -1 },
#line 12009 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
  { "TARGET_POWERPC64 && REGNO (operands[2]) != REGNO (operands[5])",
    __builtin_constant_p 
#line 12009 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC64 && REGNO (operands[2]) != REGNO (operands[5]))
    ? (int) 
#line 12009 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC64 && REGNO (operands[2]) != REGNO (operands[5]))
    : -1 },
  { "((DEFAULT_ABI == ABI_DARWIN\n\
   || (DEFAULT_ABI == ABI_V4\n\
       && (INTVAL (operands[2]) & CALL_LONG) == 0))) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 10776 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
((DEFAULT_ABI == ABI_DARWIN
   || (DEFAULT_ABI == ABI_V4
       && (INTVAL (operands[2]) & CALL_LONG) == 0))) && 
#line 160 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_64BIT))
    ? (int) (
#line 10776 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
((DEFAULT_ABI == ABI_DARWIN
   || (DEFAULT_ABI == ABI_V4
       && (INTVAL (operands[2]) & CALL_LONG) == 0))) && 
#line 160 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_64BIT))
    : -1 },
  { "(reload_completed) && (TARGET_32BIT)",
    __builtin_constant_p (
#line 14114 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(reload_completed) && 
#line 160 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_32BIT))
    ? (int) (
#line 14114 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(reload_completed) && 
#line 160 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_32BIT))
    : -1 },
  { "(!TARGET_IEEEQUAD\n\
   && (TARGET_SOFT_FLOAT || !TARGET_FPRS) && TARGET_LONG_DOUBLE_128\n\
   && (gpc_reg_operand (operands[0], TFmode)\n\
       || gpc_reg_operand (operands[1], TFmode))) && ( reload_completed)",
    __builtin_constant_p (
#line 8374 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(!TARGET_IEEEQUAD
   && (TARGET_SOFT_FLOAT || !TARGET_FPRS) && TARGET_LONG_DOUBLE_128
   && (gpc_reg_operand (operands[0], TFmode)
       || gpc_reg_operand (operands[1], TFmode))) && 
#line 8379 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
( reload_completed))
    ? (int) (
#line 8374 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(!TARGET_IEEEQUAD
   && (TARGET_SOFT_FLOAT || !TARGET_FPRS) && TARGET_LONG_DOUBLE_128
   && (gpc_reg_operand (operands[0], TFmode)
       || gpc_reg_operand (operands[1], TFmode))) && 
#line 8379 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
( reload_completed))
    : -1 },
#line 5555 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
  { "TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_FUSED_MADD",
    __builtin_constant_p 
#line 5555 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_FUSED_MADD)
    ? (int) 
#line 5555 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_FUSED_MADD)
    : -1 },
#line 2441 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/spe.md"
  { "TARGET_SPE\n\
   && (gpc_reg_operand (operands[0], V2SFmode)\n\
       || gpc_reg_operand (operands[1], V2SFmode))",
    __builtin_constant_p 
#line 2441 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/spe.md"
(TARGET_SPE
   && (gpc_reg_operand (operands[0], V2SFmode)
       || gpc_reg_operand (operands[1], V2SFmode)))
    ? (int) 
#line 2441 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/spe.md"
(TARGET_SPE
   && (gpc_reg_operand (operands[0], V2SFmode)
       || gpc_reg_operand (operands[1], V2SFmode)))
    : -1 },
#line 2285 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/spe.md"
  { "TARGET_HARD_FLOAT && TARGET_E500_DOUBLE\n\
    && (gpc_reg_operand (operands[0], DFmode)\n\
        || gpc_reg_operand (operands[1], DFmode))",
    __builtin_constant_p 
#line 2285 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/spe.md"
(TARGET_HARD_FLOAT && TARGET_E500_DOUBLE
    && (gpc_reg_operand (operands[0], DFmode)
        || gpc_reg_operand (operands[1], DFmode)))
    ? (int) 
#line 2285 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/spe.md"
(TARGET_HARD_FLOAT && TARGET_E500_DOUBLE
    && (gpc_reg_operand (operands[0], DFmode)
        || gpc_reg_operand (operands[1], DFmode)))
    : -1 },
  { "(!TARGET_IEEEQUAD && TARGET_XL_COMPAT\n\
   && TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_LONG_DOUBLE_128) && ( reload_completed)",
    __builtin_constant_p (
#line 11767 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(!TARGET_IEEEQUAD && TARGET_XL_COMPAT
   && TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_LONG_DOUBLE_128) && 
#line 11770 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
( reload_completed))
    ? (int) (
#line 11767 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(!TARGET_IEEEQUAD && TARGET_XL_COMPAT
   && TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_LONG_DOUBLE_128) && 
#line 11770 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
( reload_completed))
    : -1 },
  { "(! TARGET_POWER && ! TARGET_ISEL) && ( reload_completed)",
    __builtin_constant_p (
#line 2015 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(! TARGET_POWER && ! TARGET_ISEL) && 
#line 2017 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
( reload_completed))
    ? (int) (
#line 2015 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(! TARGET_POWER && ! TARGET_ISEL) && 
#line 2017 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
( reload_completed))
    : -1 },
#line 5251 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
  { "TARGET_PPC_GFXOPT && TARGET_HARD_FLOAT && TARGET_FPRS\n\
   && !HONOR_NANS (SFmode) && !HONOR_SIGNED_ZEROS (SFmode)",
    __builtin_constant_p 
#line 5251 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_PPC_GFXOPT && TARGET_HARD_FLOAT && TARGET_FPRS
   && !HONOR_NANS (SFmode) && !HONOR_SIGNED_ZEROS (SFmode))
    ? (int) 
#line 5251 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_PPC_GFXOPT && TARGET_HARD_FLOAT && TARGET_FPRS
   && !HONOR_NANS (SFmode) && !HONOR_SIGNED_ZEROS (SFmode))
    : -1 },
#line 7119 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
  { "TARGET_64BIT && includes_rldicr_lshift_p (operands[2], operands[3])",
    __builtin_constant_p 
#line 7119 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_64BIT && includes_rldicr_lshift_p (operands[2], operands[3]))
    ? (int) 
#line 7119 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_64BIT && includes_rldicr_lshift_p (operands[2], operands[3]))
    : -1 },
#line 544 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/altivec.md"
  { "TARGET_ALTIVEC && TARGET_FUSED_MADD",
    __builtin_constant_p 
#line 544 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/altivec.md"
(TARGET_ALTIVEC && TARGET_FUSED_MADD)
    ? (int) 
#line 544 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/altivec.md"
(TARGET_ALTIVEC && TARGET_FUSED_MADD)
    : -1 },
#line 7835 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
  { "TARGET_MACHO && ! TARGET_64BIT",
    __builtin_constant_p 
#line 7835 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_MACHO && ! TARGET_64BIT)
    ? (int) 
#line 7835 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_MACHO && ! TARGET_64BIT)
    : -1 },
#line 6251 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
  { "TARGET_POWERPC && ! TARGET_POWERPC64 && reload_completed",
    __builtin_constant_p 
#line 6251 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC && ! TARGET_POWERPC64 && reload_completed)
    ? (int) 
#line 6251 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC && ! TARGET_POWERPC64 && reload_completed)
    : -1 },
#line 5592 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
  { "TARGET_PPC_GFXOPT && TARGET_HARD_FLOAT && TARGET_FPRS && !flag_trapping_math",
    __builtin_constant_p 
#line 5592 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_PPC_GFXOPT && TARGET_HARD_FLOAT && TARGET_FPRS && !flag_trapping_math)
    ? (int) 
#line 5592 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_PPC_GFXOPT && TARGET_HARD_FLOAT && TARGET_FPRS && !flag_trapping_math)
    : -1 },
#line 8939 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
  { "TARGET_STRING && XVECLEN (operands[0], 0) == 6",
    __builtin_constant_p 
#line 8939 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_STRING && XVECLEN (operands[0], 0) == 6)
    ? (int) 
#line 8939 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_STRING && XVECLEN (operands[0], 0) == 6)
    : -1 },
#line 5317 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
  { "TARGET_ISEL",
    __builtin_constant_p 
#line 5317 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_ISEL)
    ? (int) 
#line 5317 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_ISEL)
    : -1 },
#line 5217 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
  { "! TARGET_POWERPC && TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_FUSED_MADD",
    __builtin_constant_p 
#line 5217 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(! TARGET_POWERPC && TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_FUSED_MADD)
    ? (int) 
#line 5217 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(! TARGET_POWERPC && TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_FUSED_MADD)
    : -1 },
#line 224 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/altivec.md"
  { "TARGET_ALTIVEC && reload_completed\n\
   && gpr_or_gpr_p (operands[0], operands[1])",
    __builtin_constant_p 
#line 224 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/altivec.md"
(TARGET_ALTIVEC && reload_completed
   && gpr_or_gpr_p (operands[0], operands[1]))
    ? (int) 
#line 224 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/altivec.md"
(TARGET_ALTIVEC && reload_completed
   && gpr_or_gpr_p (operands[0], operands[1]))
    : -1 },
#line 12129 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
  { "! gpc_reg_operand (operands[2], SImode)",
    __builtin_constant_p 
#line 12129 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(! gpc_reg_operand (operands[2], SImode))
    ? (int) 
#line 12129 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(! gpc_reg_operand (operands[2], SImode))
    : -1 },
  { "((TARGET_POWER2 || TARGET_POWERPC) && TARGET_HARD_FLOAT && TARGET_FPRS) && ( (!no_new_pseudos || offsettable_nonstrict_memref_p (operands[3])))",
    __builtin_constant_p (
#line 5846 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
((TARGET_POWER2 || TARGET_POWERPC) && TARGET_HARD_FLOAT && TARGET_FPRS) && 
#line 5848 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
( (!no_new_pseudos || offsettable_nonstrict_memref_p (operands[3]))))
    ? (int) (
#line 5846 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
((TARGET_POWER2 || TARGET_POWERPC) && TARGET_HARD_FLOAT && TARGET_FPRS) && 
#line 5848 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
( (!no_new_pseudos || offsettable_nonstrict_memref_p (operands[3]))))
    : -1 },
#line 2276 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/spe.md"
  { "(TARGET_E500_DOUBLE && V1DImode == DFmode) || (TARGET_SPE && V1DImode != DFmode)",
    __builtin_constant_p 
#line 2276 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/spe.md"
((TARGET_E500_DOUBLE && V1DImode == DFmode) || (TARGET_SPE && V1DImode != DFmode))
    ? (int) 
#line 2276 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/spe.md"
((TARGET_E500_DOUBLE && V1DImode == DFmode) || (TARGET_SPE && V1DImode != DFmode))
    : -1 },
#line 13874 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
  { "direct_return ()",
    __builtin_constant_p 
#line 13874 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(direct_return ())
    ? (int) 
#line 13874 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(direct_return ())
    : -1 },
#line 9840 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
  { "peep2_reg_dead_p (2, operands[0])",
    __builtin_constant_p 
#line 9840 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(peep2_reg_dead_p (2, operands[0]))
    ? (int) 
#line 9840 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(peep2_reg_dead_p (2, operands[0]))
    : -1 },
#line 125 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/darwin.md"
  { "TARGET_MACHO && TARGET_HARD_FLOAT && TARGET_FPRS && ! TARGET_64BIT",
    __builtin_constant_p 
#line 125 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/darwin.md"
(TARGET_MACHO && TARGET_HARD_FLOAT && TARGET_FPRS && ! TARGET_64BIT)
    ? (int) 
#line 125 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/darwin.md"
(TARGET_MACHO && TARGET_HARD_FLOAT && TARGET_FPRS && ! TARGET_64BIT)
    : -1 },
  { "(TARGET_POWERPC64 && TARGET_UPDATE) && (TARGET_32BIT)",
    __builtin_constant_p (
#line 9574 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC64 && TARGET_UPDATE) && 
#line 160 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_32BIT))
    ? (int) (
#line 9574 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC64 && TARGET_UPDATE) && 
#line 160 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_32BIT))
    : -1 },
#line 4642 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
  { "includes_rshift_p (operands[2], GEN_INT (255)) && reload_completed",
    __builtin_constant_p 
#line 4642 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(includes_rshift_p (operands[2], GEN_INT (255)) && reload_completed)
    ? (int) 
#line 4642 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(includes_rshift_p (operands[2], GEN_INT (255)) && reload_completed)
    : -1 },
  { "(TARGET_64BIT) && ( !reg_overlap_mentioned_p (operands[0], operands[3]))",
    __builtin_constant_p (
#line 160 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_64BIT) && 
#line 13665 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
( !reg_overlap_mentioned_p (operands[0], operands[3])))
    ? (int) (
#line 160 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_64BIT) && 
#line 13665 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
( !reg_overlap_mentioned_p (operands[0], operands[3])))
    : -1 },
  { "(TARGET_POWERPC || (! TARGET_POWER && ! TARGET_POWERPC)) && (TARGET_POWERPC64)",
    __builtin_constant_p (
#line 2373 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC || (! TARGET_POWER && ! TARGET_POWERPC)) && 
#line 144 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC64))
    ? (int) (
#line 2373 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC || (! TARGET_POWER && ! TARGET_POWERPC)) && 
#line 144 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC64))
    : -1 },
#line 2604 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
  { "TARGET_POWER",
    __builtin_constant_p 
#line 2604 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_POWER)
    ? (int) 
#line 2604 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_POWER)
    : -1 },
  { "(TARGET_POPCNTB) && (TARGET_POWERPC64)",
    __builtin_constant_p (
#line 2153 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_POPCNTB) && 
#line 144 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC64))
    ? (int) (
#line 2153 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_POPCNTB) && 
#line 144 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC64))
    : -1 },
#line 8838 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
  { "reload_completed\n\
   && gpr_or_gpr_p (operands[0], operands[1])",
    __builtin_constant_p 
#line 8838 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(reload_completed
   && gpr_or_gpr_p (operands[0], operands[1]))
    ? (int) 
#line 8838 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(reload_completed
   && gpr_or_gpr_p (operands[0], operands[1]))
    : -1 },
#line 411 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/darwin.md"
  { "(DEFAULT_ABI == ABI_DARWIN)\n\
   && (INTVAL (operands[2]) & CALL_LONG) == 0",
    __builtin_constant_p 
#line 411 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/darwin.md"
((DEFAULT_ABI == ABI_DARWIN)
   && (INTVAL (operands[2]) & CALL_LONG) == 0)
    ? (int) 
#line 411 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/darwin.md"
((DEFAULT_ABI == ABI_DARWIN)
   && (INTVAL (operands[2]) & CALL_LONG) == 0)
    : -1 },
#line 5187 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
  { "TARGET_POWERPC && TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_FUSED_MADD\n\
   && HONOR_SIGNED_ZEROS (SFmode)",
    __builtin_constant_p 
#line 5187 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC && TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_FUSED_MADD
   && HONOR_SIGNED_ZEROS (SFmode))
    ? (int) 
#line 5187 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC && TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_FUSED_MADD
   && HONOR_SIGNED_ZEROS (SFmode))
    : -1 },
  { "(TARGET_STRING && ! TARGET_POWER\n\
   && ((INTVAL (operands[2]) > 24 && INTVAL (operands[2]) < 32)\n\
       || INTVAL (operands[2]) == 0)\n\
   && (REGNO (operands[0]) < 5 || REGNO (operands[0]) > 12)\n\
   && (REGNO (operands[1]) < 5 || REGNO (operands[1]) > 12)\n\
   && REGNO (operands[4]) == 5) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 9349 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_STRING && ! TARGET_POWER
   && ((INTVAL (operands[2]) > 24 && INTVAL (operands[2]) < 32)
       || INTVAL (operands[2]) == 0)
   && (REGNO (operands[0]) < 5 || REGNO (operands[0]) > 12)
   && (REGNO (operands[1]) < 5 || REGNO (operands[1]) > 12)
   && REGNO (operands[4]) == 5) && 
#line 160 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_64BIT))
    ? (int) (
#line 9349 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_STRING && ! TARGET_POWER
   && ((INTVAL (operands[2]) > 24 && INTVAL (operands[2]) < 32)
       || INTVAL (operands[2]) == 0)
   && (REGNO (operands[0]) < 5 || REGNO (operands[0]) > 12)
   && (REGNO (operands[1]) < 5 || REGNO (operands[1]) > 12)
   && REGNO (operands[4]) == 5) && 
#line 160 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_64BIT))
    : -1 },
#line 9389 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
  { "TARGET_STRING && TARGET_POWER\n\
   && INTVAL (operands[2]) > 16 && INTVAL (operands[2]) <= 24\n\
   && (REGNO (operands[0]) < 5 || REGNO (operands[0]) > 10)\n\
   && (REGNO (operands[1]) < 5 || REGNO (operands[1]) > 10)\n\
   && REGNO (operands[4]) == 5",
    __builtin_constant_p 
#line 9389 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_STRING && TARGET_POWER
   && INTVAL (operands[2]) > 16 && INTVAL (operands[2]) <= 24
   && (REGNO (operands[0]) < 5 || REGNO (operands[0]) > 10)
   && (REGNO (operands[1]) < 5 || REGNO (operands[1]) > 10)
   && REGNO (operands[4]) == 5)
    ? (int) 
#line 9389 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_STRING && TARGET_POWER
   && INTVAL (operands[2]) > 16 && INTVAL (operands[2]) <= 24
   && (REGNO (operands[0]) < 5 || REGNO (operands[0]) > 10)
   && (REGNO (operands[1]) < 5 || REGNO (operands[1]) > 10)
   && REGNO (operands[4]) == 5)
    : -1 },
#line 202 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/darwin.md"
  { "TARGET_MACHO",
    __builtin_constant_p 
#line 202 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/darwin.md"
(TARGET_MACHO)
    ? (int) 
#line 202 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/darwin.md"
(TARGET_MACHO)
    : -1 },
  { "(!TARGET_POWER && optimize_size) && (TARGET_32BIT)",
    __builtin_constant_p (
#line 12074 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(!TARGET_POWER && optimize_size) && 
#line 160 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_32BIT))
    ? (int) (
#line 12074 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(!TARGET_POWER && optimize_size) && 
#line 160 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_32BIT))
    : -1 },
#line 7766 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
  { "TARGET_POWERPC64 && reload_completed",
    __builtin_constant_p 
#line 7766 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC64 && reload_completed)
    ? (int) 
#line 7766 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC64 && reload_completed)
    : -1 },
#line 14321 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
  { "GET_CODE (operands[0]) == REG\n\
   && CR_REGNO_P (REGNO (operands[0]))\n\
   && GET_CODE (operands[2]) == CONST_INT\n\
   && INTVAL (operands[2]) == 1 << (75 - REGNO (operands[0]))",
    __builtin_constant_p 
#line 14321 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(GET_CODE (operands[0]) == REG
   && CR_REGNO_P (REGNO (operands[0]))
   && GET_CODE (operands[2]) == CONST_INT
   && INTVAL (operands[2]) == 1 << (75 - REGNO (operands[0])))
    ? (int) 
#line 14321 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(GET_CODE (operands[0]) == REG
   && CR_REGNO_P (REGNO (operands[0]))
   && GET_CODE (operands[2]) == CONST_INT
   && INTVAL (operands[2]) == 1 << (75 - REGNO (operands[0])))
    : -1 },
#line 4547 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
  { "includes_rshift_p (operands[2], operands[3])",
    __builtin_constant_p 
#line 4547 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(includes_rshift_p (operands[2], operands[3]))
    ? (int) 
#line 4547 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(includes_rshift_p (operands[2], operands[3]))
    : -1 },
#line 2422 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/spe.md"
  { "TARGET_SPE\n\
   && (gpc_reg_operand (operands[0], V4HImode)\n\
       || gpc_reg_operand (operands[1], V4HImode))",
    __builtin_constant_p 
#line 2422 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/spe.md"
(TARGET_SPE
   && (gpc_reg_operand (operands[0], V4HImode)
       || gpc_reg_operand (operands[1], V4HImode)))
    ? (int) 
#line 2422 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/spe.md"
(TARGET_SPE
   && (gpc_reg_operand (operands[0], V4HImode)
       || gpc_reg_operand (operands[1], V4HImode)))
    : -1 },
#line 8057 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
  { "(gpc_reg_operand (operands[0], SFmode)\n\
   || gpc_reg_operand (operands[1], SFmode))\n\
   && (TARGET_SOFT_FLOAT || !TARGET_FPRS)",
    __builtin_constant_p 
#line 8057 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
((gpc_reg_operand (operands[0], SFmode)
   || gpc_reg_operand (operands[1], SFmode))
   && (TARGET_SOFT_FLOAT || !TARGET_FPRS))
    ? (int) 
#line 8057 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
((gpc_reg_operand (operands[0], SFmode)
   || gpc_reg_operand (operands[1], SFmode))
   && (TARGET_SOFT_FLOAT || !TARGET_FPRS))
    : -1 },
#line 9800 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
  { "TARGET_POWER2\n\
   && TARGET_HARD_FLOAT && TARGET_FPRS",
    __builtin_constant_p 
#line 9800 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_POWER2
   && TARGET_HARD_FLOAT && TARGET_FPRS)
    ? (int) 
#line 9800 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_POWER2
   && TARGET_HARD_FLOAT && TARGET_FPRS)
    : -1 },
#line 5230 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
  { "TARGET_PPC_GPOPT && TARGET_HARD_FLOAT && TARGET_FPRS",
    __builtin_constant_p 
#line 5230 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_PPC_GPOPT && TARGET_HARD_FLOAT && TARGET_FPRS)
    ? (int) 
#line 5230 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_PPC_GPOPT && TARGET_HARD_FLOAT && TARGET_FPRS)
    : -1 },
#line 2153 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
  { "TARGET_POPCNTB",
    __builtin_constant_p 
#line 2153 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_POPCNTB)
    ? (int) 
#line 2153 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_POPCNTB)
    : -1 },
#line 10199 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
  { "DEFAULT_ABI == ABI_V4 && flag_pic == 1 && TARGET_32BIT",
    __builtin_constant_p 
#line 10199 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(DEFAULT_ABI == ABI_V4 && flag_pic == 1 && TARGET_32BIT)
    ? (int) 
#line 10199 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(DEFAULT_ABI == ABI_V4 && flag_pic == 1 && TARGET_32BIT)
    : -1 },
#line 10228 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
  { "TARGET_ELF && DEFAULT_ABI != ABI_AIX && flag_pic == 2",
    __builtin_constant_p 
#line 10228 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_ELF && DEFAULT_ABI != ABI_AIX && flag_pic == 2)
    ? (int) 
#line 10228 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_ELF && DEFAULT_ABI != ABI_AIX && flag_pic == 2)
    : -1 },
#line 34 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/darwin.md"
  { "TARGET_MACHO && TARGET_HARD_FLOAT && TARGET_FPRS && !TARGET_64BIT",
    __builtin_constant_p 
#line 34 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/darwin.md"
(TARGET_MACHO && TARGET_HARD_FLOAT && TARGET_FPRS && !TARGET_64BIT)
    ? (int) 
#line 34 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/darwin.md"
(TARGET_MACHO && TARGET_HARD_FLOAT && TARGET_FPRS && !TARGET_64BIT)
    : -1 },
#line 9768 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
  { "TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_UPDATE",
    __builtin_constant_p 
#line 9768 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_UPDATE)
    ? (int) 
#line 9768 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_UPDATE)
    : -1 },
  { "((DEFAULT_ABI == ABI_DARWIN\n\
       || DEFAULT_ABI == ABI_V4)\n\
   && (INTVAL (operands[3]) & CALL_LONG) == 0) && (TARGET_32BIT)",
    __builtin_constant_p (
#line 11232 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
((DEFAULT_ABI == ABI_DARWIN
       || DEFAULT_ABI == ABI_V4)
   && (INTVAL (operands[3]) & CALL_LONG) == 0) && 
#line 160 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_32BIT))
    ? (int) (
#line 11232 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
((DEFAULT_ABI == ABI_DARWIN
       || DEFAULT_ABI == ABI_V4)
   && (INTVAL (operands[3]) & CALL_LONG) == 0) && 
#line 160 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_32BIT))
    : -1 },
#line 437 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/sync.md"
  { "TARGET_POWERPC",
    __builtin_constant_p 
#line 437 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/sync.md"
(TARGET_POWERPC)
    ? (int) 
#line 437 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/sync.md"
(TARGET_POWERPC)
    : -1 },
#line 9744 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
  { "(TARGET_SOFT_FLOAT || !TARGET_FPRS) && TARGET_UPDATE",
    __builtin_constant_p 
#line 9744 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
((TARGET_SOFT_FLOAT || !TARGET_FPRS) && TARGET_UPDATE)
    ? (int) 
#line 9744 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
((TARGET_SOFT_FLOAT || !TARGET_FPRS) && TARGET_UPDATE)
    : -1 },
#line 2802 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/spe.md"
  { "TARGET_HARD_FLOAT && TARGET_E500_DOUBLE && flag_unsafe_math_optimizations",
    __builtin_constant_p 
#line 2802 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/spe.md"
(TARGET_HARD_FLOAT && TARGET_E500_DOUBLE && flag_unsafe_math_optimizations)
    ? (int) 
#line 2802 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/spe.md"
(TARGET_HARD_FLOAT && TARGET_E500_DOUBLE && flag_unsafe_math_optimizations)
    : -1 },
#line 9128 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
  { "TARGET_STRING && !TARGET_POWER && XVECLEN (operands[0], 0) == 5",
    __builtin_constant_p 
#line 9128 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_STRING && !TARGET_POWER && XVECLEN (operands[0], 0) == 5)
    ? (int) 
#line 9128 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_STRING && !TARGET_POWER && XVECLEN (operands[0], 0) == 5)
    : -1 },
  { "((TARGET_POWER2 || TARGET_POWERPC) && TARGET_HARD_FLOAT && TARGET_FPRS\n\
   && TARGET_PPC_GFXOPT) && ( 1)",
    __builtin_constant_p (
#line 5867 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
((TARGET_POWER2 || TARGET_POWERPC) && TARGET_HARD_FLOAT && TARGET_FPRS
   && TARGET_PPC_GFXOPT) && 
#line 5870 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
( 1))
    ? (int) (
#line 5867 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
((TARGET_POWER2 || TARGET_POWERPC) && TARGET_HARD_FLOAT && TARGET_FPRS
   && TARGET_PPC_GFXOPT) && 
#line 5870 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
( 1))
    : -1 },
#line 5783 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
  { "! TARGET_POWERPC64 && TARGET_HARD_FLOAT && TARGET_FPRS",
    __builtin_constant_p 
#line 5783 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(! TARGET_POWERPC64 && TARGET_HARD_FLOAT && TARGET_FPRS)
    ? (int) 
#line 5783 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(! TARGET_POWERPC64 && TARGET_HARD_FLOAT && TARGET_FPRS)
    : -1 },
#line 177 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/altivec.md"
  { "TARGET_ALTIVEC \n\
   && (register_operand (operands[0], V8HImode) \n\
       || register_operand (operands[1], V8HImode))",
    __builtin_constant_p 
#line 177 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/altivec.md"
(TARGET_ALTIVEC 
   && (register_operand (operands[0], V8HImode) 
       || register_operand (operands[1], V8HImode)))
    ? (int) 
#line 177 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/altivec.md"
(TARGET_ALTIVEC 
   && (register_operand (operands[0], V8HImode) 
       || register_operand (operands[1], V8HImode)))
    : -1 },
#line 350 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/darwin.md"
  { "DEFAULT_ABI == ABI_DARWIN && TARGET_64BIT",
    __builtin_constant_p 
#line 350 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/darwin.md"
(DEFAULT_ABI == ABI_DARWIN && TARGET_64BIT)
    ? (int) 
#line 350 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/darwin.md"
(DEFAULT_ABI == ABI_DARWIN && TARGET_64BIT)
    : -1 },
  { "((DEFAULT_ABI == ABI_DARWIN\n\
     || DEFAULT_ABI == ABI_V4)\n\
   && (INTVAL (operands[2]) & CALL_LONG) == 0) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 11178 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
((DEFAULT_ABI == ABI_DARWIN
     || DEFAULT_ABI == ABI_V4)
   && (INTVAL (operands[2]) & CALL_LONG) == 0) && 
#line 160 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_64BIT))
    ? (int) (
#line 11178 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
((DEFAULT_ABI == ABI_DARWIN
     || DEFAULT_ABI == ABI_V4)
   && (INTVAL (operands[2]) & CALL_LONG) == 0) && 
#line 160 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_64BIT))
    : -1 },
#line 5224 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
  { "(TARGET_PPC_GPOPT || TARGET_POWER2) && TARGET_HARD_FLOAT && TARGET_FPRS",
    __builtin_constant_p 
#line 5224 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
((TARGET_PPC_GPOPT || TARGET_POWER2) && TARGET_HARD_FLOAT && TARGET_FPRS)
    ? (int) 
#line 5224 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
((TARGET_PPC_GPOPT || TARGET_POWER2) && TARGET_HARD_FLOAT && TARGET_FPRS)
    : -1 },
#line 8715 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
  { "TARGET_POWERPC64 && num_insns_constant (operands[1], DImode) > 1",
    __builtin_constant_p 
#line 8715 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC64 && num_insns_constant (operands[1], DImode) > 1)
    ? (int) 
#line 8715 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC64 && num_insns_constant (operands[1], DImode) > 1)
    : -1 },
#line 591 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/sync.md"
  { "TARGET_POWERPC && !PPC405_ERRATUM77",
    __builtin_constant_p 
#line 591 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/sync.md"
(TARGET_POWERPC && !PPC405_ERRATUM77)
    ? (int) 
#line 591 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/sync.md"
(TARGET_POWERPC && !PPC405_ERRATUM77)
    : -1 },
#line 8268 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
  { "! TARGET_POWERPC64 && (TARGET_SOFT_FLOAT || TARGET_E500_SINGLE)\n\
   && (gpc_reg_operand (operands[0], DFmode)\n\
       || gpc_reg_operand (operands[1], DFmode))",
    __builtin_constant_p 
#line 8268 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(! TARGET_POWERPC64 && (TARGET_SOFT_FLOAT || TARGET_E500_SINGLE)
   && (gpc_reg_operand (operands[0], DFmode)
       || gpc_reg_operand (operands[1], DFmode)))
    ? (int) 
#line 8268 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(! TARGET_POWERPC64 && (TARGET_SOFT_FLOAT || TARGET_E500_SINGLE)
   && (gpc_reg_operand (operands[0], DFmode)
       || gpc_reg_operand (operands[1], DFmode)))
    : -1 },
#line 5073 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
  { "TARGET_PPC_GFXOPT && flag_finite_math_only",
    __builtin_constant_p 
#line 5073 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_PPC_GFXOPT && flag_finite_math_only)
    ? (int) 
#line 5073 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_PPC_GFXOPT && flag_finite_math_only)
    : -1 },
#line 9204 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
  { "TARGET_STRING && TARGET_POWER && XVECLEN (operands[0], 0) == 7",
    __builtin_constant_p 
#line 9204 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_STRING && TARGET_POWER && XVECLEN (operands[0], 0) == 7)
    ? (int) 
#line 9204 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_STRING && TARGET_POWER && XVECLEN (operands[0], 0) == 7)
    : -1 },
#line 4704 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
  { "includes_rshift_p (operands[2], GEN_INT (65535))",
    __builtin_constant_p 
#line 4704 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(includes_rshift_p (operands[2], GEN_INT (65535)))
    ? (int) 
#line 4704 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(includes_rshift_p (operands[2], GEN_INT (65535)))
    : -1 },
  { "(TARGET_STRING && ! TARGET_POWER\n\
   && ((INTVAL (operands[2]) > 24 && INTVAL (operands[2]) < 32)\n\
       || INTVAL (operands[2]) == 0)\n\
   && (REGNO (operands[0]) < 5 || REGNO (operands[0]) > 12)\n\
   && (REGNO (operands[1]) < 5 || REGNO (operands[1]) > 12)\n\
   && REGNO (operands[4]) == 5) && (TARGET_32BIT)",
    __builtin_constant_p (
#line 9349 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_STRING && ! TARGET_POWER
   && ((INTVAL (operands[2]) > 24 && INTVAL (operands[2]) < 32)
       || INTVAL (operands[2]) == 0)
   && (REGNO (operands[0]) < 5 || REGNO (operands[0]) > 12)
   && (REGNO (operands[1]) < 5 || REGNO (operands[1]) > 12)
   && REGNO (operands[4]) == 5) && 
#line 160 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_32BIT))
    ? (int) (
#line 9349 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_STRING && ! TARGET_POWER
   && ((INTVAL (operands[2]) > 24 && INTVAL (operands[2]) < 32)
       || INTVAL (operands[2]) == 0)
   && (REGNO (operands[0]) < 5 || REGNO (operands[0]) > 12)
   && (REGNO (operands[1]) < 5 || REGNO (operands[1]) > 12)
   && REGNO (operands[4]) == 5) && 
#line 160 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_32BIT))
    : -1 },
#line 9185 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
  { "TARGET_STRING && TARGET_POWER && XVECLEN (operands[0], 0) == 8",
    __builtin_constant_p 
#line 9185 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_STRING && TARGET_POWER && XVECLEN (operands[0], 0) == 8)
    ? (int) 
#line 9185 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_STRING && TARGET_POWER && XVECLEN (operands[0], 0) == 8)
    : -1 },
#line 1352 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
  { "TARGET_MULHW",
    __builtin_constant_p 
#line 1352 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_MULHW)
    ? (int) 
#line 1352 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_MULHW)
    : -1 },
#line 177 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/altivec.md"
  { "TARGET_ALTIVEC \n\
   && (register_operand (operands[0], V16QImode) \n\
       || register_operand (operands[1], V16QImode))",
    __builtin_constant_p 
#line 177 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/altivec.md"
(TARGET_ALTIVEC 
   && (register_operand (operands[0], V16QImode) 
       || register_operand (operands[1], V16QImode)))
    ? (int) 
#line 177 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/altivec.md"
(TARGET_ALTIVEC 
   && (register_operand (operands[0], V16QImode) 
       || register_operand (operands[1], V16QImode)))
    : -1 },
  { "(! TARGET_POWER) && ( reload_completed)",
    __builtin_constant_p (
#line 2033 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(! TARGET_POWER) && 
#line 2035 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
( reload_completed))
    ? (int) (
#line 2033 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(! TARGET_POWER) && 
#line 2035 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
( reload_completed))
    : -1 },
#line 7819 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
  { "DEFAULT_ABI == ABI_V4\n\
    && flag_pic == 1\n\
    && (reload_in_progress || reload_completed)",
    __builtin_constant_p 
#line 7819 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(DEFAULT_ABI == ABI_V4
    && flag_pic == 1
    && (reload_in_progress || reload_completed))
    ? (int) 
#line 7819 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(DEFAULT_ABI == ABI_V4
    && flag_pic == 1
    && (reload_in_progress || reload_completed))
    : -1 },
#line 5812 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
  { "(TARGET_POWER2 || TARGET_POWERPC)\n\
   && TARGET_HARD_FLOAT && (TARGET_FPRS || TARGET_E500_DOUBLE)",
    __builtin_constant_p 
#line 5812 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
((TARGET_POWER2 || TARGET_POWERPC)
   && TARGET_HARD_FLOAT && (TARGET_FPRS || TARGET_E500_DOUBLE))
    ? (int) 
#line 5812 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
((TARGET_POWER2 || TARGET_POWERPC)
   && TARGET_HARD_FLOAT && (TARGET_FPRS || TARGET_E500_DOUBLE))
    : -1 },
#line 144 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
  { "TARGET_POWERPC64",
    __builtin_constant_p 
#line 144 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC64)
    ? (int) 
#line 144 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC64)
    : -1 },
  { "(reload_completed && ! gpc_reg_operand (operands[0], SImode)) && (TARGET_32BIT)",
    __builtin_constant_p (
#line 14140 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(reload_completed && ! gpc_reg_operand (operands[0], SImode)) && 
#line 160 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_32BIT))
    ? (int) (
#line 14140 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(reload_completed && ! gpc_reg_operand (operands[0], SImode)) && 
#line 160 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_32BIT))
    : -1 },
  { "(TARGET_HARD_FLOAT && TARGET_FPRS) && ( reload_completed && REG_P (operands[1]) && REGNO (operands[0]) == REGNO (operands[1]))",
    __builtin_constant_p (
#line 4935 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_HARD_FLOAT && TARGET_FPRS) && 
#line 4940 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
( reload_completed && REG_P (operands[1]) && REGNO (operands[0]) == REGNO (operands[1])))
    ? (int) (
#line 4935 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_HARD_FLOAT && TARGET_FPRS) && 
#line 4940 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
( reload_completed && REG_P (operands[1]) && REGNO (operands[0]) == REGNO (operands[1])))
    : -1 },
#line 10701 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
  { "TARGET_32BIT && DEFAULT_ABI == ABI_AIX",
    __builtin_constant_p 
#line 10701 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_32BIT && DEFAULT_ABI == ABI_AIX)
    ? (int) 
#line 10701 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_32BIT && DEFAULT_ABI == ABI_AIX)
    : -1 },
#line 295 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/altivec.md"
  { "TARGET_MACHO && (DEFAULT_ABI == ABI_DARWIN) && TARGET_32BIT",
    __builtin_constant_p 
#line 295 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/altivec.md"
(TARGET_MACHO && (DEFAULT_ABI == ABI_DARWIN) && TARGET_32BIT)
    ? (int) 
#line 295 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/altivec.md"
(TARGET_MACHO && (DEFAULT_ABI == ABI_DARWIN) && TARGET_32BIT)
    : -1 },
#line 14401 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
  { "reload_completed",
    __builtin_constant_p 
#line 14401 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(reload_completed)
    ? (int) 
#line 14401 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(reload_completed)
    : -1 },
  { "(TARGET_POWERPC && ! TARGET_POWER) && (TARGET_POWERPC64)",
    __builtin_constant_p (
#line 2457 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC && ! TARGET_POWER) && 
#line 144 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC64))
    ? (int) (
#line 2457 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC && ! TARGET_POWER) && 
#line 144 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_POWERPC64))
    : -1 },
#line 160 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
  { "TARGET_64BIT",
    __builtin_constant_p 
#line 160 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_64BIT)
    ? (int) 
#line 160 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_64BIT)
    : -1 },
#line 9325 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
  { "TARGET_STRING && TARGET_POWER\n\
   && ((INTVAL (operands[2]) > 24 && INTVAL (operands[2]) < 32)\n\
       || INTVAL (operands[2]) == 0)\n\
   && (REGNO (operands[0]) < 5 || REGNO (operands[0]) > 12)\n\
   && (REGNO (operands[1]) < 5 || REGNO (operands[1]) > 12)\n\
   && REGNO (operands[4]) == 5",
    __builtin_constant_p 
#line 9325 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_STRING && TARGET_POWER
   && ((INTVAL (operands[2]) > 24 && INTVAL (operands[2]) < 32)
       || INTVAL (operands[2]) == 0)
   && (REGNO (operands[0]) < 5 || REGNO (operands[0]) > 12)
   && (REGNO (operands[1]) < 5 || REGNO (operands[1]) > 12)
   && REGNO (operands[4]) == 5)
    ? (int) 
#line 9325 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_STRING && TARGET_POWER
   && ((INTVAL (operands[2]) > 24 && INTVAL (operands[2]) < 32)
       || INTVAL (operands[2]) == 0)
   && (REGNO (operands[0]) < 5 || REGNO (operands[0]) > 12)
   && (REGNO (operands[1]) < 5 || REGNO (operands[1]) > 12)
   && REGNO (operands[4]) == 5)
    : -1 },
#line 6134 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
  { "! TARGET_POWERPC64",
    __builtin_constant_p 
#line 6134 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(! TARGET_POWERPC64)
    ? (int) 
#line 6134 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(! TARGET_POWERPC64)
    : -1 },
#line 1366 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
  { "TARGET_DLMZB",
    __builtin_constant_p 
#line 1366 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_DLMZB)
    ? (int) 
#line 1366 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_DLMZB)
    : -1 },
#line 8010 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
  { "reload_completed\n\
   && ((GET_CODE (operands[0]) == REG && REGNO (operands[0]) <= 31)\n\
       || (GET_CODE (operands[0]) == SUBREG\n\
	   && GET_CODE (SUBREG_REG (operands[0])) == REG\n\
	   && REGNO (SUBREG_REG (operands[0])) <= 31))",
    __builtin_constant_p 
#line 8010 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(reload_completed
   && ((GET_CODE (operands[0]) == REG && REGNO (operands[0]) <= 31)
       || (GET_CODE (operands[0]) == SUBREG
	   && GET_CODE (SUBREG_REG (operands[0])) == REG
	   && REGNO (SUBREG_REG (operands[0])) <= 31)))
    ? (int) 
#line 8010 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(reload_completed
   && ((GET_CODE (operands[0]) == REG && REGNO (operands[0]) <= 31)
       || (GET_CODE (operands[0]) == SUBREG
	   && GET_CODE (SUBREG_REG (operands[0])) == REG
	   && REGNO (SUBREG_REG (operands[0])) <= 31)))
    : -1 },
  { "((DEFAULT_ABI == ABI_DARWIN\n\
   || (DEFAULT_ABI == ABI_V4\n\
       && (INTVAL (operands[3]) & CALL_LONG) == 0))) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 10847 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
((DEFAULT_ABI == ABI_DARWIN
   || (DEFAULT_ABI == ABI_V4
       && (INTVAL (operands[3]) & CALL_LONG) == 0))) && 
#line 160 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_64BIT))
    ? (int) (
#line 10847 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
((DEFAULT_ABI == ABI_DARWIN
   || (DEFAULT_ABI == ABI_V4
       && (INTVAL (operands[3]) & CALL_LONG) == 0))) && 
#line 160 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
(TARGET_64BIT))
    : -1 },
#line 5867 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
  { "(TARGET_POWER2 || TARGET_POWERPC) && TARGET_HARD_FLOAT && TARGET_FPRS\n\
   && TARGET_PPC_GFXOPT",
    __builtin_constant_p 
#line 5867 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
((TARGET_POWER2 || TARGET_POWERPC) && TARGET_HARD_FLOAT && TARGET_FPRS
   && TARGET_PPC_GFXOPT)
    ? (int) 
#line 5867 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md"
((TARGET_POWER2 || TARGET_POWERPC) && TARGET_HARD_FLOAT && TARGET_FPRS
   && TARGET_PPC_GFXOPT)
    : -1 },

};
#endif /* gcc >= 3.0.1 */

int
main(void)
{
  unsigned int i;
  const char *p;
  puts ("(define_conditions [");
#if GCC_VERSION >= 3001
  for (i = 0; i < ARRAY_SIZE (insn_conditions); i++)
    {
      printf ("  (%d \"", insn_conditions[i].value);
      for (p = insn_conditions[i].expr; *p; p++)
        {
          switch (*p)
	     {
	     case '\\':
	     case '\"': putchar ('\\'); break;
	     default: break;
	     }
          putchar (*p);
        }
      puts ("\")");
    }
#endif /* gcc >= 3.0.1 */
  puts ("])");
  fflush (stdout);
return ferror (stdout) != 0 ? FATAL_EXIT_CODE : SUCCESS_EXIT_CODE;
}
