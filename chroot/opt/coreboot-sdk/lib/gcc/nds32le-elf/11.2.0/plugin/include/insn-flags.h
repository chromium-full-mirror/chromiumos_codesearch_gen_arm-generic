/* Generated automatically by the program `genflags'
   from the machine description file `md'.  */

#ifndef GCC_INSN_FLAGS_H
#define GCC_INSN_FLAGS_H

#define HAVE_unspec_volatile_mfsr 1
#define HAVE_unspec_volatile_mfusr 1
#define HAVE_unspec_volatile_mtsr 1
#define HAVE_unspec_volatile_mtusr 1
#define HAVE_unspec_fcpynsd 1
#define HAVE_unspec_fcpynss 1
#define HAVE_unspec_fcpysd 1
#define HAVE_unspec_fcpyss 1
#define HAVE_unspec_fmfcsr 1
#define HAVE_unspec_fmtcsr 1
#define HAVE_unspec_fmfcfg 1
#define HAVE_unspec_volatile_setgie_en 1
#define HAVE_unspec_volatile_setgie_dis 1
#define HAVE_unspec_volatile_isync 1
#define HAVE_unspec_volatile_isb 1
#define HAVE_unspec_dsb 1
#define HAVE_unspec_msync 1
#define HAVE_unspec_msync_all 1
#define HAVE_unspec_msync_store 1
#define HAVE_unspec_volatile_llw 1
#define HAVE_unspec_lwup 1
#define HAVE_unspec_lbup 1
#define HAVE_unspec_volatile_scw 1
#define HAVE_unspec_swup 1
#define HAVE_unspec_sbup 1
#define HAVE_cctl_l1d_invalall 1
#define HAVE_cctl_l1d_wball_alvl 1
#define HAVE_cctl_l1d_wball_one_lvl 1
#define HAVE_cctl_idx_read 1
#define HAVE_cctl_idx_write 1
#define HAVE_cctl_va_wbinval_l1 1
#define HAVE_cctl_va_wbinval_la 1
#define HAVE_cctl_idx_wbinval 1
#define HAVE_cctl_va_lck 1
#define HAVE_prefetch_qw 1
#define HAVE_prefetch_hw 1
#define HAVE_prefetch_w 1
#define HAVE_prefetch_dw 1
#define HAVE_unspec_clip 1
#define HAVE_unspec_clips 1
#define HAVE_unspec_clo 1
#define HAVE_unspec_ssabssi2 1
#define HAVE_unspec_pbsad 1
#define HAVE_unspec_pbsada 1
#define HAVE_unspec_bse 1
#define HAVE_unspec_bsp 1
#define HAVE_unspec_ffb 1
#define HAVE_unspec_ffmism 1
#define HAVE_unspec_flmism 1
#define HAVE_unspec_kaddw 1
#define HAVE_unspec_ksubw 1
#define HAVE_unspec_kaddh 1
#define HAVE_unspec_ksubh 1
#define HAVE_unspec_kaddh_dsp (NDS32_EXT_DSP_P ())
#define HAVE_unspec_ksubh_dsp (NDS32_EXT_DSP_P ())
#define HAVE_unspec_kdmbb 1
#define HAVE_unspec_kdmbt 1
#define HAVE_unspec_kdmtb 1
#define HAVE_unspec_kdmtt 1
#define HAVE_unspec_khmbb 1
#define HAVE_unspec_khmbt 1
#define HAVE_unspec_khmtb 1
#define HAVE_unspec_khmtt 1
#define HAVE_unspec_kslraw 1
#define HAVE_unspec_kslrawu 1
#define HAVE_unspec_volatile_rdov 1
#define HAVE_unspec_volatile_clrov 1
#define HAVE_unspec_sva 1
#define HAVE_unspec_svs 1
#define HAVE_unspec_jr_itoff 1
#define HAVE_unspec_jr_toff 1
#define HAVE_unspec_jral_iton 1
#define HAVE_unspec_jral_ton 1
#define HAVE_unspec_ret_itoff 1
#define HAVE_unspec_ret_toff 1
#define HAVE_unspec_standby_no_wake_grant 1
#define HAVE_unspec_standby_wake_grant 1
#define HAVE_unspec_standby_wait_done 1
#define HAVE_unspec_teqz 1
#define HAVE_unspec_tnez 1
#define HAVE_unspec_trap 1
#define HAVE_unspec_setend_big 1
#define HAVE_unspec_setend_little 1
#define HAVE_unspec_break 1
#define HAVE_unspec_syscall 1
#define HAVE_unspec_nop 1
#define HAVE_unspec_wsbh 1
#define HAVE_unspec_tlbop_trd 1
#define HAVE_unspec_tlbop_twr 1
#define HAVE_unspec_tlbop_rwr 1
#define HAVE_unspec_tlbop_rwlk 1
#define HAVE_unspec_tlbop_unlk 1
#define HAVE_unspec_tlbop_pb 1
#define HAVE_unspec_tlbop_inv 1
#define HAVE_unspec_tlbop_flua 1
#define HAVE_unaligned_load_w 1
#define HAVE_unaligned_load_dw 1
#define HAVE_unaligned_store_w 1
#define HAVE_unaligned_store_dw 1
#define HAVE_unspec_kabs 1
#define HAVE_move_di (register_operand(operands[0], DImode) \
   || register_operand(operands[1], DImode))
#define HAVE_move_df (register_operand(operands[0], DFmode) \
   || register_operand(operands[1], DFmode))
#define HAVE_movsf_lo 1
#define HAVE_fcmovsf_eq (TARGET_FPU_SINGLE)
#define HAVE_fcmovdf_eq (TARGET_FPU_DOUBLE)
#define HAVE_fcmovsf_ne (TARGET_FPU_SINGLE)
#define HAVE_fcmovdf_ne (TARGET_FPU_DOUBLE)
#define HAVE_addsf3 (TARGET_FPU_SINGLE)
#define HAVE_adddf3 (TARGET_FPU_DOUBLE)
#define HAVE_subsf3 (TARGET_FPU_SINGLE)
#define HAVE_subdf3 (TARGET_FPU_DOUBLE)
#define HAVE_mulsf3 (TARGET_FPU_SINGLE)
#define HAVE_muldf3 (TARGET_FPU_DOUBLE)
#define HAVE_fmasf4 ((TARGET_EXT_FPU_FMA) && (TARGET_FPU_SINGLE))
#define HAVE_fmadf4 ((TARGET_EXT_FPU_FMA) && (TARGET_FPU_DOUBLE))
#define HAVE_fnmasf4 ((TARGET_EXT_FPU_FMA) && (TARGET_FPU_SINGLE))
#define HAVE_fnmadf4 ((TARGET_EXT_FPU_FMA) && (TARGET_FPU_DOUBLE))
#define HAVE_fmssf4 ((TARGET_EXT_FPU_FMA) && (TARGET_FPU_SINGLE))
#define HAVE_fmsdf4 ((TARGET_EXT_FPU_FMA) && (TARGET_FPU_DOUBLE))
#define HAVE_fnmssf4 ((TARGET_EXT_FPU_FMA) && (TARGET_FPU_SINGLE))
#define HAVE_fnmsdf4 ((TARGET_EXT_FPU_FMA) && (TARGET_FPU_DOUBLE))
#define HAVE_divsf3 (TARGET_FPU_SINGLE)
#define HAVE_divdf3 (TARGET_FPU_DOUBLE)
#define HAVE_sqrtsf2 (TARGET_FPU_SINGLE)
#define HAVE_sqrtdf2 (TARGET_FPU_DOUBLE)
#define HAVE_copysignsf3 (TARGET_FPU_SINGLE)
#define HAVE_copysigndf3 (TARGET_FPU_SINGLE || TARGET_FPU_DOUBLE)
#define HAVE_abssf2 (TARGET_FPU_SINGLE || TARGET_EXT_PERF)
#define HAVE_absdf2 (TARGET_FPU_DOUBLE)
#define HAVE_floatunssisf2 (TARGET_FPU_SINGLE)
#define HAVE_floatunssidf2 (TARGET_FPU_DOUBLE)
#define HAVE_floatsisf2 (TARGET_FPU_SINGLE)
#define HAVE_floatsidf2 (TARGET_FPU_DOUBLE)
#define HAVE_fixuns_truncsfsi2 (TARGET_FPU_SINGLE)
#define HAVE_fixuns_truncdfsi2 (TARGET_FPU_DOUBLE)
#define HAVE_fix_truncsfsi2 (TARGET_FPU_SINGLE)
#define HAVE_fix_truncdfsi2 (TARGET_FPU_DOUBLE)
#define HAVE_extendsfdf2 (TARGET_FPU_SINGLE && TARGET_FPU_DOUBLE)
#define HAVE_truncdfsf2 (TARGET_FPU_SINGLE && TARGET_FPU_DOUBLE)
#define HAVE_cmpsf_eq (TARGET_FPU_SINGLE)
#define HAVE_cmpdf_eq (TARGET_FPU_DOUBLE)
#define HAVE_cmpsf_lt (TARGET_FPU_SINGLE)
#define HAVE_cmpdf_lt (TARGET_FPU_DOUBLE)
#define HAVE_cmpsf_le (TARGET_FPU_SINGLE)
#define HAVE_cmpdf_le (TARGET_FPU_DOUBLE)
#define HAVE_cmpsf_un (TARGET_FPU_SINGLE)
#define HAVE_cmpdf_un (TARGET_FPU_DOUBLE)
#define HAVE_unaligned_load_wv4qi (NDS32_EXT_DSP_P ())
#define HAVE_unaligned_load_wv2hi (NDS32_EXT_DSP_P ())
#define HAVE_unaligned_store_wv4qi (NDS32_EXT_DSP_P ())
#define HAVE_unaligned_store_wv2hi (NDS32_EXT_DSP_P ())
#define HAVE_addv4qi3 (NDS32_EXT_DSP_P ())
#define HAVE_kaddv4qi3 (NDS32_EXT_DSP_P ())
#define HAVE_ukaddv4qi3 (NDS32_EXT_DSP_P ())
#define HAVE_addv2hi3 (NDS32_EXT_DSP_P ())
#define HAVE_kaddv2hi3 (NDS32_EXT_DSP_P ())
#define HAVE_ukaddv2hi3 (NDS32_EXT_DSP_P ())
#define HAVE_adddi3 (NDS32_EXT_DSP_P ())
#define HAVE_kadddi3 (NDS32_EXT_DSP_P ())
#define HAVE_ukadddi3 (NDS32_EXT_DSP_P ())
#define HAVE_raddv4qi3 (NDS32_EXT_DSP_P ())
#define HAVE_uraddv4qi3 (NDS32_EXT_DSP_P ())
#define HAVE_raddv2hi3 (NDS32_EXT_DSP_P ())
#define HAVE_uraddv2hi3 (NDS32_EXT_DSP_P ())
#define HAVE_radddi3 (NDS32_EXT_DSP_P ())
#define HAVE_uradddi3 (NDS32_EXT_DSP_P ())
#define HAVE_subv4qi3 (NDS32_EXT_DSP_P ())
#define HAVE_ksubv4qi3 (NDS32_EXT_DSP_P ())
#define HAVE_uksubv4qi3 (NDS32_EXT_DSP_P ())
#define HAVE_subv2hi3 (NDS32_EXT_DSP_P ())
#define HAVE_ksubv2hi3 (NDS32_EXT_DSP_P ())
#define HAVE_uksubv2hi3 (NDS32_EXT_DSP_P ())
#define HAVE_subdi3 (NDS32_EXT_DSP_P ())
#define HAVE_ksubdi3 (NDS32_EXT_DSP_P ())
#define HAVE_uksubdi3 (NDS32_EXT_DSP_P ())
#define HAVE_rsubv4qi3 (NDS32_EXT_DSP_P ())
#define HAVE_ursubv4qi3 (NDS32_EXT_DSP_P ())
#define HAVE_rsubv2hi3 (NDS32_EXT_DSP_P ())
#define HAVE_ursubv2hi3 (NDS32_EXT_DSP_P ())
#define HAVE_rsubdi3 (NDS32_EXT_DSP_P ())
#define HAVE_ursubdi3 (NDS32_EXT_DSP_P ())
#define HAVE_cras16_1_le (NDS32_EXT_DSP_P () && !TARGET_BIG_ENDIAN)
#define HAVE_cras16_1_be (NDS32_EXT_DSP_P () && TARGET_BIG_ENDIAN)
#define HAVE_kcras16_1_le (NDS32_EXT_DSP_P () && !TARGET_BIG_ENDIAN)
#define HAVE_kcras16_1_be (NDS32_EXT_DSP_P () && TARGET_BIG_ENDIAN)
#define HAVE_ukcras16_1_le (NDS32_EXT_DSP_P () && !TARGET_BIG_ENDIAN)
#define HAVE_ukcras16_1_be (NDS32_EXT_DSP_P () && TARGET_BIG_ENDIAN)
#define HAVE_crsa16_1_le (NDS32_EXT_DSP_P () && !TARGET_BIG_ENDIAN)
#define HAVE_crsa16_1_be (NDS32_EXT_DSP_P () && TARGET_BIG_ENDIAN)
#define HAVE_kcrsa16_1_le (NDS32_EXT_DSP_P () && !TARGET_BIG_ENDIAN)
#define HAVE_kcrsa16_1_be (NDS32_EXT_DSP_P () && TARGET_BIG_ENDIAN)
#define HAVE_ukcrsa16_1_le (NDS32_EXT_DSP_P () && !TARGET_BIG_ENDIAN)
#define HAVE_ukcrsa16_1_be (NDS32_EXT_DSP_P () && TARGET_BIG_ENDIAN)
#define HAVE_rcras16_1_le (NDS32_EXT_DSP_P () && !TARGET_BIG_ENDIAN)
#define HAVE_rcras16_1_be (NDS32_EXT_DSP_P () && TARGET_BIG_ENDIAN)
#define HAVE_urcras16_1_le (NDS32_EXT_DSP_P () && !TARGET_BIG_ENDIAN)
#define HAVE_urcras16_1_be (NDS32_EXT_DSP_P () && TARGET_BIG_ENDIAN)
#define HAVE_rcrsa16_1_le (NDS32_EXT_DSP_P () && !TARGET_BIG_ENDIAN)
#define HAVE_rcrsa16_1_be (NDS32_EXT_DSP_P () && TARGET_BIG_ENDIAN)
#define HAVE_urcrsa16_1_le (NDS32_EXT_DSP_P () && !TARGET_BIG_ENDIAN)
#define HAVE_urcrsa16_1_be (NDS32_EXT_DSP_P () && TARGET_BIG_ENDIAN)
#define HAVE_kslli16 (NDS32_EXT_DSP_P ())
#define HAVE_sra16_round (NDS32_EXT_DSP_P ())
#define HAVE_srl16_round (NDS32_EXT_DSP_P ())
#define HAVE_kslra16 (NDS32_EXT_DSP_P ())
#define HAVE_kslra16_round (NDS32_EXT_DSP_P ())
#define HAVE_cmpeq8 (NDS32_EXT_DSP_P ())
#define HAVE_cmpeq16 (NDS32_EXT_DSP_P ())
#define HAVE_scmplt8 (NDS32_EXT_DSP_P ())
#define HAVE_scmplt16 (NDS32_EXT_DSP_P ())
#define HAVE_scmple8 (NDS32_EXT_DSP_P ())
#define HAVE_scmple16 (NDS32_EXT_DSP_P ())
#define HAVE_ucmplt8 (NDS32_EXT_DSP_P ())
#define HAVE_ucmplt16 (NDS32_EXT_DSP_P ())
#define HAVE_ucmple8 (NDS32_EXT_DSP_P ())
#define HAVE_ucmple16 (NDS32_EXT_DSP_P ())
#define HAVE_sclip16 (NDS32_EXT_DSP_P ())
#define HAVE_uclip16 (NDS32_EXT_DSP_P ())
#define HAVE_khm16 (NDS32_EXT_DSP_P ())
#define HAVE_khmx16 (NDS32_EXT_DSP_P ())
#define HAVE_insvsi_internal (NDS32_EXT_DSP_P ())
#define HAVE_insvsiqi_internal (NDS32_EXT_DSP_P ())
#define HAVE_and0xff_s8 (NDS32_EXT_DSP_P () && !reload_completed)
#define HAVE_insbsi2 (NDS32_EXT_DSP_P () && !reload_completed)
#define HAVE_ior_and0xff00ffff_reg (NDS32_EXT_DSP_P () && !reload_completed)
#define HAVE_vec_setv4qi_internal (NDS32_EXT_DSP_P ())
#define HAVE_vec_setv4qi_internal_vec (NDS32_EXT_DSP_P () && !TARGET_BIG_ENDIAN)
#define HAVE_vec_mergev4qi_and_cv0_1 (NDS32_EXT_DSP_P () && !TARGET_BIG_ENDIAN)
#define HAVE_vec_mergev4qi_and_cv0_2 (NDS32_EXT_DSP_P () && !TARGET_BIG_ENDIAN)
#define HAVE_vec_mergeqi_and_cv0_1 (NDS32_EXT_DSP_P () && !TARGET_BIG_ENDIAN)
#define HAVE_vec_mergeqi_and_cv0_2 (NDS32_EXT_DSP_P () && !TARGET_BIG_ENDIAN)
#define HAVE_vec_setv2hi_internal (NDS32_EXT_DSP_P ())
#define HAVE_vec_mergev2hi_and_cv0_1 (NDS32_EXT_DSP_P () && !TARGET_BIG_ENDIAN)
#define HAVE_vec_mergev2hi_and_cv0_2 (NDS32_EXT_DSP_P () && !TARGET_BIG_ENDIAN)
#define HAVE_vec_mergehi_and_cv0_1 (NDS32_EXT_DSP_P () && !TARGET_BIG_ENDIAN)
#define HAVE_vec_mergehi_and_cv0_2 (NDS32_EXT_DSP_P () && !TARGET_BIG_ENDIAN)
#define HAVE_pkbbsi_1 (NDS32_EXT_DSP_P ())
#define HAVE_pkbbsi_2 (NDS32_EXT_DSP_P ())
#define HAVE_pkbbsi_3 (NDS32_EXT_DSP_P ())
#define HAVE_pkbbsi_4 (NDS32_EXT_DSP_P ())
#define HAVE_pktbsi_1 (NDS32_EXT_DSP_P ())
#define HAVE_pktbsi_2 (NDS32_EXT_DSP_P ())
#define HAVE_pktbsi_3 (NDS32_EXT_DSP_P ())
#define HAVE_pktbsi_4 (NDS32_EXT_DSP_P ())
#define HAVE_pkttsi (NDS32_EXT_DSP_P ())
#define HAVE_vec_mergerr (NDS32_EXT_DSP_P () && !TARGET_BIG_ENDIAN)
#define HAVE_vec_merge (NDS32_EXT_DSP_P ())
#define HAVE_vec_mergerv (NDS32_EXT_DSP_P () && !TARGET_BIG_ENDIAN)
#define HAVE_vec_mergevr (NDS32_EXT_DSP_P () && !TARGET_BIG_ENDIAN)
#define HAVE_vec_mergevv (NDS32_EXT_DSP_P ())
#define HAVE_vec_extractv4qi0 (NDS32_EXT_DSP_P () && !TARGET_BIG_ENDIAN)
#define HAVE_vec_extractv4qi0_ze (NDS32_EXT_DSP_P () && !TARGET_BIG_ENDIAN)
#define HAVE_vec_extractv4qi0_se (NDS32_EXT_DSP_P () && !TARGET_BIG_ENDIAN)
#define HAVE_vec_extractv4qi1 (NDS32_EXT_DSP_P () && !reload_completed && !TARGET_BIG_ENDIAN)
#define HAVE_vec_extractv4qi2 (NDS32_EXT_DSP_P () && !reload_completed && !TARGET_BIG_ENDIAN)
#define HAVE_vec_extractv4qi3 (NDS32_EXT_DSP_P () && !reload_completed && !TARGET_BIG_ENDIAN)
#define HAVE_vec_extractv4qi3_se (NDS32_EXT_DSP_P () && !TARGET_BIG_ENDIAN)
#define HAVE_vec_extractv4qi3_ze (NDS32_EXT_DSP_P () && !TARGET_BIG_ENDIAN)
#define HAVE_vec_extractv4qihi0 (NDS32_EXT_DSP_P () && !reload_completed && !TARGET_BIG_ENDIAN)
#define HAVE_vec_extractv4qihi1 (NDS32_EXT_DSP_P () && !reload_completed && !TARGET_BIG_ENDIAN)
#define HAVE_vec_extractv4qihi2 (NDS32_EXT_DSP_P () && !reload_completed && !TARGET_BIG_ENDIAN)
#define HAVE_vec_extractv4qihi3 (NDS32_EXT_DSP_P () && !reload_completed && !TARGET_BIG_ENDIAN)
#define HAVE_vec_extractv2hi0 (NDS32_EXT_DSP_P () && !TARGET_BIG_ENDIAN)
#define HAVE_vec_extractv2hi0_ze (NDS32_EXT_DSP_P () && !TARGET_BIG_ENDIAN)
#define HAVE_vec_extractv2hi0_se (NDS32_EXT_DSP_P () && !TARGET_BIG_ENDIAN)
#define HAVE_vec_extractv2hi0_be (NDS32_EXT_DSP_P () && TARGET_BIG_ENDIAN)
#define HAVE_vec_extractv2hi1 (NDS32_EXT_DSP_P () && !TARGET_BIG_ENDIAN)
#define HAVE_vec_extractv2hi1_se (NDS32_EXT_DSP_P () && !TARGET_BIG_ENDIAN)
#define HAVE_vec_extractv2hi1_ze (NDS32_EXT_DSP_P () && !TARGET_BIG_ENDIAN)
#define HAVE_vec_extractv2hi1_be (NDS32_EXT_DSP_P () && TARGET_BIG_ENDIAN)
#define HAVE_smul16 (NDS32_EXT_DSP_P ())
#define HAVE_umul16 (NDS32_EXT_DSP_P ())
#define HAVE_smulx16 (NDS32_EXT_DSP_P ())
#define HAVE_umulx16 (NDS32_EXT_DSP_P ())
#define HAVE_rotrv2hi_1 (NDS32_EXT_DSP_P () && !TARGET_BIG_ENDIAN)
#define HAVE_rotrv2hi_1_be (NDS32_EXT_DSP_P () && TARGET_BIG_ENDIAN)
#define HAVE_rotrv4qi_1 (NDS32_EXT_DSP_P () && !TARGET_BIG_ENDIAN)
#define HAVE_rotrv4qi_1_be (NDS32_EXT_DSP_P () && TARGET_BIG_ENDIAN)
#define HAVE_rotrv4qi_2 (NDS32_EXT_DSP_P () && !TARGET_BIG_ENDIAN)
#define HAVE_rotrv4qi_2_be (NDS32_EXT_DSP_P () && TARGET_BIG_ENDIAN)
#define HAVE_rotrv4qi_3 (NDS32_EXT_DSP_P () && !TARGET_BIG_ENDIAN)
#define HAVE_rotrv4qi_3_be (NDS32_EXT_DSP_P () && TARGET_BIG_ENDIAN)
#define HAVE_v4qi_dup_10 (NDS32_EXT_DSP_P () && !TARGET_BIG_ENDIAN)
#define HAVE_v4qi_dup_32 (NDS32_EXT_DSP_P () && !TARGET_BIG_ENDIAN)
#define HAVE_sunpkd810_imp (NDS32_EXT_DSP_P () && !TARGET_BIG_ENDIAN)
#define HAVE_zunpkd810_imp (NDS32_EXT_DSP_P () && !TARGET_BIG_ENDIAN)
#define HAVE_sunpkd810_imp_inv (NDS32_EXT_DSP_P () && !TARGET_BIG_ENDIAN)
#define HAVE_zunpkd810_imp_inv (NDS32_EXT_DSP_P () && !TARGET_BIG_ENDIAN)
#define HAVE_sunpkd810_imp_be (NDS32_EXT_DSP_P () && TARGET_BIG_ENDIAN)
#define HAVE_zunpkd810_imp_be (NDS32_EXT_DSP_P () && TARGET_BIG_ENDIAN)
#define HAVE_sunpkd810_imp_inv_be (NDS32_EXT_DSP_P () && TARGET_BIG_ENDIAN)
#define HAVE_zunpkd810_imp_inv_be (NDS32_EXT_DSP_P () && TARGET_BIG_ENDIAN)
#define HAVE_sunpkd820_imp (NDS32_EXT_DSP_P () && !TARGET_BIG_ENDIAN)
#define HAVE_zunpkd820_imp (NDS32_EXT_DSP_P () && !TARGET_BIG_ENDIAN)
#define HAVE_sunpkd820_imp_inv (NDS32_EXT_DSP_P () && !TARGET_BIG_ENDIAN)
#define HAVE_zunpkd820_imp_inv (NDS32_EXT_DSP_P () && !TARGET_BIG_ENDIAN)
#define HAVE_sunpkd820_imp_be (NDS32_EXT_DSP_P () && TARGET_BIG_ENDIAN)
#define HAVE_zunpkd820_imp_be (NDS32_EXT_DSP_P () && TARGET_BIG_ENDIAN)
#define HAVE_sunpkd820_imp_inv_be (NDS32_EXT_DSP_P () && TARGET_BIG_ENDIAN)
#define HAVE_zunpkd820_imp_inv_be (NDS32_EXT_DSP_P () && TARGET_BIG_ENDIAN)
#define HAVE_sunpkd830_imp (NDS32_EXT_DSP_P () && !TARGET_BIG_ENDIAN)
#define HAVE_zunpkd830_imp (NDS32_EXT_DSP_P () && !TARGET_BIG_ENDIAN)
#define HAVE_sunpkd830_imp_inv (NDS32_EXT_DSP_P () && !TARGET_BIG_ENDIAN)
#define HAVE_zunpkd830_imp_inv (NDS32_EXT_DSP_P () && !TARGET_BIG_ENDIAN)
#define HAVE_sunpkd830_imp_be (NDS32_EXT_DSP_P () && TARGET_BIG_ENDIAN)
#define HAVE_zunpkd830_imp_be (NDS32_EXT_DSP_P () && TARGET_BIG_ENDIAN)
#define HAVE_sunpkd830_imp_inv_be (NDS32_EXT_DSP_P () && TARGET_BIG_ENDIAN)
#define HAVE_zunpkd830_imp_inv_be (NDS32_EXT_DSP_P () && TARGET_BIG_ENDIAN)
#define HAVE_sunpkd831_imp (NDS32_EXT_DSP_P () && !TARGET_BIG_ENDIAN)
#define HAVE_zunpkd831_imp (NDS32_EXT_DSP_P () && !TARGET_BIG_ENDIAN)
#define HAVE_sunpkd831_imp_inv (NDS32_EXT_DSP_P () && !TARGET_BIG_ENDIAN)
#define HAVE_zunpkd831_imp_inv (NDS32_EXT_DSP_P () && !TARGET_BIG_ENDIAN)
#define HAVE_sunpkd831_imp_be (NDS32_EXT_DSP_P () && TARGET_BIG_ENDIAN)
#define HAVE_zunpkd831_imp_be (NDS32_EXT_DSP_P () && TARGET_BIG_ENDIAN)
#define HAVE_sunpkd831_imp_inv_be (NDS32_EXT_DSP_P () && TARGET_BIG_ENDIAN)
#define HAVE_zunpkd831_imp_inv_be (NDS32_EXT_DSP_P () && TARGET_BIG_ENDIAN)
#define HAVE_mulhisi3v (NDS32_EXT_DSP_P ())
#define HAVE_kma_internal (NDS32_EXT_DSP_P ())
#define HAVE_smal1 (NDS32_EXT_DSP_P ())
#define HAVE_smal2 (NDS32_EXT_DSP_P ())
#define HAVE_smal3 (NDS32_EXT_DSP_P ())
#define HAVE_smal4 (NDS32_EXT_DSP_P ())
#define HAVE_smal5 (NDS32_EXT_DSP_P ())
#define HAVE_smal6 (NDS32_EXT_DSP_P ())
#define HAVE_smal7 (NDS32_EXT_DSP_P ())
#define HAVE_smal8 (NDS32_EXT_DSP_P ())
#define HAVE_extendsidi2 (NDS32_EXT_DSP_P ())
#define HAVE_zero_extendsidi2 (NDS32_EXT_DSP_P ())
#define HAVE_extendhidi2 (NDS32_EXT_DSP_P ())
#define HAVE_extendqihi2 (NDS32_EXT_DSP_P ())
#define HAVE_smulsi3_highpart (NDS32_EXT_DSP_P ())
#define HAVE_smmul_round (NDS32_EXT_DSP_P ())
#define HAVE_kmmac (NDS32_EXT_DSP_P ())
#define HAVE_kmmac_round (NDS32_EXT_DSP_P ())
#define HAVE_kmmsb (NDS32_EXT_DSP_P ())
#define HAVE_kmmsb_round (NDS32_EXT_DSP_P ())
#define HAVE_kwmmul (NDS32_EXT_DSP_P ())
#define HAVE_kwmmul_round (NDS32_EXT_DSP_P ())
#define HAVE_smulhisi3_highpart_1 (NDS32_EXT_DSP_P ())
#define HAVE_smulhisi3_highpart_2 (NDS32_EXT_DSP_P ())
#define HAVE_smmw_round_internal (NDS32_EXT_DSP_P ())
#define HAVE_kmmaw_internal (NDS32_EXT_DSP_P ())
#define HAVE_kmmaw_round_internal (NDS32_EXT_DSP_P ())
#define HAVE_smaddhidi (NDS32_EXT_DSP_P ())
#define HAVE_smaddhidi2 (NDS32_EXT_DSP_P ())
#define HAVE_smalda1_le (NDS32_EXT_DSP_P () && !TARGET_BIG_ENDIAN)
#define HAVE_smalds1_le (NDS32_EXT_DSP_P () && !TARGET_BIG_ENDIAN)
#define HAVE_smalda1_be (NDS32_EXT_DSP_P () && TARGET_BIG_ENDIAN)
#define HAVE_smalds1_be (NDS32_EXT_DSP_P () && TARGET_BIG_ENDIAN)
#define HAVE_smaldrs3_le (NDS32_EXT_DSP_P () && !TARGET_BIG_ENDIAN)
#define HAVE_smaldrs3_be (NDS32_EXT_DSP_P () && TARGET_BIG_ENDIAN)
#define HAVE_smalxda1_le (NDS32_EXT_DSP_P () && !TARGET_BIG_ENDIAN)
#define HAVE_smalxds1_le (NDS32_EXT_DSP_P () && !TARGET_BIG_ENDIAN)
#define HAVE_smalxda1_be (NDS32_EXT_DSP_P () && TARGET_BIG_ENDIAN)
#define HAVE_smalxds1_be (NDS32_EXT_DSP_P () && TARGET_BIG_ENDIAN)
#define HAVE_smslda1 (NDS32_EXT_DSP_P ())
#define HAVE_smslxda1 (NDS32_EXT_DSP_P ())
#define HAVE_mada1 (NDS32_EXT_DSP_P () && !reload_completed)
#define HAVE_mada2 (NDS32_EXT_DSP_P () && !reload_completed)
#define HAVE_sms1 (NDS32_EXT_DSP_P () \
   && (!reload_completed \
       || !nds32_need_split_sms_p (operands[3], operands[4], \
				   operands[5], operands[6])))
#define HAVE_sms2 (NDS32_EXT_DSP_P () \
   && (!reload_completed \
       || !nds32_need_split_sms_p (operands[3], operands[4], \
				   operands[6], operands[5])))
#define HAVE_kmda (NDS32_EXT_DSP_P ())
#define HAVE_kmxda (NDS32_EXT_DSP_P ())
#define HAVE_kmada (NDS32_EXT_DSP_P ())
#define HAVE_kmada2 (NDS32_EXT_DSP_P ())
#define HAVE_kmaxda (NDS32_EXT_DSP_P ())
#define HAVE_kmads (NDS32_EXT_DSP_P ())
#define HAVE_kmadrs (NDS32_EXT_DSP_P ())
#define HAVE_kmaxds (NDS32_EXT_DSP_P ())
#define HAVE_kmsda (NDS32_EXT_DSP_P ())
#define HAVE_kmsxda (NDS32_EXT_DSP_P ())
#define HAVE_smaxv4qi3 (NDS32_EXT_DSP_P ())
#define HAVE_umaxv4qi3 (NDS32_EXT_DSP_P ())
#define HAVE_smaxv2hi3 (NDS32_EXT_DSP_P ())
#define HAVE_umaxv2hi3 (NDS32_EXT_DSP_P ())
#define HAVE_sminv4qi3 (NDS32_EXT_DSP_P ())
#define HAVE_uminv4qi3 (NDS32_EXT_DSP_P ())
#define HAVE_sminv2hi3 (NDS32_EXT_DSP_P ())
#define HAVE_uminv2hi3 (NDS32_EXT_DSP_P ())
#define HAVE_smaxv4qi3_bb (NDS32_EXT_DSP_P () && !TARGET_BIG_ENDIAN)
#define HAVE_umaxv4qi3_bb (NDS32_EXT_DSP_P () && !TARGET_BIG_ENDIAN)
#define HAVE_sminv4qi3_bb (NDS32_EXT_DSP_P () && !TARGET_BIG_ENDIAN)
#define HAVE_uminv4qi3_bb (NDS32_EXT_DSP_P () && !TARGET_BIG_ENDIAN)
#define HAVE_smaxv2hi3_bb (NDS32_EXT_DSP_P () && !TARGET_BIG_ENDIAN)
#define HAVE_umaxv2hi3_bb (NDS32_EXT_DSP_P () && !TARGET_BIG_ENDIAN)
#define HAVE_sminv2hi3_bb (NDS32_EXT_DSP_P () && !TARGET_BIG_ENDIAN)
#define HAVE_uminv2hi3_bb (NDS32_EXT_DSP_P () && !TARGET_BIG_ENDIAN)
#define HAVE_smaxv4qi3_tt (NDS32_EXT_DSP_P () && !reload_completed && !TARGET_BIG_ENDIAN)
#define HAVE_umaxv4qi3_tt (NDS32_EXT_DSP_P () && !reload_completed && !TARGET_BIG_ENDIAN)
#define HAVE_sminv4qi3_tt (NDS32_EXT_DSP_P () && !reload_completed && !TARGET_BIG_ENDIAN)
#define HAVE_uminv4qi3_tt (NDS32_EXT_DSP_P () && !reload_completed && !TARGET_BIG_ENDIAN)
#define HAVE_smaxv2hi3_tt (NDS32_EXT_DSP_P () && !reload_completed && !TARGET_BIG_ENDIAN)
#define HAVE_umaxv2hi3_tt (NDS32_EXT_DSP_P () && !reload_completed && !TARGET_BIG_ENDIAN)
#define HAVE_sminv2hi3_tt (NDS32_EXT_DSP_P () && !reload_completed && !TARGET_BIG_ENDIAN)
#define HAVE_uminv2hi3_tt (NDS32_EXT_DSP_P () && !reload_completed && !TARGET_BIG_ENDIAN)
#define HAVE_smaxv4qi3_22 (NDS32_EXT_DSP_P () && !reload_completed && !TARGET_BIG_ENDIAN)
#define HAVE_umaxv4qi3_22 (NDS32_EXT_DSP_P () && !reload_completed && !TARGET_BIG_ENDIAN)
#define HAVE_sminv4qi3_22 (NDS32_EXT_DSP_P () && !reload_completed && !TARGET_BIG_ENDIAN)
#define HAVE_uminv4qi3_22 (NDS32_EXT_DSP_P () && !reload_completed && !TARGET_BIG_ENDIAN)
#define HAVE_smaxv4qi3_33 (NDS32_EXT_DSP_P () && !reload_completed && !TARGET_BIG_ENDIAN)
#define HAVE_umaxv4qi3_33 (NDS32_EXT_DSP_P () && !reload_completed && !TARGET_BIG_ENDIAN)
#define HAVE_sminv4qi3_33 (NDS32_EXT_DSP_P () && !reload_completed && !TARGET_BIG_ENDIAN)
#define HAVE_uminv4qi3_33 (NDS32_EXT_DSP_P () && !reload_completed && !TARGET_BIG_ENDIAN)
#define HAVE_smaxv2hi3_bbtt (NDS32_EXT_DSP_P () && !TARGET_BIG_ENDIAN)
#define HAVE_umaxv2hi3_bbtt (NDS32_EXT_DSP_P () && !TARGET_BIG_ENDIAN)
#define HAVE_sminv2hi3_bbtt (NDS32_EXT_DSP_P () && !TARGET_BIG_ENDIAN)
#define HAVE_uminv2hi3_bbtt (NDS32_EXT_DSP_P () && !TARGET_BIG_ENDIAN)
#define HAVE_kabsv4qi2 (NDS32_EXT_DSP_P ())
#define HAVE_kabsv2hi2 (NDS32_EXT_DSP_P ())
#define HAVE_smar64_1 (NDS32_EXT_DSP_P ())
#define HAVE_umar64_1 (NDS32_EXT_DSP_P ())
#define HAVE_smar64_2 (NDS32_EXT_DSP_P ())
#define HAVE_umar64_2 (NDS32_EXT_DSP_P ())
#define HAVE_smar64_3 (NDS32_EXT_DSP_P ())
#define HAVE_umar64_3 (NDS32_EXT_DSP_P ())
#define HAVE_smar64_4 (NDS32_EXT_DSP_P ())
#define HAVE_umar64_4 (NDS32_EXT_DSP_P ())
#define HAVE_smsr64 (NDS32_EXT_DSP_P ())
#define HAVE_umsr64 (NDS32_EXT_DSP_P ())
#define HAVE_smsr64_2 (NDS32_EXT_DSP_P ())
#define HAVE_umsr64_2 (NDS32_EXT_DSP_P ())
#define HAVE_kmar64_1 (NDS32_EXT_DSP_P ())
#define HAVE_kmar64_2 (NDS32_EXT_DSP_P ())
#define HAVE_kmsr64 (NDS32_EXT_DSP_P ())
#define HAVE_ukmar64_1 (NDS32_EXT_DSP_P ())
#define HAVE_ukmar64_2 (NDS32_EXT_DSP_P ())
#define HAVE_ukmsr64 (NDS32_EXT_DSP_P ())
#define HAVE_bpick1 (NDS32_EXT_DSP_P ())
#define HAVE_bpick2 (NDS32_EXT_DSP_P ())
#define HAVE_bpick3 (NDS32_EXT_DSP_P ())
#define HAVE_bpick4 (NDS32_EXT_DSP_P ())
#define HAVE_bpick5 (NDS32_EXT_DSP_P ())
#define HAVE_bpick6 (NDS32_EXT_DSP_P ())
#define HAVE_bpick7 (NDS32_EXT_DSP_P ())
#define HAVE_bpick8 (NDS32_EXT_DSP_P ())
#define HAVE_sraiu (NDS32_EXT_DSP_P ())
#define HAVE_kssl (NDS32_EXT_DSP_P ())
#define HAVE_kslraw_round (NDS32_EXT_DSP_P ())
#define HAVE_ashldi3 (NDS32_EXT_DSP_P () && !reload_completed)
#define HAVE_ashrdi3 (NDS32_EXT_DSP_P () && !reload_completed)
#define HAVE_lshrdi3 (NDS32_EXT_DSP_P () && !reload_completed)
#define HAVE_rotrdi3 (NDS32_EXT_DSP_P () && !reload_completed)
#define HAVE_sclip32 (NDS32_EXT_DSP_P ())
#define HAVE_uclip32 (NDS32_EXT_DSP_P ())
#define HAVE_bitrev 1
#define HAVE_wext (NDS32_EXT_DSP_P ())
#define HAVE_uwext (NDS32_EXT_DSP_P ())
#define HAVE_raddsi3 (NDS32_EXT_DSP_P ())
#define HAVE_rsubsi3 (NDS32_EXT_DSP_P ())
#define HAVE_uraddsi3 (NDS32_EXT_DSP_P ())
#define HAVE_ursubsi3 (NDS32_EXT_DSP_P ())
#define HAVE_move_addr 1
#define HAVE_sethi 1
#define HAVE_lo_sum 1
#define HAVE_zero_extendqisi2 1
#define HAVE_zero_extendhisi2 1
#define HAVE_extendqisi2 1
#define HAVE_extendhisi2 1
#define HAVE_addsi3 1
#define HAVE_subsi3 1
#define HAVE_mulsi3 1
#define HAVE_mulsidi3 (TARGET_ISA_V2 || TARGET_ISA_V3)
#define HAVE_umulsidi3 (TARGET_ISA_V2 || TARGET_ISA_V3)
#define HAVE_divmodsi4 1
#define HAVE_udivmodsi4 1
#define HAVE_divsi4 1
#define HAVE_udivsi4 1
#define HAVE_bitc (TARGET_ISA_V3)
#define HAVE_negsi2 1
#define HAVE_soft_negdf2 (!TARGET_FPU_DOUBLE)
#define HAVE_one_cmplsi2 1
#define HAVE_cmovzqi (TARGET_CMOV)
#define HAVE_cmovzhi (TARGET_CMOV)
#define HAVE_cmovzsi (TARGET_CMOV)
#define HAVE_cmovnqi (TARGET_CMOV)
#define HAVE_cmovnhi (TARGET_CMOV)
#define HAVE_cmovnsi (TARGET_CMOV)
#define HAVE_cbranchsi4_equality_zero 1
#define HAVE_cbranchsi4_equality_reg (TARGET_ISA_V2)
#define HAVE_cbranchsi4_equality_reg_or_const_int (TARGET_ISA_V3 || TARGET_ISA_V3M)
#define HAVE_slts_compare_impl 1
#define HAVE_slt_eq0 1
#define HAVE_slt_compare_impl 1
#define HAVE_jump 1
#define HAVE_indirect_jump 1
#define HAVE_call_internal 1
#define HAVE_call_value_internal 1
#define HAVE_sibcall_internal 1
#define HAVE_sibcall_value_internal 1
#define HAVE_nop 1
#define HAVE_return_internal 1
#define HAVE_casesi_internal 1
#define HAVE_abssi2 (TARGET_EXT_PERF && TARGET_HW_ABS && !flag_wrapv)
#define HAVE_clzsi2 (TARGET_EXT_PERF)
#define HAVE_smaxsi3 (TARGET_EXT_PERF)
#define HAVE_sminsi3 (TARGET_EXT_PERF)
#define HAVE_btst (TARGET_EXT_PERF)
#define HAVE_ave (TARGET_EXT_PERF)
#define HAVE_relax_group 1
#define HAVE_omit_fp_begin 1
#define HAVE_omit_fp_end 1
#define HAVE_pop25return 1
#define HAVE_add_pc (TARGET_LINUX_ABI || flag_pic)
#define HAVE_bswaphi2 1
#define HAVE_nds32_eh_return 1
#define HAVE_trap 1
#define HAVE_tls_desc 1
#define HAVE_tls_ie 1
#define HAVE_tls_le 1
#define HAVE_addsi3_32bit 1
#define HAVE_sym_got 1
#define HAVE_mtsr_isb 1
#define HAVE_mtsr_dsb 1
#define HAVE_unspec_enable_int 1
#define HAVE_unspec_disable_int 1
#define HAVE_unspec_set_pending_swint 1
#define HAVE_unspec_clr_pending_swint 1
#define HAVE_unspec_clr_pending_hwint 1
#define HAVE_unspec_get_all_pending_int 1
#define HAVE_unspec_get_pending_int 1
#define HAVE_unspec_set_int_priority 1
#define HAVE_unspec_get_int_priority 1
#define HAVE_unspec_set_trig_level 1
#define HAVE_unspec_set_trig_edge 1
#define HAVE_unspec_get_trig_type 1
#define HAVE_unspec_ave 1
#define HAVE_unspec_bclr 1
#define HAVE_unspec_bset 1
#define HAVE_unspec_btgl 1
#define HAVE_unspec_btst 1
#define HAVE_bse 1
#define HAVE_bsp 1
#define HAVE_unspec_get_current_sp 1
#define HAVE_unspec_set_current_sp 1
#define HAVE_unspec_return_address 1
#define HAVE_unaligned_load_hw 1
#define HAVE_unaligned_loadsi 1
#define HAVE_unaligned_loaddi 1
#define HAVE_unaligned_store_hw 1
#define HAVE_unaligned_storesi 1
#define HAVE_unaligned_storedi 1
#define HAVE_unspec_unaligned_feature 1
#define HAVE_unspec_enable_unaligned 1
#define HAVE_unspec_disable_unaligned 1
#define HAVE_load_multiple 1
#define HAVE_unaligned_load_update_base_w 1
#define HAVE_store_multiple 1
#define HAVE_unaligned_store_update_base_w 1
#define HAVE_unaligned_store_update_base_dw 1
#define HAVE_cpymemsi 1
#define HAVE_strlensi (TARGET_EXT_STRING)
#define HAVE_setmemsi 1
#define HAVE_movdi 1
#define HAVE_movdf 1
#define HAVE_movsf 1
#define HAVE_movsfcc (TARGET_FPU_SINGLE)
#define HAVE_movdfcc (TARGET_FPU_DOUBLE)
#define HAVE_cstoresf4 (TARGET_FPU_SINGLE)
#define HAVE_cstoredf4 (TARGET_FPU_DOUBLE)
#define HAVE_cbranchsf4 (TARGET_FPU_SINGLE)
#define HAVE_cbranchdf4 (TARGET_FPU_DOUBLE)
#define HAVE_movv4qi (NDS32_EXT_DSP_P ())
#define HAVE_movv2hi (NDS32_EXT_DSP_P ())
#define HAVE_movv2si (NDS32_EXT_DSP_P ())
#define HAVE_movmisalignv4qi (NDS32_EXT_DSP_P ())
#define HAVE_movmisalignv2hi (NDS32_EXT_DSP_P ())
#define HAVE_unaligned_loadv4qi (NDS32_EXT_DSP_P ())
#define HAVE_unaligned_loadv2hi (NDS32_EXT_DSP_P ())
#define HAVE_unaligned_storev4qi (NDS32_EXT_DSP_P ())
#define HAVE_unaligned_storev2hi (NDS32_EXT_DSP_P ())
#define HAVE_cras16_1 (NDS32_EXT_DSP_P ())
#define HAVE_kcras16_1 (NDS32_EXT_DSP_P ())
#define HAVE_ukcras16_1 (NDS32_EXT_DSP_P ())
#define HAVE_crsa16_1 (NDS32_EXT_DSP_P ())
#define HAVE_kcrsa16_1 (NDS32_EXT_DSP_P ())
#define HAVE_ukcrsa16_1 (NDS32_EXT_DSP_P ())
#define HAVE_rcras16_1 (NDS32_EXT_DSP_P ())
#define HAVE_urcras16_1 (NDS32_EXT_DSP_P ())
#define HAVE_rcrsa16_1 (NDS32_EXT_DSP_P ())
#define HAVE_urcrsa16_1 (NDS32_EXT_DSP_P ())
#define HAVE_ashlv2hi3 (NDS32_EXT_DSP_P ())
#define HAVE_ashrv2hi3 (NDS32_EXT_DSP_P ())
#define HAVE_lshrv2hi3 (NDS32_EXT_DSP_P ())
#define HAVE_vec_setv4qi (NDS32_EXT_DSP_P ())
#define HAVE_insb (NDS32_EXT_DSP_P ())
#define HAVE_insvsi (NDS32_EXT_DSP_P ())
#define HAVE_vec_setv2hi (NDS32_EXT_DSP_P ())
#define HAVE_pkbb (NDS32_EXT_DSP_P ())
#define HAVE_pkbt (NDS32_EXT_DSP_P ())
#define HAVE_pktt (NDS32_EXT_DSP_P ())
#define HAVE_pktb (NDS32_EXT_DSP_P ())
#define HAVE_vec_extractv4qi (NDS32_EXT_DSP_P () && !TARGET_BIG_ENDIAN)
#define HAVE_vec_extractv2hi (NDS32_EXT_DSP_P ())
#define HAVE_vec_unpacks_lo_v4qi (NDS32_EXT_DSP_P () && !TARGET_BIG_ENDIAN)
#define HAVE_sunpkd810 (NDS32_EXT_DSP_P ())
#define HAVE_sunpkd820 (NDS32_EXT_DSP_P ())
#define HAVE_sunpkd830 (NDS32_EXT_DSP_P ())
#define HAVE_sunpkd831 (NDS32_EXT_DSP_P ())
#define HAVE_zunpkd810 (NDS32_EXT_DSP_P ())
#define HAVE_zunpkd820 (NDS32_EXT_DSP_P ())
#define HAVE_zunpkd830 (NDS32_EXT_DSP_P ())
#define HAVE_zunpkd831 (NDS32_EXT_DSP_P ())
#define HAVE_smbb (NDS32_EXT_DSP_P ())
#define HAVE_smbt (NDS32_EXT_DSP_P ())
#define HAVE_smtt (NDS32_EXT_DSP_P ())
#define HAVE_kmabb (NDS32_EXT_DSP_P ())
#define HAVE_kmabt (NDS32_EXT_DSP_P ())
#define HAVE_kmatt (NDS32_EXT_DSP_P ())
#define HAVE_smds (NDS32_EXT_DSP_P ())
#define HAVE_smds_le (NDS32_EXT_DSP_P ())
#define HAVE_smds_be (NDS32_EXT_DSP_P ())
#define HAVE_smdrs (NDS32_EXT_DSP_P ())
#define HAVE_smdrs_le (NDS32_EXT_DSP_P ())
#define HAVE_smdrs_be (NDS32_EXT_DSP_P ())
#define HAVE_smxdsv (NDS32_EXT_DSP_P ())
#define HAVE_smxdsv_le (NDS32_EXT_DSP_P ())
#define HAVE_smxdsv_be (NDS32_EXT_DSP_P ())
#define HAVE_smmwb (NDS32_EXT_DSP_P ())
#define HAVE_smmwt (NDS32_EXT_DSP_P ())
#define HAVE_smmwb_round (NDS32_EXT_DSP_P ())
#define HAVE_smmwt_round (NDS32_EXT_DSP_P ())
#define HAVE_kmmawb (NDS32_EXT_DSP_P ())
#define HAVE_kmmawt (NDS32_EXT_DSP_P ())
#define HAVE_kmmawb_round (NDS32_EXT_DSP_P ())
#define HAVE_kmmawt_round (NDS32_EXT_DSP_P ())
#define HAVE_smalbb (NDS32_EXT_DSP_P ())
#define HAVE_smalbt (NDS32_EXT_DSP_P ())
#define HAVE_smaltt (NDS32_EXT_DSP_P ())
#define HAVE_smalda1 (NDS32_EXT_DSP_P ())
#define HAVE_smalds1 (NDS32_EXT_DSP_P ())
#define HAVE_smaldrs3 (NDS32_EXT_DSP_P ())
#define HAVE_smalxda1 (NDS32_EXT_DSP_P ())
#define HAVE_smalxds1 (NDS32_EXT_DSP_P ())
#define HAVE_absv4qi2 (NDS32_EXT_DSP_P () && TARGET_HW_ABS && !flag_wrapv)
#define HAVE_absv2hi2 (NDS32_EXT_DSP_P () && TARGET_HW_ABS && !flag_wrapv)
#define HAVE_movqi 1
#define HAVE_movhi 1
#define HAVE_movmisalignsi 1
#define HAVE_movmisaligndi 1
#define HAVE_movsi 1
#define HAVE_extv 1
#define HAVE_insv 1
#define HAVE_andsi3 1
#define HAVE_iorsi3 1
#define HAVE_xorsi3 1
#define HAVE_negsf2 1
#define HAVE_negdf2 1
#define HAVE_ashlsi3 1
#define HAVE_ashrsi3 1
#define HAVE_lshrsi3 1
#define HAVE_rotrsi3 1
#define HAVE_movqicc (TARGET_CMOV && !optimize_size)
#define HAVE_movhicc (TARGET_CMOV && !optimize_size)
#define HAVE_movsicc (TARGET_CMOV && !optimize_size)
#define HAVE_cbranchsi4 1
#define HAVE_cstoresi4 1
#define HAVE_slts_compare 1
#define HAVE_slt_compare 1
#define HAVE_call 1
#define HAVE_call_value 1
#define HAVE_untyped_call 1
#define HAVE_sibcall 1
#define HAVE_sibcall_value 1
#define HAVE_prologue 1
#define HAVE_epilogue 1
#define HAVE_sibcall_epilogue 1
#define HAVE_return (nds32_can_use_return_insn ())
#define HAVE_simple_return (!cfun->machine->fp_as_gp_p)
#define HAVE_casesi 1
#define HAVE_bswapsi2 1
#define HAVE_eh_return 1
extern rtx        gen_unspec_volatile_mfsr                 (rtx, rtx);
extern rtx        gen_unspec_volatile_mfusr                (rtx, rtx);
extern rtx        gen_unspec_volatile_mtsr                 (rtx, rtx);
extern rtx        gen_unspec_volatile_mtusr                (rtx, rtx);
extern rtx        gen_unspec_fcpynsd                       (rtx, rtx, rtx);
extern rtx        gen_unspec_fcpynss                       (rtx, rtx, rtx);
extern rtx        gen_unspec_fcpysd                        (rtx, rtx, rtx);
extern rtx        gen_unspec_fcpyss                        (rtx, rtx, rtx);
extern rtx        gen_unspec_fmfcsr                        (rtx);
extern rtx        gen_unspec_fmtcsr                        (rtx);
extern rtx        gen_unspec_fmfcfg                        (rtx);
extern rtx        gen_unspec_volatile_setgie_en            (void);
extern rtx        gen_unspec_volatile_setgie_dis           (void);
extern rtx        gen_unspec_volatile_isync                (rtx);
extern rtx        gen_unspec_volatile_isb                  (void);
extern rtx        gen_unspec_dsb                           (void);
extern rtx        gen_unspec_msync                         (rtx);
extern rtx        gen_unspec_msync_all                     (void);
extern rtx        gen_unspec_msync_store                   (void);
extern rtx        gen_unspec_volatile_llw                  (rtx, rtx, rtx);
extern rtx        gen_unspec_lwup                          (rtx, rtx, rtx);
extern rtx        gen_unspec_lbup                          (rtx, rtx, rtx);
extern rtx        gen_unspec_volatile_scw                  (rtx, rtx, rtx, rtx);
extern rtx        gen_unspec_swup                          (rtx, rtx, rtx);
extern rtx        gen_unspec_sbup                          (rtx, rtx, rtx);
extern rtx        gen_cctl_l1d_invalall                    (void);
extern rtx        gen_cctl_l1d_wball_alvl                  (void);
extern rtx        gen_cctl_l1d_wball_one_lvl               (void);
extern rtx        gen_cctl_idx_read                        (rtx, rtx, rtx);
extern rtx        gen_cctl_idx_write                       (rtx, rtx, rtx);
extern rtx        gen_cctl_va_wbinval_l1                   (rtx, rtx);
extern rtx        gen_cctl_va_wbinval_la                   (rtx, rtx);
extern rtx        gen_cctl_idx_wbinval                     (rtx, rtx);
extern rtx        gen_cctl_va_lck                          (rtx, rtx);
extern rtx        gen_prefetch_qw                          (rtx, rtx, rtx);
extern rtx        gen_prefetch_hw                          (rtx, rtx, rtx);
extern rtx        gen_prefetch_w                           (rtx, rtx, rtx);
extern rtx        gen_prefetch_dw                          (rtx, rtx, rtx);
extern rtx        gen_unspec_clip                          (rtx, rtx, rtx);
extern rtx        gen_unspec_clips                         (rtx, rtx, rtx);
extern rtx        gen_unspec_clo                           (rtx, rtx);
extern rtx        gen_unspec_ssabssi2                      (rtx, rtx);
extern rtx        gen_unspec_pbsad                         (rtx, rtx, rtx);
extern rtx        gen_unspec_pbsada                        (rtx, rtx, rtx, rtx);
extern rtx        gen_unspec_bse                           (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_unspec_bsp                           (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_unspec_ffb                           (rtx, rtx, rtx);
extern rtx        gen_unspec_ffmism                        (rtx, rtx, rtx);
extern rtx        gen_unspec_flmism                        (rtx, rtx, rtx);
extern rtx        gen_unspec_kaddw                         (rtx, rtx, rtx);
extern rtx        gen_unspec_ksubw                         (rtx, rtx, rtx);
extern rtx        gen_unspec_kaddh                         (rtx, rtx, rtx);
extern rtx        gen_unspec_ksubh                         (rtx, rtx, rtx);
extern rtx        gen_unspec_kaddh_dsp                     (rtx, rtx, rtx);
extern rtx        gen_unspec_ksubh_dsp                     (rtx, rtx, rtx);
extern rtx        gen_unspec_kdmbb                         (rtx, rtx, rtx);
extern rtx        gen_unspec_kdmbt                         (rtx, rtx, rtx);
extern rtx        gen_unspec_kdmtb                         (rtx, rtx, rtx);
extern rtx        gen_unspec_kdmtt                         (rtx, rtx, rtx);
extern rtx        gen_unspec_khmbb                         (rtx, rtx, rtx);
extern rtx        gen_unspec_khmbt                         (rtx, rtx, rtx);
extern rtx        gen_unspec_khmtb                         (rtx, rtx, rtx);
extern rtx        gen_unspec_khmtt                         (rtx, rtx, rtx);
extern rtx        gen_unspec_kslraw                        (rtx, rtx, rtx);
extern rtx        gen_unspec_kslrawu                       (rtx, rtx, rtx);
extern rtx        gen_unspec_volatile_rdov                 (rtx);
extern rtx        gen_unspec_volatile_clrov                (void);
extern rtx        gen_unspec_sva                           (rtx, rtx, rtx);
extern rtx        gen_unspec_svs                           (rtx, rtx, rtx);
extern rtx        gen_unspec_jr_itoff                      (rtx);
extern rtx        gen_unspec_jr_toff                       (rtx);
extern rtx        gen_unspec_jral_iton                     (rtx);
extern rtx        gen_unspec_jral_ton                      (rtx);
extern rtx        gen_unspec_ret_itoff                     (rtx);
extern rtx        gen_unspec_ret_toff                      (rtx);
extern rtx        gen_unspec_standby_no_wake_grant         (void);
extern rtx        gen_unspec_standby_wake_grant            (void);
extern rtx        gen_unspec_standby_wait_done             (void);
extern rtx        gen_unspec_teqz                          (rtx, rtx);
extern rtx        gen_unspec_tnez                          (rtx, rtx);
extern rtx        gen_unspec_trap                          (rtx);
extern rtx        gen_unspec_setend_big                    (void);
extern rtx        gen_unspec_setend_little                 (void);
extern rtx        gen_unspec_break                         (rtx);
extern rtx        gen_unspec_syscall                       (rtx);
extern rtx        gen_unspec_nop                           (void);
extern rtx        gen_unspec_wsbh                          (rtx, rtx);
extern rtx        gen_unspec_tlbop_trd                     (rtx);
extern rtx        gen_unspec_tlbop_twr                     (rtx);
extern rtx        gen_unspec_tlbop_rwr                     (rtx);
extern rtx        gen_unspec_tlbop_rwlk                    (rtx);
extern rtx        gen_unspec_tlbop_unlk                    (rtx);
extern rtx        gen_unspec_tlbop_pb                      (rtx, rtx);
extern rtx        gen_unspec_tlbop_inv                     (rtx);
extern rtx        gen_unspec_tlbop_flua                    (void);
extern rtx        gen_unaligned_load_w                     (rtx, rtx);
extern rtx        gen_unaligned_load_dw                    (rtx, rtx);
extern rtx        gen_unaligned_store_w                    (rtx, rtx);
extern rtx        gen_unaligned_store_dw                   (rtx, rtx);
extern rtx        gen_unspec_kabs                          (rtx, rtx);
extern rtx        gen_move_di                              (rtx, rtx);
extern rtx        gen_move_df                              (rtx, rtx);
extern rtx        gen_movsf_lo                             (rtx, rtx, rtx);
extern rtx        gen_fcmovsf_eq                           (rtx, rtx, rtx, rtx);
extern rtx        gen_fcmovdf_eq                           (rtx, rtx, rtx, rtx);
extern rtx        gen_fcmovsf_ne                           (rtx, rtx, rtx, rtx);
extern rtx        gen_fcmovdf_ne                           (rtx, rtx, rtx, rtx);
extern rtx        gen_addsf3                               (rtx, rtx, rtx);
extern rtx        gen_adddf3                               (rtx, rtx, rtx);
extern rtx        gen_subsf3                               (rtx, rtx, rtx);
extern rtx        gen_subdf3                               (rtx, rtx, rtx);
extern rtx        gen_mulsf3                               (rtx, rtx, rtx);
extern rtx        gen_muldf3                               (rtx, rtx, rtx);
extern rtx        gen_fmasf4                               (rtx, rtx, rtx, rtx);
extern rtx        gen_fmadf4                               (rtx, rtx, rtx, rtx);
extern rtx        gen_fnmasf4                              (rtx, rtx, rtx, rtx);
extern rtx        gen_fnmadf4                              (rtx, rtx, rtx, rtx);
extern rtx        gen_fmssf4                               (rtx, rtx, rtx, rtx);
extern rtx        gen_fmsdf4                               (rtx, rtx, rtx, rtx);
extern rtx        gen_fnmssf4                              (rtx, rtx, rtx, rtx);
extern rtx        gen_fnmsdf4                              (rtx, rtx, rtx, rtx);
extern rtx        gen_divsf3                               (rtx, rtx, rtx);
extern rtx        gen_divdf3                               (rtx, rtx, rtx);
extern rtx        gen_sqrtsf2                              (rtx, rtx);
extern rtx        gen_sqrtdf2                              (rtx, rtx);
extern rtx        gen_copysignsf3                          (rtx, rtx, rtx);
extern rtx        gen_copysigndf3                          (rtx, rtx, rtx);
extern rtx        gen_abssf2                               (rtx, rtx);
extern rtx        gen_absdf2                               (rtx, rtx);
extern rtx        gen_floatunssisf2                        (rtx, rtx);
extern rtx        gen_floatunssidf2                        (rtx, rtx);
extern rtx        gen_floatsisf2                           (rtx, rtx);
extern rtx        gen_floatsidf2                           (rtx, rtx);
extern rtx        gen_fixuns_truncsfsi2                    (rtx, rtx);
extern rtx        gen_fixuns_truncdfsi2                    (rtx, rtx);
extern rtx        gen_fix_truncsfsi2                       (rtx, rtx);
extern rtx        gen_fix_truncdfsi2                       (rtx, rtx);
extern rtx        gen_extendsfdf2                          (rtx, rtx);
extern rtx        gen_truncdfsf2                           (rtx, rtx);
extern rtx        gen_cmpsf_eq                             (rtx, rtx, rtx);
extern rtx        gen_cmpdf_eq                             (rtx, rtx, rtx);
extern rtx        gen_cmpsf_lt                             (rtx, rtx, rtx);
extern rtx        gen_cmpdf_lt                             (rtx, rtx, rtx);
extern rtx        gen_cmpsf_le                             (rtx, rtx, rtx);
extern rtx        gen_cmpdf_le                             (rtx, rtx, rtx);
extern rtx        gen_cmpsf_un                             (rtx, rtx, rtx);
extern rtx        gen_cmpdf_un                             (rtx, rtx, rtx);
extern rtx        gen_unaligned_load_wv4qi                 (rtx, rtx);
extern rtx        gen_unaligned_load_wv2hi                 (rtx, rtx);
extern rtx        gen_unaligned_store_wv4qi                (rtx, rtx);
extern rtx        gen_unaligned_store_wv2hi                (rtx, rtx);
extern rtx        gen_addv4qi3                             (rtx, rtx, rtx);
extern rtx        gen_kaddv4qi3                            (rtx, rtx, rtx);
extern rtx        gen_ukaddv4qi3                           (rtx, rtx, rtx);
extern rtx        gen_addv2hi3                             (rtx, rtx, rtx);
extern rtx        gen_kaddv2hi3                            (rtx, rtx, rtx);
extern rtx        gen_ukaddv2hi3                           (rtx, rtx, rtx);
extern rtx        gen_adddi3                               (rtx, rtx, rtx);
extern rtx        gen_kadddi3                              (rtx, rtx, rtx);
extern rtx        gen_ukadddi3                             (rtx, rtx, rtx);
extern rtx        gen_raddv4qi3                            (rtx, rtx, rtx);
extern rtx        gen_uraddv4qi3                           (rtx, rtx, rtx);
extern rtx        gen_raddv2hi3                            (rtx, rtx, rtx);
extern rtx        gen_uraddv2hi3                           (rtx, rtx, rtx);
extern rtx        gen_radddi3                              (rtx, rtx, rtx);
extern rtx        gen_uradddi3                             (rtx, rtx, rtx);
extern rtx        gen_subv4qi3                             (rtx, rtx, rtx);
extern rtx        gen_ksubv4qi3                            (rtx, rtx, rtx);
extern rtx        gen_uksubv4qi3                           (rtx, rtx, rtx);
extern rtx        gen_subv2hi3                             (rtx, rtx, rtx);
extern rtx        gen_ksubv2hi3                            (rtx, rtx, rtx);
extern rtx        gen_uksubv2hi3                           (rtx, rtx, rtx);
extern rtx        gen_subdi3                               (rtx, rtx, rtx);
extern rtx        gen_ksubdi3                              (rtx, rtx, rtx);
extern rtx        gen_uksubdi3                             (rtx, rtx, rtx);
extern rtx        gen_rsubv4qi3                            (rtx, rtx, rtx);
extern rtx        gen_ursubv4qi3                           (rtx, rtx, rtx);
extern rtx        gen_rsubv2hi3                            (rtx, rtx, rtx);
extern rtx        gen_ursubv2hi3                           (rtx, rtx, rtx);
extern rtx        gen_rsubdi3                              (rtx, rtx, rtx);
extern rtx        gen_ursubdi3                             (rtx, rtx, rtx);
extern rtx        gen_cras16_1_le                          (rtx, rtx, rtx);
extern rtx        gen_cras16_1_be                          (rtx, rtx, rtx);
extern rtx        gen_kcras16_1_le                         (rtx, rtx, rtx);
extern rtx        gen_kcras16_1_be                         (rtx, rtx, rtx);
extern rtx        gen_ukcras16_1_le                        (rtx, rtx, rtx);
extern rtx        gen_ukcras16_1_be                        (rtx, rtx, rtx);
extern rtx        gen_crsa16_1_le                          (rtx, rtx, rtx);
extern rtx        gen_crsa16_1_be                          (rtx, rtx, rtx);
extern rtx        gen_kcrsa16_1_le                         (rtx, rtx, rtx);
extern rtx        gen_kcrsa16_1_be                         (rtx, rtx, rtx);
extern rtx        gen_ukcrsa16_1_le                        (rtx, rtx, rtx);
extern rtx        gen_ukcrsa16_1_be                        (rtx, rtx, rtx);
extern rtx        gen_rcras16_1_le                         (rtx, rtx, rtx);
extern rtx        gen_rcras16_1_be                         (rtx, rtx, rtx);
extern rtx        gen_urcras16_1_le                        (rtx, rtx, rtx);
extern rtx        gen_urcras16_1_be                        (rtx, rtx, rtx);
extern rtx        gen_rcrsa16_1_le                         (rtx, rtx, rtx);
extern rtx        gen_rcrsa16_1_be                         (rtx, rtx, rtx);
extern rtx        gen_urcrsa16_1_le                        (rtx, rtx, rtx);
extern rtx        gen_urcrsa16_1_be                        (rtx, rtx, rtx);
extern rtx        gen_kslli16                              (rtx, rtx, rtx);
extern rtx        gen_sra16_round                          (rtx, rtx, rtx);
extern rtx        gen_srl16_round                          (rtx, rtx, rtx);
extern rtx        gen_kslra16                              (rtx, rtx, rtx);
extern rtx        gen_kslra16_round                        (rtx, rtx, rtx);
extern rtx        gen_cmpeq8                               (rtx, rtx, rtx);
extern rtx        gen_cmpeq16                              (rtx, rtx, rtx);
extern rtx        gen_scmplt8                              (rtx, rtx, rtx);
extern rtx        gen_scmplt16                             (rtx, rtx, rtx);
extern rtx        gen_scmple8                              (rtx, rtx, rtx);
extern rtx        gen_scmple16                             (rtx, rtx, rtx);
extern rtx        gen_ucmplt8                              (rtx, rtx, rtx);
extern rtx        gen_ucmplt16                             (rtx, rtx, rtx);
extern rtx        gen_ucmple8                              (rtx, rtx, rtx);
extern rtx        gen_ucmple16                             (rtx, rtx, rtx);
extern rtx        gen_sclip16                              (rtx, rtx, rtx);
extern rtx        gen_uclip16                              (rtx, rtx, rtx);
extern rtx        gen_khm16                                (rtx, rtx, rtx);
extern rtx        gen_khmx16                               (rtx, rtx, rtx);
extern rtx        gen_insvsi_internal                      (rtx, rtx, rtx);
extern rtx        gen_insvsiqi_internal                    (rtx, rtx, rtx);
extern rtx        gen_and0xff_s8                           (rtx, rtx);
extern rtx        gen_insbsi2                              (rtx, rtx, rtx);
extern rtx        gen_ior_and0xff00ffff_reg                (rtx, rtx, rtx);
extern rtx        gen_vec_setv4qi_internal                 (rtx, rtx, rtx, rtx);
extern rtx        gen_vec_setv4qi_internal_vec             (rtx, rtx, rtx, rtx);
extern rtx        gen_vec_mergev4qi_and_cv0_1              (rtx, rtx);
extern rtx        gen_vec_mergev4qi_and_cv0_2              (rtx, rtx);
extern rtx        gen_vec_mergeqi_and_cv0_1                (rtx, rtx);
extern rtx        gen_vec_mergeqi_and_cv0_2                (rtx, rtx);
extern rtx        gen_vec_setv2hi_internal                 (rtx, rtx, rtx, rtx);
extern rtx        gen_vec_mergev2hi_and_cv0_1              (rtx, rtx);
extern rtx        gen_vec_mergev2hi_and_cv0_2              (rtx, rtx);
extern rtx        gen_vec_mergehi_and_cv0_1                (rtx, rtx);
extern rtx        gen_vec_mergehi_and_cv0_2                (rtx, rtx);
extern rtx        gen_pkbbsi_1                             (rtx, rtx, rtx);
extern rtx        gen_pkbbsi_2                             (rtx, rtx, rtx);
extern rtx        gen_pkbbsi_3                             (rtx, rtx, rtx);
extern rtx        gen_pkbbsi_4                             (rtx, rtx, rtx);
extern rtx        gen_pktbsi_1                             (rtx, rtx, rtx);
extern rtx        gen_pktbsi_2                             (rtx, rtx, rtx);
extern rtx        gen_pktbsi_3                             (rtx, rtx);
extern rtx        gen_pktbsi_4                             (rtx, rtx);
extern rtx        gen_pkttsi                               (rtx, rtx, rtx);
extern rtx        gen_vec_mergerr                          (rtx, rtx, rtx, rtx);
extern rtx        gen_vec_merge                            (rtx, rtx, rtx, rtx);
extern rtx        gen_vec_mergerv                          (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_vec_mergevr                          (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_vec_mergevv                          (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_vec_extractv4qi0                     (rtx, rtx);
extern rtx        gen_vec_extractv4qi0_ze                  (rtx, rtx);
extern rtx        gen_vec_extractv4qi0_se                  (rtx, rtx);
extern rtx        gen_vec_extractv4qi1                     (rtx, rtx);
extern rtx        gen_vec_extractv4qi2                     (rtx, rtx);
extern rtx        gen_vec_extractv4qi3                     (rtx, rtx);
extern rtx        gen_vec_extractv4qi3_se                  (rtx, rtx);
extern rtx        gen_vec_extractv4qi3_ze                  (rtx, rtx);
extern rtx        gen_vec_extractv4qihi0                   (rtx, rtx);
extern rtx        gen_vec_extractv4qihi1                   (rtx, rtx);
extern rtx        gen_vec_extractv4qihi2                   (rtx, rtx);
extern rtx        gen_vec_extractv4qihi3                   (rtx, rtx);
extern rtx        gen_vec_extractv2hi0                     (rtx, rtx);
extern rtx        gen_vec_extractv2hi0_ze                  (rtx, rtx);
extern rtx        gen_vec_extractv2hi0_se                  (rtx, rtx);
extern rtx        gen_vec_extractv2hi0_be                  (rtx, rtx);
extern rtx        gen_vec_extractv2hi1                     (rtx, rtx);
extern rtx        gen_vec_extractv2hi1_se                  (rtx, rtx);
extern rtx        gen_vec_extractv2hi1_ze                  (rtx, rtx);
extern rtx        gen_vec_extractv2hi1_be                  (rtx, rtx);
extern rtx        gen_smul16                               (rtx, rtx, rtx);
extern rtx        gen_umul16                               (rtx, rtx, rtx);
extern rtx        gen_smulx16                              (rtx, rtx, rtx);
extern rtx        gen_umulx16                              (rtx, rtx, rtx);
extern rtx        gen_rotrv2hi_1                           (rtx, rtx);
extern rtx        gen_rotrv2hi_1_be                        (rtx, rtx);
extern rtx        gen_rotrv4qi_1                           (rtx, rtx);
extern rtx        gen_rotrv4qi_1_be                        (rtx, rtx);
extern rtx        gen_rotrv4qi_2                           (rtx, rtx);
extern rtx        gen_rotrv4qi_2_be                        (rtx, rtx);
extern rtx        gen_rotrv4qi_3                           (rtx, rtx);
extern rtx        gen_rotrv4qi_3_be                        (rtx, rtx);
extern rtx        gen_v4qi_dup_10                          (rtx, rtx);
extern rtx        gen_v4qi_dup_32                          (rtx, rtx);
extern rtx        gen_sunpkd810_imp                        (rtx, rtx);
extern rtx        gen_zunpkd810_imp                        (rtx, rtx);
extern rtx        gen_sunpkd810_imp_inv                    (rtx, rtx);
extern rtx        gen_zunpkd810_imp_inv                    (rtx, rtx);
extern rtx        gen_sunpkd810_imp_be                     (rtx, rtx);
extern rtx        gen_zunpkd810_imp_be                     (rtx, rtx);
extern rtx        gen_sunpkd810_imp_inv_be                 (rtx, rtx);
extern rtx        gen_zunpkd810_imp_inv_be                 (rtx, rtx);
extern rtx        gen_sunpkd820_imp                        (rtx, rtx);
extern rtx        gen_zunpkd820_imp                        (rtx, rtx);
extern rtx        gen_sunpkd820_imp_inv                    (rtx, rtx);
extern rtx        gen_zunpkd820_imp_inv                    (rtx, rtx);
extern rtx        gen_sunpkd820_imp_be                     (rtx, rtx);
extern rtx        gen_zunpkd820_imp_be                     (rtx, rtx);
extern rtx        gen_sunpkd820_imp_inv_be                 (rtx, rtx);
extern rtx        gen_zunpkd820_imp_inv_be                 (rtx, rtx);
extern rtx        gen_sunpkd830_imp                        (rtx, rtx);
extern rtx        gen_zunpkd830_imp                        (rtx, rtx);
extern rtx        gen_sunpkd830_imp_inv                    (rtx, rtx);
extern rtx        gen_zunpkd830_imp_inv                    (rtx, rtx);
extern rtx        gen_sunpkd830_imp_be                     (rtx, rtx);
extern rtx        gen_zunpkd830_imp_be                     (rtx, rtx);
extern rtx        gen_sunpkd830_imp_inv_be                 (rtx, rtx);
extern rtx        gen_zunpkd830_imp_inv_be                 (rtx, rtx);
extern rtx        gen_sunpkd831_imp                        (rtx, rtx);
extern rtx        gen_zunpkd831_imp                        (rtx, rtx);
extern rtx        gen_sunpkd831_imp_inv                    (rtx, rtx);
extern rtx        gen_zunpkd831_imp_inv                    (rtx, rtx);
extern rtx        gen_sunpkd831_imp_be                     (rtx, rtx);
extern rtx        gen_zunpkd831_imp_be                     (rtx, rtx);
extern rtx        gen_sunpkd831_imp_inv_be                 (rtx, rtx);
extern rtx        gen_zunpkd831_imp_inv_be                 (rtx, rtx);
extern rtx        gen_mulhisi3v                            (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_kma_internal                         (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_smal1                                (rtx, rtx, rtx);
extern rtx        gen_smal2                                (rtx, rtx, rtx);
extern rtx        gen_smal3                                (rtx, rtx, rtx);
extern rtx        gen_smal4                                (rtx, rtx, rtx);
extern rtx        gen_smal5                                (rtx, rtx, rtx);
extern rtx        gen_smal6                                (rtx, rtx, rtx);
extern rtx        gen_smal7                                (rtx, rtx, rtx);
extern rtx        gen_smal8                                (rtx, rtx, rtx);
extern rtx        gen_extendsidi2                          (rtx, rtx);
extern rtx        gen_zero_extendsidi2                     (rtx, rtx);
extern rtx        gen_extendhidi2                          (rtx, rtx);
extern rtx        gen_extendqihi2                          (rtx, rtx);
extern rtx        gen_smulsi3_highpart                     (rtx, rtx, rtx);
extern rtx        gen_smmul_round                          (rtx, rtx, rtx);
extern rtx        gen_kmmac                                (rtx, rtx, rtx, rtx);
extern rtx        gen_kmmac_round                          (rtx, rtx, rtx, rtx);
extern rtx        gen_kmmsb                                (rtx, rtx, rtx, rtx);
extern rtx        gen_kmmsb_round                          (rtx, rtx, rtx, rtx);
extern rtx        gen_kwmmul                               (rtx, rtx, rtx);
extern rtx        gen_kwmmul_round                         (rtx, rtx, rtx);
extern rtx        gen_smulhisi3_highpart_1                 (rtx, rtx, rtx, rtx);
extern rtx        gen_smulhisi3_highpart_2                 (rtx, rtx, rtx, rtx);
extern rtx        gen_smmw_round_internal                  (rtx, rtx, rtx, rtx);
extern rtx        gen_kmmaw_internal                       (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_kmmaw_round_internal                 (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_smaddhidi                            (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_smaddhidi2                           (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_smalda1_le                           (rtx, rtx, rtx, rtx);
extern rtx        gen_smalds1_le                           (rtx, rtx, rtx, rtx);
extern rtx        gen_smalda1_be                           (rtx, rtx, rtx, rtx);
extern rtx        gen_smalds1_be                           (rtx, rtx, rtx, rtx);
extern rtx        gen_smaldrs3_le                          (rtx, rtx, rtx, rtx);
extern rtx        gen_smaldrs3_be                          (rtx, rtx, rtx, rtx);
extern rtx        gen_smalxda1_le                          (rtx, rtx, rtx, rtx);
extern rtx        gen_smalxds1_le                          (rtx, rtx, rtx, rtx);
extern rtx        gen_smalxda1_be                          (rtx, rtx, rtx, rtx);
extern rtx        gen_smalxds1_be                          (rtx, rtx, rtx, rtx);
extern rtx        gen_smslda1                              (rtx, rtx, rtx, rtx);
extern rtx        gen_smslxda1                             (rtx, rtx, rtx, rtx);
extern rtx        gen_mada1                                (rtx, rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mada2                                (rtx, rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_sms1                                 (rtx, rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_sms2                                 (rtx, rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_kmda                                 (rtx, rtx, rtx);
extern rtx        gen_kmxda                                (rtx, rtx, rtx);
extern rtx        gen_kmada                                (rtx, rtx, rtx, rtx);
extern rtx        gen_kmada2                               (rtx, rtx, rtx, rtx);
extern rtx        gen_kmaxda                               (rtx, rtx, rtx, rtx);
extern rtx        gen_kmads                                (rtx, rtx, rtx, rtx);
extern rtx        gen_kmadrs                               (rtx, rtx, rtx, rtx);
extern rtx        gen_kmaxds                               (rtx, rtx, rtx, rtx);
extern rtx        gen_kmsda                                (rtx, rtx, rtx, rtx);
extern rtx        gen_kmsxda                               (rtx, rtx, rtx, rtx);
extern rtx        gen_smaxv4qi3                            (rtx, rtx, rtx);
extern rtx        gen_umaxv4qi3                            (rtx, rtx, rtx);
extern rtx        gen_smaxv2hi3                            (rtx, rtx, rtx);
extern rtx        gen_umaxv2hi3                            (rtx, rtx, rtx);
extern rtx        gen_sminv4qi3                            (rtx, rtx, rtx);
extern rtx        gen_uminv4qi3                            (rtx, rtx, rtx);
extern rtx        gen_sminv2hi3                            (rtx, rtx, rtx);
extern rtx        gen_uminv2hi3                            (rtx, rtx, rtx);
extern rtx        gen_smaxv4qi3_bb                         (rtx, rtx, rtx);
extern rtx        gen_umaxv4qi3_bb                         (rtx, rtx, rtx);
extern rtx        gen_sminv4qi3_bb                         (rtx, rtx, rtx);
extern rtx        gen_uminv4qi3_bb                         (rtx, rtx, rtx);
extern rtx        gen_smaxv2hi3_bb                         (rtx, rtx, rtx);
extern rtx        gen_umaxv2hi3_bb                         (rtx, rtx, rtx);
extern rtx        gen_sminv2hi3_bb                         (rtx, rtx, rtx);
extern rtx        gen_uminv2hi3_bb                         (rtx, rtx, rtx);
extern rtx        gen_smaxv4qi3_tt                         (rtx, rtx, rtx);
extern rtx        gen_umaxv4qi3_tt                         (rtx, rtx, rtx);
extern rtx        gen_sminv4qi3_tt                         (rtx, rtx, rtx);
extern rtx        gen_uminv4qi3_tt                         (rtx, rtx, rtx);
extern rtx        gen_smaxv2hi3_tt                         (rtx, rtx, rtx);
extern rtx        gen_umaxv2hi3_tt                         (rtx, rtx, rtx);
extern rtx        gen_sminv2hi3_tt                         (rtx, rtx, rtx);
extern rtx        gen_uminv2hi3_tt                         (rtx, rtx, rtx);
extern rtx        gen_smaxv4qi3_22                         (rtx, rtx, rtx);
extern rtx        gen_umaxv4qi3_22                         (rtx, rtx, rtx);
extern rtx        gen_sminv4qi3_22                         (rtx, rtx, rtx);
extern rtx        gen_uminv4qi3_22                         (rtx, rtx, rtx);
extern rtx        gen_smaxv4qi3_33                         (rtx, rtx, rtx);
extern rtx        gen_umaxv4qi3_33                         (rtx, rtx, rtx);
extern rtx        gen_sminv4qi3_33                         (rtx, rtx, rtx);
extern rtx        gen_uminv4qi3_33                         (rtx, rtx, rtx);
extern rtx        gen_smaxv2hi3_bbtt                       (rtx, rtx, rtx);
extern rtx        gen_umaxv2hi3_bbtt                       (rtx, rtx, rtx);
extern rtx        gen_sminv2hi3_bbtt                       (rtx, rtx, rtx);
extern rtx        gen_uminv2hi3_bbtt                       (rtx, rtx, rtx);
extern rtx        gen_kabsv4qi2                            (rtx, rtx);
extern rtx        gen_kabsv2hi2                            (rtx, rtx);
extern rtx        gen_smar64_1                             (rtx, rtx, rtx, rtx);
extern rtx        gen_umar64_1                             (rtx, rtx, rtx, rtx);
extern rtx        gen_smar64_2                             (rtx, rtx, rtx, rtx);
extern rtx        gen_umar64_2                             (rtx, rtx, rtx, rtx);
extern rtx        gen_smar64_3                             (rtx, rtx, rtx, rtx);
extern rtx        gen_umar64_3                             (rtx, rtx, rtx, rtx);
extern rtx        gen_smar64_4                             (rtx, rtx, rtx, rtx);
extern rtx        gen_umar64_4                             (rtx, rtx, rtx, rtx);
extern rtx        gen_smsr64                               (rtx, rtx, rtx, rtx);
extern rtx        gen_umsr64                               (rtx, rtx, rtx, rtx);
extern rtx        gen_smsr64_2                             (rtx, rtx, rtx, rtx);
extern rtx        gen_umsr64_2                             (rtx, rtx, rtx, rtx);
extern rtx        gen_kmar64_1                             (rtx, rtx, rtx, rtx);
extern rtx        gen_kmar64_2                             (rtx, rtx, rtx, rtx);
extern rtx        gen_kmsr64                               (rtx, rtx, rtx, rtx);
extern rtx        gen_ukmar64_1                            (rtx, rtx, rtx, rtx);
extern rtx        gen_ukmar64_2                            (rtx, rtx, rtx, rtx);
extern rtx        gen_ukmsr64                              (rtx, rtx, rtx, rtx);
extern rtx        gen_bpick1                               (rtx, rtx, rtx, rtx);
extern rtx        gen_bpick2                               (rtx, rtx, rtx, rtx);
extern rtx        gen_bpick3                               (rtx, rtx, rtx, rtx);
extern rtx        gen_bpick4                               (rtx, rtx, rtx, rtx);
extern rtx        gen_bpick5                               (rtx, rtx, rtx, rtx);
extern rtx        gen_bpick6                               (rtx, rtx, rtx, rtx);
extern rtx        gen_bpick7                               (rtx, rtx, rtx, rtx);
extern rtx        gen_bpick8                               (rtx, rtx, rtx, rtx);
extern rtx        gen_sraiu                                (rtx, rtx, rtx);
extern rtx        gen_kssl                                 (rtx, rtx, rtx);
extern rtx        gen_kslraw_round                         (rtx, rtx, rtx);
extern rtx        gen_ashldi3                              (rtx, rtx, rtx);
extern rtx        gen_ashrdi3                              (rtx, rtx, rtx);
extern rtx        gen_lshrdi3                              (rtx, rtx, rtx);
extern rtx        gen_rotrdi3                              (rtx, rtx, rtx);
extern rtx        gen_sclip32                              (rtx, rtx, rtx);
extern rtx        gen_uclip32                              (rtx, rtx, rtx);
extern rtx        gen_bitrev                               (rtx, rtx, rtx);
extern rtx        gen_wext                                 (rtx, rtx, rtx);
extern rtx        gen_uwext                                (rtx, rtx, rtx);
extern rtx        gen_raddsi3                              (rtx, rtx, rtx);
extern rtx        gen_rsubsi3                              (rtx, rtx, rtx);
extern rtx        gen_uraddsi3                             (rtx, rtx, rtx);
extern rtx        gen_ursubsi3                             (rtx, rtx, rtx);
extern rtx        gen_move_addr                            (rtx, rtx);
extern rtx        gen_sethi                                (rtx, rtx);
extern rtx        gen_lo_sum                               (rtx, rtx, rtx);
extern rtx        gen_zero_extendqisi2                     (rtx, rtx);
extern rtx        gen_zero_extendhisi2                     (rtx, rtx);
extern rtx        gen_extendqisi2                          (rtx, rtx);
extern rtx        gen_extendhisi2                          (rtx, rtx);
extern rtx        gen_addsi3                               (rtx, rtx, rtx);
extern rtx        gen_subsi3                               (rtx, rtx, rtx);
extern rtx        gen_mulsi3                               (rtx, rtx, rtx);
extern rtx        gen_mulsidi3                             (rtx, rtx, rtx);
extern rtx        gen_umulsidi3                            (rtx, rtx, rtx);
extern rtx        gen_divmodsi4                            (rtx, rtx, rtx, rtx);
extern rtx        gen_udivmodsi4                           (rtx, rtx, rtx, rtx);
extern rtx        gen_divsi4                               (rtx, rtx, rtx);
extern rtx        gen_udivsi4                              (rtx, rtx, rtx);
extern rtx        gen_bitc                                 (rtx, rtx, rtx);
extern rtx        gen_negsi2                               (rtx, rtx);
extern rtx        gen_soft_negdf2                          (rtx, rtx);
extern rtx        gen_one_cmplsi2                          (rtx, rtx);
extern rtx        gen_cmovzqi                              (rtx, rtx, rtx, rtx);
extern rtx        gen_cmovzhi                              (rtx, rtx, rtx, rtx);
extern rtx        gen_cmovzsi                              (rtx, rtx, rtx, rtx);
extern rtx        gen_cmovnqi                              (rtx, rtx, rtx, rtx);
extern rtx        gen_cmovnhi                              (rtx, rtx, rtx, rtx);
extern rtx        gen_cmovnsi                              (rtx, rtx, rtx, rtx);
extern rtx        gen_cbranchsi4_equality_zero             (rtx, rtx, rtx);
extern rtx        gen_cbranchsi4_equality_reg              (rtx, rtx, rtx, rtx);
extern rtx        gen_cbranchsi4_equality_reg_or_const_int (rtx, rtx, rtx, rtx);
extern rtx        gen_slts_compare_impl                    (rtx, rtx, rtx);
extern rtx        gen_slt_eq0                              (rtx, rtx);
extern rtx        gen_slt_compare_impl                     (rtx, rtx, rtx);
extern rtx        gen_jump                                 (rtx);
extern rtx        gen_indirect_jump                        (rtx);
extern rtx        gen_call_internal                        (rtx, rtx);
extern rtx        gen_call_value_internal                  (rtx, rtx, rtx);
extern rtx        gen_sibcall_internal                     (rtx, rtx);
extern rtx        gen_sibcall_value_internal               (rtx, rtx, rtx);
extern rtx        gen_nop                                  (void);
extern rtx        gen_return_internal                      (void);
extern rtx        gen_casesi_internal                      (rtx, rtx, rtx);
extern rtx        gen_abssi2                               (rtx, rtx);
extern rtx        gen_clzsi2                               (rtx, rtx);
extern rtx        gen_smaxsi3                              (rtx, rtx, rtx);
extern rtx        gen_sminsi3                              (rtx, rtx, rtx);
extern rtx        gen_btst                                 (rtx, rtx, rtx);
extern rtx        gen_ave                                  (rtx, rtx, rtx);
extern rtx        gen_relax_group                          (rtx);
extern rtx        gen_omit_fp_begin                        (rtx);
extern rtx        gen_omit_fp_end                          (rtx);
extern rtx        gen_pop25return                          (void);
extern rtx        gen_add_pc                               (rtx, rtx);
extern rtx        gen_bswaphi2                             (rtx, rtx);
extern rtx        gen_nds32_eh_return                      (rtx);
extern rtx        gen_trap                                 (void);
extern rtx        gen_tls_desc                             (rtx, rtx);
extern rtx        gen_tls_ie                               (rtx, rtx, rtx);
extern rtx        gen_tls_le                               (rtx, rtx, rtx);
extern rtx        gen_addsi3_32bit                         (rtx, rtx, rtx);
extern rtx        gen_sym_got                              (rtx, rtx, rtx);
extern rtx        gen_mtsr_isb                             (rtx, rtx);
extern rtx        gen_mtsr_dsb                             (rtx, rtx);
extern rtx        gen_unspec_enable_int                    (rtx);
extern rtx        gen_unspec_disable_int                   (rtx);
extern rtx        gen_unspec_set_pending_swint             (void);
extern rtx        gen_unspec_clr_pending_swint             (void);
extern rtx        gen_unspec_clr_pending_hwint             (rtx);
extern rtx        gen_unspec_get_all_pending_int           (rtx);
extern rtx        gen_unspec_get_pending_int               (rtx, rtx);
extern rtx        gen_unspec_set_int_priority              (rtx, rtx);
extern rtx        gen_unspec_get_int_priority              (rtx, rtx);
extern rtx        gen_unspec_set_trig_level                (rtx);
extern rtx        gen_unspec_set_trig_edge                 (rtx);
extern rtx        gen_unspec_get_trig_type                 (rtx, rtx);
extern rtx        gen_unspec_ave                           (rtx, rtx, rtx);
extern rtx        gen_unspec_bclr                          (rtx, rtx, rtx);
extern rtx        gen_unspec_bset                          (rtx, rtx, rtx);
extern rtx        gen_unspec_btgl                          (rtx, rtx, rtx);
extern rtx        gen_unspec_btst                          (rtx, rtx, rtx);
extern rtx        gen_bse                                  (rtx, rtx, rtx);
extern rtx        gen_bsp                                  (rtx, rtx, rtx);
extern rtx        gen_unspec_get_current_sp                (rtx);
extern rtx        gen_unspec_set_current_sp                (rtx);
extern rtx        gen_unspec_return_address                (rtx);
extern rtx        gen_unaligned_load_hw                    (rtx, rtx);
extern rtx        gen_unaligned_loadsi                     (rtx, rtx);
extern rtx        gen_unaligned_loaddi                     (rtx, rtx);
extern rtx        gen_unaligned_store_hw                   (rtx, rtx);
extern rtx        gen_unaligned_storesi                    (rtx, rtx);
extern rtx        gen_unaligned_storedi                    (rtx, rtx);
extern rtx        gen_unspec_unaligned_feature             (rtx);
extern rtx        gen_unspec_enable_unaligned              (void);
extern rtx        gen_unspec_disable_unaligned             (void);
extern rtx        gen_load_multiple                        (rtx, rtx, rtx);
extern rtx        gen_unaligned_load_update_base_w         (rtx, rtx, rtx);
extern rtx        gen_store_multiple                       (rtx, rtx, rtx);
extern rtx        gen_unaligned_store_update_base_w        (rtx, rtx, rtx);
extern rtx        gen_unaligned_store_update_base_dw       (rtx, rtx, rtx);
extern rtx        gen_cpymemsi                             (rtx, rtx, rtx, rtx);
extern rtx        gen_strlensi                             (rtx, rtx, rtx, rtx);
extern rtx        gen_setmemsi                             (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_movdi                                (rtx, rtx);
extern rtx        gen_movdf                                (rtx, rtx);
extern rtx        gen_movsf                                (rtx, rtx);
extern rtx        gen_movsfcc                              (rtx, rtx, rtx, rtx);
extern rtx        gen_movdfcc                              (rtx, rtx, rtx, rtx);
extern rtx        gen_cstoresf4                            (rtx, rtx, rtx, rtx);
extern rtx        gen_cstoredf4                            (rtx, rtx, rtx, rtx);
extern rtx        gen_cbranchsf4                           (rtx, rtx, rtx, rtx);
extern rtx        gen_cbranchdf4                           (rtx, rtx, rtx, rtx);
extern rtx        gen_movv4qi                              (rtx, rtx);
extern rtx        gen_movv2hi                              (rtx, rtx);
extern rtx        gen_movv2si                              (rtx, rtx);
extern rtx        gen_movmisalignv4qi                      (rtx, rtx);
extern rtx        gen_movmisalignv2hi                      (rtx, rtx);
extern rtx        gen_unaligned_loadv4qi                   (rtx, rtx);
extern rtx        gen_unaligned_loadv2hi                   (rtx, rtx);
extern rtx        gen_unaligned_storev4qi                  (rtx, rtx);
extern rtx        gen_unaligned_storev2hi                  (rtx, rtx);
extern rtx        gen_cras16_1                             (rtx, rtx, rtx);
extern rtx        gen_kcras16_1                            (rtx, rtx, rtx);
extern rtx        gen_ukcras16_1                           (rtx, rtx, rtx);
extern rtx        gen_crsa16_1                             (rtx, rtx, rtx);
extern rtx        gen_kcrsa16_1                            (rtx, rtx, rtx);
extern rtx        gen_ukcrsa16_1                           (rtx, rtx, rtx);
extern rtx        gen_rcras16_1                            (rtx, rtx, rtx);
extern rtx        gen_urcras16_1                           (rtx, rtx, rtx);
extern rtx        gen_rcrsa16_1                            (rtx, rtx, rtx);
extern rtx        gen_urcrsa16_1                           (rtx, rtx, rtx);
extern rtx        gen_ashlv2hi3                            (rtx, rtx, rtx);
extern rtx        gen_ashrv2hi3                            (rtx, rtx, rtx);
extern rtx        gen_lshrv2hi3                            (rtx, rtx, rtx);
extern rtx        gen_vec_setv4qi                          (rtx, rtx, rtx);
extern rtx        gen_insb                                 (rtx, rtx, rtx, rtx);
extern rtx        gen_insvsi                               (rtx, rtx, rtx, rtx);
extern rtx        gen_vec_setv2hi                          (rtx, rtx, rtx);
extern rtx        gen_pkbb                                 (rtx, rtx, rtx);
extern rtx        gen_pkbt                                 (rtx, rtx, rtx);
extern rtx        gen_pktt                                 (rtx, rtx, rtx);
extern rtx        gen_pktb                                 (rtx, rtx, rtx);
extern rtx        gen_vec_extractv4qi                      (rtx, rtx, rtx);
extern rtx        gen_vec_extractv2hi                      (rtx, rtx, rtx);
extern rtx        gen_vec_unpacks_lo_v4qi                  (rtx, rtx);
extern rtx        gen_sunpkd810                            (rtx, rtx);
extern rtx        gen_sunpkd820                            (rtx, rtx);
extern rtx        gen_sunpkd830                            (rtx, rtx);
extern rtx        gen_sunpkd831                            (rtx, rtx);
extern rtx        gen_zunpkd810                            (rtx, rtx);
extern rtx        gen_zunpkd820                            (rtx, rtx);
extern rtx        gen_zunpkd830                            (rtx, rtx);
extern rtx        gen_zunpkd831                            (rtx, rtx);
extern rtx        gen_smbb                                 (rtx, rtx, rtx);
extern rtx        gen_smbt                                 (rtx, rtx, rtx);
extern rtx        gen_smtt                                 (rtx, rtx, rtx);
extern rtx        gen_kmabb                                (rtx, rtx, rtx, rtx);
extern rtx        gen_kmabt                                (rtx, rtx, rtx, rtx);
extern rtx        gen_kmatt                                (rtx, rtx, rtx, rtx);
extern rtx        gen_smds                                 (rtx, rtx, rtx);
extern rtx        gen_smds_le                              (rtx, rtx, rtx);
extern rtx        gen_smds_be                              (rtx, rtx, rtx);
extern rtx        gen_smdrs                                (rtx, rtx, rtx);
extern rtx        gen_smdrs_le                             (rtx, rtx, rtx);
extern rtx        gen_smdrs_be                             (rtx, rtx, rtx);
extern rtx        gen_smxdsv                               (rtx, rtx, rtx);
extern rtx        gen_smxdsv_le                            (rtx, rtx, rtx);
extern rtx        gen_smxdsv_be                            (rtx, rtx, rtx);
extern rtx        gen_smmwb                                (rtx, rtx, rtx);
extern rtx        gen_smmwt                                (rtx, rtx, rtx);
extern rtx        gen_smmwb_round                          (rtx, rtx, rtx);
extern rtx        gen_smmwt_round                          (rtx, rtx, rtx);
extern rtx        gen_kmmawb                               (rtx, rtx, rtx, rtx);
extern rtx        gen_kmmawt                               (rtx, rtx, rtx, rtx);
extern rtx        gen_kmmawb_round                         (rtx, rtx, rtx, rtx);
extern rtx        gen_kmmawt_round                         (rtx, rtx, rtx, rtx);
extern rtx        gen_smalbb                               (rtx, rtx, rtx, rtx);
extern rtx        gen_smalbt                               (rtx, rtx, rtx, rtx);
extern rtx        gen_smaltt                               (rtx, rtx, rtx, rtx);
extern rtx        gen_smalda1                              (rtx, rtx, rtx, rtx);
extern rtx        gen_smalds1                              (rtx, rtx, rtx, rtx);
extern rtx        gen_smaldrs3                             (rtx, rtx, rtx, rtx);
extern rtx        gen_smalxda1                             (rtx, rtx, rtx, rtx);
extern rtx        gen_smalxds1                             (rtx, rtx, rtx, rtx);
extern rtx        gen_absv4qi2                             (rtx, rtx);
extern rtx        gen_absv2hi2                             (rtx, rtx);
extern rtx        gen_movqi                                (rtx, rtx);
extern rtx        gen_movhi                                (rtx, rtx);
extern rtx        gen_movmisalignsi                        (rtx, rtx);
extern rtx        gen_movmisaligndi                        (rtx, rtx);
extern rtx        gen_movsi                                (rtx, rtx);
extern rtx        gen_extv                                 (rtx, rtx, rtx, rtx);
extern rtx        gen_insv                                 (rtx, rtx, rtx, rtx);
extern rtx        gen_andsi3                               (rtx, rtx, rtx);
extern rtx        gen_iorsi3                               (rtx, rtx, rtx);
extern rtx        gen_xorsi3                               (rtx, rtx, rtx);
extern rtx        gen_negsf2                               (rtx, rtx);
extern rtx        gen_negdf2                               (rtx, rtx);
extern rtx        gen_ashlsi3                              (rtx, rtx, rtx);
extern rtx        gen_ashrsi3                              (rtx, rtx, rtx);
extern rtx        gen_lshrsi3                              (rtx, rtx, rtx);
extern rtx        gen_rotrsi3                              (rtx, rtx, rtx);
extern rtx        gen_movqicc                              (rtx, rtx, rtx, rtx);
extern rtx        gen_movhicc                              (rtx, rtx, rtx, rtx);
extern rtx        gen_movsicc                              (rtx, rtx, rtx, rtx);
extern rtx        gen_cbranchsi4                           (rtx, rtx, rtx, rtx);
extern rtx        gen_cstoresi4                            (rtx, rtx, rtx, rtx);
extern rtx        gen_slts_compare                         (rtx, rtx, rtx);
extern rtx        gen_slt_compare                          (rtx, rtx, rtx);
extern rtx        gen_call                                 (rtx, rtx);
extern rtx        gen_call_value                           (rtx, rtx, rtx);
extern rtx        gen_untyped_call                         (rtx, rtx, rtx);
extern rtx        gen_sibcall                              (rtx);
extern rtx        gen_sibcall_value                        (rtx, rtx);
extern rtx        gen_prologue                             (void);
extern rtx        gen_epilogue                             (void);
extern rtx        gen_sibcall_epilogue                     (void);
extern rtx        gen_return                               (void);
extern rtx        gen_simple_return                        (void);
extern rtx        gen_casesi                               (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_bswapsi2                             (rtx, rtx);
extern rtx        gen_eh_return                            (rtx);

#endif /* GCC_INSN_FLAGS_H */
