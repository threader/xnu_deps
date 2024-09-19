/* Generated automatically by the program 'build/genpreds'
   from the machine description file '/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/rs6000.md'.  */

#include "config.h"
#include "system.h"
#include "coretypes.h"
#include "tm.h"
#include "rtl.h"
#include "tree.h"
#include "tm_p.h"
#include "function.h"
#include "insn-config.h"
#include "recog.h"
#include "real.h"
#include "output.h"
#include "flags.h"
#include "hard-reg-set.h"
#include "resource.h"
#include "toplev.h"
#include "reload.h"
#include "regs.h"
#include "tm-constrs.h"

int
any_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case CONST_INT:
    case CONST_DOUBLE:
    case CONST:
    case SYMBOL_REF:
    case LABEL_REF:
    case SUBREG:
    case REG:
    case MEM:
      return true;
    default:
      break;
    }
  return false;
}

int
any_parallel_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == PARALLEL) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

int
count_register_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == REG) && (
#line 32 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/predicates.md"
(REGNO (op) == COUNT_REGISTER_REGNUM
		    || REGNO (op) > LAST_VIRTUAL_REGISTER))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

int
altivec_register_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (register_operand (op, mode)) && (
#line 38 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/predicates.md"
(GET_CODE (op) != REG
		     || ALTIVEC_REGNO_P (REGNO (op))
		     || REGNO (op) > LAST_VIRTUAL_REGISTER));
}

int
xer_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == REG) && (
#line 45 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/predicates.md"
(XER_REGNO_P (REGNO (op))))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

int
s5bit_cint_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 50 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/predicates.md"
(INTVAL (op) >= -16 && INTVAL (op) <= 15));
}

int
u5bit_cint_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 55 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/predicates.md"
(INTVAL (op) >= 0 && INTVAL (op) <= 31));
}

int
s8bit_cint_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 61 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/predicates.md"
(INTVAL (op) >= -128 && INTVAL (op) <= 127));
}

int
short_cint_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 66 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/predicates.md"
(satisfies_constraint_I (op)));
}

int
u_short_cint_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 71 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/predicates.md"
(satisfies_constraint_K (op)));
}

int
non_short_cint_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 76 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/predicates.md"
((unsigned HOST_WIDE_INT)
		    (INTVAL (op) + 0x8000) >= 0x10000));
}

int
exact_log2_cint_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 82 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/predicates.md"
(INTVAL (op) > 0 && exact_log2 (INTVAL (op)) >= 0));
}

int
gpc_reg_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (register_operand (op, mode)) && (
#line 87 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/predicates.md"
((GET_CODE (op) != REG
		      || (REGNO (op) >= ARG_POINTER_REGNUM
			  && !XER_REGNO_P (REGNO (op)))
		      || REGNO (op) < MQ_REGNO)
		     && !((TARGET_E500_DOUBLE || TARGET_SPE)
			  && invalid_e500_subreg (op, mode))));
}

int
cc_reg_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (register_operand (op, mode)) && (
#line 97 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/predicates.md"
(GET_CODE (op) != REG
		     || REGNO (op) > LAST_VIRTUAL_REGISTER
		     || CR_REGNO_P (REGNO (op))));
}

int
cc_reg_not_cr0_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (register_operand (op, mode)) && (
#line 104 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/predicates.md"
(GET_CODE (op) != REG
		     || REGNO (op) > LAST_VIRTUAL_REGISTER
		     || CR_REGNO_NOT_CR0_P (REGNO (op))));
}

int
reg_or_short_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) ? (short_cint_operand (op, mode)) : (gpc_reg_operand (op, mode));
}

int
reg_or_neg_short_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) ? (
#line 122 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/predicates.md"
(satisfies_constraint_P (op)
		 && INTVAL (op) != 0)) : (gpc_reg_operand (op, mode));
}

int
reg_or_aligned_short_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) ? ((short_cint_operand (op, mode)) && (
#line 131 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/predicates.md"
(!(INTVAL (op) & 3)))) : (gpc_reg_operand (op, mode));
}

int
reg_or_u_short_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) ? (u_short_cint_operand (op, mode)) : (gpc_reg_operand (op, mode));
}

int
reg_or_cint_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) || (gpc_reg_operand (op, mode));
}

int
reg_or_add_cint_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) ? (
#line 151 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/predicates.md"
((HOST_BITS_PER_WIDE_INT == 32
		  && (mode == SImode || INTVAL (op) < 0x7fff8000))
		 || ((unsigned HOST_WIDE_INT) (INTVAL (op) + 0x80008000)
		     < (unsigned HOST_WIDE_INT) 0x100000000ll))) : (gpc_reg_operand (op, mode));
}

int
reg_or_sub_cint_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) ? (
#line 161 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/predicates.md"
((HOST_BITS_PER_WIDE_INT == 32
		  && (mode == SImode || - INTVAL (op) < 0x7fff8000))
		 || ((unsigned HOST_WIDE_INT) (- INTVAL (op) 
					       + (mode == SImode
						  ? 0x80000000 : 0x80008000))
		     < (unsigned HOST_WIDE_INT) 0x100000000ll))) : (gpc_reg_operand (op, mode));
}

int
reg_or_logical_cint_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) ? (
#line 173 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/predicates.md"
((GET_MODE_BITSIZE (mode) > HOST_BITS_PER_WIDE_INT
		  && INTVAL (op) >= 0)
		 || ((INTVAL (op) & GET_MODE_MASK (mode)
		      & (~ (unsigned HOST_WIDE_INT) 0xffffffff)) == 0))) : ((GET_CODE (op) == CONST_DOUBLE) ? (
#line 178 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/predicates.md"
(GET_MODE_BITSIZE (mode) > HOST_BITS_PER_WIDE_INT
		   && mode == DImode
		   && CONST_DOUBLE_HIGH (op) == 0)) : (gpc_reg_operand (op, mode)));
}

static inline int
easy_fp_constant_1 (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
#line 187 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/predicates.md"
{
  long k[4];
  REAL_VALUE_TYPE rv;

  if (GET_MODE (op) != mode
      || (!SCALAR_FLOAT_MODE_P (mode) && mode != DImode))
    return 0;

  /* Consider all constants with -msoft-float to be easy.  */
  if ((TARGET_SOFT_FLOAT || TARGET_E500_SINGLE)
      && mode != DImode)
    return 1;

  if (DECIMAL_FLOAT_MODE_P (mode))
    return 0;

  /* If we are using V.4 style PIC, consider all constants to be hard.  */
  if (flag_pic && DEFAULT_ABI == ABI_V4)
    return 0;

#ifdef TARGET_RELOCATABLE
  /* Similarly if we are using -mrelocatable, consider all constants
     to be hard.  */
  if (TARGET_RELOCATABLE)
    return 0;
#endif

  switch (mode)
    {
    case TFmode:
      REAL_VALUE_FROM_CONST_DOUBLE (rv, op);
      REAL_VALUE_TO_TARGET_LONG_DOUBLE (rv, k);

      return (num_insns_constant_wide ((HOST_WIDE_INT) k[0]) == 1
	      && num_insns_constant_wide ((HOST_WIDE_INT) k[1]) == 1
	      && num_insns_constant_wide ((HOST_WIDE_INT) k[2]) == 1
	      && num_insns_constant_wide ((HOST_WIDE_INT) k[3]) == 1);

    case DFmode:
      /* Force constants to memory before reload to utilize
	 compress_float_constant.
	 Avoid this when flag_unsafe_math_optimizations is enabled
	 because RDIV division to reciprocal optimization is not able
	 to regenerate the division.  */
      if (TARGET_E500_DOUBLE
          || (!reload_in_progress && !reload_completed
	      && !flag_unsafe_math_optimizations))
        return 0;

      REAL_VALUE_FROM_CONST_DOUBLE (rv, op);
      REAL_VALUE_TO_TARGET_DOUBLE (rv, k);

      return (num_insns_constant_wide ((HOST_WIDE_INT) k[0]) == 1
	      && num_insns_constant_wide ((HOST_WIDE_INT) k[1]) == 1);

    case SFmode:
      /* The constant 0.f is easy.  */
      if (op == CONST0_RTX (SFmode))
	return 1;

      /* Force constants to memory before reload to utilize
	 compress_float_constant.
	 Avoid this when flag_unsafe_math_optimizations is enabled
	 because RDIV division to reciprocal optimization is not able
	 to regenerate the division.  */
      if (!reload_in_progress && !reload_completed
          && !flag_unsafe_math_optimizations)
	return 0;

      REAL_VALUE_FROM_CONST_DOUBLE (rv, op);
      REAL_VALUE_TO_TARGET_SINGLE (rv, k[0]);

      return num_insns_constant_wide (k[0]) == 1;

  case DImode:
    return ((TARGET_POWERPC64
	     && GET_CODE (op) == CONST_DOUBLE && CONST_DOUBLE_LOW (op) == 0)
	    || (num_insns_constant (op, DImode) <= 2));

  case SImode:
    return 1;

  default:
    gcc_unreachable ();
  }
}

int
easy_fp_constant (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_DOUBLE) && (
(easy_fp_constant_1 (op, mode)));
}

static inline int
easy_vector_constant_1 (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
#line 278 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/predicates.md"
{
  if (ALTIVEC_VECTOR_MODE (mode))
    {
      if (zero_constant (op, mode))
        return true;
      return easy_altivec_constant (op, mode);
    }

  if (SPE_VECTOR_MODE (mode))
    {
      int cst, cst2;
      if (zero_constant (op, mode))
	return true;
      if (GET_MODE_CLASS (mode) != MODE_VECTOR_INT)
        return false;

      /* Limit SPE vectors to 15 bits signed.  These we can generate with:
	   li r0, CONSTANT1
	   evmergelo r0, r0, r0
	   li r0, CONSTANT2

	 I don't know how efficient it would be to allow bigger constants,
	 considering we'll have an extra 'ori' for every 'li'.  I doubt 5
	 instructions is better than a 64-bit memory load, but I don't
	 have the e500 timing specs.  */
      if (mode == V2SImode)
	{
	  cst  = INTVAL (CONST_VECTOR_ELT (op, 0));
	  cst2 = INTVAL (CONST_VECTOR_ELT (op, 1));
	  return cst  >= -0x7fff && cst <= 0x7fff
	         && cst2 >= -0x7fff && cst2 <= 0x7fff;
	}
    }

  return false;
}

int
easy_vector_constant (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == CONST_VECTOR) && (
(easy_vector_constant_1 (op, mode)))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

static inline int
easy_vector_constant_add_self_1 (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
#line 320 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/predicates.md"
{
  rtx last = CONST_VECTOR_ELT (op, GET_MODE_NUNITS (mode) - 1);
  HOST_WIDE_INT val = ((INTVAL (last) & 0xff) ^ 0x80) - 0x80;
  return EASY_VECTOR_15_ADD_SELF (val);
}

int
easy_vector_constant_add_self (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (((GET_CODE (op) == CONST_VECTOR) && ((
#line 318 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/predicates.md"
(TARGET_ALTIVEC)) && (
#line 319 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/predicates.md"
(easy_altivec_constant (op, mode))))) && (
(easy_vector_constant_add_self_1 (op, mode)))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

int
zero_constant (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case CONST_INT:
    case CONST_DOUBLE:
    case CONST_VECTOR:
      break;
    default:
      return false;
    }
  return 
#line 329 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/predicates.md"
(op == CONST0_RTX (mode));
}

int
zero_fp_constant (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_DOUBLE) && (
#line 335 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/predicates.md"
(SCALAR_FLOAT_MODE_P (mode)
		    && op == CONST0_RTX (mode)));
}

int
volatile_mem_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (((GET_CODE (op) == MEM) && (
#line 344 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/predicates.md"
(MEM_VOLATILE_P (op)))) && ((
#line 345 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/predicates.md"
(reload_completed)) ? (memory_operand (op, mode)) : ((
#line 347 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/predicates.md"
(reload_in_progress)) ? (
#line 348 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/predicates.md"
(strict_memory_address_p (mode, XEXP (op, 0)))) : (
#line 349 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/predicates.md"
(memory_address_p (mode, XEXP (op, 0))))))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

int
offsettable_mem_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == MEM) && (
#line 354 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/predicates.md"
(offsettable_address_p (reload_completed
					   || reload_in_progress,
					   mode, XEXP (op, 0))))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

int
word_offset_memref_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (memory_operand (op, mode)) && (
#line 361 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/predicates.md"
(GET_CODE (XEXP (op, 0)) != PLUS
		    || ! REG_P (XEXP (XEXP (op, 0), 0)) 
		    || GET_CODE (XEXP (XEXP (op, 0), 1)) != CONST_INT
		    || INTVAL (XEXP (XEXP (op, 0), 1)) % 4 == 0));
}

static inline int
indexed_or_indirect_operand_1 (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
#line 369 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/predicates.md"
{
  op = XEXP (op, 0);
  if (TARGET_ALTIVEC
      && ALTIVEC_VECTOR_MODE (mode)
      && GET_CODE (op) == AND
      && GET_CODE (XEXP (op, 1)) == CONST_INT
      && INTVAL (XEXP (op, 1)) == -16)
    op = XEXP (op, 0);

  return indexed_or_indirect_address (op, mode);
}

int
indexed_or_indirect_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == MEM) && (
(indexed_or_indirect_operand_1 (op, mode)))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

int
indexed_or_indirect_address (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (
#line 383 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/predicates.md"
(REG_P (op)
		    || (GET_CODE (op) == PLUS
			/* Omit testing REG_P (XEXP (op, 0)).  */
			&& REG_P (XEXP (op, 1))))) && (address_operand (op, mode));
}

int
fix_trunc_dest_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (
#line 394 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/predicates.md"
(! TARGET_E500_DOUBLE && TARGET_PPC_GFXOPT)) ? (memory_operand (op, mode)) : (gpc_reg_operand (op, mode));
}

int
add_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) ? (
#line 402 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/predicates.md"
(satisfies_constraint_I (op)
		 || satisfies_constraint_L (op))) : (gpc_reg_operand (op, mode));
}

int
non_add_cint_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 409 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/predicates.md"
(!satisfies_constraint_I (op)
		    && !satisfies_constraint_L (op)));
}

static inline int
logical_const_operand_1 (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
#line 416 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/predicates.md"
{
  HOST_WIDE_INT opl, oph;

  if (GET_CODE (op) == CONST_INT)
    {
      opl = INTVAL (op) & GET_MODE_MASK (mode);

      if (HOST_BITS_PER_WIDE_INT <= 32
	  && GET_MODE_BITSIZE (mode) > HOST_BITS_PER_WIDE_INT && opl < 0)
	return 0;
    }
  else if (GET_CODE (op) == CONST_DOUBLE)
    {
      gcc_assert (GET_MODE_BITSIZE (mode) > HOST_BITS_PER_WIDE_INT);

      opl = CONST_DOUBLE_LOW (op);
      oph = CONST_DOUBLE_HIGH (op);
      if (oph != 0)
	return 0;
    }
  else
    return 0;

  return ((opl & ~ (unsigned HOST_WIDE_INT) 0xffff) == 0
	  || (opl & ~ (unsigned HOST_WIDE_INT) 0xffff0000) == 0);
}

int
logical_const_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case CONST_INT:
    case CONST_DOUBLE:
      break;
    default:
      return false;
    }
  return 
(logical_const_operand_1 (op, mode));
}

int
logical_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (gpc_reg_operand (op, mode)) || (logical_const_operand (op, mode));
}

int
non_logical_cint_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case CONST_INT:
    case CONST_DOUBLE:
      break;
    default:
      return false;
    }
  return (!(logical_operand (op, mode))) && (reg_or_logical_cint_operand (op, mode));
}

static inline int
mask_operand_1 (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
#line 462 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/predicates.md"
{
  HOST_WIDE_INT c, lsb;

  c = INTVAL (op);

  if (TARGET_POWERPC64)
    {
      /* Fail if the mask is not 32-bit.  */
      if (mode == DImode && (c & ~(unsigned HOST_WIDE_INT) 0xffffffff) != 0)
	return 0;

      /* Fail if the mask wraps around because the upper 32-bits of the
	 mask will all be 1s, contrary to GCC's internal view.  */
      if ((c & 0x80000001) == 0x80000001)
	return 0;
    }

  /* We don't change the number of transitions by inverting,
     so make sure we start with the LS bit zero.  */
  if (c & 1)
    c = ~c;

  /* Reject all zeros or all ones.  */
  if (c == 0)
    return 0;

  /* Find the first transition.  */
  lsb = c & -c;

  /* Invert to look for a second transition.  */
  c = ~c;

  /* Erase first transition.  */
  c &= -lsb;

  /* Find the second transition (if any).  */
  lsb = c & -c;

  /* Match if all the bits above are 1's (or c is zero).  */
  return c == -lsb;
}

int
mask_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
(mask_operand_1 (op, mode)));
}

static inline int
mask_operand_wrap_1 (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
#line 507 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/predicates.md"
{
  HOST_WIDE_INT c, lsb;

  c = INTVAL (op);

  if ((c & 0x80000001) != 0x80000001)
    return 0;

  c = ~c;
  if (c == 0)
    return 0;

  lsb = c & -c;
  c = ~c;
  c &= -lsb;
  lsb = c & -c;
  return c == -lsb;
}

int
mask_operand_wrap (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
(mask_operand_wrap_1 (op, mode)));
}

static inline int
mask64_operand_1 (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
#line 532 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/predicates.md"
{
  HOST_WIDE_INT c, lsb;

  c = INTVAL (op);

  /* Reject all zeros.  */
  if (c == 0)
    return 0;

  /* We don't change the number of transitions by inverting,
     so make sure we start with the LS bit zero.  */
  if (c & 1)
    c = ~c;

  /* Find the first transition.  */
  lsb = c & -c;

  /* Match if all the bits above are 1's (or c is zero).  */
  return c == -lsb;
}

int
mask64_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
(mask64_operand_1 (op, mode)));
}

static inline int
mask64_2_operand_1 (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
#line 558 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/predicates.md"
{
  HOST_WIDE_INT c, lsb;

  c = INTVAL (op);

  /* Disallow all zeros.  */
  if (c == 0)
    return 0;

  /* We don't change the number of transitions by inverting,
     so make sure we start with the LS bit zero.  */
  if (c & 1)
    c = ~c;

  /* Find the first transition.  */
  lsb = c & -c;

  /* Invert to look for a second transition.  */
  c = ~c;

  /* Erase first transition.  */
  c &= -lsb;

  /* Find the second transition.  */
  lsb = c & -c;

  /* Invert to look for a third transition.  */
  c = ~c;

  /* Erase second transition.  */
  c &= -lsb;

  /* Find the third transition (if any).  */
  lsb = c & -c;

  /* Match if all the bits above are 1's (or c is zero).  */
  return c == -lsb;
}

int
mask64_2_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
(mask64_2_operand_1 (op, mode)));
}

int
and64_2_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (mask64_2_operand (op, mode)) || ((
#line 601 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/predicates.md"
(fixed_regs[CR0_REGNO])) ? (gpc_reg_operand (op, mode)) : (logical_operand (op, mode)));
}

int
and_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (mask_operand (op, mode)) || (((
#line 609 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/predicates.md"
(TARGET_POWERPC64 && mode == DImode)) && (mask64_operand (op, mode))) || ((
#line 611 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/predicates.md"
(fixed_regs[CR0_REGNO])) ? (gpc_reg_operand (op, mode)) : (logical_operand (op, mode))));
}

int
scc_eq_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (logical_operand (op, mode)) || (short_cint_operand (op, mode));
}

int
reg_or_mem_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (memory_operand (op, mode)) || ((((GET_CODE (op) == MEM) && (
#line 624 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/predicates.md"
(macho_lo_sum_memory_operand (op, mode)))) && (
(mode == VOIDmode || GET_MODE (op) == mode))) || ((volatile_mem_operand (op, mode)) || (gpc_reg_operand (op, mode))));
}

int
reg_or_none500mem_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == MEM) ? (((
#line 631 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/predicates.md"
(!TARGET_E500_DOUBLE)) && ((memory_operand (op, mode)) || ((
#line 633 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/predicates.md"
(macho_lo_sum_memory_operand (op, mode))) || (volatile_mem_operand (op, mode))))) && (
(mode == VOIDmode || GET_MODE (op) == mode))) : (gpc_reg_operand (op, mode));
}

int
zero_reg_mem_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (zero_fp_constant (op, mode)) || (reg_or_mem_operand (op, mode));
}

static inline int
lwa_operand_1 (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
#line 647 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/predicates.md"
{
  rtx inner = op;

  if (reload_completed && GET_CODE (inner) == SUBREG)
    inner = SUBREG_REG (inner);

  return gpc_reg_operand (inner, mode)
    || (memory_operand (inner, mode)
	&& GET_CODE (XEXP (inner, 0)) != PRE_INC
	&& GET_CODE (XEXP (inner, 0)) != PRE_DEC
	&& (GET_CODE (XEXP (inner, 0)) != PLUS
	    || GET_CODE (XEXP (XEXP (inner, 0), 1)) != CONST_INT
        /* APPLE LOCAL begin radar 4805365 */
	    || INTVAL (XEXP (XEXP (inner, 0), 1)) % 4 == 0)
        /* Return 1 if the alignment is known and 32 bits aligned. */
        && (MEM_ALIGN (inner) != 0
            && MEM_ALIGN (inner) % 32 == 0));
        /* APPLE LOCAL end radar 4805365 */
}

int
lwa_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case REG:
    case SUBREG:
    case MEM:
      break;
    default:
      return false;
    }
  return (
(lwa_operand_1 (op, mode))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

int
symbol_ref_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == SYMBOL_REF) && (
#line 670 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/predicates.md"
((mode == VOIDmode || GET_MODE (op) == mode)
		    && (DEFAULT_ABI != ABI_AIX || SYMBOL_REF_FUNCTION_P (op))))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

int
got_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case SYMBOL_REF:
    case CONST:
    case LABEL_REF:
      break;
    default:
      return false;
    }
  return 
(mode == VOIDmode || GET_MODE (op) == mode);
}

int
got_no_const_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case SYMBOL_REF:
    case LABEL_REF:
      break;
    default:
      return false;
    }
  return 
(mode == VOIDmode || GET_MODE (op) == mode);
}

int
rs6000_tls_symbol_ref (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == SYMBOL_REF) && (
#line 686 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/predicates.md"
(RS6000_SYMBOL_REF_TLS_P (op)))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

int
call_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == REG) ? (
#line 692 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/predicates.md"
(REGNO (op) == LINK_REGISTER_REGNUM
		  || REGNO (op) == COUNT_REGISTER_REGNUM
		  /* APPLE LOCAL begin accept hard R12 as target reg */
#ifdef MAGIC_INDIRECT_CALL_REG
		  || REGNO (op) == MAGIC_INDIRECT_CALL_REG
#endif
		  /* APPLE LOCAL end accept hard R12 as target reg */
		  || REGNO (op) >= FIRST_PSEUDO_REGISTER)) : (GET_CODE (op) == SYMBOL_REF)) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

int
current_file_function_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == SYMBOL_REF) && (
#line 706 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/predicates.md"
((DEFAULT_ABI != ABI_AIX || SYMBOL_REF_FUNCTION_P (op))
		    && ((SYMBOL_REF_LOCAL_P (op)
			 && (DEFAULT_ABI != ABI_AIX
			     || !SYMBOL_REF_EXTERNAL_P (op)))
		        || (op == XEXP (DECL_RTL (current_function_decl),
						  0)))))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

static inline int
input_operand_1 (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
#line 717 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/predicates.md"
{
  /* Memory is always valid.  */
  if (memory_operand (op, mode))
    return 1;

  /* For floating-point, easy constants are valid.  */
  if (SCALAR_FLOAT_MODE_P (mode)
      && CONSTANT_P (op)
      && easy_fp_constant (op, mode))
    return 1;

  /* Allow any integer constant.  */
  if (GET_MODE_CLASS (mode) == MODE_INT
      && (GET_CODE (op) == CONST_INT
	  || GET_CODE (op) == CONST_DOUBLE))
    return 1;

  /* Allow easy vector constants.  */
  if (GET_CODE (op) == CONST_VECTOR
      && easy_vector_constant (op, mode))
    return 1;

  /* Do not allow invalid E500 subregs.  */
  if ((TARGET_E500_DOUBLE || TARGET_SPE)
      && GET_CODE (op) == SUBREG
      && invalid_e500_subreg (op, mode))
    return 0;

  /* For floating-point or multi-word mode, the only remaining valid type
     is a register.  */
  if (SCALAR_FLOAT_MODE_P (mode)
      || GET_MODE_SIZE (mode) > UNITS_PER_WORD)
    return register_operand (op, mode);

  /* The only cases left are integral modes one word or smaller (we
     do not get called for MODE_CC values).  These can be in any
     register.  */
  if (register_operand (op, mode))
    return 1;

  /* A SYMBOL_REF referring to the TOC is valid.  */
  if (legitimate_constant_pool_address_p (op))
    return 1;

  /* A constant pool expression (relative to the TOC) is valid */
  if (toc_relative_expr_p (op))
    return 1;

  /* V.4 allows SYMBOL_REFs and CONSTs that are in the small data region
     to be valid.  */
  if (DEFAULT_ABI == ABI_V4
      && (GET_CODE (op) == SYMBOL_REF || GET_CODE (op) == CONST)
      && small_data_operand (op, Pmode))
    return 1;

  return 0;
}

int
input_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case LABEL_REF:
    case SYMBOL_REF:
    case CONST:
    case HIGH:
    case REG:
    case SUBREG:
    case MEM:
    case CONST_DOUBLE:
    case CONST_VECTOR:
    case CONST_INT:
    case PLUS:
      break;
    default:
      return false;
    }
  return 
(input_operand_1 (op, mode));
}

static inline int
rs6000_nonimmediate_operand_1 (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
#line 778 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/predicates.md"
{
  if ((TARGET_E500_DOUBLE || TARGET_SPE)
      && GET_CODE (op) == SUBREG
      && invalid_e500_subreg (op, mode))
    return 0;

  return nonimmediate_operand (op, mode);
}

int
rs6000_nonimmediate_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case REG:
    case SUBREG:
    case MEM:
      break;
    default:
      return false;
    }
  return (
(rs6000_nonimmediate_operand_1 (op, mode))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

int
boolean_operator (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case AND:
    case IOR:
    case XOR:
      break;
    default:
      return false;
    }
  return 
(mode == VOIDmode || GET_MODE (op) == mode);
}

int
boolean_or_operator (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case IOR:
    case XOR:
      break;
    default:
      return false;
    }
  return 
(mode == VOIDmode || GET_MODE (op) == mode);
}

int
equality_operator (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case EQ:
    case NE:
      return true;
    default:
      break;
    }
  return false;
}

int
min_max_operator (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case SMIN:
    case SMAX:
    case UMIN:
    case UMAX:
      break;
    default:
      return false;
    }
  return 
(mode == VOIDmode || GET_MODE (op) == mode);
}

int
branch_comparison_operator (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (comparison_operator (op, mode)) && ((
#line 808 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/predicates.md"
(GET_MODE_CLASS (GET_MODE (XEXP (op, 0))) == MODE_CC)) && (
#line 809 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/predicates.md"
(validate_condition_mode (GET_CODE (op),
						   GET_MODE (XEXP (op, 0))),
			  1)));
}

int
scc_comparison_operator (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (branch_comparison_operator (op, mode)) && (GET_CODE (op) == EQ || GET_CODE (op) == LT || GET_CODE (op) == GT || GET_CODE (op) == LTU || GET_CODE (op) == GTU || GET_CODE (op) == UNORDERED);
}

int
branch_positive_comparison_operator (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (branch_comparison_operator (op, mode)) && (GET_CODE (op) == EQ || GET_CODE (op) == LT || GET_CODE (op) == GT || GET_CODE (op) == LTU || GET_CODE (op) == GTU || GET_CODE (op) == UNORDERED);
}

int
trap_comparison_operator (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (comparison_operator (op, mode)) && (GET_CODE (op) == EQ || GET_CODE (op) == NE || GET_CODE (op) == LE || GET_CODE (op) == LT || GET_CODE (op) == GE || GET_CODE (op) == GT || GET_CODE (op) == LEU || GET_CODE (op) == LTU || GET_CODE (op) == GEU || GET_CODE (op) == GTU);
}

static inline int
load_multiple_operation_1 (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
#line 833 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/predicates.md"
{
  int count = XVECLEN (op, 0);
  unsigned int dest_regno;
  rtx src_addr;
  int i;

  /* Perform a quick check so we don't blow up below.  */
  if (count <= 1
      || GET_CODE (XVECEXP (op, 0, 0)) != SET
      || GET_CODE (SET_DEST (XVECEXP (op, 0, 0))) != REG
      || GET_CODE (SET_SRC (XVECEXP (op, 0, 0))) != MEM)
    return 0;

  dest_regno = REGNO (SET_DEST (XVECEXP (op, 0, 0)));
  src_addr = XEXP (SET_SRC (XVECEXP (op, 0, 0)), 0);

  for (i = 1; i < count; i++)
    {
      rtx elt = XVECEXP (op, 0, i);

      if (GET_CODE (elt) != SET
	  || GET_CODE (SET_DEST (elt)) != REG
	  || GET_MODE (SET_DEST (elt)) != SImode
	  || REGNO (SET_DEST (elt)) != dest_regno + i
	  || GET_CODE (SET_SRC (elt)) != MEM
	  || GET_MODE (SET_SRC (elt)) != SImode
	  || GET_CODE (XEXP (SET_SRC (elt), 0)) != PLUS
	  || ! rtx_equal_p (XEXP (XEXP (SET_SRC (elt), 0), 0), src_addr)
	  || GET_CODE (XEXP (XEXP (SET_SRC (elt), 0), 1)) != CONST_INT
	  || INTVAL (XEXP (XEXP (SET_SRC (elt), 0), 1)) != i * 4)
	return 0;
    }

  return 1;
}

int
load_multiple_operation (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == PARALLEL) && (
(load_multiple_operation_1 (op, mode)))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

static inline int
store_multiple_operation_1 (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
#line 873 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/predicates.md"
{
  int count = XVECLEN (op, 0) - 1;
  unsigned int src_regno;
  rtx dest_addr;
  int i;

  /* Perform a quick check so we don't blow up below.  */
  if (count <= 1
      || GET_CODE (XVECEXP (op, 0, 0)) != SET
      || GET_CODE (SET_DEST (XVECEXP (op, 0, 0))) != MEM
      || GET_CODE (SET_SRC (XVECEXP (op, 0, 0))) != REG)
    return 0;

  src_regno = REGNO (SET_SRC (XVECEXP (op, 0, 0)));
  dest_addr = XEXP (SET_DEST (XVECEXP (op, 0, 0)), 0);

  for (i = 1; i < count; i++)
    {
      rtx elt = XVECEXP (op, 0, i + 1);

      if (GET_CODE (elt) != SET
	  || GET_CODE (SET_SRC (elt)) != REG
	  || GET_MODE (SET_SRC (elt)) != SImode
	  || REGNO (SET_SRC (elt)) != src_regno + i
	  || GET_CODE (SET_DEST (elt)) != MEM
	  || GET_MODE (SET_DEST (elt)) != SImode
	  || GET_CODE (XEXP (SET_DEST (elt), 0)) != PLUS
	  || ! rtx_equal_p (XEXP (XEXP (SET_DEST (elt), 0), 0), dest_addr)
	  || GET_CODE (XEXP (XEXP (SET_DEST (elt), 0), 1)) != CONST_INT
	  || INTVAL (XEXP (XEXP (SET_DEST (elt), 0), 1)) != i * 4)
	return 0;
    }

  return 1;
}

int
store_multiple_operation (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == PARALLEL) && (
(store_multiple_operation_1 (op, mode)))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

static inline int
save_world_operation_1 (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
#line 913 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/predicates.md"
{
  int index;
  int i;
  rtx elt;
  int count = XVECLEN (op, 0);

  if (count != 55)
    return 0;

  index = 0;
  if (GET_CODE (XVECEXP (op, 0, index++)) != CLOBBER
      || GET_CODE (XVECEXP (op, 0, index++)) != USE)
    return 0;

  for (i=1; i <= 18; i++)
    {
      elt = XVECEXP (op, 0, index++);
      if (GET_CODE (elt) != SET
	  || GET_CODE (SET_DEST (elt)) != MEM
	  || ! memory_operand (SET_DEST (elt), DFmode)
	  || GET_CODE (SET_SRC (elt)) != REG
	  || GET_MODE (SET_SRC (elt)) != DFmode)
	return 0;
    }

  for (i=1; i <= 12; i++)
    {
      elt = XVECEXP (op, 0, index++);
      if (GET_CODE (elt) != SET
	  || GET_CODE (SET_DEST (elt)) != MEM
	  || GET_CODE (SET_SRC (elt)) != REG
	  || GET_MODE (SET_SRC (elt)) != V4SImode)
	return 0;
    }

  for (i=1; i <= 19; i++)
    {
      elt = XVECEXP (op, 0, index++);
      if (GET_CODE (elt) != SET
	  || GET_CODE (SET_DEST (elt)) != MEM
	  || ! memory_operand (SET_DEST (elt), Pmode)
	  || GET_CODE (SET_SRC (elt)) != REG
	  || GET_MODE (SET_SRC (elt)) != Pmode)
	return 0;
    }

  elt = XVECEXP (op, 0, index++);
  if (GET_CODE (elt) != SET
      || GET_CODE (SET_DEST (elt)) != MEM
      || ! memory_operand (SET_DEST (elt), Pmode)
      || GET_CODE (SET_SRC (elt)) != REG
      || REGNO (SET_SRC (elt)) != CR2_REGNO
      || GET_MODE (SET_SRC (elt)) != Pmode)
    return 0;

  if (GET_CODE (XVECEXP (op, 0, index++)) != USE
      || GET_CODE (XVECEXP (op, 0, index++)) != USE
      || GET_CODE (XVECEXP (op, 0, index++)) != CLOBBER)
    return 0;
  return 1;
}

int
save_world_operation (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == PARALLEL) && (
(save_world_operation_1 (op, mode)))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

static inline int
restore_world_operation_1 (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
#line 979 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/predicates.md"
{
  int index;
  int i;
  rtx elt;
  int count = XVECLEN (op, 0);

  if (count != 59)
    return 0;

  index = 0;
  if (GET_CODE (XVECEXP (op, 0, index++)) != RETURN
      || GET_CODE (XVECEXP (op, 0, index++)) != USE
      || GET_CODE (XVECEXP (op, 0, index++)) != USE
      || GET_CODE (XVECEXP (op, 0, index++)) != CLOBBER)
    return 0;

  elt = XVECEXP (op, 0, index++);
  if (GET_CODE (elt) != SET
      || GET_CODE (SET_SRC (elt)) != MEM
      || ! memory_operand (SET_SRC (elt), Pmode)
      || GET_CODE (SET_DEST (elt)) != REG
      || REGNO (SET_DEST (elt)) != CR2_REGNO
      || GET_MODE (SET_DEST (elt)) != Pmode)
    return 0;

  for (i=1; i <= 19; i++)
    {
      elt = XVECEXP (op, 0, index++);
      if (GET_CODE (elt) != SET
	  || GET_CODE (SET_SRC (elt)) != MEM
	  || ! memory_operand (SET_SRC (elt), Pmode)
	  || GET_CODE (SET_DEST (elt)) != REG
	  || GET_MODE (SET_DEST (elt)) != Pmode)
	return 0;
    }

  for (i=1; i <= 12; i++)
    {
      elt = XVECEXP (op, 0, index++);
      if (GET_CODE (elt) != SET
	  || GET_CODE (SET_SRC (elt)) != MEM
	  || GET_CODE (SET_DEST (elt)) != REG
	  || GET_MODE (SET_DEST (elt)) != V4SImode)
	return 0;
    }

  for (i=1; i <= 18; i++)
    {
      elt = XVECEXP (op, 0, index++);
      if (GET_CODE (elt) != SET
	  || GET_CODE (SET_SRC (elt)) != MEM
	  || ! memory_operand (SET_SRC (elt), DFmode)
	  || GET_CODE (SET_DEST (elt)) != REG
	  || GET_MODE (SET_DEST (elt)) != DFmode)
	return 0;
    }

  if (GET_CODE (XVECEXP (op, 0, index++)) != CLOBBER
      || GET_CODE (XVECEXP (op, 0, index++)) != CLOBBER
      || GET_CODE (XVECEXP (op, 0, index++)) != CLOBBER
      || GET_CODE (XVECEXP (op, 0, index++)) != CLOBBER
      || GET_CODE (XVECEXP (op, 0, index++)) != USE)
    return 0;
  return 1;
}

int
restore_world_operation (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == PARALLEL) && (
(restore_world_operation_1 (op, mode)))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

static inline int
vrsave_operation_1 (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
#line 1048 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/predicates.md"
{
  int count = XVECLEN (op, 0);
  unsigned int dest_regno, src_regno;
  int i;

  if (count <= 1
      || GET_CODE (XVECEXP (op, 0, 0)) != SET
      || GET_CODE (SET_DEST (XVECEXP (op, 0, 0))) != REG
      || GET_CODE (SET_SRC (XVECEXP (op, 0, 0))) != UNSPEC_VOLATILE
      || XINT (SET_SRC (XVECEXP (op, 0, 0)), 1) != UNSPECV_SET_VRSAVE)
    return 0;

  dest_regno = REGNO (SET_DEST (XVECEXP (op, 0, 0)));
  src_regno  = REGNO (XVECEXP (SET_SRC (XVECEXP (op, 0, 0)), 0, 1));

  if (dest_regno != VRSAVE_REGNO || src_regno != VRSAVE_REGNO)
    return 0;

  for (i = 1; i < count; i++)
    {
      rtx elt = XVECEXP (op, 0, i);

      if (GET_CODE (elt) != CLOBBER
	  && GET_CODE (elt) != SET)
	return 0;
    }

  return 1;
}

int
vrsave_operation (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == PARALLEL) && (
(vrsave_operation_1 (op, mode)))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

static inline int
mfcr_operation_1 (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
#line 1081 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/predicates.md"
{
  int count = XVECLEN (op, 0);
  int i;

  /* Perform a quick check so we don't blow up below.  */
  if (count < 1
      || GET_CODE (XVECEXP (op, 0, 0)) != SET
      || GET_CODE (SET_SRC (XVECEXP (op, 0, 0))) != UNSPEC
      || XVECLEN (SET_SRC (XVECEXP (op, 0, 0)), 0) != 2)
    return 0;

  for (i = 0; i < count; i++)
    {
      rtx exp = XVECEXP (op, 0, i);
      rtx unspec;
      int maskval;
      rtx src_reg;

      src_reg = XVECEXP (SET_SRC (exp), 0, 0);

      if (GET_CODE (src_reg) != REG
	  || GET_MODE (src_reg) != CCmode
	  || ! CR_REGNO_P (REGNO (src_reg)))
	return 0;

      if (GET_CODE (exp) != SET
	  || GET_CODE (SET_DEST (exp)) != REG
	  || GET_MODE (SET_DEST (exp)) != SImode
	  || ! INT_REGNO_P (REGNO (SET_DEST (exp))))
	return 0;
      unspec = SET_SRC (exp);
      maskval = 1 << (MAX_CR_REGNO - REGNO (src_reg));

      if (GET_CODE (unspec) != UNSPEC
	  || XINT (unspec, 1) != UNSPEC_MOVESI_FROM_CR
	  || XVECLEN (unspec, 0) != 2
	  || XVECEXP (unspec, 0, 0) != src_reg
	  || GET_CODE (XVECEXP (unspec, 0, 1)) != CONST_INT
	  || INTVAL (XVECEXP (unspec, 0, 1)) != maskval)
	return 0;
    }
  return 1;
}

int
mfcr_operation (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == PARALLEL) && (
(mfcr_operation_1 (op, mode)))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

static inline int
mtcrf_operation_1 (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
#line 1128 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/predicates.md"
{
  int count = XVECLEN (op, 0);
  int i;
  rtx src_reg;

  /* Perform a quick check so we don't blow up below.  */
  if (count < 1
      || GET_CODE (XVECEXP (op, 0, 0)) != SET
      || GET_CODE (SET_SRC (XVECEXP (op, 0, 0))) != UNSPEC
      || XVECLEN (SET_SRC (XVECEXP (op, 0, 0)), 0) != 2)
    return 0;
  src_reg = XVECEXP (SET_SRC (XVECEXP (op, 0, 0)), 0, 0);

  if (GET_CODE (src_reg) != REG
      || GET_MODE (src_reg) != SImode
      || ! INT_REGNO_P (REGNO (src_reg)))
    return 0;

  for (i = 0; i < count; i++)
    {
      rtx exp = XVECEXP (op, 0, i);
      rtx unspec;
      int maskval;

      if (GET_CODE (exp) != SET
	  || GET_CODE (SET_DEST (exp)) != REG
	  || GET_MODE (SET_DEST (exp)) != CCmode
	  || ! CR_REGNO_P (REGNO (SET_DEST (exp))))
	return 0;
      unspec = SET_SRC (exp);
      maskval = 1 << (MAX_CR_REGNO - REGNO (SET_DEST (exp)));

      if (GET_CODE (unspec) != UNSPEC
	  || XINT (unspec, 1) != UNSPEC_MOVESI_TO_CR
	  || XVECLEN (unspec, 0) != 2
	  || XVECEXP (unspec, 0, 0) != src_reg
	  || GET_CODE (XVECEXP (unspec, 0, 1)) != CONST_INT
	  || INTVAL (XVECEXP (unspec, 0, 1)) != maskval)
	return 0;
    }
  return 1;
}

int
mtcrf_operation (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == PARALLEL) && (
(mtcrf_operation_1 (op, mode)))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

static inline int
lmw_operation_1 (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
#line 1174 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/predicates.md"
{
  int count = XVECLEN (op, 0);
  unsigned int dest_regno;
  rtx src_addr;
  unsigned int base_regno;
  HOST_WIDE_INT offset;
  int i;

  /* Perform a quick check so we don't blow up below.  */
  if (count <= 1
      || GET_CODE (XVECEXP (op, 0, 0)) != SET
      || GET_CODE (SET_DEST (XVECEXP (op, 0, 0))) != REG
      || GET_CODE (SET_SRC (XVECEXP (op, 0, 0))) != MEM)
    return 0;

  dest_regno = REGNO (SET_DEST (XVECEXP (op, 0, 0)));
  src_addr = XEXP (SET_SRC (XVECEXP (op, 0, 0)), 0);

  if (dest_regno > 31
      || count != 32 - (int) dest_regno)
    return 0;

  if (legitimate_indirect_address_p (src_addr, 0))
    {
      offset = 0;
      base_regno = REGNO (src_addr);
      if (base_regno == 0)
	return 0;
    }
  else if (rs6000_legitimate_offset_address_p (SImode, src_addr, 0))
    {
      offset = INTVAL (XEXP (src_addr, 1));
      base_regno = REGNO (XEXP (src_addr, 0));
    }
  else
    return 0;

  for (i = 0; i < count; i++)
    {
      rtx elt = XVECEXP (op, 0, i);
      rtx newaddr;
      rtx addr_reg;
      HOST_WIDE_INT newoffset;

      if (GET_CODE (elt) != SET
	  || GET_CODE (SET_DEST (elt)) != REG
	  || GET_MODE (SET_DEST (elt)) != SImode
	  || REGNO (SET_DEST (elt)) != dest_regno + i
	  || GET_CODE (SET_SRC (elt)) != MEM
	  || GET_MODE (SET_SRC (elt)) != SImode)
	return 0;
      newaddr = XEXP (SET_SRC (elt), 0);
      if (legitimate_indirect_address_p (newaddr, 0))
	{
	  newoffset = 0;
	  addr_reg = newaddr;
	}
      else if (rs6000_legitimate_offset_address_p (SImode, newaddr, 0))
	{
	  addr_reg = XEXP (newaddr, 0);
	  newoffset = INTVAL (XEXP (newaddr, 1));
	}
      else
	return 0;
      if (REGNO (addr_reg) != base_regno
	  || newoffset != offset + 4 * i)
	return 0;
    }

  return 1;
}

int
lmw_operation (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == PARALLEL) && (
(lmw_operation_1 (op, mode)))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

static inline int
stmw_operation_1 (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
#line 1249 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/predicates.md"
{
  int count = XVECLEN (op, 0);
  unsigned int src_regno;
  rtx dest_addr;
  unsigned int base_regno;
  HOST_WIDE_INT offset;
  int i;

  /* Perform a quick check so we don't blow up below.  */
  if (count <= 1
      || GET_CODE (XVECEXP (op, 0, 0)) != SET
      || GET_CODE (SET_DEST (XVECEXP (op, 0, 0))) != MEM
      || GET_CODE (SET_SRC (XVECEXP (op, 0, 0))) != REG)
    return 0;

  src_regno = REGNO (SET_SRC (XVECEXP (op, 0, 0)));
  dest_addr = XEXP (SET_DEST (XVECEXP (op, 0, 0)), 0);

  if (src_regno > 31
      || count != 32 - (int) src_regno)
    return 0;

  if (legitimate_indirect_address_p (dest_addr, 0))
    {
      offset = 0;
      base_regno = REGNO (dest_addr);
      if (base_regno == 0)
	return 0;
    }
  else if (rs6000_legitimate_offset_address_p (SImode, dest_addr, 0))
    {
      offset = INTVAL (XEXP (dest_addr, 1));
      base_regno = REGNO (XEXP (dest_addr, 0));
    }
  else
    return 0;

  for (i = 0; i < count; i++)
    {
      rtx elt = XVECEXP (op, 0, i);
      rtx newaddr;
      rtx addr_reg;
      HOST_WIDE_INT newoffset;

      if (GET_CODE (elt) != SET
	  || GET_CODE (SET_SRC (elt)) != REG
	  || GET_MODE (SET_SRC (elt)) != SImode
	  || REGNO (SET_SRC (elt)) != src_regno + i
	  || GET_CODE (SET_DEST (elt)) != MEM
	  || GET_MODE (SET_DEST (elt)) != SImode)
	return 0;
      newaddr = XEXP (SET_DEST (elt), 0);
      if (legitimate_indirect_address_p (newaddr, 0))
	{
	  newoffset = 0;
	  addr_reg = newaddr;
	}
      else if (rs6000_legitimate_offset_address_p (SImode, newaddr, 0))
	{
	  addr_reg = XEXP (newaddr, 0);
	  newoffset = INTVAL (XEXP (newaddr, 1));
	}
      else
	return 0;
      if (REGNO (addr_reg) != base_regno
	  || newoffset != offset + 4 * i)
	return 0;
    }

  return 1;
}

int
stmw_operation (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == PARALLEL) && (
(stmw_operation_1 (op, mode)))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

enum constraint_num
lookup_constraint (const char *str)
{
  switch (str[0])
    {
    case 'G':
      return CONSTRAINT_G;
    case 'H':
      return CONSTRAINT_H;
    case 'I':
      return CONSTRAINT_I;
    case 'J':
      return CONSTRAINT_J;
    case 'K':
      return CONSTRAINT_K;
    case 'L':
      return CONSTRAINT_L;
    case 'M':
      return CONSTRAINT_M;
    case 'N':
      return CONSTRAINT_N;
    case 'O':
      return CONSTRAINT_O;
    case 'P':
      return CONSTRAINT_P;
    case 'Q':
      return CONSTRAINT_Q;
    case 'R':
      return CONSTRAINT_R;
    case 'S':
      return CONSTRAINT_S;
    case 'T':
      return CONSTRAINT_T;
    case 'U':
      return CONSTRAINT_U;
    case 'W':
      return CONSTRAINT_W;
    case 'Y':
      return CONSTRAINT_Y;
    case 'Z':
      return CONSTRAINT_Z;
    case 'a':
      return CONSTRAINT_a;
    case 'b':
      return CONSTRAINT_b;
    case 'c':
      return CONSTRAINT_c;
    case 'f':
      return CONSTRAINT_f;
    case 'h':
      return CONSTRAINT_h;
    case 'l':
      return CONSTRAINT_l;
    case 'q':
      return CONSTRAINT_q;
    case 't':
      return CONSTRAINT_t;
    case 'v':
      return CONSTRAINT_v;
    case 'x':
      return CONSTRAINT_x;
    case 'y':
      return CONSTRAINT_y;
    case 'z':
      return CONSTRAINT_z;
    default: break;
    }
  return CONSTRAINT__UNKNOWN;
}

enum reg_class
regclass_for_constraint (enum constraint_num c)
{
  switch (c)
    {
    case CONSTRAINT_f: return TARGET_HARD_FLOAT && TARGET_FPRS
			 	 ? FLOAT_REGS : NO_REGS;
    case CONSTRAINT_b: return BASE_REGS;
    case CONSTRAINT_h: return SPECIAL_REGS;
    case CONSTRAINT_q: return MQ_REGS;
    case CONSTRAINT_c: return CTR_REGS;
    case CONSTRAINT_l: return LINK_REGS;
    case CONSTRAINT_v: return ALTIVEC_REGS;
    case CONSTRAINT_x: return CR0_REGS;
    case CONSTRAINT_y: return CR_REGS;
    case CONSTRAINT_z: return XER_REGS;
    default: break;
    }
  return NO_REGS;
}

bool
constraint_satisfied_p (rtx op, enum constraint_num c)
{
  switch (c)
    {
    case CONSTRAINT_I: return satisfies_constraint_I (op);
    case CONSTRAINT_J: return satisfies_constraint_J (op);
    case CONSTRAINT_K: return satisfies_constraint_K (op);
    case CONSTRAINT_L: return satisfies_constraint_L (op);
    case CONSTRAINT_M: return satisfies_constraint_M (op);
    case CONSTRAINT_N: return satisfies_constraint_N (op);
    case CONSTRAINT_O: return satisfies_constraint_O (op);
    case CONSTRAINT_P: return satisfies_constraint_P (op);
    case CONSTRAINT_G: return satisfies_constraint_G (op);
    case CONSTRAINT_H: return satisfies_constraint_H (op);
    case CONSTRAINT_Q: return satisfies_constraint_Q (op);
    case CONSTRAINT_Y: return satisfies_constraint_Y (op);
    case CONSTRAINT_Z: return satisfies_constraint_Z (op);
    case CONSTRAINT_a: return satisfies_constraint_a (op);
    case CONSTRAINT_R: return satisfies_constraint_R (op);
    case CONSTRAINT_S: return satisfies_constraint_S (op);
    case CONSTRAINT_T: return satisfies_constraint_T (op);
    case CONSTRAINT_U: return satisfies_constraint_U (op);
    case CONSTRAINT_t: return satisfies_constraint_t (op);
    case CONSTRAINT_W: return satisfies_constraint_W (op);
    default: break;
    }
  return false;
}

bool
insn_const_int_ok_for_constraint (HOST_WIDE_INT ival, enum constraint_num c)
{
  switch (c)
    {
    case CONSTRAINT_I:
      return 
#line 59 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/constraints.md"
((unsigned HOST_WIDE_INT) (ival + 0x8000) < 0x10000);

    case CONSTRAINT_J:
      return 
#line 64 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/constraints.md"
((ival & (~ (unsigned HOST_WIDE_INT) 0xffff0000)) == 0);

    case CONSTRAINT_K:
      return 
#line 69 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/constraints.md"
((ival & (~ (HOST_WIDE_INT) 0xffff)) == 0);

    case CONSTRAINT_L:
      return 
#line 74 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/constraints.md"
(((ival & 0xffff) == 0
		      && (ival >> 31 == -1 || ival >> 31 == 0)));

    case CONSTRAINT_M:
      return 
#line 80 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/constraints.md"
(ival > 31);

    case CONSTRAINT_N:
      return 
#line 85 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/constraints.md"
(ival > 0 && exact_log2 (ival) >= 0);

    case CONSTRAINT_O:
      return 
#line 90 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/constraints.md"
(ival == 0);

    case CONSTRAINT_P:
      return 
#line 95 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/rs6000/constraints.md"
((unsigned HOST_WIDE_INT) ((- ival) + 0x8000) < 0x10000);

    default: break;
    }
  return false;
}

bool
insn_extra_memory_constraint (enum constraint_num c)
{
  switch (c)
    {
    case CONSTRAINT_Q:
      return true;

    case CONSTRAINT_Y:
      return true;

    case CONSTRAINT_Z:
      return true;

    default: break;
    }
  return false;
}

bool
insn_extra_address_constraint (enum constraint_num c)
{
  switch (c)
    {
    case CONSTRAINT_a:
      return true;

    default: break;
    }
  return false;
}

