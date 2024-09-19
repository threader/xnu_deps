/* Generated automatically by the program `genflags'
   from the machine description file `md'.  */

#ifndef GCC_INSN_FLAGS_H
#define GCC_INSN_FLAGS_H

#define HAVE_adddi3_high (TARGET_MACHO && TARGET_64BIT)
#define HAVE_movdf_low_si (TARGET_MACHO && TARGET_HARD_FLOAT && TARGET_FPRS && !TARGET_64BIT)
#define HAVE_movdf_low_di (TARGET_MACHO && TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_64BIT)
#define HAVE_movdf_low_st_si (TARGET_MACHO && TARGET_HARD_FLOAT && TARGET_FPRS && ! TARGET_64BIT)
#define HAVE_movdf_low_st_di (TARGET_MACHO && TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_64BIT)
#define HAVE_movsf_low_si (TARGET_MACHO && TARGET_HARD_FLOAT && TARGET_FPRS && ! TARGET_64BIT)
#define HAVE_movsf_low_di (TARGET_MACHO && TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_64BIT)
#define HAVE_movsf_low_st_si (TARGET_MACHO && TARGET_HARD_FLOAT && TARGET_FPRS && ! TARGET_64BIT)
#define HAVE_movsf_low_st_di (TARGET_MACHO && TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_64BIT)
#define HAVE_movdi_low (TARGET_MACHO && TARGET_64BIT)
#define HAVE_movsi_low_st (TARGET_MACHO && ! TARGET_64BIT)
#define HAVE_movdi_low_st (TARGET_MACHO && TARGET_64BIT)
#define HAVE_macho_high_si (TARGET_MACHO && ! TARGET_64BIT)
#define HAVE_macho_high_di (TARGET_MACHO && TARGET_64BIT)
#define HAVE_macho_low_si (TARGET_MACHO && ! TARGET_64BIT)
#define HAVE_macho_low_di (TARGET_MACHO && TARGET_64BIT)
#define HAVE_load_macho_picbase_si ((DEFAULT_ABI == ABI_DARWIN) && flag_pic)
#define HAVE_load_macho_picbase_di ((DEFAULT_ABI == ABI_DARWIN) && flag_pic && TARGET_64BIT)
#define HAVE_load_macho_picbase_label_si ((DEFAULT_ABI == ABI_DARWIN) && flag_pic)
#define HAVE_load_macho_picbase_label_di ((DEFAULT_ABI == ABI_DARWIN) && flag_pic && TARGET_64BIT)
#define HAVE_macho_correct_pic_si 1
#define HAVE_macho_correct_pic_di (DEFAULT_ABI == ABI_DARWIN && TARGET_64BIT)
#define HAVE_extendqidi2 (TARGET_POWERPC64)
#define HAVE_extendqisi2_ppc (TARGET_POWERPC)
#define HAVE_extendqihi2_ppc (TARGET_POWERPC)
#define HAVE_dlmzb (TARGET_DLMZB)
#define HAVE_addsi3_high (TARGET_MACHO && !TARGET_64BIT)
#define HAVE_one_cmplsi2 1
#define HAVE_one_cmpldi2 (TARGET_POWERPC64)
#define HAVE_abssi2_nopower 1
#define HAVE_clzsi2 1
#define HAVE_clzdi2 (TARGET_POWERPC64)
#define HAVE_mulsi3_no_mq 1
#define HAVE_mulh_call (! TARGET_POWER && ! TARGET_POWERPC)
#define HAVE_mull_call (! TARGET_POWER && ! TARGET_POWERPC)
#define HAVE_divss_call (! TARGET_POWER && ! TARGET_POWERPC)
#define HAVE_divus_call (! TARGET_POWER && ! TARGET_POWERPC)
#define HAVE_quoss_call (! TARGET_POWER && ! TARGET_POWERPC)
#define HAVE_quous_call (! TARGET_POWER && ! TARGET_POWERPC)
#define HAVE_andsi3 1
#define HAVE_insvsi 1
#define HAVE_insvdi (TARGET_POWERPC64)
#define HAVE_extzvsi 1
#define HAVE_extzvdi (TARGET_POWERPC64)
#define HAVE_rotlsi3 1
#define HAVE_ashlsi3_no_power 1
#define HAVE_rlwinm (includes_lshift_p (operands[2], operands[3]))
#define HAVE_lshrsi3_no_power 1
#define HAVE_ashrsi3_no_power 1
#define HAVE_aux_truncdfsf2 (! TARGET_POWERPC && TARGET_HARD_FLOAT && TARGET_FPRS)
#define HAVE_fres (TARGET_PPC_GFXOPT && flag_finite_math_only)
#define HAVE_sqrtdf2 ((TARGET_PPC_GPOPT || TARGET_POWER2) && TARGET_HARD_FLOAT && TARGET_FPRS)
#define HAVE_fix_truncdfsi2_internal_gfxopt ((TARGET_POWER2 || TARGET_POWERPC) && TARGET_HARD_FLOAT && TARGET_FPRS \
   && TARGET_PPC_GFXOPT)
#define HAVE_fctiwz ((TARGET_POWER2 || TARGET_POWERPC) && TARGET_HARD_FLOAT && TARGET_FPRS)
#define HAVE_stfiwx (TARGET_PPC_GFXOPT)
#define HAVE_floatdidf2 (TARGET_POWERPC64 && TARGET_HARD_FLOAT && TARGET_FPRS)
#define HAVE_floatsidf_ppc64 (TARGET_POWERPC64 && TARGET_HARD_FLOAT && TARGET_FPRS)
#define HAVE_floatunssidf_ppc64 (TARGET_POWERPC64 && TARGET_HARD_FLOAT && TARGET_FPRS)
#define HAVE_fix_truncdfdi2 (TARGET_POWERPC64 && TARGET_HARD_FLOAT && TARGET_FPRS)
#define HAVE_floatdisf2_internal1 (TARGET_POWERPC64 && TARGET_HARD_FLOAT && TARGET_FPRS)
#define HAVE_ashrdi3_no_power (TARGET_32BIT && !TARGET_POWERPC64 && !TARGET_POWER && WORDS_BIG_ENDIAN)
#define HAVE_absdi2 (TARGET_POWERPC64)
#define HAVE_muldi3 (TARGET_POWERPC64)
#define HAVE_smuldi3_highpart (TARGET_POWERPC64)
#define HAVE_umuldi3_highpart (TARGET_POWERPC64)
#define HAVE_rotldi3 (TARGET_POWERPC64)
#define HAVE_ashldi3_internal5 (TARGET_64BIT && includes_rldic_lshift_p (operands[2], operands[3]))
#define HAVE_ashldi3_internal8 (TARGET_64BIT && includes_rldicr_lshift_p (operands[2], operands[3]))
#define HAVE_anddi3 (TARGET_POWERPC64)
#define HAVE_movsi_low (TARGET_MACHO && ! TARGET_64BIT)
#define HAVE_trunctfdf2_internal1 (!TARGET_IEEEQUAD && !TARGET_XL_COMPAT \
   && TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_LONG_DOUBLE_128)
#define HAVE_trunctfdf2_internal2 (!TARGET_IEEEQUAD && TARGET_XL_COMPAT \
   && TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_LONG_DOUBLE_128)
#define HAVE_trunctfsf2 (!TARGET_IEEEQUAD \
   && TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_LONG_DOUBLE_128)
#define HAVE_fix_trunc_helper (TARGET_HARD_FLOAT && TARGET_FPRS)
#define HAVE_negtf2 (!TARGET_IEEEQUAD \
   && TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_LONG_DOUBLE_128)
#define HAVE_movdi_si_update ((TARGET_POWERPC64 && TARGET_UPDATE) && (TARGET_32BIT))
#define HAVE_movdi_di_update ((TARGET_POWERPC64 && TARGET_UPDATE) && (TARGET_64BIT))
#define HAVE_movsi_update (TARGET_UPDATE)
#define HAVE_longjump 1
#define HAVE_blockage 1
#define HAVE_stack_protect_setsi (TARGET_32BIT)
#define HAVE_stack_protect_setdi (TARGET_64BIT)
#define HAVE_stack_protect_testsi (TARGET_32BIT)
#define HAVE_stack_protect_testdi (TARGET_64BIT)
#define HAVE_jump 1
#define HAVE_return (direct_return ())
#define HAVE_nop 1
#define HAVE_trap 1
#define HAVE_movesi_from_cr 1
#define HAVE_stack_tie 1
#define HAVE_eh_set_lr_si (TARGET_32BIT)
#define HAVE_eh_set_lr_di (TARGET_64BIT)
#define HAVE_prefetch (TARGET_POWERPC)
#define HAVE_mffs (TARGET_HARD_FLOAT && TARGET_FPRS)
#define HAVE_load_locked_si (TARGET_POWERPC)
#define HAVE_load_locked_di ((TARGET_POWERPC) && (TARGET_POWERPC64))
#define HAVE_store_conditional_si (TARGET_POWERPC)
#define HAVE_store_conditional_di ((TARGET_POWERPC) && (TARGET_POWERPC64))
#define HAVE_sync_compare_and_swapsi (TARGET_POWERPC)
#define HAVE_sync_compare_and_swapdi ((TARGET_POWERPC) && (TARGET_POWERPC64))
#define HAVE_sync_compare_and_swapqhi_internal (TARGET_POWERPC)
#define HAVE_sync_lock_test_and_setsi (TARGET_POWERPC)
#define HAVE_sync_lock_test_and_setdi ((TARGET_POWERPC) && (TARGET_POWERPC64))
#define HAVE_isync 1
#define HAVE_lwsync 1
#define HAVE_altivec_lvx_v4si (TARGET_ALTIVEC)
#define HAVE_altivec_lvx_v8hi (TARGET_ALTIVEC)
#define HAVE_altivec_lvx_v16qi (TARGET_ALTIVEC)
#define HAVE_altivec_lvx_v4sf (TARGET_ALTIVEC)
#define HAVE_altivec_stvx_v4si (TARGET_ALTIVEC)
#define HAVE_altivec_stvx_v8hi (TARGET_ALTIVEC)
#define HAVE_altivec_stvx_v16qi (TARGET_ALTIVEC)
#define HAVE_altivec_stvx_v4sf (TARGET_ALTIVEC)
#define HAVE_get_vrsave_internal (TARGET_ALTIVEC)
#define HAVE_addv4si3 (TARGET_ALTIVEC)
#define HAVE_addv8hi3 (TARGET_ALTIVEC)
#define HAVE_addv16qi3 (TARGET_ALTIVEC)
#define HAVE_addv4sf3 (TARGET_ALTIVEC)
#define HAVE_altivec_vaddcuw (TARGET_ALTIVEC)
#define HAVE_altivec_vadduws (TARGET_ALTIVEC)
#define HAVE_altivec_vadduhs (TARGET_ALTIVEC)
#define HAVE_altivec_vaddubs (TARGET_ALTIVEC)
#define HAVE_altivec_vaddsws (TARGET_ALTIVEC)
#define HAVE_altivec_vaddshs (TARGET_ALTIVEC)
#define HAVE_altivec_vaddsbs (TARGET_ALTIVEC)
#define HAVE_subv4si3 (TARGET_ALTIVEC)
#define HAVE_subv8hi3 (TARGET_ALTIVEC)
#define HAVE_subv16qi3 (TARGET_ALTIVEC)
#define HAVE_subv4sf3 (TARGET_ALTIVEC)
#define HAVE_altivec_vsubcuw (TARGET_ALTIVEC)
#define HAVE_altivec_vsubuws (TARGET_ALTIVEC)
#define HAVE_altivec_vsubuhs (TARGET_ALTIVEC)
#define HAVE_altivec_vsububs (TARGET_ALTIVEC)
#define HAVE_altivec_vsubsws (TARGET_ALTIVEC)
#define HAVE_altivec_vsubshs (TARGET_ALTIVEC)
#define HAVE_altivec_vsubsbs (TARGET_ALTIVEC)
#define HAVE_altivec_vavguw (TARGET_ALTIVEC)
#define HAVE_altivec_vavguh (TARGET_ALTIVEC)
#define HAVE_altivec_vavgub (TARGET_ALTIVEC)
#define HAVE_altivec_vavgsw (TARGET_ALTIVEC)
#define HAVE_altivec_vavgsh (TARGET_ALTIVEC)
#define HAVE_altivec_vavgsb (TARGET_ALTIVEC)
#define HAVE_altivec_vcmpbfp (TARGET_ALTIVEC)
#define HAVE_altivec_vcmpequb (TARGET_ALTIVEC)
#define HAVE_altivec_vcmpequh (TARGET_ALTIVEC)
#define HAVE_altivec_vcmpequw (TARGET_ALTIVEC)
#define HAVE_altivec_vcmpeqfp (TARGET_ALTIVEC)
#define HAVE_altivec_vcmpgefp (TARGET_ALTIVEC)
#define HAVE_altivec_vcmpgtub (TARGET_ALTIVEC)
#define HAVE_altivec_vcmpgtsb (TARGET_ALTIVEC)
#define HAVE_altivec_vcmpgtuh (TARGET_ALTIVEC)
#define HAVE_altivec_vcmpgtsh (TARGET_ALTIVEC)
#define HAVE_altivec_vcmpgtuw (TARGET_ALTIVEC)
#define HAVE_altivec_vcmpgtsw (TARGET_ALTIVEC)
#define HAVE_altivec_vcmpgtfp (TARGET_ALTIVEC)
#define HAVE_altivec_vmaddfp (TARGET_ALTIVEC)
#define HAVE_altivec_vnmsubfp (TARGET_ALTIVEC)
#define HAVE_altivec_vmsumuhm (TARGET_ALTIVEC)
#define HAVE_altivec_vmsumubm (TARGET_ALTIVEC)
#define HAVE_altivec_vmsummhm (TARGET_ALTIVEC)
#define HAVE_altivec_vmsummbm (TARGET_ALTIVEC)
#define HAVE_altivec_vmsumshm (TARGET_ALTIVEC)
#define HAVE_altivec_vmsumuhs (TARGET_ALTIVEC)
#define HAVE_altivec_vmsumshs (TARGET_ALTIVEC)
#define HAVE_umaxv4si3 (TARGET_ALTIVEC)
#define HAVE_umaxv8hi3 (TARGET_ALTIVEC)
#define HAVE_umaxv16qi3 (TARGET_ALTIVEC)
#define HAVE_smaxv4si3 (TARGET_ALTIVEC)
#define HAVE_smaxv8hi3 (TARGET_ALTIVEC)
#define HAVE_smaxv16qi3 (TARGET_ALTIVEC)
#define HAVE_smaxv4sf3 (TARGET_ALTIVEC)
#define HAVE_uminv4si3 (TARGET_ALTIVEC)
#define HAVE_uminv8hi3 (TARGET_ALTIVEC)
#define HAVE_uminv16qi3 (TARGET_ALTIVEC)
#define HAVE_sminv4si3 (TARGET_ALTIVEC)
#define HAVE_sminv8hi3 (TARGET_ALTIVEC)
#define HAVE_sminv16qi3 (TARGET_ALTIVEC)
#define HAVE_sminv4sf3 (TARGET_ALTIVEC)
#define HAVE_altivec_vmhaddshs (TARGET_ALTIVEC)
#define HAVE_altivec_vmhraddshs (TARGET_ALTIVEC)
#define HAVE_altivec_vmladduhm (TARGET_ALTIVEC)
#define HAVE_altivec_vmrghb (TARGET_ALTIVEC)
#define HAVE_altivec_vmrghh (TARGET_ALTIVEC)
#define HAVE_altivec_vmrghw (TARGET_ALTIVEC)
#define HAVE_altivec_vmrglb (TARGET_ALTIVEC)
#define HAVE_altivec_vmrglh (TARGET_ALTIVEC)
#define HAVE_altivec_vmrglw (TARGET_ALTIVEC)
#define HAVE_altivec_vmuleub (TARGET_ALTIVEC)
#define HAVE_altivec_vmulesb (TARGET_ALTIVEC)
#define HAVE_altivec_vmuleuh (TARGET_ALTIVEC)
#define HAVE_altivec_vmulesh (TARGET_ALTIVEC)
#define HAVE_altivec_vmuloub (TARGET_ALTIVEC)
#define HAVE_altivec_vmulosb (TARGET_ALTIVEC)
#define HAVE_altivec_vmulouh (TARGET_ALTIVEC)
#define HAVE_altivec_vmulosh (TARGET_ALTIVEC)
#define HAVE_andv4si3 (TARGET_ALTIVEC)
#define HAVE_andv8hi3 (TARGET_ALTIVEC)
#define HAVE_andv16qi3 (TARGET_ALTIVEC)
#define HAVE_iorv4si3 (TARGET_ALTIVEC)
#define HAVE_iorv8hi3 (TARGET_ALTIVEC)
#define HAVE_iorv16qi3 (TARGET_ALTIVEC)
#define HAVE_xorv4si3 (TARGET_ALTIVEC)
#define HAVE_xorv8hi3 (TARGET_ALTIVEC)
#define HAVE_xorv16qi3 (TARGET_ALTIVEC)
#define HAVE_xorv4sf3 (TARGET_ALTIVEC)
#define HAVE_one_cmplv4si2 (TARGET_ALTIVEC)
#define HAVE_one_cmplv8hi2 (TARGET_ALTIVEC)
#define HAVE_one_cmplv16qi2 (TARGET_ALTIVEC)
#define HAVE_altivec_norv4si3 (TARGET_ALTIVEC)
#define HAVE_altivec_norv8hi3 (TARGET_ALTIVEC)
#define HAVE_altivec_norv16qi3 (TARGET_ALTIVEC)
#define HAVE_andcv4si3 (TARGET_ALTIVEC)
#define HAVE_andcv8hi3 (TARGET_ALTIVEC)
#define HAVE_andcv16qi3 (TARGET_ALTIVEC)
#define HAVE_altivec_vpkuhum (TARGET_ALTIVEC)
#define HAVE_altivec_vpkuwum (TARGET_ALTIVEC)
#define HAVE_altivec_vpkpx (TARGET_ALTIVEC)
#define HAVE_altivec_vpkshss (TARGET_ALTIVEC)
#define HAVE_altivec_vpkswss (TARGET_ALTIVEC)
#define HAVE_altivec_vpkuhus (TARGET_ALTIVEC)
#define HAVE_altivec_vpkshus (TARGET_ALTIVEC)
#define HAVE_altivec_vpkuwus (TARGET_ALTIVEC)
#define HAVE_altivec_vpkswus (TARGET_ALTIVEC)
#define HAVE_altivec_vrlw (TARGET_ALTIVEC)
#define HAVE_altivec_vrlh (TARGET_ALTIVEC)
#define HAVE_altivec_vrlb (TARGET_ALTIVEC)
#define HAVE_altivec_vslw (TARGET_ALTIVEC)
#define HAVE_altivec_vslh (TARGET_ALTIVEC)
#define HAVE_altivec_vslb (TARGET_ALTIVEC)
#define HAVE_altivec_vsl (TARGET_ALTIVEC)
#define HAVE_altivec_vslo (TARGET_ALTIVEC)
#define HAVE_lshrv4si3 (TARGET_ALTIVEC)
#define HAVE_lshrv8hi3 (TARGET_ALTIVEC)
#define HAVE_lshrv16qi3 (TARGET_ALTIVEC)
#define HAVE_ashrv4si3 (TARGET_ALTIVEC)
#define HAVE_ashrv8hi3 (TARGET_ALTIVEC)
#define HAVE_ashrv16qi3 (TARGET_ALTIVEC)
#define HAVE_altivec_vsr (TARGET_ALTIVEC)
#define HAVE_altivec_vsro (TARGET_ALTIVEC)
#define HAVE_altivec_vsum4ubs (TARGET_ALTIVEC)
#define HAVE_altivec_vsum4shs (TARGET_ALTIVEC)
#define HAVE_altivec_vsum4sbs (TARGET_ALTIVEC)
#define HAVE_altivec_vsum2sws (TARGET_ALTIVEC)
#define HAVE_altivec_vsumsws (TARGET_ALTIVEC)
#define HAVE_altivec_vspltb (TARGET_ALTIVEC)
#define HAVE_altivec_vsplth (TARGET_ALTIVEC)
#define HAVE_altivec_vspltw (TARGET_ALTIVEC)
#define HAVE_altivec_vspltisw (TARGET_ALTIVEC)
#define HAVE_altivec_vspltish (TARGET_ALTIVEC)
#define HAVE_altivec_vspltisb (TARGET_ALTIVEC)
#define HAVE_ftruncv4sf2 (TARGET_ALTIVEC)
#define HAVE_altivec_vperm_v4si (TARGET_ALTIVEC)
#define HAVE_altivec_vperm_v8hi (TARGET_ALTIVEC)
#define HAVE_altivec_vperm_v16qi (TARGET_ALTIVEC)
#define HAVE_altivec_vperm_v4sf (TARGET_ALTIVEC)
#define HAVE_altivec_vrfip (TARGET_ALTIVEC)
#define HAVE_altivec_vrfin (TARGET_ALTIVEC)
#define HAVE_altivec_vrfim (TARGET_ALTIVEC)
#define HAVE_altivec_vcfux (TARGET_ALTIVEC)
#define HAVE_altivec_vcfsx (TARGET_ALTIVEC)
#define HAVE_altivec_vctuxs (TARGET_ALTIVEC)
#define HAVE_altivec_vctsxs (TARGET_ALTIVEC)
#define HAVE_altivec_vlogefp (TARGET_ALTIVEC)
#define HAVE_altivec_vexptefp (TARGET_ALTIVEC)
#define HAVE_altivec_vrsqrtefp (TARGET_ALTIVEC)
#define HAVE_altivec_vrefp (TARGET_ALTIVEC)
#define HAVE_altivec_vsel_v4si (TARGET_ALTIVEC)
#define HAVE_altivec_vsel_v4sf (TARGET_ALTIVEC)
#define HAVE_altivec_vsel_v8hi (TARGET_ALTIVEC)
#define HAVE_altivec_vsel_v16qi (TARGET_ALTIVEC)
#define HAVE_altivec_vsldoi_v4si (TARGET_ALTIVEC)
#define HAVE_altivec_vsldoi_v8hi (TARGET_ALTIVEC)
#define HAVE_altivec_vsldoi_v16qi (TARGET_ALTIVEC)
#define HAVE_altivec_vsldoi_v4sf (TARGET_ALTIVEC)
#define HAVE_altivec_vupkhsb (TARGET_ALTIVEC)
#define HAVE_altivec_vupkhpx (TARGET_ALTIVEC)
#define HAVE_altivec_vupkhsh (TARGET_ALTIVEC)
#define HAVE_altivec_vupklsb (TARGET_ALTIVEC)
#define HAVE_altivec_vupklpx (TARGET_ALTIVEC)
#define HAVE_altivec_vupklsh (TARGET_ALTIVEC)
#define HAVE_altivec_predicate_v4sf (TARGET_ALTIVEC)
#define HAVE_altivec_predicate_vcmpequw (TARGET_ALTIVEC)
#define HAVE_altivec_predicate_vcmpgtsw (TARGET_ALTIVEC)
#define HAVE_altivec_predicate_vcmpgtuw (TARGET_ALTIVEC)
#define HAVE_altivec_predicate_vcmpgtuh (TARGET_ALTIVEC)
#define HAVE_altivec_predicate_vcmpgtsh (TARGET_ALTIVEC)
#define HAVE_altivec_predicate_vcmpequh (TARGET_ALTIVEC)
#define HAVE_altivec_predicate_vcmpequb (TARGET_ALTIVEC)
#define HAVE_altivec_predicate_vcmpgtsb (TARGET_ALTIVEC)
#define HAVE_altivec_predicate_vcmpgtub (TARGET_ALTIVEC)
#define HAVE_altivec_mtvscr (TARGET_ALTIVEC)
#define HAVE_altivec_mfvscr (TARGET_ALTIVEC)
#define HAVE_altivec_dssall (TARGET_ALTIVEC)
#define HAVE_altivec_dss (TARGET_ALTIVEC)
#define HAVE_altivec_dst (TARGET_ALTIVEC && GET_MODE (operands[0]) == Pmode)
#define HAVE_altivec_dstt (TARGET_ALTIVEC && GET_MODE (operands[0]) == Pmode)
#define HAVE_altivec_dstst (TARGET_ALTIVEC && GET_MODE (operands[0]) == Pmode)
#define HAVE_altivec_dststt (TARGET_ALTIVEC && GET_MODE (operands[0]) == Pmode)
#define HAVE_altivec_lvsl (TARGET_ALTIVEC)
#define HAVE_altivec_lvsr (TARGET_ALTIVEC)
#define HAVE_altivec_lvewx (TARGET_ALTIVEC)
#define HAVE_altivec_lvehx (TARGET_ALTIVEC)
#define HAVE_altivec_lvebx (TARGET_ALTIVEC)
#define HAVE_altivec_lvxl (TARGET_ALTIVEC)
#define HAVE_altivec_lvx (TARGET_ALTIVEC)
#define HAVE_altivec_stvx (TARGET_ALTIVEC)
#define HAVE_altivec_stvxl (TARGET_ALTIVEC)
#define HAVE_altivec_stvewx (TARGET_ALTIVEC)
#define HAVE_altivec_stvehx (TARGET_ALTIVEC)
#define HAVE_altivec_stvebx (TARGET_ALTIVEC)
#define HAVE_altivec_vsumsws_nomode (TARGET_ALTIVEC)
#define HAVE_vec_realign_load_v4si (TARGET_ALTIVEC)
#define HAVE_vec_realign_load_v8hi (TARGET_ALTIVEC)
#define HAVE_vec_realign_load_v16qi (TARGET_ALTIVEC)
#define HAVE_vec_realign_load_v4sf (TARGET_ALTIVEC)
#define HAVE_macho_high 1
#define HAVE_macho_low 1
#define HAVE_load_macho_picbase ((DEFAULT_ABI == ABI_DARWIN) && flag_pic)
#define HAVE_load_macho_picbase_label ((DEFAULT_ABI == ABI_DARWIN) && flag_pic)
#define HAVE_macho_correct_pic 1
#define HAVE_zero_extendqidi2 (TARGET_POWERPC64)
#define HAVE_zero_extendhidi2 (TARGET_POWERPC64)
#define HAVE_zero_extendsidi2 (TARGET_POWERPC64)
#define HAVE_extendhidi2 (TARGET_POWERPC64)
#define HAVE_extendsidi2 (TARGET_POWERPC64)
#define HAVE_zero_extendqisi2 1
#define HAVE_extendqisi2 1
#define HAVE_extendqisi2_no_power (! TARGET_POWER && ! TARGET_POWERPC)
#define HAVE_zero_extendqihi2 1
#define HAVE_extendqihi2 1
#define HAVE_extendqihi2_no_power (! TARGET_POWER && ! TARGET_POWERPC)
#define HAVE_zero_extendhisi2 1
#define HAVE_extendhisi2 1
#define HAVE_strlensi (TARGET_DLMZB && WORDS_BIG_ENDIAN && !optimize_size)
#define HAVE_addsi3 1
#define HAVE_adddi3 1
#define HAVE_subsi3 1
#define HAVE_subdi3 1
#define HAVE_abssi2 1
#define HAVE_negsi2 1
#define HAVE_negdi2 1
#define HAVE_ctzsi2 1
#define HAVE_ctzdi2 (TARGET_POWERPC64)
#define HAVE_ffssi2 1
#define HAVE_ffsdi2 (TARGET_POWERPC64)
#define HAVE_mulsi3 1
#define HAVE_divmodsi4 (TARGET_POWER || (! TARGET_POWER && ! TARGET_POWERPC))
#define HAVE_udivsi3 1
#define HAVE_udivdi3 ((TARGET_POWERPC || (! TARGET_POWER && ! TARGET_POWERPC)) && (TARGET_POWERPC64))
#define HAVE_divsi3 1
#define HAVE_divdi3 (TARGET_POWERPC64)
#define HAVE_modsi3 1
#define HAVE_moddi3 (TARGET_POWERPC64)
#define HAVE_udivmodsi4 1
#define HAVE_iorsi3 1
#define HAVE_xorsi3 1
#define HAVE_insv 1
#define HAVE_extzv 1
#define HAVE_ashlsi3 1
#define HAVE_lshrsi3 1
#define HAVE_ashrsi3 1
#define HAVE_extendsfdf2 (TARGET_HARD_FLOAT && (TARGET_FPRS || TARGET_E500_DOUBLE))
#define HAVE_truncdfsf2 (TARGET_HARD_FLOAT && (TARGET_FPRS || TARGET_E500_DOUBLE))
#define HAVE_negsf2 (TARGET_HARD_FLOAT)
#define HAVE_abssf2 (TARGET_HARD_FLOAT)
#define HAVE_addsf3 (TARGET_HARD_FLOAT)
#define HAVE_subsf3 (TARGET_HARD_FLOAT)
#define HAVE_mulsf3 (TARGET_HARD_FLOAT)
#define HAVE_divsf3 (TARGET_HARD_FLOAT)
#define HAVE_sqrtsf2 ((TARGET_PPC_GPOPT || TARGET_POWER2) && TARGET_HARD_FLOAT && TARGET_FPRS)
#define HAVE_copysignsf3 (TARGET_PPC_GFXOPT && TARGET_HARD_FLOAT && TARGET_FPRS \
   && !HONOR_NANS (SFmode) && !HONOR_SIGNED_ZEROS (SFmode))
#define HAVE_copysigndf3 (TARGET_PPC_GFXOPT && TARGET_HARD_FLOAT && TARGET_FPRS \
   && !HONOR_NANS (DFmode) && !HONOR_SIGNED_ZEROS (DFmode))
#define HAVE_smaxsf3 (TARGET_PPC_GFXOPT && TARGET_HARD_FLOAT && TARGET_FPRS && !flag_trapping_math)
#define HAVE_sminsf3 (TARGET_PPC_GFXOPT && TARGET_HARD_FLOAT && TARGET_FPRS && !flag_trapping_math)
#define HAVE_movsfcc (TARGET_PPC_GFXOPT && TARGET_HARD_FLOAT && TARGET_FPRS)
#define HAVE_negdf2 (TARGET_HARD_FLOAT && (TARGET_FPRS || TARGET_E500_DOUBLE))
#define HAVE_absdf2 (TARGET_HARD_FLOAT && (TARGET_FPRS || TARGET_E500_DOUBLE))
#define HAVE_adddf3 (TARGET_HARD_FLOAT && (TARGET_FPRS || TARGET_E500_DOUBLE))
#define HAVE_subdf3 (TARGET_HARD_FLOAT && (TARGET_FPRS || TARGET_E500_DOUBLE))
#define HAVE_muldf3 (TARGET_HARD_FLOAT && (TARGET_FPRS || TARGET_E500_DOUBLE))
#define HAVE_divdf3 (TARGET_HARD_FLOAT && (TARGET_FPRS || TARGET_E500_DOUBLE))
#define HAVE_smaxdf3 (TARGET_PPC_GFXOPT && TARGET_HARD_FLOAT && TARGET_FPRS && !flag_trapping_math)
#define HAVE_smindf3 (TARGET_PPC_GFXOPT && TARGET_HARD_FLOAT && TARGET_FPRS && !flag_trapping_math)
#define HAVE_movdfcc (TARGET_PPC_GFXOPT && TARGET_HARD_FLOAT && TARGET_FPRS)
#define HAVE_floatsidf2 (TARGET_HARD_FLOAT && TARGET_FPRS)
#define HAVE_floatunssidf2 (TARGET_HARD_FLOAT && (TARGET_FPRS || TARGET_E500_DOUBLE))
#define HAVE_fix_truncdfsi2 ((TARGET_POWER2 || TARGET_POWERPC) \
   && TARGET_HARD_FLOAT && (TARGET_FPRS || TARGET_E500_DOUBLE))
#define HAVE_floatdisf2 (TARGET_POWERPC64 && TARGET_HARD_FLOAT && TARGET_FPRS)
#define HAVE_floatdisf2_internal2 (TARGET_POWERPC64 && TARGET_HARD_FLOAT && TARGET_FPRS)
#define HAVE_mulsidi3 (! TARGET_POWERPC64)
#define HAVE_umulsidi3 (TARGET_POWERPC && ! TARGET_POWERPC64)
#define HAVE_smulsi3_highpart 1
#define HAVE_umulsi3_highpart (TARGET_POWERPC)
#define HAVE_ashldi3 (TARGET_POWERPC64 || TARGET_POWER)
#define HAVE_lshrdi3 (TARGET_POWERPC64 || TARGET_POWER)
#define HAVE_ashrdi3 1
#define HAVE_iordi3 (TARGET_POWERPC64)
#define HAVE_xordi3 (TARGET_POWERPC64)
#define HAVE_movqi 1
#define HAVE_movhi 1
#define HAVE_movsi 1
#define HAVE_movdi 1
#define HAVE_movti 1
#define HAVE_movcc 1
#define HAVE_movsf 1
#define HAVE_movdf 1
#define HAVE_movtf (!TARGET_IEEEQUAD && TARGET_LONG_DOUBLE_128)
#define HAVE_extenddftf2 (!TARGET_IEEEQUAD \
   && TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_LONG_DOUBLE_128)
#define HAVE_extendsftf2 (!TARGET_IEEEQUAD \
   && TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_LONG_DOUBLE_128)
#define HAVE_trunctfdf2 (!TARGET_IEEEQUAD \
   && TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_LONG_DOUBLE_128)
#define HAVE_floatsitf2 (!TARGET_IEEEQUAD \
   && TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_LONG_DOUBLE_128)
#define HAVE_fix_trunctfsi2 (!TARGET_IEEEQUAD \
   && (TARGET_POWER2 || TARGET_POWERPC) \
   && TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_LONG_DOUBLE_128)
#define HAVE_abstf2 (!TARGET_IEEEQUAD \
   && TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_LONG_DOUBLE_128)
#define HAVE_abstf2_internal (!TARGET_IEEEQUAD \
   && TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_LONG_DOUBLE_128)
#define HAVE_load_multiple (TARGET_STRING && !TARGET_POWERPC64)
#define HAVE_store_multiple (TARGET_STRING && !TARGET_POWERPC64)
#define HAVE_setmemsi 1
#define HAVE_movmemsi 1
#define HAVE_movmemsi_8reg (TARGET_STRING)
#define HAVE_movmemsi_6reg (TARGET_STRING)
#define HAVE_movmemsi_4reg (TARGET_STRING)
#define HAVE_movmemsi_2reg (TARGET_STRING && ! TARGET_POWERPC64)
#define HAVE_movmemsi_1reg (TARGET_STRING)
#define HAVE_allocate_stack 1
#define HAVE_save_stack_function 1
#define HAVE_restore_stack_function 1
#define HAVE_restore_stack_block 1
#define HAVE_save_stack_nonlocal 1
#define HAVE_restore_stack_nonlocal 1
#define HAVE_builtin_setjmp_receiver ((DEFAULT_ABI == ABI_V4 && flag_pic == 1) \
   || (TARGET_TOC && TARGET_MINIMAL_TOC) \
   || (DEFAULT_ABI == ABI_DARWIN && flag_pic))
#define HAVE_call_indirect_aix32 (TARGET_32BIT)
#define HAVE_call_indirect_aix64 (TARGET_64BIT)
#define HAVE_call_value_indirect_aix32 (TARGET_32BIT)
#define HAVE_call_value_indirect_aix64 (TARGET_64BIT)
#define HAVE_call 1
#define HAVE_call_value 1
#define HAVE_untyped_call 1
#define HAVE_sibcall 1
#define HAVE_sibcall_value 1
#define HAVE_sibcall_epilogue (TARGET_SCHED_PROLOG)
#define HAVE_cmpsi 1
#define HAVE_cmpdi (TARGET_POWERPC64)
#define HAVE_cmpsf (TARGET_HARD_FLOAT)
#define HAVE_cmpdf (TARGET_HARD_FLOAT && (TARGET_FPRS || TARGET_E500_DOUBLE))
#define HAVE_cmptf (!TARGET_IEEEQUAD \
   && TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_LONG_DOUBLE_128)
#define HAVE_beq 1
#define HAVE_bne 1
#define HAVE_bge 1
#define HAVE_bgt 1
#define HAVE_ble 1
#define HAVE_blt 1
#define HAVE_bgeu 1
#define HAVE_bgtu 1
#define HAVE_bleu 1
#define HAVE_bltu 1
#define HAVE_bunordered 1
#define HAVE_bordered 1
#define HAVE_buneq 1
#define HAVE_bunge 1
#define HAVE_bungt 1
#define HAVE_bunle 1
#define HAVE_bunlt 1
#define HAVE_bltgt 1
#define HAVE_seq 1
#define HAVE_sne 1
#define HAVE_sge 1
#define HAVE_sgt 1
#define HAVE_sle 1
#define HAVE_slt 1
#define HAVE_sgeu 1
#define HAVE_sgtu 1
#define HAVE_sleu 1
#define HAVE_sltu 1
#define HAVE_sunordered 1
#define HAVE_sordered 1
#define HAVE_suneq 1
#define HAVE_sunge 1
#define HAVE_sungt 1
#define HAVE_sunle 1
#define HAVE_sunlt 1
#define HAVE_sltgt 1
#define HAVE_stack_protect_set 1
#define HAVE_stack_protect_test 1
#define HAVE_indirect_jump 1
#define HAVE_tablejump 1
#define HAVE_tablejumpsi (TARGET_32BIT)
#define HAVE_tablejumpdi (TARGET_64BIT)
#define HAVE_doloop_end 1
#define HAVE_ctrsi (TARGET_32BIT)
#define HAVE_ctrdi (TARGET_64BIT)
#define HAVE_conditional_trap 1
#define HAVE_prologue (TARGET_SCHED_PROLOG)
#define HAVE_epilogue (TARGET_SCHED_PROLOG)
#define HAVE_movsi_to_cr_one 1
#define HAVE_eh_return 1
#define HAVE_flt_rounds 1
#define HAVE_memory_barrier 1
#define HAVE_sync_compare_and_swaphi (TARGET_POWERPC)
#define HAVE_sync_compare_and_swapqi (TARGET_POWERPC)
#define HAVE_sync_addqi (TARGET_POWERPC)
#define HAVE_sync_subqi (TARGET_POWERPC)
#define HAVE_sync_iorqi (TARGET_POWERPC)
#define HAVE_sync_xorqi (TARGET_POWERPC)
#define HAVE_sync_andqi (TARGET_POWERPC)
#define HAVE_sync_addhi (TARGET_POWERPC)
#define HAVE_sync_subhi (TARGET_POWERPC)
#define HAVE_sync_iorhi (TARGET_POWERPC)
#define HAVE_sync_xorhi (TARGET_POWERPC)
#define HAVE_sync_andhi (TARGET_POWERPC)
#define HAVE_sync_addsi (TARGET_POWERPC)
#define HAVE_sync_subsi (TARGET_POWERPC)
#define HAVE_sync_iorsi (TARGET_POWERPC)
#define HAVE_sync_xorsi (TARGET_POWERPC)
#define HAVE_sync_andsi (TARGET_POWERPC)
#define HAVE_sync_adddi ((TARGET_POWERPC) && (TARGET_POWERPC64))
#define HAVE_sync_subdi ((TARGET_POWERPC) && (TARGET_POWERPC64))
#define HAVE_sync_iordi ((TARGET_POWERPC) && (TARGET_POWERPC64))
#define HAVE_sync_xordi ((TARGET_POWERPC) && (TARGET_POWERPC64))
#define HAVE_sync_anddi ((TARGET_POWERPC) && (TARGET_POWERPC64))
#define HAVE_sync_nandqi (TARGET_POWERPC)
#define HAVE_sync_nandhi (TARGET_POWERPC)
#define HAVE_sync_nandsi (TARGET_POWERPC)
#define HAVE_sync_nanddi ((TARGET_POWERPC) && (TARGET_POWERPC64))
#define HAVE_sync_old_addqi (TARGET_POWERPC)
#define HAVE_sync_old_subqi (TARGET_POWERPC)
#define HAVE_sync_old_iorqi (TARGET_POWERPC)
#define HAVE_sync_old_xorqi (TARGET_POWERPC)
#define HAVE_sync_old_andqi (TARGET_POWERPC)
#define HAVE_sync_old_addhi (TARGET_POWERPC)
#define HAVE_sync_old_subhi (TARGET_POWERPC)
#define HAVE_sync_old_iorhi (TARGET_POWERPC)
#define HAVE_sync_old_xorhi (TARGET_POWERPC)
#define HAVE_sync_old_andhi (TARGET_POWERPC)
#define HAVE_sync_old_addsi (TARGET_POWERPC)
#define HAVE_sync_old_subsi (TARGET_POWERPC)
#define HAVE_sync_old_iorsi (TARGET_POWERPC)
#define HAVE_sync_old_xorsi (TARGET_POWERPC)
#define HAVE_sync_old_andsi (TARGET_POWERPC)
#define HAVE_sync_old_adddi ((TARGET_POWERPC) && (TARGET_POWERPC64))
#define HAVE_sync_old_subdi ((TARGET_POWERPC) && (TARGET_POWERPC64))
#define HAVE_sync_old_iordi ((TARGET_POWERPC) && (TARGET_POWERPC64))
#define HAVE_sync_old_xordi ((TARGET_POWERPC) && (TARGET_POWERPC64))
#define HAVE_sync_old_anddi ((TARGET_POWERPC) && (TARGET_POWERPC64))
#define HAVE_sync_old_nandqi (TARGET_POWERPC)
#define HAVE_sync_old_nandhi (TARGET_POWERPC)
#define HAVE_sync_old_nandsi (TARGET_POWERPC)
#define HAVE_sync_old_nanddi ((TARGET_POWERPC) && (TARGET_POWERPC64))
#define HAVE_sync_new_addqi (TARGET_POWERPC)
#define HAVE_sync_new_subqi (TARGET_POWERPC)
#define HAVE_sync_new_iorqi (TARGET_POWERPC)
#define HAVE_sync_new_xorqi (TARGET_POWERPC)
#define HAVE_sync_new_andqi (TARGET_POWERPC)
#define HAVE_sync_new_addhi (TARGET_POWERPC)
#define HAVE_sync_new_subhi (TARGET_POWERPC)
#define HAVE_sync_new_iorhi (TARGET_POWERPC)
#define HAVE_sync_new_xorhi (TARGET_POWERPC)
#define HAVE_sync_new_andhi (TARGET_POWERPC)
#define HAVE_sync_new_addsi (TARGET_POWERPC)
#define HAVE_sync_new_subsi (TARGET_POWERPC)
#define HAVE_sync_new_iorsi (TARGET_POWERPC)
#define HAVE_sync_new_xorsi (TARGET_POWERPC)
#define HAVE_sync_new_andsi (TARGET_POWERPC)
#define HAVE_sync_new_adddi ((TARGET_POWERPC) && (TARGET_POWERPC64))
#define HAVE_sync_new_subdi ((TARGET_POWERPC) && (TARGET_POWERPC64))
#define HAVE_sync_new_iordi ((TARGET_POWERPC) && (TARGET_POWERPC64))
#define HAVE_sync_new_xordi ((TARGET_POWERPC) && (TARGET_POWERPC64))
#define HAVE_sync_new_anddi ((TARGET_POWERPC) && (TARGET_POWERPC64))
#define HAVE_sync_new_nandqi (TARGET_POWERPC)
#define HAVE_sync_new_nandhi (TARGET_POWERPC)
#define HAVE_sync_new_nandsi (TARGET_POWERPC)
#define HAVE_sync_new_nanddi ((TARGET_POWERPC) && (TARGET_POWERPC64))
#define HAVE_sync_lock_releaseqi 1
#define HAVE_sync_lock_releasehi 1
#define HAVE_sync_lock_releasesi 1
#define HAVE_sync_lock_releasedi 1
#define HAVE_sync_lock_releaseti 1
#define HAVE_movv4si (TARGET_ALTIVEC)
#define HAVE_movv8hi (TARGET_ALTIVEC)
#define HAVE_movv16qi (TARGET_ALTIVEC)
#define HAVE_movv4sf (TARGET_ALTIVEC)
#define HAVE_mulv4sf3 (TARGET_ALTIVEC && TARGET_FUSED_MADD)
#define HAVE_mulv4si3 (TARGET_ALTIVEC)
#define HAVE_vcondv4si (TARGET_ALTIVEC)
#define HAVE_vconduv4si (TARGET_ALTIVEC)
#define HAVE_vcondv4sf (TARGET_ALTIVEC)
#define HAVE_vcondv8hi (TARGET_ALTIVEC)
#define HAVE_vconduv8hi (TARGET_ALTIVEC)
#define HAVE_vcondv16qi (TARGET_ALTIVEC)
#define HAVE_vconduv16qi (TARGET_ALTIVEC)
#define HAVE_cr6_test_for_zero (TARGET_ALTIVEC)
#define HAVE_cr6_test_for_zero_reverse (TARGET_ALTIVEC)
#define HAVE_cr6_test_for_lt (TARGET_ALTIVEC)
#define HAVE_cr6_test_for_lt_reverse (TARGET_ALTIVEC)
#define HAVE_build_vector_mask_for_load (TARGET_ALTIVEC)
#define HAVE_vec_initv4si (TARGET_ALTIVEC)
#define HAVE_vec_initv8hi (TARGET_ALTIVEC)
#define HAVE_vec_initv16qi (TARGET_ALTIVEC)
#define HAVE_vec_initv4sf (TARGET_ALTIVEC)
#define HAVE_vec_setv4si (TARGET_ALTIVEC)
#define HAVE_vec_setv8hi (TARGET_ALTIVEC)
#define HAVE_vec_setv16qi (TARGET_ALTIVEC)
#define HAVE_vec_setv4sf (TARGET_ALTIVEC)
#define HAVE_vec_extractv4si (TARGET_ALTIVEC)
#define HAVE_vec_extractv8hi (TARGET_ALTIVEC)
#define HAVE_vec_extractv16qi (TARGET_ALTIVEC)
#define HAVE_vec_extractv4sf (TARGET_ALTIVEC)
#define HAVE_absv4si2 (TARGET_ALTIVEC)
#define HAVE_absv8hi2 (TARGET_ALTIVEC)
#define HAVE_absv16qi2 (TARGET_ALTIVEC)
#define HAVE_absv4sf2 (TARGET_ALTIVEC)
#define HAVE_altivec_abss_v4si (TARGET_ALTIVEC)
#define HAVE_altivec_abss_v8hi (TARGET_ALTIVEC)
#define HAVE_altivec_abss_v16qi (TARGET_ALTIVEC)
#define HAVE_vec_shl_v4si (TARGET_ALTIVEC)
#define HAVE_vec_shl_v8hi (TARGET_ALTIVEC)
#define HAVE_vec_shl_v16qi (TARGET_ALTIVEC)
#define HAVE_vec_shl_v4sf (TARGET_ALTIVEC)
#define HAVE_vec_shr_v4si (TARGET_ALTIVEC)
#define HAVE_vec_shr_v8hi (TARGET_ALTIVEC)
#define HAVE_vec_shr_v16qi (TARGET_ALTIVEC)
#define HAVE_vec_shr_v4sf (TARGET_ALTIVEC)
#define HAVE_reduc_splus_v8hi (TARGET_ALTIVEC)
#define HAVE_reduc_splus_v16qi (TARGET_ALTIVEC)
#define HAVE_reduc_uplus_v16qi (TARGET_ALTIVEC)
#define HAVE_negv4si2 (TARGET_ALTIVEC)
#define HAVE_negv8hi2 (TARGET_ALTIVEC)
#define HAVE_negv16qi2 (TARGET_ALTIVEC)
#define HAVE_udot_prodv8hi (TARGET_ALTIVEC)
#define HAVE_udot_prodv16qi (TARGET_ALTIVEC)
#define HAVE_sdot_prodv8hi (TARGET_ALTIVEC)
#define HAVE_widen_usumv8hi3 (TARGET_ALTIVEC)
#define HAVE_widen_usumv16qi3 (TARGET_ALTIVEC)
#define HAVE_widen_ssumv16qi3 (TARGET_ALTIVEC)
#define HAVE_widen_ssumv8hi3 (TARGET_ALTIVEC)
#define HAVE_negv4sf2 (TARGET_ALTIVEC)
extern rtx        gen_adddi3_high                       (rtx, rtx, rtx);
extern rtx        gen_movdf_low_si                      (rtx, rtx, rtx);
extern rtx        gen_movdf_low_di                      (rtx, rtx, rtx);
extern rtx        gen_movdf_low_st_si                   (rtx, rtx, rtx);
extern rtx        gen_movdf_low_st_di                   (rtx, rtx, rtx);
extern rtx        gen_movsf_low_si                      (rtx, rtx, rtx);
extern rtx        gen_movsf_low_di                      (rtx, rtx, rtx);
extern rtx        gen_movsf_low_st_si                   (rtx, rtx, rtx);
extern rtx        gen_movsf_low_st_di                   (rtx, rtx, rtx);
extern rtx        gen_movdi_low                         (rtx, rtx, rtx);
extern rtx        gen_movsi_low_st                      (rtx, rtx, rtx);
extern rtx        gen_movdi_low_st                      (rtx, rtx, rtx);
extern rtx        gen_macho_high_si                     (rtx, rtx);
extern rtx        gen_macho_high_di                     (rtx, rtx);
extern rtx        gen_macho_low_si                      (rtx, rtx, rtx);
extern rtx        gen_macho_low_di                      (rtx, rtx, rtx);
extern rtx        gen_load_macho_picbase_si             (rtx, rtx);
extern rtx        gen_load_macho_picbase_di             (rtx, rtx);
extern rtx        gen_load_macho_picbase_label_si       (rtx, rtx);
extern rtx        gen_load_macho_picbase_label_di       (rtx, rtx);
extern rtx        gen_macho_correct_pic_si              (rtx, rtx, rtx, rtx);
extern rtx        gen_macho_correct_pic_di              (rtx, rtx, rtx, rtx);
extern rtx        gen_extendqidi2                       (rtx, rtx);
extern rtx        gen_extendqisi2_ppc                   (rtx, rtx);
extern rtx        gen_extendqihi2_ppc                   (rtx, rtx);
extern rtx        gen_dlmzb                             (rtx, rtx, rtx, rtx);
extern rtx        gen_addsi3_high                       (rtx, rtx, rtx);
extern rtx        gen_one_cmplsi2                       (rtx, rtx);
extern rtx        gen_one_cmpldi2                       (rtx, rtx);
static inline rtx gen_abssi2_isel                       (rtx, rtx);
static inline rtx
gen_abssi2_isel(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
extern rtx        gen_abssi2_nopower                    (rtx, rtx);
extern rtx        gen_clzsi2                            (rtx, rtx);
extern rtx        gen_clzdi2                            (rtx, rtx);
static inline rtx gen_popcntbsi2                        (rtx, rtx);
static inline rtx
gen_popcntbsi2(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
static inline rtx gen_popcntbdi2                        (rtx, rtx);
static inline rtx
gen_popcntbdi2(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
static inline rtx gen_mulsi3_mq                         (rtx, rtx, rtx);
static inline rtx
gen_mulsi3_mq(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
extern rtx        gen_mulsi3_no_mq                      (rtx, rtx, rtx);
static inline rtx gen_udivsi3_mq                        (rtx, rtx, rtx);
static inline rtx
gen_udivsi3_mq(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_divsi3_mq                         (rtx, rtx, rtx);
static inline rtx
gen_divsi3_mq(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
extern rtx        gen_mulh_call                         (void);
extern rtx        gen_mull_call                         (void);
extern rtx        gen_divss_call                        (void);
extern rtx        gen_divus_call                        (void);
extern rtx        gen_quoss_call                        (void);
extern rtx        gen_quous_call                        (void);
extern rtx        gen_andsi3                            (rtx, rtx, rtx);
extern rtx        gen_insvsi                            (rtx, rtx, rtx, rtx);
extern rtx        gen_insvdi                            (rtx, rtx, rtx, rtx);
extern rtx        gen_extzvsi                           (rtx, rtx, rtx, rtx);
extern rtx        gen_extzvdi                           (rtx, rtx, rtx, rtx);
extern rtx        gen_rotlsi3                           (rtx, rtx, rtx);
static inline rtx gen_ashlsi3_power                     (rtx, rtx, rtx);
static inline rtx
gen_ashlsi3_power(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
extern rtx        gen_ashlsi3_no_power                  (rtx, rtx, rtx);
extern rtx        gen_rlwinm                            (rtx, rtx, rtx, rtx);
static inline rtx gen_lshrsi3_power                     (rtx, rtx, rtx);
static inline rtx
gen_lshrsi3_power(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
extern rtx        gen_lshrsi3_no_power                  (rtx, rtx, rtx);
static inline rtx gen_ashrsi3_power                     (rtx, rtx, rtx);
static inline rtx
gen_ashrsi3_power(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
extern rtx        gen_ashrsi3_no_power                  (rtx, rtx, rtx);
extern rtx        gen_aux_truncdfsf2                    (rtx, rtx);
extern rtx        gen_fres                              (rtx, rtx);
static inline rtx gen_isel_signed                       (rtx, rtx, rtx, rtx, rtx);
static inline rtx
gen_isel_signed(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c), rtx ARG_UNUSED (d), rtx ARG_UNUSED (e))
{
  return 0;
}
static inline rtx gen_isel_unsigned                     (rtx, rtx, rtx, rtx, rtx);
static inline rtx
gen_isel_unsigned(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c), rtx ARG_UNUSED (d), rtx ARG_UNUSED (e))
{
  return 0;
}
static inline rtx gen_fred                              (rtx, rtx);
static inline rtx
gen_fred(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
extern rtx        gen_sqrtdf2                           (rtx, rtx);
extern rtx        gen_fix_truncdfsi2_internal_gfxopt    (rtx, rtx, rtx);
extern rtx        gen_fctiwz                            (rtx, rtx);
static inline rtx gen_btruncdf2                         (rtx, rtx);
static inline rtx
gen_btruncdf2(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
static inline rtx gen_btruncsf2                         (rtx, rtx);
static inline rtx
gen_btruncsf2(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
static inline rtx gen_ceildf2                           (rtx, rtx);
static inline rtx
gen_ceildf2(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
static inline rtx gen_ceilsf2                           (rtx, rtx);
static inline rtx
gen_ceilsf2(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
static inline rtx gen_floordf2                          (rtx, rtx);
static inline rtx
gen_floordf2(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
static inline rtx gen_floorsf2                          (rtx, rtx);
static inline rtx
gen_floorsf2(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
static inline rtx gen_rounddf2                          (rtx, rtx);
static inline rtx
gen_rounddf2(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
static inline rtx gen_roundsf2                          (rtx, rtx);
static inline rtx
gen_roundsf2(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
extern rtx        gen_stfiwx                            (rtx, rtx);
extern rtx        gen_floatdidf2                        (rtx, rtx);
extern rtx        gen_floatsidf_ppc64                   (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_floatunssidf_ppc64                (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_fix_truncdfdi2                    (rtx, rtx);
extern rtx        gen_floatdisf2_internal1              (rtx, rtx);
static inline rtx gen_mulsidi3_mq                       (rtx, rtx, rtx);
static inline rtx
gen_mulsidi3_mq(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_umulsidi3_mq                      (rtx, rtx, rtx);
static inline rtx
gen_umulsidi3_mq(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_smulsi3_highpart_mq               (rtx, rtx, rtx);
static inline rtx
gen_smulsi3_highpart_mq(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_umulsi3_highpart_mq               (rtx, rtx, rtx);
static inline rtx
gen_umulsi3_highpart_mq(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_ashldi3_power                     (rtx, rtx, rtx);
static inline rtx
gen_ashldi3_power(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_lshrdi3_power                     (rtx, rtx, rtx);
static inline rtx
gen_lshrdi3_power(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_ashrdi3_power                     (rtx, rtx, rtx);
static inline rtx
gen_ashrdi3_power(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
extern rtx        gen_ashrdi3_no_power                  (rtx, rtx, rtx);
extern rtx        gen_absdi2                            (rtx, rtx);
extern rtx        gen_muldi3                            (rtx, rtx, rtx);
extern rtx        gen_smuldi3_highpart                  (rtx, rtx, rtx);
extern rtx        gen_umuldi3_highpart                  (rtx, rtx, rtx);
extern rtx        gen_rotldi3                           (rtx, rtx, rtx);
extern rtx        gen_ashldi3_internal5                 (rtx, rtx, rtx, rtx);
extern rtx        gen_ashldi3_internal8                 (rtx, rtx, rtx, rtx);
extern rtx        gen_anddi3                            (rtx, rtx, rtx);
extern rtx        gen_movsi_low                         (rtx, rtx, rtx);
extern rtx        gen_trunctfdf2_internal1              (rtx, rtx);
extern rtx        gen_trunctfdf2_internal2              (rtx, rtx);
extern rtx        gen_trunctfsf2                        (rtx, rtx);
extern rtx        gen_fix_trunc_helper                  (rtx, rtx, rtx);
extern rtx        gen_negtf2                            (rtx, rtx);
extern rtx        gen_movdi_si_update                   (rtx, rtx, rtx, rtx);
extern rtx        gen_movdi_di_update                   (rtx, rtx, rtx, rtx);
extern rtx        gen_movsi_update                      (rtx, rtx, rtx, rtx);
static inline rtx gen_tls_gd_32                         (rtx, rtx, rtx);
static inline rtx
gen_tls_gd_32(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_tls_gd_64                         (rtx, rtx, rtx);
static inline rtx
gen_tls_gd_64(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_tls_ld_32                         (rtx, rtx);
static inline rtx
gen_tls_ld_32(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
static inline rtx gen_tls_ld_64                         (rtx, rtx);
static inline rtx
gen_tls_ld_64(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
static inline rtx gen_tls_dtprel_32                     (rtx, rtx, rtx);
static inline rtx
gen_tls_dtprel_32(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_tls_dtprel_64                     (rtx, rtx, rtx);
static inline rtx
gen_tls_dtprel_64(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_tls_dtprel_ha_32                  (rtx, rtx, rtx);
static inline rtx
gen_tls_dtprel_ha_32(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_tls_dtprel_ha_64                  (rtx, rtx, rtx);
static inline rtx
gen_tls_dtprel_ha_64(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_tls_dtprel_lo_32                  (rtx, rtx, rtx);
static inline rtx
gen_tls_dtprel_lo_32(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_tls_dtprel_lo_64                  (rtx, rtx, rtx);
static inline rtx
gen_tls_dtprel_lo_64(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_tls_got_dtprel_32                 (rtx, rtx, rtx);
static inline rtx
gen_tls_got_dtprel_32(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_tls_got_dtprel_64                 (rtx, rtx, rtx);
static inline rtx
gen_tls_got_dtprel_64(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_tls_tprel_32                      (rtx, rtx, rtx);
static inline rtx
gen_tls_tprel_32(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_tls_tprel_64                      (rtx, rtx, rtx);
static inline rtx
gen_tls_tprel_64(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_tls_tprel_ha_32                   (rtx, rtx, rtx);
static inline rtx
gen_tls_tprel_ha_32(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_tls_tprel_ha_64                   (rtx, rtx, rtx);
static inline rtx
gen_tls_tprel_ha_64(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_tls_tprel_lo_32                   (rtx, rtx, rtx);
static inline rtx
gen_tls_tprel_lo_32(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_tls_tprel_lo_64                   (rtx, rtx, rtx);
static inline rtx
gen_tls_tprel_lo_64(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_tls_got_tprel_32                  (rtx, rtx, rtx);
static inline rtx
gen_tls_got_tprel_32(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_tls_got_tprel_64                  (rtx, rtx, rtx);
static inline rtx
gen_tls_got_tprel_64(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_tls_tls_32                        (rtx, rtx, rtx);
static inline rtx
gen_tls_tls_32(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_tls_tls_64                        (rtx, rtx, rtx);
static inline rtx
gen_tls_tls_64(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_load_toc_aix_si                   (rtx);
static inline rtx
gen_load_toc_aix_si(rtx ARG_UNUSED (a))
{
  return 0;
}
static inline rtx gen_load_toc_aix_di                   (rtx);
static inline rtx
gen_load_toc_aix_di(rtx ARG_UNUSED (a))
{
  return 0;
}
static inline rtx gen_load_toc_v4_pic_si                (rtx);
static inline rtx
gen_load_toc_v4_pic_si(rtx ARG_UNUSED (a))
{
  return 0;
}
static inline rtx gen_load_toc_v4_PIC_1                 (rtx, rtx);
static inline rtx
gen_load_toc_v4_PIC_1(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
static inline rtx gen_load_toc_v4_PIC_1b                (rtx, rtx);
static inline rtx
gen_load_toc_v4_PIC_1b(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
static inline rtx gen_load_toc_v4_PIC_2                 (rtx, rtx, rtx, rtx);
static inline rtx
gen_load_toc_v4_PIC_2(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c), rtx ARG_UNUSED (d))
{
  return 0;
}
static inline rtx gen_load_toc_v4_PIC_3b                (rtx, rtx, rtx, rtx);
static inline rtx
gen_load_toc_v4_PIC_3b(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c), rtx ARG_UNUSED (d))
{
  return 0;
}
static inline rtx gen_load_toc_v4_PIC_3c                (rtx, rtx, rtx, rtx);
static inline rtx
gen_load_toc_v4_PIC_3c(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c), rtx ARG_UNUSED (d))
{
  return 0;
}
static inline rtx gen_elf_high                          (rtx, rtx);
static inline rtx
gen_elf_high(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
static inline rtx gen_elf_low                           (rtx, rtx, rtx);
static inline rtx
gen_elf_low(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
extern rtx        gen_longjump                          (rtx, rtx);
extern rtx        gen_blockage                          (void);
extern rtx        gen_stack_protect_setsi               (rtx, rtx);
extern rtx        gen_stack_protect_setdi               (rtx, rtx);
extern rtx        gen_stack_protect_testsi              (rtx, rtx, rtx);
extern rtx        gen_stack_protect_testdi              (rtx, rtx, rtx);
static inline rtx gen_move_from_CR_gt_bit               (rtx, rtx);
static inline rtx
gen_move_from_CR_gt_bit(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
static inline rtx gen_move_from_CR_ov_bit               (rtx, rtx);
static inline rtx
gen_move_from_CR_ov_bit(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
extern rtx        gen_jump                              (rtx);
extern rtx        gen_return                            (void);
extern rtx        gen_nop                               (void);
extern rtx        gen_trap                              (void);
extern rtx        gen_movesi_from_cr                    (rtx);
extern rtx        gen_stack_tie                         (rtx);
extern rtx        gen_eh_set_lr_si                      (rtx);
extern rtx        gen_eh_set_lr_di                      (rtx);
extern rtx        gen_prefetch                          (rtx, rtx, rtx);
extern rtx        gen_mffs                              (rtx);
extern rtx        gen_load_locked_si                    (rtx, rtx);
extern rtx        gen_load_locked_di                    (rtx, rtx);
extern rtx        gen_store_conditional_si              (rtx, rtx, rtx);
extern rtx        gen_store_conditional_di              (rtx, rtx, rtx);
extern rtx        gen_sync_compare_and_swapsi           (rtx, rtx, rtx, rtx);
extern rtx        gen_sync_compare_and_swapdi           (rtx, rtx, rtx, rtx);
extern rtx        gen_sync_compare_and_swapqhi_internal (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_sync_lock_test_and_setsi          (rtx, rtx, rtx);
extern rtx        gen_sync_lock_test_and_setdi          (rtx, rtx, rtx);
extern rtx        gen_isync                             (void);
extern rtx        gen_lwsync                            (void);
extern rtx        gen_altivec_lvx_v4si                  (rtx, rtx);
extern rtx        gen_altivec_lvx_v8hi                  (rtx, rtx);
extern rtx        gen_altivec_lvx_v16qi                 (rtx, rtx);
extern rtx        gen_altivec_lvx_v4sf                  (rtx, rtx);
extern rtx        gen_altivec_stvx_v4si                 (rtx, rtx);
extern rtx        gen_altivec_stvx_v8hi                 (rtx, rtx);
extern rtx        gen_altivec_stvx_v16qi                (rtx, rtx);
extern rtx        gen_altivec_stvx_v4sf                 (rtx, rtx);
extern rtx        gen_get_vrsave_internal               (rtx);
extern rtx        gen_addv4si3                          (rtx, rtx, rtx);
extern rtx        gen_addv8hi3                          (rtx, rtx, rtx);
extern rtx        gen_addv16qi3                         (rtx, rtx, rtx);
extern rtx        gen_addv4sf3                          (rtx, rtx, rtx);
extern rtx        gen_altivec_vaddcuw                   (rtx, rtx, rtx);
extern rtx        gen_altivec_vadduws                   (rtx, rtx, rtx);
extern rtx        gen_altivec_vadduhs                   (rtx, rtx, rtx);
extern rtx        gen_altivec_vaddubs                   (rtx, rtx, rtx);
extern rtx        gen_altivec_vaddsws                   (rtx, rtx, rtx);
extern rtx        gen_altivec_vaddshs                   (rtx, rtx, rtx);
extern rtx        gen_altivec_vaddsbs                   (rtx, rtx, rtx);
extern rtx        gen_subv4si3                          (rtx, rtx, rtx);
extern rtx        gen_subv8hi3                          (rtx, rtx, rtx);
extern rtx        gen_subv16qi3                         (rtx, rtx, rtx);
extern rtx        gen_subv4sf3                          (rtx, rtx, rtx);
extern rtx        gen_altivec_vsubcuw                   (rtx, rtx, rtx);
extern rtx        gen_altivec_vsubuws                   (rtx, rtx, rtx);
extern rtx        gen_altivec_vsubuhs                   (rtx, rtx, rtx);
extern rtx        gen_altivec_vsububs                   (rtx, rtx, rtx);
extern rtx        gen_altivec_vsubsws                   (rtx, rtx, rtx);
extern rtx        gen_altivec_vsubshs                   (rtx, rtx, rtx);
extern rtx        gen_altivec_vsubsbs                   (rtx, rtx, rtx);
extern rtx        gen_altivec_vavguw                    (rtx, rtx, rtx);
extern rtx        gen_altivec_vavguh                    (rtx, rtx, rtx);
extern rtx        gen_altivec_vavgub                    (rtx, rtx, rtx);
extern rtx        gen_altivec_vavgsw                    (rtx, rtx, rtx);
extern rtx        gen_altivec_vavgsh                    (rtx, rtx, rtx);
extern rtx        gen_altivec_vavgsb                    (rtx, rtx, rtx);
extern rtx        gen_altivec_vcmpbfp                   (rtx, rtx, rtx);
extern rtx        gen_altivec_vcmpequb                  (rtx, rtx, rtx);
extern rtx        gen_altivec_vcmpequh                  (rtx, rtx, rtx);
extern rtx        gen_altivec_vcmpequw                  (rtx, rtx, rtx);
extern rtx        gen_altivec_vcmpeqfp                  (rtx, rtx, rtx);
extern rtx        gen_altivec_vcmpgefp                  (rtx, rtx, rtx);
extern rtx        gen_altivec_vcmpgtub                  (rtx, rtx, rtx);
extern rtx        gen_altivec_vcmpgtsb                  (rtx, rtx, rtx);
extern rtx        gen_altivec_vcmpgtuh                  (rtx, rtx, rtx);
extern rtx        gen_altivec_vcmpgtsh                  (rtx, rtx, rtx);
extern rtx        gen_altivec_vcmpgtuw                  (rtx, rtx, rtx);
extern rtx        gen_altivec_vcmpgtsw                  (rtx, rtx, rtx);
extern rtx        gen_altivec_vcmpgtfp                  (rtx, rtx, rtx);
extern rtx        gen_altivec_vmaddfp                   (rtx, rtx, rtx, rtx);
extern rtx        gen_altivec_vnmsubfp                  (rtx, rtx, rtx, rtx);
extern rtx        gen_altivec_vmsumuhm                  (rtx, rtx, rtx, rtx);
extern rtx        gen_altivec_vmsumubm                  (rtx, rtx, rtx, rtx);
extern rtx        gen_altivec_vmsummhm                  (rtx, rtx, rtx, rtx);
extern rtx        gen_altivec_vmsummbm                  (rtx, rtx, rtx, rtx);
extern rtx        gen_altivec_vmsumshm                  (rtx, rtx, rtx, rtx);
extern rtx        gen_altivec_vmsumuhs                  (rtx, rtx, rtx, rtx);
extern rtx        gen_altivec_vmsumshs                  (rtx, rtx, rtx, rtx);
extern rtx        gen_umaxv4si3                         (rtx, rtx, rtx);
extern rtx        gen_umaxv8hi3                         (rtx, rtx, rtx);
extern rtx        gen_umaxv16qi3                        (rtx, rtx, rtx);
extern rtx        gen_smaxv4si3                         (rtx, rtx, rtx);
extern rtx        gen_smaxv8hi3                         (rtx, rtx, rtx);
extern rtx        gen_smaxv16qi3                        (rtx, rtx, rtx);
extern rtx        gen_smaxv4sf3                         (rtx, rtx, rtx);
extern rtx        gen_uminv4si3                         (rtx, rtx, rtx);
extern rtx        gen_uminv8hi3                         (rtx, rtx, rtx);
extern rtx        gen_uminv16qi3                        (rtx, rtx, rtx);
extern rtx        gen_sminv4si3                         (rtx, rtx, rtx);
extern rtx        gen_sminv8hi3                         (rtx, rtx, rtx);
extern rtx        gen_sminv16qi3                        (rtx, rtx, rtx);
extern rtx        gen_sminv4sf3                         (rtx, rtx, rtx);
extern rtx        gen_altivec_vmhaddshs                 (rtx, rtx, rtx, rtx);
extern rtx        gen_altivec_vmhraddshs                (rtx, rtx, rtx, rtx);
extern rtx        gen_altivec_vmladduhm                 (rtx, rtx, rtx, rtx);
extern rtx        gen_altivec_vmrghb                    (rtx, rtx, rtx);
extern rtx        gen_altivec_vmrghh                    (rtx, rtx, rtx);
extern rtx        gen_altivec_vmrghw                    (rtx, rtx, rtx);
extern rtx        gen_altivec_vmrglb                    (rtx, rtx, rtx);
extern rtx        gen_altivec_vmrglh                    (rtx, rtx, rtx);
extern rtx        gen_altivec_vmrglw                    (rtx, rtx, rtx);
extern rtx        gen_altivec_vmuleub                   (rtx, rtx, rtx);
extern rtx        gen_altivec_vmulesb                   (rtx, rtx, rtx);
extern rtx        gen_altivec_vmuleuh                   (rtx, rtx, rtx);
extern rtx        gen_altivec_vmulesh                   (rtx, rtx, rtx);
extern rtx        gen_altivec_vmuloub                   (rtx, rtx, rtx);
extern rtx        gen_altivec_vmulosb                   (rtx, rtx, rtx);
extern rtx        gen_altivec_vmulouh                   (rtx, rtx, rtx);
extern rtx        gen_altivec_vmulosh                   (rtx, rtx, rtx);
extern rtx        gen_andv4si3                          (rtx, rtx, rtx);
extern rtx        gen_andv8hi3                          (rtx, rtx, rtx);
extern rtx        gen_andv16qi3                         (rtx, rtx, rtx);
extern rtx        gen_iorv4si3                          (rtx, rtx, rtx);
extern rtx        gen_iorv8hi3                          (rtx, rtx, rtx);
extern rtx        gen_iorv16qi3                         (rtx, rtx, rtx);
extern rtx        gen_xorv4si3                          (rtx, rtx, rtx);
extern rtx        gen_xorv8hi3                          (rtx, rtx, rtx);
extern rtx        gen_xorv16qi3                         (rtx, rtx, rtx);
extern rtx        gen_xorv4sf3                          (rtx, rtx, rtx);
extern rtx        gen_one_cmplv4si2                     (rtx, rtx);
extern rtx        gen_one_cmplv8hi2                     (rtx, rtx);
extern rtx        gen_one_cmplv16qi2                    (rtx, rtx);
extern rtx        gen_altivec_norv4si3                  (rtx, rtx, rtx);
extern rtx        gen_altivec_norv8hi3                  (rtx, rtx, rtx);
extern rtx        gen_altivec_norv16qi3                 (rtx, rtx, rtx);
extern rtx        gen_andcv4si3                         (rtx, rtx, rtx);
extern rtx        gen_andcv8hi3                         (rtx, rtx, rtx);
extern rtx        gen_andcv16qi3                        (rtx, rtx, rtx);
extern rtx        gen_altivec_vpkuhum                   (rtx, rtx, rtx);
extern rtx        gen_altivec_vpkuwum                   (rtx, rtx, rtx);
extern rtx        gen_altivec_vpkpx                     (rtx, rtx, rtx);
extern rtx        gen_altivec_vpkshss                   (rtx, rtx, rtx);
extern rtx        gen_altivec_vpkswss                   (rtx, rtx, rtx);
extern rtx        gen_altivec_vpkuhus                   (rtx, rtx, rtx);
extern rtx        gen_altivec_vpkshus                   (rtx, rtx, rtx);
extern rtx        gen_altivec_vpkuwus                   (rtx, rtx, rtx);
extern rtx        gen_altivec_vpkswus                   (rtx, rtx, rtx);
extern rtx        gen_altivec_vrlw                      (rtx, rtx, rtx);
extern rtx        gen_altivec_vrlh                      (rtx, rtx, rtx);
extern rtx        gen_altivec_vrlb                      (rtx, rtx, rtx);
extern rtx        gen_altivec_vslw                      (rtx, rtx, rtx);
extern rtx        gen_altivec_vslh                      (rtx, rtx, rtx);
extern rtx        gen_altivec_vslb                      (rtx, rtx, rtx);
extern rtx        gen_altivec_vsl                       (rtx, rtx, rtx);
extern rtx        gen_altivec_vslo                      (rtx, rtx, rtx);
extern rtx        gen_lshrv4si3                         (rtx, rtx, rtx);
extern rtx        gen_lshrv8hi3                         (rtx, rtx, rtx);
extern rtx        gen_lshrv16qi3                        (rtx, rtx, rtx);
extern rtx        gen_ashrv4si3                         (rtx, rtx, rtx);
extern rtx        gen_ashrv8hi3                         (rtx, rtx, rtx);
extern rtx        gen_ashrv16qi3                        (rtx, rtx, rtx);
extern rtx        gen_altivec_vsr                       (rtx, rtx, rtx);
extern rtx        gen_altivec_vsro                      (rtx, rtx, rtx);
extern rtx        gen_altivec_vsum4ubs                  (rtx, rtx, rtx);
extern rtx        gen_altivec_vsum4shs                  (rtx, rtx, rtx);
extern rtx        gen_altivec_vsum4sbs                  (rtx, rtx, rtx);
extern rtx        gen_altivec_vsum2sws                  (rtx, rtx, rtx);
extern rtx        gen_altivec_vsumsws                   (rtx, rtx, rtx);
extern rtx        gen_altivec_vspltb                    (rtx, rtx, rtx);
extern rtx        gen_altivec_vsplth                    (rtx, rtx, rtx);
extern rtx        gen_altivec_vspltw                    (rtx, rtx, rtx);
extern rtx        gen_altivec_vspltisw                  (rtx, rtx);
extern rtx        gen_altivec_vspltish                  (rtx, rtx);
extern rtx        gen_altivec_vspltisb                  (rtx, rtx);
extern rtx        gen_ftruncv4sf2                       (rtx, rtx);
extern rtx        gen_altivec_vperm_v4si                (rtx, rtx, rtx, rtx);
extern rtx        gen_altivec_vperm_v8hi                (rtx, rtx, rtx, rtx);
extern rtx        gen_altivec_vperm_v16qi               (rtx, rtx, rtx, rtx);
extern rtx        gen_altivec_vperm_v4sf                (rtx, rtx, rtx, rtx);
extern rtx        gen_altivec_vrfip                     (rtx, rtx);
extern rtx        gen_altivec_vrfin                     (rtx, rtx);
extern rtx        gen_altivec_vrfim                     (rtx, rtx);
extern rtx        gen_altivec_vcfux                     (rtx, rtx, rtx);
extern rtx        gen_altivec_vcfsx                     (rtx, rtx, rtx);
extern rtx        gen_altivec_vctuxs                    (rtx, rtx, rtx);
extern rtx        gen_altivec_vctsxs                    (rtx, rtx, rtx);
extern rtx        gen_altivec_vlogefp                   (rtx, rtx);
extern rtx        gen_altivec_vexptefp                  (rtx, rtx);
extern rtx        gen_altivec_vrsqrtefp                 (rtx, rtx);
extern rtx        gen_altivec_vrefp                     (rtx, rtx);
extern rtx        gen_altivec_vsel_v4si                 (rtx, rtx, rtx, rtx);
extern rtx        gen_altivec_vsel_v4sf                 (rtx, rtx, rtx, rtx);
extern rtx        gen_altivec_vsel_v8hi                 (rtx, rtx, rtx, rtx);
extern rtx        gen_altivec_vsel_v16qi                (rtx, rtx, rtx, rtx);
extern rtx        gen_altivec_vsldoi_v4si               (rtx, rtx, rtx, rtx);
extern rtx        gen_altivec_vsldoi_v8hi               (rtx, rtx, rtx, rtx);
extern rtx        gen_altivec_vsldoi_v16qi              (rtx, rtx, rtx, rtx);
extern rtx        gen_altivec_vsldoi_v4sf               (rtx, rtx, rtx, rtx);
extern rtx        gen_altivec_vupkhsb                   (rtx, rtx);
extern rtx        gen_altivec_vupkhpx                   (rtx, rtx);
extern rtx        gen_altivec_vupkhsh                   (rtx, rtx);
extern rtx        gen_altivec_vupklsb                   (rtx, rtx);
extern rtx        gen_altivec_vupklpx                   (rtx, rtx);
extern rtx        gen_altivec_vupklsh                   (rtx, rtx);
extern rtx        gen_altivec_predicate_v4sf            (rtx, rtx, rtx, rtx);
extern rtx        gen_altivec_predicate_vcmpequw        (rtx, rtx, rtx, rtx);
extern rtx        gen_altivec_predicate_vcmpgtsw        (rtx, rtx, rtx, rtx);
extern rtx        gen_altivec_predicate_vcmpgtuw        (rtx, rtx, rtx, rtx);
extern rtx        gen_altivec_predicate_vcmpgtuh        (rtx, rtx, rtx, rtx);
extern rtx        gen_altivec_predicate_vcmpgtsh        (rtx, rtx, rtx, rtx);
extern rtx        gen_altivec_predicate_vcmpequh        (rtx, rtx, rtx, rtx);
extern rtx        gen_altivec_predicate_vcmpequb        (rtx, rtx, rtx, rtx);
extern rtx        gen_altivec_predicate_vcmpgtsb        (rtx, rtx, rtx, rtx);
extern rtx        gen_altivec_predicate_vcmpgtub        (rtx, rtx, rtx, rtx);
extern rtx        gen_altivec_mtvscr                    (rtx);
extern rtx        gen_altivec_mfvscr                    (rtx);
extern rtx        gen_altivec_dssall                    (void);
extern rtx        gen_altivec_dss                       (rtx);
extern rtx        gen_altivec_dst                       (rtx, rtx, rtx);
extern rtx        gen_altivec_dstt                      (rtx, rtx, rtx);
extern rtx        gen_altivec_dstst                     (rtx, rtx, rtx);
extern rtx        gen_altivec_dststt                    (rtx, rtx, rtx);
extern rtx        gen_altivec_lvsl                      (rtx, rtx);
extern rtx        gen_altivec_lvsr                      (rtx, rtx);
extern rtx        gen_altivec_lvewx                     (rtx, rtx);
extern rtx        gen_altivec_lvehx                     (rtx, rtx);
extern rtx        gen_altivec_lvebx                     (rtx, rtx);
extern rtx        gen_altivec_lvxl                      (rtx, rtx);
extern rtx        gen_altivec_lvx                       (rtx, rtx);
extern rtx        gen_altivec_stvx                      (rtx, rtx);
extern rtx        gen_altivec_stvxl                     (rtx, rtx);
extern rtx        gen_altivec_stvewx                    (rtx, rtx);
extern rtx        gen_altivec_stvehx                    (rtx, rtx);
extern rtx        gen_altivec_stvebx                    (rtx, rtx);
extern rtx        gen_altivec_vsumsws_nomode            (rtx, rtx, rtx);
extern rtx        gen_vec_realign_load_v4si             (rtx, rtx, rtx, rtx);
extern rtx        gen_vec_realign_load_v8hi             (rtx, rtx, rtx, rtx);
extern rtx        gen_vec_realign_load_v16qi            (rtx, rtx, rtx, rtx);
extern rtx        gen_vec_realign_load_v4sf             (rtx, rtx, rtx, rtx);
static inline rtx gen_fixuns_truncdfsi2                 (rtx, rtx);
static inline rtx
gen_fixuns_truncdfsi2(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
static inline rtx gen_spe_extendsfdf2                   (rtx, rtx);
static inline rtx
gen_spe_extendsfdf2(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
static inline rtx gen_spe_fixuns_truncsfsi2             (rtx, rtx);
static inline rtx
gen_spe_fixuns_truncsfsi2(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
static inline rtx gen_spe_fix_truncsfsi2                (rtx, rtx);
static inline rtx
gen_spe_fix_truncsfsi2(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
static inline rtx gen_spe_fix_truncdfsi2                (rtx, rtx);
static inline rtx
gen_spe_fix_truncdfsi2(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
static inline rtx gen_spe_floatunssisf2                 (rtx, rtx);
static inline rtx
gen_spe_floatunssisf2(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
static inline rtx gen_spe_floatunssidf2                 (rtx, rtx);
static inline rtx
gen_spe_floatunssidf2(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
static inline rtx gen_spe_floatsisf2                    (rtx, rtx);
static inline rtx
gen_spe_floatsisf2(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
static inline rtx gen_spe_floatsidf2                    (rtx, rtx);
static inline rtx
gen_spe_floatsidf2(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
static inline rtx gen_spe_evabs                         (rtx, rtx);
static inline rtx
gen_spe_evabs(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
static inline rtx gen_spe_evandc                        (rtx, rtx, rtx);
static inline rtx
gen_spe_evandc(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evand                         (rtx, rtx, rtx);
static inline rtx
gen_spe_evand(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evcmpeq                       (rtx, rtx, rtx);
static inline rtx
gen_spe_evcmpeq(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evcmpgts                      (rtx, rtx, rtx);
static inline rtx
gen_spe_evcmpgts(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evcmpgtu                      (rtx, rtx, rtx);
static inline rtx
gen_spe_evcmpgtu(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evcmplts                      (rtx, rtx, rtx);
static inline rtx
gen_spe_evcmplts(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evcmpltu                      (rtx, rtx, rtx);
static inline rtx
gen_spe_evcmpltu(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evfscmpeq                     (rtx, rtx, rtx);
static inline rtx
gen_spe_evfscmpeq(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evfscmpgt                     (rtx, rtx, rtx);
static inline rtx
gen_spe_evfscmpgt(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evfscmplt                     (rtx, rtx, rtx);
static inline rtx
gen_spe_evfscmplt(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evfststeq                     (rtx, rtx, rtx);
static inline rtx
gen_spe_evfststeq(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evfststgt                     (rtx, rtx, rtx);
static inline rtx
gen_spe_evfststgt(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evfststlt                     (rtx, rtx, rtx);
static inline rtx
gen_spe_evfststlt(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evcntlsw                      (rtx, rtx);
static inline rtx
gen_spe_evcntlsw(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
static inline rtx gen_spe_evcntlzw                      (rtx, rtx);
static inline rtx
gen_spe_evcntlzw(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
static inline rtx gen_spe_eveqv                         (rtx, rtx, rtx);
static inline rtx
gen_spe_eveqv(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evextsb                       (rtx, rtx);
static inline rtx
gen_spe_evextsb(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
static inline rtx gen_spe_evextsh                       (rtx, rtx);
static inline rtx
gen_spe_evextsh(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
static inline rtx gen_spe_evlhhesplat                   (rtx, rtx, rtx);
static inline rtx
gen_spe_evlhhesplat(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evlhhesplatx                  (rtx, rtx, rtx);
static inline rtx
gen_spe_evlhhesplatx(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evlhhossplat                  (rtx, rtx, rtx);
static inline rtx
gen_spe_evlhhossplat(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evlhhossplatx                 (rtx, rtx, rtx);
static inline rtx
gen_spe_evlhhossplatx(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evlhhousplat                  (rtx, rtx, rtx);
static inline rtx
gen_spe_evlhhousplat(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evlhhousplatx                 (rtx, rtx, rtx);
static inline rtx
gen_spe_evlhhousplatx(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evlwhsplat                    (rtx, rtx, rtx);
static inline rtx
gen_spe_evlwhsplat(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evlwhsplatx                   (rtx, rtx, rtx);
static inline rtx
gen_spe_evlwhsplatx(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evlwwsplat                    (rtx, rtx, rtx);
static inline rtx
gen_spe_evlwwsplat(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evlwwsplatx                   (rtx, rtx, rtx);
static inline rtx
gen_spe_evlwwsplatx(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evmergehi                     (rtx, rtx, rtx);
static inline rtx
gen_spe_evmergehi(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evmergehilo                   (rtx, rtx, rtx);
static inline rtx
gen_spe_evmergehilo(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evmergelo                     (rtx, rtx, rtx);
static inline rtx
gen_spe_evmergelo(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evmergelohi                   (rtx, rtx, rtx);
static inline rtx
gen_spe_evmergelohi(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evnand                        (rtx, rtx, rtx);
static inline rtx
gen_spe_evnand(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_negv2si2                          (rtx, rtx);
static inline rtx
gen_negv2si2(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
static inline rtx gen_spe_evnor                         (rtx, rtx, rtx);
static inline rtx
gen_spe_evnor(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evorc                         (rtx, rtx, rtx);
static inline rtx
gen_spe_evorc(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evor                          (rtx, rtx, rtx);
static inline rtx
gen_spe_evor(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evrlwi                        (rtx, rtx, rtx);
static inline rtx
gen_spe_evrlwi(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evrlw                         (rtx, rtx, rtx);
static inline rtx
gen_spe_evrlw(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evrndw                        (rtx, rtx);
static inline rtx
gen_spe_evrndw(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
static inline rtx gen_spe_evsel                         (rtx, rtx, rtx, rtx);
static inline rtx
gen_spe_evsel(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c), rtx ARG_UNUSED (d))
{
  return 0;
}
static inline rtx gen_spe_evsel_fs                      (rtx, rtx, rtx, rtx);
static inline rtx
gen_spe_evsel_fs(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c), rtx ARG_UNUSED (d))
{
  return 0;
}
static inline rtx gen_spe_evslwi                        (rtx, rtx, rtx);
static inline rtx
gen_spe_evslwi(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evslw                         (rtx, rtx, rtx);
static inline rtx
gen_spe_evslw(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evsrwis                       (rtx, rtx, rtx);
static inline rtx
gen_spe_evsrwis(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evsrwiu                       (rtx, rtx, rtx);
static inline rtx
gen_spe_evsrwiu(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evsrws                        (rtx, rtx, rtx);
static inline rtx
gen_spe_evsrws(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evsrwu                        (rtx, rtx, rtx);
static inline rtx
gen_spe_evsrwu(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_xorv2si3                          (rtx, rtx, rtx);
static inline rtx
gen_xorv2si3(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_xorv4hi3                          (rtx, rtx, rtx);
static inline rtx
gen_xorv4hi3(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_xorv1di3                          (rtx, rtx, rtx);
static inline rtx
gen_xorv1di3(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evfsabs                       (rtx, rtx);
static inline rtx
gen_spe_evfsabs(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
static inline rtx gen_spe_evfsadd                       (rtx, rtx, rtx);
static inline rtx
gen_spe_evfsadd(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evfscfsf                      (rtx, rtx);
static inline rtx
gen_spe_evfscfsf(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
static inline rtx gen_spe_evfscfsi                      (rtx, rtx);
static inline rtx
gen_spe_evfscfsi(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
static inline rtx gen_spe_evfscfuf                      (rtx, rtx);
static inline rtx
gen_spe_evfscfuf(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
static inline rtx gen_spe_evfscfui                      (rtx, rtx);
static inline rtx
gen_spe_evfscfui(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
static inline rtx gen_spe_evfsctsf                      (rtx, rtx);
static inline rtx
gen_spe_evfsctsf(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
static inline rtx gen_spe_evfsctsi                      (rtx, rtx);
static inline rtx
gen_spe_evfsctsi(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
static inline rtx gen_spe_evfsctsiz                     (rtx, rtx);
static inline rtx
gen_spe_evfsctsiz(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
static inline rtx gen_spe_evfsctuf                      (rtx, rtx);
static inline rtx
gen_spe_evfsctuf(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
static inline rtx gen_spe_evfsctui                      (rtx, rtx);
static inline rtx
gen_spe_evfsctui(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
static inline rtx gen_spe_evfsctuiz                     (rtx, rtx);
static inline rtx
gen_spe_evfsctuiz(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
static inline rtx gen_spe_evfsdiv                       (rtx, rtx, rtx);
static inline rtx
gen_spe_evfsdiv(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evfsmul                       (rtx, rtx, rtx);
static inline rtx
gen_spe_evfsmul(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evfsnabs                      (rtx, rtx);
static inline rtx
gen_spe_evfsnabs(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
static inline rtx gen_spe_evfsneg                       (rtx, rtx);
static inline rtx
gen_spe_evfsneg(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
static inline rtx gen_spe_evfssub                       (rtx, rtx, rtx);
static inline rtx
gen_spe_evfssub(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evldd                         (rtx, rtx, rtx);
static inline rtx
gen_spe_evldd(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evlddx                        (rtx, rtx, rtx);
static inline rtx
gen_spe_evlddx(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evldh                         (rtx, rtx, rtx);
static inline rtx
gen_spe_evldh(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evldhx                        (rtx, rtx, rtx);
static inline rtx
gen_spe_evldhx(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evldw                         (rtx, rtx, rtx);
static inline rtx
gen_spe_evldw(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evldwx                        (rtx, rtx, rtx);
static inline rtx
gen_spe_evldwx(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evlwhe                        (rtx, rtx, rtx);
static inline rtx
gen_spe_evlwhe(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evlwhex                       (rtx, rtx, rtx);
static inline rtx
gen_spe_evlwhex(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evlwhos                       (rtx, rtx, rtx);
static inline rtx
gen_spe_evlwhos(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evlwhosx                      (rtx, rtx, rtx);
static inline rtx
gen_spe_evlwhosx(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evlwhou                       (rtx, rtx, rtx);
static inline rtx
gen_spe_evlwhou(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evlwhoux                      (rtx, rtx, rtx);
static inline rtx
gen_spe_evlwhoux(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_brinc                         (rtx, rtx, rtx);
static inline rtx
gen_spe_brinc(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evmhegsmfaa                   (rtx, rtx, rtx);
static inline rtx
gen_spe_evmhegsmfaa(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evmhegsmfan                   (rtx, rtx, rtx);
static inline rtx
gen_spe_evmhegsmfan(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evmhegsmiaa                   (rtx, rtx, rtx);
static inline rtx
gen_spe_evmhegsmiaa(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evmhegsmian                   (rtx, rtx, rtx);
static inline rtx
gen_spe_evmhegsmian(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evmhegumiaa                   (rtx, rtx, rtx);
static inline rtx
gen_spe_evmhegumiaa(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evmhegumian                   (rtx, rtx, rtx);
static inline rtx
gen_spe_evmhegumian(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evmhesmfaaw                   (rtx, rtx, rtx);
static inline rtx
gen_spe_evmhesmfaaw(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evmhesmfanw                   (rtx, rtx, rtx);
static inline rtx
gen_spe_evmhesmfanw(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evmhesmfa                     (rtx, rtx, rtx);
static inline rtx
gen_spe_evmhesmfa(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evmhesmf                      (rtx, rtx, rtx);
static inline rtx
gen_spe_evmhesmf(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evmhesmiaaw                   (rtx, rtx, rtx);
static inline rtx
gen_spe_evmhesmiaaw(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evmhesmianw                   (rtx, rtx, rtx);
static inline rtx
gen_spe_evmhesmianw(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evmhesmia                     (rtx, rtx, rtx);
static inline rtx
gen_spe_evmhesmia(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evmhesmi                      (rtx, rtx, rtx);
static inline rtx
gen_spe_evmhesmi(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evmhessfaaw                   (rtx, rtx, rtx);
static inline rtx
gen_spe_evmhessfaaw(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evmhessfanw                   (rtx, rtx, rtx);
static inline rtx
gen_spe_evmhessfanw(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evmhessfa                     (rtx, rtx, rtx);
static inline rtx
gen_spe_evmhessfa(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evmhessf                      (rtx, rtx, rtx);
static inline rtx
gen_spe_evmhessf(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evmhessiaaw                   (rtx, rtx, rtx);
static inline rtx
gen_spe_evmhessiaaw(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evmhessianw                   (rtx, rtx, rtx);
static inline rtx
gen_spe_evmhessianw(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evmheumiaaw                   (rtx, rtx, rtx);
static inline rtx
gen_spe_evmheumiaaw(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evmheumianw                   (rtx, rtx, rtx);
static inline rtx
gen_spe_evmheumianw(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evmheumia                     (rtx, rtx, rtx);
static inline rtx
gen_spe_evmheumia(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evmheumi                      (rtx, rtx, rtx);
static inline rtx
gen_spe_evmheumi(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evmheusiaaw                   (rtx, rtx, rtx);
static inline rtx
gen_spe_evmheusiaaw(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evmheusianw                   (rtx, rtx, rtx);
static inline rtx
gen_spe_evmheusianw(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evmhogsmfaa                   (rtx, rtx, rtx);
static inline rtx
gen_spe_evmhogsmfaa(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evmhogsmfan                   (rtx, rtx, rtx);
static inline rtx
gen_spe_evmhogsmfan(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evmhogsmiaa                   (rtx, rtx, rtx);
static inline rtx
gen_spe_evmhogsmiaa(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evmhogsmian                   (rtx, rtx, rtx);
static inline rtx
gen_spe_evmhogsmian(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evmhogumiaa                   (rtx, rtx, rtx);
static inline rtx
gen_spe_evmhogumiaa(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evmhogumian                   (rtx, rtx, rtx);
static inline rtx
gen_spe_evmhogumian(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evmhosmfaaw                   (rtx, rtx, rtx);
static inline rtx
gen_spe_evmhosmfaaw(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evmhosmfanw                   (rtx, rtx, rtx);
static inline rtx
gen_spe_evmhosmfanw(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evmhosmfa                     (rtx, rtx, rtx);
static inline rtx
gen_spe_evmhosmfa(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evmhosmf                      (rtx, rtx, rtx);
static inline rtx
gen_spe_evmhosmf(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evmhosmiaaw                   (rtx, rtx, rtx);
static inline rtx
gen_spe_evmhosmiaaw(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evmhosmianw                   (rtx, rtx, rtx);
static inline rtx
gen_spe_evmhosmianw(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evmhosmia                     (rtx, rtx, rtx);
static inline rtx
gen_spe_evmhosmia(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evmhosmi                      (rtx, rtx, rtx);
static inline rtx
gen_spe_evmhosmi(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evmhossfaaw                   (rtx, rtx, rtx);
static inline rtx
gen_spe_evmhossfaaw(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evmhossfanw                   (rtx, rtx, rtx);
static inline rtx
gen_spe_evmhossfanw(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evmhossfa                     (rtx, rtx, rtx);
static inline rtx
gen_spe_evmhossfa(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evmhossf                      (rtx, rtx, rtx);
static inline rtx
gen_spe_evmhossf(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evmhossiaaw                   (rtx, rtx, rtx);
static inline rtx
gen_spe_evmhossiaaw(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evmhossianw                   (rtx, rtx, rtx);
static inline rtx
gen_spe_evmhossianw(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evmhoumiaaw                   (rtx, rtx, rtx);
static inline rtx
gen_spe_evmhoumiaaw(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evmhoumianw                   (rtx, rtx, rtx);
static inline rtx
gen_spe_evmhoumianw(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evmhoumia                     (rtx, rtx, rtx);
static inline rtx
gen_spe_evmhoumia(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evmhoumi                      (rtx, rtx, rtx);
static inline rtx
gen_spe_evmhoumi(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evmhousiaaw                   (rtx, rtx, rtx);
static inline rtx
gen_spe_evmhousiaaw(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evmhousianw                   (rtx, rtx, rtx);
static inline rtx
gen_spe_evmhousianw(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evmmlssfa                     (rtx, rtx, rtx);
static inline rtx
gen_spe_evmmlssfa(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evmmlssf                      (rtx, rtx, rtx);
static inline rtx
gen_spe_evmmlssf(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evmwhsmfa                     (rtx, rtx, rtx);
static inline rtx
gen_spe_evmwhsmfa(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evmwhsmf                      (rtx, rtx, rtx);
static inline rtx
gen_spe_evmwhsmf(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evmwhsmia                     (rtx, rtx, rtx);
static inline rtx
gen_spe_evmwhsmia(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evmwhsmi                      (rtx, rtx, rtx);
static inline rtx
gen_spe_evmwhsmi(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evmwhssfa                     (rtx, rtx, rtx);
static inline rtx
gen_spe_evmwhssfa(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evmwhusian                    (rtx, rtx, rtx);
static inline rtx
gen_spe_evmwhusian(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evmwhssf                      (rtx, rtx, rtx);
static inline rtx
gen_spe_evmwhssf(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evmwhumia                     (rtx, rtx, rtx);
static inline rtx
gen_spe_evmwhumia(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evmwhumi                      (rtx, rtx, rtx);
static inline rtx
gen_spe_evmwhumi(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evmwlsmiaaw                   (rtx, rtx, rtx);
static inline rtx
gen_spe_evmwlsmiaaw(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evmwlsmianw                   (rtx, rtx, rtx);
static inline rtx
gen_spe_evmwlsmianw(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evmwlssiaaw                   (rtx, rtx, rtx);
static inline rtx
gen_spe_evmwlssiaaw(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evmwlssianw                   (rtx, rtx, rtx);
static inline rtx
gen_spe_evmwlssianw(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evmwlumiaaw                   (rtx, rtx, rtx);
static inline rtx
gen_spe_evmwlumiaaw(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evmwlumianw                   (rtx, rtx, rtx);
static inline rtx
gen_spe_evmwlumianw(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evmwlumia                     (rtx, rtx, rtx);
static inline rtx
gen_spe_evmwlumia(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evmwlumi                      (rtx, rtx, rtx);
static inline rtx
gen_spe_evmwlumi(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evmwlusiaaw                   (rtx, rtx, rtx);
static inline rtx
gen_spe_evmwlusiaaw(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evmwlusianw                   (rtx, rtx, rtx);
static inline rtx
gen_spe_evmwlusianw(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evmwsmfaa                     (rtx, rtx, rtx);
static inline rtx
gen_spe_evmwsmfaa(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evmwsmfan                     (rtx, rtx, rtx);
static inline rtx
gen_spe_evmwsmfan(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evmwsmfa                      (rtx, rtx, rtx);
static inline rtx
gen_spe_evmwsmfa(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evmwsmf                       (rtx, rtx, rtx);
static inline rtx
gen_spe_evmwsmf(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evmwsmiaa                     (rtx, rtx, rtx);
static inline rtx
gen_spe_evmwsmiaa(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evmwsmian                     (rtx, rtx, rtx);
static inline rtx
gen_spe_evmwsmian(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evmwsmia                      (rtx, rtx, rtx);
static inline rtx
gen_spe_evmwsmia(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evmwsmi                       (rtx, rtx, rtx);
static inline rtx
gen_spe_evmwsmi(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evmwssfaa                     (rtx, rtx, rtx);
static inline rtx
gen_spe_evmwssfaa(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evmwssfan                     (rtx, rtx, rtx);
static inline rtx
gen_spe_evmwssfan(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evmwssfa                      (rtx, rtx, rtx);
static inline rtx
gen_spe_evmwssfa(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evmwssf                       (rtx, rtx, rtx);
static inline rtx
gen_spe_evmwssf(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evmwumiaa                     (rtx, rtx, rtx);
static inline rtx
gen_spe_evmwumiaa(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evmwumian                     (rtx, rtx, rtx);
static inline rtx
gen_spe_evmwumian(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evmwumia                      (rtx, rtx, rtx);
static inline rtx
gen_spe_evmwumia(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evmwumi                       (rtx, rtx, rtx);
static inline rtx
gen_spe_evmwumi(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evaddw                        (rtx, rtx, rtx);
static inline rtx
gen_spe_evaddw(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evaddusiaaw                   (rtx, rtx);
static inline rtx
gen_spe_evaddusiaaw(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
static inline rtx gen_spe_evaddumiaaw                   (rtx, rtx);
static inline rtx
gen_spe_evaddumiaaw(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
static inline rtx gen_spe_evaddssiaaw                   (rtx, rtx);
static inline rtx
gen_spe_evaddssiaaw(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
static inline rtx gen_spe_evaddsmiaaw                   (rtx, rtx);
static inline rtx
gen_spe_evaddsmiaaw(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
static inline rtx gen_spe_evaddiw                       (rtx, rtx, rtx);
static inline rtx
gen_spe_evaddiw(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evsubifw                      (rtx, rtx, rtx);
static inline rtx
gen_spe_evsubifw(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evsubfw                       (rtx, rtx, rtx);
static inline rtx
gen_spe_evsubfw(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evsubfusiaaw                  (rtx, rtx);
static inline rtx
gen_spe_evsubfusiaaw(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
static inline rtx gen_spe_evsubfumiaaw                  (rtx, rtx);
static inline rtx
gen_spe_evsubfumiaaw(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
static inline rtx gen_spe_evsubfssiaaw                  (rtx, rtx);
static inline rtx
gen_spe_evsubfssiaaw(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
static inline rtx gen_spe_evsubfsmiaaw                  (rtx, rtx);
static inline rtx
gen_spe_evsubfsmiaaw(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
static inline rtx gen_spe_evmra                         (rtx, rtx);
static inline rtx
gen_spe_evmra(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
static inline rtx gen_spe_evdivws                       (rtx, rtx, rtx);
static inline rtx
gen_spe_evdivws(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evdivwu                       (rtx, rtx, rtx);
static inline rtx
gen_spe_evdivwu(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evsplatfi                     (rtx, rtx);
static inline rtx
gen_spe_evsplatfi(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
static inline rtx gen_spe_evsplati                      (rtx, rtx);
static inline rtx
gen_spe_evsplati(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
static inline rtx gen_spe_evstdd                        (rtx, rtx, rtx);
static inline rtx
gen_spe_evstdd(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evstddx                       (rtx, rtx, rtx);
static inline rtx
gen_spe_evstddx(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evstdh                        (rtx, rtx, rtx);
static inline rtx
gen_spe_evstdh(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evstdhx                       (rtx, rtx, rtx);
static inline rtx
gen_spe_evstdhx(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evstdw                        (rtx, rtx, rtx);
static inline rtx
gen_spe_evstdw(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evstdwx                       (rtx, rtx, rtx);
static inline rtx
gen_spe_evstdwx(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evstwhe                       (rtx, rtx, rtx);
static inline rtx
gen_spe_evstwhe(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evstwhex                      (rtx, rtx, rtx);
static inline rtx
gen_spe_evstwhex(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evstwho                       (rtx, rtx, rtx);
static inline rtx
gen_spe_evstwho(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evstwhox                      (rtx, rtx, rtx);
static inline rtx
gen_spe_evstwhox(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evstwwe                       (rtx, rtx, rtx);
static inline rtx
gen_spe_evstwwe(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evstwwex                      (rtx, rtx, rtx);
static inline rtx
gen_spe_evstwwex(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evstwwo                       (rtx, rtx, rtx);
static inline rtx
gen_spe_evstwwo(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evstwwox                      (rtx, rtx, rtx);
static inline rtx
gen_spe_evstwwox(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_truncdfsf2                    (rtx, rtx);
static inline rtx
gen_spe_truncdfsf2(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
static inline rtx gen_spe_absdf2                        (rtx, rtx);
static inline rtx
gen_spe_absdf2(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
static inline rtx gen_spe_nabsdf2                       (rtx, rtx);
static inline rtx
gen_spe_nabsdf2(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
static inline rtx gen_spe_negdf2                        (rtx, rtx);
static inline rtx
gen_spe_negdf2(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
static inline rtx gen_spe_adddf3                        (rtx, rtx, rtx);
static inline rtx
gen_spe_adddf3(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_subdf3                        (rtx, rtx, rtx);
static inline rtx
gen_spe_subdf3(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_muldf3                        (rtx, rtx, rtx);
static inline rtx
gen_spe_muldf3(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_divdf3                        (rtx, rtx, rtx);
static inline rtx
gen_spe_divdf3(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evmwhssfaa                    (rtx, rtx, rtx);
static inline rtx
gen_spe_evmwhssfaa(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evmwhssmaa                    (rtx, rtx, rtx);
static inline rtx
gen_spe_evmwhssmaa(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evmwhsmfaa                    (rtx, rtx, rtx);
static inline rtx
gen_spe_evmwhsmfaa(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evmwhsmiaa                    (rtx, rtx, rtx);
static inline rtx
gen_spe_evmwhsmiaa(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evmwhusiaa                    (rtx, rtx, rtx);
static inline rtx
gen_spe_evmwhusiaa(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evmwhumiaa                    (rtx, rtx, rtx);
static inline rtx
gen_spe_evmwhumiaa(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evmwhssfan                    (rtx, rtx, rtx);
static inline rtx
gen_spe_evmwhssfan(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evmwhssian                    (rtx, rtx, rtx);
static inline rtx
gen_spe_evmwhssian(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evmwhsmfan                    (rtx, rtx, rtx);
static inline rtx
gen_spe_evmwhsmfan(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evmwhsmian                    (rtx, rtx, rtx);
static inline rtx
gen_spe_evmwhsmian(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evmwhumian                    (rtx, rtx, rtx);
static inline rtx
gen_spe_evmwhumian(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evmwhgssfaa                   (rtx, rtx, rtx);
static inline rtx
gen_spe_evmwhgssfaa(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evmwhgsmfaa                   (rtx, rtx, rtx);
static inline rtx
gen_spe_evmwhgsmfaa(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evmwhgsmiaa                   (rtx, rtx, rtx);
static inline rtx
gen_spe_evmwhgsmiaa(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evmwhgumiaa                   (rtx, rtx, rtx);
static inline rtx
gen_spe_evmwhgumiaa(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evmwhgssfan                   (rtx, rtx, rtx);
static inline rtx
gen_spe_evmwhgssfan(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evmwhgsmfan                   (rtx, rtx, rtx);
static inline rtx
gen_spe_evmwhgsmfan(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evmwhgsmian                   (rtx, rtx, rtx);
static inline rtx
gen_spe_evmwhgsmian(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evmwhgumian                   (rtx, rtx, rtx);
static inline rtx
gen_spe_evmwhgumian(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_mtspefscr                     (rtx);
static inline rtx
gen_spe_mtspefscr(rtx ARG_UNUSED (a))
{
  return 0;
}
static inline rtx gen_spe_mfspefscr                     (rtx);
static inline rtx
gen_spe_mfspefscr(rtx ARG_UNUSED (a))
{
  return 0;
}
static inline rtx gen_e500_flip_gt_bit                  (rtx, rtx);
static inline rtx
gen_e500_flip_gt_bit(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
static inline rtx gen_cmpsfeq_gpr                       (rtx, rtx, rtx);
static inline rtx
gen_cmpsfeq_gpr(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_tstsfeq_gpr                       (rtx, rtx, rtx);
static inline rtx
gen_tstsfeq_gpr(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_cmpsfgt_gpr                       (rtx, rtx, rtx);
static inline rtx
gen_cmpsfgt_gpr(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_tstsfgt_gpr                       (rtx, rtx, rtx);
static inline rtx
gen_tstsfgt_gpr(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_cmpsflt_gpr                       (rtx, rtx, rtx);
static inline rtx
gen_cmpsflt_gpr(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_tstsflt_gpr                       (rtx, rtx, rtx);
static inline rtx
gen_tstsflt_gpr(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_cmpdfeq_gpr                       (rtx, rtx, rtx);
static inline rtx
gen_cmpdfeq_gpr(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_tstdfeq_gpr                       (rtx, rtx, rtx);
static inline rtx
gen_tstdfeq_gpr(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_cmpdfgt_gpr                       (rtx, rtx, rtx);
static inline rtx
gen_cmpdfgt_gpr(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_tstdfgt_gpr                       (rtx, rtx, rtx);
static inline rtx
gen_tstdfgt_gpr(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_cmpdflt_gpr                       (rtx, rtx, rtx);
static inline rtx
gen_cmpdflt_gpr(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_tstdflt_gpr                       (rtx, rtx, rtx);
static inline rtx
gen_tstdflt_gpr(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_e500_cr_ior_compare               (rtx, rtx, rtx);
static inline rtx
gen_e500_cr_ior_compare(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
extern rtx        gen_macho_high                        (rtx, rtx);
extern rtx        gen_macho_low                         (rtx, rtx, rtx);
extern rtx        gen_load_macho_picbase                (rtx, rtx);
extern rtx        gen_load_macho_picbase_label          (rtx, rtx);
extern rtx        gen_macho_correct_pic                 (rtx, rtx, rtx, rtx);
extern rtx        gen_zero_extendqidi2                  (rtx, rtx);
extern rtx        gen_zero_extendhidi2                  (rtx, rtx);
extern rtx        gen_zero_extendsidi2                  (rtx, rtx);
extern rtx        gen_extendhidi2                       (rtx, rtx);
extern rtx        gen_extendsidi2                       (rtx, rtx);
extern rtx        gen_zero_extendqisi2                  (rtx, rtx);
extern rtx        gen_extendqisi2                       (rtx, rtx);
static inline rtx gen_extendqisi2_power                 (rtx, rtx);
static inline rtx
gen_extendqisi2_power(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
extern rtx        gen_extendqisi2_no_power              (rtx, rtx);
extern rtx        gen_zero_extendqihi2                  (rtx, rtx);
extern rtx        gen_extendqihi2                       (rtx, rtx);
static inline rtx gen_extendqihi2_power                 (rtx, rtx);
static inline rtx
gen_extendqihi2_power(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
extern rtx        gen_extendqihi2_no_power              (rtx, rtx);
extern rtx        gen_zero_extendhisi2                  (rtx, rtx);
extern rtx        gen_extendhisi2                       (rtx, rtx);
extern rtx        gen_strlensi                          (rtx, rtx, rtx, rtx);
extern rtx        gen_addsi3                            (rtx, rtx, rtx);
extern rtx        gen_adddi3                            (rtx, rtx, rtx);
extern rtx        gen_subsi3                            (rtx, rtx, rtx);
extern rtx        gen_subdi3                            (rtx, rtx, rtx);
static inline rtx gen_sminsi3                           (rtx, rtx, rtx);
static inline rtx
gen_sminsi3(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_smaxsi3                           (rtx, rtx, rtx);
static inline rtx
gen_smaxsi3(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_uminsi3                           (rtx, rtx, rtx);
static inline rtx
gen_uminsi3(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_umaxsi3                           (rtx, rtx, rtx);
static inline rtx
gen_umaxsi3(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
extern rtx        gen_abssi2                            (rtx, rtx);
extern rtx        gen_negsi2                            (rtx, rtx);
extern rtx        gen_negdi2                            (rtx, rtx);
extern rtx        gen_ctzsi2                            (rtx, rtx);
extern rtx        gen_ctzdi2                            (rtx, rtx);
extern rtx        gen_ffssi2                            (rtx, rtx);
extern rtx        gen_ffsdi2                            (rtx, rtx);
static inline rtx gen_popcountsi2                       (rtx, rtx);
static inline rtx
gen_popcountsi2(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
static inline rtx gen_popcountdi2                       (rtx, rtx);
static inline rtx
gen_popcountdi2(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
extern rtx        gen_mulsi3                            (rtx, rtx, rtx);
extern rtx        gen_divmodsi4                         (rtx, rtx, rtx, rtx);
extern rtx        gen_udivsi3                           (rtx, rtx, rtx);
extern rtx        gen_udivdi3                           (rtx, rtx, rtx);
extern rtx        gen_divsi3                            (rtx, rtx, rtx);
extern rtx        gen_divdi3                            (rtx, rtx, rtx);
extern rtx        gen_modsi3                            (rtx, rtx, rtx);
extern rtx        gen_moddi3                            (rtx, rtx, rtx);
static inline rtx gen_udivmodsi4_normal                 (rtx, rtx, rtx, rtx);
static inline rtx
gen_udivmodsi4_normal(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c), rtx ARG_UNUSED (d))
{
  return 0;
}
static inline rtx gen_udivmodsi4_tests                  (rtx, rtx, rtx, rtx, rtx);
static inline rtx
gen_udivmodsi4_tests(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c), rtx ARG_UNUSED (d), rtx ARG_UNUSED (e))
{
  return 0;
}
extern rtx        gen_udivmodsi4                        (rtx, rtx, rtx, rtx);
extern rtx        gen_iorsi3                            (rtx, rtx, rtx);
extern rtx        gen_xorsi3                            (rtx, rtx, rtx);
extern rtx        gen_insv                              (rtx, rtx, rtx, rtx);
extern rtx        gen_extzv                             (rtx, rtx, rtx, rtx);
extern rtx        gen_ashlsi3                           (rtx, rtx, rtx);
extern rtx        gen_lshrsi3                           (rtx, rtx, rtx);
extern rtx        gen_ashrsi3                           (rtx, rtx, rtx);
extern rtx        gen_extendsfdf2                       (rtx, rtx);
extern rtx        gen_truncdfsf2                        (rtx, rtx);
extern rtx        gen_negsf2                            (rtx, rtx);
extern rtx        gen_abssf2                            (rtx, rtx);
extern rtx        gen_addsf3                            (rtx, rtx, rtx);
extern rtx        gen_subsf3                            (rtx, rtx, rtx);
extern rtx        gen_mulsf3                            (rtx, rtx, rtx);
extern rtx        gen_divsf3                            (rtx, rtx, rtx);
extern rtx        gen_sqrtsf2                           (rtx, rtx);
extern rtx        gen_copysignsf3                       (rtx, rtx, rtx);
extern rtx        gen_copysigndf3                       (rtx, rtx, rtx);
extern rtx        gen_smaxsf3                           (rtx, rtx, rtx);
extern rtx        gen_sminsf3                           (rtx, rtx, rtx);
static inline rtx gen_movsicc                           (rtx, rtx, rtx, rtx);
static inline rtx
gen_movsicc(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c), rtx ARG_UNUSED (d))
{
  return 0;
}
extern rtx        gen_movsfcc                           (rtx, rtx, rtx, rtx);
extern rtx        gen_negdf2                            (rtx, rtx);
extern rtx        gen_absdf2                            (rtx, rtx);
extern rtx        gen_adddf3                            (rtx, rtx, rtx);
extern rtx        gen_subdf3                            (rtx, rtx, rtx);
extern rtx        gen_muldf3                            (rtx, rtx, rtx);
extern rtx        gen_divdf3                            (rtx, rtx, rtx);
extern rtx        gen_smaxdf3                           (rtx, rtx, rtx);
extern rtx        gen_smindf3                           (rtx, rtx, rtx);
extern rtx        gen_movdfcc                           (rtx, rtx, rtx, rtx);
static inline rtx gen_fixuns_truncsfsi2                 (rtx, rtx);
static inline rtx
gen_fixuns_truncsfsi2(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
static inline rtx gen_fix_truncsfsi2                    (rtx, rtx);
static inline rtx
gen_fix_truncsfsi2(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
extern rtx        gen_floatsidf2                        (rtx, rtx);
static inline rtx gen_floatunssisf2                     (rtx, rtx);
static inline rtx
gen_floatunssisf2(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
extern rtx        gen_floatunssidf2                     (rtx, rtx);
extern rtx        gen_fix_truncdfsi2                    (rtx, rtx);
static inline rtx gen_floatsisf2                        (rtx, rtx);
static inline rtx
gen_floatsisf2(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
extern rtx        gen_floatdisf2                        (rtx, rtx);
extern rtx        gen_floatdisf2_internal2              (rtx, rtx, rtx);
extern rtx        gen_mulsidi3                          (rtx, rtx, rtx);
extern rtx        gen_umulsidi3                         (rtx, rtx, rtx);
extern rtx        gen_smulsi3_highpart                  (rtx, rtx, rtx);
extern rtx        gen_umulsi3_highpart                  (rtx, rtx, rtx);
extern rtx        gen_ashldi3                           (rtx, rtx, rtx);
extern rtx        gen_lshrdi3                           (rtx, rtx, rtx);
extern rtx        gen_ashrdi3                           (rtx, rtx, rtx);
extern rtx        gen_iordi3                            (rtx, rtx, rtx);
extern rtx        gen_xordi3                            (rtx, rtx, rtx);
static inline rtx gen_movsi_got                         (rtx, rtx);
static inline rtx
gen_movsi_got(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
extern rtx        gen_movqi                             (rtx, rtx);
extern rtx        gen_movhi                             (rtx, rtx);
extern rtx        gen_movsi                             (rtx, rtx);
extern rtx        gen_movdi                             (rtx, rtx);
extern rtx        gen_movti                             (rtx, rtx);
extern rtx        gen_movcc                             (rtx, rtx);
extern rtx        gen_movsf                             (rtx, rtx);
extern rtx        gen_movdf                             (rtx, rtx);
extern rtx        gen_movtf                             (rtx, rtx);
extern rtx        gen_extenddftf2                       (rtx, rtx);
extern rtx        gen_extendsftf2                       (rtx, rtx);
extern rtx        gen_trunctfdf2                        (rtx, rtx);
extern rtx        gen_floatsitf2                        (rtx, rtx);
extern rtx        gen_fix_trunctfsi2                    (rtx, rtx);
extern rtx        gen_abstf2                            (rtx, rtx);
extern rtx        gen_abstf2_internal                   (rtx, rtx, rtx);
extern rtx        gen_load_multiple                     (rtx, rtx, rtx);
extern rtx        gen_store_multiple                    (rtx, rtx, rtx);
extern rtx        gen_setmemsi                          (rtx, rtx, rtx, rtx);
extern rtx        gen_movmemsi                          (rtx, rtx, rtx, rtx);
extern rtx        gen_movmemsi_8reg                     (rtx, rtx, rtx, rtx);
extern rtx        gen_movmemsi_6reg                     (rtx, rtx, rtx, rtx);
extern rtx        gen_movmemsi_4reg                     (rtx, rtx, rtx, rtx);
extern rtx        gen_movmemsi_2reg                     (rtx, rtx, rtx, rtx);
extern rtx        gen_movmemsi_1reg                     (rtx, rtx, rtx, rtx);
extern rtx        gen_allocate_stack                    (rtx, rtx);
extern rtx        gen_save_stack_function               (rtx, rtx);
extern rtx        gen_restore_stack_function            (rtx, rtx);
extern rtx        gen_restore_stack_block               (rtx, rtx);
extern rtx        gen_save_stack_nonlocal               (rtx, rtx);
extern rtx        gen_restore_stack_nonlocal            (rtx, rtx);
extern rtx        gen_builtin_setjmp_receiver           (rtx);
extern rtx        gen_call_indirect_aix32               (rtx, rtx);
extern rtx        gen_call_indirect_aix64               (rtx, rtx);
extern rtx        gen_call_value_indirect_aix32         (rtx, rtx, rtx);
extern rtx        gen_call_value_indirect_aix64         (rtx, rtx, rtx);
#define GEN_CALL(A, B, C, D) gen_call ((A), (B), (C))
extern rtx        gen_call                              (rtx, rtx, rtx);
#define GEN_CALL_VALUE(A, B, C, D, E) gen_call_value ((A), (B), (C), (D))
extern rtx        gen_call_value                        (rtx, rtx, rtx, rtx);
extern rtx        gen_untyped_call                      (rtx, rtx, rtx);
#define GEN_SIBCALL(A, B, C, D) gen_sibcall ((A), (B), (C), (D))
extern rtx        gen_sibcall                           (rtx, rtx, rtx, rtx);
#define GEN_SIBCALL_VALUE(A, B, C, D, E) gen_sibcall_value ((A), (B), (C), (D), (E))
extern rtx        gen_sibcall_value                     (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_sibcall_epilogue                  (void);
extern rtx        gen_cmpsi                             (rtx, rtx);
extern rtx        gen_cmpdi                             (rtx, rtx);
extern rtx        gen_cmpsf                             (rtx, rtx);
extern rtx        gen_cmpdf                             (rtx, rtx);
extern rtx        gen_cmptf                             (rtx, rtx);
extern rtx        gen_beq                               (rtx);
extern rtx        gen_bne                               (rtx);
extern rtx        gen_bge                               (rtx);
extern rtx        gen_bgt                               (rtx);
extern rtx        gen_ble                               (rtx);
extern rtx        gen_blt                               (rtx);
extern rtx        gen_bgeu                              (rtx);
extern rtx        gen_bgtu                              (rtx);
extern rtx        gen_bleu                              (rtx);
extern rtx        gen_bltu                              (rtx);
extern rtx        gen_bunordered                        (rtx);
extern rtx        gen_bordered                          (rtx);
extern rtx        gen_buneq                             (rtx);
extern rtx        gen_bunge                             (rtx);
extern rtx        gen_bungt                             (rtx);
extern rtx        gen_bunle                             (rtx);
extern rtx        gen_bunlt                             (rtx);
extern rtx        gen_bltgt                             (rtx);
extern rtx        gen_seq                               (rtx);
extern rtx        gen_sne                               (rtx);
extern rtx        gen_sge                               (rtx);
extern rtx        gen_sgt                               (rtx);
extern rtx        gen_sle                               (rtx);
extern rtx        gen_slt                               (rtx);
extern rtx        gen_sgeu                              (rtx);
extern rtx        gen_sgtu                              (rtx);
extern rtx        gen_sleu                              (rtx);
extern rtx        gen_sltu                              (rtx);
extern rtx        gen_sunordered                        (rtx);
extern rtx        gen_sordered                          (rtx);
extern rtx        gen_suneq                             (rtx);
extern rtx        gen_sunge                             (rtx);
extern rtx        gen_sungt                             (rtx);
extern rtx        gen_sunle                             (rtx);
extern rtx        gen_sunlt                             (rtx);
extern rtx        gen_sltgt                             (rtx);
extern rtx        gen_stack_protect_set                 (rtx, rtx);
extern rtx        gen_stack_protect_test                (rtx, rtx, rtx);
extern rtx        gen_indirect_jump                     (rtx);
extern rtx        gen_tablejump                         (rtx, rtx);
extern rtx        gen_tablejumpsi                       (rtx, rtx);
extern rtx        gen_tablejumpdi                       (rtx, rtx);
extern rtx        gen_doloop_end                        (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_ctrsi                             (rtx, rtx);
extern rtx        gen_ctrdi                             (rtx, rtx);
extern rtx        gen_conditional_trap                  (rtx, rtx);
extern rtx        gen_prologue                          (void);
extern rtx        gen_epilogue                          (void);
extern rtx        gen_movsi_to_cr_one                   (rtx, rtx);
extern rtx        gen_eh_return                         (rtx);
extern rtx        gen_flt_rounds                        (rtx);
extern rtx        gen_memory_barrier                    (void);
extern rtx        gen_sync_compare_and_swaphi           (rtx, rtx, rtx, rtx);
extern rtx        gen_sync_compare_and_swapqi           (rtx, rtx, rtx, rtx);
extern rtx        gen_sync_addqi                        (rtx, rtx);
extern rtx        gen_sync_subqi                        (rtx, rtx);
extern rtx        gen_sync_iorqi                        (rtx, rtx);
extern rtx        gen_sync_xorqi                        (rtx, rtx);
extern rtx        gen_sync_andqi                        (rtx, rtx);
extern rtx        gen_sync_addhi                        (rtx, rtx);
extern rtx        gen_sync_subhi                        (rtx, rtx);
extern rtx        gen_sync_iorhi                        (rtx, rtx);
extern rtx        gen_sync_xorhi                        (rtx, rtx);
extern rtx        gen_sync_andhi                        (rtx, rtx);
extern rtx        gen_sync_addsi                        (rtx, rtx);
extern rtx        gen_sync_subsi                        (rtx, rtx);
extern rtx        gen_sync_iorsi                        (rtx, rtx);
extern rtx        gen_sync_xorsi                        (rtx, rtx);
extern rtx        gen_sync_andsi                        (rtx, rtx);
extern rtx        gen_sync_adddi                        (rtx, rtx);
extern rtx        gen_sync_subdi                        (rtx, rtx);
extern rtx        gen_sync_iordi                        (rtx, rtx);
extern rtx        gen_sync_xordi                        (rtx, rtx);
extern rtx        gen_sync_anddi                        (rtx, rtx);
extern rtx        gen_sync_nandqi                       (rtx, rtx);
extern rtx        gen_sync_nandhi                       (rtx, rtx);
extern rtx        gen_sync_nandsi                       (rtx, rtx);
extern rtx        gen_sync_nanddi                       (rtx, rtx);
extern rtx        gen_sync_old_addqi                    (rtx, rtx, rtx);
extern rtx        gen_sync_old_subqi                    (rtx, rtx, rtx);
extern rtx        gen_sync_old_iorqi                    (rtx, rtx, rtx);
extern rtx        gen_sync_old_xorqi                    (rtx, rtx, rtx);
extern rtx        gen_sync_old_andqi                    (rtx, rtx, rtx);
extern rtx        gen_sync_old_addhi                    (rtx, rtx, rtx);
extern rtx        gen_sync_old_subhi                    (rtx, rtx, rtx);
extern rtx        gen_sync_old_iorhi                    (rtx, rtx, rtx);
extern rtx        gen_sync_old_xorhi                    (rtx, rtx, rtx);
extern rtx        gen_sync_old_andhi                    (rtx, rtx, rtx);
extern rtx        gen_sync_old_addsi                    (rtx, rtx, rtx);
extern rtx        gen_sync_old_subsi                    (rtx, rtx, rtx);
extern rtx        gen_sync_old_iorsi                    (rtx, rtx, rtx);
extern rtx        gen_sync_old_xorsi                    (rtx, rtx, rtx);
extern rtx        gen_sync_old_andsi                    (rtx, rtx, rtx);
extern rtx        gen_sync_old_adddi                    (rtx, rtx, rtx);
extern rtx        gen_sync_old_subdi                    (rtx, rtx, rtx);
extern rtx        gen_sync_old_iordi                    (rtx, rtx, rtx);
extern rtx        gen_sync_old_xordi                    (rtx, rtx, rtx);
extern rtx        gen_sync_old_anddi                    (rtx, rtx, rtx);
extern rtx        gen_sync_old_nandqi                   (rtx, rtx, rtx);
extern rtx        gen_sync_old_nandhi                   (rtx, rtx, rtx);
extern rtx        gen_sync_old_nandsi                   (rtx, rtx, rtx);
extern rtx        gen_sync_old_nanddi                   (rtx, rtx, rtx);
extern rtx        gen_sync_new_addqi                    (rtx, rtx, rtx);
extern rtx        gen_sync_new_subqi                    (rtx, rtx, rtx);
extern rtx        gen_sync_new_iorqi                    (rtx, rtx, rtx);
extern rtx        gen_sync_new_xorqi                    (rtx, rtx, rtx);
extern rtx        gen_sync_new_andqi                    (rtx, rtx, rtx);
extern rtx        gen_sync_new_addhi                    (rtx, rtx, rtx);
extern rtx        gen_sync_new_subhi                    (rtx, rtx, rtx);
extern rtx        gen_sync_new_iorhi                    (rtx, rtx, rtx);
extern rtx        gen_sync_new_xorhi                    (rtx, rtx, rtx);
extern rtx        gen_sync_new_andhi                    (rtx, rtx, rtx);
extern rtx        gen_sync_new_addsi                    (rtx, rtx, rtx);
extern rtx        gen_sync_new_subsi                    (rtx, rtx, rtx);
extern rtx        gen_sync_new_iorsi                    (rtx, rtx, rtx);
extern rtx        gen_sync_new_xorsi                    (rtx, rtx, rtx);
extern rtx        gen_sync_new_andsi                    (rtx, rtx, rtx);
extern rtx        gen_sync_new_adddi                    (rtx, rtx, rtx);
extern rtx        gen_sync_new_subdi                    (rtx, rtx, rtx);
extern rtx        gen_sync_new_iordi                    (rtx, rtx, rtx);
extern rtx        gen_sync_new_xordi                    (rtx, rtx, rtx);
extern rtx        gen_sync_new_anddi                    (rtx, rtx, rtx);
extern rtx        gen_sync_new_nandqi                   (rtx, rtx, rtx);
extern rtx        gen_sync_new_nandhi                   (rtx, rtx, rtx);
extern rtx        gen_sync_new_nandsi                   (rtx, rtx, rtx);
extern rtx        gen_sync_new_nanddi                   (rtx, rtx, rtx);
extern rtx        gen_sync_lock_releaseqi               (rtx, rtx);
extern rtx        gen_sync_lock_releasehi               (rtx, rtx);
extern rtx        gen_sync_lock_releasesi               (rtx, rtx);
extern rtx        gen_sync_lock_releasedi               (rtx, rtx);
extern rtx        gen_sync_lock_releaseti               (rtx, rtx);
extern rtx        gen_movv4si                           (rtx, rtx);
extern rtx        gen_movv8hi                           (rtx, rtx);
extern rtx        gen_movv16qi                          (rtx, rtx);
extern rtx        gen_movv4sf                           (rtx, rtx);
extern rtx        gen_mulv4sf3                          (rtx, rtx, rtx);
extern rtx        gen_mulv4si3                          (rtx, rtx, rtx);
extern rtx        gen_vcondv4si                         (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_vconduv4si                        (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_vcondv4sf                         (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_vcondv8hi                         (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_vconduv8hi                        (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_vcondv16qi                        (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_vconduv16qi                       (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_cr6_test_for_zero                 (rtx);
extern rtx        gen_cr6_test_for_zero_reverse         (rtx);
extern rtx        gen_cr6_test_for_lt                   (rtx);
extern rtx        gen_cr6_test_for_lt_reverse           (rtx);
extern rtx        gen_build_vector_mask_for_load        (rtx, rtx);
extern rtx        gen_vec_initv4si                      (rtx, rtx);
extern rtx        gen_vec_initv8hi                      (rtx, rtx);
extern rtx        gen_vec_initv16qi                     (rtx, rtx);
extern rtx        gen_vec_initv4sf                      (rtx, rtx);
extern rtx        gen_vec_setv4si                       (rtx, rtx, rtx);
extern rtx        gen_vec_setv8hi                       (rtx, rtx, rtx);
extern rtx        gen_vec_setv16qi                      (rtx, rtx, rtx);
extern rtx        gen_vec_setv4sf                       (rtx, rtx, rtx);
extern rtx        gen_vec_extractv4si                   (rtx, rtx, rtx);
extern rtx        gen_vec_extractv8hi                   (rtx, rtx, rtx);
extern rtx        gen_vec_extractv16qi                  (rtx, rtx, rtx);
extern rtx        gen_vec_extractv4sf                   (rtx, rtx, rtx);
extern rtx        gen_absv4si2                          (rtx, rtx);
extern rtx        gen_absv8hi2                          (rtx, rtx);
extern rtx        gen_absv16qi2                         (rtx, rtx);
extern rtx        gen_absv4sf2                          (rtx, rtx);
extern rtx        gen_altivec_abss_v4si                 (rtx, rtx);
extern rtx        gen_altivec_abss_v8hi                 (rtx, rtx);
extern rtx        gen_altivec_abss_v16qi                (rtx, rtx);
extern rtx        gen_vec_shl_v4si                      (rtx, rtx, rtx);
extern rtx        gen_vec_shl_v8hi                      (rtx, rtx, rtx);
extern rtx        gen_vec_shl_v16qi                     (rtx, rtx, rtx);
extern rtx        gen_vec_shl_v4sf                      (rtx, rtx, rtx);
extern rtx        gen_vec_shr_v4si                      (rtx, rtx, rtx);
extern rtx        gen_vec_shr_v8hi                      (rtx, rtx, rtx);
extern rtx        gen_vec_shr_v16qi                     (rtx, rtx, rtx);
extern rtx        gen_vec_shr_v4sf                      (rtx, rtx, rtx);
extern rtx        gen_reduc_splus_v8hi                  (rtx, rtx);
extern rtx        gen_reduc_splus_v16qi                 (rtx, rtx);
extern rtx        gen_reduc_uplus_v16qi                 (rtx, rtx);
extern rtx        gen_negv4si2                          (rtx, rtx);
extern rtx        gen_negv8hi2                          (rtx, rtx);
extern rtx        gen_negv16qi2                         (rtx, rtx);
extern rtx        gen_udot_prodv8hi                     (rtx, rtx, rtx, rtx);
extern rtx        gen_udot_prodv16qi                    (rtx, rtx, rtx, rtx);
extern rtx        gen_sdot_prodv8hi                     (rtx, rtx, rtx, rtx);
extern rtx        gen_widen_usumv8hi3                   (rtx, rtx, rtx);
extern rtx        gen_widen_usumv16qi3                  (rtx, rtx, rtx);
extern rtx        gen_widen_ssumv16qi3                  (rtx, rtx, rtx);
extern rtx        gen_widen_ssumv8hi3                   (rtx, rtx, rtx);
extern rtx        gen_negv4sf2                          (rtx, rtx);
static inline rtx gen_movv2si                           (rtx, rtx);
static inline rtx
gen_movv2si(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
static inline rtx gen_movv1di                           (rtx, rtx);
static inline rtx
gen_movv1di(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
static inline rtx gen_movv4hi                           (rtx, rtx);
static inline rtx
gen_movv4hi(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
static inline rtx gen_movv2sf                           (rtx, rtx);
static inline rtx
gen_movv2sf(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}

#endif /* GCC_INSN_FLAGS_H */
