/* Generated automatically by the program `genemit'
from the machine description file `md'.  */

#include "config.h"
#include "system.h"
#include "coretypes.h"
#include "tm.h"
#include "rtl.h"
#include "tm_p.h"
#include "function.h"
#include "expr.h"
#include "optabs.h"
#include "real.h"
#include "flags.h"
#include "output.h"
#include "insn-config.h"
#include "hard-reg-set.h"
#include "recog.h"
#include "resource.h"
#include "reload.h"
#include "toplev.h"
#include "tm-constrs.h"
#include "ggc.h"

#include "basic-block.h"

#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:598 */
rtx
gen_cmpdi_ccno_1_rex64 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	gen_rtx_REG (VOIDmode,
	17),
	gen_rtx_COMPARE (VOIDmode,
	operand0,
	operand1));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:627 */
rtx
gen_cmpdi_1_insn_rex64 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	gen_rtx_REG (VOIDmode,
	17),
	gen_rtx_COMPARE (VOIDmode,
	operand0,
	operand1));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:795 */
rtx
gen_cmpqi_ext_3_insn (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	gen_rtx_REG (VOIDmode,
	17),
	gen_rtx_COMPARE (VOIDmode,
	gen_rtx_SUBREG (QImode,
	gen_rtx_ZERO_EXTRACT (SImode,
	operand0,
	const_int_rtx[MAX_SAVED_CONST_INT + (8)],
	const_int_rtx[MAX_SAVED_CONST_INT + (8)]),
	0),
	operand1));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:809 */
rtx
gen_cmpqi_ext_3_insn_rex64 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	gen_rtx_REG (VOIDmode,
	17),
	gen_rtx_COMPARE (VOIDmode,
	gen_rtx_SUBREG (QImode,
	gen_rtx_ZERO_EXTRACT (SImode,
	operand0,
	const_int_rtx[MAX_SAVED_CONST_INT + (8)],
	const_int_rtx[MAX_SAVED_CONST_INT + (8)]),
	0),
	operand1));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:989 */
rtx
gen_x86_fnstsw_1 (rtx operand0 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (HImode,
	gen_rtvec (1,
		gen_rtx_REG (CCFPmode,
	18)),
	21));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:1001 */
rtx
gen_x86_sahf_1 (rtx operand0 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCmode,
	17),
	gen_rtx_UNSPEC (CCmode,
	gen_rtvec (1,
		operand0),
	22));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:1166 */
rtx
gen_popsi1 (rtx operand0 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MEM (SImode,
	gen_rtx_REG (SImode,
	7))),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (SImode,
	7),
	gen_rtx_PLUS (SImode,
	gen_rtx_REG (SImode,
	7),
	const_int_rtx[MAX_SAVED_CONST_INT + (4)]))));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:1847 */
rtx
gen_movsi_insv_1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	gen_rtx_ZERO_EXTRACT (SImode,
	operand0,
	const_int_rtx[MAX_SAVED_CONST_INT + (8)],
	const_int_rtx[MAX_SAVED_CONST_INT + (8)]),
	operand1);
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:1857 */
rtx
gen_movdi_insv_1_rex64 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	gen_rtx_ZERO_EXTRACT (DImode,
	operand0,
	const_int_rtx[MAX_SAVED_CONST_INT + (8)],
	const_int_rtx[MAX_SAVED_CONST_INT + (8)]),
	operand1);
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:1965 */
rtx
gen_popdi1 (rtx operand0 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MEM (DImode,
	gen_rtx_REG (DImode,
	7))),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (DImode,
	7),
	gen_rtx_PLUS (DImode,
	gen_rtx_REG (DImode,
	7),
	const_int_rtx[MAX_SAVED_CONST_INT + (8)]))));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:2966 */
rtx
gen_swapxf (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	operand1),
		gen_rtx_SET (VOIDmode,
	operand1,
	operand0)));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:3057 */
rtx
gen_zero_extendhisi2_and (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ZERO_EXTEND (SImode,
	operand1)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:3237 */
rtx
gen_zero_extendsidi2_32 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ZERO_EXTEND (DImode,
	operand1)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:3253 */
rtx
gen_zero_extendsidi2_rex64 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ZERO_EXTEND (DImode,
	operand1));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:3293 */
rtx
gen_zero_extendhidi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ZERO_EXTEND (DImode,
	operand1));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:3301 */
rtx
gen_zero_extendqidi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ZERO_EXTEND (DImode,
	operand1));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:3333 */
rtx
gen_extendsidi2_rex64 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SIGN_EXTEND (DImode,
	operand1));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:3345 */
rtx
gen_extendhidi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SIGN_EXTEND (DImode,
	operand1));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:3353 */
rtx
gen_extendqidi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SIGN_EXTEND (DImode,
	operand1));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:3435 */
rtx
gen_extendhisi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SIGN_EXTEND (SImode,
	operand1));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:3488 */
rtx
gen_extendqihi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SIGN_EXTEND (HImode,
	operand1));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:3514 */
rtx
gen_extendqisi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SIGN_EXTEND (SImode,
	operand1));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:3981 */
rtx
gen_truncxfsf2_i387_noop (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT_TRUNCATE (SFmode,
	operand1));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:4081 */
rtx
gen_truncxfdf2_i387_noop (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT_TRUNCATE (DFmode,
	operand1));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:4246 */
rtx
gen_fixuns_truncdfhi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FIX (HImode,
	operand1));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:4255 */
rtx
gen_fixuns_truncsfhi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FIX (HImode,
	operand1));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:4266 */
rtx
gen_fix_truncsfdi_sse (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FIX (DImode,
	operand1));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:4275 */
rtx
gen_fix_truncdfdi_sse (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FIX (DImode,
	operand1));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:4286 */
rtx
gen_fix_truncsfsi_sse (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FIX (SImode,
	operand1));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:4295 */
rtx
gen_fix_truncdfsi_sse (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FIX (SImode,
	operand1));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:4327 */
rtx
gen_fix_trunchi_fisttp_i387_1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FIX (HImode,
	operand1));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:4327 */
rtx
gen_fix_truncsi_fisttp_i387_1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FIX (SImode,
	operand1));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:4327 */
rtx
gen_fix_truncdi_fisttp_i387_1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FIX (DImode,
	operand1));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:4354 */
rtx
gen_fix_trunchi_i387_fisttp (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FIX (HImode,
	operand1)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (XFmode))));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:4354 */
rtx
gen_fix_truncsi_i387_fisttp (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FIX (SImode,
	operand1)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (XFmode))));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:4354 */
rtx
gen_fix_truncdi_i387_fisttp (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FIX (DImode,
	operand1)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (XFmode))));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:4367 */
rtx
gen_fix_trunchi_i387_fisttp_with_temp (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FIX (HImode,
	operand1)),
		gen_rtx_CLOBBER (VOIDmode,
	operand2),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (XFmode))));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:4367 */
rtx
gen_fix_truncsi_i387_fisttp_with_temp (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FIX (SImode,
	operand1)),
		gen_rtx_CLOBBER (VOIDmode,
	operand2),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (XFmode))));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:4367 */
rtx
gen_fix_truncdi_i387_fisttp_with_temp (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FIX (DImode,
	operand1)),
		gen_rtx_CLOBBER (VOIDmode,
	operand2),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (XFmode))));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:4440 */
rtx
gen_fix_truncdi_i387 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (4,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FIX (DImode,
	operand1)),
		gen_rtx_USE (VOIDmode,
	operand2),
		gen_rtx_USE (VOIDmode,
	operand3),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (XFmode))));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:4454 */
rtx
gen_fix_truncdi_i387_with_temp (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (5,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FIX (DImode,
	operand1)),
		gen_rtx_USE (VOIDmode,
	operand2),
		gen_rtx_USE (VOIDmode,
	operand3),
		gen_rtx_CLOBBER (VOIDmode,
	operand4),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (XFmode))));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:4498 */
rtx
gen_fix_trunchi_i387 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FIX (HImode,
	operand1)),
		gen_rtx_USE (VOIDmode,
	operand2),
		gen_rtx_USE (VOIDmode,
	operand3)));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:4498 */
rtx
gen_fix_truncsi_i387 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FIX (SImode,
	operand1)),
		gen_rtx_USE (VOIDmode,
	operand2),
		gen_rtx_USE (VOIDmode,
	operand3)));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:4511 */
rtx
gen_fix_trunchi_i387_with_temp (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (4,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FIX (HImode,
	operand1)),
		gen_rtx_USE (VOIDmode,
	operand2),
		gen_rtx_USE (VOIDmode,
	operand3),
		gen_rtx_CLOBBER (VOIDmode,
	operand4)));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:4511 */
rtx
gen_fix_truncsi_i387_with_temp (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (4,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FIX (SImode,
	operand1)),
		gen_rtx_USE (VOIDmode,
	operand2),
		gen_rtx_USE (VOIDmode,
	operand3),
		gen_rtx_CLOBBER (VOIDmode,
	operand4)));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:4550 */
rtx
gen_x86_fnstcw_1 (rtx operand0 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (HImode,
	gen_rtvec (1,
		gen_rtx_REG (HImode,
	18)),
	23));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:4559 */
rtx
gen_x86_fldcw_1 (rtx operand0 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	gen_rtx_REG (HImode,
	18),
	gen_rtx_UNSPEC (HImode,
	gen_rtvec (1,
		operand0),
	25));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:4823 */
rtx
gen_floathixf2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT (XFmode,
	operand1));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:4835 */
rtx
gen_floatsixf2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT (XFmode,
	operand1));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:4847 */
rtx
gen_floatdixf2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT (XFmode,
	operand1));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:4985 */
rtx
gen_adddi3_carry_rex64 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (DImode,
	gen_rtx_PLUS (DImode,
	operand3,
	operand1),
	operand2)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:5009 */
rtx
gen_addqi3_carry (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (QImode,
	gen_rtx_PLUS (QImode,
	operand3,
	operand1),
	operand2)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:5021 */
rtx
gen_addhi3_carry (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (HImode,
	gen_rtx_PLUS (HImode,
	operand3,
	operand1),
	operand2)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:5033 */
rtx
gen_addsi3_carry (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (SImode,
	gen_rtx_PLUS (SImode,
	operand3,
	operand1),
	operand2)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:5070 */
rtx
gen_addqi3_cc (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCmode,
	17),
	gen_rtx_UNSPEC (CCmode,
	gen_rtvec (2,
		operand1,
		operand2),
	24)),
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (QImode,
	operand1,
	operand2))));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:5631 */
rtx
gen_addsi_1_zext (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ZERO_EXTEND (DImode,
	gen_rtx_PLUS (SImode,
	operand1,
	operand2))),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:6528 */
rtx
gen_addqi_ext_1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	gen_rtx_ZERO_EXTRACT (SImode,
	operand0,
	const_int_rtx[MAX_SAVED_CONST_INT + (8)],
	const_int_rtx[MAX_SAVED_CONST_INT + (8)]),
	gen_rtx_PLUS (SImode,
	gen_rtx_ZERO_EXTRACT (SImode,
	operand1,
	const_int_rtx[MAX_SAVED_CONST_INT + (8)],
	const_int_rtx[MAX_SAVED_CONST_INT + (8)]),
	operand2)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:6714 */
rtx
gen_subdi3_carry_rex64 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (DImode,
	operand1,
	gen_rtx_PLUS (DImode,
	operand3,
	operand2))),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:6762 */
rtx
gen_subqi3_carry (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (QImode,
	operand1,
	gen_rtx_PLUS (QImode,
	operand3,
	operand2))),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:6774 */
rtx
gen_subhi3_carry (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (HImode,
	operand1,
	gen_rtx_PLUS (HImode,
	operand3,
	operand2))),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:6786 */
rtx
gen_subsi3_carry (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (SImode,
	operand1,
	gen_rtx_PLUS (SImode,
	operand3,
	operand2))),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:6798 */
rtx
gen_subsi3_carry_zext (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ZERO_EXTEND (DImode,
	gen_rtx_MINUS (SImode,
	operand1,
	gen_rtx_PLUS (SImode,
	operand3,
	operand2)))),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:7523 */
rtx
gen_divqi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_DIV (QImode,
	operand1,
	operand2)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:7533 */
rtx
gen_udivqi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UDIV (QImode,
	operand1,
	operand2)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:7733 */
rtx
gen_divmodhi4 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_DIV (HImode,
	operand1,
	operand2)),
		gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_MOD (HImode,
	operand1,
	operand2)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:7746 */
rtx
gen_udivmoddi4 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UDIV (DImode,
	operand1,
	operand2)),
		gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_UMOD (DImode,
	operand1,
	operand2)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:7789 */
rtx
gen_udivmodsi4 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UDIV (SImode,
	operand1,
	operand2)),
		gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_UMOD (SImode,
	operand1,
	operand2)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:7900 */
rtx
gen_testsi_1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	gen_rtx_REG (VOIDmode,
	17),
	gen_rtx_COMPARE (VOIDmode,
	gen_rtx_AND (SImode,
	operand0,
	operand1),
	const0_rtx));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:8529 */
rtx
gen_andqi_ext_0 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	gen_rtx_ZERO_EXTRACT (SImode,
	operand0,
	const_int_rtx[MAX_SAVED_CONST_INT + (8)],
	const_int_rtx[MAX_SAVED_CONST_INT + (8)]),
	gen_rtx_AND (SImode,
	gen_rtx_ZERO_EXTRACT (SImode,
	operand1,
	const_int_rtx[MAX_SAVED_CONST_INT + (8)],
	const_int_rtx[MAX_SAVED_CONST_INT + (8)]),
	operand2)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:8935 */
rtx
gen_iorqi_ext_0 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	gen_rtx_ZERO_EXTRACT (SImode,
	operand0,
	const_int_rtx[MAX_SAVED_CONST_INT + (8)],
	const_int_rtx[MAX_SAVED_CONST_INT + (8)]),
	gen_rtx_IOR (SImode,
	gen_rtx_ZERO_EXTRACT (SImode,
	operand1,
	const_int_rtx[MAX_SAVED_CONST_INT + (8)],
	const_int_rtx[MAX_SAVED_CONST_INT + (8)]),
	operand2)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:9273 */
rtx
gen_xorqi_ext_0 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	gen_rtx_ZERO_EXTRACT (SImode,
	operand0,
	const_int_rtx[MAX_SAVED_CONST_INT + (8)],
	const_int_rtx[MAX_SAVED_CONST_INT + (8)]),
	gen_rtx_XOR (SImode,
	gen_rtx_ZERO_EXTRACT (SImode,
	operand1,
	const_int_rtx[MAX_SAVED_CONST_INT + (8)],
	const_int_rtx[MAX_SAVED_CONST_INT + (8)]),
	operand2)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:9758 */
rtx
gen_copysignsf3_const (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SFmode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	50));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:9774 */
rtx
gen_copysignsf3_var (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SFmode,
	gen_rtvec (4,
		operand2,
		operand3,
		operand4,
		operand5),
	50)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (V4SFmode))));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:9858 */
rtx
gen_copysigndf3_const (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (DFmode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	50));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:9874 */
rtx
gen_copysigndf3_var (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (DFmode,
	gen_rtvec (4,
		operand2,
		operand3,
		operand4,
		operand5),
	50)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (V2DFmode))));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:10474 */
rtx
gen_sse2_ashlti3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFT (TImode,
	operand1,
	operand2));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:10487 */
rtx
gen_ashlti3_1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFT (TImode,
	operand1,
	operand2)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (DImode)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:10525 */
rtx
gen_x86_64_shld (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IOR (DImode,
	gen_rtx_ASHIFT (DImode,
	operand0,
	operand2),
	gen_rtx_LSHIFTRT (DImode,
	operand1,
	gen_rtx_MINUS (QImode,
	const_int_rtx[MAX_SAVED_CONST_INT + (64)],
	operand2)))),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:10739 */
rtx
gen_x86_shld_1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IOR (SImode,
	gen_rtx_ASHIFT (SImode,
	operand0,
	operand2),
	gen_rtx_LSHIFTRT (SImode,
	operand1,
	gen_rtx_MINUS (QImode,
	const_int_rtx[MAX_SAVED_CONST_INT + (32)],
	operand2)))),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:11462 */
rtx
gen_ashrti3_1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFTRT (TImode,
	operand1,
	operand2)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (DImode)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:11500 */
rtx
gen_x86_64_shrd (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IOR (DImode,
	gen_rtx_ASHIFTRT (DImode,
	operand0,
	operand2),
	gen_rtx_ASHIFT (DImode,
	operand1,
	gen_rtx_MINUS (QImode,
	const_int_rtx[MAX_SAVED_CONST_INT + (64)],
	operand2)))),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:11668 */
rtx
gen_x86_shrd_1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IOR (SImode,
	gen_rtx_ASHIFTRT (SImode,
	operand0,
	operand2),
	gen_rtx_ASHIFT (SImode,
	operand1,
	gen_rtx_MINUS (QImode,
	const_int_rtx[MAX_SAVED_CONST_INT + (32)],
	operand2)))),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:11712 */
rtx
gen_ashrsi3_31 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFTRT (SImode,
	operand1,
	operand2)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:12157 */
rtx
gen_lshrti3_1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_LSHIFTRT (TImode,
	operand1,
	operand2)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (DImode)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:12171 */
rtx
gen_sse2_lshrti3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_LSHIFTRT (TImode,
	operand1,
	operand2));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:12761 */
rtx
gen_ix86_rotldi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ROTATE (DImode,
	operand1,
	operand2)),
		gen_hard_reg_clobber (CCmode, 17),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode))));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:12985 */
rtx
gen_ix86_rotrdi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ROTATERT (DImode,
	operand1,
	operand2)),
		gen_hard_reg_clobber (CCmode, 17),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode))));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:14149 */
rtx
gen_jump (rtx operand0 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_LABEL_REF (VOIDmode,
	operand0));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:14494 */
rtx
gen_blockage (rtx operand0 ATTRIBUTE_UNUSED)
{
  return gen_rtx_UNSPEC_VOLATILE (VOIDmode,
	gen_rtvec (1,
		operand0),
	0);
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:14516 */
rtx
gen_return_internal (void)
{
  return gen_rtx_RETURN (VOIDmode);
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:14527 */
rtx
gen_return_internal_long (void)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_RETURN (VOIDmode),
		gen_rtx_UNSPEC (VOIDmode,
	gen_rtvec (1,
		const0_rtx),
	26)));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:14537 */
rtx
gen_return_pop_internal (rtx operand0 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_RETURN (VOIDmode),
		gen_rtx_USE (VOIDmode,
	operand0)));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:14546 */
rtx
gen_return_indirect_internal (rtx operand0 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_RETURN (VOIDmode),
		gen_rtx_USE (VOIDmode,
	operand0)));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:14554 */
rtx
gen_nop (void)
{
  return const0_rtx;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:14566 */
rtx
gen_align (rtx operand0 ATTRIBUTE_UNUSED)
{
  return gen_rtx_UNSPEC_VOLATILE (VOIDmode,
	gen_rtvec (1,
		operand0),
	7);
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:14587 */
rtx
gen_set_got (rtx operand0 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		const0_rtx),
	12)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:14596 */
rtx
gen_set_got_labelled (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		gen_rtx_LABEL_REF (VOIDmode,
	operand1)),
	12)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:14606 */
rtx
gen_set_got_rex64 (rtx operand0 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (1,
		const0_rtx),
	12));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:14646 */
rtx
gen_eh_return_si (rtx operand0 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_UNSPEC (VOIDmode,
	gen_rtvec (1,
		operand0),
	27));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:14656 */
rtx
gen_eh_return_di (rtx operand0 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_UNSPEC (VOIDmode,
	gen_rtvec (1,
		operand0),
	27));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:14666 */
rtx
gen_leave (void)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (SImode,
	7),
	gen_rtx_PLUS (SImode,
	gen_rtx_REG (SImode,
	6),
	const_int_rtx[MAX_SAVED_CONST_INT + (4)])),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (SImode,
	6),
	gen_rtx_MEM (SImode,
	gen_rtx_REG (SImode,
	6))),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_MEM (BLKmode,
	gen_rtx_SCRATCH (VOIDmode)))));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:14674 */
rtx
gen_leave_rex64 (void)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (DImode,
	7),
	gen_rtx_PLUS (DImode,
	gen_rtx_REG (DImode,
	6),
	const_int_rtx[MAX_SAVED_CONST_INT + (8)])),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (DImode,
	6),
	gen_rtx_MEM (DImode,
	gen_rtx_REG (DImode,
	6))),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_MEM (BLKmode,
	gen_rtx_SCRATCH (VOIDmode)))));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:14782 */
rtx
gen_ctzsi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_CTZ (SImode,
	operand1)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:14790 */
rtx
gen_ctzdi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_CTZ (DImode,
	operand1)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:14819 */
rtx
gen_bswapsi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_BSWAP (SImode,
	operand1)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:14828 */
rtx
gen_bswapdi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_BSWAP (DImode,
	operand1)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:15844 */
rtx
gen_sqrtxf2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SQRT (XFmode,
	operand1));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:15873 */
rtx
gen_fpremxf4 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (2,
		operand2,
		operand3),
	88)),
		gen_rtx_SET (VOIDmode,
	operand1,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (2,
		operand2,
		operand3),
	89)),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCFPmode,
	18),
	gen_rtx_UNSPEC (CCFPmode,
	gen_rtvec (1,
		const0_rtx),
	38))));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:15958 */
rtx
gen_fprem1xf4 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (2,
		operand2,
		operand3),
	90)),
		gen_rtx_SET (VOIDmode,
	operand1,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (2,
		operand2,
		operand3),
	91)),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCFPmode,
	18),
	gen_rtx_UNSPEC (CCFPmode,
	gen_rtvec (1,
		const0_rtx),
	38))));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:16131 */
rtx
gen_sincosdf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (DFmode,
	gen_rtvec (1,
		operand2),
	80)),
		gen_rtx_SET (VOIDmode,
	operand1,
	gen_rtx_UNSPEC (DFmode,
	gen_rtvec (1,
		operand2),
	81))));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:16166 */
rtx
gen_sincossf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SFmode,
	gen_rtvec (1,
		operand2),
	80)),
		gen_rtx_SET (VOIDmode,
	operand1,
	gen_rtx_UNSPEC (SFmode,
	gen_rtvec (1,
		operand2),
	81))));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:16244 */
rtx
gen_sincosxf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (1,
		operand2),
	80)),
		gen_rtx_SET (VOIDmode,
	operand1,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (1,
		operand2),
	81))));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:16408 */
rtx
gen_atan2df3_1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (DFmode,
	gen_rtvec (2,
		operand2,
		operand1),
	62)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (DFmode))));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:16449 */
rtx
gen_atan2sf3_1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SFmode,
	gen_rtvec (2,
		operand2,
		operand1),
	62)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SFmode))));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:16490 */
rtx
gen_atan2xf3_1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (2,
		operand2,
		operand1),
	62)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (XFmode))));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:16666 */
rtx
gen_fyl2x_xf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (2,
		operand2,
		operand1),
	63)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (XFmode))));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:16852 */
rtx
gen_fyl2xp1_xf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (2,
		operand2,
		operand1),
	64)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (XFmode))));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:17427 */
rtx
gen_frndintxf2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (1,
		operand1),
	65));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:17505 */
rtx
gen_fistdi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (1,
		operand1),
	66)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (XFmode))));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:17516 */
rtx
gen_fistdi2_with_temp (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (1,
		operand1),
	66)),
		gen_rtx_CLOBBER (VOIDmode,
	operand2),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (XFmode))));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:17570 */
rtx
gen_fisthi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (HImode,
	gen_rtvec (1,
		operand1),
	66));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:17570 */
rtx
gen_fistsi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		operand1),
	66));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:17580 */
rtx
gen_fisthi2_with_temp (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (HImode,
	gen_rtvec (1,
		operand1),
	66)),
		gen_rtx_CLOBBER (VOIDmode,
	operand2)));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:17580 */
rtx
gen_fistsi2_with_temp (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		operand1),
	66)),
		gen_rtx_CLOBBER (VOIDmode,
	operand2)));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:17622 */
rtx
gen_frndintxf2_floor (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (1,
		operand1),
	70)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:17647 */
rtx
gen_frndintxf2_floor_i387 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (1,
		operand1),
	70)),
		gen_rtx_USE (VOIDmode,
	operand2),
		gen_rtx_USE (VOIDmode,
	operand3)));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:17736 */
rtx
gen_fistdi2_floor (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (4,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (1,
		operand1),
	74)),
		gen_rtx_USE (VOIDmode,
	operand2),
		gen_rtx_USE (VOIDmode,
	operand3),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (XFmode))));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:17750 */
rtx
gen_fistdi2_floor_with_temp (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (5,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (1,
		operand1),
	74)),
		gen_rtx_USE (VOIDmode,
	operand2),
		gen_rtx_USE (VOIDmode,
	operand3),
		gen_rtx_CLOBBER (VOIDmode,
	operand4),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (XFmode))));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:17796 */
rtx
gen_fisthi2_floor (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (HImode,
	gen_rtvec (1,
		operand1),
	74)),
		gen_rtx_USE (VOIDmode,
	operand2),
		gen_rtx_USE (VOIDmode,
	operand3)));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:17796 */
rtx
gen_fistsi2_floor (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		operand1),
	74)),
		gen_rtx_USE (VOIDmode,
	operand2),
		gen_rtx_USE (VOIDmode,
	operand3)));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:17809 */
rtx
gen_fisthi2_floor_with_temp (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (4,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (HImode,
	gen_rtvec (1,
		operand1),
	74)),
		gen_rtx_USE (VOIDmode,
	operand2),
		gen_rtx_USE (VOIDmode,
	operand3),
		gen_rtx_CLOBBER (VOIDmode,
	operand4)));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:17809 */
rtx
gen_fistsi2_floor_with_temp (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (4,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		operand1),
	74)),
		gen_rtx_USE (VOIDmode,
	operand2),
		gen_rtx_USE (VOIDmode,
	operand3),
		gen_rtx_CLOBBER (VOIDmode,
	operand4)));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:17863 */
rtx
gen_frndintxf2_ceil (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (1,
		operand1),
	71)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:17888 */
rtx
gen_frndintxf2_ceil_i387 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (1,
		operand1),
	71)),
		gen_rtx_USE (VOIDmode,
	operand2),
		gen_rtx_USE (VOIDmode,
	operand3)));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:17977 */
rtx
gen_fistdi2_ceil (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (4,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (1,
		operand1),
	75)),
		gen_rtx_USE (VOIDmode,
	operand2),
		gen_rtx_USE (VOIDmode,
	operand3),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (XFmode))));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:17991 */
rtx
gen_fistdi2_ceil_with_temp (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (5,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (1,
		operand1),
	75)),
		gen_rtx_USE (VOIDmode,
	operand2),
		gen_rtx_USE (VOIDmode,
	operand3),
		gen_rtx_CLOBBER (VOIDmode,
	operand4),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (XFmode))));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:18037 */
rtx
gen_fisthi2_ceil (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (HImode,
	gen_rtvec (1,
		operand1),
	75)),
		gen_rtx_USE (VOIDmode,
	operand2),
		gen_rtx_USE (VOIDmode,
	operand3)));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:18037 */
rtx
gen_fistsi2_ceil (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		operand1),
	75)),
		gen_rtx_USE (VOIDmode,
	operand2),
		gen_rtx_USE (VOIDmode,
	operand3)));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:18050 */
rtx
gen_fisthi2_ceil_with_temp (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (4,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (HImode,
	gen_rtvec (1,
		operand1),
	75)),
		gen_rtx_USE (VOIDmode,
	operand2),
		gen_rtx_USE (VOIDmode,
	operand3),
		gen_rtx_CLOBBER (VOIDmode,
	operand4)));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:18050 */
rtx
gen_fistsi2_ceil_with_temp (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (4,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		operand1),
	75)),
		gen_rtx_USE (VOIDmode,
	operand2),
		gen_rtx_USE (VOIDmode,
	operand3),
		gen_rtx_CLOBBER (VOIDmode,
	operand4)));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:18104 */
rtx
gen_frndintxf2_trunc (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (1,
		operand1),
	72)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:18129 */
rtx
gen_frndintxf2_trunc_i387 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (1,
		operand1),
	72)),
		gen_rtx_USE (VOIDmode,
	operand2),
		gen_rtx_USE (VOIDmode,
	operand3)));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:18187 */
rtx
gen_frndintxf2_mask_pm (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (1,
		operand1),
	73)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:18212 */
rtx
gen_frndintxf2_mask_pm_i387 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (1,
		operand1),
	73)),
		gen_rtx_USE (VOIDmode,
	operand2),
		gen_rtx_USE (VOIDmode,
	operand3)));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:18273 */
rtx
gen_cld (void)
{
  return gen_rtx_SET (VOIDmode,
	gen_rtx_REG (SImode,
	19),
	const0_rtx);
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:19282 */
rtx
gen_x86_movdicc_0_m1_rex64 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IF_THEN_ELSE (DImode,
	operand1,
	constm1_rtx,
	const0_rtx)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:19325 */
rtx
gen_x86_movsicc_0_m1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IF_THEN_ELSE (SImode,
	operand1,
	constm1_rtx,
	const0_rtx)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:19516 */
rtx
gen_sminsf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SMIN (SFmode,
	operand1,
	operand2));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:19525 */
rtx
gen_smaxsf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SMAX (SFmode,
	operand1,
	operand2));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:19534 */
rtx
gen_smindf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SMIN (DFmode,
	operand1,
	operand2));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:19543 */
rtx
gen_smaxdf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SMAX (DFmode,
	operand1,
	operand2));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:19669 */
rtx
gen_pro_epilogue_adjust_stack_1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (SImode,
	operand1,
	operand2)),
		gen_hard_reg_clobber (CCmode, 17),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_MEM (BLKmode,
	gen_rtx_SCRATCH (VOIDmode)))));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:19710 */
rtx
gen_pro_epilogue_adjust_stack_rex64 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (DImode,
	operand1,
	operand2)),
		gen_hard_reg_clobber (CCmode, 17),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_MEM (BLKmode,
	gen_rtx_SCRATCH (VOIDmode)))));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:19753 */
rtx
gen_pro_epilogue_adjust_stack_rex64_2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (4,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (DImode,
	operand1,
	operand3)),
		gen_rtx_USE (VOIDmode,
	operand2),
		gen_hard_reg_clobber (CCmode, 17),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_MEM (BLKmode,
	gen_rtx_SCRATCH (VOIDmode)))));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:19799 */
rtx
gen_allocate_stack_worker_1 (rtx operand0 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (4,
		gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (1,
		operand0),
	1),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (SImode,
	7),
	gen_rtx_MINUS (SImode,
	gen_rtx_REG (SImode,
	7),
	operand0)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:19819 */
rtx
gen_allocate_stack_worker_rex64 (rtx operand0 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (4,
		gen_rtx_UNSPEC_VOLATILE (DImode,
	gen_rtvec (1,
		operand0),
	1),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (DImode,
	7),
	gen_rtx_MINUS (DImode,
	gen_rtx_REG (DImode,
	7),
	operand0)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (DImode)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:21051 */
rtx
gen_trap (void)
{
  return gen_rtx_TRAP_IF (VOIDmode,
	const1_rtx,
	const_int_rtx[MAX_SAVED_CONST_INT + (6)]);
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:21227 */
rtx
gen_stack_protect_set_si (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		operand1),
	100)),
		gen_rtx_SET (VOIDmode,
	gen_rtx_SCRATCH (SImode),
	const0_rtx),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:21236 */
rtx
gen_stack_protect_set_di (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (1,
		operand1),
	100)),
		gen_rtx_SET (VOIDmode,
	gen_rtx_SCRATCH (DImode),
	const0_rtx),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:21245 */
rtx
gen_stack_tls_protect_set_si (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		operand1),
	102)),
		gen_rtx_SET (VOIDmode,
	gen_rtx_SCRATCH (SImode),
	const0_rtx),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:21254 */
rtx
gen_stack_tls_protect_set_di (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (1,
		operand1),
	102)),
		gen_rtx_SET (VOIDmode,
	gen_rtx_SCRATCH (DImode),
	const0_rtx),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:21299 */
rtx
gen_stack_protect_test_si (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (CCZmode,
	gen_rtvec (2,
		operand1,
		operand2),
	101)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode))));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:21309 */
rtx
gen_stack_protect_test_di (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (CCZmode,
	gen_rtvec (2,
		operand1,
		operand2),
	101)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (DImode))));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:21319 */
rtx
gen_stack_tls_protect_test_si (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (CCZmode,
	gen_rtvec (2,
		operand1,
		operand2),
	103)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode))));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:21329 */
rtx
gen_stack_tls_protect_test_di (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (CCZmode,
	gen_rtvec (2,
		operand1,
		operand2),
	103)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (DImode))));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/mmx.md:227 */
rtx
gen_sse_movntv1di (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V1DImode,
	gen_rtvec (1,
		operand1),
	33));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/mmx.md:243 */
rtx
gen_mmx_addv2sf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (V2SFmode,
	operand1,
	operand2));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/mmx.md:252 */
rtx
gen_mmx_subv2sf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (V2SFmode,
	operand1,
	operand2));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/mmx.md:270 */
rtx
gen_mmx_mulv2sf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (V2SFmode,
	operand1,
	operand2));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/mmx.md:279 */
rtx
gen_mmx_smaxv2sf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SMAX (V2SFmode,
	operand1,
	operand2));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/mmx.md:288 */
rtx
gen_mmx_sminv2sf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SMIN (V2SFmode,
	operand1,
	operand2));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/mmx.md:297 */
rtx
gen_mmx_rcpv2sf2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V2SFmode,
	gen_rtvec (1,
		operand1),
	39));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/mmx.md:306 */
rtx
gen_mmx_rcpit1v2sf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V2SFmode,
	gen_rtvec (2,
		operand1,
		operand2),
	40));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/mmx.md:316 */
rtx
gen_mmx_rcpit2v2sf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V2SFmode,
	gen_rtvec (2,
		operand1,
		operand2),
	41));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/mmx.md:326 */
rtx
gen_mmx_rsqrtv2sf2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V2SFmode,
	gen_rtvec (1,
		operand1),
	42));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/mmx.md:335 */
rtx
gen_mmx_rsqit1v2sf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V2SFmode,
	gen_rtvec (2,
		operand1,
		operand2),
	43));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/mmx.md:345 */
rtx
gen_mmx_haddv2sf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_CONCAT (V2SFmode,
	gen_rtx_PLUS (SFmode,
	gen_rtx_VEC_SELECT (SFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))),
	gen_rtx_VEC_SELECT (SFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx)))),
	gen_rtx_PLUS (SFmode,
	gen_rtx_VEC_SELECT (SFmode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))),
	gen_rtx_VEC_SELECT (SFmode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx))))));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/mmx.md:363 */
rtx
gen_mmx_hsubv2sf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_CONCAT (V2SFmode,
	gen_rtx_MINUS (SFmode,
	gen_rtx_VEC_SELECT (SFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))),
	gen_rtx_VEC_SELECT (SFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx)))),
	gen_rtx_MINUS (SFmode,
	gen_rtx_VEC_SELECT (SFmode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))),
	gen_rtx_VEC_SELECT (SFmode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx))))));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/mmx.md:381 */
rtx
gen_mmx_addsubv2sf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_MERGE (V2SFmode,
	gen_rtx_PLUS (V2SFmode,
	operand1,
	operand2),
	gen_rtx_MINUS (V2SFmode,
	operand1,
	operand2),
	const1_rtx));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/mmx.md:400 */
rtx
gen_mmx_gtv2sf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_GT (V2SImode,
	operand1,
	operand2));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/mmx.md:409 */
rtx
gen_mmx_gev2sf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_GE (V2SImode,
	operand1,
	operand2));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/mmx.md:418 */
rtx
gen_mmx_eqv2sf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_EQ (V2SImode,
	operand1,
	operand2));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/mmx.md:433 */
rtx
gen_mmx_pf2id (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FIX (V2SImode,
	operand1));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/mmx.md:441 */
rtx
gen_mmx_pf2iw (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SIGN_EXTEND (V2SImode,
	gen_rtx_SS_TRUNCATE (V2HImode,
	gen_rtx_FIX (V2SImode,
	operand1))));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/mmx.md:452 */
rtx
gen_mmx_pi2fw (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT (V2SFmode,
	gen_rtx_SIGN_EXTEND (V2SImode,
	gen_rtx_TRUNCATE (V2HImode,
	operand1))));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/mmx.md:463 */
rtx
gen_mmx_floatv2si2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT (V2SFmode,
	operand1));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/mmx.md:477 */
rtx
gen_mmx_pswapdv2sf2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_SELECT (V2SFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const1_rtx,
		const0_rtx))));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/mmx.md:589 */
rtx
gen_mmx_addv8qi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (V8QImode,
	operand1,
	operand2));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/mmx.md:589 */
rtx
gen_mmx_addv4hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (V4HImode,
	operand1,
	operand2));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/mmx.md:589 */
rtx
gen_mmx_addv2si3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (V2SImode,
	operand1,
	operand2));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/mmx.md:589 */
rtx
gen_mmx_addv1di3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (V1DImode,
	operand1,
	operand2));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/mmx.md:603 */
rtx
gen_mmx_ssaddv8qi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SS_PLUS (V8QImode,
	operand1,
	operand2));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/mmx.md:603 */
rtx
gen_mmx_ssaddv4hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SS_PLUS (V4HImode,
	operand1,
	operand2));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/mmx.md:613 */
rtx
gen_mmx_usaddv8qi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_US_PLUS (V8QImode,
	operand1,
	operand2));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/mmx.md:613 */
rtx
gen_mmx_usaddv4hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_US_PLUS (V4HImode,
	operand1,
	operand2));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/mmx.md:623 */
rtx
gen_mmx_subv8qi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (V8QImode,
	operand1,
	operand2));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/mmx.md:623 */
rtx
gen_mmx_subv4hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (V4HImode,
	operand1,
	operand2));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/mmx.md:623 */
rtx
gen_mmx_subv2si3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (V2SImode,
	operand1,
	operand2));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/mmx.md:623 */
rtx
gen_mmx_subv1di3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (V1DImode,
	operand1,
	operand2));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/mmx.md:637 */
rtx
gen_mmx_sssubv8qi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SS_MINUS (V8QImode,
	operand1,
	operand2));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/mmx.md:637 */
rtx
gen_mmx_sssubv4hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SS_MINUS (V4HImode,
	operand1,
	operand2));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/mmx.md:647 */
rtx
gen_mmx_ussubv8qi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_US_MINUS (V8QImode,
	operand1,
	operand2));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/mmx.md:647 */
rtx
gen_mmx_ussubv4hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_US_MINUS (V4HImode,
	operand1,
	operand2));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/mmx.md:657 */
rtx
gen_mmx_mulv4hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (V4HImode,
	operand1,
	operand2));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/mmx.md:666 */
rtx
gen_mmx_smulv4hi3_highpart (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_TRUNCATE (V4HImode,
	gen_rtx_LSHIFTRT (V4SImode,
	gen_rtx_MULT (V4SImode,
	gen_rtx_SIGN_EXTEND (V4SImode,
	operand1),
	gen_rtx_SIGN_EXTEND (V4SImode,
	operand2)),
	const_int_rtx[MAX_SAVED_CONST_INT + (16)])));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/mmx.md:680 */
rtx
gen_mmx_umulv4hi3_highpart (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_TRUNCATE (V4HImode,
	gen_rtx_LSHIFTRT (V4SImode,
	gen_rtx_MULT (V4SImode,
	gen_rtx_ZERO_EXTEND (V4SImode,
	operand1),
	gen_rtx_ZERO_EXTEND (V4SImode,
	operand2)),
	const_int_rtx[MAX_SAVED_CONST_INT + (16)])));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/mmx.md:695 */
rtx
gen_mmx_pmaddwd (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (V2SImode,
	gen_rtx_MULT (V2SImode,
	gen_rtx_SIGN_EXTEND (V2SImode,
	gen_rtx_VEC_SELECT (V2HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const0_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)])))),
	gen_rtx_SIGN_EXTEND (V2SImode,
	gen_rtx_VEC_SELECT (V2HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const0_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)]))))),
	gen_rtx_MULT (V2SImode,
	gen_rtx_SIGN_EXTEND (V2SImode,
	gen_rtx_VEC_SELECT (V2HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (3)])))),
	gen_rtx_SIGN_EXTEND (V2SImode,
	gen_rtx_VEC_SELECT (V2HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (3)])))))));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/mmx.md:719 */
rtx
gen_mmx_pmulhrwv4hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_TRUNCATE (V4HImode,
	gen_rtx_LSHIFTRT (V4SImode,
	gen_rtx_PLUS (V4SImode,
	gen_rtx_MULT (V4SImode,
	gen_rtx_SIGN_EXTEND (V4SImode,
	operand1),
	gen_rtx_SIGN_EXTEND (V4SImode,
	operand2)),
	gen_rtx_CONST_VECTOR (V4SImode,
	gen_rtvec (4,
		GEN_INT (32768LL),
		GEN_INT (32768LL),
		GEN_INT (32768LL),
		GEN_INT (32768LL)))),
	const_int_rtx[MAX_SAVED_CONST_INT + (16)])));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/mmx.md:738 */
rtx
gen_sse2_umulsidi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (V1DImode,
	gen_rtx_ZERO_EXTEND (V1DImode,
	gen_rtx_VEC_SELECT (V1SImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))),
	gen_rtx_ZERO_EXTEND (V1DImode,
	gen_rtx_VEC_SELECT (V1SImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))))));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/mmx.md:755 */
rtx
gen_mmx_umaxv8qi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UMAX (V8QImode,
	operand1,
	operand2));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/mmx.md:765 */
rtx
gen_mmx_smaxv4hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SMAX (V4HImode,
	operand1,
	operand2));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/mmx.md:775 */
rtx
gen_mmx_uminv8qi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UMIN (V8QImode,
	operand1,
	operand2));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/mmx.md:785 */
rtx
gen_mmx_sminv4hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SMIN (V4HImode,
	operand1,
	operand2));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/mmx.md:796 */
rtx
gen_mmx_ashrv4hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFTRT (V4HImode,
	operand1,
	operand2));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/mmx.md:796 */
rtx
gen_mmx_ashrv2si3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFTRT (V2SImode,
	operand1,
	operand2));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/mmx.md:806 */
rtx
gen_mmx_ashrv4hi2si (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFTRT (V4HImode,
	operand1,
	gen_rtx_SIGN_EXTEND (DImode,
	operand2)));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/mmx.md:806 */
rtx
gen_mmx_ashrv2si2si (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFTRT (V2SImode,
	operand1,
	gen_rtx_SIGN_EXTEND (DImode,
	operand2)));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/mmx.md:816 */
rtx
gen_mmx_lshrv4hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_LSHIFTRT (V4HImode,
	operand1,
	operand2));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/mmx.md:816 */
rtx
gen_mmx_lshrv2si3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_LSHIFTRT (V2SImode,
	operand1,
	operand2));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/mmx.md:816 */
rtx
gen_mmx_lshrv1di3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_LSHIFTRT (V1DImode,
	operand1,
	operand2));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/mmx.md:826 */
rtx
gen_mmx_lshrv4hi2si (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_LSHIFTRT (V4HImode,
	operand1,
	gen_rtx_SIGN_EXTEND (DImode,
	operand2)));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/mmx.md:826 */
rtx
gen_mmx_lshrv2si2si (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_LSHIFTRT (V2SImode,
	operand1,
	gen_rtx_SIGN_EXTEND (DImode,
	operand2)));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/mmx.md:826 */
rtx
gen_mmx_lshrv1di2si (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_LSHIFTRT (V1DImode,
	operand1,
	gen_rtx_SIGN_EXTEND (DImode,
	operand2)));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/mmx.md:836 */
rtx
gen_mmx_ashlv4hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFT (V4HImode,
	operand1,
	operand2));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/mmx.md:836 */
rtx
gen_mmx_ashlv2si3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFT (V2SImode,
	operand1,
	operand2));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/mmx.md:836 */
rtx
gen_mmx_ashlv1di3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFT (V1DImode,
	operand1,
	operand2));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/mmx.md:846 */
rtx
gen_mmx_ashlv4hi2si (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFT (V4HImode,
	operand1,
	gen_rtx_SIGN_EXTEND (DImode,
	operand2)));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/mmx.md:846 */
rtx
gen_mmx_ashlv2si2si (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFT (V2SImode,
	operand1,
	gen_rtx_SIGN_EXTEND (DImode,
	operand2)));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/mmx.md:846 */
rtx
gen_mmx_ashlv1di2si (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFT (V1DImode,
	operand1,
	gen_rtx_SIGN_EXTEND (DImode,
	operand2)));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/mmx.md:864 */
rtx
gen_mmx_eqv8qi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_EQ (V8QImode,
	operand1,
	operand2));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/mmx.md:864 */
rtx
gen_mmx_eqv4hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_EQ (V4HImode,
	operand1,
	operand2));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/mmx.md:864 */
rtx
gen_mmx_eqv2si3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_EQ (V2SImode,
	operand1,
	operand2));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/mmx.md:874 */
rtx
gen_mmx_gtv8qi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_GT (V8QImode,
	operand1,
	operand2));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/mmx.md:874 */
rtx
gen_mmx_gtv4hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_GT (V4HImode,
	operand1,
	operand2));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/mmx.md:874 */
rtx
gen_mmx_gtv2si3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_GT (V2SImode,
	operand1,
	operand2));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/mmx.md:891 */
rtx
gen_mmx_andv8qi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_AND (V8QImode,
	operand1,
	operand2));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/mmx.md:891 */
rtx
gen_mmx_andv4hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_AND (V4HImode,
	operand1,
	operand2));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/mmx.md:891 */
rtx
gen_mmx_andv2si3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_AND (V2SImode,
	operand1,
	operand2));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/mmx.md:891 */
rtx
gen_mmx_andv1di3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_AND (V1DImode,
	operand1,
	operand2));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/mmx.md:901 */
rtx
gen_mmx_nandv8qi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_AND (V8QImode,
	gen_rtx_NOT (V8QImode,
	operand1),
	operand2));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/mmx.md:901 */
rtx
gen_mmx_nandv4hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_AND (V4HImode,
	gen_rtx_NOT (V4HImode,
	operand1),
	operand2));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/mmx.md:901 */
rtx
gen_mmx_nandv2si3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_AND (V2SImode,
	gen_rtx_NOT (V2SImode,
	operand1),
	operand2));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/mmx.md:901 */
rtx
gen_mmx_nandv1di3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_AND (V1DImode,
	gen_rtx_NOT (V1DImode,
	operand1),
	operand2));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/mmx.md:911 */
rtx
gen_mmx_iorv8qi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IOR (V8QImode,
	operand1,
	operand2));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/mmx.md:911 */
rtx
gen_mmx_iorv4hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IOR (V4HImode,
	operand1,
	operand2));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/mmx.md:911 */
rtx
gen_mmx_iorv2si3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IOR (V2SImode,
	operand1,
	operand2));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/mmx.md:911 */
rtx
gen_mmx_iorv1di3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IOR (V1DImode,
	operand1,
	operand2));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/mmx.md:921 */
rtx
gen_mmx_xorv8qi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_XOR (V8QImode,
	operand1,
	operand2));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/mmx.md:921 */
rtx
gen_mmx_xorv4hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_XOR (V4HImode,
	operand1,
	operand2));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/mmx.md:921 */
rtx
gen_mmx_xorv2si3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_XOR (V2SImode,
	operand1,
	operand2));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/mmx.md:921 */
rtx
gen_mmx_xorv1di3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_XOR (V1DImode,
	operand1,
	operand2));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/mmx.md:938 */
rtx
gen_mmx_packsswb (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_CONCAT (V8QImode,
	gen_rtx_SS_TRUNCATE (V4QImode,
	operand1),
	gen_rtx_SS_TRUNCATE (V4QImode,
	operand2)));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/mmx.md:950 */
rtx
gen_mmx_packssdw (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_CONCAT (V4HImode,
	gen_rtx_SS_TRUNCATE (V2HImode,
	operand1),
	gen_rtx_SS_TRUNCATE (V2HImode,
	operand2)));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/mmx.md:962 */
rtx
gen_mmx_packuswb (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_CONCAT (V8QImode,
	gen_rtx_US_TRUNCATE (V4QImode,
	operand1),
	gen_rtx_US_TRUNCATE (V4QImode,
	operand2)));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/mmx.md:974 */
rtx
gen_mmx_punpckhbw (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_SELECT (V8QImode,
	gen_rtx_VEC_CONCAT (V16QImode,
	operand1,
	operand2),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (8,
		const_int_rtx[MAX_SAVED_CONST_INT + (4)],
		const_int_rtx[MAX_SAVED_CONST_INT + (12)],
		const_int_rtx[MAX_SAVED_CONST_INT + (5)],
		const_int_rtx[MAX_SAVED_CONST_INT + (13)],
		const_int_rtx[MAX_SAVED_CONST_INT + (6)],
		const_int_rtx[MAX_SAVED_CONST_INT + (14)],
		const_int_rtx[MAX_SAVED_CONST_INT + (7)],
		const_int_rtx[MAX_SAVED_CONST_INT + (15)]))));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/mmx.md:989 */
rtx
gen_mmx_punpcklbw (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_SELECT (V8QImode,
	gen_rtx_VEC_CONCAT (V16QImode,
	operand1,
	operand2),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (8,
		const0_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (8)],
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (9)],
		const_int_rtx[MAX_SAVED_CONST_INT + (2)],
		const_int_rtx[MAX_SAVED_CONST_INT + (10)],
		const_int_rtx[MAX_SAVED_CONST_INT + (3)],
		const_int_rtx[MAX_SAVED_CONST_INT + (11)]))));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/mmx.md:1004 */
rtx
gen_mmx_punpckhwd (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_SELECT (V4HImode,
	gen_rtx_VEC_CONCAT (V8HImode,
	operand1,
	operand2),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)],
		const_int_rtx[MAX_SAVED_CONST_INT + (6)],
		const_int_rtx[MAX_SAVED_CONST_INT + (3)],
		const_int_rtx[MAX_SAVED_CONST_INT + (7)]))));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/mmx.md:1017 */
rtx
gen_mmx_punpcklwd (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_SELECT (V4HImode,
	gen_rtx_VEC_CONCAT (V8HImode,
	operand1,
	operand2),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		const0_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (4)],
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (5)]))));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/mmx.md:1030 */
rtx
gen_mmx_punpckhdq (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_SELECT (V2SImode,
	gen_rtx_VEC_CONCAT (V4SImode,
	operand1,
	operand2),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (3)]))));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/mmx.md:1043 */
rtx
gen_mmx_punpckldq (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_SELECT (V2SImode,
	gen_rtx_VEC_CONCAT (V4SImode,
	operand1,
	operand2),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const0_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)]))));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/mmx.md:1084 */
rtx
gen_mmx_pextrw (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ZERO_EXTEND (SImode,
	gen_rtx_VEC_SELECT (HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		operand2)))));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/mmx.md:1110 */
rtx
gen_mmx_pshufw_1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_SELECT (V4HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		operand2,
		operand3,
		operand4,
		operand5))));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/mmx.md:1132 */
rtx
gen_mmx_pswapdv2si2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_SELECT (V2SImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const1_rtx,
		const0_rtx))));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/mmx.md:1325 */
rtx
gen_mmx_uavgv8qi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_TRUNCATE (V8QImode,
	gen_rtx_LSHIFTRT (V8HImode,
	gen_rtx_PLUS (V8HImode,
	gen_rtx_PLUS (V8HImode,
	gen_rtx_ZERO_EXTEND (V8HImode,
	operand1),
	gen_rtx_ZERO_EXTEND (V8HImode,
	operand2)),
	gen_rtx_CONST_VECTOR (V8HImode,
	gen_rtvec (8,
		const1_rtx,
		const1_rtx,
		const1_rtx,
		const1_rtx,
		const1_rtx,
		const1_rtx,
		const1_rtx,
		const1_rtx))),
	const1_rtx)));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/mmx.md:1353 */
rtx
gen_mmx_uavgv4hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_TRUNCATE (V4HImode,
	gen_rtx_LSHIFTRT (V4SImode,
	gen_rtx_PLUS (V4SImode,
	gen_rtx_PLUS (V4SImode,
	gen_rtx_ZERO_EXTEND (V4SImode,
	operand1),
	gen_rtx_ZERO_EXTEND (V4SImode,
	operand2)),
	gen_rtx_CONST_VECTOR (V4SImode,
	gen_rtvec (4,
		const1_rtx,
		const1_rtx,
		const1_rtx,
		const1_rtx))),
	const1_rtx)));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/mmx.md:1373 */
rtx
gen_mmx_psadbw (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V1DImode,
	gen_rtvec (2,
		operand1,
		operand2),
	46));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/mmx.md:1384 */
rtx
gen_mmx_pmovmskb (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		operand1),
	32));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/mmx.md:1426 */
rtx
gen_mmx_emms (void)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (17,
		gen_rtx_UNSPEC_VOLATILE (VOIDmode,
	gen_rtvec (1,
		const0_rtx),
	2),
		gen_hard_reg_clobber (XFmode, 8),
		gen_hard_reg_clobber (XFmode, 9),
		gen_hard_reg_clobber (XFmode, 10),
		gen_hard_reg_clobber (XFmode, 11),
		gen_hard_reg_clobber (XFmode, 12),
		gen_hard_reg_clobber (XFmode, 13),
		gen_hard_reg_clobber (XFmode, 14),
		gen_hard_reg_clobber (XFmode, 15),
		gen_hard_reg_clobber (DImode, 29),
		gen_hard_reg_clobber (DImode, 30),
		gen_hard_reg_clobber (DImode, 31),
		gen_hard_reg_clobber (DImode, 32),
		gen_hard_reg_clobber (DImode, 33),
		gen_hard_reg_clobber (DImode, 34),
		gen_hard_reg_clobber (DImode, 35),
		gen_hard_reg_clobber (DImode, 36)));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/mmx.md:1449 */
rtx
gen_mmx_femms (void)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (17,
		gen_rtx_UNSPEC_VOLATILE (VOIDmode,
	gen_rtvec (1,
		const0_rtx),
	5),
		gen_hard_reg_clobber (XFmode, 8),
		gen_hard_reg_clobber (XFmode, 9),
		gen_hard_reg_clobber (XFmode, 10),
		gen_hard_reg_clobber (XFmode, 11),
		gen_hard_reg_clobber (XFmode, 12),
		gen_hard_reg_clobber (XFmode, 13),
		gen_hard_reg_clobber (XFmode, 14),
		gen_hard_reg_clobber (XFmode, 15),
		gen_hard_reg_clobber (DImode, 29),
		gen_hard_reg_clobber (DImode, 30),
		gen_hard_reg_clobber (DImode, 31),
		gen_hard_reg_clobber (DImode, 32),
		gen_hard_reg_clobber (DImode, 33),
		gen_hard_reg_clobber (DImode, 34),
		gen_hard_reg_clobber (DImode, 35),
		gen_hard_reg_clobber (DImode, 36)));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:198 */
rtx
gen_sse_movups (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V4SFmode,
	gen_rtvec (1,
		operand1),
	34));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:207 */
rtx
gen_sse2_movupd (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V2DFmode,
	gen_rtvec (1,
		operand1),
	34));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:216 */
rtx
gen_sse2_movdqu (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V16QImode,
	gen_rtvec (1,
		operand1),
	34));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:225 */
rtx
gen_sse_movntv4sf (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V4SFmode,
	gen_rtvec (1,
		operand1),
	33));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:234 */
rtx
gen_sse2_movntv2df (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V2DFmode,
	gen_rtvec (1,
		operand1),
	33));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:243 */
rtx
gen_sse2_movntv2di (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V2DImode,
	gen_rtvec (1,
		operand1),
	33));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:252 */
rtx
gen_sse2_movntsi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		operand1),
	33));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:262 */
rtx
gen_sse_loadqv4si (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V4SImode,
	gen_rtvec (1,
		gen_rtx_ZERO_EXTEND (V4SImode,
	operand1)),
	201));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:269 */
rtx
gen_sse_storeqv4si (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V2SImode,
	gen_rtvec (1,
		operand1),
	203));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:276 */
rtx
gen_sse_movqv4si (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V4SImode,
	gen_rtvec (1,
		gen_rtx_ZERO_EXTEND (V4SImode,
	gen_rtx_SUBREG (V2SImode,
	operand1,
	0))),
	202));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:284 */
rtx
gen_sse3_lddqu (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V16QImode,
	gen_rtvec (1,
		operand1),
	47));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:327 */
rtx
gen_sse_vmaddv4sf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_MERGE (V4SFmode,
	gen_rtx_PLUS (V4SFmode,
	operand1,
	operand2),
	operand1,
	const1_rtx));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:355 */
rtx
gen_sse_vmsubv4sf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_MERGE (V4SFmode,
	gen_rtx_MINUS (V4SFmode,
	operand1,
	operand2),
	operand1,
	const1_rtx));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:383 */
rtx
gen_sse_vmmulv4sf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_MERGE (V4SFmode,
	gen_rtx_MULT (V4SFmode,
	operand1,
	operand2),
	operand1,
	const1_rtx));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:411 */
rtx
gen_sse_vmdivv4sf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_MERGE (V4SFmode,
	gen_rtx_DIV (V4SFmode,
	operand1,
	operand2),
	operand1,
	const1_rtx));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:423 */
rtx
gen_sse_rcpv4sf2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V4SFmode,
	gen_rtvec (1,
		operand1),
	35));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:432 */
rtx
gen_sse_vmrcpv4sf2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_MERGE (V4SFmode,
	gen_rtx_UNSPEC (V4SFmode,
	gen_rtvec (1,
		operand1),
	35),
	operand2,
	const1_rtx));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:444 */
rtx
gen_sse_rsqrtv4sf2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V4SFmode,
	gen_rtvec (1,
		operand1),
	36));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:453 */
rtx
gen_sse_vmrsqrtv4sf2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_MERGE (V4SFmode,
	gen_rtx_UNSPEC (V4SFmode,
	gen_rtvec (1,
		operand1),
	36),
	operand2,
	const1_rtx));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:465 */
rtx
gen_sqrtv4sf2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SQRT (V4SFmode,
	operand1));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:473 */
rtx
gen_sse_vmsqrtv4sf2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_MERGE (V4SFmode,
	gen_rtx_SQRT (V4SFmode,
	operand1),
	operand2,
	const1_rtx));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:518 */
rtx
gen_sse_vmsmaxv4sf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_MERGE (V4SFmode,
	gen_rtx_SMAX (V4SFmode,
	operand1,
	operand2),
	operand1,
	const1_rtx));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:560 */
rtx
gen_sse_vmsminv4sf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_MERGE (V4SFmode,
	gen_rtx_SMIN (V4SFmode,
	operand1,
	operand2),
	operand1,
	const1_rtx));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:618 */
rtx
gen_sse3_addsubv4sf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_MERGE (V4SFmode,
	gen_rtx_PLUS (V4SFmode,
	operand1,
	operand2),
	gen_rtx_MINUS (V4SFmode,
	operand1,
	operand2),
	const_int_rtx[MAX_SAVED_CONST_INT + (5)]));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:631 */
rtx
gen_sse3_haddv4sf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_CONCAT (V4SFmode,
	gen_rtx_VEC_CONCAT (V2SFmode,
	gen_rtx_PLUS (SFmode,
	gen_rtx_VEC_SELECT (SFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))),
	gen_rtx_VEC_SELECT (SFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx)))),
	gen_rtx_PLUS (SFmode,
	gen_rtx_VEC_SELECT (SFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)]))),
	gen_rtx_VEC_SELECT (SFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (3)]))))),
	gen_rtx_VEC_CONCAT (V2SFmode,
	gen_rtx_PLUS (SFmode,
	gen_rtx_VEC_SELECT (SFmode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))),
	gen_rtx_VEC_SELECT (SFmode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx)))),
	gen_rtx_PLUS (SFmode,
	gen_rtx_VEC_SELECT (SFmode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)]))),
	gen_rtx_VEC_SELECT (SFmode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (3)])))))));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:657 */
rtx
gen_sse3_hsubv4sf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_CONCAT (V4SFmode,
	gen_rtx_VEC_CONCAT (V2SFmode,
	gen_rtx_MINUS (SFmode,
	gen_rtx_VEC_SELECT (SFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))),
	gen_rtx_VEC_SELECT (SFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx)))),
	gen_rtx_MINUS (SFmode,
	gen_rtx_VEC_SELECT (SFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)]))),
	gen_rtx_VEC_SELECT (SFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (3)]))))),
	gen_rtx_VEC_CONCAT (V2SFmode,
	gen_rtx_MINUS (SFmode,
	gen_rtx_VEC_SELECT (SFmode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))),
	gen_rtx_VEC_SELECT (SFmode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx)))),
	gen_rtx_MINUS (SFmode,
	gen_rtx_VEC_SELECT (SFmode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)]))),
	gen_rtx_VEC_SELECT (SFmode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (3)])))))));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:723 */
rtx
gen_sse_maskcmpv4sf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_fmt_ee (GET_CODE (operand3), V4SFmode,
		operand1,
		operand2));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:733 */
rtx
gen_sse_vmmaskcmpv4sf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_MERGE (V4SFmode,
	gen_rtx_fmt_ee (GET_CODE (operand3), V4SFmode,
		operand1,
		operand2),
	operand1,
	const1_rtx));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:746 */
rtx
gen_sse_comi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCFPmode,
	17),
	gen_rtx_COMPARE (CCFPmode,
	gen_rtx_VEC_SELECT (SFmode,
	operand0,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))),
	gen_rtx_VEC_SELECT (SFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:760 */
rtx
gen_sse_ucomi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCFPUmode,
	17),
	gen_rtx_COMPARE (CCFPUmode,
	gen_rtx_VEC_SELECT (SFmode,
	operand0,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))),
	gen_rtx_VEC_SELECT (SFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:812 */
rtx
gen_sse_nandv4sf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_AND (V4SFmode,
	gen_rtx_NOT (V4SFmode,
	operand1),
	operand2));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:900 */
rtx
gen_sse_cvtpi2ps (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_MERGE (V4SFmode,
	gen_rtx_VEC_DUPLICATE (V4SFmode,
	gen_rtx_FLOAT (V2SFmode,
	operand2)),
	operand1,
	const_int_rtx[MAX_SAVED_CONST_INT + (3)]));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:912 */
rtx
gen_sse_cvtps2pi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_SELECT (V2SImode,
	gen_rtx_UNSPEC (V4SImode,
	gen_rtvec (1,
		operand1),
	30),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const0_rtx,
		const1_rtx))));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:924 */
rtx
gen_sse_cvttps2pi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_SELECT (V2SImode,
	gen_rtx_FIX (V4SImode,
	operand1),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const0_rtx,
		const1_rtx))));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:935 */
rtx
gen_sse_cvtsi2ss (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_MERGE (V4SFmode,
	gen_rtx_VEC_DUPLICATE (V4SFmode,
	gen_rtx_FLOAT (SFmode,
	operand2)),
	operand1,
	const1_rtx));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:948 */
rtx
gen_sse_cvtsi2ssq (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_MERGE (V4SFmode,
	gen_rtx_VEC_DUPLICATE (V4SFmode,
	gen_rtx_FLOAT (SFmode,
	operand2)),
	operand1,
	const1_rtx));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:961 */
rtx
gen_sse_cvtss2si (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		gen_rtx_VEC_SELECT (SFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))),
	30));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:974 */
rtx
gen_sse_cvtss2siq (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (1,
		gen_rtx_VEC_SELECT (SFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))),
	30));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:987 */
rtx
gen_sse_cvttss2si (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FIX (SImode,
	gen_rtx_VEC_SELECT (SFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:999 */
rtx
gen_sse_cvttss2siq (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FIX (DImode,
	gen_rtx_VEC_SELECT (SFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:1011 */
rtx
gen_sse2_cvtdq2ps (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT (V4SFmode,
	operand1));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:1019 */
rtx
gen_sse2_cvtps2dq (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V4SImode,
	gen_rtvec (1,
		operand1),
	30));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:1028 */
rtx
gen_sse2_cvttps2dq (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FIX (V4SImode,
	operand1));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:1042 */
rtx
gen_sse_movhlps (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_SELECT (V4SFmode,
	gen_rtx_VEC_CONCAT (V8SFmode,
	operand1,
	operand2),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		const_int_rtx[MAX_SAVED_CONST_INT + (6)],
		const_int_rtx[MAX_SAVED_CONST_INT + (7)],
		const_int_rtx[MAX_SAVED_CONST_INT + (2)],
		const_int_rtx[MAX_SAVED_CONST_INT + (3)]))));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:1061 */
rtx
gen_sse_movlhps (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_SELECT (V4SFmode,
	gen_rtx_VEC_CONCAT (V8SFmode,
	operand1,
	operand2),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		const0_rtx,
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (4)],
		const_int_rtx[MAX_SAVED_CONST_INT + (5)]))));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:1082 */
rtx
gen_sse_unpckhps (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_SELECT (V4SFmode,
	gen_rtx_VEC_CONCAT (V8SFmode,
	operand1,
	operand2),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)],
		const_int_rtx[MAX_SAVED_CONST_INT + (6)],
		const_int_rtx[MAX_SAVED_CONST_INT + (3)],
		const_int_rtx[MAX_SAVED_CONST_INT + (7)]))));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:1095 */
rtx
gen_sse_unpcklps (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_SELECT (V4SFmode,
	gen_rtx_VEC_CONCAT (V8SFmode,
	operand1,
	operand2),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		const0_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (4)],
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (5)]))));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:1110 */
rtx
gen_sse3_movshdup (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_SELECT (V4SFmode,
	gen_rtx_VEC_CONCAT (V8SFmode,
	operand1,
	operand1),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		const1_rtx,
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (7)],
		const_int_rtx[MAX_SAVED_CONST_INT + (7)]))));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:1125 */
rtx
gen_sse3_movsldup (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_SELECT (V4SFmode,
	gen_rtx_VEC_CONCAT (V8SFmode,
	operand1,
	operand1),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		const0_rtx,
		const0_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (6)],
		const_int_rtx[MAX_SAVED_CONST_INT + (6)]))));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:1156 */
rtx
gen_sse_shufps_1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED,
	rtx operand6 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_SELECT (V4SFmode,
	gen_rtx_VEC_CONCAT (V8SFmode,
	operand1,
	operand2),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		operand3,
		operand4,
		operand5,
		operand6))));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:1180 */
rtx
gen_sse_storehps (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_SELECT (V2SFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)],
		const_int_rtx[MAX_SAVED_CONST_INT + (3)]))));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:1193 */
rtx
gen_sse_loadhps (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_CONCAT (V4SFmode,
	gen_rtx_VEC_SELECT (V2SFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const0_rtx,
		const1_rtx))),
	operand2));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:1208 */
rtx
gen_sse_storelps (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_SELECT (V2SFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const0_rtx,
		const1_rtx))));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:1221 */
rtx
gen_sse_loadlps (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_CONCAT (V4SFmode,
	operand2,
	gen_rtx_VEC_SELECT (V2SFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)],
		const_int_rtx[MAX_SAVED_CONST_INT + (3)])))));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:1236 */
rtx
gen_sse_movss (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_MERGE (V4SFmode,
	operand2,
	operand1,
	const1_rtx));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:1331 */
rtx
gen_sse4_1_insertps (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V4SFmode,
	gen_rtvec (3,
		operand2,
		operand1,
		operand3),
	135));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:1446 */
rtx
gen_sse2_vmaddv2df3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_MERGE (V2DFmode,
	gen_rtx_PLUS (V2DFmode,
	operand1,
	operand2),
	operand1,
	const1_rtx));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:1474 */
rtx
gen_sse2_vmsubv2df3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_MERGE (V2DFmode,
	gen_rtx_MINUS (V2DFmode,
	operand1,
	operand2),
	operand1,
	const1_rtx));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:1502 */
rtx
gen_sse2_vmmulv2df3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_MERGE (V2DFmode,
	gen_rtx_MULT (V2DFmode,
	operand1,
	operand2),
	operand1,
	const1_rtx));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:1530 */
rtx
gen_sse2_vmdivv2df3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_MERGE (V2DFmode,
	gen_rtx_DIV (V2DFmode,
	operand1,
	operand2),
	operand1,
	const1_rtx));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:1542 */
rtx
gen_sqrtv2df2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SQRT (V2DFmode,
	operand1));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:1550 */
rtx
gen_sse2_vmsqrtv2df2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_MERGE (V2DFmode,
	gen_rtx_SQRT (V2DFmode,
	operand1),
	operand2,
	const1_rtx));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:1595 */
rtx
gen_sse2_vmsmaxv2df3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_MERGE (V2DFmode,
	gen_rtx_SMAX (V2DFmode,
	operand1,
	operand2),
	operand1,
	const1_rtx));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:1637 */
rtx
gen_sse2_vmsminv2df3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_MERGE (V2DFmode,
	gen_rtx_SMIN (V2DFmode,
	operand1,
	operand2),
	operand1,
	const1_rtx));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:1649 */
rtx
gen_sse3_addsubv2df3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_MERGE (V2DFmode,
	gen_rtx_PLUS (V2DFmode,
	operand1,
	operand2),
	gen_rtx_MINUS (V2DFmode,
	operand1,
	operand2),
	const1_rtx));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:1662 */
rtx
gen_sse3_haddv2df3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_CONCAT (V2DFmode,
	gen_rtx_PLUS (DFmode,
	gen_rtx_VEC_SELECT (DFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))),
	gen_rtx_VEC_SELECT (DFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx)))),
	gen_rtx_PLUS (DFmode,
	gen_rtx_VEC_SELECT (DFmode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))),
	gen_rtx_VEC_SELECT (DFmode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx))))));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:1680 */
rtx
gen_sse3_hsubv2df3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_CONCAT (V2DFmode,
	gen_rtx_MINUS (DFmode,
	gen_rtx_VEC_SELECT (DFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))),
	gen_rtx_VEC_SELECT (DFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx)))),
	gen_rtx_MINUS (DFmode,
	gen_rtx_VEC_SELECT (DFmode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))),
	gen_rtx_VEC_SELECT (DFmode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx))))));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:1713 */
rtx
gen_sse2_maskcmpv2df3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_fmt_ee (GET_CODE (operand3), V2DFmode,
		operand1,
		operand2));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:1723 */
rtx
gen_sse2_vmmaskcmpv2df3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_MERGE (V2DFmode,
	gen_rtx_fmt_ee (GET_CODE (operand3), V2DFmode,
		operand1,
		operand2),
	operand1,
	const1_rtx));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:1736 */
rtx
gen_sse2_comi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCFPmode,
	17),
	gen_rtx_COMPARE (CCFPmode,
	gen_rtx_VEC_SELECT (DFmode,
	operand0,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))),
	gen_rtx_VEC_SELECT (DFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:1750 */
rtx
gen_sse2_ucomi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCFPUmode,
	17),
	gen_rtx_COMPARE (CCFPUmode,
	gen_rtx_VEC_SELECT (DFmode,
	operand0,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))),
	gen_rtx_VEC_SELECT (DFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:1802 */
rtx
gen_sse2_nandv2df3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_AND (V2DFmode,
	gen_rtx_NOT (V2DFmode,
	operand1),
	operand2));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:1890 */
rtx
gen_sse2_cvtpi2pd (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT (V2DFmode,
	operand1));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:1899 */
rtx
gen_sse2_cvtpd2pi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V2SImode,
	gen_rtvec (1,
		operand1),
	30));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:1909 */
rtx
gen_sse2_cvttpd2pi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FIX (V2SImode,
	operand1));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:1918 */
rtx
gen_sse2_cvtsi2sd (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_MERGE (V2DFmode,
	gen_rtx_VEC_DUPLICATE (V2DFmode,
	gen_rtx_FLOAT (DFmode,
	operand2)),
	operand1,
	const1_rtx));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:1931 */
rtx
gen_sse2_cvtsi2sdq (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_MERGE (V2DFmode,
	gen_rtx_VEC_DUPLICATE (V2DFmode,
	gen_rtx_FLOAT (DFmode,
	operand2)),
	operand1,
	const1_rtx));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:1944 */
rtx
gen_sse2_cvtsd2si (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		gen_rtx_VEC_SELECT (DFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))),
	30));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:1957 */
rtx
gen_sse2_cvtsd2siq (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (1,
		gen_rtx_VEC_SELECT (DFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))),
	30));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:1970 */
rtx
gen_sse2_cvttsd2si (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FIX (SImode,
	gen_rtx_VEC_SELECT (DFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:1982 */
rtx
gen_sse2_cvttsd2siq (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FIX (DImode,
	gen_rtx_VEC_SELECT (DFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:1994 */
rtx
gen_sse2_cvtdq2pd (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT (V2DFmode,
	gen_rtx_VEC_SELECT (V2SImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const0_rtx,
		const1_rtx)))));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:2043 */
rtx
gen_sse2_cvtsd2ss (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_MERGE (V4SFmode,
	gen_rtx_VEC_DUPLICATE (V4SFmode,
	gen_rtx_FLOAT_TRUNCATE (V2SFmode,
	operand2)),
	operand1,
	const1_rtx));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:2057 */
rtx
gen_sse2_cvtss2sd (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_MERGE (V2DFmode,
	gen_rtx_FLOAT_EXTEND (V2DFmode,
	gen_rtx_VEC_SELECT (V2SFmode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const0_rtx,
		const1_rtx)))),
	operand1,
	const1_rtx));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:2091 */
rtx
gen_sse2_cvtps2pd (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT_EXTEND (V2DFmode,
	gen_rtx_VEC_SELECT (V2SFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const0_rtx,
		const1_rtx)))));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:2108 */
rtx
gen_sse2_unpckhpd (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_SELECT (V2DFmode,
	gen_rtx_VEC_CONCAT (V4DFmode,
	operand1,
	operand2),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (3)]))));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:2156 */
rtx
gen_sse2_unpcklpd (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_SELECT (V2DFmode,
	gen_rtx_VEC_CONCAT (V4DFmode,
	operand1,
	operand2),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const0_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)]))));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:2186 */
rtx
gen_sse2_shufpd_1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_SELECT (V2DFmode,
	gen_rtx_VEC_CONCAT (V4DFmode,
	operand1,
	operand2),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		operand3,
		operand4))));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:2206 */
rtx
gen_sse2_storehpd (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_SELECT (DFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx))));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:2230 */
rtx
gen_sse2_storelpd (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_SELECT (DFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:2260 */
rtx
gen_sse2_loadhpd (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_CONCAT (V2DFmode,
	gen_rtx_VEC_SELECT (DFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))),
	operand2));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:2287 */
rtx
gen_sse2_loadlpd (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_CONCAT (V2DFmode,
	operand2,
	gen_rtx_VEC_SELECT (DFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx)))));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:2347 */
rtx
gen_sse2_movsd (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_MERGE (V2DFmode,
	operand2,
	operand1,
	const1_rtx));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:2472 */
rtx
gen_sse2_ssaddv16qi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SS_PLUS (V16QImode,
	operand1,
	operand2));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:2472 */
rtx
gen_sse2_ssaddv8hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SS_PLUS (V8HImode,
	operand1,
	operand2));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:2482 */
rtx
gen_sse2_usaddv16qi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_US_PLUS (V16QImode,
	operand1,
	operand2));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:2482 */
rtx
gen_sse2_usaddv8hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_US_PLUS (V8HImode,
	operand1,
	operand2));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:2509 */
rtx
gen_sse2_sssubv16qi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SS_MINUS (V16QImode,
	operand1,
	operand2));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:2509 */
rtx
gen_sse2_sssubv8hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SS_MINUS (V8HImode,
	operand1,
	operand2));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:2519 */
rtx
gen_sse2_ussubv16qi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_US_MINUS (V16QImode,
	operand1,
	operand2));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:2519 */
rtx
gen_sse2_ussubv8hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_US_MINUS (V8HImode,
	operand1,
	operand2));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:2648 */
rtx
gen_sse2_umulv2siv2di3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (V2DImode,
	gen_rtx_ZERO_EXTEND (V2DImode,
	gen_rtx_VEC_SELECT (V2SImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const0_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)])))),
	gen_rtx_ZERO_EXTEND (V2DImode,
	gen_rtx_VEC_SELECT (V2SImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const0_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)]))))));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:2665 */
rtx
gen_sse4_1_mulv2siv2di3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (V2DImode,
	gen_rtx_SIGN_EXTEND (V2DImode,
	gen_rtx_VEC_SELECT (V2SImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const0_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)])))),
	gen_rtx_SIGN_EXTEND (V2DImode,
	gen_rtx_VEC_SELECT (V2SImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const0_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)]))))));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:2682 */
rtx
gen_sse2_pmaddwd (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (V4SImode,
	gen_rtx_MULT (V4SImode,
	gen_rtx_SIGN_EXTEND (V4SImode,
	gen_rtx_VEC_SELECT (V4HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		const0_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)],
		const_int_rtx[MAX_SAVED_CONST_INT + (4)],
		const_int_rtx[MAX_SAVED_CONST_INT + (6)])))),
	gen_rtx_SIGN_EXTEND (V4SImode,
	gen_rtx_VEC_SELECT (V4HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		const0_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)],
		const_int_rtx[MAX_SAVED_CONST_INT + (4)],
		const_int_rtx[MAX_SAVED_CONST_INT + (6)]))))),
	gen_rtx_MULT (V4SImode,
	gen_rtx_SIGN_EXTEND (V4SImode,
	gen_rtx_VEC_SELECT (V4HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (3)],
		const_int_rtx[MAX_SAVED_CONST_INT + (5)],
		const_int_rtx[MAX_SAVED_CONST_INT + (7)])))),
	gen_rtx_SIGN_EXTEND (V4SImode,
	gen_rtx_VEC_SELECT (V4HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (3)],
		const_int_rtx[MAX_SAVED_CONST_INT + (5)],
		const_int_rtx[MAX_SAVED_CONST_INT + (7)])))))));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:3018 */
rtx
gen_ashrv8hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFTRT (V8HImode,
	operand1,
	operand2));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:3018 */
rtx
gen_ashrv4si3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFTRT (V4SImode,
	operand1,
	operand2));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:3028 */
rtx
gen_lshrv8hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_LSHIFTRT (V8HImode,
	operand1,
	operand2));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:3028 */
rtx
gen_lshrv4si3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_LSHIFTRT (V4SImode,
	operand1,
	operand2));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:3028 */
rtx
gen_lshrv2di3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_LSHIFTRT (V2DImode,
	operand1,
	operand2));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:3038 */
rtx
gen_ashlv8hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFT (V8HImode,
	operand1,
	operand2));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:3038 */
rtx
gen_ashlv4si3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFT (V4SImode,
	operand1,
	operand2));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:3038 */
rtx
gen_ashlv2di3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFT (V2DImode,
	operand1,
	operand2));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:3173 */
rtx
gen_sse4_1_smaxv16qi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SMAX (V16QImode,
	operand1,
	operand2));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:3173 */
rtx
gen_sse4_1_smaxv4si3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SMAX (V4SImode,
	operand1,
	operand2));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:3184 */
rtx
gen_sse4_1_umaxv8hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UMAX (V8HImode,
	operand1,
	operand2));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:3184 */
rtx
gen_sse4_1_umaxv4si3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UMAX (V4SImode,
	operand1,
	operand2));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:3281 */
rtx
gen_sse2_eqv16qi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_EQ (V16QImode,
	operand1,
	operand2));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:3281 */
rtx
gen_sse2_eqv8hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_EQ (V8HImode,
	operand1,
	operand2));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:3281 */
rtx
gen_sse2_eqv4si3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_EQ (V4SImode,
	operand1,
	operand2));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:3292 */
rtx
gen_sse4_1_eqv2di3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_EQ (V2DImode,
	operand1,
	operand2));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:3304 */
rtx
gen_sse2_gtv16qi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_GT (V16QImode,
	operand1,
	operand2));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:3304 */
rtx
gen_sse2_gtv8hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_GT (V8HImode,
	operand1,
	operand2));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:3304 */
rtx
gen_sse2_gtv4si3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_GT (V4SImode,
	operand1,
	operand2));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:3315 */
rtx
gen_sse4_2_gtv2di3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_GT (V2DImode,
	operand1,
	operand2));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:3396 */
rtx
gen_sse2_nandv16qi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_AND (V16QImode,
	gen_rtx_NOT (V16QImode,
	operand1),
	operand2));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:3396 */
rtx
gen_sse2_nandv8hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_AND (V8HImode,
	gen_rtx_NOT (V8HImode,
	operand1),
	operand2));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:3396 */
rtx
gen_sse2_nandv4si3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_AND (V4SImode,
	gen_rtx_NOT (V4SImode,
	operand1),
	operand2));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:3396 */
rtx
gen_sse2_nandv2di3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_AND (V2DImode,
	gen_rtx_NOT (V2DImode,
	operand1),
	operand2));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:3441 */
rtx
gen_sse4_1_sminv16qi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SMIN (V16QImode,
	operand1,
	operand2));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:3441 */
rtx
gen_sse4_1_sminv4si3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SMIN (V4SImode,
	operand1,
	operand2));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:3452 */
rtx
gen_sse4_1_uminv8hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UMIN (V8HImode,
	operand1,
	operand2));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:3452 */
rtx
gen_sse4_1_uminv4si3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UMIN (V4SImode,
	operand1,
	operand2));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:3600 */
rtx
gen_sse2_packsswb (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_CONCAT (V16QImode,
	gen_rtx_SS_TRUNCATE (V8QImode,
	operand1),
	gen_rtx_SS_TRUNCATE (V8QImode,
	operand2)));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:3612 */
rtx
gen_sse2_packssdw (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_CONCAT (V8HImode,
	gen_rtx_SS_TRUNCATE (V4HImode,
	operand1),
	gen_rtx_SS_TRUNCATE (V4HImode,
	operand2)));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:3624 */
rtx
gen_sse2_packuswb (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_CONCAT (V16QImode,
	gen_rtx_US_TRUNCATE (V8QImode,
	operand1),
	gen_rtx_US_TRUNCATE (V8QImode,
	operand2)));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:3636 */
rtx
gen_sse2_punpckhbw (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_SELECT (V16QImode,
	gen_rtx_VEC_CONCAT (V32QImode,
	operand1,
	operand2),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (16,
		const_int_rtx[MAX_SAVED_CONST_INT + (8)],
		const_int_rtx[MAX_SAVED_CONST_INT + (24)],
		const_int_rtx[MAX_SAVED_CONST_INT + (9)],
		const_int_rtx[MAX_SAVED_CONST_INT + (25)],
		const_int_rtx[MAX_SAVED_CONST_INT + (10)],
		const_int_rtx[MAX_SAVED_CONST_INT + (26)],
		const_int_rtx[MAX_SAVED_CONST_INT + (11)],
		const_int_rtx[MAX_SAVED_CONST_INT + (27)],
		const_int_rtx[MAX_SAVED_CONST_INT + (12)],
		const_int_rtx[MAX_SAVED_CONST_INT + (28)],
		const_int_rtx[MAX_SAVED_CONST_INT + (13)],
		const_int_rtx[MAX_SAVED_CONST_INT + (29)],
		const_int_rtx[MAX_SAVED_CONST_INT + (14)],
		const_int_rtx[MAX_SAVED_CONST_INT + (30)],
		const_int_rtx[MAX_SAVED_CONST_INT + (15)],
		const_int_rtx[MAX_SAVED_CONST_INT + (31)]))));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:3655 */
rtx
gen_sse2_punpcklbw (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_SELECT (V16QImode,
	gen_rtx_VEC_CONCAT (V32QImode,
	operand1,
	operand2),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (16,
		const0_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (16)],
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (17)],
		const_int_rtx[MAX_SAVED_CONST_INT + (2)],
		const_int_rtx[MAX_SAVED_CONST_INT + (18)],
		const_int_rtx[MAX_SAVED_CONST_INT + (3)],
		const_int_rtx[MAX_SAVED_CONST_INT + (19)],
		const_int_rtx[MAX_SAVED_CONST_INT + (4)],
		const_int_rtx[MAX_SAVED_CONST_INT + (20)],
		const_int_rtx[MAX_SAVED_CONST_INT + (5)],
		const_int_rtx[MAX_SAVED_CONST_INT + (21)],
		const_int_rtx[MAX_SAVED_CONST_INT + (6)],
		const_int_rtx[MAX_SAVED_CONST_INT + (22)],
		const_int_rtx[MAX_SAVED_CONST_INT + (7)],
		const_int_rtx[MAX_SAVED_CONST_INT + (23)]))));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:3674 */
rtx
gen_sse2_punpckhwd (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_SELECT (V8HImode,
	gen_rtx_VEC_CONCAT (V16HImode,
	operand1,
	operand2),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (8,
		const_int_rtx[MAX_SAVED_CONST_INT + (4)],
		const_int_rtx[MAX_SAVED_CONST_INT + (12)],
		const_int_rtx[MAX_SAVED_CONST_INT + (5)],
		const_int_rtx[MAX_SAVED_CONST_INT + (13)],
		const_int_rtx[MAX_SAVED_CONST_INT + (6)],
		const_int_rtx[MAX_SAVED_CONST_INT + (14)],
		const_int_rtx[MAX_SAVED_CONST_INT + (7)],
		const_int_rtx[MAX_SAVED_CONST_INT + (15)]))));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:3689 */
rtx
gen_sse2_punpcklwd (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_SELECT (V8HImode,
	gen_rtx_VEC_CONCAT (V16HImode,
	operand1,
	operand2),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (8,
		const0_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (8)],
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (9)],
		const_int_rtx[MAX_SAVED_CONST_INT + (2)],
		const_int_rtx[MAX_SAVED_CONST_INT + (10)],
		const_int_rtx[MAX_SAVED_CONST_INT + (3)],
		const_int_rtx[MAX_SAVED_CONST_INT + (11)]))));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:3704 */
rtx
gen_sse2_punpckhdq (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_SELECT (V4SImode,
	gen_rtx_VEC_CONCAT (V8SImode,
	operand1,
	operand2),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)],
		const_int_rtx[MAX_SAVED_CONST_INT + (6)],
		const_int_rtx[MAX_SAVED_CONST_INT + (3)],
		const_int_rtx[MAX_SAVED_CONST_INT + (7)]))));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:3717 */
rtx
gen_sse2_punpckldq (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_SELECT (V4SImode,
	gen_rtx_VEC_CONCAT (V8SImode,
	operand1,
	operand2),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		const0_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (4)],
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (5)]))));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:3730 */
rtx
gen_sse2_punpckhqdq (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_SELECT (V2DImode,
	gen_rtx_VEC_CONCAT (V4DImode,
	operand1,
	operand2),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (3)]))));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:3743 */
rtx
gen_sse2_punpcklqdq (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_SELECT (V2DImode,
	gen_rtx_VEC_CONCAT (V4DImode,
	operand1,
	operand2),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const0_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)]))));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:3860 */
rtx
gen_sse2_pextrw (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ZERO_EXTEND (SImode,
	gen_rtx_VEC_SELECT (HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		operand2)))));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:3922 */
rtx
gen_sse2_pshufd_1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_SELECT (V4SImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		operand2,
		operand3,
		operand4,
		operand5))));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:3959 */
rtx
gen_sse2_pshuflw_1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_SELECT (V8HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (8,
		operand2,
		operand3,
		operand4,
		operand5,
		const_int_rtx[MAX_SAVED_CONST_INT + (4)],
		const_int_rtx[MAX_SAVED_CONST_INT + (5)],
		const_int_rtx[MAX_SAVED_CONST_INT + (6)],
		const_int_rtx[MAX_SAVED_CONST_INT + (7)]))));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:4000 */
rtx
gen_sse2_pshufhw_1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_SELECT (V8HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (8,
		const0_rtx,
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)],
		const_int_rtx[MAX_SAVED_CONST_INT + (3)],
		operand2,
		operand3,
		operand4,
		operand5))));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:4037 */
rtx
gen_sse2_loadld (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_MERGE (V4SImode,
	gen_rtx_VEC_DUPLICATE (V4SImode,
	operand2),
	operand1,
	const1_rtx));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:4057 */
rtx
gen_sse2_stored (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_SELECT (SImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:4501 */
rtx
gen_sse2_uavgv16qi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_TRUNCATE (V16QImode,
	gen_rtx_LSHIFTRT (V16HImode,
	gen_rtx_PLUS (V16HImode,
	gen_rtx_PLUS (V16HImode,
	gen_rtx_ZERO_EXTEND (V16HImode,
	operand1),
	gen_rtx_ZERO_EXTEND (V16HImode,
	operand2)),
	gen_rtx_CONST_VECTOR (V16QImode,
	gen_rtvec (16,
		const1_rtx,
		const1_rtx,
		const1_rtx,
		const1_rtx,
		const1_rtx,
		const1_rtx,
		const1_rtx,
		const1_rtx,
		const1_rtx,
		const1_rtx,
		const1_rtx,
		const1_rtx,
		const1_rtx,
		const1_rtx,
		const1_rtx,
		const1_rtx))),
	const1_rtx)));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:4525 */
rtx
gen_sse2_uavgv8hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_TRUNCATE (V8HImode,
	gen_rtx_LSHIFTRT (V8SImode,
	gen_rtx_PLUS (V8SImode,
	gen_rtx_PLUS (V8SImode,
	gen_rtx_ZERO_EXTEND (V8SImode,
	operand1),
	gen_rtx_ZERO_EXTEND (V8SImode,
	operand2)),
	gen_rtx_CONST_VECTOR (V8HImode,
	gen_rtvec (8,
		const1_rtx,
		const1_rtx,
		const1_rtx,
		const1_rtx,
		const1_rtx,
		const1_rtx,
		const1_rtx,
		const1_rtx))),
	const1_rtx)));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:4547 */
rtx
gen_sse2_psadbw (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V2DImode,
	gen_rtvec (2,
		operand1,
		operand2),
	46));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:4557 */
rtx
gen_sse_movmskps (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		operand1),
	32));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:4566 */
rtx
gen_sse2_movmskpd (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		operand1),
	32));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:4575 */
rtx
gen_sse2_pmovmskb (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		operand1),
	32));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:4617 */
rtx
gen_sse_ldmxcsr (rtx operand0 ATTRIBUTE_UNUSED)
{
  return gen_rtx_UNSPEC_VOLATILE (VOIDmode,
	gen_rtvec (1,
		operand0),
	3);
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:4625 */
rtx
gen_sse_stmxcsr (rtx operand0 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (1,
		const0_rtx),
	4));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:4650 */
rtx
gen_sse2_clflush (rtx operand0 ATTRIBUTE_UNUSED)
{
  return gen_rtx_UNSPEC_VOLATILE (VOIDmode,
	gen_rtvec (1,
		operand0),
	6);
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:4692 */
rtx
gen_sse3_mwait (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_UNSPEC_VOLATILE (VOIDmode,
	gen_rtvec (2,
		operand0,
		operand1),
	9);
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:4703 */
rtx
gen_sse3_monitor (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_UNSPEC_VOLATILE (VOIDmode,
	gen_rtvec (3,
		operand0,
		operand1,
		operand2),
	8);
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:4713 */
rtx
gen_ssse3_phaddwv8hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_CONCAT (V8HImode,
	gen_rtx_VEC_CONCAT (V4HImode,
	gen_rtx_VEC_CONCAT (V2HImode,
	gen_rtx_PLUS (HImode,
	gen_rtx_VEC_SELECT (HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))),
	gen_rtx_VEC_SELECT (HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx)))),
	gen_rtx_PLUS (HImode,
	gen_rtx_VEC_SELECT (HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)]))),
	gen_rtx_VEC_SELECT (HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (3)]))))),
	gen_rtx_VEC_CONCAT (V2HImode,
	gen_rtx_PLUS (HImode,
	gen_rtx_VEC_SELECT (HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (4)]))),
	gen_rtx_VEC_SELECT (HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (5)])))),
	gen_rtx_PLUS (HImode,
	gen_rtx_VEC_SELECT (HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (6)]))),
	gen_rtx_VEC_SELECT (HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (7)])))))),
	gen_rtx_VEC_CONCAT (V4HImode,
	gen_rtx_VEC_CONCAT (V2HImode,
	gen_rtx_PLUS (HImode,
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))),
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx)))),
	gen_rtx_PLUS (HImode,
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)]))),
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (3)]))))),
	gen_rtx_VEC_CONCAT (V2HImode,
	gen_rtx_PLUS (HImode,
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (4)]))),
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (5)])))),
	gen_rtx_PLUS (HImode,
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (6)]))),
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (7)]))))))));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:4755 */
rtx
gen_ssse3_phaddwv4hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_CONCAT (V4HImode,
	gen_rtx_VEC_CONCAT (V2HImode,
	gen_rtx_PLUS (HImode,
	gen_rtx_VEC_SELECT (HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))),
	gen_rtx_VEC_SELECT (HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx)))),
	gen_rtx_PLUS (HImode,
	gen_rtx_VEC_SELECT (HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)]))),
	gen_rtx_VEC_SELECT (HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (3)]))))),
	gen_rtx_VEC_CONCAT (V2HImode,
	gen_rtx_PLUS (HImode,
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))),
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx)))),
	gen_rtx_PLUS (HImode,
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)]))),
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (3)])))))));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:4781 */
rtx
gen_ssse3_phadddv4si3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_CONCAT (V4SImode,
	gen_rtx_VEC_CONCAT (V2SImode,
	gen_rtx_PLUS (SImode,
	gen_rtx_VEC_SELECT (SImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))),
	gen_rtx_VEC_SELECT (SImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx)))),
	gen_rtx_PLUS (SImode,
	gen_rtx_VEC_SELECT (SImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)]))),
	gen_rtx_VEC_SELECT (SImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (3)]))))),
	gen_rtx_VEC_CONCAT (V2SImode,
	gen_rtx_PLUS (SImode,
	gen_rtx_VEC_SELECT (SImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))),
	gen_rtx_VEC_SELECT (SImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx)))),
	gen_rtx_PLUS (SImode,
	gen_rtx_VEC_SELECT (SImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)]))),
	gen_rtx_VEC_SELECT (SImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (3)])))))));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:4807 */
rtx
gen_ssse3_phadddv2si3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_CONCAT (V2SImode,
	gen_rtx_PLUS (SImode,
	gen_rtx_VEC_SELECT (SImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))),
	gen_rtx_VEC_SELECT (SImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx)))),
	gen_rtx_PLUS (SImode,
	gen_rtx_VEC_SELECT (SImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))),
	gen_rtx_VEC_SELECT (SImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx))))));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:4825 */
rtx
gen_ssse3_phaddswv8hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_CONCAT (V8HImode,
	gen_rtx_VEC_CONCAT (V4HImode,
	gen_rtx_VEC_CONCAT (V2HImode,
	gen_rtx_SS_PLUS (HImode,
	gen_rtx_VEC_SELECT (HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))),
	gen_rtx_VEC_SELECT (HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx)))),
	gen_rtx_SS_PLUS (HImode,
	gen_rtx_VEC_SELECT (HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)]))),
	gen_rtx_VEC_SELECT (HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (3)]))))),
	gen_rtx_VEC_CONCAT (V2HImode,
	gen_rtx_SS_PLUS (HImode,
	gen_rtx_VEC_SELECT (HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (4)]))),
	gen_rtx_VEC_SELECT (HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (5)])))),
	gen_rtx_SS_PLUS (HImode,
	gen_rtx_VEC_SELECT (HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (6)]))),
	gen_rtx_VEC_SELECT (HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (7)])))))),
	gen_rtx_VEC_CONCAT (V4HImode,
	gen_rtx_VEC_CONCAT (V2HImode,
	gen_rtx_SS_PLUS (HImode,
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))),
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx)))),
	gen_rtx_SS_PLUS (HImode,
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)]))),
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (3)]))))),
	gen_rtx_VEC_CONCAT (V2HImode,
	gen_rtx_SS_PLUS (HImode,
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (4)]))),
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (5)])))),
	gen_rtx_SS_PLUS (HImode,
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (6)]))),
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (7)]))))))));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:4867 */
rtx
gen_ssse3_phaddswv4hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_CONCAT (V4HImode,
	gen_rtx_VEC_CONCAT (V2HImode,
	gen_rtx_SS_PLUS (HImode,
	gen_rtx_VEC_SELECT (HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))),
	gen_rtx_VEC_SELECT (HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx)))),
	gen_rtx_SS_PLUS (HImode,
	gen_rtx_VEC_SELECT (HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)]))),
	gen_rtx_VEC_SELECT (HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (3)]))))),
	gen_rtx_VEC_CONCAT (V2HImode,
	gen_rtx_SS_PLUS (HImode,
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))),
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx)))),
	gen_rtx_SS_PLUS (HImode,
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)]))),
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (3)])))))));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:4893 */
rtx
gen_ssse3_phsubwv8hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_CONCAT (V8HImode,
	gen_rtx_VEC_CONCAT (V4HImode,
	gen_rtx_VEC_CONCAT (V2HImode,
	gen_rtx_MINUS (HImode,
	gen_rtx_VEC_SELECT (HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))),
	gen_rtx_VEC_SELECT (HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx)))),
	gen_rtx_MINUS (HImode,
	gen_rtx_VEC_SELECT (HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)]))),
	gen_rtx_VEC_SELECT (HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (3)]))))),
	gen_rtx_VEC_CONCAT (V2HImode,
	gen_rtx_MINUS (HImode,
	gen_rtx_VEC_SELECT (HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (4)]))),
	gen_rtx_VEC_SELECT (HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (5)])))),
	gen_rtx_MINUS (HImode,
	gen_rtx_VEC_SELECT (HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (6)]))),
	gen_rtx_VEC_SELECT (HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (7)])))))),
	gen_rtx_VEC_CONCAT (V4HImode,
	gen_rtx_VEC_CONCAT (V2HImode,
	gen_rtx_MINUS (HImode,
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))),
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx)))),
	gen_rtx_MINUS (HImode,
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)]))),
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (3)]))))),
	gen_rtx_VEC_CONCAT (V2HImode,
	gen_rtx_MINUS (HImode,
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (4)]))),
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (5)])))),
	gen_rtx_MINUS (HImode,
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (6)]))),
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (7)]))))))));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:4935 */
rtx
gen_ssse3_phsubwv4hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_CONCAT (V4HImode,
	gen_rtx_VEC_CONCAT (V2HImode,
	gen_rtx_MINUS (HImode,
	gen_rtx_VEC_SELECT (HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))),
	gen_rtx_VEC_SELECT (HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx)))),
	gen_rtx_MINUS (HImode,
	gen_rtx_VEC_SELECT (HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)]))),
	gen_rtx_VEC_SELECT (HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (3)]))))),
	gen_rtx_VEC_CONCAT (V2HImode,
	gen_rtx_MINUS (HImode,
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))),
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx)))),
	gen_rtx_MINUS (HImode,
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)]))),
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (3)])))))));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:4961 */
rtx
gen_ssse3_phsubdv4si3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_CONCAT (V4SImode,
	gen_rtx_VEC_CONCAT (V2SImode,
	gen_rtx_MINUS (SImode,
	gen_rtx_VEC_SELECT (SImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))),
	gen_rtx_VEC_SELECT (SImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx)))),
	gen_rtx_MINUS (SImode,
	gen_rtx_VEC_SELECT (SImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)]))),
	gen_rtx_VEC_SELECT (SImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (3)]))))),
	gen_rtx_VEC_CONCAT (V2SImode,
	gen_rtx_MINUS (SImode,
	gen_rtx_VEC_SELECT (SImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))),
	gen_rtx_VEC_SELECT (SImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx)))),
	gen_rtx_MINUS (SImode,
	gen_rtx_VEC_SELECT (SImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)]))),
	gen_rtx_VEC_SELECT (SImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (3)])))))));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:4987 */
rtx
gen_ssse3_phsubdv2si3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_CONCAT (V2SImode,
	gen_rtx_MINUS (SImode,
	gen_rtx_VEC_SELECT (SImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))),
	gen_rtx_VEC_SELECT (SImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx)))),
	gen_rtx_MINUS (SImode,
	gen_rtx_VEC_SELECT (SImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))),
	gen_rtx_VEC_SELECT (SImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx))))));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:5005 */
rtx
gen_ssse3_phsubswv8hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_CONCAT (V8HImode,
	gen_rtx_VEC_CONCAT (V4HImode,
	gen_rtx_VEC_CONCAT (V2HImode,
	gen_rtx_SS_MINUS (HImode,
	gen_rtx_VEC_SELECT (HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))),
	gen_rtx_VEC_SELECT (HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx)))),
	gen_rtx_SS_MINUS (HImode,
	gen_rtx_VEC_SELECT (HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)]))),
	gen_rtx_VEC_SELECT (HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (3)]))))),
	gen_rtx_VEC_CONCAT (V2HImode,
	gen_rtx_SS_MINUS (HImode,
	gen_rtx_VEC_SELECT (HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (4)]))),
	gen_rtx_VEC_SELECT (HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (5)])))),
	gen_rtx_SS_MINUS (HImode,
	gen_rtx_VEC_SELECT (HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (6)]))),
	gen_rtx_VEC_SELECT (HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (7)])))))),
	gen_rtx_VEC_CONCAT (V4HImode,
	gen_rtx_VEC_CONCAT (V2HImode,
	gen_rtx_SS_MINUS (HImode,
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))),
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx)))),
	gen_rtx_SS_MINUS (HImode,
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)]))),
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (3)]))))),
	gen_rtx_VEC_CONCAT (V2HImode,
	gen_rtx_SS_MINUS (HImode,
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (4)]))),
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (5)])))),
	gen_rtx_SS_MINUS (HImode,
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (6)]))),
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (7)]))))))));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:5047 */
rtx
gen_ssse3_phsubswv4hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_CONCAT (V4HImode,
	gen_rtx_VEC_CONCAT (V2HImode,
	gen_rtx_SS_MINUS (HImode,
	gen_rtx_VEC_SELECT (HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))),
	gen_rtx_VEC_SELECT (HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx)))),
	gen_rtx_SS_MINUS (HImode,
	gen_rtx_VEC_SELECT (HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)]))),
	gen_rtx_VEC_SELECT (HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (3)]))))),
	gen_rtx_VEC_CONCAT (V2HImode,
	gen_rtx_SS_MINUS (HImode,
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))),
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx)))),
	gen_rtx_SS_MINUS (HImode,
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)]))),
	gen_rtx_VEC_SELECT (HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (3)])))))));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:5073 */
rtx
gen_ssse3_pmaddubswv8hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SS_PLUS (V8HImode,
	gen_rtx_MULT (V8HImode,
	gen_rtx_ZERO_EXTEND (V8HImode,
	gen_rtx_VEC_SELECT (V4QImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (8,
		const0_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)],
		const_int_rtx[MAX_SAVED_CONST_INT + (4)],
		const_int_rtx[MAX_SAVED_CONST_INT + (6)],
		const_int_rtx[MAX_SAVED_CONST_INT + (8)],
		const_int_rtx[MAX_SAVED_CONST_INT + (10)],
		const_int_rtx[MAX_SAVED_CONST_INT + (12)],
		const_int_rtx[MAX_SAVED_CONST_INT + (14)])))),
	gen_rtx_SIGN_EXTEND (V8HImode,
	gen_rtx_VEC_SELECT (V8QImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (8,
		const0_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)],
		const_int_rtx[MAX_SAVED_CONST_INT + (4)],
		const_int_rtx[MAX_SAVED_CONST_INT + (6)],
		const_int_rtx[MAX_SAVED_CONST_INT + (8)],
		const_int_rtx[MAX_SAVED_CONST_INT + (10)],
		const_int_rtx[MAX_SAVED_CONST_INT + (12)],
		const_int_rtx[MAX_SAVED_CONST_INT + (14)]))))),
	gen_rtx_MULT (V8HImode,
	gen_rtx_ZERO_EXTEND (V8HImode,
	gen_rtx_VEC_SELECT (V16QImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (8,
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (3)],
		const_int_rtx[MAX_SAVED_CONST_INT + (5)],
		const_int_rtx[MAX_SAVED_CONST_INT + (7)],
		const_int_rtx[MAX_SAVED_CONST_INT + (9)],
		const_int_rtx[MAX_SAVED_CONST_INT + (11)],
		const_int_rtx[MAX_SAVED_CONST_INT + (13)],
		const_int_rtx[MAX_SAVED_CONST_INT + (15)])))),
	gen_rtx_SIGN_EXTEND (V8HImode,
	gen_rtx_VEC_SELECT (V16QImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (8,
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (3)],
		const_int_rtx[MAX_SAVED_CONST_INT + (5)],
		const_int_rtx[MAX_SAVED_CONST_INT + (7)],
		const_int_rtx[MAX_SAVED_CONST_INT + (9)],
		const_int_rtx[MAX_SAVED_CONST_INT + (11)],
		const_int_rtx[MAX_SAVED_CONST_INT + (13)],
		const_int_rtx[MAX_SAVED_CONST_INT + (15)])))))));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:5126 */
rtx
gen_ssse3_pmaddubswv4hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SS_PLUS (V4HImode,
	gen_rtx_MULT (V4HImode,
	gen_rtx_ZERO_EXTEND (V4HImode,
	gen_rtx_VEC_SELECT (V4QImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		const0_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)],
		const_int_rtx[MAX_SAVED_CONST_INT + (4)],
		const_int_rtx[MAX_SAVED_CONST_INT + (6)])))),
	gen_rtx_SIGN_EXTEND (V4HImode,
	gen_rtx_VEC_SELECT (V4QImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		const0_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)],
		const_int_rtx[MAX_SAVED_CONST_INT + (4)],
		const_int_rtx[MAX_SAVED_CONST_INT + (6)]))))),
	gen_rtx_MULT (V4HImode,
	gen_rtx_ZERO_EXTEND (V4HImode,
	gen_rtx_VEC_SELECT (V8QImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (3)],
		const_int_rtx[MAX_SAVED_CONST_INT + (5)],
		const_int_rtx[MAX_SAVED_CONST_INT + (7)])))),
	gen_rtx_SIGN_EXTEND (V4HImode,
	gen_rtx_VEC_SELECT (V8QImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (3)],
		const_int_rtx[MAX_SAVED_CONST_INT + (5)],
		const_int_rtx[MAX_SAVED_CONST_INT + (7)])))))));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:5163 */
rtx
gen_ssse3_pmulhrswv8hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_TRUNCATE (V8HImode,
	gen_rtx_LSHIFTRT (V8SImode,
	gen_rtx_PLUS (V8SImode,
	gen_rtx_LSHIFTRT (V8SImode,
	gen_rtx_MULT (V8SImode,
	gen_rtx_SIGN_EXTEND (V8SImode,
	operand1),
	gen_rtx_SIGN_EXTEND (V8SImode,
	operand2)),
	const_int_rtx[MAX_SAVED_CONST_INT + (14)]),
	gen_rtx_CONST_VECTOR (V8HImode,
	gen_rtvec (8,
		const1_rtx,
		const1_rtx,
		const1_rtx,
		const1_rtx,
		const1_rtx,
		const1_rtx,
		const1_rtx,
		const1_rtx))),
	const1_rtx)));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:5185 */
rtx
gen_ssse3_pmulhrswv4hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_TRUNCATE (V4HImode,
	gen_rtx_LSHIFTRT (V4SImode,
	gen_rtx_PLUS (V4SImode,
	gen_rtx_LSHIFTRT (V4SImode,
	gen_rtx_MULT (V4SImode,
	gen_rtx_SIGN_EXTEND (V4SImode,
	operand1),
	gen_rtx_SIGN_EXTEND (V4SImode,
	operand2)),
	const_int_rtx[MAX_SAVED_CONST_INT + (14)]),
	gen_rtx_CONST_VECTOR (V4HImode,
	gen_rtvec (4,
		const1_rtx,
		const1_rtx,
		const1_rtx,
		const1_rtx))),
	const1_rtx)));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:5205 */
rtx
gen_ssse3_pshufbv16qi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V16QImode,
	gen_rtvec (2,
		operand1,
		operand2),
	220));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:5215 */
rtx
gen_ssse3_pshufbv8qi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V8QImode,
	gen_rtvec (2,
		operand1,
		operand2),
	220));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:5225 */
rtx
gen_ssse3_psignv16qi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V16QImode,
	gen_rtvec (2,
		operand1,
		operand2),
	221));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:5225 */
rtx
gen_ssse3_psignv8hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V8HImode,
	gen_rtvec (2,
		operand1,
		operand2),
	221));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:5225 */
rtx
gen_ssse3_psignv4si3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V4SImode,
	gen_rtvec (2,
		operand1,
		operand2),
	221));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:5236 */
rtx
gen_ssse3_psignv8qi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V8QImode,
	gen_rtvec (2,
		operand1,
		operand2),
	221));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:5236 */
rtx
gen_ssse3_psignv4hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V4HImode,
	gen_rtvec (2,
		operand1,
		operand2),
	221));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:5236 */
rtx
gen_ssse3_psignv2si3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V2SImode,
	gen_rtvec (2,
		operand1,
		operand2),
	221));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:5247 */
rtx
gen_ssse3_palignrti (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (TImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	222));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:5262 */
rtx
gen_ssse3_palignrv1di (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V1DImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	222));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:5277 */
rtx
gen_ssse3_pabsv16qi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ABS (V16QImode,
	operand1));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:5277 */
rtx
gen_ssse3_pabsv8hi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ABS (V8HImode,
	operand1));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:5277 */
rtx
gen_ssse3_pabsv4si2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ABS (V4SImode,
	operand1));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:5286 */
rtx
gen_ssse3_pabsv8qi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ABS (V8QImode,
	operand1));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:5286 */
rtx
gen_ssse3_pabsv4hi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ABS (V4HImode,
	operand1));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:5286 */
rtx
gen_ssse3_pabsv2si2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ABS (V2SImode,
	operand1));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:5296 */
rtx
gen_sse3_monitor64 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_UNSPEC_VOLATILE (VOIDmode,
	gen_rtvec (3,
		operand0,
		operand1,
		operand2),
	8);
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:5315 */
rtx
gen_sse4a_vmmovntv2df (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (DFmode,
	gen_rtvec (1,
		gen_rtx_VEC_SELECT (DFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))),
	33));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:5326 */
rtx
gen_sse4a_movntdf (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (DFmode,
	gen_rtvec (1,
		operand1),
	33));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:5335 */
rtx
gen_sse4a_vmmovntv4sf (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SFmode,
	gen_rtvec (1,
		gen_rtx_VEC_SELECT (SFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))),
	33));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:5346 */
rtx
gen_sse4a_movntsf (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SFmode,
	gen_rtvec (1,
		operand1),
	33));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:5355 */
rtx
gen_sse4a_extrqi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V2DImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	130));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:5367 */
rtx
gen_sse4a_extrq (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V2DImode,
	gen_rtvec (2,
		operand1,
		operand2),
	131));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:5378 */
rtx
gen_sse4a_insertqi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V2DImode,
	gen_rtvec (4,
		operand1,
		operand2,
		operand3,
		operand4),
	132));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:5391 */
rtx
gen_sse4a_insertq (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V2DImode,
	gen_rtvec (2,
		operand1,
		operand2),
	133));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:5408 */
rtx
gen_sse4_1_blendpd (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_MERGE (V2DFmode,
	operand2,
	operand1,
	operand3));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:5420 */
rtx
gen_sse4_1_blendps (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_MERGE (V4SFmode,
	operand2,
	operand1,
	operand3));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:5432 */
rtx
gen_sse4_1_blendvpd (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V2DFmode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	134));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:5444 */
rtx
gen_sse4_1_blendvps (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V4SFmode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	134));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:5456 */
rtx
gen_sse4_1_dppd (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V2DFmode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	136));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:5468 */
rtx
gen_sse4_1_dpps (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V4SFmode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	136));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:5480 */
rtx
gen_sse4_1_movntdqa (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V2DImode,
	gen_rtvec (1,
		operand1),
	137));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:5490 */
rtx
gen_sse4_1_mpsadbw (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V16QImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	138));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:5502 */
rtx
gen_sse4_1_packusdw (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_CONCAT (V8HImode,
	gen_rtx_US_TRUNCATE (V4HImode,
	operand1),
	gen_rtx_US_TRUNCATE (V4HImode,
	operand2)));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:5515 */
rtx
gen_sse4_1_pblendvb (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V16QImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	134));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:5527 */
rtx
gen_sse4_1_pblendw (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_MERGE (V8HImode,
	operand2,
	operand1,
	operand3));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:5539 */
rtx
gen_sse4_1_phminposuw (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V8HImode,
	gen_rtvec (1,
		operand1),
	139));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:5549 */
rtx
gen_sse4_1_extendv8qiv8hi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SIGN_EXTEND (V8HImode,
	gen_rtx_VEC_SELECT (V8QImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (8,
		const0_rtx,
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)],
		const_int_rtx[MAX_SAVED_CONST_INT + (3)],
		const_int_rtx[MAX_SAVED_CONST_INT + (4)],
		const_int_rtx[MAX_SAVED_CONST_INT + (5)],
		const_int_rtx[MAX_SAVED_CONST_INT + (6)],
		const_int_rtx[MAX_SAVED_CONST_INT + (7)])))));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:5588 */
rtx
gen_sse4_1_extendv4qiv4si2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SIGN_EXTEND (V4SImode,
	gen_rtx_VEC_SELECT (V4QImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		const0_rtx,
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)],
		const_int_rtx[MAX_SAVED_CONST_INT + (3)])))));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:5619 */
rtx
gen_sse4_1_extendv2qiv2di2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SIGN_EXTEND (V2DImode,
	gen_rtx_VEC_SELECT (V2QImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const0_rtx,
		const1_rtx)))));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:5646 */
rtx
gen_sse4_1_extendv4hiv4si2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SIGN_EXTEND (V4SImode,
	gen_rtx_VEC_SELECT (V4HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		const0_rtx,
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)],
		const_int_rtx[MAX_SAVED_CONST_INT + (3)])))));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:5677 */
rtx
gen_sse4_1_extendv2hiv2di2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SIGN_EXTEND (V2DImode,
	gen_rtx_VEC_SELECT (V2HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const0_rtx,
		const1_rtx)))));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:5704 */
rtx
gen_sse4_1_extendv2siv2di2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SIGN_EXTEND (V2DImode,
	gen_rtx_VEC_SELECT (V2SImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const0_rtx,
		const1_rtx)))));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:5731 */
rtx
gen_sse4_1_zero_extendv8qiv8hi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ZERO_EXTEND (V8HImode,
	gen_rtx_VEC_SELECT (V8QImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (8,
		const0_rtx,
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)],
		const_int_rtx[MAX_SAVED_CONST_INT + (3)],
		const_int_rtx[MAX_SAVED_CONST_INT + (4)],
		const_int_rtx[MAX_SAVED_CONST_INT + (5)],
		const_int_rtx[MAX_SAVED_CONST_INT + (6)],
		const_int_rtx[MAX_SAVED_CONST_INT + (7)])))));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:5770 */
rtx
gen_sse4_1_zero_extendv4qiv4si2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ZERO_EXTEND (V4SImode,
	gen_rtx_VEC_SELECT (V4QImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		const0_rtx,
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)],
		const_int_rtx[MAX_SAVED_CONST_INT + (3)])))));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:5801 */
rtx
gen_sse4_1_zero_extendv2qiv2di2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ZERO_EXTEND (V2DImode,
	gen_rtx_VEC_SELECT (V2QImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const0_rtx,
		const1_rtx)))));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:5828 */
rtx
gen_sse4_1_zero_extendv4hiv4si2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ZERO_EXTEND (V4SImode,
	gen_rtx_VEC_SELECT (V4HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		const0_rtx,
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)],
		const_int_rtx[MAX_SAVED_CONST_INT + (3)])))));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:5859 */
rtx
gen_sse4_1_zero_extendv2hiv2di2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ZERO_EXTEND (V2DImode,
	gen_rtx_VEC_SELECT (V2HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const0_rtx,
		const1_rtx)))));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:5886 */
rtx
gen_sse4_1_zero_extendv2siv2di2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ZERO_EXTEND (V2DImode,
	gen_rtx_VEC_SELECT (V2SImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const0_rtx,
		const1_rtx)))));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:5915 */
rtx
gen_sse4_1_ptest (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCmode,
	17),
	gen_rtx_UNSPEC (CCmode,
	gen_rtvec (2,
		operand0,
		operand1),
	140));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:5926 */
rtx
gen_sse4_1_roundpd (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V2DFmode,
	gen_rtvec (2,
		operand1,
		operand2),
	141));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:5937 */
rtx
gen_sse4_1_roundps (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V4SFmode,
	gen_rtvec (2,
		operand1,
		operand2),
	141));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:5948 */
rtx
gen_sse4_1_roundsd (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_MERGE (V2DFmode,
	gen_rtx_UNSPEC (V2DFmode,
	gen_rtvec (2,
		operand2,
		operand3),
	141),
	operand1,
	const1_rtx));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:5962 */
rtx
gen_sse4_1_roundss (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_MERGE (V4SFmode,
	gen_rtx_UNSPEC (V4SFmode,
	gen_rtvec (2,
		operand2,
		operand3),
	141),
	operand1,
	const1_rtx));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:5982 */
rtx
gen_sse4_2_pcmpestr (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED,
	rtx operand6 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (5,
		operand2,
		operand3,
		operand4,
		operand5,
		operand6),
	144)),
		gen_rtx_SET (VOIDmode,
	operand1,
	gen_rtx_UNSPEC (V16QImode,
	gen_rtvec (5,
		operand2,
		operand3,
		operand4,
		operand5,
		operand6),
	144)),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCmode,
	17),
	gen_rtx_UNSPEC (CCmode,
	gen_rtvec (5,
		operand2,
		operand3,
		operand4,
		operand5,
		operand6),
	144))));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:6037 */
rtx
gen_sse4_2_pcmpestri (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (5,
		operand1,
		operand2,
		operand3,
		operand4,
		operand5),
	144)),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCmode,
	17),
	gen_rtx_UNSPEC (CCmode,
	gen_rtvec (5,
		operand1,
		operand2,
		operand3,
		operand4,
		operand5),
	144))));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:6062 */
rtx
gen_sse4_2_pcmpestrm (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V16QImode,
	gen_rtvec (5,
		operand1,
		operand2,
		operand3,
		operand4,
		operand5),
	144)),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCmode,
	17),
	gen_rtx_UNSPEC (CCmode,
	gen_rtvec (5,
		operand1,
		operand2,
		operand3,
		operand4,
		operand5),
	144))));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:6087 */
rtx
gen_sse4_2_pcmpestr_cconly (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCmode,
	17),
	gen_rtx_UNSPEC (CCmode,
	gen_rtvec (5,
		operand0,
		operand1,
		operand2,
		operand3,
		operand4),
	144)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (V16QImode)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode))));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:6110 */
rtx
gen_sse4_2_pcmpistr (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (3,
		operand2,
		operand3,
		operand4),
	145)),
		gen_rtx_SET (VOIDmode,
	operand1,
	gen_rtx_UNSPEC (V16QImode,
	gen_rtvec (3,
		operand2,
		operand3,
		operand4),
	145)),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCmode,
	17),
	gen_rtx_UNSPEC (CCmode,
	gen_rtvec (3,
		operand2,
		operand3,
		operand4),
	145))));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:6156 */
rtx
gen_sse4_2_pcmpistri (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	145)),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCmode,
	17),
	gen_rtx_UNSPEC (CCmode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	145))));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:6177 */
rtx
gen_sse4_2_pcmpistrm (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V16QImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	145)),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCmode,
	17),
	gen_rtx_UNSPEC (CCmode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	145))));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:6198 */
rtx
gen_sse4_2_pcmpistr_cconly (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCmode,
	17),
	gen_rtx_UNSPEC (CCmode,
	gen_rtvec (3,
		operand0,
		operand1,
		operand2),
	145)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (V16QImode)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode))));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sync.md:87 */
rtx
gen_sync_double_compare_and_swapdi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	operand1),
		gen_rtx_SET (VOIDmode,
	operand1,
	gen_rtx_UNSPEC_VOLATILE (DImode,
	gen_rtvec (4,
		operand1,
		operand2,
		operand3,
		operand4),
	10)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sync.md:87 */
rtx
gen_sync_double_compare_and_swapti (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	operand1),
		gen_rtx_SET (VOIDmode,
	operand1,
	gen_rtx_UNSPEC_VOLATILE (TImode,
	gen_rtvec (4,
		operand1,
		operand2,
		operand3,
		operand4),
	10)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sync.md:182 */
rtx
gen_sync_double_compare_and_swap_ccdi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	operand1),
		gen_rtx_SET (VOIDmode,
	operand1,
	gen_rtx_UNSPEC_VOLATILE (DImode,
	gen_rtvec (4,
		operand1,
		operand2,
		operand3,
		operand4),
	10)),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCZmode,
	17),
	gen_rtx_COMPARE (CCZmode,
	gen_rtx_UNSPEC_VOLATILE (DImode,
	gen_rtvec (4,
		operand1,
		operand2,
		operand3,
		operand4),
	11),
	operand2))));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sync.md:182 */
rtx
gen_sync_double_compare_and_swap_ccti (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	operand1),
		gen_rtx_SET (VOIDmode,
	operand1,
	gen_rtx_UNSPEC_VOLATILE (TImode,
	gen_rtvec (4,
		operand1,
		operand2,
		operand3,
		operand4),
	10)),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCZmode,
	17),
	gen_rtx_COMPARE (CCZmode,
	gen_rtx_UNSPEC_VOLATILE (TImode,
	gen_rtvec (4,
		operand1,
		operand2,
		operand3,
		operand4),
	11),
	operand2))));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sync.md:222 */
rtx
gen_sync_old_addqi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC_VOLATILE (QImode,
	gen_rtvec (1,
		operand1),
	12)),
		gen_rtx_SET (VOIDmode,
	operand1,
	gen_rtx_PLUS (QImode,
	operand1,
	operand2)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sync.md:222 */
rtx
gen_sync_old_addhi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC_VOLATILE (HImode,
	gen_rtvec (1,
		operand1),
	12)),
		gen_rtx_SET (VOIDmode,
	operand1,
	gen_rtx_PLUS (HImode,
	operand1,
	operand2)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sync.md:222 */
rtx
gen_sync_old_addsi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (1,
		operand1),
	12)),
		gen_rtx_SET (VOIDmode,
	operand1,
	gen_rtx_PLUS (SImode,
	operand1,
	operand2)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sync.md:222 */
rtx
gen_sync_old_adddi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC_VOLATILE (DImode,
	gen_rtvec (1,
		operand1),
	12)),
		gen_rtx_SET (VOIDmode,
	operand1,
	gen_rtx_PLUS (DImode,
	operand1,
	operand2)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sync.md:234 */
rtx
gen_sync_lock_test_and_setqi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC_VOLATILE (QImode,
	gen_rtvec (1,
		operand1),
	12)),
		gen_rtx_SET (VOIDmode,
	operand1,
	operand2)));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sync.md:234 */
rtx
gen_sync_lock_test_and_sethi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC_VOLATILE (HImode,
	gen_rtvec (1,
		operand1),
	12)),
		gen_rtx_SET (VOIDmode,
	operand1,
	operand2)));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sync.md:234 */
rtx
gen_sync_lock_test_and_setsi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (1,
		operand1),
	12)),
		gen_rtx_SET (VOIDmode,
	operand1,
	operand2)));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sync.md:234 */
rtx
gen_sync_lock_test_and_setdi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC_VOLATILE (DImode,
	gen_rtvec (1,
		operand1),
	12)),
		gen_rtx_SET (VOIDmode,
	operand1,
	operand2)));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sync.md:243 */
rtx
gen_sync_addqi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC_VOLATILE (QImode,
	gen_rtvec (1,
		gen_rtx_PLUS (QImode,
	operand0,
	operand1)),
	13)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sync.md:243 */
rtx
gen_sync_addhi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC_VOLATILE (HImode,
	gen_rtvec (1,
		gen_rtx_PLUS (HImode,
	operand0,
	operand1)),
	13)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sync.md:243 */
rtx
gen_sync_addsi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (1,
		gen_rtx_PLUS (SImode,
	operand0,
	operand1)),
	13)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sync.md:243 */
rtx
gen_sync_adddi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC_VOLATILE (DImode,
	gen_rtvec (1,
		gen_rtx_PLUS (DImode,
	operand0,
	operand1)),
	13)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sync.md:253 */
rtx
gen_sync_subqi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC_VOLATILE (QImode,
	gen_rtvec (1,
		gen_rtx_MINUS (QImode,
	operand0,
	operand1)),
	13)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sync.md:253 */
rtx
gen_sync_subhi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC_VOLATILE (HImode,
	gen_rtvec (1,
		gen_rtx_MINUS (HImode,
	operand0,
	operand1)),
	13)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sync.md:253 */
rtx
gen_sync_subsi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (1,
		gen_rtx_MINUS (SImode,
	operand0,
	operand1)),
	13)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sync.md:253 */
rtx
gen_sync_subdi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC_VOLATILE (DImode,
	gen_rtvec (1,
		gen_rtx_MINUS (DImode,
	operand0,
	operand1)),
	13)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sync.md:263 */
rtx
gen_sync_iorqi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC_VOLATILE (QImode,
	gen_rtvec (1,
		gen_rtx_IOR (QImode,
	operand0,
	operand1)),
	13)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sync.md:263 */
rtx
gen_sync_iorhi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC_VOLATILE (HImode,
	gen_rtvec (1,
		gen_rtx_IOR (HImode,
	operand0,
	operand1)),
	13)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sync.md:263 */
rtx
gen_sync_iorsi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (1,
		gen_rtx_IOR (SImode,
	operand0,
	operand1)),
	13)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sync.md:263 */
rtx
gen_sync_iordi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC_VOLATILE (DImode,
	gen_rtvec (1,
		gen_rtx_IOR (DImode,
	operand0,
	operand1)),
	13)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sync.md:273 */
rtx
gen_sync_andqi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC_VOLATILE (QImode,
	gen_rtvec (1,
		gen_rtx_AND (QImode,
	operand0,
	operand1)),
	13)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sync.md:273 */
rtx
gen_sync_andhi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC_VOLATILE (HImode,
	gen_rtvec (1,
		gen_rtx_AND (HImode,
	operand0,
	operand1)),
	13)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sync.md:273 */
rtx
gen_sync_andsi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (1,
		gen_rtx_AND (SImode,
	operand0,
	operand1)),
	13)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sync.md:273 */
rtx
gen_sync_anddi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC_VOLATILE (DImode,
	gen_rtvec (1,
		gen_rtx_AND (DImode,
	operand0,
	operand1)),
	13)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sync.md:283 */
rtx
gen_sync_xorqi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC_VOLATILE (QImode,
	gen_rtvec (1,
		gen_rtx_XOR (QImode,
	operand0,
	operand1)),
	13)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sync.md:283 */
rtx
gen_sync_xorhi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC_VOLATILE (HImode,
	gen_rtvec (1,
		gen_rtx_XOR (HImode,
	operand0,
	operand1)),
	13)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sync.md:283 */
rtx
gen_sync_xorsi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (1,
		gen_rtx_XOR (SImode,
	operand0,
	operand1)),
	13)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sync.md:283 */
rtx
gen_sync_xordi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC_VOLATILE (DImode,
	gen_rtvec (1,
		gen_rtx_XOR (DImode,
	operand0,
	operand1)),
	13)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:21370 */
rtx
gen_sse4_2_crc32qi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (2,
		operand1,
		operand2),
	143));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:21370 */
rtx
gen_sse4_2_crc32hi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (2,
		operand1,
		operand2),
	143));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:21370 */
rtx
gen_sse4_2_crc32si (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (2,
		operand1,
		operand2),
	143));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:21387 */
rtx
gen_sse4_2_crc32di (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (2,
		operand1,
		operand2),
	143));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:533 */
rtx
gen_cmpti (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 538 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
{
  if (GET_CODE (operands[0]) == MEM && GET_CODE (operands[1]) == MEM)
    operands[0] = force_reg (TImode, operands[0]);
  ix86_compare_op0 = operands[0];
  ix86_compare_op1 = operands[1];
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCmode,
	17),
	gen_rtx_COMPARE (CCmode,
	operand0,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:546 */
rtx
gen_cmpdi (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 551 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
{
  if (GET_CODE (operands[0]) == MEM && GET_CODE (operands[1]) == MEM)
    operands[0] = force_reg (DImode, operands[0]);
  ix86_compare_op0 = operands[0];
  ix86_compare_op1 = operands[1];
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCmode,
	17),
	gen_rtx_COMPARE (CCmode,
	operand0,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:559 */
rtx
gen_cmpsi (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 564 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
{
  if (GET_CODE (operands[0]) == MEM && GET_CODE (operands[1]) == MEM)
    operands[0] = force_reg (SImode, operands[0]);
  ix86_compare_op0 = operands[0];
  ix86_compare_op1 = operands[1];
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCmode,
	17),
	gen_rtx_COMPARE (CCmode,
	operand0,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:572 */
rtx
gen_cmphi (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 577 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
{
  if (GET_CODE (operands[0]) == MEM && GET_CODE (operands[1]) == MEM)
    operands[0] = force_reg (HImode, operands[0]);
  ix86_compare_op0 = operands[0];
  ix86_compare_op1 = operands[1];
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCmode,
	17),
	gen_rtx_COMPARE (CCmode,
	operand0,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:585 */
rtx
gen_cmpqi (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 590 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
{
  if (GET_CODE (operands[0]) == MEM && GET_CODE (operands[1]) == MEM)
    operands[0] = force_reg (QImode, operands[0]);
  ix86_compare_op0 = operands[0];
  ix86_compare_op1 = operands[1];
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCmode,
	17),
	gen_rtx_COMPARE (CCmode,
	operand0,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:620 */
rtx
gen_cmpdi_1_rex64 (rtx operand0,
	rtx operand1)
{
  return gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCmode,
	17),
	gen_rtx_COMPARE (CCmode,
	operand0,
	operand1));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:659 */
rtx
gen_cmpsi_1 (rtx operand0,
	rtx operand1)
{
  return gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCmode,
	17),
	gen_rtx_COMPARE (CCmode,
	operand0,
	operand1));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:783 */
rtx
gen_cmpqi_ext_3 (rtx operand0,
	rtx operand1)
{
  return gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCmode,
	17),
	gen_rtx_COMPARE (CCmode,
	gen_rtx_SUBREG (QImode,
	gen_rtx_ZERO_EXTRACT (SImode,
	operand0,
	const_int_rtx[MAX_SAVED_CONST_INT + (8)],
	const_int_rtx[MAX_SAVED_CONST_INT + (8)]),
	0),
	operand1));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:846 */
rtx
gen_cmpxf (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 851 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
{
  ix86_compare_op0 = operands[0];
  ix86_compare_op1 = operands[1];
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCmode,
	17),
	gen_rtx_COMPARE (CCmode,
	operand0,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:857 */
rtx
gen_cmpdf (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 862 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
{
  ix86_compare_op0 = operands[0];
  ix86_compare_op1 = operands[1];
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCmode,
	17),
	gen_rtx_COMPARE (CCmode,
	operand0,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:868 */
rtx
gen_cmpsf (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 873 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
{
  ix86_compare_op0 = operands[0];
  ix86_compare_op1 = operands[1];
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCmode,
	17),
	gen_rtx_COMPARE (CCmode,
	operand0,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:1114 */
rtx
gen_movsi (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 1118 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
ix86_expand_move (SImode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:1318 */
rtx
gen_movhi (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 1322 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
ix86_expand_move (HImode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:1447 */
rtx
gen_movstricthi (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 1451 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
{
  /* Don't generate memory->memory moves, go through a register */
  if (GET_CODE (operands[0]) == MEM && GET_CODE (operands[1]) == MEM)
    operands[1] = force_reg (HImode, operands[1]);
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_STRICT_LOW_PART (VOIDmode,
	operand0),
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:1477 */
rtx
gen_movqi (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 1481 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
ix86_expand_move (QImode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:1578 */
rtx
gen_reload_outqi (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 1583 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
{
  rtx op0, op1, op2;
  op0 = operands[0]; op1 = operands[1]; op2 = operands[2];

  gcc_assert (!reg_overlap_mentioned_p (op2, op0));
  if (! q_regs_operand (op1, QImode))
    {
      emit_insn (gen_movqi (op2, op1));
      op1 = op2;
    }
  emit_insn (gen_movqi (op0, op1));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		operand0,
		operand1,
		operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:1621 */
rtx
gen_movstrictqi (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 1625 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
{
  /* Don't generate memory->memory moves, go through a register.  */
  if (GET_CODE (operands[0]) == MEM && GET_CODE (operands[1]) == MEM)
    operands[1] = force_reg (QImode, operands[1]);
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_STRICT_LOW_PART (VOIDmode,
	operand0),
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:1878 */
rtx
gen_movdi (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 1882 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
ix86_expand_move (DImode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:1904 */
extern rtx gen_peephole2_1337 (rtx, rtx *);
rtx
gen_peephole2_1337 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  if ((operands[2] = peep2_find_free_register (0, 0, "r", DImode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  start_sequence ();
#line 1912 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	operand1));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	copy_rtx (operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:1917 */
extern rtx gen_peephole2_1338 (rtx, rtx *);
rtx
gen_peephole2_1338 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  start_sequence ();
#line 1924 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
split_di (operands + 1, 1, operands + 2, operands + 3);
   operands[1] = gen_lowpart (DImode, operands[2]);
   operands[2] = gen_rtx_MEM (SImode, gen_rtx_PLUS (DImode, stack_pointer_rtx,
						    GEN_INT (4)));
  
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	operand3));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:1930 */
extern rtx gen_split_1339 (rtx, rtx *);
rtx
gen_split_1339 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
#line 1939 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
split_di (operands + 1, 1, operands + 2, operands + 3);
   operands[1] = gen_lowpart (DImode, operands[2]);
   operands[2] = gen_rtx_MEM (SImode, gen_rtx_PLUS (DImode, stack_pointer_rtx,
						    GEN_INT (4)));
  
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	operand3));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:2026 */
extern rtx gen_split_1340 (rtx, rtx *);
rtx
gen_split_1340 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 2032 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
ix86_split_long_move (operands); DONE;
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:2035 */
extern rtx gen_split_1341 (rtx, rtx *);
rtx
gen_split_1341 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 2042 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
ix86_split_long_move (operands); DONE;
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:2140 */
extern rtx gen_peephole2_1342 (rtx, rtx *);
rtx
gen_peephole2_1342 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  if ((operands[2] = peep2_find_free_register (0, 0, "r", DImode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  start_sequence ();
#line 2148 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	operand1));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	copy_rtx (operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:2153 */
extern rtx gen_peephole2_1343 (rtx, rtx *);
rtx
gen_peephole2_1343 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  start_sequence ();
#line 2160 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
split_di (operands, 2, operands + 2, operands + 4);
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	operand3));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand4,
	operand5));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:2162 */
extern rtx gen_split_1344 (rtx, rtx *);
rtx
gen_split_1344 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx _val = 0;
  start_sequence ();
#line 2171 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
split_di (operands, 2, operands + 2, operands + 4);
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	operand3));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand4,
	operand5));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:2185 */
rtx
gen_movti (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 2189 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
{
  if (TARGET_64BIT)
    ix86_expand_move (TImode, operands);
  else
    ix86_expand_vector_move (TImode, operands);
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:2275 */
extern rtx gen_split_1346 (rtx, rtx *);
rtx
gen_split_1346 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 2281 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
ix86_split_long_move (operands); DONE;
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:2283 */
rtx
gen_movsf (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 2287 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
ix86_expand_move (SFmode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:2315 */
extern rtx gen_split_1348 (rtx, rtx *);
rtx
gen_split_1348 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
#line 2323 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
operands[1] = avoid_constant_pool_reference (operands[1]);
  operand0 = operands[0];
  operand1 = operands[1];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:2327 */
extern rtx gen_split_1349 (rtx, rtx *);
rtx
gen_split_1349 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
  operand0 = operands[0];
  operand1 = operands[1];
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_REG (SImode,
	7),
	gen_rtx_PLUS (SImode,
	gen_rtx_REG (SImode,
	7),
	const_int_rtx[MAX_SAVED_CONST_INT + (-4)])));
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (SFmode,
	gen_rtx_REG (SImode,
	7)),
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:2334 */
extern rtx gen_split_1350 (rtx, rtx *);
rtx
gen_split_1350 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
  operand0 = operands[0];
  operand1 = operands[1];
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_REG (DImode,
	7),
	gen_rtx_PLUS (DImode,
	gen_rtx_REG (DImode,
	7),
	const_int_rtx[MAX_SAVED_CONST_INT + (-8)])));
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (SFmode,
	gen_rtx_REG (DImode,
	7)),
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:2445 */
rtx
gen_movdf (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 2449 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
ix86_expand_move (DFmode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:2485 */
extern rtx gen_split_1352 (rtx, rtx *);
rtx
gen_split_1352 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
#line 2491 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_REG (SImode,
	7),
	gen_rtx_PLUS (SImode,
	gen_rtx_REG (SImode,
	7),
	const_int_rtx[MAX_SAVED_CONST_INT + (-8)])));
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (DFmode,
	gen_rtx_REG (SImode,
	7)),
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:2493 */
extern rtx gen_split_1353 (rtx, rtx *);
rtx
gen_split_1353 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
#line 2499 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_REG (DImode,
	7),
	gen_rtx_PLUS (DImode,
	gen_rtx_REG (DImode,
	7),
	const_int_rtx[MAX_SAVED_CONST_INT + (-8)])));
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (DFmode,
	gen_rtx_REG (DImode,
	7)),
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:2501 */
extern rtx gen_split_1354 (rtx, rtx *);
rtx
gen_split_1354 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 2506 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
ix86_split_long_move (operands); DONE;
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:2757 */
extern rtx gen_split_1355 (rtx, rtx *);
rtx
gen_split_1355 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 2769 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
ix86_split_long_move (operands); DONE;
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:2786 */
rtx
gen_movxf (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 2790 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
ix86_expand_move (XFmode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:2823 */
extern rtx gen_split_1357 (rtx, rtx *);
rtx
gen_split_1357 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 2831 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
ix86_split_long_move (operands); DONE;
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:2833 */
extern rtx gen_split_1358 (rtx, rtx *);
rtx
gen_split_1358 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
#line 2839 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
operands[2] = GEN_INT (TARGET_128BIT_LONG_DOUBLE ? -16 : -12);
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_REG (SImode,
	7),
	gen_rtx_PLUS (SImode,
	gen_rtx_REG (SImode,
	7),
	operand2)));
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (XFmode,
	gen_rtx_REG (SImode,
	7)),
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:2841 */
extern rtx gen_split_1359 (rtx, rtx *);
rtx
gen_split_1359 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
#line 2847 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
operands[2] = GEN_INT (TARGET_128BIT_LONG_DOUBLE ? -16 : -12);
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_REG (DImode,
	7),
	gen_rtx_PLUS (DImode,
	gen_rtx_REG (DImode,
	7),
	operand2)));
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (XFmode,
	gen_rtx_REG (DImode,
	7)),
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:2919 */
extern rtx gen_split_1360 (rtx, rtx *);
rtx
gen_split_1360 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 2932 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
ix86_split_long_move (operands); DONE;
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:2934 */
extern rtx gen_split_1361 (rtx, rtx *);
rtx
gen_split_1361 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
#line 2943 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
{
  rtx c = avoid_constant_pool_reference (operands[1]);
  rtx r = operands[0];

  if (GET_CODE (r) == SUBREG)
    r = SUBREG_REG (r);

  if (SSE_REG_P (r))
    {
      if (!standard_sse_constant_p (c))
	FAIL;
    }
  else if (FP_REG_P (r))
    {
      if (!standard_80387_constant_p (c))
	FAIL;
    }
  else if (MMX_REG_P (r))
    FAIL;

  operands[1] = c;
}
  operand0 = operands[0];
  operand1 = operands[1];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:2981 */
rtx
gen_movtf (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 2985 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
{
  ix86_expand_move (TFmode, operands);
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:3034 */
extern rtx gen_split_1363 (rtx, rtx *);
rtx
gen_split_1363 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 3040 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
ix86_split_long_move (operands); DONE;
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:3044 */
rtx
gen_zero_extendhisi2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 3048 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
{
  if (TARGET_ZERO_EXTEND_WITH_AND && !optimize_size)
    {
      operands[1] = force_reg (HImode, operands[1]);
      emit_insn (gen_zero_extendhisi2_and (operands[0], operands[1]));
      DONE;
    }
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ZERO_EXTEND (SImode,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:3066 */
extern rtx gen_split_1365 (rtx, rtx *);
rtx
gen_split_1365 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx _val = 0;
  start_sequence ();
#line 3073 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"

  operand0 = operands[0];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_AND (SImode,
	copy_rtx (operand0),
	GEN_INT (65535LL))),
		gen_hard_reg_clobber (CCmode, 17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:3083 */
rtx
gen_zero_extendqihi2 (rtx operand0,
	rtx operand1)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ZERO_EXTEND (HImode,
	operand1)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:3119 */
extern rtx gen_split_1367 (rtx, rtx *);
rtx
gen_split_1367 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
  operand0 = operands[0];
  operand1 = operands[1];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ZERO_EXTEND (HImode,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:3131 */
extern rtx gen_split_1368 (rtx, rtx *);
rtx
gen_split_1368 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
#line 3141 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
operands[2] = gen_lowpart (QImode, operands[0]);
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	const0_rtx));
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_STRICT_LOW_PART (VOIDmode,
	operand2),
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:3144 */
extern rtx gen_split_1369 (rtx, rtx *);
rtx
gen_split_1369 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx _val = 0;
  start_sequence ();
#line 3152 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"

  operand0 = operands[0];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_AND (HImode,
	copy_rtx (operand0),
	GEN_INT (255LL))),
		gen_hard_reg_clobber (CCmode, 17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:3154 */
rtx
gen_zero_extendqisi2 (rtx operand0,
	rtx operand1)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ZERO_EXTEND (SImode,
	operand1)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:3189 */
extern rtx gen_split_1371 (rtx, rtx *);
rtx
gen_split_1371 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
  operand0 = operands[0];
  operand1 = operands[1];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ZERO_EXTEND (SImode,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:3201 */
extern rtx gen_split_1372 (rtx, rtx *);
rtx
gen_split_1372 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
#line 3212 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
operands[2] = gen_lowpart (QImode, operands[0]);
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	const0_rtx));
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_STRICT_LOW_PART (VOIDmode,
	operand2),
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:3215 */
extern rtx gen_split_1373 (rtx, rtx *);
rtx
gen_split_1373 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx _val = 0;
  start_sequence ();
#line 3223 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"

  operand0 = operands[0];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_AND (SImode,
	copy_rtx (operand0),
	GEN_INT (255LL))),
		gen_hard_reg_clobber (CCmode, 17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:3226 */
rtx
gen_zero_extendsidi2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 3230 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
if (!TARGET_64BIT)
     {
       emit_insn (gen_zero_extendsidi2_32 (operands[0], operands[1]));
       DONE;
     }
  
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ZERO_EXTEND (DImode,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:3267 */
extern rtx gen_split_1375 (rtx, rtx *);
rtx
gen_split_1375 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx _val = 0;
  start_sequence ();
#line 3272 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
split_di (&operands[0], 1, &operands[3], &operands[4]);
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand4,
	const0_rtx));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:3274 */
extern rtx gen_split_1376 (rtx, rtx *);
rtx
gen_split_1376 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx _val = 0;
  start_sequence ();
#line 3281 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
split_di (&operands[0], 1, &operands[3], &operands[4]);
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand4,
	const0_rtx));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:3283 */
extern rtx gen_split_1377 (rtx, rtx *);
rtx
gen_split_1377 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx _val = 0;
  start_sequence ();
#line 3291 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
split_di (&operands[0], 1, &operands[3], &operands[4]);
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	operand1));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand4,
	const0_rtx));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:3311 */
rtx
gen_extendsidi2 (rtx operand0,
	rtx operand1)
{
  rtx operand2 ATTRIBUTE_UNUSED;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
#line 3317 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
{
  if (TARGET_64BIT)
    {
      emit_insn (gen_extendsidi2_rex64 (operands[0], operands[1]));
      DONE;
    }
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SIGN_EXTEND (DImode,
	operand1)),
		gen_hard_reg_clobber (CCmode, 17),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:3362 */
extern rtx gen_split_1379 (rtx, rtx *);
rtx
gen_split_1379 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx _val = 0;
  start_sequence ();
#line 3374 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
split_di (&operands[0], 1, &operands[3], &operands[4]);
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	operand1));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	copy_rtx (operand1),
	gen_rtx_ASHIFTRT (SImode,
	copy_rtx (operand1),
	const_int_rtx[MAX_SAVED_CONST_INT + (31)])),
		gen_hard_reg_clobber (CCmode, 17))));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand4,
	copy_rtx (operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:3377 */
extern rtx gen_split_1380 (rtx, rtx *);
rtx
gen_split_1380 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 3384 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
{
  split_di (&operands[0], 1, &operands[3], &operands[4]);

  emit_move_insn (operands[3], operands[1]);

  /* Generate a cltd if possible and doing so it profitable.  */
  if (true_regnum (operands[1]) == 0
      && true_regnum (operands[2]) == 1
      && (optimize_size || TARGET_USE_CLTD))
    {
      emit_insn (gen_ashrsi3_31 (operands[2], operands[1], GEN_INT (31)));
    }
  else
    {
      emit_move_insn (operands[2], operands[1]);
      emit_insn (gen_ashrsi3_31 (operands[2], operands[2], GEN_INT (31)));
    }
  emit_move_insn (operands[4], operands[2]);
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:3407 */
extern rtx gen_split_1381 (rtx, rtx *);
rtx
gen_split_1381 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 3414 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
{
  split_di (&operands[0], 1, &operands[3], &operands[4]);

  if (true_regnum (operands[3]) != true_regnum (operands[1]))
    emit_move_insn (operands[3], operands[1]);

  /* Generate a cltd if possible and doing so it profitable.  */
  if (true_regnum (operands[3]) == 0
      && (optimize_size || TARGET_USE_CLTD))
    {
      emit_insn (gen_ashrsi3_31 (operands[4], operands[3], GEN_INT (31)));
      DONE;
    }

  if (true_regnum (operands[4]) != true_regnum (operands[1]))
    emit_move_insn (operands[4], operands[1]);

  emit_insn (gen_ashrsi3_31 (operands[4], operands[4], GEN_INT (31)));
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:3545 */
extern rtx gen_split_1382 (rtx, rtx *);
rtx
gen_split_1382 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
  operand0 = operands[0];
  operand1 = operands[1];
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_REG (SImode,
	7),
	gen_rtx_PLUS (SImode,
	gen_rtx_REG (SImode,
	7),
	const_int_rtx[MAX_SAVED_CONST_INT + (-8)])));
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (DFmode,
	gen_rtx_REG (SImode,
	7)),
	gen_rtx_FLOAT_EXTEND (DFmode,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:3552 */
extern rtx gen_split_1383 (rtx, rtx *);
rtx
gen_split_1383 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
  operand0 = operands[0];
  operand1 = operands[1];
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_REG (DImode,
	7),
	gen_rtx_PLUS (DImode,
	gen_rtx_REG (DImode,
	7),
	const_int_rtx[MAX_SAVED_CONST_INT + (-8)])));
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (DFmode,
	gen_rtx_REG (DImode,
	7)),
	gen_rtx_FLOAT_EXTEND (DFmode,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:3565 */
extern rtx gen_split_1384 (rtx, rtx *);
rtx
gen_split_1384 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
#line 3571 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
operands[2] = GEN_INT (TARGET_128BIT_LONG_DOUBLE ? -16 : -12);
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_REG (SImode,
	7),
	gen_rtx_PLUS (SImode,
	gen_rtx_REG (SImode,
	7),
	operand2)));
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (XFmode,
	gen_rtx_REG (SImode,
	7)),
	gen_rtx_FLOAT_EXTEND (XFmode,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:3573 */
extern rtx gen_split_1385 (rtx, rtx *);
rtx
gen_split_1385 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
#line 3579 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
operands[2] = GEN_INT (TARGET_128BIT_LONG_DOUBLE ? -16 : -12);
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_REG (DImode,
	7),
	gen_rtx_PLUS (DImode,
	gen_rtx_REG (DImode,
	7),
	operand2)));
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (DFmode,
	gen_rtx_REG (DImode,
	7)),
	gen_rtx_FLOAT_EXTEND (XFmode,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:3581 */
extern rtx gen_split_1386 (rtx, rtx *);
rtx
gen_split_1386 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
#line 3587 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
operands[2] = GEN_INT (TARGET_128BIT_LONG_DOUBLE ? -16 : -12);
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_REG (SImode,
	7),
	gen_rtx_PLUS (SImode,
	gen_rtx_REG (SImode,
	7),
	operand2)));
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (DFmode,
	gen_rtx_REG (SImode,
	7)),
	gen_rtx_FLOAT_EXTEND (XFmode,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:3589 */
extern rtx gen_split_1387 (rtx, rtx *);
rtx
gen_split_1387 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
#line 3595 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
operands[2] = GEN_INT (TARGET_128BIT_LONG_DOUBLE ? -16 : -12);
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_REG (DImode,
	7),
	gen_rtx_PLUS (DImode,
	gen_rtx_REG (DImode,
	7),
	operand2)));
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (XFmode,
	gen_rtx_REG (DImode,
	7)),
	gen_rtx_FLOAT_EXTEND (XFmode,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:3597 */
rtx
gen_extendsfdf2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 3601 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
{
  /* ??? Needed for compress_float_constant since all fp constants
     are LEGITIMATE_CONSTANT_P.  */
  if (GET_CODE (operands[1]) == CONST_DOUBLE)
    {
      if ((!TARGET_SSE2 || TARGET_MIX_SSE_I387)
	  && standard_80387_constant_p (operands[1]) > 0)
	{
	  operands[1] = simplify_const_unary_operation
	    (FLOAT_EXTEND, DFmode, operands[1], SFmode);
	  emit_move_insn_1 (operands[0], operands[1]);
	  DONE;
	}
      operands[1] = validize_mem (force_const_mem (SFmode, operands[1]));
    }
  if (GET_CODE (operands[0]) == MEM && GET_CODE (operands[1]) == MEM)
    operands[1] = force_reg (SFmode, operands[1]);
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT_EXTEND (DFmode,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:3684 */
rtx
gen_extendsfxf2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 3688 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
{
  /* ??? Needed for compress_float_constant since all fp constants
     are LEGITIMATE_CONSTANT_P.  */
  if (GET_CODE (operands[1]) == CONST_DOUBLE)
    {
      if (standard_80387_constant_p (operands[1]) > 0)
	{
	  operands[1] = simplify_const_unary_operation
	    (FLOAT_EXTEND, XFmode, operands[1], SFmode);
	  emit_move_insn_1 (operands[0], operands[1]);
	  DONE;
	}
      operands[1] = validize_mem (force_const_mem (SFmode, operands[1]));
    }
  if (GET_CODE (operands[0]) == MEM && GET_CODE (operands[1]) == MEM)
    operands[1] = force_reg (SFmode, operands[1]);
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT_EXTEND (XFmode,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:3732 */
rtx
gen_extenddfxf2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 3736 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
{
  /* ??? Needed for compress_float_constant since all fp constants
     are LEGITIMATE_CONSTANT_P.  */
  if (GET_CODE (operands[1]) == CONST_DOUBLE)
    {
      if (standard_80387_constant_p (operands[1]) > 0)
	{
	  operands[1] = simplify_const_unary_operation
	    (FLOAT_EXTEND, XFmode, operands[1], DFmode);
	  emit_move_insn_1 (operands[0], operands[1]);
	  DONE;
	}
      operands[1] = validize_mem (force_const_mem (DFmode, operands[1]));
    }
  if (GET_CODE (operands[0]) == MEM && GET_CODE (operands[1]) == MEM)
    operands[1] = force_reg (DFmode, operands[1]);
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT_EXTEND (XFmode,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:3788 */
rtx
gen_truncdfsf2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 3793 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
{
  if (MEM_P (operands[0]) && MEM_P (operands[1]))
    operands[1] = force_reg (DFmode, operands[1]);

  if (TARGET_SSE2 && TARGET_SSE_MATH && !TARGET_MIX_SSE_I387)
    ;
  else if (flag_unsafe_math_optimizations)
    ;
  else
    {
      rtx temp = assign_386_stack_local (SFmode, SLOT_VIRTUAL);
      emit_insn (gen_truncdfsf2_with_temp (operands[0], operands[1], temp));
      DONE;
    }
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT_TRUNCATE (SFmode,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:3809 */
rtx
gen_truncdfsf2_with_temp (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT_TRUNCATE (SFmode,
	operand1)),
		gen_rtx_CLOBBER (VOIDmode,
	operand2)));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:3931 */
extern rtx gen_split_1393 (rtx, rtx *);
rtx
gen_split_1393 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
#line 3939 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
{
  operands[1] = gen_rtx_REG (SFmode, true_regnum (operands[1]));
}
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	operand1));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	copy_rtx (operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:3945 */
rtx
gen_truncxfsf2 (rtx operand0,
	rtx operand1)
{
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
#line 3951 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
{
  if (flag_unsafe_math_optimizations)
    {
      rtx reg = REG_P (operands[0]) ? operands[0] : gen_reg_rtx (SFmode);
      emit_insn (gen_truncxfsf2_i387_noop (reg, operands[1]));
      if (reg != operands[0])
	emit_move_insn (operands[0], reg);
      DONE;
    }
  else
    operands[2] = assign_386_stack_local (SFmode, SLOT_VIRTUAL);
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT_TRUNCATE (SFmode,
	operand1)),
		gen_rtx_CLOBBER (VOIDmode,
	operand2))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:4022 */
extern rtx gen_split_1395 (rtx, rtx *);
rtx
gen_split_1395 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
#line 4030 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_FLOAT_TRUNCATE (SFmode,
	operand1)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	copy_rtx (operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:4032 */
extern rtx gen_split_1396 (rtx, rtx *);
rtx
gen_split_1396 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
#line 4039 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT_TRUNCATE (SFmode,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:4043 */
rtx
gen_truncxfdf2 (rtx operand0,
	rtx operand1)
{
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
#line 4049 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
{
  if (flag_unsafe_math_optimizations)
    {
      rtx reg = REG_P (operands[0]) ? operands[0] : gen_reg_rtx (DFmode);
      emit_insn (gen_truncxfdf2_i387_noop (reg, operands[1]));
      if (reg != operands[0])
	emit_move_insn (operands[0], reg);
      DONE;
    }
  else
    operands[2] = assign_386_stack_local (DFmode, SLOT_VIRTUAL);
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT_TRUNCATE (DFmode,
	operand1)),
		gen_rtx_CLOBBER (VOIDmode,
	operand2))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:4122 */
extern rtx gen_split_1398 (rtx, rtx *);
rtx
gen_split_1398 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
#line 4130 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_FLOAT_TRUNCATE (DFmode,
	operand1)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	copy_rtx (operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:4132 */
extern rtx gen_split_1399 (rtx, rtx *);
rtx
gen_split_1399 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
#line 4139 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT_TRUNCATE (DFmode,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:4143 */
rtx
gen_fix_truncxfdi2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 4148 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
{
  if (TARGET_FISTTP)
   {
     emit_insn (gen_fix_truncdi_fisttp_i387_1 (operands[0], operands[1]));
     DONE;
   }
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FIX (DImode,
	operand1)),
		gen_hard_reg_clobber (CCmode, 17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:4156 */
rtx
gen_fix_truncsfdi2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 4161 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
{
  if (TARGET_FISTTP
      && !(TARGET_64BIT && SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH))
   {
     emit_insn (gen_fix_truncdi_fisttp_i387_1 (operands[0], operands[1]));
     DONE;
   }
  if (TARGET_64BIT && SSE_FLOAT_MODE_P (SFmode))
   {
     rtx out = REG_P (operands[0]) ? operands[0] : gen_reg_rtx (DImode);
     emit_insn (gen_fix_truncsfdi_sse (out, operands[1]));
     if (out != operands[0])
	emit_move_insn (operands[0], out);
     DONE;
   }
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FIX (DImode,
	operand1)),
		gen_hard_reg_clobber (CCmode, 17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:4156 */
rtx
gen_fix_truncdfdi2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 4161 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
{
  if (TARGET_FISTTP
      && !(TARGET_64BIT && SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH))
   {
     emit_insn (gen_fix_truncdi_fisttp_i387_1 (operands[0], operands[1]));
     DONE;
   }
  if (TARGET_64BIT && SSE_FLOAT_MODE_P (DFmode))
   {
     rtx out = REG_P (operands[0]) ? operands[0] : gen_reg_rtx (DImode);
     emit_insn (gen_fix_truncdfdi_sse (out, operands[1]));
     if (out != operands[0])
	emit_move_insn (operands[0], out);
     DONE;
   }
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FIX (DImode,
	operand1)),
		gen_hard_reg_clobber (CCmode, 17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:4180 */
rtx
gen_fix_truncxfsi2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 4185 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
{
  if (TARGET_FISTTP)
   {
     emit_insn (gen_fix_truncsi_fisttp_i387_1 (operands[0], operands[1]));
     DONE;
   }
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FIX (SImode,
	operand1)),
		gen_hard_reg_clobber (CCmode, 17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:4193 */
rtx
gen_fix_truncsfsi2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 4198 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
{
  if (TARGET_FISTTP
      && !(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH))
   {
     emit_insn (gen_fix_truncsi_fisttp_i387_1 (operands[0], operands[1]));
     DONE;
   }
  if (SSE_FLOAT_MODE_P (SFmode))
   {
     rtx out = REG_P (operands[0]) ? operands[0] : gen_reg_rtx (SImode);
     emit_insn (gen_fix_truncsfsi_sse (out, operands[1]));
     if (out != operands[0])
	emit_move_insn (operands[0], out);
     DONE;
   }
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FIX (SImode,
	operand1)),
		gen_hard_reg_clobber (CCmode, 17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:4193 */
rtx
gen_fix_truncdfsi2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 4198 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
{
  if (TARGET_FISTTP
      && !(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH))
   {
     emit_insn (gen_fix_truncsi_fisttp_i387_1 (operands[0], operands[1]));
     DONE;
   }
  if (SSE_FLOAT_MODE_P (DFmode))
   {
     rtx out = REG_P (operands[0]) ? operands[0] : gen_reg_rtx (SImode);
     emit_insn (gen_fix_truncdfsi_sse (out, operands[1]));
     if (out != operands[0])
	emit_move_insn (operands[0], out);
     DONE;
   }
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FIX (SImode,
	operand1)),
		gen_hard_reg_clobber (CCmode, 17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:4217 */
rtx
gen_fix_truncsfhi2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 4223 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
{
  if (TARGET_FISTTP)
   {
     emit_insn (gen_fix_trunchi_fisttp_i387_1 (operands[0], operands[1]));
     DONE;
   }
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FIX (HImode,
	operand1)),
		gen_hard_reg_clobber (CCmode, 17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:4217 */
rtx
gen_fix_truncdfhi2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 4223 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
{
  if (TARGET_FISTTP)
   {
     emit_insn (gen_fix_trunchi_fisttp_i387_1 (operands[0], operands[1]));
     DONE;
   }
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FIX (HImode,
	operand1)),
		gen_hard_reg_clobber (CCmode, 17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:4217 */
rtx
gen_fix_truncxfhi2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 4223 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
{
  if (TARGET_FISTTP)
   {
     emit_insn (gen_fix_trunchi_fisttp_i387_1 (operands[0], operands[1]));
     DONE;
   }
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FIX (HImode,
	operand1)),
		gen_hard_reg_clobber (CCmode, 17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:4234 */
rtx
gen_fixuns_truncsfsi2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 4239 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
{
  /* APPLE LOCAL 4424891 */
  ix86_expand_convert_uns_SF2SI_sse(operands); DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FIX (SImode,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:4234 */
rtx
gen_fixuns_truncdfsi2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 4239 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
{
  /* APPLE LOCAL 4424891 */
  ix86_expand_convert_uns_DF2SI_sse(operands); DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FIX (SImode,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:4307 */
extern rtx gen_peephole2_1411 (rtx, rtx *);
rtx
gen_peephole2_1411 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  if ((operands[2] = peep2_find_free_register (0, 0, "Yt", DFmode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  start_sequence ();
#line 4316 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	operand1));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FIX (SImode,
	copy_rtx (operand2))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:4307 */
extern rtx gen_peephole2_1412 (rtx, rtx *);
rtx
gen_peephole2_1412 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  if ((operands[2] = peep2_find_free_register (0, 0, "Yt", DFmode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  start_sequence ();
#line 4316 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	operand1));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FIX (DImode,
	copy_rtx (operand2))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:4318 */
extern rtx gen_peephole2_1413 (rtx, rtx *);
rtx
gen_peephole2_1413 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  if ((operands[2] = peep2_find_free_register (0, 0, "x", SFmode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  start_sequence ();
#line 4325 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	operand1));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FIX (SImode,
	copy_rtx (operand2))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:4318 */
extern rtx gen_peephole2_1414 (rtx, rtx *);
rtx
gen_peephole2_1414 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  if ((operands[2] = peep2_find_free_register (0, 0, "x", SFmode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  start_sequence ();
#line 4325 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	operand1));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FIX (DImode,
	copy_rtx (operand2))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:4327 */
extern rtx gen_split_1415 (rtx, rtx *);
rtx
gen_split_1415 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 4339 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
{
  if (memory_operand (operands[0], VOIDmode))
    emit_insn (gen_fix_trunchi_i387_fisttp (operands[0], operands[1]));
  else
    {
      operands[2] = assign_386_stack_local (HImode, SLOT_TEMP);
      emit_insn (gen_fix_trunchi_i387_fisttp_with_temp (operands[0],
							    operands[1],
							    operands[2]));
    }
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:4327 */
extern rtx gen_split_1416 (rtx, rtx *);
rtx
gen_split_1416 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 4339 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
{
  if (memory_operand (operands[0], VOIDmode))
    emit_insn (gen_fix_truncsi_i387_fisttp (operands[0], operands[1]));
  else
    {
      operands[2] = assign_386_stack_local (SImode, SLOT_TEMP);
      emit_insn (gen_fix_truncsi_i387_fisttp_with_temp (operands[0],
							    operands[1],
							    operands[2]));
    }
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:4327 */
extern rtx gen_split_1417 (rtx, rtx *);
rtx
gen_split_1417 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 4339 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
{
  if (memory_operand (operands[0], VOIDmode))
    emit_insn (gen_fix_truncdi_i387_fisttp (operands[0], operands[1]));
  else
    {
      operands[2] = assign_386_stack_local (DImode, SLOT_TEMP);
      emit_insn (gen_fix_truncdi_i387_fisttp_with_temp (operands[0],
							    operands[1],
							    operands[2]));
    }
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:4381 */
extern rtx gen_split_1418 (rtx, rtx *);
rtx
gen_split_1418 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
#line 4390 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_FIX (HImode,
	operand1)),
		gen_rtx_CLOBBER (VOIDmode,
	operand3))));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	copy_rtx (operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:4381 */
extern rtx gen_split_1419 (rtx, rtx *);
rtx
gen_split_1419 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
#line 4390 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_FIX (SImode,
	operand1)),
		gen_rtx_CLOBBER (VOIDmode,
	operand3))));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	copy_rtx (operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:4381 */
extern rtx gen_split_1420 (rtx, rtx *);
rtx
gen_split_1420 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
#line 4390 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_FIX (DImode,
	operand1)),
		gen_rtx_CLOBBER (VOIDmode,
	operand3))));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	copy_rtx (operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:4392 */
extern rtx gen_split_1421 (rtx, rtx *);
rtx
gen_split_1421 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
#line 4400 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FIX (HImode,
	operand1)),
		gen_rtx_CLOBBER (VOIDmode,
	operand3))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:4392 */
extern rtx gen_split_1422 (rtx, rtx *);
rtx
gen_split_1422 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
#line 4400 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FIX (SImode,
	operand1)),
		gen_rtx_CLOBBER (VOIDmode,
	operand3))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:4392 */
extern rtx gen_split_1423 (rtx, rtx *);
rtx
gen_split_1423 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
#line 4400 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FIX (DImode,
	operand1)),
		gen_rtx_CLOBBER (VOIDmode,
	operand3))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:4407 */
extern rtx gen_split_1424 (rtx, rtx *);
rtx
gen_split_1424 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 4419 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
{
  ix86_optimize_mode_switching[I387_TRUNC] = 1;

  operands[2] = assign_386_stack_local (HImode, SLOT_CW_STORED);
  operands[3] = assign_386_stack_local (HImode, SLOT_CW_TRUNC);
  if (memory_operand (operands[0], VOIDmode))
    emit_insn (gen_fix_trunchi_i387 (operands[0], operands[1],
					 operands[2], operands[3]));
  else
    {
      operands[4] = assign_386_stack_local (HImode, SLOT_TEMP);
      emit_insn (gen_fix_trunchi_i387_with_temp (operands[0], operands[1],
						     operands[2], operands[3],
						     operands[4]));
    }
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:4407 */
extern rtx gen_split_1425 (rtx, rtx *);
rtx
gen_split_1425 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 4419 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
{
  ix86_optimize_mode_switching[I387_TRUNC] = 1;

  operands[2] = assign_386_stack_local (HImode, SLOT_CW_STORED);
  operands[3] = assign_386_stack_local (HImode, SLOT_CW_TRUNC);
  if (memory_operand (operands[0], VOIDmode))
    emit_insn (gen_fix_truncsi_i387 (operands[0], operands[1],
					 operands[2], operands[3]));
  else
    {
      operands[4] = assign_386_stack_local (SImode, SLOT_TEMP);
      emit_insn (gen_fix_truncsi_i387_with_temp (operands[0], operands[1],
						     operands[2], operands[3],
						     operands[4]));
    }
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:4407 */
extern rtx gen_split_1426 (rtx, rtx *);
rtx
gen_split_1426 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 4419 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
{
  ix86_optimize_mode_switching[I387_TRUNC] = 1;

  operands[2] = assign_386_stack_local (HImode, SLOT_CW_STORED);
  operands[3] = assign_386_stack_local (HImode, SLOT_CW_TRUNC);
  if (memory_operand (operands[0], VOIDmode))
    emit_insn (gen_fix_truncdi_i387 (operands[0], operands[1],
					 operands[2], operands[3]));
  else
    {
      operands[4] = assign_386_stack_local (DImode, SLOT_TEMP);
      emit_insn (gen_fix_truncdi_i387_with_temp (operands[0], operands[1],
						     operands[2], operands[3],
						     operands[4]));
    }
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:4469 */
extern rtx gen_split_1427 (rtx, rtx *);
rtx
gen_split_1427 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx _val = 0;
  start_sequence ();
#line 4482 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		gen_rtx_SET (VOIDmode,
	operand4,
	gen_rtx_FIX (DImode,
	operand1)),
		gen_rtx_USE (VOIDmode,
	operand2),
		gen_rtx_USE (VOIDmode,
	operand3),
		gen_rtx_CLOBBER (VOIDmode,
	operand5))));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	copy_rtx (operand4)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:4484 */
extern rtx gen_split_1428 (rtx, rtx *);
rtx
gen_split_1428 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx _val = 0;
  start_sequence ();
#line 4496 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FIX (DImode,
	operand1)),
		gen_rtx_USE (VOIDmode,
	operand2),
		gen_rtx_USE (VOIDmode,
	operand3),
		gen_rtx_CLOBBER (VOIDmode,
	operand5))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:4525 */
extern rtx gen_split_1429 (rtx, rtx *);
rtx
gen_split_1429 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx _val = 0;
  start_sequence ();
#line 4536 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand4,
	gen_rtx_FIX (HImode,
	operand1)),
		gen_rtx_USE (VOIDmode,
	operand2),
		gen_rtx_USE (VOIDmode,
	operand3))));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	copy_rtx (operand4)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:4525 */
extern rtx gen_split_1430 (rtx, rtx *);
rtx
gen_split_1430 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx _val = 0;
  start_sequence ();
#line 4536 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand4,
	gen_rtx_FIX (SImode,
	operand1)),
		gen_rtx_USE (VOIDmode,
	operand2),
		gen_rtx_USE (VOIDmode,
	operand3))));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	copy_rtx (operand4)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:4538 */
extern rtx gen_split_1431 (rtx, rtx *);
rtx
gen_split_1431 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
#line 4548 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FIX (HImode,
	operand1)),
		gen_rtx_USE (VOIDmode,
	operand2),
		gen_rtx_USE (VOIDmode,
	operand3))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:4538 */
extern rtx gen_split_1432 (rtx, rtx *);
rtx
gen_split_1432 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
#line 4548 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FIX (SImode,
	operand1)),
		gen_rtx_USE (VOIDmode,
	operand2),
		gen_rtx_USE (VOIDmode,
	operand3))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:4574 */
rtx
gen_floathisf2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 4578 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
{
  if (TARGET_SSE_MATH)
    {
      emit_insn (gen_floatsisf2 (operands[0],
				 convert_to_mode (SImode, operands[1], 0)));
      DONE;
    }
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT (SFmode,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:4599 */
rtx
gen_floatsisf2 (rtx operand0,
	rtx operand1)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT (SFmode,
	operand1));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:4642 */
rtx
gen_floatdisf2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 4647 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
{
  if (!TARGET_64BIT)
  {
    rtx XFreg = gen_reg_rtx (XFmode);
    rtx SFstack = assign_386_stack_local (SFmode, SLOT_VIRTUAL);
    emit_insn (gen_floatdixf2 (copy_rtx (XFreg), operands[1]));
    emit_insn (gen_truncxfsf2 (copy_rtx (SFstack), XFreg));
    emit_move_insn (operands[0], SFstack);
    DONE;
  }
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT (SFmode,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:4697 */
rtx
gen_floathidf2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 4701 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
{
  if (TARGET_SSE2 && TARGET_SSE_MATH)
    {
      emit_insn (gen_floatsidf2 (operands[0],
				 convert_to_mode (SImode, operands[1], 0)));
      DONE;
    }
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT (DFmode,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:4722 */
rtx
gen_floatsidf2 (rtx operand0,
	rtx operand1)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT (DFmode,
	operand1));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:4769 */
rtx
gen_floatdidf2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 4774 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
{
  if (!TARGET_64BIT && TARGET_SSE2 && TARGET_SSE_MATH)
  {
    ix86_expand_convert_sign_DI2DF_sse (operands);  DONE;
  }
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT (DFmode,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:4860 */
extern rtx gen_split_1439 (rtx, rtx *);
rtx
gen_split_1439 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 4867 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
{
  operands[2] = ix86_force_to_memory (GET_MODE (operands[1]), operands[1]);
  operands[2] = gen_rtx_FLOAT (GET_MODE (operands[0]), operands[2]);
  emit_insn (gen_rtx_SET (VOIDmode, operands[0], operands[2]));
  ix86_free_from_memory (GET_MODE (operands[1]));
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:4875 */
rtx
gen_floatunssisf2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 4879 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
x86_emit_floatuns (operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_USE (VOIDmode,
	operand0));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:4882 */
rtx
gen_floatunssidf2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 4887 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
x86_emit_floatuns (operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_USE (VOIDmode,
	operand0));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:4890 */
rtx
gen_floatunsdisf2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 4894 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
x86_emit_floatuns (operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_USE (VOIDmode,
	operand0));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:4896 */
rtx
gen_floatunsdidf2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 4903 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
x86_emit_floatuns (operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_USE (VOIDmode,
	operand0));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:4912 */
rtx
gen_addti3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 4918 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
ix86_expand_binary_operator (PLUS, TImode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (TImode,
	operand1,
	operand2)));
  emit_insn (gen_hard_reg_clobber (CCmode, 17));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:4928 */
extern rtx gen_split_1445 (rtx, rtx *);
rtx
gen_split_1445 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx _val = 0;
  start_sequence ();
#line 4942 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
split_ti (operands+0, 1, operands+0, operands+3);
   split_ti (operands+1, 1, operands+1, operands+4);
   split_ti (operands+2, 1, operands+2, operands+5);
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCmode,
	17),
	gen_rtx_UNSPEC (CCmode,
	gen_rtvec (2,
		operand1,
		operand2),
	24)),
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (DImode,
	copy_rtx (operand1),
	copy_rtx (operand2))))));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_PLUS (DImode,
	gen_rtx_PLUS (DImode,
	gen_rtx_LTU (DImode,
	gen_rtx_REG (CCmode,
	17),
	const0_rtx),
	operand4),
	operand5)),
		gen_hard_reg_clobber (CCmode, 17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:4951 */
rtx
gen_adddi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 4957 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
ix86_expand_binary_operator (PLUS, DImode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (DImode,
	operand1,
	operand2)));
  emit_insn (gen_hard_reg_clobber (CCmode, 17));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:4967 */
extern rtx gen_split_1447 (rtx, rtx *);
rtx
gen_split_1447 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx _val = 0;
  start_sequence ();
#line 4981 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
split_di (operands+0, 1, operands+0, operands+3);
   split_di (operands+1, 1, operands+1, operands+4);
   split_di (operands+2, 1, operands+2, operands+5);
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCmode,
	17),
	gen_rtx_UNSPEC (CCmode,
	gen_rtvec (2,
		operand1,
		operand2),
	24)),
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (SImode,
	copy_rtx (operand1),
	copy_rtx (operand2))))));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_PLUS (SImode,
	gen_rtx_PLUS (SImode,
	gen_rtx_LTU (SImode,
	gen_rtx_REG (CCmode,
	17),
	const0_rtx),
	operand4),
	operand5)),
		gen_hard_reg_clobber (CCmode, 17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:5082 */
rtx
gen_addsi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 5088 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
ix86_expand_binary_operator (PLUS, SImode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (SImode,
	operand1,
	operand2)),
		gen_hard_reg_clobber (CCmode, 17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:5126 */
extern rtx gen_split_1449 (rtx, rtx *);
rtx
gen_split_1449 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 5141 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
{
  rtx pat;
  operands[0] = gen_lowpart (SImode, operands[0]);
  operands[1] = gen_lowpart (Pmode, operands[1]);
  operands[2] = gen_lowpart (Pmode, operands[2]);
  operands[3] = gen_lowpart (Pmode, operands[3]);
  pat = gen_rtx_PLUS (Pmode, gen_rtx_PLUS (Pmode, operands[1], operands[2]),
  		      operands[3]);
  if (Pmode != SImode)
    pat = gen_rtx_SUBREG (SImode, pat, 0);
  emit_insn (gen_rtx_SET (VOIDmode, operands[0], pat));
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:5157 */
extern rtx gen_split_1450 (rtx, rtx *);
rtx
gen_split_1450 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
#line 5170 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
{
  operands[1] = gen_lowpart (Pmode, operands[1]);
  operands[2] = gen_lowpart (Pmode, operands[2]);
  operands[3] = gen_lowpart (Pmode, operands[3]);
}
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ZERO_EXTEND (DImode,
	gen_rtx_SUBREG (SImode,
	gen_rtx_PLUS (DImode,
	gen_rtx_PLUS (DImode,
	operand1,
	operand2),
	operand3),
	0))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:5178 */
extern rtx gen_split_1451 (rtx, rtx *);
rtx
gen_split_1451 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 5192 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
{
  rtx pat;
  operands[0] = gen_lowpart (SImode, operands[0]);
  operands[1] = gen_lowpart (Pmode, operands[1]);
  operands[3] = gen_lowpart (Pmode, operands[3]);
  pat = gen_rtx_PLUS (Pmode, gen_rtx_MULT (Pmode, operands[1], operands[2]),
  		      operands[3]);
  if (Pmode != SImode)
    pat = gen_rtx_SUBREG (SImode, pat, 0);
  emit_insn (gen_rtx_SET (VOIDmode, operands[0], pat));
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:5207 */
extern rtx gen_split_1452 (rtx, rtx *);
rtx
gen_split_1452 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
#line 5220 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
{
  operands[1] = gen_lowpart (Pmode, operands[1]);
  operands[3] = gen_lowpart (Pmode, operands[3]);
}
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ZERO_EXTEND (DImode,
	gen_rtx_SUBREG (SImode,
	gen_rtx_PLUS (DImode,
	gen_rtx_MULT (DImode,
	operand1,
	operand2),
	operand3),
	0))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:5227 */
extern rtx gen_split_1453 (rtx, rtx *);
rtx
gen_split_1453 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 5241 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
{
  rtx pat;
  operands[0] = gen_lowpart (SImode, operands[0]);
  operands[1] = gen_lowpart (Pmode, operands[1]);
  operands[3] = gen_lowpart (Pmode, operands[3]);
  operands[4] = gen_lowpart (Pmode, operands[4]);
  pat = gen_rtx_PLUS (Pmode,
  		      gen_rtx_PLUS (Pmode, gen_rtx_MULT (Pmode, operands[1],
		      					 operands[2]),
				    operands[3]),
  		      operands[4]);
  if (Pmode != SImode)
    pat = gen_rtx_SUBREG (SImode, pat, 0);
  emit_insn (gen_rtx_SET (VOIDmode, operands[0], pat));
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:5260 */
extern rtx gen_split_1454 (rtx, rtx *);
rtx
gen_split_1454 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx _val = 0;
  start_sequence ();
#line 5276 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
{
  operands[1] = gen_lowpart (Pmode, operands[1]);
  operands[3] = gen_lowpart (Pmode, operands[3]);
  operands[4] = gen_lowpart (Pmode, operands[4]);
}
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ZERO_EXTEND (DImode,
	gen_rtx_SUBREG (SImode,
	gen_rtx_PLUS (DImode,
	gen_rtx_PLUS (DImode,
	gen_rtx_MULT (DImode,
	operand1,
	operand2),
	operand3),
	operand4),
	0))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:5339 */
extern rtx gen_split_1455 (rtx, rtx *);
rtx
gen_split_1455 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
#line 5349 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (DImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:5601 */
extern rtx gen_split_1456 (rtx, rtx *);
rtx
gen_split_1456 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 5609 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
{
  rtx pat;
  /* In -fPIC mode the constructs like (const (unspec [symbol_ref]))
     may confuse gen_lowpart.  */
  if (GET_MODE (operands[0]) != Pmode)
    {
      operands[1] = gen_lowpart (Pmode, operands[1]);
      operands[2] = gen_lowpart (Pmode, operands[2]);
    }
  operands[0] = gen_lowpart (SImode, operands[0]);
  pat = gen_rtx_PLUS (Pmode, operands[1], operands[2]);
  if (Pmode != SImode)
    pat = gen_rtx_SUBREG (SImode, pat, 0);
  emit_insn (gen_rtx_SET (VOIDmode, operands[0], pat));
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:5682 */
extern rtx gen_split_1457 (rtx, rtx *);
rtx
gen_split_1457 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
#line 5692 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
{
  operands[1] = gen_lowpart (Pmode, operands[1]);
  operands[2] = gen_lowpart (Pmode, operands[2]);
}
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ZERO_EXTEND (DImode,
	gen_rtx_SUBREG (SImode,
	gen_rtx_PLUS (DImode,
	operand1,
	operand2),
	0))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:5969 */
rtx
gen_addhi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 5975 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
ix86_expand_binary_operator (PLUS, HImode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (HImode,
	operand1,
	operand2)),
		gen_hard_reg_clobber (CCmode, 17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:6224 */
rtx
gen_addqi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 6230 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
ix86_expand_binary_operator (PLUS, QImode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (QImode,
	operand1,
	operand2)),
		gen_hard_reg_clobber (CCmode, 17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:6621 */
rtx
gen_addxf3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (XFmode,
	operand1,
	operand2));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:6628 */
rtx
gen_adddf3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (DFmode,
	operand1,
	operand2));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:6635 */
rtx
gen_addsf3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (SFmode,
	operand1,
	operand2));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:6646 */
rtx
gen_subti3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 6652 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
ix86_expand_binary_operator (MINUS, TImode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (TImode,
	operand1,
	operand2)),
		gen_hard_reg_clobber (CCmode, 17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:6662 */
extern rtx gen_split_1464 (rtx, rtx *);
rtx
gen_split_1464 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx _val = 0;
  start_sequence ();
#line 6675 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
split_ti (operands+0, 1, operands+0, operands+3);
   split_ti (operands+1, 1, operands+1, operands+4);
   split_ti (operands+2, 1, operands+2, operands+5);
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCmode,
	17),
	gen_rtx_COMPARE (CCmode,
	operand1,
	operand2)),
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (DImode,
	copy_rtx (operand1),
	copy_rtx (operand2))))));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_MINUS (DImode,
	operand4,
	gen_rtx_PLUS (DImode,
	gen_rtx_LTU (DImode,
	gen_rtx_REG (CCmode,
	17),
	const0_rtx),
	operand5))),
		gen_hard_reg_clobber (CCmode, 17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:6681 */
rtx
gen_subdi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 6687 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
ix86_expand_binary_operator (MINUS, DImode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (DImode,
	operand1,
	operand2)),
		gen_hard_reg_clobber (CCmode, 17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:6697 */
extern rtx gen_split_1466 (rtx, rtx *);
rtx
gen_split_1466 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx _val = 0;
  start_sequence ();
#line 6710 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
split_di (operands+0, 1, operands+0, operands+3);
   split_di (operands+1, 1, operands+1, operands+4);
   split_di (operands+2, 1, operands+2, operands+5);
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCmode,
	17),
	gen_rtx_COMPARE (CCmode,
	operand1,
	operand2)),
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (SImode,
	copy_rtx (operand1),
	copy_rtx (operand2))))));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_MINUS (SImode,
	operand4,
	gen_rtx_PLUS (SImode,
	gen_rtx_LTU (SImode,
	gen_rtx_REG (CCmode,
	17),
	const0_rtx),
	operand5))),
		gen_hard_reg_clobber (CCmode, 17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:6811 */
rtx
gen_subsi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 6817 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
ix86_expand_binary_operator (MINUS, SImode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (SImode,
	operand1,
	operand2)),
		gen_hard_reg_clobber (CCmode, 17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:6896 */
rtx
gen_subhi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 6902 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
ix86_expand_binary_operator (MINUS, HImode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (HImode,
	operand1,
	operand2)),
		gen_hard_reg_clobber (CCmode, 17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:6940 */
rtx
gen_subqi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 6946 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
ix86_expand_binary_operator (MINUS, QImode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (QImode,
	operand1,
	operand2)),
		gen_hard_reg_clobber (CCmode, 17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:6997 */
rtx
gen_subxf3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (XFmode,
	operand1,
	operand2));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:7004 */
rtx
gen_subdf3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (DFmode,
	operand1,
	operand2));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:7011 */
rtx
gen_subsf3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (SFmode,
	operand1,
	operand2));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:7020 */
rtx
gen_muldi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (DImode,
	operand1,
	operand2)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:7052 */
rtx
gen_mulsi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (SImode,
	operand1,
	operand2)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:7108 */
rtx
gen_mulhi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (HImode,
	operand1,
	operand2)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:7136 */
rtx
gen_mulqi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (QImode,
	operand1,
	operand2)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:7160 */
rtx
gen_umulqihi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (HImode,
	gen_rtx_ZERO_EXTEND (HImode,
	operand1),
	gen_rtx_ZERO_EXTEND (HImode,
	operand2))),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:7186 */
rtx
gen_mulqihi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (HImode,
	gen_rtx_SIGN_EXTEND (HImode,
	operand1),
	gen_rtx_SIGN_EXTEND (HImode,
	operand2))),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:7210 */
rtx
gen_umulditi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (TImode,
	gen_rtx_ZERO_EXTEND (TImode,
	operand1),
	gen_rtx_ZERO_EXTEND (TImode,
	operand2))),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:7237 */
rtx
gen_umulsidi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (DImode,
	gen_rtx_ZERO_EXTEND (DImode,
	operand1),
	gen_rtx_ZERO_EXTEND (DImode,
	operand2))),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:7263 */
rtx
gen_mulditi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (TImode,
	gen_rtx_SIGN_EXTEND (TImode,
	operand1),
	gen_rtx_SIGN_EXTEND (TImode,
	operand2))),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:7289 */
rtx
gen_mulsidi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (DImode,
	gen_rtx_SIGN_EXTEND (DImode,
	operand1),
	gen_rtx_SIGN_EXTEND (DImode,
	operand2))),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:7315 */
rtx
gen_umuldi3_highpart (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_TRUNCATE (DImode,
	gen_rtx_LSHIFTRT (TImode,
	gen_rtx_MULT (TImode,
	gen_rtx_ZERO_EXTEND (TImode,
	operand1),
	gen_rtx_ZERO_EXTEND (TImode,
	operand2)),
	const_int_rtx[MAX_SAVED_CONST_INT + (64)]))),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (DImode)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:7351 */
rtx
gen_umulsi3_highpart (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_TRUNCATE (SImode,
	gen_rtx_LSHIFTRT (DImode,
	gen_rtx_MULT (DImode,
	gen_rtx_ZERO_EXTEND (DImode,
	operand1),
	gen_rtx_ZERO_EXTEND (DImode,
	operand2)),
	const_int_rtx[MAX_SAVED_CONST_INT + (32)]))),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:7408 */
rtx
gen_smuldi3_highpart (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_TRUNCATE (DImode,
	gen_rtx_LSHIFTRT (TImode,
	gen_rtx_MULT (TImode,
	gen_rtx_SIGN_EXTEND (TImode,
	operand1),
	gen_rtx_SIGN_EXTEND (TImode,
	operand2)),
	const_int_rtx[MAX_SAVED_CONST_INT + (64)]))),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (DImode)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:7443 */
rtx
gen_smulsi3_highpart (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_TRUNCATE (SImode,
	gen_rtx_LSHIFTRT (DImode,
	gen_rtx_MULT (DImode,
	gen_rtx_SIGN_EXTEND (DImode,
	operand1),
	gen_rtx_SIGN_EXTEND (DImode,
	operand2)),
	const_int_rtx[MAX_SAVED_CONST_INT + (32)]))),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:7500 */
rtx
gen_mulxf3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (XFmode,
	operand1,
	operand2));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:7507 */
rtx
gen_muldf3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (DFmode,
	operand1,
	operand2));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:7514 */
rtx
gen_mulsf3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (SFmode,
	operand1,
	operand2));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:7545 */
rtx
gen_divxf3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_DIV (XFmode,
	operand1,
	operand2));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:7552 */
rtx
gen_divdf3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_DIV (DFmode,
	operand1,
	operand2));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:7559 */
rtx
gen_divsf3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_DIV (SFmode,
	operand1,
	operand2));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:7568 */
rtx
gen_divmoddi4 (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_DIV (DImode,
	operand1,
	operand2)),
		gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_MOD (DImode,
	operand1,
	operand2)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:7616 */
extern rtx gen_split_1494 (rtx, rtx *);
rtx
gen_split_1494 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx _val = 0;
  start_sequence ();
#line 7633 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
{
  /* Avoid use of cltd in favor of a mov+shift.  */
  if (!TARGET_USE_CLTD && !optimize_size)
    {
      if (true_regnum (operands[1]))
        emit_move_insn (operands[0], operands[1]);
      else
	emit_move_insn (operands[3], operands[1]);
      operands[4] = operands[3];
    }
  else
    {
      gcc_assert (!true_regnum (operands[1]));
      operands[4] = operands[1];
    }
}
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_ASHIFTRT (DImode,
	operand4,
	const_int_rtx[MAX_SAVED_CONST_INT + (63)])),
		gen_hard_reg_clobber (CCmode, 17))));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_DIV (DImode,
	gen_rtx_REG (DImode,
	0),
	operand2)),
		gen_rtx_SET (VOIDmode,
	copy_rtx (operand3),
	gen_rtx_MOD (DImode,
	gen_rtx_REG (DImode,
	0),
	copy_rtx (operand2))),
		gen_rtx_USE (VOIDmode,
	copy_rtx (operand3)),
		gen_hard_reg_clobber (CCmode, 17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:7651 */
rtx
gen_divmodsi4 (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_DIV (SImode,
	operand1,
	operand2)),
		gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_MOD (SImode,
	operand1,
	operand2)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:7699 */
extern rtx gen_split_1496 (rtx, rtx *);
rtx
gen_split_1496 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx _val = 0;
  start_sequence ();
#line 7716 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
{
  /* Avoid use of cltd in favor of a mov+shift.  */
  if (!TARGET_USE_CLTD && !optimize_size)
    {
      if (true_regnum (operands[1]))
        emit_move_insn (operands[0], operands[1]);
      else
	emit_move_insn (operands[3], operands[1]);
      operands[4] = operands[3];
    }
  else
    {
      gcc_assert (!true_regnum (operands[1]));
      operands[4] = operands[1];
    }
}
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_ASHIFTRT (SImode,
	operand4,
	const_int_rtx[MAX_SAVED_CONST_INT + (31)])),
		gen_hard_reg_clobber (CCmode, 17))));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_DIV (SImode,
	gen_rtx_REG (SImode,
	0),
	operand2)),
		gen_rtx_SET (VOIDmode,
	copy_rtx (operand3),
	gen_rtx_MOD (SImode,
	gen_rtx_REG (SImode,
	0),
	copy_rtx (operand2))),
		gen_rtx_USE (VOIDmode,
	copy_rtx (operand3)),
		gen_hard_reg_clobber (CCmode, 17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:7772 */
extern rtx gen_split_1497 (rtx, rtx *);
rtx
gen_split_1497 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
#line 7787 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	const0_rtx));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UDIV (DImode,
	operand1,
	operand2)),
		gen_rtx_SET (VOIDmode,
	copy_rtx (operand3),
	gen_rtx_UMOD (DImode,
	copy_rtx (operand1),
	copy_rtx (operand2))),
		gen_rtx_USE (VOIDmode,
	copy_rtx (operand3)),
		gen_hard_reg_clobber (CCmode, 17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:7815 */
extern rtx gen_split_1498 (rtx, rtx *);
rtx
gen_split_1498 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
#line 7830 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	const0_rtx));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UDIV (SImode,
	operand1,
	operand2)),
		gen_rtx_SET (VOIDmode,
	copy_rtx (operand3),
	gen_rtx_UMOD (SImode,
	copy_rtx (operand1),
	copy_rtx (operand2))),
		gen_rtx_USE (VOIDmode,
	copy_rtx (operand3)),
		gen_hard_reg_clobber (CCmode, 17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:7832 */
rtx
gen_udivmodhi4 (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx operand4;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[5];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#line 7842 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
operands[4] = gen_reg_rtx (HImode);
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
    operand4 = operands[4];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand4,
	const0_rtx));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UDIV (HImode,
	operand1,
	operand2)),
		gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_UMOD (HImode,
	operand1,
	operand2)),
		gen_rtx_USE (VOIDmode,
	operand4),
		gen_hard_reg_clobber (CCmode, 17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:7914 */
rtx
gen_testsi_ccno_1 (rtx operand0,
	rtx operand1)
{
  return gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCNOmode,
	17),
	gen_rtx_COMPARE (CCNOmode,
	gen_rtx_AND (SImode,
	operand0,
	operand1),
	const0_rtx));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:7936 */
rtx
gen_testqi_ccz_1 (rtx operand0,
	rtx operand1)
{
  return gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCZmode,
	17),
	gen_rtx_COMPARE (CCZmode,
	gen_rtx_AND (QImode,
	operand0,
	operand1),
	const0_rtx));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:7984 */
rtx
gen_testqi_ext_ccno_0 (rtx operand0,
	rtx operand1)
{
  return gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCNOmode,
	17),
	gen_rtx_COMPARE (CCNOmode,
	gen_rtx_AND (SImode,
	gen_rtx_ZERO_EXTRACT (SImode,
	operand0,
	const_int_rtx[MAX_SAVED_CONST_INT + (8)],
	const_int_rtx[MAX_SAVED_CONST_INT + (8)]),
	operand1),
	const0_rtx));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:8104 */
extern rtx gen_split_1503 (rtx, rtx *);
rtx
gen_split_1503 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
#line 8114 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
{
  rtx val = operands[2];
  HOST_WIDE_INT len = INTVAL (operands[3]);
  HOST_WIDE_INT pos = INTVAL (operands[4]);
  HOST_WIDE_INT mask;
  enum machine_mode mode, submode;

  mode = GET_MODE (val);
  if (GET_CODE (val) == MEM)
    {
      /* ??? Combine likes to put non-volatile mem extractions in QImode
	 no matter the size of the test.  So find a mode that works.  */
      if (! MEM_VOLATILE_P (val))
	{
	  mode = smallest_mode_for_size (pos + len, MODE_INT);
	  val = adjust_address (val, mode, 0);
	}
    }
  else if (GET_CODE (val) == SUBREG
	   && (submode = GET_MODE (SUBREG_REG (val)),
	       GET_MODE_BITSIZE (mode) > GET_MODE_BITSIZE (submode))
	   && pos + len <= GET_MODE_BITSIZE (submode))
    {
      /* Narrow a paradoxical subreg to prevent partial register stalls.  */
      mode = submode;
      val = SUBREG_REG (val);
    }
  else if (mode == HImode && pos + len <= 8)
    {
      /* Small HImode tests can be converted to QImode.  */
      mode = QImode;
      val = gen_lowpart (QImode, val);
    }

  if (len == HOST_BITS_PER_WIDE_INT)
    mask = -1;
  else
    mask = ((HOST_WIDE_INT)1 << len) - 1;
  mask <<= pos;

  operands[2] = gen_rtx_AND (mode, val, gen_int_mode (mask, mode));
}
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_fmt_ee (GET_CODE (operand1), GET_MODE (operand1),
		operand2,
		const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:8162 */
extern rtx gen_split_1504 (rtx, rtx *);
rtx
gen_split_1504 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
#line 8180 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
operands[2] = gen_lowpart (SImode, operands[2]);
   operands[3] = gen_int_mode (INTVAL (operands[3]) >> 8, SImode);
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_fmt_ee (GET_CODE (operand1), GET_MODE (operand1),
		gen_rtx_AND (SImode,
	gen_rtx_ZERO_EXTRACT (SImode,
	operand2,
	const_int_rtx[MAX_SAVED_CONST_INT + (8)],
	const_int_rtx[MAX_SAVED_CONST_INT + (8)]),
	operand3),
		const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:8183 */
extern rtx gen_split_1505 (rtx, rtx *);
rtx
gen_split_1505 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
#line 8199 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
operands[2] = gen_lowpart (QImode, operands[2]);
   operands[3] = gen_lowpart (QImode, operands[3]);
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_fmt_ee (GET_CODE (operand1), GET_MODE (operand1),
		gen_rtx_AND (QImode,
	operand2,
	operand3),
		const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:8207 */
rtx
gen_anddi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 8213 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
ix86_expand_binary_operator (AND, DImode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_AND (DImode,
	operand1,
	operand2)));
  emit_insn (gen_hard_reg_clobber (CCmode, 17));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:8272 */
rtx
gen_andsi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 8278 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
ix86_expand_binary_operator (AND, SImode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_AND (SImode,
	operand1,
	operand2)));
  emit_insn (gen_hard_reg_clobber (CCmode, 17));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:8318 */
extern rtx gen_split_1508 (rtx, rtx *);
rtx
gen_split_1508 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
#line 8325 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
operands[1] = gen_lowpart (HImode, operands[0]);
  operand0 = operands[0];
  operand1 = operands[1];
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_STRICT_LOW_PART (VOIDmode,
	operand1),
	const0_rtx));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:8327 */
extern rtx gen_split_1509 (rtx, rtx *);
rtx
gen_split_1509 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
#line 8334 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
operands[1] = gen_lowpart (QImode, operands[0]);
  operand0 = operands[0];
  operand1 = operands[1];
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_STRICT_LOW_PART (VOIDmode,
	operand1),
	const0_rtx));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:8336 */
extern rtx gen_split_1510 (rtx, rtx *);
rtx
gen_split_1510 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx _val = 0;
  start_sequence ();
#line 8353 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
operands[0] = gen_lowpart (SImode, operands[0]);
  operand0 = operands[0];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	gen_rtx_ZERO_EXTRACT (SImode,
	operand0,
	const_int_rtx[MAX_SAVED_CONST_INT + (8)],
	const_int_rtx[MAX_SAVED_CONST_INT + (8)]),
	gen_rtx_XOR (SImode,
	gen_rtx_ZERO_EXTRACT (SImode,
	copy_rtx (operand0),
	const_int_rtx[MAX_SAVED_CONST_INT + (8)],
	const_int_rtx[MAX_SAVED_CONST_INT + (8)]),
	gen_rtx_ZERO_EXTRACT (SImode,
	copy_rtx (operand0),
	const_int_rtx[MAX_SAVED_CONST_INT + (8)],
	const_int_rtx[MAX_SAVED_CONST_INT + (8)]))),
		gen_hard_reg_clobber (CCmode, 17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:8394 */
rtx
gen_andhi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 8400 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
ix86_expand_binary_operator (AND, HImode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_AND (HImode,
	operand1,
	operand2)));
  emit_insn (gen_hard_reg_clobber (CCmode, 17));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:8439 */
rtx
gen_andqi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 8445 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
ix86_expand_binary_operator (AND, QImode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_AND (QImode,
	operand1,
	operand2)));
  emit_insn (gen_hard_reg_clobber (CCmode, 17));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:8635 */
extern rtx gen_split_1513 (rtx, rtx *);
rtx
gen_split_1513 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
#line 8650 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
operands[0] = gen_lowpart (SImode, operands[0]);
   operands[1] = gen_lowpart (SImode, operands[1]);
   operands[2] = gen_int_mode ((INTVAL (operands[2]) >> 8) & 0xff, SImode);
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	gen_rtx_ZERO_EXTRACT (SImode,
	operand0,
	const_int_rtx[MAX_SAVED_CONST_INT + (8)],
	const_int_rtx[MAX_SAVED_CONST_INT + (8)]),
	gen_rtx_AND (SImode,
	gen_rtx_ZERO_EXTRACT (SImode,
	operand1,
	const_int_rtx[MAX_SAVED_CONST_INT + (8)],
	const_int_rtx[MAX_SAVED_CONST_INT + (8)]),
	operand2)),
		gen_hard_reg_clobber (CCmode, 17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:8656 */
extern rtx gen_split_1514 (rtx, rtx *);
rtx
gen_split_1514 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
#line 8671 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
operands[0] = gen_lowpart (QImode, operands[0]);
   operands[1] = gen_lowpart (QImode, operands[1]);
   operands[2] = gen_lowpart (QImode, operands[2]);
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	gen_rtx_STRICT_LOW_PART (VOIDmode,
	operand0),
	gen_rtx_AND (QImode,
	operand1,
	operand2)),
		gen_hard_reg_clobber (CCmode, 17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:8680 */
rtx
gen_iordi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 8686 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
ix86_expand_binary_operator (IOR, DImode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IOR (DImode,
	operand1,
	operand2)));
  emit_insn (gen_hard_reg_clobber (CCmode, 17));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:8727 */
rtx
gen_iorsi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 8733 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
ix86_expand_binary_operator (IOR, SImode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IOR (SImode,
	operand1,
	operand2)));
  emit_insn (gen_hard_reg_clobber (CCmode, 17));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:8820 */
rtx
gen_iorhi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 8826 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
ix86_expand_binary_operator (IOR, HImode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IOR (HImode,
	operand1,
	operand2)));
  emit_insn (gen_hard_reg_clobber (CCmode, 17));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:8863 */
rtx
gen_iorqi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 8869 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
ix86_expand_binary_operator (IOR, QImode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IOR (QImode,
	operand1,
	operand2)));
  emit_insn (gen_hard_reg_clobber (CCmode, 17));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:9008 */
extern rtx gen_split_1519 (rtx, rtx *);
rtx
gen_split_1519 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
#line 9023 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
operands[0] = gen_lowpart (SImode, operands[0]);
   operands[1] = gen_lowpart (SImode, operands[1]);
   operands[2] = gen_int_mode ((INTVAL (operands[2]) >> 8) & 0xff, SImode);
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	gen_rtx_ZERO_EXTRACT (SImode,
	operand0,
	const_int_rtx[MAX_SAVED_CONST_INT + (8)],
	const_int_rtx[MAX_SAVED_CONST_INT + (8)]),
	gen_rtx_IOR (SImode,
	gen_rtx_ZERO_EXTRACT (SImode,
	operand1,
	const_int_rtx[MAX_SAVED_CONST_INT + (8)],
	const_int_rtx[MAX_SAVED_CONST_INT + (8)]),
	operand2)),
		gen_hard_reg_clobber (CCmode, 17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:9029 */
extern rtx gen_split_1520 (rtx, rtx *);
rtx
gen_split_1520 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
#line 9044 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
operands[0] = gen_lowpart (QImode, operands[0]);
   operands[1] = gen_lowpart (QImode, operands[1]);
   operands[2] = gen_lowpart (QImode, operands[2]);
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	gen_rtx_STRICT_LOW_PART (VOIDmode,
	operand0),
	gen_rtx_IOR (QImode,
	operand1,
	operand2)),
		gen_hard_reg_clobber (CCmode, 17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:9053 */
rtx
gen_xordi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 9059 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
ix86_expand_binary_operator (XOR, DImode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_XOR (DImode,
	operand1,
	operand2)));
  emit_insn (gen_hard_reg_clobber (CCmode, 17));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:9103 */
rtx
gen_xorsi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 9109 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
ix86_expand_binary_operator (XOR, SImode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_XOR (SImode,
	operand1,
	operand2)));
  emit_insn (gen_hard_reg_clobber (CCmode, 17));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:9197 */
rtx
gen_xorhi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 9203 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
ix86_expand_binary_operator (XOR, HImode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_XOR (HImode,
	operand1,
	operand2)));
  emit_insn (gen_hard_reg_clobber (CCmode, 17));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:9240 */
rtx
gen_xorqi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 9246 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
ix86_expand_binary_operator (XOR, QImode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_XOR (QImode,
	operand1,
	operand2)));
  emit_insn (gen_hard_reg_clobber (CCmode, 17));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:9429 */
rtx
gen_xorqi_cc_ext_1 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCNOmode,
	17),
	gen_rtx_COMPARE (CCNOmode,
	gen_rtx_XOR (SImode,
	gen_rtx_ZERO_EXTRACT (SImode,
	operand1,
	const_int_rtx[MAX_SAVED_CONST_INT + (8)],
	const_int_rtx[MAX_SAVED_CONST_INT + (8)]),
	operand2),
	const0_rtx)),
		gen_rtx_SET (VOIDmode,
	gen_rtx_ZERO_EXTRACT (SImode,
	operand0,
	const_int_rtx[MAX_SAVED_CONST_INT + (8)],
	const_int_rtx[MAX_SAVED_CONST_INT + (8)]),
	gen_rtx_XOR (SImode,
	gen_rtx_ZERO_EXTRACT (SImode,
	operand1,
	const_int_rtx[MAX_SAVED_CONST_INT + (8)],
	const_int_rtx[MAX_SAVED_CONST_INT + (8)]),
	operand2))));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:9449 */
extern rtx gen_split_1526 (rtx, rtx *);
rtx
gen_split_1526 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
#line 9464 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
operands[0] = gen_lowpart (SImode, operands[0]);
   operands[1] = gen_lowpart (SImode, operands[1]);
   operands[2] = gen_int_mode ((INTVAL (operands[2]) >> 8) & 0xff, SImode);
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	gen_rtx_ZERO_EXTRACT (SImode,
	operand0,
	const_int_rtx[MAX_SAVED_CONST_INT + (8)],
	const_int_rtx[MAX_SAVED_CONST_INT + (8)]),
	gen_rtx_XOR (SImode,
	gen_rtx_ZERO_EXTRACT (SImode,
	operand1,
	const_int_rtx[MAX_SAVED_CONST_INT + (8)],
	const_int_rtx[MAX_SAVED_CONST_INT + (8)]),
	operand2)),
		gen_hard_reg_clobber (CCmode, 17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:9470 */
extern rtx gen_split_1527 (rtx, rtx *);
rtx
gen_split_1527 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
#line 9485 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
operands[0] = gen_lowpart (QImode, operands[0]);
   operands[1] = gen_lowpart (QImode, operands[1]);
   operands[2] = gen_lowpart (QImode, operands[2]);
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	gen_rtx_STRICT_LOW_PART (VOIDmode,
	operand0),
	gen_rtx_XOR (QImode,
	operand1,
	operand2)),
		gen_hard_reg_clobber (CCmode, 17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:9491 */
rtx
gen_negti2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 9496 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
ix86_expand_unary_operator (NEG, TImode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NEG (TImode,
	operand1)),
		gen_hard_reg_clobber (CCmode, 17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:9506 */
extern rtx gen_split_1529 (rtx, rtx *);
rtx
gen_split_1529 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
#line 9525 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
split_ti (operands+1, 1, operands+2, operands+3);
   split_ti (operands+0, 1, operands+0, operands+1);
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCZmode,
	17),
	gen_rtx_COMPARE (CCZmode,
	gen_rtx_NEG (DImode,
	operand2),
	const0_rtx)),
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NEG (DImode,
	copy_rtx (operand2))))));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand1,
	gen_rtx_PLUS (DImode,
	gen_rtx_PLUS (DImode,
	gen_rtx_LTU (DImode,
	gen_rtx_REG (CCmode,
	17),
	const0_rtx),
	operand3),
	const0_rtx)),
		gen_hard_reg_clobber (CCmode, 17))));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	copy_rtx (operand1),
	gen_rtx_NEG (DImode,
	copy_rtx (operand1))),
		gen_hard_reg_clobber (CCmode, 17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:9528 */
rtx
gen_negdi2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 9533 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
ix86_expand_unary_operator (NEG, DImode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NEG (DImode,
	operand1)),
		gen_hard_reg_clobber (CCmode, 17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:9543 */
extern rtx gen_split_1531 (rtx, rtx *);
rtx
gen_split_1531 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
#line 9562 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
split_di (operands+1, 1, operands+2, operands+3);
   split_di (operands+0, 1, operands+0, operands+1);
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCZmode,
	17),
	gen_rtx_COMPARE (CCZmode,
	gen_rtx_NEG (SImode,
	operand2),
	const0_rtx)),
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NEG (SImode,
	copy_rtx (operand2))))));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand1,
	gen_rtx_PLUS (SImode,
	gen_rtx_PLUS (SImode,
	gen_rtx_LTU (SImode,
	gen_rtx_REG (CCmode,
	17),
	const0_rtx),
	operand3),
	const0_rtx)),
		gen_hard_reg_clobber (CCmode, 17))));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	copy_rtx (operand1),
	gen_rtx_NEG (SImode,
	copy_rtx (operand1))),
		gen_hard_reg_clobber (CCmode, 17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:9590 */
rtx
gen_negsi2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 9595 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
ix86_expand_unary_operator (NEG, SImode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NEG (SImode,
	operand1)),
		gen_hard_reg_clobber (CCmode, 17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:9650 */
rtx
gen_neghi2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 9655 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
ix86_expand_unary_operator (NEG, HImode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NEG (HImode,
	operand1)),
		gen_hard_reg_clobber (CCmode, 17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:9677 */
rtx
gen_negqi2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 9682 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
ix86_expand_unary_operator (NEG, QImode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NEG (QImode,
	operand1)),
		gen_hard_reg_clobber (CCmode, 17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:9706 */
rtx
gen_negsf2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 9710 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
ix86_expand_fp_absneg_operator (NEG, SFmode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NEG (SFmode,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:9712 */
rtx
gen_abssf2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 9716 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
ix86_expand_fp_absneg_operator (ABS, SFmode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ABS (SFmode,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:9748 */
rtx
gen_copysignsf3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 9753 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
{
  ix86_expand_copysign (operands);
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit (operand0);
  emit (operand1);
  emit (operand2);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:9758 */
extern rtx gen_split_1538 (rtx, rtx *);
rtx
gen_split_1538 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 9769 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
{
  ix86_split_copysign_const (operands);
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:9786 */
extern rtx gen_split_1539 (rtx, rtx *);
rtx
gen_split_1539 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 9797 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
{
  ix86_split_copysign_var (operands);
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:9802 */
rtx
gen_negdf2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 9806 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
ix86_expand_fp_absneg_operator (NEG, DFmode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NEG (DFmode,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:9808 */
rtx
gen_absdf2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 9812 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
ix86_expand_fp_absneg_operator (ABS, DFmode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ABS (DFmode,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:9848 */
rtx
gen_copysigndf3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 9853 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
{
  ix86_expand_copysign (operands);
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit (operand0);
  emit (operand1);
  emit (operand2);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:9858 */
extern rtx gen_split_1543 (rtx, rtx *);
rtx
gen_split_1543 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 9869 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
{
  ix86_split_copysign_const (operands);
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:9886 */
extern rtx gen_split_1544 (rtx, rtx *);
rtx
gen_split_1544 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 9897 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
{
  ix86_split_copysign_var (operands);
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:9902 */
rtx
gen_negxf2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 9906 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
ix86_expand_fp_absneg_operator (NEG, XFmode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NEG (XFmode,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:9908 */
rtx
gen_absxf2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 9912 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
ix86_expand_fp_absneg_operator (ABS, XFmode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ABS (XFmode,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:9925 */
rtx
gen_negtf2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 9929 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
ix86_expand_fp_absneg_operator (NEG, TFmode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NEG (TFmode,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:9931 */
rtx
gen_abstf2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 9935 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
ix86_expand_fp_absneg_operator (ABS, TFmode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ABS (TFmode,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:9950 */
extern rtx gen_split_1549 (rtx, rtx *);
rtx
gen_split_1549 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
  operand0 = operands[0];
  operand1 = operands[1];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_fmt_e (GET_CODE (operand1), GET_MODE (operand1),
		copy_rtx (operand0))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:9958 */
extern rtx gen_split_1550 (rtx, rtx *);
rtx
gen_split_1550 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
#line 9966 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
{
  enum machine_mode mode = GET_MODE (operands[0]);
  enum machine_mode vmode = GET_MODE (operands[2]);
  rtx tmp;
  
  operands[0] = simplify_gen_subreg (vmode, operands[0], mode, 0);
  operands[1] = simplify_gen_subreg (vmode, operands[1], mode, 0);
  if (operands_match_p (operands[0], operands[2]))
    {
      tmp = operands[1];
      operands[1] = operands[2];
      operands[2] = tmp;
    }
  if (GET_CODE (operands[3]) == ABS)
    tmp = gen_rtx_AND (vmode, operands[1], operands[2]);
  else
    tmp = gen_rtx_XOR (vmode, operands[1], operands[2]);
  operands[3] = tmp;
}
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand3));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:9986 */
extern rtx gen_split_1551 (rtx, rtx *);
rtx
gen_split_1551 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
#line 9994 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
{ 
  rtx tmp;
  operands[0] = gen_lowpart (SImode, operands[0]);
  if (GET_CODE (operands[1]) == ABS)
    {
      tmp = gen_int_mode (0x7fffffff, SImode);
      tmp = gen_rtx_AND (SImode, operands[0], tmp);
    }
  else
    {
      tmp = gen_int_mode (0x80000000, SImode);
      tmp = gen_rtx_XOR (SImode, operands[0], tmp);
    }
  operands[1] = tmp;
}
  operand0 = operands[0];
  operand1 = operands[1];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	operand1),
		gen_hard_reg_clobber (CCmode, 17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:10010 */
extern rtx gen_split_1552 (rtx, rtx *);
rtx
gen_split_1552 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
#line 10018 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
{
  rtx tmp;
  if (TARGET_64BIT)
    {
      tmp = gen_lowpart (DImode, operands[0]);
      tmp = gen_rtx_ZERO_EXTRACT (DImode, tmp, const1_rtx, GEN_INT (63));
      operands[0] = tmp;

      if (GET_CODE (operands[1]) == ABS)
	tmp = const0_rtx;
      else
	tmp = gen_rtx_NOT (DImode, tmp);
    }
  else
    {
      operands[0] = gen_highpart (SImode, operands[0]);
      if (GET_CODE (operands[1]) == ABS)
	{
	  tmp = gen_int_mode (0x7fffffff, SImode);
	  tmp = gen_rtx_AND (SImode, operands[0], tmp);
	}
      else
	{
	  tmp = gen_int_mode (0x80000000, SImode);
	  tmp = gen_rtx_XOR (SImode, operands[0], tmp);
	}
    }
  operands[1] = tmp;
}
  operand0 = operands[0];
  operand1 = operands[1];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	operand1),
		gen_hard_reg_clobber (CCmode, 17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:10048 */
extern rtx gen_split_1553 (rtx, rtx *);
rtx
gen_split_1553 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
#line 10056 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
{
  rtx tmp;
  operands[0] = gen_rtx_REG (SImode,
			     true_regnum (operands[0])
			     + (TARGET_64BIT ? 1 : 2));
  if (GET_CODE (operands[1]) == ABS)
    {
      tmp = GEN_INT (0x7fff);
      tmp = gen_rtx_AND (SImode, operands[0], tmp);
    }
  else
    {
      tmp = GEN_INT (0x8000);
      tmp = gen_rtx_XOR (SImode, operands[0], tmp);
    }
  operands[1] = tmp;
}
  operand0 = operands[0];
  operand1 = operands[1];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	operand1),
		gen_hard_reg_clobber (CCmode, 17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:10074 */
extern rtx gen_split_1554 (rtx, rtx *);
rtx
gen_split_1554 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
#line 10082 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
{
  enum machine_mode mode = GET_MODE (operands[0]);
  int size = mode == XFmode ? 10 : GET_MODE_SIZE (mode);
  rtx tmp;

  /* APPLE LOCAL begin radar 4117515 */
  if (size == 4)
    {
      operands[0] = adjust_address (operands[0], SImode, 0);
      if (GET_CODE (operands[1]) == ABS)
	{
	  tmp = gen_int_mode (0x7fffffff, SImode);
	  tmp = gen_rtx_AND (SImode, operands[0], tmp);
	}
      else
	{
	  tmp = gen_int_mode (0x80000000, SImode);
	  tmp = gen_rtx_XOR (SImode, operands[0], tmp);
	}
    }
  else
    {
      operands[0] = adjust_address (operands[0], QImode, size - 1);
      if (GET_CODE (operands[1]) == ABS)
        {
      	  tmp = gen_int_mode (0x7f, QImode);
      	  tmp = gen_rtx_AND (QImode, operands[0], tmp);
    	}
      else
        {
      	  tmp = gen_int_mode (0x80, QImode);
      	  tmp = gen_rtx_XOR (QImode, operands[0], tmp);
    	}
    }
  /* APPLE LOCAL end radar 4117515 */
  operands[1] = tmp;
}
  operand0 = operands[0];
  operand1 = operands[1];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	operand1),
		gen_hard_reg_clobber (CCmode, 17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:10227 */
rtx
gen_one_cmpldi2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 10231 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
ix86_expand_unary_operator (NOT, DImode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NOT (DImode,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:10253 */
extern rtx gen_split_1556 (rtx, rtx *);
rtx
gen_split_1556 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
#line 10267 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_fmt_ee (GET_CODE (operand2), GET_MODE (operand2),
		gen_rtx_XOR (DImode,
	operand3,
	constm1_rtx),
		const0_rtx)),
		gen_rtx_SET (VOIDmode,
	operand1,
	gen_rtx_XOR (DImode,
	copy_rtx (operand3),
	constm1_rtx)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:10269 */
rtx
gen_one_cmplsi2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 10273 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
ix86_expand_unary_operator (NOT, SImode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NOT (SImode,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:10304 */
extern rtx gen_split_1558 (rtx, rtx *);
rtx
gen_split_1558 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
#line 10317 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_fmt_ee (GET_CODE (operand2), GET_MODE (operand2),
		gen_rtx_XOR (SImode,
	operand3,
	constm1_rtx),
		const0_rtx)),
		gen_rtx_SET (VOIDmode,
	operand1,
	gen_rtx_XOR (SImode,
	copy_rtx (operand3),
	constm1_rtx)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:10332 */
extern rtx gen_split_1559 (rtx, rtx *);
rtx
gen_split_1559 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
#line 10345 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_fmt_ee (GET_CODE (operand2), GET_MODE (operand2),
		gen_rtx_XOR (SImode,
	operand3,
	constm1_rtx),
		const0_rtx)),
		gen_rtx_SET (VOIDmode,
	operand1,
	gen_rtx_ZERO_EXTEND (DImode,
	gen_rtx_XOR (SImode,
	copy_rtx (operand3),
	constm1_rtx))))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:10347 */
rtx
gen_one_cmplhi2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 10351 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
ix86_expand_unary_operator (NOT, HImode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NOT (HImode,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:10373 */
extern rtx gen_split_1561 (rtx, rtx *);
rtx
gen_split_1561 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
#line 10386 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_fmt_ee (GET_CODE (operand2), GET_MODE (operand2),
		gen_rtx_XOR (HImode,
	operand3,
	constm1_rtx),
		const0_rtx)),
		gen_rtx_SET (VOIDmode,
	operand1,
	gen_rtx_XOR (HImode,
	copy_rtx (operand3),
	constm1_rtx)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:10389 */
rtx
gen_one_cmplqi2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 10393 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
ix86_expand_unary_operator (NOT, QImode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NOT (QImode,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:10417 */
extern rtx gen_split_1563 (rtx, rtx *);
rtx
gen_split_1563 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
#line 10430 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_fmt_ee (GET_CODE (operand2), GET_MODE (operand2),
		gen_rtx_XOR (QImode,
	operand3,
	constm1_rtx),
		const0_rtx)),
		gen_rtx_SET (VOIDmode,
	operand1,
	gen_rtx_XOR (QImode,
	copy_rtx (operand3),
	constm1_rtx)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:10456 */
rtx
gen_ashlti3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 10462 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
{
  if (! immediate_operand (operands[2], QImode))
    {
      emit_insn (gen_ashlti3_1 (operands[0], operands[1], operands[2]));
      DONE;
    }
  ix86_expand_binary_operator (ASHIFT, TImode, operands);
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFT (TImode,
	operand1,
	operand2)),
		gen_hard_reg_clobber (CCmode, 17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:10506 */
extern rtx gen_split_1565 (rtx, rtx *);
rtx
gen_split_1565 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 10514 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
ix86_split_ashl (operands, operands[3], TImode); DONE;
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:10516 */
extern rtx gen_split_1566 (rtx, rtx *);
rtx
gen_split_1566 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 10523 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
ix86_split_ashl (operands, NULL_RTX, TImode); DONE;
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:10541 */
rtx
gen_x86_64_shift_adj (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx _val = 0;
  start_sequence ();
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCZmode,
	17),
	gen_rtx_COMPARE (CCZmode,
	gen_rtx_AND (QImode,
	operand2,
	const_int_rtx[MAX_SAVED_CONST_INT + (64)]),
	const0_rtx)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IF_THEN_ELSE (DImode,
	gen_rtx_NE (VOIDmode,
	gen_rtx_REG (CCZmode,
	17),
	const0_rtx),
	operand1,
	operand0)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand1,
	gen_rtx_IF_THEN_ELSE (DImode,
	gen_rtx_NE (VOIDmode,
	gen_rtx_REG (CCZmode,
	17),
	const0_rtx),
	operand3,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:10557 */
rtx
gen_ashldi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 10562 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
ix86_expand_binary_operator (ASHIFT, DImode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFT (DImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:10608 */
extern rtx gen_split_1569 (rtx, rtx *);
rtx
gen_split_1569 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
#line 10618 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
operands[2] = gen_int_mode (1 << INTVAL (operands[2]), DImode);
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (DImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:10718 */
extern rtx gen_peephole2_1570 (rtx, rtx *);
rtx
gen_peephole2_1570 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  if ((operands[3] = peep2_find_free_register (0, 1, "r", SImode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  start_sequence ();
#line 10727 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
ix86_split_ashl (operands, operands[3], DImode); DONE;
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:10729 */
extern rtx gen_split_1571 (rtx, rtx *);
rtx
gen_split_1571 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 10737 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
ix86_split_ashl (operands, NULL_RTX, DImode); DONE;
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:10756 */
rtx
gen_x86_shift_adj_1 (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx _val = 0;
  start_sequence ();
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCZmode,
	17),
	gen_rtx_COMPARE (CCZmode,
	gen_rtx_AND (QImode,
	operand2,
	const_int_rtx[MAX_SAVED_CONST_INT + (32)]),
	const0_rtx)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IF_THEN_ELSE (SImode,
	gen_rtx_NE (VOIDmode,
	gen_rtx_REG (CCZmode,
	17),
	const0_rtx),
	operand1,
	operand0)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand1,
	gen_rtx_IF_THEN_ELSE (SImode,
	gen_rtx_NE (VOIDmode,
	gen_rtx_REG (CCZmode,
	17),
	const0_rtx),
	operand3,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:10772 */
rtx
gen_x86_shift_adj_2 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 10777 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
{
  rtx label = gen_label_rtx ();
  rtx tmp;

  emit_insn (gen_testqi_ccz_1 (operands[2], GEN_INT (32)));

  tmp = gen_rtx_REG (CCZmode, FLAGS_REG);
  tmp = gen_rtx_EQ (VOIDmode, tmp, const0_rtx);
  tmp = gen_rtx_IF_THEN_ELSE (VOIDmode, tmp,
			      gen_rtx_LABEL_REF (VOIDmode, label),
			      pc_rtx);
  tmp = emit_jump_insn (gen_rtx_SET (VOIDmode, pc_rtx, tmp));
  JUMP_LABEL (tmp) = label;

  emit_move_insn (operands[0], operands[1]);
  ix86_expand_clear (operands[1]);

  emit_label (label);
  LABEL_NUSES (label) = 1;

  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_USE (VOIDmode,
	operand0));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand1));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand2));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:10800 */
rtx
gen_ashlsi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 10806 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
ix86_expand_binary_operator (ASHIFT, SImode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFT (SImode,
	operand1,
	operand2)));
  emit_insn (gen_hard_reg_clobber (CCmode, 17));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:10848 */
extern rtx gen_split_1575 (rtx, rtx *);
rtx
gen_split_1575 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 10857 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
{
  rtx pat;
  enum machine_mode mode = GET_MODE (operands[0]);

  if (GET_MODE_SIZE (mode) < 4)
    operands[0] = gen_lowpart (SImode, operands[0]);
  if (mode != Pmode)
    operands[1] = gen_lowpart (Pmode, operands[1]);
  operands[2] = gen_int_mode (1 << INTVAL (operands[2]), Pmode);

  pat = gen_rtx_MULT (Pmode, operands[1], operands[2]);
  if (Pmode != SImode)
    pat = gen_rtx_SUBREG (SImode, pat, 0);
  emit_insn (gen_rtx_SET (VOIDmode, operands[0], pat));
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:10875 */
extern rtx gen_split_1576 (rtx, rtx *);
rtx
gen_split_1576 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 10883 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
{
  rtx pat, clob;
  emit_move_insn (operands[0], operands[1]);
  pat = gen_rtx_SET (VOIDmode, operands[0],
		     gen_rtx_ASHIFT (GET_MODE (operands[0]),
				     operands[0], operands[2]));
  clob = gen_rtx_CLOBBER (VOIDmode, gen_rtx_REG (CCmode, FLAGS_REG));
  emit_insn (gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2, pat, clob)));
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:10932 */
extern rtx gen_split_1577 (rtx, rtx *);
rtx
gen_split_1577 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
#line 10942 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
{
  operands[1] = gen_lowpart (Pmode, operands[1]);
  operands[2] = gen_int_mode (1 << INTVAL (operands[2]), Pmode);
}
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ZERO_EXTEND (DImode,
	gen_rtx_SUBREG (SImode,
	gen_rtx_MULT (SImode,
	operand1,
	operand2),
	0))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:11074 */
rtx
gen_ashlhi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 11080 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
ix86_expand_binary_operator (ASHIFT, HImode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFT (HImode,
	operand1,
	operand2)));
  emit_insn (gen_hard_reg_clobber (CCmode, 17));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:11240 */
rtx
gen_ashlqi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 11246 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
ix86_expand_binary_operator (ASHIFT, QImode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFT (QImode,
	operand1,
	operand2)));
  emit_insn (gen_hard_reg_clobber (CCmode, 17));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:11446 */
rtx
gen_ashrti3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 11452 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
{
  if (! immediate_operand (operands[2], QImode))
    {
      emit_insn (gen_ashrti3_1 (operands[0], operands[1], operands[2]));
      DONE;
    }
  ix86_expand_binary_operator (ASHIFTRT, TImode, operands);
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFTRT (TImode,
	operand1,
	operand2)),
		gen_hard_reg_clobber (CCmode, 17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:11481 */
extern rtx gen_split_1581 (rtx, rtx *);
rtx
gen_split_1581 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 11489 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
ix86_split_ashr (operands, operands[3], TImode); DONE;
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:11491 */
extern rtx gen_split_1582 (rtx, rtx *);
rtx
gen_split_1582 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 11498 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
ix86_split_ashr (operands, NULL_RTX, TImode); DONE;
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:11516 */
rtx
gen_ashrdi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 11521 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
ix86_expand_binary_operator (ASHIFTRT, DImode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFTRT (DImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:11647 */
extern rtx gen_peephole2_1584 (rtx, rtx *);
rtx
gen_peephole2_1584 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  if ((operands[3] = peep2_find_free_register (0, 1, "r", SImode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  start_sequence ();
#line 11656 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
ix86_split_ashr (operands, operands[3], DImode); DONE;
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:11658 */
extern rtx gen_split_1585 (rtx, rtx *);
rtx
gen_split_1585 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 11666 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
ix86_split_ashr (operands, NULL_RTX, DImode); DONE;
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:11684 */
rtx
gen_x86_shift_adj_3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 11689 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
{
  rtx label = gen_label_rtx ();
  rtx tmp;

  emit_insn (gen_testqi_ccz_1 (operands[2], GEN_INT (32)));

  tmp = gen_rtx_REG (CCZmode, FLAGS_REG);
  tmp = gen_rtx_EQ (VOIDmode, tmp, const0_rtx);
  tmp = gen_rtx_IF_THEN_ELSE (VOIDmode, tmp,
			      gen_rtx_LABEL_REF (VOIDmode, label),
			      pc_rtx);
  tmp = emit_jump_insn (gen_rtx_SET (VOIDmode, pc_rtx, tmp));
  JUMP_LABEL (tmp) = label;

  emit_move_insn (operands[0], operands[1]);
  emit_insn (gen_ashrsi3_31 (operands[1], operands[1], GEN_INT (31)));

  emit_label (label);
  LABEL_NUSES (label) = 1;

  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_USE (VOIDmode,
	operand0));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand1));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand2));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:11745 */
rtx
gen_ashrsi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 11751 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
ix86_expand_binary_operator (ASHIFTRT, SImode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFTRT (SImode,
	operand1,
	operand2)));
  emit_insn (gen_hard_reg_clobber (CCmode, 17));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:11902 */
rtx
gen_ashrhi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 11908 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
ix86_expand_binary_operator (ASHIFTRT, HImode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFTRT (HImode,
	operand1,
	operand2)));
  emit_insn (gen_hard_reg_clobber (CCmode, 17));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:12005 */
rtx
gen_ashrqi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 12011 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
ix86_expand_binary_operator (ASHIFTRT, QImode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFTRT (QImode,
	operand1,
	operand2)));
  emit_insn (gen_hard_reg_clobber (CCmode, 17));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:12141 */
rtx
gen_lshrti3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 12147 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
{
  if (! immediate_operand (operands[2], QImode))
    {
      emit_insn (gen_lshrti3_1 (operands[0], operands[1], operands[2]));
      DONE;
    }
  ix86_expand_binary_operator (LSHIFTRT, TImode, operands);
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_LSHIFTRT (TImode,
	operand1,
	operand2)),
		gen_hard_reg_clobber (CCmode, 17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:12194 */
extern rtx gen_split_1591 (rtx, rtx *);
rtx
gen_split_1591 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 12202 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
ix86_split_lshr (operands, operands[3], TImode); DONE;
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:12204 */
extern rtx gen_split_1592 (rtx, rtx *);
rtx
gen_split_1592 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 12211 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
ix86_split_lshr (operands, NULL_RTX, TImode); DONE;
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:12213 */
rtx
gen_lshrdi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 12218 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
ix86_expand_binary_operator (LSHIFTRT, DImode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_LSHIFTRT (DImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:12327 */
extern rtx gen_peephole2_1594 (rtx, rtx *);
rtx
gen_peephole2_1594 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  if ((operands[3] = peep2_find_free_register (0, 1, "r", SImode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  start_sequence ();
#line 12336 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
ix86_split_lshr (operands, operands[3], DImode); DONE;
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:12338 */
extern rtx gen_split_1595 (rtx, rtx *);
rtx
gen_split_1595 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 12346 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
ix86_split_lshr (operands, NULL_RTX, DImode); DONE;
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:12348 */
rtx
gen_lshrsi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 12354 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
ix86_expand_binary_operator (LSHIFTRT, SImode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_LSHIFTRT (SImode,
	operand1,
	operand2)));
  emit_insn (gen_hard_reg_clobber (CCmode, 17));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:12506 */
rtx
gen_lshrhi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 12512 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
ix86_expand_binary_operator (LSHIFTRT, HImode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_LSHIFTRT (HImode,
	operand1,
	operand2)));
  emit_insn (gen_hard_reg_clobber (CCmode, 17));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:12609 */
rtx
gen_lshrqi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 12615 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
ix86_expand_binary_operator (LSHIFTRT, QImode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_LSHIFTRT (QImode,
	operand1,
	operand2)));
  emit_insn (gen_hard_reg_clobber (CCmode, 17));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:12741 */
rtx
gen_rotldi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 12747 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
{
  if (TARGET_64BIT)
    {
      ix86_expand_binary_operator (ROTATE, DImode, operands);
      DONE;
    }
  if (!const_1_to_31_operand (operands[2], VOIDmode))
    FAIL;
  emit_insn (gen_ix86_rotldi3 (operands[0], operands[1], operands[2]));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ROTATE (DImode,
	operand1,
	operand2)));
  emit_insn (gen_hard_reg_clobber (CCmode, 17));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:12761 */
extern rtx gen_split_1600 (rtx, rtx *);
rtx
gen_split_1600 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx _val = 0;
  start_sequence ();
#line 12783 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
split_di (operands, 1, operands + 4, operands + 5);
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	operand4));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	copy_rtx (operand4),
	gen_rtx_IOR (SImode,
	gen_rtx_ASHIFT (SImode,
	copy_rtx (operand4),
	operand2),
	gen_rtx_LSHIFTRT (SImode,
	operand5,
	gen_rtx_MINUS (QImode,
	const_int_rtx[MAX_SAVED_CONST_INT + (32)],
	copy_rtx (operand2))))),
		gen_hard_reg_clobber (CCmode, 17))));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	copy_rtx (operand5),
	gen_rtx_IOR (SImode,
	gen_rtx_ASHIFT (SImode,
	copy_rtx (operand5),
	copy_rtx (operand2)),
	gen_rtx_LSHIFTRT (SImode,
	copy_rtx (operand3),
	gen_rtx_MINUS (QImode,
	const_int_rtx[MAX_SAVED_CONST_INT + (32)],
	copy_rtx (operand2))))),
		gen_hard_reg_clobber (CCmode, 17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:12811 */
rtx
gen_rotlsi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 12817 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
ix86_expand_binary_operator (ROTATE, SImode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ROTATE (SImode,
	operand1,
	operand2)));
  emit_insn (gen_hard_reg_clobber (CCmode, 17));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:12870 */
rtx
gen_rotlhi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 12876 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
ix86_expand_binary_operator (ROTATE, HImode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ROTATE (HImode,
	operand1,
	operand2)));
  emit_insn (gen_hard_reg_clobber (CCmode, 17));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:12904 */
rtx
gen_rotlqi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 12910 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
ix86_expand_binary_operator (ROTATE, QImode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ROTATE (QImode,
	operand1,
	operand2)));
  emit_insn (gen_hard_reg_clobber (CCmode, 17));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:12965 */
rtx
gen_rotrdi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 12971 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
{
  if (TARGET_64BIT)
    {
      ix86_expand_binary_operator (ROTATERT, DImode, operands);
      DONE;
    }
  if (!const_1_to_31_operand (operands[2], VOIDmode))
    FAIL;
  emit_insn (gen_ix86_rotrdi3 (operands[0], operands[1], operands[2]));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ROTATE (DImode,
	operand1,
	operand2)));
  emit_insn (gen_hard_reg_clobber (CCmode, 17));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:12985 */
extern rtx gen_split_1605 (rtx, rtx *);
rtx
gen_split_1605 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx _val = 0;
  start_sequence ();
#line 13007 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
split_di (operands, 1, operands + 4, operands + 5);
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	operand4));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	copy_rtx (operand4),
	gen_rtx_IOR (SImode,
	gen_rtx_ASHIFTRT (SImode,
	copy_rtx (operand4),
	operand2),
	gen_rtx_ASHIFT (SImode,
	operand5,
	gen_rtx_MINUS (QImode,
	const_int_rtx[MAX_SAVED_CONST_INT + (32)],
	copy_rtx (operand2))))),
		gen_hard_reg_clobber (CCmode, 17))));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	copy_rtx (operand5),
	gen_rtx_IOR (SImode,
	gen_rtx_ASHIFTRT (SImode,
	copy_rtx (operand5),
	copy_rtx (operand2)),
	gen_rtx_ASHIFT (SImode,
	copy_rtx (operand3),
	gen_rtx_MINUS (QImode,
	const_int_rtx[MAX_SAVED_CONST_INT + (32)],
	copy_rtx (operand2))))),
		gen_hard_reg_clobber (CCmode, 17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:13035 */
rtx
gen_rotrsi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 13041 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
ix86_expand_binary_operator (ROTATERT, SImode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ROTATERT (SImode,
	operand1,
	operand2)));
  emit_insn (gen_hard_reg_clobber (CCmode, 17));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:13097 */
rtx
gen_rotrhi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 13103 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
ix86_expand_binary_operator (ROTATERT, HImode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ROTATERT (HImode,
	operand1,
	operand2)));
  emit_insn (gen_hard_reg_clobber (CCmode, 17));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:13131 */
rtx
gen_rotrqi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 13137 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
ix86_expand_binary_operator (ROTATERT, QImode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ROTATERT (QImode,
	operand1,
	operand2)));
  emit_insn (gen_hard_reg_clobber (CCmode, 17));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:13194 */
rtx
gen_extv (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#line 13200 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
{
  /* Handle extractions from %ah et al.  */
  if (INTVAL (operands[2]) != 8 || INTVAL (operands[3]) != 8)
    FAIL;

  /* From mips.md: extract_bit_field doesn't verify that our source
     matches the predicate, so check it again here.  */
  if (! ext_register_operand (operands[1], VOIDmode))
    FAIL;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SIGN_EXTRACT (SImode,
	operand1,
	operand2,
	operand3)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:13211 */
rtx
gen_extzv (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#line 13217 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
{
  /* Handle extractions from %ah et al.  */
  if (INTVAL (operands[2]) != 8 || INTVAL (operands[3]) != 8)
    FAIL;

  /* From mips.md: extract_bit_field doesn't verify that our source
     matches the predicate, so check it again here.  */
  if (! ext_register_operand (operands[1], VOIDmode))
    FAIL;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ZERO_EXTRACT (SImode,
	operand1,
	operand2,
	operand3)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:13228 */
rtx
gen_insv (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#line 13234 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
{
  /* Handle insertions to %ah et al.  */
  if (INTVAL (operands[1]) != 8 || INTVAL (operands[2]) != 8)
    FAIL;

  /* From mips.md: insert_bit_field doesn't verify that our source
     matches the predicate, so check it again here.  */
  if (! ext_register_operand (operands[0], VOIDmode))
    FAIL;

  if (TARGET_64BIT)
    emit_insn (gen_movdi_insv_1_rex64 (operands[0], operands[3]));
  else
    emit_insn (gen_movsi_insv_1 (operands[0], operands[3]));

  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_ZERO_EXTRACT (VOIDmode,
	operand0,
	operand1,
	operand2),
	operand3));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:13297 */
extern rtx gen_peephole2_1612 (rtx, rtx *);
rtx
gen_peephole2_1612 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  if ((operands[2] = peep2_find_free_register (0, 0, "r", DImode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  start_sequence ();
#line 13307 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
{
  HOST_WIDE_INT i = INTVAL (operands[1]), hi, lo;
  rtx op1;

  if (HOST_BITS_PER_WIDE_INT >= 64)
    lo = (HOST_WIDE_INT)1 << i, hi = 0;
  else if (i < HOST_BITS_PER_WIDE_INT)
    lo = (HOST_WIDE_INT)1 << i, hi = 0;
  else
    lo = 0, hi = (HOST_WIDE_INT)1 << (i - HOST_BITS_PER_WIDE_INT);

  op1 = immed_double_const (lo, hi, DImode);
  if (i >= 31)
    {
      emit_move_insn (operands[2], op1);
      op1 = operands[2];
    }

  emit_insn (gen_iordi3 (operands[0], operands[0], op1));
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:13329 */
extern rtx gen_peephole2_1613 (rtx, rtx *);
rtx
gen_peephole2_1613 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  if ((operands[2] = peep2_find_free_register (0, 0, "r", DImode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  start_sequence ();
#line 13339 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
{
  HOST_WIDE_INT i = INTVAL (operands[1]), hi, lo;
  rtx op1;

  if (HOST_BITS_PER_WIDE_INT >= 64)
    lo = (HOST_WIDE_INT)1 << i, hi = 0;
  else if (i < HOST_BITS_PER_WIDE_INT)
    lo = (HOST_WIDE_INT)1 << i, hi = 0;
  else
    lo = 0, hi = (HOST_WIDE_INT)1 << (i - HOST_BITS_PER_WIDE_INT);

  op1 = immed_double_const (~lo, ~hi, DImode);
  if (i >= 32)
    {
      emit_move_insn (operands[2], op1);
      op1 = operands[2];
    }

  emit_insn (gen_anddi3 (operands[0], operands[0], op1));
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:13361 */
extern rtx gen_peephole2_1614 (rtx, rtx *);
rtx
gen_peephole2_1614 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  if ((operands[2] = peep2_find_free_register (0, 0, "r", DImode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  start_sequence ();
#line 13372 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
{
  HOST_WIDE_INT i = INTVAL (operands[1]), hi, lo;
  rtx op1;

  if (HOST_BITS_PER_WIDE_INT >= 64)
    lo = (HOST_WIDE_INT)1 << i, hi = 0;
  else if (i < HOST_BITS_PER_WIDE_INT)
    lo = (HOST_WIDE_INT)1 << i, hi = 0;
  else
    lo = 0, hi = (HOST_WIDE_INT)1 << (i - HOST_BITS_PER_WIDE_INT);

  op1 = immed_double_const (lo, hi, DImode);
  if (i >= 31)
    {
      emit_move_insn (operands[2], op1);
      op1 = operands[2];
    }

  emit_insn (gen_xordi3 (operands[0], operands[0], op1));
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:13403 */
rtx
gen_seq (rtx operand0)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[1];
    operands[0] = operand0;
#line 13407 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
if (ix86_expand_setcc (EQ, operands[0])) DONE; else FAIL;
    operand0 = operands[0];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_EQ (QImode,
	gen_rtx_REG (CCmode,
	17),
	const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:13409 */
rtx
gen_sne (rtx operand0)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[1];
    operands[0] = operand0;
#line 13413 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
if (ix86_expand_setcc (NE, operands[0])) DONE; else FAIL;
    operand0 = operands[0];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NE (QImode,
	gen_rtx_REG (CCmode,
	17),
	const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:13415 */
rtx
gen_sgt (rtx operand0)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[1];
    operands[0] = operand0;
#line 13419 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
if (ix86_expand_setcc (GT, operands[0])) DONE; else FAIL;
    operand0 = operands[0];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_GT (QImode,
	gen_rtx_REG (CCmode,
	17),
	const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:13421 */
rtx
gen_sgtu (rtx operand0)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[1];
    operands[0] = operand0;
#line 13425 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
if (ix86_expand_setcc (GTU, operands[0])) DONE; else FAIL;
    operand0 = operands[0];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_GTU (QImode,
	gen_rtx_REG (CCmode,
	17),
	const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:13427 */
rtx
gen_slt (rtx operand0)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[1];
    operands[0] = operand0;
#line 13431 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
if (ix86_expand_setcc (LT, operands[0])) DONE; else FAIL;
    operand0 = operands[0];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_LT (QImode,
	gen_rtx_REG (CCmode,
	17),
	const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:13433 */
rtx
gen_sltu (rtx operand0)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[1];
    operands[0] = operand0;
#line 13437 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
if (ix86_expand_setcc (LTU, operands[0])) DONE; else FAIL;
    operand0 = operands[0];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_LTU (QImode,
	gen_rtx_REG (CCmode,
	17),
	const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:13439 */
rtx
gen_sge (rtx operand0)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[1];
    operands[0] = operand0;
#line 13443 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
if (ix86_expand_setcc (GE, operands[0])) DONE; else FAIL;
    operand0 = operands[0];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_GE (QImode,
	gen_rtx_REG (CCmode,
	17),
	const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:13445 */
rtx
gen_sgeu (rtx operand0)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[1];
    operands[0] = operand0;
#line 13449 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
if (ix86_expand_setcc (GEU, operands[0])) DONE; else FAIL;
    operand0 = operands[0];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_GEU (QImode,
	gen_rtx_REG (CCmode,
	17),
	const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:13451 */
rtx
gen_sle (rtx operand0)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[1];
    operands[0] = operand0;
#line 13455 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
if (ix86_expand_setcc (LE, operands[0])) DONE; else FAIL;
    operand0 = operands[0];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_LE (QImode,
	gen_rtx_REG (CCmode,
	17),
	const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:13457 */
rtx
gen_sleu (rtx operand0)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[1];
    operands[0] = operand0;
#line 13461 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
if (ix86_expand_setcc (LEU, operands[0])) DONE; else FAIL;
    operand0 = operands[0];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_LEU (QImode,
	gen_rtx_REG (CCmode,
	17),
	const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:13463 */
rtx
gen_sunordered (rtx operand0)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[1];
    operands[0] = operand0;
#line 13467 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
if (ix86_expand_setcc (UNORDERED, operands[0])) DONE; else FAIL;
    operand0 = operands[0];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNORDERED (QImode,
	gen_rtx_REG (CCmode,
	17),
	const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:13469 */
rtx
gen_sordered (rtx operand0)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[1];
    operands[0] = operand0;
#line 13473 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
if (ix86_expand_setcc (ORDERED, operands[0])) DONE; else FAIL;
    operand0 = operands[0];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ORDERED (QImode,
	gen_rtx_REG (CCmode,
	17),
	const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:13475 */
rtx
gen_suneq (rtx operand0)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[1];
    operands[0] = operand0;
#line 13479 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
if (ix86_expand_setcc (UNEQ, operands[0])) DONE; else FAIL;
    operand0 = operands[0];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNEQ (QImode,
	gen_rtx_REG (CCmode,
	17),
	const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:13481 */
rtx
gen_sunge (rtx operand0)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[1];
    operands[0] = operand0;
#line 13485 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
if (ix86_expand_setcc (UNGE, operands[0])) DONE; else FAIL;
    operand0 = operands[0];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNGE (QImode,
	gen_rtx_REG (CCmode,
	17),
	const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:13487 */
rtx
gen_sungt (rtx operand0)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[1];
    operands[0] = operand0;
#line 13491 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
if (ix86_expand_setcc (UNGT, operands[0])) DONE; else FAIL;
    operand0 = operands[0];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNGT (QImode,
	gen_rtx_REG (CCmode,
	17),
	const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:13493 */
rtx
gen_sunle (rtx operand0)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[1];
    operands[0] = operand0;
#line 13497 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
if (ix86_expand_setcc (UNLE, operands[0])) DONE; else FAIL;
    operand0 = operands[0];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNLE (QImode,
	gen_rtx_REG (CCmode,
	17),
	const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:13499 */
rtx
gen_sunlt (rtx operand0)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[1];
    operands[0] = operand0;
#line 13503 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
if (ix86_expand_setcc (UNLT, operands[0])) DONE; else FAIL;
    operand0 = operands[0];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNLT (QImode,
	gen_rtx_REG (CCmode,
	17),
	const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:13505 */
rtx
gen_sltgt (rtx operand0)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[1];
    operands[0] = operand0;
#line 13509 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
if (ix86_expand_setcc (LTGT, operands[0])) DONE; else FAIL;
    operand0 = operands[0];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_LTGT (QImode,
	gen_rtx_REG (CCmode,
	17),
	const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:13537 */
extern rtx gen_split_1633 (rtx, rtx *);
rtx
gen_split_1633 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
#line 13544 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
{
  PUT_MODE (operands[1], QImode);
}
  operand0 = operands[0];
  operand1 = operands[1];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:13548 */
extern rtx gen_split_1634 (rtx, rtx *);
rtx
gen_split_1634 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
#line 13555 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
{
  PUT_MODE (operands[1], QImode);
}
  operand0 = operands[0];
  operand1 = operands[1];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:13559 */
extern rtx gen_split_1635 (rtx, rtx *);
rtx
gen_split_1635 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
#line 13566 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
{
  rtx new_op1 = copy_rtx (operands[1]);
  operands[1] = new_op1;
  PUT_MODE (new_op1, QImode);
  PUT_CODE (new_op1, ix86_reverse_condition (GET_CODE (new_op1),
					     GET_MODE (XEXP (new_op1, 0))));

  /* Make sure that (a) the CCmode we have for the flags is strong
     enough for the reversed compare or (b) we have a valid FP compare.  */
  if (! ix86_comparison_operator (new_op1, VOIDmode))
    FAIL;
}
  operand0 = operands[0];
  operand1 = operands[1];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:13579 */
extern rtx gen_split_1636 (rtx, rtx *);
rtx
gen_split_1636 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
#line 13586 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
{
  rtx new_op1 = copy_rtx (operands[1]);
  operands[1] = new_op1;
  PUT_MODE (new_op1, QImode);
  PUT_CODE (new_op1, ix86_reverse_condition (GET_CODE (new_op1),
					     GET_MODE (XEXP (new_op1, 0))));

  /* Make sure that (a) the CCmode we have for the flags is strong
     enough for the reversed compare or (b) we have a valid FP compare.  */
  if (! ix86_comparison_operator (new_op1, VOIDmode))
    FAIL;
}
  operand0 = operands[0];
  operand1 = operands[1];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:13632 */
rtx
gen_beq (rtx operand0)
{
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
#line 13638 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
ix86_expand_branch (EQ, operands[0]); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	operand1,
	gen_rtx_LABEL_REF (VOIDmode,
	operand0),
	pc_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:13640 */
rtx
gen_bne (rtx operand0)
{
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
#line 13646 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
ix86_expand_branch (NE, operands[0]); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	operand1,
	gen_rtx_LABEL_REF (VOIDmode,
	operand0),
	pc_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:13648 */
rtx
gen_bgt (rtx operand0)
{
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
#line 13654 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
ix86_expand_branch (GT, operands[0]); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	operand1,
	gen_rtx_LABEL_REF (VOIDmode,
	operand0),
	pc_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:13656 */
rtx
gen_bgtu (rtx operand0)
{
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
#line 13662 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
ix86_expand_branch (GTU, operands[0]); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	operand1,
	gen_rtx_LABEL_REF (VOIDmode,
	operand0),
	pc_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:13664 */
rtx
gen_blt (rtx operand0)
{
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
#line 13670 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
ix86_expand_branch (LT, operands[0]); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	operand1,
	gen_rtx_LABEL_REF (VOIDmode,
	operand0),
	pc_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:13672 */
rtx
gen_bltu (rtx operand0)
{
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
#line 13678 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
ix86_expand_branch (LTU, operands[0]); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	operand1,
	gen_rtx_LABEL_REF (VOIDmode,
	operand0),
	pc_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:13680 */
rtx
gen_bge (rtx operand0)
{
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
#line 13686 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
ix86_expand_branch (GE, operands[0]); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	operand1,
	gen_rtx_LABEL_REF (VOIDmode,
	operand0),
	pc_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:13688 */
rtx
gen_bgeu (rtx operand0)
{
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
#line 13694 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
ix86_expand_branch (GEU, operands[0]); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	operand1,
	gen_rtx_LABEL_REF (VOIDmode,
	operand0),
	pc_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:13696 */
rtx
gen_ble (rtx operand0)
{
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
#line 13702 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
ix86_expand_branch (LE, operands[0]); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	operand1,
	gen_rtx_LABEL_REF (VOIDmode,
	operand0),
	pc_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:13704 */
rtx
gen_bleu (rtx operand0)
{
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
#line 13710 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
ix86_expand_branch (LEU, operands[0]); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	operand1,
	gen_rtx_LABEL_REF (VOIDmode,
	operand0),
	pc_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:13712 */
rtx
gen_bunordered (rtx operand0)
{
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
#line 13718 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
ix86_expand_branch (UNORDERED, operands[0]); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	operand1,
	gen_rtx_LABEL_REF (VOIDmode,
	operand0),
	pc_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:13720 */
rtx
gen_bordered (rtx operand0)
{
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
#line 13726 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
ix86_expand_branch (ORDERED, operands[0]); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	operand1,
	gen_rtx_LABEL_REF (VOIDmode,
	operand0),
	pc_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:13728 */
rtx
gen_buneq (rtx operand0)
{
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
#line 13734 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
ix86_expand_branch (UNEQ, operands[0]); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	operand1,
	gen_rtx_LABEL_REF (VOIDmode,
	operand0),
	pc_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:13736 */
rtx
gen_bunge (rtx operand0)
{
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
#line 13742 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
ix86_expand_branch (UNGE, operands[0]); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	operand1,
	gen_rtx_LABEL_REF (VOIDmode,
	operand0),
	pc_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:13744 */
rtx
gen_bungt (rtx operand0)
{
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
#line 13750 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
ix86_expand_branch (UNGT, operands[0]); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	operand1,
	gen_rtx_LABEL_REF (VOIDmode,
	operand0),
	pc_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:13752 */
rtx
gen_bunle (rtx operand0)
{
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
#line 13758 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
ix86_expand_branch (UNLE, operands[0]); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	operand1,
	gen_rtx_LABEL_REF (VOIDmode,
	operand0),
	pc_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:13760 */
rtx
gen_bunlt (rtx operand0)
{
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
#line 13766 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
ix86_expand_branch (UNLT, operands[0]); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	operand1,
	gen_rtx_LABEL_REF (VOIDmode,
	operand0),
	pc_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:13768 */
rtx
gen_bltgt (rtx operand0)
{
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
#line 13774 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
ix86_expand_branch (LTGT, operands[0]); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	operand1,
	gen_rtx_LABEL_REF (VOIDmode,
	operand0),
	pc_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:13820 */
extern rtx gen_split_1655 (rtx, rtx *);
rtx
gen_split_1655 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
#line 13832 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
{
  PUT_MODE (operands[0], VOIDmode);
}
  operand0 = operands[0];
  operand1 = operands[1];
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	operand0,
	gen_rtx_LABEL_REF (VOIDmode,
	operand1),
	pc_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:13836 */
extern rtx gen_split_1656 (rtx, rtx *);
rtx
gen_split_1656 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
#line 13848 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
{
  rtx new_op0 = copy_rtx (operands[0]);
  operands[0] = new_op0;
  PUT_MODE (new_op0, VOIDmode);
  PUT_CODE (new_op0, ix86_reverse_condition (GET_CODE (new_op0),
					     GET_MODE (XEXP (new_op0, 0))));

  /* Make sure that (a) the CCmode we have for the flags is strong
     enough for the reversed compare or (b) we have a valid FP compare.  */
  if (! ix86_comparison_operator (new_op0, VOIDmode))
    FAIL;
}
  operand0 = operands[0];
  operand1 = operands[1];
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	operand0,
	gen_rtx_LABEL_REF (VOIDmode,
	operand1),
	pc_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:14068 */
extern rtx gen_split_1657 (rtx, rtx *);
rtx
gen_split_1657 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 14079 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
{
  ix86_split_fp_branch (GET_CODE (operands[0]), operands[1], operands[2],
	                operands[3], operands[4], NULL_RTX, NULL_RTX);
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:14085 */
extern rtx gen_split_1658 (rtx, rtx *);
rtx
gen_split_1658 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 14097 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
{
  ix86_split_fp_branch (GET_CODE (operands[0]), operands[1], operands[2],
	     		operands[3], operands[4], operands[5], NULL_RTX);
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:14103 */
extern rtx gen_split_1659 (rtx, rtx *);
rtx
gen_split_1659 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 14116 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
{
  operands[7] = gen_rtx_FLOAT (GET_MODE (operands[1]), operands[2]);
  ix86_split_fp_branch (swap_condition (GET_CODE (operands[0])),
			operands[3], operands[7],
			operands[4], operands[5], operands[6], NULL_RTX);
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:14103 */
extern rtx gen_split_1660 (rtx, rtx *);
rtx
gen_split_1660 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 14116 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
{
  operands[7] = gen_rtx_FLOAT (GET_MODE (operands[1]), operands[2]);
  ix86_split_fp_branch (swap_condition (GET_CODE (operands[0])),
			operands[3], operands[7],
			operands[4], operands[5], operands[6], NULL_RTX);
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:14125 */
extern rtx gen_split_1661 (rtx, rtx *);
rtx
gen_split_1661 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 14138 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
{
  operands[7] = ix86_force_to_memory (GET_MODE (operands[2]), operands[2]);
  operands[7] = gen_rtx_FLOAT (GET_MODE (operands[1]), operands[7]);
  ix86_split_fp_branch (swap_condition (GET_CODE (operands[0])),
			operands[3], operands[7],
			operands[4], operands[5], operands[6], operands[2]);
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:14125 */
extern rtx gen_split_1662 (rtx, rtx *);
rtx
gen_split_1662 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 14138 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
{
  operands[7] = ix86_force_to_memory (GET_MODE (operands[2]), operands[2]);
  operands[7] = gen_rtx_FLOAT (GET_MODE (operands[1]), operands[7]);
  ix86_split_fp_branch (swap_condition (GET_CODE (operands[0])),
			operands[3], operands[7],
			operands[4], operands[5], operands[6], operands[2]);
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:14164 */
rtx
gen_indirect_jump (rtx operand0)
{
  return gen_rtx_SET (VOIDmode,
	pc_rtx,
	operand0);
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:14183 */
rtx
gen_tablejump (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 14187 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
{
  /* In PIC mode, the table entries are stored GOT (32-bit) or PC (64-bit)
     relative.  Convert the relative address to an absolute address.  */
  if (flag_pic)
    {
      rtx op0, op1;
      enum rtx_code code;

      if (TARGET_64BIT)
	{
	  code = PLUS;
	  op0 = operands[0];
	  op1 = gen_rtx_LABEL_REF (Pmode, operands[1]);
	}
      else if (TARGET_MACHO || HAVE_AS_GOTOFF_IN_DATA)
	{
	  code = PLUS;
	  op0 = operands[0];
	  op1 = pic_offset_table_rtx;
	}
      else
	{
	  code = MINUS;
	  op0 = pic_offset_table_rtx;
	  op1 = operands[0];
	}

      operands[0] = expand_simple_binop (Pmode, code, op0, op1, NULL_RTX, 0,
					 OPTAB_DIRECT);
    }
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_jump_insn (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	pc_rtx,
	operand0),
		gen_rtx_USE (VOIDmode,
	gen_rtx_LABEL_REF (VOIDmode,
	operand1)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:14237 */
extern rtx gen_peephole2_1665 (rtx, rtx *);
rtx
gen_peephole2_1665 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  start_sequence ();
#line 14250 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
{
  operands[4] = gen_rtx_REG (GET_MODE (operands[0]), FLAGS_REG);
  operands[5] = gen_lowpart (QImode, operands[3]);
  ix86_expand_clear (operands[3]);
}
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand4,
	operand0));
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_STRICT_LOW_PART (VOIDmode,
	operand5),
	operand2));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:14258 */
extern rtx gen_peephole2_1666 (rtx, rtx *);
rtx
gen_peephole2_1666 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  start_sequence ();
#line 14272 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
{
  operands[4] = gen_rtx_REG (GET_MODE (operands[0]), FLAGS_REG);
  operands[5] = gen_lowpart (QImode, operands[3]);
  ix86_expand_clear (operands[3]);
}
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand4,
	operand0));
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_STRICT_LOW_PART (VOIDmode,
	operand5),
	operand2));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:14286 */
rtx
gen_call_pop (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#line 14293 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
{
  ix86_expand_call (NULL, operands[0], operands[1], operands[2], operands[3], 0);
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
  }
  emit_call_insn (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_CALL (VOIDmode,
	operand0,
	operand1),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (SImode,
	7),
	gen_rtx_PLUS (SImode,
	gen_rtx_REG (SImode,
	7),
	operand3)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:14333 */
rtx
gen_call (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 14338 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
{
  ix86_expand_call (NULL, operands[0], operands[1], operands[2], NULL, 0);
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_call_insn (gen_rtx_CALL (VOIDmode,
	operand0,
	operand1));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand2));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:14343 */
rtx
gen_sibcall (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 14348 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
{
  ix86_expand_call (NULL, operands[0], operands[1], operands[2], NULL, 1);
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_call_insn (gen_rtx_CALL (VOIDmode,
	operand0,
	operand1));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand2));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:14415 */
rtx
gen_call_value_pop (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3,
	rtx operand4)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[5];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
    operands[4] = operand4;
#line 14423 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
{
  ix86_expand_call (operands[0], operands[1], operands[2],
		    operands[3], operands[4], 0);
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
    operand4 = operands[4];
  }
  emit_call_insn (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_CALL (VOIDmode,
	operand1,
	operand2)),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (SImode,
	7),
	gen_rtx_PLUS (SImode,
	gen_rtx_REG (SImode,
	7),
	operand4)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:14429 */
rtx
gen_call_value (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#line 14436 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
{
  ix86_expand_call (operands[0], operands[1], operands[2], operands[3], NULL, 0);
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
  }
  emit_call_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_CALL (VOIDmode,
	operand1,
	operand2)));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand3));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:14441 */
rtx
gen_sibcall_value (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#line 14448 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
{
  ix86_expand_call (operands[0], operands[1], operands[2], operands[3], NULL, 1);
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
  }
  emit_call_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_CALL (VOIDmode,
	operand1,
	operand2)));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand3));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:14455 */
rtx
gen_untyped_call (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 14461 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
{
  int i;

  /* In order to give reg-stack an easier job in validating two
     coprocessor registers as containing a possible return value,
     simply pretend the untyped call returns a complex long double
     value.  */

  ix86_expand_call ((TARGET_FLOAT_RETURNS_IN_80387
		     ? gen_rtx_REG (XCmode, FIRST_FLOAT_REG) : NULL),
		    operands[0], const0_rtx, GEN_INT (SSE_REGPARM_MAX - 1),
		    NULL, 0);

  for (i = 0; i < XVECLEN (operands[2], 0); i++)
    {
      rtx set = XVECEXP (operands[2], 0, i);
      emit_move_insn (SET_DEST (set), SET_SRC (set));
    }

  /* The optimizer does not know that the call sets the function value
     registers we stored in the result block.  We avoid problems by
     claiming that all hard registers are used and clobbered at this
     point.  */
  emit_insn (gen_blockage (const0_rtx));

  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_call_insn (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_CALL (VOIDmode,
	operand0,
	const0_rtx),
		operand1,
		operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:14504 */
rtx
gen_return (void)
{
  rtx _val = 0;
  start_sequence ();
  {
#line 14507 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
{
  if (current_function_pops_args)
    {
      rtx popc = GEN_INT (current_function_pops_args);
      emit_jump_insn (gen_return_pop_internal (popc));
      DONE;
    }
}
  }
  emit_jump_insn (gen_rtx_RETURN (VOIDmode));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:14582 */
rtx
gen_prologue (void)
{
  rtx _val = 0;
  start_sequence ();
  {
#line 14585 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
ix86_expand_prologue (); DONE;
  }
  emit_insn (const1_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:14614 */
rtx
gen_epilogue (void)
{
  rtx _val = 0;
  start_sequence ();
  {
#line 14617 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
ix86_expand_epilogue (1); DONE;
  }
  emit_insn (const1_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:14619 */
rtx
gen_sibcall_epilogue (void)
{
  rtx _val = 0;
  start_sequence ();
  {
#line 14622 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
ix86_expand_epilogue (0); DONE;
  }
  emit_insn (const1_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:14624 */
rtx
gen_eh_return (rtx operand0)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[1];
    operands[0] = operand0;
#line 14627 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
{
  rtx tmp, sa = EH_RETURN_STACKADJ_RTX, ra = operands[0];

  /* Tricky bit: we write the address of the handler to which we will
     be returning into someone else's stack frame, one word below the
     stack address we wish to restore.  */
  tmp = gen_rtx_PLUS (Pmode, arg_pointer_rtx, sa);
  tmp = plus_constant (tmp, -UNITS_PER_WORD);
  tmp = gen_rtx_MEM (Pmode, tmp);
  emit_move_insn (tmp, ra);

  if (Pmode == SImode)
    emit_jump_insn (gen_eh_return_si (sa));
  else
    emit_jump_insn (gen_eh_return_di (sa));
  emit_barrier ();
  DONE;
}
    operand0 = operands[0];
  }
  emit_insn (gen_rtx_USE (VOIDmode,
	operand0));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:14646 */
extern rtx gen_split_1679 (rtx, rtx *);
rtx
gen_split_1679 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 14654 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
ix86_expand_epilogue (2); DONE;
  emit_insn (const1_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:14656 */
extern rtx gen_split_1680 (rtx, rtx *);
rtx
gen_split_1680 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 14664 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
ix86_expand_epilogue (2); DONE;
  emit_insn (const1_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:14682 */
rtx
gen_ffssi2 (rtx operand0,
	rtx operand1)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FFS (SImode,
	operand1)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:14691 */
extern rtx gen_split_1682 (rtx, rtx *);
rtx
gen_split_1682 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
#line 14708 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	constm1_rtx));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCZmode,
	17),
	gen_rtx_COMPARE (CCZmode,
	operand1,
	const0_rtx)),
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_CTZ (SImode,
	copy_rtx (operand1))))));
  emit_insn (gen_rtx_SET (VOIDmode,
	copy_rtx (operand0),
	gen_rtx_IF_THEN_ELSE (SImode,
	gen_rtx_EQ (VOIDmode,
	gen_rtx_REG (CCZmode,
	17),
	const0_rtx),
	copy_rtx (operand2),
	copy_rtx (operand0))));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	copy_rtx (operand0),
	gen_rtx_PLUS (SImode,
	copy_rtx (operand0),
	const1_rtx)),
		gen_hard_reg_clobber (CCmode, 17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:14710 */
extern rtx gen_split_1683 (rtx, rtx *);
rtx
gen_split_1683 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
#line 14728 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
{
  operands[3] = gen_lowpart (QImode, operands[2]);
  ix86_expand_clear (operands[2]);
}
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCZmode,
	17),
	gen_rtx_COMPARE (CCZmode,
	operand1,
	const0_rtx)),
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_CTZ (SImode,
	copy_rtx (operand1))))));
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_STRICT_LOW_PART (VOIDmode,
	operand3),
	gen_rtx_EQ (QImode,
	gen_rtx_REG (CCZmode,
	17),
	const0_rtx)));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_NEG (SImode,
	copy_rtx (operand2))),
		gen_hard_reg_clobber (CCmode, 17))));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	copy_rtx (operand0),
	gen_rtx_IOR (SImode,
	copy_rtx (operand0),
	copy_rtx (operand2))),
		gen_hard_reg_clobber (CCmode, 17))));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	copy_rtx (operand0),
	gen_rtx_PLUS (SImode,
	copy_rtx (operand0),
	const1_rtx)),
		gen_hard_reg_clobber (CCmode, 17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:14743 */
rtx
gen_ffsdi2 (rtx operand0,
	rtx operand1)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FFS (DImode,
	operand1)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (DImode)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:14752 */
extern rtx gen_split_1685 (rtx, rtx *);
rtx
gen_split_1685 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
#line 14770 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	constm1_rtx));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCZmode,
	17),
	gen_rtx_COMPARE (CCZmode,
	operand1,
	const0_rtx)),
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_CTZ (DImode,
	copy_rtx (operand1))))));
  emit_insn (gen_rtx_SET (VOIDmode,
	copy_rtx (operand0),
	gen_rtx_IF_THEN_ELSE (DImode,
	gen_rtx_EQ (VOIDmode,
	gen_rtx_REG (CCZmode,
	17),
	const0_rtx),
	copy_rtx (operand2),
	copy_rtx (operand0))));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	copy_rtx (operand0),
	gen_rtx_PLUS (DImode,
	copy_rtx (operand0),
	const1_rtx)),
		gen_hard_reg_clobber (CCmode, 17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:14798 */
rtx
gen_clzsi2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (SImode,
	const_int_rtx[MAX_SAVED_CONST_INT + (31)],
	gen_rtx_CLZ (SImode,
	operand1))),
		gen_hard_reg_clobber (CCmode, 17))));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_XOR (SImode,
	operand0,
	const_int_rtx[MAX_SAVED_CONST_INT + (31)])),
		gen_hard_reg_clobber (CCmode, 17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:14838 */
rtx
gen_clzdi2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (DImode,
	const_int_rtx[MAX_SAVED_CONST_INT + (63)],
	gen_rtx_CLZ (DImode,
	operand1))),
		gen_hard_reg_clobber (CCmode, 17))));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_XOR (DImode,
	operand0,
	const_int_rtx[MAX_SAVED_CONST_INT + (63)])),
		gen_hard_reg_clobber (CCmode, 17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:14893 */
rtx
gen_tls_global_dynamic_32 (rtx operand0,
	rtx operand1)
{
  rtx operand2;
  rtx operand3;
  rtx operand4 ATTRIBUTE_UNUSED;
  rtx operand5 ATTRIBUTE_UNUSED;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[6];
    operands[0] = operand0;
    operands[1] = operand1;
#line 14904 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
{
  if (flag_pic)
    operands[2] = pic_offset_table_rtx;
  else
    {
      operands[2] = gen_reg_rtx (Pmode);
      emit_insn (gen_set_got (operands[2]));
    }
  if (TARGET_GNU2_TLS)
    {
       emit_insn (gen_tls_dynamic_gnu2_32
		  (operands[0], operands[1], operands[2]));
       DONE;
    }
  operands[3] = ix86_tls_get_addr ();
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
    operand4 = operands[4];
    operand5 = operands[5];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (3,
		operand2,
		operand1,
		operand3),
	17)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode)),
		gen_hard_reg_clobber (CCmode, 17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:14932 */
rtx
gen_tls_global_dynamic_64 (rtx operand0,
	rtx operand1)
{
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
#line 14938 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
{
  if (TARGET_GNU2_TLS)
    {
       emit_insn (gen_tls_dynamic_gnu2_64
		  (operands[0], operands[1]));
       DONE;
    }
  operands[2] = ix86_tls_get_addr ();
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_call_insn (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_CALL (DImode,
	gen_rtx_MEM (QImode,
	operand2),
	const0_rtx)),
		gen_rtx_UNSPEC (DImode,
	gen_rtvec (1,
		operand1),
	17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:14975 */
rtx
gen_tls_local_dynamic_base_32 (rtx operand0)
{
  rtx operand1;
  rtx operand2;
  rtx operand3 ATTRIBUTE_UNUSED;
  rtx operand4 ATTRIBUTE_UNUSED;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[5];
    operands[0] = operand0;
#line 14983 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
{
  if (flag_pic)
    operands[1] = pic_offset_table_rtx;
  else
    {
      operands[1] = gen_reg_rtx (Pmode);
      emit_insn (gen_set_got (operands[1]));
    }
  if (TARGET_GNU2_TLS)
    {
       emit_insn (gen_tls_dynamic_gnu2_32
		  (operands[0], ix86_tls_module_base (), operands[1]));
       DONE;
    }
  operands[2] = ix86_tls_get_addr ();
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
    operand4 = operands[4];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (2,
		operand1,
		operand2),
	18)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode)),
		gen_hard_reg_clobber (CCmode, 17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:15010 */
rtx
gen_tls_local_dynamic_base_64 (rtx operand0)
{
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
#line 15015 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
{
  if (TARGET_GNU2_TLS)
    {
       emit_insn (gen_tls_dynamic_gnu2_64
		  (operands[0], ix86_tls_module_base ()));
       DONE;
    }
  operands[1] = ix86_tls_get_addr ();
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_call_insn (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_CALL (DImode,
	gen_rtx_MEM (QImode,
	operand1),
	const0_rtx)),
		gen_rtx_UNSPEC (DImode,
	gen_rtvec (1,
		const0_rtx),
	18))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:15028 */
extern rtx gen_split_1692 (rtx, rtx *);
rtx
gen_split_1692 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx _val = 0;
  start_sequence ();
#line 15048 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (3,
		operand1,
		operand3,
		operand2),
	17)),
		gen_rtx_CLOBBER (VOIDmode,
	operand4),
		gen_rtx_CLOBBER (VOIDmode,
	operand5),
		gen_hard_reg_clobber (CCmode, 17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:15102 */
rtx
gen_tls_dynamic_gnu2_32 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 15115 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
{
  operands[3] = no_new_pseudos ? operands[0] : gen_reg_rtx (Pmode);
  ix86_tls_descriptor_calls_expanded_in_cfun = true;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_PLUS (SImode,
	operand2,
	gen_rtx_CONST (SImode,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		operand1),
	19)))));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (4,
		operand1,
		operand3,
		operand2,
		gen_rtx_REG (SImode,
	7)),
	19)),
		gen_hard_reg_clobber (CCmode, 17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:15148 */
extern rtx gen_split_1694 (rtx, rtx *);
rtx
gen_split_1694 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx _val = 0;
  start_sequence ();
#line 15164 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
{
  operands[5] = no_new_pseudos ? operands[0] : gen_reg_rtx (Pmode);
  emit_insn (gen_tls_dynamic_gnu2_32 (operands[5], operands[1], operands[2]));
}
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand5));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:15169 */
rtx
gen_tls_dynamic_gnu2_64 (rtx operand0,
	rtx operand1)
{
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
#line 15179 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
{
  operands[2] = no_new_pseudos ? operands[0] : gen_reg_rtx (Pmode);
  ix86_tls_descriptor_calls_expanded_in_cfun = true;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (1,
		operand1),
	19)));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (3,
		operand1,
		operand2,
		gen_rtx_REG (DImode,
	7)),
	19)),
		gen_hard_reg_clobber (CCmode, 17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:15208 */
extern rtx gen_split_1696 (rtx, rtx *);
rtx
gen_split_1696 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx _val = 0;
  start_sequence ();
#line 15223 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
{
  operands[4] = no_new_pseudos ? operands[0] : gen_reg_rtx (Pmode);
  emit_insn (gen_tls_dynamic_gnu2_64 (operands[4], operands[1]));
}
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand4));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:15711 */
extern rtx gen_split_1697 (rtx, rtx *);
rtx
gen_split_1697 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 15719 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
{ 
  operands[4] = ix86_force_to_memory (GET_MODE (operands[1]), operands[1]);
  operands[4] = gen_rtx_FLOAT (GET_MODE (operands[0]), operands[4]);
  emit_insn (gen_rtx_SET (VOIDmode, operands[0],
			  gen_rtx_fmt_ee (GET_CODE (operands[3]),
					  GET_MODE (operands[3]),
					  operands[4],
					  operands[2])));
  ix86_free_from_memory (GET_MODE (operands[1]));
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:15711 */
extern rtx gen_split_1698 (rtx, rtx *);
rtx
gen_split_1698 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 15719 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
{ 
  operands[4] = ix86_force_to_memory (GET_MODE (operands[1]), operands[1]);
  operands[4] = gen_rtx_FLOAT (GET_MODE (operands[0]), operands[4]);
  emit_insn (gen_rtx_SET (VOIDmode, operands[0],
			  gen_rtx_fmt_ee (GET_CODE (operands[3]),
					  GET_MODE (operands[3]),
					  operands[4],
					  operands[2])));
  ix86_free_from_memory (GET_MODE (operands[1]));
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:15731 */
extern rtx gen_split_1699 (rtx, rtx *);
rtx
gen_split_1699 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 15739 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
{
  operands[4] = ix86_force_to_memory (GET_MODE (operands[2]), operands[2]);
  operands[4] = gen_rtx_FLOAT (GET_MODE (operands[0]), operands[4]);
  emit_insn (gen_rtx_SET (VOIDmode, operands[0],
			  gen_rtx_fmt_ee (GET_CODE (operands[3]),
					  GET_MODE (operands[3]),
					  operands[1],
					  operands[4])));
  ix86_free_from_memory (GET_MODE (operands[2]));
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:15731 */
extern rtx gen_split_1700 (rtx, rtx *);
rtx
gen_split_1700 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 15739 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
{
  operands[4] = ix86_force_to_memory (GET_MODE (operands[2]), operands[2]);
  operands[4] = gen_rtx_FLOAT (GET_MODE (operands[0]), operands[4]);
  emit_insn (gen_rtx_SET (VOIDmode, operands[0],
			  gen_rtx_fmt_ee (GET_CODE (operands[3]),
					  GET_MODE (operands[3]),
					  operands[1],
					  operands[4])));
  ix86_free_from_memory (GET_MODE (operands[2]));
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:15753 */
rtx
gen_sqrtsf2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 15757 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
{
  if (!TARGET_SSE_MATH)
    operands[1] = force_reg (SFmode, operands[1]);
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SQRT (SFmode,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:15791 */
rtx
gen_sqrtdf2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 15795 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
{
  if (!(TARGET_SSE2 && TARGET_SSE_MATH))
    operands[1] = force_reg (DFmode, operands[1]);
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SQRT (DFmode,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:15889 */
rtx
gen_fmodsf3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 15896 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
{
  rtx label = gen_label_rtx ();

  rtx op1 = gen_reg_rtx (XFmode);
  rtx op2 = gen_reg_rtx (XFmode);

  emit_insn(gen_extendsfxf2 (op1, operands[1]));
  emit_insn(gen_extendsfxf2 (op2, operands[2]));

  emit_label (label);

  emit_insn (gen_fpremxf4 (op1, op2, op1, op2));
  ix86_emit_fp_unordered_jump (label);

  emit_insn (gen_truncxfsf2_i387_noop (operands[0], op1));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_USE (VOIDmode,
	operand0));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand1));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand2));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:15914 */
rtx
gen_fmoddf3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 15921 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
{
  rtx label = gen_label_rtx ();

  rtx op1 = gen_reg_rtx (XFmode);
  rtx op2 = gen_reg_rtx (XFmode);

  emit_insn (gen_extenddfxf2 (op1, operands[1]));
  emit_insn (gen_extenddfxf2 (op2, operands[2]));

  emit_label (label);

  emit_insn (gen_fpremxf4 (op1, op2, op1, op2));
  ix86_emit_fp_unordered_jump (label);

  emit_insn (gen_truncxfdf2_i387_noop (operands[0], op1));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_USE (VOIDmode,
	operand0));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand1));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand2));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:15939 */
rtx
gen_fmodxf3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 15945 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
{
  rtx label = gen_label_rtx ();

  emit_label (label);

  emit_insn (gen_fpremxf4 (operands[1], operands[2],
			   operands[1], operands[2]));
  ix86_emit_fp_unordered_jump (label);

  emit_move_insn (operands[0], operands[1]);
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_USE (VOIDmode,
	operand0));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand1));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand2));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:15974 */
rtx
gen_dremsf3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 15981 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
{
  rtx label = gen_label_rtx ();

  rtx op1 = gen_reg_rtx (XFmode);
  rtx op2 = gen_reg_rtx (XFmode);

  emit_insn(gen_extendsfxf2 (op1, operands[1]));
  emit_insn(gen_extendsfxf2 (op2, operands[2]));

  emit_label (label);

  emit_insn (gen_fprem1xf4 (op1, op2, op1, op2));
  ix86_emit_fp_unordered_jump (label);

  emit_insn (gen_truncxfsf2_i387_noop (operands[0], op1));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_USE (VOIDmode,
	operand0));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand1));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand2));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:15999 */
rtx
gen_dremdf3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 16006 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
{
  rtx label = gen_label_rtx ();

  rtx op1 = gen_reg_rtx (XFmode);
  rtx op2 = gen_reg_rtx (XFmode);

  emit_insn (gen_extenddfxf2 (op1, operands[1]));
  emit_insn (gen_extenddfxf2 (op2, operands[2]));

  emit_label (label);

  emit_insn (gen_fprem1xf4 (op1, op2, op1, op2));
  ix86_emit_fp_unordered_jump (label);

  emit_insn (gen_truncxfdf2_i387_noop (operands[0], op1));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_USE (VOIDmode,
	operand0));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand1));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand2));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:16024 */
rtx
gen_dremxf3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 16030 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
{
  rtx label = gen_label_rtx ();

  emit_label (label);

  emit_insn (gen_fprem1xf4 (operands[1], operands[2],
			    operands[1], operands[2]));
  ix86_emit_fp_unordered_jump (label);

  emit_move_insn (operands[0], operands[1]);
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_USE (VOIDmode,
	operand0));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand1));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand2));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:16144 */
extern rtx gen_split_1709 (rtx, rtx *);
rtx
gen_split_1709 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
#line 16153 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand1,
	gen_rtx_UNSPEC (DFmode,
	gen_rtvec (1,
		operand2),
	60)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:16155 */
extern rtx gen_split_1710 (rtx, rtx *);
rtx
gen_split_1710 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
#line 16164 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (DFmode,
	gen_rtvec (1,
		operand2),
	61)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:16179 */
extern rtx gen_split_1711 (rtx, rtx *);
rtx
gen_split_1711 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
#line 16188 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand1,
	gen_rtx_UNSPEC (SFmode,
	gen_rtvec (1,
		operand2),
	60)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:16190 */
extern rtx gen_split_1712 (rtx, rtx *);
rtx
gen_split_1712 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
#line 16199 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SFmode,
	gen_rtvec (1,
		operand2),
	61)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:16216 */
extern rtx gen_split_1713 (rtx, rtx *);
rtx
gen_split_1713 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
#line 16228 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand1,
	gen_rtx_UNSPEC (DFmode,
	gen_rtvec (1,
		gen_rtx_FLOAT_EXTEND (DFmode,
	operand2)),
	60)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:16230 */
extern rtx gen_split_1714 (rtx, rtx *);
rtx
gen_split_1714 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
#line 16242 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (DFmode,
	gen_rtvec (1,
		gen_rtx_FLOAT_EXTEND (DFmode,
	operand2)),
	61)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:16256 */
extern rtx gen_split_1715 (rtx, rtx *);
rtx
gen_split_1715 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
#line 16265 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand1,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (1,
		operand2),
	60)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:16267 */
extern rtx gen_split_1716 (rtx, rtx *);
rtx
gen_split_1716 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
#line 16276 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (1,
		operand2),
	61)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:16296 */
extern rtx gen_peephole2_1717 (rtx, rtx *);
rtx
gen_peephole2_1717 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  start_sequence ();
#line 16307 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (DFmode,
	gen_rtvec (1,
		operand2),
	82)),
		gen_rtx_SET (VOIDmode,
	operand1,
	gen_rtx_UNSPEC (DFmode,
	gen_rtvec (1,
		copy_rtx (operand2)),
	83)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:16309 */
rtx
gen_tandf2 (rtx operand0,
	rtx operand1)
{
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
#line 16318 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
{
  operands[2] = gen_reg_rtx (DFmode);
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_UNSPEC (DFmode,
	gen_rtvec (1,
		operand1),
	82)),
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (DFmode,
	gen_rtvec (1,
		operand1),
	83)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:16340 */
extern rtx gen_peephole2_1719 (rtx, rtx *);
rtx
gen_peephole2_1719 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  start_sequence ();
#line 16351 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SFmode,
	gen_rtvec (1,
		operand2),
	82)),
		gen_rtx_SET (VOIDmode,
	operand1,
	gen_rtx_UNSPEC (SFmode,
	gen_rtvec (1,
		copy_rtx (operand2)),
	83)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:16353 */
rtx
gen_tansf2 (rtx operand0,
	rtx operand1)
{
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
#line 16362 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
{
  operands[2] = gen_reg_rtx (SFmode);
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_UNSPEC (SFmode,
	gen_rtvec (1,
		operand1),
	82)),
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SFmode,
	gen_rtvec (1,
		operand1),
	83)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:16383 */
extern rtx gen_peephole2_1721 (rtx, rtx *);
rtx
gen_peephole2_1721 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  start_sequence ();
#line 16394 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (1,
		operand2),
	82)),
		gen_rtx_SET (VOIDmode,
	operand1,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (1,
		copy_rtx (operand2)),
	83)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:16396 */
rtx
gen_tanxf2 (rtx operand0,
	rtx operand1)
{
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
#line 16404 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
{
  operands[2] = gen_reg_rtx (XFmode);
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (1,
		operand1),
	82)),
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (1,
		operand1),
	83)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:16421 */
rtx
gen_atan2df3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 16428 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
{
  rtx copy = gen_reg_rtx (DFmode);
  emit_move_insn (copy, operands[1]);
  emit_insn (gen_atan2df3_1 (operands[0], copy, operands[2]));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_USE (VOIDmode,
	operand0));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand2));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:16435 */
rtx
gen_atandf2 (rtx operand0,
	rtx operand1)
{
  rtx operand2;
  rtx operand3 ATTRIBUTE_UNUSED;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
#line 16444 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
{
  operands[2] = gen_reg_rtx (DFmode);
  emit_move_insn (operands[2], CONST1_RTX (DFmode));  /* fld1 */
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (DFmode,
	gen_rtvec (2,
		operand2,
		operand1),
	62)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (DFmode)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:16462 */
rtx
gen_atan2sf3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 16469 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
{
  rtx copy = gen_reg_rtx (SFmode);
  emit_move_insn (copy, operands[1]);
  emit_insn (gen_atan2sf3_1 (operands[0], copy, operands[2]));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_USE (VOIDmode,
	operand0));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand2));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:16476 */
rtx
gen_atansf2 (rtx operand0,
	rtx operand1)
{
  rtx operand2;
  rtx operand3 ATTRIBUTE_UNUSED;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
#line 16485 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
{
  operands[2] = gen_reg_rtx (SFmode);
  emit_move_insn (operands[2], CONST1_RTX (SFmode));  /* fld1 */
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SFmode,
	gen_rtvec (2,
		operand2,
		operand1),
	62)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SFmode)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:16502 */
rtx
gen_atan2xf3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 16508 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
{
  rtx copy = gen_reg_rtx (XFmode);
  emit_move_insn (copy, operands[1]);
  emit_insn (gen_atan2xf3_1 (operands[0], copy, operands[2]));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_USE (VOIDmode,
	operand0));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand2));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:16515 */
rtx
gen_atanxf2 (rtx operand0,
	rtx operand1)
{
  rtx operand2;
  rtx operand3 ATTRIBUTE_UNUSED;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
#line 16523 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
{
  operands[2] = gen_reg_rtx (XFmode);
  emit_move_insn (operands[2], CONST1_RTX (XFmode));  /* fld1 */
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (2,
		operand2,
		operand1),
	62)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (XFmode)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:16528 */
rtx
gen_asindf2 (rtx operand0,
	rtx operand1)
{
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx operand6;
  rtx operand7;
  rtx operand8 ATTRIBUTE_UNUSED;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[9];
    operands[0] = operand0;
    operands[1] = operand1;
#line 16543 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
{
  int i;

  for (i=2; i<8; i++)
    operands[i] = gen_reg_rtx (XFmode);

  emit_move_insn (operands[4], CONST1_RTX (XFmode));  /* fld1 */
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
    operand4 = operands[4];
    operand5 = operands[5];
    operand6 = operands[6];
    operand7 = operands[7];
    operand8 = operands[8];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_FLOAT_EXTEND (XFmode,
	operand1)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_MULT (XFmode,
	operand2,
	operand2)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand5,
	gen_rtx_MINUS (XFmode,
	operand4,
	operand3)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand6,
	gen_rtx_SQRT (XFmode,
	operand5)));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand7,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (2,
		operand6,
		operand2),
	62)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (XFmode)))));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT_TRUNCATE (DFmode,
	operand7)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:16552 */
rtx
gen_asinsf2 (rtx operand0,
	rtx operand1)
{
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx operand6;
  rtx operand7;
  rtx operand8 ATTRIBUTE_UNUSED;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[9];
    operands[0] = operand0;
    operands[1] = operand1;
#line 16567 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
{
  int i;

  for (i=2; i<8; i++)
    operands[i] = gen_reg_rtx (XFmode);

  emit_move_insn (operands[4], CONST1_RTX (XFmode));  /* fld1 */
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
    operand4 = operands[4];
    operand5 = operands[5];
    operand6 = operands[6];
    operand7 = operands[7];
    operand8 = operands[8];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_FLOAT_EXTEND (XFmode,
	operand1)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_MULT (XFmode,
	operand2,
	operand2)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand5,
	gen_rtx_MINUS (XFmode,
	operand4,
	operand3)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand6,
	gen_rtx_SQRT (XFmode,
	operand5)));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand7,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (2,
		operand6,
		operand2),
	62)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (XFmode)))));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT_TRUNCATE (SFmode,
	operand7)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:16576 */
rtx
gen_asinxf2 (rtx operand0,
	rtx operand1)
{
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx operand6 ATTRIBUTE_UNUSED;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[7];
    operands[0] = operand0;
    operands[1] = operand1;
#line 16588 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
{
  int i;

  for (i=2; i<6; i++)
    operands[i] = gen_reg_rtx (XFmode);

  emit_move_insn (operands[3], CONST1_RTX (XFmode));  /* fld1 */
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
    operand4 = operands[4];
    operand5 = operands[5];
    operand6 = operands[6];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_MULT (XFmode,
	operand1,
	operand1)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand4,
	gen_rtx_MINUS (XFmode,
	operand3,
	operand2)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand5,
	gen_rtx_SQRT (XFmode,
	operand4)));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (2,
		operand5,
		operand1),
	62)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (XFmode)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:16597 */
rtx
gen_acosdf2 (rtx operand0,
	rtx operand1)
{
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx operand6;
  rtx operand7;
  rtx operand8 ATTRIBUTE_UNUSED;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[9];
    operands[0] = operand0;
    operands[1] = operand1;
#line 16612 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
{
  int i;

  for (i=2; i<8; i++)
    operands[i] = gen_reg_rtx (XFmode);

  emit_move_insn (operands[4], CONST1_RTX (XFmode));  /* fld1 */
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
    operand4 = operands[4];
    operand5 = operands[5];
    operand6 = operands[6];
    operand7 = operands[7];
    operand8 = operands[8];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_FLOAT_EXTEND (XFmode,
	operand1)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_MULT (XFmode,
	operand2,
	operand2)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand5,
	gen_rtx_MINUS (XFmode,
	operand4,
	operand3)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand6,
	gen_rtx_SQRT (XFmode,
	operand5)));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand7,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (2,
		operand2,
		operand6),
	62)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (XFmode)))));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT_TRUNCATE (DFmode,
	operand7)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:16621 */
rtx
gen_acossf2 (rtx operand0,
	rtx operand1)
{
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx operand6;
  rtx operand7;
  rtx operand8 ATTRIBUTE_UNUSED;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[9];
    operands[0] = operand0;
    operands[1] = operand1;
#line 16636 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
{
  int i;

  for (i=2; i<8; i++)
    operands[i] = gen_reg_rtx (XFmode);

  emit_move_insn (operands[4], CONST1_RTX (XFmode));  /* fld1 */
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
    operand4 = operands[4];
    operand5 = operands[5];
    operand6 = operands[6];
    operand7 = operands[7];
    operand8 = operands[8];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_FLOAT_EXTEND (XFmode,
	operand1)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_MULT (XFmode,
	operand2,
	operand2)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand5,
	gen_rtx_MINUS (XFmode,
	operand4,
	operand3)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand6,
	gen_rtx_SQRT (XFmode,
	operand5)));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand7,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (2,
		operand2,
		operand6),
	62)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (XFmode)))));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT_TRUNCATE (SFmode,
	operand7)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:16645 */
rtx
gen_acosxf2 (rtx operand0,
	rtx operand1)
{
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx operand6 ATTRIBUTE_UNUSED;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[7];
    operands[0] = operand0;
    operands[1] = operand1;
#line 16657 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
{
  int i;

  for (i=2; i<6; i++)
    operands[i] = gen_reg_rtx (XFmode);

  emit_move_insn (operands[3], CONST1_RTX (XFmode));  /* fld1 */
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
    operand4 = operands[4];
    operand5 = operands[5];
    operand6 = operands[6];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_MULT (XFmode,
	operand1,
	operand1)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand4,
	gen_rtx_MINUS (XFmode,
	operand3,
	operand2)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand5,
	gen_rtx_SQRT (XFmode,
	operand4)));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (2,
		operand1,
		operand5),
	62)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (XFmode)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:16678 */
rtx
gen_logsf2 (rtx operand0,
	rtx operand1)
{
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5 ATTRIBUTE_UNUSED;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[6];
    operands[0] = operand0;
    operands[1] = operand1;
#line 16690 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
{
  rtx temp;

  operands[2] = gen_reg_rtx (XFmode);
  operands[3] = gen_reg_rtx (XFmode);
  operands[4] = gen_reg_rtx (XFmode);

  temp = standard_80387_constant_rtx (4); /* fldln2 */
  emit_move_insn (operands[3], temp);
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
    operand4 = operands[4];
    operand5 = operands[5];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_FLOAT_EXTEND (XFmode,
	operand1)));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand4,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (2,
		operand2,
		operand3),
	63)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (XFmode)))));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT_TRUNCATE (SFmode,
	operand4)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:16701 */
rtx
gen_logdf2 (rtx operand0,
	rtx operand1)
{
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5 ATTRIBUTE_UNUSED;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[6];
    operands[0] = operand0;
    operands[1] = operand1;
#line 16713 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
{
  rtx temp;

  operands[2] = gen_reg_rtx (XFmode);
  operands[3] = gen_reg_rtx (XFmode);
  operands[4] = gen_reg_rtx (XFmode);

  temp = standard_80387_constant_rtx (4); /* fldln2 */
  emit_move_insn (operands[3], temp);
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
    operand4 = operands[4];
    operand5 = operands[5];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_FLOAT_EXTEND (XFmode,
	operand1)));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand4,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (2,
		operand2,
		operand3),
	63)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (XFmode)))));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT_TRUNCATE (DFmode,
	operand4)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:16724 */
rtx
gen_logxf2 (rtx operand0,
	rtx operand1)
{
  rtx operand2;
  rtx operand3 ATTRIBUTE_UNUSED;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
#line 16731 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
{
  rtx temp;

  operands[2] = gen_reg_rtx (XFmode);
  temp = standard_80387_constant_rtx (4); /* fldln2 */
  emit_move_insn (operands[2], temp);
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (2,
		operand1,
		operand2),
	63)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (XFmode)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:16739 */
rtx
gen_log10sf2 (rtx operand0,
	rtx operand1)
{
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5 ATTRIBUTE_UNUSED;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[6];
    operands[0] = operand0;
    operands[1] = operand1;
#line 16751 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
{
  rtx temp;

  operands[2] = gen_reg_rtx (XFmode);
  operands[3] = gen_reg_rtx (XFmode);
  operands[4] = gen_reg_rtx (XFmode);

  temp = standard_80387_constant_rtx (3); /* fldlg2 */
  emit_move_insn (operands[3], temp);
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
    operand4 = operands[4];
    operand5 = operands[5];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_FLOAT_EXTEND (XFmode,
	operand1)));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand4,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (2,
		operand2,
		operand3),
	63)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (XFmode)))));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT_TRUNCATE (SFmode,
	operand4)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:16762 */
rtx
gen_log10df2 (rtx operand0,
	rtx operand1)
{
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5 ATTRIBUTE_UNUSED;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[6];
    operands[0] = operand0;
    operands[1] = operand1;
#line 16774 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
{
  rtx temp;

  operands[2] = gen_reg_rtx (XFmode);
  operands[3] = gen_reg_rtx (XFmode);
  operands[4] = gen_reg_rtx (XFmode);

  temp = standard_80387_constant_rtx (3); /* fldlg2 */
  emit_move_insn (operands[3], temp);
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
    operand4 = operands[4];
    operand5 = operands[5];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_FLOAT_EXTEND (XFmode,
	operand1)));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand4,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (2,
		operand2,
		operand3),
	63)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (XFmode)))));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT_TRUNCATE (DFmode,
	operand4)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:16785 */
rtx
gen_log10xf2 (rtx operand0,
	rtx operand1)
{
  rtx operand2;
  rtx operand3 ATTRIBUTE_UNUSED;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
#line 16792 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
{
  rtx temp;

  operands[2] = gen_reg_rtx (XFmode);
  temp = standard_80387_constant_rtx (3); /* fldlg2 */
  emit_move_insn (operands[2], temp);
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (2,
		operand1,
		operand2),
	63)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (XFmode)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:16800 */
rtx
gen_log2sf2 (rtx operand0,
	rtx operand1)
{
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5 ATTRIBUTE_UNUSED;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[6];
    operands[0] = operand0;
    operands[1] = operand1;
#line 16812 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
{
  operands[2] = gen_reg_rtx (XFmode);
  operands[3] = gen_reg_rtx (XFmode);
  operands[4] = gen_reg_rtx (XFmode);

  emit_move_insn (operands[3], CONST1_RTX (XFmode));  /* fld1 */
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
    operand4 = operands[4];
    operand5 = operands[5];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_FLOAT_EXTEND (XFmode,
	operand1)));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand4,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (2,
		operand2,
		operand3),
	63)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (XFmode)))));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT_TRUNCATE (SFmode,
	operand4)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:16820 */
rtx
gen_log2df2 (rtx operand0,
	rtx operand1)
{
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5 ATTRIBUTE_UNUSED;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[6];
    operands[0] = operand0;
    operands[1] = operand1;
#line 16832 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
{
  operands[2] = gen_reg_rtx (XFmode);
  operands[3] = gen_reg_rtx (XFmode);
  operands[4] = gen_reg_rtx (XFmode);

  emit_move_insn (operands[3], CONST1_RTX (XFmode));  /* fld1 */
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
    operand4 = operands[4];
    operand5 = operands[5];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_FLOAT_EXTEND (XFmode,
	operand1)));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand4,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (2,
		operand2,
		operand3),
	63)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (XFmode)))));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT_TRUNCATE (DFmode,
	operand4)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:16840 */
rtx
gen_log2xf2 (rtx operand0,
	rtx operand1)
{
  rtx operand2;
  rtx operand3 ATTRIBUTE_UNUSED;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
#line 16847 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
{
  operands[2] = gen_reg_rtx (XFmode);
  emit_move_insn (operands[2], CONST1_RTX (XFmode));  /* fld1 */
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (2,
		operand1,
		operand2),
	63)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (XFmode)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:16864 */
rtx
gen_log1psf2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 16870 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
{
  rtx op0 = gen_reg_rtx (XFmode);
  rtx op1 = gen_reg_rtx (XFmode);

  emit_insn (gen_extendsfxf2 (op1, operands[1]));
  ix86_emit_i387_log1p (op0, op1);
  emit_insn (gen_truncxfsf2_i387_noop (operands[0], op0));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_USE (VOIDmode,
	operand0));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:16880 */
rtx
gen_log1pdf2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 16886 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
{
  rtx op0 = gen_reg_rtx (XFmode);
  rtx op1 = gen_reg_rtx (XFmode);

  emit_insn (gen_extenddfxf2 (op1, operands[1]));
  ix86_emit_i387_log1p (op0, op1);
  emit_insn (gen_truncxfdf2_i387_noop (operands[0], op0));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_USE (VOIDmode,
	operand0));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:16896 */
rtx
gen_log1pxf2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 16901 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
{
  ix86_emit_i387_log1p (operands[0], operands[1]);
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_USE (VOIDmode,
	operand0));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:16918 */
rtx
gen_logbsf2 (rtx operand0,
	rtx operand1)
{
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[5];
    operands[0] = operand0;
    operands[1] = operand1;
#line 16930 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
{
  operands[2] = gen_reg_rtx (XFmode);
  operands[3] = gen_reg_rtx (XFmode);
  operands[4] = gen_reg_rtx (XFmode);
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
    operand4 = operands[4];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_FLOAT_EXTEND (XFmode,
	operand1)));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (1,
		operand2),
	84)),
		gen_rtx_SET (VOIDmode,
	operand4,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (1,
		operand2),
	85)))));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT_TRUNCATE (SFmode,
	operand4)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:16936 */
rtx
gen_logbdf2 (rtx operand0,
	rtx operand1)
{
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[5];
    operands[0] = operand0;
    operands[1] = operand1;
#line 16948 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
{
  operands[2] = gen_reg_rtx (XFmode);
  operands[3] = gen_reg_rtx (XFmode);
  operands[4] = gen_reg_rtx (XFmode);
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
    operand4 = operands[4];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_FLOAT_EXTEND (XFmode,
	operand1)));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (1,
		operand2),
	84)),
		gen_rtx_SET (VOIDmode,
	operand4,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (1,
		operand2),
	85)))));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT_TRUNCATE (DFmode,
	operand4)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:16954 */
rtx
gen_logbxf2 (rtx operand0,
	rtx operand1)
{
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
#line 16962 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
{
  operands[2] = gen_reg_rtx (XFmode);
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (1,
		operand1),
	84)),
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (1,
		operand1),
	85)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:16966 */
rtx
gen_ilogbsi2 (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#line 16978 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
{
  operands[2] = gen_reg_rtx (XFmode);
  operands[3] = gen_reg_rtx (XFmode);
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (1,
		operand1),
	84)),
		gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (1,
		operand1),
	85)))));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FIX (SImode,
	operand3)),
		gen_hard_reg_clobber (CCmode, 17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:17007 */
rtx
gen_expsf2 (rtx operand0,
	rtx operand1)
{
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx operand6;
  rtx operand7;
  rtx operand8;
  rtx operand9;
  rtx operand10;
  rtx operand11;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[12];
    operands[0] = operand0;
    operands[1] = operand1;
#line 17026 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
{
  rtx temp;
  int i;

  for (i=2; i<12; i++)
    operands[i] = gen_reg_rtx (XFmode);
  temp = standard_80387_constant_rtx (5); /* fldl2e */
  emit_move_insn (operands[3], temp);
  emit_move_insn (operands[8], CONST1_RTX (XFmode));  /* fld1 */
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
    operand4 = operands[4];
    operand5 = operands[5];
    operand6 = operands[6];
    operand7 = operands[7];
    operand8 = operands[8];
    operand9 = operands[9];
    operand10 = operands[10];
    operand11 = operands[11];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_FLOAT_EXTEND (XFmode,
	operand1)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand4,
	gen_rtx_MULT (XFmode,
	operand2,
	operand3)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand5,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (1,
		operand4),
	65)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand6,
	gen_rtx_MINUS (XFmode,
	operand4,
	operand5)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand7,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (1,
		operand6),
	67)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand9,
	gen_rtx_PLUS (XFmode,
	operand7,
	operand8)));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand10,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (2,
		operand9,
		operand5),
	86)),
		gen_rtx_SET (VOIDmode,
	operand11,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (2,
		operand9,
		operand5),
	87)))));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT_TRUNCATE (SFmode,
	operand10)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:17037 */
rtx
gen_expdf2 (rtx operand0,
	rtx operand1)
{
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx operand6;
  rtx operand7;
  rtx operand8;
  rtx operand9;
  rtx operand10;
  rtx operand11;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[12];
    operands[0] = operand0;
    operands[1] = operand1;
#line 17056 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
{
  rtx temp;
  int i;

  for (i=2; i<12; i++)
    operands[i] = gen_reg_rtx (XFmode);
  temp = standard_80387_constant_rtx (5); /* fldl2e */
  emit_move_insn (operands[3], temp);
  emit_move_insn (operands[8], CONST1_RTX (XFmode));  /* fld1 */
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
    operand4 = operands[4];
    operand5 = operands[5];
    operand6 = operands[6];
    operand7 = operands[7];
    operand8 = operands[8];
    operand9 = operands[9];
    operand10 = operands[10];
    operand11 = operands[11];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_FLOAT_EXTEND (XFmode,
	operand1)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand4,
	gen_rtx_MULT (XFmode,
	operand2,
	operand3)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand5,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (1,
		operand4),
	65)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand6,
	gen_rtx_MINUS (XFmode,
	operand4,
	operand5)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand7,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (1,
		operand6),
	67)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand9,
	gen_rtx_PLUS (XFmode,
	operand7,
	operand8)));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand10,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (2,
		operand9,
		operand5),
	86)),
		gen_rtx_SET (VOIDmode,
	operand11,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (2,
		operand9,
		operand5),
	87)))));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT_TRUNCATE (DFmode,
	operand10)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:17067 */
rtx
gen_expxf2 (rtx operand0,
	rtx operand1)
{
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx operand6;
  rtx operand7;
  rtx operand8;
  rtx operand9;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[10];
    operands[0] = operand0;
    operands[1] = operand1;
#line 17082 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
{
  rtx temp;
  int i;

  for (i=2; i<10; i++)
    operands[i] = gen_reg_rtx (XFmode);
  temp = standard_80387_constant_rtx (5); /* fldl2e */
  emit_move_insn (operands[2], temp);
  emit_move_insn (operands[7], CONST1_RTX (XFmode));  /* fld1 */
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
    operand4 = operands[4];
    operand5 = operands[5];
    operand6 = operands[6];
    operand7 = operands[7];
    operand8 = operands[8];
    operand9 = operands[9];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_MULT (XFmode,
	operand1,
	operand2)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand4,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (1,
		operand3),
	65)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand5,
	gen_rtx_MINUS (XFmode,
	operand3,
	operand4)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand6,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (1,
		operand5),
	67)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand8,
	gen_rtx_PLUS (XFmode,
	operand6,
	operand7)));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (2,
		operand8,
		operand4),
	86)),
		gen_rtx_SET (VOIDmode,
	operand9,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (2,
		operand8,
		operand4),
	87)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:17093 */
rtx
gen_exp10sf2 (rtx operand0,
	rtx operand1)
{
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx operand6;
  rtx operand7;
  rtx operand8;
  rtx operand9;
  rtx operand10;
  rtx operand11;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[12];
    operands[0] = operand0;
    operands[1] = operand1;
#line 17112 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
{
  rtx temp;
  int i;

  for (i=2; i<12; i++)
    operands[i] = gen_reg_rtx (XFmode);
  temp = standard_80387_constant_rtx (6); /* fldl2t */
  emit_move_insn (operands[3], temp);
  emit_move_insn (operands[8], CONST1_RTX (XFmode));  /* fld1 */
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
    operand4 = operands[4];
    operand5 = operands[5];
    operand6 = operands[6];
    operand7 = operands[7];
    operand8 = operands[8];
    operand9 = operands[9];
    operand10 = operands[10];
    operand11 = operands[11];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_FLOAT_EXTEND (XFmode,
	operand1)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand4,
	gen_rtx_MULT (XFmode,
	operand2,
	operand3)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand5,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (1,
		operand4),
	65)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand6,
	gen_rtx_MINUS (XFmode,
	operand4,
	operand5)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand7,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (1,
		operand6),
	67)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand9,
	gen_rtx_PLUS (XFmode,
	operand7,
	operand8)));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand10,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (2,
		operand9,
		operand5),
	86)),
		gen_rtx_SET (VOIDmode,
	operand11,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (2,
		operand9,
		operand5),
	87)))));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT_TRUNCATE (SFmode,
	operand10)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:17123 */
rtx
gen_exp10df2 (rtx operand0,
	rtx operand1)
{
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx operand6;
  rtx operand7;
  rtx operand8;
  rtx operand9;
  rtx operand10;
  rtx operand11;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[12];
    operands[0] = operand0;
    operands[1] = operand1;
#line 17142 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
{
  rtx temp;
  int i;

  for (i=2; i<12; i++)
    operands[i] = gen_reg_rtx (XFmode);
  temp = standard_80387_constant_rtx (6); /* fldl2t */
  emit_move_insn (operands[3], temp);
  emit_move_insn (operands[8], CONST1_RTX (XFmode));  /* fld1 */
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
    operand4 = operands[4];
    operand5 = operands[5];
    operand6 = operands[6];
    operand7 = operands[7];
    operand8 = operands[8];
    operand9 = operands[9];
    operand10 = operands[10];
    operand11 = operands[11];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_FLOAT_EXTEND (XFmode,
	operand1)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand4,
	gen_rtx_MULT (XFmode,
	operand2,
	operand3)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand5,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (1,
		operand4),
	65)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand6,
	gen_rtx_MINUS (XFmode,
	operand4,
	operand5)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand7,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (1,
		operand6),
	67)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand9,
	gen_rtx_PLUS (XFmode,
	operand7,
	operand8)));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand10,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (2,
		operand9,
		operand5),
	86)),
		gen_rtx_SET (VOIDmode,
	operand11,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (2,
		operand9,
		operand5),
	87)))));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT_TRUNCATE (DFmode,
	operand10)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:17153 */
rtx
gen_exp10xf2 (rtx operand0,
	rtx operand1)
{
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx operand6;
  rtx operand7;
  rtx operand8;
  rtx operand9;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[10];
    operands[0] = operand0;
    operands[1] = operand1;
#line 17168 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
{
  rtx temp;
  int i;

  for (i=2; i<10; i++)
    operands[i] = gen_reg_rtx (XFmode);
  temp = standard_80387_constant_rtx (6); /* fldl2t */
  emit_move_insn (operands[2], temp);
  emit_move_insn (operands[7], CONST1_RTX (XFmode));  /* fld1 */
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
    operand4 = operands[4];
    operand5 = operands[5];
    operand6 = operands[6];
    operand7 = operands[7];
    operand8 = operands[8];
    operand9 = operands[9];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_MULT (XFmode,
	operand1,
	operand2)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand4,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (1,
		operand3),
	65)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand5,
	gen_rtx_MINUS (XFmode,
	operand3,
	operand4)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand6,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (1,
		operand5),
	67)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand8,
	gen_rtx_PLUS (XFmode,
	operand6,
	operand7)));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (2,
		operand8,
		operand4),
	86)),
		gen_rtx_SET (VOIDmode,
	operand9,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (2,
		operand8,
		operand4),
	87)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:17179 */
rtx
gen_exp2sf2 (rtx operand0,
	rtx operand1)
{
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx operand6;
  rtx operand7;
  rtx operand8;
  rtx operand9;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[10];
    operands[0] = operand0;
    operands[1] = operand1;
#line 17197 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
{
  int i;

  for (i=2; i<10; i++)
    operands[i] = gen_reg_rtx (XFmode);
  emit_move_insn (operands[6], CONST1_RTX (XFmode));  /* fld1 */
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
    operand4 = operands[4];
    operand5 = operands[5];
    operand6 = operands[6];
    operand7 = operands[7];
    operand8 = operands[8];
    operand9 = operands[9];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_FLOAT_EXTEND (XFmode,
	operand1)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (1,
		operand2),
	65)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand4,
	gen_rtx_MINUS (XFmode,
	operand2,
	operand3)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand5,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (1,
		operand4),
	67)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand7,
	gen_rtx_PLUS (XFmode,
	operand5,
	operand6)));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand8,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (2,
		operand7,
		operand3),
	86)),
		gen_rtx_SET (VOIDmode,
	operand9,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (2,
		operand7,
		operand3),
	87)))));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT_TRUNCATE (SFmode,
	operand8)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:17205 */
rtx
gen_exp2df2 (rtx operand0,
	rtx operand1)
{
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx operand6;
  rtx operand7;
  rtx operand8;
  rtx operand9;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[10];
    operands[0] = operand0;
    operands[1] = operand1;
#line 17223 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
{
  int i;

  for (i=2; i<10; i++)
    operands[i] = gen_reg_rtx (XFmode);
  emit_move_insn (operands[6], CONST1_RTX (XFmode));  /* fld1 */
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
    operand4 = operands[4];
    operand5 = operands[5];
    operand6 = operands[6];
    operand7 = operands[7];
    operand8 = operands[8];
    operand9 = operands[9];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_FLOAT_EXTEND (XFmode,
	operand1)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (1,
		operand2),
	65)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand4,
	gen_rtx_MINUS (XFmode,
	operand2,
	operand3)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand5,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (1,
		operand4),
	67)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand7,
	gen_rtx_PLUS (XFmode,
	operand5,
	operand6)));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand8,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (2,
		operand7,
		operand3),
	86)),
		gen_rtx_SET (VOIDmode,
	operand9,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (2,
		operand7,
		operand3),
	87)))));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT_TRUNCATE (DFmode,
	operand8)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:17231 */
rtx
gen_exp2xf2 (rtx operand0,
	rtx operand1)
{
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx operand6;
  rtx operand7;
  rtx operand8;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[9];
    operands[0] = operand0;
    operands[1] = operand1;
#line 17245 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
{
  int i;

  for (i=2; i<9; i++)
    operands[i] = gen_reg_rtx (XFmode);
  emit_move_insn (operands[6], CONST1_RTX (XFmode));  /* fld1 */
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
    operand4 = operands[4];
    operand5 = operands[5];
    operand6 = operands[6];
    operand7 = operands[7];
    operand8 = operands[8];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	operand1));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (1,
		operand2),
	65)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand4,
	gen_rtx_MINUS (XFmode,
	operand2,
	operand3)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand5,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (1,
		operand4),
	67)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand7,
	gen_rtx_PLUS (XFmode,
	operand5,
	operand6)));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (2,
		operand7,
		operand3),
	86)),
		gen_rtx_SET (VOIDmode,
	operand8,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (2,
		operand7,
		operand3),
	87)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:17253 */
rtx
gen_expm1df2 (rtx operand0,
	rtx operand1)
{
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx operand6;
  rtx operand7;
  rtx operand8;
  rtx operand9;
  rtx operand10;
  rtx operand11;
  rtx operand12;
  rtx operand13;
  rtx operand14;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[15];
    operands[0] = operand0;
    operands[1] = operand1;
#line 17279 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
{
  rtx temp;
  int i;

  for (i=2; i<15; i++)
    operands[i] = gen_reg_rtx (XFmode);
  temp = standard_80387_constant_rtx (5); /* fldl2e */
  emit_move_insn (operands[3], temp);
  emit_move_insn (operands[10], CONST1_RTX (XFmode));  /* fld1 */
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
    operand4 = operands[4];
    operand5 = operands[5];
    operand6 = operands[6];
    operand7 = operands[7];
    operand8 = operands[8];
    operand9 = operands[9];
    operand10 = operands[10];
    operand11 = operands[11];
    operand12 = operands[12];
    operand13 = operands[13];
    operand14 = operands[14];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_FLOAT_EXTEND (XFmode,
	operand1)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand4,
	gen_rtx_MULT (XFmode,
	operand2,
	operand3)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand5,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (1,
		operand4),
	65)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand6,
	gen_rtx_MINUS (XFmode,
	operand4,
	operand5)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand7,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (1,
		operand6),
	67)));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand8,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (2,
		operand7,
		operand5),
	86)),
		gen_rtx_SET (VOIDmode,
	operand9,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (2,
		operand7,
		operand5),
	87)))));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand11,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (2,
		operand10,
		operand9),
	86)),
		gen_rtx_SET (VOIDmode,
	operand12,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (2,
		operand10,
		operand9),
	87)))));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand13,
	gen_rtx_MINUS (XFmode,
	operand11,
	operand10)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand14,
	gen_rtx_PLUS (XFmode,
	operand13,
	operand8)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT_TRUNCATE (DFmode,
	operand14)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:17290 */
rtx
gen_expm1sf2 (rtx operand0,
	rtx operand1)
{
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx operand6;
  rtx operand7;
  rtx operand8;
  rtx operand9;
  rtx operand10;
  rtx operand11;
  rtx operand12;
  rtx operand13;
  rtx operand14;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[15];
    operands[0] = operand0;
    operands[1] = operand1;
#line 17316 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
{
  rtx temp;
  int i;

  for (i=2; i<15; i++)
    operands[i] = gen_reg_rtx (XFmode);
  temp = standard_80387_constant_rtx (5); /* fldl2e */
  emit_move_insn (operands[3], temp);
  emit_move_insn (operands[10], CONST1_RTX (XFmode));  /* fld1 */
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
    operand4 = operands[4];
    operand5 = operands[5];
    operand6 = operands[6];
    operand7 = operands[7];
    operand8 = operands[8];
    operand9 = operands[9];
    operand10 = operands[10];
    operand11 = operands[11];
    operand12 = operands[12];
    operand13 = operands[13];
    operand14 = operands[14];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_FLOAT_EXTEND (XFmode,
	operand1)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand4,
	gen_rtx_MULT (XFmode,
	operand2,
	operand3)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand5,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (1,
		operand4),
	65)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand6,
	gen_rtx_MINUS (XFmode,
	operand4,
	operand5)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand7,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (1,
		operand6),
	67)));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand8,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (2,
		operand7,
		operand5),
	86)),
		gen_rtx_SET (VOIDmode,
	operand9,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (2,
		operand7,
		operand5),
	87)))));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand11,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (2,
		operand10,
		operand9),
	86)),
		gen_rtx_SET (VOIDmode,
	operand12,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (2,
		operand10,
		operand9),
	87)))));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand13,
	gen_rtx_MINUS (XFmode,
	operand11,
	operand10)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand14,
	gen_rtx_PLUS (XFmode,
	operand13,
	operand8)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT_TRUNCATE (SFmode,
	operand14)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:17327 */
rtx
gen_expm1xf2 (rtx operand0,
	rtx operand1)
{
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx operand6;
  rtx operand7;
  rtx operand8;
  rtx operand9;
  rtx operand10;
  rtx operand11;
  rtx operand12;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[13];
    operands[0] = operand0;
    operands[1] = operand1;
#line 17350 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
{
  rtx temp;
  int i;

  for (i=2; i<13; i++)
    operands[i] = gen_reg_rtx (XFmode);
  temp = standard_80387_constant_rtx (5); /* fldl2e */
  emit_move_insn (operands[2], temp);
  emit_move_insn (operands[9], CONST1_RTX (XFmode));  /* fld1 */
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
    operand4 = operands[4];
    operand5 = operands[5];
    operand6 = operands[6];
    operand7 = operands[7];
    operand8 = operands[8];
    operand9 = operands[9];
    operand10 = operands[10];
    operand11 = operands[11];
    operand12 = operands[12];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_MULT (XFmode,
	operand1,
	operand2)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand4,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (1,
		operand3),
	65)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand5,
	gen_rtx_MINUS (XFmode,
	operand3,
	operand4)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand6,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (1,
		operand5),
	67)));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand7,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (2,
		operand6,
		operand4),
	86)),
		gen_rtx_SET (VOIDmode,
	operand8,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (2,
		operand6,
		operand4),
	87)))));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand10,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (2,
		operand9,
		operand8),
	86)),
		gen_rtx_SET (VOIDmode,
	operand11,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (2,
		operand9,
		operand8),
	87)))));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand12,
	gen_rtx_MINUS (XFmode,
	operand10,
	operand9)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (XFmode,
	operand12,
	operand7)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:17361 */
rtx
gen_ldexpdf3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx operand6;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[7];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 17377 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
{
  int i;

  for (i=3; i<7; i++)
    operands[i] = gen_reg_rtx (XFmode);
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
    operand4 = operands[4];
    operand5 = operands[5];
    operand6 = operands[6];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_FLOAT_EXTEND (XFmode,
	operand1)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand4,
	gen_rtx_FLOAT (XFmode,
	operand2)));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand5,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (2,
		operand3,
		operand4),
	86)),
		gen_rtx_SET (VOIDmode,
	operand6,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (2,
		operand3,
		operand4),
	87)))));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT_TRUNCATE (DFmode,
	operand5)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:17384 */
rtx
gen_ldexpsf3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx operand6;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[7];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 17400 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
{
  int i;

  for (i=3; i<7; i++)
    operands[i] = gen_reg_rtx (XFmode);
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
    operand4 = operands[4];
    operand5 = operands[5];
    operand6 = operands[6];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_FLOAT_EXTEND (XFmode,
	operand1)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand4,
	gen_rtx_FLOAT (XFmode,
	operand2)));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand5,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (2,
		operand3,
		operand4),
	86)),
		gen_rtx_SET (VOIDmode,
	operand6,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (2,
		operand3,
		operand4),
	87)))));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT_TRUNCATE (SFmode,
	operand5)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:17407 */
rtx
gen_ldexpxf3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx operand3;
  rtx operand4;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[5];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 17419 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
{
  int i;

  for (i=3; i<5; i++)
    operands[i] = gen_reg_rtx (XFmode);
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
    operand4 = operands[4];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_FLOAT (XFmode,
	operand2)));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (2,
		operand1,
		operand3),
	86)),
		gen_rtx_SET (VOIDmode,
	operand4,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (2,
		operand1,
		operand3),
	87)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:17437 */
rtx
gen_rintdf2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 17443 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
{
  rtx op0 = gen_reg_rtx (XFmode);
  rtx op1 = gen_reg_rtx (XFmode);

  emit_insn (gen_extenddfxf2 (op1, operands[1]));
  emit_insn (gen_frndintxf2 (op0, op1));

  emit_insn (gen_truncxfdf2_i387_noop (operands[0], op0));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_USE (VOIDmode,
	operand0));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:17454 */
rtx
gen_rintsf2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 17460 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
{
  rtx op0 = gen_reg_rtx (XFmode);
  rtx op1 = gen_reg_rtx (XFmode);

  emit_insn (gen_extendsfxf2 (op1, operands[1]));
  emit_insn (gen_frndintxf2 (op0, op1));

  emit_insn (gen_truncxfsf2_i387_noop (operands[0], op0));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_USE (VOIDmode,
	operand0));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:17471 */
rtx
gen_rintxf2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 17476 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
{
  emit_insn (gen_frndintxf2 (operands[0], operands[1]));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_USE (VOIDmode,
	operand0));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:17481 */
extern rtx gen_split_1769 (rtx, rtx *);
rtx
gen_split_1769 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 17491 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
{
  if (memory_operand (operands[0], VOIDmode))
    emit_insn (gen_fistdi2 (operands[0], operands[1]));
  else
    {
      operands[2] = assign_386_stack_local (DImode, SLOT_TEMP);
      emit_insn (gen_fistdi2_with_temp (operands[0], operands[1],
					 operands[2]));
    }
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:17528 */
extern rtx gen_split_1770 (rtx, rtx *);
rtx
gen_split_1770 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
#line 17538 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (1,
		operand1),
	66)),
		gen_rtx_CLOBBER (VOIDmode,
	operand3))));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	copy_rtx (operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:17540 */
extern rtx gen_split_1771 (rtx, rtx *);
rtx
gen_split_1771 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
#line 17549 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (1,
		operand1),
	66)),
		gen_rtx_CLOBBER (VOIDmode,
	operand3))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:17551 */
extern rtx gen_split_1772 (rtx, rtx *);
rtx
gen_split_1772 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 17561 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
{
  operands[2] = assign_386_stack_local (HImode, SLOT_TEMP);
  emit_insn (gen_fisthi2_with_temp (operands[0], operands[1],
					operands[2]));
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:17551 */
extern rtx gen_split_1773 (rtx, rtx *);
rtx
gen_split_1773 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 17561 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
{
  operands[2] = assign_386_stack_local (SImode, SLOT_TEMP);
  emit_insn (gen_fistsi2_with_temp (operands[0], operands[1],
					operands[2]));
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:17591 */
extern rtx gen_split_1774 (rtx, rtx *);
rtx
gen_split_1774 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
#line 17600 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_UNSPEC (HImode,
	gen_rtvec (1,
		operand1),
	66)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	copy_rtx (operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:17591 */
extern rtx gen_split_1775 (rtx, rtx *);
rtx
gen_split_1775 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
#line 17600 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		operand1),
	66)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	copy_rtx (operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:17602 */
extern rtx gen_split_1776 (rtx, rtx *);
rtx
gen_split_1776 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
#line 17610 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (HImode,
	gen_rtvec (1,
		operand1),
	66)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:17602 */
extern rtx gen_split_1777 (rtx, rtx *);
rtx
gen_split_1777 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
#line 17610 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		operand1),
	66)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:17612 */
rtx
gen_lrinthi2 (rtx operand0,
	rtx operand1)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (HImode,
	gen_rtvec (1,
		operand1),
	66));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:17612 */
rtx
gen_lrintsi2 (rtx operand0,
	rtx operand1)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		operand1),
	66));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:17612 */
rtx
gen_lrintdi2 (rtx operand0,
	rtx operand1)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (1,
		operand1),
	66));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:17622 */
extern rtx gen_split_1781 (rtx, rtx *);
rtx
gen_split_1781 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 17633 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
{
  ix86_optimize_mode_switching[I387_FLOOR] = 1;

  operands[2] = assign_386_stack_local (HImode, SLOT_CW_STORED);
  operands[3] = assign_386_stack_local (HImode, SLOT_CW_FLOOR);

  emit_insn (gen_frndintxf2_floor_i387 (operands[0], operands[1],
					operands[2], operands[3]));
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:17660 */
rtx
gen_floorxf2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 17665 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
{
  emit_insn (gen_frndintxf2_floor (operands[0], operands[1]));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_USE (VOIDmode,
	operand0));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:17670 */
rtx
gen_floordf2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 17676 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
{
  rtx op0 = gen_reg_rtx (XFmode);
  rtx op1 = gen_reg_rtx (XFmode);

  emit_insn (gen_extenddfxf2 (op1, operands[1]));
  emit_insn (gen_frndintxf2_floor (op0, op1));

  emit_insn (gen_truncxfdf2_i387_noop (operands[0], op0));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_USE (VOIDmode,
	operand0));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:17687 */
rtx
gen_floorsf2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 17693 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
{
  rtx op0 = gen_reg_rtx (XFmode);
  rtx op1 = gen_reg_rtx (XFmode);

  emit_insn (gen_extendsfxf2 (op1, operands[1]));
  emit_insn (gen_frndintxf2_floor (op0, op1));

  emit_insn (gen_truncxfsf2_i387_noop (operands[0], op0));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_USE (VOIDmode,
	operand0));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:17704 */
extern rtx gen_split_1785 (rtx, rtx *);
rtx
gen_split_1785 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 17715 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
{
  ix86_optimize_mode_switching[I387_FLOOR] = 1;

  operands[2] = assign_386_stack_local (HImode, SLOT_CW_STORED);
  operands[3] = assign_386_stack_local (HImode, SLOT_CW_FLOOR);
  if (memory_operand (operands[0], VOIDmode))
    emit_insn (gen_fisthi2_floor (operands[0], operands[1],
				      operands[2], operands[3]));
  else
    {
      operands[4] = assign_386_stack_local (HImode, SLOT_TEMP);
      emit_insn (gen_fisthi2_floor_with_temp (operands[0], operands[1],
						  operands[2], operands[3],
						  operands[4]));
    }
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:17704 */
extern rtx gen_split_1786 (rtx, rtx *);
rtx
gen_split_1786 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 17715 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
{
  ix86_optimize_mode_switching[I387_FLOOR] = 1;

  operands[2] = assign_386_stack_local (HImode, SLOT_CW_STORED);
  operands[3] = assign_386_stack_local (HImode, SLOT_CW_FLOOR);
  if (memory_operand (operands[0], VOIDmode))
    emit_insn (gen_fistsi2_floor (operands[0], operands[1],
				      operands[2], operands[3]));
  else
    {
      operands[4] = assign_386_stack_local (SImode, SLOT_TEMP);
      emit_insn (gen_fistsi2_floor_with_temp (operands[0], operands[1],
						  operands[2], operands[3],
						  operands[4]));
    }
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:17704 */
extern rtx gen_split_1787 (rtx, rtx *);
rtx
gen_split_1787 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 17715 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
{
  ix86_optimize_mode_switching[I387_FLOOR] = 1;

  operands[2] = assign_386_stack_local (HImode, SLOT_CW_STORED);
  operands[3] = assign_386_stack_local (HImode, SLOT_CW_FLOOR);
  if (memory_operand (operands[0], VOIDmode))
    emit_insn (gen_fistdi2_floor (operands[0], operands[1],
				      operands[2], operands[3]));
  else
    {
      operands[4] = assign_386_stack_local (DImode, SLOT_TEMP);
      emit_insn (gen_fistdi2_floor_with_temp (operands[0], operands[1],
						  operands[2], operands[3],
						  operands[4]));
    }
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:17765 */
extern rtx gen_split_1788 (rtx, rtx *);
rtx
gen_split_1788 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx _val = 0;
  start_sequence ();
#line 17779 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		gen_rtx_SET (VOIDmode,
	operand4,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (1,
		operand1),
	74)),
		gen_rtx_USE (VOIDmode,
	operand2),
		gen_rtx_USE (VOIDmode,
	operand3),
		gen_rtx_CLOBBER (VOIDmode,
	operand5))));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	copy_rtx (operand4)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:17781 */
extern rtx gen_split_1789 (rtx, rtx *);
rtx
gen_split_1789 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx _val = 0;
  start_sequence ();
#line 17794 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (1,
		operand1),
	74)),
		gen_rtx_USE (VOIDmode,
	operand2),
		gen_rtx_USE (VOIDmode,
	operand3),
		gen_rtx_CLOBBER (VOIDmode,
	operand5))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:17823 */
extern rtx gen_split_1790 (rtx, rtx *);
rtx
gen_split_1790 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx _val = 0;
  start_sequence ();
#line 17836 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand4,
	gen_rtx_UNSPEC (HImode,
	gen_rtvec (1,
		operand1),
	74)),
		gen_rtx_USE (VOIDmode,
	operand2),
		gen_rtx_USE (VOIDmode,
	operand3))));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	copy_rtx (operand4)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:17823 */
extern rtx gen_split_1791 (rtx, rtx *);
rtx
gen_split_1791 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx _val = 0;
  start_sequence ();
#line 17836 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand4,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		operand1),
	74)),
		gen_rtx_USE (VOIDmode,
	operand2),
		gen_rtx_USE (VOIDmode,
	operand3))));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	copy_rtx (operand4)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:17838 */
extern rtx gen_split_1792 (rtx, rtx *);
rtx
gen_split_1792 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
#line 17850 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (HImode,
	gen_rtvec (1,
		operand1),
	74)),
		gen_rtx_USE (VOIDmode,
	operand2),
		gen_rtx_USE (VOIDmode,
	operand3))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:17838 */
extern rtx gen_split_1793 (rtx, rtx *);
rtx
gen_split_1793 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
#line 17850 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		operand1),
	74)),
		gen_rtx_USE (VOIDmode,
	operand2),
		gen_rtx_USE (VOIDmode,
	operand3))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:17852 */
rtx
gen_lfloorhi2 (rtx operand0,
	rtx operand1)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (HImode,
	gen_rtvec (1,
		operand1),
	74)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:17852 */
rtx
gen_lfloorsi2 (rtx operand0,
	rtx operand1)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		operand1),
	74)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:17852 */
rtx
gen_lfloordi2 (rtx operand0,
	rtx operand1)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (1,
		operand1),
	74)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:17863 */
extern rtx gen_split_1797 (rtx, rtx *);
rtx
gen_split_1797 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 17874 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
{
  ix86_optimize_mode_switching[I387_CEIL] = 1;

  operands[2] = assign_386_stack_local (HImode, SLOT_CW_STORED);
  operands[3] = assign_386_stack_local (HImode, SLOT_CW_CEIL);

  emit_insn (gen_frndintxf2_ceil_i387 (operands[0], operands[1],
				       operands[2], operands[3]));
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:17901 */
rtx
gen_ceilxf2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 17906 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
{
  emit_insn (gen_frndintxf2_ceil (operands[0], operands[1]));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_USE (VOIDmode,
	operand0));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:17911 */
rtx
gen_ceildf2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 17917 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
{
  rtx op0 = gen_reg_rtx (XFmode);
  rtx op1 = gen_reg_rtx (XFmode);

  emit_insn (gen_extenddfxf2 (op1, operands[1]));
  emit_insn (gen_frndintxf2_ceil (op0, op1));

  emit_insn (gen_truncxfdf2_i387_noop (operands[0], op0));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_USE (VOIDmode,
	operand0));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:17928 */
rtx
gen_ceilsf2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 17934 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
{
  rtx op0 = gen_reg_rtx (XFmode);
  rtx op1 = gen_reg_rtx (XFmode);

  emit_insn (gen_extendsfxf2 (op1, operands[1]));
  emit_insn (gen_frndintxf2_ceil (op0, op1));

  emit_insn (gen_truncxfsf2_i387_noop (operands[0], op0));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_USE (VOIDmode,
	operand0));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:17945 */
extern rtx gen_split_1801 (rtx, rtx *);
rtx
gen_split_1801 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 17956 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
{
  ix86_optimize_mode_switching[I387_CEIL] = 1;

  operands[2] = assign_386_stack_local (HImode, SLOT_CW_STORED);
  operands[3] = assign_386_stack_local (HImode, SLOT_CW_CEIL);
  if (memory_operand (operands[0], VOIDmode))
    emit_insn (gen_fisthi2_ceil (operands[0], operands[1],
				     operands[2], operands[3]));
  else
    {
      operands[4] = assign_386_stack_local (HImode, SLOT_TEMP);
      emit_insn (gen_fisthi2_ceil_with_temp (operands[0], operands[1],
						 operands[2], operands[3],
						 operands[4]));
    }
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:17945 */
extern rtx gen_split_1802 (rtx, rtx *);
rtx
gen_split_1802 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 17956 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
{
  ix86_optimize_mode_switching[I387_CEIL] = 1;

  operands[2] = assign_386_stack_local (HImode, SLOT_CW_STORED);
  operands[3] = assign_386_stack_local (HImode, SLOT_CW_CEIL);
  if (memory_operand (operands[0], VOIDmode))
    emit_insn (gen_fistsi2_ceil (operands[0], operands[1],
				     operands[2], operands[3]));
  else
    {
      operands[4] = assign_386_stack_local (SImode, SLOT_TEMP);
      emit_insn (gen_fistsi2_ceil_with_temp (operands[0], operands[1],
						 operands[2], operands[3],
						 operands[4]));
    }
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:17945 */
extern rtx gen_split_1803 (rtx, rtx *);
rtx
gen_split_1803 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 17956 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
{
  ix86_optimize_mode_switching[I387_CEIL] = 1;

  operands[2] = assign_386_stack_local (HImode, SLOT_CW_STORED);
  operands[3] = assign_386_stack_local (HImode, SLOT_CW_CEIL);
  if (memory_operand (operands[0], VOIDmode))
    emit_insn (gen_fistdi2_ceil (operands[0], operands[1],
				     operands[2], operands[3]));
  else
    {
      operands[4] = assign_386_stack_local (DImode, SLOT_TEMP);
      emit_insn (gen_fistdi2_ceil_with_temp (operands[0], operands[1],
						 operands[2], operands[3],
						 operands[4]));
    }
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:18006 */
extern rtx gen_split_1804 (rtx, rtx *);
rtx
gen_split_1804 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx _val = 0;
  start_sequence ();
#line 18020 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		gen_rtx_SET (VOIDmode,
	operand4,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (1,
		operand1),
	75)),
		gen_rtx_USE (VOIDmode,
	operand2),
		gen_rtx_USE (VOIDmode,
	operand3),
		gen_rtx_CLOBBER (VOIDmode,
	operand5))));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	copy_rtx (operand4)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:18022 */
extern rtx gen_split_1805 (rtx, rtx *);
rtx
gen_split_1805 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx _val = 0;
  start_sequence ();
#line 18035 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (1,
		operand1),
	75)),
		gen_rtx_USE (VOIDmode,
	operand2),
		gen_rtx_USE (VOIDmode,
	operand3),
		gen_rtx_CLOBBER (VOIDmode,
	operand5))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:18064 */
extern rtx gen_split_1806 (rtx, rtx *);
rtx
gen_split_1806 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx _val = 0;
  start_sequence ();
#line 18077 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand4,
	gen_rtx_UNSPEC (HImode,
	gen_rtvec (1,
		operand1),
	75)),
		gen_rtx_USE (VOIDmode,
	operand2),
		gen_rtx_USE (VOIDmode,
	operand3))));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	copy_rtx (operand4)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:18064 */
extern rtx gen_split_1807 (rtx, rtx *);
rtx
gen_split_1807 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx _val = 0;
  start_sequence ();
#line 18077 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand4,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		operand1),
	75)),
		gen_rtx_USE (VOIDmode,
	operand2),
		gen_rtx_USE (VOIDmode,
	operand3))));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	copy_rtx (operand4)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:18079 */
extern rtx gen_split_1808 (rtx, rtx *);
rtx
gen_split_1808 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
#line 18091 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (HImode,
	gen_rtvec (1,
		operand1),
	75)),
		gen_rtx_USE (VOIDmode,
	operand2),
		gen_rtx_USE (VOIDmode,
	operand3))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:18079 */
extern rtx gen_split_1809 (rtx, rtx *);
rtx
gen_split_1809 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
#line 18091 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		operand1),
	75)),
		gen_rtx_USE (VOIDmode,
	operand2),
		gen_rtx_USE (VOIDmode,
	operand3))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:18093 */
rtx
gen_lceilhi2 (rtx operand0,
	rtx operand1)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (HImode,
	gen_rtvec (1,
		operand1),
	75)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:18093 */
rtx
gen_lceilsi2 (rtx operand0,
	rtx operand1)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		operand1),
	75)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:18093 */
rtx
gen_lceildi2 (rtx operand0,
	rtx operand1)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (1,
		operand1),
	75)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:18104 */
extern rtx gen_split_1813 (rtx, rtx *);
rtx
gen_split_1813 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 18115 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
{
  ix86_optimize_mode_switching[I387_TRUNC] = 1;

  operands[2] = assign_386_stack_local (HImode, SLOT_CW_STORED);
  operands[3] = assign_386_stack_local (HImode, SLOT_CW_TRUNC);

  emit_insn (gen_frndintxf2_trunc_i387 (operands[0], operands[1],
					operands[2], operands[3]));
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:18142 */
rtx
gen_btruncxf2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 18147 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
{
  emit_insn (gen_frndintxf2_trunc (operands[0], operands[1]));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_USE (VOIDmode,
	operand0));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:18152 */
rtx
gen_btruncdf2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 18158 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
{
  rtx op0 = gen_reg_rtx (XFmode);
  rtx op1 = gen_reg_rtx (XFmode);

  emit_insn (gen_extenddfxf2 (op1, operands[1]));
  emit_insn (gen_frndintxf2_trunc (op0, op1));

  emit_insn (gen_truncxfdf2_i387_noop (operands[0], op0));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_USE (VOIDmode,
	operand0));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:18169 */
rtx
gen_btruncsf2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 18175 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
{
  rtx op0 = gen_reg_rtx (XFmode);
  rtx op1 = gen_reg_rtx (XFmode);

  emit_insn (gen_extendsfxf2 (op1, operands[1]));
  emit_insn (gen_frndintxf2_trunc (op0, op1));

  emit_insn (gen_truncxfsf2_i387_noop (operands[0], op0));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_USE (VOIDmode,
	operand0));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:18187 */
extern rtx gen_split_1817 (rtx, rtx *);
rtx
gen_split_1817 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 18198 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
{
  ix86_optimize_mode_switching[I387_MASK_PM] = 1;

  operands[2] = assign_386_stack_local (HImode, SLOT_CW_STORED);
  operands[3] = assign_386_stack_local (HImode, SLOT_CW_MASK_PM);

  emit_insn (gen_frndintxf2_mask_pm_i387 (operands[0], operands[1],
					  operands[2], operands[3]));
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:18225 */
rtx
gen_nearbyintxf2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 18230 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
{
  emit_insn (gen_frndintxf2_mask_pm (operands[0], operands[1]));

  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_USE (VOIDmode,
	operand0));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:18236 */
rtx
gen_nearbyintdf2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 18242 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
{
  rtx op0 = gen_reg_rtx (XFmode);
  rtx op1 = gen_reg_rtx (XFmode);

  emit_insn (gen_extenddfxf2 (op1, operands[1]));
  emit_insn (gen_frndintxf2_mask_pm (op0, op1));

  emit_insn (gen_truncxfdf2_i387_noop (operands[0], op0));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_USE (VOIDmode,
	operand0));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:18253 */
rtx
gen_nearbyintsf2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 18259 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
{
  rtx op0 = gen_reg_rtx (XFmode);
  rtx op1 = gen_reg_rtx (XFmode);

  emit_insn (gen_extendsfxf2 (op1, operands[1]));
  emit_insn (gen_frndintxf2_mask_pm (op0, op1));

  emit_insn (gen_truncxfsf2_i387_noop (operands[0], op0));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_USE (VOIDmode,
	operand0));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:18279 */
rtx
gen_movmemsi (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#line 18285 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
{
 if (ix86_expand_movmem (operands[0], operands[1], operands[2], operands[3]))
   DONE;
 else
   FAIL;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
  }
  emit_insn (gen_rtx_USE (VOIDmode,
	operand0));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand1));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand2));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand3));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:18292 */
rtx
gen_movmemdi (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#line 18298 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
{
 if (ix86_expand_movmem (operands[0], operands[1], operands[2], operands[3]))
   DONE;
 else
   FAIL;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
  }
  emit_insn (gen_rtx_USE (VOIDmode,
	operand0));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand1));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand2));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand3));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:18308 */
rtx
gen_strmov (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx operand4;
  rtx operand5;
  rtx operand6;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[7];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#line 18316 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
{
  rtx adjust = GEN_INT (GET_MODE_SIZE (GET_MODE (operands[1])));

  /* If .md ever supports :P for Pmode, these can be directly
     in the pattern above.  */
  operands[5] = gen_rtx_PLUS (Pmode, operands[0], adjust);
  operands[6] = gen_rtx_PLUS (Pmode, operands[2], adjust);

  if (TARGET_SINGLE_STRINGOP || optimize_size)
    {
      emit_insn (gen_strmov_singleop (operands[0], operands[1],
				      operands[2], operands[3],
				      operands[5], operands[6]));
      DONE;
    }

  operands[4] = gen_reg_rtx (GET_MODE (operands[1]));
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
    operand4 = operands[4];
    operand5 = operands[5];
    operand6 = operands[6];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand4,
	operand3));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand1,
	operand4));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	operand5),
		gen_hard_reg_clobber (CCmode, 17))));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand2,
	operand6),
		gen_hard_reg_clobber (CCmode, 17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:18335 */
rtx
gen_strmov_singleop (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3,
	rtx operand4,
	rtx operand5)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		gen_rtx_SET (VOIDmode,
	operand1,
	operand3),
		gen_rtx_SET (VOIDmode,
	operand0,
	operand4),
		gen_rtx_SET (VOIDmode,
	operand2,
	operand5),
		gen_rtx_USE (VOIDmode,
	gen_rtx_REG (SImode,
	19))));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:18458 */
rtx
gen_rep_mov (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3,
	rtx operand4,
	rtx operand5,
	rtx operand6)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (6,
		gen_rtx_SET (VOIDmode,
	operand4,
	const0_rtx),
		gen_rtx_SET (VOIDmode,
	operand0,
	operand5),
		gen_rtx_SET (VOIDmode,
	operand2,
	operand6),
		gen_rtx_SET (VOIDmode,
	operand1,
	operand3),
		gen_rtx_USE (VOIDmode,
	operand4),
		gen_rtx_USE (VOIDmode,
	gen_rtx_REG (SImode,
	19))));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:18567 */
rtx
gen_setmemsi (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#line 18573 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
{
 /* If value to set is not zero, use the library routine.  */
 if (operands[2] != const0_rtx)
   FAIL;

 if (ix86_expand_clrmem (operands[0], operands[1], operands[3]))
   DONE;
 else
   FAIL;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
  }
  emit_insn (gen_rtx_USE (VOIDmode,
	operand0));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand1));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand2));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand3));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:18584 */
rtx
gen_setmemdi (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#line 18590 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
{
 /* If value to set is not zero, use the library routine.  */
 if (operands[2] != const0_rtx)
   FAIL;

 if (ix86_expand_clrmem (operands[0], operands[1], operands[3]))
   DONE;
 else
   FAIL;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
  }
  emit_insn (gen_rtx_USE (VOIDmode,
	operand0));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand1));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand2));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand3));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:18604 */
rtx
gen_strset (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 18611 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
{
  if (GET_MODE (operands[1]) != GET_MODE (operands[2]))
    operands[1] = adjust_address_nv (operands[1], GET_MODE (operands[2]), 0);

  /* If .md ever supports :P for Pmode, this can be directly
     in the pattern above.  */
  operands[3] = gen_rtx_PLUS (Pmode, operands[0],
			      GEN_INT (GET_MODE_SIZE (GET_MODE
						      (operands[2]))));
  if (TARGET_SINGLE_STRINGOP || optimize_size)
    {
      emit_insn (gen_strset_singleop (operands[0], operands[1], operands[2],
				      operands[3]));
      DONE;
    }
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand1,
	operand2));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	operand3),
		gen_hard_reg_clobber (CCmode, 17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:18628 */
rtx
gen_strset_singleop (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand1,
	operand2),
		gen_rtx_SET (VOIDmode,
	operand0,
	operand3),
		gen_rtx_USE (VOIDmode,
	gen_rtx_REG (SImode,
	19))));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:18728 */
rtx
gen_rep_stos (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3,
	rtx operand4)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (6,
		gen_rtx_SET (VOIDmode,
	operand1,
	const0_rtx),
		gen_rtx_SET (VOIDmode,
	operand0,
	operand4),
		gen_rtx_SET (VOIDmode,
	operand2,
	const0_rtx),
		gen_rtx_USE (VOIDmode,
	operand3),
		gen_rtx_USE (VOIDmode,
	operand1),
		gen_rtx_USE (VOIDmode,
	gen_rtx_REG (SImode,
	19))));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:18827 */
rtx
gen_cmpstrnsi (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3,
	rtx operand4)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[5];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
    operands[4] = operand4;
#line 18835 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
{
  /* APPLE LOCAL begin 4134111 */
  rtx addr1, addr2, out, outlow, count, countreg, align, scratch;

  /* Can't use this if the user has appropriated esi or edi.  */
  if (global_regs[4] || global_regs[5])
    FAIL;

  /* The Darwin expansion is unsafe on volatile objects. */
  if (TARGET_MACHO
      && (MEM_VOLATILE_P (operands[1]) || MEM_VOLATILE_P (operands[2])))
    FAIL;

  /* APPLE LOCAL begin 4134510 */
  if (TARGET_MACHO)
  {
    count = operands[3];
    if (GET_CODE (count) != CONST_INT || INTVAL (count) > 30)
      FAIL;
  }
  /* APPLE LOCAL end 4134510 */

  if (TARGET_MACHO)
    scratch = gen_reg_rtx (SImode);

  out = operands[0];
  if (GET_CODE (out) != REG)
    out = gen_reg_rtx (SImode);

  addr1 = copy_to_mode_reg (Pmode, XEXP (operands[1], 0));
  addr2 = copy_to_mode_reg (Pmode, XEXP (operands[2], 0));
  if (addr1 != XEXP (operands[1], 0))
    operands[1] = replace_equiv_address_nv (operands[1], addr1);
  if (addr2 != XEXP (operands[2], 0))
    operands[2] = replace_equiv_address_nv (operands[2], addr2);

  count = operands[3];
  countreg = ix86_zero_extend_to_Pmode (count);

  /* %%% Iff we are testing strict equality, we can use known alignment
     to good advantage.  This may be possible with combine, particularly
     once cc0 is dead.  */
  align = operands[4];

  emit_insn (gen_cld ());
  if (GET_CODE (count) == CONST_INT)
    {
      if (INTVAL (count) == 0)
	{
	  emit_move_insn (operands[0], const0_rtx);
	  DONE;
	}
      if (!TARGET_MACHO)
        emit_insn (gen_cmpstrnqi_nz_1 (addr1, addr2, countreg, align,
				       operands[1], operands[2]));
      else
        emit_insn (gen_darwin_cmpstrnqi_nz_1 (out, addr1, addr2, countreg, align,
					      operands[1], operands[2], scratch));
    }
  else
    {
      if (TARGET_64BIT)
	emit_insn (gen_cmpdi_1_rex64 (countreg, countreg));
      else
	emit_insn (gen_cmpsi_1 (countreg, countreg));
      if (!TARGET_MACHO)
        emit_insn (gen_cmpstrnqi_1 (addr1, addr2, countreg, align,
				    operands[1], operands[2]));
      else
        emit_insn (gen_darwin_cmpstrqi_1 (out, addr1, addr2, countreg, align,
					  operands[1], operands[2], scratch));
    }

  if (!TARGET_MACHO)
    {
      outlow = gen_lowpart (QImode, out);
      emit_insn (gen_cmpintqi (outlow));
      emit_move_insn (out, gen_rtx_SIGN_EXTEND (SImode, outlow));
    }
  /* APPLE LOCAL end 4134111 */

  if (operands[0] != out)
    emit_move_insn (operands[0], out);

  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
    operand4 = operands[4];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_COMPARE (SImode,
	operand1,
	operand2)));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand3));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand4));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:18924 */
rtx
gen_cmpintqi (rtx operand0)
{
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
#line 18934 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
operands[1] = gen_reg_rtx (QImode);
   operands[2] = gen_reg_rtx (QImode);
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand1,
	gen_rtx_GTU (QImode,
	gen_rtx_REG (CCmode,
	17),
	const0_rtx)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_LTU (QImode,
	gen_rtx_REG (CCmode,
	17),
	const0_rtx)));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (QImode,
	operand1,
	operand2)),
		gen_hard_reg_clobber (CCmode, 17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:18940 */
rtx
gen_cmpstrnqi_nz_1 (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3,
	rtx operand4,
	rtx operand5)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (7,
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCmode,
	17),
	gen_rtx_COMPARE (CCmode,
	operand4,
	operand5)),
		gen_rtx_USE (VOIDmode,
	operand2),
		gen_rtx_USE (VOIDmode,
	operand3),
		gen_rtx_USE (VOIDmode,
	gen_rtx_REG (SImode,
	19)),
		gen_rtx_CLOBBER (VOIDmode,
	operand0),
		gen_rtx_CLOBBER (VOIDmode,
	operand1),
		gen_rtx_CLOBBER (VOIDmode,
	operand2)));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:18987 */
rtx
gen_cmpstrnqi_1 (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3,
	rtx operand4,
	rtx operand5)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (7,
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCmode,
	17),
	gen_rtx_IF_THEN_ELSE (CCmode,
	gen_rtx_NE (VOIDmode,
	operand2,
	const0_rtx),
	gen_rtx_COMPARE (CCmode,
	operand4,
	operand5),
	const0_rtx)),
		gen_rtx_USE (VOIDmode,
	operand3),
		gen_rtx_USE (VOIDmode,
	gen_rtx_REG (CCmode,
	17)),
		gen_rtx_USE (VOIDmode,
	gen_rtx_REG (SImode,
	19)),
		gen_rtx_CLOBBER (VOIDmode,
	operand0),
		gen_rtx_CLOBBER (VOIDmode,
	operand1),
		gen_rtx_CLOBBER (VOIDmode,
	operand2)));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:19047 */
rtx
gen_darwin_cmpstrnqi_nz_1 (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3,
	rtx operand4,
	rtx operand5,
	rtx operand6,
	rtx operand7)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (9,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SUBREG (SImode,
	gen_rtx_COMPARE (CCmode,
	operand5,
	operand6),
	0)),
		gen_rtx_USE (VOIDmode,
	operand3),
		gen_rtx_USE (VOIDmode,
	operand4),
		gen_rtx_USE (VOIDmode,
	gen_rtx_REG (SImode,
	19)),
		gen_rtx_CLOBBER (VOIDmode,
	operand1),
		gen_rtx_CLOBBER (VOIDmode,
	operand2),
		gen_rtx_CLOBBER (VOIDmode,
	operand7),
		gen_hard_reg_clobber (CCmode, 17),
		gen_rtx_CLOBBER (VOIDmode,
	operand3)));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:19081 */
rtx
gen_darwin_cmpstrqi_1 (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3,
	rtx operand4,
	rtx operand5,
	rtx operand6,
	rtx operand7)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (9,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SUBREG (SImode,
	gen_rtx_IF_THEN_ELSE (CCmode,
	gen_rtx_NE (VOIDmode,
	operand3,
	const0_rtx),
	gen_rtx_COMPARE (CCmode,
	operand5,
	operand6),
	const0_rtx),
	0)),
		gen_rtx_USE (VOIDmode,
	operand4),
		gen_rtx_USE (VOIDmode,
	gen_rtx_REG (SImode,
	19)),
		gen_rtx_USE (VOIDmode,
	gen_rtx_REG (CCmode,
	17)),
		gen_rtx_CLOBBER (VOIDmode,
	operand1),
		gen_rtx_CLOBBER (VOIDmode,
	operand2),
		gen_rtx_CLOBBER (VOIDmode,
	operand7),
		gen_hard_reg_clobber (CCmode, 17),
		gen_rtx_CLOBBER (VOIDmode,
	operand3)));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:19123 */
rtx
gen_strlensi (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#line 19129 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
{
 if (ix86_expand_strlen (operands[0], operands[1], operands[2], operands[3]))
   DONE;
 else
   FAIL;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	20)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:19136 */
rtx
gen_strlendi (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#line 19142 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
{
 if (ix86_expand_strlen (operands[0], operands[1], operands[2], operands[3]))
   DONE;
 else
   FAIL;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	20)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:19149 */
rtx
gen_strlenqi_1 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		gen_rtx_SET (VOIDmode,
	operand0,
	operand2),
		gen_rtx_USE (VOIDmode,
	gen_rtx_REG (SImode,
	19)),
		gen_rtx_CLOBBER (VOIDmode,
	operand1),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:19201 */
extern rtx gen_peephole2_1840 (rtx, rtx *);
rtx
gen_peephole2_1840 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx operand6;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  start_sequence ();
#line 19230 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  operand6 = operands[6];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (7,
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCmode,
	17),
	gen_rtx_COMPARE (CCmode,
	gen_rtx_MEM (BLKmode,
	operand4),
	gen_rtx_MEM (BLKmode,
	operand5))),
		gen_rtx_USE (VOIDmode,
	operand6),
		gen_rtx_USE (VOIDmode,
	operand3),
		gen_rtx_USE (VOIDmode,
	gen_rtx_REG (SImode,
	19)),
		gen_rtx_CLOBBER (VOIDmode,
	operand0),
		gen_rtx_CLOBBER (VOIDmode,
	operand1),
		gen_rtx_CLOBBER (VOIDmode,
	operand2))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:19233 */
extern rtx gen_peephole2_1841 (rtx, rtx *);
rtx
gen_peephole2_1841 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx operand6;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  start_sequence ();
#line 19268 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  operand6 = operands[6];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (7,
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCmode,
	17),
	gen_rtx_IF_THEN_ELSE (CCmode,
	gen_rtx_NE (VOIDmode,
	operand6,
	const0_rtx),
	gen_rtx_COMPARE (CCmode,
	gen_rtx_MEM (BLKmode,
	operand4),
	gen_rtx_MEM (BLKmode,
	operand5)),
	const0_rtx)),
		gen_rtx_USE (VOIDmode,
	operand3),
		gen_rtx_USE (VOIDmode,
	gen_rtx_REG (CCmode,
	17)),
		gen_rtx_USE (VOIDmode,
	gen_rtx_REG (SImode,
	19)),
		gen_rtx_CLOBBER (VOIDmode,
	operand0),
		gen_rtx_CLOBBER (VOIDmode,
	operand1),
		gen_rtx_CLOBBER (VOIDmode,
	operand2))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:19274 */
rtx
gen_movdicc (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#line 19280 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
if (!ix86_expand_int_movcc (operands)) FAIL; DONE;
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IF_THEN_ELSE (DImode,
	operand1,
	operand2,
	operand3)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:19313 */
rtx
gen_movsicc (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#line 19319 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
if (!ix86_expand_int_movcc (operands)) FAIL; DONE;
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IF_THEN_ELSE (SImode,
	operand1,
	operand2,
	operand3)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:19356 */
rtx
gen_movhicc (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#line 19362 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
if (!ix86_expand_int_movcc (operands)) FAIL; DONE;
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IF_THEN_ELSE (HImode,
	operand1,
	operand2,
	operand3)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:19378 */
rtx
gen_movqicc (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#line 19384 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
if (!ix86_expand_int_movcc (operands)) FAIL; DONE;
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IF_THEN_ELSE (QImode,
	operand1,
	operand2,
	operand3)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:19386 */
extern rtx gen_split_1846 (rtx, rtx *);
rtx
gen_split_1846 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx _val = 0;
  start_sequence ();
#line 19400 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
operands[0] = gen_lowpart (SImode, operands[0]);
   operands[2] = gen_lowpart (SImode, operands[2]);
   operands[3] = gen_lowpart (SImode, operands[3]);
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IF_THEN_ELSE (SImode,
	gen_rtx_fmt_ee (GET_CODE (operand1), GET_MODE (operand1),
		operand4,
		const0_rtx),
	operand2,
	operand3)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:19406 */
rtx
gen_movsfcc (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#line 19412 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
if (! ix86_expand_fp_movcc (operands)) FAIL; DONE;
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IF_THEN_ELSE (SFmode,
	operand1,
	operand2,
	operand3)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:19430 */
rtx
gen_movdfcc (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#line 19436 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
if (! ix86_expand_fp_movcc (operands)) FAIL; DONE;
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IF_THEN_ELSE (DFmode,
	operand1,
	operand2,
	operand3)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:19470 */
extern rtx gen_split_1849 (rtx, rtx *);
rtx
gen_split_1849 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx operand6;
  rtx operand7;
  rtx operand8;
  rtx _val = 0;
  start_sequence ();
#line 19486 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
split_di (operands+2, 1, operands+5, operands+6);
   split_di (operands+3, 1, operands+7, operands+8);
   split_di (operands, 1, operands+2, operands+3);
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  operand6 = operands[6];
  operand7 = operands[7];
  operand8 = operands[8];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_IF_THEN_ELSE (SImode,
	gen_rtx_fmt_ee (GET_CODE (operand1), GET_MODE (operand1),
		operand4,
		const0_rtx),
	operand5,
	operand7)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_IF_THEN_ELSE (SImode,
	gen_rtx_fmt_ee (GET_CODE (operand1), GET_MODE (operand1),
		copy_rtx (operand4),
		const0_rtx),
	operand6,
	operand8)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:19490 */
rtx
gen_movxfcc (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#line 19496 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
if (! ix86_expand_fp_movcc (operands)) FAIL; DONE;
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IF_THEN_ELSE (XFmode,
	operand1,
	operand2,
	operand3)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:19604 */
extern rtx gen_peephole2_1851 (rtx, rtx *);
rtx
gen_peephole2_1851 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  start_sequence ();
#line 19617 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
if (COMMUTATIVE_ARITH_P (operands[2]))
     operands[4] = gen_rtx_fmt_ee (GET_CODE (operands[2]), GET_MODE (operands[2]),
				 operands[0], operands[1]);
   else
     operands[4] = gen_rtx_fmt_ee (GET_CODE (operands[2]), GET_MODE (operands[2]),
				 operands[1], operands[0]);
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand3));
  emit_insn (gen_rtx_SET (VOIDmode,
	copy_rtx (operand0),
	operand4));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:19625 */
rtx
gen_addqicc (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#line 19631 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
if (!ix86_expand_int_addcc (operands)) FAIL; DONE;
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
  }
  emit (operand0);
  emit (operand1);
  emit (operand2);
  emit (operand3);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:19633 */
rtx
gen_addhicc (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#line 19639 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
if (!ix86_expand_int_addcc (operands)) FAIL; DONE;
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
  }
  emit (operand0);
  emit (operand1);
  emit (operand2);
  emit (operand3);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:19641 */
rtx
gen_addsicc (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#line 19647 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
if (!ix86_expand_int_addcc (operands)) FAIL; DONE;
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
  }
  emit (operand0);
  emit (operand1);
  emit (operand2);
  emit (operand3);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:19649 */
rtx
gen_adddicc (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#line 19655 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
if (!ix86_expand_int_addcc (operands)) FAIL; DONE;
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
  }
  emit (operand0);
  emit (operand1);
  emit (operand2);
  emit (operand3);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:19778 */
rtx
gen_allocate_stack_worker (rtx operand0)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[1];
    operands[0] = operand0;
#line 19781 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
{
  if (reload_completed)
    {
      if (TARGET_64BIT)
	emit_insn (gen_allocate_stack_worker_rex64_postreload (operands[0]));
      else
	emit_insn (gen_allocate_stack_worker_postreload (operands[0]));
    }
  else
    {
      if (TARGET_64BIT)
	emit_insn (gen_allocate_stack_worker_rex64 (operands[0]));
      else
	emit_insn (gen_allocate_stack_worker_1 (operands[0]));
    }
  DONE;
}
    operand0 = operands[0];
  }
  emit (operand0);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:19810 */
rtx
gen_allocate_stack_worker_postreload (rtx operand0)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (1,
		operand0),
	1),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (SImode,
	7),
	gen_rtx_MINUS (SImode,
	gen_rtx_REG (SImode,
	7),
	operand0)),
		gen_rtx_CLOBBER (VOIDmode,
	operand0),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:19830 */
rtx
gen_allocate_stack_worker_rex64_postreload (rtx operand0)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		gen_rtx_UNSPEC_VOLATILE (DImode,
	gen_rtvec (1,
		operand0),
	1),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (DImode,
	7),
	gen_rtx_MINUS (DImode,
	gen_rtx_REG (DImode,
	7),
	operand0)),
		gen_rtx_CLOBBER (VOIDmode,
	operand0),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:19839 */
rtx
gen_allocate_stack (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 19848 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
{
#ifdef CHECK_STACK_LIMIT
  if (GET_CODE (operands[1]) == CONST_INT
      && INTVAL (operands[1]) < CHECK_STACK_LIMIT)
    emit_insn (gen_subsi3 (stack_pointer_rtx, stack_pointer_rtx,
			   operands[1]));
  else 
#endif
    emit_insn (gen_allocate_stack_worker (copy_to_mode_reg (SImode,
							    operands[1])));

  emit_move_insn (operands[0], virtual_stack_dynamic_rtx);
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (SImode,
	gen_rtx_REG (SImode,
	7),
	operand1)),
		gen_hard_reg_clobber (CCmode, 17))));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (SImode,
	7),
	gen_rtx_MINUS (SImode,
	gen_rtx_REG (SImode,
	7),
	operand1)),
		gen_hard_reg_clobber (CCmode, 17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:19863 */
rtx
gen_builtin_setjmp_receiver (rtx operand0)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[1];
    operands[0] = operand0;
#line 19866 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
{
  if (TARGET_MACHO)
    {
      rtx xops[3];
      rtx picreg = gen_rtx_REG (Pmode, PIC_OFFSET_TABLE_REGNUM);
      rtx label_rtx = gen_label_rtx ();
      emit_insn (gen_set_got_labelled (pic_offset_table_rtx, label_rtx));
      xops[0] = xops[1] = picreg;
      xops[2] = gen_rtx_CONST (SImode,
	          gen_rtx_MINUS (SImode,
		    gen_rtx_LABEL_REF (SImode, label_rtx),
		    gen_rtx_SYMBOL_REF (SImode, GOT_SYMBOL_NAME)));
      ix86_expand_binary_operator (MINUS, SImode, xops);
    }
  else
    emit_insn (gen_set_got (pic_offset_table_rtx));
  DONE;
}
    operand0 = operands[0];
  }
  emit_insn (gen_rtx_LABEL_REF (VOIDmode,
	operand0));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:19887 */
extern rtx gen_split_1861 (rtx, rtx *);
rtx
gen_split_1861 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
#line 19904 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
operands[0] = gen_lowpart (SImode, operands[0]);
   operands[1] = gen_lowpart (SImode, operands[1]);
   if (GET_CODE (operands[3]) != ASHIFT)
     operands[2] = gen_lowpart (SImode, operands[2]);
   PUT_MODE (operands[3], SImode);
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_fmt_ee (GET_CODE (operand3), GET_MODE (operand3),
		operand1,
		operand2)),
		gen_hard_reg_clobber (CCmode, 17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:19914 */
extern rtx gen_split_1862 (rtx, rtx *);
rtx
gen_split_1862 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx _val = 0;
  start_sequence ();
#line 19933 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
{
  operands[4]
    = gen_int_mode (INTVAL (operands[4])
		    & GET_MODE_MASK (GET_MODE (operands[1])), SImode);
  operands[1] = gen_lowpart (SImode, operands[1]);
  operands[3] = gen_lowpart (SImode, operands[3]);
}
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_fmt_ee (GET_CODE (operand2), GET_MODE (operand2),
		gen_rtx_AND (SImode,
	operand3,
	operand4),
		const0_rtx)),
		gen_rtx_SET (VOIDmode,
	operand1,
	gen_rtx_AND (SImode,
	copy_rtx (operand3),
	copy_rtx (operand4))))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:19945 */
extern rtx gen_split_1863 (rtx, rtx *);
rtx
gen_split_1863 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
#line 19959 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
{
  operands[3]
    = gen_int_mode (INTVAL (operands[3])
		    & GET_MODE_MASK (GET_MODE (operands[2])), SImode);
  operands[2] = gen_lowpart (SImode, operands[2]);
}
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_fmt_ee (GET_CODE (operand1), GET_MODE (operand1),
		gen_rtx_AND (SImode,
	operand2,
	operand3),
		const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:19966 */
extern rtx gen_split_1864 (rtx, rtx *);
rtx
gen_split_1864 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
#line 19977 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
operands[0] = gen_lowpart (SImode, operands[0]);
   operands[1] = gen_lowpart (SImode, operands[1]);
  operand0 = operands[0];
  operand1 = operands[1];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NEG (SImode,
	operand1)),
		gen_hard_reg_clobber (CCmode, 17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:19980 */
extern rtx gen_split_1865 (rtx, rtx *);
rtx
gen_split_1865 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
#line 19989 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
operands[0] = gen_lowpart (SImode, operands[0]);
   operands[1] = gen_lowpart (SImode, operands[1]);
  operand0 = operands[0];
  operand1 = operands[1];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NOT (SImode,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:19992 */
extern rtx gen_split_1866 (rtx, rtx *);
rtx
gen_split_1866 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
#line 20004 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
operands[0] = gen_lowpart (SImode, operands[0]);
   operands[2] = gen_lowpart (SImode, operands[2]);
   operands[3] = gen_lowpart (SImode, operands[3]);
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IF_THEN_ELSE (SImode,
	operand1,
	operand2,
	operand3)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:20013 */
extern rtx gen_peephole2_1867 (rtx, rtx *);
rtx
gen_peephole2_1867 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  if ((operands[2] = peep2_find_free_register (1, 1, "r", SImode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  start_sequence ();
#line 20021 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	operand1));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	copy_rtx (operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:20023 */
extern rtx gen_peephole2_1868 (rtx, rtx *);
rtx
gen_peephole2_1868 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  if ((operands[2] = peep2_find_free_register (1, 1, "r", DImode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  start_sequence ();
#line 20031 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	operand1));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	copy_rtx (operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:20035 */
extern rtx gen_peephole2_1869 (rtx, rtx *);
rtx
gen_peephole2_1869 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  if ((operands[2] = peep2_find_free_register (1, 1, "r", SFmode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  start_sequence ();
#line 20043 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	operand1));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	copy_rtx (operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:20045 */
extern rtx gen_peephole2_1870 (rtx, rtx *);
rtx
gen_peephole2_1870 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  if ((operands[2] = peep2_find_free_register (1, 1, "r", HImode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  start_sequence ();
#line 20053 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	operand1));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	copy_rtx (operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:20055 */
extern rtx gen_peephole2_1871 (rtx, rtx *);
rtx
gen_peephole2_1871 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  if ((operands[2] = peep2_find_free_register (1, 1, "q", QImode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  start_sequence ();
#line 20063 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	operand1));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	copy_rtx (operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:20067 */
extern rtx gen_peephole2_1872 (rtx, rtx *);
rtx
gen_peephole2_1872 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  if ((operands[1] = peep2_find_free_register (0, 0, "r", SImode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  start_sequence ();
#line 20079 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand1,
	const0_rtx),
		gen_hard_reg_clobber (CCmode, 17))));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	copy_rtx (operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:20081 */
extern rtx gen_peephole2_1873 (rtx, rtx *);
rtx
gen_peephole2_1873 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  if ((operands[1] = peep2_find_free_register (0, 0, "r", HImode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  start_sequence ();
#line 20093 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
operands[2] = gen_lowpart (SImode, operands[1]);
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand2,
	const0_rtx),
		gen_hard_reg_clobber (CCmode, 17))));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:20095 */
extern rtx gen_peephole2_1874 (rtx, rtx *);
rtx
gen_peephole2_1874 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  if ((operands[1] = peep2_find_free_register (0, 0, "q", QImode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  start_sequence ();
#line 20107 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
operands[2] = gen_lowpart (SImode, operands[1]);
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand2,
	const0_rtx),
		gen_hard_reg_clobber (CCmode, 17))));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:20109 */
extern rtx gen_peephole2_1875 (rtx, rtx *);
rtx
gen_peephole2_1875 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  if ((operands[2] = peep2_find_free_register (0, 0, "r", SImode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  start_sequence ();
#line 20118 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	operand1));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	copy_rtx (operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:20120 */
extern rtx gen_peephole2_1876 (rtx, rtx *);
rtx
gen_peephole2_1876 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  if ((operands[2] = peep2_find_free_register (0, 0, "r", HImode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  start_sequence ();
#line 20128 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	operand1));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	copy_rtx (operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:20130 */
extern rtx gen_peephole2_1877 (rtx, rtx *);
rtx
gen_peephole2_1877 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  if ((operands[2] = peep2_find_free_register (0, 0, "q", QImode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  start_sequence ();
#line 20138 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	operand1));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	copy_rtx (operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:20141 */
extern rtx gen_peephole2_1878 (rtx, rtx *);
rtx
gen_peephole2_1878 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  if ((operands[3] = peep2_find_free_register (1, 1, "r", SImode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  start_sequence ();
#line 20150 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	operand2));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_fmt_ee (GET_CODE (operand1), GET_MODE (operand1),
		copy_rtx (operand3),
		const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:20163 */
extern rtx gen_peephole2_1879 (rtx, rtx *);
rtx
gen_peephole2_1879 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  start_sequence ();
#line 20175 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_XOR (SImode,
	operand1,
	constm1_rtx)),
		gen_hard_reg_clobber (CCmode, 17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:20177 */
extern rtx gen_peephole2_1880 (rtx, rtx *);
rtx
gen_peephole2_1880 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  start_sequence ();
#line 20189 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_XOR (HImode,
	operand1,
	constm1_rtx)),
		gen_hard_reg_clobber (CCmode, 17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:20191 */
extern rtx gen_peephole2_1881 (rtx, rtx *);
rtx
gen_peephole2_1881 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  start_sequence ();
#line 20203 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_XOR (QImode,
	operand1,
	constm1_rtx)),
		gen_hard_reg_clobber (CCmode, 17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:20212 */
extern rtx gen_peephole2_1882 (rtx, rtx *);
rtx
gen_peephole2_1882 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  start_sequence ();
#line 20228 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_fmt_ee (GET_CODE (operand1), GET_MODE (operand1),
		gen_rtx_AND (SImode,
	operand2,
	operand3),
		const0_rtx)),
		gen_rtx_SET (VOIDmode,
	copy_rtx (operand2),
	gen_rtx_AND (SImode,
	copy_rtx (operand2),
	copy_rtx (operand3))))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:20233 */
extern rtx gen_peephole2_1883 (rtx, rtx *);
rtx
gen_peephole2_1883 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  start_sequence ();
#line 20249 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_fmt_ee (GET_CODE (operand1), GET_MODE (operand1),
		gen_rtx_AND (QImode,
	operand2,
	operand3),
		const0_rtx)),
		gen_rtx_SET (VOIDmode,
	copy_rtx (operand2),
	gen_rtx_AND (QImode,
	copy_rtx (operand2),
	copy_rtx (operand3))))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:20251 */
extern rtx gen_peephole2_1884 (rtx, rtx *);
rtx
gen_peephole2_1884 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  start_sequence ();
#line 20283 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_fmt_ee (GET_CODE (operand1), GET_MODE (operand1),
		gen_rtx_AND (SImode,
	gen_rtx_ZERO_EXTRACT (SImode,
	operand2,
	const_int_rtx[MAX_SAVED_CONST_INT + (8)],
	const_int_rtx[MAX_SAVED_CONST_INT + (8)]),
	operand3),
		const0_rtx)),
		gen_rtx_SET (VOIDmode,
	gen_rtx_ZERO_EXTRACT (SImode,
	copy_rtx (operand2),
	const_int_rtx[MAX_SAVED_CONST_INT + (8)],
	const_int_rtx[MAX_SAVED_CONST_INT + (8)]),
	gen_rtx_AND (SImode,
	gen_rtx_ZERO_EXTRACT (SImode,
	copy_rtx (operand2),
	const_int_rtx[MAX_SAVED_CONST_INT + (8)],
	const_int_rtx[MAX_SAVED_CONST_INT + (8)]),
	copy_rtx (operand3))))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:20286 */
extern rtx gen_peephole2_1885 (rtx, rtx *);
rtx
gen_peephole2_1885 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  if ((operands[2] = peep2_find_free_register (0, 0, "r", SImode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  start_sequence ();
#line 20298 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	operand1));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_fmt_ee (GET_CODE (operand3), GET_MODE (operand3),
		copy_rtx (operand0),
		copy_rtx (operand2))),
		gen_hard_reg_clobber (CCmode, 17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:20300 */
extern rtx gen_peephole2_1886 (rtx, rtx *);
rtx
gen_peephole2_1886 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  if ((operands[2] = peep2_find_free_register (0, 0, "r", SImode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  start_sequence ();
#line 20312 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	operand1));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_fmt_ee (GET_CODE (operand3), GET_MODE (operand3),
		copy_rtx (operand2),
		copy_rtx (operand0))),
		gen_hard_reg_clobber (CCmode, 17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:20320 */
extern rtx gen_peephole2_1887 (rtx, rtx *);
rtx
gen_peephole2_1887 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  if ((operands[2] = peep2_find_free_register (0, 0, "r", SImode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  start_sequence ();
#line 20333 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	operand0));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	copy_rtx (operand2),
	gen_rtx_fmt_ee (GET_CODE (operand3), GET_MODE (operand3),
		copy_rtx (operand2),
		operand1)),
		gen_hard_reg_clobber (CCmode, 17))));
  emit_insn (gen_rtx_SET (VOIDmode,
	copy_rtx (operand0),
	copy_rtx (operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:20335 */
extern rtx gen_peephole2_1888 (rtx, rtx *);
rtx
gen_peephole2_1888 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  if ((operands[2] = peep2_find_free_register (0, 0, "r", SImode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  start_sequence ();
#line 20348 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	operand0));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	copy_rtx (operand2),
	gen_rtx_fmt_ee (GET_CODE (operand3), GET_MODE (operand3),
		operand1,
		copy_rtx (operand2))),
		gen_hard_reg_clobber (CCmode, 17))));
  emit_insn (gen_rtx_SET (VOIDmode,
	copy_rtx (operand0),
	copy_rtx (operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:20351 */
extern rtx gen_peephole2_1889 (rtx, rtx *);
rtx
gen_peephole2_1889 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  start_sequence ();
#line 20360 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
{
  operands[0] = gen_lowpart (word_mode, operands[0]);
}
  operand0 = operands[0];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	const0_rtx),
		gen_hard_reg_clobber (CCmode, 17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:20364 */
extern rtx gen_peephole2_1890 (rtx, rtx *);
rtx
gen_peephole2_1890 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  start_sequence ();
  operand0 = operands[0];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	gen_rtx_STRICT_LOW_PART (VOIDmode,
	operand0),
	const0_rtx),
		gen_hard_reg_clobber (CCmode, 17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:20375 */
extern rtx gen_peephole2_1891 (rtx, rtx *);
rtx
gen_peephole2_1891 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  start_sequence ();
#line 20385 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
operands[0] = gen_lowpart (GET_MODE (operands[0]) == DImode ? DImode : SImode,
			      operands[0]);
  operand0 = operands[0];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	constm1_rtx),
		gen_hard_reg_clobber (CCmode, 17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:20390 */
extern rtx gen_peephole2_1892 (rtx, rtx *);
rtx
gen_peephole2_1892 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  start_sequence ();
#line 20397 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (SImode,
	copy_rtx (operand0),
	operand1)),
		gen_hard_reg_clobber (CCmode, 17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:20399 */
extern rtx gen_peephole2_1893 (rtx, rtx *);
rtx
gen_peephole2_1893 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  start_sequence ();
#line 20406 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
operands[2] = gen_lowpart (SImode, operands[2]);
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (SImode,
	copy_rtx (operand0),
	operand2)),
		gen_hard_reg_clobber (CCmode, 17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:20408 */
extern rtx gen_peephole2_1894 (rtx, rtx *);
rtx
gen_peephole2_1894 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  start_sequence ();
#line 20415 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (DImode,
	copy_rtx (operand0),
	operand1)),
		gen_hard_reg_clobber (CCmode, 17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:20417 */
extern rtx gen_peephole2_1895 (rtx, rtx *);
rtx
gen_peephole2_1895 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  start_sequence ();
#line 20425 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
operands[2] = GEN_INT (exact_log2 (INTVAL (operands[1])));
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFT (SImode,
	copy_rtx (operand0),
	operand2)),
		gen_hard_reg_clobber (CCmode, 17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:20427 */
extern rtx gen_peephole2_1896 (rtx, rtx *);
rtx
gen_peephole2_1896 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  start_sequence ();
#line 20435 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
operands[2] = GEN_INT (exact_log2 (INTVAL (operands[1])));
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFT (DImode,
	copy_rtx (operand0),
	operand2)),
		gen_hard_reg_clobber (CCmode, 17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:20437 */
extern rtx gen_peephole2_1897 (rtx, rtx *);
rtx
gen_peephole2_1897 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  start_sequence ();
#line 20446 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
operands[2] = GEN_INT (exact_log2 (INTVAL (operands[2])));
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFT (SImode,
	copy_rtx (operand0),
	operand2)),
		gen_hard_reg_clobber (CCmode, 17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:20467 */
extern rtx gen_peephole2_1898 (rtx, rtx *);
rtx
gen_peephole2_1898 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  if ((operands[0] = peep2_find_free_register (0, 0, "r", SImode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  start_sequence ();
  operand0 = operands[0];
  emit_insn (gen_rtx_CLOBBER (VOIDmode,
	operand0));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (SImode,
	gen_rtx_PRE_DEC (SImode,
	gen_rtx_REG (SImode,
	7))),
	copy_rtx (operand0)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_MEM (BLKmode,
	gen_rtx_SCRATCH (VOIDmode))))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:20477 */
extern rtx gen_peephole2_1899 (rtx, rtx *);
rtx
gen_peephole2_1899 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  if ((operands[0] = peep2_find_free_register (0, 0, "r", SImode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  start_sequence ();
  operand0 = operands[0];
  emit_insn (gen_rtx_CLOBBER (VOIDmode,
	operand0));
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (SImode,
	gen_rtx_PRE_DEC (SImode,
	gen_rtx_REG (SImode,
	7))),
	copy_rtx (operand0)));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (SImode,
	gen_rtx_PRE_DEC (SImode,
	gen_rtx_REG (SImode,
	7))),
	copy_rtx (operand0)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_MEM (BLKmode,
	gen_rtx_SCRATCH (VOIDmode))))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:20489 */
extern rtx gen_peephole2_1900 (rtx, rtx *);
rtx
gen_peephole2_1900 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  if ((operands[0] = peep2_find_free_register (0, 0, "r", SImode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  start_sequence ();
  operand0 = operands[0];
  emit_insn (gen_rtx_CLOBBER (VOIDmode,
	operand0));
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (SImode,
	gen_rtx_PRE_DEC (SImode,
	gen_rtx_REG (SImode,
	7))),
	copy_rtx (operand0)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:20497 */
extern rtx gen_peephole2_1901 (rtx, rtx *);
rtx
gen_peephole2_1901 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  if ((operands[0] = peep2_find_free_register (0, 0, "r", SImode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  start_sequence ();
  operand0 = operands[0];
  emit_insn (gen_rtx_CLOBBER (VOIDmode,
	operand0));
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (SImode,
	gen_rtx_PRE_DEC (SImode,
	gen_rtx_REG (SImode,
	7))),
	copy_rtx (operand0)));
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (SImode,
	gen_rtx_PRE_DEC (SImode,
	gen_rtx_REG (SImode,
	7))),
	copy_rtx (operand0)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:20507 */
extern rtx gen_peephole2_1902 (rtx, rtx *);
rtx
gen_peephole2_1902 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  if ((operands[0] = peep2_find_free_register (0, 0, "r", SImode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  start_sequence ();
#line 20516 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"

  operand0 = operands[0];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MEM (SImode,
	gen_rtx_REG (SImode,
	7))),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (SImode,
	7),
	gen_rtx_PLUS (SImode,
	gen_rtx_REG (SImode,
	7),
	const_int_rtx[MAX_SAVED_CONST_INT + (4)])),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_MEM (BLKmode,
	gen_rtx_SCRATCH (VOIDmode))))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:20520 */
extern rtx gen_peephole2_1903 (rtx, rtx *);
rtx
gen_peephole2_1903 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  if ((operands[0] = peep2_find_free_register (0, 0, "r", SImode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  if ((operands[1] = peep2_find_free_register (0, 0, "r", SImode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  start_sequence ();
#line 20532 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MEM (SImode,
	gen_rtx_REG (SImode,
	7))),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (SImode,
	7),
	gen_rtx_PLUS (SImode,
	gen_rtx_REG (SImode,
	7),
	const_int_rtx[MAX_SAVED_CONST_INT + (4)])),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_MEM (BLKmode,
	gen_rtx_SCRATCH (VOIDmode))))));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand1,
	gen_rtx_MEM (SImode,
	gen_rtx_REG (SImode,
	7))),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (SImode,
	7),
	gen_rtx_PLUS (SImode,
	gen_rtx_REG (SImode,
	7),
	const_int_rtx[MAX_SAVED_CONST_INT + (4)])))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:20534 */
extern rtx gen_peephole2_1904 (rtx, rtx *);
rtx
gen_peephole2_1904 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  if ((operands[0] = peep2_find_free_register (0, 0, "r", SImode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  start_sequence ();
#line 20545 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"

  operand0 = operands[0];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MEM (SImode,
	gen_rtx_REG (SImode,
	7))),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (SImode,
	7),
	gen_rtx_PLUS (SImode,
	gen_rtx_REG (SImode,
	7),
	const_int_rtx[MAX_SAVED_CONST_INT + (4)])),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_MEM (BLKmode,
	gen_rtx_SCRATCH (VOIDmode))))));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	copy_rtx (operand0),
	gen_rtx_MEM (SImode,
	gen_rtx_REG (SImode,
	7))),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (SImode,
	7),
	gen_rtx_PLUS (SImode,
	gen_rtx_REG (SImode,
	7),
	const_int_rtx[MAX_SAVED_CONST_INT + (4)])))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:20548 */
extern rtx gen_peephole2_1905 (rtx, rtx *);
rtx
gen_peephole2_1905 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  if ((operands[0] = peep2_find_free_register (0, 0, "r", SImode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  start_sequence ();
#line 20555 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"

  operand0 = operands[0];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MEM (SImode,
	gen_rtx_REG (SImode,
	7))),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (SImode,
	7),
	gen_rtx_PLUS (SImode,
	gen_rtx_REG (SImode,
	7),
	const_int_rtx[MAX_SAVED_CONST_INT + (4)])))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:20559 */
extern rtx gen_peephole2_1906 (rtx, rtx *);
rtx
gen_peephole2_1906 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  if ((operands[0] = peep2_find_free_register (0, 0, "r", SImode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  if ((operands[1] = peep2_find_free_register (0, 0, "r", SImode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  start_sequence ();
#line 20569 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MEM (SImode,
	gen_rtx_REG (SImode,
	7))),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (SImode,
	7),
	gen_rtx_PLUS (SImode,
	gen_rtx_REG (SImode,
	7),
	const_int_rtx[MAX_SAVED_CONST_INT + (4)])))));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand1,
	gen_rtx_MEM (SImode,
	gen_rtx_REG (SImode,
	7))),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (SImode,
	7),
	gen_rtx_PLUS (SImode,
	gen_rtx_REG (SImode,
	7),
	const_int_rtx[MAX_SAVED_CONST_INT + (4)])))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:20571 */
extern rtx gen_peephole2_1907 (rtx, rtx *);
rtx
gen_peephole2_1907 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  if ((operands[0] = peep2_find_free_register (0, 0, "r", SImode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  start_sequence ();
#line 20580 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"

  operand0 = operands[0];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MEM (SImode,
	gen_rtx_REG (SImode,
	7))),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (SImode,
	7),
	gen_rtx_PLUS (SImode,
	gen_rtx_REG (SImode,
	7),
	const_int_rtx[MAX_SAVED_CONST_INT + (4)])))));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	copy_rtx (operand0),
	gen_rtx_MEM (SImode,
	gen_rtx_REG (SImode,
	7))),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (SImode,
	7),
	gen_rtx_PLUS (SImode,
	gen_rtx_REG (SImode,
	7),
	const_int_rtx[MAX_SAVED_CONST_INT + (4)])))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:20584 */
extern rtx gen_peephole2_1908 (rtx, rtx *);
rtx
gen_peephole2_1908 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  start_sequence ();
#line 20597 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_fmt_ee (GET_CODE (operand1), GET_MODE (operand1),
		operand2,
		operand3)),
		gen_rtx_CLOBBER (VOIDmode,
	copy_rtx (operand2)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:20599 */
extern rtx gen_peephole2_1909 (rtx, rtx *);
rtx
gen_peephole2_1909 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  if ((operands[0] = peep2_find_free_register (0, 0, "r", DImode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  start_sequence ();
  operand0 = operands[0];
  emit_insn (gen_rtx_CLOBBER (VOIDmode,
	operand0));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (DImode,
	gen_rtx_PRE_DEC (DImode,
	gen_rtx_REG (DImode,
	7))),
	copy_rtx (operand0)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_MEM (BLKmode,
	gen_rtx_SCRATCH (VOIDmode))))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:20609 */
extern rtx gen_peephole2_1910 (rtx, rtx *);
rtx
gen_peephole2_1910 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  if ((operands[0] = peep2_find_free_register (0, 0, "r", DImode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  start_sequence ();
  operand0 = operands[0];
  emit_insn (gen_rtx_CLOBBER (VOIDmode,
	operand0));
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (DImode,
	gen_rtx_PRE_DEC (DImode,
	gen_rtx_REG (DImode,
	7))),
	copy_rtx (operand0)));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (DImode,
	gen_rtx_PRE_DEC (DImode,
	gen_rtx_REG (DImode,
	7))),
	copy_rtx (operand0)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_MEM (BLKmode,
	gen_rtx_SCRATCH (VOIDmode))))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:20621 */
extern rtx gen_peephole2_1911 (rtx, rtx *);
rtx
gen_peephole2_1911 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  if ((operands[0] = peep2_find_free_register (0, 0, "r", DImode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  start_sequence ();
  operand0 = operands[0];
  emit_insn (gen_rtx_CLOBBER (VOIDmode,
	operand0));
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (DImode,
	gen_rtx_PRE_DEC (DImode,
	gen_rtx_REG (DImode,
	7))),
	copy_rtx (operand0)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:20629 */
extern rtx gen_peephole2_1912 (rtx, rtx *);
rtx
gen_peephole2_1912 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  if ((operands[0] = peep2_find_free_register (0, 0, "r", DImode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  start_sequence ();
  operand0 = operands[0];
  emit_insn (gen_rtx_CLOBBER (VOIDmode,
	operand0));
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (DImode,
	gen_rtx_PRE_DEC (DImode,
	gen_rtx_REG (DImode,
	7))),
	copy_rtx (operand0)));
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (DImode,
	gen_rtx_PRE_DEC (DImode,
	gen_rtx_REG (DImode,
	7))),
	copy_rtx (operand0)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:20639 */
extern rtx gen_peephole2_1913 (rtx, rtx *);
rtx
gen_peephole2_1913 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  if ((operands[0] = peep2_find_free_register (0, 0, "r", DImode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  start_sequence ();
#line 20648 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"

  operand0 = operands[0];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MEM (DImode,
	gen_rtx_REG (DImode,
	7))),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (DImode,
	7),
	gen_rtx_PLUS (DImode,
	gen_rtx_REG (DImode,
	7),
	const_int_rtx[MAX_SAVED_CONST_INT + (8)])),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_MEM (BLKmode,
	gen_rtx_SCRATCH (VOIDmode))))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:20652 */
extern rtx gen_peephole2_1914 (rtx, rtx *);
rtx
gen_peephole2_1914 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  if ((operands[0] = peep2_find_free_register (0, 0, "r", DImode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  if ((operands[1] = peep2_find_free_register (0, 0, "r", DImode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  start_sequence ();
#line 20664 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MEM (DImode,
	gen_rtx_REG (DImode,
	7))),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (DImode,
	7),
	gen_rtx_PLUS (DImode,
	gen_rtx_REG (DImode,
	7),
	const_int_rtx[MAX_SAVED_CONST_INT + (8)])),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_MEM (BLKmode,
	gen_rtx_SCRATCH (VOIDmode))))));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand1,
	gen_rtx_MEM (DImode,
	gen_rtx_REG (DImode,
	7))),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (DImode,
	7),
	gen_rtx_PLUS (DImode,
	gen_rtx_REG (DImode,
	7),
	const_int_rtx[MAX_SAVED_CONST_INT + (8)])))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:20666 */
extern rtx gen_peephole2_1915 (rtx, rtx *);
rtx
gen_peephole2_1915 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  if ((operands[0] = peep2_find_free_register (0, 0, "r", DImode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  start_sequence ();
#line 20677 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"

  operand0 = operands[0];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MEM (DImode,
	gen_rtx_REG (DImode,
	7))),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (DImode,
	7),
	gen_rtx_PLUS (DImode,
	gen_rtx_REG (DImode,
	7),
	const_int_rtx[MAX_SAVED_CONST_INT + (8)])),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_MEM (BLKmode,
	gen_rtx_SCRATCH (VOIDmode))))));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	copy_rtx (operand0),
	gen_rtx_MEM (DImode,
	gen_rtx_REG (DImode,
	7))),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (DImode,
	7),
	gen_rtx_PLUS (DImode,
	gen_rtx_REG (DImode,
	7),
	const_int_rtx[MAX_SAVED_CONST_INT + (8)])))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:20680 */
extern rtx gen_peephole2_1916 (rtx, rtx *);
rtx
gen_peephole2_1916 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  if ((operands[0] = peep2_find_free_register (0, 0, "r", DImode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  start_sequence ();
#line 20687 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"

  operand0 = operands[0];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MEM (DImode,
	gen_rtx_REG (DImode,
	7))),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (DImode,
	7),
	gen_rtx_PLUS (DImode,
	gen_rtx_REG (DImode,
	7),
	const_int_rtx[MAX_SAVED_CONST_INT + (8)])))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:20691 */
extern rtx gen_peephole2_1917 (rtx, rtx *);
rtx
gen_peephole2_1917 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  if ((operands[0] = peep2_find_free_register (0, 0, "r", DImode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  if ((operands[1] = peep2_find_free_register (0, 0, "r", DImode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  start_sequence ();
#line 20701 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MEM (DImode,
	gen_rtx_REG (DImode,
	7))),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (DImode,
	7),
	gen_rtx_PLUS (DImode,
	gen_rtx_REG (DImode,
	7),
	const_int_rtx[MAX_SAVED_CONST_INT + (8)])))));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand1,
	gen_rtx_MEM (DImode,
	gen_rtx_REG (DImode,
	7))),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (DImode,
	7),
	gen_rtx_PLUS (DImode,
	gen_rtx_REG (DImode,
	7),
	const_int_rtx[MAX_SAVED_CONST_INT + (8)])))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:20703 */
extern rtx gen_peephole2_1918 (rtx, rtx *);
rtx
gen_peephole2_1918 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  if ((operands[0] = peep2_find_free_register (0, 0, "r", DImode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  start_sequence ();
#line 20712 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"

  operand0 = operands[0];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MEM (DImode,
	gen_rtx_REG (DImode,
	7))),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (DImode,
	7),
	gen_rtx_PLUS (DImode,
	gen_rtx_REG (DImode,
	7),
	const_int_rtx[MAX_SAVED_CONST_INT + (8)])))));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	copy_rtx (operand0),
	gen_rtx_MEM (DImode,
	gen_rtx_REG (DImode,
	7))),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (DImode,
	7),
	gen_rtx_PLUS (DImode,
	gen_rtx_REG (DImode,
	7),
	const_int_rtx[MAX_SAVED_CONST_INT + (8)])))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:20715 */
extern rtx gen_peephole2_1919 (rtx, rtx *);
rtx
gen_peephole2_1919 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  start_sequence ();
#line 20727 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
{ operands[2] = GEN_INT (INTVAL (operands[2]) - 1); }
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (SImode,
	gen_rtx_MULT (SImode,
	operand1,
	operand2),
	copy_rtx (operand1))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:20729 */
extern rtx gen_peephole2_1920 (rtx, rtx *);
rtx
gen_peephole2_1920 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  start_sequence ();
#line 20743 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
{ operands[2] = GEN_INT (INTVAL (operands[2]) - 1); }
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  emit_insn (gen_rtx_SET (VOIDmode,
	copy_rtx (operand0),
	gen_rtx_PLUS (SImode,
	gen_rtx_MULT (SImode,
	copy_rtx (operand0),
	operand2),
	copy_rtx (operand0))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:20745 */
extern rtx gen_peephole2_1921 (rtx, rtx *);
rtx
gen_peephole2_1921 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  start_sequence ();
#line 20758 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
{ operands[2] = GEN_INT (INTVAL (operands[2]) - 1); }
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (DImode,
	gen_rtx_MULT (DImode,
	operand1,
	operand2),
	copy_rtx (operand1))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:20760 */
extern rtx gen_peephole2_1922 (rtx, rtx *);
rtx
gen_peephole2_1922 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  start_sequence ();
#line 20775 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
{ operands[2] = GEN_INT (INTVAL (operands[2]) - 1); }
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  emit_insn (gen_rtx_SET (VOIDmode,
	copy_rtx (operand0),
	gen_rtx_PLUS (DImode,
	gen_rtx_MULT (DImode,
	copy_rtx (operand0),
	operand2),
	copy_rtx (operand0))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:20779 */
extern rtx gen_peephole2_1923 (rtx, rtx *);
rtx
gen_peephole2_1923 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  if ((operands[3] = peep2_find_free_register (0, 0, "r", DImode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  start_sequence ();
#line 20790 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	operand1));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (DImode,
	copy_rtx (operand3),
	operand2)),
		gen_hard_reg_clobber (CCmode, 17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:20792 */
extern rtx gen_peephole2_1924 (rtx, rtx *);
rtx
gen_peephole2_1924 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  if ((operands[3] = peep2_find_free_register (0, 0, "r", SImode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  start_sequence ();
#line 20803 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	operand1));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (SImode,
	copy_rtx (operand3),
	operand2)),
		gen_hard_reg_clobber (CCmode, 17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:20805 */
extern rtx gen_peephole2_1925 (rtx, rtx *);
rtx
gen_peephole2_1925 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  if ((operands[3] = peep2_find_free_register (0, 0, "r", SImode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  start_sequence ();
#line 20817 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	operand1));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ZERO_EXTEND (DImode,
	gen_rtx_MULT (SImode,
	copy_rtx (operand3),
	operand2))),
		gen_hard_reg_clobber (CCmode, 17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:20823 */
extern rtx gen_peephole2_1926 (rtx, rtx *);
rtx
gen_peephole2_1926 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  if ((operands[3] = peep2_find_free_register (1, 1, "r", DImode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  start_sequence ();
#line 20834 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
{
  if (!rtx_equal_p (operands[0], operands[1]))
    emit_move_insn (operands[0], operands[1]);
}
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	operand2));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (DImode,
	copy_rtx (operand0),
	copy_rtx (operand3))),
		gen_hard_reg_clobber (CCmode, 17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:20839 */
extern rtx gen_peephole2_1927 (rtx, rtx *);
rtx
gen_peephole2_1927 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  if ((operands[3] = peep2_find_free_register (1, 1, "r", SImode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  start_sequence ();
#line 20850 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
{
  if (!rtx_equal_p (operands[0], operands[1]))
    emit_move_insn (operands[0], operands[1]);
}
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	operand2));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (SImode,
	copy_rtx (operand0),
	copy_rtx (operand3))),
		gen_hard_reg_clobber (CCmode, 17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:20855 */
extern rtx gen_peephole2_1928 (rtx, rtx *);
rtx
gen_peephole2_1928 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  if ((operands[3] = peep2_find_free_register (1, 1, "r", HImode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  start_sequence ();
#line 20865 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
{
  if (!rtx_equal_p (operands[0], operands[1]))
    emit_move_insn (operands[0], operands[1]);
}
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	operand2));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (HImode,
	copy_rtx (operand0),
	copy_rtx (operand3))),
		gen_hard_reg_clobber (CCmode, 17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:20882 */
extern rtx gen_peephole2_1929 (rtx, rtx *);
rtx
gen_peephole2_1929 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  start_sequence ();
#line 20914 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
{
  enum machine_mode mode = GET_MODE (operands[5]) == DImode ? DImode : SImode;
  int scale = 1 << INTVAL (operands[2]);
  rtx index = gen_lowpart (Pmode, operands[1]);
  rtx base = gen_lowpart (Pmode, operands[3]);
  rtx dest = gen_lowpart (mode, operands[5]);

  operands[1] = gen_rtx_PLUS (Pmode, base,
  			      gen_rtx_MULT (Pmode, index, GEN_INT (scale)));
  if (mode != Pmode)
    operands[1] = gen_rtx_SUBREG (mode, operands[1], 0);
  operands[0] = dest;
}
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	operand4));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:21057 */
rtx
gen_sse_prologue_save (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (BLKmode,
	gen_rtvec (8,
		gen_rtx_REG (DImode,
	21),
		gen_rtx_REG (DImode,
	22),
		gen_rtx_REG (DImode,
	23),
		gen_rtx_REG (DImode,
	24),
		gen_rtx_REG (DImode,
	25),
		gen_rtx_REG (DImode,
	26),
		gen_rtx_REG (DImode,
	27),
		gen_rtx_REG (DImode,
	28)),
	13)),
		gen_rtx_USE (VOIDmode,
	operand1),
		gen_rtx_USE (VOIDmode,
	operand2),
		gen_rtx_USE (VOIDmode,
	gen_rtx_LABEL_REF (DImode,
	operand3))));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:21118 */
rtx
gen_prefetch (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 21123 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
{
  int rw = INTVAL (operands[1]);
  int locality = INTVAL (operands[2]);

  gcc_assert (rw == 0 || rw == 1);
  gcc_assert (locality >= 0 && locality <= 3);
  gcc_assert (GET_MODE (operands[0]) == Pmode
	      || GET_MODE (operands[0]) == VOIDmode);

  /* Use 3dNOW prefetch in case we are asking for write prefetch not
     supported by SSE counterpart or the SSE prefetch is not available
     (K6 machines).  Otherwise use SSE prefetch as it allows specifying
     of locality.  */
  if (TARGET_3DNOW && (!TARGET_PREFETCH_SSE || rw))
    operands[2] = GEN_INT (3);
  else
    operands[1] = const0_rtx;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_PREFETCH (VOIDmode,
	operand0,
	operand1,
	operand2));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:21206 */
rtx
gen_stack_protect_set (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 21210 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
{
#ifdef TARGET_THREAD_SSP_OFFSET
  if (TARGET_64BIT)
    emit_insn (gen_stack_tls_protect_set_di (operands[0],
					GEN_INT (TARGET_THREAD_SSP_OFFSET)));
  else
    emit_insn (gen_stack_tls_protect_set_si (operands[0],
					GEN_INT (TARGET_THREAD_SSP_OFFSET)));
#else
  if (TARGET_64BIT)
    emit_insn (gen_stack_protect_set_di (operands[0], operands[1]));
  else
    emit_insn (gen_stack_protect_set_si (operands[0], operands[1]));
#endif
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit (operand0);
  emit (operand1);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:21271 */
rtx
gen_stack_protect_test (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 21276 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"
{
  rtx flags = gen_rtx_REG (CCZmode, FLAGS_REG);
  ix86_compare_op0 = operands[0];
  ix86_compare_op1 = operands[1];
  ix86_compare_emitted = flags;

#ifdef TARGET_THREAD_SSP_OFFSET
  if (TARGET_64BIT)
    emit_insn (gen_stack_tls_protect_test_di (flags, operands[0],
					GEN_INT (TARGET_THREAD_SSP_OFFSET)));
  else
    emit_insn (gen_stack_tls_protect_test_si (flags, operands[0],
					GEN_INT (TARGET_THREAD_SSP_OFFSET)));
#else
  if (TARGET_64BIT)
    emit_insn (gen_stack_protect_test_di (flags, operands[0], operands[1]));
  else
    emit_insn (gen_stack_protect_test_si (flags, operands[0], operands[1]));
#endif
  emit_jump_insn (gen_beq (operands[2]));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit (operand0);
  emit (operand1);
  emit (operand2);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md:21351 */
rtx
gen_flt_rounds (rtx operand0)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[1];
    operands[0] = operand0;
#line 21355 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/i386.md"

  {
    ix86_expand_flt_rounds (operands[0]);
    DONE;
  }
  
    operand0 = operands[0];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		gen_rtx_REG (CCFPmode,
	18)),
	76)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/mmx.md:36 */
rtx
gen_movv8qi (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 64 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/mmx.md"
{
  ix86_expand_vector_move (V8QImode, operands);
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/mmx.md:36 */
rtx
gen_movv4hi (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 64 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/mmx.md"
{
  ix86_expand_vector_move (V4HImode, operands);
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/mmx.md:36 */
rtx
gen_movv2si (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 64 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/mmx.md"
{
  ix86_expand_vector_move (V2SImode, operands);
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/mmx.md:36 */
rtx
gen_movv1di (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 64 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/mmx.md"
{
  ix86_expand_vector_move (V1DImode, operands);
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/mmx.md:132 */
rtx
gen_movv2sf (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 136 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/mmx.md"
{
  ix86_expand_vector_move (V2SFmode, operands);
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/mmx.md:198 */
extern rtx gen_split_1940 (rtx, rtx *);
rtx
gen_split_1940 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 207 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/mmx.md"
ix86_split_long_move (operands); DONE;
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/mmx.md:198 */
extern rtx gen_split_1941 (rtx, rtx *);
rtx
gen_split_1941 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 207 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/mmx.md"
ix86_split_long_move (operands); DONE;
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/mmx.md:198 */
extern rtx gen_split_1942 (rtx, rtx *);
rtx
gen_split_1942 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 207 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/mmx.md"
ix86_split_long_move (operands); DONE;
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/mmx.md:198 */
extern rtx gen_split_1943 (rtx, rtx *);
rtx
gen_split_1943 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 207 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/mmx.md"
ix86_split_long_move (operands); DONE;
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/mmx.md:198 */
extern rtx gen_split_1944 (rtx, rtx *);
rtx
gen_split_1944 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 207 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/mmx.md"
ix86_split_long_move (operands); DONE;
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/mmx.md:209 */
rtx
gen_pushv8qi1 (rtx operand0)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[1];
    operands[0] = operand0;
#line 212 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/mmx.md"
{
  ix86_expand_push (V8QImode, operands[0]);
  DONE;
}
    operand0 = operands[0];
  }
  emit (operand0);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/mmx.md:209 */
rtx
gen_pushv4hi1 (rtx operand0)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[1];
    operands[0] = operand0;
#line 212 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/mmx.md"
{
  ix86_expand_push (V4HImode, operands[0]);
  DONE;
}
    operand0 = operands[0];
  }
  emit (operand0);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/mmx.md:209 */
rtx
gen_pushv2si1 (rtx operand0)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[1];
    operands[0] = operand0;
#line 212 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/mmx.md"
{
  ix86_expand_push (V2SImode, operands[0]);
  DONE;
}
    operand0 = operands[0];
  }
  emit (operand0);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/mmx.md:209 */
rtx
gen_pushv2sf1 (rtx operand0)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[1];
    operands[0] = operand0;
#line 212 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/mmx.md"
{
  ix86_expand_push (V2SFmode, operands[0]);
  DONE;
}
    operand0 = operands[0];
  }
  emit (operand0);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/mmx.md:209 */
rtx
gen_pushv1di1 (rtx operand0)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[1];
    operands[0] = operand0;
#line 212 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/mmx.md"
{
  ix86_expand_push (V1DImode, operands[0]);
  DONE;
}
    operand0 = operands[0];
  }
  emit (operand0);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/mmx.md:217 */
rtx
gen_movmisalignv8qi (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 221 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/mmx.md"
{
  ix86_expand_vector_move (V8QImode, operands);
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/mmx.md:217 */
rtx
gen_movmisalignv4hi (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 221 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/mmx.md"
{
  ix86_expand_vector_move (V4HImode, operands);
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/mmx.md:217 */
rtx
gen_movmisalignv2si (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 221 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/mmx.md"
{
  ix86_expand_vector_move (V2SImode, operands);
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/mmx.md:217 */
rtx
gen_movmisalignv2sf (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 221 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/mmx.md"
{
  ix86_expand_vector_move (V2SFmode, operands);
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/mmx.md:217 */
rtx
gen_movmisalignv1di (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 221 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/mmx.md"
{
  ix86_expand_vector_move (V1DImode, operands);
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/mmx.md:263 */
rtx
gen_mmx_subrv2sf3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (V2SFmode,
	operand2,
	operand1));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/mmx.md:507 */
rtx
gen_vec_setv2sf (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 512 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/mmx.md"
{
  ix86_expand_vector_set (false, operands[0], operands[1],
			  INTVAL (operands[2]));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit (operand0);
  emit (operand1);
  emit (operand2);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/mmx.md:518 */
extern rtx gen_split_1957 (rtx, rtx *);
rtx
gen_split_1957 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 527 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/mmx.md"
{
  rtx op1 = operands[1];
  if (REG_P (op1))
    op1 = gen_rtx_REG (SFmode, REGNO (op1));
  else
    op1 = gen_lowpart (SFmode, op1);
  emit_move_insn (operands[0], op1);
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/mmx.md:550 */
extern rtx gen_split_1958 (rtx, rtx *);
rtx
gen_split_1958 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 557 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/mmx.md"
{
  operands[1] = adjust_address (operands[1], SFmode, 4);
  emit_move_insn (operands[0], operands[1]);
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/mmx.md:563 */
rtx
gen_vec_extractv2sf (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 568 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/mmx.md"
{
  ix86_expand_vector_extract (false, operands[0], operands[1],
			      INTVAL (operands[2]));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit (operand0);
  emit (operand1);
  emit (operand2);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/mmx.md:574 */
rtx
gen_vec_initv2sf (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 578 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/mmx.md"
{
  ix86_expand_vector_init (false, operands[0], operands[1]);
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit (operand0);
  emit (operand1);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/mmx.md:1056 */
rtx
gen_mmx_pinsrw (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#line 1064 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/mmx.md"
{
  operands[2] = gen_lowpart (HImode, operands[2]);
  operands[3] = GEN_INT (1 << INTVAL (operands[3]));
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_MERGE (V4HImode,
	gen_rtx_VEC_DUPLICATE (V4HImode,
	operand2),
	operand1,
	operand3)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/mmx.md:1095 */
rtx
gen_mmx_pshufw (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 1100 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/mmx.md"
{
  int mask = INTVAL (operands[2]);
  emit_insn (gen_mmx_pshufw_1 (operands[0], operands[1],
                               GEN_INT ((mask >> 0) & 3),
                               GEN_INT ((mask >> 2) & 3),
                               GEN_INT ((mask >> 4) & 3),
                               GEN_INT ((mask >> 6) & 3)));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit (operand0);
  emit (operand1);
  emit (operand2);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/mmx.md:1173 */
rtx
gen_vec_setv2si (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 1178 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/mmx.md"
{
  ix86_expand_vector_set (false, operands[0], operands[1],
			  INTVAL (operands[2]));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit (operand0);
  emit (operand1);
  emit (operand2);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/mmx.md:1185 */
extern rtx gen_split_1964 (rtx, rtx *);
rtx
gen_split_1964 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 1194 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/mmx.md"
{
  rtx op1 = operands[1];
  if (REG_P (op1))
    op1 = gen_rtx_REG (SImode, REGNO (op1));
  else
    op1 = gen_lowpart (SImode, op1);
  emit_move_insn (operands[0], op1);
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/mmx.md:1224 */
extern rtx gen_split_1965 (rtx, rtx *);
rtx
gen_split_1965 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 1231 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/mmx.md"
{
  operands[1] = adjust_address (operands[1], SImode, 4);
  emit_move_insn (operands[0], operands[1]);
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/mmx.md:1237 */
rtx
gen_vec_extractv2si (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 1242 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/mmx.md"
{
  ix86_expand_vector_extract (false, operands[0], operands[1],
			      INTVAL (operands[2]));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit (operand0);
  emit (operand1);
  emit (operand2);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/mmx.md:1248 */
rtx
gen_vec_initv2si (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 1252 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/mmx.md"
{
  ix86_expand_vector_init (false, operands[0], operands[1]);
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit (operand0);
  emit (operand1);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/mmx.md:1257 */
rtx
gen_vec_setv4hi (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 1262 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/mmx.md"
{
  ix86_expand_vector_set (false, operands[0], operands[1],
			  INTVAL (operands[2]));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit (operand0);
  emit (operand1);
  emit (operand2);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/mmx.md:1268 */
rtx
gen_vec_extractv4hi (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 1273 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/mmx.md"
{
  ix86_expand_vector_extract (false, operands[0], operands[1],
			      INTVAL (operands[2]));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit (operand0);
  emit (operand1);
  emit (operand2);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/mmx.md:1279 */
rtx
gen_vec_initv4hi (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 1283 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/mmx.md"
{
  ix86_expand_vector_init (false, operands[0], operands[1]);
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit (operand0);
  emit (operand1);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/mmx.md:1288 */
rtx
gen_vec_setv8qi (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 1293 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/mmx.md"
{
  ix86_expand_vector_set (false, operands[0], operands[1],
			  INTVAL (operands[2]));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit (operand0);
  emit (operand1);
  emit (operand2);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/mmx.md:1299 */
rtx
gen_vec_extractv8qi (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 1304 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/mmx.md"
{
  ix86_expand_vector_extract (false, operands[0], operands[1],
			      INTVAL (operands[2]));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit (operand0);
  emit (operand1);
  emit (operand2);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/mmx.md:1310 */
rtx
gen_vec_initv8qi (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 1314 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/mmx.md"
{
  ix86_expand_vector_init (false, operands[0], operands[1]);
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit (operand0);
  emit (operand1);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/mmx.md:1393 */
rtx
gen_mmx_maskmovq (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V8QImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand0),
	31));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:25 */
rtx
gen_movv16qi (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 55 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md"
{
  ix86_expand_vector_move (V16QImode, operands);
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:25 */
rtx
gen_movv8hi (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 55 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md"
{
  ix86_expand_vector_move (V8HImode, operands);
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:25 */
rtx
gen_movv4si (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 55 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md"
{
  ix86_expand_vector_move (V4SImode, operands);
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:25 */
rtx
gen_movv2di (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 55 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md"
{
  ix86_expand_vector_move (V2DImode, operands);
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:90 */
rtx
gen_movv4sf (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 94 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md"
{
  ix86_expand_vector_move (V4SFmode, operands);
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:118 */
extern rtx gen_split_1980 (rtx, rtx *);
rtx
gen_split_1980 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
#line 127 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md"
{
  operands[1] = simplify_gen_subreg (SFmode, operands[1], V4SFmode, 0);
  operands[2] = CONST0_RTX (V4SFmode);
}
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_MERGE (V4SFmode,
	gen_rtx_VEC_DUPLICATE (V4SFmode,
	operand1),
	operand2,
	const1_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:132 */
rtx
gen_movv2df (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 136 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md"
{
  ix86_expand_vector_move (V2DFmode, operands);
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:171 */
extern rtx gen_split_1982 (rtx, rtx *);
rtx
gen_split_1982 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
#line 176 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md"
{
  operands[1] = simplify_gen_subreg (DFmode, operands[1], V2DFmode, 0);
  operands[2] = CONST0_RTX (DFmode);
}
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_CONCAT (V2DFmode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:181 */
rtx
gen_pushv16qi1 (rtx operand0)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[1];
    operands[0] = operand0;
#line 184 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md"
{
  ix86_expand_push (V16QImode, operands[0]);
  DONE;
}
    operand0 = operands[0];
  }
  emit (operand0);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:181 */
rtx
gen_pushv8hi1 (rtx operand0)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[1];
    operands[0] = operand0;
#line 184 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md"
{
  ix86_expand_push (V8HImode, operands[0]);
  DONE;
}
    operand0 = operands[0];
  }
  emit (operand0);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:181 */
rtx
gen_pushv4si1 (rtx operand0)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[1];
    operands[0] = operand0;
#line 184 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md"
{
  ix86_expand_push (V4SImode, operands[0]);
  DONE;
}
    operand0 = operands[0];
  }
  emit (operand0);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:181 */
rtx
gen_pushv2di1 (rtx operand0)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[1];
    operands[0] = operand0;
#line 184 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md"
{
  ix86_expand_push (V2DImode, operands[0]);
  DONE;
}
    operand0 = operands[0];
  }
  emit (operand0);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:181 */
rtx
gen_pushv4sf1 (rtx operand0)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[1];
    operands[0] = operand0;
#line 184 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md"
{
  ix86_expand_push (V4SFmode, operands[0]);
  DONE;
}
    operand0 = operands[0];
  }
  emit (operand0);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:181 */
rtx
gen_pushv2df1 (rtx operand0)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[1];
    operands[0] = operand0;
#line 184 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md"
{
  ix86_expand_push (V2DFmode, operands[0]);
  DONE;
}
    operand0 = operands[0];
  }
  emit (operand0);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:189 */
rtx
gen_movmisalignv16qi (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 193 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md"
{
  ix86_expand_vector_move_misalign (V16QImode, operands);
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:189 */
rtx
gen_movmisalignv8hi (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 193 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md"
{
  ix86_expand_vector_move_misalign (V8HImode, operands);
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:189 */
rtx
gen_movmisalignv4si (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 193 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md"
{
  ix86_expand_vector_move_misalign (V4SImode, operands);
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:189 */
rtx
gen_movmisalignv2di (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 193 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md"
{
  ix86_expand_vector_move_misalign (V2DImode, operands);
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:189 */
rtx
gen_movmisalignv4sf (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 193 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md"
{
  ix86_expand_vector_move_misalign (V4SFmode, operands);
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:189 */
rtx
gen_movmisalignv2df (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 193 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md"
{
  ix86_expand_vector_move_misalign (V2DFmode, operands);
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:299 */
rtx
gen_negv4sf2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 303 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md"
ix86_expand_fp_absneg_operator (NEG, V4SFmode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NEG (V4SFmode,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:305 */
rtx
gen_absv4sf2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 309 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md"
ix86_expand_fp_absneg_operator (ABS, V4SFmode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ABS (V4SFmode,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:311 */
rtx
gen_addv4sf3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 316 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md"
ix86_fixup_binary_operands_no_copy (PLUS, V4SFmode, operands);
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (V4SFmode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:339 */
rtx
gen_subv4sf3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 344 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md"
ix86_fixup_binary_operands_no_copy (MINUS, V4SFmode, operands);
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (V4SFmode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:367 */
rtx
gen_mulv4sf3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 372 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md"
ix86_fixup_binary_operands_no_copy (MULT, V4SFmode, operands);
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (V4SFmode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:395 */
rtx
gen_divv4sf3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 400 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md"
ix86_fixup_binary_operands_no_copy (DIV, V4SFmode, operands);
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_DIV (V4SFmode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:488 */
rtx
gen_smaxv4sf3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 493 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md"
{
  if (!flag_finite_math_only)
    operands[1] = force_reg (V4SFmode, operands[1]);
  ix86_fixup_binary_operands_no_copy (SMAX, V4SFmode, operands);
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SMAX (V4SFmode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:530 */
rtx
gen_sminv4sf3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 535 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md"
{
  if (!flag_finite_math_only)
    operands[1] = force_reg (V4SFmode, operands[1]);
  ix86_fixup_binary_operands_no_copy (SMIN, V4SFmode, operands);
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SMIN (V4SFmode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:683 */
rtx
gen_reduc_splus_v4sf (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 687 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md"
{
  if (TARGET_SSE3)
    {
      rtx tmp = gen_reg_rtx (V4SFmode);
      emit_insn (gen_sse3_haddv4sf3 (tmp, operands[1], operands[1]));
      emit_insn (gen_sse3_haddv4sf3 (operands[0], tmp, tmp));
    }
  else
    ix86_expand_reduc_v4sf (gen_addv4sf3, operands[0], operands[1]);
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit (operand0);
  emit (operand1);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:699 */
rtx
gen_reduc_smax_v4sf (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 703 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md"
{
  ix86_expand_reduc_v4sf (gen_smaxv4sf3, operands[0], operands[1]);
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit (operand0);
  emit (operand1);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:708 */
rtx
gen_reduc_smin_v4sf (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 712 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md"
{
  ix86_expand_reduc_v4sf (gen_sminv4sf3, operands[0], operands[1]);
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit (operand0);
  emit (operand1);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:774 */
rtx
gen_vcondv4sf (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3,
	rtx operand4,
	rtx operand5)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[6];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
    operands[4] = operand4;
    operands[5] = operand5;
#line 783 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md"
{
  if (ix86_expand_fp_vcond (operands))
    DONE;
  else
    FAIL;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
    operand4 = operands[4];
    operand5 = operands[5];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IF_THEN_ELSE (V4SFmode,
	gen_rtx_fmt_ee (GET_CODE (operand3), VOIDmode,
		operand4,
		operand5),
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:796 */
rtx
gen_andv4sf3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 801 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md"
ix86_fixup_binary_operands_no_copy (AND, V4SFmode, operands);
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_AND (V4SFmode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:821 */
rtx
gen_iorv4sf3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 826 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md"
ix86_fixup_binary_operands_no_copy (IOR, V4SFmode, operands);
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IOR (V4SFmode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:837 */
rtx
gen_xorv4sf3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 842 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md"
ix86_fixup_binary_operands_no_copy (XOR, V4SFmode, operands);
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_XOR (V4SFmode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:1140 */
rtx
gen_sse_shufps (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#line 1146 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md"
{
  int mask = INTVAL (operands[3]);
  emit_insn (gen_sse_shufps_1 (operands[0], operands[1], operands[2],
			       GEN_INT ((mask >> 0) & 3),
			       GEN_INT ((mask >> 2) & 3),
			       GEN_INT (((mask >> 4) & 3) + 4),
			       GEN_INT (((mask >> 6) & 3) + 4)));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
  }
  emit (operand0);
  emit (operand1);
  emit (operand2);
  emit (operand3);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:1285 */
rtx
gen_vec_initv4sf (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 1289 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md"
{
  ix86_expand_vector_init (false, operands[0], operands[1]);
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit (operand0);
  emit (operand1);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:1344 */
extern rtx gen_split_2012 (rtx, rtx *);
rtx
gen_split_2012 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 1353 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md"
{
  emit_move_insn (adjust_address (operands[0], SFmode, 0), operands[1]);
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:1358 */
rtx
gen_vec_setv4sf (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 1363 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md"
{
  ix86_expand_vector_set (false, operands[0], operands[1],
			  INTVAL (operands[2]));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit (operand0);
  emit (operand1);
  emit (operand2);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:1369 */
extern rtx gen_split_2014 (rtx, rtx *);
rtx
gen_split_2014 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 1378 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md"
{
  rtx op1 = operands[1];
  if (REG_P (op1))
    op1 = gen_rtx_REG (SFmode, REGNO (op1));
  else
    op1 = gen_lowpart (SFmode, op1);
  emit_move_insn (operands[0], op1);
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:1401 */
rtx
gen_vec_extractv4sf (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 1406 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md"
{
  ix86_expand_vector_extract (false, operands[0], operands[1],
			      INTVAL (operands[2]));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit (operand0);
  emit (operand1);
  emit (operand2);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:1418 */
rtx
gen_negv2df2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 1422 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md"
ix86_expand_fp_absneg_operator (NEG, V2DFmode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NEG (V2DFmode,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:1424 */
rtx
gen_absv2df2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 1428 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md"
ix86_expand_fp_absneg_operator (ABS, V2DFmode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ABS (V2DFmode,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:1430 */
rtx
gen_addv2df3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 1435 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md"
ix86_fixup_binary_operands_no_copy (PLUS, V2DFmode, operands);
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (V2DFmode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:1458 */
rtx
gen_subv2df3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 1463 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md"
ix86_fixup_binary_operands_no_copy (MINUS, V2DFmode, operands);
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (V2DFmode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:1486 */
rtx
gen_mulv2df3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 1491 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md"
ix86_fixup_binary_operands_no_copy (MULT, V2DFmode, operands);
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (V2DFmode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:1514 */
rtx
gen_divv2df3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 1519 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md"
ix86_fixup_binary_operands_no_copy (DIV, V2DFmode, operands);
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_DIV (V2DFmode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:1565 */
rtx
gen_smaxv2df3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 1570 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md"
{
  if (!flag_finite_math_only)
    operands[1] = force_reg (V2DFmode, operands[1]);
  ix86_fixup_binary_operands_no_copy (SMAX, V2DFmode, operands);
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SMAX (V2DFmode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:1607 */
rtx
gen_sminv2df3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 1612 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md"
{
  if (!flag_finite_math_only)
    operands[1] = force_reg (V2DFmode, operands[1]);
  ix86_fixup_binary_operands_no_copy (SMIN, V2DFmode, operands);
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SMIN (V2DFmode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:1698 */
rtx
gen_reduc_splus_v2df (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 1702 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md"
{
  emit_insn (gen_sse3_haddv2df3 (operands[0], operands[1], operands[1]));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit (operand0);
  emit (operand1);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:1764 */
rtx
gen_vcondv2df (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3,
	rtx operand4,
	rtx operand5)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[6];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
    operands[4] = operand4;
    operands[5] = operand5;
#line 1773 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md"
{
  if (ix86_expand_fp_vcond (operands))
    DONE;
  else
    FAIL;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
    operand4 = operands[4];
    operand5 = operands[5];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IF_THEN_ELSE (V2DFmode,
	gen_rtx_fmt_ee (GET_CODE (operand3), VOIDmode,
		operand4,
		operand5),
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:1786 */
rtx
gen_andv2df3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 1791 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md"
ix86_fixup_binary_operands_no_copy (AND, V2DFmode, operands);
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_AND (V2DFmode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:1811 */
rtx
gen_iorv2df3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 1816 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md"
ix86_fixup_binary_operands_no_copy (IOR, V2DFmode, operands);
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IOR (V2DFmode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:1827 */
rtx
gen_xorv2df3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 1832 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md"
ix86_fixup_binary_operands_no_copy (XOR, V2DFmode, operands);
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_XOR (V2DFmode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:2005 */
rtx
gen_sse2_cvtpd2dq (rtx operand0,
	rtx operand1)
{
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
#line 2012 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md"
operands[2] = CONST0_RTX (V2SImode);
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_CONCAT (V4SImode,
	gen_rtx_UNSPEC (V2SImode,
	gen_rtvec (1,
		operand1),
	30),
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:2025 */
rtx
gen_sse2_cvttpd2dq (rtx operand0,
	rtx operand1)
{
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
#line 2031 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md"
operands[2] = CONST0_RTX (V2SImode);
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_CONCAT (V4SImode,
	gen_rtx_FIX (V2SImode,
	operand1),
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:2071 */
rtx
gen_sse2_cvtpd2ps (rtx operand0,
	rtx operand1)
{
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
#line 2078 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md"
operands[2] = CONST0_RTX (V2SFmode);
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_CONCAT (V4SFmode,
	gen_rtx_FLOAT_TRUNCATE (V2SFmode,
	operand1),
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:2139 */
extern rtx gen_split_2032 (rtx, rtx *);
rtx
gen_split_2032 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 2149 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md"
{
  rtx low = gen_rtx_REG (DFmode, REGNO (operands[1]));
  emit_move_insn (adjust_address (operands[0], DFmode, 0), low);
  emit_move_insn (adjust_address (operands[0], DFmode, 8), low);
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:2172 */
rtx
gen_sse2_shufpd (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#line 2178 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md"
{
  int mask = INTVAL (operands[3]);
  emit_insn (gen_sse2_shufpd_1 (operands[0], operands[1], operands[2],
				GEN_INT (mask & 1),
				GEN_INT (mask & 2 ? 3 : 2)));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
  }
  emit (operand0);
  emit (operand1);
  emit (operand2);
  emit (operand3);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:2219 */
extern rtx gen_split_2034 (rtx, rtx *);
rtx
gen_split_2034 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
#line 2226 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md"
{
  operands[1] = adjust_address (operands[1], DFmode, 8);
}
  operand0 = operands[0];
  operand1 = operands[1];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:2243 */
extern rtx gen_split_2035 (rtx, rtx *);
rtx
gen_split_2035 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 2250 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md"
{
  rtx op1 = operands[1];
  if (REG_P (op1))
    op1 = gen_rtx_REG (DFmode, REGNO (op1));
  else
    op1 = gen_lowpart (DFmode, op1);
  emit_move_insn (operands[0], op1);
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:2276 */
extern rtx gen_split_2036 (rtx, rtx *);
rtx
gen_split_2036 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
#line 2283 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md"
{
  operands[0] = adjust_address (operands[0], DFmode, 8);
}
  operand0 = operands[0];
  operand1 = operands[1];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:2306 */
extern rtx gen_split_2037 (rtx, rtx *);
rtx
gen_split_2037 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
#line 2313 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md"
{
  operands[0] = adjust_address (operands[0], DFmode, 8);
}
  operand0 = operands[0];
  operand1 = operands[1];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:2410 */
rtx
gen_vec_setv2df (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 2415 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md"
{
  ix86_expand_vector_set (false, operands[0], operands[1],
			  INTVAL (operands[2]));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit (operand0);
  emit (operand1);
  emit (operand2);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:2421 */
rtx
gen_vec_extractv2df (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 2426 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md"
{
  ix86_expand_vector_extract (false, operands[0], operands[1],
			      INTVAL (operands[2]));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit (operand0);
  emit (operand1);
  emit (operand2);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:2432 */
rtx
gen_vec_initv2df (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 2436 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md"
{
  ix86_expand_vector_init (false, operands[0], operands[1]);
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit (operand0);
  emit (operand1);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:2447 */
rtx
gen_negv16qi2 (rtx operand0,
	rtx operand1)
{
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
#line 2453 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md"
operands[2] = force_reg (V16QImode, CONST0_RTX (V16QImode));
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (V16QImode,
	operand2,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:2447 */
rtx
gen_negv8hi2 (rtx operand0,
	rtx operand1)
{
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
#line 2453 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md"
operands[2] = force_reg (V8HImode, CONST0_RTX (V8HImode));
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (V8HImode,
	operand2,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:2447 */
rtx
gen_negv4si2 (rtx operand0,
	rtx operand1)
{
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
#line 2453 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md"
operands[2] = force_reg (V4SImode, CONST0_RTX (V4SImode));
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (V4SImode,
	operand2,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:2447 */
rtx
gen_negv2di2 (rtx operand0,
	rtx operand1)
{
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
#line 2453 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md"
operands[2] = force_reg (V2DImode, CONST0_RTX (V2DImode));
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (V2DImode,
	operand2,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:2455 */
rtx
gen_addv16qi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 2460 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md"
ix86_fixup_binary_operands_no_copy (PLUS, V16QImode, operands);
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (V16QImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:2455 */
rtx
gen_addv8hi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 2460 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md"
ix86_fixup_binary_operands_no_copy (PLUS, V8HImode, operands);
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (V8HImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:2455 */
rtx
gen_addv4si3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 2460 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md"
ix86_fixup_binary_operands_no_copy (PLUS, V4SImode, operands);
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (V4SImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:2455 */
rtx
gen_addv2di3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 2460 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md"
ix86_fixup_binary_operands_no_copy (PLUS, V2DImode, operands);
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (V2DImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:2492 */
rtx
gen_subv16qi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 2497 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md"
ix86_fixup_binary_operands_no_copy (MINUS, V16QImode, operands);
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (V16QImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:2492 */
rtx
gen_subv8hi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 2497 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md"
ix86_fixup_binary_operands_no_copy (MINUS, V8HImode, operands);
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (V8HImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:2492 */
rtx
gen_subv4si3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 2497 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md"
ix86_fixup_binary_operands_no_copy (MINUS, V4SImode, operands);
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (V4SImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:2492 */
rtx
gen_subv2di3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 2497 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md"
ix86_fixup_binary_operands_no_copy (MINUS, V2DImode, operands);
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (V2DImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:2529 */
rtx
gen_mulv16qi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 2534 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md"
{
  rtx t[12], op0;
  int i;

  for (i = 0; i < 12; ++i)
    t[i] = gen_reg_rtx (V16QImode);

  /* Unpack data such that we've got a source byte in each low byte of
     each word.  We don't care what goes into the high byte of each word.
     Rather than trying to get zero in there, most convenient is to let
     it be a copy of the low byte.  */
  emit_insn (gen_sse2_punpckhbw (t[0], operands[1], operands[1]));
  emit_insn (gen_sse2_punpckhbw (t[1], operands[2], operands[2]));
  emit_insn (gen_sse2_punpcklbw (t[2], operands[1], operands[1]));
  emit_insn (gen_sse2_punpcklbw (t[3], operands[2], operands[2]));

  /* Multiply words.  The end-of-line annotations here give a picture of what
     the output of that instruction looks like.  Dot means don't care; the 
     letters are the bytes of the result with A being the most significant.  */
  emit_insn (gen_mulv8hi3 (gen_lowpart (V8HImode, t[4]), /* .A.B.C.D.E.F.G.H */
			   gen_lowpart (V8HImode, t[0]),
			   gen_lowpart (V8HImode, t[1])));
  emit_insn (gen_mulv8hi3 (gen_lowpart (V8HImode, t[5]), /* .I.J.K.L.M.N.O.P */
			   gen_lowpart (V8HImode, t[2]),
			   gen_lowpart (V8HImode, t[3])));

  /* Extract the relevant bytes and merge them back together.  */
  emit_insn (gen_sse2_punpckhbw (t[6], t[5], t[4]));	/* ..AI..BJ..CK..DL */
  emit_insn (gen_sse2_punpcklbw (t[7], t[5], t[4]));	/* ..EM..FN..GO..HP */
  emit_insn (gen_sse2_punpckhbw (t[8], t[7], t[6]));	/* ....AEIM....BFJN */
  emit_insn (gen_sse2_punpcklbw (t[9], t[7], t[6]));	/* ....CGKO....DHLP */
  emit_insn (gen_sse2_punpckhbw (t[10], t[9], t[8]));	/* ........ACEGIKMO */
  emit_insn (gen_sse2_punpcklbw (t[11], t[9], t[8]));	/* ........BDFHJLNP */

  op0 = operands[0];
  emit_insn (gen_sse2_punpcklbw (op0, t[11], t[10]));	/* ABCDEFGHIJKLMNOP */
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (V16QImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:2573 */
rtx
gen_mulv8hi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 2578 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md"
ix86_fixup_binary_operands_no_copy (MULT, V8HImode, operands);
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (V8HImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:2590 */
rtx
gen_smulv8hi3_highpart (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 2601 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md"
ix86_fixup_binary_operands_no_copy (MULT, V8HImode, operands);
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_TRUNCATE (V8HImode,
	gen_rtx_LSHIFTRT (V8SImode,
	gen_rtx_MULT (V8SImode,
	gen_rtx_SIGN_EXTEND (V8SImode,
	operand1),
	gen_rtx_SIGN_EXTEND (V8SImode,
	operand2)),
	const_int_rtx[MAX_SAVED_CONST_INT + (16)]))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:2619 */
rtx
gen_umulv8hi3_highpart (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 2630 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md"
ix86_fixup_binary_operands_no_copy (MULT, V8HImode, operands);
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_TRUNCATE (V8HImode,
	gen_rtx_LSHIFTRT (V8SImode,
	gen_rtx_MULT (V8SImode,
	gen_rtx_ZERO_EXTEND (V8SImode,
	operand1),
	gen_rtx_ZERO_EXTEND (V8SImode,
	operand2)),
	const_int_rtx[MAX_SAVED_CONST_INT + (16)]))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:2718 */
rtx
gen_mulv4si3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 2723 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md"
{
  rtx t1, t2, t3, t4, t5, t6, thirtytwo;
  rtx op0, op1, op2;

  op0 = operands[0];
  op1 = operands[1];
  op2 = operands[2];
  t1 = gen_reg_rtx (V4SImode);
  t2 = gen_reg_rtx (V4SImode);
  t3 = gen_reg_rtx (V4SImode);
  t4 = gen_reg_rtx (V4SImode);
  t5 = gen_reg_rtx (V4SImode);
  t6 = gen_reg_rtx (V4SImode);
  thirtytwo = GEN_INT (32);

  /* Multiply elements 2 and 0.  */
  emit_insn (gen_sse2_umulv2siv2di3 (gen_lowpart (V2DImode, t1), op1, op2));

  /* Shift both input vectors down one element, so that elements 3 and 1
     are now in the slots for elements 2 and 0.  For K8, at least, this is
     faster than using a shuffle.  */
  emit_insn (gen_sse2_lshrti3 (gen_lowpart (TImode, t2),
			       gen_lowpart (TImode, op1), thirtytwo));
  emit_insn (gen_sse2_lshrti3 (gen_lowpart (TImode, t3),
			       gen_lowpart (TImode, op2), thirtytwo));

  /* Multiply elements 3 and 1.  */
  emit_insn (gen_sse2_umulv2siv2di3 (gen_lowpart (V2DImode, t4), t2, t3));

  /* Move the results in element 2 down to element 1; we don't care what
     goes in elements 2 and 3.  */
  emit_insn (gen_sse2_pshufd_1 (t5, t1, const0_rtx, const2_rtx,
				const0_rtx, const0_rtx));
  emit_insn (gen_sse2_pshufd_1 (t6, t4, const0_rtx, const2_rtx,
				const0_rtx, const0_rtx));

  /* Merge the parts back together.  */
  emit_insn (gen_sse2_punpckldq (op0, t5, t6));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (V4SImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:2764 */
rtx
gen_mulv2di3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 2769 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md"
{
  rtx t1, t2, t3, t4, t5, t6, thirtytwo;
  rtx op0, op1, op2;

  op0 = operands[0];
  op1 = operands[1];
  op2 = operands[2];
  t1 = gen_reg_rtx (V2DImode);
  t2 = gen_reg_rtx (V2DImode);
  t3 = gen_reg_rtx (V2DImode);
  t4 = gen_reg_rtx (V2DImode);
  t5 = gen_reg_rtx (V2DImode);
  t6 = gen_reg_rtx (V2DImode);
  thirtytwo = GEN_INT (32);

  /* Multiply low parts.  */
  emit_insn (gen_sse2_umulv2siv2di3 (t1, gen_lowpart (V4SImode, op1),
				     gen_lowpart (V4SImode, op2)));

  /* Shift input vectors left 32 bits so we can multiply high parts.  */
  emit_insn (gen_lshrv2di3 (t2, op1, thirtytwo));
  emit_insn (gen_lshrv2di3 (t3, op2, thirtytwo));

  /* Multiply high parts by low parts.  */
  emit_insn (gen_sse2_umulv2siv2di3 (t4, gen_lowpart (V4SImode, op1),
				     gen_lowpart (V4SImode, t3)));
  emit_insn (gen_sse2_umulv2siv2di3 (t5, gen_lowpart (V4SImode, op2),
				     gen_lowpart (V4SImode, t2)));

  /* Shift them back.  */
  emit_insn (gen_ashlv2di3 (t4, t4, thirtytwo));
  emit_insn (gen_ashlv2di3 (t5, t5, thirtytwo));

  /* Add the three parts together.  */
  emit_insn (gen_addv2di3 (t6, t1, t4));
  emit_insn (gen_addv2di3 (op0, t6, t5));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (V2DImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:2808 */
rtx
gen_sdot_prodv8hi (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#line 2814 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md"
{
  rtx t = gen_reg_rtx (V4SImode);
  emit_insn (gen_sse2_pmaddwd (t, operands[1], operands[2]));
  emit_insn (gen_addv4si3 (operands[0], operands[3], t));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
  }
  emit (operand0);
  emit (operand1);
  emit (operand2);
  emit (operand3);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:2821 */
rtx
gen_udot_prodv4si (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#line 2827 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md"
{
  rtx t1, t2, t3, t4;

  t1 = gen_reg_rtx (V2DImode);
  emit_insn (gen_sse2_umulv2siv2di3 (t1, operands[1], operands[2]));
  emit_insn (gen_addv2di3 (t1, t1, operands[3]));

  t2 = gen_reg_rtx (V4SImode);
  t3 = gen_reg_rtx (V4SImode);
  emit_insn (gen_sse2_lshrti3 (gen_lowpart (TImode, t2),
                               gen_lowpart (TImode, operands[1]),
                               GEN_INT (32)));
  emit_insn (gen_sse2_lshrti3 (gen_lowpart (TImode, t3),
                               gen_lowpart (TImode, operands[2]),
                               GEN_INT (32)));

  t4 = gen_reg_rtx (V2DImode);
  emit_insn (gen_sse2_umulv2siv2di3 (t4, t2, t3));

  emit_insn (gen_addv2di3 (operands[0], t1, t4));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
  }
  emit (operand0);
  emit (operand1);
  emit (operand2);
  emit (operand3);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:2861 */
rtx
gen_vec_widen_smult_hi_v8hi (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 2866 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md"
{
  rtx op1, op2, t1, t2, dest;

  op1 = operands[1];
  op2 = operands[2];
  t1 = gen_reg_rtx (V8HImode);
  t2 = gen_reg_rtx (V8HImode);
  dest = gen_lowpart (V8HImode, operands[0]);

  emit_insn (gen_mulv8hi3 (t1, op1, op2));
  emit_insn (gen_smulv8hi3_highpart (t2, op1, op2));
  emit_insn (gen_vec_interleave_highv8hi (dest, t1, t2));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit (operand0);
  emit (operand1);
  emit (operand2);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:2881 */
rtx
gen_vec_widen_smult_lo_v8hi (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 2886 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md"
{
  rtx op1, op2, t1, t2, dest;

  op1 = operands[1];
  op2 = operands[2];
  t1 = gen_reg_rtx (V8HImode);
  t2 = gen_reg_rtx (V8HImode);
  dest = gen_lowpart (V8HImode, operands[0]);

  emit_insn (gen_mulv8hi3 (t1, op1, op2));
  emit_insn (gen_smulv8hi3_highpart (t2, op1, op2));
  emit_insn (gen_vec_interleave_lowv8hi (dest, t1, t2));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit (operand0);
  emit (operand1);
  emit (operand2);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:2901 */
rtx
gen_vec_widen_umult_hi_v8hi (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 2906 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md"
{
  rtx op1, op2, t1, t2, dest;

  op1 = operands[1];
  op2 = operands[2];
  t1 = gen_reg_rtx (V8HImode);
  t2 = gen_reg_rtx (V8HImode);
  dest = gen_lowpart (V8HImode, operands[0]);

  emit_insn (gen_mulv8hi3 (t1, op1, op2));
  emit_insn (gen_umulv8hi3_highpart (t2, op1, op2));
  emit_insn (gen_vec_interleave_highv8hi (dest, t1, t2));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit (operand0);
  emit (operand1);
  emit (operand2);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:2921 */
rtx
gen_vec_widen_umult_lo_v8hi (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 2926 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md"
{
  rtx op1, op2, t1, t2, dest;

  op1 = operands[1];
  op2 = operands[2];
  t1 = gen_reg_rtx (V8HImode);
  t2 = gen_reg_rtx (V8HImode);
  dest = gen_lowpart (V8HImode, operands[0]);

  emit_insn (gen_mulv8hi3 (t1, op1, op2));
  emit_insn (gen_umulv8hi3_highpart (t2, op1, op2));
  emit_insn (gen_vec_interleave_lowv8hi (dest, t1, t2));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit (operand0);
  emit (operand1);
  emit (operand2);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:2941 */
rtx
gen_vec_widen_smult_hi_v4si (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 2946 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md"
{
  rtx op1, op2, t1, t2;

  op1 = operands[1];
  op2 = operands[2];
  t1 = gen_reg_rtx (V4SImode);
  t2 = gen_reg_rtx (V4SImode);

  emit_insn (gen_vec_interleave_highv4si (t1, op1, op1));
  emit_insn (gen_vec_interleave_highv4si (t2, op2, op2));
  emit_insn (gen_sse2_umulv2siv2di3 (operands[0], t1, t2));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit (operand0);
  emit (operand1);
  emit (operand2);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:2960 */
rtx
gen_vec_widen_smult_lo_v4si (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 2965 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md"
{
  rtx op1, op2, t1, t2;

  op1 = operands[1];
  op2 = operands[2];
  t1 = gen_reg_rtx (V4SImode);
  t2 = gen_reg_rtx (V4SImode);

  emit_insn (gen_vec_interleave_lowv4si (t1, op1, op1));
  emit_insn (gen_vec_interleave_lowv4si (t2, op2, op2));
  emit_insn (gen_sse2_umulv2siv2di3 (operands[0], t1, t2));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit (operand0);
  emit (operand1);
  emit (operand2);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:2979 */
rtx
gen_vec_widen_umult_hi_v4si (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 2984 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md"
{
  rtx op1, op2, t1, t2;

  op1 = operands[1];
  op2 = operands[2];
  t1 = gen_reg_rtx (V4SImode);
  t2 = gen_reg_rtx (V4SImode);

  emit_insn (gen_vec_interleave_highv4si (t1, op1, op1));
  emit_insn (gen_vec_interleave_highv4si (t2, op2, op2));
  emit_insn (gen_sse2_umulv2siv2di3 (operands[0], t1, t2));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit (operand0);
  emit (operand1);
  emit (operand2);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:2998 */
rtx
gen_vec_widen_umult_lo_v4si (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 3003 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md"
{
  rtx op1, op2, t1, t2;

  op1 = operands[1];
  op2 = operands[2];
  t1 = gen_reg_rtx (V4SImode);
  t2 = gen_reg_rtx (V4SImode);

  emit_insn (gen_vec_interleave_lowv4si (t1, op1, op1));
  emit_insn (gen_vec_interleave_lowv4si (t2, op2, op2));
  emit_insn (gen_sse2_umulv2siv2di3 (operands[0], t1, t2));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit (operand0);
  emit (operand1);
  emit (operand2);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:3052 */
rtx
gen_vec_shl_v16qi (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 3057 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md"
{
  if (!const_0_to_255_mul_8_operand (operands[2], SImode))
    FAIL;
  operands[0] = gen_lowpart (TImode, operands[0]);
  operands[1] = gen_lowpart (TImode, operands[1]);
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFT (TImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:3052 */
rtx
gen_vec_shl_v8hi (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 3057 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md"
{
  if (!const_0_to_255_mul_8_operand (operands[2], SImode))
    FAIL;
  operands[0] = gen_lowpart (TImode, operands[0]);
  operands[1] = gen_lowpart (TImode, operands[1]);
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFT (TImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:3052 */
rtx
gen_vec_shl_v4si (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 3057 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md"
{
  if (!const_0_to_255_mul_8_operand (operands[2], SImode))
    FAIL;
  operands[0] = gen_lowpart (TImode, operands[0]);
  operands[1] = gen_lowpart (TImode, operands[1]);
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFT (TImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:3052 */
rtx
gen_vec_shl_v2di (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 3057 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md"
{
  if (!const_0_to_255_mul_8_operand (operands[2], SImode))
    FAIL;
  operands[0] = gen_lowpart (TImode, operands[0]);
  operands[1] = gen_lowpart (TImode, operands[1]);
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFT (TImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:3068 */
rtx
gen_vec_shr_v16qi (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 3073 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md"
{
  if (!const_0_to_255_mul_8_operand (operands[2], SImode))
    FAIL;
  operands[0] = gen_lowpart (TImode, operands[0]);
  operands[1] = gen_lowpart (TImode, operands[1]);
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_LSHIFTRT (TImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:3068 */
rtx
gen_vec_shr_v8hi (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 3073 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md"
{
  if (!const_0_to_255_mul_8_operand (operands[2], SImode))
    FAIL;
  operands[0] = gen_lowpart (TImode, operands[0]);
  operands[1] = gen_lowpart (TImode, operands[1]);
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_LSHIFTRT (TImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:3068 */
rtx
gen_vec_shr_v4si (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 3073 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md"
{
  if (!const_0_to_255_mul_8_operand (operands[2], SImode))
    FAIL;
  operands[0] = gen_lowpart (TImode, operands[0]);
  operands[1] = gen_lowpart (TImode, operands[1]);
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_LSHIFTRT (TImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:3068 */
rtx
gen_vec_shr_v2di (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 3073 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md"
{
  if (!const_0_to_255_mul_8_operand (operands[2], SImode))
    FAIL;
  operands[0] = gen_lowpart (TImode, operands[0]);
  operands[1] = gen_lowpart (TImode, operands[1]);
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_LSHIFTRT (TImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:3080 */
rtx
gen_umaxv16qi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 3085 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md"
ix86_fixup_binary_operands_no_copy (UMAX, V16QImode, operands);
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UMAX (V16QImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:3096 */
rtx
gen_smaxv8hi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 3101 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md"
ix86_fixup_binary_operands_no_copy (SMAX, V8HImode, operands);
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SMAX (V8HImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:3112 */
rtx
gen_umaxv8hi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 3119 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md"
{
  operands[3] = operands[0];
  if (rtx_equal_p (operands[0], operands[2]))
    operands[0] = gen_reg_rtx (V8HImode);
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_US_MINUS (V8HImode,
	operand1,
	operand2)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_PLUS (V8HImode,
	operand0,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:3125 */
rtx
gen_smaxv16qi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 3130 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md"
{
  rtx xops[6];
  bool ok;

  xops[0] = operands[0];
  xops[1] = operands[1];
  xops[2] = operands[2];
  xops[3] = gen_rtx_GT (VOIDmode, operands[1], operands[2]);
  xops[4] = operands[1];
  xops[5] = operands[2];
  ok = ix86_expand_int_vcond (xops);
  gcc_assert (ok);
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SMAX (V16QImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:3125 */
rtx
gen_smaxv4si3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 3130 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md"
{
  rtx xops[6];
  bool ok;

  xops[0] = operands[0];
  xops[1] = operands[1];
  xops[2] = operands[2];
  xops[3] = gen_rtx_GT (VOIDmode, operands[1], operands[2]);
  xops[4] = operands[1];
  xops[5] = operands[2];
  ok = ix86_expand_int_vcond (xops);
  gcc_assert (ok);
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SMAX (V4SImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:3145 */
rtx
gen_umaxv4si3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 3150 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md"
{
  /* APPLE LOCAL begin 5612787 mainline sse4 */
  if (TARGET_SSE4_1)
    ix86_fixup_binary_operands_no_copy (UMAX, V4SImode, operands);
  else
  {
    rtx xops[6];
    bool ok;

    xops[0] = operands[0];
    xops[1] = operands[1];
    xops[2] = operands[2];
    xops[3] = gen_rtx_GTU (VOIDmode, operands[1], operands[2]);
    xops[4] = operands[1];
    xops[5] = operands[2];
    ok = ix86_expand_int_vcond (xops);
    gcc_assert (ok);
    DONE;
  }
  /* APPLE LOCAL end 5612787 mainline sse4 */
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UMAX (V4SImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:3196 */
rtx
gen_uminv16qi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 3201 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md"
ix86_fixup_binary_operands_no_copy (UMIN, V16QImode, operands);
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UMIN (V16QImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:3212 */
rtx
gen_sminv8hi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 3217 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md"
ix86_fixup_binary_operands_no_copy (SMIN, V8HImode, operands);
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SMIN (V8HImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:3228 */
rtx
gen_sminv16qi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 3233 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md"
{
  rtx xops[6];
  bool ok;

  xops[0] = operands[0];
  xops[1] = operands[2];
  xops[2] = operands[1];
  xops[3] = gen_rtx_GT (VOIDmode, operands[1], operands[2]);
  xops[4] = operands[1];
  xops[5] = operands[2];
  ok = ix86_expand_int_vcond (xops);
  gcc_assert (ok);
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SMIN (V16QImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:3228 */
rtx
gen_sminv4si3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 3233 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md"
{
  rtx xops[6];
  bool ok;

  xops[0] = operands[0];
  xops[1] = operands[2];
  xops[2] = operands[1];
  xops[3] = gen_rtx_GT (VOIDmode, operands[1], operands[2]);
  xops[4] = operands[1];
  xops[5] = operands[2];
  ok = ix86_expand_int_vcond (xops);
  gcc_assert (ok);
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SMIN (V4SImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:3248 */
rtx
gen_uminv8hi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 3253 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md"
{
  /* APPLE LOCAL begin 5612787 mainline sse4 */
  if (TARGET_SSE4_1)
    ix86_fixup_binary_operands_no_copy (UMIN, V8HImode, operands);
  else
    {
      rtx xops[6];
      bool ok;

      xops[0] = operands[0];
      xops[1] = operands[2];
      xops[2] = operands[1];
      xops[3] = gen_rtx_GTU (VOIDmode, operands[1], operands[2]);
      xops[4] = operands[1];
      xops[5] = operands[2];
      ok = ix86_expand_int_vcond (xops);
      gcc_assert (ok);
      DONE;
    }
  /* APPLE LOCAL end 5612787 mainline sse4 */
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UMIN (V8HImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:3248 */
rtx
gen_uminv4si3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 3253 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md"
{
  /* APPLE LOCAL begin 5612787 mainline sse4 */
  if (TARGET_SSE4_1)
    ix86_fixup_binary_operands_no_copy (UMIN, V4SImode, operands);
  else
    {
      rtx xops[6];
      bool ok;

      xops[0] = operands[0];
      xops[1] = operands[2];
      xops[2] = operands[1];
      xops[3] = gen_rtx_GTU (VOIDmode, operands[1], operands[2]);
      xops[4] = operands[1];
      xops[5] = operands[2];
      ok = ix86_expand_int_vcond (xops);
      gcc_assert (ok);
      DONE;
    }
  /* APPLE LOCAL end 5612787 mainline sse4 */
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UMIN (V4SImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:3326 */
rtx
gen_vcondv16qi (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3,
	rtx operand4,
	rtx operand5)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[6];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
    operands[4] = operand4;
    operands[5] = operand5;
#line 3335 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md"
{
  if (ix86_expand_int_vcond (operands))
    DONE;
  else
    FAIL;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
    operand4 = operands[4];
    operand5 = operands[5];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IF_THEN_ELSE (V16QImode,
	gen_rtx_fmt_ee (GET_CODE (operand3), VOIDmode,
		operand4,
		operand5),
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:3326 */
rtx
gen_vcondv8hi (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3,
	rtx operand4,
	rtx operand5)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[6];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
    operands[4] = operand4;
    operands[5] = operand5;
#line 3335 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md"
{
  if (ix86_expand_int_vcond (operands))
    DONE;
  else
    FAIL;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
    operand4 = operands[4];
    operand5 = operands[5];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IF_THEN_ELSE (V8HImode,
	gen_rtx_fmt_ee (GET_CODE (operand3), VOIDmode,
		operand4,
		operand5),
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:3326 */
rtx
gen_vcondv4si (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3,
	rtx operand4,
	rtx operand5)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[6];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
    operands[4] = operand4;
    operands[5] = operand5;
#line 3335 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md"
{
  if (ix86_expand_int_vcond (operands))
    DONE;
  else
    FAIL;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
    operand4 = operands[4];
    operand5 = operands[5];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IF_THEN_ELSE (V4SImode,
	gen_rtx_fmt_ee (GET_CODE (operand3), VOIDmode,
		operand4,
		operand5),
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:3342 */
rtx
gen_vconduv16qi (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3,
	rtx operand4,
	rtx operand5)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[6];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
    operands[4] = operand4;
    operands[5] = operand5;
#line 3351 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md"
{
  if (ix86_expand_int_vcond (operands))
    DONE;
  else
    FAIL;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
    operand4 = operands[4];
    operand5 = operands[5];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IF_THEN_ELSE (V16QImode,
	gen_rtx_fmt_ee (GET_CODE (operand3), VOIDmode,
		operand4,
		operand5),
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:3342 */
rtx
gen_vconduv8hi (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3,
	rtx operand4,
	rtx operand5)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[6];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
    operands[4] = operand4;
    operands[5] = operand5;
#line 3351 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md"
{
  if (ix86_expand_int_vcond (operands))
    DONE;
  else
    FAIL;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
    operand4 = operands[4];
    operand5 = operands[5];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IF_THEN_ELSE (V8HImode,
	gen_rtx_fmt_ee (GET_CODE (operand3), VOIDmode,
		operand4,
		operand5),
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:3342 */
rtx
gen_vconduv4si (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3,
	rtx operand4,
	rtx operand5)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[6];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
    operands[4] = operand4;
    operands[5] = operand5;
#line 3351 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md"
{
  if (ix86_expand_int_vcond (operands))
    DONE;
  else
    FAIL;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
    operand4 = operands[4];
    operand5 = operands[5];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IF_THEN_ELSE (V4SImode,
	gen_rtx_fmt_ee (GET_CODE (operand3), VOIDmode,
		operand4,
		operand5),
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:3364 */
rtx
gen_one_cmplv16qi2 (rtx operand0,
	rtx operand1)
{
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
#line 3369 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md"
{
  int i, n = GET_MODE_NUNITS (V16QImode);
  rtvec v = rtvec_alloc (n);

  for (i = 0; i < n; ++i)
    RTVEC_ELT (v, i) = constm1_rtx;

  operands[2] = force_reg (V16QImode, gen_rtx_CONST_VECTOR (V16QImode, v));
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_XOR (V16QImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:3364 */
rtx
gen_one_cmplv8hi2 (rtx operand0,
	rtx operand1)
{
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
#line 3369 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md"
{
  int i, n = GET_MODE_NUNITS (V8HImode);
  rtvec v = rtvec_alloc (n);

  for (i = 0; i < n; ++i)
    RTVEC_ELT (v, i) = constm1_rtx;

  operands[2] = force_reg (V8HImode, gen_rtx_CONST_VECTOR (V8HImode, v));
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_XOR (V8HImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:3364 */
rtx
gen_one_cmplv4si2 (rtx operand0,
	rtx operand1)
{
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
#line 3369 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md"
{
  int i, n = GET_MODE_NUNITS (V4SImode);
  rtvec v = rtvec_alloc (n);

  for (i = 0; i < n; ++i)
    RTVEC_ELT (v, i) = constm1_rtx;

  operands[2] = force_reg (V4SImode, gen_rtx_CONST_VECTOR (V4SImode, v));
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_XOR (V4SImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:3364 */
rtx
gen_one_cmplv2di2 (rtx operand0,
	rtx operand1)
{
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
#line 3369 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md"
{
  int i, n = GET_MODE_NUNITS (V2DImode);
  rtvec v = rtvec_alloc (n);

  for (i = 0; i < n; ++i)
    RTVEC_ELT (v, i) = constm1_rtx;

  operands[2] = force_reg (V2DImode, gen_rtx_CONST_VECTOR (V2DImode, v));
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_XOR (V2DImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:3379 */
rtx
gen_andv16qi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 3384 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md"
ix86_fixup_binary_operands_no_copy (AND, V16QImode, operands);
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_AND (V16QImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:3379 */
rtx
gen_andv8hi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 3384 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md"
ix86_fixup_binary_operands_no_copy (AND, V8HImode, operands);
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_AND (V8HImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:3379 */
rtx
gen_andv4si3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 3384 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md"
ix86_fixup_binary_operands_no_copy (AND, V4SImode, operands);
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_AND (V4SImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:3379 */
rtx
gen_andv2di3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 3384 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md"
ix86_fixup_binary_operands_no_copy (AND, V2DImode, operands);
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_AND (V2DImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:3406 */
rtx
gen_iorv16qi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 3411 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md"
ix86_fixup_binary_operands_no_copy (IOR, V16QImode, operands);
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IOR (V16QImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:3406 */
rtx
gen_iorv8hi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 3411 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md"
ix86_fixup_binary_operands_no_copy (IOR, V8HImode, operands);
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IOR (V8HImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:3406 */
rtx
gen_iorv4si3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 3411 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md"
ix86_fixup_binary_operands_no_copy (IOR, V4SImode, operands);
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IOR (V4SImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:3406 */
rtx
gen_iorv2di3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 3411 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md"
ix86_fixup_binary_operands_no_copy (IOR, V2DImode, operands);
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IOR (V2DImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:3423 */
rtx
gen_xorv16qi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 3428 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md"
ix86_fixup_binary_operands_no_copy (XOR, V16QImode, operands);
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_XOR (V16QImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:3423 */
rtx
gen_xorv8hi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 3428 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md"
ix86_fixup_binary_operands_no_copy (XOR, V8HImode, operands);
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_XOR (V8HImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:3423 */
rtx
gen_xorv4si3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 3428 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md"
ix86_fixup_binary_operands_no_copy (XOR, V4SImode, operands);
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_XOR (V4SImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:3423 */
rtx
gen_xorv2di3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 3428 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md"
ix86_fixup_binary_operands_no_copy (XOR, V2DImode, operands);
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_XOR (V2DImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:3465 */
rtx
gen_vec_interleave_highv16qi (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 3480 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md"
{
  emit_insn (gen_sse2_punpckhbw (operands[0], operands[1], operands[2]));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_SELECT (V16QImode,
	gen_rtx_VEC_CONCAT (V32QImode,
	operand1,
	operand2),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (16,
		const_int_rtx[MAX_SAVED_CONST_INT + (8)],
		const_int_rtx[MAX_SAVED_CONST_INT + (24)],
		const_int_rtx[MAX_SAVED_CONST_INT + (9)],
		const_int_rtx[MAX_SAVED_CONST_INT + (25)],
		const_int_rtx[MAX_SAVED_CONST_INT + (10)],
		const_int_rtx[MAX_SAVED_CONST_INT + (26)],
		const_int_rtx[MAX_SAVED_CONST_INT + (11)],
		const_int_rtx[MAX_SAVED_CONST_INT + (27)],
		const_int_rtx[MAX_SAVED_CONST_INT + (12)],
		const_int_rtx[MAX_SAVED_CONST_INT + (28)],
		const_int_rtx[MAX_SAVED_CONST_INT + (13)],
		const_int_rtx[MAX_SAVED_CONST_INT + (29)],
		const_int_rtx[MAX_SAVED_CONST_INT + (14)],
		const_int_rtx[MAX_SAVED_CONST_INT + (30)],
		const_int_rtx[MAX_SAVED_CONST_INT + (15)],
		const_int_rtx[MAX_SAVED_CONST_INT + (31)])))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:3485 */
rtx
gen_vec_interleave_lowv16qi (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 3500 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md"
{
  emit_insn (gen_sse2_punpcklbw (operands[0], operands[1], operands[2]));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_SELECT (V16QImode,
	gen_rtx_VEC_CONCAT (V32QImode,
	operand1,
	operand2),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (16,
		const0_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (16)],
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (17)],
		const_int_rtx[MAX_SAVED_CONST_INT + (2)],
		const_int_rtx[MAX_SAVED_CONST_INT + (18)],
		const_int_rtx[MAX_SAVED_CONST_INT + (3)],
		const_int_rtx[MAX_SAVED_CONST_INT + (19)],
		const_int_rtx[MAX_SAVED_CONST_INT + (4)],
		const_int_rtx[MAX_SAVED_CONST_INT + (20)],
		const_int_rtx[MAX_SAVED_CONST_INT + (5)],
		const_int_rtx[MAX_SAVED_CONST_INT + (21)],
		const_int_rtx[MAX_SAVED_CONST_INT + (6)],
		const_int_rtx[MAX_SAVED_CONST_INT + (22)],
		const_int_rtx[MAX_SAVED_CONST_INT + (7)],
		const_int_rtx[MAX_SAVED_CONST_INT + (23)])))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:3505 */
rtx
gen_vec_interleave_highv8hi (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 3516 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md"
{
  emit_insn (gen_sse2_punpckhwd (operands[0], operands[1], operands[2]));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_SELECT (V8HImode,
	gen_rtx_VEC_CONCAT (V16HImode,
	operand1,
	operand2),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (8,
		const_int_rtx[MAX_SAVED_CONST_INT + (4)],
		const_int_rtx[MAX_SAVED_CONST_INT + (12)],
		const_int_rtx[MAX_SAVED_CONST_INT + (5)],
		const_int_rtx[MAX_SAVED_CONST_INT + (13)],
		const_int_rtx[MAX_SAVED_CONST_INT + (6)],
		const_int_rtx[MAX_SAVED_CONST_INT + (14)],
		const_int_rtx[MAX_SAVED_CONST_INT + (7)],
		const_int_rtx[MAX_SAVED_CONST_INT + (15)])))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:3521 */
rtx
gen_vec_interleave_lowv8hi (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 3532 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md"
{
  emit_insn (gen_sse2_punpcklwd (operands[0], operands[1], operands[2]));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_SELECT (V8HImode,
	gen_rtx_VEC_CONCAT (V16HImode,
	operand1,
	operand2),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (8,
		const0_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (8)],
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (9)],
		const_int_rtx[MAX_SAVED_CONST_INT + (2)],
		const_int_rtx[MAX_SAVED_CONST_INT + (10)],
		const_int_rtx[MAX_SAVED_CONST_INT + (3)],
		const_int_rtx[MAX_SAVED_CONST_INT + (11)])))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:3537 */
rtx
gen_vec_interleave_highv4si (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 3546 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md"
{
  emit_insn (gen_sse2_punpckhdq (operands[0], operands[1], operands[2]));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_SELECT (V4SImode,
	gen_rtx_VEC_CONCAT (V8SImode,
	operand1,
	operand2),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)],
		const_int_rtx[MAX_SAVED_CONST_INT + (6)],
		const_int_rtx[MAX_SAVED_CONST_INT + (3)],
		const_int_rtx[MAX_SAVED_CONST_INT + (7)])))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:3551 */
rtx
gen_vec_interleave_lowv4si (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 3560 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md"
{
  emit_insn (gen_sse2_punpckldq (operands[0], operands[1], operands[2]));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_SELECT (V4SImode,
	gen_rtx_VEC_CONCAT (V8SImode,
	operand1,
	operand2),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		const0_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (4)],
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (5)])))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:3565 */
rtx
gen_vec_interleave_highv2di (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 3574 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md"
{
  emit_insn (gen_sse2_punpckhqdq (operands[0], operands[1], operands[2]));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_SELECT (V2DImode,
	gen_rtx_VEC_CONCAT (V4DImode,
	operand1,
	operand2),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (3)])))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:3579 */
rtx
gen_vec_interleave_lowv2di (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 3588 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md"
{
  emit_insn (gen_sse2_punpcklqdq (operands[0], operands[1], operands[2]));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_SELECT (V2DImode,
	gen_rtx_VEC_CONCAT (V4DImode,
	operand1,
	operand2),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const0_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)])))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:3774 */
rtx
gen_sse2_pinsrw (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#line 3782 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md"
{
  operands[2] = gen_lowpart (HImode, operands[2]);
  operands[3] = GEN_INT ((1 << INTVAL (operands[3])));
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_MERGE (V8HImode,
	gen_rtx_VEC_DUPLICATE (V8HImode,
	operand2),
	operand1,
	operand3)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:3907 */
rtx
gen_sse2_pshufd (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 3912 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md"
{
  int mask = INTVAL (operands[2]);
  emit_insn (gen_sse2_pshufd_1 (operands[0], operands[1],
				GEN_INT ((mask >> 0) & 3),
				GEN_INT ((mask >> 2) & 3),
				GEN_INT ((mask >> 4) & 3),
				GEN_INT ((mask >> 6) & 3)));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit (operand0);
  emit (operand1);
  emit (operand2);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:3944 */
rtx
gen_sse2_pshuflw (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 3949 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md"
{
  int mask = INTVAL (operands[2]);
  emit_insn (gen_sse2_pshuflw_1 (operands[0], operands[1],
				 GEN_INT ((mask >> 0) & 3),
				 GEN_INT ((mask >> 2) & 3),
				 GEN_INT ((mask >> 4) & 3),
				 GEN_INT ((mask >> 6) & 3)));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit (operand0);
  emit (operand1);
  emit (operand2);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:3985 */
rtx
gen_sse2_pshufhw (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 3990 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md"
{
  int mask = INTVAL (operands[2]);
  emit_insn (gen_sse2_pshufhw_1 (operands[0], operands[1],
				 GEN_INT (((mask >> 0) & 3) + 4),
				 GEN_INT (((mask >> 2) & 3) + 4),
				 GEN_INT (((mask >> 4) & 3) + 4),
				 GEN_INT (((mask >> 6) & 3) + 4)));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit (operand0);
  emit (operand1);
  emit (operand2);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:4026 */
rtx
gen_sse2_loadd (rtx operand0,
	rtx operand1)
{
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
#line 4034 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md"
operands[2] = CONST0_RTX (V4SImode);
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_MERGE (V4SImode,
	gen_rtx_VEC_DUPLICATE (V4SImode,
	operand1),
	operand2,
	const1_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:4057 */
extern rtx gen_split_2124 (rtx, rtx *);
rtx
gen_split_2124 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
#line 4069 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md"
{
  operands[1] = gen_rtx_REG (SImode, REGNO (operands[1]));
}
  operand0 = operands[0];
  operand1 = operands[1];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:4074 */
rtx
gen_sse_storeq (rtx operand0,
	rtx operand1)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_SELECT (DImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:4092 */
extern rtx gen_split_2126 (rtx, rtx *);
rtx
gen_split_2126 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
#line 4099 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md"
{
  operands[1] = gen_rtx_REG (DImode, REGNO (operands[1]));
}
  operand0 = operands[0];
  operand1 = operands[1];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:4225 */
rtx
gen_vec_setv2di (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 4230 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md"
{
  ix86_expand_vector_set (false, operands[0], operands[1],
			  INTVAL (operands[2]));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit (operand0);
  emit (operand1);
  emit (operand2);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:4236 */
rtx
gen_vec_extractv2di (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 4241 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md"
{
  ix86_expand_vector_extract (false, operands[0], operands[1],
			      INTVAL (operands[2]));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit (operand0);
  emit (operand1);
  emit (operand2);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:4247 */
rtx
gen_vec_initv2di (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 4251 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md"
{
  ix86_expand_vector_init (false, operands[0], operands[1]);
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit (operand0);
  emit (operand1);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:4256 */
rtx
gen_vec_setv4si (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 4261 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md"
{
  ix86_expand_vector_set (false, operands[0], operands[1],
			  INTVAL (operands[2]));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit (operand0);
  emit (operand1);
  emit (operand2);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:4267 */
rtx
gen_vec_extractv4si (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 4272 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md"
{
  ix86_expand_vector_extract (false, operands[0], operands[1],
			      INTVAL (operands[2]));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit (operand0);
  emit (operand1);
  emit (operand2);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:4278 */
rtx
gen_vec_initv4si (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 4282 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md"
{
  ix86_expand_vector_init (false, operands[0], operands[1]);
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit (operand0);
  emit (operand1);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:4287 */
rtx
gen_vec_setv8hi (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 4292 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md"
{
  ix86_expand_vector_set (false, operands[0], operands[1],
			  INTVAL (operands[2]));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit (operand0);
  emit (operand1);
  emit (operand2);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:4298 */
rtx
gen_vec_extractv8hi (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 4303 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md"
{
  ix86_expand_vector_extract (false, operands[0], operands[1],
			      INTVAL (operands[2]));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit (operand0);
  emit (operand1);
  emit (operand2);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:4309 */
rtx
gen_vec_initv8hi (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 4313 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md"
{
  ix86_expand_vector_init (false, operands[0], operands[1]);
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit (operand0);
  emit (operand1);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:4318 */
rtx
gen_vec_setv16qi (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 4323 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md"
{
  ix86_expand_vector_set (false, operands[0], operands[1],
			  INTVAL (operands[2]));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit (operand0);
  emit (operand1);
  emit (operand2);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:4329 */
rtx
gen_vec_extractv16qi (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 4334 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md"
{
  ix86_expand_vector_extract (false, operands[0], operands[1],
			      INTVAL (operands[2]));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit (operand0);
  emit (operand1);
  emit (operand2);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:4340 */
rtx
gen_vec_initv16qi (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 4344 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md"
{
  ix86_expand_vector_init (false, operands[0], operands[1]);
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit (operand0);
  emit (operand1);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:4350 */
rtx
gen_vec_unpacku_hi_v16qi (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 4354 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md"
{
  if (TARGET_SSE4_1)
    ix86_expand_sse4_unpack (operands, true, true);
  else
    ix86_expand_sse_unpack (operands, true, true);
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit (operand0);
  emit (operand1);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:4362 */
rtx
gen_vec_unpacks_hi_v16qi (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 4366 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md"
{
  if (TARGET_SSE4_1)
    ix86_expand_sse4_unpack (operands, false, true);
  else
    ix86_expand_sse_unpack (operands, false, true);
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit (operand0);
  emit (operand1);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:4374 */
rtx
gen_vec_unpacku_lo_v16qi (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 4378 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md"
{
  if (TARGET_SSE4_1)
    ix86_expand_sse4_unpack (operands, true, false);
  else
    ix86_expand_sse_unpack (operands, true, false);
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit (operand0);
  emit (operand1);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:4386 */
rtx
gen_vec_unpacks_lo_v16qi (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 4390 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md"
{
  if (TARGET_SSE4_1)
    ix86_expand_sse4_unpack (operands, false, false);
  else
    ix86_expand_sse_unpack (operands, false, false);
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit (operand0);
  emit (operand1);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:4398 */
rtx
gen_vec_unpacku_hi_v8hi (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 4402 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md"
{
  if (TARGET_SSE4_1)
    ix86_expand_sse4_unpack (operands, true, true);
  else
    ix86_expand_sse_unpack (operands, true, true);
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit (operand0);
  emit (operand1);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:4410 */
rtx
gen_vec_unpacks_hi_v8hi (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 4414 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md"
{
  if (TARGET_SSE4_1)
    ix86_expand_sse4_unpack (operands, false, true);
  else
    ix86_expand_sse_unpack (operands, false, true);
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit (operand0);
  emit (operand1);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:4422 */
rtx
gen_vec_unpacku_lo_v8hi (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 4426 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md"
{
  if (TARGET_SSE4_1)
    ix86_expand_sse4_unpack (operands, true, false);
  else
    ix86_expand_sse_unpack (operands, true, false);
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit (operand0);
  emit (operand1);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:4434 */
rtx
gen_vec_unpacks_lo_v8hi (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 4438 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md"
{
  if (TARGET_SSE4_1)
    ix86_expand_sse4_unpack (operands, false, false);
  else
    ix86_expand_sse_unpack (operands, false, false);
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit (operand0);
  emit (operand1);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:4446 */
rtx
gen_vec_unpacku_hi_v4si (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 4450 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md"
{
  if (TARGET_SSE4_1)
    ix86_expand_sse4_unpack (operands, true, true);
  else
    ix86_expand_sse_unpack (operands, true, true);
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit (operand0);
  emit (operand1);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:4458 */
rtx
gen_vec_unpacks_hi_v4si (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 4462 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md"
{
  if (TARGET_SSE4_1)
    ix86_expand_sse4_unpack (operands, false, true);
  else
    ix86_expand_sse_unpack (operands, false, true);
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit (operand0);
  emit (operand1);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:4470 */
rtx
gen_vec_unpacku_lo_v4si (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 4474 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md"
{
  if (TARGET_SSE4_1)
    ix86_expand_sse4_unpack (operands, true, false);
  else
    ix86_expand_sse_unpack (operands, true, false);
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit (operand0);
  emit (operand1);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:4482 */
rtx
gen_vec_unpacks_lo_v4si (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 4486 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md"
{
  if (TARGET_SSE4_1)
    ix86_expand_sse4_unpack (operands, false, false);
  else
    ix86_expand_sse_unpack (operands, false, false);
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit (operand0);
  emit (operand1);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:4584 */
rtx
gen_sse2_maskmovdqu (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V16QImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand0),
	31));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:4633 */
rtx
gen_sse_sfence (void)
{
  rtx operand0;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[1];
#line 4637 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md"
{
  operands[0] = gen_rtx_MEM (BLKmode, gen_rtx_SCRATCH (Pmode));
  MEM_VOLATILE_P (operands[0]) = 1;
}
    operand0 = operands[0];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (BLKmode,
	gen_rtvec (1,
		operand0),
	37)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:4658 */
rtx
gen_sse2_mfence (void)
{
  rtx operand0;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[1];
#line 4662 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md"
{
  operands[0] = gen_rtx_MEM (BLKmode, gen_rtx_SCRATCH (Pmode));
  MEM_VOLATILE_P (operands[0]) = 1;
}
    operand0 = operands[0];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (BLKmode,
	gen_rtvec (1,
		operand0),
	44)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:4675 */
rtx
gen_sse2_lfence (void)
{
  rtx operand0;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[1];
#line 4679 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md"
{
  operands[0] = gen_rtx_MEM (BLKmode, gen_rtx_SCRATCH (Pmode));
  MEM_VOLATILE_P (operands[0]) = 1;
}
    operand0 = operands[0];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (BLKmode,
	gen_rtvec (1,
		operand0),
	45)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:5982 */
extern rtx gen_split_2155 (rtx, rtx *);
rtx
gen_split_2155 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 6012 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md"
{
  int ecx = !find_regno_note (curr_insn, REG_UNUSED, REGNO (operands[0]));
  int xmm0 = !find_regno_note (curr_insn, REG_UNUSED, REGNO (operands[1]));
  int flags = !find_regno_note (curr_insn, REG_UNUSED, FLAGS_REG);

  if (ecx)
    emit_insn (gen_sse4_2_pcmpestri (operands[0], operands[2],
				     operands[3], operands[4],
				     operands[5], operands[6]));
  if (xmm0)
    emit_insn (gen_sse4_2_pcmpestrm (operands[1], operands[2],
				     operands[3], operands[4],
				     operands[5], operands[6]));
  if (flags && !(ecx || xmm0))
    emit_insn (gen_sse4_2_pcmpestr_cconly (operands[2], operands[3],
					   operands[4], operands[5],
					   operands[6]));
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md:6110 */
extern rtx gen_split_2156 (rtx, rtx *);
rtx
gen_split_2156 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 6134 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sse.md"
{
  int ecx = !find_regno_note (curr_insn, REG_UNUSED, REGNO (operands[0]));
  int xmm0 = !find_regno_note (curr_insn, REG_UNUSED, REGNO (operands[1]));
  int flags = !find_regno_note (curr_insn, REG_UNUSED, FLAGS_REG);

  if (ecx)
    emit_insn (gen_sse4_2_pcmpistri (operands[0], operands[2],
				     operands[3], operands[4]));
  if (xmm0)
    emit_insn (gen_sse4_2_pcmpistrm (operands[1], operands[2],
				     operands[3], operands[4]));
  if (flags && !(ecx || xmm0))
    emit_insn (gen_sse4_2_pcmpistr_cconly (operands[2], operands[3],
					   operands[4]));
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sync.md:22 */
rtx
gen_sync_compare_and_swapqi (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#line 53 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sync.md"
{
  if ((QImode == DImode && !TARGET_64BIT) || QImode == TImode)
    {
      enum machine_mode hmode = QImode == DImode ? SImode : DImode;
      rtx low = simplify_gen_subreg (hmode, operands[3], QImode, 0);
      rtx high = simplify_gen_subreg (hmode, operands[3], QImode,
				      GET_MODE_SIZE (hmode));
      low = force_reg (hmode, low);
      high = force_reg (hmode, high);
      if (QImode == DImode)
	emit_insn (gen_sync_double_compare_and_swapdi
		   (operands[0], operands[1], operands[2], low, high));
      else if (QImode == TImode)
	emit_insn (gen_sync_double_compare_and_swapti
		   (operands[0], operands[1], operands[2], low, high));
      else
	gcc_unreachable ();
      DONE;
    }
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	operand1),
		gen_rtx_SET (VOIDmode,
	operand1,
	gen_rtx_UNSPEC_VOLATILE (QImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	10)),
		gen_hard_reg_clobber (CCmode, 17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sync.md:22 */
rtx
gen_sync_compare_and_swaphi (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#line 53 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sync.md"
{
  if ((HImode == DImode && !TARGET_64BIT) || HImode == TImode)
    {
      enum machine_mode hmode = HImode == DImode ? SImode : DImode;
      rtx low = simplify_gen_subreg (hmode, operands[3], HImode, 0);
      rtx high = simplify_gen_subreg (hmode, operands[3], HImode,
				      GET_MODE_SIZE (hmode));
      low = force_reg (hmode, low);
      high = force_reg (hmode, high);
      if (HImode == DImode)
	emit_insn (gen_sync_double_compare_and_swapdi
		   (operands[0], operands[1], operands[2], low, high));
      else if (HImode == TImode)
	emit_insn (gen_sync_double_compare_and_swapti
		   (operands[0], operands[1], operands[2], low, high));
      else
	gcc_unreachable ();
      DONE;
    }
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	operand1),
		gen_rtx_SET (VOIDmode,
	operand1,
	gen_rtx_UNSPEC_VOLATILE (HImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	10)),
		gen_hard_reg_clobber (CCmode, 17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sync.md:22 */
rtx
gen_sync_compare_and_swapsi (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#line 53 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sync.md"
{
  if ((SImode == DImode && !TARGET_64BIT) || SImode == TImode)
    {
      enum machine_mode hmode = SImode == DImode ? SImode : DImode;
      rtx low = simplify_gen_subreg (hmode, operands[3], SImode, 0);
      rtx high = simplify_gen_subreg (hmode, operands[3], SImode,
				      GET_MODE_SIZE (hmode));
      low = force_reg (hmode, low);
      high = force_reg (hmode, high);
      if (SImode == DImode)
	emit_insn (gen_sync_double_compare_and_swapdi
		   (operands[0], operands[1], operands[2], low, high));
      else if (SImode == TImode)
	emit_insn (gen_sync_double_compare_and_swapti
		   (operands[0], operands[1], operands[2], low, high));
      else
	gcc_unreachable ();
      DONE;
    }
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	operand1),
		gen_rtx_SET (VOIDmode,
	operand1,
	gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	10)),
		gen_hard_reg_clobber (CCmode, 17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sync.md:22 */
rtx
gen_sync_compare_and_swapdi (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#line 53 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sync.md"
{
  if ((DImode == DImode && !TARGET_64BIT) || DImode == TImode)
    {
      enum machine_mode hmode = DImode == DImode ? SImode : DImode;
      rtx low = simplify_gen_subreg (hmode, operands[3], DImode, 0);
      rtx high = simplify_gen_subreg (hmode, operands[3], DImode,
				      GET_MODE_SIZE (hmode));
      low = force_reg (hmode, low);
      high = force_reg (hmode, high);
      if (DImode == DImode)
	emit_insn (gen_sync_double_compare_and_swapdi
		   (operands[0], operands[1], operands[2], low, high));
      else if (DImode == TImode)
	emit_insn (gen_sync_double_compare_and_swapti
		   (operands[0], operands[1], operands[2], low, high));
      else
	gcc_unreachable ();
      DONE;
    }
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	operand1),
		gen_rtx_SET (VOIDmode,
	operand1,
	gen_rtx_UNSPEC_VOLATILE (DImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	10)),
		gen_hard_reg_clobber (CCmode, 17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sync.md:22 */
rtx
gen_sync_compare_and_swapti (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#line 53 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sync.md"
{
  if ((TImode == DImode && !TARGET_64BIT) || TImode == TImode)
    {
      enum machine_mode hmode = TImode == DImode ? SImode : DImode;
      rtx low = simplify_gen_subreg (hmode, operands[3], TImode, 0);
      rtx high = simplify_gen_subreg (hmode, operands[3], TImode,
				      GET_MODE_SIZE (hmode));
      low = force_reg (hmode, low);
      high = force_reg (hmode, high);
      if (TImode == DImode)
	emit_insn (gen_sync_double_compare_and_swapdi
		   (operands[0], operands[1], operands[2], low, high));
      else if (TImode == TImode)
	emit_insn (gen_sync_double_compare_and_swapti
		   (operands[0], operands[1], operands[2], low, high));
      else
	gcc_unreachable ();
      DONE;
    }
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	operand1),
		gen_rtx_SET (VOIDmode,
	operand1,
	gen_rtx_UNSPEC_VOLATILE (TImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	10)),
		gen_hard_reg_clobber (CCmode, 17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sync.md:124 */
rtx
gen_sync_compare_and_swap_ccqi (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx operand4;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[5];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#line 140 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sync.md"
{
  operands[4] = gen_rtx_REG (CCZmode, FLAGS_REG);
  ix86_compare_op0 = operands[3];
  ix86_compare_op1 = NULL;
  ix86_compare_emitted = operands[4];
  if ((QImode == DImode && !TARGET_64BIT) || QImode == TImode)
    {
      enum machine_mode hmode = QImode == DImode ? SImode : DImode;
      rtx low = simplify_gen_subreg (hmode, operands[3], QImode, 0);
      rtx high = simplify_gen_subreg (hmode, operands[3], QImode,
				      GET_MODE_SIZE (hmode));
      low = force_reg (hmode, low);
      high = force_reg (hmode, high);
      if (QImode == DImode)
	emit_insn (gen_sync_double_compare_and_swap_ccdi
		   (operands[0], operands[1], operands[2], low, high));
      else if (QImode == TImode)
	emit_insn (gen_sync_double_compare_and_swap_ccti
		   (operands[0], operands[1], operands[2], low, high));
      else
	gcc_unreachable ();
      DONE;
    }
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
    operand4 = operands[4];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	operand1),
		gen_rtx_SET (VOIDmode,
	operand1,
	gen_rtx_UNSPEC_VOLATILE (QImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	10)),
		gen_rtx_SET (VOIDmode,
	operand4,
	gen_rtx_COMPARE (CCZmode,
	gen_rtx_UNSPEC_VOLATILE (QImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	11),
	operand2)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sync.md:124 */
rtx
gen_sync_compare_and_swap_cchi (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx operand4;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[5];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#line 140 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sync.md"
{
  operands[4] = gen_rtx_REG (CCZmode, FLAGS_REG);
  ix86_compare_op0 = operands[3];
  ix86_compare_op1 = NULL;
  ix86_compare_emitted = operands[4];
  if ((HImode == DImode && !TARGET_64BIT) || HImode == TImode)
    {
      enum machine_mode hmode = HImode == DImode ? SImode : DImode;
      rtx low = simplify_gen_subreg (hmode, operands[3], HImode, 0);
      rtx high = simplify_gen_subreg (hmode, operands[3], HImode,
				      GET_MODE_SIZE (hmode));
      low = force_reg (hmode, low);
      high = force_reg (hmode, high);
      if (HImode == DImode)
	emit_insn (gen_sync_double_compare_and_swap_ccdi
		   (operands[0], operands[1], operands[2], low, high));
      else if (HImode == TImode)
	emit_insn (gen_sync_double_compare_and_swap_ccti
		   (operands[0], operands[1], operands[2], low, high));
      else
	gcc_unreachable ();
      DONE;
    }
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
    operand4 = operands[4];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	operand1),
		gen_rtx_SET (VOIDmode,
	operand1,
	gen_rtx_UNSPEC_VOLATILE (HImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	10)),
		gen_rtx_SET (VOIDmode,
	operand4,
	gen_rtx_COMPARE (CCZmode,
	gen_rtx_UNSPEC_VOLATILE (HImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	11),
	operand2)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sync.md:124 */
rtx
gen_sync_compare_and_swap_ccsi (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx operand4;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[5];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#line 140 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sync.md"
{
  operands[4] = gen_rtx_REG (CCZmode, FLAGS_REG);
  ix86_compare_op0 = operands[3];
  ix86_compare_op1 = NULL;
  ix86_compare_emitted = operands[4];
  if ((SImode == DImode && !TARGET_64BIT) || SImode == TImode)
    {
      enum machine_mode hmode = SImode == DImode ? SImode : DImode;
      rtx low = simplify_gen_subreg (hmode, operands[3], SImode, 0);
      rtx high = simplify_gen_subreg (hmode, operands[3], SImode,
				      GET_MODE_SIZE (hmode));
      low = force_reg (hmode, low);
      high = force_reg (hmode, high);
      if (SImode == DImode)
	emit_insn (gen_sync_double_compare_and_swap_ccdi
		   (operands[0], operands[1], operands[2], low, high));
      else if (SImode == TImode)
	emit_insn (gen_sync_double_compare_and_swap_ccti
		   (operands[0], operands[1], operands[2], low, high));
      else
	gcc_unreachable ();
      DONE;
    }
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
    operand4 = operands[4];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	operand1),
		gen_rtx_SET (VOIDmode,
	operand1,
	gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	10)),
		gen_rtx_SET (VOIDmode,
	operand4,
	gen_rtx_COMPARE (CCZmode,
	gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	11),
	operand2)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sync.md:124 */
rtx
gen_sync_compare_and_swap_ccdi (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx operand4;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[5];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#line 140 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sync.md"
{
  operands[4] = gen_rtx_REG (CCZmode, FLAGS_REG);
  ix86_compare_op0 = operands[3];
  ix86_compare_op1 = NULL;
  ix86_compare_emitted = operands[4];
  if ((DImode == DImode && !TARGET_64BIT) || DImode == TImode)
    {
      enum machine_mode hmode = DImode == DImode ? SImode : DImode;
      rtx low = simplify_gen_subreg (hmode, operands[3], DImode, 0);
      rtx high = simplify_gen_subreg (hmode, operands[3], DImode,
				      GET_MODE_SIZE (hmode));
      low = force_reg (hmode, low);
      high = force_reg (hmode, high);
      if (DImode == DImode)
	emit_insn (gen_sync_double_compare_and_swap_ccdi
		   (operands[0], operands[1], operands[2], low, high));
      else if (DImode == TImode)
	emit_insn (gen_sync_double_compare_and_swap_ccti
		   (operands[0], operands[1], operands[2], low, high));
      else
	gcc_unreachable ();
      DONE;
    }
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
    operand4 = operands[4];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	operand1),
		gen_rtx_SET (VOIDmode,
	operand1,
	gen_rtx_UNSPEC_VOLATILE (DImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	10)),
		gen_rtx_SET (VOIDmode,
	operand4,
	gen_rtx_COMPARE (CCZmode,
	gen_rtx_UNSPEC_VOLATILE (DImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	11),
	operand2)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sync.md:124 */
rtx
gen_sync_compare_and_swap_ccti (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx operand4;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[5];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#line 140 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/gcc-5666.3/obj/src/gcc/config/i386/sync.md"
{
  operands[4] = gen_rtx_REG (CCZmode, FLAGS_REG);
  ix86_compare_op0 = operands[3];
  ix86_compare_op1 = NULL;
  ix86_compare_emitted = operands[4];
  if ((TImode == DImode && !TARGET_64BIT) || TImode == TImode)
    {
      enum machine_mode hmode = TImode == DImode ? SImode : DImode;
      rtx low = simplify_gen_subreg (hmode, operands[3], TImode, 0);
      rtx high = simplify_gen_subreg (hmode, operands[3], TImode,
				      GET_MODE_SIZE (hmode));
      low = force_reg (hmode, low);
      high = force_reg (hmode, high);
      if (TImode == DImode)
	emit_insn (gen_sync_double_compare_and_swap_ccdi
		   (operands[0], operands[1], operands[2], low, high));
      else if (TImode == TImode)
	emit_insn (gen_sync_double_compare_and_swap_ccti
		   (operands[0], operands[1], operands[2], low, high));
      else
	gcc_unreachable ();
      DONE;
    }
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
    operand4 = operands[4];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	operand1),
		gen_rtx_SET (VOIDmode,
	operand1,
	gen_rtx_UNSPEC_VOLATILE (TImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	10)),
		gen_rtx_SET (VOIDmode,
	operand4,
	gen_rtx_COMPARE (CCZmode,
	gen_rtx_UNSPEC_VOLATILE (TImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	11),
	operand2)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}



void
add_clobbers (rtx pattern ATTRIBUTE_UNUSED, int insn_code_number)
{
  switch (insn_code_number)
    {
    case 1272:
    case 1268:
      XVECEXP (pattern, 0, 1) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (V16QImode));
      XVECEXP (pattern, 0, 2) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode));
      break;

    case 914:
    case 913:
      XVECEXP (pattern, 0, 1) = gen_hard_reg_clobber (XFmode, 8);
      XVECEXP (pattern, 0, 2) = gen_hard_reg_clobber (XFmode, 9);
      XVECEXP (pattern, 0, 3) = gen_hard_reg_clobber (XFmode, 10);
      XVECEXP (pattern, 0, 4) = gen_hard_reg_clobber (XFmode, 11);
      XVECEXP (pattern, 0, 5) = gen_hard_reg_clobber (XFmode, 12);
      XVECEXP (pattern, 0, 6) = gen_hard_reg_clobber (XFmode, 13);
      XVECEXP (pattern, 0, 7) = gen_hard_reg_clobber (XFmode, 14);
      XVECEXP (pattern, 0, 8) = gen_hard_reg_clobber (XFmode, 15);
      XVECEXP (pattern, 0, 9) = gen_hard_reg_clobber (DImode, 29);
      XVECEXP (pattern, 0, 10) = gen_hard_reg_clobber (DImode, 30);
      XVECEXP (pattern, 0, 11) = gen_hard_reg_clobber (DImode, 31);
      XVECEXP (pattern, 0, 12) = gen_hard_reg_clobber (DImode, 32);
      XVECEXP (pattern, 0, 13) = gen_hard_reg_clobber (DImode, 33);
      XVECEXP (pattern, 0, 14) = gen_hard_reg_clobber (DImode, 34);
      XVECEXP (pattern, 0, 15) = gen_hard_reg_clobber (DImode, 35);
      XVECEXP (pattern, 0, 16) = gen_hard_reg_clobber (DImode, 36);
      break;

    case 765:
      XVECEXP (pattern, 0, 2) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (DImode));
      XVECEXP (pattern, 0, 3) = gen_hard_reg_clobber (CCmode, 17);
      break;

    case 764:
      XVECEXP (pattern, 0, 2) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode));
      XVECEXP (pattern, 0, 3) = gen_hard_reg_clobber (CCmode, 17);
      break;

    case 667:
      XVECEXP (pattern, 0, 1) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SFmode));
      break;

    case 666:
      XVECEXP (pattern, 0, 1) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (DFmode));
      break;

    case 596:
    case 594:
    case 593:
    case 591:
    case 590:
      XVECEXP (pattern, 0, 1) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode));
      XVECEXP (pattern, 0, 2) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode));
      XVECEXP (pattern, 0, 3) = gen_hard_reg_clobber (CCmode, 17);
      break;

    case 551:
    case 550:
    case 549:
    case 548:
    case 547:
    case 546:
    case 545:
      XVECEXP (pattern, 0, 1) = gen_hard_reg_clobber (CCFPmode, 18);
      XVECEXP (pattern, 0, 2) = gen_hard_reg_clobber (CCFPmode, 17);
      XVECEXP (pattern, 0, 3) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (HImode));
      break;

    case 544:
    case 543:
    case 542:
    case 541:
    case 540:
    case 539:
      XVECEXP (pattern, 0, 1) = gen_hard_reg_clobber (CCFPmode, 18);
      XVECEXP (pattern, 0, 2) = gen_hard_reg_clobber (CCFPmode, 17);
      break;

    case 385:
      XVECEXP (pattern, 0, 1) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (V2DFmode));
      break;

    case 380:
      XVECEXP (pattern, 0, 1) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (V4SFmode));
      break;

    case 742:
    case 741:
    case 288:
    case 287:
    case 285:
    case 282:
    case 279:
      XVECEXP (pattern, 0, 3) = gen_hard_reg_clobber (CCmode, 17);
      break;

    case 1290:
    case 1289:
    case 1288:
    case 1287:
    case 1279:
    case 1278:
    case 1277:
    case 1276:
    case 1275:
    case 1274:
    case 1273:
    case 784:
    case 783:
    case 782:
    case 781:
    case 387:
    case 386:
    case 383:
    case 382:
    case 381:
    case 378:
    case 377:
    case 376:
    case 286:
    case 284:
    case 283:
    case 281:
    case 280:
    case 278:
    case 277:
      XVECEXP (pattern, 0, 2) = gen_hard_reg_clobber (CCmode, 17);
      break;

    case 580:
    case 579:
    case 274:
    case 273:
    case 271:
    case 270:
      XVECEXP (pattern, 0, 1) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode));
      XVECEXP (pattern, 0, 2) = gen_hard_reg_clobber (CCmode, 17);
      break;

    case 582:
    case 470:
    case 432:
    case 411:
    case 272:
    case 269:
      XVECEXP (pattern, 0, 1) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (DImode));
      XVECEXP (pattern, 0, 2) = gen_hard_reg_clobber (CCmode, 17);
      break;

    case 503:
    case 501:
    case 469:
    case 467:
    case 431:
    case 361:
    case 335:
    case 231:
    case 230:
    case 229:
      XVECEXP (pattern, 0, 1) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (QImode));
      break;

    case 495:
    case 493:
    case 461:
    case 459:
    case 427:
    case 352:
    case 330:
    case 224:
    case 223:
    case 222:
      XVECEXP (pattern, 0, 1) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (HImode));
      break;

    case 787:
    case 785:
    case 488:
    case 485:
    case 454:
    case 451:
    case 422:
    case 349:
    case 327:
    case 218:
    case 217:
    case 215:
      XVECEXP (pattern, 0, 1) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode));
      break;

    case 788:
    case 786:
    case 478:
    case 476:
    case 441:
    case 439:
    case 416:
    case 342:
    case 320:
    case 210:
    case 209:
    case 208:
      XVECEXP (pattern, 0, 1) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (DImode));
      break;

    case 701:
    case 690:
    case 162:
      XVECEXP (pattern, 0, 4) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (XFmode));
      break;

    case 700:
    case 689:
    case 161:
      XVECEXP (pattern, 0, 3) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (XFmode));
      break;

    case 677:
    case 157:
    case 156:
    case 155:
      XVECEXP (pattern, 0, 2) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (XFmode));
      break;

    case 676:
    case 670:
    case 669:
    case 668:
    case 154:
    case 153:
    case 152:
      XVECEXP (pattern, 0, 1) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (XFmode));
      break;

    case 517:
    case 504:
    case 115:
      XVECEXP (pattern, 0, 1) = gen_hard_reg_clobber (CCmode, 17);
      XVECEXP (pattern, 0, 2) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode));
      break;

    case 1314:
    case 1313:
    case 1312:
    case 1311:
    case 1310:
    case 1309:
    case 1308:
    case 1307:
    case 1306:
    case 1305:
    case 1304:
    case 1303:
    case 1302:
    case 1301:
    case 1300:
    case 1299:
    case 1298:
    case 1297:
    case 1296:
    case 1295:
    case 745:
    case 743:
    case 708:
    case 706:
    case 699:
    case 698:
    case 697:
    case 695:
    case 688:
    case 687:
    case 686:
    case 684:
    case 606:
    case 605:
    case 603:
    case 602:
    case 600:
    case 598:
    case 589:
    case 588:
    case 587:
    case 586:
    case 585:
    case 584:
    case 573:
    case 572:
    case 532:
    case 531:
    case 530:
    case 529:
    case 528:
    case 527:
    case 526:
    case 525:
    case 524:
    case 523:
    case 522:
    case 521:
    case 520:
    case 519:
    case 518:
    case 516:
    case 515:
    case 514:
    case 513:
    case 512:
    case 511:
    case 510:
    case 509:
    case 508:
    case 507:
    case 506:
    case 505:
    case 499:
    case 498:
    case 497:
    case 496:
    case 491:
    case 490:
    case 483:
    case 482:
    case 481:
    case 480:
    case 479:
    case 474:
    case 473:
    case 472:
    case 465:
    case 464:
    case 463:
    case 462:
    case 457:
    case 456:
    case 449:
    case 448:
    case 447:
    case 446:
    case 445:
    case 444:
    case 443:
    case 442:
    case 437:
    case 436:
    case 435:
    case 434:
    case 433:
    case 429:
    case 428:
    case 425:
    case 424:
    case 420:
    case 419:
    case 418:
    case 417:
    case 414:
    case 413:
    case 412:
    case 374:
    case 372:
    case 369:
    case 368:
    case 366:
    case 365:
    case 364:
    case 358:
    case 357:
    case 356:
    case 355:
    case 354:
    case 353:
    case 350:
    case 345:
    case 344:
    case 343:
    case 340:
    case 339:
    case 338:
    case 337:
    case 336:
    case 332:
    case 331:
    case 328:
    case 323:
    case 322:
    case 321:
    case 318:
    case 317:
    case 316:
    case 315:
    case 313:
    case 309:
    case 308:
    case 306:
    case 303:
    case 302:
    case 300:
    case 276:
    case 275:
    case 268:
    case 267:
    case 266:
    case 265:
    case 264:
    case 263:
    case 262:
    case 261:
    case 260:
    case 259:
    case 258:
    case 255:
    case 254:
    case 251:
    case 246:
    case 245:
    case 244:
    case 243:
    case 242:
    case 241:
    case 238:
    case 237:
    case 236:
    case 235:
    case 234:
    case 233:
    case 232:
    case 227:
    case 226:
    case 225:
    case 220:
    case 219:
    case 212:
    case 211:
    case 206:
    case 193:
    case 192:
    case 191:
    case 190:
    case 188:
    case 187:
    case 186:
    case 160:
    case 159:
    case 158:
    case 111:
    case 109:
    case 108:
    case 106:
    case 105:
    case 103:
    case 80:
    case 79:
    case 60:
    case 59:
    case 52:
    case 39:
    case 38:
      XVECEXP (pattern, 0, 1) = gen_hard_reg_clobber (CCmode, 17);
      break;

    default:
      gcc_unreachable ();
    }
}


int
added_clobbers_hard_reg_p (int insn_code_number)
{
  switch (insn_code_number)
    {
    case 1272:
    case 1268:
    case 667:
    case 666:
    case 385:
    case 380:
    case 503:
    case 501:
    case 469:
    case 467:
    case 431:
    case 361:
    case 335:
    case 231:
    case 230:
    case 229:
    case 495:
    case 493:
    case 461:
    case 459:
    case 427:
    case 352:
    case 330:
    case 224:
    case 223:
    case 222:
    case 787:
    case 785:
    case 488:
    case 485:
    case 454:
    case 451:
    case 422:
    case 349:
    case 327:
    case 218:
    case 217:
    case 215:
    case 788:
    case 786:
    case 478:
    case 476:
    case 441:
    case 439:
    case 416:
    case 342:
    case 320:
    case 210:
    case 209:
    case 208:
    case 701:
    case 690:
    case 162:
    case 700:
    case 689:
    case 161:
    case 677:
    case 157:
    case 156:
    case 155:
    case 676:
    case 670:
    case 669:
    case 668:
    case 154:
    case 153:
    case 152:
      return 0;

    case 914:
    case 913:
    case 765:
    case 764:
    case 596:
    case 594:
    case 593:
    case 591:
    case 590:
    case 551:
    case 550:
    case 549:
    case 548:
    case 547:
    case 546:
    case 545:
    case 544:
    case 543:
    case 542:
    case 541:
    case 540:
    case 539:
    case 742:
    case 741:
    case 288:
    case 287:
    case 285:
    case 282:
    case 279:
    case 1290:
    case 1289:
    case 1288:
    case 1287:
    case 1279:
    case 1278:
    case 1277:
    case 1276:
    case 1275:
    case 1274:
    case 1273:
    case 784:
    case 783:
    case 782:
    case 781:
    case 387:
    case 386:
    case 383:
    case 382:
    case 381:
    case 378:
    case 377:
    case 376:
    case 286:
    case 284:
    case 283:
    case 281:
    case 280:
    case 278:
    case 277:
    case 580:
    case 579:
    case 274:
    case 273:
    case 271:
    case 270:
    case 582:
    case 470:
    case 432:
    case 411:
    case 272:
    case 269:
    case 517:
    case 504:
    case 115:
    case 1314:
    case 1313:
    case 1312:
    case 1311:
    case 1310:
    case 1309:
    case 1308:
    case 1307:
    case 1306:
    case 1305:
    case 1304:
    case 1303:
    case 1302:
    case 1301:
    case 1300:
    case 1299:
    case 1298:
    case 1297:
    case 1296:
    case 1295:
    case 745:
    case 743:
    case 708:
    case 706:
    case 699:
    case 698:
    case 697:
    case 695:
    case 688:
    case 687:
    case 686:
    case 684:
    case 606:
    case 605:
    case 603:
    case 602:
    case 600:
    case 598:
    case 589:
    case 588:
    case 587:
    case 586:
    case 585:
    case 584:
    case 573:
    case 572:
    case 532:
    case 531:
    case 530:
    case 529:
    case 528:
    case 527:
    case 526:
    case 525:
    case 524:
    case 523:
    case 522:
    case 521:
    case 520:
    case 519:
    case 518:
    case 516:
    case 515:
    case 514:
    case 513:
    case 512:
    case 511:
    case 510:
    case 509:
    case 508:
    case 507:
    case 506:
    case 505:
    case 499:
    case 498:
    case 497:
    case 496:
    case 491:
    case 490:
    case 483:
    case 482:
    case 481:
    case 480:
    case 479:
    case 474:
    case 473:
    case 472:
    case 465:
    case 464:
    case 463:
    case 462:
    case 457:
    case 456:
    case 449:
    case 448:
    case 447:
    case 446:
    case 445:
    case 444:
    case 443:
    case 442:
    case 437:
    case 436:
    case 435:
    case 434:
    case 433:
    case 429:
    case 428:
    case 425:
    case 424:
    case 420:
    case 419:
    case 418:
    case 417:
    case 414:
    case 413:
    case 412:
    case 374:
    case 372:
    case 369:
    case 368:
    case 366:
    case 365:
    case 364:
    case 358:
    case 357:
    case 356:
    case 355:
    case 354:
    case 353:
    case 350:
    case 345:
    case 344:
    case 343:
    case 340:
    case 339:
    case 338:
    case 337:
    case 336:
    case 332:
    case 331:
    case 328:
    case 323:
    case 322:
    case 321:
    case 318:
    case 317:
    case 316:
    case 315:
    case 313:
    case 309:
    case 308:
    case 306:
    case 303:
    case 302:
    case 300:
    case 276:
    case 275:
    case 268:
    case 267:
    case 266:
    case 265:
    case 264:
    case 263:
    case 262:
    case 261:
    case 260:
    case 259:
    case 258:
    case 255:
    case 254:
    case 251:
    case 246:
    case 245:
    case 244:
    case 243:
    case 242:
    case 241:
    case 238:
    case 237:
    case 236:
    case 235:
    case 234:
    case 233:
    case 232:
    case 227:
    case 226:
    case 225:
    case 220:
    case 219:
    case 212:
    case 211:
    case 206:
    case 193:
    case 192:
    case 191:
    case 190:
    case 188:
    case 187:
    case 186:
    case 160:
    case 159:
    case 158:
    case 111:
    case 109:
    case 108:
    case 106:
    case 105:
    case 103:
    case 80:
    case 79:
    case 60:
    case 59:
    case 52:
    case 39:
    case 38:
      return 1;

    default:
      gcc_unreachable ();
    }
}
