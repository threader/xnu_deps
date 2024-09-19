/* Generated automatically by the program `genattrtab'
from the machine description file `md'.  */

#include "config.h"
#include "system.h"
#include "coretypes.h"
#include "tm.h"
#include "rtl.h"
#include "tm_p.h"
#include "insn-config.h"
#include "recog.h"
#include "regs.h"
#include "real.h"
#include "output.h"
#include "insn-attr.h"
#include "toplev.h"
#include "flags.h"
#include "function.h"

#define operands recog_data.operand

enum attr_type
get_attr_type (rtx insn ATTRIBUTE_UNUSED)
{
  switch (recog_memoized (insn))
    {
    case 626:  /* *movv4sf_internal */
    case 625:  /* *movv16qi_internal */
    case 624:  /* *movv8hi_internal */
    case 623:  /* *movv4si_internal */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return TYPE_VECSTORE;
        }
      else if (which_alternative == 1)
        {
	  return TYPE_VECLOAD;
        }
      else if (which_alternative == 2)
        {
	  return TYPE_VECSIMPLE;
        }
      else if (which_alternative == 3)
        {
	  return TYPE_STORE;
        }
      else if (which_alternative == 4)
        {
	  return TYPE_LOAD;
        }
      else
        {
	  return TYPE_INTEGER;
        }

    case 607:  /* *atomic_anddi */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x7))
        {
	  return TYPE_INTEGER;
        }
      else
        {
	  return TYPE_COMPARE;
        }

    case 447:  /* *plus_eqsi */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return TYPE_THREE;
        }
      else if (which_alternative == 1)
        {
	  return TYPE_TWO;
        }
      else
        {
	  return TYPE_THREE;
        }

    case 356:  /* *movti_string */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x3))
        {
	  return TYPE_STORE_UX;
        }
      else if (which_alternative == 2)
        {
	  return TYPE_INTEGER;
        }
      else if (((1 << which_alternative) & 0x18))
        {
	  return TYPE_LOAD_UX;
        }
      else
        {
	  return TYPE_INTEGER;
        }

    case 355:  /* *movdi_internal64 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return TYPE_LOAD;
        }
      else if (which_alternative == 1)
        {
	  return TYPE_STORE;
        }
      else if (((1 << which_alternative) & 0x7c))
        {
	  return TYPE_INTEGER;
        }
      else if (which_alternative == 7)
        {
	  return TYPE_FP;
        }
      else if (which_alternative == 8)
        {
	  return TYPE_FPLOAD;
        }
      else if (which_alternative == 9)
        {
	  return TYPE_FPSTORE;
        }
      else if (which_alternative == 10)
        {
	  return TYPE_MFJMPR;
        }
      else if (which_alternative == 11)
        {
	  return TYPE_MTJMPR;
        }
      else
        {
	  return TYPE_INTEGER;
        }

    case 344:  /* *movdf_softfloat64 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return TYPE_LOAD;
        }
      else if (which_alternative == 1)
        {
	  return TYPE_STORE;
        }
      else if (which_alternative == 2)
        {
	  return TYPE_INTEGER;
        }
      else if (which_alternative == 3)
        {
	  return TYPE_MTJMPR;
        }
      else if (which_alternative == 4)
        {
	  return TYPE_MFJMPR;
        }
      else
        {
	  return TYPE_INTEGER;
        }

    case 343:  /* *movdf_hardfloat64 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return TYPE_STORE;
        }
      else if (which_alternative == 1)
        {
	  return TYPE_LOAD;
        }
      else if (which_alternative == 2)
        {
	  return TYPE_INTEGER;
        }
      else if (which_alternative == 3)
        {
	  return TYPE_FP;
        }
      else if (which_alternative == 4)
        {
	  return TYPE_FPLOAD;
        }
      else if (which_alternative == 5)
        {
	  return TYPE_FPSTORE;
        }
      else if (which_alternative == 6)
        {
	  return TYPE_MTJMPR;
        }
      else if (which_alternative == 7)
        {
	  return TYPE_MFJMPR;
        }
      else
        {
	  return TYPE_INTEGER;
        }

    case 342:  /* *movdf_softfloat32 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return TYPE_TWO;
        }
      else if (which_alternative == 1)
        {
	  return TYPE_LOAD;
        }
      else if (which_alternative == 2)
        {
	  return TYPE_STORE;
        }
      else
        {
	  return TYPE_INTEGER;
        }

    case 341:  /* *movdf_hardfloat32 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return TYPE_TWO;
        }
      else if (which_alternative == 1)
        {
	  return TYPE_LOAD;
        }
      else if (which_alternative == 2)
        {
	  return TYPE_STORE;
        }
      else if (which_alternative == 3)
        {
	  return TYPE_FP;
        }
      else if (which_alternative == 4)
        {
	  return TYPE_FPLOAD;
        }
      else if (which_alternative == 5)
        {
	  return TYPE_FPSTORE;
        }
      else
        {
	  return TYPE_INTEGER;
        }

    case 340:  /* *movsf_softfloat */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return TYPE_INTEGER;
        }
      else if (which_alternative == 1)
        {
	  return TYPE_MTJMPR;
        }
      else if (which_alternative == 2)
        {
	  return TYPE_INTEGER;
        }
      else if (which_alternative == 3)
        {
	  return TYPE_MFJMPR;
        }
      else if (which_alternative == 4)
        {
	  return TYPE_LOAD;
        }
      else if (which_alternative == 5)
        {
	  return TYPE_STORE;
        }
      else
        {
	  return TYPE_INTEGER;
        }

    case 339:  /* *movsf_hardfloat */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return TYPE_INTEGER;
        }
      else if (which_alternative == 1)
        {
	  return TYPE_LOAD;
        }
      else if (which_alternative == 2)
        {
	  return TYPE_STORE;
        }
      else if (which_alternative == 3)
        {
	  return TYPE_FP;
        }
      else if (which_alternative == 4)
        {
	  return TYPE_FPLOAD;
        }
      else if (which_alternative == 5)
        {
	  return TYPE_FPSTORE;
        }
      else if (which_alternative == 6)
        {
	  return TYPE_MTJMPR;
        }
      else if (which_alternative == 7)
        {
	  return TYPE_INTEGER;
        }
      else if (which_alternative == 8)
        {
	  return TYPE_MFJMPR;
        }
      else
        {
	  return TYPE_INTEGER;
        }

    case 333:  /* *movsi_internal1 */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x3))
        {
	  return TYPE_INTEGER;
        }
      else if (which_alternative == 2)
        {
	  return TYPE_LOAD;
        }
      else if (which_alternative == 3)
        {
	  return TYPE_STORE;
        }
      else if (((1 << which_alternative) & 0xf0))
        {
	  return TYPE_INTEGER;
        }
      else if (which_alternative == 8)
        {
	  return TYPE_MFJMPR;
        }
      else if (which_alternative == 9)
        {
	  return TYPE_INTEGER;
        }
      else if (which_alternative == 10)
        {
	  return TYPE_MTJMPR;
        }
      else
        {
	  return TYPE_INTEGER;
        }

    case 320:  /* anddi3 */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x7))
        {
	  return TYPE_INTEGER;
        }
      else if (((1 << which_alternative) & 0x18))
        {
	  return TYPE_COMPARE;
        }
      else
        {
	  return TYPE_INTEGER;
        }

    case 216:  /* *extendsfdf2_fpr */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x3))
        {
	  return TYPE_FP;
        }
      else
        {
	  return TYPE_FPLOAD;
        }

    case 156:  /* *andsi3_internal5 */
    case 155:  /* *andsi3_internal4 */
    case 154:  /* *andsi3_internal3 */
    case 153:  /* *andsi3_internal2 */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x7))
        {
	  return TYPE_COMPARE;
        }
      else if (which_alternative == 3)
        {
	  return TYPE_DELAYED_COMPARE;
        }
      else
        {
	  return TYPE_COMPARE;
        }

    case 606:  /* *atomic_andsi */
    case 152:  /* andsi3 */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x3))
        {
	  return TYPE_INTEGER;
        }
      else
        {
	  return TYPE_COMPARE;
        }

    case 107:  /* *adddi3_internal3 */
    case 106:  /* *addsi3_internal3 */
    case 105:  /* *adddi3_internal2 */
    case 104:  /* *addsi3_internal2 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return TYPE_FAST_COMPARE;
        }
      else
        {
	  return TYPE_COMPARE;
        }

    case 34:  /* *zero_extendqidi2_internal1 */
    case 35:  /* *zero_extendhidi2_internal1 */
    case 36:  /* *zero_extendsidi2_internal1 */
    case 52:  /* *rs6000.md:444 */
    case 58:  /* *rs6000.md:610 */
    case 64:  /* *rs6000.md:778 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return TYPE_LOAD;
        }
      else
        {
	  return TYPE_INTEGER;
        }

    case 46:  /* *rs6000.md:310 */
    case 49:  /* *rs6000.md:377 */
    case 67:  /* *rs6000.md:845 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return TYPE_LOAD_EXT;
        }
      else
        {
	  return TYPE_INTEGER;
        }

    case 133:  /* mulsi3_no_mq */
      extract_insn_cached (insn);
      if (s8bit_cint_operand (operands[2], SImode))
        {
	  return TYPE_IMUL3;
        }
      else if (short_cint_operand (operands[2], SImode))
        {
	  return TYPE_IMUL2;
        }
      else
        {
	  return TYPE_IMUL;
        }

    case 281:  /* ashrdi3_no_power */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return TYPE_TWO;
        }
      else
        {
	  return TYPE_THREE;
        }

    case 285:  /* muldi3 */
      extract_insn_cached (insn);
      if (s8bit_cint_operand (operands[2], SImode))
        {
	  return TYPE_IMUL3;
        }
      else if (short_cint_operand (operands[2], SImode))
        {
	  return TYPE_IMUL2;
        }
      else
        {
	  return TYPE_LMUL;
        }

    case 334:  /* *movsi_internal2 */
    case 335:  /* *movdi_internal2 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return TYPE_CMP;
        }
      else if (which_alternative == 1)
        {
	  return TYPE_COMPARE;
        }
      else
        {
	  return TYPE_CMP;
        }

    case 336:  /* *movhi_internal */
    case 337:  /* *movqi_internal */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return TYPE_INTEGER;
        }
      else if (which_alternative == 1)
        {
	  return TYPE_LOAD;
        }
      else if (which_alternative == 2)
        {
	  return TYPE_STORE;
        }
      else if (which_alternative == 3)
        {
	  return TYPE_INTEGER;
        }
      else if (which_alternative == 4)
        {
	  return TYPE_MFJMPR;
        }
      else if (which_alternative == 5)
        {
	  return TYPE_INTEGER;
        }
      else if (which_alternative == 6)
        {
	  return TYPE_MTJMPR;
        }
      else
        {
	  return TYPE_INTEGER;
        }

    case 338:  /* *movcc_internal1 */
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x9))
        {
	  return TYPE_CR_LOGICAL;
        }
      else if (((1 << which_alternative) & 0x6))
        {
	  return TYPE_MTCR;
        }
      else if (((1 << which_alternative) & 0x2c0))
        {
	  return TYPE_INTEGER;
        }
      else if (which_alternative == 8)
        {
	  return TYPE_MFJMPR;
        }
      else if (which_alternative == 10)
        {
	  return TYPE_MTJMPR;
        }
      else if (which_alternative == 11)
        {
	  return TYPE_LOAD;
        }
      else if (which_alternative == 12)
        {
	  return TYPE_STORE;
        }
      else if ((
#line 7990 "../../gcc/config/rs6000/rs6000.md"
(TARGET_MFCRF)) != (0))
        {
	  return TYPE_MFCRF;
        }
      else
        {
	  return TYPE_MFCR;
        }

    case 354:  /* *movdi_internal32 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return TYPE_LOAD;
        }
      else if (which_alternative == 1)
        {
	  return TYPE_INTEGER;
        }
      else if (which_alternative == 2)
        {
	  return TYPE_STORE;
        }
      else if (which_alternative == 3)
        {
	  return TYPE_FP;
        }
      else if (which_alternative == 4)
        {
	  return TYPE_FPLOAD;
        }
      else if (which_alternative == 5)
        {
	  return TYPE_FPSTORE;
        }
      else
        {
	  return TYPE_INTEGER;
        }

    case 357:  /* *movti_ppc64 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return TYPE_INTEGER;
        }
      else if (which_alternative == 1)
        {
	  return TYPE_LOAD;
        }
      else
        {
	  return TYPE_STORE;
        }

    case 387:  /* *movhi_update3 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return TYPE_LOAD_EXT_UX;
        }
      else
        {
	  return TYPE_LOAD_EXT_U;
        }

    case 379:  /* *movdi_update1 */
    case 382:  /* *movsi_update1 */
    case 385:  /* *movhi_update1 */
    case 386:  /* *movhi_update2 */
    case 389:  /* *movqi_update1 */
    case 390:  /* *movqi_update2 */
    case 394:  /* *movsf_update3 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return TYPE_LOAD_UX;
        }
      else
        {
	  return TYPE_LOAD_U;
        }

    case 380:  /* movdi_si_update */
    case 381:  /* movdi_di_update */
    case 384:  /* movsi_update */
    case 388:  /* *movhi_update4 */
    case 391:  /* *movqi_update3 */
    case 395:  /* *movsf_update4 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return TYPE_STORE_UX;
        }
      else
        {
	  return TYPE_STORE_U;
        }

    case 392:  /* *movsf_update1 */
    case 396:  /* *movdf_update1 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return TYPE_FPLOAD_UX;
        }
      else
        {
	  return TYPE_FPLOAD_U;
        }

    case 393:  /* *movsf_update2 */
    case 397:  /* *movdf_update2 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return TYPE_FPSTORE_UX;
        }
      else
        {
	  return TYPE_FPSTORE_U;
        }

    case 438:  /* *rs6000.md:11821 */
      extract_constrain_insn_cached (insn);
      if ((
#line 11829 "../../gcc/config/rs6000/rs6000.md"
(TARGET_MFCRF)) != (0))
        {
	  return TYPE_MFCRF;
        }
      else
        {
	  return TYPE_MFCR;
        }

    case 439:  /* *rs6000.md:11853 */
      extract_constrain_insn_cached (insn);
      if ((
#line 11861 "../../gcc/config/rs6000/rs6000.md"
(TARGET_MFCRF)) != (0))
        {
	  return TYPE_MFCRF;
        }
      else
        {
	  return TYPE_MFCR;
        }

    case 441:  /* *rs6000.md:11898 */
      extract_constrain_insn_cached (insn);
      if ((
#line 11922 "../../gcc/config/rs6000/rs6000.md"
(TARGET_MFCRF)) != (0))
        {
	  return TYPE_MFCRF;
        }
      else
        {
	  return TYPE_MFCR;
        }

    case 520:  /* *cceq_ior_compare */
    case 521:  /* *rs6000.md:13778 */
    case 522:  /* *cceq_rev_compare */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return TYPE_CR_LOGICAL;
        }
      else
        {
	  return TYPE_DELAYED_CR;
        }

    case 563:  /* store_conditional_si */
    case 564:  /* store_conditional_di */
      return TYPE_STORE_C;

    case 561:  /* load_locked_si */
    case 562:  /* load_locked_di */
      return TYPE_LOAD_L;

    case 560:  /* *sync_internal */
    case 614:  /* lwsync */
      return TYPE_SYNC;

    case 613:  /* isync */
      return TYPE_ISYNC;

    case 634:  /* addv4sf3 */
    case 645:  /* subv4sf3 */
    case 672:  /* altivec_vmaddfp */
    case 673:  /* altivec_vnmsubfp */
    case 769:  /* ftruncv4sf2 */
    case 774:  /* altivec_vrfip */
    case 775:  /* altivec_vrfin */
    case 776:  /* altivec_vrfim */
    case 777:  /* altivec_vcfux */
    case 778:  /* altivec_vcfsx */
    case 779:  /* altivec_vctuxs */
    case 780:  /* altivec_vctsxs */
    case 781:  /* altivec_vlogefp */
    case 782:  /* altivec_vexptefp */
    case 783:  /* altivec_vrsqrtefp */
    case 784:  /* altivec_vrefp */
      return TYPE_VECFLOAT;

    case 698:  /* altivec_vmrghb */
    case 699:  /* altivec_vmrghh */
    case 700:  /* altivec_vmrghw */
    case 701:  /* altivec_vmrglb */
    case 702:  /* altivec_vmrglh */
    case 703:  /* altivec_vmrglw */
    case 732:  /* altivec_vpkuhum */
    case 733:  /* altivec_vpkuwum */
    case 734:  /* altivec_vpkpx */
    case 735:  /* altivec_vpkshss */
    case 736:  /* altivec_vpkswss */
    case 737:  /* altivec_vpkuhus */
    case 738:  /* altivec_vpkshus */
    case 739:  /* altivec_vpkuwus */
    case 740:  /* altivec_vpkswus */
    case 747:  /* altivec_vsl */
    case 748:  /* altivec_vslo */
    case 755:  /* altivec_vsr */
    case 756:  /* altivec_vsro */
    case 762:  /* altivec_vspltb */
    case 763:  /* altivec_vsplth */
    case 764:  /* altivec_vspltw */
    case 765:  /* *altivec_vspltsf */
    case 766:  /* altivec_vspltisw */
    case 767:  /* altivec_vspltish */
    case 768:  /* altivec_vspltisb */
    case 770:  /* altivec_vperm_v4si */
    case 771:  /* altivec_vperm_v8hi */
    case 772:  /* altivec_vperm_v16qi */
    case 773:  /* altivec_vperm_v4sf */
    case 785:  /* altivec_vsel_v4si */
    case 786:  /* altivec_vsel_v4sf */
    case 787:  /* altivec_vsel_v8hi */
    case 788:  /* altivec_vsel_v16qi */
    case 789:  /* altivec_vsldoi_v4si */
    case 790:  /* altivec_vsldoi_v8hi */
    case 791:  /* altivec_vsldoi_v16qi */
    case 792:  /* altivec_vsldoi_v4sf */
    case 793:  /* altivec_vupkhsb */
    case 794:  /* altivec_vupkhpx */
    case 795:  /* altivec_vupkhsh */
    case 796:  /* altivec_vupklsb */
    case 797:  /* altivec_vupklpx */
    case 798:  /* altivec_vupklsh */
    case 832:  /* vec_realign_load_v4si */
    case 833:  /* vec_realign_load_v8hi */
    case 834:  /* vec_realign_load_v16qi */
    case 835:  /* vec_realign_load_v4sf */
      return TYPE_VECPERM;

    case 659:  /* altivec_vcmpbfp */
    case 663:  /* altivec_vcmpeqfp */
    case 664:  /* altivec_vcmpgefp */
    case 671:  /* altivec_vcmpgtfp */
    case 687:  /* smaxv4sf3 */
    case 694:  /* sminv4sf3 */
    case 799:  /* altivec_predicate_v4sf */
    case 800:  /* altivec_predicate_vcmpequw */
    case 801:  /* altivec_predicate_vcmpgtsw */
    case 802:  /* altivec_predicate_vcmpgtuw */
    case 803:  /* altivec_predicate_vcmpgtuh */
    case 804:  /* altivec_predicate_vcmpgtsh */
    case 805:  /* altivec_predicate_vcmpequh */
    case 806:  /* altivec_predicate_vcmpequb */
    case 807:  /* altivec_predicate_vcmpgtsb */
    case 808:  /* altivec_predicate_vcmpgtub */
      return TYPE_VECCMP;

    case 674:  /* altivec_vmsumuhm */
    case 675:  /* altivec_vmsumubm */
    case 676:  /* altivec_vmsummhm */
    case 677:  /* altivec_vmsummbm */
    case 678:  /* altivec_vmsumshm */
    case 679:  /* altivec_vmsumuhs */
    case 680:  /* altivec_vmsumshs */
    case 695:  /* altivec_vmhaddshs */
    case 696:  /* altivec_vmhraddshs */
    case 697:  /* altivec_vmladduhm */
    case 704:  /* altivec_vmuleub */
    case 705:  /* altivec_vmulesb */
    case 706:  /* altivec_vmuleuh */
    case 707:  /* altivec_vmulesh */
    case 708:  /* altivec_vmuloub */
    case 709:  /* altivec_vmulosb */
    case 710:  /* altivec_vmulouh */
    case 711:  /* altivec_vmulosh */
    case 757:  /* altivec_vsum4ubs */
    case 758:  /* altivec_vsum4shs */
    case 759:  /* altivec_vsum4sbs */
    case 760:  /* altivec_vsum2sws */
    case 761:  /* altivec_vsumsws */
    case 831:  /* altivec_vsumsws_nomode */
      return TYPE_VECCOMPLEX;

    case 631:  /* addv4si3 */
    case 632:  /* addv8hi3 */
    case 633:  /* addv16qi3 */
    case 635:  /* altivec_vaddcuw */
    case 636:  /* altivec_vadduws */
    case 637:  /* altivec_vadduhs */
    case 638:  /* altivec_vaddubs */
    case 639:  /* altivec_vaddsws */
    case 640:  /* altivec_vaddshs */
    case 641:  /* altivec_vaddsbs */
    case 642:  /* subv4si3 */
    case 643:  /* subv8hi3 */
    case 644:  /* subv16qi3 */
    case 646:  /* altivec_vsubcuw */
    case 647:  /* altivec_vsubuws */
    case 648:  /* altivec_vsubuhs */
    case 649:  /* altivec_vsububs */
    case 650:  /* altivec_vsubsws */
    case 651:  /* altivec_vsubshs */
    case 652:  /* altivec_vsubsbs */
    case 653:  /* altivec_vavguw */
    case 654:  /* altivec_vavguh */
    case 655:  /* altivec_vavgub */
    case 656:  /* altivec_vavgsw */
    case 657:  /* altivec_vavgsh */
    case 658:  /* altivec_vavgsb */
    case 660:  /* altivec_vcmpequb */
    case 661:  /* altivec_vcmpequh */
    case 662:  /* altivec_vcmpequw */
    case 665:  /* altivec_vcmpgtub */
    case 666:  /* altivec_vcmpgtsb */
    case 667:  /* altivec_vcmpgtuh */
    case 668:  /* altivec_vcmpgtsh */
    case 669:  /* altivec_vcmpgtuw */
    case 670:  /* altivec_vcmpgtsw */
    case 681:  /* umaxv4si3 */
    case 682:  /* umaxv8hi3 */
    case 683:  /* umaxv16qi3 */
    case 684:  /* smaxv4si3 */
    case 685:  /* smaxv8hi3 */
    case 686:  /* smaxv16qi3 */
    case 688:  /* uminv4si3 */
    case 689:  /* uminv8hi3 */
    case 690:  /* uminv16qi3 */
    case 691:  /* sminv4si3 */
    case 692:  /* sminv8hi3 */
    case 693:  /* sminv16qi3 */
    case 712:  /* andv4si3 */
    case 713:  /* andv8hi3 */
    case 714:  /* andv16qi3 */
    case 715:  /* iorv4si3 */
    case 716:  /* iorv8hi3 */
    case 717:  /* iorv16qi3 */
    case 718:  /* xorv4si3 */
    case 719:  /* xorv8hi3 */
    case 720:  /* xorv16qi3 */
    case 721:  /* xorv4sf3 */
    case 722:  /* one_cmplv4si2 */
    case 723:  /* one_cmplv8hi2 */
    case 724:  /* one_cmplv16qi2 */
    case 725:  /* altivec_norv4si3 */
    case 726:  /* altivec_norv8hi3 */
    case 727:  /* altivec_norv16qi3 */
    case 728:  /* andcv4si3 */
    case 729:  /* andcv8hi3 */
    case 730:  /* andcv16qi3 */
    case 731:  /* *andc3_v4sf */
    case 741:  /* altivec_vrlw */
    case 742:  /* altivec_vrlh */
    case 743:  /* altivec_vrlb */
    case 744:  /* altivec_vslw */
    case 745:  /* altivec_vslh */
    case 746:  /* altivec_vslb */
    case 749:  /* lshrv4si3 */
    case 750:  /* lshrv8hi3 */
    case 751:  /* lshrv16qi3 */
    case 752:  /* ashrv4si3 */
    case 753:  /* ashrv8hi3 */
    case 754:  /* ashrv16qi3 */
    case 809:  /* altivec_mtvscr */
    case 810:  /* altivec_mfvscr */
    case 811:  /* altivec_dssall */
    case 812:  /* altivec_dss */
    case 813:  /* altivec_dst */
    case 814:  /* altivec_dstt */
    case 815:  /* altivec_dstst */
    case 816:  /* altivec_dststt */
      return TYPE_VECSIMPLE;

    case 22:  /* *call_indirect_nonlocal_darwin64 */
    case 24:  /* *call_value_indirect_nonlocal_darwin64 */
    case 404:  /* *call_indirect_nonlocal_sysvsi */
    case 405:  /* *call_indirect_nonlocal_sysvdi */
    case 408:  /* *call_value_indirect_nonlocal_sysvsi */
    case 409:  /* *call_value_indirect_nonlocal_sysvdi */
    case 517:  /* *rs6000.md:13702 */
    case 519:  /* *rs6000.md:13733 */
    case 525:  /* return */
    case 526:  /* *indirect_jumpsi */
    case 527:  /* *indirect_jumpdi */
    case 528:  /* *tablejumpsi_internal1 */
    case 529:  /* *tablejumpdi_internal1 */
    case 552:  /* *return_internal_si */
    case 553:  /* *return_internal_di */
      return TYPE_JMPREG;

    case 244:  /* *rs6000.md:5234 */
    case 260:  /* sqrtdf2 */
      return TYPE_DSQRT;

    case 243:  /* *rs6000.md:5227 */
      return TYPE_SSQRT;

    case 230:  /* *rs6000.md:5099 */
    case 253:  /* *divdf3_fpr */
      return TYPE_DDIV;

    case 229:  /* *rs6000.md:5091 */
      return TYPE_SDIV;

    case 227:  /* *rs6000.md:5062 */
    case 232:  /* *rs6000.md:5116 */
    case 234:  /* *rs6000.md:5134 */
    case 237:  /* *rs6000.md:5163 */
    case 238:  /* *rs6000.md:5172 */
    case 241:  /* *rs6000.md:5202 */
    case 242:  /* *rs6000.md:5211 */
    case 252:  /* *muldf3_fpr */
    case 254:  /* *rs6000.md:5501 */
    case 255:  /* *rs6000.md:5510 */
    case 256:  /* *rs6000.md:5519 */
    case 257:  /* *rs6000.md:5529 */
    case 258:  /* *rs6000.md:5539 */
    case 259:  /* *rs6000.md:5549 */
      return TYPE_DMUL;

    case 217:  /* *truncdfsf2_fpr */
    case 218:  /* aux_truncdfsf2 */
    case 219:  /* *negsf2 */
    case 220:  /* *abssf2 */
    case 221:  /* *rs6000.md:4994 */
    case 222:  /* *rs6000.md:5008 */
    case 223:  /* *rs6000.md:5016 */
    case 224:  /* *rs6000.md:5031 */
    case 225:  /* *rs6000.md:5039 */
    case 226:  /* *rs6000.md:5054 */
    case 228:  /* fres */
    case 231:  /* *rs6000.md:5107 */
    case 233:  /* *rs6000.md:5125 */
    case 235:  /* *rs6000.md:5143 */
    case 236:  /* *rs6000.md:5153 */
    case 239:  /* *rs6000.md:5182 */
    case 240:  /* *rs6000.md:5192 */
    case 245:  /* *fselsfsf4 */
    case 246:  /* *fseldfsf4 */
    case 247:  /* *negdf2_fpr */
    case 248:  /* *absdf2_fpr */
    case 249:  /* *nabsdf2_fpr */
    case 250:  /* *adddf3_fpr */
    case 251:  /* *subdf3_fpr */
    case 261:  /* *fseldfdf4 */
    case 262:  /* *fselsfdf4 */
    case 267:  /* fctiwz */
    case 269:  /* floatdidf2 */
    case 272:  /* fix_truncdfdi2 */
    case 348:  /* trunctfdf2_internal1 */
    case 349:  /* trunctfdf2_internal2 */
    case 351:  /* fix_trunc_helper */
    case 353:  /* negtf2 */
      return TYPE_FP;

    case 549:  /* *movsi_to_cr */
    case 550:  /* *mtcrfsi */
      return TYPE_MTCR;

    case 542:  /* *movesi_from_cr_one */
      return TYPE_MFCRF;

    case 543:  /* movesi_from_cr */
    case 1169:  /* define_peephole, line 11986 */
    case 1170:  /* define_peephole, line 12000 */
      return TYPE_MFCR;

    case 434:  /* *cmpsf_internal1 */
    case 435:  /* *cmpdf_internal1 */
    case 436:  /* *cmptf_internal1 */
      return TYPE_FPCOMPARE;

    case 286:  /* *muldi3_internal1 */
    case 287:  /* *muldi3_internal2 */
      return TYPE_LMUL_COMPARE;

    case 134:  /* *mulsi3_no_mq_internal1 */
    case 135:  /* *mulsi3_no_mq_internal2 */
      return TYPE_IMUL_COMPARE;

    case 184:  /* *rotlsi3_internal2 */
    case 185:  /* *rotlsi3_internal3 */
    case 187:  /* *rotlsi3_internal5 */
    case 188:  /* *rotlsi3_internal6 */
    case 190:  /* *rotlsi3_internal8 */
    case 191:  /* *rotlsi3_internal9 */
    case 193:  /* *rotlsi3_internal11 */
    case 194:  /* *rotlsi3_internal12 */
    case 196:  /* *rs6000.md:4169 */
    case 197:  /* *rs6000.md:4230 */
    case 199:  /* *rs6000.md:4267 */
    case 200:  /* *rs6000.md:4299 */
    case 202:  /* *rs6000.md:4402 */
    case 203:  /* *rs6000.md:4467 */
    case 205:  /* *rs6000.md:4506 */
    case 206:  /* *rs6000.md:4538 */
    case 208:  /* *rs6000.md:4580 */
    case 209:  /* *rs6000.md:4615 */
    case 211:  /* *rs6000.md:4659 */
    case 212:  /* *rs6000.md:4694 */
    case 214:  /* *rs6000.md:4820 */
    case 215:  /* *rs6000.md:4881 */
    case 291:  /* *rotldi3_internal2 */
    case 292:  /* *rotldi3_internal3 */
    case 294:  /* *rotldi3_internal5 */
    case 295:  /* *rotldi3_internal6 */
    case 297:  /* *rotldi3_internal8 */
    case 298:  /* *rotldi3_internal9 */
    case 300:  /* *rotldi3_internal11 */
    case 301:  /* *rotldi3_internal12 */
    case 303:  /* *rotldi3_internal14 */
    case 304:  /* *rotldi3_internal15 */
    case 306:  /* *ashldi3_internal2 */
    case 307:  /* *ashldi3_internal3 */
    case 315:  /* *lshrdi3_internal2 */
    case 316:  /* *lshrdi3_internal3 */
    case 318:  /* *ashrdi3_internal2 */
    case 319:  /* *ashrdi3_internal3 */
    case 440:  /* *rs6000.md:11867 */
    case 442:  /* *rs6000.md:11928 */
      return TYPE_DELAYED_COMPARE;

    case 37:  /* *zero_extendqidi2_internal2 */
    case 38:  /* *zero_extendhidi2_internal2 */
    case 39:  /* *zero_extendsidi2_internal2 */
    case 40:  /* *zero_extendqidi2_internal3 */
    case 41:  /* *zero_extendhidi2_internal3 */
    case 42:  /* *zero_extendsidi2_internal3 */
    case 44:  /* *rs6000.md:252 */
    case 45:  /* *rs6000.md:277 */
    case 47:  /* *rs6000.md:319 */
    case 48:  /* *rs6000.md:344 */
    case 50:  /* *rs6000.md:386 */
    case 51:  /* *rs6000.md:411 */
    case 53:  /* *rs6000.md:453 */
    case 54:  /* *rs6000.md:478 */
    case 56:  /* *rs6000.md:526 */
    case 57:  /* *rs6000.md:551 */
    case 59:  /* *rs6000.md:619 */
    case 60:  /* *rs6000.md:644 */
    case 62:  /* *rs6000.md:692 */
    case 63:  /* *rs6000.md:717 */
    case 65:  /* *rs6000.md:787 */
    case 66:  /* *rs6000.md:812 */
    case 68:  /* *rs6000.md:854 */
    case 69:  /* *rs6000.md:879 */
    case 110:  /* *rs6000.md:1593 */
    case 111:  /* *rs6000.md:1593 */
    case 112:  /* *rs6000.md:1618 */
    case 113:  /* *rs6000.md:1618 */
    case 117:  /* *rs6000.md:1661 */
    case 120:  /* *rs6000.md:1702 */
    case 142:  /* *rs6000.md:2495 */
    case 143:  /* *rs6000.md:2495 */
    case 144:  /* *rs6000.md:2523 */
    case 145:  /* *rs6000.md:2523 */
    case 159:  /* *boolsi3_internal2 */
    case 160:  /* *boolsi3_internal3 */
    case 162:  /* *boolcsi3_internal2 */
    case 163:  /* *boolcsi3_internal3 */
    case 165:  /* *boolccsi3_internal2 */
    case 166:  /* *boolccsi3_internal3 */
    case 178:  /* *extzvsi_internal1 */
    case 179:  /* *extzvsi_internal2 */
    case 181:  /* *extzvdi_internal1 */
    case 182:  /* *extzvdi_internal2 */
    case 309:  /* ashldi3_internal5 */
    case 310:  /* *ashldi3_internal6 */
    case 312:  /* ashldi3_internal8 */
    case 313:  /* *ashldi3_internal9 */
    case 321:  /* *anddi3_internal2 */
    case 322:  /* *anddi3_internal3 */
    case 324:  /* *booldi3_internal2 */
    case 325:  /* *booldi3_internal3 */
    case 327:  /* *boolcdi3_internal2 */
    case 328:  /* *boolcdi3_internal3 */
    case 330:  /* *boolccdi3_internal2 */
    case 331:  /* *boolccdi3_internal3 */
    case 448:  /* *compare_plus_eqsi */
    case 449:  /* *plus_eqsi_compare */
    case 458:  /* *compare_plus_ne0si */
    case 459:  /* *compare_plus_ne0di */
    case 460:  /* *plus_ne0si_compare */
    case 461:  /* *plus_ne0di_compare */
    case 464:  /* *leusi_compare */
    case 465:  /* *leudi_compare */
    case 468:  /* *rs6000.md:12661 */
    case 469:  /* *rs6000.md:12693 */
    case 474:  /* *rs6000.md:12746 */
    case 475:  /* *rs6000.md:12780 */
    case 488:  /* *geusi_compare */
    case 489:  /* *geudi_compare */
    case 492:  /* *rs6000.md:13188 */
    case 493:  /* *rs6000.md:13222 */
    case 498:  /* *rs6000.md:13281 */
    case 499:  /* *rs6000.md:13317 */
    case 502:  /* *rs6000.md:13403 */
    case 503:  /* *rs6000.md:13435 */
    case 504:  /* *rs6000.md:13467 */
    case 505:  /* *rs6000.md:13500 */
      return TYPE_COMPARE;

    case 118:  /* *rs6000.md:1674 */
    case 119:  /* *rs6000.md:1674 */
    case 121:  /* *rs6000.md:1716 */
    case 122:  /* *rs6000.md:1716 */
    case 127:  /* *rs6000.md:2053 */
    case 128:  /* *rs6000.md:2053 */
    case 129:  /* *rs6000.md:2078 */
    case 130:  /* *rs6000.md:2078 */
      return TYPE_FAST_COMPARE;

    case 428:  /* *cmpsi_internal1 */
    case 429:  /* *cmpdi_internal1 */
    case 430:  /* *cmpsi_internal2 */
    case 431:  /* *cmpdi_internal2 */
      return TYPE_CMP;

    case 16:  /* load_macho_picbase_si */
    case 17:  /* load_macho_picbase_di */
    case 23:  /* *call_nonlocal_darwin64 */
    case 25:  /* *call_value_nonlocal_darwin64 */
    case 26:  /* *sibcall_nonlocal_darwin64 */
    case 27:  /* *sibcall_value_nonlocal_darwin64 */
    case 28:  /* *sibcall_symbolic_64 */
    case 29:  /* *sibcall_value_symbolic_64 */
    case 30:  /* *save_fpregs_with_label_di */
    case 31:  /* *save_vregs_di */
    case 33:  /* *save_vregs_with_label_di */
    case 400:  /* *call_local32 */
    case 401:  /* *call_local64 */
    case 402:  /* *call_value_local32 */
    case 403:  /* *call_value_local64 */
    case 406:  /* *call_nonlocal_sysvsi */
    case 407:  /* *call_nonlocal_sysvdi */
    case 410:  /* *call_value_nonlocal_sysvsi */
    case 411:  /* *call_value_nonlocal_sysvdi */
    case 412:  /* *sibcall_symbolic */
    case 413:  /* *sibcall_value_symbolic */
    case 414:  /* longjump */
    case 415:  /* *sibcall_local32 */
    case 416:  /* *sibcall_local64 */
    case 417:  /* *sibcall_value_local32 */
    case 418:  /* *sibcall_value_local64 */
    case 419:  /* *sibcall_nonlocal_sysvsi */
    case 420:  /* *sibcall_nonlocal_sysvdi */
    case 421:  /* *sibcall_value_nonlocal_sysvsi */
    case 422:  /* *sibcall_value_nonlocal_sysvdi */
    case 516:  /* *rs6000.md:13687 */
    case 518:  /* *rs6000.md:13718 */
    case 524:  /* jump */
    case 531:  /* *ctrsi_internal1 */
    case 532:  /* *ctrdi_internal1 */
    case 533:  /* *ctrsi_internal2 */
    case 534:  /* *ctrdi_internal2 */
    case 535:  /* *ctrsi_internal5 */
    case 536:  /* *ctrdi_internal5 */
    case 537:  /* *ctrsi_internal6 */
    case 538:  /* *ctrdi_internal6 */
    case 545:  /* *save_fpregs_si */
    case 546:  /* *save_fpregs_di */
    case 547:  /* *save_fpregs_with_label_si */
    case 629:  /* *save_world */
      return TYPE_BRANCH;

    case 167:  /* insvsi */
    case 168:  /* *insvsi_internal1 */
    case 169:  /* *insvsi_internal2 */
    case 170:  /* *insvsi_internal3 */
    case 171:  /* *insvsi_internal4 */
    case 172:  /* *insvsi_internal5 */
    case 173:  /* *insvsi_internal6 */
      return TYPE_INSERT_WORD;

    case 136:  /* *udivsi3_no_mq */
    case 137:  /* *udivsi3_no_mq */
    case 138:  /* *divsi3_no_mq */
    case 139:  /* *divdi3_no_mq */
    case 148:  /* divss_call */
    case 149:  /* divus_call */
    case 150:  /* quoss_call */
    case 151:  /* quous_call */
      return TYPE_IDIV;

    case 288:  /* smuldi3_highpart */
    case 289:  /* umuldi3_highpart */
      return TYPE_LMUL;

    case 70:  /* *macchwc */
    case 71:  /* *macchw */
    case 72:  /* *macchwuc */
    case 73:  /* *macchwu */
    case 74:  /* *machhwc */
    case 75:  /* *machhw */
    case 76:  /* *machhwuc */
    case 77:  /* *machhwu */
    case 78:  /* *maclhwc */
    case 79:  /* *maclhw */
    case 80:  /* *maclhwuc */
    case 81:  /* *maclhwu */
    case 82:  /* *nmacchwc */
    case 83:  /* *nmacchw */
    case 84:  /* *nmachhwc */
    case 85:  /* *nmachhw */
    case 86:  /* *nmaclhwc */
    case 87:  /* *nmaclhw */
    case 88:  /* *mulchwc */
    case 89:  /* *mulchw */
    case 90:  /* *mulchwuc */
    case 91:  /* *mulchwu */
    case 92:  /* *mulhhwc */
    case 93:  /* *mulhhw */
    case 94:  /* *mulhhwuc */
    case 95:  /* *mulhhwu */
    case 96:  /* *mullhwc */
    case 97:  /* *mullhw */
    case 98:  /* *mullhwuc */
    case 99:  /* *mullhwu */
      return TYPE_IMUL3;

    case 146:  /* mulh_call */
    case 147:  /* mull_call */
    case 277:  /* *mulsidi3_no_mq */
    case 278:  /* *umulsidi3_no_mq */
    case 279:  /* *smulsi3_highpart_no_mq */
    case 280:  /* *umulsi3_highpart_no_mq */
      return TYPE_IMUL;

    case 619:  /* altivec_stvx_v4si */
    case 620:  /* altivec_stvx_v8hi */
    case 621:  /* altivec_stvx_v16qi */
    case 622:  /* altivec_stvx_v4sf */
    case 825:  /* altivec_stvx */
    case 826:  /* altivec_stvxl */
    case 827:  /* altivec_stvewx */
    case 828:  /* altivec_stvehx */
    case 829:  /* altivec_stvebx */
    case 830:  /* *altivec_stvesfx */
      return TYPE_VECSTORE;

    case 615:  /* altivec_lvx_v4si */
    case 616:  /* altivec_lvx_v8hi */
    case 617:  /* altivec_lvx_v16qi */
    case 618:  /* altivec_lvx_v4sf */
    case 817:  /* altivec_lvsl */
    case 818:  /* altivec_lvsr */
    case 819:  /* altivec_lvewx */
    case 820:  /* altivec_lvehx */
    case 821:  /* altivec_lvebx */
    case 822:  /* *altivec_lvesfx */
    case 823:  /* altivec_lvxl */
    case 824:  /* altivec_lvx */
      return TYPE_VECLOAD;

    case 268:  /* stfiwx */
      return TYPE_FPSTORE;

    case 364:  /* *stmsi8 */
    case 365:  /* *stmsi7 */
    case 366:  /* *stmsi6 */
    case 367:  /* *stmsi5 */
    case 368:  /* *stmsi4 */
    case 369:  /* *stmsi3 */
    case 370:  /* *rs6000.md:9335 */
    case 371:  /* *rs6000.md:9335 */
    case 372:  /* *rs6000.md:9398 */
    case 373:  /* *rs6000.md:9398 */
    case 374:  /* *rs6000.md:9454 */
    case 375:  /* *rs6000.md:9454 */
    case 376:  /* *rs6000.md:9497 */
    case 377:  /* *rs6000.md:9534 */
    case 378:  /* *rs6000.md:9534 */
    case 544:  /* *stmw */
      return TYPE_STORE_UX;

    case 3:  /* movdf_low_st_si */
    case 4:  /* movdf_low_st_di */
    case 7:  /* movsf_low_st_si */
    case 8:  /* movsf_low_st_di */
    case 10:  /* movsi_low_st */
    case 11:  /* movdi_low_st */
      return TYPE_STORE;

    case 358:  /* *ldmsi8 */
    case 359:  /* *ldmsi7 */
    case 360:  /* *ldmsi6 */
    case 361:  /* *ldmsi5 */
    case 362:  /* *ldmsi4 */
    case 363:  /* *ldmsi3 */
    case 551:  /* *lmw */
      return TYPE_LOAD_UX;

    case 383:  /* *movsi_update2 */
      return TYPE_LOAD_EXT_UX;

    case 1:  /* movdf_low_si */
    case 2:  /* movdf_low_di */
    case 5:  /* movsf_low_si */
    case 6:  /* movsf_low_di */
    case 9:  /* movdi_low */
    case 332:  /* movsi_low */
    case 558:  /* prefetch */
      return TYPE_LOAD;

    case 424:  /* stack_protect_setsi */
    case 425:  /* stack_protect_setdi */
    case 462:  /* *leusi */
    case 463:  /* *leudi */
    case 470:  /* *neg_leusi */
    case 471:  /* *neg_leudi */
    case 472:  /* *and_neg_leusi */
    case 473:  /* *and_neg_leudi */
    case 486:  /* *geusi */
    case 487:  /* *geudi */
    case 494:  /* *neg_geusi */
    case 495:  /* *neg_geudi */
    case 496:  /* *and_neg_geusi */
    case 497:  /* *and_neg_geudi */
    case 500:  /* *plus_gt0si */
    case 501:  /* *plus_gt0di */
      return TYPE_THREE;

    case 140:  /* *rs6000.md:2486 */
    case 141:  /* *rs6000.md:2486 */
    case 274:  /* *adddi3_noppc64 */
    case 275:  /* *subdi3_noppc64 */
    case 276:  /* *negdi2_noppc64 */
    case 450:  /* *neg_eq0si */
    case 451:  /* *neg_eq0di */
    case 454:  /* *ne0si */
    case 455:  /* *ne0di */
    case 456:  /* *plus_ne0si */
    case 457:  /* *plus_ne0di */
    case 466:  /* *plus_leusi */
    case 467:  /* *plus_leudi */
    case 484:  /* *neg_ltusi */
    case 485:  /* *neg_ltudi */
    case 490:  /* *plus_geusi */
    case 491:  /* *plus_geudi */
    case 514:  /* *neg_gtusi */
    case 515:  /* *neg_gtudi */
      return TYPE_TWO;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return TYPE_INTEGER;

    }
}

const int length_unit_log = 2;
