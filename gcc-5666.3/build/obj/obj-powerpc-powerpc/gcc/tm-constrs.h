/* Generated automatically by the program 'build/genpreds'
   from the machine description file '/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/build/obj/src/gcc/config/rs6000/rs6000.md'.  */

#ifndef GCC_TM_CONSTRS_H
#define GCC_TM_CONSTRS_H

static inline bool
satisfies_constraint_I (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (GET_CODE (op) == CONST_INT)
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 59 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/build/obj/src/gcc/config/rs6000/constraints.md"
((unsigned HOST_WIDE_INT) (ival + 0x8000) < 0x10000));
}
static inline bool
satisfies_constraint_J (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (GET_CODE (op) == CONST_INT)
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 64 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/build/obj/src/gcc/config/rs6000/constraints.md"
((ival & (~ (unsigned HOST_WIDE_INT) 0xffff0000)) == 0));
}
static inline bool
satisfies_constraint_K (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (GET_CODE (op) == CONST_INT)
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 69 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/build/obj/src/gcc/config/rs6000/constraints.md"
((ival & (~ (HOST_WIDE_INT) 0xffff)) == 0));
}
static inline bool
satisfies_constraint_L (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (GET_CODE (op) == CONST_INT)
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 74 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/build/obj/src/gcc/config/rs6000/constraints.md"
(((ival & 0xffff) == 0
		      && (ival >> 31 == -1 || ival >> 31 == 0))));
}
static inline bool
satisfies_constraint_M (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (GET_CODE (op) == CONST_INT)
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 80 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/build/obj/src/gcc/config/rs6000/constraints.md"
(ival > 31));
}
static inline bool
satisfies_constraint_N (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (GET_CODE (op) == CONST_INT)
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 85 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/build/obj/src/gcc/config/rs6000/constraints.md"
(ival > 0 && exact_log2 (ival) >= 0));
}
static inline bool
satisfies_constraint_O (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (GET_CODE (op) == CONST_INT)
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 90 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/build/obj/src/gcc/config/rs6000/constraints.md"
(ival == 0));
}
static inline bool
satisfies_constraint_P (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (GET_CODE (op) == CONST_INT)
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 95 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/build/obj/src/gcc/config/rs6000/constraints.md"
((unsigned HOST_WIDE_INT) ((- ival) + 0x8000) < 0x10000));
}
static inline bool
satisfies_constraint_G (rtx op)
{
enum machine_mode mode = GET_MODE (op);
  return (GET_CODE (op) == CONST_DOUBLE) && (
#line 103 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/build/obj/src/gcc/config/rs6000/constraints.md"
(num_insns_constant (op, mode)
		    == (mode == SFmode ? 1 : 2)));
}
static inline bool
satisfies_constraint_H (rtx op)
{
enum machine_mode mode = GET_MODE (op);
  return (GET_CODE (op) == CONST_DOUBLE) && (
#line 109 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/build/obj/src/gcc/config/rs6000/constraints.md"
(num_insns_constant (op, mode) == 3));
}
static inline bool
satisfies_constraint_Q (rtx op)
{
  return (GET_CODE (op) == MEM) && (
#line 116 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/build/obj/src/gcc/config/rs6000/constraints.md"
(GET_CODE (XEXP (op, 0)) == REG));
}
static inline bool
satisfies_constraint_Y (rtx op)
{
enum machine_mode mode = GET_MODE (op);
  return word_offset_memref_operand (op, mode);
}
static inline bool
satisfies_constraint_Z (rtx op)
{
enum machine_mode mode = GET_MODE (op);
  return indexed_or_indirect_operand (op, mode);
}
static inline bool
satisfies_constraint_a (rtx op)
{
enum machine_mode mode = GET_MODE (op);
  return indexed_or_indirect_address (op, mode);
}
static inline bool
satisfies_constraint_R (rtx op)
{
  return 
#line 134 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/build/obj/src/gcc/config/rs6000/constraints.md"
(legitimate_constant_pool_address_p (op));
}
static inline bool
satisfies_constraint_S (rtx op)
{
enum machine_mode mode = GET_MODE (op);
  return mask64_operand (op, mode);
}
static inline bool
satisfies_constraint_T (rtx op)
{
enum machine_mode mode = GET_MODE (op);
  return mask_operand (op, mode);
}
static inline bool
satisfies_constraint_U (rtx op)
{
enum machine_mode mode = GET_MODE (op);
  return (
#line 148 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/build/obj/src/gcc/config/rs6000/constraints.md"
(DEFAULT_ABI == ABI_V4)) && (small_data_operand (op, mode));
}
static inline bool
satisfies_constraint_t (rtx op)
{
enum machine_mode mode = GET_MODE (op);
  return (((mask64_2_operand (op, mode)) && (
#line 155 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/build/obj/src/gcc/config/rs6000/constraints.md"
((fixed_regs[CR0_REGNO]
			      || !logical_operand (op, DImode))))) && (!(mask_operand (op, mode)))) && (!(mask64_operand (op, mode)));
}
static inline bool
satisfies_constraint_W (rtx op)
{
enum machine_mode mode = GET_MODE (op);
  return easy_vector_constant (op, mode);
}
#endif /* tm-constrs.h */
