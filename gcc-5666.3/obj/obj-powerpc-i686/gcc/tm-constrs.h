/* Generated automatically by the program 'build/genpreds'
   from the machine description file '/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md'.  */

#ifndef GCC_TM_CONSTRS_H
#define GCC_TM_CONSTRS_H

static inline bool
satisfies_constraint_I (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (GET_CODE (op) == CONST_INT)
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 112 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/constraints.md"
(ival >= 0 && ival <= 31));
}
static inline bool
satisfies_constraint_J (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (GET_CODE (op) == CONST_INT)
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 117 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/constraints.md"
(ival >= 0 && ival <= 63));
}
static inline bool
satisfies_constraint_K (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (GET_CODE (op) == CONST_INT)
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 122 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/constraints.md"
(ival >= -128 && ival <= 127));
}
static inline bool
satisfies_constraint_L (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (GET_CODE (op) == CONST_INT)
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 127 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/constraints.md"
(ival == 0xFF || ival == 0xFFFF));
}
static inline bool
satisfies_constraint_M (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (GET_CODE (op) == CONST_INT)
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 132 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/constraints.md"
(ival >= 0 && ival <= 3));
}
static inline bool
satisfies_constraint_N (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (GET_CODE (op) == CONST_INT)
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 138 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/constraints.md"
(ival >= 0 && ival <= 255));
}
static inline bool
satisfies_constraint_O (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (GET_CODE (op) == CONST_INT)
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 143 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/constraints.md"
(ival >= 0 && ival <= 127));
}
static inline bool
satisfies_constraint_G (rtx op)
{
  return (GET_CODE (op) == CONST_DOUBLE) && (
#line 152 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/constraints.md"
(standard_80387_constant_p (op)));
}
static inline bool
satisfies_constraint_C (rtx op)
{
  return 
#line 157 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/constraints.md"
(standard_sse_constant_p (op));
}
static inline bool
satisfies_constraint_e (rtx op)
{
enum machine_mode mode = GET_MODE (op);
  return x86_64_immediate_operand (op, mode);
}
static inline bool
satisfies_constraint_Z (rtx op)
{
enum machine_mode mode = GET_MODE (op);
  return x86_64_zext_immediate_operand (op, mode);
}
#endif /* tm-constrs.h */
