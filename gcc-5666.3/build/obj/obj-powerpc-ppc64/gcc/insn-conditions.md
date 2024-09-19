(define_conditions [
  (-1 "(gpc_reg_operand (operands[0], SFmode)
   || gpc_reg_operand (operands[1], SFmode))
   && (TARGET_HARD_FLOAT && TARGET_FPRS)")
  (-1 "! TARGET_POWER && TARGET_32BIT")
  (-1 "(32 - (INTVAL (operands[4]) & 31)) >= INTVAL (operands[1])")
  (0 "TARGET_ELF && ! TARGET_64BIT")
  (-1 "TARGET_STRING && !TARGET_POWER && XVECLEN (operands[0], 0) == 7")
  (0 "TARGET_FPRND && TARGET_HARD_FLOAT && TARGET_FPRS")
  (-1 "(! TARGET_POWERPC64 && TARGET_HARD_FLOAT && TARGET_FPRS) && ( (!no_new_pseudos || offsettable_nonstrict_memref_p (operands[4])))")
  (-1 "TARGET_STRING && XVECLEN (operands[0], 0) == 8")
  (-1 "(INTVAL (operands[3]) & CALL_LONG) == 0")
  (0 "TARGET_32BIT
   && DEFAULT_ABI == ABI_AIX
   && (INTVAL (operands[3]) & CALL_LONG) == 0")
  (-1 "(reload_completed && ! gpc_reg_operand (operands[0], SImode)) && (TARGET_64BIT)")
  (0 "TARGET_SPE")
  (-1 "TARGET_POWER || (! TARGET_POWER && ! TARGET_POWERPC)")
  (-1 "TARGET_POWERPC64 && includes_rldic_lshift_p (operands[2], operands[3])")
  (-1 "TARGET_POWERPC && TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_FUSED_MADD")
  (0 "(TARGET_E500_DOUBLE && DFmode == DFmode) || (TARGET_SPE && DFmode != DFmode)")
  (-1 "TARGET_ALTIVEC 
   && (register_operand (operands[0], V4SImode) 
       || register_operand (operands[1], V4SImode))")
  (-1 "(TARGET_POWERPC) && (TARGET_32BIT)")
  (-1 "TARGET_UPDATE")
  (0 "TARGET_STRING && TARGET_POWER && XVECLEN (operands[0], 0) == 5")
  (-1 "TARGET_POWER2 && TARGET_HARD_FLOAT && TARGET_FPRS")
  (-1 "gpc_reg_operand (operands[0], HImode)
   || gpc_reg_operand (operands[1], HImode)")
  (-1 "TARGET_POWERPC && ! TARGET_POWER")
  (-1 "TARGET_POWERPC64 && reload_completed
   && ((GET_CODE (operands[0]) == REG && REGNO (operands[0]) <= 31)
       || (GET_CODE (operands[0]) == SUBREG
	   && GET_CODE (SUBREG_REG (operands[0])) == REG
	   && REGNO (SUBREG_REG (operands[0])) <= 31))")
  (-1 "(DEFAULT_ABI == ABI_DARWIN)
   && (INTVAL (operands[3]) & CALL_LONG) == 0")
  (0 "TARGET_POWER && ! TARGET_POWERPC64
   && (gpc_reg_operand (operands[0], TImode) || gpc_reg_operand (operands[1], TImode))")
  (-1 "((DEFAULT_ABI == ABI_DARWIN
     || DEFAULT_ABI == ABI_V4)
   && (INTVAL (operands[2]) & CALL_LONG) == 0) && (TARGET_32BIT)")
  (0 "TARGET_64BIT
   && DEFAULT_ABI == ABI_AIX
   && (INTVAL (operands[3]) & CALL_LONG) == 0")
  (-1 "TARGET_DLMZB && WORDS_BIG_ENDIAN && !optimize_size")
  (-1 "gpc_reg_operand (operands[0], QImode)
   || gpc_reg_operand (operands[1], QImode)")
  (-1 "includes_rshift_p (operands[2], GEN_INT (65535)) && reload_completed")
  (0 "TARGET_STRING && TARGET_POWER
   && INTVAL (operands[2]) > 0 && INTVAL (operands[2]) <= 4")
  (-1 "(TARGET_STRING && ! TARGET_POWER
   && INTVAL (operands[2]) > 8 && INTVAL (operands[2]) <= 16
   && (REGNO (operands[0]) < 5 || REGNO (operands[0]) > 8)
   && (REGNO (operands[1]) < 5 || REGNO (operands[1]) > 8)
   && REGNO (operands[4]) == 5) && (TARGET_64BIT)")
  (-1 "TARGET_STRING && !TARGET_POWER && XVECLEN (operands[0], 0) == 4")
  (-1 "(unsigned HOST_WIDE_INT) (INTVAL (operands[1]) + 0x8000) >= 0x10000
   && (INTVAL (operands[1]) & 0xffff) != 0")
  (-1 "(INTVAL (operands[2]) & CALL_LONG) == 0")
  (-1 "(DEFAULT_ABI == ABI_DARWIN) && flag_pic && TARGET_64BIT")
  (-1 "(DEFAULT_ABI == ABI_DARWIN) && flag_pic")
  (-1 "TARGET_POWERPC64
    && (fixed_regs[CR0_REGNO] || !logical_operand (operands[2], DImode))
    && !mask_operand (operands[2], DImode)
    && !mask64_operand (operands[2], DImode)")
  (-1 "TARGET_64BIT && (INTVAL (operands[3]) & CALL_LONG) == 0")
  (-1 "! TARGET_POWERPC64 && reload_completed
   && ((GET_CODE (operands[0]) == REG && REGNO (operands[0]) <= 31)
       || (GET_CODE (operands[0]) == SUBREG
	   && GET_CODE (SUBREG_REG (operands[0])) == REG
	   && REGNO (SUBREG_REG (operands[0])) <= 31))")
  (-1 "TARGET_POWERPC64 && TARGET_HARD_FLOAT && TARGET_FPRS")
  (-1 "TARGET_ALTIVEC && reload_completed")
  (-1 "TARGET_POWERPC && INTVAL(operands[1]) == ~INTVAL(operands[5])")
  (-1 "!TARGET_IEEEQUAD
   && (TARGET_SOFT_FLOAT || !TARGET_FPRS) && TARGET_LONG_DOUBLE_128
   && (gpc_reg_operand (operands[0], TFmode)
       || gpc_reg_operand (operands[1], TFmode))")
  (0 "TARGET_POWER || TARGET_ISEL")
  (-1 "! TARGET_64BIT && DEFAULT_ABI == ABI_DARWIN")
  (-1 "gpc_reg_operand (operands[0], SImode)
   || gpc_reg_operand (operands[1], SImode)")
  (0 "HAVE_AS_TLS && TARGET_64BIT")
  (0 "(TARGET_E500_DOUBLE && V4HImode == DFmode) || (TARGET_SPE && V4HImode != DFmode)")
  (-1 "TARGET_ALTIVEC && GET_MODE (operands[0]) == Pmode")
  (0 "TARGET_SPE && INTVAL (operands[1]) >= 0 && INTVAL (operands[1]) <= 31")
  (0 "TARGET_HARD_FLOAT && !TARGET_FPRS && flag_unsafe_math_optimizations")
  (1 "! TARGET_POWER")
  (-1 "TARGET_POWERPC64 || TARGET_POWER")
  (0 "TARGET_32BIT
   && DEFAULT_ABI == ABI_AIX
   && (INTVAL (operands[2]) & CALL_LONG) == 0")
  (-1 "peep2_reg_dead_p (3, operands[0])
   && peep2_reg_dead_p (4, operands[4])")
  (0 "TARGET_SPE
   && (gpc_reg_operand (operands[0], V2SImode)
       || gpc_reg_operand (operands[1], V2SImode))")
  (-1 "(!TARGET_IEEEQUAD && !TARGET_XL_COMPAT
   && TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_LONG_DOUBLE_128) && ( reload_completed && REGNO (operands[0]) == REGNO (operands[1]))")
  (0 "TARGET_SPE
   && (gpc_reg_operand (operands[0], V1DImode)
       || gpc_reg_operand (operands[1], V1DImode))")
  (-1 "!TARGET_IEEEQUAD && TARGET_LONG_DOUBLE_128")
  (-1 "(TARGET_POWERPC64 && TARGET_UPDATE) && (TARGET_64BIT)")
  (-1 "TARGET_HARD_FLOAT && (TARGET_FPRS || TARGET_E500_DOUBLE)")
  (0 "TARGET_SPE && INTVAL (operands[2]) >= 0 && INTVAL (operands[2]) <= 31")
  (-1 "(DEFAULT_ABI == ABI_V4 && flag_pic == 1)
   || (TARGET_TOC && TARGET_MINIMAL_TOC)
   || (DEFAULT_ABI == ABI_DARWIN && flag_pic)")
  (-1 "TARGET_POWERPC64 && TARGET_HARD_FLOAT && TARGET_FPRS
   && (gpc_reg_operand (operands[0], DFmode)
       || gpc_reg_operand (operands[1], DFmode))")
  (-1 "TARGET_STRING && ! TARGET_POWER && ! TARGET_POWERPC64
   && INTVAL (operands[2]) > 4 && INTVAL (operands[2]) <= 8")
  (0 "TARGET_STRING && TARGET_POWER
   && INTVAL (operands[2]) > 8 && INTVAL (operands[2]) <= 16
   && (REGNO (operands[0]) < 5 || REGNO (operands[0]) > 8)
   && (REGNO (operands[1]) < 5 || REGNO (operands[1]) > 8)
   && REGNO (operands[4]) == 5")
  (0 "DEFAULT_ABI == ABI_AIX && TARGET_64BIT")
  (-1 "!TARGET_IEEEQUAD && TARGET_XL_COMPAT
   && TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_LONG_DOUBLE_128")
  (0 "TARGET_STRING && TARGET_POWER && XVECLEN (operands[0], 0) == 9")
  (-1 "(TARGET_STRING && ! TARGET_POWER
   && INTVAL (operands[2]) > 16 && INTVAL (operands[2]) <= 32
   && (REGNO (operands[0]) < 5 || REGNO (operands[0]) > 10)
   && (REGNO (operands[1]) < 5 || REGNO (operands[1]) > 10)
   && REGNO (operands[4]) == 5) && (TARGET_64BIT)")
  (-1 "!TARGET_IEEEQUAD
   && TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_LONG_DOUBLE_128")
  (-1 "TARGET_POWERPC64 && (TARGET_SOFT_FLOAT || !TARGET_FPRS)
   && (gpc_reg_operand (operands[0], DFmode)
       || gpc_reg_operand (operands[1], DFmode))")
  (-1 "TARGET_POWERPC && reload_completed")
  (-1 "(TARGET_POWERPC64 && TARGET_HARD_FLOAT && TARGET_FPRS) && ( 1)")
  (-1 "REGNO (operands[2]) != REGNO (operands[5])")
  (0 "TARGET_STRING && TARGET_POWER && XVECLEN (operands[0], 0) == 6")
  (-1 "!TARGET_IEEEQUAD && !TARGET_XL_COMPAT
   && TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_LONG_DOUBLE_128")
  (-1 "(DEFAULT_ABI == ABI_V4
   || DEFAULT_ABI == ABI_DARWIN) && (TARGET_32BIT)")
  (-1 "((DEFAULT_ABI == ABI_DARWIN
   || (DEFAULT_ABI == ABI_V4
       && (INTVAL (operands[3]) & CALL_LONG) == 0))) && (TARGET_32BIT)")
  (-1 "includes_lshift_p (operands[2], operands[3])")
  (1 "TARGET_POWERPC || (! TARGET_POWER && ! TARGET_POWERPC)")
  (-1 "! TARGET_POWER && reload_completed")
  (-1 "TARGET_32BIT && reload_completed")
  (-1 "TARGET_POWERPC64 && (gpc_reg_operand (operands[0], TImode)
   || gpc_reg_operand (operands[1], TImode))")
  (-1 "((DEFAULT_ABI == ABI_DARWIN
       || DEFAULT_ABI == ABI_V4)
   && (INTVAL (operands[3]) & CALL_LONG) == 0) && (TARGET_64BIT)")
  (-1 "! TARGET_POWERPC64 && TARGET_HARD_FLOAT && TARGET_FPRS
   && (gpc_reg_operand (operands[0], DFmode)
       || gpc_reg_operand (operands[1], DFmode))")
  (0 "(TARGET_E500_DOUBLE && V2SImode == DFmode) || (TARGET_SPE && V2SImode != DFmode)")
  (-1 "TARGET_ALTIVEC")
  (-1 "! TARGET_POWER && ! TARGET_POWERPC64
   && (gpc_reg_operand (operands[0], TImode) || gpc_reg_operand (operands[1], TImode))")
  (-1 "TARGET_HARD_FLOAT")
  (-1 "((DEFAULT_ABI == ABI_DARWIN
   || (DEFAULT_ABI == ABI_V4
       && (INTVAL (operands[2]) & CALL_LONG) == 0))) && (TARGET_32BIT)")
  (-1 "TARGET_STRING")
  (-1 "TARGET_32BIT && optimize_size")
  (-1 "TARGET_PPC_GFXOPT && TARGET_HARD_FLOAT && TARGET_FPRS
   && !HONOR_NANS (DFmode) && !HONOR_SIGNED_ZEROS (DFmode)")
  (-1 "(TARGET_32BIT) && ( !reg_overlap_mentioned_p (operands[0], operands[3]))")
  (1 "! TARGET_POWER && ! TARGET_ISEL")
  (-1 "TARGET_MULTIPLE")
  (0 "(TARGET_E500_DOUBLE && V2SFmode == DFmode) || (TARGET_SPE && V2SFmode != DFmode)")
  (-1 "TARGET_ALTIVEC 
   && (register_operand (operands[0], V4SFmode) 
       || register_operand (operands[1], V4SFmode))")
  (0 "TARGET_SPE && reload_completed")
  (-1 "(TARGET_STRING && ! TARGET_POWER
   && INTVAL (operands[2]) > 8 && INTVAL (operands[2]) <= 16
   && (REGNO (operands[0]) < 5 || REGNO (operands[0]) > 8)
   && (REGNO (operands[1]) < 5 || REGNO (operands[1]) > 8)
   && REGNO (operands[4]) == 5) && (TARGET_32BIT)")
  (-1 "TARGET_MACHO && TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_64BIT")
  (0 "TARGET_E500_DOUBLE")
  (-1 "TARGET_64BIT && reload_completed")
  (-1 "TARGET_STRING && !TARGET_POWER && XVECLEN (operands[0], 0) == 8")
  (0 "TARGET_STRING && TARGET_POWER && XVECLEN (operands[0], 0) == 4")
  (1 "DEFAULT_ABI == ABI_DARWIN")
  (-1 "!TARGET_IEEEQUAD
   && TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_LONG_DOUBLE_128
   && (gpc_reg_operand (operands[0], TFmode)
       || gpc_reg_operand (operands[1], TFmode))")
  (-1 "(TARGET_STRING && ! TARGET_POWER
   && INTVAL (operands[2]) > 0 && INTVAL (operands[2]) <= 4) && (TARGET_32BIT)")
  (-1 "TARGET_POWERPC64
   && (gpc_reg_operand (operands[0], DImode)
       || gpc_reg_operand (operands[1], DImode))")
  (0 "TARGET_HARD_FLOAT && TARGET_E500_DOUBLE && !flag_unsafe_math_optimizations")
  (-1 "(TARGET_POWERPC64 && TARGET_HARD_FLOAT && TARGET_FPRS) && ( reload_completed)")
  (-1 "TARGET_POWERPC && TARGET_HARD_FLOAT && TARGET_FPRS")
  (0 "TARGET_E500")
  (0 "TARGET_STRING && TARGET_POWER && ! TARGET_POWERPC64
   && INTVAL (operands[2]) > 4 && INTVAL (operands[2]) <= 8")
  (-1 "! TARGET_POWER && TARGET_32BIT && reload_completed")
  (-1 "! TARGET_POWERPC64 && reload_completed")
  (-1 "(!TARGET_POWER && optimize_size) && (TARGET_64BIT)")
  (-1 "! TARGET_POWER && ! TARGET_POWERPC")
  (-1 "! TARGET_POWERPC64
   && (gpc_reg_operand (operands[0], DImode)
       || gpc_reg_operand (operands[1], DImode))")
  (0 "HOST_BITS_PER_WIDE_INT == 32 && TARGET_POWERPC64
   && GET_CODE (operands[1]) == CONST_DOUBLE
   && num_insns_constant (operands[1], DImode) == 1")
  (-1 "! TARGET_POWER && TARGET_32BIT && !TARGET_ISEL")
  (-1 "TARGET_64BIT ")
  (-1 "reload_completed && !TARGET_POWERPC64
   && gpr_or_gpr_p (operands[0], operands[1])")
  (-1 "TARGET_HARD_FLOAT && TARGET_FPRS")
  (-1 "TARGET_POWERPC64 && reload_completed
   && includes_rldic_lshift_p (operands[2], operands[3])")
  (1 "WORDS_BIG_ENDIAN")
  (-1 "TARGET_STRING && !TARGET_POWERPC64")
  (-1 "TARGET_64BIT && reload_completed
    && (fixed_regs[CR0_REGNO] || !logical_operand (operands[2], DImode))
    && !mask_operand (operands[2], DImode)
    && !mask64_operand (operands[2], DImode)")
  (-1 "TARGET_32BIT && optimize_size && reload_completed")
  (-1 "TARGET_32BIT && !TARGET_POWERPC64 && !TARGET_POWER && WORDS_BIG_ENDIAN")
  (-1 "TARGET_STRING && ! TARGET_POWERPC64")
  (-1 "TARGET_STRING && XVECLEN (operands[0], 0) == 5")
  (0 "HAVE_AS_TLS && !TARGET_64BIT")
  (0 "TARGET_POWER && reload_completed")
  (0 "TARGET_POPCNTB && flag_finite_math_only")
  (0 "(TARGET_ISEL) && ( reload_completed)")
  (-1 "TARGET_STRING && !TARGET_POWER && XVECLEN (operands[0], 0) == 6")
  (-1 "(!TARGET_IEEEQUAD
   && TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_LONG_DOUBLE_128
   && (gpc_reg_operand (operands[0], TFmode)
       || gpc_reg_operand (operands[1], TFmode))) && ( reload_completed)")
  (0 "TARGET_64BIT && DEFAULT_ABI == ABI_AIX")
  (-1 "TARGET_PPC_GFXOPT")
  (0 "TARGET_64BIT
   && DEFAULT_ABI == ABI_AIX
   && (INTVAL (operands[2]) & CALL_LONG) == 0")
  (0 "TARGET_MFCRF")
  (-1 "includes_rshift_p (operands[2], GEN_INT (255))")
  (-1 "TARGET_SCHED_PROLOG")
  (-1 "TARGET_64BIT && DEFAULT_ABI == ABI_DARWIN")
  (-1 "TARGET_32BIT")
  (-1 "TARGET_STRING && !TARGET_POWER && XVECLEN (operands[0], 0) == 9")
  (0 "TARGET_ELF && DEFAULT_ABI != ABI_AIX
   && (flag_pic == 2 || (flag_pic && TARGET_SECURE_PLT))")
  (-1 "INTVAL (operands[4]) >= INTVAL (operands[1])")
  (-1 "TARGET_MACHO && !TARGET_64BIT")
  (-1 "! TARGET_POWERPC")
  (-1 "!(TARGET_E500_DOUBLE && GET_CODE (operands[2]) == SUBREG)
   && peep2_reg_dead_p (2, operands[0])")
  (-1 "TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_FUSED_MADD
   && HONOR_SIGNED_ZEROS (DFmode)")
  (-1 "TARGET_POWERPC && ! TARGET_POWERPC64")
  (-1 "TARGET_32BIT && !TARGET_POWERPC64")
  (-1 "! TARGET_POWERPC && TARGET_HARD_FLOAT && TARGET_FPRS")
  (-1 "TARGET_POWERPC64
   && insvdi_rshift_rlwimi_p (operands[1], operands[2], operands[4])")
  (-1 "TARGET_POWER2
   && TARGET_HARD_FLOAT && TARGET_FPRS
   && registers_ok_for_quad_peep (operands[1], operands[3])
   && mems_ok_for_quad_peep (operands[0], operands[2])")
  (-1 "(reload_completed) && (TARGET_64BIT)")
  (-1 "TARGET_64BIT && (INTVAL (operands[2]) & CALL_LONG) == 0")
  (0 "TARGET_HARD_FLOAT && !TARGET_FPRS && !flag_unsafe_math_optimizations")
  (0 "TARGET_POWERPC && TARGET_POWER")
  (-1 "(!TARGET_IEEEQUAD
   && TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_LONG_DOUBLE_128) && ( (!no_new_pseudos || offsettable_nonstrict_memref_p (operands[5])))")
  (-1 "(!TARGET_IEEEQUAD
   && TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_LONG_DOUBLE_128) && ( reload_completed)")
  (-1 "TARGET_64BIT && includes_rldic_lshift_p (operands[2], operands[3])")
  (-1 "(TARGET_POWERPC) && (TARGET_POWERPC64)")
  (-1 "TARGET_MACHO && TARGET_64BIT")
  (-1 "TARGET_STRING && XVECLEN (operands[0], 0) == 7")
  (0 "TARGET_HARD_FLOAT && TARGET_E500_DOUBLE")
  (-1 "register_operand (operands[0], CCmode)
   || register_operand (operands[1], CCmode)")
  (0 "!TARGET_FPRS && TARGET_HARD_FLOAT")
  (-1 "(TARGET_POWERPC) && (TARGET_64BIT)")
  (0 "TARGET_HARD_FLOAT && !TARGET_FPRS")
  (-1 "(TARGET_POWERPC64) && ( reload_completed)")
  (-1 "(TARGET_STRING && ! TARGET_POWER
   && INTVAL (operands[2]) > 0 && INTVAL (operands[2]) <= 4) && (TARGET_64BIT)")
  (0 "TARGET_ELF && TARGET_SECURE_PLT && DEFAULT_ABI != ABI_AIX && flag_pic")
  (-1 "(!TARGET_POWER) && (TARGET_POWERPC64)")
  (-1 "(DEFAULT_ABI == ABI_V4
   || DEFAULT_ABI == ABI_DARWIN) && (TARGET_64BIT)")
  (-1 "includes_lshift_p (operands[2], operands[3]) && reload_completed")
  (-1 "TARGET_STRING && XVECLEN (operands[0], 0) == 3")
  (0 "DEFAULT_ABI == ABI_V4 && flag_pic == 1")
  (-1 "TARGET_POWERPC64 && TARGET_UPDATE")
  (-1 "(TARGET_POWER2 || TARGET_POWERPC) && TARGET_HARD_FLOAT && TARGET_FPRS")
  (-1 "((TARGET_POWERPC) && (TARGET_POWERPC64)) && ( reload_completed)")
  (-1 "includes_rshift_p (operands[2], operands[3]) && reload_completed")
  (-1 "TARGET_STRING && XVECLEN (operands[0], 0) == 4")
  (-1 "TARGET_POWERPC64 && reload_completed
   && includes_rldicr_lshift_p (operands[2], operands[3])")
  (-1 "(TARGET_STRING && ! TARGET_POWER
   && INTVAL (operands[2]) > 16 && INTVAL (operands[2]) <= 32
   && (REGNO (operands[0]) < 5 || REGNO (operands[0]) > 10)
   && (REGNO (operands[1]) < 5 || REGNO (operands[1]) > 10)
   && REGNO (operands[4]) == 5) && (TARGET_32BIT)")
  (0 "DEFAULT_ABI == ABI_AIX && TARGET_32BIT")
  (-1 "(reload_completed) && (TARGET_POWERPC64)")
  (-1 "TARGET_PPC_GFXOPT && TARGET_HARD_FLOAT && TARGET_FPRS")
  (-1 "TARGET_POWER2
   && TARGET_HARD_FLOAT && TARGET_FPRS
   && registers_ok_for_quad_peep (operands[0], operands[2])
   && mems_ok_for_quad_peep (operands[1], operands[3])")
  (-1 "TARGET_POWERPC64 && includes_rldicr_lshift_p (operands[2], operands[3])")
  (1 "!TARGET_POWER")
  (-1 "(TARGET_POWERPC) && ( reload_completed)")
  (1 "! (TARGET_HARD_FLOAT && TARGET_E500 && !TARGET_FPRS)")
  (-1 "TARGET_POWERPC && ! TARGET_POWER && ! TARGET_POWERPC64")
  (-1 "!TARGET_IEEEQUAD
   && (TARGET_POWER2 || TARGET_POWERPC)
   && TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_LONG_DOUBLE_128")
  (-1 "TARGET_POWERPC64 && REGNO (operands[2]) != REGNO (operands[5])")
  (-1 "((DEFAULT_ABI == ABI_DARWIN
   || (DEFAULT_ABI == ABI_V4
       && (INTVAL (operands[2]) & CALL_LONG) == 0))) && (TARGET_64BIT)")
  (-1 "(reload_completed) && (TARGET_32BIT)")
  (-1 "(!TARGET_IEEEQUAD
   && (TARGET_SOFT_FLOAT || !TARGET_FPRS) && TARGET_LONG_DOUBLE_128
   && (gpc_reg_operand (operands[0], TFmode)
       || gpc_reg_operand (operands[1], TFmode))) && ( reload_completed)")
  (-1 "TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_FUSED_MADD")
  (0 "TARGET_SPE
   && (gpc_reg_operand (operands[0], V2SFmode)
       || gpc_reg_operand (operands[1], V2SFmode))")
  (0 "TARGET_HARD_FLOAT && TARGET_E500_DOUBLE
    && (gpc_reg_operand (operands[0], DFmode)
        || gpc_reg_operand (operands[1], DFmode))")
  (-1 "(!TARGET_IEEEQUAD && TARGET_XL_COMPAT
   && TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_LONG_DOUBLE_128) && ( reload_completed)")
  (-1 "(! TARGET_POWER && ! TARGET_ISEL) && ( reload_completed)")
  (-1 "TARGET_PPC_GFXOPT && TARGET_HARD_FLOAT && TARGET_FPRS
   && !HONOR_NANS (SFmode) && !HONOR_SIGNED_ZEROS (SFmode)")
  (-1 "TARGET_64BIT && includes_rldicr_lshift_p (operands[2], operands[3])")
  (-1 "TARGET_ALTIVEC && TARGET_FUSED_MADD")
  (-1 "TARGET_MACHO && ! TARGET_64BIT")
  (-1 "TARGET_POWERPC && ! TARGET_POWERPC64 && reload_completed")
  (-1 "TARGET_PPC_GFXOPT && TARGET_HARD_FLOAT && TARGET_FPRS && !flag_trapping_math")
  (-1 "TARGET_STRING && XVECLEN (operands[0], 0) == 6")
  (0 "TARGET_ISEL")
  (-1 "! TARGET_POWERPC && TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_FUSED_MADD")
  (-1 "TARGET_ALTIVEC && reload_completed
   && gpr_or_gpr_p (operands[0], operands[1])")
  (-1 "! gpc_reg_operand (operands[2], SImode)")
  (-1 "((TARGET_POWER2 || TARGET_POWERPC) && TARGET_HARD_FLOAT && TARGET_FPRS) && ( (!no_new_pseudos || offsettable_nonstrict_memref_p (operands[3])))")
  (0 "(TARGET_E500_DOUBLE && V1DImode == DFmode) || (TARGET_SPE && V1DImode != DFmode)")
  (-1 "direct_return ()")
  (-1 "peep2_reg_dead_p (2, operands[0])")
  (-1 "TARGET_MACHO && TARGET_HARD_FLOAT && TARGET_FPRS && ! TARGET_64BIT")
  (-1 "(TARGET_POWERPC64 && TARGET_UPDATE) && (TARGET_32BIT)")
  (-1 "includes_rshift_p (operands[2], GEN_INT (255)) && reload_completed")
  (-1 "(TARGET_64BIT) && ( !reg_overlap_mentioned_p (operands[0], operands[3]))")
  (-1 "(TARGET_POWERPC || (! TARGET_POWER && ! TARGET_POWERPC)) && (TARGET_POWERPC64)")
  (0 "TARGET_POWER")
  (0 "(TARGET_POPCNTB) && (TARGET_POWERPC64)")
  (-1 "reload_completed
   && gpr_or_gpr_p (operands[0], operands[1])")
  (-1 "(DEFAULT_ABI == ABI_DARWIN)
   && (INTVAL (operands[2]) & CALL_LONG) == 0")
  (-1 "TARGET_POWERPC && TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_FUSED_MADD
   && HONOR_SIGNED_ZEROS (SFmode)")
  (-1 "(TARGET_STRING && ! TARGET_POWER
   && ((INTVAL (operands[2]) > 24 && INTVAL (operands[2]) < 32)
       || INTVAL (operands[2]) == 0)
   && (REGNO (operands[0]) < 5 || REGNO (operands[0]) > 12)
   && (REGNO (operands[1]) < 5 || REGNO (operands[1]) > 12)
   && REGNO (operands[4]) == 5) && (TARGET_64BIT)")
  (0 "TARGET_STRING && TARGET_POWER
   && INTVAL (operands[2]) > 16 && INTVAL (operands[2]) <= 24
   && (REGNO (operands[0]) < 5 || REGNO (operands[0]) > 10)
   && (REGNO (operands[1]) < 5 || REGNO (operands[1]) > 10)
   && REGNO (operands[4]) == 5")
  (1 "TARGET_MACHO")
  (-1 "(!TARGET_POWER && optimize_size) && (TARGET_32BIT)")
  (-1 "TARGET_POWERPC64 && reload_completed")
  (-1 "GET_CODE (operands[0]) == REG
   && CR_REGNO_P (REGNO (operands[0]))
   && GET_CODE (operands[2]) == CONST_INT
   && INTVAL (operands[2]) == 1 << (75 - REGNO (operands[0]))")
  (-1 "includes_rshift_p (operands[2], operands[3])")
  (0 "TARGET_SPE
   && (gpc_reg_operand (operands[0], V4HImode)
       || gpc_reg_operand (operands[1], V4HImode))")
  (-1 "(gpc_reg_operand (operands[0], SFmode)
   || gpc_reg_operand (operands[1], SFmode))
   && (TARGET_SOFT_FLOAT || !TARGET_FPRS)")
  (-1 "TARGET_POWER2
   && TARGET_HARD_FLOAT && TARGET_FPRS")
  (-1 "TARGET_PPC_GPOPT && TARGET_HARD_FLOAT && TARGET_FPRS")
  (0 "TARGET_POPCNTB")
  (0 "DEFAULT_ABI == ABI_V4 && flag_pic == 1 && TARGET_32BIT")
  (0 "TARGET_ELF && DEFAULT_ABI != ABI_AIX && flag_pic == 2")
  (-1 "TARGET_MACHO && TARGET_HARD_FLOAT && TARGET_FPRS && !TARGET_64BIT")
  (-1 "TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_UPDATE")
  (-1 "((DEFAULT_ABI == ABI_DARWIN
       || DEFAULT_ABI == ABI_V4)
   && (INTVAL (operands[3]) & CALL_LONG) == 0) && (TARGET_32BIT)")
  (-1 "TARGET_POWERPC")
  (-1 "(TARGET_SOFT_FLOAT || !TARGET_FPRS) && TARGET_UPDATE")
  (0 "TARGET_HARD_FLOAT && TARGET_E500_DOUBLE && flag_unsafe_math_optimizations")
  (-1 "TARGET_STRING && !TARGET_POWER && XVECLEN (operands[0], 0) == 5")
  (-1 "((TARGET_POWER2 || TARGET_POWERPC) && TARGET_HARD_FLOAT && TARGET_FPRS
   && TARGET_PPC_GFXOPT) && ( 1)")
  (-1 "! TARGET_POWERPC64 && TARGET_HARD_FLOAT && TARGET_FPRS")
  (-1 "TARGET_ALTIVEC 
   && (register_operand (operands[0], V8HImode) 
       || register_operand (operands[1], V8HImode))")
  (-1 "DEFAULT_ABI == ABI_DARWIN && TARGET_64BIT")
  (-1 "((DEFAULT_ABI == ABI_DARWIN
     || DEFAULT_ABI == ABI_V4)
   && (INTVAL (operands[2]) & CALL_LONG) == 0) && (TARGET_64BIT)")
  (-1 "(TARGET_PPC_GPOPT || TARGET_POWER2) && TARGET_HARD_FLOAT && TARGET_FPRS")
  (-1 "TARGET_POWERPC64 && num_insns_constant (operands[1], DImode) > 1")
  (-1 "TARGET_POWERPC && !PPC405_ERRATUM77")
  (-1 "! TARGET_POWERPC64 && (TARGET_SOFT_FLOAT || TARGET_E500_SINGLE)
   && (gpc_reg_operand (operands[0], DFmode)
       || gpc_reg_operand (operands[1], DFmode))")
  (-1 "TARGET_PPC_GFXOPT && flag_finite_math_only")
  (0 "TARGET_STRING && TARGET_POWER && XVECLEN (operands[0], 0) == 7")
  (-1 "includes_rshift_p (operands[2], GEN_INT (65535))")
  (-1 "(TARGET_STRING && ! TARGET_POWER
   && ((INTVAL (operands[2]) > 24 && INTVAL (operands[2]) < 32)
       || INTVAL (operands[2]) == 0)
   && (REGNO (operands[0]) < 5 || REGNO (operands[0]) > 12)
   && (REGNO (operands[1]) < 5 || REGNO (operands[1]) > 12)
   && REGNO (operands[4]) == 5) && (TARGET_32BIT)")
  (0 "TARGET_STRING && TARGET_POWER && XVECLEN (operands[0], 0) == 8")
  (-1 "TARGET_MULHW")
  (-1 "TARGET_ALTIVEC 
   && (register_operand (operands[0], V16QImode) 
       || register_operand (operands[1], V16QImode))")
  (-1 "(! TARGET_POWER) && ( reload_completed)")
  (0 "DEFAULT_ABI == ABI_V4
    && flag_pic == 1
    && (reload_in_progress || reload_completed)")
  (-1 "(TARGET_POWER2 || TARGET_POWERPC)
   && TARGET_HARD_FLOAT && (TARGET_FPRS || TARGET_E500_DOUBLE)")
  (-1 "TARGET_POWERPC64")
  (-1 "(reload_completed && ! gpc_reg_operand (operands[0], SImode)) && (TARGET_32BIT)")
  (-1 "(TARGET_HARD_FLOAT && TARGET_FPRS) && ( reload_completed && REG_P (operands[1]) && REGNO (operands[0]) == REGNO (operands[1]))")
  (0 "TARGET_32BIT && DEFAULT_ABI == ABI_AIX")
  (-1 "TARGET_MACHO && (DEFAULT_ABI == ABI_DARWIN) && TARGET_32BIT")
  (-1 "reload_completed")
  (-1 "(TARGET_POWERPC && ! TARGET_POWER) && (TARGET_POWERPC64)")
  (-1 "TARGET_64BIT")
  (0 "TARGET_STRING && TARGET_POWER
   && ((INTVAL (operands[2]) > 24 && INTVAL (operands[2]) < 32)
       || INTVAL (operands[2]) == 0)
   && (REGNO (operands[0]) < 5 || REGNO (operands[0]) > 12)
   && (REGNO (operands[1]) < 5 || REGNO (operands[1]) > 12)
   && REGNO (operands[4]) == 5")
  (-1 "! TARGET_POWERPC64")
  (-1 "TARGET_DLMZB")
  (-1 "reload_completed
   && ((GET_CODE (operands[0]) == REG && REGNO (operands[0]) <= 31)
       || (GET_CODE (operands[0]) == SUBREG
	   && GET_CODE (SUBREG_REG (operands[0])) == REG
	   && REGNO (SUBREG_REG (operands[0])) <= 31))")
  (-1 "((DEFAULT_ABI == ABI_DARWIN
   || (DEFAULT_ABI == ABI_V4
       && (INTVAL (operands[3]) & CALL_LONG) == 0))) && (TARGET_64BIT)")
  (-1 "(TARGET_POWER2 || TARGET_POWERPC) && TARGET_HARD_FLOAT && TARGET_FPRS
   && TARGET_PPC_GFXOPT")
])
