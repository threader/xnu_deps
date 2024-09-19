/* Generated automatically by the program `genpeep'
from the machine description file `md'.  */

#include "config.h"
#include "system.h"
#include "coretypes.h"
#include "tm.h"
#include "insn-config.h"
#include "rtl.h"
#include "tm_p.h"
#include "regs.h"
#include "output.h"
#include "real.h"
#include "recog.h"
#include "except.h"
#include "function.h"
#include "toplev.h"
#include "flags.h"
#include "tm-constrs.h"

#ifdef HAVE_peephole
extern rtx peep_operand[];

#define operands peep_operand

rtx
peephole (rtx ins1)
{
  rtx insn ATTRIBUTE_UNUSED, x ATTRIBUTE_UNUSED, pat ATTRIBUTE_UNUSED;

  if (NEXT_INSN (ins1)
      && BARRIER_P (NEXT_INSN (ins1)))
    return 0;

  insn = ins1;
  pat = PATTERN (insn);
  x = pat;
  if (GET_CODE (x) != SET) goto L1168;
  x = XEXP (pat, 0);
  operands[0] = x;
  if (! gpc_reg_operand (x, SImode)) goto L1168;
  x = XEXP (pat, 1);
  operands[1] = x;
  if (! scc_comparison_operator (x, SImode)) goto L1168;
  x = XEXP (XEXP (pat, 1), 0);
  operands[2] = x;
  if (! cc_reg_operand (x, VOIDmode)) goto L1168;
  x = XEXP (XEXP (pat, 1), 1);
  if (GET_CODE (x) != CONST_INT) goto L1168;
  if (XWINT (x, 0) != 0) goto L1168;
  do { insn = NEXT_INSN (insn);
       if (insn == 0) goto L1168; }
  while (NOTE_P (insn)
	 || (NONJUMP_INSN_P (insn)
	     && (GET_CODE (PATTERN (insn)) == USE
		 || GET_CODE (PATTERN (insn)) == CLOBBER)));
  if (LABEL_P (insn)
      || BARRIER_P (insn))
    goto L1168;
  pat = PATTERN (insn);
  x = pat;
  if (GET_CODE (x) != SET) goto L1168;
  x = XEXP (pat, 0);
  operands[3] = x;
  if (! gpc_reg_operand (x, SImode)) goto L1168;
  x = XEXP (pat, 1);
  operands[4] = x;
  if (! scc_comparison_operator (x, SImode)) goto L1168;
  x = XEXP (XEXP (pat, 1), 0);
  operands[5] = x;
  if (! cc_reg_operand (x, VOIDmode)) goto L1168;
  x = XEXP (XEXP (pat, 1), 1);
  if (GET_CODE (x) != CONST_INT) goto L1168;
  if (XWINT (x, 0) != 0) goto L1168;
  if (! (REGNO (operands[2]) != REGNO (operands[5]))) goto L1168;
  PATTERN (ins1) = gen_rtx_PARALLEL (VOIDmode, gen_rtvec_v (6, operands));
  INSN_CODE (ins1) = 1168;
  delete_for_peephole (NEXT_INSN (ins1), insn);
  return NEXT_INSN (insn);
 L1168:

  insn = ins1;
  pat = PATTERN (insn);
  x = pat;
  if (GET_CODE (x) != SET) goto L1169;
  x = XEXP (pat, 0);
  operands[0] = x;
  if (! gpc_reg_operand (x, DImode)) goto L1169;
  x = XEXP (pat, 1);
  operands[1] = x;
  if (! scc_comparison_operator (x, DImode)) goto L1169;
  x = XEXP (XEXP (pat, 1), 0);
  operands[2] = x;
  if (! cc_reg_operand (x, VOIDmode)) goto L1169;
  x = XEXP (XEXP (pat, 1), 1);
  if (GET_CODE (x) != CONST_INT) goto L1169;
  if (XWINT (x, 0) != 0) goto L1169;
  do { insn = NEXT_INSN (insn);
       if (insn == 0) goto L1169; }
  while (NOTE_P (insn)
	 || (NONJUMP_INSN_P (insn)
	     && (GET_CODE (PATTERN (insn)) == USE
		 || GET_CODE (PATTERN (insn)) == CLOBBER)));
  if (LABEL_P (insn)
      || BARRIER_P (insn))
    goto L1169;
  pat = PATTERN (insn);
  x = pat;
  if (GET_CODE (x) != SET) goto L1169;
  x = XEXP (pat, 0);
  operands[3] = x;
  if (! gpc_reg_operand (x, DImode)) goto L1169;
  x = XEXP (pat, 1);
  operands[4] = x;
  if (! scc_comparison_operator (x, DImode)) goto L1169;
  x = XEXP (XEXP (pat, 1), 0);
  operands[5] = x;
  if (! cc_reg_operand (x, VOIDmode)) goto L1169;
  x = XEXP (XEXP (pat, 1), 1);
  if (GET_CODE (x) != CONST_INT) goto L1169;
  if (XWINT (x, 0) != 0) goto L1169;
  if (! (TARGET_POWERPC64 && REGNO (operands[2]) != REGNO (operands[5]))) goto L1169;
  PATTERN (ins1) = gen_rtx_PARALLEL (VOIDmode, gen_rtvec_v (6, operands));
  INSN_CODE (ins1) = 1169;
  delete_for_peephole (NEXT_INSN (ins1), insn);
  return NEXT_INSN (insn);
 L1169:

  return 0;
}

rtx peep_operand[6];
#endif
