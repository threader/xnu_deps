/* Generated automatically by the program `genoutput'
   from the machine description file `md'.  */

#include "config.h"
#include "system.h"
#include "coretypes.h"
#include "tm.h"
#include "flags.h"
#include "ggc.h"
#include "rtl.h"
#include "expr.h"
#include "insn-codes.h"
#include "tm_p.h"
#include "function.h"
#include "regs.h"
#include "hard-reg-set.h"
#include "real.h"
#include "insn-config.h"

#include "conditions.h"
#include "insn-attr.h"

#include "recog.h"

#include "toplev.h"
#include "output.h"
#include "target.h"
#include "tm-constrs.h"

static const char *
output_1 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 35 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/darwin.md"

{
  switch (which_alternative)
    {
      case 0:
	return "lfd %0,lo16(%2)(%1)";
      case 1:
	{
	  if (TARGET_POWERPC64 && TARGET_32BIT)
	    /* Note, old assemblers didn't support relocation here.  */
	    return "ld %0,lo16(%2)(%1)";
	  else
	    {
	      output_asm_insn ("{cal|la} %0,lo16(%2)(%1)", operands);
	      output_asm_insn ("{l|lwz} %L0,4(%0)", operands);
	      return ("{l|lwz} %0,0(%0)");
	    }
	}
      default:
	gcc_unreachable ();
    }
}
}

static const char *
output_2 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 66 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/darwin.md"

{
  switch (which_alternative)
    {
      case 0:
	return "lfd %0,lo16(%2)(%1)";
      case 1:
	return "ld %0,lo16(%2)(%1)";
      default:
	gcc_unreachable ();
    }
}
}

static const char * const output_5[] = {
  "lfs %0,lo16(%2)(%1)",
  "{l|lwz} %0,lo16(%2)(%1)",
};

static const char * const output_6[] = {
  "lfs %0,lo16(%2)(%1)",
  "{l|lwz} %0,lo16(%2)(%1)",
};

static const char * const output_7[] = {
  "stfs %0,lo16(%2)(%1)",
  "{st|stw} %0,lo16(%2)(%1)",
};

static const char * const output_8[] = {
  "stfs %0,lo16(%2)(%1)",
  "{st|stw} %0,lo16(%2)(%1)",
};

static const char * const output_14[] = {
  "{cal %0,%a2@l(%1)|la %0,lo16(%2)(%1)}",
  "{cal %0,%a2@l(%1)|addic %0,%1,lo16(%2)}",
};

static const char * const output_15[] = {
  "{cal %0,%a2@l(%1)|la %0,lo16(%2)(%1)}",
  "{cal %0,%a2@l(%1)|addic %0,%1,lo16(%2)}",
};

static const char *
output_22 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 351 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/darwin.md"
{
  return "b%T0l";
}
}

static const char *
output_23 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 364 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/darwin.md"
{
#if TARGET_MACHO
  return output_call(insn, operands, 0, 2);
#else
  gcc_unreachable ();
#endif
}
}

static const char *
output_24 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 381 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/darwin.md"
{
  return "b%T1l";
}
}

static const char *
output_25 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 395 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/darwin.md"
{
#if TARGET_MACHO
  return output_call(insn, operands, 1, 3);
#else
  gcc_unreachable ();
#endif
}
}

static const char *
output_26 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 413 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/darwin.md"
{
  return "b %z0";
}
}

static const char *
output_27 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 428 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/darwin.md"

{
  return "b %z1";
}
}

static const char *
output_28 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 443 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/darwin.md"

{
  switch (which_alternative)
    {
      case 0:  return "b %z0";
      case 1:  return "b%T0";
      default:  gcc_unreachable ();
    }
}
}

static const char *
output_29 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 463 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/darwin.md"

{
  switch (which_alternative)
    {
      case 0:  return "b %z1";
      case 1:  return "b%T1";
      default:  gcc_unreachable ();
    }
}
}

static const char *
output_30 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 484 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/darwin.md"

#if TARGET_MACHO
  const char *picbase = machopic_function_base_name ();
  operands[3] = gen_rtx_SYMBOL_REF (Pmode, ggc_alloc_string (picbase, -1));
#endif
  return "bl %z2\n%3:";

}

static const char *
output_33 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 523 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/darwin.md"

#if TARGET_MACHO
  const char *picbase = machopic_function_base_name ();
  operands[3] = gen_rtx_SYMBOL_REF (Pmode, ggc_alloc_string (picbase, -1));
#endif
  return "bl %z2\n%3:";

}

static const char * const output_34[] = {
  "lbz%U1%X1 %0,%1",
  "rldicl %0,%1,0,56",
};

static const char * const output_35[] = {
  "lhz%U1%X1 %0,%1",
  "rldicl %0,%1,0,48",
};

static const char * const output_36[] = {
  "lwz%U1%X1 %0,%1",
  "rldicl %0,%1,0,32",
};

static const char * const output_37[] = {
  "rldicl. %2,%1,0,56",
  "#",
};

static const char * const output_38[] = {
  "rldicl. %2,%1,0,48",
  "#",
};

static const char * const output_39[] = {
  "rldicl. %2,%1,0,32",
  "#",
};

static const char * const output_40[] = {
  "rldicl. %0,%1,0,56",
  "#",
};

static const char * const output_41[] = {
  "rldicl. %0,%1,0,48",
  "#",
};

static const char * const output_42[] = {
  "rldicl. %0,%1,0,32",
  "#",
};

static const char * const output_44[] = {
  "extsb. %2,%1",
  "#",
};

static const char * const output_45[] = {
  "extsb. %0,%1",
  "#",
};

static const char * const output_46[] = {
  "lha%U1%X1 %0,%1",
  "extsh %0,%1",
};

static const char * const output_47[] = {
  "extsh. %2,%1",
  "#",
};

static const char * const output_48[] = {
  "extsh. %0,%1",
  "#",
};

static const char * const output_49[] = {
  "lwa%U1%X1 %0,%1",
  "extsw %0,%1",
};

static const char * const output_50[] = {
  "extsw. %2,%1",
  "#",
};

static const char * const output_51[] = {
  "extsw. %0,%1",
  "#",
};

static const char * const output_52[] = {
  "lbz%U1%X1 %0,%1",
  "{rlinm|rlwinm} %0,%1,0,0xff",
};

static const char * const output_53[] = {
  "{andil.|andi.} %2,%1,0xff",
  "#",
};

static const char * const output_54[] = {
  "{andil.|andi.} %0,%1,0xff",
  "#",
};

static const char * const output_56[] = {
  "extsb. %2,%1",
  "#",
};

static const char * const output_57[] = {
  "extsb. %0,%1",
  "#",
};

static const char * const output_58[] = {
  "lbz%U1%X1 %0,%1",
  "{rlinm|rlwinm} %0,%1,0,0xff",
};

static const char * const output_59[] = {
  "{andil.|andi.} %2,%1,0xff",
  "#",
};

static const char * const output_60[] = {
  "{andil.|andi.} %0,%1,0xff",
  "#",
};

static const char * const output_62[] = {
  "extsb. %2,%1",
  "#",
};

static const char * const output_63[] = {
  "extsb. %0,%1",
  "#",
};

static const char * const output_64[] = {
  "lhz%U1%X1 %0,%1",
  "{rlinm|rlwinm} %0,%1,0,0xffff",
};

static const char * const output_65[] = {
  "{andil.|andi.} %2,%1,0xffff",
  "#",
};

static const char * const output_66[] = {
  "{andil.|andi.} %0,%1,0xffff",
  "#",
};

static const char * const output_67[] = {
  "lha%U1%X1 %0,%1",
  "{exts|extsh} %0,%1",
};

static const char * const output_68[] = {
  "{exts.|extsh.} %2,%1",
  "#",
};

static const char * const output_69[] = {
  "{exts.|extsh.} %0,%1",
  "#",
};

static const char * const output_101[] = {
  "{cax|add} %0,%1,%2",
  "{cal %0,%2(%1)|addi %0,%1,%2}",
  "{ai|addic} %0,%1,%2",
  "{cau|addis} %0,%1,%v2",
};

static const char * const output_102[] = {
  "{cax|add} %0,%1,%2",
  "{cal %0,%2(%1)|addi %0,%1,%2}",
  "{ai|addic} %0,%1,%2",
  "{cau|addis} %0,%1,%v2",
};

static const char * const output_104[] = {
  "{cax.|add.} %3,%1,%2",
  "{ai.|addic.} %3,%1,%2",
  "#",
  "#",
};

static const char * const output_105[] = {
  "{cax.|add.} %3,%1,%2",
  "{ai.|addic.} %3,%1,%2",
  "#",
  "#",
};

static const char * const output_106[] = {
  "{cax.|add.} %0,%1,%2",
  "{ai.|addic.} %0,%1,%2",
  "#",
  "#",
};

static const char * const output_107[] = {
  "{cax.|add.} %0,%1,%2",
  "{ai.|addic.} %0,%1,%2",
  "#",
  "#",
};

static const char * const output_110[] = {
  "nor. %2,%1,%1",
  "#",
};

static const char * const output_111[] = {
  "nor. %2,%1,%1",
  "#",
};

static const char * const output_112[] = {
  "nor. %0,%1,%1",
  "#",
};

static const char * const output_113[] = {
  "nor. %0,%1,%1",
  "#",
};

static const char * const output_115[] = {
  "subf %0,%2,%1",
  "subfic %0,%2,%1",
};

static const char * const output_116[] = {
  "subf %0,%2,%1",
  "subfic %0,%2,%1",
};

static const char * const output_117[] = {
  "{sf.|subfc.} %3,%2,%1",
  "#",
};

static const char * const output_118[] = {
  "subf. %3,%2,%1",
  "#",
};

static const char * const output_119[] = {
  "subf. %3,%2,%1",
  "#",
};

static const char * const output_120[] = {
  "{sf.|subfc.} %0,%2,%1",
  "#",
};

static const char * const output_121[] = {
  "subf. %0,%2,%1",
  "#",
};

static const char * const output_122[] = {
  "subf. %0,%2,%1",
  "#",
};

static const char * const output_127[] = {
  "neg. %2,%1",
  "#",
};

static const char * const output_128[] = {
  "neg. %2,%1",
  "#",
};

static const char * const output_129[] = {
  "neg. %0,%1",
  "#",
};

static const char * const output_130[] = {
  "neg. %0,%1",
  "#",
};

static const char * const output_133[] = {
  "{muls|mullw} %0,%1,%2",
  "{muli|mulli} %0,%1,%2",
};

static const char * const output_134[] = {
  "{muls.|mullw.} %3,%1,%2",
  "#",
};

static const char * const output_135[] = {
  "{muls.|mullw.} %0,%1,%2",
  "#",
};

static const char * const output_142[] = {
  "{srai|srawi} %3,%1,%p2\n\t{aze.|addze.} %3,%3",
  "#",
};

static const char * const output_143[] = {
  "{srai|sradi} %3,%1,%p2\n\t{aze.|addze.} %3,%3",
  "#",
};

static const char * const output_144[] = {
  "{srai|srawi} %0,%1,%p2\n\t{aze.|addze.} %0,%0",
  "#",
};

static const char * const output_145[] = {
  "{srai|sradi} %0,%1,%p2\n\t{aze.|addze.} %0,%0",
  "#",
};

static const char * const output_152[] = {
  "and %0,%1,%2",
  "{rlinm|rlwinm} %0,%1,0,%m2,%M2",
  "{andil.|andi.} %0,%1,%b2",
  "{andiu.|andis.} %0,%1,%u2",
};

static const char * const output_153[] = {
  "and. %3,%1,%2",
  "{andil.|andi.} %3,%1,%b2",
  "{andiu.|andis.} %3,%1,%u2",
  "{rlinm.|rlwinm.} %3,%1,0,%m2,%M2",
  "#",
  "#",
  "#",
  "#",
};

static const char * const output_154[] = {
  "#",
  "{andil.|andi.} %3,%1,%b2",
  "{andiu.|andis.} %3,%1,%u2",
  "{rlinm.|rlwinm.} %3,%1,0,%m2,%M2",
  "#",
  "#",
  "#",
  "#",
};

static const char * const output_155[] = {
  "and. %0,%1,%2",
  "{andil.|andi.} %0,%1,%b2",
  "{andiu.|andis.} %0,%1,%u2",
  "{rlinm.|rlwinm.} %0,%1,0,%m2,%M2",
  "#",
  "#",
  "#",
  "#",
};

static const char * const output_156[] = {
  "#",
  "{andil.|andi.} %0,%1,%b2",
  "{andiu.|andis.} %0,%1,%u2",
  "{rlinm.|rlwinm.} %0,%1,0,%m2,%M2",
  "#",
  "#",
  "#",
  "#",
};

static const char * const output_158[] = {
  "%q3 %0,%1,%2",
  "{%q3il|%q3i} %0,%1,%b2",
  "{%q3iu|%q3is} %0,%1,%u2",
};

static const char * const output_159[] = {
  "%q4. %3,%1,%2",
  "#",
};

static const char * const output_160[] = {
  "%q4. %0,%1,%2",
  "#",
};

static const char * const output_162[] = {
  "%q4. %3,%2,%1",
  "#",
};

static const char * const output_163[] = {
  "%q4. %0,%2,%1",
  "#",
};

static const char * const output_165[] = {
  "%q4. %3,%1,%2",
  "#",
};

static const char * const output_166[] = {
  "%q4. %0,%1,%2",
  "#",
};

static const char *
output_167 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3415 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

{
  int start = INTVAL (operands[2]) & 31;
  int size = INTVAL (operands[1]) & 31;

  operands[4] = GEN_INT (32 - start - size);
  operands[1] = GEN_INT (start + size - 1);
  return "{rlimi|rlwimi} %0,%3,%h4,%h2,%h1";
}
}

static const char *
output_168 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3433 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

{
  int shift = INTVAL (operands[4]) & 31;
  int start = INTVAL (operands[2]) & 31;
  int size = INTVAL (operands[1]) & 31;

  operands[4] = GEN_INT (shift - start - size);
  operands[1] = GEN_INT (start + size - 1);
  return "{rlimi|rlwimi} %0,%3,%h4,%h2,%h1";
}
}

static const char *
output_169 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3452 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

{
  int shift = INTVAL (operands[4]) & 31;
  int start = INTVAL (operands[2]) & 31;
  int size = INTVAL (operands[1]) & 31;

  operands[4] = GEN_INT (32 - shift - start - size);
  operands[1] = GEN_INT (start + size - 1);
  return "{rlimi|rlwimi} %0,%3,%h4,%h2,%h1";
}
}

static const char *
output_170 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3471 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

{
  int shift = INTVAL (operands[4]) & 31;
  int start = INTVAL (operands[2]) & 31;
  int size = INTVAL (operands[1]) & 31;

  operands[4] = GEN_INT (32 - shift - start - size);
  operands[1] = GEN_INT (start + size - 1);
  return "{rlimi|rlwimi} %0,%3,%h4,%h2,%h1";
}
}

static const char *
output_171 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3491 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

{
  int extract_start = INTVAL (operands[5]) & 31;
  int extract_size = INTVAL (operands[4]) & 31;
  int insert_start = INTVAL (operands[2]) & 31;
  int insert_size = INTVAL (operands[1]) & 31;

/* Align extract field with insert field */
  operands[5] = GEN_INT (extract_start + extract_size - insert_start - insert_size);
  operands[1] = GEN_INT (insert_start + insert_size - 1);
  return "{rlimi|rlwimi} %0,%3,%h5,%h2,%h1";
}
}

static const char *
output_172 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3514 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

{
 int me = extract_ME(operands[5]);
 int mb = extract_MB(operands[5]);
 operands[4] = GEN_INT(32 - INTVAL(operands[2]));
 operands[2] = GEN_INT(mb);
 operands[1] = GEN_INT(me);
 return "{rlimi|rlwimi} %0,%3,%h4,%h2,%h1";
}
}

static const char *
output_173 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3533 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

{
 int me = extract_ME(operands[5]);
 int mb = extract_MB(operands[5]);
 operands[4] = GEN_INT(32 - INTVAL(operands[2]));
 operands[2] = GEN_INT(mb);
 operands[1] = GEN_INT(me);
 return "{rlimi|rlwimi} %0,%3,%h4,%h2,%h1";
}
}

static const char *
output_174 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3550 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

{
  int start = INTVAL (operands[2]) & 63;
  int size = INTVAL (operands[1]) & 63;

  operands[1] = GEN_INT (64 - start - size);
  return "rldimi %0,%3,%H1,%H2";
}
}

static const char *
output_175 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3567 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

{
  int shift = INTVAL (operands[4]) & 63;
  int start = (INTVAL (operands[2]) & 63) - 32;
  int size = INTVAL (operands[1]) & 63;

  operands[4] = GEN_INT (64 - shift - start - size);
  operands[2] = GEN_INT (start);
  operands[1] = GEN_INT (start + size - 1);
  return "rlwimi %0,%3,%h4,%h2,%h1";
}
}

static const char *
output_176 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3587 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

{
  int shift = INTVAL (operands[4]) & 63;
  int start = (INTVAL (operands[2]) & 63) - 32;
  int size = INTVAL (operands[1]) & 63;

  operands[4] = GEN_INT (64 - shift - start - size);
  operands[2] = GEN_INT (start);
  operands[1] = GEN_INT (start + size - 1);
  return "rlwimi %0,%3,%h4,%h2,%h1";
}
}

static const char *
output_177 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3627 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

{
  int start = INTVAL (operands[3]) & 31;
  int size = INTVAL (operands[2]) & 31;

  if (start + size >= 32)
    operands[3] = const0_rtx;
  else
    operands[3] = GEN_INT (start + size);
  return "{rlinm|rlwinm} %0,%1,%3,%s2,31";
}
}

static const char *
output_178 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3647 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

{
  int start = INTVAL (operands[3]) & 31;
  int size = INTVAL (operands[2]) & 31;

  /* Force split for non-cc0 compare.  */
  if (which_alternative == 1)
     return "#";

  /* If the bit-field being tested fits in the upper or lower half of a
     word, it is possible to use andiu. or andil. to test it.  This is
     useful because the condition register set-use delay is smaller for
     andi[ul]. than for rlinm.  This doesn't work when the starting bit
     position is 0 because the LT and GT bits may be set wrong.  */

  if ((start > 0 && start + size <= 16) || start >= 16)
    {
      operands[3] = GEN_INT (((1 << (16 - (start & 15)))
			      - (1 << (16 - (start & 15) - size))));
      if (start < 16)
	return "{andiu.|andis.} %4,%1,%3";
      else
	return "{andil.|andi.} %4,%1,%3";
    }

  if (start + size >= 32)
    operands[3] = const0_rtx;
  else
    operands[3] = GEN_INT (start + size);
  return "{rlinm.|rlwinm.} %4,%1,%3,%s2,31";
}
}

static const char *
output_179 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3706 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

{
  int start = INTVAL (operands[3]) & 31;
  int size = INTVAL (operands[2]) & 31;

  /* Force split for non-cc0 compare.  */
  if (which_alternative == 1)
     return "#";

  /* Since we are using the output value, we can't ignore any need for
     a shift.  The bit-field must end at the LSB.  */
  if (start >= 16 && start + size == 32)
    {
      operands[3] = GEN_INT ((1 << size) - 1);
      return "{andil.|andi.} %0,%1,%3";
    }

  if (start + size >= 32)
    operands[3] = const0_rtx;
  else
    operands[3] = GEN_INT (start + size);
  return "{rlinm.|rlwinm.} %0,%1,%3,%s2,31";
}
}

static const char *
output_180 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3754 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

{
  int start = INTVAL (operands[3]) & 63;
  int size = INTVAL (operands[2]) & 63;

  if (start + size >= 64)
    operands[3] = const0_rtx;
  else
    operands[3] = GEN_INT (start + size);
  operands[2] = GEN_INT (64 - size);
  return "rldicl %0,%1,%3,%2";
}
}

static const char *
output_181 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3775 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

{
  int start = INTVAL (operands[3]) & 63;
  int size = INTVAL (operands[2]) & 63;

  if (start + size >= 64)
    operands[3] = const0_rtx;
  else
    operands[3] = GEN_INT (start + size);
  operands[2] = GEN_INT (64 - size);
  return "rldicl. %4,%1,%3,%2";
}
}

static const char *
output_182 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3798 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

{
  int start = INTVAL (operands[3]) & 63;
  int size = INTVAL (operands[2]) & 63;

  if (start + size >= 64)
    operands[3] = const0_rtx;
  else
    operands[3] = GEN_INT (start + size);
  operands[2] = GEN_INT (64 - size);
  return "rldicl. %0,%1,%3,%2";
}
}

static const char * const output_184[] = {
  "{rl%I2nm.|rlw%I2nm.} %3,%1,%h2,0xffffffff",
  "#",
};

static const char * const output_185[] = {
  "{rl%I2nm.|rlw%I2nm.} %0,%1,%h2,0xffffffff",
  "#",
};

static const char * const output_187[] = {
  "{rl%I2nm.|rlw%I2nm.} %4,%1,%h2,%m3,%M3",
  "#",
};

static const char * const output_188[] = {
  "{rl%I2nm.|rlw%I2nm.} %0,%1,%h2,%m3,%M3",
  "#",
};

static const char * const output_190[] = {
  "{rl%I2nm.|rlw%I2nm.} %3,%1,%h2,0xff",
  "#",
};

static const char * const output_191[] = {
  "{rl%I2nm.|rlw%I2nm.} %0,%1,%h2,0xff",
  "#",
};

static const char * const output_193[] = {
  "{rl%I2nm.|rlw%I2nm.} %3,%1,%h2,0xffff",
  "#",
};

static const char * const output_194[] = {
  "{rl%I2nm.|rlw%I2nm.} %0,%1,%h2,0xffff",
  "#",
};

static const char * const output_196[] = {
  "{sl|slw}%I2. %3,%1,%h2",
  "#",
};

static const char * const output_197[] = {
  "{sl|slw}%I2. %0,%1,%h2",
  "#",
};

static const char * const output_199[] = {
  "{rlinm.|rlwinm.} %4,%1,%h2,%m3,%M3",
  "#",
};

static const char * const output_200[] = {
  "{rlinm.|rlwinm.} %0,%1,%h2,%m3,%M3",
  "#",
};

static const char * const output_201[] = {
  "mr %0,%1",
  "{sr|srw}%I2 %0,%1,%h2",
};

static const char * const output_202[] = {
  "mr. %1,%1",
  "{sr|srw}%I2. %3,%1,%h2",
  "#",
  "#",
};

static const char * const output_203[] = {
  "mr. %0,%1",
  "{sr|srw}%I2. %0,%1,%h2",
  "#",
  "#",
};

static const char * const output_205[] = {
  "{rlinm.|rlwinm.} %4,%1,%s2,%m3,%M3",
  "#",
};

static const char * const output_206[] = {
  "{rlinm.|rlwinm.} %0,%1,%s2,%m3,%M3",
  "#",
};

static const char * const output_208[] = {
  "{rlinm.|rlwinm.} %3,%1,%s2,0xff",
  "#",
};

static const char * const output_209[] = {
  "{rlinm.|rlwinm.} %0,%1,%s2,0xff",
  "#",
};

static const char * const output_211[] = {
  "{rlinm.|rlwinm.} %3,%1,%s2,0xffff",
  "#",
};

static const char * const output_212[] = {
  "{rlinm.|rlwinm.} %0,%1,%s2,0xffff",
  "#",
};

static const char * const output_214[] = {
  "{sra|sraw}%I2. %3,%1,%h2",
  "#",
};

static const char * const output_215[] = {
  "{sra|sraw}%I2. %0,%1,%h2",
  "#",
};

static const char * const output_216[] = {
  "#",
  "fmr %0,%1",
  "lfs%U1%X1 %0,%1",
};

static const char *
output_274 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 6080 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

{
  if (WORDS_BIG_ENDIAN)
    return (GET_CODE (operands[2])) != CONST_INT
	    ? "{a|addc} %L0,%L1,%L2\n\t{ae|adde} %0,%1,%2"
	    : "{ai|addic} %L0,%L1,%2\n\t{a%G2e|add%G2e} %0,%1";
  else
    return (GET_CODE (operands[2])) != CONST_INT
	    ? "{a|addc} %0,%1,%2\n\t{ae|adde} %L0,%L1,%L2"
	    : "{ai|addic} %0,%1,%2\n\t{a%G2e|add%G2e} %L0,%L1";
}
}

static const char *
output_275 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 6099 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

{
  if (WORDS_BIG_ENDIAN)
    return (GET_CODE (operands[1]) != CONST_INT)
	    ? "{sf|subfc} %L0,%L2,%L1\n\t{sfe|subfe} %0,%2,%1"
	    : "{sfi|subfic} %L0,%L2,%1\n\t{sf%G1e|subf%G1e} %0,%2";
  else
    return (GET_CODE (operands[1]) != CONST_INT)
	    ? "{sf|subfc} %0,%2,%1\n\t{sfe|subfe} %L0,%L2,%L1"
	    : "{sfi|subfic} %0,%2,%1\n\t{sf%G1e|subf%G1e} %L0,%L2";
}
}

static const char *
output_276 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 6117 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

{
  return (WORDS_BIG_ENDIAN)
    ? "{sfi|subfic} %L0,%L1,0\n\t{sfze|subfze} %0,%1"
    : "{sfi|subfic} %0,%1,0\n\t{sfze|subfze} %L0,%L1";
}
}

static const char *
output_277 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 6171 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

{
  return (WORDS_BIG_ENDIAN)
    ? "mulhw %0,%1,%2\n\tmullw %L0,%1,%2"
    : "mulhw %L0,%1,%2\n\tmullw %0,%1,%2";
}
}

static const char *
output_278 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 6234 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

{
  return (WORDS_BIG_ENDIAN)
    ? "mulhwu %0,%1,%2\n\tmullw %L0,%1,%2"
    : "mulhwu %L0,%1,%2\n\tmullw %0,%1,%2";
}
}

static const char * const output_281[] = {
  "{srai|srawi} %0,%1,31\n\t{srai|srawi} %L0,%1,%h2",
  "{sri|srwi} %L0,%L1,%h2\n\tinsrwi %L0,%1,%h2,0\n\t{srai|srawi} %0,%1,%h2",
};

static const char *
output_282 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 6415 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

{
  if (REGNO (operands[0]) == REGNO (operands[1]))
    return "";
  else
    return "mr %0,%1";
}
}

static const char * const output_285[] = {
  "mulld %0,%1,%2",
  "mulli %0,%1,%2",
};

static const char * const output_286[] = {
  "mulld. %3,%1,%2",
  "#",
};

static const char * const output_287[] = {
  "mulld. %0,%1,%2",
  "#",
};

static const char * const output_291[] = {
  "rld%I2cl. %3,%1,%H2,0",
  "#",
};

static const char * const output_292[] = {
  "rld%I2cl. %0,%1,%H2,0",
  "#",
};

static const char * const output_294[] = {
  "rld%I2c%B3. %4,%1,%H2,%S3",
  "#",
};

static const char * const output_295[] = {
  "rld%I2c%B3. %0,%1,%H2,%S3",
  "#",
};

static const char * const output_297[] = {
  "rld%I2cl. %3,%1,%H2,56",
  "#",
};

static const char * const output_298[] = {
  "rld%I2cl. %0,%1,%H2,56",
  "#",
};

static const char * const output_300[] = {
  "rld%I2cl. %3,%1,%H2,48",
  "#",
};

static const char * const output_301[] = {
  "rld%I2cl. %0,%1,%H2,48",
  "#",
};

static const char * const output_303[] = {
  "rld%I2cl. %3,%1,%H2,32",
  "#",
};

static const char * const output_304[] = {
  "rld%I2cl. %0,%1,%H2,32",
  "#",
};

static const char * const output_306[] = {
  "sld%I2. %3,%1,%H2",
  "#",
};

static const char * const output_307[] = {
  "sld%I2. %0,%1,%H2",
  "#",
};

static const char * const output_309[] = {
  "rldic. %4,%1,%H2,%W3",
  "#",
};

static const char * const output_310[] = {
  "rldic. %0,%1,%H2,%W3",
  "#",
};

static const char * const output_312[] = {
  "rldicr. %4,%1,%H2,%S3",
  "#",
};

static const char * const output_313[] = {
  "rldicr. %0,%1,%H2,%S3",
  "#",
};

static const char * const output_315[] = {
  "srd%I2. %3,%1,%H2",
  "#",
};

static const char * const output_316[] = {
  "srd%I2. %0,%1,%H2",
  "#",
};

static const char * const output_318[] = {
  "srad%I2. %3,%1,%H2",
  "#",
};

static const char * const output_319[] = {
  "srad%I2. %0,%1,%H2",
  "#",
};

static const char * const output_320[] = {
  "and %0,%1,%2",
  "rldic%B2 %0,%1,0,%S2",
  "rlwinm %0,%1,0,%m2,%M2",
  "andi. %0,%1,%b2",
  "andis. %0,%1,%u2",
  "#",
};

static const char * const output_321[] = {
  "and. %3,%1,%2",
  "rldic%B2. %3,%1,0,%S2",
  "rlwinm. %3,%1,0,%m2,%M2",
  "andi. %3,%1,%b2",
  "andis. %3,%1,%u2",
  "#",
  "#",
  "#",
  "#",
  "#",
  "#",
  "#",
};

static const char * const output_322[] = {
  "and. %0,%1,%2",
  "rldic%B2. %0,%1,0,%S2",
  "rlwinm. %0,%1,0,%m2,%M2",
  "andi. %0,%1,%b2",
  "andis. %0,%1,%u2",
  "#",
  "#",
  "#",
  "#",
  "#",
  "#",
  "#",
};

static const char * const output_323[] = {
  "%q3 %0,%1,%2",
  "%q3i %0,%1,%b2",
  "%q3is %0,%1,%u2",
};

static const char * const output_324[] = {
  "%q4. %3,%1,%2",
  "#",
};

static const char * const output_325[] = {
  "%q4. %0,%1,%2",
  "#",
};

static const char * const output_327[] = {
  "%q4. %3,%2,%1",
  "#",
};

static const char * const output_328[] = {
  "%q4. %0,%2,%1",
  "#",
};

static const char * const output_330[] = {
  "%q4. %3,%1,%2",
  "#",
};

static const char * const output_331[] = {
  "%q4. %0,%1,%2",
  "#",
};

static const char * const output_333[] = {
  "mr %0,%1",
  "{cal|la} %0,%a1",
  "{l%U1%X1|lwz%U1%X1} %0,%1",
  "{st%U0%X0|stw%U0%X0} %1,%0",
  "{lil|li} %0,%1",
  "{liu|lis} %0,%v1",
  "#",
  "{cal|la} %0,%a1",
  "mf%1 %0",
  "mt%0 %1",
  "mt%0 %1",
  "mt%0 %1",
  "{cror 0,0,0|nop}",
};

static const char * const output_334[] = {
  "{cmpi|cmpwi} %2,%0,0",
  "mr. %0,%1",
  "#",
};

static const char * const output_335[] = {
  "{cmpi|cmpdi} %2,%0,0",
  "mr. %0,%1",
  "#",
};

static const char * const output_336[] = {
  "mr %0,%1",
  "lhz%U1%X1 %0,%1",
  "sth%U0%X0 %1,%0",
  "{lil|li} %0,%w1",
  "mf%1 %0",
  "mt%0 %1",
  "mt%0 %1",
  "{cror 0,0,0|nop}",
};

static const char * const output_337[] = {
  "mr %0,%1",
  "lbz%U1%X1 %0,%1",
  "stb%U0%X0 %1,%0",
  "{lil|li} %0,%1",
  "mf%1 %0",
  "mt%0 %1",
  "mt%0 %1",
  "{cror 0,0,0|nop}",
};

static const char * const output_338[] = {
  "mcrf %0,%1",
  "mtcrf 128,%1",
  "{rlinm|rlwinm} %1,%1,%F0,0xffffffff\n\tmtcrf %R0,%1\n\t{rlinm|rlwinm} %1,%1,%f0,0xffffffff",
  "crxor %0,%0,%0",
  "mfcr %0%Q1",
  "mfcr %0%Q1\n\t{rlinm|rlwinm} %0,%0,%f1,0xf0000000",
  "mr %0,%1",
  "{lil|li} %0,%1",
  "mf%1 %0",
  "mt%0 %1",
  "mt%0 %1",
  "{l%U1%X1|lwz%U1%X1} %0,%1",
  "{st%U0%U1|stw%U0%U1} %1,%0",
};

static const char * const output_339[] = {
  "mr %0,%1",
  "{l%U1%X1|lwz%U1%X1} %0,%1",
  "{st%U0%X0|stw%U0%X0} %1,%0",
  "fmr %0,%1",
  "lfs%U1%X1 %0,%1",
  "stfs%U0%X0 %1,%0",
  "mt%0 %1",
  "mt%0 %1",
  "mf%1 %0",
  "{cror 0,0,0|nop}",
  "#",
  "#",
};

static const char * const output_340[] = {
  "mr %0,%1",
  "mt%0 %1",
  "mt%0 %1",
  "mf%1 %0",
  "{l%U1%X1|lwz%U1%X1} %0,%1",
  "{st%U0%X0|stw%U0%X0} %1,%0",
  "{lil|li} %0,%1",
  "{liu|lis} %0,%v1",
  "{cal|la} %0,%a1",
  "#",
  "#",
  "{cror 0,0,0|nop}",
};

static const char *
output_341 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 8174 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

{
  switch (which_alternative)
    {
    default:
      gcc_unreachable ();
    case 0:
      /* We normally copy the low-numbered register first.  However, if
	 the first register operand 0 is the same as the second register
	 of operand 1, we must copy in the opposite order.  */
      if (REGNO (operands[0]) == REGNO (operands[1]) + 1)
	return "mr %L0,%L1\n\tmr %0,%1";
      else
	return "mr %0,%1\n\tmr %L0,%L1";
    case 1:
      if (rs6000_offsettable_memref_p (operands[1])
	  || (GET_CODE (operands[1]) == MEM
	      && (GET_CODE (XEXP (operands[1], 0)) == LO_SUM
		  || GET_CODE (XEXP (operands[1], 0)) == PRE_INC
		  || GET_CODE (XEXP (operands[1], 0)) == PRE_DEC)))
	{
	  /* If the low-address word is used in the address, we must load
	     it last.  Otherwise, load it first.  Note that we cannot have
	     auto-increment in that case since the address register is
	     known to be dead.  */
	  if (refers_to_regno_p (REGNO (operands[0]), REGNO (operands[0]) + 1,
				 operands[1], 0))
	    return "{l|lwz} %L0,%L1\n\t{l|lwz} %0,%1";
	  else
	    return "{l%U1|lwz%U1} %0,%1\n\t{l|lwz} %L0,%L1";
	}
      else
	{
	  rtx addreg;

	  addreg = find_addr_reg (XEXP (operands[1], 0));
	  if (refers_to_regno_p (REGNO (operands[0]),
				 REGNO (operands[0]) + 1,
				 operands[1], 0))
	    {
	      output_asm_insn ("{cal|la} %0,4(%0)", &addreg);
	      output_asm_insn ("{lx|lwzx} %L0,%1", operands);
	      output_asm_insn ("{cal|la} %0,-4(%0)", &addreg);
	      return "{lx|lwzx} %0,%1";
	    }
	  else
	    {
	      output_asm_insn ("{lx|lwzx} %0,%1", operands);
	      output_asm_insn ("{cal|la} %0,4(%0)", &addreg);
	      output_asm_insn ("{lx|lwzx} %L0,%1", operands);
	      output_asm_insn ("{cal|la} %0,-4(%0)", &addreg);
	      return "";
	    }
	}
    case 2:
      if (rs6000_offsettable_memref_p (operands[0])
	  || (GET_CODE (operands[0]) == MEM
	      && (GET_CODE (XEXP (operands[0], 0)) == LO_SUM
		  || GET_CODE (XEXP (operands[0], 0)) == PRE_INC
		  || GET_CODE (XEXP (operands[0], 0)) == PRE_DEC)))
	return "{st%U0|stw%U0} %1,%0\n\t{st|stw} %L1,%L0";
      else
	{
	  rtx addreg;

	  addreg = find_addr_reg (XEXP (operands[0], 0));
	  output_asm_insn ("{stx|stwx} %1,%0", operands);
	  output_asm_insn ("{cal|la} %0,4(%0)", &addreg);
	  output_asm_insn ("{stx|stwx} %L1,%0", operands);
	  output_asm_insn ("{cal|la} %0,-4(%0)", &addreg);
	  return "";
	}
    case 3:
      return "fmr %0,%1";
    case 4:
      return "lfd%U1%X1 %0,%1";
    case 5:
      return "stfd%U0%X0 %1,%0";
    case 6:
    case 7:
    case 8:
      return "#";
    }
}
}

static const char *
output_342 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 8267 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

{
  switch (which_alternative)
    {
    default:
      gcc_unreachable ();
    case 0:
      /* We normally copy the low-numbered register first.  However, if
	 the first register operand 0 is the same as the second register of
	 operand 1, we must copy in the opposite order.  */
      if (REGNO (operands[0]) == REGNO (operands[1]) + 1)
	return "mr %L0,%L1\n\tmr %0,%1";
      else
	return "mr %0,%1\n\tmr %L0,%L1";
    case 1:
      /* If the low-address word is used in the address, we must load
	 it last.  Otherwise, load it first.  Note that we cannot have
	 auto-increment in that case since the address register is
	 known to be dead.  */
      if (refers_to_regno_p (REGNO (operands[0]), REGNO (operands[0]) + 1,
			     operands[1], 0))
	return "{l|lwz} %L0,%L1\n\t{l|lwz} %0,%1";
      else
	return "{l%U1|lwz%U1} %0,%1\n\t{l|lwz} %L0,%L1";
    case 2:
      return "{st%U0|stw%U0} %1,%0\n\t{st|stw} %L1,%L0";
    case 3:
    case 4:
    case 5:
      return "#";
    }
}
}

static const char * const output_343[] = {
  "std%U0%X0 %1,%0",
  "ld%U1%X1 %0,%1",
  "mr %0,%1",
  "fmr %0,%1",
  "lfd%U1%X1 %0,%1",
  "stfd%U0%X0 %1,%0",
  "mt%0 %1",
  "mf%1 %0",
  "{cror 0,0,0|nop}",
  "#",
  "#",
  "#",
};

static const char * const output_344[] = {
  "ld%U1%X1 %0,%1",
  "std%U0%X0 %1,%0",
  "mr %0,%1",
  "mt%0 %1",
  "mf%1 %0",
  "#",
  "#",
  "#",
  "{cror 0,0,0|nop}",
};

static const char * const output_348[] = {
  "#",
  "fmr %0,%1",
};

static const char *
output_353 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 8540 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

{
  if (REGNO (operands[0]) == REGNO (operands[1]) + 1)
    return "fneg %L0,%L1\n\tfneg %0,%1";
  else
    return "fneg %0,%1\n\tfneg %L0,%L1";
}
}

static const char * const output_354[] = {
  "#",
  "#",
  "#",
  "fmr %0,%1",
  "lfd%U1%X1 %0,%1",
  "stfd%U0%X0 %1,%0",
  "#",
};

static const char * const output_355[] = {
  "ld%U1%X1 %0,%1",
  "std%U0%X0 %1,%0",
  "mr %0,%1",
  "li %0,%1",
  "lis %0,%v1",
  "#",
  "{cal|la} %0,%a1",
  "fmr %0,%1",
  "lfd%U1%X1 %0,%1",
  "stfd%U0%X0 %1,%0",
  "mf%1 %0",
  "mt%0 %1",
  "{cror 0,0,0|nop}",
};

static const char *
output_356 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 8771 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

{
  switch (which_alternative)
    {
    default:
      gcc_unreachable ();
    case 0:
      if (TARGET_STRING)
        return "{stsi|stswi} %1,%P0,16";
    case 1:
    case 2:
      return "#";
    case 3:
      /* If the address is not used in the output, we can use lsi.  Otherwise,
	 fall through to generating four loads.  */
      if (TARGET_STRING
          && ! reg_overlap_mentioned_p (operands[0], operands[1]))
	return "{lsi|lswi} %0,%P1,16";
      /* ... fall through ...  */
    case 4:
    case 5:
      return "#";
    }
}
}

static const char *
output_358 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 8894 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

{ return rs6000_output_load_multiple (operands); }
}

static const char *
output_359 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 8916 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

{ return rs6000_output_load_multiple (operands); }
}

static const char *
output_360 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 8936 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

{ return rs6000_output_load_multiple (operands); }
}

static const char *
output_361 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 8954 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

{ return rs6000_output_load_multiple (operands); }
}

static const char *
output_362 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 8970 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

{ return rs6000_output_load_multiple (operands); }
}

static const char *
output_363 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 8984 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

{ return rs6000_output_load_multiple (operands); }
}

static const char * const output_379[] = {
  "ldux %3,%0,%2",
  "ldu %3,%2(%0)",
};

static const char * const output_380[] = {
  "stdux %3,%0,%2",
  "stdu %3,%2(%0)",
};

static const char * const output_381[] = {
  "stdux %3,%0,%2",
  "stdu %3,%2(%0)",
};

static const char * const output_382[] = {
  "{lux|lwzux} %3,%0,%2",
  "{lu|lwzu} %3,%2(%0)",
};

static const char * const output_384[] = {
  "{stux|stwux} %3,%0,%2",
  "{stu|stwu} %3,%2(%0)",
};

static const char * const output_385[] = {
  "lhzux %3,%0,%2",
  "lhzu %3,%2(%0)",
};

static const char * const output_386[] = {
  "lhzux %3,%0,%2",
  "lhzu %3,%2(%0)",
};

static const char * const output_387[] = {
  "lhaux %3,%0,%2",
  "lhau %3,%2(%0)",
};

static const char * const output_388[] = {
  "sthux %3,%0,%2",
  "sthu %3,%2(%0)",
};

static const char * const output_389[] = {
  "lbzux %3,%0,%2",
  "lbzu %3,%2(%0)",
};

static const char * const output_390[] = {
  "lbzux %3,%0,%2",
  "lbzu %3,%2(%0)",
};

static const char * const output_391[] = {
  "stbux %3,%0,%2",
  "stbu %3,%2(%0)",
};

static const char * const output_392[] = {
  "lfsux %3,%0,%2",
  "lfsu %3,%2(%0)",
};

static const char * const output_393[] = {
  "stfsux %3,%0,%2",
  "stfsu %3,%2(%0)",
};

static const char * const output_394[] = {
  "{lux|lwzux} %3,%0,%2",
  "{lu|lwzu} %3,%2(%0)",
};

static const char * const output_395[] = {
  "{stux|stwux} %3,%0,%2",
  "{stu|stwu} %3,%2(%0)",
};

static const char * const output_396[] = {
  "lfdux %3,%0,%2",
  "lfdu %3,%2(%0)",
};

static const char * const output_397[] = {
  "stfdux %3,%0,%2",
  "stfdu %3,%2(%0)",
};

static const char *
output_400 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 10551 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

{
  if (INTVAL (operands[2]) & CALL_V4_SET_FP_ARGS)
    output_asm_insn ("crxor 6,6,6", operands);

  else if (INTVAL (operands[2]) & CALL_V4_CLEAR_FP_ARGS)
    output_asm_insn ("creqv 6,6,6", operands);

/* APPLE LOCAL begin -mlongcall */
#ifdef RS6000_LONG_BRANCH
  if (!flag_pic)
    return output_call(insn, operands, 0, 0);
  else
#endif     
/* APPLE LOCAL end -mlongcall */
  return (DEFAULT_ABI == ABI_V4 && flag_pic) ? "bl %z0@local" : "bl %z0";
}
}

static const char *
output_401 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 10577 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

{
  if (INTVAL (operands[2]) & CALL_V4_SET_FP_ARGS)
    output_asm_insn ("crxor 6,6,6", operands);

  else if (INTVAL (operands[2]) & CALL_V4_CLEAR_FP_ARGS)
    output_asm_insn ("creqv 6,6,6", operands);

  return (DEFAULT_ABI == ABI_V4 && flag_pic) ? "bl %z0@local" : "bl %z0";
}
}

static const char *
output_402 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 10597 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

{
  if (INTVAL (operands[3]) & CALL_V4_SET_FP_ARGS)
    output_asm_insn ("crxor 6,6,6", operands);

  else if (INTVAL (operands[3]) & CALL_V4_CLEAR_FP_ARGS)
    output_asm_insn ("creqv 6,6,6", operands);

  return (DEFAULT_ABI == ABI_V4 && flag_pic) ? "bl %z1@local" : "bl %z1";
}
}

static const char *
output_403 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 10618 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

{
  if (INTVAL (operands[3]) & CALL_V4_SET_FP_ARGS)
    output_asm_insn ("crxor 6,6,6", operands);

  else if (INTVAL (operands[3]) & CALL_V4_CLEAR_FP_ARGS)
    output_asm_insn ("creqv 6,6,6", operands);

  return (DEFAULT_ABI == ABI_V4 && flag_pic) ? "bl %z1@local" : "bl %z1";
}
}

static const char *
output_404 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 10755 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"
{
  if (INTVAL (operands[2]) & CALL_V4_SET_FP_ARGS)
    output_asm_insn ("crxor 6,6,6", operands);

  else if (INTVAL (operands[2]) & CALL_V4_CLEAR_FP_ARGS)
    output_asm_insn ("creqv 6,6,6", operands);

  return "b%T0l";
}
}

static const char *
output_405 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 10755 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"
{
  if (INTVAL (operands[2]) & CALL_V4_SET_FP_ARGS)
    output_asm_insn ("crxor 6,6,6", operands);

  else if (INTVAL (operands[2]) & CALL_V4_CLEAR_FP_ARGS)
    output_asm_insn ("creqv 6,6,6", operands);

  return "b%T0l";
}
}

static const char *
output_406 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 10775 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"
{
  if (INTVAL (operands[2]) & CALL_V4_SET_FP_ARGS)
    output_asm_insn ("crxor 6,6,6", operands);

  else if (INTVAL (operands[2]) & CALL_V4_CLEAR_FP_ARGS)
    output_asm_insn ("creqv 6,6,6", operands);

  /* APPLE LOCAL begin ObjC direct dispatch.  */
  /* Generate 'bla' instruction for functions with hard-coded addresses.  */
  if (DEFAULT_ABI == ABI_DARWIN)
    {
      rtx note = find_reg_note (insn, REG_ABSCALL, NULL_RTX);
      static char buf[256];
      if (note)
	{
	  sprintf (buf, "bla " HOST_WIDE_INT_PRINT_HEX,
		   INTVAL (XEXP (note, 0)));
	  return buf;
	}
    }
  /* APPLE LOCAL end ObjC direct dispatch.  */

#if TARGET_MACHO
  return output_call(insn, operands, 0, 2);
#else
  if (DEFAULT_ABI == ABI_V4 && flag_pic)
    {
      if (TARGET_SECURE_PLT && flag_pic == 2)
	/* The magic 32768 offset here and in the other sysv call insns
	   corresponds to the offset of r30 in .got2, as given by LCTOC1.
	   See sysv4.h:toc_section.  */
	return "bl %z0+32768@plt";
      else
	return "bl %z0@plt";
    }
  else
    return "bl %z0";
#endif
}
}

static const char *
output_407 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 10775 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"
{
  if (INTVAL (operands[2]) & CALL_V4_SET_FP_ARGS)
    output_asm_insn ("crxor 6,6,6", operands);

  else if (INTVAL (operands[2]) & CALL_V4_CLEAR_FP_ARGS)
    output_asm_insn ("creqv 6,6,6", operands);

  /* APPLE LOCAL begin ObjC direct dispatch.  */
  /* Generate 'bla' instruction for functions with hard-coded addresses.  */
  if (DEFAULT_ABI == ABI_DARWIN)
    {
      rtx note = find_reg_note (insn, REG_ABSCALL, NULL_RTX);
      static char buf[256];
      if (note)
	{
	  sprintf (buf, "bla " HOST_WIDE_INT_PRINT_HEX,
		   INTVAL (XEXP (note, 0)));
	  return buf;
	}
    }
  /* APPLE LOCAL end ObjC direct dispatch.  */

#if TARGET_MACHO
  return output_call(insn, operands, 0, 2);
#else
  if (DEFAULT_ABI == ABI_V4 && flag_pic)
    {
      if (TARGET_SECURE_PLT && flag_pic == 2)
	/* The magic 32768 offset here and in the other sysv call insns
	   corresponds to the offset of r30 in .got2, as given by LCTOC1.
	   See sysv4.h:toc_section.  */
	return "bl %z0+32768@plt";
      else
	return "bl %z0@plt";
    }
  else
    return "bl %z0";
#endif
}
}

static const char *
output_408 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 10825 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"
{
  if (INTVAL (operands[3]) & CALL_V4_SET_FP_ARGS)
    output_asm_insn ("crxor 6,6,6", operands);

  else if (INTVAL (operands[3]) & CALL_V4_CLEAR_FP_ARGS)
    output_asm_insn ("creqv 6,6,6", operands);

  return "b%T1l";
}
}

static const char *
output_409 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 10825 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"
{
  if (INTVAL (operands[3]) & CALL_V4_SET_FP_ARGS)
    output_asm_insn ("crxor 6,6,6", operands);

  else if (INTVAL (operands[3]) & CALL_V4_CLEAR_FP_ARGS)
    output_asm_insn ("creqv 6,6,6", operands);

  return "b%T1l";
}
}

static const char *
output_410 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 10846 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"
{
  if (INTVAL (operands[3]) & CALL_V4_SET_FP_ARGS)
    output_asm_insn ("crxor 6,6,6", operands);

  else if (INTVAL (operands[3]) & CALL_V4_CLEAR_FP_ARGS)
    output_asm_insn ("creqv 6,6,6", operands);

  /* APPLE LOCAL begin ObjC direct dispatch.  */
  /* Generate 'bla' instruction for functions with hard-coded addresses.  */
  if (DEFAULT_ABI == ABI_DARWIN)
    {
      rtx note = find_reg_note (insn, REG_ABSCALL, NULL_RTX);
      static char buf[256];
      if (note)
	{
	  sprintf (buf, "bla " HOST_WIDE_INT_PRINT_HEX,
		   INTVAL (XEXP (note, 0)));
	  return buf;
	}
    }
  /* APPLE LOCAL end ObjC direct dispatch.  */

#if TARGET_MACHO
  return output_call(insn, operands, 1, 3);
#else
  if (DEFAULT_ABI == ABI_V4 && flag_pic)
    {
      if (TARGET_SECURE_PLT && flag_pic == 2)
	return "bl %z1+32768@plt";
      else
	return "bl %z1@plt";
    }
  else
    return "bl %z1";
#endif
}
}

static const char *
output_411 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 10846 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"
{
  if (INTVAL (operands[3]) & CALL_V4_SET_FP_ARGS)
    output_asm_insn ("crxor 6,6,6", operands);

  else if (INTVAL (operands[3]) & CALL_V4_CLEAR_FP_ARGS)
    output_asm_insn ("creqv 6,6,6", operands);

  /* APPLE LOCAL begin ObjC direct dispatch.  */
  /* Generate 'bla' instruction for functions with hard-coded addresses.  */
  if (DEFAULT_ABI == ABI_DARWIN)
    {
      rtx note = find_reg_note (insn, REG_ABSCALL, NULL_RTX);
      static char buf[256];
      if (note)
	{
	  sprintf (buf, "bla " HOST_WIDE_INT_PRINT_HEX,
		   INTVAL (XEXP (note, 0)));
	  return buf;
	}
    }
  /* APPLE LOCAL end ObjC direct dispatch.  */

#if TARGET_MACHO
  return output_call(insn, operands, 1, 3);
#else
  if (DEFAULT_ABI == ABI_V4 && flag_pic)
    {
      if (TARGET_SECURE_PLT && flag_pic == 2)
	return "bl %z1+32768@plt";
      else
	return "bl %z1@plt";
    }
  else
    return "bl %z1";
#endif
}
}

static const char *
output_412 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 10926 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

{
  /* APPLE LOCAL begin ObjC direct dispatch */
  /* Generate 'ba' instruction for functions with hard-coded addresses.  */
  if (DEFAULT_ABI == ABI_DARWIN)
    {
      rtx note = find_reg_note (insn, REG_ABSCALL, NULL_RTX);
      static char buf[256];
      if (note)
	{
	  if (which_alternative != 0)
	    abort ();
	  sprintf (buf, "ba " HOST_WIDE_INT_PRINT_HEX,
		   INTVAL (XEXP (note, 0)));
	  return buf;
	}
    }
  /* APPLE LOCAL end ObjC direct dispatch */

  switch (which_alternative)
    {
      case 0:  return "b %z0";
      case 1:  return "b%T0";
      default:  abort();
    }
}
}

static const char *
output_413 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 10963 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

{
  /* APPLE LOCAL begin ObjC direct dispatch */
  /* Generate 'ba' instruction for functions with hard-coded addresses.  */
  if (DEFAULT_ABI == ABI_DARWIN)
    {
      rtx note = find_reg_note (insn, REG_ABSCALL, NULL_RTX);
      static char buf[256];
      if (note)
	{
	  if (which_alternative != 0)
	    abort ();
	  sprintf (buf, "ba " HOST_WIDE_INT_PRINT_HEX,
		   INTVAL (XEXP (note, 0)));
	  return buf;
	}
    }
  /* APPLE LOCAL end ObjC direct dispatch */

  switch (which_alternative)
    {
      case 0:  return "b %z1";
      case 1:  return "b%T1";
      default:  abort();
    }
}
}

static const char *
output_415 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 11038 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

{
  if (INTVAL (operands[2]) & CALL_V4_SET_FP_ARGS)
    output_asm_insn ("crxor 6,6,6", operands);

  else if (INTVAL (operands[2]) & CALL_V4_CLEAR_FP_ARGS)
    output_asm_insn ("creqv 6,6,6", operands);

  return (DEFAULT_ABI == ABI_V4 && flag_pic) ? "b %z0@local" : "b %z0";
}
}

static const char *
output_416 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 11058 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

{
  if (INTVAL (operands[2]) & CALL_V4_SET_FP_ARGS)
    output_asm_insn ("crxor 6,6,6", operands);

  else if (INTVAL (operands[2]) & CALL_V4_CLEAR_FP_ARGS)
    output_asm_insn ("creqv 6,6,6", operands);

  return (DEFAULT_ABI == ABI_V4 && flag_pic) ? "b %z0@local" : "b %z0";
}
}

static const char *
output_417 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 11079 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

{
  if (INTVAL (operands[3]) & CALL_V4_SET_FP_ARGS)
    output_asm_insn ("crxor 6,6,6", operands);

  else if (INTVAL (operands[3]) & CALL_V4_CLEAR_FP_ARGS)
    output_asm_insn ("creqv 6,6,6", operands);

  return (DEFAULT_ABI == ABI_V4 && flag_pic) ? "b %z1@local" : "b %z1";
}
}

static const char *
output_418 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 11101 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

{
  if (INTVAL (operands[3]) & CALL_V4_SET_FP_ARGS)
    output_asm_insn ("crxor 6,6,6", operands);

  else if (INTVAL (operands[3]) & CALL_V4_CLEAR_FP_ARGS)
    output_asm_insn ("creqv 6,6,6", operands);

  return (DEFAULT_ABI == ABI_V4 && flag_pic) ? "b %z1@local" : "b %z1";
}
}

static const char *
output_419 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 11177 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

{
  if (INTVAL (operands[2]) & CALL_V4_SET_FP_ARGS)
    output_asm_insn ("crxor 6,6,6", operands);

  else if (INTVAL (operands[2]) & CALL_V4_CLEAR_FP_ARGS)
    output_asm_insn ("creqv 6,6,6", operands);

  if (DEFAULT_ABI == ABI_V4 && flag_pic)
    {
      if (TARGET_SECURE_PLT && flag_pic == 2)
	return "b %z0+32768@plt";
      else
	return "b %z0@plt";
    }
  else
    return "b %z0";
}
}

static const char *
output_420 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 11177 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

{
  if (INTVAL (operands[2]) & CALL_V4_SET_FP_ARGS)
    output_asm_insn ("crxor 6,6,6", operands);

  else if (INTVAL (operands[2]) & CALL_V4_CLEAR_FP_ARGS)
    output_asm_insn ("creqv 6,6,6", operands);

  if (DEFAULT_ABI == ABI_V4 && flag_pic)
    {
      if (TARGET_SECURE_PLT && flag_pic == 2)
	return "b %z0+32768@plt";
      else
	return "b %z0@plt";
    }
  else
    return "b %z0";
}
}

static const char *
output_421 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 11231 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

{
  if (INTVAL (operands[2]) & CALL_V4_SET_FP_ARGS)
    output_asm_insn ("crxor 6,6,6", operands);

  else if (INTVAL (operands[2]) & CALL_V4_CLEAR_FP_ARGS)
    output_asm_insn ("creqv 6,6,6", operands);

  if (DEFAULT_ABI == ABI_V4 && flag_pic)
    {
      if (TARGET_SECURE_PLT && flag_pic == 2)
	return "b %z1+32768@plt";
      else
	return "b %z1@plt";
    }
  else
    return "b %z1";
}
}

static const char *
output_422 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 11231 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

{
  if (INTVAL (operands[2]) & CALL_V4_SET_FP_ARGS)
    output_asm_insn ("crxor 6,6,6", operands);

  else if (INTVAL (operands[2]) & CALL_V4_CLEAR_FP_ARGS)
    output_asm_insn ("creqv 6,6,6", operands);

  if (DEFAULT_ABI == ABI_V4 && flag_pic)
    {
      if (TARGET_SECURE_PLT && flag_pic == 2)
	return "b %z1+32768@plt";
      else
	return "b %z1@plt";
    }
  else
    return "b %z1";
}
}

static const char * const output_426[] = {
  "{l%U1%X1|lwz%U1%X1} %3,%1\n\t{l%U2%X2|lwz%U2%X2} %4,%2\n\txor. %3,%3,%4\n\t{lil|li} %4,0",
  "{l%U1%X1|lwz%U1%X1} %3,%1\n\t{l%U2%X2|lwz%U2%X2} %4,%2\n\t{cmpl|cmplw} %0,%3,%4\n\t{lil|li} %3,0\n\t{lil|li} %4,0",
};

static const char * const output_427[] = {
  "ld%U1%X1 %3,%1\n\tld%U2%X2 %4,%2\n\txor. %3,%3,%4\n\t{lil|li} %4,0",
  "ld%U1%X1 %3,%1\n\tld%U2%X2 %4,%2\n\tcmpld %0,%3,%4\n\t{lil|li} %3,0\n\t{lil|li} %4,0",
};

static const char * const output_440[] = {
  "mfcr %3%Q2\n\t{rlinm.|rlwinm.} %3,%3,%J1,1",
  "#",
};

static const char *
output_441 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 11901 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

{
  int is_bit = ccr_bit (operands[1], 1);
  int put_bit = 31 - (INTVAL (operands[3]) & 31);
  int count;

  if (is_bit >= put_bit)
    count = is_bit - put_bit;
  else
    count = 32 - (put_bit - is_bit);

  operands[4] = GEN_INT (count);
  operands[5] = GEN_INT (put_bit);

  return "mfcr %0%Q2\n\t{rlinm|rlwinm} %0,%0,%4,%5,%5";
}
}

static const char *
output_442 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 11936 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

{
  int is_bit = ccr_bit (operands[1], 1);
  int put_bit = 31 - (INTVAL (operands[3]) & 31);
  int count;

  /* Force split for non-cc0 compare.  */
  if (which_alternative == 1)
     return "#";

  if (is_bit >= put_bit)
    count = is_bit - put_bit;
  else
    count = 32 - (put_bit - is_bit);

  operands[5] = GEN_INT (count);
  operands[6] = GEN_INT (put_bit);

  return "mfcr %4%Q2\n\t{rlinm.|rlwinm.} %4,%4,%5,%6,%6";
}
}

static const char * const output_447[] = {
  "xor %0,%1,%2\n\t{sfi|subfic} %0,%0,0\n\t{aze|addze} %0,%3",
  "{sfi|subfic} %0,%1,0\n\t{aze|addze} %0,%3",
  "{xoril|xori} %0,%1,%b2\n\t{sfi|subfic} %0,%0,0\n\t{aze|addze} %0,%3",
  "{xoriu|xoris} %0,%1,%u2\n\t{sfi|subfic} %0,%0,0\n\t{aze|addze} %0,%3",
  "{sfi|subfic} %0,%1,%2\n\t{sfi|subfic} %0,%0,0\n\t{aze|addze} %0,%3",
};

static const char * const output_448[] = {
  "xor %4,%1,%2\n\t{sfi|subfic} %4,%4,0\n\t{aze.|addze.} %4,%3",
  "{sfi|subfic} %4,%1,0\n\t{aze.|addze.} %4,%3",
  "{xoril|xori} %4,%1,%b2\n\t{sfi|subfic} %4,%4,0\n\t{aze.|addze.} %4,%3",
  "{xoriu|xoris} %4,%1,%u2\n\t{sfi|subfic} %4,%4,0\n\t{aze.|addze.} %4,%3",
  "{sfi|subfic} %4,%1,%2\n\t{sfi|subfic} %4,%4,0\n\t{aze.|addze.} %4,%3",
  "#",
  "#",
  "#",
  "#",
  "#",
};

static const char * const output_449[] = {
  "xor %0,%1,%2\n\t{sfi|subfic} %0,%0,0\n\t{aze.|addze.} %0,%3",
  "{sfi|subfic} %0,%1,0\n\t{aze.|addze.} %0,%3",
  "{xoril|xori} %0,%1,%b2\n\t{sfi|subfic} %0,%0,0\n\t{aze.|addze.} %0,%3",
  "{xoriu|xoris} %0,%1,%u2\n\t{sfi|subfic} %0,%0,0\n\t{aze.|addze.} %0,%3",
  "{sfi|subfic} %0,%1,%2\n\t{sfi|subfic} %0,%0,0\n\t{aze.|addze.} %0,%3",
  "#",
  "#",
  "#",
  "#",
  "#",
};

static const char * const output_458[] = {
  "{ai|addic} %3,%1,-1\n\t{aze.|addze.} %3,%2",
  "#",
};

static const char * const output_459[] = {
  "addic %3,%1,-1\n\taddze. %3,%2",
  "#",
};

static const char * const output_460[] = {
  "{ai|addic} %3,%1,-1\n\t{aze.|addze.} %0,%2",
  "#",
};

static const char * const output_461[] = {
  "addic %3,%1,-1\n\taddze. %0,%2",
  "#",
};

static const char * const output_464[] = {
  "{sf%I2|subf%I2c} %0,%1,%2\n\t{cal %0,0(0)|li %0,0}\n\t{ae.|adde.} %0,%0,%0",
  "#",
};

static const char * const output_465[] = {
  "{sf%I2|subf%I2c} %0,%1,%2\n\t{cal %0,0(0)|li %0,0}\n\t{ae.|adde.} %0,%0,%0",
  "#",
};

static const char * const output_468[] = {
  "{sf%I2|subf%I2c} %4,%1,%2\n\t{aze.|addze.} %4,%3",
  "#",
};

static const char * const output_469[] = {
  "{sf%I2|subf%I2c} %0,%1,%2\n\t{aze.|addze.} %0,%3",
  "#",
};

static const char * const output_474[] = {
  "{sf%I2|subf%I2c} %4,%1,%2\n\t{sfe|subfe} %4,%4,%4\n\tandc. %4,%3,%4",
  "#",
};

static const char * const output_475[] = {
  "{sf%I2|subf%I2c} %0,%1,%2\n\t{sfe|subfe} %0,%0,%0\n\tandc. %0,%3,%0",
  "#",
};

static const char * const output_484[] = {
  "{sf|subfc} %0,%2,%1\n\t{sfe|subfe} %0,%0,%0",
  "{ai|addic} %0,%1,%n2\n\t{sfe|subfe} %0,%0,%0",
};

static const char * const output_485[] = {
  "{sf|subfc} %0,%2,%1\n\t{sfe|subfe} %0,%0,%0",
  "{ai|addic} %0,%1,%n2\n\t{sfe|subfe} %0,%0,%0",
};

static const char * const output_486[] = {
  "{sf|subfc} %0,%2,%1\n\t{cal %0,0(0)|li %0,0}\n\t{ae|adde} %0,%0,%0",
  "{ai|addic} %0,%1,%n2\n\t{cal %0,0(0)|li %0,0}\n\t{ae|adde} %0,%0,%0",
};

static const char * const output_487[] = {
  "{sf|subfc} %0,%2,%1\n\t{cal %0,0(0)|li %0,0}\n\t{ae|adde} %0,%0,%0",
  "{ai|addic} %0,%1,%n2\n\t{cal %0,0(0)|li %0,0}\n\t{ae|adde} %0,%0,%0",
};

static const char * const output_488[] = {
  "{sf|subfc} %0,%2,%1\n\t{cal %0,0(0)|li %0,0}\n\t{ae.|adde.} %0,%0,%0",
  "{ai|addic} %0,%1,%n2\n\t{cal %0,0(0)|li %0,0}\n\t{ae.|adde.} %0,%0,%0",
  "#",
  "#",
};

static const char * const output_489[] = {
  "{sf|subfc} %0,%2,%1\n\t{cal %0,0(0)|li %0,0}\n\t{ae.|adde.} %0,%0,%0",
  "{ai|addic} %0,%1,%n2\n\t{cal %0,0(0)|li %0,0}\n\t{ae.|adde.} %0,%0,%0",
  "#",
  "#",
};

static const char * const output_490[] = {
  "{sf|subfc} %0,%2,%1\n\t{aze|addze} %0,%3",
  "{ai|addic} %0,%1,%n2\n\t{aze|addze} %0,%3",
};

static const char * const output_491[] = {
  "{sf|subfc} %0,%2,%1\n\t{aze|addze} %0,%3",
  "{ai|addic} %0,%1,%n2\n\t{aze|addze} %0,%3",
};

static const char * const output_492[] = {
  "{sf|subfc} %4,%2,%1\n\t{aze.|addze.} %4,%3",
  "{ai|addic} %4,%1,%n2\n\t{aze.|addze.} %4,%3",
  "#",
  "#",
};

static const char * const output_493[] = {
  "{sf|subfc} %0,%2,%1\n\t{aze.|addze.} %0,%3",
  "{ai|addic} %0,%1,%n2\n\t{aze.|addze.} %0,%3",
  "#",
  "#",
};

static const char * const output_494[] = {
  "{sf|subfc} %0,%2,%1\n\t{sfe|subfe} %0,%0,%0\n\tnand %0,%0,%0",
  "{sfi|subfic} %0,%1,-1\n\t{a%I2|add%I2c} %0,%0,%2\n\t{sfe|subfe} %0,%0,%0",
};

static const char * const output_495[] = {
  "{sf|subfc} %0,%2,%1\n\t{sfe|subfe} %0,%0,%0\n\tnand %0,%0,%0",
  "{sfi|subfic} %0,%1,-1\n\t{a%I2|add%I2c} %0,%0,%2\n\t{sfe|subfe} %0,%0,%0",
};

static const char * const output_496[] = {
  "{sf|subfc} %0,%2,%1\n\t{sfe|subfe} %0,%0,%0\n\tandc %0,%3,%0",
  "{ai|addic} %0,%1,%n2\n\t{sfe|subfe} %0,%0,%0\n\tandc %0,%3,%0",
};

static const char * const output_497[] = {
  "{sf|subfc} %0,%2,%1\n\t{sfe|subfe} %0,%0,%0\n\tandc %0,%3,%0",
  "{ai|addic} %0,%1,%n2\n\t{sfe|subfe} %0,%0,%0\n\tandc %0,%3,%0",
};

static const char * const output_498[] = {
  "{sf|subfc} %4,%2,%1\n\t{sfe|subfe} %4,%4,%4\n\tandc. %4,%3,%4",
  "{ai|addic} %4,%1,%n2\n\t{sfe|subfe} %4,%4,%4\n\tandc. %4,%3,%4",
  "#",
  "#",
};

static const char * const output_499[] = {
  "{sf|subfc} %0,%2,%1\n\t{sfe|subfe} %0,%0,%0\n\tandc. %0,%3,%0",
  "{ai|addic} %0,%1,%n2\n\t{sfe|subfe} %0,%0,%0\n\tandc. %0,%3,%0",
  "#",
  "#",
};

static const char * const output_502[] = {
  "{a|addc} %3,%1,%1\n\t{sfe|subfe} %3,%1,%3\n\t{aze.|addze.} %3,%2",
  "#",
};

static const char * const output_503[] = {
  "addc %3,%1,%1\n\tsubfe %3,%1,%3\n\taddze. %3,%2",
  "#",
};

static const char * const output_504[] = {
  "{a|addc} %0,%1,%1\n\t{sfe|subfe} %0,%1,%0\n\t{aze.|addze.} %0,%2",
  "#",
};

static const char * const output_505[] = {
  "addc %0,%1,%1\n\tsubfe %0,%1,%0\n\taddze. %0,%2",
  "#",
};

static const char *
output_516 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 13692 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

{
  return output_cbranch (operands[1], "%l0", 0, insn);
}
}

static const char *
output_517 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 13707 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

{
  return output_cbranch (operands[0], NULL, 0, insn);
}
}

static const char *
output_518 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 13723 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

{
  return output_cbranch (operands[1], "%l0", 1, insn);
}
}

static const char *
output_519 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 13738 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

{
  return output_cbranch (operands[0], NULL, 1, insn);
}
}

static const char *
output_525 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 13871 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

{
  if (cfun->iasm_noreturn)
    return ";{br|blr}";
  else
    return "{br|blr}";
}
}

static const char * const output_526[] = {
  "bctr",
  "{br|blr}",
};

static const char * const output_527[] = {
  "bctr",
  "{br|blr}",
};

static const char * const output_528[] = {
  "bctr",
  "{br|blr}",
};

static const char * const output_529[] = {
  "bctr",
  "{br|blr}",
};

static const char *
output_531 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 14011 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

{
  if (which_alternative != 0)
    return "#";
  else if (get_attr_length (insn) == 4)
    return "{bdn|bdnz} %l0";
  else
    return "bdz $+8\n\tb %l0";
}
}

static const char *
output_532 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 14011 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

{
  if (which_alternative != 0)
    return "#";
  else if (get_attr_length (insn) == 4)
    return "{bdn|bdnz} %l0";
  else
    return "bdz $+8\n\tb %l0";
}
}

static const char *
output_533 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 14035 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

{
  if (which_alternative != 0)
    return "#";
  else if (get_attr_length (insn) == 4)
    return "bdz %l0";
  else
    return "{bdn|bdnz} $+8\n\tb %l0";
}
}

static const char *
output_534 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 14035 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

{
  if (which_alternative != 0)
    return "#";
  else if (get_attr_length (insn) == 4)
    return "bdz %l0";
  else
    return "{bdn|bdnz} $+8\n\tb %l0";
}
}

static const char *
output_535 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 14061 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

{
  if (which_alternative != 0)
    return "#";
  else if (get_attr_length (insn) == 4)
    return "bdz %l0";
  else
    return "{bdn|bdnz} $+8\n\tb %l0";
}
}

static const char *
output_536 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 14061 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

{
  if (which_alternative != 0)
    return "#";
  else if (get_attr_length (insn) == 4)
    return "bdz %l0";
  else
    return "{bdn|bdnz} $+8\n\tb %l0";
}
}

static const char *
output_537 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 14085 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

{
  if (which_alternative != 0)
    return "#";
  else if (get_attr_length (insn) == 4)
    return "{bdn|bdnz} %l0";
  else
    return "bdz $+8\n\tb %l0";
}
}

static const char *
output_538 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 14085 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

{
  if (which_alternative != 0)
    return "#";
  else if (get_attr_length (insn) == 4)
    return "{bdn|bdnz} %l0";
  else
    return "bdz $+8\n\tb %l0";
}
}

static const char *
output_542 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 14193 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

{
  int mask = 0;
  int i;
  for (i = 0; i < XVECLEN (operands[0], 0); i++)
  {
    mask = INTVAL (XVECEXP (SET_SRC (XVECEXP (operands[0], 0, i)), 0, 1));
    operands[4] = GEN_INT (mask);
    output_asm_insn ("mfcr %1,%4", operands);
  }
  return "";
}
}

static const char *
output_547 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 14244 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

#if TARGET_MACHO
  const char *picbase = machopic_function_base_name ();
  char *tmp;
  operands[3] = gen_rtx_SYMBOL_REF (Pmode, ggc_alloc_string (picbase, -1));
  if (rs6000_default_long_calls)
    {
      tmp = ggc_alloc (strlen (XSTR (operands[2], 0)) + strlen (XSTR (operands[3], 0)) + 2);
      strcpy (tmp, output_call(insn, operands, 2, 2));
      strcat (tmp, "\n%3:");
      return tmp;
    }
  else
#endif
    return "bl %z2\n%3:";

}

static const char *
output_549 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 14301 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

{
  int mask = 0;
  int i;
  for (i = 0; i < XVECLEN (operands[0], 0); i++)
    mask |= INTVAL (XVECEXP (SET_SRC (XVECEXP (operands[0], 0, i)), 0, 1));
  operands[4] = GEN_INT (mask);
  return "mtcrf %4,%2";
}
}

static const char *
output_552 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 14341 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

{
  if (cfun->iasm_noreturn)
    return "; b%T0";
  else
    return "b%T0";
}
}

static const char *
output_553 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 14341 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

{
  if (cfun->iasm_noreturn)
    return "; b%T0";
  else
    return "b%T0";
}
}

static const char *
output_554 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 14363 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"
{
#if TARGET_MACHO
  if (rs6000_default_long_calls)
    return output_call(insn, operands, 2, 2);
  else
#endif
    return "b %z2";
 }
}

static const char *
output_555 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 14363 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"
{
#if TARGET_MACHO
  if (rs6000_default_long_calls)
    return output_call(insn, operands, 2, 2);
  else
#endif
    return "b %z2";
 }
}

static const char *
output_558 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 14410 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md"

{
  if (GET_CODE (operands[0]) == REG)
    return INTVAL (operands[1]) ? "dcbtst 0,%0" : "dcbt 0,%0";
  return INTVAL (operands[1]) ? "dcbtst %a0" : "dcbt %a0";
}
}

static const char * const output_605[] = {
  "and %0,%1,%2",
  "{rlinm|rlwinm} %0,%1,0,%m2,%M2",
  "{andil.|andi.} %0,%1,%b2",
  "{andiu.|andis.} %0,%1,%u2",
};

static const char * const output_606[] = {
  "and %0,%1,%2",
  "rldic%B2 %0,%1,0,%S2",
  "rlwinm %0,%1,0,%m2,%M2",
  "andi. %0,%1,%b2",
  "andis. %0,%1,%u2",
};

static const char * const output_609[] = {
  "lwarx %3,%y0\n\tand %2,%3,%1\n\tstwcx. %2,%y0\n\tbne- $-12",
  "lwarx %3,%y0\n\trlwinm %2,%3,0,%m1,%M1\n\tstwcx. %2,%y0\n\tbne- $-12",
  "lwarx %3,%y0\n\tandi. %2,%3,%b1\n\tstwcx. %2,%y0\n\tbne- $-12",
  "lwarx %3,%y0\n\tandis. %2,%3,%u1\n\tstwcx. %2,%y0\n\tbne- $-12",
};

static const char * const output_610[] = {
  "lwarx %3,%y0\n\t%q4 %2,%3,%1\n\tstwcx. %2,%y0\n\tbne- $-12",
  "lwarx %3,%y0\n\t%q4i %2,%3,%b1\n\tstwcx. %2,%y0\n\tbne- $-12",
  "lwarx %3,%y0\n\t%q4is %2,%3,%u1\n\tstwcx. %2,%y0\n\tbne- $-12",
};

static const char *
output_613 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 618 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md"
{
  if (TARGET_NO_LWSYNC)
    return "sync";
  else
    return ".long 0x7c2004ac";
}
}

static const char *
output_622 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 180 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md"
{
  switch (which_alternative)
    {
    case 0: return "stvx %1,%y0";
    case 1: return "lvx %0,%y1";
    case 2: return "vor %0,%1,%1";
    case 3: return "#";
    case 4: return "#";
    case 5: return "#";
    case 6: return output_vec_const_move (operands);
    default: gcc_unreachable ();
    }
}
}

static const char *
output_623 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 180 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md"
{
  switch (which_alternative)
    {
    case 0: return "stvx %1,%y0";
    case 1: return "lvx %0,%y1";
    case 2: return "vor %0,%1,%1";
    case 3: return "#";
    case 4: return "#";
    case 5: return "#";
    case 6: return output_vec_const_move (operands);
    default: gcc_unreachable ();
    }
}
}

static const char *
output_624 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 180 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md"
{
  switch (which_alternative)
    {
    case 0: return "stvx %1,%y0";
    case 1: return "lvx %0,%y1";
    case 2: return "vor %0,%1,%1";
    case 3: return "#";
    case 4: return "#";
    case 5: return "#";
    case 6: return output_vec_const_move (operands);
    default: gcc_unreachable ();
    }
}
}

static const char *
output_625 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 180 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md"
{
  switch (which_alternative)
    {
    case 0: return "stvx %1,%y0";
    case 1: return "lvx %0,%y1";
    case 2: return "vor %0,%1,%1";
    case 3: return "#";
    case 4: return "#";
    case 5: return "#";
    case 6: return output_vec_const_move (operands);
    default: gcc_unreachable ();
    }
}
}

static const char *
output_626 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 258 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md"
{
  if (TARGET_MACHO)
     return "mfspr %0,256";
  else
     return "mfvrsave %0";
}
}

static const char *
output_627 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 272 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md"
{
  if (TARGET_MACHO)
    return "mtspr 256,%1";
  else
    return "mtvrsave %1";
}
}



static const struct insn_operand_data operand_data[] = 
{
  {
    0,
    "",
    VOIDmode,
    0,
    0
  },
  {
    gpc_reg_operand,
    "=b",
    DImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "b",
    DImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "=f,!r",
    DFmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "b,b",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "=f,!r",
    DFmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "b,b",
    DImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "f",
    DFmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "b",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "f",
    DFmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "b",
    DImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "=f,!r",
    SFmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "b,b",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "=f,!r",
    SFmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "b,b",
    DImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "f,!r",
    SFmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "b,b",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "f,!r",
    SFmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "b,b",
    DImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "=r",
    DImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "b",
    DImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "b",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "r",
    DImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "b",
    DImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "=b*r",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "=b*r",
    DImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "=r,r",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "b,!*r",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "=r,r",
    DImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "b,!*r",
    DImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=l",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "s",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=l",
    DImode,
    0,
    1
  },
  {
    immediate_operand,
    "s",
    DImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "s",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "s",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "=r",
    DImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "r",
    DImode,
    0,
    1
  },
  {
    immediate_operand,
    "s",
    DImode,
    0,
    1
  },
  {
    immediate_operand,
    "s",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "c,*l,c,*l",
    DImode,
    0,
    1
  },
  {
    0,
    "g,g,g,g",
    VOIDmode,
    0,
    1
  },
  {
    immediate_operand,
    "O,O,n,n",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=l,l,l,l",
    SImode,
    0,
    0
  },
  {
    symbol_ref_operand,
    "s,s",
    DImode,
    0,
    1
  },
  {
    0,
    "g,g",
    VOIDmode,
    0,
    1
  },
  {
    immediate_operand,
    "O,n",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=l,l",
    SImode,
    0,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "c,*l,c,*l",
    DImode,
    0,
    1
  },
  {
    0,
    "g,g,g,g",
    VOIDmode,
    0,
    1
  },
  {
    immediate_operand,
    "O,O,n,n",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=l,l,l,l",
    SImode,
    0,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    symbol_ref_operand,
    "s,s",
    DImode,
    0,
    1
  },
  {
    0,
    "g,g",
    VOIDmode,
    0,
    1
  },
  {
    immediate_operand,
    "O,n",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=l,l",
    SImode,
    0,
    0
  },
  {
    symbol_ref_operand,
    "s,s",
    DImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    immediate_operand,
    "O,n",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "l,l",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    symbol_ref_operand,
    "s,s",
    DImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    immediate_operand,
    "O,n",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "l,l",
    SImode,
    0,
    1
  },
  {
    call_operand,
    "s,c",
    DImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "l,l",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    call_operand,
    "s,c",
    DImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "l,l",
    SImode,
    0,
    1
  },
  {
    any_parallel_operand,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "=l",
    DImode,
    0,
    1
  },
  {
    call_operand,
    "s",
    DImode,
    0,
    1
  },
  {
    0,
    "",
    DImode,
    0,
    1
  },
  {
    memory_operand,
    "=m",
    DFmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "f",
    DFmode,
    0,
    1
  },
  {
    any_parallel_operand,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "=l",
    DImode,
    0,
    1
  },
  {
    call_operand,
    "s",
    DImode,
    0,
    1
  },
  {
    any_operand,
    "=m",
    V4SImode,
    0,
    1
  },
  {
    register_operand,
    "v",
    V4SImode,
    0,
    1
  },
  {
    any_parallel_operand,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "=l",
    DImode,
    0,
    1
  },
  {
    call_operand,
    "s",
    DImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "=r",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=v",
    V4SImode,
    0,
    1
  },
  {
    any_operand,
    "m",
    V4SImode,
    0,
    1
  },
  {
    any_parallel_operand,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "=l",
    DImode,
    0,
    1
  },
  {
    call_operand,
    "s",
    DImode,
    0,
    1
  },
  {
    0,
    "",
    DImode,
    0,
    1
  },
  {
    any_operand,
    "=m",
    V4SImode,
    0,
    1
  },
  {
    register_operand,
    "v",
    V4SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "=r,r",
    DImode,
    0,
    1
  },
  {
    reg_or_mem_operand,
    "m,r",
    QImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "=r,r",
    DImode,
    0,
    1
  },
  {
    reg_or_mem_operand,
    "m,r",
    HImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "=r,r",
    DImode,
    0,
    1
  },
  {
    reg_or_mem_operand,
    "m,r",
    SImode,
    0,
    1
  },
  {
    cc_reg_operand,
    "=x,?y",
    CCmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "r,r",
    QImode,
    0,
    1
  },
  {
    scratch_operand,
    "=r,r",
    DImode,
    0,
    0
  },
  {
    cc_reg_operand,
    "=x,?y",
    CCmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "r,r",
    HImode,
    0,
    1
  },
  {
    scratch_operand,
    "=r,r",
    DImode,
    0,
    0
  },
  {
    cc_reg_operand,
    "=x,?y",
    CCmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "r,r",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=r,r",
    DImode,
    0,
    0
  },
  {
    gpc_reg_operand,
    "=r,r",
    DImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "r,r",
    QImode,
    0,
    1
  },
  {
    cc_reg_operand,
    "=x,?y",
    CCmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "=r,r",
    DImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "r,r",
    HImode,
    0,
    1
  },
  {
    cc_reg_operand,
    "=x,?y",
    CCmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "=r,r",
    DImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "r,r",
    SImode,
    0,
    1
  },
  {
    cc_reg_operand,
    "=x,?y",
    CCmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "=r",
    DImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "r",
    QImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "=r,r",
    DImode,
    0,
    1
  },
  {
    lwa_operand,
    "m,r",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "=r,r",
    SImode,
    0,
    1
  },
  {
    reg_or_mem_operand,
    "m,r",
    QImode,
    0,
    1
  },
  {
    cc_reg_operand,
    "=x,?y",
    CCmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "r,r",
    QImode,
    0,
    1
  },
  {
    scratch_operand,
    "=r,r",
    SImode,
    0,
    0
  },
  {
    gpc_reg_operand,
    "=r,r",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "r,r",
    QImode,
    0,
    1
  },
  {
    cc_reg_operand,
    "=x,?y",
    CCmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "r",
    QImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "=r,r",
    HImode,
    0,
    1
  },
  {
    reg_or_mem_operand,
    "m,r",
    QImode,
    0,
    1
  },
  {
    cc_reg_operand,
    "=x,?y",
    CCmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "r,r",
    QImode,
    0,
    1
  },
  {
    scratch_operand,
    "=r,r",
    HImode,
    0,
    0
  },
  {
    gpc_reg_operand,
    "=r,r",
    HImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "r,r",
    QImode,
    0,
    1
  },
  {
    cc_reg_operand,
    "=x,?y",
    CCmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "=r",
    HImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "r",
    QImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "=r,r",
    SImode,
    0,
    1
  },
  {
    reg_or_mem_operand,
    "m,r",
    HImode,
    0,
    1
  },
  {
    cc_reg_operand,
    "=x,?y",
    CCmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "r,r",
    HImode,
    0,
    1
  },
  {
    scratch_operand,
    "=r,r",
    SImode,
    0,
    0
  },
  {
    gpc_reg_operand,
    "=r,r",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "r,r",
    HImode,
    0,
    1
  },
  {
    cc_reg_operand,
    "=x,?y",
    CCmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "r",
    HImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    cc_reg_operand,
    "=x",
    CCmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "0",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "r",
    HImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "0",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "%r",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    cc_reg_operand,
    "=x",
    CCmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "0",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "%r",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "0",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "%r",
    HImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "r",
    HImode,
    0,
    1
  },
  {
    cc_reg_operand,
    "=x",
    CCmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "0",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "%r",
    HImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "r",
    HImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "0",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    cc_reg_operand,
    "=x",
    CCmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "=r,r,?r,r",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "%r,b,r,b",
    SImode,
    0,
    1
  },
  {
    add_operand,
    "r,I,I,L",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "=r,r,?r,r",
    DImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "%r,b,r,b",
    DImode,
    0,
    1
  },
  {
    add_operand,
    "r,I,I,L",
    DImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "=b",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "b",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    cc_reg_operand,
    "=x,x,?y,?y",
    CCmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "%r,r,r,r",
    SImode,
    0,
    1
  },
  {
    reg_or_short_operand,
    "r,I,r,I",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=r,r,r,r",
    SImode,
    0,
    0
  },
  {
    cc_reg_operand,
    "=x,x,?y,?y",
    CCmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "%r,r,r,r",
    DImode,
    0,
    1
  },
  {
    reg_or_short_operand,
    "r,I,r,I",
    DImode,
    0,
    1
  },
  {
    scratch_operand,
    "=r,r,r,r",
    DImode,
    0,
    0
  },
  {
    gpc_reg_operand,
    "=r,r,r,r",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "%r,r,r,r",
    SImode,
    0,
    1
  },
  {
    reg_or_short_operand,
    "r,I,r,I",
    SImode,
    0,
    1
  },
  {
    cc_reg_operand,
    "=x,x,?y,?y",
    CCmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "=r,r,r,r",
    DImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "%r,r,r,r",
    DImode,
    0,
    1
  },
  {
    reg_or_short_operand,
    "r,I,r,I",
    DImode,
    0,
    1
  },
  {
    cc_reg_operand,
    "=x,x,?y,?y",
    CCmode,
    0,
    1
  },
  {
    cc_reg_operand,
    "=x,?y",
    CCmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "r,r",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=r,r",
    SImode,
    0,
    0
  },
  {
    cc_reg_operand,
    "=x,?y",
    CCmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "r,r",
    DImode,
    0,
    1
  },
  {
    scratch_operand,
    "=r,r",
    DImode,
    0,
    0
  },
  {
    gpc_reg_operand,
    "=r,r",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "r,r",
    SImode,
    0,
    1
  },
  {
    cc_reg_operand,
    "=x,?y",
    CCmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "=r,r",
    DImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "r,r",
    DImode,
    0,
    1
  },
  {
    cc_reg_operand,
    "=x,?y",
    CCmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    reg_or_short_operand,
    "rI",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "=r,r",
    SImode,
    0,
    1
  },
  {
    reg_or_short_operand,
    "r,I",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "r,r",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "=r,r",
    DImode,
    0,
    1
  },
  {
    reg_or_short_operand,
    "r,I",
    DImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "r,r",
    DImode,
    0,
    1
  },
  {
    cc_reg_operand,
    "=x,?y",
    CCmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "r,r",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "r,r",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=r,r",
    SImode,
    0,
    0
  },
  {
    cc_reg_operand,
    "=x,?y",
    CCmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "r,r",
    DImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "r,r",
    DImode,
    0,
    1
  },
  {
    scratch_operand,
    "=r,r",
    DImode,
    0,
    0
  },
  {
    gpc_reg_operand,
    "=r,r",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "r,r",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "r,r",
    SImode,
    0,
    1
  },
  {
    cc_reg_operand,
    "=x,?y",
    CCmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "=r,r",
    DImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "r,r",
    DImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "r,r",
    DImode,
    0,
    1
  },
  {
    cc_reg_operand,
    "=x,?y",
    CCmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "=&r,r",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "r,0",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=&r,&r",
    SImode,
    0,
    0
  },
  {
    gpc_reg_operand,
    "=r,r",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "%r,r",
    SImode,
    0,
    1
  },
  {
    reg_or_short_operand,
    "r,I",
    SImode,
    0,
    1
  },
  {
    cc_reg_operand,
    "=x,?y",
    CCmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "%r,r",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "r,r",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=r,r",
    SImode,
    0,
    0
  },
  {
    gpc_reg_operand,
    "=r,r",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "%r,r",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "r,r",
    SImode,
    0,
    1
  },
  {
    cc_reg_operand,
    "=x,?y",
    CCmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "=r",
    DImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "r",
    DImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "r",
    DImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    exact_log2_cint_operand,
    "N",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "=r",
    DImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "r",
    DImode,
    0,
    1
  },
  {
    exact_log2_cint_operand,
    "N",
    DImode,
    0,
    1
  },
  {
    cc_reg_operand,
    "=x,?y",
    CCmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "r,r",
    SImode,
    0,
    1
  },
  {
    exact_log2_cint_operand,
    "N,N",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=r,r",
    SImode,
    0,
    0
  },
  {
    cc_reg_operand,
    "=x,?y",
    CCmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "r,r",
    DImode,
    0,
    1
  },
  {
    exact_log2_cint_operand,
    "N,N",
    DImode,
    0,
    1
  },
  {
    scratch_operand,
    "=r,r",
    DImode,
    0,
    0
  },
  {
    gpc_reg_operand,
    "=r,r",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "r,r",
    SImode,
    0,
    1
  },
  {
    exact_log2_cint_operand,
    "N,N",
    SImode,
    0,
    1
  },
  {
    cc_reg_operand,
    "=x,?y",
    CCmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "=r,r",
    DImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "r,r",
    DImode,
    0,
    1
  },
  {
    exact_log2_cint_operand,
    "N,N",
    DImode,
    0,
    1
  },
  {
    cc_reg_operand,
    "=x,?y",
    CCmode,
    0,
    1
  },
  {
    scratch_operand,
    "=l",
    SImode,
    0,
    0
  },
  {
    scratch_operand,
    "=x",
    CCmode,
    0,
    0
  },
  {
    gpc_reg_operand,
    "=r,r,r,r",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "%r,r,r,r",
    SImode,
    0,
    1
  },
  {
    and_operand,
    "?r,T,K,L",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=X,X,x,x",
    CCmode,
    0,
    0
  },
  {
    cc_reg_operand,
    "=x,x,x,x,?y,??y,??y,?y",
    CCmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "%r,r,r,r,r,r,r,r",
    SImode,
    0,
    1
  },
  {
    and_operand,
    "r,K,L,T,r,K,L,T",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=r,r,r,r,r,r,r,r",
    SImode,
    0,
    0
  },
  {
    scratch_operand,
    "=X,X,X,X,X,x,x,X",
    CCmode,
    0,
    0
  },
  {
    gpc_reg_operand,
    "=r,r,r,r,r,r,r,r",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "%r,r,r,r,r,r,r,r",
    SImode,
    0,
    1
  },
  {
    and_operand,
    "r,K,L,T,r,K,L,T",
    SImode,
    0,
    1
  },
  {
    cc_reg_operand,
    "=x,x,x,x,?y,??y,??y,?y",
    CCmode,
    0,
    1
  },
  {
    scratch_operand,
    "=X,X,X,X,X,x,x,X",
    CCmode,
    0,
    0
  },
  {
    gpc_reg_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    mask_operand_wrap,
    "i",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "=r,r,r",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "%r,r,r",
    SImode,
    0,
    1
  },
  {
    logical_operand,
    "r,K,L",
    SImode,
    0,
    1
  },
  {
    boolean_or_operator,
    "",
    SImode,
    0,
    0
  },
  {
    cc_reg_operand,
    "=x,?y",
    CCmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "%r,r",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "r,r",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=r,r",
    SImode,
    0,
    0
  },
  {
    boolean_or_operator,
    "",
    SImode,
    0,
    0
  },
  {
    gpc_reg_operand,
    "=r,r",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "%r,r",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "r,r",
    SImode,
    0,
    1
  },
  {
    cc_reg_operand,
    "=x,?y",
    CCmode,
    0,
    1
  },
  {
    boolean_operator,
    "",
    SImode,
    0,
    0
  },
  {
    gpc_reg_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    boolean_operator,
    "",
    SImode,
    0,
    0
  },
  {
    cc_reg_operand,
    "=x,?y",
    CCmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "r,r",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "r,r",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=r,r",
    SImode,
    0,
    0
  },
  {
    boolean_operator,
    "",
    SImode,
    0,
    0
  },
  {
    gpc_reg_operand,
    "+r",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    mask_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "0",
    SImode,
    0,
    1
  },
  {
    mask_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "+r",
    DImode,
    0,
    1
  },
  {
    const_int_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "r",
    DImode,
    0,
    1
  },
  {
    const_int_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    cc_reg_operand,
    "=x,?y",
    CCmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "r,r",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "i,i",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "i,i",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=r,r",
    SImode,
    0,
    0
  },
  {
    gpc_reg_operand,
    "=r,r",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "r,r",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "i,i",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "i,i",
    SImode,
    0,
    1
  },
  {
    cc_reg_operand,
    "=x,?y",
    CCmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "=r",
    DImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "r",
    DImode,
    0,
    1
  },
  {
    const_int_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "=x",
    CCmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "r",
    DImode,
    0,
    1
  },
  {
    const_int_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=r",
    DImode,
    0,
    0
  },
  {
    gpc_reg_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    reg_or_cint_operand,
    "ri",
    SImode,
    0,
    1
  },
  {
    cc_reg_operand,
    "=x,?y",
    CCmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "r,r",
    SImode,
    0,
    1
  },
  {
    reg_or_cint_operand,
    "ri,ri",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=r,r",
    SImode,
    0,
    0
  },
  {
    gpc_reg_operand,
    "=r,r",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "r,r",
    SImode,
    0,
    1
  },
  {
    reg_or_cint_operand,
    "ri,ri",
    SImode,
    0,
    1
  },
  {
    cc_reg_operand,
    "=x,?y",
    CCmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    reg_or_cint_operand,
    "ri",
    SImode,
    0,
    1
  },
  {
    mask_operand,
    "n",
    SImode,
    0,
    1
  },
  {
    cc_reg_operand,
    "=x,?y",
    CCmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "r,r",
    SImode,
    0,
    1
  },
  {
    reg_or_cint_operand,
    "ri,ri",
    SImode,
    0,
    1
  },
  {
    mask_operand,
    "n,n",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=r,r",
    SImode,
    0,
    0
  },
  {
    gpc_reg_operand,
    "=r,r",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "r,r",
    SImode,
    0,
    1
  },
  {
    reg_or_cint_operand,
    "ri,ri",
    SImode,
    0,
    1
  },
  {
    mask_operand,
    "n,n",
    SImode,
    0,
    1
  },
  {
    cc_reg_operand,
    "=x,?y",
    CCmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    mask_operand,
    "n",
    SImode,
    0,
    1
  },
  {
    cc_reg_operand,
    "=x,?y",
    CCmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "r,r",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "i,i",
    SImode,
    0,
    1
  },
  {
    mask_operand,
    "n,n",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=r,r",
    SImode,
    0,
    0
  },
  {
    gpc_reg_operand,
    "=r,r",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "r,r",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "i,i",
    SImode,
    0,
    1
  },
  {
    mask_operand,
    "n,n",
    SImode,
    0,
    1
  },
  {
    cc_reg_operand,
    "=x,?y",
    CCmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "=r,r",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "r,r",
    SImode,
    0,
    1
  },
  {
    reg_or_cint_operand,
    "O,ri",
    SImode,
    0,
    1
  },
  {
    cc_reg_operand,
    "=x,x,?y,?y",
    CCmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "r,r,r,r",
    SImode,
    0,
    1
  },
  {
    reg_or_cint_operand,
    "O,ri,O,ri",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=X,r,X,r",
    SImode,
    0,
    0
  },
  {
    gpc_reg_operand,
    "=r,r,r,r",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "r,r,r,r",
    SImode,
    0,
    1
  },
  {
    reg_or_cint_operand,
    "O,ri,O,ri",
    SImode,
    0,
    1
  },
  {
    cc_reg_operand,
    "=x,x,?y,?y",
    CCmode,
    0,
    1
  },
  {
    cc_reg_operand,
    "=x,?y",
    CCmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "r,r",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "i,i",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=r,r",
    SImode,
    0,
    0
  },
  {
    gpc_reg_operand,
    "=r,r",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "r,r",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "i,i",
    SImode,
    0,
    1
  },
  {
    cc_reg_operand,
    "=x,?y",
    CCmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "=f,?f,f",
    DFmode,
    0,
    1
  },
  {
    reg_or_mem_operand,
    "0,f,m",
    SFmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "=f",
    SFmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "f",
    DFmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "=f",
    SFmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "f",
    SFmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "=f",
    SFmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "%f",
    SFmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "f",
    SFmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "=f",
    SFmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "f",
    SFmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "f",
    SFmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "=f",
    SFmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "%f",
    SFmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "f",
    SFmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "f",
    SFmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "=f",
    SFmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "f",
    SFmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "f",
    SFmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "f",
    SFmode,
    0,
    1
  },
  {
    zero_fp_constant,
    "F",
    SFmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "=f",
    SFmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "f",
    DFmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "f",
    SFmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "f",
    SFmode,
    0,
    1
  },
  {
    zero_fp_constant,
    "F",
    DFmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "=f",
    DFmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "f",
    DFmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "=f",
    DFmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "%f",
    DFmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "f",
    DFmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "=f",
    DFmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "f",
    DFmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "f",
    DFmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "=f",
    DFmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "%f",
    DFmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "f",
    DFmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "f",
    DFmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "=f",
    DFmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "f",
    DFmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "f",
    DFmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "f",
    DFmode,
    0,
    1
  },
  {
    zero_fp_constant,
    "F",
    DFmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "=f",
    DFmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "f",
    SFmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "f",
    DFmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "f",
    DFmode,
    0,
    1
  },
  {
    zero_fp_constant,
    "F",
    SFmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "=&f",
    DFmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "f",
    DFmode,
    0,
    1
  },
  {
    memory_operand,
    "=o",
    DFmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "=&f",
    DFmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "=&r",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "f",
    DFmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "=f",
    DImode,
    0,
    1
  },
  {
    memory_operand,
    "=o",
    DImode,
    0,
    1
  },
  {
    memory_operand,
    "=Z",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "f",
    DFmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "=f",
    DImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "f",
    DFmode,
    0,
    1
  },
  {
    memory_operand,
    "=Z",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "f",
    DImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "=f",
    DFmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "*f",
    DImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "=f",
    DFmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "=o",
    DImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "=r",
    DImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "=f",
    DImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "=*f",
    DImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "f",
    DFmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "=f",
    SFmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "*f",
    DImode,
    0,
    1
  },
  {
    scratch_operand,
    "=f",
    DFmode,
    0,
    0
  },
  {
    gpc_reg_operand,
    "=&r,&r,r,r",
    DImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "%r,r,0,0",
    DImode,
    0,
    1
  },
  {
    reg_or_short_operand,
    "r,I,r,I",
    DImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "=&r,&r,r,r,r",
    DImode,
    0,
    1
  },
  {
    reg_or_short_operand,
    "r,I,0,r,I",
    DImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "r,r,r,0,0",
    DImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "=&r,r",
    DImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "r,0",
    DImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "=&r",
    DImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "%r",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "=&r,&r",
    DImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "r,r",
    DImode,
    0,
    1
  },
  {
    const_int_operand,
    "M,i",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "r",
    DImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "=&r,r",
    DImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "r,0",
    DImode,
    0,
    1
  },
  {
    scratch_operand,
    "=&r,&r",
    DImode,
    0,
    0
  },
  {
    gpc_reg_operand,
    "=r,r",
    DImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "%r,r",
    DImode,
    0,
    1
  },
  {
    reg_or_short_operand,
    "r,I",
    DImode,
    0,
    1
  },
  {
    cc_reg_operand,
    "=x,?y",
    CCmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "%r,r",
    DImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "r,r",
    DImode,
    0,
    1
  },
  {
    scratch_operand,
    "=r,r",
    DImode,
    0,
    0
  },
  {
    gpc_reg_operand,
    "=r,r",
    DImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "%r,r",
    DImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "r,r",
    DImode,
    0,
    1
  },
  {
    cc_reg_operand,
    "=x,?y",
    CCmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "=r",
    DImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "%r",
    DImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "r",
    DImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "=r",
    DImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "r",
    DImode,
    0,
    1
  },
  {
    reg_or_cint_operand,
    "ri",
    DImode,
    0,
    1
  },
  {
    cc_reg_operand,
    "=x,?y",
    CCmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "r,r",
    DImode,
    0,
    1
  },
  {
    reg_or_cint_operand,
    "ri,ri",
    DImode,
    0,
    1
  },
  {
    scratch_operand,
    "=r,r",
    DImode,
    0,
    0
  },
  {
    gpc_reg_operand,
    "=r,r",
    DImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "r,r",
    DImode,
    0,
    1
  },
  {
    reg_or_cint_operand,
    "ri,ri",
    DImode,
    0,
    1
  },
  {
    cc_reg_operand,
    "=x,?y",
    CCmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "=r",
    DImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "r",
    DImode,
    0,
    1
  },
  {
    reg_or_cint_operand,
    "ri",
    DImode,
    0,
    1
  },
  {
    mask64_operand,
    "n",
    DImode,
    0,
    1
  },
  {
    cc_reg_operand,
    "=x,?y",
    CCmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "r,r",
    DImode,
    0,
    1
  },
  {
    reg_or_cint_operand,
    "ri,ri",
    DImode,
    0,
    1
  },
  {
    mask64_operand,
    "n,n",
    DImode,
    0,
    1
  },
  {
    scratch_operand,
    "=r,r",
    DImode,
    0,
    0
  },
  {
    gpc_reg_operand,
    "=r,r",
    DImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "r,r",
    DImode,
    0,
    1
  },
  {
    reg_or_cint_operand,
    "ri,ri",
    DImode,
    0,
    1
  },
  {
    mask64_operand,
    "n,n",
    DImode,
    0,
    1
  },
  {
    cc_reg_operand,
    "=x,?y",
    CCmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "=r",
    DImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "r",
    DImode,
    0,
    1
  },
  {
    reg_or_cint_operand,
    "ri",
    SImode,
    0,
    1
  },
  {
    cc_reg_operand,
    "=x,?y",
    CCmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "r,r",
    DImode,
    0,
    1
  },
  {
    reg_or_cint_operand,
    "ri,ri",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=r,r",
    DImode,
    0,
    0
  },
  {
    gpc_reg_operand,
    "=r,r",
    DImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "r,r",
    DImode,
    0,
    1
  },
  {
    reg_or_cint_operand,
    "ri,ri",
    SImode,
    0,
    1
  },
  {
    cc_reg_operand,
    "=x,?y",
    CCmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "=r",
    DImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "r",
    DImode,
    0,
    1
  },
  {
    const_int_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "n",
    DImode,
    0,
    1
  },
  {
    cc_reg_operand,
    "=x,?y",
    CCmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "r,r",
    DImode,
    0,
    1
  },
  {
    const_int_operand,
    "i,i",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "n,n",
    DImode,
    0,
    1
  },
  {
    scratch_operand,
    "=r,r",
    DImode,
    0,
    0
  },
  {
    gpc_reg_operand,
    "=r,r",
    DImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "r,r",
    DImode,
    0,
    1
  },
  {
    const_int_operand,
    "i,i",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "n,n",
    DImode,
    0,
    1
  },
  {
    cc_reg_operand,
    "=x,?y",
    CCmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "=r",
    DImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "r",
    DImode,
    0,
    1
  },
  {
    const_int_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    mask64_operand,
    "n",
    DImode,
    0,
    1
  },
  {
    cc_reg_operand,
    "=x,?y",
    CCmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "r,r",
    DImode,
    0,
    1
  },
  {
    const_int_operand,
    "i,i",
    SImode,
    0,
    1
  },
  {
    mask64_operand,
    "n,n",
    DImode,
    0,
    1
  },
  {
    scratch_operand,
    "=r,r",
    DImode,
    0,
    0
  },
  {
    gpc_reg_operand,
    "=r,r",
    DImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "r,r",
    DImode,
    0,
    1
  },
  {
    const_int_operand,
    "i,i",
    SImode,
    0,
    1
  },
  {
    mask64_operand,
    "n,n",
    DImode,
    0,
    1
  },
  {
    cc_reg_operand,
    "=x,?y",
    CCmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "=r,r,r,r,r,r",
    DImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "%r,r,r,r,r,r",
    DImode,
    0,
    1
  },
  {
    and64_2_operand,
    "?r,S,T,K,J,t",
    DImode,
    0,
    1
  },
  {
    scratch_operand,
    "=X,X,X,x,x,X",
    CCmode,
    0,
    0
  },
  {
    cc_reg_operand,
    "=x,x,x,x,x,x,?y,?y,?y,??y,??y,?y",
    CCmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "%r,r,r,r,r,r,r,r,r,r,r,r",
    DImode,
    0,
    1
  },
  {
    and64_2_operand,
    "r,S,T,K,J,t,r,S,T,K,J,t",
    DImode,
    0,
    1
  },
  {
    scratch_operand,
    "=r,r,r,r,r,r,r,r,r,r,r,r",
    DImode,
    0,
    0
  },
  {
    scratch_operand,
    "=X,X,X,X,X,X,X,X,X,x,x,X",
    CCmode,
    0,
    0
  },
  {
    gpc_reg_operand,
    "=r,r,r,r,r,r,r,r,r,r,r,r",
    DImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "%r,r,r,r,r,r,r,r,r,r,r,r",
    DImode,
    0,
    1
  },
  {
    and64_2_operand,
    "r,S,T,K,J,t,r,S,T,K,J,t",
    DImode,
    0,
    1
  },
  {
    cc_reg_operand,
    "=x,x,x,x,x,x,?y,?y,?y,??y,??y,?y",
    CCmode,
    0,
    1
  },
  {
    scratch_operand,
    "=X,X,X,X,X,X,X,X,X,x,x,X",
    CCmode,
    0,
    0
  },
  {
    gpc_reg_operand,
    "=r,r,r",
    DImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "%r,r,r",
    DImode,
    0,
    1
  },
  {
    logical_operand,
    "r,K,JF",
    DImode,
    0,
    1
  },
  {
    boolean_or_operator,
    "",
    DImode,
    0,
    0
  },
  {
    cc_reg_operand,
    "=x,?y",
    CCmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "%r,r",
    DImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "r,r",
    DImode,
    0,
    1
  },
  {
    scratch_operand,
    "=r,r",
    DImode,
    0,
    0
  },
  {
    boolean_or_operator,
    "",
    DImode,
    0,
    0
  },
  {
    gpc_reg_operand,
    "=r,r",
    DImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "%r,r",
    DImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "r,r",
    DImode,
    0,
    1
  },
  {
    cc_reg_operand,
    "=x,?y",
    CCmode,
    0,
    1
  },
  {
    boolean_operator,
    "",
    DImode,
    0,
    0
  },
  {
    gpc_reg_operand,
    "=r",
    DImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "r",
    DImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "r",
    DImode,
    0,
    1
  },
  {
    boolean_operator,
    "",
    DImode,
    0,
    0
  },
  {
    cc_reg_operand,
    "=x,?y",
    CCmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "r,r",
    DImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "r,r",
    DImode,
    0,
    1
  },
  {
    scratch_operand,
    "=r,r",
    DImode,
    0,
    0
  },
  {
    boolean_operator,
    "",
    DImode,
    0,
    0
  },
  {
    gpc_reg_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "b",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    rs6000_nonimmediate_operand,
    "=r,r,r,m,r,r,r,r,r,*q,*c*l,*h,*h",
    SImode,
    0,
    1
  },
  {
    input_operand,
    "r,U,m,r,I,L,n,R,*h,r,r,r,0",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "=r,r,r",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "0,r,r",
    SImode,
    0,
    1
  },
  {
    cc_reg_operand,
    "=y,x,?y",
    CCmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "=r,r,r",
    DImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "0,r,r",
    DImode,
    0,
    1
  },
  {
    cc_reg_operand,
    "=y,x,?y",
    CCmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=r,r,m,r,r,*q,*c*l,*h",
    HImode,
    0,
    1
  },
  {
    input_operand,
    "r,m,r,i,*h,r,r,0",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=r,r,m,r,r,*q,*c*l,*h",
    QImode,
    0,
    1
  },
  {
    input_operand,
    "r,m,r,i,*h,r,r,0",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=y,x,?y,y,r,r,r,r,r,q,cl,r,m",
    CCmode,
    0,
    1
  },
  {
    general_operand,
    "y,r,r,O,x,y,r,I,h,r,r,m,r",
    CCmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=!r,!r,m,f,f,m,*c*l,*q,!r,*h,!r,!r",
    SFmode,
    0,
    1
  },
  {
    input_operand,
    "r,m,r,f,m,f,r,r,h,0,G,Fn",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=r,cl,q,r,r,m,r,r,r,r,r,*h",
    SFmode,
    0,
    1
  },
  {
    input_operand,
    "r,r,r,h,m,r,I,L,R,G,Fn,0",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=!r,??r,m,f,f,m,!r,!r,!r",
    DFmode,
    0,
    1
  },
  {
    input_operand,
    "r,m,r,f,m,f,G,H,F",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=r,r,m,r,r,r",
    DFmode,
    0,
    1
  },
  {
    input_operand,
    "r,m,r,G,H,F",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=Y,r,!r,f,f,m,*c*l,!r,*h,!r,!r,!r",
    DFmode,
    0,
    1
  },
  {
    input_operand,
    "r,Y,r,f,m,f,r,h,0,G,H,F",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=r,Y,r,cl,r,r,r,r,*h",
    DFmode,
    0,
    1
  },
  {
    input_operand,
    "Y,r,r,r,h,G,H,F,0",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=o,f,f,r,Y,r",
    TFmode,
    0,
    1
  },
  {
    input_operand,
    "f,o,f,YGHF,r,r",
    TFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=r,Y,r",
    TFmode,
    0,
    1
  },
  {
    input_operand,
    "YGHF,r,r",
    TFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=o,f,&f,r",
    TFmode,
    0,
    1
  },
  {
    input_operand,
    "fr,mf,mf,rmGHF",
    DFmode,
    0,
    1
  },
  {
    zero_reg_mem_operand,
    "rf,m,f,n",
    DFmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "=f,?f",
    DFmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "0,f",
    TFmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "=f",
    DFmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "f",
    TFmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "=f",
    SFmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "f",
    TFmode,
    0,
    1
  },
  {
    scratch_operand,
    "=f",
    DFmode,
    0,
    0
  },
  {
    gpc_reg_operand,
    "=f",
    DFmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "f",
    TFmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "=&f",
    DFmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "f",
    TFmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "=f",
    DFmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "=&f",
    DFmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "=f",
    DImode,
    0,
    1
  },
  {
    memory_operand,
    "=o",
    DImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "=f",
    TFmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "f",
    TFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=o<>,r,r,*f,*f,m,r",
    DImode,
    0,
    1
  },
  {
    input_operand,
    "r,r,m,f,m,f,IJKnGHF",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=r,Y,r,r,r,r,r,*f,*f,Y,r,*h,*h",
    DImode,
    0,
    1
  },
  {
    input_operand,
    "Y,r,r,I,L,nF,R,f,Y,f,*h,r,0",
    DImode,
    0,
    1
  },
  {
    reg_or_mem_operand,
    "=Q,o<>,????r,????r,????r,r",
    TImode,
    0,
    1
  },
  {
    input_operand,
    "r,r,r,Q,m,n",
    TImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=r,o<>,r",
    TImode,
    0,
    1
  },
  {
    input_operand,
    "r,r,m",
    TImode,
    0,
    1
  },
  {
    load_multiple_operation,
    "",
    VOIDmode,
    0,
    0
  },
  {
    gpc_reg_operand,
    "b",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    SImode,
    0,
    1
  },
  {
    store_multiple_operation,
    "",
    VOIDmode,
    0,
    0
  },
  {
    gpc_reg_operand,
    "b",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=X",
    SImode,
    0,
    0
  },
  {
    gpc_reg_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "b",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "b",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=X",
    SImode,
    0,
    0
  },
  {
    gpc_reg_operand,
    "b",
    DImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "b",
    DImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=X",
    SImode,
    0,
    0
  },
  {
    gpc_reg_operand,
    "b",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "b",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=&r",
    DImode,
    0,
    0
  },
  {
    scratch_operand,
    "=X",
    SImode,
    0,
    0
  },
  {
    gpc_reg_operand,
    "b",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "b",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=&r",
    SImode,
    0,
    0
  },
  {
    scratch_operand,
    "=X",
    SImode,
    0,
    0
  },
  {
    gpc_reg_operand,
    "b",
    DImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "b",
    DImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=&r",
    SImode,
    0,
    0
  },
  {
    scratch_operand,
    "=X",
    SImode,
    0,
    0
  },
  {
    gpc_reg_operand,
    "=b,b",
    DImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "0,0",
    DImode,
    0,
    1
  },
  {
    reg_or_aligned_short_operand,
    "r,I",
    DImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "=r,r",
    DImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "=b,b",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "0,0",
    SImode,
    0,
    1
  },
  {
    reg_or_aligned_short_operand,
    "r,I",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "r,r",
    DImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "=b,b",
    DImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "0,0",
    DImode,
    0,
    1
  },
  {
    reg_or_aligned_short_operand,
    "r,I",
    DImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "r,r",
    DImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "=b,b",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "0,0",
    SImode,
    0,
    1
  },
  {
    reg_or_short_operand,
    "r,I",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "=r,r",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "=b",
    DImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "0",
    DImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "r",
    DImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "=r",
    DImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "=b,b",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "0,0",
    SImode,
    0,
    1
  },
  {
    reg_or_short_operand,
    "r,I",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "r,r",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "=b,b",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "0,0",
    SImode,
    0,
    1
  },
  {
    reg_or_short_operand,
    "r,I",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "=r,r",
    HImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "=b,b",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "0,0",
    SImode,
    0,
    1
  },
  {
    reg_or_short_operand,
    "r,I",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "r,r",
    HImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "=b,b",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "0,0",
    SImode,
    0,
    1
  },
  {
    reg_or_short_operand,
    "r,I",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "=r,r",
    QImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "=b,b",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "0,0",
    SImode,
    0,
    1
  },
  {
    reg_or_short_operand,
    "r,I",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "r,r",
    QImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "=b,b",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "0,0",
    SImode,
    0,
    1
  },
  {
    reg_or_short_operand,
    "r,I",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "=f,f",
    SFmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "=b,b",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "0,0",
    SImode,
    0,
    1
  },
  {
    reg_or_short_operand,
    "r,I",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "f,f",
    SFmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "=b,b",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "0,0",
    SImode,
    0,
    1
  },
  {
    reg_or_short_operand,
    "r,I",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "=r,r",
    SFmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "=b,b",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "0,0",
    SImode,
    0,
    1
  },
  {
    reg_or_short_operand,
    "r,I",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "r,r",
    SFmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "=b,b",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "0,0",
    SImode,
    0,
    1
  },
  {
    reg_or_short_operand,
    "r,I",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "=f,f",
    DFmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "=b,b",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "0,0",
    SImode,
    0,
    1
  },
  {
    reg_or_short_operand,
    "r,I",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "f,f",
    DFmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "=f",
    V2DFmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    V2DFmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "f",
    V2DFmode,
    0,
    1
  },
  {
    current_file_function_operand,
    "s,s",
    SImode,
    0,
    1
  },
  {
    0,
    "g,g",
    VOIDmode,
    0,
    1
  },
  {
    immediate_operand,
    "O,n",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=l,l",
    SImode,
    0,
    0
  },
  {
    current_file_function_operand,
    "s,s",
    DImode,
    0,
    1
  },
  {
    0,
    "g,g",
    VOIDmode,
    0,
    1
  },
  {
    immediate_operand,
    "O,n",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=l,l",
    SImode,
    0,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    current_file_function_operand,
    "s,s",
    SImode,
    0,
    1
  },
  {
    0,
    "g,g",
    VOIDmode,
    0,
    1
  },
  {
    immediate_operand,
    "O,n",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=l,l",
    SImode,
    0,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    current_file_function_operand,
    "s,s",
    DImode,
    0,
    1
  },
  {
    0,
    "g,g",
    VOIDmode,
    0,
    1
  },
  {
    immediate_operand,
    "O,n",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=l,l",
    SImode,
    0,
    0
  },
  {
    register_operand,
    "c,*l,c,*l",
    SImode,
    0,
    1
  },
  {
    0,
    "g,g,g,g",
    VOIDmode,
    0,
    1
  },
  {
    immediate_operand,
    "O,O,n,n",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=l,l,l,l",
    SImode,
    0,
    0
  },
  {
    symbol_ref_operand,
    "s,s",
    SImode,
    0,
    1
  },
  {
    0,
    "g,g",
    VOIDmode,
    0,
    1
  },
  {
    immediate_operand,
    "O,n",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=l,l",
    SImode,
    0,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "c,*l,c,*l",
    SImode,
    0,
    1
  },
  {
    0,
    "g,g,g,g",
    VOIDmode,
    0,
    1
  },
  {
    immediate_operand,
    "O,O,n,n",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=l,l,l,l",
    SImode,
    0,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    symbol_ref_operand,
    "s,s",
    SImode,
    0,
    1
  },
  {
    0,
    "g,g",
    VOIDmode,
    0,
    1
  },
  {
    immediate_operand,
    "O,n",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=l,l",
    SImode,
    0,
    0
  },
  {
    call_operand,
    "s,c",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "l,l",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    call_operand,
    "s,c",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "l,l",
    SImode,
    0,
    1
  },
  {
    current_file_function_operand,
    "s,s",
    SImode,
    0,
    1
  },
  {
    0,
    "g,g",
    VOIDmode,
    0,
    1
  },
  {
    immediate_operand,
    "O,n",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "l,l",
    SImode,
    0,
    1
  },
  {
    current_file_function_operand,
    "s,s",
    DImode,
    0,
    1
  },
  {
    0,
    "g,g",
    VOIDmode,
    0,
    1
  },
  {
    immediate_operand,
    "O,n",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "l,l",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    current_file_function_operand,
    "s,s",
    SImode,
    0,
    1
  },
  {
    0,
    "g,g",
    VOIDmode,
    0,
    1
  },
  {
    immediate_operand,
    "O,n",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "l,l",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    current_file_function_operand,
    "s,s",
    DImode,
    0,
    1
  },
  {
    0,
    "g,g",
    VOIDmode,
    0,
    1
  },
  {
    immediate_operand,
    "O,n",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "l,l",
    SImode,
    0,
    1
  },
  {
    symbol_ref_operand,
    "s,s",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    immediate_operand,
    "O,n",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "l,l",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    symbol_ref_operand,
    "s,s",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    immediate_operand,
    "O,n",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "l,l",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "=m",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "m",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=&r",
    SImode,
    0,
    0
  },
  {
    memory_operand,
    "=m",
    DImode,
    0,
    1
  },
  {
    memory_operand,
    "m",
    DImode,
    0,
    1
  },
  {
    scratch_operand,
    "=&r",
    DImode,
    0,
    0
  },
  {
    cc_reg_operand,
    "=x,?y",
    CCEQmode,
    0,
    1
  },
  {
    memory_operand,
    "m,m",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "m,m",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=&r,&r",
    SImode,
    0,
    0
  },
  {
    scratch_operand,
    "=r,r",
    SImode,
    0,
    0
  },
  {
    cc_reg_operand,
    "=x,?y",
    CCEQmode,
    0,
    1
  },
  {
    memory_operand,
    "m,m",
    DImode,
    0,
    1
  },
  {
    memory_operand,
    "m,m",
    DImode,
    0,
    1
  },
  {
    scratch_operand,
    "=&r,&r",
    DImode,
    0,
    0
  },
  {
    scratch_operand,
    "=r,r",
    DImode,
    0,
    0
  },
  {
    cc_reg_operand,
    "=y",
    CCmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    reg_or_short_operand,
    "rI",
    SImode,
    0,
    1
  },
  {
    cc_reg_operand,
    "=y",
    CCmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "r",
    DImode,
    0,
    1
  },
  {
    reg_or_short_operand,
    "rI",
    DImode,
    0,
    1
  },
  {
    cc_reg_operand,
    "=y",
    CCUNSmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    reg_or_u_short_operand,
    "rK",
    SImode,
    0,
    1
  },
  {
    cc_reg_operand,
    "=y",
    CCUNSmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "r",
    DImode,
    0,
    1
  },
  {
    reg_or_u_short_operand,
    "rK",
    DImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    short_cint_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    cc_reg_operand,
    "=y",
    CCmode,
    0,
    1
  },
  {
    short_cint_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    u_short_cint_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    cc_reg_operand,
    "=y",
    CCUNSmode,
    0,
    1
  },
  {
    short_cint_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    cc_reg_operand,
    "=y",
    CCFPmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "f",
    SFmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "f",
    SFmode,
    0,
    1
  },
  {
    cc_reg_operand,
    "=y",
    CCFPmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "f",
    DFmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "f",
    DFmode,
    0,
    1
  },
  {
    cc_reg_operand,
    "=y",
    CCFPmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "f",
    TFmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "f",
    TFmode,
    0,
    1
  },
  {
    scratch_operand,
    "=f",
    DFmode,
    0,
    0
  },
  {
    scratch_operand,
    "=f",
    DFmode,
    0,
    0
  },
  {
    scratch_operand,
    "=f",
    DFmode,
    0,
    0
  },
  {
    scratch_operand,
    "=f",
    DFmode,
    0,
    0
  },
  {
    scratch_operand,
    "=f",
    DFmode,
    0,
    0
  },
  {
    scratch_operand,
    "=f",
    DFmode,
    0,
    0
  },
  {
    scratch_operand,
    "=f",
    DFmode,
    0,
    0
  },
  {
    scratch_operand,
    "=f",
    DFmode,
    0,
    0
  },
  {
    gpc_reg_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    scc_comparison_operator,
    "",
    SImode,
    0,
    0
  },
  {
    cc_reg_operand,
    "y",
    VOIDmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "=r",
    DImode,
    0,
    1
  },
  {
    scc_comparison_operator,
    "",
    DImode,
    0,
    0
  },
  {
    cc_reg_operand,
    "y",
    VOIDmode,
    0,
    1
  },
  {
    cc_reg_operand,
    "=x,?y",
    CCmode,
    0,
    1
  },
  {
    scc_comparison_operator,
    "",
    SImode,
    0,
    0
  },
  {
    cc_reg_operand,
    "y,y",
    VOIDmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "=r,r",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    scc_comparison_operator,
    "",
    SImode,
    0,
    0
  },
  {
    cc_reg_operand,
    "y",
    VOIDmode,
    0,
    1
  },
  {
    const_int_operand,
    "n",
    SImode,
    0,
    1
  },
  {
    cc_reg_operand,
    "=x,?y",
    CCmode,
    0,
    1
  },
  {
    scc_comparison_operator,
    "",
    SImode,
    0,
    0
  },
  {
    cc_reg_operand,
    "y,y",
    VOIDmode,
    0,
    1
  },
  {
    const_int_operand,
    "n,n",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "=r,r",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    scc_eq_operand,
    "rKLI",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "=r",
    DImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "r",
    DImode,
    0,
    1
  },
  {
    scc_eq_operand,
    "rKJI",
    DImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    scc_eq_operand,
    "rKLI",
    SImode,
    0,
    1
  },
  {
    cc_reg_operand,
    "=y",
    CCmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "=r",
    DImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "=r",
    DImode,
    0,
    1
  },
  {
    scc_eq_operand,
    "rKJI",
    DImode,
    0,
    1
  },
  {
    cc_reg_operand,
    "=y",
    CCmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "=&r,&r,&r,&r,&r",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "%r,r,r,r,r",
    SImode,
    0,
    1
  },
  {
    scc_eq_operand,
    "r,O,K,L,I",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "r,r,r,r,r",
    SImode,
    0,
    1
  },
  {
    cc_reg_operand,
    "=x,x,x,x,x,?y,?y,?y,?y,?y",
    CCmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "%r,r,r,r,r,r,r,r,r,r",
    SImode,
    0,
    1
  },
  {
    scc_eq_operand,
    "r,O,K,L,I,r,O,K,L,I",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "r,r,r,r,r,r,r,r,r,r",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=&r,&r,&r,&r,&r,&r,&r,&r,&r,&r",
    SImode,
    0,
    0
  },
  {
    gpc_reg_operand,
    "=&r,&r,&r,&r,&r,&r,&r,&r,&r,&r",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "%r,r,r,r,r,r,r,r,r,r",
    SImode,
    0,
    1
  },
  {
    scc_eq_operand,
    "r,O,K,L,I,r,O,K,L,I",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "r,r,r,r,r,r,r,r,r,r",
    SImode,
    0,
    1
  },
  {
    cc_reg_operand,
    "=x,x,x,x,x,?y,?y,?y,?y,?y",
    CCmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "%r",
    SImode,
    0,
    1
  },
  {
    scc_eq_operand,
    "rKLI",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "=r",
    DImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "%r",
    DImode,
    0,
    1
  },
  {
    scc_eq_operand,
    "rKJI",
    DImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "=&r",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=&r",
    SImode,
    0,
    0
  },
  {
    gpc_reg_operand,
    "=r",
    DImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "r",
    DImode,
    0,
    1
  },
  {
    scratch_operand,
    "=&r",
    DImode,
    0,
    0
  },
  {
    gpc_reg_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=&r",
    SImode,
    0,
    0
  },
  {
    gpc_reg_operand,
    "=r",
    DImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "r",
    DImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "r",
    DImode,
    0,
    1
  },
  {
    scratch_operand,
    "=&r",
    DImode,
    0,
    0
  },
  {
    cc_reg_operand,
    "=x,?y",
    CCmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "r,r",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "r,r",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=&r,&r",
    SImode,
    0,
    0
  },
  {
    scratch_operand,
    "=X,&r",
    SImode,
    0,
    0
  },
  {
    cc_reg_operand,
    "=x,?y",
    CCmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "r,r",
    DImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "r,r",
    DImode,
    0,
    1
  },
  {
    scratch_operand,
    "=&r,&r",
    DImode,
    0,
    0
  },
  {
    gpc_reg_operand,
    "=r,r",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "r,r",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "r,r",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=&r,&r",
    SImode,
    0,
    0
  },
  {
    cc_reg_operand,
    "=x,?y",
    CCmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "=r,r",
    DImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "r,r",
    DImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "r,r",
    DImode,
    0,
    1
  },
  {
    scratch_operand,
    "=&r,&r",
    DImode,
    0,
    0
  },
  {
    cc_reg_operand,
    "=x,?y",
    CCmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    reg_or_short_operand,
    "rI",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "=r",
    DImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "r",
    DImode,
    0,
    1
  },
  {
    reg_or_short_operand,
    "rI",
    DImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "=r,r",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "r,r",
    SImode,
    0,
    1
  },
  {
    reg_or_short_operand,
    "rI,rI",
    SImode,
    0,
    1
  },
  {
    cc_reg_operand,
    "=x,?y",
    CCmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "=r,r",
    DImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "r,r",
    DImode,
    0,
    1
  },
  {
    reg_or_short_operand,
    "rI,rI",
    DImode,
    0,
    1
  },
  {
    cc_reg_operand,
    "=x,?y",
    CCmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "=&r",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    reg_or_short_operand,
    "rI",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "=&r",
    DImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "r",
    DImode,
    0,
    1
  },
  {
    reg_or_short_operand,
    "rI",
    DImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "r",
    DImode,
    0,
    1
  },
  {
    cc_reg_operand,
    "=x,?y",
    CCmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "r,r",
    SImode,
    0,
    1
  },
  {
    reg_or_short_operand,
    "rI,rI",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "r,r",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=&r,&r",
    SImode,
    0,
    0
  },
  {
    gpc_reg_operand,
    "=&r,&r",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "r,r",
    SImode,
    0,
    1
  },
  {
    reg_or_short_operand,
    "rI,rI",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "r,r",
    SImode,
    0,
    1
  },
  {
    cc_reg_operand,
    "=x,?y",
    CCmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "=r,r",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "r,r",
    SImode,
    0,
    1
  },
  {
    reg_or_neg_short_operand,
    "r,P",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "=r,r",
    DImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "r,r",
    DImode,
    0,
    1
  },
  {
    reg_or_neg_short_operand,
    "r,P",
    DImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "=r,r,r,r",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "r,r,r,r",
    SImode,
    0,
    1
  },
  {
    reg_or_neg_short_operand,
    "r,P,r,P",
    SImode,
    0,
    1
  },
  {
    cc_reg_operand,
    "=x,x,?y,?y",
    CCmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "=r,r,r,r",
    DImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "r,r,r,r",
    DImode,
    0,
    1
  },
  {
    reg_or_neg_short_operand,
    "r,P,r,P",
    DImode,
    0,
    1
  },
  {
    cc_reg_operand,
    "=x,x,?y,?y",
    CCmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "=&r,r",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "r,r",
    SImode,
    0,
    1
  },
  {
    reg_or_neg_short_operand,
    "r,P",
    SImode,
    0,
    1
  },
  {
    reg_or_short_operand,
    "rI,rI",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "=&r,r",
    DImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "r,r",
    DImode,
    0,
    1
  },
  {
    reg_or_neg_short_operand,
    "r,P",
    DImode,
    0,
    1
  },
  {
    reg_or_short_operand,
    "rI,rI",
    DImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "=&r,&r,&r,&r",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "r,r,r,r",
    SImode,
    0,
    1
  },
  {
    reg_or_neg_short_operand,
    "r,P,r,P",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "r,r,r,r",
    SImode,
    0,
    1
  },
  {
    cc_reg_operand,
    "=x,x,?y,?y",
    CCmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "=&r,&r,&r,&r",
    DImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "r,r,r,r",
    DImode,
    0,
    1
  },
  {
    reg_or_neg_short_operand,
    "r,P,r,P",
    DImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "r,r,r,r",
    DImode,
    0,
    1
  },
  {
    cc_reg_operand,
    "=x,x,?y,?y",
    CCmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "=&r,&r",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "r,r",
    SImode,
    0,
    1
  },
  {
    reg_or_neg_short_operand,
    "r,P",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "r,r",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "=&r,&r",
    DImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "r,r",
    DImode,
    0,
    1
  },
  {
    reg_or_neg_short_operand,
    "r,P",
    DImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "r,r",
    DImode,
    0,
    1
  },
  {
    cc_reg_operand,
    "=x,x,?y,?y",
    CCmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "r,r,r,r",
    SImode,
    0,
    1
  },
  {
    reg_or_neg_short_operand,
    "r,P,r,P",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "r,r,r,r",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=&r,&r,&r,&r",
    SImode,
    0,
    0
  },
  {
    gpc_reg_operand,
    "=r,r",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "r,r",
    SImode,
    0,
    1
  },
  {
    reg_or_short_operand,
    "r,I",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "=r,r",
    DImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "r,r",
    DImode,
    0,
    1
  },
  {
    reg_or_short_operand,
    "r,I",
    DImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "=&r",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "=&r",
    DImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "r",
    DImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "r",
    DImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "=&r,&r",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "r,r",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "r,r",
    SImode,
    0,
    1
  },
  {
    cc_reg_operand,
    "=x,?y",
    CCmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "=&r,&r",
    DImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "r,r",
    DImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "r,r",
    DImode,
    0,
    1
  },
  {
    cc_reg_operand,
    "=x,?y",
    CCmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "=&r",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    reg_or_short_operand,
    "rI",
    SImode,
    0,
    1
  },
  {
    reg_or_short_operand,
    "rI",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "=&r",
    DImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "r",
    DImode,
    0,
    1
  },
  {
    reg_or_short_operand,
    "rI",
    DImode,
    0,
    1
  },
  {
    reg_or_short_operand,
    "rI",
    DImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "=&r,&r,&r,&r",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "r,r,r,r",
    SImode,
    0,
    1
  },
  {
    reg_or_short_operand,
    "I,r,I,r",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "r,r,r,r",
    SImode,
    0,
    1
  },
  {
    cc_reg_operand,
    "=x,x,?y,?y",
    CCmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "=&r,&r,&r,&r",
    DImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "r,r,r,r",
    DImode,
    0,
    1
  },
  {
    reg_or_short_operand,
    "I,r,I,r",
    DImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "r,r,r,r",
    DImode,
    0,
    1
  },
  {
    cc_reg_operand,
    "=x,x,?y,?y",
    CCmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    branch_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_reg_operand,
    "y",
    VOIDmode,
    0,
    1
  },
  {
    cc_reg_operand,
    "=y,?y",
    CCEQmode,
    0,
    1
  },
  {
    boolean_operator,
    "",
    SImode,
    0,
    0
  },
  {
    branch_positive_comparison_operator,
    "",
    SImode,
    0,
    0
  },
  {
    cc_reg_operand,
    "y,y",
    VOIDmode,
    0,
    1
  },
  {
    branch_positive_comparison_operator,
    "",
    SImode,
    0,
    0
  },
  {
    cc_reg_operand,
    "0,y",
    VOIDmode,
    0,
    1
  },
  {
    cc_reg_operand,
    "=y,?y",
    CCEQmode,
    0,
    1
  },
  {
    boolean_or_operator,
    "",
    SImode,
    0,
    0
  },
  {
    branch_positive_comparison_operator,
    "",
    SImode,
    0,
    0
  },
  {
    cc_reg_operand,
    "y,y",
    VOIDmode,
    0,
    1
  },
  {
    branch_positive_comparison_operator,
    "",
    SImode,
    0,
    0
  },
  {
    cc_reg_operand,
    "0,y",
    VOIDmode,
    0,
    1
  },
  {
    cc_reg_operand,
    "=y,?y",
    CCEQmode,
    0,
    1
  },
  {
    branch_positive_comparison_operator,
    "",
    SImode,
    0,
    0
  },
  {
    cc_reg_operand,
    "0,y",
    VOIDmode,
    0,
    1
  },
  {
    cc_reg_operand,
    "=y",
    CCEQmode,
    0,
    1
  },
  {
    branch_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_reg_operand,
    "y",
    VOIDmode,
    0,
    1
  },
  {
    branch_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_reg_operand,
    "y",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "c,*l",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "c,*l",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "c,*l",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "c,*l",
    DImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "c,*r,*r,*r",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=1,*r,m,*q*c*l",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=X,&x,&x,&x",
    CCmode,
    0,
    0
  },
  {
    scratch_operand,
    "=X,X,&r,r",
    SImode,
    0,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "c,*r,*r,*r",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=1,*r,m,*q*c*l",
    DImode,
    0,
    1
  },
  {
    scratch_operand,
    "=X,&x,&x,&x",
    CCmode,
    0,
    0
  },
  {
    scratch_operand,
    "=X,X,&r,r",
    DImode,
    0,
    0
  },
  {
    trap_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    reg_or_short_operand,
    "rI",
    SImode,
    0,
    1
  },
  {
    trap_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r",
    DImode,
    0,
    1
  },
  {
    reg_or_short_operand,
    "rI",
    DImode,
    0,
    1
  },
  {
    mfcr_operation,
    "",
    VOIDmode,
    0,
    0
  },
  {
    gpc_reg_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    cc_reg_operand,
    "y",
    CCmode,
    0,
    1
  },
  {
    immediate_operand,
    "n",
    VOIDmode,
    0,
    1
  },
  {
    stmw_operation,
    "",
    VOIDmode,
    0,
    0
  },
  {
    memory_operand,
    "=m",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    any_parallel_operand,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "=l",
    SImode,
    0,
    1
  },
  {
    call_operand,
    "s",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "=m",
    DFmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "f",
    DFmode,
    0,
    1
  },
  {
    any_parallel_operand,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "=l",
    DImode,
    0,
    1
  },
  {
    call_operand,
    "s",
    DImode,
    0,
    1
  },
  {
    memory_operand,
    "=m",
    DFmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "f",
    DFmode,
    0,
    1
  },
  {
    any_parallel_operand,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "=l",
    SImode,
    0,
    1
  },
  {
    call_operand,
    "s",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "=m",
    DFmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "f",
    DFmode,
    0,
    1
  },
  {
    memory_operand,
    "+m",
    BLKmode,
    0,
    1
  },
  {
    mtcrf_operation,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_reg_operand,
    "=y",
    CCmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "n",
    VOIDmode,
    0,
    1
  },
  {
    lmw_operation,
    "",
    VOIDmode,
    0,
    0
  },
  {
    gpc_reg_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "m",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "lc",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "lc",
    DImode,
    0,
    1
  },
  {
    any_parallel_operand,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "l",
    SImode,
    0,
    1
  },
  {
    call_operand,
    "s",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "=f",
    DFmode,
    0,
    1
  },
  {
    memory_operand,
    "m",
    DFmode,
    0,
    1
  },
  {
    any_parallel_operand,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "l",
    DImode,
    0,
    1
  },
  {
    call_operand,
    "s",
    DImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "=f",
    DFmode,
    0,
    1
  },
  {
    memory_operand,
    "m",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=&b",
    SImode,
    0,
    0
  },
  {
    register_operand,
    "r",
    DImode,
    0,
    1
  },
  {
    scratch_operand,
    "=&b",
    DImode,
    0,
    0
  },
  {
    indexed_or_indirect_address,
    "a",
    VOIDmode,
    0,
    1
  },
  {
    const_int_operand,
    "n",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "n",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    BLKmode,
    0,
    1
  },
  {
    0,
    "",
    BLKmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "Z",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "=r",
    DImode,
    0,
    1
  },
  {
    memory_operand,
    "Z",
    DImode,
    0,
    1
  },
  {
    cc_reg_operand,
    "=x",
    CCmode,
    0,
    1
  },
  {
    memory_operand,
    "=Z",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    cc_reg_operand,
    "=x",
    CCmode,
    0,
    1
  },
  {
    memory_operand,
    "=Z",
    DImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "r",
    DImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "=&r",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "+Z",
    SImode,
    0,
    1
  },
  {
    reg_or_short_operand,
    "rI",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=&r",
    SImode,
    0,
    0
  },
  {
    scratch_operand,
    "=&x",
    CCmode,
    0,
    0
  },
  {
    gpc_reg_operand,
    "=&r",
    DImode,
    0,
    1
  },
  {
    memory_operand,
    "+Z",
    DImode,
    0,
    1
  },
  {
    reg_or_short_operand,
    "rI",
    DImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "r",
    DImode,
    0,
    1
  },
  {
    scratch_operand,
    "=&r",
    DImode,
    0,
    0
  },
  {
    scratch_operand,
    "=&x",
    CCmode,
    0,
    0
  },
  {
    gpc_reg_operand,
    "=&r",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "+Z",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=&r",
    SImode,
    0,
    0
  },
  {
    scratch_operand,
    "=&x",
    CCmode,
    0,
    0
  },
  {
    gpc_reg_operand,
    "=&r",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "+Z",
    SImode,
    0,
    1
  },
  {
    reg_or_short_operand,
    "rL",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=&r",
    SImode,
    0,
    0
  },
  {
    scratch_operand,
    "=&x",
    CCmode,
    0,
    0
  },
  {
    gpc_reg_operand,
    "=&r",
    DImode,
    0,
    1
  },
  {
    memory_operand,
    "+Z",
    DImode,
    0,
    1
  },
  {
    reg_or_short_operand,
    "rL",
    DImode,
    0,
    1
  },
  {
    scratch_operand,
    "=&r",
    DImode,
    0,
    0
  },
  {
    scratch_operand,
    "=&x",
    CCmode,
    0,
    0
  },
  {
    memory_operand,
    "+Z",
    SImode,
    0,
    1
  },
  {
    add_operand,
    "rIL",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=&b",
    SImode,
    0,
    0
  },
  {
    scratch_operand,
    "=&x",
    CCmode,
    0,
    0
  },
  {
    memory_operand,
    "+Z",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=&b",
    SImode,
    0,
    0
  },
  {
    scratch_operand,
    "=&x",
    CCmode,
    0,
    0
  },
  {
    memory_operand,
    "+Z",
    SImode,
    0,
    1
  },
  {
    logical_operand,
    "rKL",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=&b",
    SImode,
    0,
    0
  },
  {
    scratch_operand,
    "=&x",
    CCmode,
    0,
    0
  },
  {
    memory_operand,
    "+Z",
    SImode,
    0,
    1
  },
  {
    and_operand,
    "rTKL",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=&b",
    SImode,
    0,
    0
  },
  {
    scratch_operand,
    "=&x",
    CCmode,
    0,
    0
  },
  {
    memory_operand,
    "+Z",
    DImode,
    0,
    1
  },
  {
    add_operand,
    "rIL",
    DImode,
    0,
    1
  },
  {
    scratch_operand,
    "=&b",
    DImode,
    0,
    0
  },
  {
    scratch_operand,
    "=&x",
    CCmode,
    0,
    0
  },
  {
    memory_operand,
    "+Z",
    DImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "r",
    DImode,
    0,
    1
  },
  {
    scratch_operand,
    "=&b",
    DImode,
    0,
    0
  },
  {
    scratch_operand,
    "=&x",
    CCmode,
    0,
    0
  },
  {
    memory_operand,
    "+Z",
    DImode,
    0,
    1
  },
  {
    logical_operand,
    "rKJF",
    DImode,
    0,
    1
  },
  {
    scratch_operand,
    "=&b",
    DImode,
    0,
    0
  },
  {
    scratch_operand,
    "=&x",
    CCmode,
    0,
    0
  },
  {
    memory_operand,
    "+Z",
    DImode,
    0,
    1
  },
  {
    and_operand,
    "rSTKJ",
    DImode,
    0,
    1
  },
  {
    scratch_operand,
    "=&b",
    DImode,
    0,
    0
  },
  {
    scratch_operand,
    "=&x",
    CCmode,
    0,
    0
  },
  {
    memory_operand,
    "+Z",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=&r",
    SImode,
    0,
    0
  },
  {
    scratch_operand,
    "=&x",
    CCmode,
    0,
    0
  },
  {
    memory_operand,
    "+Z",
    DImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "r",
    DImode,
    0,
    1
  },
  {
    scratch_operand,
    "=&r",
    DImode,
    0,
    0
  },
  {
    scratch_operand,
    "=&x",
    CCmode,
    0,
    0
  },
  {
    gpc_reg_operand,
    "=&r",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "+Z",
    SImode,
    0,
    1
  },
  {
    add_operand,
    "rIL",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=&b",
    SImode,
    0,
    0
  },
  {
    scratch_operand,
    "=&x",
    CCmode,
    0,
    0
  },
  {
    gpc_reg_operand,
    "=&r",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "+Z",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=&b",
    SImode,
    0,
    0
  },
  {
    scratch_operand,
    "=&x",
    CCmode,
    0,
    0
  },
  {
    gpc_reg_operand,
    "=&r",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "+Z",
    SImode,
    0,
    1
  },
  {
    logical_operand,
    "rKL",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=&b",
    SImode,
    0,
    0
  },
  {
    scratch_operand,
    "=&x",
    CCmode,
    0,
    0
  },
  {
    gpc_reg_operand,
    "=&r",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "+Z",
    SImode,
    0,
    1
  },
  {
    and_operand,
    "rTKL",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=&b",
    SImode,
    0,
    0
  },
  {
    scratch_operand,
    "=&x",
    CCmode,
    0,
    0
  },
  {
    gpc_reg_operand,
    "=&r",
    DImode,
    0,
    1
  },
  {
    memory_operand,
    "+Z",
    DImode,
    0,
    1
  },
  {
    add_operand,
    "rIL",
    DImode,
    0,
    1
  },
  {
    scratch_operand,
    "=&b",
    DImode,
    0,
    0
  },
  {
    scratch_operand,
    "=&x",
    CCmode,
    0,
    0
  },
  {
    gpc_reg_operand,
    "=&r",
    DImode,
    0,
    1
  },
  {
    memory_operand,
    "+Z",
    DImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "r",
    DImode,
    0,
    1
  },
  {
    scratch_operand,
    "=&b",
    DImode,
    0,
    0
  },
  {
    scratch_operand,
    "=&x",
    CCmode,
    0,
    0
  },
  {
    gpc_reg_operand,
    "=&r",
    DImode,
    0,
    1
  },
  {
    memory_operand,
    "+Z",
    DImode,
    0,
    1
  },
  {
    logical_operand,
    "rKJF",
    DImode,
    0,
    1
  },
  {
    scratch_operand,
    "=&b",
    DImode,
    0,
    0
  },
  {
    scratch_operand,
    "=&x",
    CCmode,
    0,
    0
  },
  {
    gpc_reg_operand,
    "=&r",
    DImode,
    0,
    1
  },
  {
    memory_operand,
    "+Z",
    DImode,
    0,
    1
  },
  {
    and_operand,
    "rSTKJ",
    DImode,
    0,
    1
  },
  {
    scratch_operand,
    "=&b",
    DImode,
    0,
    0
  },
  {
    scratch_operand,
    "=&x",
    CCmode,
    0,
    0
  },
  {
    gpc_reg_operand,
    "=&r",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "+Z",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=&r",
    SImode,
    0,
    0
  },
  {
    scratch_operand,
    "=&x",
    CCmode,
    0,
    0
  },
  {
    gpc_reg_operand,
    "=&r",
    DImode,
    0,
    1
  },
  {
    memory_operand,
    "+Z",
    DImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "r",
    DImode,
    0,
    1
  },
  {
    scratch_operand,
    "=&r",
    DImode,
    0,
    0
  },
  {
    scratch_operand,
    "=&x",
    CCmode,
    0,
    0
  },
  {
    gpc_reg_operand,
    "=r,r,r,r,r",
    DImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "%r,r,r,r,r",
    DImode,
    0,
    1
  },
  {
    and_operand,
    "?r,S,T,K,J",
    DImode,
    0,
    1
  },
  {
    memory_operand,
    "+Z",
    SImode,
    0,
    1
  },
  {
    add_operand,
    "rI",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "=&r",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "=&b",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=&x",
    CCmode,
    0,
    0
  },
  {
    scratch_operand,
    "=&r",
    SImode,
    0,
    0
  },
  {
    memory_operand,
    "+Z,Z,Z,Z",
    SImode,
    0,
    1
  },
  {
    and_operand,
    "r,T,K,L",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "=&r,&r,&r,&r",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "=&b,&b,&b,&b",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=&x,&x,&x,&x",
    CCmode,
    0,
    0
  },
  {
    memory_operand,
    "+Z,Z,Z",
    SImode,
    0,
    1
  },
  {
    logical_operand,
    "r,K,L",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "=&r,&r,&r",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "=&b,&b,&b",
    SImode,
    0,
    1
  },
  {
    boolean_or_operator,
    "",
    SImode,
    0,
    0
  },
  {
    scratch_operand,
    "=&x,&x,&x",
    CCmode,
    0,
    0
  },
  {
    memory_operand,
    "+Z",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "=&r",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "=&b",
    SImode,
    0,
    1
  },
  {
    boolean_operator,
    "",
    SImode,
    0,
    0
  },
  {
    logical_operand,
    "rK",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=&x",
    CCmode,
    0,
    0
  },
  {
    scratch_operand,
    "X",
    VOIDmode,
    0,
    0
  },
  {
    scratch_operand,
    "X",
    VOIDmode,
    0,
    0
  },
  {
    altivec_register_operand,
    "=v",
    V4SImode,
    0,
    1
  },
  {
    indexed_or_indirect_operand,
    "Z",
    V4SImode,
    0,
    1
  },
  {
    altivec_register_operand,
    "=v",
    V8HImode,
    0,
    1
  },
  {
    indexed_or_indirect_operand,
    "Z",
    V8HImode,
    0,
    1
  },
  {
    altivec_register_operand,
    "=v",
    V16QImode,
    0,
    1
  },
  {
    indexed_or_indirect_operand,
    "Z",
    V16QImode,
    0,
    1
  },
  {
    altivec_register_operand,
    "=v",
    V4SFmode,
    0,
    1
  },
  {
    indexed_or_indirect_operand,
    "Z",
    V4SFmode,
    0,
    1
  },
  {
    indexed_or_indirect_operand,
    "=Z",
    V4SImode,
    0,
    1
  },
  {
    altivec_register_operand,
    "v",
    V4SImode,
    0,
    1
  },
  {
    indexed_or_indirect_operand,
    "=Z",
    V8HImode,
    0,
    1
  },
  {
    altivec_register_operand,
    "v",
    V8HImode,
    0,
    1
  },
  {
    indexed_or_indirect_operand,
    "=Z",
    V16QImode,
    0,
    1
  },
  {
    altivec_register_operand,
    "v",
    V16QImode,
    0,
    1
  },
  {
    indexed_or_indirect_operand,
    "=Z",
    V4SFmode,
    0,
    1
  },
  {
    altivec_register_operand,
    "v",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=Z,v,v,o,r,r,v",
    V4SImode,
    0,
    1
  },
  {
    input_operand,
    "v,Z,v,r,o,r,W",
    V4SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=Z,v,v,o,r,r,v",
    V8HImode,
    0,
    1
  },
  {
    input_operand,
    "v,Z,v,r,o,r,W",
    V8HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=Z,v,v,o,r,r,v",
    V16QImode,
    0,
    1
  },
  {
    input_operand,
    "v,Z,v,r,o,r,W",
    V16QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=Z,v,v,o,r,r,v",
    V4SFmode,
    0,
    1
  },
  {
    input_operand,
    "v,Z,v,r,o,r,W",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    vrsave_operation,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    save_world_operation,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "=l",
    SImode,
    0,
    1
  },
  {
    call_operand,
    "s",
    SImode,
    0,
    1
  },
  {
    restore_world_operation,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "l",
    SImode,
    0,
    1
  },
  {
    call_operand,
    "s",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=v",
    V4SImode,
    0,
    1
  },
  {
    register_operand,
    "v",
    V4SImode,
    0,
    1
  },
  {
    register_operand,
    "v",
    V4SImode,
    0,
    1
  },
  {
    register_operand,
    "=v",
    V8HImode,
    0,
    1
  },
  {
    register_operand,
    "v",
    V8HImode,
    0,
    1
  },
  {
    register_operand,
    "v",
    V8HImode,
    0,
    1
  },
  {
    register_operand,
    "=v",
    V16QImode,
    0,
    1
  },
  {
    register_operand,
    "v",
    V16QImode,
    0,
    1
  },
  {
    register_operand,
    "v",
    V16QImode,
    0,
    1
  },
  {
    register_operand,
    "=v",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "v",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "v",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "=v",
    V4SImode,
    0,
    1
  },
  {
    register_operand,
    "v",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "v",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "=v",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "v",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "v",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "v",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "=v",
    V4SImode,
    0,
    1
  },
  {
    register_operand,
    "v",
    V8HImode,
    0,
    1
  },
  {
    register_operand,
    "v",
    V8HImode,
    0,
    1
  },
  {
    register_operand,
    "v",
    V4SImode,
    0,
    1
  },
  {
    register_operand,
    "=v",
    V4SImode,
    0,
    1
  },
  {
    register_operand,
    "v",
    V16QImode,
    0,
    1
  },
  {
    register_operand,
    "v",
    V16QImode,
    0,
    1
  },
  {
    register_operand,
    "v",
    V4SImode,
    0,
    1
  },
  {
    register_operand,
    "=v",
    V8HImode,
    0,
    1
  },
  {
    register_operand,
    "v",
    V8HImode,
    0,
    1
  },
  {
    register_operand,
    "v",
    V8HImode,
    0,
    1
  },
  {
    register_operand,
    "v",
    V8HImode,
    0,
    1
  },
  {
    register_operand,
    "=v",
    V8HImode,
    0,
    1
  },
  {
    register_operand,
    "v",
    V16QImode,
    0,
    1
  },
  {
    register_operand,
    "v",
    V16QImode,
    0,
    1
  },
  {
    register_operand,
    "=v",
    V16QImode,
    0,
    1
  },
  {
    register_operand,
    "v",
    V8HImode,
    0,
    1
  },
  {
    register_operand,
    "v",
    V8HImode,
    0,
    1
  },
  {
    register_operand,
    "=v",
    V8HImode,
    0,
    1
  },
  {
    register_operand,
    "v",
    V4SImode,
    0,
    1
  },
  {
    register_operand,
    "v",
    V4SImode,
    0,
    1
  },
  {
    register_operand,
    "=v",
    V4SImode,
    0,
    1
  },
  {
    register_operand,
    "v",
    V16QImode,
    0,
    1
  },
  {
    register_operand,
    "v",
    V4SImode,
    0,
    1
  },
  {
    register_operand,
    "=v",
    V4SImode,
    0,
    1
  },
  {
    register_operand,
    "v",
    V8HImode,
    0,
    1
  },
  {
    register_operand,
    "v",
    V4SImode,
    0,
    1
  },
  {
    register_operand,
    "=v",
    V16QImode,
    0,
    1
  },
  {
    register_operand,
    "v",
    V16QImode,
    0,
    1
  },
  {
    u5bit_cint_operand,
    "",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=v",
    V8HImode,
    0,
    1
  },
  {
    register_operand,
    "v",
    V8HImode,
    0,
    1
  },
  {
    u5bit_cint_operand,
    "",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=v",
    V4SImode,
    0,
    1
  },
  {
    register_operand,
    "v",
    V4SImode,
    0,
    1
  },
  {
    u5bit_cint_operand,
    "i",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=v",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "v",
    V4SFmode,
    0,
    1
  },
  {
    u5bit_cint_operand,
    "i",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=v",
    V4SImode,
    0,
    1
  },
  {
    s5bit_cint_operand,
    "i",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=v",
    V8HImode,
    0,
    1
  },
  {
    s5bit_cint_operand,
    "i",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=v",
    V16QImode,
    0,
    1
  },
  {
    s5bit_cint_operand,
    "i",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=v",
    V4SImode,
    0,
    1
  },
  {
    register_operand,
    "v",
    V4SImode,
    0,
    1
  },
  {
    register_operand,
    "v",
    V4SImode,
    0,
    1
  },
  {
    register_operand,
    "v",
    V16QImode,
    0,
    1
  },
  {
    register_operand,
    "=v",
    V8HImode,
    0,
    1
  },
  {
    register_operand,
    "v",
    V8HImode,
    0,
    1
  },
  {
    register_operand,
    "v",
    V8HImode,
    0,
    1
  },
  {
    register_operand,
    "v",
    V16QImode,
    0,
    1
  },
  {
    register_operand,
    "=v",
    V16QImode,
    0,
    1
  },
  {
    register_operand,
    "v",
    V16QImode,
    0,
    1
  },
  {
    register_operand,
    "v",
    V16QImode,
    0,
    1
  },
  {
    register_operand,
    "v",
    V16QImode,
    0,
    1
  },
  {
    register_operand,
    "=v",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "v",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "v",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "v",
    V16QImode,
    0,
    1
  },
  {
    register_operand,
    "=v",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "v",
    V4SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=v",
    V4SImode,
    0,
    1
  },
  {
    register_operand,
    "v",
    V4SFmode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=v",
    V4SImode,
    0,
    1
  },
  {
    register_operand,
    "v",
    V4SImode,
    0,
    1
  },
  {
    register_operand,
    "v",
    V4SImode,
    0,
    1
  },
  {
    register_operand,
    "v",
    V4SImode,
    0,
    1
  },
  {
    register_operand,
    "=v",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "v",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "v",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "v",
    V4SImode,
    0,
    1
  },
  {
    register_operand,
    "=v",
    V4SImode,
    0,
    1
  },
  {
    register_operand,
    "v",
    V4SImode,
    0,
    1
  },
  {
    register_operand,
    "v",
    V4SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=v",
    V8HImode,
    0,
    1
  },
  {
    register_operand,
    "v",
    V8HImode,
    0,
    1
  },
  {
    register_operand,
    "v",
    V8HImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=v",
    V16QImode,
    0,
    1
  },
  {
    register_operand,
    "v",
    V16QImode,
    0,
    1
  },
  {
    register_operand,
    "v",
    V16QImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=v",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "v",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "v",
    V4SFmode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    QImode,
    0,
    1
  },
  {
    scratch_operand,
    "=v",
    V4SFmode,
    0,
    0
  },
  {
    register_operand,
    "v",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "v",
    V4SFmode,
    0,
    1
  },
  {
    any_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=v",
    V4SImode,
    0,
    1
  },
  {
    register_operand,
    "v",
    V4SImode,
    0,
    1
  },
  {
    register_operand,
    "v",
    V4SImode,
    0,
    1
  },
  {
    any_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=v",
    V8HImode,
    0,
    1
  },
  {
    register_operand,
    "v",
    V8HImode,
    0,
    1
  },
  {
    register_operand,
    "v",
    V8HImode,
    0,
    1
  },
  {
    any_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=v",
    V16QImode,
    0,
    1
  },
  {
    register_operand,
    "v",
    V16QImode,
    0,
    1
  },
  {
    register_operand,
    "v",
    V16QImode,
    0,
    1
  },
  {
    any_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "b",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=v",
    V16QImode,
    0,
    1
  },
  {
    indexed_or_indirect_operand,
    "Z",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=v",
    V4SImode,
    0,
    1
  },
  {
    indexed_or_indirect_operand,
    "Z",
    V4SImode,
    0,
    1
  },
  {
    register_operand,
    "=v",
    V8HImode,
    0,
    1
  },
  {
    indexed_or_indirect_operand,
    "Z",
    V8HImode,
    0,
    1
  },
  {
    register_operand,
    "=v",
    V16QImode,
    0,
    1
  },
  {
    indexed_or_indirect_operand,
    "Z",
    V16QImode,
    0,
    1
  },
  {
    register_operand,
    "=v",
    V4SFmode,
    0,
    1
  },
  {
    indexed_or_indirect_operand,
    "Z",
    V4SFmode,
    0,
    1
  },
  {
    indexed_or_indirect_operand,
    "=Z",
    V4SImode,
    0,
    1
  },
  {
    register_operand,
    "v",
    V4SImode,
    0,
    1
  },
  {
    indexed_or_indirect_operand,
    "=Z",
    V8HImode,
    0,
    1
  },
  {
    register_operand,
    "v",
    V8HImode,
    0,
    1
  },
  {
    indexed_or_indirect_operand,
    "=Z",
    V16QImode,
    0,
    1
  },
  {
    register_operand,
    "v",
    V16QImode,
    0,
    1
  },
  {
    indexed_or_indirect_operand,
    "=Z",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "v",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "=v",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "v",
    V4SImode,
    0,
    1
  },
  {
    register_operand,
    "v",
    V4SImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    DImode,
    0,
    1
  },
  {
    short_cint_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    DImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    DImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    QImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    DImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    HImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    DImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    SImode,
    0,
    1
  },
  {
    cc_reg_not_cr0_operand,
    "",
    CCmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    QImode,
    0,
    1
  },
  {
    scratch_operand,
    "",
    DImode,
    0,
    0
  },
  {
    cc_reg_not_cr0_operand,
    "",
    CCmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    HImode,
    0,
    1
  },
  {
    scratch_operand,
    "",
    DImode,
    0,
    0
  },
  {
    cc_reg_not_cr0_operand,
    "",
    CCmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "",
    DImode,
    0,
    0
  },
  {
    gpc_reg_operand,
    "",
    DImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    QImode,
    0,
    1
  },
  {
    cc_reg_not_cr0_operand,
    "",
    CCmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    DImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    HImode,
    0,
    1
  },
  {
    cc_reg_not_cr0_operand,
    "",
    CCmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    QImode,
    0,
    1
  },
  {
    cc_reg_not_cr0_operand,
    "",
    CCmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    QImode,
    0,
    1
  },
  {
    scratch_operand,
    "",
    SImode,
    0,
    0
  },
  {
    gpc_reg_operand,
    "",
    HImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    QImode,
    0,
    1
  },
  {
    cc_reg_not_cr0_operand,
    "",
    CCmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    QImode,
    0,
    1
  },
  {
    scratch_operand,
    "",
    HImode,
    0,
    0
  },
  {
    gpc_reg_operand,
    "",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    HImode,
    0,
    1
  },
  {
    cc_reg_not_cr0_operand,
    "",
    CCmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    HImode,
    0,
    1
  },
  {
    scratch_operand,
    "",
    SImode,
    0,
    0
  },
  {
    gpc_reg_operand,
    "",
    SImode,
    0,
    1
  },
  {
    general_operand,
    "",
    BLKmode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    QImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    scratch_operand,
    "=x",
    CCmode,
    0,
    0
  },
  {
    gpc_reg_operand,
    "",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    SImode,
    0,
    1
  },
  {
    reg_or_add_cint_operand,
    "",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    DImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    DImode,
    0,
    1
  },
  {
    reg_or_add_cint_operand,
    "",
    DImode,
    0,
    1
  },
  {
    cc_reg_not_cr0_operand,
    "",
    CCmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    SImode,
    0,
    1
  },
  {
    reg_or_short_operand,
    "",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "",
    SImode,
    0,
    0
  },
  {
    cc_reg_not_cr0_operand,
    "",
    CCmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    DImode,
    0,
    1
  },
  {
    reg_or_short_operand,
    "",
    DImode,
    0,
    1
  },
  {
    scratch_operand,
    "",
    DImode,
    0,
    0
  },
  {
    gpc_reg_operand,
    "",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    SImode,
    0,
    1
  },
  {
    reg_or_short_operand,
    "",
    SImode,
    0,
    1
  },
  {
    cc_reg_not_cr0_operand,
    "",
    CCmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    DImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    DImode,
    0,
    1
  },
  {
    reg_or_short_operand,
    "",
    DImode,
    0,
    1
  },
  {
    cc_reg_not_cr0_operand,
    "",
    CCmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    SImode,
    0,
    1
  },
  {
    non_add_cint_operand,
    "",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    DImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    DImode,
    0,
    1
  },
  {
    non_add_cint_operand,
    "",
    DImode,
    0,
    1
  },
  {
    cc_reg_not_cr0_operand,
    "",
    CCmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "",
    SImode,
    0,
    0
  },
  {
    cc_reg_not_cr0_operand,
    "",
    CCmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    DImode,
    0,
    1
  },
  {
    scratch_operand,
    "",
    DImode,
    0,
    0
  },
  {
    gpc_reg_operand,
    "",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    SImode,
    0,
    1
  },
  {
    cc_reg_not_cr0_operand,
    "",
    CCmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    DImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    DImode,
    0,
    1
  },
  {
    cc_reg_not_cr0_operand,
    "",
    CCmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "",
    SImode,
    0,
    0
  },
  {
    cc_reg_not_cr0_operand,
    "",
    CCmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    DImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    DImode,
    0,
    1
  },
  {
    scratch_operand,
    "",
    DImode,
    0,
    0
  },
  {
    gpc_reg_operand,
    "",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    SImode,
    0,
    1
  },
  {
    cc_reg_not_cr0_operand,
    "",
    CCmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    DImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    DImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    DImode,
    0,
    1
  },
  {
    cc_reg_not_cr0_operand,
    "",
    CCmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    SImode,
    0,
    1
  },
  {
    reg_or_short_operand,
    "",
    SImode,
    0,
    1
  },
  {
    reg_or_sub_cint_operand,
    "",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    DImode,
    0,
    1
  },
  {
    reg_or_short_operand,
    "",
    DImode,
    0,
    1
  },
  {
    reg_or_sub_cint_operand,
    "",
    DImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    SImode,
    0,
    1
  },
  {
    reg_or_cint_operand,
    "",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    DImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    DImode,
    0,
    1
  },
  {
    reg_or_cint_operand,
    "",
    DImode,
    0,
    1
  },
  {
    cc_reg_not_cr0_operand,
    "",
    CCmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    SImode,
    0,
    1
  },
  {
    exact_log2_cint_operand,
    "",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "",
    SImode,
    0,
    0
  },
  {
    cc_reg_not_cr0_operand,
    "",
    CCmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    DImode,
    0,
    1
  },
  {
    exact_log2_cint_operand,
    "",
    DImode,
    0,
    1
  },
  {
    scratch_operand,
    "",
    DImode,
    0,
    0
  },
  {
    gpc_reg_operand,
    "",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    SImode,
    0,
    1
  },
  {
    exact_log2_cint_operand,
    "",
    SImode,
    0,
    1
  },
  {
    cc_reg_not_cr0_operand,
    "",
    CCmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    DImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    DImode,
    0,
    1
  },
  {
    exact_log2_cint_operand,
    "",
    DImode,
    0,
    1
  },
  {
    cc_reg_not_cr0_operand,
    "",
    CCmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    SImode,
    0,
    1
  },
  {
    reg_or_cint_operand,
    "",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    SImode,
    0,
    1
  },
  {
    cc_reg_not_cr0_operand,
    "",
    CCmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    SImode,
    0,
    1
  },
  {
    and_operand,
    "",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "",
    SImode,
    0,
    0
  },
  {
    scratch_operand,
    "",
    CCmode,
    0,
    0
  },
  {
    cc_reg_not_cr0_operand,
    "",
    CCmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    DImode,
    0,
    1
  },
  {
    and_operand,
    "",
    DImode,
    0,
    1
  },
  {
    scratch_operand,
    "",
    DImode,
    0,
    0
  },
  {
    scratch_operand,
    "",
    CCmode,
    0,
    0
  },
  {
    cc_reg_operand,
    "",
    CCmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "",
    SImode,
    0,
    0
  },
  {
    scratch_operand,
    "",
    CCmode,
    0,
    0
  },
  {
    gpc_reg_operand,
    "",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    SImode,
    0,
    1
  },
  {
    and_operand,
    "",
    SImode,
    0,
    1
  },
  {
    cc_reg_not_cr0_operand,
    "",
    CCmode,
    0,
    1
  },
  {
    scratch_operand,
    "",
    CCmode,
    0,
    0
  },
  {
    gpc_reg_operand,
    "",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    SImode,
    0,
    1
  },
  {
    cc_reg_operand,
    "",
    CCmode,
    0,
    1
  },
  {
    scratch_operand,
    "",
    CCmode,
    0,
    0
  },
  {
    gpc_reg_operand,
    "",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    SImode,
    0,
    1
  },
  {
    mask_operand_wrap,
    "",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    SImode,
    0,
    1
  },
  {
    reg_or_logical_cint_operand,
    "",
    SImode,
    0,
    1
  },
  {
    cc_reg_not_cr0_operand,
    "",
    CCmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "",
    SImode,
    0,
    0
  },
  {
    boolean_operator,
    "",
    SImode,
    0,
    0
  },
  {
    gpc_reg_operand,
    "",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    SImode,
    0,
    1
  },
  {
    cc_reg_not_cr0_operand,
    "",
    CCmode,
    0,
    1
  },
  {
    boolean_operator,
    "",
    SImode,
    0,
    0
  },
  {
    gpc_reg_operand,
    "",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    SImode,
    0,
    1
  },
  {
    non_logical_cint_operand,
    "",
    SImode,
    0,
    1
  },
  {
    boolean_or_operator,
    "",
    SImode,
    0,
    0
  },
  {
    gpc_reg_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    1
  },
  {
    cc_reg_not_cr0_operand,
    "",
    CCmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "",
    SImode,
    0,
    0
  },
  {
    gpc_reg_operand,
    "",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    1
  },
  {
    cc_reg_not_cr0_operand,
    "",
    CCmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    SImode,
    0,
    1
  },
  {
    reg_or_cint_operand,
    "",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "",
    SImode,
    0,
    0
  },
  {
    gpc_reg_operand,
    "",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    SImode,
    0,
    1
  },
  {
    reg_or_cint_operand,
    "",
    SImode,
    0,
    1
  },
  {
    cc_reg_not_cr0_operand,
    "",
    CCmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    SImode,
    0,
    1
  },
  {
    reg_or_cint_operand,
    "",
    SImode,
    0,
    1
  },
  {
    mask_operand,
    "",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "",
    SImode,
    0,
    0
  },
  {
    gpc_reg_operand,
    "",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    SImode,
    0,
    1
  },
  {
    reg_or_cint_operand,
    "",
    SImode,
    0,
    1
  },
  {
    mask_operand,
    "",
    SImode,
    0,
    1
  },
  {
    cc_reg_not_cr0_operand,
    "",
    CCmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    1
  },
  {
    mask_operand,
    "",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "",
    SImode,
    0,
    0
  },
  {
    gpc_reg_operand,
    "",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    1
  },
  {
    mask_operand,
    "",
    SImode,
    0,
    1
  },
  {
    cc_reg_not_cr0_operand,
    "",
    CCmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "",
    SImode,
    0,
    0
  },
  {
    gpc_reg_operand,
    "",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    1
  },
  {
    cc_reg_not_cr0_operand,
    "",
    CCmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    reg_or_none500mem_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    reg_or_mem_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    min_max_operator,
    "",
    SFmode,
    0,
    0
  },
  {
    gpc_reg_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    comparison_operator,
    "",
    VOIDmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    min_max_operator,
    "",
    DFmode,
    0,
    0
  },
  {
    gpc_reg_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    comparison_operator,
    "",
    VOIDmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    SImode,
    0,
    1
  },
  {
    fix_trunc_dest_operand,
    "",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    DImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    DImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    DImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    DImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    DImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    DImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    DImode,
    0,
    1
  },
  {
    scratch_operand,
    "",
    DFmode,
    0,
    0
  },
  {
    0,
    "",
    DImode,
    0,
    1
  },
  {
    0,
    "",
    DImode,
    0,
    1
  },
  {
    0,
    "",
    DImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    DImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "%r",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    cc_reg_not_cr0_operand,
    "",
    CCmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    DImode,
    0,
    1
  },
  {
    reg_or_cint_operand,
    "",
    DImode,
    0,
    1
  },
  {
    scratch_operand,
    "",
    DImode,
    0,
    0
  },
  {
    cc_reg_not_cr0_operand,
    "",
    CCmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    DImode,
    0,
    1
  },
  {
    reg_or_cint_operand,
    "",
    DImode,
    0,
    1
  },
  {
    mask64_operand,
    "",
    DImode,
    0,
    1
  },
  {
    scratch_operand,
    "",
    DImode,
    0,
    0
  },
  {
    gpc_reg_operand,
    "",
    DImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    DImode,
    0,
    1
  },
  {
    reg_or_cint_operand,
    "",
    DImode,
    0,
    1
  },
  {
    mask64_operand,
    "",
    DImode,
    0,
    1
  },
  {
    cc_reg_not_cr0_operand,
    "",
    CCmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    DImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    DImode,
    0,
    1
  },
  {
    reg_or_cint_operand,
    "",
    SImode,
    0,
    1
  },
  {
    cc_reg_not_cr0_operand,
    "",
    CCmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    DImode,
    0,
    1
  },
  {
    reg_or_cint_operand,
    "",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "",
    DImode,
    0,
    0
  },
  {
    cc_reg_not_cr0_operand,
    "",
    CCmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    DImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    DImode,
    0,
    1
  },
  {
    scratch_operand,
    "",
    DImode,
    0,
    0
  },
  {
    gpc_reg_operand,
    "",
    DImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    DImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    DImode,
    0,
    1
  },
  {
    cc_reg_not_cr0_operand,
    "",
    CCmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    DImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    1
  },
  {
    mask64_operand,
    "",
    DImode,
    0,
    1
  },
  {
    scratch_operand,
    "",
    DImode,
    0,
    0
  },
  {
    gpc_reg_operand,
    "",
    DImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    DImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    1
  },
  {
    mask64_operand,
    "",
    DImode,
    0,
    1
  },
  {
    cc_reg_not_cr0_operand,
    "",
    CCmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    DImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    DImode,
    0,
    1
  },
  {
    mask64_2_operand,
    "",
    DImode,
    0,
    1
  },
  {
    scratch_operand,
    "",
    CCmode,
    0,
    0
  },
  {
    cc_reg_operand,
    "",
    CCmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    DImode,
    0,
    1
  },
  {
    mask64_2_operand,
    "",
    DImode,
    0,
    1
  },
  {
    scratch_operand,
    "",
    DImode,
    0,
    0
  },
  {
    scratch_operand,
    "",
    CCmode,
    0,
    0
  },
  {
    gpc_reg_operand,
    "",
    DImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    DImode,
    0,
    1
  },
  {
    and64_2_operand,
    "",
    DImode,
    0,
    1
  },
  {
    cc_reg_not_cr0_operand,
    "",
    CCmode,
    0,
    1
  },
  {
    scratch_operand,
    "",
    CCmode,
    0,
    0
  },
  {
    gpc_reg_operand,
    "",
    DImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    DImode,
    0,
    1
  },
  {
    mask64_2_operand,
    "",
    DImode,
    0,
    1
  },
  {
    cc_reg_operand,
    "",
    CCmode,
    0,
    1
  },
  {
    scratch_operand,
    "",
    CCmode,
    0,
    0
  },
  {
    gpc_reg_operand,
    "",
    DImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    DImode,
    0,
    1
  },
  {
    reg_or_logical_cint_operand,
    "",
    DImode,
    0,
    1
  },
  {
    cc_reg_not_cr0_operand,
    "",
    CCmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    DImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    DImode,
    0,
    1
  },
  {
    scratch_operand,
    "",
    DImode,
    0,
    0
  },
  {
    boolean_operator,
    "",
    DImode,
    0,
    0
  },
  {
    gpc_reg_operand,
    "",
    DImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    DImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    DImode,
    0,
    1
  },
  {
    cc_reg_not_cr0_operand,
    "",
    CCmode,
    0,
    1
  },
  {
    boolean_operator,
    "",
    DImode,
    0,
    0
  },
  {
    gpc_reg_operand,
    "",
    DImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    DImode,
    0,
    1
  },
  {
    non_logical_cint_operand,
    "",
    DImode,
    0,
    1
  },
  {
    boolean_or_operator,
    "",
    DImode,
    0,
    0
  },
  {
    general_operand,
    "",
    QImode,
    0,
    1
  },
  {
    any_operand,
    "",
    QImode,
    0,
    1
  },
  {
    general_operand,
    "",
    HImode,
    0,
    1
  },
  {
    any_operand,
    "",
    HImode,
    0,
    1
  },
  {
    general_operand,
    "",
    SImode,
    0,
    1
  },
  {
    any_operand,
    "",
    SImode,
    0,
    1
  },
  {
    general_operand,
    "",
    DImode,
    0,
    1
  },
  {
    any_operand,
    "",
    DImode,
    0,
    1
  },
  {
    general_operand,
    "",
    TImode,
    0,
    1
  },
  {
    any_operand,
    "",
    TImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    CCmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    CCmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    any_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    const_double_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    any_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    const_double_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    general_operand,
    "",
    TFmode,
    0,
    1
  },
  {
    any_operand,
    "",
    TFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    TFmode,
    0,
    1
  },
  {
    input_operand,
    "",
    TFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    TFmode,
    0,
    1
  },
  {
    input_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    zero_reg_mem_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    TFmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    TFmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    TFmode,
    0,
    1
  },
  {
    scratch_operand,
    "",
    DFmode,
    0,
    0
  },
  {
    gpc_reg_operand,
    "",
    TFmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    TFmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    DImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    DImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "=f",
    TFmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "f",
    TFmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    DImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    DImode,
    0,
    1
  },
  {
    input_operand,
    "",
    DImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    DImode,
    0,
    1
  },
  {
    mask64_operand,
    "",
    DImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    DImode,
    0,
    1
  },
  {
    const_double_operand,
    "",
    DImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    TImode,
    0,
    1
  },
  {
    const_double_operand,
    "",
    TImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    TImode,
    0,
    1
  },
  {
    input_operand,
    "",
    TImode,
    0,
    1
  },
  {
    0,
    "",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    BLKmode,
    0,
    1
  },
  {
    0,
    "",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    BLKmode,
    0,
    1
  },
  {
    0,
    "",
    BLKmode,
    0,
    1
  },
  {
    0,
    "",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    scratch_operand,
    "",
    SImode,
    0,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    scratch_operand,
    "",
    DImode,
    0,
    0
  },
  {
    scratch_operand,
    "",
    SImode,
    0,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    scratch_operand,
    "",
    SImode,
    0,
    0
  },
  {
    scratch_operand,
    "",
    SImode,
    0,
    0
  },
  {
    gpc_reg_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    any_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    any_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "=r",
    VOIDmode,
    0,
    1
  },
  {
    reg_or_short_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    any_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    any_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    DImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    address_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    address_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    TFmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    TFmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    logical_const_operand,
    "",
    SImode,
    0,
    1
  },
  {
    logical_const_operand,
    "",
    SImode,
    0,
    1
  },
  {
    boolean_or_operator,
    "",
    SImode,
    0,
    0
  },
  {
    cc_reg_operand,
    "",
    CCmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    SImode,
    0,
    1
  },
  {
    equality_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    SImode,
    0,
    1
  },
  {
    short_cint_operand,
    "",
    SImode,
    0,
    1
  },
  {
    cc_reg_operand,
    "",
    CCmode,
    0,
    1
  },
  {
    short_cint_operand,
    "",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    SImode,
    0,
    1
  },
  {
    u_short_cint_operand,
    "",
    SImode,
    0,
    1
  },
  {
    cc_reg_operand,
    "",
    CCUNSmode,
    0,
    1
  },
  {
    short_cint_operand,
    "",
    SImode,
    0,
    1
  },
  {
    cc_reg_operand,
    "",
    CCFPmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    TFmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    TFmode,
    0,
    1
  },
  {
    scratch_operand,
    "",
    DFmode,
    0,
    0
  },
  {
    scratch_operand,
    "",
    DFmode,
    0,
    0
  },
  {
    scratch_operand,
    "",
    DFmode,
    0,
    0
  },
  {
    scratch_operand,
    "",
    DFmode,
    0,
    0
  },
  {
    scratch_operand,
    "",
    DFmode,
    0,
    0
  },
  {
    scratch_operand,
    "",
    DFmode,
    0,
    0
  },
  {
    scratch_operand,
    "",
    DFmode,
    0,
    0
  },
  {
    scratch_operand,
    "",
    DFmode,
    0,
    0
  },
  {
    cc_reg_not_cr0_operand,
    "",
    CCmode,
    0,
    1
  },
  {
    scc_comparison_operator,
    "",
    SImode,
    0,
    0
  },
  {
    cc_reg_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    SImode,
    0,
    1
  },
  {
    cc_reg_not_cr0_operand,
    "",
    CCmode,
    0,
    1
  },
  {
    scc_comparison_operator,
    "",
    SImode,
    0,
    0
  },
  {
    cc_reg_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    scc_comparison_operator,
    "",
    SImode,
    0,
    0
  },
  {
    cc_reg_operand,
    "y",
    VOIDmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    scc_comparison_operator,
    "",
    SImode,
    0,
    0
  },
  {
    cc_reg_operand,
    "y",
    VOIDmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "=r",
    DImode,
    0,
    1
  },
  {
    scc_comparison_operator,
    "",
    DImode,
    0,
    0
  },
  {
    cc_reg_operand,
    "y",
    VOIDmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "=r",
    DImode,
    0,
    1
  },
  {
    scc_comparison_operator,
    "",
    DImode,
    0,
    0
  },
  {
    cc_reg_operand,
    "y",
    VOIDmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    SImode,
    0,
    1
  },
  {
    scc_eq_operand,
    "",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    DImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    DImode,
    0,
    1
  },
  {
    scc_eq_operand,
    "",
    DImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    SImode,
    0,
    1
  },
  {
    scc_eq_operand,
    "",
    SImode,
    0,
    1
  },
  {
    cc_reg_operand,
    "",
    CCmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    DImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    DImode,
    0,
    1
  },
  {
    scc_eq_operand,
    "",
    DImode,
    0,
    1
  },
  {
    cc_reg_operand,
    "",
    CCmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    SImode,
    0,
    1
  },
  {
    comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    0,
    "",
    SImode,
    0,
    1
  },
  {
    reg_or_cint_operand,
    "",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    cc_reg_not_cr0_operand,
    "",
    CCmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    SImode,
    0,
    1
  },
  {
    scc_eq_operand,
    "",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "",
    SImode,
    0,
    0
  },
  {
    gpc_reg_operand,
    "",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    SImode,
    0,
    1
  },
  {
    scc_eq_operand,
    "",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    SImode,
    0,
    1
  },
  {
    cc_reg_not_cr0_operand,
    "",
    CCmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "",
    SImode,
    0,
    0
  },
  {
    scratch_operand,
    "",
    SImode,
    0,
    0
  },
  {
    gpc_reg_operand,
    "",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "",
    SImode,
    0,
    0
  },
  {
    cc_reg_not_cr0_operand,
    "",
    CCmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    DImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    DImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    DImode,
    0,
    1
  },
  {
    scratch_operand,
    "",
    DImode,
    0,
    0
  },
  {
    cc_reg_not_cr0_operand,
    "",
    CCmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    SImode,
    0,
    1
  },
  {
    reg_or_short_operand,
    "",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "",
    SImode,
    0,
    0
  },
  {
    gpc_reg_operand,
    "",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    SImode,
    0,
    1
  },
  {
    reg_or_short_operand,
    "",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    SImode,
    0,
    1
  },
  {
    cc_reg_not_cr0_operand,
    "",
    CCmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    SImode,
    0,
    1
  },
  {
    reg_or_neg_short_operand,
    "",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    DImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    DImode,
    0,
    1
  },
  {
    reg_or_neg_short_operand,
    "",
    DImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    SImode,
    0,
    1
  },
  {
    reg_or_neg_short_operand,
    "",
    SImode,
    0,
    1
  },
  {
    cc_reg_operand,
    "",
    CCmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    DImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    DImode,
    0,
    1
  },
  {
    reg_or_neg_short_operand,
    "",
    DImode,
    0,
    1
  },
  {
    cc_reg_operand,
    "",
    CCmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    SImode,
    0,
    1
  },
  {
    reg_or_neg_short_operand,
    "",
    SImode,
    0,
    1
  },
  {
    reg_or_short_operand,
    "",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    DImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    DImode,
    0,
    1
  },
  {
    reg_or_neg_short_operand,
    "",
    DImode,
    0,
    1
  },
  {
    reg_or_short_operand,
    "",
    DImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    SImode,
    0,
    1
  },
  {
    reg_or_neg_short_operand,
    "",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    SImode,
    0,
    1
  },
  {
    cc_reg_operand,
    "",
    CCmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    DImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    DImode,
    0,
    1
  },
  {
    reg_or_neg_short_operand,
    "",
    DImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    DImode,
    0,
    1
  },
  {
    cc_reg_operand,
    "",
    CCmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    SImode,
    0,
    1
  },
  {
    reg_or_neg_short_operand,
    "",
    SImode,
    0,
    1
  },
  {
    cc_reg_not_cr0_operand,
    "",
    CCmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    DImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    DImode,
    0,
    1
  },
  {
    reg_or_neg_short_operand,
    "",
    DImode,
    0,
    1
  },
  {
    cc_reg_not_cr0_operand,
    "",
    CCmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    SImode,
    0,
    1
  },
  {
    reg_or_neg_short_operand,
    "",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "",
    SImode,
    0,
    0
  },
  {
    gpc_reg_operand,
    "",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    SImode,
    0,
    1
  },
  {
    reg_or_neg_short_operand,
    "",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    SImode,
    0,
    1
  },
  {
    cc_reg_not_cr0_operand,
    "",
    CCmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    SImode,
    0,
    1
  },
  {
    reg_or_short_operand,
    "",
    SImode,
    0,
    1
  },
  {
    cc_reg_operand,
    "",
    CCmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    DImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    DImode,
    0,
    1
  },
  {
    reg_or_short_operand,
    "",
    DImode,
    0,
    1
  },
  {
    cc_reg_operand,
    "",
    CCmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    SImode,
    0,
    1
  },
  {
    reg_or_short_operand,
    "",
    SImode,
    0,
    1
  },
  {
    reg_or_short_operand,
    "",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    DImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    DImode,
    0,
    1
  },
  {
    reg_or_short_operand,
    "",
    DImode,
    0,
    1
  },
  {
    reg_or_short_operand,
    "",
    DImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    SImode,
    0,
    1
  },
  {
    reg_or_short_operand,
    "",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    SImode,
    0,
    1
  },
  {
    cc_reg_operand,
    "",
    CCmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    DImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    DImode,
    0,
    1
  },
  {
    reg_or_short_operand,
    "",
    DImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    DImode,
    0,
    1
  },
  {
    cc_reg_operand,
    "",
    CCmode,
    0,
    1
  },
  {
    cc_reg_operand,
    "",
    CCEQmode,
    0,
    1
  },
  {
    branch_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_reg_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    branch_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_reg_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    lwa_operand,
    "rm",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    scratch_operand,
    "",
    CCmode,
    0,
    0
  },
  {
    scratch_operand,
    "",
    SImode,
    0,
    0
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    scratch_operand,
    "",
    CCmode,
    0,
    0
  },
  {
    scratch_operand,
    "",
    DImode,
    0,
    0
  },
  {
    gpc_reg_operand,
    "",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    SImode,
    0,
    1
  },
  {
    comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    scratch_operand,
    "",
    CCmode,
    0,
    0
  },
  {
    scratch_operand,
    "",
    SImode,
    0,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    DImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    DImode,
    0,
    1
  },
  {
    comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    scratch_operand,
    "",
    CCmode,
    0,
    0
  },
  {
    scratch_operand,
    "",
    DImode,
    0,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    SImode,
    0,
    1
  },
  {
    comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    scratch_operand,
    "",
    CCmode,
    0,
    0
  },
  {
    scratch_operand,
    "",
    SImode,
    0,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    DImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    DImode,
    0,
    1
  },
  {
    comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    scratch_operand,
    "",
    CCmode,
    0,
    0
  },
  {
    scratch_operand,
    "",
    DImode,
    0,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    trap_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    general_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    scratch_operand,
    "",
    VOIDmode,
    0,
    0
  },
  {
    gpc_reg_operand,
    "",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    1
  },
  {
    reg_or_short_operand,
    "",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "",
    SImode,
    0,
    0
  },
  {
    scratch_operand,
    "",
    CCmode,
    0,
    0
  },
  {
    gpc_reg_operand,
    "",
    DImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    DImode,
    0,
    1
  },
  {
    reg_or_short_operand,
    "",
    DImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    DImode,
    0,
    1
  },
  {
    scratch_operand,
    "",
    DImode,
    0,
    0
  },
  {
    scratch_operand,
    "",
    CCmode,
    0,
    0
  },
  {
    gpc_reg_operand,
    "",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    HImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    HImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    QImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    QImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    QImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    QImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "",
    SImode,
    0,
    0
  },
  {
    scratch_operand,
    "",
    CCmode,
    0,
    0
  },
  {
    gpc_reg_operand,
    "",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    1
  },
  {
    reg_or_short_operand,
    "",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "",
    SImode,
    0,
    0
  },
  {
    scratch_operand,
    "",
    CCmode,
    0,
    0
  },
  {
    gpc_reg_operand,
    "",
    DImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    DImode,
    0,
    1
  },
  {
    reg_or_short_operand,
    "",
    DImode,
    0,
    1
  },
  {
    scratch_operand,
    "",
    DImode,
    0,
    0
  },
  {
    scratch_operand,
    "",
    CCmode,
    0,
    0
  },
  {
    memory_operand,
    "",
    QImode,
    0,
    1
  },
  {
    add_operand,
    "",
    QImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    QImode,
    0,
    1
  },
  {
    logical_operand,
    "",
    QImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    QImode,
    0,
    1
  },
  {
    and_operand,
    "",
    QImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    1
  },
  {
    add_operand,
    "",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    1
  },
  {
    logical_operand,
    "",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    1
  },
  {
    and_operand,
    "",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    1
  },
  {
    add_operand,
    "",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    1
  },
  {
    logical_operand,
    "",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    1
  },
  {
    and_operand,
    "",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    DImode,
    0,
    1
  },
  {
    add_operand,
    "",
    DImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    DImode,
    0,
    1
  },
  {
    logical_operand,
    "",
    DImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    DImode,
    0,
    1
  },
  {
    and_operand,
    "",
    DImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    1
  },
  {
    add_operand,
    "",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "",
    SImode,
    0,
    0
  },
  {
    scratch_operand,
    "",
    CCmode,
    0,
    0
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "",
    SImode,
    0,
    0
  },
  {
    scratch_operand,
    "",
    CCmode,
    0,
    0
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    1
  },
  {
    logical_operand,
    "",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "",
    SImode,
    0,
    0
  },
  {
    scratch_operand,
    "",
    CCmode,
    0,
    0
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    1
  },
  {
    and_operand,
    "",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "",
    SImode,
    0,
    0
  },
  {
    scratch_operand,
    "",
    CCmode,
    0,
    0
  },
  {
    memory_operand,
    "",
    DImode,
    0,
    1
  },
  {
    add_operand,
    "",
    DImode,
    0,
    1
  },
  {
    scratch_operand,
    "",
    DImode,
    0,
    0
  },
  {
    scratch_operand,
    "",
    CCmode,
    0,
    0
  },
  {
    memory_operand,
    "",
    DImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    DImode,
    0,
    1
  },
  {
    scratch_operand,
    "",
    DImode,
    0,
    0
  },
  {
    scratch_operand,
    "",
    CCmode,
    0,
    0
  },
  {
    memory_operand,
    "",
    DImode,
    0,
    1
  },
  {
    logical_operand,
    "",
    DImode,
    0,
    1
  },
  {
    scratch_operand,
    "",
    DImode,
    0,
    0
  },
  {
    scratch_operand,
    "",
    CCmode,
    0,
    0
  },
  {
    memory_operand,
    "",
    DImode,
    0,
    1
  },
  {
    and_operand,
    "",
    DImode,
    0,
    1
  },
  {
    scratch_operand,
    "",
    DImode,
    0,
    0
  },
  {
    scratch_operand,
    "",
    CCmode,
    0,
    0
  },
  {
    gpc_reg_operand,
    "",
    QImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    QImode,
    0,
    1
  },
  {
    add_operand,
    "",
    QImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    QImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    QImode,
    0,
    1
  },
  {
    logical_operand,
    "",
    QImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    QImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    QImode,
    0,
    1
  },
  {
    and_operand,
    "",
    QImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    1
  },
  {
    add_operand,
    "",
    HImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    1
  },
  {
    logical_operand,
    "",
    HImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    1
  },
  {
    and_operand,
    "",
    HImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    1
  },
  {
    add_operand,
    "",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    1
  },
  {
    and_operand,
    "",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    DImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    DImode,
    0,
    1
  },
  {
    add_operand,
    "",
    DImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    DImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    DImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    DImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    DImode,
    0,
    1
  },
  {
    logical_operand,
    "",
    DImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    DImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    DImode,
    0,
    1
  },
  {
    and_operand,
    "",
    DImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    1
  },
  {
    add_operand,
    "",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "",
    SImode,
    0,
    0
  },
  {
    scratch_operand,
    "",
    CCmode,
    0,
    0
  },
  {
    gpc_reg_operand,
    "",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "",
    SImode,
    0,
    0
  },
  {
    scratch_operand,
    "",
    CCmode,
    0,
    0
  },
  {
    gpc_reg_operand,
    "",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    1
  },
  {
    logical_operand,
    "",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "",
    SImode,
    0,
    0
  },
  {
    scratch_operand,
    "",
    CCmode,
    0,
    0
  },
  {
    gpc_reg_operand,
    "",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    1
  },
  {
    and_operand,
    "",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "",
    SImode,
    0,
    0
  },
  {
    scratch_operand,
    "",
    CCmode,
    0,
    0
  },
  {
    gpc_reg_operand,
    "",
    DImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    DImode,
    0,
    1
  },
  {
    add_operand,
    "",
    DImode,
    0,
    1
  },
  {
    scratch_operand,
    "",
    DImode,
    0,
    0
  },
  {
    scratch_operand,
    "",
    CCmode,
    0,
    0
  },
  {
    gpc_reg_operand,
    "",
    DImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    DImode,
    0,
    1
  },
  {
    gpc_reg_operand,
    "",
    DImode,
    0,
    1
  },
  {
    scratch_operand,
    "",
    DImode,
    0,
    0
  },
  {
    scratch_operand,
    "",
    CCmode,
    0,
    0
  },
  {
    gpc_reg_operand,
    "",
    DImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    DImode,
    0,
    1
  },
  {
    logical_operand,
    "",
    DImode,
    0,
    1
  },
  {
    scratch_operand,
    "",
    DImode,
    0,
    0
  },
  {
    scratch_operand,
    "",
    CCmode,
    0,
    0
  },
  {
    gpc_reg_operand,
    "",
    DImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    DImode,
    0,
    1
  },
  {
    and_operand,
    "",
    DImode,
    0,
    1
  },
  {
    scratch_operand,
    "",
    DImode,
    0,
    0
  },
  {
    scratch_operand,
    "",
    CCmode,
    0,
    0
  },
  {
    memory_operand,
    "",
    QImode,
    0,
    1
  },
  {
    any_operand,
    "",
    QImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    1
  },
  {
    any_operand,
    "",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    1
  },
  {
    any_operand,
    "",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    DImode,
    0,
    1
  },
  {
    any_operand,
    "",
    DImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    TImode,
    0,
    1
  },
  {
    any_operand,
    "",
    TImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    any_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V8HImode,
    0,
    1
  },
  {
    any_operand,
    "",
    V8HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V16QImode,
    0,
    1
  },
  {
    any_operand,
    "",
    V16QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4SFmode,
    0,
    1
  },
  {
    any_operand,
    "",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    input_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V8HImode,
    0,
    1
  },
  {
    input_operand,
    "",
    V8HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V16QImode,
    0,
    1
  },
  {
    input_operand,
    "",
    V16QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4SFmode,
    0,
    1
  },
  {
    input_operand,
    "",
    V4SFmode,
    0,
    1
  },
  {
    altivec_register_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    easy_vector_constant_add_self,
    "",
    V4SImode,
    0,
    1
  },
  {
    altivec_register_operand,
    "",
    V8HImode,
    0,
    1
  },
  {
    easy_vector_constant_add_self,
    "",
    V8HImode,
    0,
    1
  },
  {
    altivec_register_operand,
    "",
    V16QImode,
    0,
    1
  },
  {
    easy_vector_constant_add_self,
    "",
    V16QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    register_operand,
    "=v",
    V4SImode,
    0,
    1
  },
  {
    register_operand,
    "v",
    V4SImode,
    0,
    1
  },
  {
    register_operand,
    "v",
    V4SImode,
    0,
    1
  },
  {
    comparison_operator,
    "",
    V4SImode,
    0,
    1
  },
  {
    register_operand,
    "v",
    V4SImode,
    0,
    1
  },
  {
    register_operand,
    "v",
    V4SImode,
    0,
    1
  },
  {
    register_operand,
    "=v",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "v",
    V4SImode,
    0,
    1
  },
  {
    register_operand,
    "v",
    V4SFmode,
    0,
    1
  },
  {
    comparison_operator,
    "",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "v",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "v",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "=v",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "v",
    V4SImode,
    0,
    1
  },
  {
    register_operand,
    "v",
    V8HImode,
    0,
    1
  },
  {
    comparison_operator,
    "",
    V8HImode,
    0,
    1
  },
  {
    register_operand,
    "v",
    V8HImode,
    0,
    1
  },
  {
    register_operand,
    "v",
    V8HImode,
    0,
    1
  },
  {
    register_operand,
    "=v",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "v",
    V4SImode,
    0,
    1
  },
  {
    register_operand,
    "v",
    V16QImode,
    0,
    1
  },
  {
    comparison_operator,
    "",
    V16QImode,
    0,
    1
  },
  {
    register_operand,
    "v",
    V16QImode,
    0,
    1
  },
  {
    register_operand,
    "v",
    V16QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V16QImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V8HImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V16QImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4SFmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V8HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V16QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    QImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V8HImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V16QImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    V4SFmode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=v",
    V4SImode,
    0,
    1
  },
  {
    register_operand,
    "v",
    V4SImode,
    0,
    1
  },
  {
    reg_or_short_operand,
    "",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=v",
    V8HImode,
    0,
    1
  },
  {
    register_operand,
    "v",
    V8HImode,
    0,
    1
  },
  {
    reg_or_short_operand,
    "",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=v",
    V16QImode,
    0,
    1
  },
  {
    register_operand,
    "v",
    V16QImode,
    0,
    1
  },
  {
    reg_or_short_operand,
    "",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=v",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "v",
    V4SFmode,
    0,
    1
  },
  {
    reg_or_short_operand,
    "",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V8HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V8HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V16QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    V16QImode,
    0,
    1
  },
};


#if GCC_VERSION >= 2007
__extension__
#endif

const struct insn_data insn_data[] = 
{
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/darwin.md:22 */
  {
    "adddi3_high",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "{cau|addis} %0,%1,ha16(%2)",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_adddi3_high,
    &operand_data[1],
    3,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/darwin.md:30 */
  {
    "movdf_low_si",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_1 },
#else
    { 0, 0, output_1 },
#endif
    (insn_gen_fn) gen_movdf_low_si,
    &operand_data[4],
    3,
    0,
    2,
    3
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/darwin.md:61 */
  {
    "movdf_low_di",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_2 },
#else
    { 0, 0, output_2 },
#endif
    (insn_gen_fn) gen_movdf_low_di,
    &operand_data[7],
    3,
    0,
    2,
    3
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/darwin.md:81 */
  {
    "movdf_low_st_si",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "stfd %0,lo16(%2)(%1)",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_movdf_low_st_si,
    &operand_data[10],
    3,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/darwin.md:90 */
  {
    "movdf_low_st_di",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "stfd %0,lo16(%2)(%1)",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_movdf_low_st_di,
    &operand_data[13],
    3,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/darwin.md:99 */
  {
    "movsf_low_si",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_5 },
#else
    { 0, output_5, 0 },
#endif
    (insn_gen_fn) gen_movsf_low_si,
    &operand_data[16],
    3,
    0,
    2,
    2
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/darwin.md:110 */
  {
    "movsf_low_di",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_6 },
#else
    { 0, output_6, 0 },
#endif
    (insn_gen_fn) gen_movsf_low_di,
    &operand_data[19],
    3,
    0,
    2,
    2
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/darwin.md:121 */
  {
    "movsf_low_st_si",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_7 },
#else
    { 0, output_7, 0 },
#endif
    (insn_gen_fn) gen_movsf_low_st_si,
    &operand_data[22],
    3,
    0,
    2,
    2
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/darwin.md:132 */
  {
    "movsf_low_st_di",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_8 },
#else
    { 0, output_8, 0 },
#endif
    (insn_gen_fn) gen_movsf_low_st_di,
    &operand_data[25],
    3,
    0,
    2,
    2
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/darwin.md:144 */
  {
    "movdi_low",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "{l|ld} %0,lo16(%2)(%1)",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_movdi_low,
    &operand_data[28],
    3,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/darwin.md:153 */
  {
    "movsi_low_st",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "{st|stw} %0,lo16(%2)(%1)",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_movsi_low_st,
    &operand_data[31],
    3,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/darwin.md:162 */
  {
    "movdi_low_st",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "{st|std} %0,lo16(%2)(%1)",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_movdi_low_st,
    &operand_data[34],
    3,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/darwin.md:185 */
  {
    "macho_high_si",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "{liu|lis} %0,ha16(%1)",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_macho_high_si,
    &operand_data[37],
    2,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/darwin.md:192 */
  {
    "macho_high_di",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "{liu|lis} %0,ha16(%1)",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_macho_high_di,
    &operand_data[39],
    2,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/darwin.md:212 */
  {
    "macho_low_si",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_14 },
#else
    { 0, output_14, 0 },
#endif
    (insn_gen_fn) gen_macho_low_si,
    &operand_data[41],
    3,
    0,
    2,
    2
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/darwin.md:221 */
  {
    "macho_low_di",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_15 },
#else
    { 0, output_15, 0 },
#endif
    (insn_gen_fn) gen_macho_low_di,
    &operand_data[44],
    3,
    0,
    2,
    2
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/darwin.md:255 */
  {
    "load_macho_picbase_si",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "bcl 20,31,%1\n%1:",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_load_macho_picbase_si,
    &operand_data[47],
    2,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/darwin.md:264 */
  {
    "load_macho_picbase_di",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "bcl 20,31,%1\n%1:",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_load_macho_picbase_di,
    &operand_data[49],
    2,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/darwin.md:289 */
  {
    "load_macho_picbase_label_si",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    ";bcl 20,31,%1\n%1:",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_load_macho_picbase_label_si,
    &operand_data[47],
    2,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/darwin.md:297 */
  {
    "load_macho_picbase_label_di",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    ";bcl 20,31,%1\n%1:",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_load_macho_picbase_label_di,
    &operand_data[49],
    2,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/darwin.md:325 */
  {
    "macho_correct_pic_si",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "addis %0,%1,ha16(%2-%3)\n\taddi %0,%0,lo16(%2-%3)",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_macho_correct_pic_si,
    &operand_data[51],
    4,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/darwin.md:335 */
  {
    "macho_correct_pic_di",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "addis %0,%1,ha16(%2-%3)\n\taddi %0,%0,lo16(%2-%3)",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_macho_correct_pic_di,
    &operand_data[55],
    4,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/darwin.md:345 */
  {
    "*call_indirect_nonlocal_darwin64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_22 },
#else
    { 0, 0, output_22 },
#endif
    0,
    &operand_data[59],
    4,
    0,
    4,
    3
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/darwin.md:357 */
  {
    "*call_nonlocal_darwin64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_23 },
#else
    { 0, 0, output_23 },
#endif
    0,
    &operand_data[63],
    4,
    0,
    2,
    3
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/darwin.md:374 */
  {
    "*call_value_indirect_nonlocal_darwin64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_24 },
#else
    { 0, 0, output_24 },
#endif
    0,
    &operand_data[67],
    5,
    0,
    4,
    3
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/darwin.md:387 */
  {
    "*call_value_nonlocal_darwin64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_25 },
#else
    { 0, 0, output_25 },
#endif
    0,
    &operand_data[72],
    5,
    0,
    2,
    3
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/darwin.md:405 */
  {
    "*sibcall_nonlocal_darwin64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_26 },
#else
    { 0, 0, output_26 },
#endif
    0,
    &operand_data[77],
    4,
    0,
    2,
    3
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/darwin.md:419 */
  {
    "*sibcall_value_nonlocal_darwin64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_27 },
#else
    { 0, 0, output_27 },
#endif
    0,
    &operand_data[81],
    5,
    0,
    2,
    3
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/darwin.md:436 */
  {
    "*sibcall_symbolic_64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_28 },
#else
    { 0, 0, output_28 },
#endif
    0,
    &operand_data[86],
    4,
    0,
    2,
    3
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/darwin.md:455 */
  {
    "*sibcall_value_symbolic_64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_29 },
#else
    { 0, 0, output_29 },
#endif
    0,
    &operand_data[90],
    5,
    0,
    2,
    3
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/darwin.md:476 */
  {
    "*save_fpregs_with_label_di",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_30 },
#else
    { 0, 0, output_30 },
#endif
    0,
    &operand_data[95],
    6,
    0,
    1,
    3
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/darwin.md:494 */
  {
    "*save_vregs_di",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "bl %z2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[101],
    5,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/darwin.md:505 */
  {
    "*restore_vregs_di",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "bl %z2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[106],
    6,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/darwin.md:515 */
  {
    "*save_vregs_with_label_di",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_33 },
#else
    { 0, 0, output_33 },
#endif
    0,
    &operand_data[112],
    6,
    0,
    1,
    3
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:181 */
  {
    "*zero_extendqidi2_internal1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_34 },
#else
    { 0, output_34, 0 },
#endif
    0,
    &operand_data[118],
    2,
    0,
    2,
    2
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:181 */
  {
    "*zero_extendhidi2_internal1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_35 },
#else
    { 0, output_35, 0 },
#endif
    0,
    &operand_data[120],
    2,
    0,
    2,
    2
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:181 */
  {
    "*zero_extendsidi2_internal1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_36 },
#else
    { 0, output_36, 0 },
#endif
    0,
    &operand_data[122],
    2,
    0,
    2,
    2
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:190 */
  {
    "*zero_extendqidi2_internal2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_37 },
#else
    { 0, output_37, 0 },
#endif
    0,
    &operand_data[124],
    3,
    0,
    2,
    2
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:190 */
  {
    "*zero_extendhidi2_internal2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_38 },
#else
    { 0, output_38, 0 },
#endif
    0,
    &operand_data[127],
    3,
    0,
    2,
    2
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:190 */
  {
    "*zero_extendsidi2_internal2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_39 },
#else
    { 0, output_39, 0 },
#endif
    0,
    &operand_data[130],
    3,
    0,
    2,
    2
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:215 */
  {
    "*zero_extendqidi2_internal3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_40 },
#else
    { 0, output_40, 0 },
#endif
    0,
    &operand_data[133],
    3,
    1,
    2,
    2
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:215 */
  {
    "*zero_extendhidi2_internal3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_41 },
#else
    { 0, output_41, 0 },
#endif
    0,
    &operand_data[136],
    3,
    1,
    2,
    2
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:215 */
  {
    "*zero_extendsidi2_internal3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_42 },
#else
    { 0, output_42, 0 },
#endif
    0,
    &operand_data[139],
    3,
    1,
    2,
    2
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:242 */
  {
    "extendqidi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "extsb %0,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_extendqidi2,
    &operand_data[142],
    2,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:248 */
  {
    "*rs6000.md:248",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_44 },
#else
    { 0, output_44, 0 },
#endif
    0,
    &operand_data[124],
    3,
    0,
    2,
    2
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:273 */
  {
    "*rs6000.md:273",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_45 },
#else
    { 0, output_45, 0 },
#endif
    0,
    &operand_data[133],
    3,
    1,
    2,
    2
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:306 */
  {
    "*rs6000.md:306",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_46 },
#else
    { 0, output_46, 0 },
#endif
    0,
    &operand_data[120],
    2,
    0,
    2,
    2
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:315 */
  {
    "*rs6000.md:315",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_47 },
#else
    { 0, output_47, 0 },
#endif
    0,
    &operand_data[127],
    3,
    0,
    2,
    2
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:340 */
  {
    "*rs6000.md:340",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_48 },
#else
    { 0, output_48, 0 },
#endif
    0,
    &operand_data[136],
    3,
    1,
    2,
    2
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:373 */
  {
    "*rs6000.md:373",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_49 },
#else
    { 0, output_49, 0 },
#endif
    0,
    &operand_data[144],
    2,
    0,
    2,
    2
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:382 */
  {
    "*rs6000.md:382",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_50 },
#else
    { 0, output_50, 0 },
#endif
    0,
    &operand_data[130],
    3,
    0,
    2,
    2
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:407 */
  {
    "*rs6000.md:407",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_51 },
#else
    { 0, output_51, 0 },
#endif
    0,
    &operand_data[139],
    3,
    1,
    2,
    2
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:440 */
  {
    "*rs6000.md:440",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_52 },
#else
    { 0, output_52, 0 },
#endif
    0,
    &operand_data[146],
    2,
    0,
    2,
    2
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:449 */
  {
    "*rs6000.md:449",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_53 },
#else
    { 0, output_53, 0 },
#endif
    0,
    &operand_data[148],
    3,
    0,
    2,
    2
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:474 */
  {
    "*rs6000.md:474",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_54 },
#else
    { 0, output_54, 0 },
#endif
    0,
    &operand_data[151],
    3,
    1,
    2,
    2
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:516 */
  {
    "extendqisi2_ppc",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "extsb %0,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_extendqisi2_ppc,
    &operand_data[154],
    2,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:522 */
  {
    "*rs6000.md:522",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_56 },
#else
    { 0, output_56, 0 },
#endif
    0,
    &operand_data[148],
    3,
    0,
    2,
    2
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:547 */
  {
    "*rs6000.md:547",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_57 },
#else
    { 0, output_57, 0 },
#endif
    0,
    &operand_data[151],
    3,
    1,
    2,
    2
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:606 */
  {
    "*rs6000.md:606",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_58 },
#else
    { 0, output_58, 0 },
#endif
    0,
    &operand_data[156],
    2,
    0,
    2,
    2
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:615 */
  {
    "*rs6000.md:615",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_59 },
#else
    { 0, output_59, 0 },
#endif
    0,
    &operand_data[158],
    3,
    0,
    2,
    2
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:640 */
  {
    "*rs6000.md:640",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_60 },
#else
    { 0, output_60, 0 },
#endif
    0,
    &operand_data[161],
    3,
    1,
    2,
    2
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:682 */
  {
    "extendqihi2_ppc",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "extsb %0,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_extendqihi2_ppc,
    &operand_data[164],
    2,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:688 */
  {
    "*rs6000.md:688",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_62 },
#else
    { 0, output_62, 0 },
#endif
    0,
    &operand_data[158],
    3,
    0,
    2,
    2
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:713 */
  {
    "*rs6000.md:713",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_63 },
#else
    { 0, output_63, 0 },
#endif
    0,
    &operand_data[161],
    3,
    1,
    2,
    2
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:774 */
  {
    "*rs6000.md:774",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_64 },
#else
    { 0, output_64, 0 },
#endif
    0,
    &operand_data[166],
    2,
    0,
    2,
    2
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:783 */
  {
    "*rs6000.md:783",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_65 },
#else
    { 0, output_65, 0 },
#endif
    0,
    &operand_data[168],
    3,
    0,
    2,
    2
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:808 */
  {
    "*rs6000.md:808",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_66 },
#else
    { 0, output_66, 0 },
#endif
    0,
    &operand_data[171],
    3,
    1,
    2,
    2
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:841 */
  {
    "*rs6000.md:841",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_67 },
#else
    { 0, output_67, 0 },
#endif
    0,
    &operand_data[166],
    2,
    0,
    2,
    2
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:850 */
  {
    "*rs6000.md:850",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_68 },
#else
    { 0, output_68, 0 },
#endif
    0,
    &operand_data[168],
    3,
    0,
    2,
    2
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:875 */
  {
    "*rs6000.md:875",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_69 },
#else
    { 0, output_69, 0 },
#endif
    0,
    &operand_data[171],
    3,
    1,
    2,
    2
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:890 */
  {
    "*macchwc",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "macchw. %0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[174],
    5,
    3,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:910 */
  {
    "*macchw",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "macchw %0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[179],
    4,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:922 */
  {
    "*macchwuc",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "macchwu. %0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[174],
    5,
    3,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:942 */
  {
    "*macchwu",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "macchwu %0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[179],
    4,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:954 */
  {
    "*machhwc",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "machhw. %0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[183],
    5,
    3,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:976 */
  {
    "*machhw",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "machhw %0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[188],
    4,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:989 */
  {
    "*machhwuc",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "machhwu. %0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[183],
    5,
    3,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:1011 */
  {
    "*machhwu",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "machhwu %0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[188],
    4,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:1024 */
  {
    "*maclhwc",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "maclhw. %0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[192],
    5,
    3,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:1042 */
  {
    "*maclhw",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "maclhw %0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[197],
    4,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:1053 */
  {
    "*maclhwuc",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "maclhwu. %0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[192],
    5,
    3,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:1071 */
  {
    "*maclhwu",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "maclhwu %0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[197],
    4,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:1082 */
  {
    "*nmacchwc",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "nmacchw. %0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[174],
    5,
    3,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:1102 */
  {
    "*nmacchw",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "nmacchw %0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[179],
    4,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:1114 */
  {
    "*nmachhwc",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "nmachhw. %0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[183],
    5,
    3,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:1136 */
  {
    "*nmachhw",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "nmachhw %0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[188],
    4,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:1149 */
  {
    "*nmaclhwc",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "nmaclhw. %0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[192],
    5,
    3,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:1167 */
  {
    "*nmaclhw",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "nmaclhw %0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[197],
    4,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:1178 */
  {
    "*mulchwc",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mulchw. %0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[174],
    4,
    2,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:1196 */
  {
    "*mulchw",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mulchw %0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[174],
    3,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:1207 */
  {
    "*mulchwuc",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mulchwu. %0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[174],
    4,
    2,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:1225 */
  {
    "*mulchwu",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mulchwu %0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[174],
    3,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:1236 */
  {
    "*mulhhwc",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mulhhw. %0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[183],
    4,
    2,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:1256 */
  {
    "*mulhhw",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mulhhw %0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[183],
    3,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:1268 */
  {
    "*mulhhwuc",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mulhhwu. %0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[183],
    4,
    2,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:1288 */
  {
    "*mulhhwu",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mulhhwu %0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[183],
    3,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:1300 */
  {
    "*mullhwc",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mullhw. %0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[192],
    4,
    2,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:1316 */
  {
    "*mullhw",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mullhw %0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[192],
    3,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:1326 */
  {
    "*mullhwuc",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mullhwu. %0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[192],
    4,
    2,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:1342 */
  {
    "*mullhwu",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mullhwu %0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[192],
    3,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:1353 */
  {
    "dlmzb",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "dlmzb. %0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_dlmzb,
    &operand_data[201],
    4,
    2,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:1470 */
  {
    "*addsi3_internal1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_101 },
#else
    { 0, output_101, 0 },
#endif
    0,
    &operand_data[205],
    3,
    0,
    4,
    2
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:1470 */
  {
    "*adddi3_internal1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_102 },
#else
    { 0, output_102, 0 },
#endif
    0,
    &operand_data[208],
    3,
    0,
    4,
    2
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:1482 */
  {
    "addsi3_high",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "{cau|addis} %0,%1,ha16(%2)",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_addsi3_high,
    &operand_data[211],
    3,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:1490 */
  {
    "*addsi3_internal2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_104 },
#else
    { 0, output_104, 0 },
#endif
    0,
    &operand_data[214],
    4,
    0,
    4,
    2
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:1490 */
  {
    "*adddi3_internal2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_105 },
#else
    { 0, output_105, 0 },
#endif
    0,
    &operand_data[218],
    4,
    0,
    4,
    2
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:1520 */
  {
    "*addsi3_internal3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_106 },
#else
    { 0, output_106, 0 },
#endif
    0,
    &operand_data[222],
    4,
    2,
    4,
    2
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:1520 */
  {
    "*adddi3_internal3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_107 },
#else
    { 0, output_107, 0 },
#endif
    0,
    &operand_data[226],
    4,
    2,
    4,
    2
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:1583 */
  {
    "one_cmplsi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "nor %0,%1,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_one_cmplsi2,
    &operand_data[51],
    2,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:1583 */
  {
    "one_cmpldi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "nor %0,%1,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_one_cmpldi2,
    &operand_data[55],
    2,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:1589 */
  {
    "*rs6000.md:1589",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_110 },
#else
    { 0, output_110, 0 },
#endif
    0,
    &operand_data[230],
    3,
    0,
    2,
    2
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:1589 */
  {
    "*rs6000.md:1589",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_111 },
#else
    { 0, output_111, 0 },
#endif
    0,
    &operand_data[233],
    3,
    0,
    2,
    2
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:1614 */
  {
    "*rs6000.md:1614",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_112 },
#else
    { 0, output_112, 0 },
#endif
    0,
    &operand_data[236],
    3,
    1,
    2,
    2
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:1614 */
  {
    "*rs6000.md:1614",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_113 },
#else
    { 0, output_113, 0 },
#endif
    0,
    &operand_data[239],
    3,
    1,
    2,
    2
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:1641 */
  {
    "*rs6000.md:1641",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "{sf%I1|subf%I1c} %0,%2,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[242],
    3,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:1648 */
  {
    "*rs6000.md:1648",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_115 },
#else
    { 0, output_115, 0 },
#endif
    0,
    &operand_data[245],
    3,
    0,
    2,
    2
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:1648 */
  {
    "*rs6000.md:1648",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_116 },
#else
    { 0, output_116, 0 },
#endif
    0,
    &operand_data[248],
    3,
    0,
    2,
    2
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:1657 */
  {
    "*rs6000.md:1657",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_117 },
#else
    { 0, output_117, 0 },
#endif
    0,
    &operand_data[251],
    4,
    0,
    2,
    2
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:1670 */
  {
    "*rs6000.md:1670",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_118 },
#else
    { 0, output_118, 0 },
#endif
    0,
    &operand_data[251],
    4,
    0,
    2,
    2
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:1670 */
  {
    "*rs6000.md:1670",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_119 },
#else
    { 0, output_119, 0 },
#endif
    0,
    &operand_data[255],
    4,
    0,
    2,
    2
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:1698 */
  {
    "*rs6000.md:1698",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_120 },
#else
    { 0, output_120, 0 },
#endif
    0,
    &operand_data[259],
    4,
    2,
    2,
    2
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:1712 */
  {
    "*rs6000.md:1712",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_121 },
#else
    { 0, output_121, 0 },
#endif
    0,
    &operand_data[259],
    4,
    2,
    2,
    2
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:1712 */
  {
    "*rs6000.md:1712",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_122 },
#else
    { 0, output_122, 0 },
#endif
    0,
    &operand_data[263],
    4,
    2,
    2,
    2
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:2007 */
  {
    "abssi2_nopower",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_abssi2_nopower,
    &operand_data[267],
    3,
    0,
    2,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:2025 */
  {
    "*nabs_nopower",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[267],
    3,
    0,
    2,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:2043 */
  {
    "*negsi2_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "neg %0,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[51],
    2,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:2043 */
  {
    "*negdi2_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "neg %0,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[55],
    2,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:2049 */
  {
    "*rs6000.md:2049",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_127 },
#else
    { 0, output_127, 0 },
#endif
    0,
    &operand_data[230],
    3,
    0,
    2,
    2
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:2049 */
  {
    "*rs6000.md:2049",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_128 },
#else
    { 0, output_128, 0 },
#endif
    0,
    &operand_data[233],
    3,
    0,
    2,
    2
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:2074 */
  {
    "*rs6000.md:2074",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_129 },
#else
    { 0, output_129, 0 },
#endif
    0,
    &operand_data[236],
    3,
    1,
    2,
    2
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:2074 */
  {
    "*rs6000.md:2074",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_130 },
#else
    { 0, output_130, 0 },
#endif
    0,
    &operand_data[239],
    3,
    1,
    2,
    2
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:2101 */
  {
    "clzsi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "{cntlz|cntlzw} %0,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_clzsi2,
    &operand_data[51],
    2,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:2101 */
  {
    "clzdi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "{cntlz|cntlzd} %0,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_clzdi2,
    &operand_data[55],
    2,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:2198 */
  {
    "mulsi3_no_mq",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_133 },
#else
    { 0, output_133, 0 },
#endif
    (insn_gen_fn) gen_mulsi3_no_mq,
    &operand_data[270],
    3,
    0,
    2,
    2
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:2243 */
  {
    "*mulsi3_no_mq_internal1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_134 },
#else
    { 0, output_134, 0 },
#endif
    0,
    &operand_data[273],
    4,
    0,
    2,
    2
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:2302 */
  {
    "*mulsi3_no_mq_internal2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_135 },
#else
    { 0, output_135, 0 },
#endif
    0,
    &operand_data[277],
    4,
    2,
    2,
    2
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:2396 */
  {
    "*udivsi3_no_mq",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "divwu %0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[201],
    3,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:2396 */
  {
    "*udivsi3_no_mq",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "divdu %0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[281],
    3,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:2449 */
  {
    "*divsi3_no_mq",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "divw %0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[201],
    3,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:2449 */
  {
    "*divdi3_no_mq",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "divd %0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[281],
    3,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:2482 */
  {
    "*rs6000.md:2482",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "{srai|srawi} %0,%1,%p2\n\t{aze|addze} %0,%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[284],
    3,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:2482 */
  {
    "*rs6000.md:2482",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "{srai|sradi} %0,%1,%p2\n\t{aze|addze} %0,%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[287],
    3,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:2491 */
  {
    "*rs6000.md:2491",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_142 },
#else
    { 0, output_142, 0 },
#endif
    0,
    &operand_data[290],
    4,
    0,
    2,
    2
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:2491 */
  {
    "*rs6000.md:2491",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_143 },
#else
    { 0, output_143, 0 },
#endif
    0,
    &operand_data[294],
    4,
    0,
    2,
    2
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:2519 */
  {
    "*rs6000.md:2519",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_144 },
#else
    { 0, output_144, 0 },
#endif
    0,
    &operand_data[298],
    4,
    2,
    2,
    2
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:2519 */
  {
    "*rs6000.md:2519",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_145 },
#else
    { 0, output_145, 0 },
#endif
    0,
    &operand_data[302],
    4,
    2,
    2,
    2
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:2655 */
  {
    "mulh_call",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "bla __mulh",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mulh_call,
    &operand_data[306],
    1,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:2666 */
  {
    "mull_call",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "bla __mull",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mull_call,
    &operand_data[306],
    1,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:2676 */
  {
    "divss_call",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "bla __divss",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_divss_call,
    &operand_data[306],
    1,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:2687 */
  {
    "divus_call",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "bla __divus",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_divus_call,
    &operand_data[306],
    2,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:2700 */
  {
    "quoss_call",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "bla __quoss",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_quoss_call,
    &operand_data[306],
    1,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:2708 */
  {
    "quous_call",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "bla __quous",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_quous_call,
    &operand_data[306],
    2,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:2725 */
  {
    "andsi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_152 },
#else
    { 0, output_152, 0 },
#endif
    (insn_gen_fn) gen_andsi3,
    &operand_data[308],
    4,
    0,
    4,
    2
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:2742 */
  {
    "*andsi3_internal2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_153 },
#else
    { 0, output_153, 0 },
#endif
    0,
    &operand_data[312],
    5,
    0,
    8,
    2
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:2762 */
  {
    "*andsi3_internal3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_154 },
#else
    { 0, output_154, 0 },
#endif
    0,
    &operand_data[312],
    5,
    0,
    8,
    2
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:2819 */
  {
    "*andsi3_internal4",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_155 },
#else
    { 0, output_155, 0 },
#endif
    0,
    &operand_data[317],
    5,
    2,
    8,
    2
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:2841 */
  {
    "*andsi3_internal5",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_156 },
#else
    { 0, output_156, 0 },
#endif
    0,
    &operand_data[317],
    5,
    2,
    8,
    2
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:2903 */
  {
    "*andsi3_internal6",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[322],
    3,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:2967 */
  {
    "*boolsi3_internal1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_158 },
#else
    { 0, output_158, 0 },
#endif
    0,
    &operand_data[325],
    4,
    0,
    3,
    2
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:2978 */
  {
    "*boolsi3_internal2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_159 },
#else
    { 0, output_159, 0 },
#endif
    0,
    &operand_data[329],
    5,
    0,
    2,
    2
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:3006 */
  {
    "*boolsi3_internal3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_160 },
#else
    { 0, output_160, 0 },
#endif
    0,
    &operand_data[334],
    5,
    1,
    2,
    2
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:3058 */
  {
    "*boolcsi3_internal1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%q3 %0,%2,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[339],
    4,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:3066 */
  {
    "*boolcsi3_internal2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_162 },
#else
    { 0, output_162, 0 },
#endif
    0,
    &operand_data[343],
    5,
    0,
    2,
    2
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:3094 */
  {
    "*boolcsi3_internal3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_163 },
#else
    { 0, output_163, 0 },
#endif
    0,
    &operand_data[334],
    5,
    1,
    2,
    2
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:3124 */
  {
    "*boolccsi3_internal1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%q3 %0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[339],
    4,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:3132 */
  {
    "*boolccsi3_internal2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_165 },
#else
    { 0, output_165, 0 },
#endif
    0,
    &operand_data[343],
    5,
    0,
    2,
    2
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:3160 */
  {
    "*boolccsi3_internal3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_166 },
#else
    { 0, output_166, 0 },
#endif
    0,
    &operand_data[334],
    5,
    1,
    2,
    2
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:3409 */
  {
    "insvsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_167 },
#else
    { 0, 0, output_167 },
#endif
    (insn_gen_fn) gen_insvsi,
    &operand_data[348],
    4,
    0,
    1,
    3
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:3426 */
  {
    "*insvsi_internal1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_168 },
#else
    { 0, 0, output_168 },
#endif
    0,
    &operand_data[348],
    5,
    0,
    1,
    3
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:3445 */
  {
    "*insvsi_internal2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_169 },
#else
    { 0, 0, output_169 },
#endif
    0,
    &operand_data[348],
    5,
    0,
    1,
    3
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:3464 */
  {
    "*insvsi_internal3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_170 },
#else
    { 0, 0, output_170 },
#endif
    0,
    &operand_data[348],
    5,
    0,
    1,
    3
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:3483 */
  {
    "*insvsi_internal4",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_171 },
#else
    { 0, 0, output_171 },
#endif
    0,
    &operand_data[348],
    6,
    0,
    1,
    3
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:3506 */
  {
    "*insvsi_internal5",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_172 },
#else
    { 0, 0, output_172 },
#endif
    0,
    &operand_data[354],
    6,
    0,
    1,
    3
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:3525 */
  {
    "*insvsi_internal6",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_173 },
#else
    { 0, 0, output_173 },
#endif
    0,
    &operand_data[354],
    6,
    0,
    1,
    3
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:3544 */
  {
    "insvdi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_174 },
#else
    { 0, 0, output_174 },
#endif
    (insn_gen_fn) gen_insvdi,
    &operand_data[360],
    4,
    0,
    1,
    3
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:3559 */
  {
    "*insvdi_internal2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_175 },
#else
    { 0, 0, output_175 },
#endif
    0,
    &operand_data[360],
    5,
    0,
    1,
    3
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:3579 */
  {
    "*insvdi_internal3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_176 },
#else
    { 0, 0, output_176 },
#endif
    0,
    &operand_data[360],
    5,
    0,
    1,
    3
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:3621 */
  {
    "extzvsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_177 },
#else
    { 0, 0, output_177 },
#endif
    (insn_gen_fn) gen_extzvsi,
    &operand_data[365],
    4,
    0,
    1,
    3
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:3639 */
  {
    "*extzvsi_internal1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_178 },
#else
    { 0, 0, output_178 },
#endif
    0,
    &operand_data[369],
    5,
    0,
    2,
    3
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:3697 */
  {
    "*extzvsi_internal2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_179 },
#else
    { 0, 0, output_179 },
#endif
    0,
    &operand_data[374],
    5,
    3,
    2,
    3
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:3748 */
  {
    "extzvdi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_180 },
#else
    { 0, 0, output_180 },
#endif
    (insn_gen_fn) gen_extzvdi,
    &operand_data[379],
    4,
    0,
    1,
    3
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:3767 */
  {
    "*extzvdi_internal1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_181 },
#else
    { 0, 0, output_181 },
#endif
    0,
    &operand_data[383],
    5,
    0,
    1,
    3
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:3789 */
  {
    "*extzvdi_internal2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_182 },
#else
    { 0, 0, output_182 },
#endif
    0,
    &operand_data[379],
    5,
    3,
    1,
    3
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:3812 */
  {
    "rotlsi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "{rl%I2nm|rlw%I2nm} %0,%1,%h2,0xffffffff",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_rotlsi3,
    &operand_data[388],
    3,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:3819 */
  {
    "*rotlsi3_internal2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_184 },
#else
    { 0, output_184, 0 },
#endif
    0,
    &operand_data[391],
    4,
    0,
    2,
    2
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:3846 */
  {
    "*rotlsi3_internal3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_185 },
#else
    { 0, output_185, 0 },
#endif
    0,
    &operand_data[395],
    4,
    2,
    2,
    2
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:3875 */
  {
    "*rotlsi3_internal4",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "{rl%I2nm|rlw%I2nm} %0,%1,%h2,%m3,%M3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[399],
    4,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:3883 */
  {
    "*rotlsi3_internal5",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_187 },
#else
    { 0, output_187, 0 },
#endif
    0,
    &operand_data[403],
    5,
    0,
    2,
    2
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:3916 */
  {
    "*rotlsi3_internal6",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_188 },
#else
    { 0, output_188, 0 },
#endif
    0,
    &operand_data[408],
    5,
    3,
    2,
    2
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:3949 */
  {
    "*rotlsi3_internal7",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "{rl%I2nm|rlw%I2nm} %0,%1,%h2,0xff",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[388],
    3,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:3958 */
  {
    "*rotlsi3_internal8",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_190 },
#else
    { 0, output_190, 0 },
#endif
    0,
    &operand_data[391],
    4,
    0,
    2,
    2
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:3991 */
  {
    "*rotlsi3_internal9",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_191 },
#else
    { 0, output_191, 0 },
#endif
    0,
    &operand_data[395],
    4,
    2,
    2,
    2
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:4024 */
  {
    "*rotlsi3_internal10",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "{rl%I2nm|rlw%I2nm} %0,%1,%h2,0xffff",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[388],
    3,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:4033 */
  {
    "*rotlsi3_internal11",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_193 },
#else
    { 0, output_193, 0 },
#endif
    0,
    &operand_data[391],
    4,
    0,
    2,
    2
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:4066 */
  {
    "*rotlsi3_internal12",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_194 },
#else
    { 0, output_194, 0 },
#endif
    0,
    &operand_data[395],
    4,
    2,
    2,
    2
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:4126 */
  {
    "ashlsi3_no_power",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "{sl|slw}%I2 %0,%1,%h2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_ashlsi3_no_power,
    &operand_data[388],
    3,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:4165 */
  {
    "*rs6000.md:4165",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_196 },
#else
    { 0, output_196, 0 },
#endif
    0,
    &operand_data[391],
    4,
    0,
    2,
    2
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:4226 */
  {
    "*rs6000.md:4226",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_197 },
#else
    { 0, output_197, 0 },
#endif
    0,
    &operand_data[395],
    4,
    2,
    2,
    2
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:4255 */
  {
    "rlwinm",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "{rlinm|rlwinm} %0,%1,%h2,%m3,%M3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_rlwinm,
    &operand_data[413],
    4,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:4263 */
  {
    "*rs6000.md:4263",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_199 },
#else
    { 0, output_199, 0 },
#endif
    0,
    &operand_data[417],
    5,
    0,
    2,
    2
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:4295 */
  {
    "*rs6000.md:4295",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_200 },
#else
    { 0, output_200, 0 },
#endif
    0,
    &operand_data[422],
    5,
    3,
    2,
    2
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:4355 */
  {
    "lshrsi3_no_power",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_201 },
#else
    { 0, output_201, 0 },
#endif
    (insn_gen_fn) gen_lshrsi3_no_power,
    &operand_data[427],
    3,
    0,
    2,
    2
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:4398 */
  {
    "*rs6000.md:4398",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_202 },
#else
    { 0, output_202, 0 },
#endif
    0,
    &operand_data[430],
    4,
    0,
    4,
    2
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:4463 */
  {
    "*rs6000.md:4463",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_203 },
#else
    { 0, output_203, 0 },
#endif
    0,
    &operand_data[434],
    4,
    2,
    4,
    2
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:4494 */
  {
    "*rs6000.md:4494",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "{rlinm|rlwinm} %0,%1,%s2,%m3,%M3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[413],
    4,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:4502 */
  {
    "*rs6000.md:4502",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_205 },
#else
    { 0, output_205, 0 },
#endif
    0,
    &operand_data[417],
    5,
    0,
    2,
    2
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:4534 */
  {
    "*rs6000.md:4534",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_206 },
#else
    { 0, output_206, 0 },
#endif
    0,
    &operand_data[422],
    5,
    3,
    2,
    2
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:4567 */
  {
    "*rs6000.md:4567",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "{rlinm|rlwinm} %0,%1,%s2,0xff",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[365],
    3,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:4576 */
  {
    "*rs6000.md:4576",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_208 },
#else
    { 0, output_208, 0 },
#endif
    0,
    &operand_data[438],
    4,
    0,
    2,
    2
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:4611 */
  {
    "*rs6000.md:4611",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_209 },
#else
    { 0, output_209, 0 },
#endif
    0,
    &operand_data[442],
    4,
    2,
    2,
    2
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:4646 */
  {
    "*rs6000.md:4646",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "{rlinm|rlwinm} %0,%1,%s2,0xffff",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[365],
    3,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:4655 */
  {
    "*rs6000.md:4655",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_211 },
#else
    { 0, output_211, 0 },
#endif
    0,
    &operand_data[438],
    4,
    0,
    2,
    2
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:4690 */
  {
    "*rs6000.md:4690",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_212 },
#else
    { 0, output_212, 0 },
#endif
    0,
    &operand_data[442],
    4,
    2,
    2,
    2
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:4777 */
  {
    "ashrsi3_no_power",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "{sra|sraw}%I2 %0,%1,%h2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_ashrsi3_no_power,
    &operand_data[388],
    3,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:4816 */
  {
    "*rs6000.md:4816",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_214 },
#else
    { 0, output_214, 0 },
#endif
    0,
    &operand_data[391],
    4,
    0,
    2,
    2
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:4877 */
  {
    "*rs6000.md:4877",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_215 },
#else
    { 0, output_215, 0 },
#endif
    0,
    &operand_data[395],
    4,
    2,
    2,
    2
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:4928 */
  {
    "*extendsfdf2_fpr",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_216 },
#else
    { 0, output_216, 0 },
#endif
    0,
    &operand_data[446],
    2,
    0,
    3,
    2
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:4950 */
  {
    "*truncdfsf2_fpr",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "frsp %0,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[448],
    2,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:4957 */
  {
    "aux_truncdfsf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "frsp %0,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_aux_truncdfsf2,
    &operand_data[450],
    2,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:4970 */
  {
    "*negsf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fneg %0,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[450],
    2,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:4983 */
  {
    "*abssf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fabs %0,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[450],
    2,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:4990 */
  {
    "*rs6000.md:4990",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fnabs %0,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[450],
    2,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:5004 */
  {
    "*rs6000.md:5004",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fadds %0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[452],
    3,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:5012 */
  {
    "*rs6000.md:5012",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "{fa|fadd} %0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[452],
    3,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:5027 */
  {
    "*rs6000.md:5027",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fsubs %0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[455],
    3,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:5035 */
  {
    "*rs6000.md:5035",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "{fs|fsub} %0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[455],
    3,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:5050 */
  {
    "*rs6000.md:5050",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fmuls %0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[452],
    3,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:5058 */
  {
    "*rs6000.md:5058",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "{fm|fmul} %0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[452],
    3,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:5066 */
  {
    "fres",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fres %0,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fres,
    &operand_data[450],
    2,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:5087 */
  {
    "*rs6000.md:5087",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fdivs %0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[455],
    3,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:5095 */
  {
    "*rs6000.md:5095",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "{fd|fdiv} %0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[455],
    3,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:5103 */
  {
    "*rs6000.md:5103",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fmadds %0,%1,%2,%3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[458],
    4,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:5112 */
  {
    "*rs6000.md:5112",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "{fma|fmadd} %0,%1,%2,%3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[458],
    4,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:5121 */
  {
    "*rs6000.md:5121",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fmsubs %0,%1,%2,%3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[458],
    4,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:5130 */
  {
    "*rs6000.md:5130",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "{fms|fmsub} %0,%1,%2,%3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[458],
    4,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:5139 */
  {
    "*rs6000.md:5139",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fnmadds %0,%1,%2,%3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[458],
    4,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:5149 */
  {
    "*rs6000.md:5149",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fnmadds %0,%1,%2,%3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[462],
    4,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:5159 */
  {
    "*rs6000.md:5159",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "{fnma|fnmadd} %0,%1,%2,%3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[458],
    4,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:5168 */
  {
    "*rs6000.md:5168",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "{fnma|fnmadd} %0,%1,%2,%3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[462],
    4,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:5178 */
  {
    "*rs6000.md:5178",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fnmsubs %0,%1,%2,%3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[458],
    4,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:5188 */
  {
    "*rs6000.md:5188",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fnmsubs %0,%1,%2,%3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[458],
    4,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:5198 */
  {
    "*rs6000.md:5198",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "{fnms|fnmsub} %0,%1,%2,%3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[458],
    4,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:5207 */
  {
    "*rs6000.md:5207",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "{fnms|fnmsub} %0,%1,%2,%3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[458],
    4,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:5223 */
  {
    "*rs6000.md:5223",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fsqrts %0,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[450],
    2,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:5230 */
  {
    "*rs6000.md:5230",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fsqrt %0,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[450],
    2,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:5370 */
  {
    "*fselsfsf4",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fsel %0,%1,%2,%3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[462],
    5,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:5380 */
  {
    "*fseldfsf4",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fsel %0,%1,%2,%3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[467],
    5,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:5396 */
  {
    "*negdf2_fpr",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fneg %0,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[472],
    2,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:5409 */
  {
    "*absdf2_fpr",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fabs %0,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[472],
    2,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:5416 */
  {
    "*nabsdf2_fpr",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fnabs %0,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[472],
    2,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:5430 */
  {
    "*adddf3_fpr",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "{fa|fadd} %0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[474],
    3,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:5445 */
  {
    "*subdf3_fpr",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "{fs|fsub} %0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[477],
    3,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:5460 */
  {
    "*muldf3_fpr",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "{fm|fmul} %0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[474],
    3,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:5489 */
  {
    "*divdf3_fpr",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "{fd|fdiv} %0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[477],
    3,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:5497 */
  {
    "*rs6000.md:5497",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "{fma|fmadd} %0,%1,%2,%3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[480],
    4,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:5506 */
  {
    "*rs6000.md:5506",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "{fms|fmsub} %0,%1,%2,%3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[480],
    4,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:5515 */
  {
    "*rs6000.md:5515",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "{fnma|fnmadd} %0,%1,%2,%3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[480],
    4,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:5525 */
  {
    "*rs6000.md:5525",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "{fnma|fnmadd} %0,%1,%2,%3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[484],
    4,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:5535 */
  {
    "*rs6000.md:5535",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "{fnms|fnmsub} %0,%1,%2,%3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[480],
    4,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:5545 */
  {
    "*rs6000.md:5545",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "{fnms|fnmsub} %0,%1,%2,%3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[480],
    4,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:5555 */
  {
    "sqrtdf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fsqrt %0,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sqrtdf2,
    &operand_data[472],
    2,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:5610 */
  {
    "*fseldfdf4",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fsel %0,%1,%2,%3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[484],
    5,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:5620 */
  {
    "*fselsfdf4",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fsel %0,%1,%2,%3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[489],
    5,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:5691 */
  {
    "*floatsidf2_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[494],
    7,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:5772 */
  {
    "*floatunssidf2_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[494],
    6,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:5837 */
  {
    "*fix_truncdfsi2_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[501],
    4,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:5859 */
  {
    "fix_truncdfsi2_internal_gfxopt",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fix_truncdfsi2_internal_gfxopt,
    &operand_data[505],
    3,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:5880 */
  {
    "fctiwz",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "{fcirz|fctiwz} %0,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fctiwz,
    &operand_data[507],
    2,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:5945 */
  {
    "stfiwx",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "stfiwx %1,%y0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_stfiwx,
    &operand_data[509],
    2,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:5959 */
  {
    "floatdidf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fcfid %0,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_floatdidf2,
    &operand_data[511],
    2,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:5966 */
  {
    "floatsidf_ppc64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_floatsidf_ppc64,
    &operand_data[513],
    5,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:5981 */
  {
    "floatunssidf_ppc64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_floatunssidf_ppc64,
    &operand_data[513],
    5,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:5996 */
  {
    "fix_truncdfdi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fctidz %0,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fix_truncdfdi2,
    &operand_data[518],
    2,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:6024 */
  {
    "floatdisf2_internal1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_floatdisf2_internal1,
    &operand_data[520],
    3,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:6075 */
  {
    "*adddi3_noppc64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_274 },
#else
    { 0, 0, output_274 },
#endif
    0,
    &operand_data[523],
    3,
    0,
    4,
    3
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:6094 */
  {
    "*subdi3_noppc64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_275 },
#else
    { 0, 0, output_275 },
#endif
    0,
    &operand_data[526],
    3,
    0,
    5,
    3
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:6113 */
  {
    "*negdi2_noppc64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_276 },
#else
    { 0, 0, output_276 },
#endif
    0,
    &operand_data[529],
    2,
    0,
    2,
    3
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:6166 */
  {
    "*mulsidi3_no_mq",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_277 },
#else
    { 0, 0, output_277 },
#endif
    0,
    &operand_data[531],
    3,
    0,
    1,
    3
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:6229 */
  {
    "*umulsidi3_no_mq",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_278 },
#else
    { 0, 0, output_278 },
#endif
    0,
    &operand_data[531],
    3,
    0,
    1,
    3
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:6302 */
  {
    "*smulsi3_highpart_no_mq",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mulhw %0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[183],
    3,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:6345 */
  {
    "*umulsi3_highpart_no_mq",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mulhwu %0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[183],
    3,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:6399 */
  {
    "ashrdi3_no_power",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_281 },
#else
    { 0, output_281, 0 },
#endif
    (insn_gen_fn) gen_ashrdi3_no_power,
    &operand_data[534],
    3,
    0,
    2,
    2
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:6410 */
  {
    "*ashrdisi3_noppc64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_282 },
#else
    { 0, 0, output_282 },
#endif
    0,
    &operand_data[537],
    2,
    0,
    1,
    3
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:6427 */
  {
    "absdi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_absdi2,
    &operand_data[539],
    3,
    0,
    2,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:6439 */
  {
    "*nabsdi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[539],
    3,
    0,
    2,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:6451 */
  {
    "muldi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_285 },
#else
    { 0, output_285, 0 },
#endif
    (insn_gen_fn) gen_muldi3,
    &operand_data[542],
    3,
    0,
    2,
    2
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:6466 */
  {
    "*muldi3_internal1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_286 },
#else
    { 0, output_286, 0 },
#endif
    0,
    &operand_data[545],
    4,
    0,
    2,
    2
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:6493 */
  {
    "*muldi3_internal2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_287 },
#else
    { 0, output_287, 0 },
#endif
    0,
    &operand_data[549],
    4,
    2,
    2,
    2
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:6522 */
  {
    "smuldi3_highpart",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mulhd %0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_smuldi3_highpart,
    &operand_data[553],
    3,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:6534 */
  {
    "umuldi3_highpart",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mulhdu %0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_umuldi3_highpart,
    &operand_data[553],
    3,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:6546 */
  {
    "rotldi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "rld%I2cl %0,%1,%H2,0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_rotldi3,
    &operand_data[556],
    3,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:6553 */
  {
    "*rotldi3_internal2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_291 },
#else
    { 0, output_291, 0 },
#endif
    0,
    &operand_data[559],
    4,
    0,
    2,
    2
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:6580 */
  {
    "*rotldi3_internal3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_292 },
#else
    { 0, output_292, 0 },
#endif
    0,
    &operand_data[563],
    4,
    2,
    2,
    2
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:6609 */
  {
    "*rotldi3_internal4",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "rld%I2c%B3 %0,%1,%H2,%S3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[567],
    4,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:6617 */
  {
    "*rotldi3_internal5",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_294 },
#else
    { 0, output_294, 0 },
#endif
    0,
    &operand_data[571],
    5,
    0,
    2,
    2
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:6650 */
  {
    "*rotldi3_internal6",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_295 },
#else
    { 0, output_295, 0 },
#endif
    0,
    &operand_data[576],
    5,
    3,
    2,
    2
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:6683 */
  {
    "*rotldi3_internal7",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "rld%I2cl %0,%1,%H2,56",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[556],
    3,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:6692 */
  {
    "*rotldi3_internal8",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_297 },
#else
    { 0, output_297, 0 },
#endif
    0,
    &operand_data[559],
    4,
    0,
    2,
    2
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:6725 */
  {
    "*rotldi3_internal9",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_298 },
#else
    { 0, output_298, 0 },
#endif
    0,
    &operand_data[563],
    4,
    2,
    2,
    2
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:6758 */
  {
    "*rotldi3_internal10",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "rld%I2cl %0,%1,%H2,48",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[556],
    3,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:6767 */
  {
    "*rotldi3_internal11",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_300 },
#else
    { 0, output_300, 0 },
#endif
    0,
    &operand_data[559],
    4,
    0,
    2,
    2
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:6800 */
  {
    "*rotldi3_internal12",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_301 },
#else
    { 0, output_301, 0 },
#endif
    0,
    &operand_data[563],
    4,
    2,
    2,
    2
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:6833 */
  {
    "*rotldi3_internal13",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "rld%I2cl %0,%1,%H2,32",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[556],
    3,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:6842 */
  {
    "*rotldi3_internal14",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_303 },
#else
    { 0, output_303, 0 },
#endif
    0,
    &operand_data[559],
    4,
    0,
    2,
    2
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:6875 */
  {
    "*rotldi3_internal15",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_304 },
#else
    { 0, output_304, 0 },
#endif
    0,
    &operand_data[563],
    4,
    2,
    2,
    2
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:6926 */
  {
    "*ashldi3_internal1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sld%I2 %0,%1,%H2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[581],
    3,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:6933 */
  {
    "*ashldi3_internal2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_306 },
#else
    { 0, output_306, 0 },
#endif
    0,
    &operand_data[584],
    4,
    0,
    2,
    2
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:6960 */
  {
    "*ashldi3_internal3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_307 },
#else
    { 0, output_307, 0 },
#endif
    0,
    &operand_data[588],
    4,
    2,
    2,
    2
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:6989 */
  {
    "*ashldi3_internal4",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "rldic %0,%1,%H2,%W3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[592],
    4,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:6997 */
  {
    "ashldi3_internal5",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_309 },
#else
    { 0, output_309, 0 },
#endif
    (insn_gen_fn) gen_ashldi3_internal5,
    &operand_data[596],
    5,
    0,
    2,
    2
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:7030 */
  {
    "*ashldi3_internal6",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_310 },
#else
    { 0, output_310, 0 },
#endif
    0,
    &operand_data[601],
    5,
    3,
    2,
    2
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:7065 */
  {
    "*ashldi3_internal7",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "rldicr %0,%1,%H2,%S3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[606],
    4,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:7073 */
  {
    "ashldi3_internal8",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_312 },
#else
    { 0, output_312, 0 },
#endif
    (insn_gen_fn) gen_ashldi3_internal8,
    &operand_data[610],
    5,
    0,
    2,
    2
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:7106 */
  {
    "*ashldi3_internal9",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_313 },
#else
    { 0, output_313, 0 },
#endif
    0,
    &operand_data[615],
    5,
    3,
    2,
    2
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:7159 */
  {
    "*lshrdi3_internal1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "srd%I2 %0,%1,%H2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[581],
    3,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:7166 */
  {
    "*lshrdi3_internal2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_315 },
#else
    { 0, output_315, 0 },
#endif
    0,
    &operand_data[584],
    4,
    0,
    2,
    2
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:7193 */
  {
    "*lshrdi3_internal3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_316 },
#else
    { 0, output_316, 0 },
#endif
    0,
    &operand_data[588],
    4,
    2,
    2,
    2
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:7246 */
  {
    "*ashrdi3_internal1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "srad%I2 %0,%1,%H2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[581],
    3,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:7253 */
  {
    "*ashrdi3_internal2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_318 },
#else
    { 0, output_318, 0 },
#endif
    0,
    &operand_data[584],
    4,
    0,
    2,
    2
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:7280 */
  {
    "*ashrdi3_internal3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_319 },
#else
    { 0, output_319, 0 },
#endif
    0,
    &operand_data[588],
    4,
    2,
    2,
    2
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:7309 */
  {
    "anddi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_320 },
#else
    { 0, output_320, 0 },
#endif
    (insn_gen_fn) gen_anddi3,
    &operand_data[620],
    4,
    0,
    6,
    2
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:7346 */
  {
    "*anddi3_internal2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_321 },
#else
    { 0, output_321, 0 },
#endif
    0,
    &operand_data[624],
    5,
    0,
    12,
    2
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:7396 */
  {
    "*anddi3_internal3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_322 },
#else
    { 0, output_322, 0 },
#endif
    0,
    &operand_data[629],
    5,
    2,
    12,
    2
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:7534 */
  {
    "*booldi3_internal1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_323 },
#else
    { 0, output_323, 0 },
#endif
    0,
    &operand_data[634],
    4,
    0,
    3,
    2
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:7545 */
  {
    "*booldi3_internal2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_324 },
#else
    { 0, output_324, 0 },
#endif
    0,
    &operand_data[638],
    5,
    0,
    2,
    2
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:7573 */
  {
    "*booldi3_internal3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_325 },
#else
    { 0, output_325, 0 },
#endif
    0,
    &operand_data[643],
    5,
    1,
    2,
    2
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:7637 */
  {
    "*boolcdi3_internal1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%q3 %0,%2,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[648],
    4,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:7645 */
  {
    "*boolcdi3_internal2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_327 },
#else
    { 0, output_327, 0 },
#endif
    0,
    &operand_data[652],
    5,
    0,
    2,
    2
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:7673 */
  {
    "*boolcdi3_internal3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_328 },
#else
    { 0, output_328, 0 },
#endif
    0,
    &operand_data[643],
    5,
    1,
    2,
    2
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:7703 */
  {
    "*boolccdi3_internal1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%q3 %0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[648],
    4,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:7711 */
  {
    "*boolccdi3_internal2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_330 },
#else
    { 0, output_330, 0 },
#endif
    0,
    &operand_data[652],
    5,
    0,
    2,
    2
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:7739 */
  {
    "*boolccdi3_internal3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_331 },
#else
    { 0, output_331, 0 },
#endif
    0,
    &operand_data[643],
    5,
    1,
    2,
    2
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:7827 */
  {
    "movsi_low",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "{l|lwz} %0,lo16(%2)(%1)",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_movsi_low,
    &operand_data[657],
    3,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:7836 */
  {
    "*movsi_internal1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_333 },
#else
    { 0, output_333, 0 },
#endif
    0,
    &operand_data[660],
    2,
    0,
    13,
    2
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:7880 */
  {
    "*movsi_internal2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_334 },
#else
    { 0, output_334, 0 },
#endif
    0,
    &operand_data[662],
    3,
    1,
    3,
    2
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:7880 */
  {
    "*movdi_internal2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_335 },
#else
    { 0, output_335, 0 },
#endif
    0,
    &operand_data[665],
    3,
    1,
    3,
    2
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:7905 */
  {
    "*movhi_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_336 },
#else
    { 0, output_336, 0 },
#endif
    0,
    &operand_data[668],
    2,
    0,
    8,
    2
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:7927 */
  {
    "*movqi_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_337 },
#else
    { 0, output_337, 0 },
#endif
    0,
    &operand_data[670],
    2,
    0,
    8,
    2
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:7952 */
  {
    "*movcc_internal1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_338 },
#else
    { 0, output_338, 0 },
#endif
    0,
    &operand_data[672],
    2,
    0,
    13,
    2
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:8028 */
  {
    "*movsf_hardfloat",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_339 },
#else
    { 0, output_339, 0 },
#endif
    0,
    &operand_data[674],
    2,
    0,
    12,
    2
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:8050 */
  {
    "*movsf_softfloat",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_340 },
#else
    { 0, output_340, 0 },
#endif
    0,
    &operand_data[676],
    2,
    0,
    12,
    2
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:8168 */
  {
    "*movdf_hardfloat32",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_341 },
#else
    { 0, 0, output_341 },
#endif
    0,
    &operand_data[678],
    2,
    0,
    9,
    3
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:8261 */
  {
    "*movdf_softfloat32",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_342 },
#else
    { 0, 0, output_342 },
#endif
    0,
    &operand_data[680],
    2,
    0,
    6,
    3
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:8304 */
  {
    "*movdf_hardfloat64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_343 },
#else
    { 0, output_343, 0 },
#endif
    0,
    &operand_data[682],
    2,
    0,
    12,
    2
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:8326 */
  {
    "*movdf_softfloat64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_344 },
#else
    { 0, output_344, 0 },
#endif
    0,
    &operand_data[684],
    2,
    0,
    9,
    2
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:8354 */
  {
    "*movtf_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[686],
    2,
    0,
    6,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:8367 */
  {
    "*movtf_softfloat",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[688],
    2,
    0,
    3,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:8393 */
  {
    "*extenddftf2_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[690],
    3,
    0,
    4,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:8431 */
  {
    "trunctfdf2_internal1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_348 },
#else
    { 0, output_348, 0 },
#endif
    (insn_gen_fn) gen_trunctfdf2_internal1,
    &operand_data[693],
    2,
    0,
    2,
    2
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:8447 */
  {
    "trunctfdf2_internal2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fadd %0,%1,%L1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_trunctfdf2_internal2,
    &operand_data[695],
    2,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:8455 */
  {
    "trunctfsf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_trunctfsf2,
    &operand_data[697],
    3,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:8483 */
  {
    "fix_trunc_helper",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mffs %2\n\tmtfsb1 31\n\tmtfsb0 30\n\tfadd %0,%1,%L1\n\tmtfsf 1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fix_trunc_helper,
    &operand_data[700],
    3,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:8510 */
  {
    "*fix_trunctfsi2_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[703],
    6,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:8535 */
  {
    "negtf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_353 },
#else
    { 0, 0, output_353 },
#endif
    (insn_gen_fn) gen_negtf2,
    &operand_data[709],
    2,
    0,
    1,
    3
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:8590 */
  {
    "*movdi_internal32",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_354 },
#else
    { 0, output_354, 0 },
#endif
    0,
    &operand_data[711],
    2,
    0,
    7,
    2
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:8638 */
  {
    "*movdi_internal64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_355 },
#else
    { 0, output_355, 0 },
#endif
    0,
    &operand_data[713],
    2,
    0,
    13,
    2
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:8766 */
  {
    "*movti_string",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_356 },
#else
    { 0, 0, output_356 },
#endif
    0,
    &operand_data[715],
    2,
    0,
    6,
    3
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:8797 */
  {
    "*movti_ppc64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[717],
    2,
    0,
    3,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:8875 */
  {
    "*ldmsi8",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_358 },
#else
    { 0, 0, output_358 },
#endif
    0,
    &operand_data[719],
    10,
    7,
    1,
    3
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:8899 */
  {
    "*ldmsi7",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_359 },
#else
    { 0, 0, output_359 },
#endif
    0,
    &operand_data[719],
    9,
    6,
    1,
    3
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:8921 */
  {
    "*ldmsi6",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_360 },
#else
    { 0, 0, output_360 },
#endif
    0,
    &operand_data[719],
    8,
    5,
    1,
    3
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:8941 */
  {
    "*ldmsi5",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_361 },
#else
    { 0, 0, output_361 },
#endif
    0,
    &operand_data[719],
    7,
    4,
    1,
    3
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:8959 */
  {
    "*ldmsi4",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_362 },
#else
    { 0, 0, output_362 },
#endif
    0,
    &operand_data[719],
    6,
    3,
    1,
    3
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:8975 */
  {
    "*ldmsi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_363 },
#else
    { 0, 0, output_363 },
#endif
    0,
    &operand_data[719],
    5,
    2,
    1,
    3
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:9033 */
  {
    "*stmsi8",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "{stsi|stswi} %2,%1,%O0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[729],
    11,
    7,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:9056 */
  {
    "*stmsi7",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "{stsi|stswi} %2,%1,%O0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[729],
    10,
    6,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:9077 */
  {
    "*stmsi6",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "{stsi|stswi} %2,%1,%O0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[729],
    9,
    5,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:9096 */
  {
    "*stmsi5",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "{stsi|stswi} %2,%1,%O0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[729],
    8,
    4,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:9113 */
  {
    "*stmsi4",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "{stsi|stswi} %2,%1,%O0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[729],
    7,
    3,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:9128 */
  {
    "*stmsi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "{stsi|stswi} %2,%1,%O0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[729],
    6,
    2,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:9331 */
  {
    "*rs6000.md:9331",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "{lsi|lswi} %4,%1,%2\n\t{stsi|stswi} %4,%0,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[740],
    6,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:9331 */
  {
    "*rs6000.md:9331",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "{lsi|lswi} %4,%1,%2\n\t{stsi|stswi} %4,%0,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[746],
    6,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:9394 */
  {
    "*rs6000.md:9394",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "{lsi|lswi} %4,%1,%2\n\t{stsi|stswi} %4,%0,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[740],
    6,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:9394 */
  {
    "*rs6000.md:9394",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "{lsi|lswi} %4,%1,%2\n\t{stsi|stswi} %4,%0,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[746],
    6,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:9450 */
  {
    "*rs6000.md:9450",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "{lsi|lswi} %4,%1,%2\n\t{stsi|stswi} %4,%0,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[740],
    6,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:9450 */
  {
    "*rs6000.md:9450",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "{lsi|lswi} %4,%1,%2\n\t{stsi|stswi} %4,%0,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[746],
    6,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:9493 */
  {
    "*rs6000.md:9493",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "{lsi|lswi} %4,%1,%2\n\t{stsi|stswi} %4,%0,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[752],
    6,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:9530 */
  {
    "*rs6000.md:9530",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "{lsi|lswi} %4,%1,%2\n\t{stsi|stswi} %4,%0,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[758],
    6,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:9530 */
  {
    "*rs6000.md:9530",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "{lsi|lswi} %4,%1,%2\n\t{stsi|stswi} %4,%0,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[764],
    6,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:9552 */
  {
    "*movdi_update1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_379 },
#else
    { 0, output_379, 0 },
#endif
    0,
    &operand_data[770],
    4,
    2,
    2,
    2
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:9564 */
  {
    "movdi_si_update",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_380 },
#else
    { 0, output_380, 0 },
#endif
    (insn_gen_fn) gen_movdi_si_update,
    &operand_data[774],
    4,
    2,
    2,
    2
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:9564 */
  {
    "movdi_di_update",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_381 },
#else
    { 0, output_381, 0 },
#endif
    (insn_gen_fn) gen_movdi_di_update,
    &operand_data[778],
    4,
    2,
    2,
    2
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:9576 */
  {
    "*movsi_update1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_382 },
#else
    { 0, output_382, 0 },
#endif
    0,
    &operand_data[782],
    4,
    2,
    2,
    2
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:9588 */
  {
    "*movsi_update2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "lwaux %3,%0,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[786],
    4,
    2,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:9599 */
  {
    "movsi_update",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_384 },
#else
    { 0, output_384, 0 },
#endif
    (insn_gen_fn) gen_movsi_update,
    &operand_data[790],
    4,
    2,
    2,
    2
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:9611 */
  {
    "*movhi_update1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_385 },
#else
    { 0, output_385, 0 },
#endif
    0,
    &operand_data[794],
    4,
    2,
    2,
    2
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:9623 */
  {
    "*movhi_update2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_386 },
#else
    { 0, output_386, 0 },
#endif
    0,
    &operand_data[782],
    4,
    2,
    2,
    2
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:9636 */
  {
    "*movhi_update3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_387 },
#else
    { 0, output_387, 0 },
#endif
    0,
    &operand_data[782],
    4,
    2,
    2,
    2
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:9649 */
  {
    "*movhi_update4",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_388 },
#else
    { 0, output_388, 0 },
#endif
    0,
    &operand_data[798],
    4,
    2,
    2,
    2
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:9661 */
  {
    "*movqi_update1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_389 },
#else
    { 0, output_389, 0 },
#endif
    0,
    &operand_data[802],
    4,
    2,
    2,
    2
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:9673 */
  {
    "*movqi_update2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_390 },
#else
    { 0, output_390, 0 },
#endif
    0,
    &operand_data[782],
    4,
    2,
    2,
    2
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:9686 */
  {
    "*movqi_update3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_391 },
#else
    { 0, output_391, 0 },
#endif
    0,
    &operand_data[806],
    4,
    2,
    2,
    2
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:9698 */
  {
    "*movsf_update1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_392 },
#else
    { 0, output_392, 0 },
#endif
    0,
    &operand_data[810],
    4,
    2,
    2,
    2
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:9710 */
  {
    "*movsf_update2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_393 },
#else
    { 0, output_393, 0 },
#endif
    0,
    &operand_data[814],
    4,
    2,
    2,
    2
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:9722 */
  {
    "*movsf_update3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_394 },
#else
    { 0, output_394, 0 },
#endif
    0,
    &operand_data[818],
    4,
    2,
    2,
    2
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:9734 */
  {
    "*movsf_update4",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_395 },
#else
    { 0, output_395, 0 },
#endif
    0,
    &operand_data[822],
    4,
    2,
    2,
    2
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:9746 */
  {
    "*movdf_update1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_396 },
#else
    { 0, output_396, 0 },
#endif
    0,
    &operand_data[826],
    4,
    2,
    2,
    2
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:9758 */
  {
    "*movdf_update2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_397 },
#else
    { 0, output_397, 0 },
#endif
    0,
    &operand_data[830],
    4,
    2,
    2,
    2
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:9772 */
  {
    "*lfq_power2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "lfq%U1%X1 %0,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[834],
    2,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:9793 */
  {
    "*stfq_power2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "stfq%U0%X0 %1,%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[835],
    2,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:10545 */
  {
    "*call_local32",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_400 },
#else
    { 0, 0, output_400 },
#endif
    0,
    &operand_data[837],
    4,
    0,
    2,
    3
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:10571 */
  {
    "*call_local64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_401 },
#else
    { 0, 0, output_401 },
#endif
    0,
    &operand_data[841],
    4,
    0,
    2,
    3
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:10590 */
  {
    "*call_value_local32",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_402 },
#else
    { 0, 0, output_402 },
#endif
    0,
    &operand_data[845],
    5,
    0,
    2,
    3
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:10611 */
  {
    "*call_value_local64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_403 },
#else
    { 0, 0, output_403 },
#endif
    0,
    &operand_data[850],
    5,
    0,
    2,
    3
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:10748 */
  {
    "*call_indirect_nonlocal_sysvsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_404 },
#else
    { 0, 0, output_404 },
#endif
    0,
    &operand_data[855],
    4,
    0,
    4,
    3
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:10748 */
  {
    "*call_indirect_nonlocal_sysvdi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_405 },
#else
    { 0, 0, output_405 },
#endif
    0,
    &operand_data[59],
    4,
    0,
    4,
    3
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:10767 */
  {
    "*call_nonlocal_sysvsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_406 },
#else
    { 0, 0, output_406 },
#endif
    0,
    &operand_data[859],
    4,
    0,
    2,
    3
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:10767 */
  {
    "*call_nonlocal_sysvdi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_407 },
#else
    { 0, 0, output_407 },
#endif
    0,
    &operand_data[63],
    4,
    0,
    2,
    3
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:10817 */
  {
    "*call_value_indirect_nonlocal_sysvsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_408 },
#else
    { 0, 0, output_408 },
#endif
    0,
    &operand_data[863],
    5,
    0,
    4,
    3
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:10817 */
  {
    "*call_value_indirect_nonlocal_sysvdi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_409 },
#else
    { 0, 0, output_409 },
#endif
    0,
    &operand_data[67],
    5,
    0,
    4,
    3
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:10837 */
  {
    "*call_value_nonlocal_sysvsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_410 },
#else
    { 0, 0, output_410 },
#endif
    0,
    &operand_data[868],
    5,
    0,
    2,
    3
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:10837 */
  {
    "*call_value_nonlocal_sysvdi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_411 },
#else
    { 0, 0, output_411 },
#endif
    0,
    &operand_data[72],
    5,
    0,
    2,
    3
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:10919 */
  {
    "*sibcall_symbolic",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_412 },
#else
    { 0, 0, output_412 },
#endif
    0,
    &operand_data[873],
    4,
    0,
    2,
    3
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:10955 */
  {
    "*sibcall_value_symbolic",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_413 },
#else
    { 0, 0, output_413 },
#endif
    0,
    &operand_data[877],
    5,
    0,
    2,
    3
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:10992 */
  {
    "longjump",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "jmp %z1,%l0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_longjump,
    &operand_data[87],
    2,
    0,
    0,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:11031 */
  {
    "*sibcall_local32",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_415 },
#else
    { 0, 0, output_415 },
#endif
    0,
    &operand_data[882],
    4,
    0,
    2,
    3
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:11051 */
  {
    "*sibcall_local64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_416 },
#else
    { 0, 0, output_416 },
#endif
    0,
    &operand_data[886],
    4,
    0,
    2,
    3
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:11071 */
  {
    "*sibcall_value_local32",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_417 },
#else
    { 0, 0, output_417 },
#endif
    0,
    &operand_data[890],
    5,
    0,
    2,
    3
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:11093 */
  {
    "*sibcall_value_local64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_418 },
#else
    { 0, 0, output_418 },
#endif
    0,
    &operand_data[895],
    5,
    0,
    2,
    3
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:11168 */
  {
    "*sibcall_nonlocal_sysvsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_419 },
#else
    { 0, 0, output_419 },
#endif
    0,
    &operand_data[900],
    4,
    0,
    2,
    3
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:11168 */
  {
    "*sibcall_nonlocal_sysvdi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_420 },
#else
    { 0, 0, output_420 },
#endif
    0,
    &operand_data[77],
    4,
    0,
    2,
    3
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:11221 */
  {
    "*sibcall_value_nonlocal_sysvsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_421 },
#else
    { 0, 0, output_421 },
#endif
    0,
    &operand_data[904],
    5,
    0,
    2,
    3
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:11221 */
  {
    "*sibcall_value_nonlocal_sysvdi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_422 },
#else
    { 0, 0, output_422 },
#endif
    0,
    &operand_data[81],
    5,
    0,
    2,
    3
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:11264 */
  {
    "blockage",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_blockage,
    &operand_data[0],
    0,
    0,
    0,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:11547 */
  {
    "stack_protect_setsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "{l%U1%X1|lwz%U1%X1} %2,%1\n\t{st%U0%X0|stw%U0%X0} %2,%0\n\t{lil|li} %2,0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_stack_protect_setsi,
    &operand_data[909],
    3,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:11556 */
  {
    "stack_protect_setdi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "ld%U1%X1 %2,%1\n\tstd%U0%X0 %2,%0\n\t{lil|li} %2,0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_stack_protect_setdi,
    &operand_data[912],
    3,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:11584 */
  {
    "stack_protect_testsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_426 },
#else
    { 0, output_426, 0 },
#endif
    (insn_gen_fn) gen_stack_protect_testsi,
    &operand_data[915],
    5,
    0,
    2,
    2
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:11597 */
  {
    "stack_protect_testdi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_427 },
#else
    { 0, output_427, 0 },
#endif
    (insn_gen_fn) gen_stack_protect_testdi,
    &operand_data[920],
    5,
    0,
    2,
    2
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:11612 */
  {
    "*cmpsi_internal1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "{cmp%I2|cmpw%I2} %0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[925],
    3,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:11612 */
  {
    "*cmpdi_internal1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "{cmp%I2|cmpd%I2} %0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[928],
    3,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:11663 */
  {
    "*cmpsi_internal2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "{cmpl%I2|cmplw%I2} %0,%1,%b2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[931],
    3,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:11671 */
  {
    "*cmpdi_internal2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cmpld%I2 %0,%1,%b2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[934],
    3,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:11684 */
  {
    "*rs6000.md:11684",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[937],
    5,
    1,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:11694 */
  {
    "*rs6000.md:11694",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[942],
    5,
    1,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:11724 */
  {
    "*cmpsf_internal1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fcmpu %0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[947],
    3,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:11732 */
  {
    "*cmpdf_internal1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fcmpu %0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[950],
    3,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:11741 */
  {
    "*cmptf_internal1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fcmpu %0,%1,%2\n\tbne %0,$+8\n\tfcmpu %0,%L1,%L2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[953],
    3,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:11751 */
  {
    "*cmptf_internal2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[953],
    11,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:11817 */
  {
    "*rs6000.md:11817",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mfcr %0%Q2\n\t{rlinm|rlwinm} %0,%0,%J1,1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[964],
    3,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:11849 */
  {
    "*rs6000.md:11849",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mfcr %0%Q2\n\t{rlinm|rlwinm} %0,%0,%J1,1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[967],
    3,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:11863 */
  {
    "*rs6000.md:11863",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_440 },
#else
    { 0, output_440, 0 },
#endif
    0,
    &operand_data[970],
    4,
    2,
    2,
    2
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:11894 */
  {
    "*rs6000.md:11894",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_441 },
#else
    { 0, 0, output_441 },
#endif
    0,
    &operand_data[974],
    4,
    0,
    1,
    3
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:11924 */
  {
    "*rs6000.md:11924",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_442 },
#else
    { 0, 0, output_442 },
#endif
    0,
    &operand_data[978],
    5,
    3,
    2,
    3
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:12024 */
  {
    "*eqsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[983],
    3,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:12024 */
  {
    "*eqdi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[986],
    3,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:12060 */
  {
    "*eqsi_compare",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[989],
    4,
    2,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:12060 */
  {
    "*eqdi_compare",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[993],
    4,
    2,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:12130 */
  {
    "*plus_eqsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_447 },
#else
    { 0, output_447, 0 },
#endif
    0,
    &operand_data[997],
    4,
    0,
    5,
    2
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:12145 */
  {
    "*compare_plus_eqsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_448 },
#else
    { 0, output_448, 0 },
#endif
    0,
    &operand_data[1001],
    5,
    0,
    10,
    2
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:12188 */
  {
    "*plus_eqsi_compare",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_449 },
#else
    { 0, output_449, 0 },
#endif
    0,
    &operand_data[1006],
    5,
    3,
    10,
    2
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:12231 */
  {
    "*neg_eq0si",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "{ai|addic} %0,%1,-1\n\t{sfe|subfe} %0,%0,%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[51],
    2,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:12231 */
  {
    "*neg_eq0di",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "{ai|addic} %0,%1,-1\n\t{sfe|subfe} %0,%0,%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[55],
    2,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:12240 */
  {
    "*neg_eqsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1011],
    3,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:12240 */
  {
    "*neg_eqdi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1014],
    3,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:12270 */
  {
    "*ne0si",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "{ai|addic} %2,%1,-1\n\t{sfe|subfe} %0,%2,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1017],
    3,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:12280 */
  {
    "*ne0di",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "addic %2,%1,-1\n\tsubfe %0,%2,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1020],
    3,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:12291 */
  {
    "*plus_ne0si",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "{ai|addic} %3,%1,-1\n\t{aze|addze} %0,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1023],
    4,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:12303 */
  {
    "*plus_ne0di",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "addic %3,%1,-1\n\taddze %0,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1027],
    4,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:12315 */
  {
    "*compare_plus_ne0si",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_458 },
#else
    { 0, output_458, 0 },
#endif
    0,
    &operand_data[1031],
    5,
    0,
    2,
    2
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:12353 */
  {
    "*compare_plus_ne0di",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_459 },
#else
    { 0, output_459, 0 },
#endif
    0,
    &operand_data[1036],
    4,
    0,
    2,
    2
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:12388 */
  {
    "*plus_ne0si_compare",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_460 },
#else
    { 0, output_460, 0 },
#endif
    0,
    &operand_data[1040],
    5,
    2,
    2,
    2
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:12429 */
  {
    "*plus_ne0di_compare",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_461 },
#else
    { 0, output_461, 0 },
#endif
    0,
    &operand_data[1045],
    5,
    2,
    2,
    2
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:12607 */
  {
    "*leusi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "{sf%I2|subf%I2c} %0,%1,%2\n\t{cal %0,0(0)|li %0,0}\n\t{ae|adde} %0,%0,%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1050],
    3,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:12607 */
  {
    "*leudi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "{sf%I2|subf%I2c} %0,%1,%2\n\t{cal %0,0(0)|li %0,0}\n\t{ae|adde} %0,%0,%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1053],
    3,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:12616 */
  {
    "*leusi_compare",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_464 },
#else
    { 0, output_464, 0 },
#endif
    0,
    &operand_data[1056],
    4,
    2,
    2,
    2
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:12616 */
  {
    "*leudi_compare",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_465 },
#else
    { 0, output_465, 0 },
#endif
    0,
    &operand_data[1060],
    4,
    2,
    2,
    2
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:12647 */
  {
    "*plus_leusi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "{sf%I2|subf%I2c} %0,%1,%2\n\t{aze|addze} %0,%3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1064],
    4,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:12647 */
  {
    "*plus_leudi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "{sf%I2|subf%I2c} %0,%1,%2\n\t{aze|addze} %0,%3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1068],
    4,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:12657 */
  {
    "*rs6000.md:12657",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_468 },
#else
    { 0, output_468, 0 },
#endif
    0,
    &operand_data[1072],
    5,
    0,
    2,
    2
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:12689 */
  {
    "*rs6000.md:12689",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_469 },
#else
    { 0, output_469, 0 },
#endif
    0,
    &operand_data[1077],
    5,
    3,
    2,
    2
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:12722 */
  {
    "*neg_leusi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "{sf%I2|subf%I2c} %0,%1,%2\n\t{sfe|subfe} %0,%0,%0\n\tnand %0,%0,%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1050],
    3,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:12722 */
  {
    "*neg_leudi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "{sf%I2|subf%I2c} %0,%1,%2\n\t{sfe|subfe} %0,%0,%0\n\tnand %0,%0,%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1053],
    3,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:12731 */
  {
    "*and_neg_leusi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "{sf%I2|subf%I2c} %0,%1,%2\n\t{sfe|subfe} %0,%0,%0\n\tandc %0,%3,%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1064],
    4,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:12731 */
  {
    "*and_neg_leudi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "{sf%I2|subf%I2c} %0,%1,%2\n\t{sfe|subfe} %0,%0,%0\n\tandc %0,%3,%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1068],
    4,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:12742 */
  {
    "*rs6000.md:12742",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_474 },
#else
    { 0, output_474, 0 },
#endif
    0,
    &operand_data[1072],
    5,
    0,
    2,
    2
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:12776 */
  {
    "*rs6000.md:12776",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_475 },
#else
    { 0, output_475, 0 },
#endif
    0,
    &operand_data[1077],
    5,
    3,
    2,
    2
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:12933 */
  {
    "*ltusi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1082],
    3,
    0,
    2,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:12933 */
  {
    "*ltudi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1085],
    3,
    0,
    2,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:12944 */
  {
    "*ltusi_compare",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1088],
    4,
    2,
    4,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:12944 */
  {
    "*ltudi_compare",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1092],
    4,
    2,
    4,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:12961 */
  {
    "*plus_ltusi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1096],
    4,
    0,
    2,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:12961 */
  {
    "*plus_ltudi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1100],
    4,
    0,
    2,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:12973 */
  {
    "*plus_ltusi_compare",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1104],
    5,
    3,
    4,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:12973 */
  {
    "*plus_ltudi_compare",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1109],
    5,
    3,
    4,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:12992 */
  {
    "*neg_ltusi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_484 },
#else
    { 0, output_484, 0 },
#endif
    0,
    &operand_data[1082],
    3,
    0,
    2,
    2
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:12992 */
  {
    "*neg_ltudi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_485 },
#else
    { 0, output_485, 0 },
#endif
    0,
    &operand_data[1085],
    3,
    0,
    2,
    2
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:13128 */
  {
    "*geusi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_486 },
#else
    { 0, output_486, 0 },
#endif
    0,
    &operand_data[1082],
    3,
    0,
    2,
    2
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:13128 */
  {
    "*geudi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_487 },
#else
    { 0, output_487, 0 },
#endif
    0,
    &operand_data[1085],
    3,
    0,
    2,
    2
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:13139 */
  {
    "*geusi_compare",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_488 },
#else
    { 0, output_488, 0 },
#endif
    0,
    &operand_data[1088],
    4,
    2,
    4,
    2
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:13139 */
  {
    "*geudi_compare",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_489 },
#else
    { 0, output_489, 0 },
#endif
    0,
    &operand_data[1092],
    4,
    2,
    4,
    2
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:13172 */
  {
    "*plus_geusi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_490 },
#else
    { 0, output_490, 0 },
#endif
    0,
    &operand_data[1114],
    4,
    0,
    2,
    2
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:13172 */
  {
    "*plus_geudi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_491 },
#else
    { 0, output_491, 0 },
#endif
    0,
    &operand_data[1118],
    4,
    0,
    2,
    2
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:13184 */
  {
    "*rs6000.md:13184",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_492 },
#else
    { 0, output_492, 0 },
#endif
    0,
    &operand_data[1122],
    5,
    0,
    4,
    2
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:13218 */
  {
    "*rs6000.md:13218",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_493 },
#else
    { 0, output_493, 0 },
#endif
    0,
    &operand_data[1104],
    5,
    3,
    4,
    2
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:13253 */
  {
    "*neg_geusi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_494 },
#else
    { 0, output_494, 0 },
#endif
    0,
    &operand_data[1127],
    3,
    0,
    2,
    2
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:13253 */
  {
    "*neg_geudi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_495 },
#else
    { 0, output_495, 0 },
#endif
    0,
    &operand_data[1130],
    3,
    0,
    2,
    2
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:13264 */
  {
    "*and_neg_geusi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_496 },
#else
    { 0, output_496, 0 },
#endif
    0,
    &operand_data[1114],
    4,
    0,
    2,
    2
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:13264 */
  {
    "*and_neg_geudi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_497 },
#else
    { 0, output_497, 0 },
#endif
    0,
    &operand_data[1118],
    4,
    0,
    2,
    2
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:13277 */
  {
    "*rs6000.md:13277",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_498 },
#else
    { 0, output_498, 0 },
#endif
    0,
    &operand_data[1122],
    5,
    0,
    4,
    2
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:13313 */
  {
    "*rs6000.md:13313",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_499 },
#else
    { 0, output_499, 0 },
#endif
    0,
    &operand_data[1104],
    5,
    3,
    4,
    2
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:13389 */
  {
    "*plus_gt0si",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "{a|addc} %0,%1,%1\n\t{sfe|subfe} %0,%1,%0\n\t{aze|addze} %0,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1133],
    3,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:13389 */
  {
    "*plus_gt0di",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "{a|addc} %0,%1,%1\n\t{sfe|subfe} %0,%1,%0\n\t{aze|addze} %0,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1136],
    3,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:13399 */
  {
    "*rs6000.md:13399",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_502 },
#else
    { 0, output_502, 0 },
#endif
    0,
    &operand_data[1031],
    4,
    0,
    2,
    2
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:13431 */
  {
    "*rs6000.md:13431",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_503 },
#else
    { 0, output_503, 0 },
#endif
    0,
    &operand_data[1036],
    4,
    0,
    2,
    2
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:13463 */
  {
    "*rs6000.md:13463",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_504 },
#else
    { 0, output_504, 0 },
#endif
    0,
    &operand_data[1139],
    4,
    2,
    2,
    2
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:13496 */
  {
    "*rs6000.md:13496",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_505 },
#else
    { 0, output_505, 0 },
#endif
    0,
    &operand_data[1143],
    4,
    2,
    2,
    2
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:13610 */
  {
    "*gtusi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1050],
    3,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:13610 */
  {
    "*gtudi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1053],
    3,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:13621 */
  {
    "*gtusi_compare",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1056],
    4,
    2,
    2,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:13621 */
  {
    "*gtudi_compare",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1060],
    4,
    2,
    2,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:13638 */
  {
    "*plus_gtusi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1147],
    4,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:13638 */
  {
    "*plus_gtudi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1151],
    4,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:13650 */
  {
    "*plus_gtusi_compare",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1155],
    5,
    3,
    4,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:13650 */
  {
    "*plus_gtudi_compare",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1160],
    5,
    3,
    4,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:13669 */
  {
    "*neg_gtusi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "{sf%I2|subf%I2c} %0,%1,%2\n\t{sfe|subfe} %0,%0,%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1050],
    3,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:13669 */
  {
    "*neg_gtudi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "{sf%I2|subf%I2c} %0,%1,%2\n\t{sfe|subfe} %0,%0,%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1053],
    3,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:13683 */
  {
    "*rs6000.md:13683",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_516 },
#else
    { 0, 0, output_516 },
#endif
    0,
    &operand_data[1165],
    3,
    0,
    1,
    3
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:13698 */
  {
    "*rs6000.md:13698",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_517 },
#else
    { 0, 0, output_517 },
#endif
    0,
    &operand_data[1166],
    2,
    0,
    1,
    3
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:13714 */
  {
    "*rs6000.md:13714",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_518 },
#else
    { 0, 0, output_518 },
#endif
    0,
    &operand_data[1165],
    3,
    0,
    1,
    3
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:13729 */
  {
    "*rs6000.md:13729",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_519 },
#else
    { 0, 0, output_519 },
#endif
    0,
    &operand_data[1166],
    2,
    0,
    1,
    3
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:13754 */
  {
    "*cceq_ior_compare",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cr%q1 %E0,%j2,%j4",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1168],
    6,
    0,
    2,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:13774 */
  {
    "*rs6000.md:13774",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cr%q1 %E0,%j2,%j4",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1174],
    6,
    0,
    2,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:13792 */
  {
    "*cceq_rev_compare",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "{crnor %E0,%j1,%j1|crnot %E0,%j1}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1180],
    3,
    0,
    2,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:13807 */
  {
    "*rs6000.md:13807",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1183],
    5,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:13860 */
  {
    "jump",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "b %l0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_jump,
    &operand_data[3],
    1,
    0,
    0,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:13868 */
  {
    "return",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_525 },
#else
    { 0, 0, output_525 },
#endif
    (insn_gen_fn) gen_return,
    &operand_data[0],
    0,
    0,
    0,
    3
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:13884 */
  {
    "*indirect_jumpsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_526 },
#else
    { 0, output_526, 0 },
#endif
    0,
    &operand_data[1188],
    1,
    0,
    2,
    2
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:13884 */
  {
    "*indirect_jumpdi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_527 },
#else
    { 0, output_527, 0 },
#endif
    0,
    &operand_data[1189],
    1,
    0,
    2,
    2
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:13934 */
  {
    "*tablejumpsi_internal1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_528 },
#else
    { 0, output_528, 0 },
#endif
    0,
    &operand_data[1190],
    2,
    0,
    2,
    2
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:13934 */
  {
    "*tablejumpdi_internal1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_529 },
#else
    { 0, output_529, 0 },
#endif
    0,
    &operand_data[1192],
    2,
    0,
    2,
    2
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:13944 */
  {
    "nop",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "{cror 0,0,0|nop}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_nop,
    &operand_data[0],
    0,
    0,
    0,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:13999 */
  {
    "*ctrsi_internal1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_531 },
#else
    { 0, 0, output_531 },
#endif
    0,
    &operand_data[1193],
    5,
    1,
    4,
    3
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:13999 */
  {
    "*ctrdi_internal1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_532 },
#else
    { 0, 0, output_532 },
#endif
    0,
    &operand_data[1198],
    5,
    1,
    4,
    3
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:14023 */
  {
    "*ctrsi_internal2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_533 },
#else
    { 0, 0, output_533 },
#endif
    0,
    &operand_data[1193],
    5,
    1,
    4,
    3
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:14023 */
  {
    "*ctrdi_internal2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_534 },
#else
    { 0, 0, output_534 },
#endif
    0,
    &operand_data[1198],
    5,
    1,
    4,
    3
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:14049 */
  {
    "*ctrsi_internal5",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_535 },
#else
    { 0, 0, output_535 },
#endif
    0,
    &operand_data[1193],
    5,
    1,
    4,
    3
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:14049 */
  {
    "*ctrdi_internal5",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_536 },
#else
    { 0, 0, output_536 },
#endif
    0,
    &operand_data[1198],
    5,
    1,
    4,
    3
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:14073 */
  {
    "*ctrsi_internal6",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_537 },
#else
    { 0, 0, output_537 },
#endif
    0,
    &operand_data[1193],
    5,
    1,
    4,
    3
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:14073 */
  {
    "*ctrdi_internal6",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_538 },
#else
    { 0, 0, output_538 },
#endif
    0,
    &operand_data[1198],
    5,
    1,
    4,
    3
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:14153 */
  {
    "trap",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "{t 31,0,0|trap}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_trap,
    &operand_data[0],
    0,
    0,
    0,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:14167 */
  {
    "*rs6000.md:14167",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "{t|tw}%V0%I2 %1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1203],
    3,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:14167 */
  {
    "*rs6000.md:14167",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "{t|td}%V0%I2 %1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1206],
    3,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:14186 */
  {
    "*movesi_from_cr_one",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_542 },
#else
    { 0, 0, output_542 },
#endif
    0,
    &operand_data[1209],
    4,
    0,
    1,
    3
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:14207 */
  {
    "movesi_from_cr",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mfcr %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_movesi_from_cr,
    &operand_data[51],
    1,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:14216 */
  {
    "*stmw",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "{stm|stmw} %2,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1213],
    3,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:14224 */
  {
    "*save_fpregs_si",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "bl %z2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1216],
    5,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:14224 */
  {
    "*save_fpregs_di",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "bl %z2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1221],
    5,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:14236 */
  {
    "*save_fpregs_with_label_si",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_547 },
#else
    { 0, 0, output_547 },
#endif
    0,
    &operand_data[1226],
    6,
    0,
    1,
    3
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:14266 */
  {
    "stack_tie",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_stack_tie,
    &operand_data[1232],
    1,
    1,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:14294 */
  {
    "*movsi_to_cr",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_549 },
#else
    { 0, 0, output_549 },
#endif
    0,
    &operand_data[1233],
    4,
    0,
    1,
    3
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:14312 */
  {
    "*mtcrfsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mtcrf %R0,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1234],
    3,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:14328 */
  {
    "*lmw",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "{lm|lmw} %1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1237],
    3,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:14337 */
  {
    "*return_internal_si",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_552 },
#else
    { 0, 0, output_552 },
#endif
    0,
    &operand_data[1240],
    1,
    0,
    1,
    3
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:14337 */
  {
    "*return_internal_di",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_553 },
#else
    { 0, 0, output_553 },
#endif
    0,
    &operand_data[1241],
    1,
    0,
    1,
    3
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:14354 */
  {
    "*return_and_restore_fpregs_si",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_554 },
#else
    { 0, 0, output_554 },
#endif
    0,
    &operand_data[1242],
    5,
    0,
    1,
    3
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:14354 */
  {
    "*return_and_restore_fpregs_di",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_555 },
#else
    { 0, 0, output_555 },
#endif
    0,
    &operand_data[1247],
    5,
    0,
    1,
    3
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:14387 */
  {
    "eh_set_lr_si",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_eh_set_lr_si,
    &operand_data[1252],
    2,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:14387 */
  {
    "eh_set_lr_di",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_eh_set_lr_di,
    &operand_data[1254],
    2,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:14405 */
  {
    "prefetch",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_558 },
#else
    { 0, 0, output_558 },
#endif
    (insn_gen_fn) gen_prefetch,
    &operand_data[1256],
    3,
    0,
    1,
    3
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:45 */
  {
    "*sync_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "{dcs|sync}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1259],
    2,
    0,
    0,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:52 */
  {
    "load_locked_si",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "lwarx %0,%y1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_load_locked_si,
    &operand_data[1261],
    2,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:52 */
  {
    "load_locked_di",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldarx %0,%y1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_load_locked_di,
    &operand_data[1263],
    2,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:60 */
  {
    "store_conditional_si",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "stwcx. %2,%y1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_store_conditional_si,
    &operand_data[1265],
    3,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:60 */
  {
    "store_conditional_di",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "stdcx. %2,%y1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_store_conditional_di,
    &operand_data[1268],
    3,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:69 */
  {
    "sync_compare_and_swapsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sync_compare_and_swapsi,
    &operand_data[1271],
    6,
    1,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:69 */
  {
    "sync_compare_and_swapdi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sync_compare_and_swapdi,
    &operand_data[1277],
    6,
    1,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:113 */
  {
    "sync_compare_and_swapqhi_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sync_compare_and_swapqhi_internal,
    &operand_data[1283],
    7,
    1,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:135 */
  {
    "sync_lock_test_and_setsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sync_lock_test_and_setsi,
    &operand_data[1290],
    5,
    1,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:135 */
  {
    "sync_lock_test_and_setdi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sync_lock_test_and_setdi,
    &operand_data[1295],
    5,
    1,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:175 */
  {
    "*sync_addsi_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1300],
    4,
    1,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:175 */
  {
    "*sync_subsi_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1304],
    4,
    1,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:175 */
  {
    "*sync_iorsi_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1308],
    4,
    1,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:175 */
  {
    "*sync_xorsi_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1308],
    4,
    1,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:175 */
  {
    "*sync_andsi_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1312],
    4,
    1,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:193 */
  {
    "*sync_adddi_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1316],
    4,
    1,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:193 */
  {
    "*sync_subdi_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1320],
    4,
    1,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:193 */
  {
    "*sync_iordi_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1324],
    4,
    1,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:193 */
  {
    "*sync_xordi_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1324],
    4,
    1,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:193 */
  {
    "*sync_anddi_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1328],
    4,
    1,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:234 */
  {
    "*sync_nandsi_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1332],
    4,
    1,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:234 */
  {
    "*sync_nanddi_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1336],
    4,
    1,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:275 */
  {
    "*sync_old_addsi_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1340],
    5,
    2,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:275 */
  {
    "*sync_old_subsi_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1345],
    5,
    2,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:275 */
  {
    "*sync_old_iorsi_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1350],
    5,
    2,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:275 */
  {
    "*sync_old_xorsi_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1350],
    5,
    2,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:275 */
  {
    "*sync_old_andsi_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1355],
    5,
    2,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:295 */
  {
    "*sync_old_adddi_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1360],
    5,
    2,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:295 */
  {
    "*sync_old_subdi_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1365],
    5,
    2,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:295 */
  {
    "*sync_old_iordi_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1370],
    5,
    2,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:295 */
  {
    "*sync_old_xordi_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1370],
    5,
    2,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:295 */
  {
    "*sync_old_anddi_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1375],
    5,
    2,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:340 */
  {
    "*sync_old_nandsi_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1380],
    5,
    2,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:340 */
  {
    "*sync_old_nanddi_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1385],
    5,
    2,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:384 */
  {
    "*sync_new_addsi_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1340],
    5,
    3,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:384 */
  {
    "*sync_new_subsi_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1345],
    5,
    3,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:384 */
  {
    "*sync_new_iorsi_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1350],
    5,
    3,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:384 */
  {
    "*sync_new_xorsi_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1350],
    5,
    3,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:384 */
  {
    "*sync_new_andsi_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1355],
    5,
    3,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:405 */
  {
    "*sync_new_adddi_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1360],
    5,
    3,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:405 */
  {
    "*sync_new_subdi_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1365],
    5,
    3,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:405 */
  {
    "*sync_new_iordi_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1370],
    5,
    3,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:405 */
  {
    "*sync_new_xordi_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1370],
    5,
    3,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:405 */
  {
    "*sync_new_anddi_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1375],
    5,
    3,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:452 */
  {
    "*sync_new_nandsi_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1380],
    5,
    3,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:452 */
  {
    "*sync_new_nanddi_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1385],
    5,
    3,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:476 */
  {
    "*atomic_andsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_605 },
#else
    { 0, output_605, 0 },
#endif
    0,
    &operand_data[308],
    3,
    0,
    4,
    2
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:489 */
  {
    "*atomic_anddi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_606 },
#else
    { 0, output_606, 0 },
#endif
    0,
    &operand_data[1390],
    3,
    0,
    5,
    2
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:510 */
  {
    "*sync_addshort_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "lwarx %3,%y0\n\tadd%I1 %2,%3,%1\n\tandc %6,%3,%4\n\tand %2,%2,%4\n\tor %2,%2,%6\n\tstwcx. %2,%y0\n\tbne- $-24",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1393],
    7,
    9,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:528 */
  {
    "*sync_subshort_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "lwarx %3,%y0\n\tsubf %2,%1,%3\n\tandc %6,%3,%4\n\tand %2,%2,%4\n\tor %2,%2,%6\n\tstwcx. %2,%y0\n\tbne- $-24",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1393],
    7,
    9,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:546 */
  {
    "*sync_andsi_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_609 },
#else
    { 0, output_609, 0 },
#endif
    0,
    &operand_data[1400],
    5,
    4,
    4,
    2
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:563 */
  {
    "*sync_boolsi_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_610 },
#else
    { 0, output_610, 0 },
#endif
    0,
    &operand_data[1405],
    6,
    3,
    3,
    2
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:582 */
  {
    "*sync_boolcshort_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "lwarx %3,%y0\n\txor%I2 %2,%3,%5\n\t%q4 %2,%2,%1\n\tstwcx. %2,%y0\n\tbne- $-16",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1411],
    7,
    3,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:595 */
  {
    "isync",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "{ics|isync}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_isync,
    &operand_data[1418],
    2,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:614 */
  {
    "lwsync",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_613 },
#else
    { 0, 0, output_613 },
#endif
    (insn_gen_fn) gen_lwsync,
    &operand_data[1418],
    2,
    0,
    1,
    3
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:22 */
  {
    "altivec_lvx_v4si",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "lvx %0,%y1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_altivec_lvx_v4si,
    &operand_data[1420],
    2,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:22 */
  {
    "altivec_lvx_v8hi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "lvx %0,%y1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_altivec_lvx_v8hi,
    &operand_data[1422],
    2,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:22 */
  {
    "altivec_lvx_v16qi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "lvx %0,%y1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_altivec_lvx_v16qi,
    &operand_data[1424],
    2,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:22 */
  {
    "altivec_lvx_v4sf",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "lvx %0,%y1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_altivec_lvx_v4sf,
    &operand_data[1426],
    2,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:156 */
  {
    "altivec_stvx_v4si",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "stvx %1,%y0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_altivec_stvx_v4si,
    &operand_data[1428],
    2,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:156 */
  {
    "altivec_stvx_v8hi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "stvx %1,%y0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_altivec_stvx_v8hi,
    &operand_data[1430],
    2,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:156 */
  {
    "altivec_stvx_v16qi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "stvx %1,%y0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_altivec_stvx_v16qi,
    &operand_data[1432],
    2,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:156 */
  {
    "altivec_stvx_v4sf",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "stvx %1,%y0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_altivec_stvx_v4sf,
    &operand_data[1434],
    2,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:174 */
  {
    "*movv4si_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_622 },
#else
    { 0, 0, output_622 },
#endif
    0,
    &operand_data[1436],
    2,
    0,
    7,
    3
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:174 */
  {
    "*movv8hi_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_623 },
#else
    { 0, 0, output_623 },
#endif
    0,
    &operand_data[1438],
    2,
    0,
    7,
    3
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:174 */
  {
    "*movv16qi_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_624 },
#else
    { 0, 0, output_624 },
#endif
    0,
    &operand_data[1440],
    2,
    0,
    7,
    3
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:174 */
  {
    "*movv4sf_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_625 },
#else
    { 0, 0, output_625 },
#endif
    0,
    &operand_data[1442],
    2,
    0,
    7,
    3
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:254 */
  {
    "get_vrsave_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_626 },
#else
    { 0, 0, output_626 },
#endif
    (insn_gen_fn) gen_get_vrsave_internal,
    &operand_data[1444],
    1,
    0,
    1,
    3
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:266 */
  {
    "*set_vrsave_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_627 },
#else
    { 0, 0, output_627 },
#endif
    0,
    &operand_data[1445],
    2,
    0,
    1,
    3
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:280 */
  {
    "*save_world",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "bl %z2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1447],
    3,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:289 */
  {
    "*restore_world",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "b %z2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1450],
    4,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:301 */
  {
    "addv4si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vadduwm %0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_addv4si3,
    &operand_data[1454],
    3,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:301 */
  {
    "addv8hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vadduhm %0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_addv8hi3,
    &operand_data[1457],
    3,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:301 */
  {
    "addv16qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vaddubm %0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_addv16qi3,
    &operand_data[1460],
    3,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:309 */
  {
    "addv4sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vaddfp %0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_addv4sf3,
    &operand_data[1463],
    3,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:317 */
  {
    "altivec_vaddcuw",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vaddcuw %0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_altivec_vaddcuw,
    &operand_data[1454],
    3,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:326 */
  {
    "altivec_vadduws",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vadduws %0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_altivec_vadduws,
    &operand_data[1454],
    3,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:326 */
  {
    "altivec_vadduhs",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vadduhs %0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_altivec_vadduhs,
    &operand_data[1457],
    3,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:326 */
  {
    "altivec_vaddubs",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vaddubs %0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_altivec_vaddubs,
    &operand_data[1460],
    3,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:336 */
  {
    "altivec_vaddsws",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vaddsws %0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_altivec_vaddsws,
    &operand_data[1454],
    3,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:336 */
  {
    "altivec_vaddshs",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vaddshs %0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_altivec_vaddshs,
    &operand_data[1457],
    3,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:336 */
  {
    "altivec_vaddsbs",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vaddsbs %0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_altivec_vaddsbs,
    &operand_data[1460],
    3,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:347 */
  {
    "subv4si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vsubuwm %0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_subv4si3,
    &operand_data[1454],
    3,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:347 */
  {
    "subv8hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vsubuhm %0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_subv8hi3,
    &operand_data[1457],
    3,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:347 */
  {
    "subv16qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vsububm %0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_subv16qi3,
    &operand_data[1460],
    3,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:355 */
  {
    "subv4sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vsubfp %0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_subv4sf3,
    &operand_data[1463],
    3,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:363 */
  {
    "altivec_vsubcuw",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vsubcuw %0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_altivec_vsubcuw,
    &operand_data[1454],
    3,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:372 */
  {
    "altivec_vsubuws",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vsubuws %0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_altivec_vsubuws,
    &operand_data[1454],
    3,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:372 */
  {
    "altivec_vsubuhs",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vsubuhs %0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_altivec_vsubuhs,
    &operand_data[1457],
    3,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:372 */
  {
    "altivec_vsububs",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vsububs %0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_altivec_vsububs,
    &operand_data[1460],
    3,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:382 */
  {
    "altivec_vsubsws",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vsubsws %0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_altivec_vsubsws,
    &operand_data[1454],
    3,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:382 */
  {
    "altivec_vsubshs",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vsubshs %0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_altivec_vsubshs,
    &operand_data[1457],
    3,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:382 */
  {
    "altivec_vsubsbs",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vsubsbs %0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_altivec_vsubsbs,
    &operand_data[1460],
    3,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:393 */
  {
    "altivec_vavguw",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vavguw %0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_altivec_vavguw,
    &operand_data[1454],
    3,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:393 */
  {
    "altivec_vavguh",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vavguh %0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_altivec_vavguh,
    &operand_data[1457],
    3,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:393 */
  {
    "altivec_vavgub",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vavgub %0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_altivec_vavgub,
    &operand_data[1460],
    3,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:402 */
  {
    "altivec_vavgsw",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vavgsw %0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_altivec_vavgsw,
    &operand_data[1454],
    3,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:402 */
  {
    "altivec_vavgsh",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vavgsh %0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_altivec_vavgsh,
    &operand_data[1457],
    3,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:402 */
  {
    "altivec_vavgsb",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vavgsb %0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_altivec_vavgsb,
    &operand_data[1460],
    3,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:411 */
  {
    "altivec_vcmpbfp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vcmpbfp %0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_altivec_vcmpbfp,
    &operand_data[1466],
    3,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:420 */
  {
    "altivec_vcmpequb",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vcmpequb %0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_altivec_vcmpequb,
    &operand_data[1460],
    3,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:429 */
  {
    "altivec_vcmpequh",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vcmpequh %0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_altivec_vcmpequh,
    &operand_data[1457],
    3,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:438 */
  {
    "altivec_vcmpequw",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vcmpequw %0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_altivec_vcmpequw,
    &operand_data[1454],
    3,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:447 */
  {
    "altivec_vcmpeqfp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vcmpeqfp %0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_altivec_vcmpeqfp,
    &operand_data[1466],
    3,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:456 */
  {
    "altivec_vcmpgefp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vcmpgefp %0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_altivec_vcmpgefp,
    &operand_data[1466],
    3,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:465 */
  {
    "altivec_vcmpgtub",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vcmpgtub %0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_altivec_vcmpgtub,
    &operand_data[1460],
    3,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:474 */
  {
    "altivec_vcmpgtsb",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vcmpgtsb %0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_altivec_vcmpgtsb,
    &operand_data[1460],
    3,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:483 */
  {
    "altivec_vcmpgtuh",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vcmpgtuh %0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_altivec_vcmpgtuh,
    &operand_data[1457],
    3,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:492 */
  {
    "altivec_vcmpgtsh",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vcmpgtsh %0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_altivec_vcmpgtsh,
    &operand_data[1457],
    3,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:501 */
  {
    "altivec_vcmpgtuw",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vcmpgtuw %0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_altivec_vcmpgtuw,
    &operand_data[1454],
    3,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:510 */
  {
    "altivec_vcmpgtsw",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vcmpgtsw %0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_altivec_vcmpgtsw,
    &operand_data[1454],
    3,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:519 */
  {
    "altivec_vcmpgtfp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vcmpgtfp %0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_altivec_vcmpgtfp,
    &operand_data[1466],
    3,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:529 */
  {
    "altivec_vmaddfp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vmaddfp %0,%1,%2,%3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_altivec_vmaddfp,
    &operand_data[1469],
    4,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:620 */
  {
    "altivec_vnmsubfp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vnmsubfp %0,%1,%2,%3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_altivec_vnmsubfp,
    &operand_data[1469],
    4,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:629 */
  {
    "altivec_vmsumuhm",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vmsumuhm %0,%1,%2,%3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_altivec_vmsumuhm,
    &operand_data[1473],
    4,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:629 */
  {
    "altivec_vmsumubm",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vmsumubm %0,%1,%2,%3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_altivec_vmsumubm,
    &operand_data[1477],
    4,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:639 */
  {
    "altivec_vmsummhm",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vmsummhm %0,%1,%2,%3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_altivec_vmsummhm,
    &operand_data[1473],
    4,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:639 */
  {
    "altivec_vmsummbm",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vmsummbm %0,%1,%2,%3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_altivec_vmsummbm,
    &operand_data[1477],
    4,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:649 */
  {
    "altivec_vmsumshm",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vmsumshm %0,%1,%2,%3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_altivec_vmsumshm,
    &operand_data[1473],
    4,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:659 */
  {
    "altivec_vmsumuhs",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vmsumuhs %0,%1,%2,%3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_altivec_vmsumuhs,
    &operand_data[1473],
    4,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:670 */
  {
    "altivec_vmsumshs",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vmsumshs %0,%1,%2,%3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_altivec_vmsumshs,
    &operand_data[1473],
    4,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:683 */
  {
    "umaxv4si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vmaxuw %0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_umaxv4si3,
    &operand_data[1454],
    3,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:683 */
  {
    "umaxv8hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vmaxuh %0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_umaxv8hi3,
    &operand_data[1457],
    3,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:683 */
  {
    "umaxv16qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vmaxub %0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_umaxv16qi3,
    &operand_data[1460],
    3,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:691 */
  {
    "smaxv4si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vmaxsw %0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_smaxv4si3,
    &operand_data[1454],
    3,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:691 */
  {
    "smaxv8hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vmaxsh %0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_smaxv8hi3,
    &operand_data[1457],
    3,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:691 */
  {
    "smaxv16qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vmaxsb %0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_smaxv16qi3,
    &operand_data[1460],
    3,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:699 */
  {
    "smaxv4sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vmaxfp %0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_smaxv4sf3,
    &operand_data[1463],
    3,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:707 */
  {
    "uminv4si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vminuw %0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_uminv4si3,
    &operand_data[1454],
    3,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:707 */
  {
    "uminv8hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vminuh %0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_uminv8hi3,
    &operand_data[1457],
    3,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:707 */
  {
    "uminv16qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vminub %0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_uminv16qi3,
    &operand_data[1460],
    3,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:715 */
  {
    "sminv4si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vminsw %0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sminv4si3,
    &operand_data[1454],
    3,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:715 */
  {
    "sminv8hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vminsh %0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sminv8hi3,
    &operand_data[1457],
    3,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:715 */
  {
    "sminv16qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vminsb %0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sminv16qi3,
    &operand_data[1460],
    3,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:723 */
  {
    "sminv4sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vminfp %0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sminv4sf3,
    &operand_data[1463],
    3,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:731 */
  {
    "altivec_vmhaddshs",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vmhaddshs %0,%1,%2,%3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_altivec_vmhaddshs,
    &operand_data[1481],
    4,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:742 */
  {
    "altivec_vmhraddshs",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vmhraddshs %0,%1,%2,%3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_altivec_vmhraddshs,
    &operand_data[1481],
    4,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:753 */
  {
    "altivec_vmladduhm",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vmladduhm %0,%1,%2,%3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_altivec_vmladduhm,
    &operand_data[1481],
    4,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:763 */
  {
    "altivec_vmrghb",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vmrghb %0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_altivec_vmrghb,
    &operand_data[1460],
    3,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:804 */
  {
    "altivec_vmrghh",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vmrghh %0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_altivec_vmrghh,
    &operand_data[1457],
    3,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:829 */
  {
    "altivec_vmrghw",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vmrghw %0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_altivec_vmrghw,
    &operand_data[1454],
    3,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:846 */
  {
    "altivec_vmrglb",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vmrglb %0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_altivec_vmrglb,
    &operand_data[1460],
    3,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:887 */
  {
    "altivec_vmrglh",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vmrglh %0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_altivec_vmrglh,
    &operand_data[1457],
    3,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:912 */
  {
    "altivec_vmrglw",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vmrglw %0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_altivec_vmrglw,
    &operand_data[1454],
    3,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:929 */
  {
    "altivec_vmuleub",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vmuleub %0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_altivec_vmuleub,
    &operand_data[1485],
    3,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:938 */
  {
    "altivec_vmulesb",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vmulesb %0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_altivec_vmulesb,
    &operand_data[1485],
    3,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:947 */
  {
    "altivec_vmuleuh",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vmuleuh %0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_altivec_vmuleuh,
    &operand_data[1473],
    3,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:956 */
  {
    "altivec_vmulesh",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vmulesh %0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_altivec_vmulesh,
    &operand_data[1473],
    3,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:965 */
  {
    "altivec_vmuloub",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vmuloub %0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_altivec_vmuloub,
    &operand_data[1485],
    3,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:974 */
  {
    "altivec_vmulosb",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vmulosb %0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_altivec_vmulosb,
    &operand_data[1485],
    3,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:983 */
  {
    "altivec_vmulouh",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vmulouh %0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_altivec_vmulouh,
    &operand_data[1473],
    3,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:992 */
  {
    "altivec_vmulosh",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vmulosh %0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_altivec_vmulosh,
    &operand_data[1473],
    3,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1004 */
  {
    "andv4si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vand %0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_andv4si3,
    &operand_data[1454],
    3,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1004 */
  {
    "andv8hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vand %0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_andv8hi3,
    &operand_data[1457],
    3,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1004 */
  {
    "andv16qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vand %0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_andv16qi3,
    &operand_data[1460],
    3,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1012 */
  {
    "iorv4si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vor %0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_iorv4si3,
    &operand_data[1454],
    3,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1012 */
  {
    "iorv8hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vor %0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_iorv8hi3,
    &operand_data[1457],
    3,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1012 */
  {
    "iorv16qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vor %0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_iorv16qi3,
    &operand_data[1460],
    3,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1020 */
  {
    "xorv4si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vxor %0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_xorv4si3,
    &operand_data[1454],
    3,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1020 */
  {
    "xorv8hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vxor %0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_xorv8hi3,
    &operand_data[1457],
    3,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1020 */
  {
    "xorv16qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vxor %0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_xorv16qi3,
    &operand_data[1460],
    3,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1028 */
  {
    "xorv4sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vxor %0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_xorv4sf3,
    &operand_data[1463],
    3,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1036 */
  {
    "one_cmplv4si2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vnor %0,%1,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_one_cmplv4si2,
    &operand_data[1454],
    2,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1036 */
  {
    "one_cmplv8hi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vnor %0,%1,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_one_cmplv8hi2,
    &operand_data[1457],
    2,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1036 */
  {
    "one_cmplv16qi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vnor %0,%1,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_one_cmplv16qi2,
    &operand_data[1460],
    2,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1043 */
  {
    "altivec_norv4si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vnor %0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_altivec_norv4si3,
    &operand_data[1454],
    3,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1043 */
  {
    "altivec_norv8hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vnor %0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_altivec_norv8hi3,
    &operand_data[1457],
    3,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1043 */
  {
    "altivec_norv16qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vnor %0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_altivec_norv16qi3,
    &operand_data[1460],
    3,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1051 */
  {
    "andcv4si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vandc %0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_andcv4si3,
    &operand_data[1454],
    3,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1051 */
  {
    "andcv8hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vandc %0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_andcv8hi3,
    &operand_data[1457],
    3,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1051 */
  {
    "andcv16qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vandc %0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_andcv16qi3,
    &operand_data[1460],
    3,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1059 */
  {
    "*andc3_v4sf",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vandc %0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1463],
    3,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1067 */
  {
    "altivec_vpkuhum",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpkuhum %0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_altivec_vpkuhum,
    &operand_data[1488],
    3,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1076 */
  {
    "altivec_vpkuwum",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpkuwum %0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_altivec_vpkuwum,
    &operand_data[1491],
    3,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1085 */
  {
    "altivec_vpkpx",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpkpx %0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_altivec_vpkpx,
    &operand_data[1491],
    3,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1094 */
  {
    "altivec_vpkshss",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpkshss %0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_altivec_vpkshss,
    &operand_data[1488],
    3,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1104 */
  {
    "altivec_vpkswss",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpkswss %0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_altivec_vpkswss,
    &operand_data[1491],
    3,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1114 */
  {
    "altivec_vpkuhus",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpkuhus %0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_altivec_vpkuhus,
    &operand_data[1488],
    3,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1124 */
  {
    "altivec_vpkshus",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpkshus %0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_altivec_vpkshus,
    &operand_data[1488],
    3,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1134 */
  {
    "altivec_vpkuwus",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpkuwus %0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_altivec_vpkuwus,
    &operand_data[1491],
    3,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1144 */
  {
    "altivec_vpkswus",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpkswus %0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_altivec_vpkswus,
    &operand_data[1491],
    3,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1154 */
  {
    "altivec_vrlw",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vrlw %0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_altivec_vrlw,
    &operand_data[1454],
    3,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1154 */
  {
    "altivec_vrlh",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vrlh %0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_altivec_vrlh,
    &operand_data[1457],
    3,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1154 */
  {
    "altivec_vrlb",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vrlb %0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_altivec_vrlb,
    &operand_data[1460],
    3,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1163 */
  {
    "altivec_vslw",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vslw %0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_altivec_vslw,
    &operand_data[1454],
    3,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1163 */
  {
    "altivec_vslh",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vslh %0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_altivec_vslh,
    &operand_data[1457],
    3,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1163 */
  {
    "altivec_vslb",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vslb %0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_altivec_vslb,
    &operand_data[1460],
    3,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1172 */
  {
    "altivec_vsl",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vsl %0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_altivec_vsl,
    &operand_data[1454],
    3,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1181 */
  {
    "altivec_vslo",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vslo %0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_altivec_vslo,
    &operand_data[1454],
    3,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1190 */
  {
    "lshrv4si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vsrw %0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_lshrv4si3,
    &operand_data[1454],
    3,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1190 */
  {
    "lshrv8hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vsrh %0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_lshrv8hi3,
    &operand_data[1457],
    3,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1190 */
  {
    "lshrv16qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vsrb %0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_lshrv16qi3,
    &operand_data[1460],
    3,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1198 */
  {
    "ashrv4si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vsraw %0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_ashrv4si3,
    &operand_data[1454],
    3,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1198 */
  {
    "ashrv8hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vsrah %0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_ashrv8hi3,
    &operand_data[1457],
    3,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1198 */
  {
    "ashrv16qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vsrab %0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_ashrv16qi3,
    &operand_data[1460],
    3,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1206 */
  {
    "altivec_vsr",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vsr %0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_altivec_vsr,
    &operand_data[1454],
    3,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1215 */
  {
    "altivec_vsro",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vsro %0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_altivec_vsro,
    &operand_data[1454],
    3,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1224 */
  {
    "altivec_vsum4ubs",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vsum4ubs %0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_altivec_vsum4ubs,
    &operand_data[1494],
    3,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1234 */
  {
    "altivec_vsum4shs",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vsum4shs %0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_altivec_vsum4shs,
    &operand_data[1497],
    3,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1234 */
  {
    "altivec_vsum4sbs",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vsum4sbs %0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_altivec_vsum4sbs,
    &operand_data[1494],
    3,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1244 */
  {
    "altivec_vsum2sws",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vsum2sws %0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_altivec_vsum2sws,
    &operand_data[1454],
    3,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1254 */
  {
    "altivec_vsumsws",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vsumsws %0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_altivec_vsumsws,
    &operand_data[1454],
    3,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1264 */
  {
    "altivec_vspltb",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vspltb %0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_altivec_vspltb,
    &operand_data[1500],
    3,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1274 */
  {
    "altivec_vsplth",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vsplth %0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_altivec_vsplth,
    &operand_data[1503],
    3,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1284 */
  {
    "altivec_vspltw",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vspltw %0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_altivec_vspltw,
    &operand_data[1506],
    3,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1294 */
  {
    "*altivec_vspltsf",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vspltw %0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1509],
    3,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1304 */
  {
    "altivec_vspltisw",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vspltisw %0,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_altivec_vspltisw,
    &operand_data[1512],
    2,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1304 */
  {
    "altivec_vspltish",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vspltish %0,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_altivec_vspltish,
    &operand_data[1514],
    2,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1304 */
  {
    "altivec_vspltisb",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vspltisb %0,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_altivec_vspltisb,
    &operand_data[1516],
    2,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1312 */
  {
    "ftruncv4sf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vrfiz %0,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_ftruncv4sf2,
    &operand_data[1463],
    2,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1319 */
  {
    "altivec_vperm_v4si",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vperm %0,%1,%2,%3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_altivec_vperm_v4si,
    &operand_data[1518],
    4,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1319 */
  {
    "altivec_vperm_v8hi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vperm %0,%1,%2,%3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_altivec_vperm_v8hi,
    &operand_data[1522],
    4,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1319 */
  {
    "altivec_vperm_v16qi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vperm %0,%1,%2,%3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_altivec_vperm_v16qi,
    &operand_data[1526],
    4,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1319 */
  {
    "altivec_vperm_v4sf",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vperm %0,%1,%2,%3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_altivec_vperm_v4sf,
    &operand_data[1530],
    4,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1329 */
  {
    "altivec_vrfip",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vrfip %0,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_altivec_vrfip,
    &operand_data[1463],
    2,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1337 */
  {
    "altivec_vrfin",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vrfin %0,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_altivec_vrfin,
    &operand_data[1463],
    2,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1345 */
  {
    "altivec_vrfim",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vrfim %0,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_altivec_vrfim,
    &operand_data[1463],
    2,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1353 */
  {
    "altivec_vcfux",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vcfux %0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_altivec_vcfux,
    &operand_data[1534],
    3,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1362 */
  {
    "altivec_vcfsx",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vcfsx %0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_altivec_vcfsx,
    &operand_data[1534],
    3,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1371 */
  {
    "altivec_vctuxs",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vctuxs %0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_altivec_vctuxs,
    &operand_data[1537],
    3,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1381 */
  {
    "altivec_vctsxs",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vctsxs %0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_altivec_vctsxs,
    &operand_data[1537],
    3,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1391 */
  {
    "altivec_vlogefp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vlogefp %0,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_altivec_vlogefp,
    &operand_data[1463],
    2,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1399 */
  {
    "altivec_vexptefp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vexptefp %0,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_altivec_vexptefp,
    &operand_data[1463],
    2,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1407 */
  {
    "altivec_vrsqrtefp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vrsqrtefp %0,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_altivec_vrsqrtefp,
    &operand_data[1463],
    2,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1415 */
  {
    "altivec_vrefp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vrefp %0,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_altivec_vrefp,
    &operand_data[1463],
    2,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1557 */
  {
    "altivec_vsel_v4si",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vsel %0,%1,%2,%3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_altivec_vsel_v4si,
    &operand_data[1540],
    4,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1567 */
  {
    "altivec_vsel_v4sf",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vsel %0,%1,%2,%3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_altivec_vsel_v4sf,
    &operand_data[1544],
    4,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1577 */
  {
    "altivec_vsel_v8hi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vsel %0,%1,%2,%3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_altivec_vsel_v8hi,
    &operand_data[1481],
    4,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1587 */
  {
    "altivec_vsel_v16qi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vsel %0,%1,%2,%3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_altivec_vsel_v16qi,
    &operand_data[1526],
    4,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1597 */
  {
    "altivec_vsldoi_v4si",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vsldoi %0,%1,%2,%3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_altivec_vsldoi_v4si,
    &operand_data[1548],
    4,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1597 */
  {
    "altivec_vsldoi_v8hi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vsldoi %0,%1,%2,%3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_altivec_vsldoi_v8hi,
    &operand_data[1552],
    4,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1597 */
  {
    "altivec_vsldoi_v16qi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vsldoi %0,%1,%2,%3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_altivec_vsldoi_v16qi,
    &operand_data[1556],
    4,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1597 */
  {
    "altivec_vsldoi_v4sf",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vsldoi %0,%1,%2,%3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_altivec_vsldoi_v4sf,
    &operand_data[1560],
    4,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1607 */
  {
    "altivec_vupkhsb",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vupkhsb %0,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_altivec_vupkhsb,
    &operand_data[1485],
    2,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1615 */
  {
    "altivec_vupkhpx",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vupkhpx %0,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_altivec_vupkhpx,
    &operand_data[1473],
    2,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1623 */
  {
    "altivec_vupkhsh",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vupkhsh %0,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_altivec_vupkhsh,
    &operand_data[1473],
    2,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1631 */
  {
    "altivec_vupklsb",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vupklsb %0,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_altivec_vupklsb,
    &operand_data[1485],
    2,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1639 */
  {
    "altivec_vupklpx",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vupklpx %0,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_altivec_vupklpx,
    &operand_data[1473],
    2,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1647 */
  {
    "altivec_vupklsh",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vupklsh %0,%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_altivec_vupklsh,
    &operand_data[1473],
    2,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1693 */
  {
    "altivec_predicate_v4sf",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%3 %0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_altivec_predicate_v4sf,
    &operand_data[1564],
    4,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1703 */
  {
    "altivec_predicate_vcmpequw",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%3 %0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_altivec_predicate_vcmpequw,
    &operand_data[1568],
    4,
    2,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1716 */
  {
    "altivec_predicate_vcmpgtsw",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%3 %0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_altivec_predicate_vcmpgtsw,
    &operand_data[1568],
    4,
    2,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1729 */
  {
    "altivec_predicate_vcmpgtuw",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%3 %0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_altivec_predicate_vcmpgtuw,
    &operand_data[1568],
    4,
    2,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1742 */
  {
    "altivec_predicate_vcmpgtuh",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%3 %0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_altivec_predicate_vcmpgtuh,
    &operand_data[1572],
    4,
    2,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1755 */
  {
    "altivec_predicate_vcmpgtsh",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%3 %0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_altivec_predicate_vcmpgtsh,
    &operand_data[1572],
    4,
    2,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1768 */
  {
    "altivec_predicate_vcmpequh",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%3 %0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_altivec_predicate_vcmpequh,
    &operand_data[1572],
    4,
    2,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1781 */
  {
    "altivec_predicate_vcmpequb",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%3 %0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_altivec_predicate_vcmpequb,
    &operand_data[1576],
    4,
    2,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1794 */
  {
    "altivec_predicate_vcmpgtsb",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%3 %0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_altivec_predicate_vcmpgtsb,
    &operand_data[1576],
    4,
    2,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1807 */
  {
    "altivec_predicate_vcmpgtub",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%3 %0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_altivec_predicate_vcmpgtub,
    &operand_data[1576],
    4,
    2,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1821 */
  {
    "altivec_mtvscr",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mtvscr %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_altivec_mtvscr,
    &operand_data[105],
    1,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1829 */
  {
    "altivec_mfvscr",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mfvscr %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_altivec_mfvscr,
    &operand_data[1457],
    1,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1836 */
  {
    "altivec_dssall",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "dssall",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_altivec_dssall,
    &operand_data[0],
    0,
    0,
    0,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1842 */
  {
    "altivec_dss",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "dss %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_altivec_dss,
    &operand_data[1536],
    1,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1849 */
  {
    "altivec_dst",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "dst %0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_altivec_dst,
    &operand_data[1580],
    3,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1857 */
  {
    "altivec_dstt",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "dstt %0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_altivec_dstt,
    &operand_data[1580],
    3,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1865 */
  {
    "altivec_dstst",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "dstst %0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_altivec_dstst,
    &operand_data[1580],
    3,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1873 */
  {
    "altivec_dststt",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "dststt %0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_altivec_dststt,
    &operand_data[1580],
    3,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1882 */
  {
    "altivec_lvsl",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "lvsl %0,%y1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_altivec_lvsl,
    &operand_data[1583],
    2,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1889 */
  {
    "altivec_lvsr",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "lvsr %0,%y1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_altivec_lvsr,
    &operand_data[1583],
    2,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1921 */
  {
    "altivec_lvewx",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "lvewx %0,%y1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_altivec_lvewx,
    &operand_data[1585],
    2,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1921 */
  {
    "altivec_lvehx",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "lvehx %0,%y1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_altivec_lvehx,
    &operand_data[1587],
    2,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1921 */
  {
    "altivec_lvebx",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "lvebx %0,%y1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_altivec_lvebx,
    &operand_data[1589],
    2,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1930 */
  {
    "*altivec_lvesfx",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "lvewx %0,%y1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1591],
    2,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1939 */
  {
    "altivec_lvxl",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "lvxl %0,%y1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_altivec_lvxl,
    &operand_data[1585],
    2,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1948 */
  {
    "altivec_lvx",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "lvx %0,%y1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_altivec_lvx,
    &operand_data[1585],
    2,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1955 */
  {
    "altivec_stvx",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "stvx %1,%y0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_altivec_stvx,
    &operand_data[1593],
    2,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1964 */
  {
    "altivec_stvxl",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "stvxl %1,%y0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_altivec_stvxl,
    &operand_data[1593],
    2,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1973 */
  {
    "altivec_stvewx",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "stvewx %1,%y0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_altivec_stvewx,
    &operand_data[1593],
    2,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1973 */
  {
    "altivec_stvehx",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "stvehx %1,%y0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_altivec_stvehx,
    &operand_data[1595],
    2,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1973 */
  {
    "altivec_stvebx",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "stvebx %1,%y0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_altivec_stvebx,
    &operand_data[1597],
    2,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1982 */
  {
    "*altivec_stvesfx",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "stvewx %1,%y0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1599],
    2,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:2195 */
  {
    "altivec_vsumsws_nomode",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vsumsws %0,%1,%2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_altivec_vsumsws_nomode,
    &operand_data[1601],
    3,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:2237 */
  {
    "vec_realign_load_v4si",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vperm %0,%1,%2,%3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_vec_realign_load_v4si,
    &operand_data[1518],
    4,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:2237 */
  {
    "vec_realign_load_v8hi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vperm %0,%1,%2,%3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_vec_realign_load_v8hi,
    &operand_data[1522],
    4,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:2237 */
  {
    "vec_realign_load_v16qi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vperm %0,%1,%2,%3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_vec_realign_load_v16qi,
    &operand_data[1526],
    4,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:2237 */
  {
    "vec_realign_load_v4sf",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vperm %0,%1,%2,%3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_vec_realign_load_v4sf,
    &operand_data[1530],
    4,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/darwin.md:172 */
  {
    "macho_high",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_macho_high,
    &operand_data[87],
    2,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/darwin.md:198 */
  {
    "macho_low",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_macho_low,
    &operand_data[1604],
    3,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/darwin.md:230 */
  {
    "macho_low+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1607],
    4,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/darwin.md:241 */
  {
    "load_macho_picbase",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_load_macho_picbase,
    &operand_data[87],
    2,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/darwin.md:275 */
  {
    "load_macho_picbase_label",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_load_macho_picbase_label,
    &operand_data[87],
    2,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/darwin.md:307 */
  {
    "macho_correct_pic",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_macho_correct_pic,
    &operand_data[1611],
    4,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:140 */
  {
    "zero_extendqidi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_zero_extendqidi2,
    &operand_data[1615],
    2,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:140 */
  {
    "zero_extendhidi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_zero_extendhidi2,
    &operand_data[1617],
    2,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:140 */
  {
    "zero_extendsidi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_zero_extendsidi2,
    &operand_data[1619],
    2,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:202 */
  {
    "zero_extendsidi2+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1621],
    3,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:202 */
  {
    "zero_extendsidi2+2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1624],
    3,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:202 */
  {
    "zero_extendsidi2+3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1627],
    3,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:228 */
  {
    "zero_extendsidi2+4",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1630],
    3,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:228 */
  {
    "extendhidi2-4",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1633],
    3,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:228 */
  {
    "extendhidi2-3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1619],
    3,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:260 */
  {
    "extendhidi2-2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1621],
    3,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:286 */
  {
    "extendhidi2-1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1630],
    3,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:300 */
  {
    "extendhidi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_extendhidi2,
    &operand_data[1617],
    2,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:327 */
  {
    "extendhidi2+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1624],
    3,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:353 */
  {
    "extendsidi2-1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1633],
    3,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:367 */
  {
    "extendsidi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_extendsidi2,
    &operand_data[1619],
    2,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:394 */
  {
    "extendsidi2+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1627],
    3,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:420 */
  {
    "zero_extendqisi2-1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1619],
    3,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:434 */
  {
    "zero_extendqisi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_zero_extendqisi2,
    &operand_data[1636],
    2,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:461 */
  {
    "zero_extendqisi2+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1638],
    3,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:487 */
  {
    "extendqisi2-1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1636],
    3,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:501 */
  {
    "extendqisi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_extendqisi2,
    &operand_data[1636],
    2,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:534 */
  {
    "extendqisi2+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1638],
    3,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:560 */
  {
    "extendqisi2_no_power-1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1636],
    3,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:588 */
  {
    "extendqisi2_no_power",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_extendqisi2_no_power,
    &operand_data[1636],
    2,
    2,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:600 */
  {
    "zero_extendqihi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_zero_extendqihi2,
    &operand_data[1641],
    2,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:627 */
  {
    "zero_extendqihi2+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1643],
    3,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:653 */
  {
    "extendqihi2-1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1641],
    3,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:667 */
  {
    "extendqihi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_extendqihi2,
    &operand_data[1641],
    2,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:700 */
  {
    "extendqihi2+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1643],
    3,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:726 */
  {
    "extendqihi2_no_power-1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1641],
    3,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:755 */
  {
    "extendqihi2_no_power",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_extendqihi2_no_power,
    &operand_data[1641],
    2,
    2,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:768 */
  {
    "zero_extendhisi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_zero_extendhisi2,
    &operand_data[1646],
    2,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:795 */
  {
    "zero_extendhisi2+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1648],
    3,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:821 */
  {
    "extendhisi2-1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1646],
    3,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:835 */
  {
    "extendhisi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_extendhisi2,
    &operand_data[1646],
    2,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:862 */
  {
    "extendhisi2+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1648],
    3,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:1365 */
  {
    "strlensi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_strlensi,
    &operand_data[1651],
    5,
    0,
    1,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:1419 */
  {
    "strlensi+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1646],
    3,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:1435 */
  {
    "addsi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_addsi3,
    &operand_data[1656],
    3,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:1435 */
  {
    "adddi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_adddi3,
    &operand_data[1659],
    3,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:1505 */
  {
    "adddi3+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1662],
    4,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:1505 */
  {
    "adddi3+2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1666],
    4,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:1537 */
  {
    "adddi3+3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1670],
    4,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:1537 */
  {
    "adddi3+4",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1674],
    4,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:1557 */
  {
    "adddi3+5",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1678],
    3,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:1557 */
  {
    "adddi3+6",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1681],
    3,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:1601 */
  {
    "adddi3+7",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1684],
    3,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:1601 */
  {
    "subsi3-7",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1687],
    3,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:1627 */
  {
    "subsi3-6",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1690],
    3,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:1627 */
  {
    "subsi3-5",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1693],
    3,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:1683 */
  {
    "subsi3-4",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1695],
    4,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:1683 */
  {
    "subsi3-3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1699],
    4,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:1727 */
  {
    "subsi3-2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1703],
    4,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:1727 */
  {
    "subsi3-1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1707],
    4,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:1744 */
  {
    "subsi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_subsi3,
    &operand_data[1711],
    3,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:1744 */
  {
    "subdi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_subdi3,
    &operand_data[1714],
    3,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:1964 */
  {
    "abssi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_abssi2,
    &operand_data[721],
    2,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:2007 */
  {
    "abssi2+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1696],
    3,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:2025 */
  {
    "negsi2-1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1696],
    3,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:2037 */
  {
    "negsi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_negsi2,
    &operand_data[721],
    2,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:2037 */
  {
    "negdi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_negdi2,
    &operand_data[1659],
    2,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:2061 */
  {
    "negdi2+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1684],
    3,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:2061 */
  {
    "negdi2+2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1687],
    3,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:2087 */
  {
    "ctzsi2-2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1690],
    3,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:2087 */
  {
    "ctzsi2-1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1693],
    3,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:2107 */
  {
    "ctzsi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_ctzsi2,
    &operand_data[51],
    2,
    8,
    1,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:2107 */
  {
    "ctzdi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_ctzdi2,
    &operand_data[55],
    2,
    8,
    1,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:2124 */
  {
    "ffssi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_ffssi2,
    &operand_data[51],
    2,
    8,
    1,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:2124 */
  {
    "ffsdi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_ffsdi2,
    &operand_data[55],
    2,
    8,
    1,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:2168 */
  {
    "mulsi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_mulsi3,
    &operand_data[1670],
    3,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:2256 */
  {
    "mulsi3+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1695],
    4,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:2316 */
  {
    "divmodsi4-1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1703],
    4,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:2335 */
  {
    "divmodsi4",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_divmodsi4,
    &operand_data[1717],
    4,
    2,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:2365 */
  {
    "udivsi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_udivsi3,
    &operand_data[721],
    3,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:2365 */
  {
    "udivdi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_udivdi3,
    &operand_data[1707],
    3,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:2408 */
  {
    "divsi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_divsi3,
    &operand_data[1721],
    3,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:2408 */
  {
    "divdi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_divdi3,
    &operand_data[1724],
    3,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:2457 */
  {
    "modsi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_modsi3,
    &operand_data[1721],
    3,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:2457 */
  {
    "moddi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_moddi3,
    &operand_data[1724],
    3,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:2504 */
  {
    "moddi3+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1727],
    4,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:2504 */
  {
    "moddi3+2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1731],
    4,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:2533 */
  {
    "udivmodsi4-2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1735],
    4,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:2533 */
  {
    "udivmodsi4-1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1739],
    4,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:2606 */
  {
    "udivmodsi4",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_udivmodsi4,
    &operand_data[1743],
    4,
    2,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:2782 */
  {
    "udivmodsi4+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1747],
    5,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:2782 */
  {
    "udivmodsi4+2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1752],
    5,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:2802 */
  {
    "udivmodsi4+3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1757],
    5,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:2863 */
  {
    "iorsi3-3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1762],
    5,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:2882 */
  {
    "iorsi3-2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1767],
    5,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:2903 */
  {
    "iorsi3-1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1772],
    3,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:2925 */
  {
    "iorsi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_iorsi3,
    &operand_data[1775],
    3,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:2946 */
  {
    "xorsi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_xorsi3,
    &operand_data[1775],
    3,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:2992 */
  {
    "xorsi3+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1778],
    5,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:3021 */
  {
    "xorsi3+2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1783],
    5,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:3039 */
  {
    "xorsi3+3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1788],
    4,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:3080 */
  {
    "xorsi3+4",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1778],
    5,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:3109 */
  {
    "insv-3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1783],
    5,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:3146 */
  {
    "insv-2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1778],
    5,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:3175 */
  {
    "insv-1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1783],
    5,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:3384 */
  {
    "insv",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_insv,
    &operand_data[1792],
    4,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:3599 */
  {
    "extzv",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_extzv,
    &operand_data[1795],
    4,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:3681 */
  {
    "extzv+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1799],
    5,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:3732 */
  {
    "extzv+2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1804],
    5,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:3832 */
  {
    "extzv+3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1808],
    4,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:3860 */
  {
    "extzv+4",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1812],
    4,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:3898 */
  {
    "extzv+5",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1815],
    5,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:3932 */
  {
    "ashlsi3-5",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1820],
    5,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:3973 */
  {
    "ashlsi3-4",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1808],
    4,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:4007 */
  {
    "ashlsi3-3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1812],
    4,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:4048 */
  {
    "ashlsi3-2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1808],
    4,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:4082 */
  {
    "ashlsi3-1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1812],
    4,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:4102 */
  {
    "ashlsi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_ashlsi3,
    &operand_data[1721],
    3,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:4178 */
  {
    "ashlsi3+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1808],
    4,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:4240 */
  {
    "ashlsi3+2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1812],
    4,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:4278 */
  {
    "lshrsi3-2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1824],
    5,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:4311 */
  {
    "lshrsi3-1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1829],
    5,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:4330 */
  {
    "lshrsi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_lshrsi3,
    &operand_data[1721],
    3,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:4413 */
  {
    "lshrsi3+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1808],
    4,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:4479 */
  {
    "lshrsi3+2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1812],
    4,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:4517 */
  {
    "lshrsi3+3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1824],
    5,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:4550 */
  {
    "lshrsi3+4",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1829],
    5,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:4592 */
  {
    "ashrsi3-4",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1833],
    4,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:4628 */
  {
    "ashrsi3-3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1837],
    4,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:4671 */
  {
    "ashrsi3-2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1833],
    4,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:4707 */
  {
    "ashrsi3-1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1837],
    4,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:4753 */
  {
    "ashrsi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_ashrsi3,
    &operand_data[1721],
    3,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:4829 */
  {
    "ashrsi3+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1808],
    4,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:4891 */
  {
    "extendsfdf2-1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1812],
    4,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:4922 */
  {
    "extendsfdf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_extendsfdf2,
    &operand_data[1841],
    2,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:4928 */
  {
    "extendsfdf2+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1843],
    2,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:4944 */
  {
    "truncdfsf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_truncdfsf2,
    &operand_data[1845],
    2,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:4964 */
  {
    "negsf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_negsf2,
    &operand_data[1847],
    2,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:4977 */
  {
    "abssf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_abssf2,
    &operand_data[1847],
    2,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:4997 */
  {
    "addsf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_addsf3,
    &operand_data[1847],
    3,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:5020 */
  {
    "subsf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_subsf3,
    &operand_data[1847],
    3,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:5043 */
  {
    "mulsf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_mulsf3,
    &operand_data[1847],
    3,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:5073 */
  {
    "divsf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_divsf3,
    &operand_data[1847],
    3,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:5217 */
  {
    "sqrtsf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sqrtsf2,
    &operand_data[1847],
    2,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:5237 */
  {
    "copysignsf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_copysignsf3,
    &operand_data[1847],
    3,
    6,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:5255 */
  {
    "copysigndf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_copysigndf3,
    &operand_data[1850],
    3,
    6,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:5277 */
  {
    "smaxsf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_smaxsf3,
    &operand_data[1847],
    3,
    2,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:5286 */
  {
    "sminsf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sminsf3,
    &operand_data[1847],
    3,
    2,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:5295 */
  {
    "sminsf3+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1853],
    4,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:5356 */
  {
    "movsfcc",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_movsfcc,
    &operand_data[1857],
    4,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:5390 */
  {
    "negdf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_negdf2,
    &operand_data[1850],
    2,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:5403 */
  {
    "absdf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_absdf2,
    &operand_data[1850],
    2,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:5423 */
  {
    "adddf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_adddf3,
    &operand_data[1850],
    3,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:5438 */
  {
    "subdf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_subdf3,
    &operand_data[1850],
    3,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:5453 */
  {
    "muldf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_muldf3,
    &operand_data[1850],
    3,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:5475 */
  {
    "divdf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_divdf3,
    &operand_data[1850],
    3,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:5565 */
  {
    "smaxdf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_smaxdf3,
    &operand_data[1850],
    3,
    2,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:5574 */
  {
    "smindf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_smindf3,
    &operand_data[1850],
    3,
    2,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:5583 */
  {
    "smindf3+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1861],
    4,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:5596 */
  {
    "movdfcc",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_movdfcc,
    &operand_data[1865],
    4,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:5649 */
  {
    "floatsidf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_floatsidf2,
    &operand_data[1868],
    2,
    5,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:5691 */
  {
    "floatsidf2+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1868],
    7,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:5731 */
  {
    "floatunssidf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_floatunssidf2,
    &operand_data[1868],
    2,
    4,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:5772 */
  {
    "floatunssidf2+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1868],
    6,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:5803 */
  {
    "fix_truncdfsi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_fix_truncdfsi2,
    &operand_data[1875],
    2,
    2,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:5837 */
  {
    "fix_truncdfsi2+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1877],
    4,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:5859 */
  {
    "fix_truncdfsi2+2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1881],
    3,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:5966 */
  {
    "floatdisf2-2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1884],
    5,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:5981 */
  {
    "floatdisf2-1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1884],
    5,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:6003 */
  {
    "floatdisf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_floatdisf2,
    &operand_data[1889],
    2,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:6024 */
  {
    "floatdisf2+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1889],
    3,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:6041 */
  {
    "floatdisf2_internal2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_floatdisf2_internal2,
    &operand_data[1892],
    3,
    16,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:6126 */
  {
    "mulsidi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_mulsidi3,
    &operand_data[1895],
    3,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:6180 */
  {
    "mulsidi3+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1895],
    3,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:6200 */
  {
    "umulsidi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_umulsidi3,
    &operand_data[1895],
    3,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:6243 */
  {
    "umulsidi3+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1895],
    3,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:6263 */
  {
    "smulsi3_highpart",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_smulsi3_highpart,
    &operand_data[1897],
    3,
    0,
    1,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:6314 */
  {
    "umulsi3_highpart",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_umulsi3_highpart,
    &operand_data[721],
    3,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:6427 */
  {
    "umulsi3_highpart+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1700],
    3,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:6439 */
  {
    "umulsi3_highpart+2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1700],
    3,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:6479 */
  {
    "umulsi3_highpart+3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1699],
    4,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:6507 */
  {
    "umulsi3_highpart+4",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1707],
    4,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:6566 */
  {
    "umulsi3_highpart+5",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1900],
    4,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:6594 */
  {
    "umulsi3_highpart+6",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1724],
    4,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:6632 */
  {
    "umulsi3_highpart+7",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1904],
    5,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:6666 */
  {
    "ashldi3-7",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1909],
    5,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:6707 */
  {
    "ashldi3-6",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1900],
    4,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:6741 */
  {
    "ashldi3-5",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1724],
    4,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:6782 */
  {
    "ashldi3-4",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1900],
    4,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:6816 */
  {
    "ashldi3-3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1724],
    4,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:6857 */
  {
    "ashldi3-2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1900],
    4,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:6891 */
  {
    "ashldi3-1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1724],
    4,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:6908 */
  {
    "ashldi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_ashldi3,
    &operand_data[1914],
    3,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:6946 */
  {
    "ashldi3+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1917],
    4,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:6974 */
  {
    "ashldi3+2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1914],
    4,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:7012 */
  {
    "ashldi3+3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1921],
    5,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:7046 */
  {
    "lshrdi3-3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1926],
    5,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:7088 */
  {
    "lshrdi3-2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1930],
    5,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:7122 */
  {
    "lshrdi3-1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1935],
    5,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:7141 */
  {
    "lshrdi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_lshrdi3,
    &operand_data[1914],
    3,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:7179 */
  {
    "lshrdi3+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1917],
    4,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:7207 */
  {
    "ashrdi3-1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1914],
    4,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:7222 */
  {
    "ashrdi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_ashrdi3,
    &operand_data[1914],
    3,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:7266 */
  {
    "ashrdi3+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1917],
    4,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:7294 */
  {
    "ashrdi3+2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1914],
    4,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:7325 */
  {
    "ashrdi3+3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1940],
    4,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:7370 */
  {
    "iordi3-3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1944],
    5,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:7421 */
  {
    "iordi3-2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1949],
    5,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:7438 */
  {
    "iordi3-1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1954],
    5,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:7468 */
  {
    "iordi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_iordi3,
    &operand_data[1959],
    3,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:7501 */
  {
    "xordi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_xordi3,
    &operand_data[1959],
    3,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:7559 */
  {
    "xordi3+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1962],
    5,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:7588 */
  {
    "xordi3+2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1967],
    5,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:7606 */
  {
    "xordi3+3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1972],
    4,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:7659 */
  {
    "xordi3+4",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1962],
    5,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:7688 */
  {
    "xordi3+5",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1967],
    5,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:7725 */
  {
    "movqi-5",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1962],
    5,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:7754 */
  {
    "movqi-4",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1967],
    5,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:7861 */
  {
    "movqi-3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1800],
    2,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:7893 */
  {
    "movqi-2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1690],
    3,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:7893 */
  {
    "movqi-1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1693],
    3,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:7921 */
  {
    "movqi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_movqi,
    &operand_data[1976],
    2,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:7921 */
  {
    "movhi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_movhi,
    &operand_data[1978],
    2,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:7921 */
  {
    "movsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_movsi,
    &operand_data[1980],
    2,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:7921 */
  {
    "movdi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_movdi,
    &operand_data[1982],
    2,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:7921 */
  {
    "movti",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_movti,
    &operand_data[1984],
    2,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:7946 */
  {
    "movcc",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_movcc,
    &operand_data[1986],
    2,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:7997 */
  {
    "movsf",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_movsf,
    &operand_data[1988],
    2,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:8003 */
  {
    "movsf+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1990],
    2,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:8073 */
  {
    "movdf",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_movdf,
    &operand_data[1992],
    2,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:8079 */
  {
    "movdf+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1994],
    2,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:8104 */
  {
    "movdf+2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1996],
    2,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:8129 */
  {
    "movtf-1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1996],
    2,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:8345 */
  {
    "movtf",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_movtf,
    &operand_data[1998],
    2,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:8354 */
  {
    "movtf+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2000],
    2,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:8367 */
  {
    "extenddftf2-1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2000],
    2,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:8380 */
  {
    "extenddftf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_extenddftf2,
    &operand_data[2002],
    2,
    1,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:8393 */
  {
    "extenddftf2+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2002],
    3,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:8412 */
  {
    "extendsftf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_extendsftf2,
    &operand_data[2005],
    2,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:8424 */
  {
    "trunctfdf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_trunctfdf2,
    &operand_data[2007],
    2,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:8431 */
  {
    "trunctfdf2+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2007],
    2,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:8455 */
  {
    "floatsitf2-1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2009],
    3,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:8469 */
  {
    "floatsitf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_floatsitf2,
    &operand_data[2012],
    2,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:8493 */
  {
    "fix_trunctfsi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_fix_trunctfsi2,
    &operand_data[2013],
    2,
    4,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:8510 */
  {
    "fix_trunctfsi2+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2013],
    6,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:8550 */
  {
    "abstf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_abstf2,
    &operand_data[709],
    2,
    0,
    1,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:8563 */
  {
    "abstf2_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_abstf2_internal,
    &operand_data[2019],
    3,
    10,
    1,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:8606 */
  {
    "abstf2_internal+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2022],
    2,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:8627 */
  {
    "abstf2_internal+2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2024],
    2,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:8678 */
  {
    "abstf2_internal+3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2026],
    2,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:8693 */
  {
    "abstf2_internal+4",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2022],
    2,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:8708 */
  {
    "load_multiple-3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2028],
    2,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:8805 */
  {
    "load_multiple-2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2030],
    2,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:8831 */
  {
    "load_multiple-1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2032],
    2,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:8839 */
  {
    "load_multiple",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_load_multiple,
    &operand_data[2034],
    3,
    1,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:8989 */
  {
    "store_multiple",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_store_multiple,
    &operand_data[2034],
    3,
    1,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:9249 */
  {
    "setmemsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_setmemsi,
    &operand_data[2037],
    4,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:9273 */
  {
    "movmemsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_movmemsi,
    &operand_data[2041],
    4,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:9290 */
  {
    "movmemsi_8reg",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_movmemsi_8reg,
    &operand_data[2045],
    5,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:9358 */
  {
    "movmemsi_6reg",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_movmemsi_6reg,
    &operand_data[2045],
    5,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:9418 */
  {
    "movmemsi_4reg",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_movmemsi_4reg,
    &operand_data[2045],
    5,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:9470 */
  {
    "movmemsi_2reg",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_movmemsi_2reg,
    &operand_data[2050],
    6,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:9507 */
  {
    "movmemsi_1reg",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_movmemsi_1reg,
    &operand_data[2056],
    6,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:9779 */
  {
    "movmemsi_1reg+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2062],
    4,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:9801 */
  {
    "movmemsi_1reg+2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2063],
    4,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:9822 */
  {
    "allocate_stack-2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2066],
    3,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:9831 */
  {
    "allocate_stack-1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2069],
    3,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:10025 */
  {
    "allocate_stack",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_allocate_stack,
    &operand_data[2072],
    2,
    1,
    1,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:10085 */
  {
    "save_stack_function",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_save_stack_function,
    &operand_data[2074],
    2,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:10091 */
  {
    "restore_stack_function",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_restore_stack_function,
    &operand_data[2074],
    2,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:10100 */
  {
    "restore_stack_block",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_restore_stack_block,
    &operand_data[2076],
    2,
    6,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:10115 */
  {
    "save_stack_nonlocal",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_save_stack_nonlocal,
    &operand_data[2078],
    2,
    4,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:10131 */
  {
    "restore_stack_nonlocal",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_restore_stack_nonlocal,
    &operand_data[2077],
    2,
    8,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:10250 */
  {
    "builtin_setjmp_receiver",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_builtin_setjmp_receiver,
    &operand_data[3],
    1,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:10304 */
  {
    "call_indirect_aix32",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_call_indirect_aix32,
    &operand_data[2080],
    2,
    4,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:10326 */
  {
    "call_indirect_aix64",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_call_indirect_aix64,
    &operand_data[1610],
    2,
    4,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:10348 */
  {
    "call_value_indirect_aix32",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_call_value_indirect_aix32,
    &operand_data[2081],
    3,
    4,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:10371 */
  {
    "call_value_indirect_aix64",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_call_value_indirect_aix64,
    &operand_data[2083],
    3,
    4,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:10395 */
  {
    "call",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_call,
    &operand_data[2086],
    3,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:10464 */
  {
    "call_value",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_call_value,
    &operand_data[2085],
    4,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:10886 */
  {
    "untyped_call",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_untyped_call,
    &operand_data[1604],
    3,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:11005 */
  {
    "sibcall",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sibcall,
    &operand_data[2086],
    4,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:11198 */
  {
    "sibcall_value",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sibcall_value,
    &operand_data[2090],
    5,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:11252 */
  {
    "sibcall_epilogue",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sibcall_epilogue,
    &operand_data[0],
    0,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:11275 */
  {
    "cmpsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_cmpsi,
    &operand_data[1663],
    2,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:11275 */
  {
    "cmpdi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_cmpdi,
    &operand_data[1667],
    2,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:11294 */
  {
    "cmpsf",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_cmpsf,
    &operand_data[1847],
    2,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:11294 */
  {
    "cmpdf",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_cmpdf,
    &operand_data[1850],
    2,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:11294 */
  {
    "cmptf",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_cmptf,
    &operand_data[2095],
    2,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:11306 */
  {
    "beq",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_beq,
    &operand_data[3],
    1,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:11311 */
  {
    "bne",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_bne,
    &operand_data[3],
    1,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:11316 */
  {
    "bge",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_bge,
    &operand_data[3],
    1,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:11321 */
  {
    "bgt",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_bgt,
    &operand_data[3],
    1,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:11326 */
  {
    "ble",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_ble,
    &operand_data[3],
    1,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:11331 */
  {
    "blt",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_blt,
    &operand_data[3],
    1,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:11336 */
  {
    "bgeu",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_bgeu,
    &operand_data[3],
    1,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:11341 */
  {
    "bgtu",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_bgtu,
    &operand_data[3],
    1,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:11346 */
  {
    "bleu",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_bleu,
    &operand_data[3],
    1,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:11351 */
  {
    "bltu",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_bltu,
    &operand_data[3],
    1,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:11356 */
  {
    "bunordered",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_bunordered,
    &operand_data[3],
    1,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:11361 */
  {
    "bordered",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_bordered,
    &operand_data[3],
    1,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:11366 */
  {
    "buneq",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_buneq,
    &operand_data[3],
    1,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:11371 */
  {
    "bunge",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_bunge,
    &operand_data[3],
    1,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:11376 */
  {
    "bungt",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_bungt,
    &operand_data[3],
    1,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:11381 */
  {
    "bunle",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_bunle,
    &operand_data[3],
    1,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:11386 */
  {
    "bunlt",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_bunlt,
    &operand_data[3],
    1,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:11391 */
  {
    "bltgt",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_bltgt,
    &operand_data[3],
    1,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:11401 */
  {
    "seq",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_seq,
    &operand_data[721],
    1,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:11406 */
  {
    "sne",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sne,
    &operand_data[721],
    1,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:11419 */
  {
    "sge",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sge,
    &operand_data[721],
    1,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:11432 */
  {
    "sgt",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sgt,
    &operand_data[721],
    1,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:11445 */
  {
    "sle",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sle,
    &operand_data[721],
    1,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:11458 */
  {
    "slt",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_slt,
    &operand_data[721],
    1,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:11470 */
  {
    "sgeu",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sgeu,
    &operand_data[721],
    1,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:11475 */
  {
    "sgtu",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sgtu,
    &operand_data[721],
    1,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:11480 */
  {
    "sleu",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sleu,
    &operand_data[721],
    1,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:11485 */
  {
    "sltu",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sltu,
    &operand_data[721],
    1,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:11490 */
  {
    "sunordered",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sunordered,
    &operand_data[721],
    1,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:11495 */
  {
    "sordered",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sordered,
    &operand_data[721],
    1,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:11500 */
  {
    "suneq",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_suneq,
    &operand_data[721],
    1,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:11505 */
  {
    "sunge",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sunge,
    &operand_data[721],
    1,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:11510 */
  {
    "sungt",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sungt,
    &operand_data[721],
    1,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:11515 */
  {
    "sunle",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sunle,
    &operand_data[721],
    1,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:11520 */
  {
    "sunlt",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sunlt,
    &operand_data[721],
    1,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:11525 */
  {
    "sltgt",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sltgt,
    &operand_data[721],
    1,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:11530 */
  {
    "stack_protect_set",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_stack_protect_set,
    &operand_data[2097],
    2,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:11565 */
  {
    "stack_protect_test",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_stack_protect_test,
    &operand_data[2097],
    3,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:11628 */
  {
    "stack_protect_test+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2100],
    9,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:11704 */
  {
    "stack_protect_test+2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2109],
    5,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:11714 */
  {
    "stack_protect_test+3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2114],
    5,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:11751 */
  {
    "stack_protect_test+4",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2119],
    11,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:11878 */
  {
    "stack_protect_test+5",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2130],
    4,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:11959 */
  {
    "stack_protect_test+6",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2134],
    5,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:11982 */
  {
    "stack_protect_test+7",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mfcr %3\n\t{rlinm|rlwinm} %0,%3,%J1,1\n\t{rlinm|rlwinm} %3,%3,%J4,1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2139],
    6,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:11996 */
  {
    "stack_protect_test+8",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mfcr %3\n\t{rlinm|rlwinm} %0,%3,%J1,1\n\t{rlinm|rlwinm} %3,%3,%J4,1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[2145],
    6,
    0,
    1,
    1
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:12024 */
  {
    "stack_protect_test+9",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2151],
    3,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:12024 */
  {
    "stack_protect_test+10",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2154],
    3,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:12060 */
  {
    "stack_protect_test+11",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2157],
    4,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:12060 */
  {
    "stack_protect_test+12",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2161],
    4,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:12117 */
  {
    "stack_protect_test+13",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2165],
    6,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:12169 */
  {
    "stack_protect_test+14",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2171],
    5,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:12213 */
  {
    "stack_protect_test+15",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2176],
    5,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:12240 */
  {
    "stack_protect_test+16",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2151],
    3,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:12240 */
  {
    "stack_protect_test+17",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2154],
    3,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:12332 */
  {
    "stack_protect_test+18",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2180],
    5,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:12369 */
  {
    "stack_protect_test+19",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1699],
    4,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:12407 */
  {
    "stack_protect_test+20",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2185],
    5,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:12448 */
  {
    "stack_protect_test+21",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2190],
    5,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:12631 */
  {
    "stack_protect_test+22",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1670],
    4,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:12631 */
  {
    "stack_protect_test+23",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1674],
    4,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:12672 */
  {
    "stack_protect_test+24",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2194],
    5,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:12705 */
  {
    "stack_protect_test+25",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2199],
    5,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:12758 */
  {
    "stack_protect_test+26",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2194],
    5,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:12793 */
  {
    "stack_protect_test+27",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2199],
    5,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:12933 */
  {
    "indirect_jump-27",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2204],
    3,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:12933 */
  {
    "indirect_jump-26",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2207],
    3,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:12944 */
  {
    "indirect_jump-25",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2210],
    4,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:12944 */
  {
    "indirect_jump-24",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2214],
    4,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:12961 */
  {
    "indirect_jump-23",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2218],
    4,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:12961 */
  {
    "indirect_jump-22",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2222],
    4,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:12973 */
  {
    "indirect_jump-21",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2226],
    5,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:12973 */
  {
    "indirect_jump-20",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2231],
    5,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:13156 */
  {
    "indirect_jump-19",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2236],
    4,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:13156 */
  {
    "indirect_jump-18",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2240],
    4,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:13201 */
  {
    "indirect_jump-17",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2243],
    5,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:13236 */
  {
    "indirect_jump-16",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2248],
    5,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:13295 */
  {
    "indirect_jump-15",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2243],
    5,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:13332 */
  {
    "indirect_jump-14",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2248],
    5,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:13414 */
  {
    "indirect_jump-13",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1695],
    4,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:13446 */
  {
    "indirect_jump-12",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1699],
    4,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:13479 */
  {
    "indirect_jump-11",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1703],
    4,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:13512 */
  {
    "indirect_jump-10",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1707],
    4,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:13610 */
  {
    "indirect_jump-9",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1670],
    3,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:13610 */
  {
    "indirect_jump-8",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1674],
    3,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:13621 */
  {
    "indirect_jump-7",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2253],
    4,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:13621 */
  {
    "indirect_jump-6",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2257],
    4,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:13638 */
  {
    "indirect_jump-5",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2261],
    4,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:13638 */
  {
    "indirect_jump-4",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2265],
    4,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:13650 */
  {
    "indirect_jump-3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2269],
    5,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:13650 */
  {
    "indirect_jump-2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2274],
    5,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:13807 */
  {
    "indirect_jump-1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2279],
    5,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:13881 */
  {
    "indirect_jump",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_indirect_jump,
    &operand_data[2076],
    1,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:13893 */
  {
    "tablejump",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_tablejump,
    &operand_data[87],
    2,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:13906 */
  {
    "tablejumpsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_tablejumpsi,
    &operand_data[2044],
    2,
    3,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:13919 */
  {
    "tablejumpdi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_tablejumpdi,
    &operand_data[2284],
    2,
    5,
    1,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:13952 */
  {
    "doloop_end",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_doloop_end,
    &operand_data[2285],
    5,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:13979 */
  {
    "ctrsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_ctrsi,
    &operand_data[2290],
    4,
    2,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:13979 */
  {
    "ctrdi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_ctrdi,
    &operand_data[2294],
    4,
    2,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:14099 */
  {
    "ctrdi+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2298],
    7,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:14099 */
  {
    "ctrdi+2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2305],
    7,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:14125 */
  {
    "conditional_trap-2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2312],
    7,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:14125 */
  {
    "conditional_trap-1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2319],
    7,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:14158 */
  {
    "conditional_trap",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_conditional_trap,
    &operand_data[2326],
    2,
    2,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:14177 */
  {
    "prologue",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_prologue,
    &operand_data[0],
    0,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:14274 */
  {
    "epilogue",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_epilogue,
    &operand_data[0],
    0,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:14287 */
  {
    "movsi_to_cr_one",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_movsi_to_cr_one,
    &operand_data[925],
    2,
    1,
    1,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:14374 */
  {
    "eh_return",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_eh_return,
    &operand_data[2328],
    1,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/rs6000.md:14394 */
  {
    "eh_return+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2329],
    2,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:22 */
  {
    "memory_barrier",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_memory_barrier,
    &operand_data[0],
    0,
    2,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:69 */
  {
    "memory_barrier+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2331],
    6,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:69 */
  {
    "sync_compare_and_swaphi-1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2337],
    6,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:89 */
  {
    "sync_compare_and_swaphi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sync_compare_and_swaphi,
    &operand_data[2343],
    4,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:101 */
  {
    "sync_compare_and_swapqi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sync_compare_and_swapqi,
    &operand_data[2347],
    4,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:113 */
  {
    "sync_compare_and_swapqi+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2351],
    7,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:135 */
  {
    "sync_compare_and_swapqi+2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2358],
    5,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:135 */
  {
    "sync_addqi-1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2363],
    5,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:154 */
  {
    "sync_addqi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sync_addqi,
    &operand_data[2368],
    2,
    1,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:154 */
  {
    "sync_subqi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sync_subqi,
    &operand_data[2348],
    2,
    1,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:154 */
  {
    "sync_iorqi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sync_iorqi,
    &operand_data[2370],
    2,
    1,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:154 */
  {
    "sync_xorqi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sync_xorqi,
    &operand_data[2370],
    2,
    1,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:154 */
  {
    "sync_andqi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sync_andqi,
    &operand_data[2372],
    2,
    1,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:154 */
  {
    "sync_addhi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sync_addhi,
    &operand_data[2374],
    2,
    1,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:154 */
  {
    "sync_subhi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sync_subhi,
    &operand_data[2344],
    2,
    1,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:154 */
  {
    "sync_iorhi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sync_iorhi,
    &operand_data[2376],
    2,
    1,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:154 */
  {
    "sync_xorhi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sync_xorhi,
    &operand_data[2376],
    2,
    1,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:154 */
  {
    "sync_andhi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sync_andhi,
    &operand_data[2378],
    2,
    1,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:154 */
  {
    "sync_addsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sync_addsi,
    &operand_data[2380],
    2,
    1,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:154 */
  {
    "sync_subsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sync_subsi,
    &operand_data[2382],
    2,
    1,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:154 */
  {
    "sync_iorsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sync_iorsi,
    &operand_data[2384],
    2,
    1,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:154 */
  {
    "sync_xorsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sync_xorsi,
    &operand_data[2384],
    2,
    1,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:154 */
  {
    "sync_andsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sync_andsi,
    &operand_data[2386],
    2,
    1,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:154 */
  {
    "sync_adddi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sync_adddi,
    &operand_data[2388],
    2,
    1,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:154 */
  {
    "sync_subdi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sync_subdi,
    &operand_data[1886],
    2,
    1,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:154 */
  {
    "sync_iordi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sync_iordi,
    &operand_data[2390],
    2,
    1,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:154 */
  {
    "sync_xordi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sync_xordi,
    &operand_data[2390],
    2,
    1,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:154 */
  {
    "sync_anddi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sync_anddi,
    &operand_data[2392],
    2,
    1,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:175 */
  {
    "sync_anddi+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2394],
    4,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:175 */
  {
    "sync_anddi+2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2398],
    4,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:175 */
  {
    "sync_anddi+3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2402],
    4,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:175 */
  {
    "sync_anddi+4",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2402],
    4,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:175 */
  {
    "sync_anddi+5",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2406],
    4,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:193 */
  {
    "sync_nandqi-5",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2410],
    4,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:193 */
  {
    "sync_nandqi-4",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2414],
    4,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:193 */
  {
    "sync_nandqi-3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2418],
    4,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:193 */
  {
    "sync_nandqi-2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2418],
    4,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:193 */
  {
    "sync_nandqi-1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2422],
    4,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:211 */
  {
    "sync_nandqi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sync_nandqi,
    &operand_data[2348],
    2,
    1,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:211 */
  {
    "sync_nandhi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sync_nandhi,
    &operand_data[2344],
    2,
    1,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:211 */
  {
    "sync_nandsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sync_nandsi,
    &operand_data[2382],
    2,
    1,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:211 */
  {
    "sync_nanddi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sync_nanddi,
    &operand_data[1886],
    2,
    1,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:234 */
  {
    "sync_nanddi+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2398],
    4,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:234 */
  {
    "sync_old_addqi-1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2414],
    4,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:252 */
  {
    "sync_old_addqi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sync_old_addqi,
    &operand_data[2426],
    3,
    2,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:252 */
  {
    "sync_old_subqi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sync_old_subqi,
    &operand_data[2347],
    3,
    2,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:252 */
  {
    "sync_old_iorqi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sync_old_iorqi,
    &operand_data[2429],
    3,
    2,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:252 */
  {
    "sync_old_xorqi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sync_old_xorqi,
    &operand_data[2429],
    3,
    2,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:252 */
  {
    "sync_old_andqi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sync_old_andqi,
    &operand_data[2432],
    3,
    2,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:252 */
  {
    "sync_old_addhi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sync_old_addhi,
    &operand_data[2435],
    3,
    2,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:252 */
  {
    "sync_old_subhi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sync_old_subhi,
    &operand_data[2343],
    3,
    2,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:252 */
  {
    "sync_old_iorhi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sync_old_iorhi,
    &operand_data[2438],
    3,
    2,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:252 */
  {
    "sync_old_xorhi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sync_old_xorhi,
    &operand_data[2438],
    3,
    2,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:252 */
  {
    "sync_old_andhi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sync_old_andhi,
    &operand_data[2441],
    3,
    2,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:252 */
  {
    "sync_old_addsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sync_old_addsi,
    &operand_data[2444],
    3,
    2,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:252 */
  {
    "sync_old_subsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sync_old_subsi,
    &operand_data[2447],
    3,
    2,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:252 */
  {
    "sync_old_iorsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sync_old_iorsi,
    &operand_data[2383],
    3,
    2,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:252 */
  {
    "sync_old_xorsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sync_old_xorsi,
    &operand_data[2383],
    3,
    2,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:252 */
  {
    "sync_old_andsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sync_old_andsi,
    &operand_data[2449],
    3,
    2,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:252 */
  {
    "sync_old_adddi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sync_old_adddi,
    &operand_data[2452],
    3,
    2,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:252 */
  {
    "sync_old_subdi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sync_old_subdi,
    &operand_data[2455],
    3,
    2,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:252 */
  {
    "sync_old_iordi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sync_old_iordi,
    &operand_data[2457],
    3,
    2,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:252 */
  {
    "sync_old_xordi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sync_old_xordi,
    &operand_data[2457],
    3,
    2,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:252 */
  {
    "sync_old_anddi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sync_old_anddi,
    &operand_data[2460],
    3,
    2,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:275 */
  {
    "sync_old_anddi+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2463],
    5,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:275 */
  {
    "sync_old_anddi+2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2468],
    5,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:275 */
  {
    "sync_old_anddi+3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2473],
    5,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:275 */
  {
    "sync_old_anddi+4",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2473],
    5,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:275 */
  {
    "sync_old_anddi+5",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2478],
    5,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:295 */
  {
    "sync_old_nandqi-5",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2483],
    5,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:295 */
  {
    "sync_old_nandqi-4",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2488],
    5,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:295 */
  {
    "sync_old_nandqi-3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2493],
    5,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:295 */
  {
    "sync_old_nandqi-2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2493],
    5,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:295 */
  {
    "sync_old_nandqi-1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2498],
    5,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:315 */
  {
    "sync_old_nandqi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sync_old_nandqi,
    &operand_data[2347],
    3,
    2,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:315 */
  {
    "sync_old_nandhi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sync_old_nandhi,
    &operand_data[2343],
    3,
    2,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:315 */
  {
    "sync_old_nandsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sync_old_nandsi,
    &operand_data[2447],
    3,
    2,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:315 */
  {
    "sync_old_nanddi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sync_old_nanddi,
    &operand_data[2455],
    3,
    2,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:340 */
  {
    "sync_old_nanddi+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2468],
    5,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:340 */
  {
    "sync_new_addqi-1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2488],
    5,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:360 */
  {
    "sync_new_addqi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sync_new_addqi,
    &operand_data[2426],
    3,
    3,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:360 */
  {
    "sync_new_subqi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sync_new_subqi,
    &operand_data[2347],
    3,
    3,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:360 */
  {
    "sync_new_iorqi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sync_new_iorqi,
    &operand_data[2429],
    3,
    3,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:360 */
  {
    "sync_new_xorqi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sync_new_xorqi,
    &operand_data[2429],
    3,
    3,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:360 */
  {
    "sync_new_andqi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sync_new_andqi,
    &operand_data[2432],
    3,
    3,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:360 */
  {
    "sync_new_addhi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sync_new_addhi,
    &operand_data[2435],
    3,
    3,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:360 */
  {
    "sync_new_subhi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sync_new_subhi,
    &operand_data[2343],
    3,
    3,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:360 */
  {
    "sync_new_iorhi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sync_new_iorhi,
    &operand_data[2438],
    3,
    3,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:360 */
  {
    "sync_new_xorhi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sync_new_xorhi,
    &operand_data[2438],
    3,
    3,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:360 */
  {
    "sync_new_andhi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sync_new_andhi,
    &operand_data[2441],
    3,
    3,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:360 */
  {
    "sync_new_addsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sync_new_addsi,
    &operand_data[2444],
    3,
    3,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:360 */
  {
    "sync_new_subsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sync_new_subsi,
    &operand_data[2447],
    3,
    3,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:360 */
  {
    "sync_new_iorsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sync_new_iorsi,
    &operand_data[2383],
    3,
    3,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:360 */
  {
    "sync_new_xorsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sync_new_xorsi,
    &operand_data[2383],
    3,
    3,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:360 */
  {
    "sync_new_andsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sync_new_andsi,
    &operand_data[2449],
    3,
    3,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:360 */
  {
    "sync_new_adddi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sync_new_adddi,
    &operand_data[2452],
    3,
    3,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:360 */
  {
    "sync_new_subdi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sync_new_subdi,
    &operand_data[2455],
    3,
    3,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:360 */
  {
    "sync_new_iordi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sync_new_iordi,
    &operand_data[2457],
    3,
    3,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:360 */
  {
    "sync_new_xordi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sync_new_xordi,
    &operand_data[2457],
    3,
    3,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:360 */
  {
    "sync_new_anddi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sync_new_anddi,
    &operand_data[2460],
    3,
    3,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:384 */
  {
    "sync_new_anddi+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2463],
    5,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:384 */
  {
    "sync_new_anddi+2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2468],
    5,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:384 */
  {
    "sync_new_anddi+3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2473],
    5,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:384 */
  {
    "sync_new_anddi+4",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2473],
    5,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:384 */
  {
    "sync_new_anddi+5",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2478],
    5,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:405 */
  {
    "sync_new_nandqi-5",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2483],
    5,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:405 */
  {
    "sync_new_nandqi-4",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2488],
    5,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:405 */
  {
    "sync_new_nandqi-3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2493],
    5,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:405 */
  {
    "sync_new_nandqi-2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2493],
    5,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:405 */
  {
    "sync_new_nandqi-1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2498],
    5,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:426 */
  {
    "sync_new_nandqi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sync_new_nandqi,
    &operand_data[2347],
    3,
    3,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:426 */
  {
    "sync_new_nandhi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sync_new_nandhi,
    &operand_data[2343],
    3,
    3,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:426 */
  {
    "sync_new_nandsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sync_new_nandsi,
    &operand_data[2447],
    3,
    3,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:426 */
  {
    "sync_new_nanddi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sync_new_nanddi,
    &operand_data[2455],
    3,
    3,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:452 */
  {
    "sync_new_nanddi+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2468],
    5,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:452 */
  {
    "sync_lock_releaseqi-1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2488],
    5,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:602 */
  {
    "sync_lock_releaseqi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sync_lock_releaseqi,
    &operand_data[2503],
    2,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:602 */
  {
    "sync_lock_releasehi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sync_lock_releasehi,
    &operand_data[2505],
    2,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:602 */
  {
    "sync_lock_releasesi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sync_lock_releasesi,
    &operand_data[2507],
    2,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:602 */
  {
    "sync_lock_releasedi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sync_lock_releasedi,
    &operand_data[2509],
    2,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/sync.md:602 */
  {
    "sync_lock_releaseti",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sync_lock_releaseti,
    &operand_data[2511],
    2,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:165 */
  {
    "movv4si",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_movv4si,
    &operand_data[2513],
    2,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:165 */
  {
    "movv8hi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_movv8hi,
    &operand_data[2515],
    2,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:165 */
  {
    "movv16qi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_movv16qi,
    &operand_data[2517],
    2,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:165 */
  {
    "movv4sf",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_movv4sf,
    &operand_data[2519],
    2,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:195 */
  {
    "movv4sf+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2521],
    2,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:205 */
  {
    "movv4sf+2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2523],
    2,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:213 */
  {
    "movv4sf+3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2525],
    2,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:221 */
  {
    "movv4sf+4",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2527],
    2,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:231 */
  {
    "mulv4sf3-3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2529],
    2,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:231 */
  {
    "mulv4sf3-2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2531],
    2,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:231 */
  {
    "mulv4sf3-1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[2533],
    2,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:540 */
  {
    "mulv4sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_mulv4sf3,
    &operand_data[2535],
    3,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:571 */
  {
    "mulv4si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_mulv4si3,
    &operand_data[2538],
    3,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1423 */
  {
    "vcondv4si",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_vcondv4si,
    &operand_data[2541],
    6,
    0,
    1,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1442 */
  {
    "vconduv4si",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_vconduv4si,
    &operand_data[2541],
    6,
    0,
    1,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1461 */
  {
    "vcondv4sf",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_vcondv4sf,
    &operand_data[2547],
    6,
    0,
    1,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1480 */
  {
    "vcondv8hi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_vcondv8hi,
    &operand_data[2553],
    6,
    0,
    1,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1499 */
  {
    "vconduv8hi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_vconduv8hi,
    &operand_data[2553],
    6,
    0,
    1,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1518 */
  {
    "vcondv16qi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_vcondv16qi,
    &operand_data[2559],
    6,
    0,
    1,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1537 */
  {
    "vconduv16qi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_vconduv16qi,
    &operand_data[2559],
    6,
    0,
    1,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1657 */
  {
    "cr6_test_for_zero",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_cr6_test_for_zero,
    &operand_data[1444],
    1,
    0,
    1,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1664 */
  {
    "cr6_test_for_zero_reverse",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_cr6_test_for_zero_reverse,
    &operand_data[1444],
    1,
    2,
    1,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1672 */
  {
    "cr6_test_for_lt",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_cr6_test_for_lt,
    &operand_data[1444],
    1,
    0,
    1,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1679 */
  {
    "cr6_test_for_lt_reverse",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_cr6_test_for_lt_reverse,
    &operand_data[1444],
    1,
    2,
    1,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1897 */
  {
    "build_vector_mask_for_load",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_build_vector_mask_for_load,
    &operand_data[2565],
    2,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1992 */
  {
    "vec_initv4si",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_vec_initv4si,
    &operand_data[2567],
    2,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1992 */
  {
    "vec_initv8hi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_vec_initv8hi,
    &operand_data[2569],
    2,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1992 */
  {
    "vec_initv16qi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_vec_initv16qi,
    &operand_data[2571],
    2,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:1992 */
  {
    "vec_initv4sf",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_vec_initv4sf,
    &operand_data[2573],
    2,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:2001 */
  {
    "vec_setv4si",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_vec_setv4si,
    &operand_data[2575],
    3,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:2011 */
  {
    "vec_setv8hi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_vec_setv8hi,
    &operand_data[2578],
    3,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:2021 */
  {
    "vec_setv16qi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_vec_setv16qi,
    &operand_data[2581],
    3,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:2031 */
  {
    "vec_setv4sf",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_vec_setv4sf,
    &operand_data[2584],
    3,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:2041 */
  {
    "vec_extractv4si",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_vec_extractv4si,
    &operand_data[2587],
    3,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:2051 */
  {
    "vec_extractv8hi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_vec_extractv8hi,
    &operand_data[2590],
    3,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:2061 */
  {
    "vec_extractv16qi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_vec_extractv16qi,
    &operand_data[2593],
    3,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:2071 */
  {
    "vec_extractv4sf",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_vec_extractv4sf,
    &operand_data[2596],
    3,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:2085 */
  {
    "absv4si2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_absv4si2,
    &operand_data[1454],
    2,
    5,
    1,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:2085 */
  {
    "absv8hi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_absv8hi2,
    &operand_data[1457],
    2,
    5,
    1,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:2085 */
  {
    "absv16qi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_absv16qi2,
    &operand_data[1460],
    2,
    5,
    1,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:2102 */
  {
    "absv4sf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_absv4sf2,
    &operand_data[1463],
    2,
    5,
    1,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:2120 */
  {
    "altivec_abss_v4si",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_altivec_abss_v4si,
    &operand_data[1454],
    2,
    5,
    1,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:2120 */
  {
    "altivec_abss_v8hi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_altivec_abss_v8hi,
    &operand_data[1457],
    2,
    5,
    1,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:2120 */
  {
    "altivec_abss_v16qi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_altivec_abss_v16qi,
    &operand_data[1460],
    2,
    5,
    1,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:2140 */
  {
    "vec_shl_v4si",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_vec_shl_v4si,
    &operand_data[2599],
    3,
    0,
    1,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:2140 */
  {
    "vec_shl_v8hi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_vec_shl_v8hi,
    &operand_data[2602],
    3,
    0,
    1,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:2140 */
  {
    "vec_shl_v16qi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_vec_shl_v16qi,
    &operand_data[2605],
    3,
    0,
    1,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:2140 */
  {
    "vec_shl_v4sf",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_vec_shl_v4sf,
    &operand_data[2608],
    3,
    0,
    1,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:2170 */
  {
    "vec_shr_v4si",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_vec_shr_v4si,
    &operand_data[2599],
    3,
    0,
    1,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:2170 */
  {
    "vec_shr_v8hi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_vec_shr_v8hi,
    &operand_data[2602],
    3,
    0,
    1,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:2170 */
  {
    "vec_shr_v16qi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_vec_shr_v16qi,
    &operand_data[2605],
    3,
    0,
    1,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:2170 */
  {
    "vec_shr_v4sf",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_vec_shr_v4sf,
    &operand_data[2608],
    3,
    0,
    1,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:2205 */
  {
    "reduc_splus_v8hi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_reduc_splus_v8hi,
    &operand_data[1457],
    2,
    0,
    1,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:2205 */
  {
    "reduc_splus_v16qi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_reduc_splus_v16qi,
    &operand_data[1460],
    2,
    0,
    1,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:2221 */
  {
    "reduc_uplus_v16qi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_reduc_uplus_v16qi,
    &operand_data[1460],
    2,
    0,
    1,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:2247 */
  {
    "negv4si2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_negv4si2,
    &operand_data[2538],
    2,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:2247 */
  {
    "negv8hi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_negv8hi2,
    &operand_data[2611],
    2,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:2247 */
  {
    "negv16qi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_negv16qi2,
    &operand_data[2613],
    2,
    0,
    0,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:2262 */
  {
    "udot_prodv8hi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_udot_prodv8hi,
    &operand_data[1473],
    4,
    0,
    1,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:2262 */
  {
    "udot_prodv16qi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_udot_prodv16qi,
    &operand_data[1477],
    4,
    0,
    1,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:2275 */
  {
    "sdot_prodv8hi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sdot_prodv8hi,
    &operand_data[1473],
    4,
    0,
    1,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:2288 */
  {
    "widen_usumv8hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_widen_usumv8hi3,
    &operand_data[1497],
    3,
    0,
    1,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:2288 */
  {
    "widen_usumv16qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_widen_usumv16qi3,
    &operand_data[1494],
    3,
    0,
    1,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:2303 */
  {
    "widen_ssumv16qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_widen_ssumv16qi3,
    &operand_data[1494],
    3,
    0,
    1,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:2318 */
  {
    "widen_ssumv8hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_widen_ssumv8hi3,
    &operand_data[1497],
    3,
    0,
    1,
    0
  },
  /* /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20/gcc_42-5531/build/obj/src/gcc/config/rs6000/altivec.md:2333 */
  {
    "negv4sf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_negv4sf2,
    &operand_data[2535],
    2,
    0,
    0,
    0
  },
};


const char *
get_insn_name (int code)
{
  if (code == NOOP_MOVE_INSN_CODE)
    return "NOOP_MOVE";
  else
    return insn_data[code].name;
}
