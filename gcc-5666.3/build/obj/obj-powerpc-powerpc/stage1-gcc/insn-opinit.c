/* Generated automatically by the program `genopinit'
from the machine description file `md'.  */

#include "config.h"
#include "system.h"
#include "coretypes.h"
#include "tm.h"
#include "rtl.h"
#include "flags.h"
#include "insn-config.h"
#include "recog.h"
#include "expr.h"
#include "optabs.h"
#include "reload.h"

void
init_all_optabs (void)
{
#ifdef FIXUNS_TRUNC_LIKE_FIX_TRUNC
  int i, j;
#endif

  if (HAVE_extendqidi2)
    sext_optab->handlers[DImode][QImode].insn_code = CODE_FOR_extendqidi2;
  one_cmpl_optab->handlers[SImode].insn_code = CODE_FOR_one_cmplsi2;
  if (HAVE_one_cmpldi2)
    one_cmpl_optab->handlers[DImode].insn_code = CODE_FOR_one_cmpldi2;
  clz_optab->handlers[SImode].insn_code = CODE_FOR_clzsi2;
  if (HAVE_clzdi2)
    clz_optab->handlers[DImode].insn_code = CODE_FOR_clzdi2;
  and_optab->handlers[SImode].insn_code = CODE_FOR_andsi3;
  rotl_optab->handlers[SImode].insn_code = CODE_FOR_rotlsi3;
  if (HAVE_sqrtdf2)
    sqrt_optab->handlers[DFmode].insn_code = CODE_FOR_sqrtdf2;
  if (HAVE_floatdidf2)
    sfloat_optab->handlers[DFmode][DImode].insn_code = CODE_FOR_floatdidf2;
  if (HAVE_fix_truncdfdi2)
    sfixtrunc_optab->handlers[DImode][DFmode].insn_code = CODE_FOR_fix_truncdfdi2;
  if (HAVE_absdi2)
    abs_optab->handlers[DImode].insn_code = CODE_FOR_absdi2;
  if (HAVE_muldi3)
    smul_optab->handlers[DImode].insn_code = CODE_FOR_muldi3;
  if (HAVE_smuldi3_highpart)
    smul_highpart_optab->handlers[DImode].insn_code = CODE_FOR_smuldi3_highpart;
  if (HAVE_umuldi3_highpart)
    umul_highpart_optab->handlers[DImode].insn_code = CODE_FOR_umuldi3_highpart;
  if (HAVE_rotldi3)
    rotl_optab->handlers[DImode].insn_code = CODE_FOR_rotldi3;
  if (HAVE_anddi3)
    and_optab->handlers[DImode].insn_code = CODE_FOR_anddi3;
  if (HAVE_trunctfsf2)
    trunc_optab->handlers[SFmode][TFmode].insn_code = CODE_FOR_trunctfsf2;
  if (HAVE_negtf2)
    negv_optab->handlers[TFmode].insn_code =
    neg_optab->handlers[TFmode].insn_code = CODE_FOR_negtf2;
  if (HAVE_sync_compare_and_swapsi)
    sync_compare_and_swap[SImode] = CODE_FOR_sync_compare_and_swapsi;
  if (HAVE_sync_compare_and_swapdi)
    sync_compare_and_swap[DImode] = CODE_FOR_sync_compare_and_swapdi;
  if (HAVE_sync_lock_test_and_setsi)
    sync_lock_test_and_set[SImode] = CODE_FOR_sync_lock_test_and_setsi;
  if (HAVE_sync_lock_test_and_setdi)
    sync_lock_test_and_set[DImode] = CODE_FOR_sync_lock_test_and_setdi;
  if (HAVE_addv4si3)
    add_optab->handlers[V4SImode].insn_code = CODE_FOR_addv4si3;
  if (HAVE_addv8hi3)
    add_optab->handlers[V8HImode].insn_code = CODE_FOR_addv8hi3;
  if (HAVE_addv16qi3)
    add_optab->handlers[V16QImode].insn_code = CODE_FOR_addv16qi3;
  if (HAVE_addv4sf3)
    addv_optab->handlers[V4SFmode].insn_code =
    add_optab->handlers[V4SFmode].insn_code = CODE_FOR_addv4sf3;
  if (HAVE_subv4si3)
    sub_optab->handlers[V4SImode].insn_code = CODE_FOR_subv4si3;
  if (HAVE_subv8hi3)
    sub_optab->handlers[V8HImode].insn_code = CODE_FOR_subv8hi3;
  if (HAVE_subv16qi3)
    sub_optab->handlers[V16QImode].insn_code = CODE_FOR_subv16qi3;
  if (HAVE_subv4sf3)
    subv_optab->handlers[V4SFmode].insn_code =
    sub_optab->handlers[V4SFmode].insn_code = CODE_FOR_subv4sf3;
  if (HAVE_umaxv4si3)
    umax_optab->handlers[V4SImode].insn_code = CODE_FOR_umaxv4si3;
  if (HAVE_umaxv8hi3)
    umax_optab->handlers[V8HImode].insn_code = CODE_FOR_umaxv8hi3;
  if (HAVE_umaxv16qi3)
    umax_optab->handlers[V16QImode].insn_code = CODE_FOR_umaxv16qi3;
  if (HAVE_smaxv4si3)
    smax_optab->handlers[V4SImode].insn_code = CODE_FOR_smaxv4si3;
  if (HAVE_smaxv8hi3)
    smax_optab->handlers[V8HImode].insn_code = CODE_FOR_smaxv8hi3;
  if (HAVE_smaxv16qi3)
    smax_optab->handlers[V16QImode].insn_code = CODE_FOR_smaxv16qi3;
  if (HAVE_smaxv4sf3)
    smax_optab->handlers[V4SFmode].insn_code = CODE_FOR_smaxv4sf3;
  if (HAVE_uminv4si3)
    umin_optab->handlers[V4SImode].insn_code = CODE_FOR_uminv4si3;
  if (HAVE_uminv8hi3)
    umin_optab->handlers[V8HImode].insn_code = CODE_FOR_uminv8hi3;
  if (HAVE_uminv16qi3)
    umin_optab->handlers[V16QImode].insn_code = CODE_FOR_uminv16qi3;
  if (HAVE_sminv4si3)
    smin_optab->handlers[V4SImode].insn_code = CODE_FOR_sminv4si3;
  if (HAVE_sminv8hi3)
    smin_optab->handlers[V8HImode].insn_code = CODE_FOR_sminv8hi3;
  if (HAVE_sminv16qi3)
    smin_optab->handlers[V16QImode].insn_code = CODE_FOR_sminv16qi3;
  if (HAVE_sminv4sf3)
    smin_optab->handlers[V4SFmode].insn_code = CODE_FOR_sminv4sf3;
  if (HAVE_andv4si3)
    and_optab->handlers[V4SImode].insn_code = CODE_FOR_andv4si3;
  if (HAVE_andv8hi3)
    and_optab->handlers[V8HImode].insn_code = CODE_FOR_andv8hi3;
  if (HAVE_andv16qi3)
    and_optab->handlers[V16QImode].insn_code = CODE_FOR_andv16qi3;
  if (HAVE_iorv4si3)
    ior_optab->handlers[V4SImode].insn_code = CODE_FOR_iorv4si3;
  if (HAVE_iorv8hi3)
    ior_optab->handlers[V8HImode].insn_code = CODE_FOR_iorv8hi3;
  if (HAVE_iorv16qi3)
    ior_optab->handlers[V16QImode].insn_code = CODE_FOR_iorv16qi3;
  if (HAVE_xorv4si3)
    xor_optab->handlers[V4SImode].insn_code = CODE_FOR_xorv4si3;
  if (HAVE_xorv8hi3)
    xor_optab->handlers[V8HImode].insn_code = CODE_FOR_xorv8hi3;
  if (HAVE_xorv16qi3)
    xor_optab->handlers[V16QImode].insn_code = CODE_FOR_xorv16qi3;
  if (HAVE_xorv4sf3)
    xor_optab->handlers[V4SFmode].insn_code = CODE_FOR_xorv4sf3;
  if (HAVE_one_cmplv4si2)
    one_cmpl_optab->handlers[V4SImode].insn_code = CODE_FOR_one_cmplv4si2;
  if (HAVE_one_cmplv8hi2)
    one_cmpl_optab->handlers[V8HImode].insn_code = CODE_FOR_one_cmplv8hi2;
  if (HAVE_one_cmplv16qi2)
    one_cmpl_optab->handlers[V16QImode].insn_code = CODE_FOR_one_cmplv16qi2;
  if (HAVE_lshrv4si3)
    lshr_optab->handlers[V4SImode].insn_code = CODE_FOR_lshrv4si3;
  if (HAVE_lshrv8hi3)
    lshr_optab->handlers[V8HImode].insn_code = CODE_FOR_lshrv8hi3;
  if (HAVE_lshrv16qi3)
    lshr_optab->handlers[V16QImode].insn_code = CODE_FOR_lshrv16qi3;
  if (HAVE_ashrv4si3)
    ashr_optab->handlers[V4SImode].insn_code = CODE_FOR_ashrv4si3;
  if (HAVE_ashrv8hi3)
    ashr_optab->handlers[V8HImode].insn_code = CODE_FOR_ashrv8hi3;
  if (HAVE_ashrv16qi3)
    ashr_optab->handlers[V16QImode].insn_code = CODE_FOR_ashrv16qi3;
  if (HAVE_ftruncv4sf2)
    ftrunc_optab->handlers[V4SFmode].insn_code = CODE_FOR_ftruncv4sf2;
  if (HAVE_vec_realign_load_v4si)
    vec_realign_load_optab->handlers[V4SImode].insn_code = CODE_FOR_vec_realign_load_v4si;
  if (HAVE_vec_realign_load_v8hi)
    vec_realign_load_optab->handlers[V8HImode].insn_code = CODE_FOR_vec_realign_load_v8hi;
  if (HAVE_vec_realign_load_v16qi)
    vec_realign_load_optab->handlers[V16QImode].insn_code = CODE_FOR_vec_realign_load_v16qi;
  if (HAVE_vec_realign_load_v4sf)
    vec_realign_load_optab->handlers[V4SFmode].insn_code = CODE_FOR_vec_realign_load_v4sf;
  if (HAVE_zero_extendqidi2)
    zext_optab->handlers[DImode][QImode].insn_code = CODE_FOR_zero_extendqidi2;
  if (HAVE_zero_extendhidi2)
    zext_optab->handlers[DImode][HImode].insn_code = CODE_FOR_zero_extendhidi2;
  if (HAVE_zero_extendsidi2)
    zext_optab->handlers[DImode][SImode].insn_code = CODE_FOR_zero_extendsidi2;
  if (HAVE_extendhidi2)
    sext_optab->handlers[DImode][HImode].insn_code = CODE_FOR_extendhidi2;
  if (HAVE_extendsidi2)
    sext_optab->handlers[DImode][SImode].insn_code = CODE_FOR_extendsidi2;
  zext_optab->handlers[SImode][QImode].insn_code = CODE_FOR_zero_extendqisi2;
  sext_optab->handlers[SImode][QImode].insn_code = CODE_FOR_extendqisi2;
  zext_optab->handlers[HImode][QImode].insn_code = CODE_FOR_zero_extendqihi2;
  sext_optab->handlers[HImode][QImode].insn_code = CODE_FOR_extendqihi2;
  zext_optab->handlers[SImode][HImode].insn_code = CODE_FOR_zero_extendhisi2;
  sext_optab->handlers[SImode][HImode].insn_code = CODE_FOR_extendhisi2;
  if (HAVE_strlensi)
    strlen_optab->handlers[SImode].insn_code = CODE_FOR_strlensi;
  add_optab->handlers[SImode].insn_code = CODE_FOR_addsi3;
  add_optab->handlers[DImode].insn_code = CODE_FOR_adddi3;
  sub_optab->handlers[SImode].insn_code = CODE_FOR_subsi3;
  sub_optab->handlers[DImode].insn_code = CODE_FOR_subdi3;
  abs_optab->handlers[SImode].insn_code = CODE_FOR_abssi2;
  neg_optab->handlers[SImode].insn_code = CODE_FOR_negsi2;
  neg_optab->handlers[DImode].insn_code = CODE_FOR_negdi2;
  ctz_optab->handlers[SImode].insn_code = CODE_FOR_ctzsi2;
  if (HAVE_ctzdi2)
    ctz_optab->handlers[DImode].insn_code = CODE_FOR_ctzdi2;
  ffs_optab->handlers[SImode].insn_code = CODE_FOR_ffssi2;
  if (HAVE_ffsdi2)
    ffs_optab->handlers[DImode].insn_code = CODE_FOR_ffsdi2;
  smul_optab->handlers[SImode].insn_code = CODE_FOR_mulsi3;
  if (HAVE_divmodsi4)
    sdivmod_optab->handlers[SImode].insn_code = CODE_FOR_divmodsi4;
  if (HAVE_udivsi3)
    udiv_optab->handlers[SImode].insn_code = CODE_FOR_udivsi3;
  if (HAVE_udivdi3)
    udiv_optab->handlers[DImode].insn_code = CODE_FOR_udivdi3;
  sdiv_optab->handlers[SImode].insn_code = CODE_FOR_divsi3;
  if (HAVE_divdi3)
    sdiv_optab->handlers[DImode].insn_code = CODE_FOR_divdi3;
  smod_optab->handlers[SImode].insn_code = CODE_FOR_modsi3;
  if (HAVE_moddi3)
    smod_optab->handlers[DImode].insn_code = CODE_FOR_moddi3;
  udivmod_optab->handlers[SImode].insn_code = CODE_FOR_udivmodsi4;
  ior_optab->handlers[SImode].insn_code = CODE_FOR_iorsi3;
  xor_optab->handlers[SImode].insn_code = CODE_FOR_xorsi3;
  ashl_optab->handlers[SImode].insn_code = CODE_FOR_ashlsi3;
  lshr_optab->handlers[SImode].insn_code = CODE_FOR_lshrsi3;
  ashr_optab->handlers[SImode].insn_code = CODE_FOR_ashrsi3;
  if (HAVE_extendsfdf2)
    sext_optab->handlers[DFmode][SFmode].insn_code = CODE_FOR_extendsfdf2;
  if (HAVE_truncdfsf2)
    trunc_optab->handlers[SFmode][DFmode].insn_code = CODE_FOR_truncdfsf2;
  if (HAVE_negsf2)
    negv_optab->handlers[SFmode].insn_code =
    neg_optab->handlers[SFmode].insn_code = CODE_FOR_negsf2;
  if (HAVE_abssf2)
    absv_optab->handlers[SFmode].insn_code =
    abs_optab->handlers[SFmode].insn_code = CODE_FOR_abssf2;
  if (HAVE_addsf3)
    addv_optab->handlers[SFmode].insn_code =
    add_optab->handlers[SFmode].insn_code = CODE_FOR_addsf3;
  if (HAVE_subsf3)
    subv_optab->handlers[SFmode].insn_code =
    sub_optab->handlers[SFmode].insn_code = CODE_FOR_subsf3;
  if (HAVE_mulsf3)
    smulv_optab->handlers[SFmode].insn_code =
    smul_optab->handlers[SFmode].insn_code = CODE_FOR_mulsf3;
  if (HAVE_divsf3)
    sdiv_optab->handlers[SFmode].insn_code = CODE_FOR_divsf3;
  if (HAVE_sqrtsf2)
    sqrt_optab->handlers[SFmode].insn_code = CODE_FOR_sqrtsf2;
  if (HAVE_copysignsf3)
    copysign_optab->handlers[SFmode].insn_code = CODE_FOR_copysignsf3;
  if (HAVE_copysigndf3)
    copysign_optab->handlers[DFmode].insn_code = CODE_FOR_copysigndf3;
  if (HAVE_smaxsf3)
    smax_optab->handlers[SFmode].insn_code = CODE_FOR_smaxsf3;
  if (HAVE_sminsf3)
    smin_optab->handlers[SFmode].insn_code = CODE_FOR_sminsf3;
  if (HAVE_movsfcc)
    movcc_gen_code[SFmode] = CODE_FOR_movsfcc;
  if (HAVE_negdf2)
    negv_optab->handlers[DFmode].insn_code =
    neg_optab->handlers[DFmode].insn_code = CODE_FOR_negdf2;
  if (HAVE_absdf2)
    absv_optab->handlers[DFmode].insn_code =
    abs_optab->handlers[DFmode].insn_code = CODE_FOR_absdf2;
  if (HAVE_adddf3)
    addv_optab->handlers[DFmode].insn_code =
    add_optab->handlers[DFmode].insn_code = CODE_FOR_adddf3;
  if (HAVE_subdf3)
    subv_optab->handlers[DFmode].insn_code =
    sub_optab->handlers[DFmode].insn_code = CODE_FOR_subdf3;
  if (HAVE_muldf3)
    smulv_optab->handlers[DFmode].insn_code =
    smul_optab->handlers[DFmode].insn_code = CODE_FOR_muldf3;
  if (HAVE_divdf3)
    sdiv_optab->handlers[DFmode].insn_code = CODE_FOR_divdf3;
  if (HAVE_smaxdf3)
    smax_optab->handlers[DFmode].insn_code = CODE_FOR_smaxdf3;
  if (HAVE_smindf3)
    smin_optab->handlers[DFmode].insn_code = CODE_FOR_smindf3;
  if (HAVE_movdfcc)
    movcc_gen_code[DFmode] = CODE_FOR_movdfcc;
  if (HAVE_floatsidf2)
    sfloat_optab->handlers[DFmode][SImode].insn_code = CODE_FOR_floatsidf2;
  if (HAVE_floatunssidf2)
    ufloat_optab->handlers[DFmode][SImode].insn_code = CODE_FOR_floatunssidf2;
  if (HAVE_fix_truncdfsi2)
    sfixtrunc_optab->handlers[SImode][DFmode].insn_code = CODE_FOR_fix_truncdfsi2;
  if (HAVE_floatdisf2)
    sfloat_optab->handlers[SFmode][DImode].insn_code = CODE_FOR_floatdisf2;
  if (HAVE_mulsidi3)
    smul_widen_optab->handlers[DImode].insn_code = CODE_FOR_mulsidi3;
  if (HAVE_umulsidi3)
    umul_widen_optab->handlers[DImode].insn_code = CODE_FOR_umulsidi3;
  smul_highpart_optab->handlers[SImode].insn_code = CODE_FOR_smulsi3_highpart;
  if (HAVE_umulsi3_highpart)
    umul_highpart_optab->handlers[SImode].insn_code = CODE_FOR_umulsi3_highpart;
  if (HAVE_ashldi3)
    ashl_optab->handlers[DImode].insn_code = CODE_FOR_ashldi3;
  if (HAVE_lshrdi3)
    lshr_optab->handlers[DImode].insn_code = CODE_FOR_lshrdi3;
  if (HAVE_ashrdi3)
    ashr_optab->handlers[DImode].insn_code = CODE_FOR_ashrdi3;
  if (HAVE_iordi3)
    ior_optab->handlers[DImode].insn_code = CODE_FOR_iordi3;
  if (HAVE_xordi3)
    xor_optab->handlers[DImode].insn_code = CODE_FOR_xordi3;
  mov_optab->handlers[QImode].insn_code = CODE_FOR_movqi;
  mov_optab->handlers[HImode].insn_code = CODE_FOR_movhi;
  mov_optab->handlers[SImode].insn_code = CODE_FOR_movsi;
  mov_optab->handlers[DImode].insn_code = CODE_FOR_movdi;
  mov_optab->handlers[TImode].insn_code = CODE_FOR_movti;
  mov_optab->handlers[CCmode].insn_code = CODE_FOR_movcc;
  mov_optab->handlers[SFmode].insn_code = CODE_FOR_movsf;
  mov_optab->handlers[DFmode].insn_code = CODE_FOR_movdf;
  if (HAVE_movtf)
    mov_optab->handlers[TFmode].insn_code = CODE_FOR_movtf;
  if (HAVE_extenddftf2)
    sext_optab->handlers[TFmode][DFmode].insn_code = CODE_FOR_extenddftf2;
  if (HAVE_extendsftf2)
    sext_optab->handlers[TFmode][SFmode].insn_code = CODE_FOR_extendsftf2;
  if (HAVE_trunctfdf2)
    trunc_optab->handlers[DFmode][TFmode].insn_code = CODE_FOR_trunctfdf2;
  if (HAVE_floatsitf2)
    sfloat_optab->handlers[TFmode][SImode].insn_code = CODE_FOR_floatsitf2;
  if (HAVE_fix_trunctfsi2)
    sfixtrunc_optab->handlers[SImode][TFmode].insn_code = CODE_FOR_fix_trunctfsi2;
  if (HAVE_abstf2)
    absv_optab->handlers[TFmode].insn_code =
    abs_optab->handlers[TFmode].insn_code = CODE_FOR_abstf2;
  setmem_optab[SImode] = CODE_FOR_setmemsi;
  movmem_optab[SImode] = CODE_FOR_movmemsi;
  cmp_optab->handlers[SImode].insn_code = CODE_FOR_cmpsi;
  if (HAVE_cmpdi)
    cmp_optab->handlers[DImode].insn_code = CODE_FOR_cmpdi;
  if (HAVE_cmpsf)
    cmp_optab->handlers[SFmode].insn_code = CODE_FOR_cmpsf;
  if (HAVE_cmpdf)
    cmp_optab->handlers[DFmode].insn_code = CODE_FOR_cmpdf;
  if (HAVE_cmptf)
    cmp_optab->handlers[TFmode].insn_code = CODE_FOR_cmptf;
  bcc_gen_fctn[EQ] = gen_beq;
  bcc_gen_fctn[NE] = gen_bne;
  bcc_gen_fctn[GE] = gen_bge;
  bcc_gen_fctn[GT] = gen_bgt;
  bcc_gen_fctn[LE] = gen_ble;
  bcc_gen_fctn[LT] = gen_blt;
  bcc_gen_fctn[GEU] = gen_bgeu;
  bcc_gen_fctn[GTU] = gen_bgtu;
  bcc_gen_fctn[LEU] = gen_bleu;
  bcc_gen_fctn[LTU] = gen_bltu;
  if (HAVE_bunordered)
    bcc_gen_fctn[UNORDERED] = gen_bunordered;
  if (HAVE_bordered)
    bcc_gen_fctn[ORDERED] = gen_bordered;
  bcc_gen_fctn[UNEQ] = gen_buneq;
  bcc_gen_fctn[UNGE] = gen_bunge;
  bcc_gen_fctn[UNGT] = gen_bungt;
  bcc_gen_fctn[UNLE] = gen_bunle;
  bcc_gen_fctn[UNLT] = gen_bunlt;
  bcc_gen_fctn[LTGT] = gen_bltgt;
  setcc_gen_code[EQ] = CODE_FOR_seq;
  setcc_gen_code[NE] = CODE_FOR_sne;
  setcc_gen_code[GE] = CODE_FOR_sge;
  setcc_gen_code[GT] = CODE_FOR_sgt;
  setcc_gen_code[LE] = CODE_FOR_sle;
  setcc_gen_code[LT] = CODE_FOR_slt;
  setcc_gen_code[GEU] = CODE_FOR_sgeu;
  setcc_gen_code[GTU] = CODE_FOR_sgtu;
  setcc_gen_code[LEU] = CODE_FOR_sleu;
  setcc_gen_code[LTU] = CODE_FOR_sltu;
  if (HAVE_sunordered)
    setcc_gen_code[UNORDERED] = CODE_FOR_sunordered;
  if (HAVE_sordered)
    setcc_gen_code[ORDERED] = CODE_FOR_sordered;
  setcc_gen_code[UNEQ] = CODE_FOR_suneq;
  setcc_gen_code[UNGE] = CODE_FOR_sunge;
  setcc_gen_code[UNGT] = CODE_FOR_sungt;
  setcc_gen_code[UNLE] = CODE_FOR_sunle;
  setcc_gen_code[UNLT] = CODE_FOR_sunlt;
  setcc_gen_code[LTGT] = CODE_FOR_sltgt;
  if (HAVE_sync_compare_and_swaphi)
    sync_compare_and_swap[HImode] = CODE_FOR_sync_compare_and_swaphi;
  if (HAVE_sync_compare_and_swapqi)
    sync_compare_and_swap[QImode] = CODE_FOR_sync_compare_and_swapqi;
  if (HAVE_sync_addqi)
    sync_add_optab[QImode] = CODE_FOR_sync_addqi;
  if (HAVE_sync_subqi)
    sync_sub_optab[QImode] = CODE_FOR_sync_subqi;
  if (HAVE_sync_iorqi)
    sync_ior_optab[QImode] = CODE_FOR_sync_iorqi;
  if (HAVE_sync_xorqi)
    sync_xor_optab[QImode] = CODE_FOR_sync_xorqi;
  if (HAVE_sync_andqi)
    sync_and_optab[QImode] = CODE_FOR_sync_andqi;
  if (HAVE_sync_addhi)
    sync_add_optab[HImode] = CODE_FOR_sync_addhi;
  if (HAVE_sync_subhi)
    sync_sub_optab[HImode] = CODE_FOR_sync_subhi;
  if (HAVE_sync_iorhi)
    sync_ior_optab[HImode] = CODE_FOR_sync_iorhi;
  if (HAVE_sync_xorhi)
    sync_xor_optab[HImode] = CODE_FOR_sync_xorhi;
  if (HAVE_sync_andhi)
    sync_and_optab[HImode] = CODE_FOR_sync_andhi;
  if (HAVE_sync_addsi)
    sync_add_optab[SImode] = CODE_FOR_sync_addsi;
  if (HAVE_sync_subsi)
    sync_sub_optab[SImode] = CODE_FOR_sync_subsi;
  if (HAVE_sync_iorsi)
    sync_ior_optab[SImode] = CODE_FOR_sync_iorsi;
  if (HAVE_sync_xorsi)
    sync_xor_optab[SImode] = CODE_FOR_sync_xorsi;
  if (HAVE_sync_andsi)
    sync_and_optab[SImode] = CODE_FOR_sync_andsi;
  if (HAVE_sync_adddi)
    sync_add_optab[DImode] = CODE_FOR_sync_adddi;
  if (HAVE_sync_subdi)
    sync_sub_optab[DImode] = CODE_FOR_sync_subdi;
  if (HAVE_sync_iordi)
    sync_ior_optab[DImode] = CODE_FOR_sync_iordi;
  if (HAVE_sync_xordi)
    sync_xor_optab[DImode] = CODE_FOR_sync_xordi;
  if (HAVE_sync_anddi)
    sync_and_optab[DImode] = CODE_FOR_sync_anddi;
  if (HAVE_sync_nandqi)
    sync_nand_optab[QImode] = CODE_FOR_sync_nandqi;
  if (HAVE_sync_nandhi)
    sync_nand_optab[HImode] = CODE_FOR_sync_nandhi;
  if (HAVE_sync_nandsi)
    sync_nand_optab[SImode] = CODE_FOR_sync_nandsi;
  if (HAVE_sync_nanddi)
    sync_nand_optab[DImode] = CODE_FOR_sync_nanddi;
  if (HAVE_sync_old_addqi)
    sync_old_add_optab[QImode] = CODE_FOR_sync_old_addqi;
  if (HAVE_sync_old_subqi)
    sync_old_sub_optab[QImode] = CODE_FOR_sync_old_subqi;
  if (HAVE_sync_old_iorqi)
    sync_old_ior_optab[QImode] = CODE_FOR_sync_old_iorqi;
  if (HAVE_sync_old_xorqi)
    sync_old_xor_optab[QImode] = CODE_FOR_sync_old_xorqi;
  if (HAVE_sync_old_andqi)
    sync_old_and_optab[QImode] = CODE_FOR_sync_old_andqi;
  if (HAVE_sync_old_addhi)
    sync_old_add_optab[HImode] = CODE_FOR_sync_old_addhi;
  if (HAVE_sync_old_subhi)
    sync_old_sub_optab[HImode] = CODE_FOR_sync_old_subhi;
  if (HAVE_sync_old_iorhi)
    sync_old_ior_optab[HImode] = CODE_FOR_sync_old_iorhi;
  if (HAVE_sync_old_xorhi)
    sync_old_xor_optab[HImode] = CODE_FOR_sync_old_xorhi;
  if (HAVE_sync_old_andhi)
    sync_old_and_optab[HImode] = CODE_FOR_sync_old_andhi;
  if (HAVE_sync_old_addsi)
    sync_old_add_optab[SImode] = CODE_FOR_sync_old_addsi;
  if (HAVE_sync_old_subsi)
    sync_old_sub_optab[SImode] = CODE_FOR_sync_old_subsi;
  if (HAVE_sync_old_iorsi)
    sync_old_ior_optab[SImode] = CODE_FOR_sync_old_iorsi;
  if (HAVE_sync_old_xorsi)
    sync_old_xor_optab[SImode] = CODE_FOR_sync_old_xorsi;
  if (HAVE_sync_old_andsi)
    sync_old_and_optab[SImode] = CODE_FOR_sync_old_andsi;
  if (HAVE_sync_old_adddi)
    sync_old_add_optab[DImode] = CODE_FOR_sync_old_adddi;
  if (HAVE_sync_old_subdi)
    sync_old_sub_optab[DImode] = CODE_FOR_sync_old_subdi;
  if (HAVE_sync_old_iordi)
    sync_old_ior_optab[DImode] = CODE_FOR_sync_old_iordi;
  if (HAVE_sync_old_xordi)
    sync_old_xor_optab[DImode] = CODE_FOR_sync_old_xordi;
  if (HAVE_sync_old_anddi)
    sync_old_and_optab[DImode] = CODE_FOR_sync_old_anddi;
  if (HAVE_sync_old_nandqi)
    sync_old_nand_optab[QImode] = CODE_FOR_sync_old_nandqi;
  if (HAVE_sync_old_nandhi)
    sync_old_nand_optab[HImode] = CODE_FOR_sync_old_nandhi;
  if (HAVE_sync_old_nandsi)
    sync_old_nand_optab[SImode] = CODE_FOR_sync_old_nandsi;
  if (HAVE_sync_old_nanddi)
    sync_old_nand_optab[DImode] = CODE_FOR_sync_old_nanddi;
  if (HAVE_sync_new_addqi)
    sync_new_add_optab[QImode] = CODE_FOR_sync_new_addqi;
  if (HAVE_sync_new_subqi)
    sync_new_sub_optab[QImode] = CODE_FOR_sync_new_subqi;
  if (HAVE_sync_new_iorqi)
    sync_new_ior_optab[QImode] = CODE_FOR_sync_new_iorqi;
  if (HAVE_sync_new_xorqi)
    sync_new_xor_optab[QImode] = CODE_FOR_sync_new_xorqi;
  if (HAVE_sync_new_andqi)
    sync_new_and_optab[QImode] = CODE_FOR_sync_new_andqi;
  if (HAVE_sync_new_addhi)
    sync_new_add_optab[HImode] = CODE_FOR_sync_new_addhi;
  if (HAVE_sync_new_subhi)
    sync_new_sub_optab[HImode] = CODE_FOR_sync_new_subhi;
  if (HAVE_sync_new_iorhi)
    sync_new_ior_optab[HImode] = CODE_FOR_sync_new_iorhi;
  if (HAVE_sync_new_xorhi)
    sync_new_xor_optab[HImode] = CODE_FOR_sync_new_xorhi;
  if (HAVE_sync_new_andhi)
    sync_new_and_optab[HImode] = CODE_FOR_sync_new_andhi;
  if (HAVE_sync_new_addsi)
    sync_new_add_optab[SImode] = CODE_FOR_sync_new_addsi;
  if (HAVE_sync_new_subsi)
    sync_new_sub_optab[SImode] = CODE_FOR_sync_new_subsi;
  if (HAVE_sync_new_iorsi)
    sync_new_ior_optab[SImode] = CODE_FOR_sync_new_iorsi;
  if (HAVE_sync_new_xorsi)
    sync_new_xor_optab[SImode] = CODE_FOR_sync_new_xorsi;
  if (HAVE_sync_new_andsi)
    sync_new_and_optab[SImode] = CODE_FOR_sync_new_andsi;
  if (HAVE_sync_new_adddi)
    sync_new_add_optab[DImode] = CODE_FOR_sync_new_adddi;
  if (HAVE_sync_new_subdi)
    sync_new_sub_optab[DImode] = CODE_FOR_sync_new_subdi;
  if (HAVE_sync_new_iordi)
    sync_new_ior_optab[DImode] = CODE_FOR_sync_new_iordi;
  if (HAVE_sync_new_xordi)
    sync_new_xor_optab[DImode] = CODE_FOR_sync_new_xordi;
  if (HAVE_sync_new_anddi)
    sync_new_and_optab[DImode] = CODE_FOR_sync_new_anddi;
  if (HAVE_sync_new_nandqi)
    sync_new_nand_optab[QImode] = CODE_FOR_sync_new_nandqi;
  if (HAVE_sync_new_nandhi)
    sync_new_nand_optab[HImode] = CODE_FOR_sync_new_nandhi;
  if (HAVE_sync_new_nandsi)
    sync_new_nand_optab[SImode] = CODE_FOR_sync_new_nandsi;
  if (HAVE_sync_new_nanddi)
    sync_new_nand_optab[DImode] = CODE_FOR_sync_new_nanddi;
  sync_lock_release[QImode] = CODE_FOR_sync_lock_releaseqi;
  sync_lock_release[HImode] = CODE_FOR_sync_lock_releasehi;
  sync_lock_release[SImode] = CODE_FOR_sync_lock_releasesi;
  sync_lock_release[DImode] = CODE_FOR_sync_lock_releasedi;
  sync_lock_release[TImode] = CODE_FOR_sync_lock_releaseti;
  if (HAVE_movv4si)
    mov_optab->handlers[V4SImode].insn_code = CODE_FOR_movv4si;
  if (HAVE_movv8hi)
    mov_optab->handlers[V8HImode].insn_code = CODE_FOR_movv8hi;
  if (HAVE_movv16qi)
    mov_optab->handlers[V16QImode].insn_code = CODE_FOR_movv16qi;
  if (HAVE_movv4sf)
    mov_optab->handlers[V4SFmode].insn_code = CODE_FOR_movv4sf;
  if (HAVE_mulv4sf3)
    smulv_optab->handlers[V4SFmode].insn_code =
    smul_optab->handlers[V4SFmode].insn_code = CODE_FOR_mulv4sf3;
  if (HAVE_mulv4si3)
    smul_optab->handlers[V4SImode].insn_code = CODE_FOR_mulv4si3;
  if (HAVE_vcondv4si)
    vcond_gen_code[V4SImode] = CODE_FOR_vcondv4si;
  if (HAVE_vconduv4si)
    vcondu_gen_code[V4SImode] = CODE_FOR_vconduv4si;
  if (HAVE_vcondv4sf)
    vcond_gen_code[V4SFmode] = CODE_FOR_vcondv4sf;
  if (HAVE_vcondv8hi)
    vcond_gen_code[V8HImode] = CODE_FOR_vcondv8hi;
  if (HAVE_vconduv8hi)
    vcondu_gen_code[V8HImode] = CODE_FOR_vconduv8hi;
  if (HAVE_vcondv16qi)
    vcond_gen_code[V16QImode] = CODE_FOR_vcondv16qi;
  if (HAVE_vconduv16qi)
    vcondu_gen_code[V16QImode] = CODE_FOR_vconduv16qi;
  if (HAVE_vec_initv4si)
    vec_init_optab->handlers[V4SImode].insn_code = CODE_FOR_vec_initv4si;
  if (HAVE_vec_initv8hi)
    vec_init_optab->handlers[V8HImode].insn_code = CODE_FOR_vec_initv8hi;
  if (HAVE_vec_initv16qi)
    vec_init_optab->handlers[V16QImode].insn_code = CODE_FOR_vec_initv16qi;
  if (HAVE_vec_initv4sf)
    vec_init_optab->handlers[V4SFmode].insn_code = CODE_FOR_vec_initv4sf;
  if (HAVE_vec_setv4si)
    vec_set_optab->handlers[V4SImode].insn_code = CODE_FOR_vec_setv4si;
  if (HAVE_vec_setv8hi)
    vec_set_optab->handlers[V8HImode].insn_code = CODE_FOR_vec_setv8hi;
  if (HAVE_vec_setv16qi)
    vec_set_optab->handlers[V16QImode].insn_code = CODE_FOR_vec_setv16qi;
  if (HAVE_vec_setv4sf)
    vec_set_optab->handlers[V4SFmode].insn_code = CODE_FOR_vec_setv4sf;
  if (HAVE_vec_extractv4si)
    vec_extract_optab->handlers[V4SImode].insn_code = CODE_FOR_vec_extractv4si;
  if (HAVE_vec_extractv8hi)
    vec_extract_optab->handlers[V8HImode].insn_code = CODE_FOR_vec_extractv8hi;
  if (HAVE_vec_extractv16qi)
    vec_extract_optab->handlers[V16QImode].insn_code = CODE_FOR_vec_extractv16qi;
  if (HAVE_vec_extractv4sf)
    vec_extract_optab->handlers[V4SFmode].insn_code = CODE_FOR_vec_extractv4sf;
  if (HAVE_absv4si2)
    abs_optab->handlers[V4SImode].insn_code = CODE_FOR_absv4si2;
  if (HAVE_absv8hi2)
    abs_optab->handlers[V8HImode].insn_code = CODE_FOR_absv8hi2;
  if (HAVE_absv16qi2)
    abs_optab->handlers[V16QImode].insn_code = CODE_FOR_absv16qi2;
  if (HAVE_absv4sf2)
    absv_optab->handlers[V4SFmode].insn_code =
    abs_optab->handlers[V4SFmode].insn_code = CODE_FOR_absv4sf2;
  if (HAVE_vec_shl_v4si)
    vec_shl_optab->handlers[V4SImode].insn_code = CODE_FOR_vec_shl_v4si;
  if (HAVE_vec_shl_v8hi)
    vec_shl_optab->handlers[V8HImode].insn_code = CODE_FOR_vec_shl_v8hi;
  if (HAVE_vec_shl_v16qi)
    vec_shl_optab->handlers[V16QImode].insn_code = CODE_FOR_vec_shl_v16qi;
  if (HAVE_vec_shl_v4sf)
    vec_shl_optab->handlers[V4SFmode].insn_code = CODE_FOR_vec_shl_v4sf;
  if (HAVE_vec_shr_v4si)
    vec_shr_optab->handlers[V4SImode].insn_code = CODE_FOR_vec_shr_v4si;
  if (HAVE_vec_shr_v8hi)
    vec_shr_optab->handlers[V8HImode].insn_code = CODE_FOR_vec_shr_v8hi;
  if (HAVE_vec_shr_v16qi)
    vec_shr_optab->handlers[V16QImode].insn_code = CODE_FOR_vec_shr_v16qi;
  if (HAVE_vec_shr_v4sf)
    vec_shr_optab->handlers[V4SFmode].insn_code = CODE_FOR_vec_shr_v4sf;
  if (HAVE_reduc_splus_v8hi)
    reduc_splus_optab->handlers[V8HImode].insn_code = CODE_FOR_reduc_splus_v8hi;
  if (HAVE_reduc_splus_v16qi)
    reduc_splus_optab->handlers[V16QImode].insn_code = CODE_FOR_reduc_splus_v16qi;
  if (HAVE_reduc_uplus_v16qi)
    reduc_uplus_optab->handlers[V16QImode].insn_code = CODE_FOR_reduc_uplus_v16qi;
  if (HAVE_negv4si2)
    neg_optab->handlers[V4SImode].insn_code = CODE_FOR_negv4si2;
  if (HAVE_negv8hi2)
    neg_optab->handlers[V8HImode].insn_code = CODE_FOR_negv8hi2;
  if (HAVE_negv16qi2)
    neg_optab->handlers[V16QImode].insn_code = CODE_FOR_negv16qi2;
  if (HAVE_udot_prodv8hi)
    udot_prod_optab->handlers[V8HImode].insn_code = CODE_FOR_udot_prodv8hi;
  if (HAVE_udot_prodv16qi)
    udot_prod_optab->handlers[V16QImode].insn_code = CODE_FOR_udot_prodv16qi;
  if (HAVE_sdot_prodv8hi)
    sdot_prod_optab->handlers[V8HImode].insn_code = CODE_FOR_sdot_prodv8hi;
  if (HAVE_widen_usumv8hi3)
    usum_widen_optab->handlers[V8HImode].insn_code = CODE_FOR_widen_usumv8hi3;
  if (HAVE_widen_usumv16qi3)
    usum_widen_optab->handlers[V16QImode].insn_code = CODE_FOR_widen_usumv16qi3;
  if (HAVE_widen_ssumv16qi3)
    ssum_widen_optab->handlers[V16QImode].insn_code = CODE_FOR_widen_ssumv16qi3;
  if (HAVE_widen_ssumv8hi3)
    ssum_widen_optab->handlers[V8HImode].insn_code = CODE_FOR_widen_ssumv8hi3;
  if (HAVE_negv4sf2)
    negv_optab->handlers[V4SFmode].insn_code =
    neg_optab->handlers[V4SFmode].insn_code = CODE_FOR_negv4sf2;

#ifdef FIXUNS_TRUNC_LIKE_FIX_TRUNC
  /* This flag says the same insns that convert to a signed fixnum
     also convert validly to an unsigned one.  */
  for (i = 0; i < NUM_MACHINE_MODES; i++)
    for (j = 0; j < NUM_MACHINE_MODES; j++)
      ufixtrunc_optab->handlers[i][j].insn_code
      = sfixtrunc_optab->handlers[i][j].insn_code;
#endif
}
