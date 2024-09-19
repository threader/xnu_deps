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

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/darwin.md:22 */
rtx
gen_adddi3_high (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (DImode,
	operand1,
	gen_rtx_HIGH (DImode,
	operand2)));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/darwin.md:30 */
rtx
gen_movdf_low_si (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MEM (DFmode,
	gen_rtx_LO_SUM (SImode,
	operand1,
	operand2)));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/darwin.md:61 */
rtx
gen_movdf_low_di (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MEM (DFmode,
	gen_rtx_LO_SUM (DImode,
	operand1,
	operand2)));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/darwin.md:81 */
rtx
gen_movdf_low_st_si (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (DFmode,
	gen_rtx_LO_SUM (SImode,
	operand1,
	operand2)),
	operand0);
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/darwin.md:90 */
rtx
gen_movdf_low_st_di (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (DFmode,
	gen_rtx_LO_SUM (DImode,
	operand1,
	operand2)),
	operand0);
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/darwin.md:99 */
rtx
gen_movsf_low_si (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MEM (SFmode,
	gen_rtx_LO_SUM (SImode,
	operand1,
	operand2)));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/darwin.md:110 */
rtx
gen_movsf_low_di (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MEM (SFmode,
	gen_rtx_LO_SUM (DImode,
	operand1,
	operand2)));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/darwin.md:121 */
rtx
gen_movsf_low_st_si (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (SFmode,
	gen_rtx_LO_SUM (SImode,
	operand1,
	operand2)),
	operand0);
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/darwin.md:132 */
rtx
gen_movsf_low_st_di (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (SFmode,
	gen_rtx_LO_SUM (DImode,
	operand1,
	operand2)),
	operand0);
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/darwin.md:144 */
rtx
gen_movdi_low (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MEM (DImode,
	gen_rtx_LO_SUM (DImode,
	operand1,
	operand2)));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/darwin.md:153 */
rtx
gen_movsi_low_st (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (SImode,
	gen_rtx_LO_SUM (SImode,
	operand1,
	operand2)),
	operand0);
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/darwin.md:162 */
rtx
gen_movdi_low_st (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (DImode,
	gen_rtx_LO_SUM (DImode,
	operand1,
	operand2)),
	operand0);
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/darwin.md:185 */
rtx
gen_macho_high_si (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_HIGH (SImode,
	operand1));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/darwin.md:192 */
rtx
gen_macho_high_di (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_HIGH (DImode,
	operand1));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/darwin.md:212 */
rtx
gen_macho_low_si (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_LO_SUM (SImode,
	operand1,
	operand2));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/darwin.md:221 */
rtx
gen_macho_low_di (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_LO_SUM (DImode,
	operand1,
	operand2));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/darwin.md:255 */
rtx
gen_load_macho_picbase_si (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (2,
		operand1,
		pc_rtx),
	15));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/darwin.md:264 */
rtx
gen_load_macho_picbase_di (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (2,
		operand1,
		pc_rtx),
	15));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/darwin.md:289 */
rtx
gen_load_macho_picbase_label_si (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (1,
		operand1),
	32));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/darwin.md:297 */
rtx
gen_load_macho_picbase_label_di (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC_VOLATILE (DImode,
	gen_rtvec (1,
		operand1),
	32));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/darwin.md:325 */
rtx
gen_macho_correct_pic_si (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (SImode,
	operand1,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (2,
		operand2,
		operand3),
	16)));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/darwin.md:335 */
rtx
gen_macho_correct_pic_di (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (DImode,
	operand1,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (2,
		operand2,
		operand3),
	16)));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:242 */
rtx
gen_extendqidi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SIGN_EXTEND (DImode,
	operand1));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:516 */
rtx
gen_extendqisi2_ppc (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SIGN_EXTEND (SImode,
	operand1));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:682 */
rtx
gen_extendqihi2_ppc (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SIGN_EXTEND (HImode,
	operand1));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:1353 */
rtx
gen_dlmzb (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_UNSPEC (CCmode,
	gen_rtvec (2,
		operand1,
		operand2),
	46)),
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (2,
		operand1,
		operand2),
	45))));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:1482 */
rtx
gen_addsi3_high (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (SImode,
	operand1,
	gen_rtx_HIGH (SImode,
	operand2)));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:1583 */
rtx
gen_one_cmplsi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NOT (SImode,
	operand1));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:1583 */
rtx
gen_one_cmpldi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NOT (DImode,
	operand1));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:2007 */
rtx
gen_abssi2_nopower (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ABS (SImode,
	operand1)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode))));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:2101 */
rtx
gen_clzsi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_CLZ (SImode,
	operand1));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:2101 */
rtx
gen_clzdi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_CLZ (DImode,
	operand1));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:2198 */
rtx
gen_mulsi3_no_mq (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (SImode,
	operand1,
	operand2));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:2655 */
rtx
gen_mulh_call (void)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (SImode,
	3),
	gen_rtx_TRUNCATE (SImode,
	gen_rtx_LSHIFTRT (DImode,
	gen_rtx_MULT (DImode,
	gen_rtx_SIGN_EXTEND (DImode,
	gen_rtx_REG (SImode,
	3)),
	gen_rtx_SIGN_EXTEND (DImode,
	gen_rtx_REG (SImode,
	4))),
	const_int_rtx[MAX_SAVED_CONST_INT + (32)]))),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode))));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:2666 */
rtx
gen_mull_call (void)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (DImode,
	3),
	gen_rtx_MULT (DImode,
	gen_rtx_SIGN_EXTEND (DImode,
	gen_rtx_REG (SImode,
	3)),
	gen_rtx_SIGN_EXTEND (DImode,
	gen_rtx_REG (SImode,
	4)))),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode)),
		gen_hard_reg_clobber (SImode, 0)));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:2676 */
rtx
gen_divss_call (void)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (4,
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (SImode,
	3),
	gen_rtx_DIV (SImode,
	gen_rtx_REG (SImode,
	3),
	gen_rtx_REG (SImode,
	4))),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (SImode,
	4),
	gen_rtx_MOD (SImode,
	gen_rtx_REG (SImode,
	3),
	gen_rtx_REG (SImode,
	4))),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode)),
		gen_hard_reg_clobber (SImode, 0)));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:2687 */
rtx
gen_divus_call (void)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (6,
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (SImode,
	3),
	gen_rtx_UDIV (SImode,
	gen_rtx_REG (SImode,
	3),
	gen_rtx_REG (SImode,
	4))),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (SImode,
	4),
	gen_rtx_UMOD (SImode,
	gen_rtx_REG (SImode,
	3),
	gen_rtx_REG (SImode,
	4))),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode)),
		gen_hard_reg_clobber (SImode, 0),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (CCmode)),
		gen_hard_reg_clobber (CCmode, 69)));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:2700 */
rtx
gen_quoss_call (void)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (SImode,
	3),
	gen_rtx_DIV (SImode,
	gen_rtx_REG (SImode,
	3),
	gen_rtx_REG (SImode,
	4))),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode))));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:2708 */
rtx
gen_quous_call (void)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (5,
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (SImode,
	3),
	gen_rtx_UDIV (SImode,
	gen_rtx_REG (SImode,
	3),
	gen_rtx_REG (SImode,
	4))),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode)),
		gen_hard_reg_clobber (SImode, 0),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (CCmode)),
		gen_hard_reg_clobber (CCmode, 69)));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:2725 */
rtx
gen_andsi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_AND (SImode,
	operand1,
	operand2)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (CCmode))));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:3409 */
rtx
gen_insvsi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	gen_rtx_ZERO_EXTRACT (SImode,
	operand0,
	operand1,
	operand2),
	operand3);
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:3544 */
rtx
gen_insvdi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	gen_rtx_ZERO_EXTRACT (DImode,
	operand0,
	operand1,
	operand2),
	operand3);
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:3621 */
rtx
gen_extzvsi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ZERO_EXTRACT (SImode,
	operand1,
	operand2,
	operand3));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:3748 */
rtx
gen_extzvdi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ZERO_EXTRACT (DImode,
	operand1,
	operand2,
	operand3));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:3812 */
rtx
gen_rotlsi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ROTATE (SImode,
	operand1,
	operand2));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:4126 */
rtx
gen_ashlsi3_no_power (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFT (SImode,
	operand1,
	operand2));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:4255 */
rtx
gen_rlwinm (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_AND (SImode,
	gen_rtx_ASHIFT (SImode,
	operand1,
	operand2),
	operand3));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:4355 */
rtx
gen_lshrsi3_no_power (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_LSHIFTRT (SImode,
	operand1,
	operand2));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:4777 */
rtx
gen_ashrsi3_no_power (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFTRT (SImode,
	operand1,
	operand2));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:4957 */
rtx
gen_aux_truncdfsf2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SFmode,
	gen_rtvec (1,
		operand1),
	0));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:5066 */
rtx
gen_fres (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SFmode,
	gen_rtvec (1,
		operand1),
	34));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:5555 */
rtx
gen_sqrtdf2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SQRT (DFmode,
	operand1));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:5859 */
rtx
gen_fix_truncdfsi2_internal_gfxopt (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FIX (SImode,
	operand1)),
		gen_rtx_CLOBBER (VOIDmode,
	operand2)));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:5880 */
rtx
gen_fctiwz (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (1,
		gen_rtx_FIX (SImode,
	operand1)),
	10));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:5945 */
rtx
gen_stfiwx (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		operand1),
	32));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:5959 */
rtx
gen_floatdidf2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT (DFmode,
	operand1));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:5966 */
rtx
gen_floatsidf_ppc64 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (4,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT (DFmode,
	operand1)),
		gen_rtx_CLOBBER (VOIDmode,
	operand2),
		gen_rtx_CLOBBER (VOIDmode,
	operand3),
		gen_rtx_CLOBBER (VOIDmode,
	operand4)));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:5981 */
rtx
gen_floatunssidf_ppc64 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (4,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSIGNED_FLOAT (DFmode,
	operand1)),
		gen_rtx_CLOBBER (VOIDmode,
	operand2),
		gen_rtx_CLOBBER (VOIDmode,
	operand3),
		gen_rtx_CLOBBER (VOIDmode,
	operand4)));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:5996 */
rtx
gen_fix_truncdfdi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FIX (DImode,
	operand1));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:6024 */
rtx
gen_floatdisf2_internal1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT (SFmode,
	operand1)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (DFmode))));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:6399 */
rtx
gen_ashrdi3_no_power (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFTRT (DImode,
	operand1,
	operand2));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:6427 */
rtx
gen_absdi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ABS (DImode,
	operand1)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (DImode))));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:6451 */
rtx
gen_muldi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (DImode,
	operand1,
	operand2));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:6522 */
rtx
gen_smuldi3_highpart (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_TRUNCATE (DImode,
	gen_rtx_LSHIFTRT (TImode,
	gen_rtx_MULT (TImode,
	gen_rtx_SIGN_EXTEND (TImode,
	operand1),
	gen_rtx_SIGN_EXTEND (TImode,
	operand2)),
	const_int_rtx[MAX_SAVED_CONST_INT + (64)])));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:6534 */
rtx
gen_umuldi3_highpart (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_TRUNCATE (DImode,
	gen_rtx_LSHIFTRT (TImode,
	gen_rtx_MULT (TImode,
	gen_rtx_ZERO_EXTEND (TImode,
	operand1),
	gen_rtx_ZERO_EXTEND (TImode,
	operand2)),
	const_int_rtx[MAX_SAVED_CONST_INT + (64)])));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:6546 */
rtx
gen_rotldi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ROTATE (DImode,
	operand1,
	operand2));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:6997 */
rtx
gen_ashldi3_internal5 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_COMPARE (CCmode,
	gen_rtx_AND (DImode,
	gen_rtx_ASHIFT (DImode,
	operand1,
	operand2),
	operand3),
	const0_rtx)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (DImode))));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:7073 */
rtx
gen_ashldi3_internal8 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_COMPARE (CCmode,
	gen_rtx_AND (DImode,
	gen_rtx_ASHIFT (DImode,
	operand1,
	operand2),
	operand3),
	const0_rtx)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (DImode))));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:7309 */
rtx
gen_anddi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_AND (DImode,
	operand1,
	operand2)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (CCmode))));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:7827 */
rtx
gen_movsi_low (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MEM (SImode,
	gen_rtx_LO_SUM (SImode,
	operand1,
	operand2)));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:8431 */
rtx
gen_trunctfdf2_internal1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT_TRUNCATE (DFmode,
	operand1));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:8447 */
rtx
gen_trunctfdf2_internal2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT_TRUNCATE (DFmode,
	operand1));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:8455 */
rtx
gen_trunctfsf2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT_TRUNCATE (SFmode,
	operand1)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (DFmode))));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:8483 */
rtx
gen_fix_trunc_helper (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (DFmode,
	gen_rtvec (1,
		operand1),
	30)),
		gen_rtx_CLOBBER (VOIDmode,
	operand2)));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:8535 */
rtx
gen_negtf2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NEG (TFmode,
	operand1));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:9564 */
rtx
gen_movdi_si_update (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (DImode,
	gen_rtx_PLUS (SImode,
	operand1,
	operand2)),
	operand3),
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (SImode,
	operand1,
	operand2))));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:9564 */
rtx
gen_movdi_di_update (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (DImode,
	gen_rtx_PLUS (DImode,
	operand1,
	operand2)),
	operand3),
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (DImode,
	operand1,
	operand2))));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:9599 */
rtx
gen_movsi_update (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (SImode,
	gen_rtx_PLUS (SImode,
	operand1,
	operand2)),
	operand3),
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (SImode,
	operand1,
	operand2))));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:10992 */
rtx
gen_longjump (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_LABEL_REF (VOIDmode,
	operand0)),
		gen_rtx_USE (VOIDmode,
	operand1)));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:11264 */
rtx
gen_blockage (void)
{
  return gen_rtx_UNSPEC_VOLATILE (VOIDmode,
	gen_rtvec (1,
		const0_rtx),
	0);
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:11547 */
rtx
gen_stack_protect_setsi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		operand1),
	35)),
		gen_rtx_SET (VOIDmode,
	gen_rtx_SCRATCH (SImode),
	const0_rtx)));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:11556 */
rtx
gen_stack_protect_setdi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (1,
		operand1),
	35)),
		gen_rtx_SET (VOIDmode,
	gen_rtx_SCRATCH (DImode),
	const0_rtx)));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:11584 */
rtx
gen_stack_protect_testsi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (CCEQmode,
	gen_rtvec (2,
		operand1,
		operand2),
	36)),
		gen_rtx_SET (VOIDmode,
	gen_rtx_SCRATCH (SImode),
	const0_rtx),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode))));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:11597 */
rtx
gen_stack_protect_testdi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (CCEQmode,
	gen_rtvec (2,
		operand1,
		operand2),
	36)),
		gen_rtx_SET (VOIDmode,
	gen_rtx_SCRATCH (DImode),
	const0_rtx),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (DImode))));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:13860 */
rtx
gen_jump (rtx operand0 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_LABEL_REF (VOIDmode,
	operand0));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:13868 */
rtx
gen_return (void)
{
  return gen_rtx_RETURN (VOIDmode);
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:13944 */
rtx
gen_nop (void)
{
  return const0_rtx;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:14153 */
rtx
gen_trap (void)
{
  return gen_rtx_TRAP_IF (VOIDmode,
	const1_rtx,
	const0_rtx);
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:14207 */
rtx
gen_movesi_from_cr (rtx operand0 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (8,
		gen_rtx_REG (CCmode,
	68),
		gen_rtx_REG (CCmode,
	69),
		gen_rtx_REG (CCmode,
	70),
		gen_rtx_REG (CCmode,
	71),
		gen_rtx_REG (CCmode,
	72),
		gen_rtx_REG (CCmode,
	73),
		gen_rtx_REG (CCmode,
	74),
		gen_rtx_REG (CCmode,
	75)),
	19));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:14266 */
rtx
gen_stack_tie (rtx operand0 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (BLKmode,
	gen_rtvec (1,
		operand0),
	5));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:14387 */
rtx
gen_eh_set_lr_si (rtx operand0 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_UNSPEC_VOLATILE (VOIDmode,
	gen_rtvec (1,
		operand0),
	9),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode))));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:14387 */
rtx
gen_eh_set_lr_di (rtx operand0 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_UNSPEC_VOLATILE (VOIDmode,
	gen_rtvec (1,
		operand0),
	9),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (DImode))));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:14405 */
rtx
gen_prefetch (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PREFETCH (VOIDmode,
	operand0,
	operand1,
	operand2);
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:52 */
rtx
gen_load_locked_si (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (1,
		operand1),
	1));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:52 */
rtx
gen_load_locked_di (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC_VOLATILE (DImode,
	gen_rtvec (1,
		operand1),
	1));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:60 */
rtx
gen_store_conditional_si (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC_VOLATILE (CCmode,
	gen_rtvec (1,
		const0_rtx),
	2)),
		gen_rtx_SET (VOIDmode,
	operand1,
	operand2)));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:60 */
rtx
gen_store_conditional_di (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC_VOLATILE (CCmode,
	gen_rtvec (1,
		const0_rtx),
	2)),
		gen_rtx_SET (VOIDmode,
	operand1,
	operand2)));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:69 */
rtx
gen_sync_compare_and_swapsi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (4,
		gen_rtx_SET (VOIDmode,
	operand0,
	operand1),
		gen_rtx_SET (VOIDmode,
	operand1,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (2,
		operand2,
		operand3),
	42)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (CCmode))));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:69 */
rtx
gen_sync_compare_and_swapdi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (4,
		gen_rtx_SET (VOIDmode,
	operand0,
	operand1),
		gen_rtx_SET (VOIDmode,
	operand1,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (2,
		operand2,
		operand3),
	42)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (DImode)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (CCmode))));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:113 */
rtx
gen_sync_compare_and_swapqhi_internal (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (4,
		gen_rtx_SET (VOIDmode,
	operand0,
	operand4),
		gen_rtx_SET (VOIDmode,
	operand4,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	42)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (CCmode))));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:135 */
rtx
gen_sync_lock_test_and_setsi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (4,
		gen_rtx_SET (VOIDmode,
	operand0,
	operand1),
		gen_rtx_SET (VOIDmode,
	operand1,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		operand2),
	43)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (CCmode))));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:135 */
rtx
gen_sync_lock_test_and_setdi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (4,
		gen_rtx_SET (VOIDmode,
	operand0,
	operand1),
		gen_rtx_SET (VOIDmode,
	operand1,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (1,
		operand2),
	43)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (DImode)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (CCmode))));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:595 */
rtx
gen_isync (void)
{
  return gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (BLKmode,
	gen_rtx_SCRATCH (VOIDmode)),
	gen_rtx_UNSPEC_VOLATILE (BLKmode,
	gen_rtvec (1,
		gen_rtx_MEM (BLKmode,
	gen_rtx_SCRATCH (VOIDmode))),
	39));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:614 */
rtx
gen_lwsync (void)
{
  return gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (BLKmode,
	gen_rtx_SCRATCH (VOIDmode)),
	gen_rtx_UNSPEC_VOLATILE (BLKmode,
	gen_rtvec (1,
		gen_rtx_MEM (BLKmode,
	gen_rtx_SCRATCH (VOIDmode))),
	38));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:22 */
rtx
gen_altivec_lvx_v4si (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	operand1);
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:22 */
rtx
gen_altivec_lvx_v8hi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	operand1);
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:22 */
rtx
gen_altivec_lvx_v16qi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	operand1);
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:22 */
rtx
gen_altivec_lvx_v4sf (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	operand1);
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:156 */
rtx
gen_altivec_stvx_v4si (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	operand1);
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:156 */
rtx
gen_altivec_stvx_v8hi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	operand1);
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:156 */
rtx
gen_altivec_stvx_v16qi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	operand1);
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:156 */
rtx
gen_altivec_stvx_v4sf (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	operand1);
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:254 */
rtx
gen_get_vrsave_internal (rtx operand0 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		gen_rtx_REG (SImode,
	109)),
	214));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:301 */
rtx
gen_addv4si3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (V4SImode,
	operand1,
	operand2));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:301 */
rtx
gen_addv8hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (V8HImode,
	operand1,
	operand2));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:301 */
rtx
gen_addv16qi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (V16QImode,
	operand1,
	operand2));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:309 */
rtx
gen_addv4sf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (V4SFmode,
	operand1,
	operand2));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:317 */
rtx
gen_altivec_vaddcuw (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V4SImode,
	gen_rtvec (2,
		operand1,
		operand2),
	75));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:326 */
rtx
gen_altivec_vadduws (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V4SImode,
	gen_rtvec (2,
		operand1,
		operand2),
	76)),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (SImode,
	110),
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		const0_rtx),
	213))));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:326 */
rtx
gen_altivec_vadduhs (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V8HImode,
	gen_rtvec (2,
		operand1,
		operand2),
	76)),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (SImode,
	110),
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		const0_rtx),
	213))));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:326 */
rtx
gen_altivec_vaddubs (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V16QImode,
	gen_rtvec (2,
		operand1,
		operand2),
	76)),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (SImode,
	110),
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		const0_rtx),
	213))));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:336 */
rtx
gen_altivec_vaddsws (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V4SImode,
	gen_rtvec (2,
		operand1,
		operand2),
	77)),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (SImode,
	110),
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		const0_rtx),
	213))));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:336 */
rtx
gen_altivec_vaddshs (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V8HImode,
	gen_rtvec (2,
		operand1,
		operand2),
	77)),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (SImode,
	110),
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		const0_rtx),
	213))));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:336 */
rtx
gen_altivec_vaddsbs (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V16QImode,
	gen_rtvec (2,
		operand1,
		operand2),
	77)),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (SImode,
	110),
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		const0_rtx),
	213))));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:347 */
rtx
gen_subv4si3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (V4SImode,
	operand1,
	operand2));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:347 */
rtx
gen_subv8hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (V8HImode,
	operand1,
	operand2));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:347 */
rtx
gen_subv16qi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (V16QImode,
	operand1,
	operand2));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:355 */
rtx
gen_subv4sf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (V4SFmode,
	operand1,
	operand2));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:363 */
rtx
gen_altivec_vsubcuw (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V4SImode,
	gen_rtvec (2,
		operand1,
		operand2),
	124));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:372 */
rtx
gen_altivec_vsubuws (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V4SImode,
	gen_rtvec (2,
		operand1,
		operand2),
	125)),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (SImode,
	110),
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		const0_rtx),
	213))));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:372 */
rtx
gen_altivec_vsubuhs (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V8HImode,
	gen_rtvec (2,
		operand1,
		operand2),
	125)),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (SImode,
	110),
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		const0_rtx),
	213))));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:372 */
rtx
gen_altivec_vsububs (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V16QImode,
	gen_rtvec (2,
		operand1,
		operand2),
	125)),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (SImode,
	110),
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		const0_rtx),
	213))));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:382 */
rtx
gen_altivec_vsubsws (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V4SImode,
	gen_rtvec (2,
		operand1,
		operand2),
	126)),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (SImode,
	110),
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		const0_rtx),
	213))));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:382 */
rtx
gen_altivec_vsubshs (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V8HImode,
	gen_rtvec (2,
		operand1,
		operand2),
	126)),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (SImode,
	110),
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		const0_rtx),
	213))));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:382 */
rtx
gen_altivec_vsubsbs (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V16QImode,
	gen_rtvec (2,
		operand1,
		operand2),
	126)),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (SImode,
	110),
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		const0_rtx),
	213))));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:393 */
rtx
gen_altivec_vavguw (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V4SImode,
	gen_rtvec (2,
		operand1,
		operand2),
	80));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:393 */
rtx
gen_altivec_vavguh (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V8HImode,
	gen_rtvec (2,
		operand1,
		operand2),
	80));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:393 */
rtx
gen_altivec_vavgub (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V16QImode,
	gen_rtvec (2,
		operand1,
		operand2),
	80));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:402 */
rtx
gen_altivec_vavgsw (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V4SImode,
	gen_rtvec (2,
		operand1,
		operand2),
	81));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:402 */
rtx
gen_altivec_vavgsh (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V8HImode,
	gen_rtvec (2,
		operand1,
		operand2),
	81));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:402 */
rtx
gen_altivec_vavgsb (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V16QImode,
	gen_rtvec (2,
		operand1,
		operand2),
	81));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:411 */
rtx
gen_altivec_vcmpbfp (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V4SImode,
	gen_rtvec (2,
		operand1,
		operand2),
	50));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:420 */
rtx
gen_altivec_vcmpequb (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V16QImode,
	gen_rtvec (2,
		operand1,
		operand2),
	51));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:429 */
rtx
gen_altivec_vcmpequh (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V8HImode,
	gen_rtvec (2,
		operand1,
		operand2),
	52));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:438 */
rtx
gen_altivec_vcmpequw (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V4SImode,
	gen_rtvec (2,
		operand1,
		operand2),
	53));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:447 */
rtx
gen_altivec_vcmpeqfp (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V4SImode,
	gen_rtvec (2,
		operand1,
		operand2),
	54));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:456 */
rtx
gen_altivec_vcmpgefp (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V4SImode,
	gen_rtvec (2,
		operand1,
		operand2),
	55));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:465 */
rtx
gen_altivec_vcmpgtub (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V16QImode,
	gen_rtvec (2,
		operand1,
		operand2),
	56));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:474 */
rtx
gen_altivec_vcmpgtsb (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V16QImode,
	gen_rtvec (2,
		operand1,
		operand2),
	57));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:483 */
rtx
gen_altivec_vcmpgtuh (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V8HImode,
	gen_rtvec (2,
		operand1,
		operand2),
	58));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:492 */
rtx
gen_altivec_vcmpgtsh (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V8HImode,
	gen_rtvec (2,
		operand1,
		operand2),
	59));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:501 */
rtx
gen_altivec_vcmpgtuw (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V4SImode,
	gen_rtvec (2,
		operand1,
		operand2),
	60));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:510 */
rtx
gen_altivec_vcmpgtsw (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V4SImode,
	gen_rtvec (2,
		operand1,
		operand2),
	61));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:519 */
rtx
gen_altivec_vcmpgtfp (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V4SImode,
	gen_rtvec (2,
		operand1,
		operand2),
	62));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:529 */
rtx
gen_altivec_vmaddfp (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (V4SFmode,
	gen_rtx_MULT (V4SFmode,
	operand1,
	operand2),
	operand3));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:620 */
rtx
gen_altivec_vnmsubfp (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NEG (V4SFmode,
	gen_rtx_MINUS (V4SFmode,
	gen_rtx_MULT (V4SFmode,
	operand1,
	operand2),
	operand3)));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:629 */
rtx
gen_altivec_vmsumuhm (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V4SImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	65));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:629 */
rtx
gen_altivec_vmsumubm (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V4SImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	65));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:639 */
rtx
gen_altivec_vmsummhm (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V4SImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	66));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:639 */
rtx
gen_altivec_vmsummbm (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V4SImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	66));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:649 */
rtx
gen_altivec_vmsumshm (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V4SImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	68));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:659 */
rtx
gen_altivec_vmsumuhs (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V4SImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	69)),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (SImode,
	110),
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		const0_rtx),
	213))));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:670 */
rtx
gen_altivec_vmsumshs (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V4SImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	70)),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (SImode,
	110),
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		const0_rtx),
	213))));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:683 */
rtx
gen_umaxv4si3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UMAX (V4SImode,
	operand1,
	operand2));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:683 */
rtx
gen_umaxv8hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UMAX (V8HImode,
	operand1,
	operand2));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:683 */
rtx
gen_umaxv16qi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UMAX (V16QImode,
	operand1,
	operand2));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:691 */
rtx
gen_smaxv4si3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SMAX (V4SImode,
	operand1,
	operand2));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:691 */
rtx
gen_smaxv8hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SMAX (V8HImode,
	operand1,
	operand2));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:691 */
rtx
gen_smaxv16qi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SMAX (V16QImode,
	operand1,
	operand2));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:699 */
rtx
gen_smaxv4sf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SMAX (V4SFmode,
	operand1,
	operand2));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:707 */
rtx
gen_uminv4si3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UMIN (V4SImode,
	operand1,
	operand2));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:707 */
rtx
gen_uminv8hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UMIN (V8HImode,
	operand1,
	operand2));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:707 */
rtx
gen_uminv16qi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UMIN (V16QImode,
	operand1,
	operand2));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:715 */
rtx
gen_sminv4si3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SMIN (V4SImode,
	operand1,
	operand2));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:715 */
rtx
gen_sminv8hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SMIN (V8HImode,
	operand1,
	operand2));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:715 */
rtx
gen_sminv16qi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SMIN (V16QImode,
	operand1,
	operand2));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:723 */
rtx
gen_sminv4sf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SMIN (V4SFmode,
	operand1,
	operand2));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:731 */
rtx
gen_altivec_vmhaddshs (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V8HImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	71)),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (SImode,
	110),
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		const0_rtx),
	213))));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:742 */
rtx
gen_altivec_vmhraddshs (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V8HImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	72)),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (SImode,
	110),
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		const0_rtx),
	213))));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:753 */
rtx
gen_altivec_vmladduhm (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V8HImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	73));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:763 */
rtx
gen_altivec_vmrghb (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_MERGE (V16QImode,
	gen_rtx_VEC_SELECT (V16QImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (16,
		const0_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (8)],
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (9)],
		const_int_rtx[MAX_SAVED_CONST_INT + (2)],
		const_int_rtx[MAX_SAVED_CONST_INT + (10)],
		const_int_rtx[MAX_SAVED_CONST_INT + (3)],
		const_int_rtx[MAX_SAVED_CONST_INT + (11)],
		const_int_rtx[MAX_SAVED_CONST_INT + (4)],
		const_int_rtx[MAX_SAVED_CONST_INT + (12)],
		const_int_rtx[MAX_SAVED_CONST_INT + (5)],
		const_int_rtx[MAX_SAVED_CONST_INT + (13)],
		const_int_rtx[MAX_SAVED_CONST_INT + (6)],
		const_int_rtx[MAX_SAVED_CONST_INT + (14)],
		const_int_rtx[MAX_SAVED_CONST_INT + (7)],
		const_int_rtx[MAX_SAVED_CONST_INT + (15)]))),
	gen_rtx_VEC_SELECT (V16QImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (16,
		const_int_rtx[MAX_SAVED_CONST_INT + (8)],
		const0_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (9)],
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (10)],
		const_int_rtx[MAX_SAVED_CONST_INT + (2)],
		const_int_rtx[MAX_SAVED_CONST_INT + (11)],
		const_int_rtx[MAX_SAVED_CONST_INT + (3)],
		const_int_rtx[MAX_SAVED_CONST_INT + (12)],
		const_int_rtx[MAX_SAVED_CONST_INT + (4)],
		const_int_rtx[MAX_SAVED_CONST_INT + (13)],
		const_int_rtx[MAX_SAVED_CONST_INT + (5)],
		const_int_rtx[MAX_SAVED_CONST_INT + (14)],
		const_int_rtx[MAX_SAVED_CONST_INT + (6)],
		const_int_rtx[MAX_SAVED_CONST_INT + (15)],
		const_int_rtx[MAX_SAVED_CONST_INT + (7)]))),
	GEN_INT (21845LL)));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:804 */
rtx
gen_altivec_vmrghh (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_MERGE (V8HImode,
	gen_rtx_VEC_SELECT (V8HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (8,
		const0_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (4)],
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (5)],
		const_int_rtx[MAX_SAVED_CONST_INT + (2)],
		const_int_rtx[MAX_SAVED_CONST_INT + (6)],
		const_int_rtx[MAX_SAVED_CONST_INT + (3)],
		const_int_rtx[MAX_SAVED_CONST_INT + (7)]))),
	gen_rtx_VEC_SELECT (V8HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (8,
		const_int_rtx[MAX_SAVED_CONST_INT + (4)],
		const0_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (5)],
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (6)],
		const_int_rtx[MAX_SAVED_CONST_INT + (2)],
		const_int_rtx[MAX_SAVED_CONST_INT + (7)],
		const_int_rtx[MAX_SAVED_CONST_INT + (3)]))),
	GEN_INT (85LL)));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:829 */
rtx
gen_altivec_vmrghw (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_MERGE (V4SImode,
	gen_rtx_VEC_SELECT (V4SImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		const0_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)],
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (3)]))),
	gen_rtx_VEC_SELECT (V4SImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)],
		const0_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (3)],
		const1_rtx))),
	const_int_rtx[MAX_SAVED_CONST_INT + (5)]));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:846 */
rtx
gen_altivec_vmrglb (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_MERGE (V16QImode,
	gen_rtx_VEC_SELECT (V16QImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (16,
		const_int_rtx[MAX_SAVED_CONST_INT + (8)],
		const0_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (9)],
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (10)],
		const_int_rtx[MAX_SAVED_CONST_INT + (2)],
		const_int_rtx[MAX_SAVED_CONST_INT + (11)],
		const_int_rtx[MAX_SAVED_CONST_INT + (3)],
		const_int_rtx[MAX_SAVED_CONST_INT + (12)],
		const_int_rtx[MAX_SAVED_CONST_INT + (4)],
		const_int_rtx[MAX_SAVED_CONST_INT + (13)],
		const_int_rtx[MAX_SAVED_CONST_INT + (5)],
		const_int_rtx[MAX_SAVED_CONST_INT + (14)],
		const_int_rtx[MAX_SAVED_CONST_INT + (6)],
		const_int_rtx[MAX_SAVED_CONST_INT + (15)],
		const_int_rtx[MAX_SAVED_CONST_INT + (7)]))),
	gen_rtx_VEC_SELECT (V16QImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (16,
		const0_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (8)],
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (9)],
		const_int_rtx[MAX_SAVED_CONST_INT + (2)],
		const_int_rtx[MAX_SAVED_CONST_INT + (10)],
		const_int_rtx[MAX_SAVED_CONST_INT + (3)],
		const_int_rtx[MAX_SAVED_CONST_INT + (11)],
		const_int_rtx[MAX_SAVED_CONST_INT + (4)],
		const_int_rtx[MAX_SAVED_CONST_INT + (12)],
		const_int_rtx[MAX_SAVED_CONST_INT + (5)],
		const_int_rtx[MAX_SAVED_CONST_INT + (13)],
		const_int_rtx[MAX_SAVED_CONST_INT + (6)],
		const_int_rtx[MAX_SAVED_CONST_INT + (14)],
		const_int_rtx[MAX_SAVED_CONST_INT + (7)],
		const_int_rtx[MAX_SAVED_CONST_INT + (15)]))),
	GEN_INT (21845LL)));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:887 */
rtx
gen_altivec_vmrglh (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_MERGE (V8HImode,
	gen_rtx_VEC_SELECT (V8HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (8,
		const_int_rtx[MAX_SAVED_CONST_INT + (4)],
		const0_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (5)],
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (6)],
		const_int_rtx[MAX_SAVED_CONST_INT + (2)],
		const_int_rtx[MAX_SAVED_CONST_INT + (7)],
		const_int_rtx[MAX_SAVED_CONST_INT + (3)]))),
	gen_rtx_VEC_SELECT (V8HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (8,
		const0_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (4)],
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (5)],
		const_int_rtx[MAX_SAVED_CONST_INT + (2)],
		const_int_rtx[MAX_SAVED_CONST_INT + (6)],
		const_int_rtx[MAX_SAVED_CONST_INT + (3)],
		const_int_rtx[MAX_SAVED_CONST_INT + (7)]))),
	GEN_INT (85LL)));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:912 */
rtx
gen_altivec_vmrglw (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_MERGE (V4SImode,
	gen_rtx_VEC_SELECT (V4SImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)],
		const0_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (3)],
		const1_rtx))),
	gen_rtx_VEC_SELECT (V4SImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		const0_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)],
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (3)]))),
	const_int_rtx[MAX_SAVED_CONST_INT + (5)]));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:929 */
rtx
gen_altivec_vmuleub (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V8HImode,
	gen_rtvec (2,
		operand1,
		operand2),
	83));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:938 */
rtx
gen_altivec_vmulesb (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V8HImode,
	gen_rtvec (2,
		operand1,
		operand2),
	84));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:947 */
rtx
gen_altivec_vmuleuh (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V4SImode,
	gen_rtvec (2,
		operand1,
		operand2),
	85));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:956 */
rtx
gen_altivec_vmulesh (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V4SImode,
	gen_rtvec (2,
		operand1,
		operand2),
	86));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:965 */
rtx
gen_altivec_vmuloub (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V8HImode,
	gen_rtvec (2,
		operand1,
		operand2),
	87));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:974 */
rtx
gen_altivec_vmulosb (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V8HImode,
	gen_rtvec (2,
		operand1,
		operand2),
	88));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:983 */
rtx
gen_altivec_vmulouh (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V4SImode,
	gen_rtvec (2,
		operand1,
		operand2),
	89));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:992 */
rtx
gen_altivec_vmulosh (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V4SImode,
	gen_rtvec (2,
		operand1,
		operand2),
	90));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1004 */
rtx
gen_andv4si3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_AND (V4SImode,
	operand1,
	operand2));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1004 */
rtx
gen_andv8hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_AND (V8HImode,
	operand1,
	operand2));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1004 */
rtx
gen_andv16qi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_AND (V16QImode,
	operand1,
	operand2));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1012 */
rtx
gen_iorv4si3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IOR (V4SImode,
	operand1,
	operand2));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1012 */
rtx
gen_iorv8hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IOR (V8HImode,
	operand1,
	operand2));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1012 */
rtx
gen_iorv16qi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IOR (V16QImode,
	operand1,
	operand2));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1020 */
rtx
gen_xorv4si3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_XOR (V4SImode,
	operand1,
	operand2));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1020 */
rtx
gen_xorv8hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_XOR (V8HImode,
	operand1,
	operand2));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1020 */
rtx
gen_xorv16qi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_XOR (V16QImode,
	operand1,
	operand2));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1028 */
rtx
gen_xorv4sf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_XOR (V4SFmode,
	operand1,
	operand2));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1036 */
rtx
gen_one_cmplv4si2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NOT (V4SImode,
	operand1));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1036 */
rtx
gen_one_cmplv8hi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NOT (V8HImode,
	operand1));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1036 */
rtx
gen_one_cmplv16qi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NOT (V16QImode,
	operand1));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1043 */
rtx
gen_altivec_norv4si3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NOT (V4SImode,
	gen_rtx_IOR (V4SImode,
	operand1,
	operand2)));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1043 */
rtx
gen_altivec_norv8hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NOT (V8HImode,
	gen_rtx_IOR (V8HImode,
	operand1,
	operand2)));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1043 */
rtx
gen_altivec_norv16qi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NOT (V16QImode,
	gen_rtx_IOR (V16QImode,
	operand1,
	operand2)));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1051 */
rtx
gen_andcv4si3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_AND (V4SImode,
	gen_rtx_NOT (V4SImode,
	operand2),
	operand1));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1051 */
rtx
gen_andcv8hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_AND (V8HImode,
	gen_rtx_NOT (V8HImode,
	operand2),
	operand1));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1051 */
rtx
gen_andcv16qi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_AND (V16QImode,
	gen_rtx_NOT (V16QImode,
	operand2),
	operand1));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1067 */
rtx
gen_altivec_vpkuhum (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V16QImode,
	gen_rtvec (2,
		operand1,
		operand2),
	93));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1076 */
rtx
gen_altivec_vpkuwum (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V8HImode,
	gen_rtvec (2,
		operand1,
		operand2),
	94));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1085 */
rtx
gen_altivec_vpkpx (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V8HImode,
	gen_rtvec (2,
		operand1,
		operand2),
	95));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1094 */
rtx
gen_altivec_vpkshss (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V16QImode,
	gen_rtvec (2,
		operand1,
		operand2),
	97)),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (SImode,
	110),
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		const0_rtx),
	213))));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1104 */
rtx
gen_altivec_vpkswss (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V8HImode,
	gen_rtvec (2,
		operand1,
		operand2),
	99)),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (SImode,
	110),
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		const0_rtx),
	213))));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1114 */
rtx
gen_altivec_vpkuhus (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V16QImode,
	gen_rtvec (2,
		operand1,
		operand2),
	100)),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (SImode,
	110),
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		const0_rtx),
	213))));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1124 */
rtx
gen_altivec_vpkshus (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V16QImode,
	gen_rtvec (2,
		operand1,
		operand2),
	101)),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (SImode,
	110),
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		const0_rtx),
	213))));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1134 */
rtx
gen_altivec_vpkuwus (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V8HImode,
	gen_rtvec (2,
		operand1,
		operand2),
	102)),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (SImode,
	110),
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		const0_rtx),
	213))));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1144 */
rtx
gen_altivec_vpkswus (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V8HImode,
	gen_rtvec (2,
		operand1,
		operand2),
	103)),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (SImode,
	110),
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		const0_rtx),
	213))));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1154 */
rtx
gen_altivec_vrlw (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V4SImode,
	gen_rtvec (2,
		operand1,
		operand2),
	104));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1154 */
rtx
gen_altivec_vrlh (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V8HImode,
	gen_rtvec (2,
		operand1,
		operand2),
	104));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1154 */
rtx
gen_altivec_vrlb (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V16QImode,
	gen_rtvec (2,
		operand1,
		operand2),
	104));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1163 */
rtx
gen_altivec_vslw (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V4SImode,
	gen_rtvec (2,
		operand1,
		operand2),
	107));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1163 */
rtx
gen_altivec_vslh (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V8HImode,
	gen_rtvec (2,
		operand1,
		operand2),
	107));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1163 */
rtx
gen_altivec_vslb (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V16QImode,
	gen_rtvec (2,
		operand1,
		operand2),
	107));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1172 */
rtx
gen_altivec_vsl (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V4SImode,
	gen_rtvec (2,
		operand1,
		operand2),
	110));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1181 */
rtx
gen_altivec_vslo (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V4SImode,
	gen_rtvec (2,
		operand1,
		operand2),
	111));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1190 */
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

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1190 */
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

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1190 */
rtx
gen_lshrv16qi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_LSHIFTRT (V16QImode,
	operand1,
	operand2));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1198 */
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

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1198 */
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

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1198 */
rtx
gen_ashrv16qi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFTRT (V16QImode,
	operand1,
	operand2));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1206 */
rtx
gen_altivec_vsr (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V4SImode,
	gen_rtvec (2,
		operand1,
		operand2),
	118));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1215 */
rtx
gen_altivec_vsro (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V4SImode,
	gen_rtvec (2,
		operand1,
		operand2),
	119));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1224 */
rtx
gen_altivec_vsum4ubs (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V4SImode,
	gen_rtvec (2,
		operand1,
		operand2),
	131)),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (SImode,
	110),
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		const0_rtx),
	213))));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1234 */
rtx
gen_altivec_vsum4shs (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V4SImode,
	gen_rtvec (2,
		operand1,
		operand2),
	132)),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (SImode,
	110),
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		const0_rtx),
	213))));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1234 */
rtx
gen_altivec_vsum4sbs (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V4SImode,
	gen_rtvec (2,
		operand1,
		operand2),
	132)),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (SImode,
	110),
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		const0_rtx),
	213))));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1244 */
rtx
gen_altivec_vsum2sws (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V4SImode,
	gen_rtvec (2,
		operand1,
		operand2),
	134)),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (SImode,
	110),
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		const0_rtx),
	213))));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1254 */
rtx
gen_altivec_vsumsws (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V4SImode,
	gen_rtvec (2,
		operand1,
		operand2),
	135)),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (SImode,
	110),
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		const0_rtx),
	213))));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1264 */
rtx
gen_altivec_vspltb (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_DUPLICATE (V16QImode,
	gen_rtx_VEC_SELECT (QImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		operand2)))));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1274 */
rtx
gen_altivec_vsplth (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_DUPLICATE (V8HImode,
	gen_rtx_VEC_SELECT (HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		operand2)))));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1284 */
rtx
gen_altivec_vspltw (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_DUPLICATE (V4SImode,
	gen_rtx_VEC_SELECT (SImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		operand2)))));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1304 */
rtx
gen_altivec_vspltisw (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_DUPLICATE (V4SImode,
	operand1));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1304 */
rtx
gen_altivec_vspltish (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_DUPLICATE (V8HImode,
	operand1));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1304 */
rtx
gen_altivec_vspltisb (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_DUPLICATE (V16QImode,
	operand1));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1312 */
rtx
gen_ftruncv4sf2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FIX (V4SFmode,
	operand1));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1319 */
rtx
gen_altivec_vperm_v4si (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V4SImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	144));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1319 */
rtx
gen_altivec_vperm_v8hi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V8HImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	144));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1319 */
rtx
gen_altivec_vperm_v16qi (rtx operand0 ATTRIBUTE_UNUSED,
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
	144));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1319 */
rtx
gen_altivec_vperm_v4sf (rtx operand0 ATTRIBUTE_UNUSED,
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
	144));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1329 */
rtx
gen_altivec_vrfip (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V4SFmode,
	gen_rtvec (1,
		operand1),
	148));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1337 */
rtx
gen_altivec_vrfin (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V4SFmode,
	gen_rtvec (1,
		operand1),
	149));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1345 */
rtx
gen_altivec_vrfim (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V4SFmode,
	gen_rtvec (1,
		operand1),
	150));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1353 */
rtx
gen_altivec_vcfux (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V4SFmode,
	gen_rtvec (2,
		operand1,
		operand2),
	151));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1362 */
rtx
gen_altivec_vcfsx (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V4SFmode,
	gen_rtvec (2,
		operand1,
		operand2),
	152));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1371 */
rtx
gen_altivec_vctuxs (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V4SImode,
	gen_rtvec (2,
		operand1,
		operand2),
	153)),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (SImode,
	110),
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		const0_rtx),
	213))));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1381 */
rtx
gen_altivec_vctsxs (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V4SImode,
	gen_rtvec (2,
		operand1,
		operand2),
	154)),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (SImode,
	110),
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		const0_rtx),
	213))));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1391 */
rtx
gen_altivec_vlogefp (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V4SFmode,
	gen_rtvec (1,
		operand1),
	155));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1399 */
rtx
gen_altivec_vexptefp (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V4SFmode,
	gen_rtvec (1,
		operand1),
	156));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1407 */
rtx
gen_altivec_vrsqrtefp (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V4SFmode,
	gen_rtvec (1,
		operand1),
	157));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1415 */
rtx
gen_altivec_vrefp (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V4SFmode,
	gen_rtvec (1,
		operand1),
	158));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1557 */
rtx
gen_altivec_vsel_v4si (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V4SImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	159));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1567 */
rtx
gen_altivec_vsel_v4sf (rtx operand0 ATTRIBUTE_UNUSED,
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
	160));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1577 */
rtx
gen_altivec_vsel_v8hi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V8HImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	161));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1587 */
rtx
gen_altivec_vsel_v16qi (rtx operand0 ATTRIBUTE_UNUSED,
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
	162));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1597 */
rtx
gen_altivec_vsldoi_v4si (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V4SImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	163));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1597 */
rtx
gen_altivec_vsldoi_v8hi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V8HImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	163));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1597 */
rtx
gen_altivec_vsldoi_v16qi (rtx operand0 ATTRIBUTE_UNUSED,
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
	163));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1597 */
rtx
gen_altivec_vsldoi_v4sf (rtx operand0 ATTRIBUTE_UNUSED,
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
	163));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1607 */
rtx
gen_altivec_vupkhsb (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V8HImode,
	gen_rtvec (1,
		operand1),
	167));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1615 */
rtx
gen_altivec_vupkhpx (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V4SImode,
	gen_rtvec (1,
		operand1),
	168));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1623 */
rtx
gen_altivec_vupkhsh (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V4SImode,
	gen_rtvec (1,
		operand1),
	169));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1631 */
rtx
gen_altivec_vupklsb (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V8HImode,
	gen_rtvec (1,
		operand1),
	170));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1639 */
rtx
gen_altivec_vupklpx (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V4SImode,
	gen_rtvec (1,
		operand1),
	171));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1647 */
rtx
gen_altivec_vupklsh (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V4SImode,
	gen_rtvec (1,
		operand1),
	172));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1693 */
rtx
gen_altivec_predicate_v4sf (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCmode,
	74),
	gen_rtx_UNSPEC (CCmode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	174)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (V4SFmode))));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1703 */
rtx
gen_altivec_predicate_vcmpequw (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCmode,
	74),
	gen_rtx_UNSPEC (CCmode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	173)),
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V4SImode,
	gen_rtvec (2,
		operand1,
		operand2),
	53))));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1716 */
rtx
gen_altivec_predicate_vcmpgtsw (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCmode,
	74),
	gen_rtx_UNSPEC (CCmode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	173)),
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V4SImode,
	gen_rtvec (2,
		operand1,
		operand2),
	61))));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1729 */
rtx
gen_altivec_predicate_vcmpgtuw (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCmode,
	74),
	gen_rtx_UNSPEC (CCmode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	173)),
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V4SImode,
	gen_rtvec (2,
		operand1,
		operand2),
	60))));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1742 */
rtx
gen_altivec_predicate_vcmpgtuh (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCmode,
	74),
	gen_rtx_UNSPEC (CCmode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	173)),
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V8HImode,
	gen_rtvec (2,
		operand1,
		operand2),
	58))));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1755 */
rtx
gen_altivec_predicate_vcmpgtsh (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCmode,
	74),
	gen_rtx_UNSPEC (CCmode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	173)),
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V8HImode,
	gen_rtvec (2,
		operand1,
		operand2),
	59))));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1768 */
rtx
gen_altivec_predicate_vcmpequh (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCmode,
	74),
	gen_rtx_UNSPEC (CCmode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	173)),
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V8HImode,
	gen_rtvec (2,
		operand1,
		operand2),
	52))));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1781 */
rtx
gen_altivec_predicate_vcmpequb (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCmode,
	74),
	gen_rtx_UNSPEC (CCmode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	173)),
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V16QImode,
	gen_rtvec (2,
		operand1,
		operand2),
	51))));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1794 */
rtx
gen_altivec_predicate_vcmpgtsb (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCmode,
	74),
	gen_rtx_UNSPEC (CCmode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	173)),
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V16QImode,
	gen_rtvec (2,
		operand1,
		operand2),
	57))));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1807 */
rtx
gen_altivec_predicate_vcmpgtub (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCmode,
	74),
	gen_rtx_UNSPEC (CCmode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	173)),
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V16QImode,
	gen_rtvec (2,
		operand1,
		operand2),
	56))));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1821 */
rtx
gen_altivec_mtvscr (rtx operand0 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	gen_rtx_REG (SImode,
	110),
	gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (1,
		operand0),
	186));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1829 */
rtx
gen_altivec_mfvscr (rtx operand0 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC_VOLATILE (V8HImode,
	gen_rtvec (1,
		gen_rtx_REG (SImode,
	110)),
	187));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1836 */
rtx
gen_altivec_dssall (void)
{
  return gen_rtx_UNSPEC_VOLATILE (VOIDmode,
	gen_rtvec (1,
		const0_rtx),
	188);
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1842 */
rtx
gen_altivec_dss (rtx operand0 ATTRIBUTE_UNUSED)
{
  return gen_rtx_UNSPEC_VOLATILE (VOIDmode,
	gen_rtvec (1,
		operand0),
	189);
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1849 */
rtx
gen_altivec_dst (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_UNSPEC (VOIDmode,
	gen_rtvec (3,
		operand0,
		operand1,
		operand2),
	190);
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1857 */
rtx
gen_altivec_dstt (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_UNSPEC (VOIDmode,
	gen_rtvec (3,
		operand0,
		operand1,
		operand2),
	191);
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1865 */
rtx
gen_altivec_dstst (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_UNSPEC (VOIDmode,
	gen_rtvec (3,
		operand0,
		operand1,
		operand2),
	192);
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1873 */
rtx
gen_altivec_dststt (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_UNSPEC (VOIDmode,
	gen_rtvec (3,
		operand0,
		operand1,
		operand2),
	193);
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1882 */
rtx
gen_altivec_lvsl (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V16QImode,
	gen_rtvec (1,
		operand1),
	194));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1889 */
rtx
gen_altivec_lvsr (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V16QImode,
	gen_rtvec (1,
		operand1),
	195));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1921 */
rtx
gen_altivec_lvewx (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	operand1),
		gen_rtx_UNSPEC (VOIDmode,
	gen_rtvec (1,
		const0_rtx),
	196)));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1921 */
rtx
gen_altivec_lvehx (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	operand1),
		gen_rtx_UNSPEC (VOIDmode,
	gen_rtvec (1,
		const0_rtx),
	196)));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1921 */
rtx
gen_altivec_lvebx (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	operand1),
		gen_rtx_UNSPEC (VOIDmode,
	gen_rtvec (1,
		const0_rtx),
	196)));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1939 */
rtx
gen_altivec_lvxl (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	operand1),
		gen_rtx_UNSPEC (VOIDmode,
	gen_rtvec (1,
		const0_rtx),
	213)));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1948 */
rtx
gen_altivec_lvx (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	operand1);
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1955 */
rtx
gen_altivec_stvx (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	operand1),
		gen_rtx_UNSPEC (VOIDmode,
	gen_rtvec (1,
		const0_rtx),
	201)));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1964 */
rtx
gen_altivec_stvxl (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	operand1),
		gen_rtx_UNSPEC (VOIDmode,
	gen_rtvec (1,
		const0_rtx),
	202)));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1973 */
rtx
gen_altivec_stvewx (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	operand1),
		gen_rtx_UNSPEC (VOIDmode,
	gen_rtvec (1,
		const0_rtx),
	203)));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1973 */
rtx
gen_altivec_stvehx (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	operand1),
		gen_rtx_UNSPEC (VOIDmode,
	gen_rtvec (1,
		const0_rtx),
	203)));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1973 */
rtx
gen_altivec_stvebx (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	operand1),
		gen_rtx_UNSPEC (VOIDmode,
	gen_rtvec (1,
		const0_rtx),
	203)));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:2195 */
rtx
gen_altivec_vsumsws_nomode (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V4SImode,
	gen_rtvec (2,
		operand1,
		operand2),
	135)),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (SImode,
	110),
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		const0_rtx),
	213))));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:2237 */
rtx
gen_vec_realign_load_v4si (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V4SImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	215));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:2237 */
rtx
gen_vec_realign_load_v8hi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V8HImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	215));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:2237 */
rtx
gen_vec_realign_load_v16qi (rtx operand0 ATTRIBUTE_UNUSED,
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
	215));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:2237 */
rtx
gen_vec_realign_load_v4sf (rtx operand0 ATTRIBUTE_UNUSED,
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
	215));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/darwin.md:172 */
rtx
gen_macho_high (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 176 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/darwin.md"
{
  if (TARGET_64BIT)
    emit_insn (gen_macho_high_di (operands[0], operands[1]));
  else
    emit_insn (gen_macho_high_si (operands[0], operands[1]));

  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_HIGH (VOIDmode,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/darwin.md:198 */
rtx
gen_macho_low (rtx operand0,
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
#line 203 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/darwin.md"
{
  if (TARGET_64BIT)
    emit_insn (gen_macho_low_di (operands[0], operands[1], operands[2]));
  else
    emit_insn (gen_macho_low_si (operands[0], operands[1], operands[2]));

  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_LO_SUM (VOIDmode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/darwin.md:230 */
extern rtx gen_split_837 (rtx, rtx *);
rtx
gen_split_837 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
#line 239 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/darwin.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_PLUS (DImode,
	operand0,
	operand1)));
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (V4SImode,
	copy_rtx (operand3)),
	operand2));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/darwin.md:241 */
rtx
gen_load_macho_picbase (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 246 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/darwin.md"
{
  if (TARGET_32BIT)
    emit_insn (gen_load_macho_picbase_si (operands[0], operands[1]));
  else
    emit_insn (gen_load_macho_picbase_di (operands[0], operands[1]));

  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (VOIDmode,
	gen_rtvec (1,
		operand1),
	15)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/darwin.md:275 */
rtx
gen_load_macho_picbase_label (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 280 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/darwin.md"
{
  if (TARGET_32BIT)
    emit_insn (gen_load_macho_picbase_label_si (operands[0], operands[1]));
  else
    emit_insn (gen_load_macho_picbase_label_di (operands[0], operands[1]));

  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (VOIDmode,
	gen_rtvec (1,
		operand1),
	32)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/darwin.md:307 */
rtx
gen_macho_correct_pic (rtx operand0,
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
#line 314 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/darwin.md"
{
  if (TARGET_32BIT)
    emit_insn (gen_macho_correct_pic_si (operands[0], operands[1], operands[2],
	       operands[3]));
  else
    emit_insn (gen_macho_correct_pic_di (operands[0], operands[1], operands[2],
	       operands[3]));

  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (VOIDmode,
	operand1,
	gen_rtx_UNSPEC (VOIDmode,
	gen_rtvec (2,
		operand2,
		operand3),
	16))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:140 */
rtx
gen_zero_extendqidi2 (rtx operand0,
	rtx operand1)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ZERO_EXTEND (DImode,
	operand1));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:140 */
rtx
gen_zero_extendhidi2 (rtx operand0,
	rtx operand1)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ZERO_EXTEND (DImode,
	operand1));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:140 */
rtx
gen_zero_extendsidi2 (rtx operand0,
	rtx operand1)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ZERO_EXTEND (DImode,
	operand1));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:202 */
extern rtx gen_split_844 (rtx, rtx *);
rtx
gen_split_844 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
#line 213 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_ZERO_EXTEND (DImode,
	operand1)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_COMPARE (CCmode,
	copy_rtx (operand2),
	const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:202 */
extern rtx gen_split_845 (rtx, rtx *);
rtx
gen_split_845 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
#line 213 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_ZERO_EXTEND (DImode,
	operand1)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_COMPARE (CCmode,
	copy_rtx (operand2),
	const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:202 */
extern rtx gen_split_846 (rtx, rtx *);
rtx
gen_split_846 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
#line 213 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_ZERO_EXTEND (DImode,
	operand1)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_COMPARE (CCmode,
	copy_rtx (operand2),
	const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:228 */
extern rtx gen_split_847 (rtx, rtx *);
rtx
gen_split_847 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
#line 240 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ZERO_EXTEND (DImode,
	operand1)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_COMPARE (CCmode,
	copy_rtx (operand0),
	const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:228 */
extern rtx gen_split_848 (rtx, rtx *);
rtx
gen_split_848 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
#line 240 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ZERO_EXTEND (DImode,
	operand1)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_COMPARE (CCmode,
	copy_rtx (operand0),
	const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:228 */
extern rtx gen_split_849 (rtx, rtx *);
rtx
gen_split_849 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
#line 240 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ZERO_EXTEND (DImode,
	operand1)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_COMPARE (CCmode,
	copy_rtx (operand0),
	const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:260 */
extern rtx gen_split_850 (rtx, rtx *);
rtx
gen_split_850 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
#line 271 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_SIGN_EXTEND (DImode,
	operand1)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_COMPARE (CCmode,
	copy_rtx (operand2),
	const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:286 */
extern rtx gen_split_851 (rtx, rtx *);
rtx
gen_split_851 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
#line 298 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SIGN_EXTEND (DImode,
	operand1)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_COMPARE (CCmode,
	copy_rtx (operand0),
	const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:300 */
rtx
gen_extendhidi2 (rtx operand0,
	rtx operand1)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SIGN_EXTEND (DImode,
	operand1));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:327 */
extern rtx gen_split_853 (rtx, rtx *);
rtx
gen_split_853 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
#line 338 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_SIGN_EXTEND (DImode,
	operand1)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_COMPARE (CCmode,
	copy_rtx (operand2),
	const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:353 */
extern rtx gen_split_854 (rtx, rtx *);
rtx
gen_split_854 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
#line 365 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SIGN_EXTEND (DImode,
	operand1)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_COMPARE (CCmode,
	copy_rtx (operand0),
	const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:367 */
rtx
gen_extendsidi2 (rtx operand0,
	rtx operand1)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SIGN_EXTEND (DImode,
	operand1));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:394 */
extern rtx gen_split_856 (rtx, rtx *);
rtx
gen_split_856 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
#line 405 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_SIGN_EXTEND (DImode,
	operand1)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_COMPARE (CCmode,
	copy_rtx (operand2),
	const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:420 */
extern rtx gen_split_857 (rtx, rtx *);
rtx
gen_split_857 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
#line 432 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SIGN_EXTEND (DImode,
	operand1)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_COMPARE (CCmode,
	copy_rtx (operand0),
	const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:434 */
rtx
gen_zero_extendqisi2 (rtx operand0,
	rtx operand1)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ZERO_EXTEND (SImode,
	operand1));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:461 */
extern rtx gen_split_859 (rtx, rtx *);
rtx
gen_split_859 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
#line 472 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_ZERO_EXTEND (SImode,
	operand1)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_COMPARE (CCmode,
	copy_rtx (operand2),
	const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:487 */
extern rtx gen_split_860 (rtx, rtx *);
rtx
gen_split_860 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
#line 499 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ZERO_EXTEND (SImode,
	operand1)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_COMPARE (CCmode,
	copy_rtx (operand0),
	const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:501 */
rtx
gen_extendqisi2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 505 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

{
  if (TARGET_POWERPC)
    emit_insn (gen_extendqisi2_ppc (operands[0], operands[1]));
  else if (TARGET_POWER)
    emit_insn (gen_extendqisi2_power (operands[0], operands[1]));
  else
    emit_insn (gen_extendqisi2_no_power (operands[0], operands[1]));
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

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:534 */
extern rtx gen_split_862 (rtx, rtx *);
rtx
gen_split_862 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
#line 545 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_SIGN_EXTEND (SImode,
	operand1)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_COMPARE (CCmode,
	copy_rtx (operand2),
	const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:560 */
extern rtx gen_split_863 (rtx, rtx *);
rtx
gen_split_863 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
#line 572 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SIGN_EXTEND (SImode,
	operand1)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_COMPARE (CCmode,
	copy_rtx (operand0),
	const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:588 */
rtx
gen_extendqisi2_no_power (rtx operand0,
	rtx operand1)
{
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
#line 596 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

{ operands[1] = gen_lowpart (SImode, operands[1]);
  operands[2] = gen_reg_rtx (SImode); }
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_ASHIFT (SImode,
	operand1,
	const_int_rtx[MAX_SAVED_CONST_INT + (24)])));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFTRT (SImode,
	operand2,
	const_int_rtx[MAX_SAVED_CONST_INT + (24)])));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:600 */
rtx
gen_zero_extendqihi2 (rtx operand0,
	rtx operand1)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ZERO_EXTEND (HImode,
	operand1));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:627 */
extern rtx gen_split_866 (rtx, rtx *);
rtx
gen_split_866 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
#line 638 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_ZERO_EXTEND (HImode,
	operand1)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_COMPARE (CCmode,
	copy_rtx (operand2),
	const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:653 */
extern rtx gen_split_867 (rtx, rtx *);
rtx
gen_split_867 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
#line 665 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ZERO_EXTEND (HImode,
	operand1)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_COMPARE (CCmode,
	copy_rtx (operand0),
	const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:667 */
rtx
gen_extendqihi2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 671 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

{
  if (TARGET_POWERPC)
    emit_insn (gen_extendqihi2_ppc (operands[0], operands[1]));
  else if (TARGET_POWER)
    emit_insn (gen_extendqihi2_power (operands[0], operands[1]));
  else
    emit_insn (gen_extendqihi2_no_power (operands[0], operands[1]));
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

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:700 */
extern rtx gen_split_869 (rtx, rtx *);
rtx
gen_split_869 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
#line 711 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_SIGN_EXTEND (HImode,
	operand1)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_COMPARE (CCmode,
	copy_rtx (operand2),
	const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:726 */
extern rtx gen_split_870 (rtx, rtx *);
rtx
gen_split_870 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
#line 738 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SIGN_EXTEND (HImode,
	operand1)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_COMPARE (CCmode,
	copy_rtx (operand0),
	const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:755 */
rtx
gen_extendqihi2_no_power (rtx operand0,
	rtx operand1)
{
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
#line 763 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

{ operands[0] = gen_lowpart (SImode, operands[0]);
  operands[1] = gen_lowpart (SImode, operands[1]);
  operands[2] = gen_reg_rtx (SImode); }
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_ASHIFT (SImode,
	operand1,
	const_int_rtx[MAX_SAVED_CONST_INT + (24)])));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFTRT (SImode,
	operand2,
	const_int_rtx[MAX_SAVED_CONST_INT + (24)])));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:768 */
rtx
gen_zero_extendhisi2 (rtx operand0,
	rtx operand1)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ZERO_EXTEND (SImode,
	operand1));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:795 */
extern rtx gen_split_873 (rtx, rtx *);
rtx
gen_split_873 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
#line 806 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_ZERO_EXTEND (SImode,
	operand1)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_COMPARE (CCmode,
	copy_rtx (operand2),
	const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:821 */
extern rtx gen_split_874 (rtx, rtx *);
rtx
gen_split_874 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
#line 833 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ZERO_EXTEND (SImode,
	operand1)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_COMPARE (CCmode,
	copy_rtx (operand0),
	const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:835 */
rtx
gen_extendhisi2 (rtx operand0,
	rtx operand1)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SIGN_EXTEND (SImode,
	operand1));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:862 */
extern rtx gen_split_876 (rtx, rtx *);
rtx
gen_split_876 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
#line 873 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_SIGN_EXTEND (SImode,
	operand1)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_COMPARE (CCmode,
	copy_rtx (operand2),
	const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:1365 */
rtx
gen_strlensi (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx operand4 ATTRIBUTE_UNUSED;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[5];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#line 1373 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"
{
  rtx result = operands[0];
  rtx src = operands[1];
  rtx search_char = operands[2];
  rtx align = operands[3];
  rtx addr, scratch_string, word1, word2, scratch_dlmzb;
  rtx loop_label, end_label, mem, cr0, cond;
  if (search_char != const0_rtx
      || GET_CODE (align) != CONST_INT
      || INTVAL (align) < 8)
        FAIL;
  word1 = gen_reg_rtx (SImode);
  word2 = gen_reg_rtx (SImode);
  scratch_dlmzb = gen_reg_rtx (SImode);
  scratch_string = gen_reg_rtx (Pmode);
  loop_label = gen_label_rtx ();
  end_label = gen_label_rtx ();
  addr = force_reg (Pmode, XEXP (src, 0));
  emit_move_insn (scratch_string, addr);
  emit_label (loop_label);
  mem = change_address (src, SImode, scratch_string);
  emit_move_insn (word1, mem);
  emit_move_insn (word2, adjust_address (mem, SImode, 4));
  cr0 = gen_rtx_REG (CCmode, CR0_REGNO);
  emit_insn (gen_dlmzb (scratch_dlmzb, word1, word2, cr0));
  cond = gen_rtx_NE (VOIDmode, cr0, const0_rtx);
  emit_jump_insn (gen_rtx_SET (VOIDmode,
                               pc_rtx,
                               gen_rtx_IF_THEN_ELSE (VOIDmode,
                                                     cond,
                                                     gen_rtx_LABEL_REF
                                                       (VOIDmode,
                                                        end_label),
                                                     pc_rtx)));
  emit_insn (gen_addsi3 (scratch_string, scratch_string, GEN_INT (8)));
  emit_jump_insn (gen_rtx_SET (VOIDmode,
                               pc_rtx,
                               gen_rtx_LABEL_REF (VOIDmode, loop_label)));
  emit_barrier ();
  emit_label (end_label);
  emit_insn (gen_addsi3 (scratch_string, scratch_string, scratch_dlmzb));
  emit_insn (gen_subsi3 (result, scratch_string, addr));
  emit_insn (gen_subsi3 (result, result, const1_rtx));
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
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	47)));
  emit_insn (gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (CCmode)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:1419 */
extern rtx gen_split_878 (rtx, rtx *);
rtx
gen_split_878 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
#line 1431 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SIGN_EXTEND (SImode,
	operand1)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_COMPARE (CCmode,
	copy_rtx (operand0),
	const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:1435 */
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
#line 1440 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"
{
  if (SImode == DImode && ! TARGET_POWERPC64)
    {
      if (non_short_cint_operand (operands[2], DImode))
	FAIL;
    }
  else if (GET_CODE (operands[2]) == CONST_INT
	   && ! add_operand (operands[2], SImode))
    {
      rtx tmp = ((no_new_pseudos || rtx_equal_p (operands[0], operands[1]))
		 ? operands[0] : gen_reg_rtx (SImode));

      HOST_WIDE_INT val = INTVAL (operands[2]);
      HOST_WIDE_INT low = ((val & 0xffff) ^ 0x8000) - 0x8000;
      HOST_WIDE_INT rest = trunc_int_for_mode (val - low, SImode);

      if (SImode == DImode && !satisfies_constraint_L (GEN_INT (rest)))
	FAIL;

      /* The ordering here is important for the prolog expander.
	 When space is allocated from the stack, adding 'low' first may
	 produce a temporary deallocation (which would be bad).  */
      emit_insn (gen_addsi3 (tmp, operands[1], GEN_INT (rest)));
      emit_insn (gen_addsi3 (operands[0], tmp, GEN_INT (low)));
      DONE;
    }
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (SImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:1435 */
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
#line 1440 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"
{
  if (DImode == DImode && ! TARGET_POWERPC64)
    {
      if (non_short_cint_operand (operands[2], DImode))
	FAIL;
    }
  else if (GET_CODE (operands[2]) == CONST_INT
	   && ! add_operand (operands[2], DImode))
    {
      rtx tmp = ((no_new_pseudos || rtx_equal_p (operands[0], operands[1]))
		 ? operands[0] : gen_reg_rtx (DImode));

      HOST_WIDE_INT val = INTVAL (operands[2]);
      HOST_WIDE_INT low = ((val & 0xffff) ^ 0x8000) - 0x8000;
      HOST_WIDE_INT rest = trunc_int_for_mode (val - low, DImode);

      if (DImode == DImode && !satisfies_constraint_L (GEN_INT (rest)))
	FAIL;

      /* The ordering here is important for the prolog expander.
	 When space is allocated from the stack, adding 'low' first may
	 produce a temporary deallocation (which would be bad).  */
      emit_insn (gen_adddi3 (tmp, operands[1], GEN_INT (rest)));
      emit_insn (gen_adddi3 (operands[0], tmp, GEN_INT (low)));
      DONE;
    }
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (DImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:1505 */
extern rtx gen_split_881 (rtx, rtx *);
rtx
gen_split_881 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
#line 1518 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_PLUS (SImode,
	operand1,
	operand2)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_COMPARE (CCmode,
	copy_rtx (operand3),
	const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:1505 */
extern rtx gen_split_882 (rtx, rtx *);
rtx
gen_split_882 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
#line 1518 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_PLUS (DImode,
	operand1,
	operand2)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_COMPARE (CCmode,
	copy_rtx (operand3),
	const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:1537 */
extern rtx gen_split_883 (rtx, rtx *);
rtx
gen_split_883 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
#line 1551 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (SImode,
	operand1,
	operand2)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_COMPARE (CCmode,
	copy_rtx (operand0),
	const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:1537 */
extern rtx gen_split_884 (rtx, rtx *);
rtx
gen_split_884 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
#line 1551 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (DImode,
	operand1,
	operand2)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_COMPARE (CCmode,
	copy_rtx (operand0),
	const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:1557 */
extern rtx gen_split_885 (rtx, rtx *);
rtx
gen_split_885 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx _val = 0;
  start_sequence ();
#line 1564 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"
{
  HOST_WIDE_INT val = INTVAL (operands[2]);
  HOST_WIDE_INT low = ((val & 0xffff) ^ 0x8000) - 0x8000;
  HOST_WIDE_INT rest = trunc_int_for_mode (val - low, SImode);

  operands[4] = GEN_INT (low);
  if (SImode == SImode || satisfies_constraint_L (GEN_INT (rest)))
    operands[3] = GEN_INT (rest);
  else if (! no_new_pseudos)
    {
      operands[3] = gen_reg_rtx (DImode);
      emit_move_insn (operands[3], operands[2]);
      emit_insn (gen_adddi3 (operands[0], operands[1], operands[3]));
      DONE;
    }
  else
    FAIL;
}
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (SImode,
	operand1,
	operand3)));
  emit_insn (gen_rtx_SET (VOIDmode,
	copy_rtx (operand0),
	gen_rtx_PLUS (SImode,
	copy_rtx (operand0),
	operand4)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:1557 */
extern rtx gen_split_886 (rtx, rtx *);
rtx
gen_split_886 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx _val = 0;
  start_sequence ();
#line 1564 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"
{
  HOST_WIDE_INT val = INTVAL (operands[2]);
  HOST_WIDE_INT low = ((val & 0xffff) ^ 0x8000) - 0x8000;
  HOST_WIDE_INT rest = trunc_int_for_mode (val - low, DImode);

  operands[4] = GEN_INT (low);
  if (DImode == SImode || satisfies_constraint_L (GEN_INT (rest)))
    operands[3] = GEN_INT (rest);
  else if (! no_new_pseudos)
    {
      operands[3] = gen_reg_rtx (DImode);
      emit_move_insn (operands[3], operands[2]);
      emit_insn (gen_adddi3 (operands[0], operands[1], operands[3]));
      DONE;
    }
  else
    FAIL;
}
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (DImode,
	operand1,
	operand3)));
  emit_insn (gen_rtx_SET (VOIDmode,
	copy_rtx (operand0),
	gen_rtx_PLUS (DImode,
	copy_rtx (operand0),
	operand4)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:1601 */
extern rtx gen_split_887 (rtx, rtx *);
rtx
gen_split_887 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
#line 1612 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_NOT (SImode,
	operand1)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_COMPARE (CCmode,
	copy_rtx (operand2),
	const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:1601 */
extern rtx gen_split_888 (rtx, rtx *);
rtx
gen_split_888 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
#line 1612 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_NOT (DImode,
	operand1)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_COMPARE (CCmode,
	copy_rtx (operand2),
	const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:1627 */
extern rtx gen_split_889 (rtx, rtx *);
rtx
gen_split_889 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
#line 1639 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NOT (SImode,
	operand1)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_COMPARE (CCmode,
	copy_rtx (operand0),
	const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:1627 */
extern rtx gen_split_890 (rtx, rtx *);
rtx
gen_split_890 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
#line 1639 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NOT (DImode,
	operand1)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_COMPARE (CCmode,
	copy_rtx (operand0),
	const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:1683 */
extern rtx gen_split_891 (rtx, rtx *);
rtx
gen_split_891 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
#line 1696 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_MINUS (SImode,
	operand1,
	operand2)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_COMPARE (CCmode,
	copy_rtx (operand3),
	const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:1683 */
extern rtx gen_split_892 (rtx, rtx *);
rtx
gen_split_892 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
#line 1696 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_MINUS (DImode,
	operand1,
	operand2)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_COMPARE (CCmode,
	copy_rtx (operand3),
	const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:1727 */
extern rtx gen_split_893 (rtx, rtx *);
rtx
gen_split_893 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
#line 1742 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (SImode,
	operand1,
	operand2)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_COMPARE (CCmode,
	copy_rtx (operand0),
	const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:1727 */
extern rtx gen_split_894 (rtx, rtx *);
rtx
gen_split_894 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
#line 1742 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (DImode,
	operand1,
	operand2)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_COMPARE (CCmode,
	copy_rtx (operand0),
	const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:1744 */
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
#line 1749 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

{
  if (GET_CODE (operands[2]) == CONST_INT)
    {
      emit_insn (gen_addsi3 (operands[0], operands[1],
				 negate_rtx (SImode, operands[2])));
      DONE;
    }
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (SImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:1744 */
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
#line 1749 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

{
  if (GET_CODE (operands[2]) == CONST_INT)
    {
      emit_insn (gen_adddi3 (operands[0], operands[1],
				 negate_rtx (DImode, operands[2])));
      DONE;
    }
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (DImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:1964 */
rtx
gen_abssi2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 1968 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

{
  if (TARGET_ISEL)
    {
      emit_insn (gen_abssi2_isel (operands[0], operands[1]));
      DONE;
    }
  else if (! TARGET_POWER)
    {
      emit_insn (gen_abssi2_nopower (operands[0], operands[1]));
      DONE;
    }
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ABS (SImode,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:2007 */
extern rtx gen_split_898 (rtx, rtx *);
rtx
gen_split_898 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
#line 2017 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_ASHIFTRT (SImode,
	operand1,
	const_int_rtx[MAX_SAVED_CONST_INT + (31)])));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_XOR (SImode,
	copy_rtx (operand2),
	copy_rtx (operand1))));
  emit_insn (gen_rtx_SET (VOIDmode,
	copy_rtx (operand0),
	gen_rtx_MINUS (SImode,
	copy_rtx (operand0),
	copy_rtx (operand2))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:2025 */
extern rtx gen_split_899 (rtx, rtx *);
rtx
gen_split_899 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
#line 2035 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_ASHIFTRT (SImode,
	operand1,
	const_int_rtx[MAX_SAVED_CONST_INT + (31)])));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_XOR (SImode,
	copy_rtx (operand2),
	copy_rtx (operand1))));
  emit_insn (gen_rtx_SET (VOIDmode,
	copy_rtx (operand0),
	gen_rtx_MINUS (SImode,
	copy_rtx (operand2),
	copy_rtx (operand0))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:2037 */
rtx
gen_negsi2 (rtx operand0,
	rtx operand1)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NEG (SImode,
	operand1));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:2037 */
rtx
gen_negdi2 (rtx operand0,
	rtx operand1)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NEG (DImode,
	operand1));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:2061 */
extern rtx gen_split_902 (rtx, rtx *);
rtx
gen_split_902 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
#line 2072 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_NEG (SImode,
	operand1)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_COMPARE (CCmode,
	copy_rtx (operand2),
	const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:2061 */
extern rtx gen_split_903 (rtx, rtx *);
rtx
gen_split_903 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
#line 2072 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_NEG (DImode,
	operand1)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_COMPARE (CCmode,
	copy_rtx (operand2),
	const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:2087 */
extern rtx gen_split_904 (rtx, rtx *);
rtx
gen_split_904 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
#line 2099 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NEG (SImode,
	operand1)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_COMPARE (CCmode,
	copy_rtx (operand0),
	const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:2087 */
extern rtx gen_split_905 (rtx, rtx *);
rtx
gen_split_905 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
#line 2099 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NEG (DImode,
	operand1)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_COMPARE (CCmode,
	copy_rtx (operand0),
	const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:2107 */
rtx
gen_ctzsi2 (rtx operand0,
	rtx operand1)
{
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[6];
    operands[0] = operand0;
    operands[1] = operand1;
#line 2117 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"
{
     operands[2] = gen_reg_rtx (SImode);
     operands[3] = gen_reg_rtx (SImode);
     operands[4] = gen_reg_rtx (SImode);
     operands[5] = GEN_INT (GET_MODE_BITSIZE (SImode) - 1);
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
	gen_rtx_NEG (SImode,
	operand1)));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_AND (SImode,
	operand1,
	operand2)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (CCmode)))));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand4,
	gen_rtx_CLZ (SImode,
	operand3)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (SImode,
	operand5,
	operand4)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:2107 */
rtx
gen_ctzdi2 (rtx operand0,
	rtx operand1)
{
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[6];
    operands[0] = operand0;
    operands[1] = operand1;
#line 2117 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"
{
     operands[2] = gen_reg_rtx (DImode);
     operands[3] = gen_reg_rtx (DImode);
     operands[4] = gen_reg_rtx (DImode);
     operands[5] = GEN_INT (GET_MODE_BITSIZE (DImode) - 1);
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
	gen_rtx_NEG (DImode,
	operand1)));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_AND (DImode,
	operand1,
	operand2)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (CCmode)))));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand4,
	gen_rtx_CLZ (DImode,
	operand3)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (DImode,
	operand5,
	operand4)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:2124 */
rtx
gen_ffssi2 (rtx operand0,
	rtx operand1)
{
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[6];
    operands[0] = operand0;
    operands[1] = operand1;
#line 2134 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"
{
     operands[2] = gen_reg_rtx (SImode);
     operands[3] = gen_reg_rtx (SImode);
     operands[4] = gen_reg_rtx (SImode);
     operands[5] = GEN_INT (GET_MODE_BITSIZE (SImode));
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
	gen_rtx_NEG (SImode,
	operand1)));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_AND (SImode,
	operand1,
	operand2)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (CCmode)))));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand4,
	gen_rtx_CLZ (SImode,
	operand3)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (SImode,
	operand5,
	operand4)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:2124 */
rtx
gen_ffsdi2 (rtx operand0,
	rtx operand1)
{
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[6];
    operands[0] = operand0;
    operands[1] = operand1;
#line 2134 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"
{
     operands[2] = gen_reg_rtx (DImode);
     operands[3] = gen_reg_rtx (DImode);
     operands[4] = gen_reg_rtx (DImode);
     operands[5] = GEN_INT (GET_MODE_BITSIZE (DImode));
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
	gen_rtx_NEG (DImode,
	operand1)));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_AND (DImode,
	operand1,
	operand2)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (CCmode)))));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand4,
	gen_rtx_CLZ (DImode,
	operand3)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (DImode,
	operand5,
	operand4)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:2168 */
rtx
gen_mulsi3 (rtx operand0,
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
#line 2173 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

{
  if (TARGET_POWER)
    emit_insn (gen_mulsi3_mq (operands[0], operands[1], operands[2]));
  else
    emit_insn (gen_mulsi3_no_mq (operands[0], operands[1], operands[2]));
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

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:2256 */
extern rtx gen_split_911 (rtx, rtx *);
rtx
gen_split_911 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
#line 2268 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_MULT (SImode,
	operand1,
	operand2)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_COMPARE (CCmode,
	copy_rtx (operand3),
	const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:2316 */
extern rtx gen_split_912 (rtx, rtx *);
rtx
gen_split_912 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
#line 2329 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (SImode,
	operand1,
	operand2)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_COMPARE (CCmode,
	copy_rtx (operand0),
	const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:2335 */
rtx
gen_divmodsi4 (rtx operand0,
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
#line 2342 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

{
  if (! TARGET_POWER && ! TARGET_POWERPC)
    {
      emit_move_insn (gen_rtx_REG (SImode, 3), operands[1]);
      emit_move_insn (gen_rtx_REG (SImode, 4), operands[2]);
      emit_insn (gen_divss_call ());
      emit_move_insn (operands[0], gen_rtx_REG (SImode, 3));
      emit_move_insn (operands[3], gen_rtx_REG (SImode, 4));
      DONE;
    }
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
	gen_rtx_DIV (SImode,
	operand1,
	operand2)),
		gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_MOD (SImode,
	operand1,
	operand2)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:2365 */
rtx
gen_udivsi3 (rtx operand0,
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
#line 2370 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

{
  if (! TARGET_POWER && ! TARGET_POWERPC)
    {
      emit_move_insn (gen_rtx_REG (SImode, 3), operands[1]);
      emit_move_insn (gen_rtx_REG (SImode, 4), operands[2]);
      emit_insn (gen_quous_call ());
      emit_move_insn (operands[0], gen_rtx_REG (SImode, 3));
      DONE;
    }
  else if (TARGET_POWER)
    {
      emit_insn (gen_udivsi3_mq (operands[0], operands[1], operands[2]));
      DONE;
    }
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UDIV (SImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:2365 */
rtx
gen_udivdi3 (rtx operand0,
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
#line 2370 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

{
  if (! TARGET_POWER && ! TARGET_POWERPC)
    {
      emit_move_insn (gen_rtx_REG (SImode, 3), operands[1]);
      emit_move_insn (gen_rtx_REG (SImode, 4), operands[2]);
      emit_insn (gen_quous_call ());
      emit_move_insn (operands[0], gen_rtx_REG (SImode, 3));
      DONE;
    }
  else if (TARGET_POWER)
    {
      emit_insn (gen_udivsi3_mq (operands[0], operands[1], operands[2]));
      DONE;
    }
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UDIV (DImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:2408 */
rtx
gen_divsi3 (rtx operand0,
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
#line 2413 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

{
  if (GET_CODE (operands[2]) == CONST_INT
      && INTVAL (operands[2]) > 0
      && exact_log2 (INTVAL (operands[2])) >= 0)
    ;
  else if (TARGET_POWERPC)
    {
      operands[2] = force_reg (SImode, operands[2]);
      if (TARGET_POWER)
	{
	  emit_insn (gen_divsi3_mq (operands[0], operands[1], operands[2]));
	  DONE;
	}
    }
  else if (TARGET_POWER)
    FAIL;
  else
    {
      emit_move_insn (gen_rtx_REG (SImode, 3), operands[1]);
      emit_move_insn (gen_rtx_REG (SImode, 4), operands[2]);
      emit_insn (gen_quoss_call ());
      emit_move_insn (operands[0], gen_rtx_REG (SImode, 3));
      DONE;
    }
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_DIV (SImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:2408 */
rtx
gen_divdi3 (rtx operand0,
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
#line 2413 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

{
  if (GET_CODE (operands[2]) == CONST_INT
      && INTVAL (operands[2]) > 0
      && exact_log2 (INTVAL (operands[2])) >= 0)
    ;
  else if (TARGET_POWERPC)
    {
      operands[2] = force_reg (DImode, operands[2]);
      if (TARGET_POWER)
	{
	  emit_insn (gen_divsi3_mq (operands[0], operands[1], operands[2]));
	  DONE;
	}
    }
  else if (TARGET_POWER)
    FAIL;
  else
    {
      emit_move_insn (gen_rtx_REG (SImode, 3), operands[1]);
      emit_move_insn (gen_rtx_REG (SImode, 4), operands[2]);
      emit_insn (gen_quoss_call ());
      emit_move_insn (operands[0], gen_rtx_REG (SImode, 3));
      DONE;
    }
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_DIV (DImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:2457 */
rtx
gen_modsi3 (rtx operand0,
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
#line 2462 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

{
  int i;
  rtx temp1;
  rtx temp2;

  if (GET_CODE (operands[2]) != CONST_INT
      || INTVAL (operands[2]) <= 0
      || (i = exact_log2 (INTVAL (operands[2]))) < 0)
    FAIL;

  temp1 = gen_reg_rtx (SImode);
  temp2 = gen_reg_rtx (SImode);

  emit_insn (gen_divsi3 (temp1, operands[1], operands[2]));
  emit_insn (gen_ashlsi3 (temp2, temp1, GEN_INT (i)));
  emit_insn (gen_subsi3 (operands[0], operands[1], temp2));
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

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:2457 */
rtx
gen_moddi3 (rtx operand0,
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
#line 2462 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

{
  int i;
  rtx temp1;
  rtx temp2;

  if (GET_CODE (operands[2]) != CONST_INT
      || INTVAL (operands[2]) <= 0
      || (i = exact_log2 (INTVAL (operands[2]))) < 0)
    FAIL;

  temp1 = gen_reg_rtx (DImode);
  temp2 = gen_reg_rtx (DImode);

  emit_insn (gen_divdi3 (temp1, operands[1], operands[2]));
  emit_insn (gen_ashldi3 (temp2, temp1, GEN_INT (i)));
  emit_insn (gen_subdi3 (operands[0], operands[1], temp2));
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

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:2504 */
extern rtx gen_split_920 (rtx, rtx *);
rtx
gen_split_920 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
#line 2517 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_DIV (SImode,
	operand1,
	operand2)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_COMPARE (CCmode,
	copy_rtx (operand3),
	const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:2504 */
extern rtx gen_split_921 (rtx, rtx *);
rtx
gen_split_921 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
#line 2517 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_DIV (DImode,
	operand1,
	operand2)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_COMPARE (CCmode,
	copy_rtx (operand3),
	const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:2533 */
extern rtx gen_split_922 (rtx, rtx *);
rtx
gen_split_922 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
#line 2547 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_DIV (SImode,
	operand1,
	operand2)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_COMPARE (CCmode,
	copy_rtx (operand0),
	const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:2533 */
extern rtx gen_split_923 (rtx, rtx *);
rtx
gen_split_923 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
#line 2547 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_DIV (DImode,
	operand1,
	operand2)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_COMPARE (CCmode,
	copy_rtx (operand0),
	const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:2606 */
rtx
gen_udivmodsi4 (rtx operand0,
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
#line 2613 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

{
  rtx label = 0;

  if (! TARGET_POWER)
    {
      if (! TARGET_POWERPC)
        {
	  emit_move_insn (gen_rtx_REG (SImode, 3), operands[1]);
	  emit_move_insn (gen_rtx_REG (SImode, 4), operands[2]);
	  emit_insn (gen_divus_call ());
	  emit_move_insn (operands[0], gen_rtx_REG (SImode, 3));
	  emit_move_insn (operands[3], gen_rtx_REG (SImode, 4));
	  DONE;
        }
      else
        FAIL;
    }

  if (GET_CODE (operands[2]) != CONST_INT || INTVAL (operands[2]) < 0)
    {
      operands[2] = force_reg (SImode, operands[2]);
      label = gen_label_rtx ();
      emit (gen_udivmodsi4_tests (operands[0], operands[1], operands[2],
				  operands[3], label));
    }
  else
    operands[2] = force_reg (SImode, operands[2]);

  emit (gen_udivmodsi4_normal (operands[0], operands[1], operands[2],
			       operands[3]));
  if (label)
    emit_label (label);

  DONE;
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
	gen_rtx_UDIV (SImode,
	operand1,
	operand2)),
		gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_UMOD (SImode,
	operand1,
	operand2)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:2782 */
extern rtx gen_split_925 (rtx, rtx *);
rtx
gen_split_925 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx _val = 0;
  start_sequence ();
#line 2797 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_AND (SImode,
	operand1,
	operand2)),
		gen_rtx_CLOBBER (VOIDmode,
	operand4))));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_COMPARE (CCmode,
	copy_rtx (operand3),
	const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:2782 */
extern rtx gen_split_926 (rtx, rtx *);
rtx
gen_split_926 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx _val = 0;
  start_sequence ();
#line 2797 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_AND (DImode,
	operand1,
	operand2)),
		gen_rtx_CLOBBER (VOIDmode,
	operand4))));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_COMPARE (CCmode,
	copy_rtx (operand3),
	const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:2802 */
extern rtx gen_split_927 (rtx, rtx *);
rtx
gen_split_927 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx _val = 0;
  start_sequence ();
#line 2817 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_AND (SImode,
	operand1,
	operand2)),
		gen_rtx_CLOBBER (VOIDmode,
	operand4))));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_COMPARE (CCmode,
	copy_rtx (operand3),
	const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:2863 */
extern rtx gen_split_928 (rtx, rtx *);
rtx
gen_split_928 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx _val = 0;
  start_sequence ();
#line 2880 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_AND (SImode,
	operand1,
	operand2)),
		gen_rtx_CLOBBER (VOIDmode,
	operand4))));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_COMPARE (CCmode,
	copy_rtx (operand0),
	const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:2882 */
extern rtx gen_split_929 (rtx, rtx *);
rtx
gen_split_929 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx _val = 0;
  start_sequence ();
#line 2899 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_AND (SImode,
	operand1,
	operand2)),
		gen_rtx_CLOBBER (VOIDmode,
	operand4))));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_COMPARE (CCmode,
	copy_rtx (operand0),
	const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:2903 */
extern rtx gen_split_930 (rtx, rtx *);
rtx
gen_split_930 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx _val = 0;
  start_sequence ();
#line 2915 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

{
  int mb = extract_MB (operands[2]);
  int me = extract_ME (operands[2]);
  operands[3] = GEN_INT (me + 1);
  operands[5] = GEN_INT (32 - (me + 1));
  operands[4] = GEN_INT (~((HOST_WIDE_INT) -1 << (33 + me - mb)));
}
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_AND (SImode,
	gen_rtx_ROTATE (SImode,
	operand1,
	operand3),
	operand4)));
  emit_insn (gen_rtx_SET (VOIDmode,
	copy_rtx (operand0),
	gen_rtx_ROTATE (SImode,
	copy_rtx (operand0),
	operand5)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:2925 */
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
#line 2930 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

{
  if (GET_CODE (operands[2]) == CONST_INT
      && ! logical_operand (operands[2], SImode))
    {
      HOST_WIDE_INT value = INTVAL (operands[2]);
      rtx tmp = ((no_new_pseudos || rtx_equal_p (operands[0], operands[1]))
		 ? operands[0] : gen_reg_rtx (SImode));

      emit_insn (gen_iorsi3 (tmp, operands[1],
			     GEN_INT (value & (~ (HOST_WIDE_INT) 0xffff))));
      emit_insn (gen_iorsi3 (operands[0], tmp, GEN_INT (value & 0xffff)));
      DONE;
    }
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IOR (SImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:2946 */
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
#line 2951 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

{
  if (GET_CODE (operands[2]) == CONST_INT
      && ! logical_operand (operands[2], SImode))
    {
      HOST_WIDE_INT value = INTVAL (operands[2]);
      rtx tmp = ((no_new_pseudos || rtx_equal_p (operands[0], operands[1]))
		 ? operands[0] : gen_reg_rtx (SImode));

      emit_insn (gen_xorsi3 (tmp, operands[1],
			     GEN_INT (value & (~ (HOST_WIDE_INT) 0xffff))));
      emit_insn (gen_xorsi3 (operands[0], tmp, GEN_INT (value & 0xffff)));
      DONE;
    }
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_XOR (SImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:2992 */
extern rtx gen_split_933 (rtx, rtx *);
rtx
gen_split_933 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx _val = 0;
  start_sequence ();
#line 3004 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

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
	gen_rtx_COMPARE (CCmode,
	copy_rtx (operand3),
	const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:3021 */
extern rtx gen_split_934 (rtx, rtx *);
rtx
gen_split_934 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx _val = 0;
  start_sequence ();
#line 3034 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand4));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_COMPARE (CCmode,
	copy_rtx (operand0),
	const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:3039 */
extern rtx gen_split_935 (rtx, rtx *);
rtx
gen_split_935 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx _val = 0;
  start_sequence ();
#line 3047 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

{
  rtx i;
  i = GEN_INT (INTVAL (operands[2]) & (~ (HOST_WIDE_INT) 0xffff));
  operands[4] = gen_rtx_fmt_ee (GET_CODE (operands[3]), SImode,
				operands[1], i);
  i = GEN_INT (INTVAL (operands[2]) & 0xffff);
  operands[5] = gen_rtx_fmt_ee (GET_CODE (operands[3]), SImode,
				operands[0], i);
}
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand4));
  emit_insn (gen_rtx_SET (VOIDmode,
	copy_rtx (operand0),
	operand5));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:3080 */
extern rtx gen_split_936 (rtx, rtx *);
rtx
gen_split_936 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx _val = 0;
  start_sequence ();
#line 3092 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

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
	gen_rtx_COMPARE (CCmode,
	copy_rtx (operand3),
	const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:3109 */
extern rtx gen_split_937 (rtx, rtx *);
rtx
gen_split_937 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx _val = 0;
  start_sequence ();
#line 3122 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand4));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_COMPARE (CCmode,
	copy_rtx (operand0),
	const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:3146 */
extern rtx gen_split_938 (rtx, rtx *);
rtx
gen_split_938 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx _val = 0;
  start_sequence ();
#line 3158 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

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
	gen_rtx_COMPARE (CCmode,
	copy_rtx (operand3),
	const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:3175 */
extern rtx gen_split_939 (rtx, rtx *);
rtx
gen_split_939 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx _val = 0;
  start_sequence ();
#line 3188 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand4));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_COMPARE (CCmode,
	copy_rtx (operand0),
	const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:3384 */
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
#line 3390 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

{
  /* Do not handle 16/8 bit structures that fit in HI/QI modes directly, since
     the (SUBREG:SI (REG:HI xxx)) that is otherwise generated can confuse the
     compiler if the address of the structure is taken later.  Likewise, do
     not handle invalid E500 subregs.  */
  if (GET_CODE (operands[0]) == SUBREG
      && (GET_MODE_SIZE (GET_MODE (SUBREG_REG (operands[0]))) < UNITS_PER_WORD
	  || ((TARGET_E500_DOUBLE || TARGET_SPE)
	      && invalid_e500_subreg (operands[0], GET_MODE (operands[0])))))
    FAIL;

  if (TARGET_POWERPC64 && GET_MODE (operands[0]) == DImode)
    emit_insn (gen_insvdi (operands[0], operands[1], operands[2], operands[3]));
  else
    emit_insn (gen_insvsi (operands[0], operands[1], operands[2], operands[3]));
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

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:3599 */
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
#line 3605 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

{
  /* Do not handle 16/8 bit structures that fit in HI/QI modes directly, since
     the (SUBREG:SI (REG:HI xxx)) that is otherwise generated can confuse the
     compiler if the address of the structure is taken later.  */
  if (GET_CODE (operands[0]) == SUBREG
      && (GET_MODE_SIZE (GET_MODE (SUBREG_REG (operands[0]))) < UNITS_PER_WORD))
    FAIL;

  if (TARGET_POWERPC64 && GET_MODE (operands[1]) == DImode)
    emit_insn (gen_extzvdi (operands[0], operands[1], operands[2], operands[3]));
  else
    emit_insn (gen_extzvsi (operands[0], operands[1], operands[2], operands[3]));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ZERO_EXTRACT (VOIDmode,
	operand1,
	operand2,
	operand3)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:3681 */
extern rtx gen_split_942 (rtx, rtx *);
rtx
gen_split_942 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx _val = 0;
  start_sequence ();
#line 3695 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand4,
	gen_rtx_ZERO_EXTRACT (SImode,
	operand1,
	operand2,
	operand3)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_COMPARE (CCmode,
	copy_rtx (operand4),
	const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:3732 */
extern rtx gen_split_943 (rtx, rtx *);
rtx
gen_split_943 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx _val = 0;
  start_sequence ();
#line 3746 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ZERO_EXTRACT (SImode,
	operand1,
	operand2,
	operand3)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand4,
	gen_rtx_COMPARE (CCmode,
	copy_rtx (operand0),
	const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:3832 */
extern rtx gen_split_944 (rtx, rtx *);
rtx
gen_split_944 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
#line 3844 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_ROTATE (SImode,
	operand1,
	operand2)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_COMPARE (CCmode,
	copy_rtx (operand3),
	const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:3860 */
extern rtx gen_split_945 (rtx, rtx *);
rtx
gen_split_945 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
#line 3873 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ROTATE (SImode,
	operand1,
	operand2)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_COMPARE (CCmode,
	copy_rtx (operand0),
	const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:3898 */
extern rtx gen_split_946 (rtx, rtx *);
rtx
gen_split_946 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx _val = 0;
  start_sequence ();
#line 3914 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand4,
	gen_rtx_AND (SImode,
	gen_rtx_ROTATE (SImode,
	operand1,
	operand2),
	operand3)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_COMPARE (CCmode,
	copy_rtx (operand4),
	const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:3932 */
extern rtx gen_split_947 (rtx, rtx *);
rtx
gen_split_947 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx _val = 0;
  start_sequence ();
#line 3947 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_AND (SImode,
	gen_rtx_ROTATE (SImode,
	operand1,
	operand2),
	operand3)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand4,
	gen_rtx_COMPARE (CCmode,
	copy_rtx (operand0),
	const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:3973 */
extern rtx gen_split_948 (rtx, rtx *);
rtx
gen_split_948 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
#line 3989 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_ZERO_EXTEND (SImode,
	gen_rtx_SUBREG (QImode,
	gen_rtx_ROTATE (SImode,
	operand1,
	operand2),
	0))));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_COMPARE (CCmode,
	copy_rtx (operand3),
	const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:4007 */
extern rtx gen_split_949 (rtx, rtx *);
rtx
gen_split_949 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
#line 4022 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ZERO_EXTEND (SImode,
	gen_rtx_SUBREG (QImode,
	gen_rtx_ROTATE (SImode,
	operand1,
	operand2),
	0))));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_COMPARE (CCmode,
	copy_rtx (operand0),
	const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:4048 */
extern rtx gen_split_950 (rtx, rtx *);
rtx
gen_split_950 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
#line 4064 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_ZERO_EXTEND (SImode,
	gen_rtx_SUBREG (HImode,
	gen_rtx_ROTATE (SImode,
	operand1,
	operand2),
	0))));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_COMPARE (CCmode,
	copy_rtx (operand3),
	const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:4082 */
extern rtx gen_split_951 (rtx, rtx *);
rtx
gen_split_951 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
#line 4097 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ZERO_EXTEND (SImode,
	gen_rtx_SUBREG (HImode,
	gen_rtx_ROTATE (SImode,
	operand1,
	operand2),
	0))));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_COMPARE (CCmode,
	copy_rtx (operand0),
	const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:4102 */
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
#line 4107 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

{
  if (TARGET_POWER)
    emit_insn (gen_ashlsi3_power (operands[0], operands[1], operands[2]));
  else
    emit_insn (gen_ashlsi3_no_power (operands[0], operands[1], operands[2]));
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

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:4178 */
extern rtx gen_split_953 (rtx, rtx *);
rtx
gen_split_953 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
#line 4190 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_ASHIFT (SImode,
	operand1,
	operand2)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_COMPARE (CCmode,
	copy_rtx (operand3),
	const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:4240 */
extern rtx gen_split_954 (rtx, rtx *);
rtx
gen_split_954 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
#line 4253 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFT (SImode,
	operand1,
	operand2)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_COMPARE (CCmode,
	copy_rtx (operand0),
	const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:4278 */
extern rtx gen_split_955 (rtx, rtx *);
rtx
gen_split_955 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx _val = 0;
  start_sequence ();
#line 4293 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand4,
	gen_rtx_AND (SImode,
	gen_rtx_ASHIFT (SImode,
	operand1,
	operand2),
	operand3)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_COMPARE (CCmode,
	copy_rtx (operand4),
	const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:4311 */
extern rtx gen_split_956 (rtx, rtx *);
rtx
gen_split_956 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx _val = 0;
  start_sequence ();
#line 4326 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_AND (SImode,
	gen_rtx_ASHIFT (SImode,
	operand1,
	operand2),
	operand3)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand4,
	gen_rtx_COMPARE (CCmode,
	copy_rtx (operand0),
	const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:4330 */
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
#line 4335 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

{
  if (TARGET_POWER)
    emit_insn (gen_lshrsi3_power (operands[0], operands[1], operands[2]));
  else
    emit_insn (gen_lshrsi3_no_power (operands[0], operands[1], operands[2]));
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

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:4413 */
extern rtx gen_split_958 (rtx, rtx *);
rtx
gen_split_958 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
#line 4425 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_LSHIFTRT (SImode,
	operand1,
	operand2)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_COMPARE (CCmode,
	copy_rtx (operand3),
	const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:4479 */
extern rtx gen_split_959 (rtx, rtx *);
rtx
gen_split_959 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
#line 4492 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_LSHIFTRT (SImode,
	operand1,
	operand2)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_COMPARE (CCmode,
	copy_rtx (operand0),
	const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:4517 */
extern rtx gen_split_960 (rtx, rtx *);
rtx
gen_split_960 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx _val = 0;
  start_sequence ();
#line 4532 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand4,
	gen_rtx_AND (SImode,
	gen_rtx_LSHIFTRT (SImode,
	operand1,
	operand2),
	operand3)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_COMPARE (CCmode,
	copy_rtx (operand4),
	const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:4550 */
extern rtx gen_split_961 (rtx, rtx *);
rtx
gen_split_961 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx _val = 0;
  start_sequence ();
#line 4565 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_AND (SImode,
	gen_rtx_LSHIFTRT (SImode,
	operand1,
	operand2),
	operand3)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand4,
	gen_rtx_COMPARE (CCmode,
	copy_rtx (operand0),
	const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:4592 */
extern rtx gen_split_962 (rtx, rtx *);
rtx
gen_split_962 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
#line 4609 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_ZERO_EXTEND (SImode,
	gen_rtx_SUBREG (QImode,
	gen_rtx_LSHIFTRT (SImode,
	operand1,
	operand2),
	0))));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_COMPARE (CCmode,
	copy_rtx (operand3),
	const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:4628 */
extern rtx gen_split_963 (rtx, rtx *);
rtx
gen_split_963 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
#line 4644 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ZERO_EXTEND (SImode,
	gen_rtx_SUBREG (QImode,
	gen_rtx_LSHIFTRT (SImode,
	operand1,
	operand2),
	0))));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_COMPARE (CCmode,
	copy_rtx (operand0),
	const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:4671 */
extern rtx gen_split_964 (rtx, rtx *);
rtx
gen_split_964 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
#line 4688 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_ZERO_EXTEND (SImode,
	gen_rtx_SUBREG (HImode,
	gen_rtx_LSHIFTRT (SImode,
	operand1,
	operand2),
	0))));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_COMPARE (CCmode,
	copy_rtx (operand3),
	const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:4707 */
extern rtx gen_split_965 (rtx, rtx *);
rtx
gen_split_965 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
#line 4723 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ZERO_EXTEND (SImode,
	gen_rtx_SUBREG (HImode,
	gen_rtx_LSHIFTRT (SImode,
	operand1,
	operand2),
	0))));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_COMPARE (CCmode,
	copy_rtx (operand0),
	const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:4753 */
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
#line 4758 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

{
  if (TARGET_POWER)
    emit_insn (gen_ashrsi3_power (operands[0], operands[1], operands[2]));
  else
    emit_insn (gen_ashrsi3_no_power (operands[0], operands[1], operands[2]));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFTRT (SImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:4829 */
extern rtx gen_split_967 (rtx, rtx *);
rtx
gen_split_967 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
#line 4841 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_ASHIFTRT (SImode,
	operand1,
	operand2)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_COMPARE (CCmode,
	copy_rtx (operand3),
	const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:4891 */
extern rtx gen_split_968 (rtx, rtx *);
rtx
gen_split_968 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
#line 4904 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFTRT (SImode,
	operand1,
	operand2)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_COMPARE (CCmode,
	copy_rtx (operand0),
	const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:4922 */
rtx
gen_extendsfdf2 (rtx operand0,
	rtx operand1)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT_EXTEND (DFmode,
	operand1));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:4928 */
extern rtx gen_split_970 (rtx, rtx *);
rtx
gen_split_970 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 4938 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"
{
  emit_note (NOTE_INSN_DELETED);
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:4944 */
rtx
gen_truncdfsf2 (rtx operand0,
	rtx operand1)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT_TRUNCATE (SFmode,
	operand1));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:4964 */
rtx
gen_negsf2 (rtx operand0,
	rtx operand1)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NEG (SFmode,
	operand1));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:4977 */
rtx
gen_abssf2 (rtx operand0,
	rtx operand1)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ABS (SFmode,
	operand1));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:4997 */
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

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:5020 */
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

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:5043 */
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

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:5073 */
rtx
gen_divsf3 (rtx operand0,
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
#line 5078 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"
{
  if (swdiv && !optimize_size && TARGET_PPC_GFXOPT
  && flag_finite_math_only && !flag_trapping_math)
    {
      rs6000_emit_swdivsf (operands[0], operands[1], operands[2]);
      DONE;
    }
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_DIV (SFmode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:5217 */
rtx
gen_sqrtsf2 (rtx operand0,
	rtx operand1)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SQRT (SFmode,
	operand1));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:5237 */
rtx
gen_copysignsf3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[6];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 5249 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"
{
     operands[3] = gen_reg_rtx (SFmode);
     operands[4] = gen_reg_rtx (SFmode);
     operands[5] = CONST0_RTX (SFmode);
  }
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
    operand4 = operands[4];
    operand5 = operands[5];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_ABS (SFmode,
	operand1)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand4,
	gen_rtx_NEG (SFmode,
	gen_rtx_ABS (SFmode,
	operand1))));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IF_THEN_ELSE (SFmode,
	gen_rtx_GE (VOIDmode,
	operand2,
	operand5),
	operand3,
	operand4)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:5255 */
rtx
gen_copysigndf3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[6];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 5267 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"
{
     operands[3] = gen_reg_rtx (DFmode);
     operands[4] = gen_reg_rtx (DFmode);
     operands[5] = CONST0_RTX (DFmode);
  }
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
    operand4 = operands[4];
    operand5 = operands[5];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_ABS (DFmode,
	operand1)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand4,
	gen_rtx_NEG (DFmode,
	gen_rtx_ABS (DFmode,
	operand1))));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IF_THEN_ELSE (DFmode,
	gen_rtx_GE (VOIDmode,
	operand2,
	operand5),
	operand3,
	operand4)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:5277 */
rtx
gen_smaxsf3 (rtx operand0,
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
#line 5284 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"
{ rs6000_emit_minmax (operands[0], SMAX, operands[1], operands[2]); DONE;}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IF_THEN_ELSE (SFmode,
	gen_rtx_GE (VOIDmode,
	operand1,
	operand2),
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:5286 */
rtx
gen_sminsf3 (rtx operand0,
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
#line 5293 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"
{ rs6000_emit_minmax (operands[0], SMIN, operands[1], operands[2]); DONE;}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IF_THEN_ELSE (SFmode,
	gen_rtx_GE (VOIDmode,
	operand1,
	operand2),
	operand2,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:5295 */
extern rtx gen_split_983 (rtx, rtx *);
rtx
gen_split_983 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 5302 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

{ rs6000_emit_minmax (operands[0], GET_CODE (operands[3]),
		      operands[1], operands[2]);
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:5356 */
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
#line 5362 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

{
  if (rs6000_emit_cmove (operands[0], operands[1], operands[2], operands[3]))
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
	gen_rtx_IF_THEN_ELSE (SFmode,
	operand1,
	operand2,
	operand3)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:5390 */
rtx
gen_negdf2 (rtx operand0,
	rtx operand1)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NEG (DFmode,
	operand1));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:5403 */
rtx
gen_absdf2 (rtx operand0,
	rtx operand1)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ABS (DFmode,
	operand1));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:5423 */
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

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:5438 */
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

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:5453 */
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

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:5475 */
rtx
gen_divdf3 (rtx operand0,
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
#line 5480 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"
{
  if (swdiv && !optimize_size && TARGET_POPCNTB
  && flag_finite_math_only && !flag_trapping_math)
    {
      rs6000_emit_swdivdf (operands[0], operands[1], operands[2]);
      DONE;
    }
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_DIV (DFmode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:5565 */
rtx
gen_smaxdf3 (rtx operand0,
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
#line 5572 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"
{ rs6000_emit_minmax (operands[0], SMAX, operands[1], operands[2]); DONE;}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IF_THEN_ELSE (DFmode,
	gen_rtx_GE (VOIDmode,
	operand1,
	operand2),
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:5574 */
rtx
gen_smindf3 (rtx operand0,
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
#line 5581 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"
{ rs6000_emit_minmax (operands[0], SMIN, operands[1], operands[2]); DONE;}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IF_THEN_ELSE (DFmode,
	gen_rtx_GE (VOIDmode,
	operand1,
	operand2),
	operand2,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:5583 */
extern rtx gen_split_993 (rtx, rtx *);
rtx
gen_split_993 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 5590 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

{ rs6000_emit_minmax (operands[0], GET_CODE (operands[3]),
		      operands[1], operands[2]);
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:5596 */
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
#line 5602 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

{
  if (rs6000_emit_cmove (operands[0], operands[1], operands[2], operands[3]))
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
	gen_rtx_IF_THEN_ELSE (DFmode,
	operand1,
	operand2,
	operand3)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:5649 */
rtx
gen_floatsidf2 (rtx operand0,
	rtx operand1)
{
  rtx operand2;
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
#line 5658 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

{
  if (TARGET_E500_DOUBLE)
    {
      emit_insn (gen_spe_floatsidf2 (operands[0], operands[1]));
      DONE;
    }
  if (TARGET_POWERPC64)
    {
      /* APPLE LOCAL begin assign_stack_local_with_alias scheduling speedup */
      /* assign_stack_local_with_alias is used instead of assign_stack_temp
       * to get better scheduling, at the cost of some stack space. */
      rtx mem = assign_stack_local_with_alias (DImode, GET_MODE_SIZE (DImode),
					    GET_MODE_ALIGNMENT (DImode));
      /* APPLE LOCAL end assign_stack_local_with_alias scheduling speedup */
      rtx t1 = gen_reg_rtx (DImode);
      rtx t2 = gen_reg_rtx (DImode);
      emit_insn (gen_floatsidf_ppc64 (operands[0], operands[1], mem, t1, t2));
      DONE;
    }

  operands[2] = force_reg (SImode, GEN_INT (0x43300000));
  operands[3] = force_reg (DFmode, CONST_DOUBLE_ATOF ("4503601774854144", DFmode));
  /* APPLE LOCAL begin assign_stack_local_with_alias scheduling speedup */
  /* assign_stack_local_with_alias is used instead of assign_stack_temp to get
   * better scheduling, at the cost of some stack space. */
  operands[4] = assign_stack_local_with_alias (DFmode, GET_MODE_SIZE (DFmode), 
					    GET_MODE_ALIGNMENT (DFmode));
  /* APPLE LOCAL end assign_stack_local_with_alias scheduling speedup */
  operands[5] = gen_reg_rtx (DFmode);
  operands[6] = gen_reg_rtx (SImode);
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
    operand4 = operands[4];
    operand5 = operands[5];
    operand6 = operands[6];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (6,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT (DFmode,
	operand1)),
		gen_rtx_USE (VOIDmode,
	operand2),
		gen_rtx_USE (VOIDmode,
	operand3),
		gen_rtx_CLOBBER (VOIDmode,
	operand4),
		gen_rtx_CLOBBER (VOIDmode,
	operand5),
		gen_rtx_CLOBBER (VOIDmode,
	operand6))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:5691 */
extern rtx gen_split_996 (rtx, rtx *);
rtx
gen_split_996 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 5703 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

{
  rtx lowword, highword;
  gcc_assert (MEM_P (operands[4]));
  highword = adjust_address (operands[4], SImode, 0);
  lowword = adjust_address (operands[4], SImode, 4);
  if (! WORDS_BIG_ENDIAN)
    {
      rtx tmp;
      tmp = highword; highword = lowword; lowword = tmp;
    }

  emit_insn (gen_xorsi3 (operands[6], operands[1],
			 GEN_INT (~ (HOST_WIDE_INT) 0x7fffffff)));
  emit_move_insn (lowword, operands[6]);
  emit_move_insn (highword, operands[2]);
  emit_move_insn (operands[5], operands[4]);
  emit_insn (gen_subdf3 (operands[0], operands[5], operands[3]));
  DONE;
}
  emit_insn (pc_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:5731 */
rtx
gen_floatunssidf2 (rtx operand0,
	rtx operand1)
{
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[6];
    operands[0] = operand0;
    operands[1] = operand1;
#line 5739 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

{
  if (TARGET_E500_DOUBLE)
    {
      emit_insn (gen_spe_floatunssidf2 (operands[0], operands[1]));
      DONE;
    }
  if (TARGET_POWERPC64)
    {
      /* APPLE LOCAL begin assign_stack_local_with_alias scheduling speedup */
      /* assign_stack_local_with_alias is used instead of assign_stack_temp
       * to get better scheduling, at the cost of some stack space. */
      rtx mem = assign_stack_local_with_alias (DImode, GET_MODE_SIZE (DImode),
					    GET_MODE_ALIGNMENT (DImode));
      /* APPLE LOCAL end assign_stack_local_with_alias scheduling speedup */
      rtx t1 = gen_reg_rtx (DImode);
      rtx t2 = gen_reg_rtx (DImode);
      emit_insn (gen_floatunssidf_ppc64 (operands[0], operands[1], mem,
					 t1, t2));
      DONE;
    }

  operands[2] = force_reg (SImode, GEN_INT (0x43300000));
  operands[3] = force_reg (DFmode, CONST_DOUBLE_ATOF ("4503599627370496", DFmode));
  /* APPLE LOCAL begin assign_stack_local_with_alias scheduling speedup */
  /* assign_stack_local_with_alias is used instead of assign_stack_temp
   * to get better scheduling, at the cost of some stack space. */
  operands[4] = assign_stack_local_with_alias (DFmode, GET_MODE_SIZE (DFmode), 
					    GET_MODE_ALIGNMENT (DFmode));
  /* APPLE LOCAL end assign_stack_local_with_alias scheduling speedup */
  operands[5] = gen_reg_rtx (DFmode);
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
    operand4 = operands[4];
    operand5 = operands[5];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (5,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSIGNED_FLOAT (DFmode,
	operand1)),
		gen_rtx_USE (VOIDmode,
	operand2),
		gen_rtx_USE (VOIDmode,
	operand3),
		gen_rtx_CLOBBER (VOIDmode,
	operand4),
		gen_rtx_CLOBBER (VOIDmode,
	operand5))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:5772 */
extern rtx gen_split_998 (rtx, rtx *);
rtx
gen_split_998 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 5783 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

{
  rtx lowword, highword;
  gcc_assert (MEM_P (operands[4]));
  highword = adjust_address (operands[4], SImode, 0);
  lowword = adjust_address (operands[4], SImode, 4);
  if (! WORDS_BIG_ENDIAN)
    {
      rtx tmp;
      tmp = highword; highword = lowword; lowword = tmp;
    }

  emit_move_insn (lowword, operands[1]);
  emit_move_insn (highword, operands[2]);
  emit_move_insn (operands[5], operands[4]);
  emit_insn (gen_subdf3 (operands[0], operands[5], operands[3]));
  DONE;
}
  emit_insn (pc_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:5803 */
rtx
gen_fix_truncdfsi2 (rtx operand0,
	rtx operand1)
{
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
#line 5810 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

{
  if (TARGET_E500_DOUBLE)
    {
     emit_insn (gen_spe_fix_truncdfsi2 (operands[0], operands[1]));
     DONE;
    }
  operands[2] = gen_reg_rtx (DImode);
  if (TARGET_PPC_GFXOPT)
    {
      rtx orig_dest = operands[0];
      if (! memory_operand (orig_dest, GET_MODE (orig_dest)))
	operands[0] = assign_stack_temp (SImode, GET_MODE_SIZE (SImode), 0);
      emit_insn (gen_fix_truncdfsi2_internal_gfxopt (operands[0], operands[1],
						     operands[2]));
      if (operands[0] != orig_dest)
	emit_move_insn (orig_dest, operands[0]);
      DONE;
    }
  /* APPLE LOCAL begin assign_stack_local_with_alias scheduling speedup */
  /* assign_stack_local_with_alias is used instead of assign_stack_temp
   * to get better scheduling, at the cost of some stack space. */
  operands[3] = assign_stack_local_with_alias (DImode, GET_MODE_SIZE (DImode), 
					       GET_MODE_ALIGNMENT (DImode));
  /* APPLE LOCAL end assign_stack_local_with_alias scheduling speedup */
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
	gen_rtx_FIX (SImode,
	operand1)),
		gen_rtx_CLOBBER (VOIDmode,
	operand2),
		gen_rtx_CLOBBER (VOIDmode,
	operand3))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:5837 */
extern rtx gen_split_1000 (rtx, rtx *);
rtx
gen_split_1000 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 5846 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

{
  rtx lowword;
  gcc_assert (MEM_P (operands[3]));
  lowword = adjust_address (operands[3], SImode, WORDS_BIG_ENDIAN ? 4 : 0);

  emit_insn (gen_fctiwz (operands[2], operands[1]));
  emit_move_insn (operands[3], operands[2]);
  emit_move_insn (operands[0], lowword);
  DONE;
}
  emit_insn (pc_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:5859 */
extern rtx gen_split_1001 (rtx, rtx *);
rtx
gen_split_1001 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 5868 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

{
  emit_insn (gen_fctiwz (operands[2], operands[1]));
  emit_insn (gen_stfiwx (operands[0], operands[2]));
  DONE;
}
  emit_insn (pc_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:5966 */
extern rtx gen_split_1002 (rtx, rtx *);
rtx
gen_split_1002 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx _val = 0;
  start_sequence ();
#line 5979 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_SIGN_EXTEND (DImode,
	operand1)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	copy_rtx (operand3)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand4,
	copy_rtx (operand2)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT (DFmode,
	copy_rtx (operand4))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:5981 */
extern rtx gen_split_1003 (rtx, rtx *);
rtx
gen_split_1003 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx _val = 0;
  start_sequence ();
#line 5994 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_ZERO_EXTEND (DImode,
	operand1)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	copy_rtx (operand3)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand4,
	copy_rtx (operand2)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT (DFmode,
	copy_rtx (operand4))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:6003 */
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
#line 6007 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

{
  rtx val = operands[1];
  if (!flag_unsafe_math_optimizations)
    {
      rtx label = gen_label_rtx ();
      val = gen_reg_rtx (DImode);
      emit_insn (gen_floatdisf2_internal2 (val, operands[1], label));
      emit_label (label);
    }
  emit_insn (gen_floatdisf2_internal1 (operands[0], val));
  DONE;
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

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:6024 */
extern rtx gen_split_1005 (rtx, rtx *);
rtx
gen_split_1005 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
#line 6035 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_FLOAT (DFmode,
	operand1)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT_TRUNCATE (SFmode,
	copy_rtx (operand2))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:6041 */
rtx
gen_floatdisf2_internal2 (rtx operand0,
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
#line 6063 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

{
  operands[3] = gen_reg_rtx (DImode);
  operands[4] = gen_reg_rtx (CCUNSmode);
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
    operand4 = operands[4];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_ASHIFTRT (DImode,
	operand1,
	const_int_rtx[MAX_SAVED_CONST_INT + (53)])));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_AND (DImode,
	operand1,
	GEN_INT (2047LL))),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (CCmode)))));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_PLUS (DImode,
	operand3,
	const1_rtx)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (DImode,
	operand0,
	GEN_INT (2047LL))));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand4,
	gen_rtx_COMPARE (CCUNSmode,
	operand3,
	const_int_rtx[MAX_SAVED_CONST_INT + (2)])));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IOR (DImode,
	operand0,
	operand1)));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_AND (DImode,
	operand0,
	GEN_INT (-2048LL))),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (CCmode)))));
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	gen_rtx_GEU (VOIDmode,
	operand4,
	const0_rtx),
	gen_rtx_LABEL_REF (VOIDmode,
	operand2),
	pc_rtx)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:6126 */
rtx
gen_mulsidi3 (rtx operand0,
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
#line 6131 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

{
  if (! TARGET_POWER && ! TARGET_POWERPC)
    {
      emit_move_insn (gen_rtx_REG (SImode, 3), operands[1]);
      emit_move_insn (gen_rtx_REG (SImode, 4), operands[2]);
      emit_insn (gen_mull_call ());
      if (WORDS_BIG_ENDIAN)
        emit_move_insn (operands[0], gen_rtx_REG (DImode, 3));
      else
	{
	  emit_move_insn (operand_subword (operands[0], 0, 0, DImode),
			  gen_rtx_REG (SImode, 3));
	  emit_move_insn (operand_subword (operands[0], 1, 0, DImode),
			  gen_rtx_REG (SImode, 4));
	}
      DONE;
    }
  else if (TARGET_POWER)
    {
      emit_insn (gen_mulsidi3_mq (operands[0], operands[1], operands[2]));
      DONE;
    }
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (DImode,
	gen_rtx_SIGN_EXTEND (DImode,
	operand1),
	gen_rtx_SIGN_EXTEND (DImode,
	operand2))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:6180 */
extern rtx gen_split_1008 (rtx, rtx *);
rtx
gen_split_1008 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx _val = 0;
  start_sequence ();
#line 6193 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

{
  int endian = (WORDS_BIG_ENDIAN == 0);
  operands[3] = operand_subword (operands[0], endian, 0, DImode);
  operands[4] = operand_subword (operands[0], 1 - endian, 0, DImode);
}
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_TRUNCATE (SImode,
	gen_rtx_LSHIFTRT (DImode,
	gen_rtx_MULT (DImode,
	gen_rtx_SIGN_EXTEND (DImode,
	operand1),
	gen_rtx_SIGN_EXTEND (DImode,
	operand2)),
	const_int_rtx[MAX_SAVED_CONST_INT + (32)]))));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand4,
	gen_rtx_MULT (SImode,
	copy_rtx (operand1),
	copy_rtx (operand2))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:6200 */
rtx
gen_umulsidi3 (rtx operand0,
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
#line 6205 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

{
  if (TARGET_POWER)
    {
      emit_insn (gen_umulsidi3_mq (operands[0], operands[1], operands[2]));
      DONE;
    }
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (DImode,
	gen_rtx_ZERO_EXTEND (DImode,
	operand1),
	gen_rtx_ZERO_EXTEND (DImode,
	operand2))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:6243 */
extern rtx gen_split_1010 (rtx, rtx *);
rtx
gen_split_1010 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx _val = 0;
  start_sequence ();
#line 6256 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

{
  int endian = (WORDS_BIG_ENDIAN == 0);
  operands[3] = operand_subword (operands[0], endian, 0, DImode);
  operands[4] = operand_subword (operands[0], 1 - endian, 0, DImode);
}
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_TRUNCATE (SImode,
	gen_rtx_LSHIFTRT (DImode,
	gen_rtx_MULT (DImode,
	gen_rtx_ZERO_EXTEND (DImode,
	operand1),
	gen_rtx_ZERO_EXTEND (DImode,
	operand2)),
	const_int_rtx[MAX_SAVED_CONST_INT + (32)]))));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand4,
	gen_rtx_MULT (SImode,
	copy_rtx (operand1),
	copy_rtx (operand2))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:6263 */
rtx
gen_smulsi3_highpart (rtx operand0,
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
#line 6272 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

{
  if (! TARGET_POWER && ! TARGET_POWERPC)
    {
      emit_move_insn (gen_rtx_REG (SImode, 3), operands[1]);
      emit_move_insn (gen_rtx_REG (SImode, 4), operands[2]);
      emit_insn (gen_mulh_call ());
      emit_move_insn (operands[0], gen_rtx_REG (SImode, 3));
      DONE;
    }
  else if (TARGET_POWER)
    {
      emit_insn (gen_smulsi3_highpart_mq (operands[0], operands[1], operands[2]));
      DONE;
    }
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_TRUNCATE (SImode,
	gen_rtx_LSHIFTRT (DImode,
	gen_rtx_MULT (DImode,
	gen_rtx_SIGN_EXTEND (DImode,
	operand1),
	gen_rtx_SIGN_EXTEND (DImode,
	operand2)),
	const_int_rtx[MAX_SAVED_CONST_INT + (32)]))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:6314 */
rtx
gen_umulsi3_highpart (rtx operand0,
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
#line 6323 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

{
  if (TARGET_POWER)
    {
      emit_insn (gen_umulsi3_highpart_mq (operands[0], operands[1], operands[2]));
      DONE;
    }
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_TRUNCATE (SImode,
	gen_rtx_LSHIFTRT (DImode,
	gen_rtx_MULT (DImode,
	gen_rtx_ZERO_EXTEND (DImode,
	operand1),
	gen_rtx_ZERO_EXTEND (DImode,
	operand2)),
	const_int_rtx[MAX_SAVED_CONST_INT + (32)]))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:6427 */
extern rtx gen_split_1013 (rtx, rtx *);
rtx
gen_split_1013 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
#line 6437 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_ASHIFTRT (DImode,
	operand1,
	const_int_rtx[MAX_SAVED_CONST_INT + (63)])));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_XOR (DImode,
	copy_rtx (operand2),
	copy_rtx (operand1))));
  emit_insn (gen_rtx_SET (VOIDmode,
	copy_rtx (operand0),
	gen_rtx_MINUS (DImode,
	copy_rtx (operand0),
	copy_rtx (operand2))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:6439 */
extern rtx gen_split_1014 (rtx, rtx *);
rtx
gen_split_1014 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
#line 6449 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_ASHIFTRT (DImode,
	operand1,
	const_int_rtx[MAX_SAVED_CONST_INT + (63)])));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_XOR (DImode,
	copy_rtx (operand2),
	copy_rtx (operand1))));
  emit_insn (gen_rtx_SET (VOIDmode,
	copy_rtx (operand0),
	gen_rtx_MINUS (DImode,
	copy_rtx (operand2),
	copy_rtx (operand0))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:6479 */
extern rtx gen_split_1015 (rtx, rtx *);
rtx
gen_split_1015 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
#line 6491 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_MULT (DImode,
	operand1,
	operand2)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_COMPARE (CCmode,
	copy_rtx (operand3),
	const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:6507 */
extern rtx gen_split_1016 (rtx, rtx *);
rtx
gen_split_1016 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
#line 6520 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (DImode,
	operand1,
	operand2)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_COMPARE (CCmode,
	copy_rtx (operand0),
	const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:6566 */
extern rtx gen_split_1017 (rtx, rtx *);
rtx
gen_split_1017 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
#line 6578 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_ROTATE (DImode,
	operand1,
	operand2)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_COMPARE (CCmode,
	copy_rtx (operand3),
	const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:6594 */
extern rtx gen_split_1018 (rtx, rtx *);
rtx
gen_split_1018 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
#line 6607 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ROTATE (DImode,
	operand1,
	operand2)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_COMPARE (CCmode,
	copy_rtx (operand0),
	const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:6632 */
extern rtx gen_split_1019 (rtx, rtx *);
rtx
gen_split_1019 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx _val = 0;
  start_sequence ();
#line 6648 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand4,
	gen_rtx_AND (DImode,
	gen_rtx_ROTATE (DImode,
	operand1,
	operand2),
	operand3)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_COMPARE (CCmode,
	copy_rtx (operand4),
	const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:6666 */
extern rtx gen_split_1020 (rtx, rtx *);
rtx
gen_split_1020 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx _val = 0;
  start_sequence ();
#line 6681 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_AND (DImode,
	gen_rtx_ROTATE (DImode,
	operand1,
	operand2),
	operand3)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand4,
	gen_rtx_COMPARE (CCmode,
	copy_rtx (operand0),
	const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:6707 */
extern rtx gen_split_1021 (rtx, rtx *);
rtx
gen_split_1021 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
#line 6723 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_ZERO_EXTEND (DImode,
	gen_rtx_SUBREG (QImode,
	gen_rtx_ROTATE (DImode,
	operand1,
	operand2),
	0))));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_COMPARE (CCmode,
	copy_rtx (operand3),
	const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:6741 */
extern rtx gen_split_1022 (rtx, rtx *);
rtx
gen_split_1022 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
#line 6756 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ZERO_EXTEND (DImode,
	gen_rtx_SUBREG (QImode,
	gen_rtx_ROTATE (DImode,
	operand1,
	operand2),
	0))));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_COMPARE (CCmode,
	copy_rtx (operand0),
	const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:6782 */
extern rtx gen_split_1023 (rtx, rtx *);
rtx
gen_split_1023 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
#line 6798 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_ZERO_EXTEND (DImode,
	gen_rtx_SUBREG (HImode,
	gen_rtx_ROTATE (DImode,
	operand1,
	operand2),
	0))));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_COMPARE (CCmode,
	copy_rtx (operand3),
	const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:6816 */
extern rtx gen_split_1024 (rtx, rtx *);
rtx
gen_split_1024 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
#line 6831 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ZERO_EXTEND (DImode,
	gen_rtx_SUBREG (HImode,
	gen_rtx_ROTATE (DImode,
	operand1,
	operand2),
	0))));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_COMPARE (CCmode,
	copy_rtx (operand0),
	const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:6857 */
extern rtx gen_split_1025 (rtx, rtx *);
rtx
gen_split_1025 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
#line 6873 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_ZERO_EXTEND (DImode,
	gen_rtx_SUBREG (SImode,
	gen_rtx_ROTATE (DImode,
	operand1,
	operand2),
	0))));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_COMPARE (CCmode,
	copy_rtx (operand3),
	const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:6891 */
extern rtx gen_split_1026 (rtx, rtx *);
rtx
gen_split_1026 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
#line 6906 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ZERO_EXTEND (DImode,
	gen_rtx_SUBREG (SImode,
	gen_rtx_ROTATE (DImode,
	operand1,
	operand2),
	0))));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_COMPARE (CCmode,
	copy_rtx (operand0),
	const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:6908 */
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
#line 6913 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

{
  if (TARGET_POWERPC64)
    ;
  else if (TARGET_POWER)
    {
      emit_insn (gen_ashldi3_power (operands[0], operands[1], operands[2]));
      DONE;
    }
  else
    FAIL;
}
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

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:6946 */
extern rtx gen_split_1028 (rtx, rtx *);
rtx
gen_split_1028 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
#line 6958 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_ASHIFT (DImode,
	operand1,
	operand2)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_COMPARE (CCmode,
	copy_rtx (operand3),
	const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:6974 */
extern rtx gen_split_1029 (rtx, rtx *);
rtx
gen_split_1029 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
#line 6987 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFT (DImode,
	operand1,
	operand2)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_COMPARE (CCmode,
	copy_rtx (operand0),
	const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:7012 */
extern rtx gen_split_1030 (rtx, rtx *);
rtx
gen_split_1030 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx _val = 0;
  start_sequence ();
#line 7028 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand4,
	gen_rtx_AND (DImode,
	gen_rtx_ASHIFT (DImode,
	operand1,
	operand2),
	operand3)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_COMPARE (CCmode,
	copy_rtx (operand4),
	const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:7046 */
extern rtx gen_split_1031 (rtx, rtx *);
rtx
gen_split_1031 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx _val = 0;
  start_sequence ();
#line 7063 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_AND (DImode,
	gen_rtx_ASHIFT (DImode,
	operand1,
	operand2),
	operand3)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand4,
	gen_rtx_COMPARE (CCmode,
	copy_rtx (operand0),
	const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:7088 */
extern rtx gen_split_1032 (rtx, rtx *);
rtx
gen_split_1032 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx _val = 0;
  start_sequence ();
#line 7104 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand4,
	gen_rtx_AND (DImode,
	gen_rtx_ASHIFT (DImode,
	operand1,
	operand2),
	operand3)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_COMPARE (CCmode,
	copy_rtx (operand4),
	const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:7122 */
extern rtx gen_split_1033 (rtx, rtx *);
rtx
gen_split_1033 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx _val = 0;
  start_sequence ();
#line 7139 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_AND (DImode,
	gen_rtx_ASHIFT (DImode,
	operand1,
	operand2),
	operand3)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand4,
	gen_rtx_COMPARE (CCmode,
	copy_rtx (operand0),
	const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:7141 */
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
#line 7146 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

{
  if (TARGET_POWERPC64)
    ;
  else if (TARGET_POWER)
    {
      emit_insn (gen_lshrdi3_power (operands[0], operands[1], operands[2]));
      DONE;
    }
  else
    FAIL;
}
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

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:7179 */
extern rtx gen_split_1035 (rtx, rtx *);
rtx
gen_split_1035 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
#line 7191 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_LSHIFTRT (DImode,
	operand1,
	operand2)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_COMPARE (CCmode,
	copy_rtx (operand3),
	const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:7207 */
extern rtx gen_split_1036 (rtx, rtx *);
rtx
gen_split_1036 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
#line 7220 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_LSHIFTRT (DImode,
	operand1,
	operand2)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_COMPARE (CCmode,
	copy_rtx (operand0),
	const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:7222 */
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
#line 7227 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

{
  if (TARGET_POWERPC64)
    ;
  else if (TARGET_POWER && GET_CODE (operands[2]) == CONST_INT)
    {
      emit_insn (gen_ashrdi3_power (operands[0], operands[1], operands[2]));
      DONE;
    }
  else if (TARGET_32BIT && GET_CODE (operands[2]) == CONST_INT
	   && WORDS_BIG_ENDIAN)
    {
      emit_insn (gen_ashrdi3_no_power (operands[0], operands[1], operands[2]));
      DONE;
    }
  else
    FAIL;
}
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

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:7266 */
extern rtx gen_split_1038 (rtx, rtx *);
rtx
gen_split_1038 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
#line 7278 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_ASHIFTRT (DImode,
	operand1,
	operand2)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_COMPARE (CCmode,
	copy_rtx (operand3),
	const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:7294 */
extern rtx gen_split_1039 (rtx, rtx *);
rtx
gen_split_1039 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
#line 7307 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFTRT (DImode,
	operand1,
	operand2)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_COMPARE (CCmode,
	copy_rtx (operand0),
	const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:7325 */
extern rtx gen_split_1040 (rtx, rtx *);
rtx
gen_split_1040 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx operand6;
  rtx operand7;
  rtx _val = 0;
  start_sequence ();
#line 7342 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"
{
  build_mask64_2_operands (operands[2], &operands[4]);
}
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  operand6 = operands[6];
  operand7 = operands[7];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_AND (DImode,
	gen_rtx_ROTATE (DImode,
	operand1,
	operand4),
	operand5)));
  emit_insn (gen_rtx_SET (VOIDmode,
	copy_rtx (operand0),
	gen_rtx_AND (DImode,
	gen_rtx_ROTATE (DImode,
	copy_rtx (operand0),
	operand6),
	operand7)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:7370 */
extern rtx gen_split_1041 (rtx, rtx *);
rtx
gen_split_1041 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
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
#line 7391 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

{
  build_mask64_2_operands (operands[2], &operands[5]);
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
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_AND (DImode,
	gen_rtx_ROTATE (DImode,
	operand1,
	operand5),
	operand6)));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_COMPARE (CCmode,
	gen_rtx_AND (DImode,
	gen_rtx_ROTATE (DImode,
	copy_rtx (operand3),
	operand7),
	operand8),
	const0_rtx)),
		gen_rtx_CLOBBER (VOIDmode,
	copy_rtx (operand3)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:7421 */
extern rtx gen_split_1042 (rtx, rtx *);
rtx
gen_split_1042 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx _val = 0;
  start_sequence ();
#line 7436 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_AND (DImode,
	operand1,
	operand2)),
		gen_rtx_CLOBBER (VOIDmode,
	operand4))));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_COMPARE (CCmode,
	copy_rtx (operand0),
	const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:7438 */
extern rtx gen_split_1043 (rtx, rtx *);
rtx
gen_split_1043 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
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
#line 7463 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

{
  build_mask64_2_operands (operands[2], &operands[5]);
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
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_AND (DImode,
	gen_rtx_ROTATE (DImode,
	operand1,
	operand5),
	operand6)));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_COMPARE (CCmode,
	gen_rtx_AND (DImode,
	gen_rtx_ROTATE (DImode,
	copy_rtx (operand0),
	operand7),
	operand8),
	const0_rtx)),
		gen_rtx_SET (VOIDmode,
	copy_rtx (operand0),
	gen_rtx_AND (DImode,
	gen_rtx_ROTATE (DImode,
	copy_rtx (operand0),
	copy_rtx (operand7)),
	copy_rtx (operand8))))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:7468 */
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
#line 7473 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

{
  if (non_logical_cint_operand (operands[2], DImode))
    {
      HOST_WIDE_INT value;
      rtx tmp = ((no_new_pseudos || rtx_equal_p (operands[0], operands[1]))
		 ? operands[0] : gen_reg_rtx (DImode));

      if (GET_CODE (operands[2]) == CONST_INT)
        {
          value = INTVAL (operands[2]);
	  emit_insn (gen_iordi3 (tmp, operands[1],
				 GEN_INT (value & (~ (HOST_WIDE_INT) 0xffff))));
	}
      else
        {
	  value = CONST_DOUBLE_LOW (operands[2]);
	  emit_insn (gen_iordi3 (tmp, operands[1],
				 immed_double_const (value
						     & (~ (HOST_WIDE_INT) 0xffff),
						     0, DImode)));
	}

      emit_insn (gen_iordi3 (operands[0], tmp, GEN_INT (value & 0xffff)));
      DONE;
    }
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IOR (DImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:7501 */
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
#line 7506 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

{
  if (non_logical_cint_operand (operands[2], DImode))
    {
      HOST_WIDE_INT value;
      rtx tmp = ((no_new_pseudos || rtx_equal_p (operands[0], operands[1]))
		 ? operands[0] : gen_reg_rtx (DImode));

      if (GET_CODE (operands[2]) == CONST_INT)
        {
          value = INTVAL (operands[2]);
	  emit_insn (gen_xordi3 (tmp, operands[1],
				 GEN_INT (value & (~ (HOST_WIDE_INT) 0xffff))));
	}
      else
        {
	  value = CONST_DOUBLE_LOW (operands[2]);
	  emit_insn (gen_xordi3 (tmp, operands[1],
				 immed_double_const (value
						     & (~ (HOST_WIDE_INT) 0xffff),
						     0, DImode)));
	}

      emit_insn (gen_xordi3 (operands[0], tmp, GEN_INT (value & 0xffff)));
      DONE;
    }
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_XOR (DImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:7559 */
extern rtx gen_split_1046 (rtx, rtx *);
rtx
gen_split_1046 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx _val = 0;
  start_sequence ();
#line 7571 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

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
	gen_rtx_COMPARE (CCmode,
	copy_rtx (operand3),
	const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:7588 */
extern rtx gen_split_1047 (rtx, rtx *);
rtx
gen_split_1047 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx _val = 0;
  start_sequence ();
#line 7601 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand4));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_COMPARE (CCmode,
	copy_rtx (operand0),
	const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:7606 */
extern rtx gen_split_1048 (rtx, rtx *);
rtx
gen_split_1048 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx _val = 0;
  start_sequence ();
#line 7614 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

{
  rtx i3,i4;

  if (GET_CODE (operands[2]) == CONST_DOUBLE)
    {
      HOST_WIDE_INT value = CONST_DOUBLE_LOW (operands[2]);
      i3 = immed_double_const (value & (~ (HOST_WIDE_INT) 0xffff),
					0, DImode);
      i4 = GEN_INT (value & 0xffff);
    }
  else
    {
      i3 = GEN_INT (INTVAL (operands[2])
			     & (~ (HOST_WIDE_INT) 0xffff));
      i4 = GEN_INT (INTVAL (operands[2]) & 0xffff);
    }
  operands[4] = gen_rtx_fmt_ee (GET_CODE (operands[3]), DImode,
				operands[1], i3);
  operands[5] = gen_rtx_fmt_ee (GET_CODE (operands[3]), DImode,
				operands[0], i4);
}
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand4));
  emit_insn (gen_rtx_SET (VOIDmode,
	copy_rtx (operand0),
	operand5));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:7659 */
extern rtx gen_split_1049 (rtx, rtx *);
rtx
gen_split_1049 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx _val = 0;
  start_sequence ();
#line 7671 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

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
	gen_rtx_COMPARE (CCmode,
	copy_rtx (operand3),
	const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:7688 */
extern rtx gen_split_1050 (rtx, rtx *);
rtx
gen_split_1050 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx _val = 0;
  start_sequence ();
#line 7701 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand4));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_COMPARE (CCmode,
	copy_rtx (operand0),
	const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:7725 */
extern rtx gen_split_1051 (rtx, rtx *);
rtx
gen_split_1051 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx _val = 0;
  start_sequence ();
#line 7737 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

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
	gen_rtx_COMPARE (CCmode,
	copy_rtx (operand3),
	const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:7754 */
extern rtx gen_split_1052 (rtx, rtx *);
rtx
gen_split_1052 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx _val = 0;
  start_sequence ();
#line 7767 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand4));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_COMPARE (CCmode,
	copy_rtx (operand0),
	const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:7861 */
extern rtx gen_split_1053 (rtx, rtx *);
rtx
gen_split_1053 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
#line 7871 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

{ rtx tem = rs6000_emit_set_const (operands[0], SImode, operands[1], 2);

  if (tem == operands[0])
    DONE;
  else
    FAIL;
}
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand2));
  emit_insn (gen_rtx_SET (VOIDmode,
	copy_rtx (operand0),
	gen_rtx_IOR (SImode,
	copy_rtx (operand0),
	operand3)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:7893 */
extern rtx gen_split_1054 (rtx, rtx *);
rtx
gen_split_1054 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
#line 7903 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_COMPARE (CCmode,
	copy_rtx (operand0),
	const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:7893 */
extern rtx gen_split_1055 (rtx, rtx *);
rtx
gen_split_1055 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
#line 7903 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_COMPARE (CCmode,
	copy_rtx (operand0),
	const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:7921 */
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
#line 7925 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"
{ rs6000_emit_move (operands[0], operands[1], QImode); DONE; }
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

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:7921 */
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
#line 7925 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"
{ rs6000_emit_move (operands[0], operands[1], HImode); DONE; }
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

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:7921 */
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
#line 7925 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"
{ rs6000_emit_move (operands[0], operands[1], SImode); DONE; }
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

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:7921 */
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
#line 7925 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"
{ rs6000_emit_move (operands[0], operands[1], DImode); DONE; }
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

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:7921 */
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
#line 7925 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"
{ rs6000_emit_move (operands[0], operands[1], TImode); DONE; }
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

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:7946 */
rtx
gen_movcc (rtx operand0,
	rtx operand1)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	operand1);
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:7997 */
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
#line 8001 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"
{ rs6000_emit_move (operands[0], operands[1], SFmode); DONE; }
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

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:8003 */
extern rtx gen_split_1063 (rtx, rtx *);
rtx
gen_split_1063 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
#line 8012 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

{
  long l;
  REAL_VALUE_TYPE rv;

  REAL_VALUE_FROM_CONST_DOUBLE (rv, operands[1]);
  REAL_VALUE_TO_TARGET_SINGLE (rv, l);

  if (! TARGET_POWERPC64)
    operands[2] = operand_subword (operands[0], 0, 0, SFmode);
  else
    operands[2] = gen_lowpart (SImode, operands[0]);

  operands[3] = gen_int_mode (l, SImode);
}
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	operand3));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:8073 */
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
#line 8077 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"
{ rs6000_emit_move (operands[0], operands[1], DFmode); DONE; }
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

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:8079 */
extern rtx gen_split_1065 (rtx, rtx *);
rtx
gen_split_1065 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx _val = 0;
  start_sequence ();
#line 8089 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

{
  int endian = (WORDS_BIG_ENDIAN == 0);
  HOST_WIDE_INT value = INTVAL (operands[1]);

  operands[2] = operand_subword (operands[0], endian, 0, DFmode);
  operands[3] = operand_subword (operands[0], 1 - endian, 0, DFmode);
#if HOST_BITS_PER_WIDE_INT == 32
  operands[4] = (value & 0x80000000) ? constm1_rtx : const0_rtx;
#else
  operands[4] = GEN_INT (value >> 32);
  operands[1] = GEN_INT (((value & 0xffffffff) ^ 0x80000000) - 0x80000000);
#endif
}
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	operand4));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:8104 */
extern rtx gen_split_1066 (rtx, rtx *);
rtx
gen_split_1066 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx _val = 0;
  start_sequence ();
#line 8114 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

{
  int endian = (WORDS_BIG_ENDIAN == 0);
  long l[2];
  REAL_VALUE_TYPE rv;

  REAL_VALUE_FROM_CONST_DOUBLE (rv, operands[1]);
  REAL_VALUE_TO_TARGET_DOUBLE (rv, l);

  operands[2] = operand_subword (operands[0], endian, 0, DFmode);
  operands[3] = operand_subword (operands[0], 1 - endian, 0, DFmode);
  operands[4] = gen_int_mode (l[endian], SImode);
  operands[5] = gen_int_mode (l[1 - endian], SImode);
}
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	operand4));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	operand5));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:8129 */
extern rtx gen_split_1067 (rtx, rtx *);
rtx
gen_split_1067 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
#line 8138 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

{
  int endian = (WORDS_BIG_ENDIAN == 0);
  long l[2];
  REAL_VALUE_TYPE rv;
#if HOST_BITS_PER_WIDE_INT >= 64
  HOST_WIDE_INT val;
#endif

  REAL_VALUE_FROM_CONST_DOUBLE (rv, operands[1]);
  REAL_VALUE_TO_TARGET_DOUBLE (rv, l);

  operands[2] = gen_lowpart (DImode, operands[0]);
  /* HIGHPART is lower memory address when WORDS_BIG_ENDIAN.  */
#if HOST_BITS_PER_WIDE_INT >= 64
  val = ((HOST_WIDE_INT)(unsigned long)l[endian] << 32
         | ((HOST_WIDE_INT)(unsigned long)l[1 - endian]));

  operands[3] = gen_int_mode (val, DImode);
#else
  operands[3] = immed_double_const (l[1 - endian], l[endian], DImode);
#endif
}
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	operand3));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:8345 */
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
#line 8349 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"
{ rs6000_emit_move (operands[0], operands[1], TFmode); DONE; }
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

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:8354 */
extern rtx gen_split_1069 (rtx, rtx *);
rtx
gen_split_1069 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 8364 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"
{ rs6000_split_multireg_move (operands[0], operands[1]); DONE; }
  emit_insn (pc_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:8367 */
extern rtx gen_split_1070 (rtx, rtx *);
rtx
gen_split_1070 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 8377 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"
{ rs6000_split_multireg_move (operands[0], operands[1]); DONE; }
  emit_insn (pc_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:8380 */
rtx
gen_extenddftf2 (rtx operand0,
	rtx operand1)
{
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
#line 8386 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"
{
  operands[2] = CONST0_RTX (DFmode);
  /* Generate GOT reference early for SVR4 PIC.  */
  if (DEFAULT_ABI == ABI_V4 && flag_pic)
    operands[2] = validize_mem (force_const_mem (DFmode, operands[2]));
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT_EXTEND (TFmode,
	operand1)),
		gen_rtx_USE (VOIDmode,
	operand2))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:8393 */
extern rtx gen_split_1072 (rtx, rtx *);
rtx
gen_split_1072 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 8402 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"
{
  const int lo_word = FLOAT_WORDS_BIG_ENDIAN ? GET_MODE_SIZE (DFmode) : 0;
  const int hi_word = FLOAT_WORDS_BIG_ENDIAN ? 0 : GET_MODE_SIZE (DFmode);
  emit_move_insn (simplify_gen_subreg (DFmode, operands[0], TFmode, hi_word),
		  operands[1]);
  emit_move_insn (simplify_gen_subreg (DFmode, operands[0], TFmode, lo_word),
		  operands[2]);
  DONE;
}
  emit_insn (pc_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:8412 */
rtx
gen_extendsftf2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 8417 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"
{
  rtx tmp = gen_reg_rtx (DFmode);
  emit_insn (gen_extendsfdf2 (tmp, operands[1]));
  emit_insn (gen_extenddftf2 (operands[0], tmp));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT_EXTEND (TFmode,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:8424 */
rtx
gen_trunctfdf2 (rtx operand0,
	rtx operand1)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT_TRUNCATE (DFmode,
	operand1));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:8431 */
extern rtx gen_split_1075 (rtx, rtx *);
rtx
gen_split_1075 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 8441 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"
{
  emit_note (NOTE_INSN_DELETED);
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:8455 */
extern rtx gen_split_1076 (rtx, rtx *);
rtx
gen_split_1076 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
#line 8467 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_FLOAT_TRUNCATE (DFmode,
	operand1)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT_TRUNCATE (SFmode,
	copy_rtx (operand2))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:8469 */
rtx
gen_floatsitf2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 8474 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"
{
  rtx tmp = gen_reg_rtx (DFmode);
  expand_float (tmp, operands[1], false);
  emit_insn (gen_extenddftf2 (operands[0], tmp));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT (TFmode,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:8493 */
rtx
gen_fix_trunctfsi2 (rtx operand0,
	rtx operand1)
{
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[6];
    operands[0] = operand0;
    operands[1] = operand1;
#line 8503 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"
{
  operands[2] = gen_reg_rtx (DFmode);
  operands[3] = gen_reg_rtx (DFmode);
  operands[4] = gen_reg_rtx (DImode);
  operands[5] = assign_stack_temp (DImode, GET_MODE_SIZE (DImode), 0);
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
    operand4 = operands[4];
    operand5 = operands[5];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (5,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FIX (SImode,
	operand1)),
		gen_rtx_CLOBBER (VOIDmode,
	operand2),
		gen_rtx_CLOBBER (VOIDmode,
	operand3),
		gen_rtx_CLOBBER (VOIDmode,
	operand4),
		gen_rtx_CLOBBER (VOIDmode,
	operand5))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:8510 */
extern rtx gen_split_1079 (rtx, rtx *);
rtx
gen_split_1079 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 8522 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"
{
  rtx lowword;
  emit_insn (gen_fix_trunc_helper (operands[2], operands[1], operands[3]));

  gcc_assert (MEM_P (operands[5]));
  lowword = adjust_address (operands[5], SImode, WORDS_BIG_ENDIAN ? 4 : 0);

  emit_insn (gen_fctiwz (operands[4], operands[2]));
  emit_move_insn (operands[5], operands[4]);
  emit_move_insn (operands[0], lowword);
  DONE;
}
  emit_insn (pc_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:8550 */
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
#line 8555 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

{
  rtx label = gen_label_rtx ();
  emit_insn (gen_abstf2_internal (operands[0], operands[1], label));
  emit_label (label);
  DONE;
}
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

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:8563 */
rtx
gen_abstf2_internal (rtx operand0,
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
#line 8575 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

{
  const int hi_word = FLOAT_WORDS_BIG_ENDIAN ? 0 : GET_MODE_SIZE (DFmode);
  const int lo_word = FLOAT_WORDS_BIG_ENDIAN ? GET_MODE_SIZE (DFmode) : 0;
  operands[3] = gen_reg_rtx (DFmode);
  operands[4] = gen_reg_rtx (CCFPmode);
  operands[5] = simplify_gen_subreg (DFmode, operands[0], TFmode, hi_word);
  operands[6] = simplify_gen_subreg (DFmode, operands[0], TFmode, lo_word);
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
	operand0,
	operand1));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	operand5));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand5,
	gen_rtx_ABS (DFmode,
	operand5)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand4,
	gen_rtx_COMPARE (CCFPmode,
	operand3,
	operand5)));
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	gen_rtx_EQ (VOIDmode,
	operand4,
	const0_rtx),
	gen_rtx_LABEL_REF (VOIDmode,
	operand2),
	pc_rtx)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand6,
	gen_rtx_NEG (DFmode,
	operand6)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:8606 */
extern rtx gen_split_1082 (rtx, rtx *);
rtx
gen_split_1082 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx _val = 0;
  start_sequence ();
#line 8612 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

{
  HOST_WIDE_INT value = INTVAL (operands[1]);
  operands[2] = operand_subword_force (operands[0], WORDS_BIG_ENDIAN == 0,
				       DImode);
  operands[3] = operand_subword_force (operands[0], WORDS_BIG_ENDIAN != 0,
				       DImode);
#if HOST_BITS_PER_WIDE_INT == 32
  operands[4] = (value & 0x80000000) ? constm1_rtx : const0_rtx;
#else
  operands[4] = GEN_INT (value >> 32);
  operands[1] = GEN_INT (((value & 0xffffffff) ^ 0x80000000) - 0x80000000);
#endif
}
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	operand4));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:8627 */
extern rtx gen_split_1083 (rtx, rtx *);
rtx
gen_split_1083 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 8633 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"
{ rs6000_split_multireg_move (operands[0], operands[1]); DONE; }
  emit_insn (pc_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:8678 */
extern rtx gen_split_1084 (rtx, rtx *);
rtx
gen_split_1084 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
#line 8687 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

  operand0 = operands[0];
  operand1 = operands[1];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	constm1_rtx));
  emit_insn (gen_rtx_SET (VOIDmode,
	copy_rtx (operand0),
	gen_rtx_AND (DImode,
	gen_rtx_ROTATE (DImode,
	copy_rtx (operand0),
	const0_rtx),
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:8693 */
extern rtx gen_split_1085 (rtx, rtx *);
rtx
gen_split_1085 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
#line 8699 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

{ rtx tem = rs6000_emit_set_const (operands[0], DImode, operands[1], 5);

  if (tem == operands[0])
    DONE;
  else
    FAIL;
}
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand2));
  emit_insn (gen_rtx_SET (VOIDmode,
	copy_rtx (operand0),
	gen_rtx_PLUS (DImode,
	copy_rtx (operand0),
	operand3)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:8708 */
extern rtx gen_split_1086 (rtx, rtx *);
rtx
gen_split_1086 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
#line 8714 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

{ rtx tem = rs6000_emit_set_const (operands[0], DImode, operands[1], 5);

  if (tem == operands[0])
    DONE;
  else
    FAIL;
}
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand2));
  emit_insn (gen_rtx_SET (VOIDmode,
	copy_rtx (operand0),
	gen_rtx_PLUS (DImode,
	copy_rtx (operand0),
	operand3)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:8805 */
extern rtx gen_split_1087 (rtx, rtx *);
rtx
gen_split_1087 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx _val = 0;
  start_sequence ();
#line 8811 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

{
  operands[2] = operand_subword_force (operands[0], WORDS_BIG_ENDIAN == 0,
				       TImode);
  operands[3] = operand_subword_force (operands[0], WORDS_BIG_ENDIAN != 0,
				       TImode);
  if (GET_CODE (operands[1]) == CONST_DOUBLE)
    {
      operands[4] = GEN_INT (CONST_DOUBLE_HIGH (operands[1]));
      operands[5] = GEN_INT (CONST_DOUBLE_LOW (operands[1]));
    }
  else if (GET_CODE (operands[1]) == CONST_INT)
    {
      operands[4] = GEN_INT (- (INTVAL (operands[1]) < 0));
      operands[5] = operands[1];
    }
  else
    FAIL;
}
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	operand4));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	operand5));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:8831 */
extern rtx gen_split_1088 (rtx, rtx *);
rtx
gen_split_1088 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 8837 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"
{ rs6000_split_multireg_move (operands[0], operands[1]); DONE; }
  emit_insn (pc_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:8839 */
rtx
gen_load_multiple (rtx operand0,
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
#line 8844 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

{
  int regno;
  int count;
  rtx op1;
  int i;

  /* Support only loading a constant number of fixed-point registers from
     memory and only bother with this if more than two; the machine
     doesn't support more than eight.  */
  if (GET_CODE (operands[2]) != CONST_INT
      || INTVAL (operands[2]) <= 2
      || INTVAL (operands[2]) > 8
      || GET_CODE (operands[1]) != MEM
      || GET_CODE (operands[0]) != REG
      || REGNO (operands[0]) >= 32)
    FAIL;

  count = INTVAL (operands[2]);
  regno = REGNO (operands[0]);

  operands[3] = gen_rtx_PARALLEL (VOIDmode, rtvec_alloc (count));
  op1 = replace_equiv_address (operands[1],
			       force_reg (SImode, XEXP (operands[1], 0)));

  for (i = 0; i < count; i++)
    XVECEXP (operands[3], 0, i)
      = gen_rtx_SET (VOIDmode, gen_rtx_REG (SImode, regno + i),
		     adjust_address_nv (op1, SImode, i * 4));
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
  }
  emit (operand3);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:8989 */
rtx
gen_store_multiple (rtx operand0,
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
#line 8995 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

{
  int regno;
  int count;
  rtx to;
  rtx op0;
  int i;

  /* Support only storing a constant number of fixed-point registers to
     memory and only bother with this if more than two; the machine
     doesn't support more than eight.  */
  if (GET_CODE (operands[2]) != CONST_INT
      || INTVAL (operands[2]) <= 2
      || INTVAL (operands[2]) > 8
      || GET_CODE (operands[0]) != MEM
      || GET_CODE (operands[1]) != REG
      || REGNO (operands[1]) >= 32)
    FAIL;

  count = INTVAL (operands[2]);
  regno = REGNO (operands[1]);

  operands[3] = gen_rtx_PARALLEL (VOIDmode, rtvec_alloc (count + 1));
  to = force_reg (SImode, XEXP (operands[0], 0));
  op0 = replace_equiv_address (operands[0], to);

  XVECEXP (operands[3], 0, 0)
    = gen_rtx_SET (VOIDmode, adjust_address_nv (op0, SImode, 0), operands[1]);
  XVECEXP (operands[3], 0, 1) = gen_rtx_CLOBBER (VOIDmode,
						 gen_rtx_SCRATCH (SImode));

  for (i = 1; i < count; i++)
    XVECEXP (operands[3], 0, i + 1)
      = gen_rtx_SET (VOIDmode,
		     adjust_address_nv (op0, SImode, i * 4),
		     gen_rtx_REG (SImode, regno + i));
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
  }
  emit (operand3);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:9249 */
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
#line 9255 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

{
  /* If value to set is not zero, use the library routine.  */
  if (operands[2] != const0_rtx)
    FAIL;

  if (expand_block_clear (operands))
    DONE;
  else
    FAIL;
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
	operand2),
		gen_rtx_USE (VOIDmode,
	operand1),
		gen_rtx_USE (VOIDmode,
	operand3))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:9273 */
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
#line 9279 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

{
  if (expand_block_move (operands))
    DONE;
  else
    FAIL;
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
		gen_rtx_USE (VOIDmode,
	operand2),
		gen_rtx_USE (VOIDmode,
	operand3))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:9290 */
rtx
gen_movmemsi_8reg (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (12,
		gen_rtx_SET (VOIDmode,
	operand0,
	operand1),
		gen_rtx_USE (VOIDmode,
	operand2),
		gen_rtx_USE (VOIDmode,
	operand3),
		gen_hard_reg_clobber (SImode, 5),
		gen_hard_reg_clobber (SImode, 6),
		gen_hard_reg_clobber (SImode, 7),
		gen_hard_reg_clobber (SImode, 8),
		gen_hard_reg_clobber (SImode, 9),
		gen_hard_reg_clobber (SImode, 10),
		gen_hard_reg_clobber (SImode, 11),
		gen_hard_reg_clobber (SImode, 12),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode))));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:9358 */
rtx
gen_movmemsi_6reg (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (10,
		gen_rtx_SET (VOIDmode,
	operand0,
	operand1),
		gen_rtx_USE (VOIDmode,
	operand2),
		gen_rtx_USE (VOIDmode,
	operand3),
		gen_hard_reg_clobber (SImode, 5),
		gen_hard_reg_clobber (SImode, 6),
		gen_hard_reg_clobber (SImode, 7),
		gen_hard_reg_clobber (SImode, 8),
		gen_hard_reg_clobber (SImode, 9),
		gen_hard_reg_clobber (SImode, 10),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode))));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:9418 */
rtx
gen_movmemsi_4reg (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (8,
		gen_rtx_SET (VOIDmode,
	operand0,
	operand1),
		gen_rtx_USE (VOIDmode,
	operand2),
		gen_rtx_USE (VOIDmode,
	operand3),
		gen_hard_reg_clobber (SImode, 5),
		gen_hard_reg_clobber (SImode, 6),
		gen_hard_reg_clobber (SImode, 7),
		gen_hard_reg_clobber (SImode, 8),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode))));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:9470 */
rtx
gen_movmemsi_2reg (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (5,
		gen_rtx_SET (VOIDmode,
	operand0,
	operand1),
		gen_rtx_USE (VOIDmode,
	operand2),
		gen_rtx_USE (VOIDmode,
	operand3),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (DImode)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode))));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:9507 */
rtx
gen_movmemsi_1reg (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (5,
		gen_rtx_SET (VOIDmode,
	operand0,
	operand1),
		gen_rtx_USE (VOIDmode,
	operand2),
		gen_rtx_USE (VOIDmode,
	operand3),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode))));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:9779 */
extern rtx gen_peephole2_1098 (rtx, rtx *);
rtx
gen_peephole2_1098 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  start_sequence ();
#line 9790 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"
operands[1] = widen_memory_access (operands[1], V2DFmode, 0);
   operands[0] = gen_rtx_REG (V2DFmode, REGNO (operands[0]));
  operand0 = operands[0];
  operand1 = operands[1];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:9801 */
extern rtx gen_peephole2_1099 (rtx, rtx *);
rtx
gen_peephole2_1099 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  start_sequence ();
#line 9812 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"
operands[0] = widen_memory_access (operands[0], V2DFmode, 0);
   operands[1] = gen_rtx_REG (V2DFmode, REGNO (operands[1]));
  operand0 = operands[0];
  operand1 = operands[1];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:9822 */
extern rtx gen_peephole2_1100 (rtx, rtx *);
rtx
gen_peephole2_1100 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  start_sequence ();
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:9831 */
extern rtx gen_peephole2_1101 (rtx, rtx *);
rtx
gen_peephole2_1101 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  start_sequence ();
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:10025 */
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
#line 10031 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

{ rtx chain = gen_reg_rtx (Pmode);
  rtx stack_bot = gen_rtx_MEM (Pmode, stack_pointer_rtx);
  rtx neg_op0;

  emit_move_insn (chain, stack_bot);

  /* Check stack bounds if necessary.  */
  if (current_function_limit_stack)
    {
      rtx available;
      available = expand_binop (Pmode, sub_optab,
				stack_pointer_rtx, stack_limit_rtx,
				NULL_RTX, 1, OPTAB_WIDEN);
      emit_insn (gen_cond_trap (LTU, available, operands[1], const0_rtx));
    }

  if (GET_CODE (operands[1]) != CONST_INT
      || INTVAL (operands[1]) < -32767
      || INTVAL (operands[1]) > 32768)
    {
      neg_op0 = gen_reg_rtx (Pmode);
      if (TARGET_32BIT)
	emit_insn (gen_negsi2 (neg_op0, operands[1]));
      else
	emit_insn (gen_negdi2 (neg_op0, operands[1]));
    }
  else
    neg_op0 = GEN_INT (- INTVAL (operands[1]));

  if (TARGET_UPDATE)
    emit_insn ((* ((TARGET_32BIT) ? gen_movsi_update : gen_movdi_di_update))
		(stack_pointer_rtx, stack_pointer_rtx, neg_op0, chain));

  else
    {
      emit_insn ((* ((TARGET_32BIT) ? gen_addsi3 : gen_adddi3))
		 (stack_pointer_rtx, stack_pointer_rtx, neg_op0));
      emit_move_insn (gen_rtx_MEM (Pmode, stack_pointer_rtx), chain);
    }

  emit_move_insn (operands[0], virtual_stack_dynamic_rtx);
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (VOIDmode,
	gen_rtx_REG (VOIDmode,
	1),
	operand1)));
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_REG (VOIDmode,
	1),
	gen_rtx_MINUS (VOIDmode,
	gen_rtx_REG (VOIDmode,
	1),
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:10085 */
rtx
gen_save_stack_function (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 10089 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"
DONE;
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit (operand0);
  emit (operand1);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:10091 */
rtx
gen_restore_stack_function (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 10095 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"
DONE;
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit (operand0);
  emit (operand1);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:10100 */
rtx
gen_restore_stack_block (rtx operand0,
	rtx operand1)
{
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[6];
    operands[0] = operand0;
    operands[1] = operand1;
#line 10107 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

{
  operands[2] = gen_reg_rtx (Pmode);
  operands[3] = gen_frame_mem (Pmode, operands[0]);
  operands[4] = gen_frame_mem (Pmode, operands[1]);
  operands[5] = gen_frame_mem (BLKmode, operands[0]);
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
	operand3));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand4,
	operand2));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand5,
	gen_rtx_UNSPEC (BLKmode,
	gen_rtvec (1,
		operand5),
	5)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:10115 */
rtx
gen_save_stack_nonlocal (rtx operand0,
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
#line 10120 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

{
  int units_per_word = (TARGET_32BIT) ? 4 : 8;

  /* Copy the backchain to the first word, sp to the second.  */
  operands[0] = adjust_address_nv (operands[0], Pmode, 0);
  operands[2] = adjust_address_nv (operands[0], Pmode, units_per_word);
  operands[3] = gen_reg_rtx (Pmode);
  operands[4] = gen_frame_mem (Pmode, operands[1]);
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
    operand4 = operands[4];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	operand4));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand3));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:10131 */
rtx
gen_restore_stack_nonlocal (rtx operand0,
	rtx operand1)
{
  rtx operand2;
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
#line 10138 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

{
  int units_per_word = (TARGET_32BIT) ? 4 : 8;

  /* Restore the backchain from the first word, sp from the second.  */
  operands[2] = gen_reg_rtx (Pmode);
  operands[3] = gen_reg_rtx (Pmode);
  operands[1] = adjust_address_nv (operands[1], Pmode, 0);
  operands[4] = adjust_address_nv (operands[1], Pmode, units_per_word);
  operands[5] = gen_frame_mem (Pmode, operands[3]);
  operands[6] = gen_frame_mem (BLKmode, operands[0]);
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
	operand1));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	operand4));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand5,
	operand2));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand6,
	gen_rtx_UNSPEC (BLKmode,
	gen_rtvec (1,
		operand6),
	5)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand3));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:10250 */
rtx
gen_builtin_setjmp_receiver (rtx operand0)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[1];
    operands[0] = operand0;
#line 10255 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

{
#if TARGET_MACHO
  if (DEFAULT_ABI == ABI_DARWIN)
    {
      const char *picbase = machopic_function_base_name ();
      rtx picrtx = gen_rtx_SYMBOL_REF (Pmode, ggc_strdup (picbase));
      rtx picreg = gen_rtx_REG (Pmode, RS6000_PIC_OFFSET_TABLE_REGNUM);
      rtx tmplabrtx;
      char tmplab[20];

      ASM_GENERATE_INTERNAL_LABEL(tmplab, "LSJR",
				  CODE_LABEL_NUMBER (operands[0]));
      tmplabrtx = gen_rtx_SYMBOL_REF (Pmode, ggc_strdup (tmplab));

      emit_insn (gen_load_macho_picbase (picreg, tmplabrtx));
      emit_insn (gen_macho_correct_pic (picreg, picreg, picrtx, tmplabrtx));
    }
  else
#endif
    rs6000_emit_load_toc_table (FALSE);
  DONE;
}
    operand0 = operands[0];
  }
  emit_insn (gen_rtx_USE (VOIDmode,
	gen_rtx_LABEL_REF (VOIDmode,
	operand0)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:10304 */
rtx
gen_call_indirect_aix32 (rtx operand0,
	rtx operand1)
{
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
#line 10323 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

{ operands[2] = gen_reg_rtx (SImode); }
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_MEM (SImode,
	operand0)));
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (SImode,
	gen_rtx_PLUS (SImode,
	gen_rtx_REG (SImode,
	1),
	const_int_rtx[MAX_SAVED_CONST_INT + (20)])),
	gen_rtx_REG (SImode,
	2)));
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_REG (SImode,
	2),
	gen_rtx_MEM (SImode,
	gen_rtx_PLUS (SImode,
	operand0,
	const_int_rtx[MAX_SAVED_CONST_INT + (4)]))));
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_REG (SImode,
	11),
	gen_rtx_MEM (SImode,
	gen_rtx_PLUS (SImode,
	operand0,
	const_int_rtx[MAX_SAVED_CONST_INT + (8)]))));
  emit_call_insn (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (5,
		gen_rtx_CALL (VOIDmode,
	gen_rtx_MEM (SImode,
	operand2),
	operand1),
		gen_rtx_USE (VOIDmode,
	gen_rtx_REG (SImode,
	2)),
		gen_rtx_USE (VOIDmode,
	gen_rtx_REG (SImode,
	11)),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (SImode,
	2),
	gen_rtx_MEM (SImode,
	gen_rtx_PLUS (SImode,
	gen_rtx_REG (SImode,
	1),
	const_int_rtx[MAX_SAVED_CONST_INT + (20)]))),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:10326 */
rtx
gen_call_indirect_aix64 (rtx operand0,
	rtx operand1)
{
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
#line 10345 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

{ operands[2] = gen_reg_rtx (DImode); }
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_MEM (DImode,
	operand0)));
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (DImode,
	gen_rtx_PLUS (DImode,
	gen_rtx_REG (DImode,
	1),
	const_int_rtx[MAX_SAVED_CONST_INT + (40)])),
	gen_rtx_REG (DImode,
	2)));
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_REG (DImode,
	2),
	gen_rtx_MEM (DImode,
	gen_rtx_PLUS (DImode,
	operand0,
	const_int_rtx[MAX_SAVED_CONST_INT + (8)]))));
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_REG (DImode,
	11),
	gen_rtx_MEM (DImode,
	gen_rtx_PLUS (DImode,
	operand0,
	const_int_rtx[MAX_SAVED_CONST_INT + (16)]))));
  emit_call_insn (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (5,
		gen_rtx_CALL (VOIDmode,
	gen_rtx_MEM (SImode,
	operand2),
	operand1),
		gen_rtx_USE (VOIDmode,
	gen_rtx_REG (DImode,
	2)),
		gen_rtx_USE (VOIDmode,
	gen_rtx_REG (DImode,
	11)),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (DImode,
	2),
	gen_rtx_MEM (DImode,
	gen_rtx_PLUS (DImode,
	gen_rtx_REG (DImode,
	1),
	const_int_rtx[MAX_SAVED_CONST_INT + (40)]))),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:10348 */
rtx
gen_call_value_indirect_aix32 (rtx operand0,
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
#line 10368 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

{ operands[3] = gen_reg_rtx (SImode); }
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_MEM (SImode,
	operand1)));
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (SImode,
	gen_rtx_PLUS (SImode,
	gen_rtx_REG (SImode,
	1),
	const_int_rtx[MAX_SAVED_CONST_INT + (20)])),
	gen_rtx_REG (SImode,
	2)));
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_REG (SImode,
	2),
	gen_rtx_MEM (SImode,
	gen_rtx_PLUS (SImode,
	operand1,
	const_int_rtx[MAX_SAVED_CONST_INT + (4)]))));
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_REG (SImode,
	11),
	gen_rtx_MEM (SImode,
	gen_rtx_PLUS (SImode,
	operand1,
	const_int_rtx[MAX_SAVED_CONST_INT + (8)]))));
  emit_call_insn (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (5,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_CALL (VOIDmode,
	gen_rtx_MEM (SImode,
	operand3),
	operand2)),
		gen_rtx_USE (VOIDmode,
	gen_rtx_REG (SImode,
	2)),
		gen_rtx_USE (VOIDmode,
	gen_rtx_REG (SImode,
	11)),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (SImode,
	2),
	gen_rtx_MEM (SImode,
	gen_rtx_PLUS (SImode,
	gen_rtx_REG (SImode,
	1),
	const_int_rtx[MAX_SAVED_CONST_INT + (20)]))),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:10371 */
rtx
gen_call_value_indirect_aix64 (rtx operand0,
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
#line 10391 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

{ operands[3] = gen_reg_rtx (DImode); }
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_MEM (DImode,
	operand1)));
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (DImode,
	gen_rtx_PLUS (DImode,
	gen_rtx_REG (DImode,
	1),
	const_int_rtx[MAX_SAVED_CONST_INT + (40)])),
	gen_rtx_REG (DImode,
	2)));
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_REG (DImode,
	2),
	gen_rtx_MEM (DImode,
	gen_rtx_PLUS (DImode,
	operand1,
	const_int_rtx[MAX_SAVED_CONST_INT + (8)]))));
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_REG (DImode,
	11),
	gen_rtx_MEM (DImode,
	gen_rtx_PLUS (DImode,
	operand1,
	const_int_rtx[MAX_SAVED_CONST_INT + (16)]))));
  emit_call_insn (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (5,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_CALL (VOIDmode,
	gen_rtx_MEM (SImode,
	operand3),
	operand2)),
		gen_rtx_USE (VOIDmode,
	gen_rtx_REG (DImode,
	2)),
		gen_rtx_USE (VOIDmode,
	gen_rtx_REG (DImode,
	11)),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (DImode,
	2),
	gen_rtx_MEM (DImode,
	gen_rtx_PLUS (DImode,
	gen_rtx_REG (DImode,
	1),
	const_int_rtx[MAX_SAVED_CONST_INT + (40)]))),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:10395 */
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
#line 10401 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

{
#if TARGET_MACHO
  if (MACHOPIC_INDIRECT)
    operands[0] = machopic_indirect_call_target (operands[0]);
#endif

  gcc_assert (GET_CODE (operands[0]) == MEM);
  gcc_assert (GET_CODE (operands[1]) == CONST_INT);

  operands[0] = XEXP (operands[0], 0);

  if (DEFAULT_ABI == ABI_V4 && TARGET_SECURE_PLT
      && flag_pic
      && GET_CODE (operands[0]) == SYMBOL_REF
      && !SYMBOL_REF_LOCAL_P (operands[0]))
    {
      rtx call;
      rtvec tmp;

      tmp = gen_rtvec (3,
		       gen_rtx_CALL (VOIDmode,
				     gen_rtx_MEM (SImode, operands[0]),
				     operands[1]),
		       gen_rtx_USE (VOIDmode, operands[2]),
		       gen_rtx_CLOBBER (VOIDmode, gen_rtx_SCRATCH (SImode)));
      call = emit_call_insn (gen_rtx_PARALLEL (VOIDmode, tmp));
      use_reg (&CALL_INSN_FUNCTION_USAGE (call), pic_offset_table_rtx);
      DONE;
    }

  if (GET_CODE (operands[0]) != SYMBOL_REF
      || (DEFAULT_ABI == ABI_AIX && !SYMBOL_REF_FUNCTION_P (operands[0]))
      || (DEFAULT_ABI != ABI_DARWIN && (INTVAL (operands[2]) & CALL_LONG) != 0))
    {
      if (INTVAL (operands[2]) & CALL_LONG)
	operands[0] = rs6000_longcall_ref (operands[0]);

      switch (DEFAULT_ABI)
        {
	case ABI_V4:
	case ABI_DARWIN:
	  operands[0] = force_reg (Pmode, operands[0]);
	  break;

	case ABI_AIX:
	  /* AIX function pointers are really pointers to a three word
	     area.  */
	  emit_call_insn (TARGET_32BIT
			  ? gen_call_indirect_aix32 (force_reg (SImode,
							        operands[0]),
						     operands[1])
			  : gen_call_indirect_aix64 (force_reg (DImode,
							        operands[0]),
						     operands[1]));
	  DONE;

	default:
	  gcc_unreachable ();
	}
    }
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_call_insn (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_CALL (VOIDmode,
	gen_rtx_MEM (SImode,
	operand0),
	operand1),
		gen_rtx_USE (VOIDmode,
	operand2),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:10464 */
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
#line 10471 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

{
#if TARGET_MACHO
  if (MACHOPIC_INDIRECT)
    operands[1] = machopic_indirect_call_target (operands[1]);
#endif

  gcc_assert (GET_CODE (operands[1]) == MEM);
  gcc_assert (GET_CODE (operands[2]) == CONST_INT);

  operands[1] = XEXP (operands[1], 0);

  if (DEFAULT_ABI == ABI_V4 && TARGET_SECURE_PLT
      && flag_pic
      && GET_CODE (operands[1]) == SYMBOL_REF
      && !SYMBOL_REF_LOCAL_P (operands[1]))
    {
      rtx call;
      rtvec tmp;

      tmp = gen_rtvec (3,
		       gen_rtx_SET (VOIDmode,
				    operands[0],
				    gen_rtx_CALL (VOIDmode,
						  gen_rtx_MEM (SImode,
							       operands[1]),
						  operands[2])),
		       gen_rtx_USE (VOIDmode, operands[3]),
		       gen_rtx_CLOBBER (VOIDmode, gen_rtx_SCRATCH (SImode)));
      call = emit_call_insn (gen_rtx_PARALLEL (VOIDmode, tmp));
      use_reg (&CALL_INSN_FUNCTION_USAGE (call), pic_offset_table_rtx);
      DONE;
    }

  if (GET_CODE (operands[1]) != SYMBOL_REF
      || (DEFAULT_ABI == ABI_AIX && !SYMBOL_REF_FUNCTION_P (operands[1]))
      || (DEFAULT_ABI != ABI_DARWIN && (INTVAL (operands[3]) & CALL_LONG) != 0))
    {
      if (INTVAL (operands[3]) & CALL_LONG)
	operands[1] = rs6000_longcall_ref (operands[1]);

      switch (DEFAULT_ABI)
        {
	case ABI_V4:
	case ABI_DARWIN:
	  operands[1] = force_reg (Pmode, operands[1]);
	  break;

	case ABI_AIX:
	  /* AIX function pointers are really pointers to a three word
	     area.  */
	  emit_call_insn (TARGET_32BIT
			  ? gen_call_value_indirect_aix32 (operands[0],
							   force_reg (SImode,
								      operands[1]),
							   operands[2])
			  : gen_call_value_indirect_aix64 (operands[0],
							   force_reg (DImode,
								      operands[1]),
							   operands[2]));
	  DONE;

	default:
	  gcc_unreachable ();
	}
    }
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
  }
  emit_call_insn (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_CALL (VOIDmode,
	gen_rtx_MEM (SImode,
	operand1),
	operand2)),
		gen_rtx_USE (VOIDmode,
	operand3),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:10886 */
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
#line 10892 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

{
  int i;

  emit_call_insn (GEN_CALL (operands[0], const0_rtx, const0_rtx, const0_rtx));

  for (i = 0; i < XVECLEN (operands[2], 0); i++)
    {
      rtx set = XVECEXP (operands[2], 0, i);
      emit_move_insn (SET_DEST (set), SET_SRC (set));
    }

  /* The optimizer does not know that the call sets the function value
     registers we stored in the result block.  We avoid problems by
     claiming that all hard registers are used and clobbered at this
     point.  */
  emit_insn (gen_blockage ());

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

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:11005 */
rtx
gen_sibcall (rtx operand0,
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
#line 11012 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

{
#if TARGET_MACHO
  if (MACHOPIC_INDIRECT)
    operands[0] = machopic_indirect_call_target (operands[0]);
#endif

  gcc_assert (GET_CODE (operands[0]) == MEM);
  gcc_assert (GET_CODE (operands[1]) == CONST_INT);

  operands[0] = XEXP (operands[0], 0);
  operands[3] = gen_reg_rtx (SImode);

}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
  }
  emit_call_insn (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		gen_rtx_CALL (VOIDmode,
	gen_rtx_MEM (SImode,
	operand0),
	operand1),
		gen_rtx_USE (VOIDmode,
	operand2),
		gen_rtx_USE (VOIDmode,
	operand3),
		gen_rtx_RETURN (VOIDmode))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:11198 */
rtx
gen_sibcall_value (rtx operand0,
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
#line 11206 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

{
#if TARGET_MACHO
  if (MACHOPIC_INDIRECT)
    operands[1] = machopic_indirect_call_target (operands[1]);
#endif

  gcc_assert (GET_CODE (operands[1]) == MEM);
  gcc_assert (GET_CODE (operands[2]) == CONST_INT);

  operands[1] = XEXP (operands[1], 0);
  operands[4] = gen_reg_rtx (SImode);

}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
    operand4 = operands[4];
  }
  emit_call_insn (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_CALL (VOIDmode,
	gen_rtx_MEM (SImode,
	operand1),
	operand2)),
		gen_rtx_USE (VOIDmode,
	operand3),
		gen_rtx_USE (VOIDmode,
	operand4),
		gen_rtx_RETURN (VOIDmode))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:11252 */
rtx
gen_sibcall_epilogue (void)
{
  rtx _val = 0;
  start_sequence ();
  {
#line 11255 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

{
      rs6000_emit_epilogue (TRUE);
      DONE;
}
  }
  emit_insn (gen_rtx_USE (VOIDmode,
	const0_rtx));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:11275 */
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
#line 11280 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

{
  /* Take care of the possibility that operands[1] might be negative but
     this might be a logical operation.  That insn doesn't exist.  */
  if (GET_CODE (operands[1]) == CONST_INT
      && INTVAL (operands[1]) < 0)
    operands[1] = force_reg (SImode, operands[1]);

  rs6000_compare_op0 = operands[0];
  rs6000_compare_op1 = operands[1];
  rs6000_compare_fp_p = 0;
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	cc0_rtx,
	gen_rtx_COMPARE (VOIDmode,
	operand0,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:11275 */
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
#line 11280 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

{
  /* Take care of the possibility that operands[1] might be negative but
     this might be a logical operation.  That insn doesn't exist.  */
  if (GET_CODE (operands[1]) == CONST_INT
      && INTVAL (operands[1]) < 0)
    operands[1] = force_reg (DImode, operands[1]);

  rs6000_compare_op0 = operands[0];
  rs6000_compare_op1 = operands[1];
  rs6000_compare_fp_p = 0;
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	cc0_rtx,
	gen_rtx_COMPARE (VOIDmode,
	operand0,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:11294 */
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
#line 11298 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

{
  rs6000_compare_op0 = operands[0];
  rs6000_compare_op1 = operands[1];
  rs6000_compare_fp_p = 1;
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	cc0_rtx,
	gen_rtx_COMPARE (VOIDmode,
	operand0,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:11294 */
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
#line 11298 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

{
  rs6000_compare_op0 = operands[0];
  rs6000_compare_op1 = operands[1];
  rs6000_compare_fp_p = 1;
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	cc0_rtx,
	gen_rtx_COMPARE (VOIDmode,
	operand0,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:11294 */
rtx
gen_cmptf (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 11298 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

{
  rs6000_compare_op0 = operands[0];
  rs6000_compare_op1 = operands[1];
  rs6000_compare_fp_p = 1;
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	cc0_rtx,
	gen_rtx_COMPARE (VOIDmode,
	operand0,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:11306 */
rtx
gen_beq (rtx operand0)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[1];
    operands[0] = operand0;
#line 11309 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"
{ rs6000_emit_cbranch (EQ, operands[0]); DONE; }
    operand0 = operands[0];
  }
  emit_insn (gen_rtx_USE (VOIDmode,
	operand0));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:11311 */
rtx
gen_bne (rtx operand0)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[1];
    operands[0] = operand0;
#line 11314 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"
{ rs6000_emit_cbranch (NE, operands[0]); DONE; }
    operand0 = operands[0];
  }
  emit_insn (gen_rtx_USE (VOIDmode,
	operand0));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:11316 */
rtx
gen_bge (rtx operand0)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[1];
    operands[0] = operand0;
#line 11319 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"
{ rs6000_emit_cbranch (GE, operands[0]); DONE; }
    operand0 = operands[0];
  }
  emit_insn (gen_rtx_USE (VOIDmode,
	operand0));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:11321 */
rtx
gen_bgt (rtx operand0)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[1];
    operands[0] = operand0;
#line 11324 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"
{ rs6000_emit_cbranch (GT, operands[0]); DONE; }
    operand0 = operands[0];
  }
  emit_insn (gen_rtx_USE (VOIDmode,
	operand0));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:11326 */
rtx
gen_ble (rtx operand0)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[1];
    operands[0] = operand0;
#line 11329 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"
{ rs6000_emit_cbranch (LE, operands[0]); DONE; }
    operand0 = operands[0];
  }
  emit_insn (gen_rtx_USE (VOIDmode,
	operand0));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:11331 */
rtx
gen_blt (rtx operand0)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[1];
    operands[0] = operand0;
#line 11334 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"
{ rs6000_emit_cbranch (LT, operands[0]); DONE; }
    operand0 = operands[0];
  }
  emit_insn (gen_rtx_USE (VOIDmode,
	operand0));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:11336 */
rtx
gen_bgeu (rtx operand0)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[1];
    operands[0] = operand0;
#line 11339 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"
{ rs6000_emit_cbranch (GEU, operands[0]); DONE; }
    operand0 = operands[0];
  }
  emit_insn (gen_rtx_USE (VOIDmode,
	operand0));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:11341 */
rtx
gen_bgtu (rtx operand0)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[1];
    operands[0] = operand0;
#line 11344 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"
{ rs6000_emit_cbranch (GTU, operands[0]); DONE; }
    operand0 = operands[0];
  }
  emit_insn (gen_rtx_USE (VOIDmode,
	operand0));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:11346 */
rtx
gen_bleu (rtx operand0)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[1];
    operands[0] = operand0;
#line 11349 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"
{ rs6000_emit_cbranch (LEU, operands[0]); DONE; }
    operand0 = operands[0];
  }
  emit_insn (gen_rtx_USE (VOIDmode,
	operand0));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:11351 */
rtx
gen_bltu (rtx operand0)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[1];
    operands[0] = operand0;
#line 11354 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"
{ rs6000_emit_cbranch (LTU, operands[0]); DONE; }
    operand0 = operands[0];
  }
  emit_insn (gen_rtx_USE (VOIDmode,
	operand0));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:11356 */
rtx
gen_bunordered (rtx operand0)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[1];
    operands[0] = operand0;
#line 11359 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"
{ rs6000_emit_cbranch (UNORDERED, operands[0]); DONE; }
    operand0 = operands[0];
  }
  emit_insn (gen_rtx_USE (VOIDmode,
	operand0));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:11361 */
rtx
gen_bordered (rtx operand0)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[1];
    operands[0] = operand0;
#line 11364 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"
{ rs6000_emit_cbranch (ORDERED, operands[0]); DONE; }
    operand0 = operands[0];
  }
  emit_insn (gen_rtx_USE (VOIDmode,
	operand0));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:11366 */
rtx
gen_buneq (rtx operand0)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[1];
    operands[0] = operand0;
#line 11369 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"
{ rs6000_emit_cbranch (UNEQ, operands[0]); DONE; }
    operand0 = operands[0];
  }
  emit_insn (gen_rtx_USE (VOIDmode,
	operand0));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:11371 */
rtx
gen_bunge (rtx operand0)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[1];
    operands[0] = operand0;
#line 11374 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"
{ rs6000_emit_cbranch (UNGE, operands[0]); DONE; }
    operand0 = operands[0];
  }
  emit_insn (gen_rtx_USE (VOIDmode,
	operand0));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:11376 */
rtx
gen_bungt (rtx operand0)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[1];
    operands[0] = operand0;
#line 11379 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"
{ rs6000_emit_cbranch (UNGT, operands[0]); DONE; }
    operand0 = operands[0];
  }
  emit_insn (gen_rtx_USE (VOIDmode,
	operand0));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:11381 */
rtx
gen_bunle (rtx operand0)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[1];
    operands[0] = operand0;
#line 11384 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"
{ rs6000_emit_cbranch (UNLE, operands[0]); DONE; }
    operand0 = operands[0];
  }
  emit_insn (gen_rtx_USE (VOIDmode,
	operand0));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:11386 */
rtx
gen_bunlt (rtx operand0)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[1];
    operands[0] = operand0;
#line 11389 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"
{ rs6000_emit_cbranch (UNLT, operands[0]); DONE; }
    operand0 = operands[0];
  }
  emit_insn (gen_rtx_USE (VOIDmode,
	operand0));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:11391 */
rtx
gen_bltgt (rtx operand0)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[1];
    operands[0] = operand0;
#line 11394 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"
{ rs6000_emit_cbranch (LTGT, operands[0]); DONE; }
    operand0 = operands[0];
  }
  emit_insn (gen_rtx_USE (VOIDmode,
	operand0));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:11401 */
rtx
gen_seq (rtx operand0)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[1];
    operands[0] = operand0;
#line 11404 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"
{ rs6000_emit_sCOND (EQ, operands[0]); DONE; }
    operand0 = operands[0];
  }
  emit_insn (gen_rtx_CLOBBER (VOIDmode,
	operand0));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:11406 */
rtx
gen_sne (rtx operand0)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[1];
    operands[0] = operand0;
#line 11409 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

{
  if (! rs6000_compare_fp_p)
    FAIL;

  rs6000_emit_sCOND (NE, operands[0]);
  DONE;
}
    operand0 = operands[0];
  }
  emit_insn (gen_rtx_CLOBBER (VOIDmode,
	operand0));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:11419 */
rtx
gen_sge (rtx operand0)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[1];
    operands[0] = operand0;
#line 11422 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

{
  if (! rs6000_compare_fp_p && rs6000_compare_op1 == const0_rtx)
    FAIL;

  rs6000_emit_sCOND (GE, operands[0]);
  DONE;
}
    operand0 = operands[0];
  }
  emit_insn (gen_rtx_CLOBBER (VOIDmode,
	operand0));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:11432 */
rtx
gen_sgt (rtx operand0)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[1];
    operands[0] = operand0;
#line 11435 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

{
  if (! rs6000_compare_fp_p && rs6000_compare_op1 == const0_rtx)
    FAIL;

  rs6000_emit_sCOND (GT, operands[0]);
  DONE;
}
    operand0 = operands[0];
  }
  emit_insn (gen_rtx_CLOBBER (VOIDmode,
	operand0));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:11445 */
rtx
gen_sle (rtx operand0)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[1];
    operands[0] = operand0;
#line 11448 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

{
  if (! rs6000_compare_fp_p && rs6000_compare_op1 == const0_rtx)
    FAIL;

  rs6000_emit_sCOND (LE, operands[0]);
  DONE;
}
    operand0 = operands[0];
  }
  emit_insn (gen_rtx_CLOBBER (VOIDmode,
	operand0));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:11458 */
rtx
gen_slt (rtx operand0)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[1];
    operands[0] = operand0;
#line 11461 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

{
  if (! rs6000_compare_fp_p && rs6000_compare_op1 == const0_rtx)
    FAIL;

  rs6000_emit_sCOND (LT, operands[0]);
  DONE;
}
    operand0 = operands[0];
  }
  emit_insn (gen_rtx_CLOBBER (VOIDmode,
	operand0));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:11470 */
rtx
gen_sgeu (rtx operand0)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[1];
    operands[0] = operand0;
#line 11473 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"
{ rs6000_emit_sCOND (GEU, operands[0]); DONE; }
    operand0 = operands[0];
  }
  emit_insn (gen_rtx_CLOBBER (VOIDmode,
	operand0));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:11475 */
rtx
gen_sgtu (rtx operand0)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[1];
    operands[0] = operand0;
#line 11478 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"
{ rs6000_emit_sCOND (GTU, operands[0]); DONE; }
    operand0 = operands[0];
  }
  emit_insn (gen_rtx_CLOBBER (VOIDmode,
	operand0));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:11480 */
rtx
gen_sleu (rtx operand0)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[1];
    operands[0] = operand0;
#line 11483 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"
{ rs6000_emit_sCOND (LEU, operands[0]); DONE; }
    operand0 = operands[0];
  }
  emit_insn (gen_rtx_CLOBBER (VOIDmode,
	operand0));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:11485 */
rtx
gen_sltu (rtx operand0)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[1];
    operands[0] = operand0;
#line 11488 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"
{ rs6000_emit_sCOND (LTU, operands[0]); DONE; }
    operand0 = operands[0];
  }
  emit_insn (gen_rtx_CLOBBER (VOIDmode,
	operand0));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:11490 */
rtx
gen_sunordered (rtx operand0)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[1];
    operands[0] = operand0;
#line 11493 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"
{ rs6000_emit_sCOND (UNORDERED, operands[0]); DONE; }
    operand0 = operands[0];
  }
  emit_insn (gen_rtx_CLOBBER (VOIDmode,
	operand0));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:11495 */
rtx
gen_sordered (rtx operand0)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[1];
    operands[0] = operand0;
#line 11498 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"
{ rs6000_emit_sCOND (ORDERED, operands[0]); DONE; }
    operand0 = operands[0];
  }
  emit_insn (gen_rtx_CLOBBER (VOIDmode,
	operand0));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:11500 */
rtx
gen_suneq (rtx operand0)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[1];
    operands[0] = operand0;
#line 11503 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"
{ rs6000_emit_sCOND (UNEQ, operands[0]); DONE; }
    operand0 = operands[0];
  }
  emit_insn (gen_rtx_CLOBBER (VOIDmode,
	operand0));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:11505 */
rtx
gen_sunge (rtx operand0)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[1];
    operands[0] = operand0;
#line 11508 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"
{ rs6000_emit_sCOND (UNGE, operands[0]); DONE; }
    operand0 = operands[0];
  }
  emit_insn (gen_rtx_CLOBBER (VOIDmode,
	operand0));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:11510 */
rtx
gen_sungt (rtx operand0)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[1];
    operands[0] = operand0;
#line 11513 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"
{ rs6000_emit_sCOND (UNGT, operands[0]); DONE; }
    operand0 = operands[0];
  }
  emit_insn (gen_rtx_CLOBBER (VOIDmode,
	operand0));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:11515 */
rtx
gen_sunle (rtx operand0)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[1];
    operands[0] = operand0;
#line 11518 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"
{ rs6000_emit_sCOND (UNLE, operands[0]); DONE; }
    operand0 = operands[0];
  }
  emit_insn (gen_rtx_CLOBBER (VOIDmode,
	operand0));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:11520 */
rtx
gen_sunlt (rtx operand0)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[1];
    operands[0] = operand0;
#line 11523 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"
{ rs6000_emit_sCOND (UNLT, operands[0]); DONE; }
    operand0 = operands[0];
  }
  emit_insn (gen_rtx_CLOBBER (VOIDmode,
	operand0));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:11525 */
rtx
gen_sltgt (rtx operand0)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[1];
    operands[0] = operand0;
#line 11528 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"
{ rs6000_emit_sCOND (LTGT, operands[0]); DONE; }
    operand0 = operands[0];
  }
  emit_insn (gen_rtx_CLOBBER (VOIDmode,
	operand0));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:11530 */
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
#line 11534 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"
{
#ifdef TARGET_THREAD_SSP_OFFSET
  rtx tlsreg = gen_rtx_REG (Pmode, TARGET_64BIT ? 13 : 2);
  rtx addr = gen_rtx_PLUS (Pmode, tlsreg, GEN_INT (TARGET_THREAD_SSP_OFFSET));
  operands[1] = gen_rtx_MEM (Pmode, addr);
#endif
  if (TARGET_64BIT)
    emit_insn (gen_stack_protect_setdi (operands[0], operands[1]));
  else
    emit_insn (gen_stack_protect_setsi (operands[0], operands[1]));
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

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:11565 */
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
#line 11570 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"
{
#ifdef TARGET_THREAD_SSP_OFFSET
  rtx tlsreg = gen_rtx_REG (Pmode, TARGET_64BIT ? 13 : 2);
  rtx addr = gen_rtx_PLUS (Pmode, tlsreg, GEN_INT (TARGET_THREAD_SSP_OFFSET));
  operands[1] = gen_rtx_MEM (Pmode, addr);
#endif
  rs6000_compare_op0 = operands[0];
  rs6000_compare_op1 = gen_rtx_UNSPEC (Pmode, gen_rtvec (1, operands[1]),
				       UNSPEC_SP_TEST);
  rs6000_compare_fp_p = 0;
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

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:11628 */
extern rtx gen_peephole2_1162 (rtx, rtx *);
rtx
gen_peephole2_1162 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
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
  rtx operand9;
  rtx operand10;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  start_sequence ();
#line 11648 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"
{
  /* Get the constant we are comparing against, and see what it looks like
     when sign-extended from 16 to 32 bits.  Then see what constant we could
     XOR with SEXTC to get the sign-extended value.  */
  rtx cnst = simplify_const_binary_operation (GET_CODE (operands[3]),
					      SImode,
					      operands[1], operands[2]);
  HOST_WIDE_INT c = INTVAL (cnst);
  HOST_WIDE_INT sextc = ((c & 0xffff) ^ 0x8000) - 0x8000;
  HOST_WIDE_INT xorv = c ^ sextc;

  operands[9] = GEN_INT (xorv);
  operands[10] = GEN_INT (sextc);
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
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_XOR (SImode,
	operand5,
	operand9)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand4,
	gen_rtx_COMPARE (CCmode,
	copy_rtx (operand0),
	operand10)));
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	operand6,
	operand7,
	operand8)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:11704 */
extern rtx gen_split_1163 (rtx, rtx *);
rtx
gen_split_1163 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx _val = 0;
  start_sequence ();
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_COMPARE (CCmode,
	operand1,
	operand2)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (SImode,
	copy_rtx (operand1),
	operand4)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:11714 */
extern rtx gen_split_1164 (rtx, rtx *);
rtx
gen_split_1164 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx _val = 0;
  start_sequence ();
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_COMPARE (CCUNSmode,
	operand1,
	operand2)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (SImode,
	copy_rtx (operand1),
	operand4)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:11751 */
extern rtx gen_split_1165 (rtx, rtx *);
rtx
gen_split_1165 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
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
  rtx operand9;
  rtx operand10;
  rtx operand11;
  rtx operand12;
  rtx operand13;
  rtx operand14;
  rtx _val = 0;
  start_sequence ();
#line 11782 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"
{
  REAL_VALUE_TYPE rv;
  const int lo_word = FLOAT_WORDS_BIG_ENDIAN ? GET_MODE_SIZE (DFmode) : 0;
  const int hi_word = FLOAT_WORDS_BIG_ENDIAN ? 0 : GET_MODE_SIZE (DFmode);

  operands[5] = simplify_gen_subreg (DFmode, operands[1], TFmode, hi_word);
  operands[6] = simplify_gen_subreg (DFmode, operands[1], TFmode, lo_word);
  operands[7] = simplify_gen_subreg (DFmode, operands[2], TFmode, hi_word);
  operands[8] = simplify_gen_subreg (DFmode, operands[2], TFmode, lo_word);
  operands[11] = gen_label_rtx ();
  operands[12] = gen_label_rtx ();
  real_inf (&rv);
  operands[13] = force_const_mem (DFmode,
				  CONST_DOUBLE_FROM_REAL_VALUE (rv, DFmode));
  operands[14] = force_const_mem (DFmode,
				  CONST_DOUBLE_FROM_REAL_VALUE (dconst0,
								DFmode));
  if (TARGET_TOC)
    {
      operands[13] = gen_const_mem (DFmode,
				    create_TOC_reference (XEXP (operands[13], 0)));
      operands[14] = gen_const_mem (DFmode,
				    create_TOC_reference (XEXP (operands[14], 0)));
      set_mem_alias_set (operands[13], get_TOC_alias_set ());
      set_mem_alias_set (operands[14], get_TOC_alias_set ());
    }
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
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	operand13));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand4,
	operand14));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand9,
	gen_rtx_ABS (DFmode,
	operand5)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_COMPARE (CCFPmode,
	copy_rtx (operand9),
	copy_rtx (operand3))));
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	gen_rtx_NE (VOIDmode,
	copy_rtx (operand0),
	const0_rtx),
	gen_rtx_LABEL_REF (VOIDmode,
	operand11),
	pc_rtx)));
  emit_insn (gen_rtx_SET (VOIDmode,
	copy_rtx (operand0),
	gen_rtx_COMPARE (CCFPmode,
	copy_rtx (operand5),
	operand7)));
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_LABEL_REF (VOIDmode,
	operand12)));
  emit_barrier ();  emit (copy_rtx (operand11));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand10,
	gen_rtx_MINUS (DFmode,
	copy_rtx (operand5),
	copy_rtx (operand7))));
  emit_insn (gen_rtx_SET (VOIDmode,
	copy_rtx (operand9),
	gen_rtx_MINUS (DFmode,
	operand6,
	operand8)));
  emit_insn (gen_rtx_SET (VOIDmode,
	copy_rtx (operand9),
	gen_rtx_PLUS (DFmode,
	copy_rtx (operand10),
	copy_rtx (operand9))));
  emit_insn (gen_rtx_SET (VOIDmode,
	copy_rtx (operand0),
	gen_rtx_COMPARE (CCFPmode,
	copy_rtx (operand7),
	copy_rtx (operand4))));
  emit (copy_rtx (operand12));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:11878 */
extern rtx gen_split_1166 (rtx, rtx *);
rtx
gen_split_1166 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
#line 11892 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_fmt_ee (GET_CODE (operand1), GET_MODE (operand1),
		operand2,
		const0_rtx)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_COMPARE (CCmode,
	copy_rtx (operand3),
	const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:11959 */
extern rtx gen_split_1167 (rtx, rtx *);
rtx
gen_split_1167 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx _val = 0;
  start_sequence ();
#line 11977 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand4,
	gen_rtx_ASHIFT (SImode,
	gen_rtx_fmt_ee (GET_CODE (operand1), GET_MODE (operand1),
		operand2,
		const0_rtx),
	operand3)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_COMPARE (CCmode,
	copy_rtx (operand4),
	const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:12024 */
extern rtx gen_split_1170 (rtx, rtx *);
rtx
gen_split_1170 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx _val = 0;
  start_sequence ();
#line 12038 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"
{
    if (GET_CODE (operands[2]) != CONST_INT || INTVAL (operands[2]) != 0)
      {
	/* Use output operand as intermediate.  */
	operands[3] = operands[0];

	if (logical_operand (operands[2], SImode))
	  emit_insn (gen_rtx_SET (VOIDmode, operands[3],
				  gen_rtx_XOR (SImode,
					       operands[1], operands[2])));
	else
	  emit_insn (gen_rtx_SET (VOIDmode, operands[3],
				  gen_rtx_PLUS (SImode, operands[1],
						negate_rtx (SImode,
							    operands[2]))));
      }
    else
      operands[3] = operands[1];

    operands[4] = GEN_INT (exact_log2 (GET_MODE_BITSIZE (SImode)));
  }
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_CLZ (SImode,
	operand3)));
  emit_insn (gen_rtx_SET (VOIDmode,
	copy_rtx (operand0),
	gen_rtx_LSHIFTRT (SImode,
	copy_rtx (operand0),
	operand4)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:12024 */
extern rtx gen_split_1171 (rtx, rtx *);
rtx
gen_split_1171 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx _val = 0;
  start_sequence ();
#line 12038 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"
{
    if (GET_CODE (operands[2]) != CONST_INT || INTVAL (operands[2]) != 0)
      {
	/* Use output operand as intermediate.  */
	operands[3] = operands[0];

	if (logical_operand (operands[2], DImode))
	  emit_insn (gen_rtx_SET (VOIDmode, operands[3],
				  gen_rtx_XOR (DImode,
					       operands[1], operands[2])));
	else
	  emit_insn (gen_rtx_SET (VOIDmode, operands[3],
				  gen_rtx_PLUS (DImode, operands[1],
						negate_rtx (DImode,
							    operands[2]))));
      }
    else
      operands[3] = operands[1];

    operands[4] = GEN_INT (exact_log2 (GET_MODE_BITSIZE (DImode)));
  }
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_CLZ (DImode,
	operand3)));
  emit_insn (gen_rtx_SET (VOIDmode,
	copy_rtx (operand0),
	gen_rtx_LSHIFTRT (DImode,
	copy_rtx (operand0),
	operand4)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:12060 */
extern rtx gen_split_1172 (rtx, rtx *);
rtx
gen_split_1172 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx _val = 0;
  start_sequence ();
#line 12078 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"
{
    if (GET_CODE (operands[2]) != CONST_INT || INTVAL (operands[2]) != 0)
      {
	/* Use output operand as intermediate.  */
	operands[4] = operands[0];

	if (logical_operand (operands[2], SImode))
	  emit_insn (gen_rtx_SET (VOIDmode, operands[4],
				  gen_rtx_XOR (SImode,
					       operands[1], operands[2])));
	else
	  emit_insn (gen_rtx_SET (VOIDmode, operands[4],
				  gen_rtx_PLUS (SImode, operands[1],
						negate_rtx (SImode,
							    operands[2]))));
      }
    else
      operands[4] = operands[1];

    operands[5] = GEN_INT (exact_log2 (GET_MODE_BITSIZE (SImode)));
  }
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_CLZ (SImode,
	operand4)));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_COMPARE (CCmode,
	gen_rtx_LSHIFTRT (SImode,
	copy_rtx (operand0),
	operand5),
	const0_rtx)),
		gen_rtx_SET (VOIDmode,
	copy_rtx (operand0),
	gen_rtx_LSHIFTRT (SImode,
	copy_rtx (operand0),
	copy_rtx (operand5))))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:12060 */
extern rtx gen_split_1173 (rtx, rtx *);
rtx
gen_split_1173 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx _val = 0;
  start_sequence ();
#line 12078 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"
{
    if (GET_CODE (operands[2]) != CONST_INT || INTVAL (operands[2]) != 0)
      {
	/* Use output operand as intermediate.  */
	operands[4] = operands[0];

	if (logical_operand (operands[2], DImode))
	  emit_insn (gen_rtx_SET (VOIDmode, operands[4],
				  gen_rtx_XOR (DImode,
					       operands[1], operands[2])));
	else
	  emit_insn (gen_rtx_SET (VOIDmode, operands[4],
				  gen_rtx_PLUS (DImode, operands[1],
						negate_rtx (DImode,
							    operands[2]))));
      }
    else
      operands[4] = operands[1];

    operands[5] = GEN_INT (exact_log2 (GET_MODE_BITSIZE (DImode)));
  }
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_CLZ (DImode,
	operand4)));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_COMPARE (CCmode,
	gen_rtx_LSHIFTRT (DImode,
	copy_rtx (operand0),
	operand5),
	const0_rtx)),
		gen_rtx_SET (VOIDmode,
	copy_rtx (operand0),
	gen_rtx_LSHIFTRT (DImode,
	copy_rtx (operand0),
	copy_rtx (operand5))))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:12117 */
extern rtx gen_split_1174 (rtx, rtx *);
rtx
gen_split_1174 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx _val = 0;
  start_sequence ();
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand5,
	operand2));
  emit_insn (gen_rtx_SET (VOIDmode,
	copy_rtx (operand2),
	gen_rtx_PLUS (SImode,
	gen_rtx_fmt_ee (GET_CODE (operand1), GET_MODE (operand1),
		copy_rtx (operand2),
		operand3),
	operand4)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:12169 */
extern rtx gen_split_1175 (rtx, rtx *);
rtx
gen_split_1175 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx _val = 0;
  start_sequence ();
#line 12186 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand4,
	gen_rtx_PLUS (SImode,
	gen_rtx_EQ (SImode,
	operand1,
	operand2),
	operand3)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_COMPARE (CCmode,
	copy_rtx (operand4),
	const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:12213 */
extern rtx gen_split_1176 (rtx, rtx *);
rtx
gen_split_1176 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx _val = 0;
  start_sequence ();
#line 12229 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (SImode,
	gen_rtx_EQ (SImode,
	operand1,
	operand2),
	operand3)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand4,
	gen_rtx_COMPARE (CCmode,
	copy_rtx (operand0),
	const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:12240 */
extern rtx gen_split_1177 (rtx, rtx *);
rtx
gen_split_1177 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
#line 12248 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"
{
    if (GET_CODE (operands[2]) != CONST_INT || INTVAL (operands[2]) != 0)
      {
	/* Use output operand as intermediate.  */
	operands[3] = operands[0];

	if (logical_operand (operands[2], SImode))
	  emit_insn (gen_rtx_SET (VOIDmode, operands[3],
				  gen_rtx_XOR (SImode,
					       operands[1], operands[2])));
	else
	  emit_insn (gen_rtx_SET (VOIDmode, operands[3],
				  gen_rtx_PLUS (SImode, operands[1],
						negate_rtx (SImode,
							    operands[2]))));
      }
    else
      operands[3] = operands[1];
  }
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NEG (SImode,
	gen_rtx_EQ (SImode,
	operand3,
	const0_rtx))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:12240 */
extern rtx gen_split_1178 (rtx, rtx *);
rtx
gen_split_1178 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
#line 12248 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"
{
    if (GET_CODE (operands[2]) != CONST_INT || INTVAL (operands[2]) != 0)
      {
	/* Use output operand as intermediate.  */
	operands[3] = operands[0];

	if (logical_operand (operands[2], DImode))
	  emit_insn (gen_rtx_SET (VOIDmode, operands[3],
				  gen_rtx_XOR (DImode,
					       operands[1], operands[2])));
	else
	  emit_insn (gen_rtx_SET (VOIDmode, operands[3],
				  gen_rtx_PLUS (DImode, operands[1],
						negate_rtx (DImode,
							    operands[2]))));
      }
    else
      operands[3] = operands[1];
  }
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NEG (DImode,
	gen_rtx_EQ (DImode,
	operand3,
	const0_rtx))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:12332 */
extern rtx gen_split_1179 (rtx, rtx *);
rtx
gen_split_1179 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx _val = 0;
  start_sequence ();
#line 12351 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_PLUS (SImode,
	gen_rtx_LSHIFTRT (SImode,
	gen_rtx_NEG (SImode,
	gen_rtx_ABS (SImode,
	operand1)),
	const_int_rtx[MAX_SAVED_CONST_INT + (31)]),
	operand2)),
		gen_rtx_CLOBBER (VOIDmode,
	operand4))));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_COMPARE (CCmode,
	copy_rtx (operand3),
	const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:12369 */
extern rtx gen_split_1180 (rtx, rtx *);
rtx
gen_split_1180 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
#line 12386 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_PLUS (DImode,
	gen_rtx_LSHIFTRT (DImode,
	gen_rtx_NEG (DImode,
	gen_rtx_ABS (DImode,
	operand1)),
	const_int_rtx[MAX_SAVED_CONST_INT + (63)]),
	operand2)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_COMPARE (CCmode,
	copy_rtx (operand3),
	const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:12407 */
extern rtx gen_split_1181 (rtx, rtx *);
rtx
gen_split_1181 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx _val = 0;
  start_sequence ();
#line 12427 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (SImode,
	gen_rtx_LSHIFTRT (SImode,
	gen_rtx_NEG (SImode,
	gen_rtx_ABS (SImode,
	operand1)),
	const_int_rtx[MAX_SAVED_CONST_INT + (31)]),
	operand2)),
		gen_rtx_CLOBBER (VOIDmode,
	operand3))));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand4,
	gen_rtx_COMPARE (CCmode,
	copy_rtx (operand0),
	const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:12448 */
extern rtx gen_split_1182 (rtx, rtx *);
rtx
gen_split_1182 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx _val = 0;
  start_sequence ();
#line 12468 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (DImode,
	gen_rtx_LSHIFTRT (DImode,
	gen_rtx_NEG (DImode,
	gen_rtx_ABS (DImode,
	operand1)),
	const_int_rtx[MAX_SAVED_CONST_INT + (63)]),
	operand2)),
		gen_rtx_CLOBBER (VOIDmode,
	operand3))));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand4,
	gen_rtx_COMPARE (CCmode,
	copy_rtx (operand0),
	const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:12631 */
extern rtx gen_split_1183 (rtx, rtx *);
rtx
gen_split_1183 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
#line 12645 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_LEU (SImode,
	operand1,
	operand2)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_COMPARE (CCmode,
	copy_rtx (operand0),
	const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:12631 */
extern rtx gen_split_1184 (rtx, rtx *);
rtx
gen_split_1184 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
#line 12645 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_LEU (DImode,
	operand1,
	operand2)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_COMPARE (CCmode,
	copy_rtx (operand0),
	const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:12672 */
extern rtx gen_split_1185 (rtx, rtx *);
rtx
gen_split_1185 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx _val = 0;
  start_sequence ();
#line 12687 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand4,
	gen_rtx_PLUS (SImode,
	gen_rtx_LEU (SImode,
	operand1,
	operand2),
	operand3)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_COMPARE (CCmode,
	copy_rtx (operand4),
	const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:12705 */
extern rtx gen_split_1186 (rtx, rtx *);
rtx
gen_split_1186 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx _val = 0;
  start_sequence ();
#line 12720 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (SImode,
	gen_rtx_LEU (SImode,
	operand1,
	operand2),
	operand3)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand4,
	gen_rtx_COMPARE (CCmode,
	copy_rtx (operand0),
	const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:12758 */
extern rtx gen_split_1187 (rtx, rtx *);
rtx
gen_split_1187 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx _val = 0;
  start_sequence ();
#line 12774 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand4,
	gen_rtx_AND (SImode,
	gen_rtx_NEG (SImode,
	gen_rtx_LEU (SImode,
	operand1,
	operand2)),
	operand3)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_COMPARE (CCmode,
	copy_rtx (operand4),
	const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:12793 */
extern rtx gen_split_1188 (rtx, rtx *);
rtx
gen_split_1188 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx _val = 0;
  start_sequence ();
#line 12810 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_AND (SImode,
	gen_rtx_NEG (SImode,
	gen_rtx_LEU (SImode,
	operand1,
	operand2)),
	operand3)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand4,
	gen_rtx_COMPARE (CCmode,
	copy_rtx (operand0),
	const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:12933 */
extern rtx gen_split_1189 (rtx, rtx *);
rtx
gen_split_1189 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
#line 12942 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NEG (SImode,
	gen_rtx_LTU (SImode,
	operand1,
	operand2))));
  emit_insn (gen_rtx_SET (VOIDmode,
	copy_rtx (operand0),
	gen_rtx_NEG (SImode,
	copy_rtx (operand0))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:12933 */
extern rtx gen_split_1190 (rtx, rtx *);
rtx
gen_split_1190 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
#line 12942 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NEG (DImode,
	gen_rtx_LTU (DImode,
	operand1,
	operand2))));
  emit_insn (gen_rtx_SET (VOIDmode,
	copy_rtx (operand0),
	gen_rtx_NEG (DImode,
	copy_rtx (operand0))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:12944 */
extern rtx gen_split_1191 (rtx, rtx *);
rtx
gen_split_1191 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
#line 12959 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NEG (SImode,
	gen_rtx_LTU (SImode,
	operand1,
	operand2))));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_COMPARE (CCmode,
	gen_rtx_NEG (SImode,
	copy_rtx (operand0)),
	const0_rtx)),
		gen_rtx_SET (VOIDmode,
	copy_rtx (operand0),
	gen_rtx_NEG (SImode,
	copy_rtx (operand0))))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:12944 */
extern rtx gen_split_1192 (rtx, rtx *);
rtx
gen_split_1192 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
#line 12959 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NEG (DImode,
	gen_rtx_LTU (DImode,
	operand1,
	operand2))));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_COMPARE (CCmode,
	gen_rtx_NEG (DImode,
	copy_rtx (operand0)),
	const0_rtx)),
		gen_rtx_SET (VOIDmode,
	copy_rtx (operand0),
	gen_rtx_NEG (DImode,
	copy_rtx (operand0))))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:12961 */
extern rtx gen_split_1193 (rtx, rtx *);
rtx
gen_split_1193 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
#line 12971 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NEG (SImode,
	gen_rtx_LTU (SImode,
	operand1,
	operand2))));
  emit_insn (gen_rtx_SET (VOIDmode,
	copy_rtx (operand0),
	gen_rtx_MINUS (SImode,
	operand3,
	copy_rtx (operand0))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:12961 */
extern rtx gen_split_1194 (rtx, rtx *);
rtx
gen_split_1194 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
#line 12971 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NEG (DImode,
	gen_rtx_LTU (DImode,
	operand1,
	operand2))));
  emit_insn (gen_rtx_SET (VOIDmode,
	copy_rtx (operand0),
	gen_rtx_MINUS (DImode,
	operand3,
	copy_rtx (operand0))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:12973 */
extern rtx gen_split_1195 (rtx, rtx *);
rtx
gen_split_1195 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx _val = 0;
  start_sequence ();
#line 12990 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NEG (SImode,
	gen_rtx_LTU (SImode,
	operand1,
	operand2))));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand4,
	gen_rtx_COMPARE (CCmode,
	gen_rtx_MINUS (SImode,
	operand3,
	copy_rtx (operand0)),
	const0_rtx)),
		gen_rtx_SET (VOIDmode,
	copy_rtx (operand0),
	gen_rtx_MINUS (SImode,
	copy_rtx (operand3),
	copy_rtx (operand0))))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:12973 */
extern rtx gen_split_1196 (rtx, rtx *);
rtx
gen_split_1196 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx _val = 0;
  start_sequence ();
#line 12990 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NEG (DImode,
	gen_rtx_LTU (DImode,
	operand1,
	operand2))));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand4,
	gen_rtx_COMPARE (CCmode,
	gen_rtx_MINUS (DImode,
	operand3,
	copy_rtx (operand0)),
	const0_rtx)),
		gen_rtx_SET (VOIDmode,
	copy_rtx (operand0),
	gen_rtx_MINUS (DImode,
	copy_rtx (operand3),
	copy_rtx (operand0))))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:13156 */
extern rtx gen_split_1197 (rtx, rtx *);
rtx
gen_split_1197 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
#line 13170 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_GEU (SImode,
	operand1,
	operand2)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_COMPARE (CCmode,
	copy_rtx (operand0),
	const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:13156 */
extern rtx gen_split_1198 (rtx, rtx *);
rtx
gen_split_1198 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
#line 13170 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_GEU (DImode,
	operand1,
	operand2)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_COMPARE (CCmode,
	copy_rtx (operand0),
	const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:13201 */
extern rtx gen_split_1199 (rtx, rtx *);
rtx
gen_split_1199 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx _val = 0;
  start_sequence ();
#line 13216 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand4,
	gen_rtx_PLUS (SImode,
	gen_rtx_GEU (SImode,
	operand1,
	operand2),
	operand3)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_COMPARE (CCmode,
	copy_rtx (operand4),
	const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:13236 */
extern rtx gen_split_1200 (rtx, rtx *);
rtx
gen_split_1200 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx _val = 0;
  start_sequence ();
#line 13251 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (SImode,
	gen_rtx_GEU (SImode,
	operand1,
	operand2),
	operand3)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand4,
	gen_rtx_COMPARE (CCmode,
	copy_rtx (operand0),
	const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:13295 */
extern rtx gen_split_1201 (rtx, rtx *);
rtx
gen_split_1201 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx _val = 0;
  start_sequence ();
#line 13311 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand4,
	gen_rtx_AND (SImode,
	gen_rtx_NEG (SImode,
	gen_rtx_GEU (SImode,
	operand1,
	operand2)),
	operand3)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_COMPARE (CCmode,
	copy_rtx (operand4),
	const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:13332 */
extern rtx gen_split_1202 (rtx, rtx *);
rtx
gen_split_1202 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx _val = 0;
  start_sequence ();
#line 13348 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_AND (SImode,
	gen_rtx_NEG (SImode,
	gen_rtx_GEU (SImode,
	operand1,
	operand2)),
	operand3)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand4,
	gen_rtx_COMPARE (CCmode,
	copy_rtx (operand0),
	const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:13414 */
extern rtx gen_split_1203 (rtx, rtx *);
rtx
gen_split_1203 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
#line 13429 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_PLUS (SImode,
	gen_rtx_GT (SImode,
	operand1,
	const0_rtx),
	operand2)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_COMPARE (CCmode,
	copy_rtx (operand3),
	const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:13446 */
extern rtx gen_split_1204 (rtx, rtx *);
rtx
gen_split_1204 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
#line 13461 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_PLUS (DImode,
	gen_rtx_GT (DImode,
	operand1,
	const0_rtx),
	operand2)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_COMPARE (CCmode,
	copy_rtx (operand3),
	const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:13479 */
extern rtx gen_split_1205 (rtx, rtx *);
rtx
gen_split_1205 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
#line 13494 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (SImode,
	gen_rtx_GT (SImode,
	operand1,
	const0_rtx),
	operand2)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_COMPARE (CCmode,
	copy_rtx (operand0),
	const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:13512 */
extern rtx gen_split_1206 (rtx, rtx *);
rtx
gen_split_1206 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
#line 13527 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (DImode,
	gen_rtx_GT (DImode,
	operand1,
	const0_rtx),
	operand2)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_COMPARE (CCmode,
	copy_rtx (operand0),
	const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:13610 */
extern rtx gen_split_1207 (rtx, rtx *);
rtx
gen_split_1207 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
#line 13619 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NEG (SImode,
	gen_rtx_GTU (SImode,
	operand1,
	operand2))));
  emit_insn (gen_rtx_SET (VOIDmode,
	copy_rtx (operand0),
	gen_rtx_NEG (SImode,
	copy_rtx (operand0))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:13610 */
extern rtx gen_split_1208 (rtx, rtx *);
rtx
gen_split_1208 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
#line 13619 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NEG (DImode,
	gen_rtx_GTU (DImode,
	operand1,
	operand2))));
  emit_insn (gen_rtx_SET (VOIDmode,
	copy_rtx (operand0),
	gen_rtx_NEG (DImode,
	copy_rtx (operand0))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:13621 */
extern rtx gen_split_1209 (rtx, rtx *);
rtx
gen_split_1209 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
#line 13636 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NEG (SImode,
	gen_rtx_GTU (SImode,
	operand1,
	operand2))));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_COMPARE (CCmode,
	gen_rtx_NEG (SImode,
	copy_rtx (operand0)),
	const0_rtx)),
		gen_rtx_SET (VOIDmode,
	copy_rtx (operand0),
	gen_rtx_NEG (SImode,
	copy_rtx (operand0))))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:13621 */
extern rtx gen_split_1210 (rtx, rtx *);
rtx
gen_split_1210 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
#line 13636 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NEG (DImode,
	gen_rtx_GTU (DImode,
	operand1,
	operand2))));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_COMPARE (CCmode,
	gen_rtx_NEG (DImode,
	copy_rtx (operand0)),
	const0_rtx)),
		gen_rtx_SET (VOIDmode,
	copy_rtx (operand0),
	gen_rtx_NEG (DImode,
	copy_rtx (operand0))))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:13638 */
extern rtx gen_split_1211 (rtx, rtx *);
rtx
gen_split_1211 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
#line 13648 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NEG (SImode,
	gen_rtx_GTU (SImode,
	operand1,
	operand2))));
  emit_insn (gen_rtx_SET (VOIDmode,
	copy_rtx (operand0),
	gen_rtx_MINUS (SImode,
	operand3,
	copy_rtx (operand0))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:13638 */
extern rtx gen_split_1212 (rtx, rtx *);
rtx
gen_split_1212 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
#line 13648 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NEG (DImode,
	gen_rtx_GTU (DImode,
	operand1,
	operand2))));
  emit_insn (gen_rtx_SET (VOIDmode,
	copy_rtx (operand0),
	gen_rtx_MINUS (DImode,
	operand3,
	copy_rtx (operand0))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:13650 */
extern rtx gen_split_1213 (rtx, rtx *);
rtx
gen_split_1213 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx _val = 0;
  start_sequence ();
#line 13667 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NEG (SImode,
	gen_rtx_GTU (SImode,
	operand1,
	operand2))));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand4,
	gen_rtx_COMPARE (CCmode,
	gen_rtx_MINUS (SImode,
	operand3,
	copy_rtx (operand0)),
	const0_rtx)),
		gen_rtx_SET (VOIDmode,
	copy_rtx (operand0),
	gen_rtx_MINUS (SImode,
	copy_rtx (operand3),
	copy_rtx (operand0))))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:13650 */
extern rtx gen_split_1214 (rtx, rtx *);
rtx
gen_split_1214 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx _val = 0;
  start_sequence ();
#line 13667 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NEG (DImode,
	gen_rtx_GTU (DImode,
	operand1,
	operand2))));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand4,
	gen_rtx_COMPARE (CCmode,
	gen_rtx_MINUS (DImode,
	operand3,
	copy_rtx (operand0)),
	const0_rtx)),
		gen_rtx_SET (VOIDmode,
	copy_rtx (operand0),
	gen_rtx_MINUS (DImode,
	copy_rtx (operand3),
	copy_rtx (operand0))))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:13807 */
extern rtx gen_split_1215 (rtx, rtx *);
rtx
gen_split_1215 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx _val = 0;
  start_sequence ();
#line 13820 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

{
  int positive_1, positive_2;

  positive_1 = branch_positive_comparison_operator (operands[1],
						    GET_MODE (operands[1]));
  positive_2 = branch_positive_comparison_operator (operands[3],
						    GET_MODE (operands[3]));

  if (! positive_1)
    operands[1] = gen_rtx_fmt_ee (rs6000_reverse_condition (GET_MODE (operands[2]),
							    GET_CODE (operands[1])),
				  SImode,
				  operands[2], const0_rtx);
  else if (GET_MODE (operands[1]) != SImode)
    operands[1] = gen_rtx_fmt_ee (GET_CODE (operands[1]), SImode,
				  operands[2], const0_rtx);

  if (! positive_2)
    operands[3] = gen_rtx_fmt_ee (rs6000_reverse_condition (GET_MODE (operands[4]),
							    GET_CODE (operands[3])),
				  SImode,
				  operands[4], const0_rtx);
  else if (GET_MODE (operands[3]) != SImode)
    operands[3] = gen_rtx_fmt_ee (GET_CODE (operands[3]), SImode,
				  operands[4], const0_rtx);

  if (positive_1 == positive_2)
    {
      operands[1] = gen_rtx_NOT (SImode, operands[1]);
      operands[5] = constm1_rtx;
    }
  else
    {
      operands[5] = const1_rtx;
    }
}
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_COMPARE (CCEQmode,
	gen_rtx_XOR (SImode,
	operand1,
	operand3),
	operand5)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:13881 */
rtx
gen_indirect_jump (rtx operand0)
{
  return gen_rtx_SET (VOIDmode,
	pc_rtx,
	operand0);
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:13893 */
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
#line 13897 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

{
  if (TARGET_32BIT)
    emit_jump_insn (gen_tablejumpsi (operands[0], operands[1]));
  else
    emit_jump_insn (gen_tablejumpdi (operands[0], operands[1]));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_USE (VOIDmode,
	operand0));
  emit_insn (gen_rtx_USE (VOIDmode,
	gen_rtx_LABEL_REF (VOIDmode,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:13906 */
rtx
gen_tablejumpsi (rtx operand0,
	rtx operand1)
{
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
#line 13913 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

{ operands[0] = force_reg (SImode, operands[0]);
  operands[2] = force_reg (SImode, gen_rtx_LABEL_REF (SImode, operands[1]));
  operands[3] = gen_reg_rtx (SImode);
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_PLUS (SImode,
	operand0,
	operand2)));
  emit_jump_insn (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	pc_rtx,
	operand3),
		gen_rtx_USE (VOIDmode,
	gen_rtx_LABEL_REF (VOIDmode,
	operand1)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:13919 */
rtx
gen_tablejumpdi (rtx operand0,
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
#line 13928 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

{ operands[2] = force_reg (DImode, gen_rtx_LABEL_REF (DImode, operands[1]));
  operands[3] = gen_reg_rtx (DImode);
  operands[4] = gen_reg_rtx (DImode);
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
    operand4 = operands[4];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand4,
	gen_rtx_SIGN_EXTEND (DImode,
	operand0)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_PLUS (DImode,
	operand4,
	operand2)));
  emit_jump_insn (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	pc_rtx,
	operand3),
		gen_rtx_USE (VOIDmode,
	gen_rtx_LABEL_REF (VOIDmode,
	operand1)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:13952 */
rtx
gen_doloop_end (rtx operand0,
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
#line 13959 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

{
  /* Only use this on innermost loops.  */
  if (INTVAL (operands[3]) > 1)
    FAIL;
  if (TARGET_64BIT)
    {
      if (GET_MODE (operands[0]) != DImode)
	FAIL;
      emit_jump_insn (gen_ctrdi (operands[0], operands[4]));
    }
  else
    {
      if (GET_MODE (operands[0]) != SImode)
	FAIL;
      emit_jump_insn (gen_ctrsi (operands[0], operands[4]));
    }
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
    operand4 = operands[4];
  }
  emit_insn (gen_rtx_USE (VOIDmode,
	operand0));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand1));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand2));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand3));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand4));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:13979 */
rtx
gen_ctrsi (rtx operand0,
	rtx operand1)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	gen_rtx_NE (VOIDmode,
	operand0,
	const1_rtx),
	gen_rtx_LABEL_REF (VOIDmode,
	operand1),
	pc_rtx)),
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (SImode,
	operand0,
	constm1_rtx)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (CCmode)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode))));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:13979 */
rtx
gen_ctrdi (rtx operand0,
	rtx operand1)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	gen_rtx_NE (VOIDmode,
	operand0,
	const1_rtx),
	gen_rtx_LABEL_REF (VOIDmode,
	operand1),
	pc_rtx)),
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (DImode,
	operand0,
	constm1_rtx)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (CCmode)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (DImode))));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:14099 */
extern rtx gen_split_1223 (rtx, rtx *);
rtx
gen_split_1223 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx operand6;
  rtx operand7;
  rtx _val = 0;
  start_sequence ();
#line 14121 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

{ operands[7] = gen_rtx_fmt_ee (GET_CODE (operands[2]), VOIDmode,
				operands[3], const0_rtx); }
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  operand6 = operands[6];
  operand7 = operands[7];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_COMPARE (CCmode,
	gen_rtx_PLUS (SImode,
	operand1,
	constm1_rtx),
	const0_rtx)),
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (SImode,
	copy_rtx (operand1),
	constm1_rtx)))));
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	operand7,
	operand5,
	operand6)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:14099 */
extern rtx gen_split_1224 (rtx, rtx *);
rtx
gen_split_1224 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx operand6;
  rtx operand7;
  rtx _val = 0;
  start_sequence ();
#line 14121 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

{ operands[7] = gen_rtx_fmt_ee (GET_CODE (operands[2]), VOIDmode,
				operands[3], const0_rtx); }
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  operand6 = operands[6];
  operand7 = operands[7];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_COMPARE (CCmode,
	gen_rtx_PLUS (DImode,
	operand1,
	constm1_rtx),
	const0_rtx)),
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (DImode,
	copy_rtx (operand1),
	constm1_rtx)))));
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	operand7,
	operand5,
	operand6)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:14125 */
extern rtx gen_split_1225 (rtx, rtx *);
rtx
gen_split_1225 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx operand6;
  rtx operand7;
  rtx _val = 0;
  start_sequence ();
#line 14149 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

{ operands[7] = gen_rtx_fmt_ee (GET_CODE (operands[2]), VOIDmode,
				operands[3], const0_rtx); }
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  operand6 = operands[6];
  operand7 = operands[7];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_COMPARE (CCmode,
	gen_rtx_PLUS (SImode,
	operand1,
	constm1_rtx),
	const0_rtx)),
		gen_rtx_SET (VOIDmode,
	operand4,
	gen_rtx_PLUS (SImode,
	copy_rtx (operand1),
	constm1_rtx)))));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	copy_rtx (operand4)));
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	operand7,
	operand5,
	operand6)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:14125 */
extern rtx gen_split_1226 (rtx, rtx *);
rtx
gen_split_1226 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx operand6;
  rtx operand7;
  rtx _val = 0;
  start_sequence ();
#line 14149 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

{ operands[7] = gen_rtx_fmt_ee (GET_CODE (operands[2]), VOIDmode,
				operands[3], const0_rtx); }
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  operand6 = operands[6];
  operand7 = operands[7];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_COMPARE (CCmode,
	gen_rtx_PLUS (DImode,
	operand1,
	constm1_rtx),
	const0_rtx)),
		gen_rtx_SET (VOIDmode,
	operand4,
	gen_rtx_PLUS (DImode,
	copy_rtx (operand1),
	constm1_rtx)))));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	copy_rtx (operand4)));
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	operand7,
	operand5,
	operand6)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:14158 */
rtx
gen_conditional_trap (rtx operand0,
	rtx operand1)
{
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
#line 14163 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"
if (rs6000_compare_fp_p || operands[1] != const0_rtx) FAIL;
   operands[2] = rs6000_compare_op0;
   operands[3] = rs6000_compare_op1;
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
  }
  emit_insn (gen_rtx_TRAP_IF (VOIDmode,
	gen_rtx_fmt_ee (GET_CODE (operand0), VOIDmode,
		operand2,
		operand3),
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:14177 */
rtx
gen_prologue (void)
{
  rtx _val = 0;
  start_sequence ();
  {
#line 14180 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

{
      rs6000_emit_prologue ();
      DONE;
}
  }
  emit_insn (gen_rtx_USE (VOIDmode,
	const0_rtx));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:14274 */
rtx
gen_epilogue (void)
{
  rtx _val = 0;
  start_sequence ();
  {
#line 14277 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

{
      rs6000_emit_epilogue (FALSE);
      DONE;
}
  }
  emit_insn (gen_rtx_USE (VOIDmode,
	const0_rtx));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:14287 */
rtx
gen_movsi_to_cr_one (rtx operand0,
	rtx operand1)
{
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
#line 14292 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"
operands[2] = GEN_INT (1 << (75 - REGNO (operands[0])));
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (CCmode,
	gen_rtvec (2,
		operand1,
		operand2),
	20)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:14374 */
rtx
gen_eh_return (rtx operand0)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[1];
    operands[0] = operand0;
#line 14377 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

{
  if (TARGET_32BIT)
    emit_insn (gen_eh_set_lr_si (operands[0]));
  else
    emit_insn (gen_eh_set_lr_di (operands[0]));
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

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:14394 */
extern rtx gen_split_1232 (rtx, rtx *);
rtx
gen_split_1232 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 14399 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

{
  rs6000_emit_eh_reg_restore (operands[0], operands[1]);
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:22 */
rtx
gen_memory_barrier (void)
{
  rtx operand0;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[1];
#line 40 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md"
{
  operands[0] = gen_rtx_MEM (BLKmode, gen_rtx_SCRATCH (Pmode));
  MEM_VOLATILE_P (operands[0]) = 1;
}
    operand0 = operands[0];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (BLKmode,
	operand0),
	gen_rtx_UNSPEC (BLKmode,
	gen_rtvec (1,
		gen_rtx_MEM (BLKmode,
	operand0)),
	37)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:69 */
extern rtx gen_split_1234 (rtx, rtx *);
rtx
gen_split_1234 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 83 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md"
{
  rs6000_split_compare_and_swap (operands[0], operands[1], operands[2],
				 operands[3], operands[4]);
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:69 */
extern rtx gen_split_1235 (rtx, rtx *);
rtx
gen_split_1235 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 83 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md"
{
  rs6000_split_compare_and_swap (operands[0], operands[1], operands[2],
				 operands[3], operands[4]);
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:89 */
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
#line 95 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md"
{
  rs6000_expand_compare_and_swapqhi (operands[0], operands[1],
				     operands[2], operands[3]);
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

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:101 */
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
#line 107 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md"
{
  rs6000_expand_compare_and_swapqhi (operands[0], operands[1],
				     operands[2], operands[3]);
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

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:113 */
extern rtx gen_split_1238 (rtx, rtx *);
rtx
gen_split_1238 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 128 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md"
{
  rs6000_split_compare_and_swapqhi (operands[0], operands[1],
				    operands[2], operands[3], operands[4],
				    operands[5]);
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:135 */
extern rtx gen_split_1239 (rtx, rtx *);
rtx
gen_split_1239 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 148 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md"
{
  rs6000_split_lock_test_and_set (operands[0], operands[1], operands[2],
				  operands[3]);
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:135 */
extern rtx gen_split_1240 (rtx, rtx *);
rtx
gen_split_1240 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 148 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md"
{
  rs6000_split_lock_test_and_set (operands[0], operands[1], operands[2],
				  operands[3]);
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:154 */
rtx
gen_sync_addqi (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 163 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md"

{
  if (QImode != SImode && QImode != DImode)
    {
      if (PPC405_ERRATUM77)
	FAIL;
      rs6000_emit_sync (PLUS, QImode, operands[0], operands[1],
			NULL_RTX, NULL_RTX, true);
      DONE;
    }
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (QImode,
	gen_rtvec (1,
		gen_rtx_PLUS (QImode,
	operand0,
	operand1)),
	41)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (QImode)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (CCmode)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:154 */
rtx
gen_sync_subqi (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 163 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md"

{
  if (QImode != SImode && QImode != DImode)
    {
      if (PPC405_ERRATUM77)
	FAIL;
      rs6000_emit_sync (MINUS, QImode, operands[0], operands[1],
			NULL_RTX, NULL_RTX, true);
      DONE;
    }
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (QImode,
	gen_rtvec (1,
		gen_rtx_MINUS (QImode,
	operand0,
	operand1)),
	41)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (QImode)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (CCmode)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:154 */
rtx
gen_sync_iorqi (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 163 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md"

{
  if (QImode != SImode && QImode != DImode)
    {
      if (PPC405_ERRATUM77)
	FAIL;
      rs6000_emit_sync (IOR, QImode, operands[0], operands[1],
			NULL_RTX, NULL_RTX, true);
      DONE;
    }
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (QImode,
	gen_rtvec (1,
		gen_rtx_IOR (QImode,
	operand0,
	operand1)),
	41)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (QImode)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (CCmode)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:154 */
rtx
gen_sync_xorqi (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 163 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md"

{
  if (QImode != SImode && QImode != DImode)
    {
      if (PPC405_ERRATUM77)
	FAIL;
      rs6000_emit_sync (XOR, QImode, operands[0], operands[1],
			NULL_RTX, NULL_RTX, true);
      DONE;
    }
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (QImode,
	gen_rtvec (1,
		gen_rtx_XOR (QImode,
	operand0,
	operand1)),
	41)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (QImode)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (CCmode)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:154 */
rtx
gen_sync_andqi (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 163 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md"

{
  if (QImode != SImode && QImode != DImode)
    {
      if (PPC405_ERRATUM77)
	FAIL;
      rs6000_emit_sync (AND, QImode, operands[0], operands[1],
			NULL_RTX, NULL_RTX, true);
      DONE;
    }
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (QImode,
	gen_rtvec (1,
		gen_rtx_AND (QImode,
	operand0,
	operand1)),
	41)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (QImode)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (CCmode)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:154 */
rtx
gen_sync_addhi (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 163 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md"

{
  if (HImode != SImode && HImode != DImode)
    {
      if (PPC405_ERRATUM77)
	FAIL;
      rs6000_emit_sync (PLUS, HImode, operands[0], operands[1],
			NULL_RTX, NULL_RTX, true);
      DONE;
    }
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (HImode,
	gen_rtvec (1,
		gen_rtx_PLUS (HImode,
	operand0,
	operand1)),
	41)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (HImode)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (CCmode)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:154 */
rtx
gen_sync_subhi (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 163 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md"

{
  if (HImode != SImode && HImode != DImode)
    {
      if (PPC405_ERRATUM77)
	FAIL;
      rs6000_emit_sync (MINUS, HImode, operands[0], operands[1],
			NULL_RTX, NULL_RTX, true);
      DONE;
    }
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (HImode,
	gen_rtvec (1,
		gen_rtx_MINUS (HImode,
	operand0,
	operand1)),
	41)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (HImode)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (CCmode)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:154 */
rtx
gen_sync_iorhi (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 163 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md"

{
  if (HImode != SImode && HImode != DImode)
    {
      if (PPC405_ERRATUM77)
	FAIL;
      rs6000_emit_sync (IOR, HImode, operands[0], operands[1],
			NULL_RTX, NULL_RTX, true);
      DONE;
    }
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (HImode,
	gen_rtvec (1,
		gen_rtx_IOR (HImode,
	operand0,
	operand1)),
	41)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (HImode)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (CCmode)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:154 */
rtx
gen_sync_xorhi (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 163 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md"

{
  if (HImode != SImode && HImode != DImode)
    {
      if (PPC405_ERRATUM77)
	FAIL;
      rs6000_emit_sync (XOR, HImode, operands[0], operands[1],
			NULL_RTX, NULL_RTX, true);
      DONE;
    }
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (HImode,
	gen_rtvec (1,
		gen_rtx_XOR (HImode,
	operand0,
	operand1)),
	41)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (HImode)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (CCmode)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:154 */
rtx
gen_sync_andhi (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 163 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md"

{
  if (HImode != SImode && HImode != DImode)
    {
      if (PPC405_ERRATUM77)
	FAIL;
      rs6000_emit_sync (AND, HImode, operands[0], operands[1],
			NULL_RTX, NULL_RTX, true);
      DONE;
    }
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (HImode,
	gen_rtvec (1,
		gen_rtx_AND (HImode,
	operand0,
	operand1)),
	41)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (HImode)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (CCmode)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:154 */
rtx
gen_sync_addsi (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 163 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md"

{
  if (SImode != SImode && SImode != DImode)
    {
      if (PPC405_ERRATUM77)
	FAIL;
      rs6000_emit_sync (PLUS, SImode, operands[0], operands[1],
			NULL_RTX, NULL_RTX, true);
      DONE;
    }
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		gen_rtx_PLUS (SImode,
	operand0,
	operand1)),
	41)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (CCmode)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:154 */
rtx
gen_sync_subsi (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 163 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md"

{
  if (SImode != SImode && SImode != DImode)
    {
      if (PPC405_ERRATUM77)
	FAIL;
      rs6000_emit_sync (MINUS, SImode, operands[0], operands[1],
			NULL_RTX, NULL_RTX, true);
      DONE;
    }
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		gen_rtx_MINUS (SImode,
	operand0,
	operand1)),
	41)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (CCmode)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:154 */
rtx
gen_sync_iorsi (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 163 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md"

{
  if (SImode != SImode && SImode != DImode)
    {
      if (PPC405_ERRATUM77)
	FAIL;
      rs6000_emit_sync (IOR, SImode, operands[0], operands[1],
			NULL_RTX, NULL_RTX, true);
      DONE;
    }
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		gen_rtx_IOR (SImode,
	operand0,
	operand1)),
	41)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (CCmode)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:154 */
rtx
gen_sync_xorsi (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 163 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md"

{
  if (SImode != SImode && SImode != DImode)
    {
      if (PPC405_ERRATUM77)
	FAIL;
      rs6000_emit_sync (XOR, SImode, operands[0], operands[1],
			NULL_RTX, NULL_RTX, true);
      DONE;
    }
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		gen_rtx_XOR (SImode,
	operand0,
	operand1)),
	41)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (CCmode)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:154 */
rtx
gen_sync_andsi (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 163 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md"

{
  if (SImode != SImode && SImode != DImode)
    {
      if (PPC405_ERRATUM77)
	FAIL;
      rs6000_emit_sync (AND, SImode, operands[0], operands[1],
			NULL_RTX, NULL_RTX, true);
      DONE;
    }
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		gen_rtx_AND (SImode,
	operand0,
	operand1)),
	41)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (CCmode)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:154 */
rtx
gen_sync_adddi (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 163 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md"

{
  if (DImode != SImode && DImode != DImode)
    {
      if (PPC405_ERRATUM77)
	FAIL;
      rs6000_emit_sync (PLUS, DImode, operands[0], operands[1],
			NULL_RTX, NULL_RTX, true);
      DONE;
    }
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (1,
		gen_rtx_PLUS (DImode,
	operand0,
	operand1)),
	41)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (DImode)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (CCmode)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:154 */
rtx
gen_sync_subdi (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 163 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md"

{
  if (DImode != SImode && DImode != DImode)
    {
      if (PPC405_ERRATUM77)
	FAIL;
      rs6000_emit_sync (MINUS, DImode, operands[0], operands[1],
			NULL_RTX, NULL_RTX, true);
      DONE;
    }
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (1,
		gen_rtx_MINUS (DImode,
	operand0,
	operand1)),
	41)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (DImode)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (CCmode)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:154 */
rtx
gen_sync_iordi (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 163 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md"

{
  if (DImode != SImode && DImode != DImode)
    {
      if (PPC405_ERRATUM77)
	FAIL;
      rs6000_emit_sync (IOR, DImode, operands[0], operands[1],
			NULL_RTX, NULL_RTX, true);
      DONE;
    }
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (1,
		gen_rtx_IOR (DImode,
	operand0,
	operand1)),
	41)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (DImode)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (CCmode)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:154 */
rtx
gen_sync_xordi (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 163 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md"

{
  if (DImode != SImode && DImode != DImode)
    {
      if (PPC405_ERRATUM77)
	FAIL;
      rs6000_emit_sync (XOR, DImode, operands[0], operands[1],
			NULL_RTX, NULL_RTX, true);
      DONE;
    }
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (1,
		gen_rtx_XOR (DImode,
	operand0,
	operand1)),
	41)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (DImode)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (CCmode)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:154 */
rtx
gen_sync_anddi (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 163 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md"

{
  if (DImode != SImode && DImode != DImode)
    {
      if (PPC405_ERRATUM77)
	FAIL;
      rs6000_emit_sync (AND, DImode, operands[0], operands[1],
			NULL_RTX, NULL_RTX, true);
      DONE;
    }
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (1,
		gen_rtx_AND (DImode,
	operand0,
	operand1)),
	41)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (DImode)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (CCmode)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:175 */
extern rtx gen_split_1261 (rtx, rtx *);
rtx
gen_split_1261 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 187 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md"
{
  rs6000_split_atomic_op (PLUS, operands[0], operands[1],
			  NULL_RTX, NULL_RTX, operands[2]);
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:175 */
extern rtx gen_split_1262 (rtx, rtx *);
rtx
gen_split_1262 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 187 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md"
{
  rs6000_split_atomic_op (MINUS, operands[0], operands[1],
			  NULL_RTX, NULL_RTX, operands[2]);
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:175 */
extern rtx gen_split_1263 (rtx, rtx *);
rtx
gen_split_1263 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 187 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md"
{
  rs6000_split_atomic_op (IOR, operands[0], operands[1],
			  NULL_RTX, NULL_RTX, operands[2]);
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:175 */
extern rtx gen_split_1264 (rtx, rtx *);
rtx
gen_split_1264 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 187 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md"
{
  rs6000_split_atomic_op (XOR, operands[0], operands[1],
			  NULL_RTX, NULL_RTX, operands[2]);
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:175 */
extern rtx gen_split_1265 (rtx, rtx *);
rtx
gen_split_1265 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 187 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md"
{
  rs6000_split_atomic_op (AND, operands[0], operands[1],
			  NULL_RTX, NULL_RTX, operands[2]);
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:193 */
extern rtx gen_split_1266 (rtx, rtx *);
rtx
gen_split_1266 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 205 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md"
{
  rs6000_split_atomic_op (PLUS, operands[0], operands[1],
			  NULL_RTX, NULL_RTX, operands[2]);
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:193 */
extern rtx gen_split_1267 (rtx, rtx *);
rtx
gen_split_1267 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 205 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md"
{
  rs6000_split_atomic_op (MINUS, operands[0], operands[1],
			  NULL_RTX, NULL_RTX, operands[2]);
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:193 */
extern rtx gen_split_1268 (rtx, rtx *);
rtx
gen_split_1268 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 205 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md"
{
  rs6000_split_atomic_op (IOR, operands[0], operands[1],
			  NULL_RTX, NULL_RTX, operands[2]);
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:193 */
extern rtx gen_split_1269 (rtx, rtx *);
rtx
gen_split_1269 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 205 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md"
{
  rs6000_split_atomic_op (XOR, operands[0], operands[1],
			  NULL_RTX, NULL_RTX, operands[2]);
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:193 */
extern rtx gen_split_1270 (rtx, rtx *);
rtx
gen_split_1270 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 205 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md"
{
  rs6000_split_atomic_op (AND, operands[0], operands[1],
			  NULL_RTX, NULL_RTX, operands[2]);
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:211 */
rtx
gen_sync_nandqi (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 220 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md"

{
  if (QImode != SImode && QImode != DImode)
    {
      if (PPC405_ERRATUM77)
	FAIL;
      rs6000_emit_sync (AND, QImode,
			gen_rtx_NOT (QImode, operands[0]),
			operands[1],
			NULL_RTX, NULL_RTX, true);
      DONE;
    }
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (QImode,
	gen_rtvec (1,
		gen_rtx_AND (QImode,
	gen_rtx_NOT (QImode,
	operand0),
	operand1)),
	41)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (QImode)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (CCmode)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:211 */
rtx
gen_sync_nandhi (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 220 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md"

{
  if (HImode != SImode && HImode != DImode)
    {
      if (PPC405_ERRATUM77)
	FAIL;
      rs6000_emit_sync (AND, HImode,
			gen_rtx_NOT (HImode, operands[0]),
			operands[1],
			NULL_RTX, NULL_RTX, true);
      DONE;
    }
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (HImode,
	gen_rtvec (1,
		gen_rtx_AND (HImode,
	gen_rtx_NOT (HImode,
	operand0),
	operand1)),
	41)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (HImode)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (CCmode)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:211 */
rtx
gen_sync_nandsi (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 220 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md"

{
  if (SImode != SImode && SImode != DImode)
    {
      if (PPC405_ERRATUM77)
	FAIL;
      rs6000_emit_sync (AND, SImode,
			gen_rtx_NOT (SImode, operands[0]),
			operands[1],
			NULL_RTX, NULL_RTX, true);
      DONE;
    }
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		gen_rtx_AND (SImode,
	gen_rtx_NOT (SImode,
	operand0),
	operand1)),
	41)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (CCmode)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:211 */
rtx
gen_sync_nanddi (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 220 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md"

{
  if (DImode != SImode && DImode != DImode)
    {
      if (PPC405_ERRATUM77)
	FAIL;
      rs6000_emit_sync (AND, DImode,
			gen_rtx_NOT (DImode, operands[0]),
			operands[1],
			NULL_RTX, NULL_RTX, true);
      DONE;
    }
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (1,
		gen_rtx_AND (DImode,
	gen_rtx_NOT (DImode,
	operand0),
	operand1)),
	41)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (DImode)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (CCmode)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:234 */
extern rtx gen_split_1275 (rtx, rtx *);
rtx
gen_split_1275 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 246 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md"
{
  rs6000_split_atomic_op (NOT, operands[0], operands[1],
			  NULL_RTX, NULL_RTX, operands[2]);
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:234 */
extern rtx gen_split_1276 (rtx, rtx *);
rtx
gen_split_1276 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 246 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md"
{
  rs6000_split_atomic_op (NOT, operands[0], operands[1],
			  NULL_RTX, NULL_RTX, operands[2]);
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:252 */
rtx
gen_sync_old_addqi (rtx operand0,
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
#line 263 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md"

{ 
  if (QImode != SImode && QImode != DImode)
    {
      if (PPC405_ERRATUM77)
	FAIL;
      rs6000_emit_sync (PLUS, QImode, operands[1], operands[2],
			operands[0], NULL_RTX, true);
      DONE;
    }
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		gen_rtx_SET (VOIDmode,
	operand0,
	operand1),
		gen_rtx_SET (VOIDmode,
	operand1,
	gen_rtx_UNSPEC (QImode,
	gen_rtvec (1,
		gen_rtx_PLUS (QImode,
	operand1,
	operand2)),
	41)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (QImode)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (CCmode)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:252 */
rtx
gen_sync_old_subqi (rtx operand0,
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
#line 263 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md"

{ 
  if (QImode != SImode && QImode != DImode)
    {
      if (PPC405_ERRATUM77)
	FAIL;
      rs6000_emit_sync (MINUS, QImode, operands[1], operands[2],
			operands[0], NULL_RTX, true);
      DONE;
    }
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		gen_rtx_SET (VOIDmode,
	operand0,
	operand1),
		gen_rtx_SET (VOIDmode,
	operand1,
	gen_rtx_UNSPEC (QImode,
	gen_rtvec (1,
		gen_rtx_MINUS (QImode,
	operand1,
	operand2)),
	41)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (QImode)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (CCmode)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:252 */
rtx
gen_sync_old_iorqi (rtx operand0,
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
#line 263 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md"

{ 
  if (QImode != SImode && QImode != DImode)
    {
      if (PPC405_ERRATUM77)
	FAIL;
      rs6000_emit_sync (IOR, QImode, operands[1], operands[2],
			operands[0], NULL_RTX, true);
      DONE;
    }
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		gen_rtx_SET (VOIDmode,
	operand0,
	operand1),
		gen_rtx_SET (VOIDmode,
	operand1,
	gen_rtx_UNSPEC (QImode,
	gen_rtvec (1,
		gen_rtx_IOR (QImode,
	operand1,
	operand2)),
	41)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (QImode)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (CCmode)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:252 */
rtx
gen_sync_old_xorqi (rtx operand0,
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
#line 263 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md"

{ 
  if (QImode != SImode && QImode != DImode)
    {
      if (PPC405_ERRATUM77)
	FAIL;
      rs6000_emit_sync (XOR, QImode, operands[1], operands[2],
			operands[0], NULL_RTX, true);
      DONE;
    }
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		gen_rtx_SET (VOIDmode,
	operand0,
	operand1),
		gen_rtx_SET (VOIDmode,
	operand1,
	gen_rtx_UNSPEC (QImode,
	gen_rtvec (1,
		gen_rtx_XOR (QImode,
	operand1,
	operand2)),
	41)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (QImode)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (CCmode)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:252 */
rtx
gen_sync_old_andqi (rtx operand0,
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
#line 263 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md"

{ 
  if (QImode != SImode && QImode != DImode)
    {
      if (PPC405_ERRATUM77)
	FAIL;
      rs6000_emit_sync (AND, QImode, operands[1], operands[2],
			operands[0], NULL_RTX, true);
      DONE;
    }
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		gen_rtx_SET (VOIDmode,
	operand0,
	operand1),
		gen_rtx_SET (VOIDmode,
	operand1,
	gen_rtx_UNSPEC (QImode,
	gen_rtvec (1,
		gen_rtx_AND (QImode,
	operand1,
	operand2)),
	41)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (QImode)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (CCmode)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:252 */
rtx
gen_sync_old_addhi (rtx operand0,
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
#line 263 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md"

{ 
  if (HImode != SImode && HImode != DImode)
    {
      if (PPC405_ERRATUM77)
	FAIL;
      rs6000_emit_sync (PLUS, HImode, operands[1], operands[2],
			operands[0], NULL_RTX, true);
      DONE;
    }
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		gen_rtx_SET (VOIDmode,
	operand0,
	operand1),
		gen_rtx_SET (VOIDmode,
	operand1,
	gen_rtx_UNSPEC (HImode,
	gen_rtvec (1,
		gen_rtx_PLUS (HImode,
	operand1,
	operand2)),
	41)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (HImode)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (CCmode)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:252 */
rtx
gen_sync_old_subhi (rtx operand0,
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
#line 263 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md"

{ 
  if (HImode != SImode && HImode != DImode)
    {
      if (PPC405_ERRATUM77)
	FAIL;
      rs6000_emit_sync (MINUS, HImode, operands[1], operands[2],
			operands[0], NULL_RTX, true);
      DONE;
    }
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		gen_rtx_SET (VOIDmode,
	operand0,
	operand1),
		gen_rtx_SET (VOIDmode,
	operand1,
	gen_rtx_UNSPEC (HImode,
	gen_rtvec (1,
		gen_rtx_MINUS (HImode,
	operand1,
	operand2)),
	41)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (HImode)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (CCmode)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:252 */
rtx
gen_sync_old_iorhi (rtx operand0,
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
#line 263 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md"

{ 
  if (HImode != SImode && HImode != DImode)
    {
      if (PPC405_ERRATUM77)
	FAIL;
      rs6000_emit_sync (IOR, HImode, operands[1], operands[2],
			operands[0], NULL_RTX, true);
      DONE;
    }
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		gen_rtx_SET (VOIDmode,
	operand0,
	operand1),
		gen_rtx_SET (VOIDmode,
	operand1,
	gen_rtx_UNSPEC (HImode,
	gen_rtvec (1,
		gen_rtx_IOR (HImode,
	operand1,
	operand2)),
	41)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (HImode)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (CCmode)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:252 */
rtx
gen_sync_old_xorhi (rtx operand0,
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
#line 263 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md"

{ 
  if (HImode != SImode && HImode != DImode)
    {
      if (PPC405_ERRATUM77)
	FAIL;
      rs6000_emit_sync (XOR, HImode, operands[1], operands[2],
			operands[0], NULL_RTX, true);
      DONE;
    }
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		gen_rtx_SET (VOIDmode,
	operand0,
	operand1),
		gen_rtx_SET (VOIDmode,
	operand1,
	gen_rtx_UNSPEC (HImode,
	gen_rtvec (1,
		gen_rtx_XOR (HImode,
	operand1,
	operand2)),
	41)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (HImode)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (CCmode)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:252 */
rtx
gen_sync_old_andhi (rtx operand0,
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
#line 263 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md"

{ 
  if (HImode != SImode && HImode != DImode)
    {
      if (PPC405_ERRATUM77)
	FAIL;
      rs6000_emit_sync (AND, HImode, operands[1], operands[2],
			operands[0], NULL_RTX, true);
      DONE;
    }
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		gen_rtx_SET (VOIDmode,
	operand0,
	operand1),
		gen_rtx_SET (VOIDmode,
	operand1,
	gen_rtx_UNSPEC (HImode,
	gen_rtvec (1,
		gen_rtx_AND (HImode,
	operand1,
	operand2)),
	41)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (HImode)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (CCmode)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:252 */
rtx
gen_sync_old_addsi (rtx operand0,
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
#line 263 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md"

{ 
  if (SImode != SImode && SImode != DImode)
    {
      if (PPC405_ERRATUM77)
	FAIL;
      rs6000_emit_sync (PLUS, SImode, operands[1], operands[2],
			operands[0], NULL_RTX, true);
      DONE;
    }
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		gen_rtx_SET (VOIDmode,
	operand0,
	operand1),
		gen_rtx_SET (VOIDmode,
	operand1,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		gen_rtx_PLUS (SImode,
	operand1,
	operand2)),
	41)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (CCmode)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:252 */
rtx
gen_sync_old_subsi (rtx operand0,
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
#line 263 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md"

{ 
  if (SImode != SImode && SImode != DImode)
    {
      if (PPC405_ERRATUM77)
	FAIL;
      rs6000_emit_sync (MINUS, SImode, operands[1], operands[2],
			operands[0], NULL_RTX, true);
      DONE;
    }
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		gen_rtx_SET (VOIDmode,
	operand0,
	operand1),
		gen_rtx_SET (VOIDmode,
	operand1,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		gen_rtx_MINUS (SImode,
	operand1,
	operand2)),
	41)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (CCmode)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:252 */
rtx
gen_sync_old_iorsi (rtx operand0,
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
#line 263 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md"

{ 
  if (SImode != SImode && SImode != DImode)
    {
      if (PPC405_ERRATUM77)
	FAIL;
      rs6000_emit_sync (IOR, SImode, operands[1], operands[2],
			operands[0], NULL_RTX, true);
      DONE;
    }
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		gen_rtx_SET (VOIDmode,
	operand0,
	operand1),
		gen_rtx_SET (VOIDmode,
	operand1,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		gen_rtx_IOR (SImode,
	operand1,
	operand2)),
	41)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (CCmode)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:252 */
rtx
gen_sync_old_xorsi (rtx operand0,
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
#line 263 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md"

{ 
  if (SImode != SImode && SImode != DImode)
    {
      if (PPC405_ERRATUM77)
	FAIL;
      rs6000_emit_sync (XOR, SImode, operands[1], operands[2],
			operands[0], NULL_RTX, true);
      DONE;
    }
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		gen_rtx_SET (VOIDmode,
	operand0,
	operand1),
		gen_rtx_SET (VOIDmode,
	operand1,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		gen_rtx_XOR (SImode,
	operand1,
	operand2)),
	41)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (CCmode)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:252 */
rtx
gen_sync_old_andsi (rtx operand0,
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
#line 263 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md"

{ 
  if (SImode != SImode && SImode != DImode)
    {
      if (PPC405_ERRATUM77)
	FAIL;
      rs6000_emit_sync (AND, SImode, operands[1], operands[2],
			operands[0], NULL_RTX, true);
      DONE;
    }
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		gen_rtx_SET (VOIDmode,
	operand0,
	operand1),
		gen_rtx_SET (VOIDmode,
	operand1,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		gen_rtx_AND (SImode,
	operand1,
	operand2)),
	41)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (CCmode)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:252 */
rtx
gen_sync_old_adddi (rtx operand0,
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
#line 263 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md"

{ 
  if (DImode != SImode && DImode != DImode)
    {
      if (PPC405_ERRATUM77)
	FAIL;
      rs6000_emit_sync (PLUS, DImode, operands[1], operands[2],
			operands[0], NULL_RTX, true);
      DONE;
    }
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		gen_rtx_SET (VOIDmode,
	operand0,
	operand1),
		gen_rtx_SET (VOIDmode,
	operand1,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (1,
		gen_rtx_PLUS (DImode,
	operand1,
	operand2)),
	41)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (DImode)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (CCmode)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:252 */
rtx
gen_sync_old_subdi (rtx operand0,
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
#line 263 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md"

{ 
  if (DImode != SImode && DImode != DImode)
    {
      if (PPC405_ERRATUM77)
	FAIL;
      rs6000_emit_sync (MINUS, DImode, operands[1], operands[2],
			operands[0], NULL_RTX, true);
      DONE;
    }
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		gen_rtx_SET (VOIDmode,
	operand0,
	operand1),
		gen_rtx_SET (VOIDmode,
	operand1,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (1,
		gen_rtx_MINUS (DImode,
	operand1,
	operand2)),
	41)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (DImode)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (CCmode)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:252 */
rtx
gen_sync_old_iordi (rtx operand0,
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
#line 263 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md"

{ 
  if (DImode != SImode && DImode != DImode)
    {
      if (PPC405_ERRATUM77)
	FAIL;
      rs6000_emit_sync (IOR, DImode, operands[1], operands[2],
			operands[0], NULL_RTX, true);
      DONE;
    }
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		gen_rtx_SET (VOIDmode,
	operand0,
	operand1),
		gen_rtx_SET (VOIDmode,
	operand1,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (1,
		gen_rtx_IOR (DImode,
	operand1,
	operand2)),
	41)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (DImode)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (CCmode)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:252 */
rtx
gen_sync_old_xordi (rtx operand0,
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
#line 263 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md"

{ 
  if (DImode != SImode && DImode != DImode)
    {
      if (PPC405_ERRATUM77)
	FAIL;
      rs6000_emit_sync (XOR, DImode, operands[1], operands[2],
			operands[0], NULL_RTX, true);
      DONE;
    }
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		gen_rtx_SET (VOIDmode,
	operand0,
	operand1),
		gen_rtx_SET (VOIDmode,
	operand1,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (1,
		gen_rtx_XOR (DImode,
	operand1,
	operand2)),
	41)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (DImode)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (CCmode)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:252 */
rtx
gen_sync_old_anddi (rtx operand0,
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
#line 263 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md"

{ 
  if (DImode != SImode && DImode != DImode)
    {
      if (PPC405_ERRATUM77)
	FAIL;
      rs6000_emit_sync (AND, DImode, operands[1], operands[2],
			operands[0], NULL_RTX, true);
      DONE;
    }
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		gen_rtx_SET (VOIDmode,
	operand0,
	operand1),
		gen_rtx_SET (VOIDmode,
	operand1,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (1,
		gen_rtx_AND (DImode,
	operand1,
	operand2)),
	41)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (DImode)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (CCmode)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:275 */
extern rtx gen_split_1297 (rtx, rtx *);
rtx
gen_split_1297 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 289 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md"
{
  rs6000_split_atomic_op (PLUS, operands[1], operands[2],
			  operands[0], NULL_RTX, operands[3]);
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:275 */
extern rtx gen_split_1298 (rtx, rtx *);
rtx
gen_split_1298 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 289 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md"
{
  rs6000_split_atomic_op (MINUS, operands[1], operands[2],
			  operands[0], NULL_RTX, operands[3]);
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:275 */
extern rtx gen_split_1299 (rtx, rtx *);
rtx
gen_split_1299 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 289 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md"
{
  rs6000_split_atomic_op (IOR, operands[1], operands[2],
			  operands[0], NULL_RTX, operands[3]);
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:275 */
extern rtx gen_split_1300 (rtx, rtx *);
rtx
gen_split_1300 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 289 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md"
{
  rs6000_split_atomic_op (XOR, operands[1], operands[2],
			  operands[0], NULL_RTX, operands[3]);
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:275 */
extern rtx gen_split_1301 (rtx, rtx *);
rtx
gen_split_1301 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 289 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md"
{
  rs6000_split_atomic_op (AND, operands[1], operands[2],
			  operands[0], NULL_RTX, operands[3]);
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:295 */
extern rtx gen_split_1302 (rtx, rtx *);
rtx
gen_split_1302 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 309 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md"
{
  rs6000_split_atomic_op (PLUS, operands[1], operands[2],
			  operands[0], NULL_RTX, operands[3]);
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:295 */
extern rtx gen_split_1303 (rtx, rtx *);
rtx
gen_split_1303 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 309 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md"
{
  rs6000_split_atomic_op (MINUS, operands[1], operands[2],
			  operands[0], NULL_RTX, operands[3]);
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:295 */
extern rtx gen_split_1304 (rtx, rtx *);
rtx
gen_split_1304 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 309 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md"
{
  rs6000_split_atomic_op (IOR, operands[1], operands[2],
			  operands[0], NULL_RTX, operands[3]);
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:295 */
extern rtx gen_split_1305 (rtx, rtx *);
rtx
gen_split_1305 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 309 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md"
{
  rs6000_split_atomic_op (XOR, operands[1], operands[2],
			  operands[0], NULL_RTX, operands[3]);
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:295 */
extern rtx gen_split_1306 (rtx, rtx *);
rtx
gen_split_1306 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 309 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md"
{
  rs6000_split_atomic_op (AND, operands[1], operands[2],
			  operands[0], NULL_RTX, operands[3]);
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:315 */
rtx
gen_sync_old_nandqi (rtx operand0,
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
#line 326 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md"

{
  if (QImode != SImode && QImode != DImode)
    {
      if (PPC405_ERRATUM77)
	FAIL;
      rs6000_emit_sync (AND, QImode,
			gen_rtx_NOT (QImode, operands[1]),
			operands[2],
			operands[0], NULL_RTX, true);
      DONE;
    }
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		gen_rtx_SET (VOIDmode,
	operand0,
	operand1),
		gen_rtx_SET (VOIDmode,
	operand1,
	gen_rtx_UNSPEC (QImode,
	gen_rtvec (1,
		gen_rtx_AND (QImode,
	gen_rtx_NOT (QImode,
	operand1),
	operand2)),
	41)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (QImode)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (CCmode)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:315 */
rtx
gen_sync_old_nandhi (rtx operand0,
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
#line 326 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md"

{
  if (HImode != SImode && HImode != DImode)
    {
      if (PPC405_ERRATUM77)
	FAIL;
      rs6000_emit_sync (AND, HImode,
			gen_rtx_NOT (HImode, operands[1]),
			operands[2],
			operands[0], NULL_RTX, true);
      DONE;
    }
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		gen_rtx_SET (VOIDmode,
	operand0,
	operand1),
		gen_rtx_SET (VOIDmode,
	operand1,
	gen_rtx_UNSPEC (HImode,
	gen_rtvec (1,
		gen_rtx_AND (HImode,
	gen_rtx_NOT (HImode,
	operand1),
	operand2)),
	41)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (HImode)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (CCmode)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:315 */
rtx
gen_sync_old_nandsi (rtx operand0,
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
#line 326 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md"

{
  if (SImode != SImode && SImode != DImode)
    {
      if (PPC405_ERRATUM77)
	FAIL;
      rs6000_emit_sync (AND, SImode,
			gen_rtx_NOT (SImode, operands[1]),
			operands[2],
			operands[0], NULL_RTX, true);
      DONE;
    }
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		gen_rtx_SET (VOIDmode,
	operand0,
	operand1),
		gen_rtx_SET (VOIDmode,
	operand1,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		gen_rtx_AND (SImode,
	gen_rtx_NOT (SImode,
	operand1),
	operand2)),
	41)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (CCmode)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:315 */
rtx
gen_sync_old_nanddi (rtx operand0,
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
#line 326 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md"

{
  if (DImode != SImode && DImode != DImode)
    {
      if (PPC405_ERRATUM77)
	FAIL;
      rs6000_emit_sync (AND, DImode,
			gen_rtx_NOT (DImode, operands[1]),
			operands[2],
			operands[0], NULL_RTX, true);
      DONE;
    }
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		gen_rtx_SET (VOIDmode,
	operand0,
	operand1),
		gen_rtx_SET (VOIDmode,
	operand1,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (1,
		gen_rtx_AND (DImode,
	gen_rtx_NOT (DImode,
	operand1),
	operand2)),
	41)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (DImode)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (CCmode)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:340 */
extern rtx gen_split_1311 (rtx, rtx *);
rtx
gen_split_1311 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 354 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md"
{
  rs6000_split_atomic_op (NOT, operands[1], operands[2],
			  operands[0], NULL_RTX, operands[3]);
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:340 */
extern rtx gen_split_1312 (rtx, rtx *);
rtx
gen_split_1312 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 354 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md"
{
  rs6000_split_atomic_op (NOT, operands[1], operands[2],
			  operands[0], NULL_RTX, operands[3]);
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:360 */
rtx
gen_sync_new_addqi (rtx operand0,
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
#line 372 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md"

{
  if (QImode != SImode && QImode != DImode)
    {
      if (PPC405_ERRATUM77)
	FAIL;
      rs6000_emit_sync (PLUS, QImode, operands[1], operands[2],
			NULL_RTX, operands[0], true);
      DONE;
    }
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (QImode,
	operand1,
	operand2)),
		gen_rtx_SET (VOIDmode,
	operand1,
	gen_rtx_UNSPEC (QImode,
	gen_rtvec (1,
		gen_rtx_PLUS (QImode,
	operand1,
	operand2)),
	41)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (QImode)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (CCmode)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:360 */
rtx
gen_sync_new_subqi (rtx operand0,
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
#line 372 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md"

{
  if (QImode != SImode && QImode != DImode)
    {
      if (PPC405_ERRATUM77)
	FAIL;
      rs6000_emit_sync (MINUS, QImode, operands[1], operands[2],
			NULL_RTX, operands[0], true);
      DONE;
    }
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (QImode,
	operand1,
	operand2)),
		gen_rtx_SET (VOIDmode,
	operand1,
	gen_rtx_UNSPEC (QImode,
	gen_rtvec (1,
		gen_rtx_MINUS (QImode,
	operand1,
	operand2)),
	41)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (QImode)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (CCmode)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:360 */
rtx
gen_sync_new_iorqi (rtx operand0,
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
#line 372 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md"

{
  if (QImode != SImode && QImode != DImode)
    {
      if (PPC405_ERRATUM77)
	FAIL;
      rs6000_emit_sync (IOR, QImode, operands[1], operands[2],
			NULL_RTX, operands[0], true);
      DONE;
    }
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IOR (QImode,
	operand1,
	operand2)),
		gen_rtx_SET (VOIDmode,
	operand1,
	gen_rtx_UNSPEC (QImode,
	gen_rtvec (1,
		gen_rtx_IOR (QImode,
	operand1,
	operand2)),
	41)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (QImode)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (CCmode)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:360 */
rtx
gen_sync_new_xorqi (rtx operand0,
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
#line 372 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md"

{
  if (QImode != SImode && QImode != DImode)
    {
      if (PPC405_ERRATUM77)
	FAIL;
      rs6000_emit_sync (XOR, QImode, operands[1], operands[2],
			NULL_RTX, operands[0], true);
      DONE;
    }
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_XOR (QImode,
	operand1,
	operand2)),
		gen_rtx_SET (VOIDmode,
	operand1,
	gen_rtx_UNSPEC (QImode,
	gen_rtvec (1,
		gen_rtx_XOR (QImode,
	operand1,
	operand2)),
	41)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (QImode)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (CCmode)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:360 */
rtx
gen_sync_new_andqi (rtx operand0,
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
#line 372 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md"

{
  if (QImode != SImode && QImode != DImode)
    {
      if (PPC405_ERRATUM77)
	FAIL;
      rs6000_emit_sync (AND, QImode, operands[1], operands[2],
			NULL_RTX, operands[0], true);
      DONE;
    }
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_AND (QImode,
	operand1,
	operand2)),
		gen_rtx_SET (VOIDmode,
	operand1,
	gen_rtx_UNSPEC (QImode,
	gen_rtvec (1,
		gen_rtx_AND (QImode,
	operand1,
	operand2)),
	41)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (QImode)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (CCmode)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:360 */
rtx
gen_sync_new_addhi (rtx operand0,
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
#line 372 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md"

{
  if (HImode != SImode && HImode != DImode)
    {
      if (PPC405_ERRATUM77)
	FAIL;
      rs6000_emit_sync (PLUS, HImode, operands[1], operands[2],
			NULL_RTX, operands[0], true);
      DONE;
    }
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (HImode,
	operand1,
	operand2)),
		gen_rtx_SET (VOIDmode,
	operand1,
	gen_rtx_UNSPEC (HImode,
	gen_rtvec (1,
		gen_rtx_PLUS (HImode,
	operand1,
	operand2)),
	41)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (HImode)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (CCmode)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:360 */
rtx
gen_sync_new_subhi (rtx operand0,
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
#line 372 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md"

{
  if (HImode != SImode && HImode != DImode)
    {
      if (PPC405_ERRATUM77)
	FAIL;
      rs6000_emit_sync (MINUS, HImode, operands[1], operands[2],
			NULL_RTX, operands[0], true);
      DONE;
    }
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (HImode,
	operand1,
	operand2)),
		gen_rtx_SET (VOIDmode,
	operand1,
	gen_rtx_UNSPEC (HImode,
	gen_rtvec (1,
		gen_rtx_MINUS (HImode,
	operand1,
	operand2)),
	41)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (HImode)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (CCmode)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:360 */
rtx
gen_sync_new_iorhi (rtx operand0,
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
#line 372 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md"

{
  if (HImode != SImode && HImode != DImode)
    {
      if (PPC405_ERRATUM77)
	FAIL;
      rs6000_emit_sync (IOR, HImode, operands[1], operands[2],
			NULL_RTX, operands[0], true);
      DONE;
    }
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IOR (HImode,
	operand1,
	operand2)),
		gen_rtx_SET (VOIDmode,
	operand1,
	gen_rtx_UNSPEC (HImode,
	gen_rtvec (1,
		gen_rtx_IOR (HImode,
	operand1,
	operand2)),
	41)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (HImode)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (CCmode)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:360 */
rtx
gen_sync_new_xorhi (rtx operand0,
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
#line 372 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md"

{
  if (HImode != SImode && HImode != DImode)
    {
      if (PPC405_ERRATUM77)
	FAIL;
      rs6000_emit_sync (XOR, HImode, operands[1], operands[2],
			NULL_RTX, operands[0], true);
      DONE;
    }
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_XOR (HImode,
	operand1,
	operand2)),
		gen_rtx_SET (VOIDmode,
	operand1,
	gen_rtx_UNSPEC (HImode,
	gen_rtvec (1,
		gen_rtx_XOR (HImode,
	operand1,
	operand2)),
	41)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (HImode)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (CCmode)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:360 */
rtx
gen_sync_new_andhi (rtx operand0,
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
#line 372 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md"

{
  if (HImode != SImode && HImode != DImode)
    {
      if (PPC405_ERRATUM77)
	FAIL;
      rs6000_emit_sync (AND, HImode, operands[1], operands[2],
			NULL_RTX, operands[0], true);
      DONE;
    }
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_AND (HImode,
	operand1,
	operand2)),
		gen_rtx_SET (VOIDmode,
	operand1,
	gen_rtx_UNSPEC (HImode,
	gen_rtvec (1,
		gen_rtx_AND (HImode,
	operand1,
	operand2)),
	41)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (HImode)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (CCmode)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:360 */
rtx
gen_sync_new_addsi (rtx operand0,
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
#line 372 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md"

{
  if (SImode != SImode && SImode != DImode)
    {
      if (PPC405_ERRATUM77)
	FAIL;
      rs6000_emit_sync (PLUS, SImode, operands[1], operands[2],
			NULL_RTX, operands[0], true);
      DONE;
    }
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (SImode,
	operand1,
	operand2)),
		gen_rtx_SET (VOIDmode,
	operand1,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		gen_rtx_PLUS (SImode,
	operand1,
	operand2)),
	41)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (CCmode)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:360 */
rtx
gen_sync_new_subsi (rtx operand0,
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
#line 372 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md"

{
  if (SImode != SImode && SImode != DImode)
    {
      if (PPC405_ERRATUM77)
	FAIL;
      rs6000_emit_sync (MINUS, SImode, operands[1], operands[2],
			NULL_RTX, operands[0], true);
      DONE;
    }
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (SImode,
	operand1,
	operand2)),
		gen_rtx_SET (VOIDmode,
	operand1,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		gen_rtx_MINUS (SImode,
	operand1,
	operand2)),
	41)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (CCmode)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:360 */
rtx
gen_sync_new_iorsi (rtx operand0,
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
#line 372 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md"

{
  if (SImode != SImode && SImode != DImode)
    {
      if (PPC405_ERRATUM77)
	FAIL;
      rs6000_emit_sync (IOR, SImode, operands[1], operands[2],
			NULL_RTX, operands[0], true);
      DONE;
    }
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IOR (SImode,
	operand1,
	operand2)),
		gen_rtx_SET (VOIDmode,
	operand1,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		gen_rtx_IOR (SImode,
	operand1,
	operand2)),
	41)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (CCmode)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:360 */
rtx
gen_sync_new_xorsi (rtx operand0,
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
#line 372 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md"

{
  if (SImode != SImode && SImode != DImode)
    {
      if (PPC405_ERRATUM77)
	FAIL;
      rs6000_emit_sync (XOR, SImode, operands[1], operands[2],
			NULL_RTX, operands[0], true);
      DONE;
    }
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_XOR (SImode,
	operand1,
	operand2)),
		gen_rtx_SET (VOIDmode,
	operand1,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		gen_rtx_XOR (SImode,
	operand1,
	operand2)),
	41)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (CCmode)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:360 */
rtx
gen_sync_new_andsi (rtx operand0,
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
#line 372 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md"

{
  if (SImode != SImode && SImode != DImode)
    {
      if (PPC405_ERRATUM77)
	FAIL;
      rs6000_emit_sync (AND, SImode, operands[1], operands[2],
			NULL_RTX, operands[0], true);
      DONE;
    }
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_AND (SImode,
	operand1,
	operand2)),
		gen_rtx_SET (VOIDmode,
	operand1,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		gen_rtx_AND (SImode,
	operand1,
	operand2)),
	41)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (CCmode)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:360 */
rtx
gen_sync_new_adddi (rtx operand0,
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
#line 372 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md"

{
  if (DImode != SImode && DImode != DImode)
    {
      if (PPC405_ERRATUM77)
	FAIL;
      rs6000_emit_sync (PLUS, DImode, operands[1], operands[2],
			NULL_RTX, operands[0], true);
      DONE;
    }
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (DImode,
	operand1,
	operand2)),
		gen_rtx_SET (VOIDmode,
	operand1,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (1,
		gen_rtx_PLUS (DImode,
	operand1,
	operand2)),
	41)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (DImode)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (CCmode)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:360 */
rtx
gen_sync_new_subdi (rtx operand0,
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
#line 372 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md"

{
  if (DImode != SImode && DImode != DImode)
    {
      if (PPC405_ERRATUM77)
	FAIL;
      rs6000_emit_sync (MINUS, DImode, operands[1], operands[2],
			NULL_RTX, operands[0], true);
      DONE;
    }
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (DImode,
	operand1,
	operand2)),
		gen_rtx_SET (VOIDmode,
	operand1,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (1,
		gen_rtx_MINUS (DImode,
	operand1,
	operand2)),
	41)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (DImode)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (CCmode)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:360 */
rtx
gen_sync_new_iordi (rtx operand0,
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
#line 372 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md"

{
  if (DImode != SImode && DImode != DImode)
    {
      if (PPC405_ERRATUM77)
	FAIL;
      rs6000_emit_sync (IOR, DImode, operands[1], operands[2],
			NULL_RTX, operands[0], true);
      DONE;
    }
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IOR (DImode,
	operand1,
	operand2)),
		gen_rtx_SET (VOIDmode,
	operand1,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (1,
		gen_rtx_IOR (DImode,
	operand1,
	operand2)),
	41)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (DImode)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (CCmode)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:360 */
rtx
gen_sync_new_xordi (rtx operand0,
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
#line 372 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md"

{
  if (DImode != SImode && DImode != DImode)
    {
      if (PPC405_ERRATUM77)
	FAIL;
      rs6000_emit_sync (XOR, DImode, operands[1], operands[2],
			NULL_RTX, operands[0], true);
      DONE;
    }
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_XOR (DImode,
	operand1,
	operand2)),
		gen_rtx_SET (VOIDmode,
	operand1,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (1,
		gen_rtx_XOR (DImode,
	operand1,
	operand2)),
	41)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (DImode)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (CCmode)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:360 */
rtx
gen_sync_new_anddi (rtx operand0,
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
#line 372 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md"

{
  if (DImode != SImode && DImode != DImode)
    {
      if (PPC405_ERRATUM77)
	FAIL;
      rs6000_emit_sync (AND, DImode, operands[1], operands[2],
			NULL_RTX, operands[0], true);
      DONE;
    }
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_AND (DImode,
	operand1,
	operand2)),
		gen_rtx_SET (VOIDmode,
	operand1,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (1,
		gen_rtx_AND (DImode,
	operand1,
	operand2)),
	41)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (DImode)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (CCmode)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:384 */
extern rtx gen_split_1333 (rtx, rtx *);
rtx
gen_split_1333 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 399 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md"
{
  rs6000_split_atomic_op (PLUS, operands[1], operands[2],
			  NULL_RTX, operands[0], operands[3]);
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:384 */
extern rtx gen_split_1334 (rtx, rtx *);
rtx
gen_split_1334 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 399 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md"
{
  rs6000_split_atomic_op (MINUS, operands[1], operands[2],
			  NULL_RTX, operands[0], operands[3]);
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:384 */
extern rtx gen_split_1335 (rtx, rtx *);
rtx
gen_split_1335 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 399 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md"
{
  rs6000_split_atomic_op (IOR, operands[1], operands[2],
			  NULL_RTX, operands[0], operands[3]);
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:384 */
extern rtx gen_split_1336 (rtx, rtx *);
rtx
gen_split_1336 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 399 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md"
{
  rs6000_split_atomic_op (XOR, operands[1], operands[2],
			  NULL_RTX, operands[0], operands[3]);
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:384 */
extern rtx gen_split_1337 (rtx, rtx *);
rtx
gen_split_1337 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 399 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md"
{
  rs6000_split_atomic_op (AND, operands[1], operands[2],
			  NULL_RTX, operands[0], operands[3]);
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:405 */
extern rtx gen_split_1338 (rtx, rtx *);
rtx
gen_split_1338 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 420 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md"
{
  rs6000_split_atomic_op (PLUS, operands[1], operands[2],
			  NULL_RTX, operands[0], operands[3]);
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:405 */
extern rtx gen_split_1339 (rtx, rtx *);
rtx
gen_split_1339 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 420 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md"
{
  rs6000_split_atomic_op (MINUS, operands[1], operands[2],
			  NULL_RTX, operands[0], operands[3]);
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:405 */
extern rtx gen_split_1340 (rtx, rtx *);
rtx
gen_split_1340 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 420 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md"
{
  rs6000_split_atomic_op (IOR, operands[1], operands[2],
			  NULL_RTX, operands[0], operands[3]);
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:405 */
extern rtx gen_split_1341 (rtx, rtx *);
rtx
gen_split_1341 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 420 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md"
{
  rs6000_split_atomic_op (XOR, operands[1], operands[2],
			  NULL_RTX, operands[0], operands[3]);
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:405 */
extern rtx gen_split_1342 (rtx, rtx *);
rtx
gen_split_1342 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 420 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md"
{
  rs6000_split_atomic_op (AND, operands[1], operands[2],
			  NULL_RTX, operands[0], operands[3]);
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:426 */
rtx
gen_sync_new_nandqi (rtx operand0,
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
#line 438 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md"

{
  if (QImode != SImode && QImode != DImode)
    {
      if (PPC405_ERRATUM77)
	FAIL;
      rs6000_emit_sync (AND, QImode,
			gen_rtx_NOT (QImode, operands[1]),
			operands[2],
			NULL_RTX, operands[0], true);
      DONE;
    }
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_AND (QImode,
	gen_rtx_NOT (QImode,
	operand1),
	operand2)),
		gen_rtx_SET (VOIDmode,
	operand1,
	gen_rtx_UNSPEC (QImode,
	gen_rtvec (1,
		gen_rtx_AND (QImode,
	gen_rtx_NOT (QImode,
	operand1),
	operand2)),
	41)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (QImode)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (CCmode)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:426 */
rtx
gen_sync_new_nandhi (rtx operand0,
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
#line 438 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md"

{
  if (HImode != SImode && HImode != DImode)
    {
      if (PPC405_ERRATUM77)
	FAIL;
      rs6000_emit_sync (AND, HImode,
			gen_rtx_NOT (HImode, operands[1]),
			operands[2],
			NULL_RTX, operands[0], true);
      DONE;
    }
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_AND (HImode,
	gen_rtx_NOT (HImode,
	operand1),
	operand2)),
		gen_rtx_SET (VOIDmode,
	operand1,
	gen_rtx_UNSPEC (HImode,
	gen_rtvec (1,
		gen_rtx_AND (HImode,
	gen_rtx_NOT (HImode,
	operand1),
	operand2)),
	41)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (HImode)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (CCmode)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:426 */
rtx
gen_sync_new_nandsi (rtx operand0,
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
#line 438 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md"

{
  if (SImode != SImode && SImode != DImode)
    {
      if (PPC405_ERRATUM77)
	FAIL;
      rs6000_emit_sync (AND, SImode,
			gen_rtx_NOT (SImode, operands[1]),
			operands[2],
			NULL_RTX, operands[0], true);
      DONE;
    }
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_AND (SImode,
	gen_rtx_NOT (SImode,
	operand1),
	operand2)),
		gen_rtx_SET (VOIDmode,
	operand1,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		gen_rtx_AND (SImode,
	gen_rtx_NOT (SImode,
	operand1),
	operand2)),
	41)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (CCmode)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:426 */
rtx
gen_sync_new_nanddi (rtx operand0,
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
#line 438 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md"

{
  if (DImode != SImode && DImode != DImode)
    {
      if (PPC405_ERRATUM77)
	FAIL;
      rs6000_emit_sync (AND, DImode,
			gen_rtx_NOT (DImode, operands[1]),
			operands[2],
			NULL_RTX, operands[0], true);
      DONE;
    }
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_AND (DImode,
	gen_rtx_NOT (DImode,
	operand1),
	operand2)),
		gen_rtx_SET (VOIDmode,
	operand1,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (1,
		gen_rtx_AND (DImode,
	gen_rtx_NOT (DImode,
	operand1),
	operand2)),
	41)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (DImode)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (CCmode)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:452 */
extern rtx gen_split_1347 (rtx, rtx *);
rtx
gen_split_1347 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 467 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md"
{
  rs6000_split_atomic_op (NOT, operands[1], operands[2],
			  NULL_RTX, operands[0], operands[3]);
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:452 */
extern rtx gen_split_1348 (rtx, rtx *);
rtx
gen_split_1348 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 467 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md"
{
  rs6000_split_atomic_op (NOT, operands[1], operands[2],
			  NULL_RTX, operands[0], operands[3]);
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:602 */
rtx
gen_sync_lock_releaseqi (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 606 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md"

{
  emit_insn (gen_lwsync ());
  emit_move_insn (operands[0], operands[1]);
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

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:602 */
rtx
gen_sync_lock_releasehi (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 606 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md"

{
  emit_insn (gen_lwsync ());
  emit_move_insn (operands[0], operands[1]);
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

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:602 */
rtx
gen_sync_lock_releasesi (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 606 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md"

{
  emit_insn (gen_lwsync ());
  emit_move_insn (operands[0], operands[1]);
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

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:602 */
rtx
gen_sync_lock_releasedi (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 606 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md"

{
  emit_insn (gen_lwsync ());
  emit_move_insn (operands[0], operands[1]);
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

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:602 */
rtx
gen_sync_lock_releaseti (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 606 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md"

{
  emit_insn (gen_lwsync ());
  emit_move_insn (operands[0], operands[1]);
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

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:165 */
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
#line 169 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md"
{
  rs6000_emit_move (operands[0], operands[1], V4SImode);
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

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:165 */
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
#line 169 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md"
{
  rs6000_emit_move (operands[0], operands[1], V8HImode);
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

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:165 */
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
#line 169 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md"
{
  rs6000_emit_move (operands[0], operands[1], V16QImode);
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

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:165 */
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
#line 169 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md"
{
  rs6000_emit_move (operands[0], operands[1], V4SFmode);
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

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:195 */
extern rtx gen_split_1358 (rtx, rtx *);
rtx
gen_split_1358 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 201 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md"
{
  rs6000_split_multireg_move (operands[0], operands[1]); DONE;
}
  emit_insn (pc_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:205 */
extern rtx gen_split_1359 (rtx, rtx *);
rtx
gen_split_1359 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 211 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md"
{ rs6000_split_multireg_move (operands[0], operands[1]); DONE; }
  emit_insn (pc_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:213 */
extern rtx gen_split_1360 (rtx, rtx *);
rtx
gen_split_1360 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 219 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md"
{ rs6000_split_multireg_move (operands[0], operands[1]); DONE; }
  emit_insn (pc_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:221 */
extern rtx gen_split_1361 (rtx, rtx *);
rtx
gen_split_1361 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 227 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md"
{
  rs6000_split_multireg_move (operands[0], operands[1]); DONE;
}
  emit_insn (pc_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:231 */
extern rtx gen_split_1362 (rtx, rtx *);
rtx
gen_split_1362 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
#line 238 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md"
{
  rtx dup = gen_easy_altivec_constant (operands[1]);
  rtx const_vec;

  /* Divide the operand of the resulting VEC_DUPLICATE, and use
     simplify_rtx to make a CONST_VECTOR.  */
  XEXP (dup, 0) = simplify_const_binary_operation (ASHIFTRT, QImode,
						   XEXP (dup, 0), const1_rtx);
  const_vec = simplify_rtx (dup);

  if (GET_MODE (const_vec) == V4SImode)
    operands[3] = const_vec;
  else
    operands[3] = gen_lowpart (V4SImode, const_vec);
}
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand3));
  emit_insn (gen_rtx_SET (VOIDmode,
	copy_rtx (operand0),
	gen_rtx_PLUS (V4SImode,
	copy_rtx (operand0),
	copy_rtx (operand0))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:231 */
extern rtx gen_split_1363 (rtx, rtx *);
rtx
gen_split_1363 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
#line 238 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md"
{
  rtx dup = gen_easy_altivec_constant (operands[1]);
  rtx const_vec;

  /* Divide the operand of the resulting VEC_DUPLICATE, and use
     simplify_rtx to make a CONST_VECTOR.  */
  XEXP (dup, 0) = simplify_const_binary_operation (ASHIFTRT, QImode,
						   XEXP (dup, 0), const1_rtx);
  const_vec = simplify_rtx (dup);

  if (GET_MODE (const_vec) == V8HImode)
    operands[3] = const_vec;
  else
    operands[3] = gen_lowpart (V8HImode, const_vec);
}
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand3));
  emit_insn (gen_rtx_SET (VOIDmode,
	copy_rtx (operand0),
	gen_rtx_PLUS (V8HImode,
	copy_rtx (operand0),
	copy_rtx (operand0))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:231 */
extern rtx gen_split_1364 (rtx, rtx *);
rtx
gen_split_1364 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
#line 238 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md"
{
  rtx dup = gen_easy_altivec_constant (operands[1]);
  rtx const_vec;

  /* Divide the operand of the resulting VEC_DUPLICATE, and use
     simplify_rtx to make a CONST_VECTOR.  */
  XEXP (dup, 0) = simplify_const_binary_operation (ASHIFTRT, QImode,
						   XEXP (dup, 0), const1_rtx);
  const_vec = simplify_rtx (dup);

  if (GET_MODE (const_vec) == V16QImode)
    operands[3] = const_vec;
  else
    operands[3] = gen_lowpart (V16QImode, const_vec);
}
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand3));
  emit_insn (gen_rtx_SET (VOIDmode,
	copy_rtx (operand0),
	gen_rtx_PLUS (V16QImode,
	copy_rtx (operand0),
	copy_rtx (operand0))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:540 */
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
#line 545 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md"

{
  rtx neg0;

  /* Generate [-0.0, -0.0, -0.0, -0.0].  */
  neg0 = gen_reg_rtx (V4SImode);
  emit_insn (gen_altivec_vspltisw (neg0, constm1_rtx));
  emit_insn (gen_altivec_vslw (neg0, neg0, neg0));

  /* Use the multiply-add.  */
  emit_insn (gen_altivec_vmaddfp (operands[0], operands[1], operands[2],
				  gen_lowpart (V4SFmode, neg0)));
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

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:571 */
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
#line 576 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md"

 {
   rtx zero;
   rtx swap;
   rtx small_swap;
   rtx sixteen;
   rtx one;
   rtx two;
   rtx low_product;
   rtx high_product;
       
   zero = gen_reg_rtx (V4SImode);
   emit_insn (gen_altivec_vspltisw (zero, const0_rtx));
 
   sixteen = gen_reg_rtx (V4SImode);   
   emit_insn (gen_altivec_vspltisw (sixteen,  gen_rtx_CONST_INT (V4SImode, -16)));
 
   swap = gen_reg_rtx (V4SImode);
   emit_insn (gen_altivec_vrlw (swap, operands[2], sixteen));
 
   one = gen_reg_rtx (V8HImode);
   convert_move (one, operands[1], 0);
 
   two = gen_reg_rtx (V8HImode);
   convert_move (two, operands[2], 0);
 
   small_swap = gen_reg_rtx (V8HImode);
   convert_move (small_swap, swap, 0);
 
   low_product = gen_reg_rtx (V4SImode);
   emit_insn (gen_altivec_vmulouh (low_product, one, two));
 
   high_product = gen_reg_rtx (V4SImode);
   emit_insn (gen_altivec_vmsumuhm (high_product, one, small_swap, zero));
 
   emit_insn (gen_altivec_vslw (high_product, high_product, sixteen));
 
   emit_insn (gen_addv4si3 (operands[0], high_product, low_product));
   
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

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1423 */
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
#line 1432 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md"

{
	if (rs6000_emit_vector_cond_expr (operands[0], operands[1], operands[2],
					  operands[3], operands[4], operands[5]))
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
	gen_rtx_UNSPEC (V4SImode,
	gen_rtvec (5,
		operand1,
		operand2,
		operand3,
		operand4,
		operand5),
	301)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1442 */
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
#line 1451 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md"

{
	if (rs6000_emit_vector_cond_expr (operands[0], operands[1], operands[2],
					  operands[3], operands[4], operands[5]))
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
	gen_rtx_UNSPEC (V4SImode,
	gen_rtvec (5,
		operand1,
		operand2,
		operand3,
		operand4,
		operand5),
	305)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1461 */
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
#line 1470 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md"

{
	if (rs6000_emit_vector_cond_expr (operands[0], operands[1], operands[2],
					  operands[3], operands[4], operands[5]))
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
	gen_rtx_UNSPEC (V4SFmode,
	gen_rtvec (5,
		operand1,
		operand2,
		operand3,
		operand4,
		operand5),
	302)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1480 */
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
#line 1489 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md"

{
	if (rs6000_emit_vector_cond_expr (operands[0], operands[1], operands[2],
					  operands[3], operands[4], operands[5]))
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
	gen_rtx_UNSPEC (V8HImode,
	gen_rtvec (5,
		operand1,
		operand2,
		operand3,
		operand4,
		operand5),
	303)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1499 */
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
#line 1508 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md"

{
	if (rs6000_emit_vector_cond_expr (operands[0], operands[1], operands[2],
					  operands[3], operands[4], operands[5]))
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
	gen_rtx_UNSPEC (V8HImode,
	gen_rtvec (5,
		operand1,
		operand2,
		operand3,
		operand4,
		operand5),
	306)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1518 */
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
#line 1527 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md"

{
	if (rs6000_emit_vector_cond_expr (operands[0], operands[1], operands[2],
					  operands[3], operands[4], operands[5]))
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
	gen_rtx_UNSPEC (V16QImode,
	gen_rtvec (5,
		operand1,
		operand2,
		operand3,
		operand4,
		operand5),
	304)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1537 */
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
#line 1546 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md"

{
	if (rs6000_emit_vector_cond_expr (operands[0], operands[1], operands[2],
					  operands[3], operands[4], operands[5]))
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
	gen_rtx_UNSPEC (V16QImode,
	gen_rtvec (5,
		operand1,
		operand2,
		operand3,
		operand4,
		operand5),
	307)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1657 */
rtx
gen_cr6_test_for_zero (rtx operand0)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_EQ (SImode,
	gen_rtx_REG (CCmode,
	74),
	const0_rtx));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1664 */
rtx
gen_cr6_test_for_zero_reverse (rtx operand0)
{
  rtx _val = 0;
  start_sequence ();
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_EQ (SImode,
	gen_rtx_REG (CCmode,
	74),
	const0_rtx)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (SImode,
	const1_rtx,
	operand0)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1672 */
rtx
gen_cr6_test_for_lt (rtx operand0)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_LT (SImode,
	gen_rtx_REG (CCmode,
	74),
	const0_rtx));
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1679 */
rtx
gen_cr6_test_for_lt_reverse (rtx operand0)
{
  rtx _val = 0;
  start_sequence ();
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_LT (SImode,
	gen_rtx_REG (CCmode,
	74),
	const0_rtx)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (SImode,
	const1_rtx,
	operand0)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1897 */
rtx
gen_build_vector_mask_for_load (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 1901 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md"

{ 
  rtx addr;
  rtx temp;

  gcc_assert (GET_CODE (operands[1]) == MEM);

  addr = XEXP (operands[1], 0);
  temp = gen_reg_rtx (GET_MODE (addr));
  emit_insn (gen_rtx_SET (VOIDmode, temp, 
			  gen_rtx_NEG (GET_MODE (addr), addr)));
  emit_insn (gen_altivec_lvsr (operands[0], 
			       replace_equiv_address (operands[1], temp)));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V16QImode,
	gen_rtvec (1,
		operand1),
	195)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1992 */
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
#line 1996 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md"
{
  rs6000_expand_vector_init (operands[0], operands[1]);
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

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1992 */
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
#line 1996 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md"
{
  rs6000_expand_vector_init (operands[0], operands[1]);
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

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1992 */
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
#line 1996 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md"
{
  rs6000_expand_vector_init (operands[0], operands[1]);
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

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1992 */
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
#line 1996 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md"
{
  rs6000_expand_vector_init (operands[0], operands[1]);
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

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:2001 */
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
#line 2006 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md"
{
  rs6000_expand_vector_set (operands[0], operands[1], INTVAL (operands[2]));
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

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:2011 */
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
#line 2016 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md"
{
  rs6000_expand_vector_set (operands[0], operands[1], INTVAL (operands[2]));
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

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:2021 */
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
#line 2026 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md"
{
  rs6000_expand_vector_set (operands[0], operands[1], INTVAL (operands[2]));
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

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:2031 */
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
#line 2036 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md"
{
  rs6000_expand_vector_set (operands[0], operands[1], INTVAL (operands[2]));
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

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:2041 */
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
#line 2046 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md"
{
  rs6000_expand_vector_extract (operands[0], operands[1], INTVAL (operands[2]));
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

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:2051 */
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
#line 2056 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md"
{
  rs6000_expand_vector_extract (operands[0], operands[1], INTVAL (operands[2]));
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

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:2061 */
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
#line 2066 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md"
{
  rs6000_expand_vector_extract (operands[0], operands[1], INTVAL (operands[2]));
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

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:2071 */
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
#line 2076 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md"
{
  rs6000_expand_vector_extract (operands[0], operands[1], INTVAL (operands[2]));
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

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:2085 */
rtx
gen_absv4si2 (rtx operand0,
	rtx operand1)
{
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
#line 2093 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md"
{
  operands[2] = gen_reg_rtx (GET_MODE (operands[0]));
  operands[3] = gen_reg_rtx (GET_MODE (operands[0]));
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_VEC_DUPLICATE (V4SImode,
	const0_rtx)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_MINUS (V4SImode,
	operand2,
	operand1)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SMAX (V4SImode,
	operand1,
	operand3)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:2085 */
rtx
gen_absv8hi2 (rtx operand0,
	rtx operand1)
{
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
#line 2093 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md"
{
  operands[2] = gen_reg_rtx (GET_MODE (operands[0]));
  operands[3] = gen_reg_rtx (GET_MODE (operands[0]));
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_VEC_DUPLICATE (V8HImode,
	const0_rtx)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_MINUS (V8HImode,
	operand2,
	operand1)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SMAX (V8HImode,
	operand1,
	operand3)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:2085 */
rtx
gen_absv16qi2 (rtx operand0,
	rtx operand1)
{
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
#line 2093 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md"
{
  operands[2] = gen_reg_rtx (GET_MODE (operands[0]));
  operands[3] = gen_reg_rtx (GET_MODE (operands[0]));
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_VEC_DUPLICATE (V16QImode,
	const0_rtx)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_MINUS (V16QImode,
	operand2,
	operand1)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SMAX (V16QImode,
	operand1,
	operand3)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:2102 */
rtx
gen_absv4sf2 (rtx operand0,
	rtx operand1)
{
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
#line 2111 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md"
{
  operands[2] = gen_reg_rtx (V4SImode);
  operands[3] = gen_reg_rtx (V4SImode);
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_VEC_DUPLICATE (V4SImode,
	constm1_rtx)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_UNSPEC (V4SImode,
	gen_rtvec (2,
		operand2,
		operand2),
	107)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_AND (V4SFmode,
	gen_rtx_NOT (V4SFmode,
	gen_rtx_SUBREG (V4SFmode,
	operand3,
	0)),
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:2120 */
rtx
gen_altivec_abss_v4si (rtx operand0,
	rtx operand1)
{
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
#line 2130 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md"
{
  operands[2] = gen_reg_rtx (GET_MODE (operands[0]));
  operands[3] = gen_reg_rtx (GET_MODE (operands[0]));
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_VEC_DUPLICATE (V4SImode,
	const0_rtx)));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_UNSPEC (V4SImode,
	gen_rtvec (2,
		operand2,
		operand1),
	126)),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (SImode,
	110),
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		const0_rtx),
	213)))));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SMAX (V4SImode,
	operand1,
	operand3)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:2120 */
rtx
gen_altivec_abss_v8hi (rtx operand0,
	rtx operand1)
{
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
#line 2130 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md"
{
  operands[2] = gen_reg_rtx (GET_MODE (operands[0]));
  operands[3] = gen_reg_rtx (GET_MODE (operands[0]));
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_VEC_DUPLICATE (V8HImode,
	const0_rtx)));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_UNSPEC (V8HImode,
	gen_rtvec (2,
		operand2,
		operand1),
	126)),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (SImode,
	110),
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		const0_rtx),
	213)))));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SMAX (V8HImode,
	operand1,
	operand3)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:2120 */
rtx
gen_altivec_abss_v16qi (rtx operand0,
	rtx operand1)
{
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
#line 2130 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md"
{
  operands[2] = gen_reg_rtx (GET_MODE (operands[0]));
  operands[3] = gen_reg_rtx (GET_MODE (operands[0]));
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_VEC_DUPLICATE (V16QImode,
	const0_rtx)));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_UNSPEC (V16QImode,
	gen_rtvec (2,
		operand2,
		operand1),
	126)),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (SImode,
	110),
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		const0_rtx),
	213)))));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SMAX (V16QImode,
	operand1,
	operand3)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:2140 */
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
#line 2146 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md"

{
  rtx bitshift = operands[2];
  rtx byteshift = gen_reg_rtx (QImode);
  HOST_WIDE_INT bitshift_val;
  HOST_WIDE_INT byteshift_val;

  if (! CONSTANT_P (bitshift))
    FAIL;
  bitshift_val = INTVAL (bitshift);
  if (bitshift_val & 0x7)
    FAIL;
  byteshift_val = bitshift_val >> 3;
  byteshift = gen_rtx_CONST_INT (QImode, byteshift_val);
  emit_insn (gen_altivec_vsldoi_v4si (operands[0], operands[1], operands[1],
                                        byteshift));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V4SImode,
	gen_rtvec (2,
		operand1,
		operand2),
	219)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:2140 */
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
#line 2146 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md"

{
  rtx bitshift = operands[2];
  rtx byteshift = gen_reg_rtx (QImode);
  HOST_WIDE_INT bitshift_val;
  HOST_WIDE_INT byteshift_val;

  if (! CONSTANT_P (bitshift))
    FAIL;
  bitshift_val = INTVAL (bitshift);
  if (bitshift_val & 0x7)
    FAIL;
  byteshift_val = bitshift_val >> 3;
  byteshift = gen_rtx_CONST_INT (QImode, byteshift_val);
  emit_insn (gen_altivec_vsldoi_v8hi (operands[0], operands[1], operands[1],
                                        byteshift));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V8HImode,
	gen_rtvec (2,
		operand1,
		operand2),
	219)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:2140 */
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
#line 2146 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md"

{
  rtx bitshift = operands[2];
  rtx byteshift = gen_reg_rtx (QImode);
  HOST_WIDE_INT bitshift_val;
  HOST_WIDE_INT byteshift_val;

  if (! CONSTANT_P (bitshift))
    FAIL;
  bitshift_val = INTVAL (bitshift);
  if (bitshift_val & 0x7)
    FAIL;
  byteshift_val = bitshift_val >> 3;
  byteshift = gen_rtx_CONST_INT (QImode, byteshift_val);
  emit_insn (gen_altivec_vsldoi_v16qi (operands[0], operands[1], operands[1],
                                        byteshift));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V16QImode,
	gen_rtvec (2,
		operand1,
		operand2),
	219)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:2140 */
rtx
gen_vec_shl_v4sf (rtx operand0,
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
#line 2146 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md"

{
  rtx bitshift = operands[2];
  rtx byteshift = gen_reg_rtx (QImode);
  HOST_WIDE_INT bitshift_val;
  HOST_WIDE_INT byteshift_val;

  if (! CONSTANT_P (bitshift))
    FAIL;
  bitshift_val = INTVAL (bitshift);
  if (bitshift_val & 0x7)
    FAIL;
  byteshift_val = bitshift_val >> 3;
  byteshift = gen_rtx_CONST_INT (QImode, byteshift_val);
  emit_insn (gen_altivec_vsldoi_v4sf (operands[0], operands[1], operands[1],
                                        byteshift));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V4SFmode,
	gen_rtvec (2,
		operand1,
		operand2),
	219)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:2170 */
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
#line 2176 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md"

{
  rtx bitshift = operands[2];
  rtx byteshift = gen_reg_rtx (QImode);
  HOST_WIDE_INT bitshift_val;
  HOST_WIDE_INT byteshift_val;
 
  if (! CONSTANT_P (bitshift))
    FAIL;
  bitshift_val = INTVAL (bitshift);
  if (bitshift_val & 0x7)
    FAIL;
  byteshift_val = 16 - (bitshift_val >> 3);
  byteshift = gen_rtx_CONST_INT (QImode, byteshift_val);
  emit_insn (gen_altivec_vsldoi_v4si (operands[0], operands[1], operands[1],
                                        byteshift));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V4SImode,
	gen_rtvec (2,
		operand1,
		operand2),
	219)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:2170 */
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
#line 2176 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md"

{
  rtx bitshift = operands[2];
  rtx byteshift = gen_reg_rtx (QImode);
  HOST_WIDE_INT bitshift_val;
  HOST_WIDE_INT byteshift_val;
 
  if (! CONSTANT_P (bitshift))
    FAIL;
  bitshift_val = INTVAL (bitshift);
  if (bitshift_val & 0x7)
    FAIL;
  byteshift_val = 16 - (bitshift_val >> 3);
  byteshift = gen_rtx_CONST_INT (QImode, byteshift_val);
  emit_insn (gen_altivec_vsldoi_v8hi (operands[0], operands[1], operands[1],
                                        byteshift));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V8HImode,
	gen_rtvec (2,
		operand1,
		operand2),
	219)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:2170 */
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
#line 2176 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md"

{
  rtx bitshift = operands[2];
  rtx byteshift = gen_reg_rtx (QImode);
  HOST_WIDE_INT bitshift_val;
  HOST_WIDE_INT byteshift_val;
 
  if (! CONSTANT_P (bitshift))
    FAIL;
  bitshift_val = INTVAL (bitshift);
  if (bitshift_val & 0x7)
    FAIL;
  byteshift_val = 16 - (bitshift_val >> 3);
  byteshift = gen_rtx_CONST_INT (QImode, byteshift_val);
  emit_insn (gen_altivec_vsldoi_v16qi (operands[0], operands[1], operands[1],
                                        byteshift));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V16QImode,
	gen_rtvec (2,
		operand1,
		operand2),
	219)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:2170 */
rtx
gen_vec_shr_v4sf (rtx operand0,
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
#line 2176 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md"

{
  rtx bitshift = operands[2];
  rtx byteshift = gen_reg_rtx (QImode);
  HOST_WIDE_INT bitshift_val;
  HOST_WIDE_INT byteshift_val;
 
  if (! CONSTANT_P (bitshift))
    FAIL;
  bitshift_val = INTVAL (bitshift);
  if (bitshift_val & 0x7)
    FAIL;
  byteshift_val = 16 - (bitshift_val >> 3);
  byteshift = gen_rtx_CONST_INT (QImode, byteshift_val);
  emit_insn (gen_altivec_vsldoi_v4sf (operands[0], operands[1], operands[1],
                                        byteshift));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V4SFmode,
	gen_rtvec (2,
		operand1,
		operand2),
	219)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:2205 */
rtx
gen_reduc_splus_v8hi (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 2210 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md"

{ 
  rtx vzero = gen_reg_rtx (V4SImode);
  rtx vtmp1 = gen_reg_rtx (V4SImode);

  emit_insn (gen_altivec_vspltisw (vzero, const0_rtx));
  emit_insn (gen_altivec_vsum4shs (vtmp1, operands[1], vzero));
  emit_insn (gen_altivec_vsumsws_nomode (operands[0], vtmp1, vzero));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V8HImode,
	gen_rtvec (1,
		operand1),
	217)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:2205 */
rtx
gen_reduc_splus_v16qi (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 2210 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md"

{ 
  rtx vzero = gen_reg_rtx (V4SImode);
  rtx vtmp1 = gen_reg_rtx (V4SImode);

  emit_insn (gen_altivec_vspltisw (vzero, const0_rtx));
  emit_insn (gen_altivec_vsum4sbs (vtmp1, operands[1], vzero));
  emit_insn (gen_altivec_vsumsws_nomode (operands[0], vtmp1, vzero));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V16QImode,
	gen_rtvec (1,
		operand1),
	217)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:2221 */
rtx
gen_reduc_uplus_v16qi (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 2226 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md"

{
  rtx vzero = gen_reg_rtx (V4SImode);
  rtx vtmp1 = gen_reg_rtx (V4SImode);

  emit_insn (gen_altivec_vspltisw (vzero, const0_rtx));
  emit_insn (gen_altivec_vsum4ubs (vtmp1, operands[1], vzero));
  emit_insn (gen_altivec_vsumsws_nomode (operands[0], vtmp1, vzero));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V16QImode,
	gen_rtvec (1,
		operand1),
	217)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:2247 */
rtx
gen_negv4si2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 2251 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md"

{
  rtx vzero;

  vzero = gen_reg_rtx (GET_MODE (operands[0]));
  emit_insn (gen_altivec_vspltisw (vzero, const0_rtx));
  emit_insn (gen_subv4si3 (operands[0], vzero, operands[1])); 
  
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

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:2247 */
rtx
gen_negv8hi2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 2251 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md"

{
  rtx vzero;

  vzero = gen_reg_rtx (GET_MODE (operands[0]));
  emit_insn (gen_altivec_vspltish (vzero, const0_rtx));
  emit_insn (gen_subv8hi3 (operands[0], vzero, operands[1])); 
  
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

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:2247 */
rtx
gen_negv16qi2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 2251 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md"

{
  rtx vzero;

  vzero = gen_reg_rtx (GET_MODE (operands[0]));
  emit_insn (gen_altivec_vspltisb (vzero, const0_rtx));
  emit_insn (gen_subv16qi3 (operands[0], vzero, operands[1])); 
  
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

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:2262 */
rtx
gen_udot_prodv8hi (rtx operand0,
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
#line 2269 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md"

{  
  emit_insn (gen_altivec_vmsumuhm (operands[0], operands[1], operands[2], operands[3]));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (V4SImode,
	operand3,
	gen_rtx_UNSPEC (V4SImode,
	gen_rtvec (2,
		operand1,
		operand2),
	65))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:2262 */
rtx
gen_udot_prodv16qi (rtx operand0,
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
#line 2269 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md"

{  
  emit_insn (gen_altivec_vmsumubm (operands[0], operands[1], operands[2], operands[3]));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (V4SImode,
	operand3,
	gen_rtx_UNSPEC (V4SImode,
	gen_rtvec (2,
		operand1,
		operand2),
	65))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:2275 */
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
#line 2282 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md"

{
  emit_insn (gen_altivec_vmsumshm (operands[0], operands[1], operands[2], operands[3]));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (V4SImode,
	operand3,
	gen_rtx_UNSPEC (V4SImode,
	gen_rtvec (2,
		operand1,
		operand2),
	68))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:2288 */
rtx
gen_widen_usumv8hi3 (rtx operand0,
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
#line 2294 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md"

{
  rtx vones = gen_reg_rtx (GET_MODE (operands[1]));

  emit_insn (gen_altivec_vspltish (vones, const1_rtx));
  emit_insn (gen_altivec_vmsumuhm (operands[0], operands[1], vones, operands[2]));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (V4SImode,
	operand2,
	gen_rtx_UNSPEC (V4SImode,
	gen_rtvec (1,
		operand1),
	65))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:2288 */
rtx
gen_widen_usumv16qi3 (rtx operand0,
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
#line 2294 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md"

{
  rtx vones = gen_reg_rtx (GET_MODE (operands[1]));

  emit_insn (gen_altivec_vspltisb (vones, const1_rtx));
  emit_insn (gen_altivec_vmsumubm (operands[0], operands[1], vones, operands[2]));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (V4SImode,
	operand2,
	gen_rtx_UNSPEC (V4SImode,
	gen_rtvec (1,
		operand1),
	65))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:2303 */
rtx
gen_widen_ssumv16qi3 (rtx operand0,
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
#line 2309 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md"

{
  rtx vones = gen_reg_rtx (V16QImode);

  emit_insn (gen_altivec_vspltisb (vones, const1_rtx));
  emit_insn (gen_altivec_vmsummbm (operands[0], operands[1], vones, operands[2]));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (V4SImode,
	operand2,
	gen_rtx_UNSPEC (V4SImode,
	gen_rtvec (1,
		operand1),
	66))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:2318 */
rtx
gen_widen_ssumv8hi3 (rtx operand0,
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
#line 2324 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md"

{
  rtx vones = gen_reg_rtx (V8HImode);

  emit_insn (gen_altivec_vspltish (vones, const1_rtx));
  emit_insn (gen_altivec_vmsumshm (operands[0], operands[1], vones, operands[2]));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (V4SImode,
	operand2,
	gen_rtx_UNSPEC (V4SImode,
	gen_rtvec (1,
		operand1),
	68))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:2333 */
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
#line 2337 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md"

{
  rtx neg0;

  /* Generate [-0.0, -0.0, -0.0, -0.0].  */
  neg0 = gen_reg_rtx (V4SImode);
  emit_insn (gen_altivec_vspltisw (neg0, constm1_rtx));
  emit_insn (gen_altivec_vslw (neg0, neg0, neg0));

  /* XOR */
  emit_insn (gen_xorv4sf3 (operands[0],
			   gen_lowpart (V4SFmode, neg0), operands[1])); 
    
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



void
add_clobbers (rtx pattern ATTRIBUTE_UNUSED, int insn_code_number)
{
  switch (insn_code_number)
    {
    case 798:
      XVECEXP (pattern, 0, 1) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (V4SFmode));
      break;

    case 611:
    case 610:
    case 609:
      XVECEXP (pattern, 0, 3) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (CCmode));
      break;

    case 608:
    case 607:
      XVECEXP (pattern, 0, 3) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (CCmode));
      XVECEXP (pattern, 0, 4) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode));
      break;

    case 604:
    case 602:
    case 601:
    case 600:
    case 599:
    case 598:
    case 592:
    case 590:
    case 589:
    case 588:
    case 587:
    case 586:
    case 568:
    case 565:
      XVECEXP (pattern, 0, 2) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (DImode));
      XVECEXP (pattern, 0, 3) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (CCmode));
      break;

    case 603:
    case 597:
    case 596:
    case 595:
    case 594:
    case 593:
    case 591:
    case 585:
    case 584:
    case 583:
    case 582:
    case 581:
    case 567:
    case 566:
    case 564:
      XVECEXP (pattern, 0, 2) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode));
      XVECEXP (pattern, 0, 3) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (CCmode));
      break;

    case 538:
    case 536:
    case 534:
    case 532:
      XVECEXP (pattern, 0, 2) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (CCmode));
      XVECEXP (pattern, 0, 3) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (DImode));
      break;

    case 537:
    case 535:
    case 533:
    case 531:
      XVECEXP (pattern, 0, 2) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (CCmode));
      XVECEXP (pattern, 0, 3) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode));
      break;

    case 458:
      XVECEXP (pattern, 0, 1) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode));
      XVECEXP (pattern, 0, 2) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode));
      break;

    case 437:
      XVECEXP (pattern, 0, 1) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (DFmode));
      XVECEXP (pattern, 0, 2) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (DFmode));
      XVECEXP (pattern, 0, 3) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (DFmode));
      XVECEXP (pattern, 0, 4) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (DFmode));
      XVECEXP (pattern, 0, 5) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (DFmode));
      XVECEXP (pattern, 0, 6) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (DFmode));
      XVECEXP (pattern, 0, 7) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (DFmode));
      XVECEXP (pattern, 0, 8) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (DFmode));
      break;

    case 461:
    case 427:
      XVECEXP (pattern, 0, 2) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (DImode));
      break;

    case 378:
    case 377:
      XVECEXP (pattern, 0, 3) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode));
      XVECEXP (pattern, 0, 4) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode));
      break;

    case 376:
      XVECEXP (pattern, 0, 3) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (DImode));
      XVECEXP (pattern, 0, 4) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode));
      break;

    case 375:
    case 374:
      XVECEXP (pattern, 0, 4) = gen_hard_reg_clobber (SImode, 6);
      XVECEXP (pattern, 0, 5) = gen_hard_reg_clobber (SImode, 7);
      XVECEXP (pattern, 0, 6) = gen_hard_reg_clobber (SImode, 8);
      XVECEXP (pattern, 0, 7) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode));
      break;

    case 373:
    case 372:
      XVECEXP (pattern, 0, 4) = gen_hard_reg_clobber (SImode, 6);
      XVECEXP (pattern, 0, 5) = gen_hard_reg_clobber (SImode, 7);
      XVECEXP (pattern, 0, 6) = gen_hard_reg_clobber (SImode, 8);
      XVECEXP (pattern, 0, 7) = gen_hard_reg_clobber (SImode, 9);
      XVECEXP (pattern, 0, 8) = gen_hard_reg_clobber (SImode, 10);
      XVECEXP (pattern, 0, 9) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode));
      break;

    case 371:
    case 370:
      XVECEXP (pattern, 0, 4) = gen_hard_reg_clobber (SImode, 6);
      XVECEXP (pattern, 0, 5) = gen_hard_reg_clobber (SImode, 7);
      XVECEXP (pattern, 0, 6) = gen_hard_reg_clobber (SImode, 8);
      XVECEXP (pattern, 0, 7) = gen_hard_reg_clobber (SImode, 9);
      XVECEXP (pattern, 0, 8) = gen_hard_reg_clobber (SImode, 10);
      XVECEXP (pattern, 0, 9) = gen_hard_reg_clobber (SImode, 11);
      XVECEXP (pattern, 0, 10) = gen_hard_reg_clobber (SImode, 12);
      XVECEXP (pattern, 0, 11) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode));
      break;

    case 580:
    case 578:
    case 577:
    case 576:
    case 575:
    case 574:
    case 321:
      XVECEXP (pattern, 0, 1) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (DImode));
      XVECEXP (pattern, 0, 2) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (CCmode));
      break;

    case 350:
    case 273:
      XVECEXP (pattern, 0, 1) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (DFmode));
      break;

    case 322:
    case 156:
    case 155:
      XVECEXP (pattern, 0, 2) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (CCmode));
      break;

    case 579:
    case 573:
    case 572:
    case 571:
    case 570:
    case 569:
    case 154:
    case 153:
      XVECEXP (pattern, 0, 1) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode));
      XVECEXP (pattern, 0, 2) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (CCmode));
      break;

    case 320:
    case 152:
      XVECEXP (pattern, 0, 1) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (CCmode));
      break;

    case 151:
      XVECEXP (pattern, 0, 1) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode));
      XVECEXP (pattern, 0, 2) = gen_hard_reg_clobber (SImode, 0);
      XVECEXP (pattern, 0, 3) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (CCmode));
      XVECEXP (pattern, 0, 4) = gen_hard_reg_clobber (CCmode, 69);
      break;

    case 149:
      XVECEXP (pattern, 0, 2) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode));
      XVECEXP (pattern, 0, 3) = gen_hard_reg_clobber (SImode, 0);
      XVECEXP (pattern, 0, 4) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (CCmode));
      XVECEXP (pattern, 0, 5) = gen_hard_reg_clobber (CCmode, 69);
      break;

    case 148:
      XVECEXP (pattern, 0, 2) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode));
      XVECEXP (pattern, 0, 3) = gen_hard_reg_clobber (SImode, 0);
      break;

    case 147:
      XVECEXP (pattern, 0, 1) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode));
      XVECEXP (pattern, 0, 2) = gen_hard_reg_clobber (SImode, 0);
      break;

    case 62:
    case 59:
      XVECEXP (pattern, 0, 1) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (HImode));
      break;

    case 556:
    case 502:
    case 498:
    case 492:
    case 474:
    case 468:
    case 456:
    case 454:
    case 448:
    case 214:
    case 211:
    case 208:
    case 205:
    case 202:
    case 199:
    case 196:
    case 193:
    case 190:
    case 187:
    case 184:
    case 178:
    case 165:
    case 162:
    case 159:
    case 150:
    case 146:
    case 142:
    case 134:
    case 127:
    case 124:
    case 123:
    case 118:
    case 117:
    case 110:
    case 104:
    case 68:
    case 65:
    case 56:
    case 53:
      XVECEXP (pattern, 0, 1) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode));
      break;

    case 557:
    case 503:
    case 459:
    case 457:
    case 455:
    case 330:
    case 327:
    case 324:
    case 318:
    case 315:
    case 312:
    case 309:
    case 306:
    case 303:
    case 300:
    case 297:
    case 294:
    case 291:
    case 286:
    case 284:
    case 283:
    case 181:
    case 143:
    case 128:
    case 119:
    case 111:
    case 105:
    case 50:
    case 47:
    case 44:
    case 39:
    case 38:
    case 37:
      XVECEXP (pattern, 0, 1) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (DImode));
      break;

    case 460:
    case 426:
    case 411:
    case 410:
    case 409:
    case 408:
    case 407:
    case 406:
    case 405:
    case 404:
    case 403:
    case 402:
    case 401:
    case 400:
    case 25:
    case 24:
    case 23:
    case 22:
      XVECEXP (pattern, 0, 2) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode));
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
    case 798:
    case 611:
    case 610:
    case 609:
    case 608:
    case 607:
    case 604:
    case 602:
    case 601:
    case 600:
    case 599:
    case 598:
    case 592:
    case 590:
    case 589:
    case 588:
    case 587:
    case 586:
    case 568:
    case 565:
    case 603:
    case 597:
    case 596:
    case 595:
    case 594:
    case 593:
    case 591:
    case 585:
    case 584:
    case 583:
    case 582:
    case 581:
    case 567:
    case 566:
    case 564:
    case 538:
    case 536:
    case 534:
    case 532:
    case 537:
    case 535:
    case 533:
    case 531:
    case 458:
    case 437:
    case 461:
    case 427:
    case 378:
    case 377:
    case 376:
    case 580:
    case 578:
    case 577:
    case 576:
    case 575:
    case 574:
    case 321:
    case 350:
    case 273:
    case 322:
    case 156:
    case 155:
    case 579:
    case 573:
    case 572:
    case 571:
    case 570:
    case 569:
    case 154:
    case 153:
    case 320:
    case 152:
    case 62:
    case 59:
    case 556:
    case 502:
    case 498:
    case 492:
    case 474:
    case 468:
    case 456:
    case 454:
    case 448:
    case 214:
    case 211:
    case 208:
    case 205:
    case 202:
    case 199:
    case 196:
    case 193:
    case 190:
    case 187:
    case 184:
    case 178:
    case 165:
    case 162:
    case 159:
    case 150:
    case 146:
    case 142:
    case 134:
    case 127:
    case 124:
    case 123:
    case 118:
    case 117:
    case 110:
    case 104:
    case 68:
    case 65:
    case 56:
    case 53:
    case 557:
    case 503:
    case 459:
    case 457:
    case 455:
    case 330:
    case 327:
    case 324:
    case 318:
    case 315:
    case 312:
    case 309:
    case 306:
    case 303:
    case 300:
    case 297:
    case 294:
    case 291:
    case 286:
    case 284:
    case 283:
    case 181:
    case 143:
    case 128:
    case 119:
    case 111:
    case 105:
    case 50:
    case 47:
    case 44:
    case 39:
    case 38:
    case 37:
    case 460:
    case 426:
    case 411:
    case 410:
    case 409:
    case 408:
    case 407:
    case 406:
    case 405:
    case 404:
    case 403:
    case 402:
    case 401:
    case 400:
    case 25:
    case 24:
    case 23:
    case 22:
      return 0;

    case 375:
    case 374:
    case 373:
    case 372:
    case 371:
    case 370:
    case 151:
    case 149:
    case 148:
    case 147:
      return 1;

    default:
      gcc_unreachable ();
    }
}
