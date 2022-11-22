// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VVentus.h for the primary calling header

#include "verilated.h"

#include "VVentus_FCMA_ADD_s1.h"
#include "VVentus_ScalarFPU_1.h"
#include "VVentus__Syms.h"

extern const VlWide<19>/*607:0*/ VVentus__ConstPool__CONST_h7b110aeb_0;

VL_INLINE_OPT void VVentus_ScalarFPU_1___nba_sequent__TOP__GPGPU_top__DOT__SM_wrapper__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_1__0(VVentus_ScalarFPU_1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VVentus__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VVentus_ScalarFPU_1___nba_sequent__TOP__GPGPU_top__DOT__SM_wrapper__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_1__0\n"); );
    // Init
    VlWide<19>/*584:0*/ __PVT__FMA__DOT__mulPipe__DOT__s3__DOT___sig_shifted_raw_T;
    SData/*8:0*/ __PVT__FMA__DOT__mulPipe__DOT__s3__DOT___exp_pre_round_T_2;
    CData/*0:0*/ __Vdly__FMA__DOT__mulPipe__DOT__REG;
    CData/*0:0*/ __Vdly__FMA__DOT__mulPipe__DOT__REG_1;
    CData/*0:0*/ __Vdly__FMA__DOT__addPipe__DOT__REG;
    CData/*0:0*/ __Vdly__FMA__DOT__addPipe__DOT__REG_1;
    IData/*31:0*/ __Vdlyvval__FMA__DOT__mulFIFO__DOT__ram_result__v0;
    CData/*0:0*/ __Vdlyvset__FMA__DOT__mulFIFO__DOT__ram_result__v0;
    IData/*31:0*/ __Vdlyvval__FMA__DOT__addFIFO__DOT__ram_result__v0;
    CData/*0:0*/ __Vdlyvset__FMA__DOT__addFIFO__DOT__ram_result__v0;
    CData/*0:0*/ __Vdly__FCMP__DOT__REG;
    CData/*0:0*/ __Vdly__FCMP__DOT__REG_1;
    CData/*0:0*/ __Vdly__FPMV__DOT__REG;
    CData/*0:0*/ __Vdly__FPMV__DOT__REG_1;
    CData/*0:0*/ __Vdly__FPToInt__DOT__REG;
    CData/*0:0*/ __Vdly__FPToInt__DOT__REG_1;
    CData/*0:0*/ __Vdly__IntToFP__DOT__REG;
    CData/*0:0*/ __Vdly__IntToFP__DOT__REG_1;
    VlWide<3>/*95:0*/ __Vtemp_hd69ef506__0;
    VlWide<3>/*95:0*/ __Vtemp_h2d568758__0;
    VlWide<19>/*607:0*/ __Vtemp_hd7be74e6__0;
    VlWide<19>/*607:0*/ __Vtemp_h2ce4aade__0;
    VlWide<3>/*95:0*/ __Vtemp_hf13d2d1e__0;
    // Body
    __Vdly__IntToFP__DOT__REG_1 = vlSelf->__PVT__IntToFP__DOT__REG_1;
    __Vdly__IntToFP__DOT__REG = vlSelf->__PVT__IntToFP__DOT__REG;
    __Vdly__FMA__DOT__mulPipe__DOT__REG = vlSelf->__PVT__FMA__DOT__mulPipe__DOT__REG;
    __Vdly__FMA__DOT__mulPipe__DOT__REG_1 = vlSelf->__PVT__FMA__DOT__mulPipe__DOT__REG_1;
    __Vdly__FMA__DOT__addPipe__DOT__REG = vlSelf->__PVT__FMA__DOT__addPipe__DOT__REG;
    __Vdly__FMA__DOT__addPipe__DOT__REG_1 = vlSelf->__PVT__FMA__DOT__addPipe__DOT__REG_1;
    __Vdly__FPToInt__DOT__REG = vlSelf->__PVT__FPToInt__DOT__REG;
    __Vdly__FPMV__DOT__REG = vlSelf->__PVT__FPMV__DOT__REG;
    __Vdly__FCMP__DOT__REG = vlSelf->__PVT__FCMP__DOT__REG;
    __Vdly__FPToInt__DOT__REG_1 = vlSelf->__PVT__FPToInt__DOT__REG_1;
    __Vdly__FPMV__DOT__REG_1 = vlSelf->__PVT__FPMV__DOT__REG_1;
    __Vdly__FCMP__DOT__REG_1 = vlSelf->__PVT__FCMP__DOT__REG_1;
    __Vdlyvset__FMA__DOT__mulFIFO__DOT__ram_result__v0 = 0U;
    __Vdlyvset__FMA__DOT__addFIFO__DOT__ram_result__v0 = 0U;
    if (vlSymsp->TOP.reset) {
        __Vdly__IntToFP__DOT__REG = 0U;
        __Vdly__IntToFP__DOT__REG_1 = 0U;
        __Vdly__FMA__DOT__mulPipe__DOT__REG = 0U;
        __Vdly__FMA__DOT__mulPipe__DOT__REG_1 = 0U;
        __Vdly__FMA__DOT__addPipe__DOT__REG = 0U;
        __Vdly__FMA__DOT__addPipe__DOT__REG_1 = 0U;
        __Vdly__FPToInt__DOT__REG = 0U;
        __Vdly__FPToInt__DOT__REG_1 = 0U;
        __Vdly__FPMV__DOT__REG = 0U;
        __Vdly__FPMV__DOT__REG_1 = 0U;
        __Vdly__FCMP__DOT__REG = 0U;
        __Vdly__FCMP__DOT__REG_1 = 0U;
        vlSelf->__PVT__FMA__DOT__mulFIFO__DOT__maybe_full = 0U;
        vlSelf->__PVT__FMA__DOT__addFIFO__DOT__maybe_full = 0U;
    } else {
        if ((1U & (~ ((~ (IData)(vlSelf->__PVT__IntToFP_io_out_ready)) 
                      & ((IData)(vlSelf->__PVT__IntToFP__DOT__REG) 
                         & (IData)(vlSelf->__PVT__IntToFP__DOT__REG_1)))))) {
            __Vdly__IntToFP__DOT__REG = vlSelf->__PVT__IntToFP_io_in_valid;
        }
        if ((1U & (~ ((~ (IData)(vlSelf->__PVT__IntToFP_io_out_ready)) 
                      & (IData)(vlSelf->__PVT__IntToFP__DOT__REG_1))))) {
            __Vdly__IntToFP__DOT__REG_1 = vlSelf->__PVT__IntToFP__DOT__REG;
        }
        if ((1U & (~ ((~ (IData)(vlSelf->__PVT__FMA__DOT__mulPipe_io_out_ready)) 
                      & ((IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__REG) 
                         & (IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__REG_1)))))) {
            __Vdly__FMA__DOT__mulPipe__DOT__REG = vlSelf->__PVT__FMA__DOT__mulPipe_io_in_valid;
        }
        if ((1U & (~ ((~ (IData)(vlSelf->__PVT__FMA__DOT__mulPipe_io_out_ready)) 
                      & (IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__REG_1))))) {
            __Vdly__FMA__DOT__mulPipe__DOT__REG_1 = vlSelf->__PVT__FMA__DOT__mulPipe__DOT__REG;
        }
        if ((1U & (~ ((~ (IData)(vlSelf->__PVT__FMA__DOT__addPipe_io_out_ready)) 
                      & ((IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__REG) 
                         & (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__REG_1)))))) {
            __Vdly__FMA__DOT__addPipe__DOT__REG = vlSelf->__PVT__FMA__DOT__addPipe_io_in_valid;
        }
        if ((1U & (~ ((~ (IData)(vlSelf->__PVT__FMA__DOT__addPipe_io_out_ready)) 
                      & (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__REG_1))))) {
            __Vdly__FMA__DOT__addPipe__DOT__REG_1 = vlSelf->__PVT__FMA__DOT__addPipe__DOT__REG;
        }
        if ((1U & (~ ((~ (IData)(vlSelf->__PVT__FPToInt_io_out_ready)) 
                      & ((IData)(vlSelf->__PVT__FPToInt__DOT__REG) 
                         & (IData)(vlSelf->__PVT__FPToInt__DOT__REG_1)))))) {
            __Vdly__FPToInt__DOT__REG = vlSelf->__PVT__FPToInt_io_in_valid;
        }
        if ((1U & (~ ((~ (IData)(vlSelf->__PVT__FPToInt_io_out_ready)) 
                      & (IData)(vlSelf->__PVT__FPToInt__DOT__REG_1))))) {
            __Vdly__FPToInt__DOT__REG_1 = vlSelf->__PVT__FPToInt__DOT__REG;
        }
        if ((1U & (~ ((~ (IData)(vlSelf->__PVT__FPMV_io_out_ready)) 
                      & ((IData)(vlSelf->__PVT__FPMV__DOT__REG) 
                         & (IData)(vlSelf->__PVT__FPMV__DOT__REG_1)))))) {
            __Vdly__FPMV__DOT__REG = vlSelf->__PVT__FPMV_io_in_valid;
        }
        if ((1U & (~ ((~ (IData)(vlSelf->__PVT__FPMV_io_out_ready)) 
                      & (IData)(vlSelf->__PVT__FPMV__DOT__REG_1))))) {
            __Vdly__FPMV__DOT__REG_1 = vlSelf->__PVT__FPMV__DOT__REG;
        }
        if ((1U & (~ ((~ (IData)(vlSelf->__PVT__FCMP_io_out_ready)) 
                      & ((IData)(vlSelf->__PVT__FCMP__DOT__REG) 
                         & (IData)(vlSelf->__PVT__FCMP__DOT__REG_1)))))) {
            __Vdly__FCMP__DOT__REG = vlSelf->__PVT__FCMP_io_in_valid;
        }
        if ((1U & (~ ((~ (IData)(vlSelf->__PVT__FCMP_io_out_ready)) 
                      & (IData)(vlSelf->__PVT__FCMP__DOT__REG_1))))) {
            __Vdly__FCMP__DOT__REG_1 = vlSelf->__PVT__FCMP__DOT__REG;
        }
        if (((IData)(vlSelf->__PVT__FMA__DOT__mulFIFO__DOT__ram_result_MPORT_en) 
             != (IData)(vlSelf->__PVT__FMA__DOT__mulFIFO__DOT__do_deq))) {
            vlSelf->__PVT__FMA__DOT__mulFIFO__DOT__maybe_full 
                = vlSelf->__PVT__FMA__DOT__mulFIFO__DOT__ram_result_MPORT_en;
        }
        if (((IData)(vlSelf->__PVT__FMA__DOT__addFIFO__DOT__ram_result_MPORT_en) 
             != (IData)(vlSelf->__PVT__FMA__DOT__addFIFO__DOT__do_deq))) {
            vlSelf->__PVT__FMA__DOT__addFIFO__DOT__maybe_full 
                = vlSelf->__PVT__FMA__DOT__addFIFO__DOT__ram_result_MPORT_en;
        }
    }
    if (vlSelf->__PVT__FMA__DOT__mulFIFO__DOT__ram_result_MPORT_en) {
        __Vdlyvval__FMA__DOT__mulFIFO__DOT__ram_result__v0 
            = ((IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3_io_in_r_special_case_valid)
                ? ((IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3_io_in_r_special_case_bits_nan)
                    ? 0x7fc00000U : ((IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3_io_in_r_special_case_bits_inf)
                                      ? (0x7f800000U 
                                         | ((IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3_io_in_r_prod_sign) 
                                            << 0x1fU))
                                      : ((IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3_io_in_r_prod_sign) 
                                         << 0x1fU)))
                : (((IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3_io_in_r_prod_sign) 
                    << 0x1fU) | ((0x7f800000U & (((IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__common_of)
                                                   ? 
                                                  ((IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__rmin)
                                                    ? 0xfeU
                                                    : 0xffU)
                                                   : 
                                                  ((IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__rounder_io_cout) 
                                                   + (IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__raw_in_exp))) 
                                                 << 0x17U)) 
                                 | (0x7fffffU & ((IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__common_of)
                                                  ? 
                                                 ((IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__rmin)
                                                   ? 0x7fffffU
                                                   : 0U)
                                                  : 
                                                 (((vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__sig_shifted[2U] 
                                                    << 0xeU) 
                                                   | (vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__sig_shifted[1U] 
                                                      >> 0x12U)) 
                                                  + (IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__rounder__DOT__r_up)))))));
        __Vdlyvset__FMA__DOT__mulFIFO__DOT__ram_result__v0 = 1U;
    }
    if (vlSelf->__PVT__FMA__DOT__addFIFO__DOT__ram_result_MPORT_en) {
        __Vdlyvval__FMA__DOT__addFIFO__DOT__ram_result__v0 
            = ((IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_special_case_valid)
                ? ((IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_special_case_bits_nan)
                    ? 0x7fc00000U : (0x7f800000U | 
                                     ((IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_special_case_bits_inf_sign) 
                                      << 0x1fU))) : 
               ((((IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_sel_far_path) 
                  & ((0xffU == (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_far_path_out_exp)) 
                     | (((IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2__DOT__far_path_rounder_io_cout) 
                         & (0xfeU == (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_far_path_out_exp))) 
                        | (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_far_path_mul_of)))) 
                 | ((~ (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_sel_far_path)) 
                    & (0xffU == (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2__DOT__near_path_exp_rounded))))
                 ? ((((IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_sel_far_path)
                       ? (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_far_path_out_sign)
                       : (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_near_path_out_sign)) 
                     << 0x1fU) | ((((IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2__DOT__rmin)
                                     ? 0xfeU : 0xffU) 
                                   << 0x17U) | ((IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2__DOT__rmin)
                                                 ? 0x7fffffU
                                                 : 0U)))
                 : ((IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_sel_far_path)
                     ? (((IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_far_path_out_sign) 
                         << 0x1fU) | ((0x7f800000U 
                                       & (((IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2__DOT__far_path_rounder_io_cout) 
                                           + (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_far_path_out_exp)) 
                                          << 0x17U)) 
                                      | (0x7fffffU 
                                         & ((vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_far_path_out_sig 
                                             >> 3U) 
                                            + (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2__DOT__far_path_rounder__DOT__r_up)))))
                     : (((((~ (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2__DOT__near_path_is_zero)) 
                           & (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_near_path_out_sign)) 
                          | ((2U == (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_rm)) 
                             & (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2__DOT__near_path_is_zero))) 
                         << 0x1fU) | (((IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2__DOT__near_path_exp_rounded) 
                                       << 0x17U) | 
                                      (0x7fffffU & 
                                       ((vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_near_path_out_sig 
                                         >> 3U) + (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2__DOT__near_path_rounder__DOT__r_up))))))));
        __Vdlyvset__FMA__DOT__addFIFO__DOT__ram_result__v0 = 1U;
    }
    if (vlSelf->__PVT__FMA__DOT__addPipe__DOT___s1_io_a_T_4) {
        vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1_io_b_inter_valid_r 
            = vlSelf->__PVT__FMA__DOT__addPipe__DOT__isFMA;
        vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1_io_b_inter_flags_r_isNaN 
            = ((IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__isFMA) 
               & (IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3_io_in_r_special_case_bits_nan));
        vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1_io_b_inter_flags_r_isInf 
            = ((IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__isFMA) 
               & ((~ (IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3_io_in_r_special_case_bits_nan)) 
                  & (IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3_io_in_r_special_case_bits_inf)));
    }
    if (vlSelf->__PVT__FMA__DOT__addPipe__DOT___s2_io_in_T_3) {
        if (vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT___near_path_out_T_2) {
            vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_near_path_sig_is_zero 
                = (1U & ((~ (IData)((0U != vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__near_path_mods_1__DOT__lza_ab_io_f))) 
                         & (~ ((IData)(1U) + (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__near_path_mods_1__DOT___a_minus_b_T_3)))));
            vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_near_path_out_exp 
                = (0xffU & (((IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__near_path_mods_1__DOT__exceed_lim)
                              ? (0U != (0x1ffffffffffffULL 
                                        & ((0x2000000000000ULL 
                                            >> (0x3fU 
                                                & (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__near_path_mods_1_io_in_a_exp))) 
                                           & (1ULL 
                                              + vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__near_path_mods_1__DOT___a_minus_b_T_3))))
                              : ((0U != (0x1ffffffffffffULL 
                                         & ((vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__near_path_mods_1__DOT__int_bit_mask 
                                             >> 1U) 
                                            & (1ULL 
                                               + vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__near_path_mods_1__DOT___a_minus_b_T_3)))) 
                                 | (0U != vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__near_path_mods_1__DOT___int_bit_predicted_T_1)))
                             ? (((IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__near_path_mods_1_io_in_a_exp) 
                                 - (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__near_path_mods_1__DOT__lzc_clz_io_out)) 
                                - (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__near_path_mods_1__DOT__lza_error))
                             : 0U));
            vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_near_path_out_sig 
                = ((0x7fffffeU & ((IData)((vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__near_path_mods_1__DOT__near_path_sig 
                                           >> 0x17U)) 
                                  << 1U)) | (0U != 
                                             (0x7fffffU 
                                              & (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__near_path_mods_1__DOT__near_path_sig))));
            vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_near_path_out_sign 
                = (1U & ((1U & (IData)((1ULL & ((1ULL 
                                                 + vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__near_path_mods_1__DOT___a_minus_b_T_3) 
                                                >> 0x31U))))
                          ? (IData)((vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1_io_a_r 
                                     >> 0x37U)) : (IData)(
                                                          (vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1_io_b_r 
                                                           >> 0x37U))));
        } else {
            vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_near_path_sig_is_zero 
                = (1U & ((~ (IData)((0U != vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__near_path_mods_0__DOT__lza_ab_io_f))) 
                         & (~ ((IData)(1U) + (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__near_path_mods_0__DOT___a_minus_b_T_3)))));
            vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_near_path_out_exp 
                = (0xffU & (((IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__near_path_mods_0__DOT__exceed_lim)
                              ? (0U != (0x1ffffffffffffULL 
                                        & ((0x2000000000000ULL 
                                            >> (0x3fU 
                                                & (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__near_path_mods_0_io_in_a_exp))) 
                                           & (1ULL 
                                              + vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__near_path_mods_0__DOT___a_minus_b_T_3))))
                              : ((0U != (0x1ffffffffffffULL 
                                         & ((vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__near_path_mods_0__DOT__int_bit_mask 
                                             >> 1U) 
                                            & (1ULL 
                                               + vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__near_path_mods_0__DOT___a_minus_b_T_3)))) 
                                 | (0U != vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__near_path_mods_0__DOT___int_bit_predicted_T_1)))
                             ? (((IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__near_path_mods_0_io_in_a_exp) 
                                 - (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__near_path_mods_0__DOT__lzc_clz_io_out)) 
                                - (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__near_path_mods_0__DOT__lza_error))
                             : 0U));
            vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_near_path_out_sig 
                = ((0x7fffffeU & ((IData)((vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__near_path_mods_0__DOT__near_path_sig 
                                           >> 0x17U)) 
                                  << 1U)) | (0U != 
                                             (0x7fffffU 
                                              & (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__near_path_mods_0__DOT__near_path_sig))));
            vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_near_path_out_sign 
                = (1U & ((1U & (IData)((1ULL & ((1ULL 
                                                 + vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__near_path_mods_0__DOT___a_minus_b_T_3) 
                                                >> 0x31U))))
                          ? (IData)((vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1_io_b_r 
                                     >> 0x37U)) : (IData)(
                                                          (vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1_io_a_r 
                                                           >> 0x37U))));
        }
        vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_far_path_out_exp 
            = (0xffU & ((((1U & (IData)((vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__far_path_mods_0__DOT__adder_result 
                                         >> 0x33U)))
                           ? ((IData)(1U) + (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__far_path_mods_0_io_in_a_exp))
                           : 0U) | ((1U == (3U & (IData)(
                                                         (vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__far_path_mods_0__DOT__adder_result 
                                                          >> 0x32U))))
                                     ? (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__far_path_mods_0_io_in_a_exp)
                                     : 0U)) | ((0U 
                                                == 
                                                (3U 
                                                 & (IData)(
                                                           (vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__far_path_mods_0__DOT__adder_result 
                                                            >> 0x32U))))
                                                ? ((IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__far_path_mods_0_io_in_a_exp) 
                                                   - (IData)(1U))
                                                : 0U)));
        vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_special_case_valid 
            = ((IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__special_path_hasNaN) 
               | ((IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__decode_a___05FisInf) 
                  | (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__b_isInf)));
        vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_special_case_bits_nan 
            = ((IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__special_path_hasNaN) 
               | ((IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__decode_a___05FisInf) 
                  & ((IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__b_isInf) 
                     & (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__far_path_mods_0_io_in_effSub))));
        vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_far_path_out_sig 
            = ((((1U & (IData)((vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__far_path_mods_0__DOT__adder_result 
                                >> 0x33U))) ? ((0x7fffffeU 
                                                & ((IData)(
                                                           (vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__far_path_mods_0__DOT__adder_result 
                                                            >> 0x1aU)) 
                                                   << 1U)) 
                                               | (0U 
                                                  != 
                                                  (0x3ffffffU 
                                                   & (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__far_path_mods_0__DOT__adder_result))))
                  : 0U) | (((1U == (3U & (IData)((vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__far_path_mods_0__DOT__adder_result 
                                                  >> 0x32U)))) 
                            | (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__far_path_mods_0_io_in_smallAdd))
                            ? ((0x7fffffeU & ((IData)(
                                                      (vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__far_path_mods_0__DOT__adder_result 
                                                       >> 0x19U)) 
                                              << 1U)) 
                               | (0U != (0x1ffffffU 
                                         & (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__far_path_mods_0__DOT__adder_result))))
                            : 0U)) | (((~ (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__far_path_mods_0_io_in_smallAdd)) 
                                       & (0ULL == (0xc000000000000ULL 
                                                   & vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__far_path_mods_0__DOT__adder_result)))
                                       ? ((0x7fffffeU 
                                           & ((IData)(
                                                      (vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__far_path_mods_0__DOT__adder_result 
                                                       >> 0x18U)) 
                                              << 1U)) 
                                          | (0U != 
                                             (0xffffffU 
                                              & (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__far_path_mods_0__DOT__adder_result))))
                                       : 0U));
        vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_rm 
            = vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1_io_rm_r;
        vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_sel_far_path 
            = (1U & ((~ (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__far_path_mods_0_io_in_effSub)) 
                     | ((1U < (0xffU & ((IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__need_swap)
                                         ? (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__exp_diff_b_a)
                                         : (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__exp_diff_a_b)))) 
                        | (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1_io_b_inter_flags_r_overflow))));
        vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_far_path_mul_of 
            = ((IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1_io_b_inter_flags_r_overflow) 
               | ((~ (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__far_path_mods_0_io_in_effSub)) 
                  & (0x7f800000000000ULL == (0x7f800000000000ULL 
                                             & vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1_io_b_r))));
        vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_special_case_bits_inf_sign 
            = (1U & ((IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__decode_a___05FisInf)
                      ? (IData)((vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1_io_a_r 
                                 >> 0x37U)) : (IData)(
                                                      (vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1_io_b_r 
                                                       >> 0x37U))));
        vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_far_path_out_sign 
            = (1U & ((IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__need_swap)
                      ? (IData)((vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1_io_b_r 
                                 >> 0x37U)) : (IData)(
                                                      (vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1_io_a_r 
                                                       >> 0x37U))));
    }
    if (vlSelf->__PVT__FMA__DOT__addPipe__DOT___s1_io_a_T_4) {
        vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1_io_rm_r 
            = vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s1_io_rm;
        vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1_io_b_inter_flags_r_overflow 
            = ((IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__isFMA) 
               & (0xffU < (IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__exp_pre_round)));
        vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1_io_b_r 
            = ((QData)((IData)((((IData)(vlSelf->__PVT__FMA__DOT__toAddArbiter_io_in_0_valid) 
                                 & (IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__toAdd_op_r_1))
                                 ? (((~ (vlSelf->__PVT__FMA__DOT__addPipe__DOT__srcB 
                                         >> 0x1fU)) 
                                     << 0x1fU) | (0x7fffffffU 
                                                  & vlSelf->__PVT__FMA__DOT__addPipe__DOT__srcB))
                                 : vlSelf->__PVT__FMA__DOT__addPipe__DOT__srcB))) 
               << 0x18U);
        vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1_io_a_r 
            = ((IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__isFMA)
                ? (((QData)((IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3_io_in_r_prod_sign)) 
                    << 0x37U) | (((QData)((IData)(((IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3_io_in_r_special_case_bits_hasZero)
                                                    ? 0U
                                                    : (IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__raw_in_exp)))) 
                                  << 0x2fU) | ((IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3_io_in_r_special_case_bits_hasZero)
                                                ? 0ULL
                                                : (0x7fffffffffffULL 
                                                   & ((((QData)((IData)(
                                                                        vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__sig_shifted[2U])) 
                                                        << 0x26U) 
                                                       | (((QData)((IData)(
                                                                           vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__sig_shifted[1U])) 
                                                           << 6U) 
                                                          | ((QData)((IData)(
                                                                             vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__sig_shifted[0U])) 
                                                             >> 0x1aU))) 
                                                      | (QData)((IData)(
                                                                        (0U 
                                                                         != 
                                                                         (0x3ffffffU 
                                                                          & vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__sig_shifted[0U])))))))))
                : ((QData)((IData)(((0U == (7U & ((IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0_io_in_bits_op) 
                                                  >> 3U)))
                                     ? vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_1_io_in_bits_a
                                     : 0U))) << 0x18U));
    }
    if (vlSelf->__PVT__FMA__DOT__mulPipe__DOT___s3_io_in_T_3) {
        vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3_io_in_r_early_overflow 
            = vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s2_io_in_r_early_overflow;
        vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3_io_in_r_rm 
            = vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s2_io_in_r_rm;
        vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3_io_in_r_exp_shifted 
            = vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s2_io_in_r_exp_shifted;
        vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3_io_in_r_may_be_subnormal 
            = vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s2_io_in_r_may_be_subnormal;
        vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3_io_in_r_shift_amt 
            = vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s2_io_in_r_shift_amt;
        vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3_io_in_r_prod 
            = (0xffffffffffffULL & ((QData)((IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__multiplier__DOT__io_result_r)) 
                                    * (QData)((IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__multiplier__DOT__io_result_r_1))));
        vlSelf->__PVT__FMA__DOT__mulPipe__DOT__toAdd_addAnother_r_1 
            = vlSelf->__PVT__FMA__DOT__mulPipe__DOT__toAdd_addAnother_r;
        vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3_io_in_r_special_case_valid 
            = vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s2_io_in_r_special_case_valid;
        vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3_io_in_r_special_case_bits_inf 
            = vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s2_io_in_r_special_case_bits_inf;
        vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3_io_in_r_special_case_bits_nan 
            = vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s2_io_in_r_special_case_bits_nan;
        vlSelf->__PVT__FMA__DOT__mulPipe__DOT__toAdd_op_r_1 
            = vlSelf->__PVT__FMA__DOT__mulPipe__DOT__toAdd_op_r;
        vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3_io_in_r_special_case_bits_hasZero 
            = vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s2_io_in_r_special_case_bits_hasZero;
        vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3_io_in_r_prod_sign 
            = vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s2_io_in_r_prod_sign;
    }
    if (vlSelf->__PVT__IntToFP__DOT___s2_isSingle_T_8) {
        vlSelf->__PVT__IntToFP__DOT__io_out_bits_result_r 
            = (((IData)(vlSelf->__PVT__IntToFP__DOT__r_sign) 
                << 0x1fU) | ((((IData)(vlSelf->__PVT__IntToFP__DOT__r_is_zero)
                                ? 0U : (0xffU & (((IData)(0xbeU) 
                                                  - (IData)(vlSelf->__PVT__IntToFP__DOT__r_lzc)) 
                                                 + 
                                                 ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_postnorm__DOT__rounder__DOT__r_up) 
                                                  & (0x7fffffU 
                                                     == 
                                                     (0x7fffffU 
                                                      & (IData)(
                                                                (vlSelf->__PVT__IntToFP__DOT__r_norm_int 
                                                                 >> 0x28U)))))))) 
                              << 0x17U) | (0x7fffffU 
                                           & ((IData)(
                                                      (vlSelf->__PVT__IntToFP__DOT__r_norm_int 
                                                       >> 0x28U)) 
                                              + (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_postnorm__DOT__rounder__DOT__r_up)))));
        vlSelf->__PVT__IntToFP__DOT__s2_isSingle = vlSelf->__PVT__IntToFP__DOT__s2_isSingle_r;
    }
    if (vlSelf->__PVT__IntToFP__DOT___s2_isSingle_T_4) {
        vlSelf->__PVT__IntToFP__DOT__r_1 = ((4U == 
                                             (7U & 
                                              ((IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0_io_in_bits_op) 
                                               >> 3U)))
                                             ? (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0_io_in_bits_rm)
                                             : 0U);
        vlSelf->__PVT__IntToFP__DOT__r_norm_int = (0x7fffffffffffffffULL 
                                                   & ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lzc_error)
                                                       ? 
                                                      (vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__in_shift_s1 
                                                       << 1U)
                                                       : vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__in_shift_s1));
        vlSelf->__PVT__IntToFP__DOT__r_lzc = (0x3fU 
                                              & ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lzc) 
                                                 + (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lzc_error)));
        vlSelf->__PVT__IntToFP__DOT__r_sign = vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__in_sign;
        vlSelf->__PVT__IntToFP__DOT__r_is_zero = (0ULL 
                                                  == vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__pos_lzc_clz_io_in);
        vlSelf->__PVT__IntToFP__DOT__s2_isSingle_r 
            = (1U & (~ (IData)(vlSelf->IntToFP__DOT____VdfgTmp_h0d28c158__0)));
    }
    if (vlSelf->__PVT__FPToInt__DOT___io_out_bits_fflags_T_3) {
        vlSelf->__PVT__FPToInt__DOT__io_out_bits_result_r_1 
            = (((((IData)(vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__raw_a_exp) 
                  > (0xffU & ((IData)(0x7fU) + ((2U 
                                                 & (IData)(vlSelf->__PVT__FPToInt__DOT__coreOp))
                                                 ? 0x3fU
                                                 : 0x1fU)))) 
                 | ((0x96U <= (IData)(vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__raw_a_exp)) 
                    & (((~ (IData)(vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__rpath_rounder_io_signIn)) 
                        & (IData)(vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__lpath_may_of)) 
                       | ((IData)(vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__lpath_may_of) 
                          & ((IData)(vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__rpath_rounder_io_signIn) 
                             & (0U != vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__fp_a_sig)))))) 
                | (((0x96U <= (IData)(vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__raw_a_exp)) 
                    & (IData)(vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__lpath_iv)) 
                   | ((0x96U > (IData)(vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__raw_a_exp)) 
                      & ((IData)(vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__lpath_iv) 
                         & (0U != vlSelf->__VdfgTmp_h22dfd192__0)))))
                ? ((1U & ((~ (IData)(vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__rpath_rounder_io_signIn)) 
                          | ((0xffU == (IData)(vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__fp_a_exp)) 
                             & (0U != vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__fp_a_sig))))
                    ? ((2U & (IData)(vlSelf->__PVT__FPToInt__DOT__coreOp))
                        ? (0x7fffffffffffffffULL | 
                           ((QData)((IData)((1U & (~ (IData)(vlSelf->__PVT__FPToInt__DOT__coreOp))))) 
                            << 0x3fU)) : (0x7fffffffULL 
                                          | (0x80000000ULL 
                                             & ((QData)((IData)(
                                                                (1U 
                                                                 & (~ (IData)(vlSelf->__PVT__FPToInt__DOT__coreOp))))) 
                                                << 0x1fU))))
                    : ((2U & (IData)(vlSelf->__PVT__FPToInt__DOT__coreOp))
                        ? ((QData)((IData)((1U & (IData)(vlSelf->__PVT__FPToInt__DOT__coreOp)))) 
                           << 0x3fU) : (0x80000000ULL 
                                        & ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(vlSelf->__PVT__FPToInt__DOT__coreOp)))) 
                                           << 0x1fU))))
                : ((((IData)(vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__rpath_rounder_io_signIn) 
                     & (IData)(vlSelf->__PVT__FPToInt__DOT__coreOp))
                     ? (- vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__int_abs)
                     : vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__int_abs) 
                   & (0xffffffffULL | ((QData)((IData)(
                                                       ((2U 
                                                         & (IData)(vlSelf->__PVT__FPToInt__DOT__coreOp))
                                                         ? 0xffffffffU
                                                         : 0U))) 
                                       << 0x20U))));
        vlSelf->__PVT__FPToInt__DOT__io_out_bits_result_r 
            = vlSelf->__PVT__FPToInt__DOT__isSingle;
    }
    if (vlSelf->__PVT__FPToInt__DOT___isSingle_T_7) {
        if ((3U == (7U & ((IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0_io_in_bits_op) 
                          >> 3U)))) {
            vlSelf->__PVT__FPToInt__DOT__rm = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0_io_in_bits_rm;
            vlSelf->__PVT__FPToInt__DOT__coreOp = (3U 
                                                   & (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0_io_in_bits_op));
        } else {
            vlSelf->__PVT__FPToInt__DOT__rm = 0U;
            vlSelf->__PVT__FPToInt__DOT__coreOp = 0U;
        }
        vlSelf->__PVT__FPToInt__DOT__src = (QData)((IData)(
                                                           ((3U 
                                                             == 
                                                             (7U 
                                                              & ((IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0_io_in_bits_op) 
                                                                 >> 3U)))
                                                             ? vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_1_io_in_bits_a
                                                             : 0U)));
        vlSelf->__PVT__FPToInt__DOT__isSingle = (1U 
                                                 & (~ (IData)(
                                                              (0x1cU 
                                                               == 
                                                               (0x3cU 
                                                                & (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0_io_in_bits_op))))));
    }
    if (((~ ((~ (IData)(vlSelf->__PVT__FPMV_io_out_ready)) 
             & (IData)(vlSelf->__PVT__FPMV__DOT__REG_1))) 
         & (IData)(vlSelf->__PVT__FPMV__DOT__REG))) {
        vlSelf->__PVT__FPMV__DOT__io_out_bits_result_r 
            = ((2U == (IData)(vlSelf->__PVT__FPMV__DOT__s1_op))
                ? (QData)((IData)(((((IData)(vlSelf->__PVT__FPMV__DOT__classifyOut_decode___05FisNaN) 
                                     & (IData)((vlSelf->__PVT__FPMV__DOT__a 
                                                >> 0x16U))) 
                                    << 9U) | ((((~ (IData)(
                                                           (vlSelf->__PVT__FPMV__DOT__a 
                                                            >> 0x16U))) 
                                                & (IData)(vlSelf->__PVT__FPMV__DOT__classifyOut_decode___05FisNaN)) 
                                               << 8U) 
                                              | ((((~ (IData)(
                                                              (vlSelf->__PVT__FPMV__DOT__a 
                                                               >> 0x1fU))) 
                                                   & (IData)(vlSelf->__PVT__FPMV__DOT__classifyOut_decode___05FisInf)) 
                                                  << 7U) 
                                                 | ((((~ (IData)(
                                                                 (vlSelf->__PVT__FPMV__DOT__a 
                                                                  >> 0x1fU))) 
                                                      & (IData)(vlSelf->__PVT__FPMV__DOT__classifyOut_isNormal)) 
                                                     << 6U) 
                                                    | ((((~ (IData)(
                                                                    (vlSelf->__PVT__FPMV__DOT__a 
                                                                     >> 0x1fU))) 
                                                         & (IData)(vlSelf->__PVT__FPMV__DOT__classifyOut_decode___05FisSubnormal)) 
                                                        << 5U) 
                                                       | ((((~ (IData)(
                                                                       (vlSelf->__PVT__FPMV__DOT__a 
                                                                        >> 0x1fU))) 
                                                            & (IData)(vlSelf->__PVT__FPMV__DOT__classifyOut_decode___05FisZero)) 
                                                           << 4U) 
                                                          | ((((IData)(vlSelf->__PVT__FPMV__DOT__classifyOut_decode___05FisZero) 
                                                               & (IData)(
                                                                         (vlSelf->__PVT__FPMV__DOT__a 
                                                                          >> 0x1fU))) 
                                                              << 3U) 
                                                             | ((((IData)(vlSelf->__PVT__FPMV__DOT__classifyOut_decode___05FisSubnormal) 
                                                                  & (IData)(
                                                                            (vlSelf->__PVT__FPMV__DOT__a 
                                                                             >> 0x1fU))) 
                                                                 << 2U) 
                                                                | ((((IData)(vlSelf->__PVT__FPMV__DOT__classifyOut_isNormal) 
                                                                     & (IData)(
                                                                               (vlSelf->__PVT__FPMV__DOT__a 
                                                                                >> 0x1fU))) 
                                                                    << 1U) 
                                                                   | ((IData)(vlSelf->__PVT__FPMV__DOT__classifyOut_decode___05FisInf) 
                                                                      & (IData)(
                                                                                (vlSelf->__PVT__FPMV__DOT__a 
                                                                                >> 0x1fU))))))))))))))
                : vlSelf->__PVT__FPMV__DOT__a);
    }
    if (((~ ((~ (IData)(vlSelf->__PVT__FCMP_io_out_ready)) 
             & (IData)(vlSelf->__PVT__FCMP__DOT__REG_1))) 
         & (IData)(vlSelf->__PVT__FCMP__DOT__REG))) {
        vlSelf->__PVT__FCMP__DOT__io_out_bits_result_r 
            = ((0x10U & (IData)(vlSelf->__PVT__FCMP__DOT__fflags))
                ? 0U : ((8U == (8U | (IData)(vlSelf->__PVT__FCMP__DOT__op)))
                         ? ((IData)(vlSelf->__PVT__FCMP__DOT__lt)
                             ? vlSelf->__PVT__FCMP__DOT__a
                             : vlSelf->__PVT__FCMP__DOT__b)
                         : ((9U == (8U | (IData)(vlSelf->__PVT__FCMP__DOT__op)))
                             ? ((IData)(vlSelf->__PVT__FCMP__DOT__lt)
                                 ? vlSelf->__PVT__FCMP__DOT__b
                                 : vlSelf->__PVT__FCMP__DOT__a)
                             : ((3U == (IData)(vlSelf->__PVT__FCMP__DOT__op))
                                 ? (IData)(vlSelf->__PVT__FCMP__DOT__lt)
                                 : ((2U == (IData)(vlSelf->__PVT__FCMP__DOT__op))
                                     ? (IData)(vlSelf->__PVT__FCMP__DOT__le)
                                     : ((5U == (IData)(vlSelf->__PVT__FCMP__DOT__op))
                                         ? (1U & (~ (IData)(vlSelf->__PVT__FCMP__DOT__eq)))
                                         : ((4U == (IData)(vlSelf->__PVT__FCMP__DOT__op))
                                             ? (IData)(vlSelf->__PVT__FCMP__DOT__eq)
                                             : 0U)))))));
    }
    vlSelf->__PVT__IntToFP__DOT__REG = __Vdly__IntToFP__DOT__REG;
    vlSelf->__PVT__IntToFP__DOT__REG_1 = __Vdly__IntToFP__DOT__REG_1;
    vlSelf->__PVT__FMA__DOT__mulPipe__DOT__REG = __Vdly__FMA__DOT__mulPipe__DOT__REG;
    vlSelf->__PVT__FMA__DOT__mulPipe__DOT__REG_1 = __Vdly__FMA__DOT__mulPipe__DOT__REG_1;
    vlSelf->__PVT__FMA__DOT__addPipe__DOT__REG = __Vdly__FMA__DOT__addPipe__DOT__REG;
    vlSelf->__PVT__FMA__DOT__addPipe__DOT__REG_1 = __Vdly__FMA__DOT__addPipe__DOT__REG_1;
    vlSelf->__PVT__FPToInt__DOT__REG = __Vdly__FPToInt__DOT__REG;
    vlSelf->__PVT__FPToInt__DOT__REG_1 = __Vdly__FPToInt__DOT__REG_1;
    if (__Vdlyvset__FMA__DOT__mulFIFO__DOT__ram_result__v0) {
        vlSelf->__PVT__FMA__DOT__mulFIFO__DOT__ram_result[0U] 
            = __Vdlyvval__FMA__DOT__mulFIFO__DOT__ram_result__v0;
    }
    if (__Vdlyvset__FMA__DOT__addFIFO__DOT__ram_result__v0) {
        vlSelf->__PVT__FMA__DOT__addFIFO__DOT__ram_result[0U] 
            = __Vdlyvval__FMA__DOT__addFIFO__DOT__ram_result__v0;
    }
    vlSelf->__PVT__FPMV__DOT__REG = __Vdly__FPMV__DOT__REG;
    vlSelf->__PVT__FPMV__DOT__REG_1 = __Vdly__FPMV__DOT__REG_1;
    vlSelf->__PVT__FCMP__DOT__REG = __Vdly__FCMP__DOT__REG;
    vlSelf->__PVT__FCMP__DOT__REG_1 = __Vdly__FCMP__DOT__REG_1;
    if (vlSelf->__PVT__FMA__DOT__mulPipe__DOT__multiplier_io_regEnables_0) {
        vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s2_io_in_r_early_overflow 
            = (0x17dU < (IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s1__DOT__exp_sum));
        vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s2_io_in_r_rm 
            = vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s1_io_rm;
        vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s2_io_in_r_exp_shifted 
            = (0x1ffU & (((IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s1__DOT__exp_sum) 
                          - (IData)(0x64U)) - (IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s1__DOT__shift_amt)));
        vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s2_io_in_r_may_be_subnormal 
            = (1U & ((IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s1__DOT__exceed_lim) 
                     | (1U & (((IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s1__DOT__exp_sum) 
                               - (IData)(0x65U)) >> 9U))));
        vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s2_io_in_r_shift_amt 
            = vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s1__DOT__shift_amt;
        vlSelf->__PVT__FMA__DOT__mulPipe__DOT__multiplier__DOT__io_result_r_1 
            = vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s1__DOT__raw_b_sig;
        vlSelf->__PVT__FMA__DOT__mulPipe__DOT__multiplier__DOT__io_result_r 
            = vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s1__DOT__raw_a_sig;
        vlSelf->__PVT__FMA__DOT__mulPipe__DOT__toAdd_addAnother_r 
            = ((0U == (7U & ((IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0_io_in_bits_op) 
                             >> 3U))) ? ((IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.pipe__DOT__fpu__DOT____VdfgTmp_hd90b9525__0)
                                          ? vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__pipe__DOT__exe_data__DOT__ram_in2_1
                                         [0U] : vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__pipe__DOT__exe_data__DOT__ram_in3_1
                                         [0U]) : 0U);
        vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s2_io_in_r_special_case_valid 
            = ((IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s1__DOT__hasZero) 
               | ((IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s1__DOT__hasNaN) 
                  | (IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s1__DOT__hasInf)));
        vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s2_io_in_r_special_case_bits_inf 
            = vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s1__DOT__hasInf;
        vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s2_io_in_r_special_case_bits_nan 
            = ((IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s1__DOT__hasNaN) 
               | ((IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s1__DOT__hasZero) 
                  & (IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s1__DOT__hasInf)));
        vlSelf->__PVT__FMA__DOT__mulPipe__DOT__toAdd_op_r 
            = vlSelf->__PVT__FMA__DOT__mulPipe_io_in_bits_op;
        vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s2_io_in_r_special_case_bits_hasZero 
            = vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s1__DOT__hasZero;
        vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s2_io_in_r_prod_sign 
            = (1U & ((IData)(((0U == (0x38U & (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0_io_in_bits_op))) 
                              & (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_1_io_in_bits_a 
                                 >> 0x1fU))) ^ (vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s1_io_b 
                                                >> 0x1fU)));
    }
    VL_EXTEND_WQ(74,48, __Vtemp_hd69ef506__0, vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3_io_in_r_prod);
    VL_SHIFTL_WWI(74,74,9, __Vtemp_h2d568758__0, __Vtemp_hd69ef506__0, (IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3_io_in_r_shift_amt));
    vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__sig_shifted_raw[0U] 
        = __Vtemp_h2d568758__0[0U];
    vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__sig_shifted_raw[1U] 
        = __Vtemp_h2d568758__0[1U];
    vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__sig_shifted_raw[2U] 
        = (0x3ffU & __Vtemp_h2d568758__0[2U]);
    VL_EXTEND_WQ(585,48, __Vtemp_hd7be74e6__0, vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3_io_in_r_prod);
    VL_SHIFTL_WWI(585,585,9, __Vtemp_h2ce4aade__0, __Vtemp_hd7be74e6__0, (IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3_io_in_r_shift_amt));
    __PVT__FMA__DOT__mulPipe__DOT__s3__DOT___sig_shifted_raw_T[0U] 
        = (VVentus__ConstPool__CONST_h7b110aeb_0[0U] 
           & __Vtemp_h2ce4aade__0[0U]);
    __PVT__FMA__DOT__mulPipe__DOT__s3__DOT___sig_shifted_raw_T[1U] 
        = (VVentus__ConstPool__CONST_h7b110aeb_0[1U] 
           & __Vtemp_h2ce4aade__0[1U]);
    __PVT__FMA__DOT__mulPipe__DOT__s3__DOT___sig_shifted_raw_T[2U] 
        = (VVentus__ConstPool__CONST_h7b110aeb_0[2U] 
           & __Vtemp_h2ce4aade__0[2U]);
    __PVT__FMA__DOT__mulPipe__DOT__s3__DOT___sig_shifted_raw_T[3U] 
        = (VVentus__ConstPool__CONST_h7b110aeb_0[3U] 
           & __Vtemp_h2ce4aade__0[3U]);
    __PVT__FMA__DOT__mulPipe__DOT__s3__DOT___sig_shifted_raw_T[4U] 
        = (VVentus__ConstPool__CONST_h7b110aeb_0[4U] 
           & __Vtemp_h2ce4aade__0[4U]);
    __PVT__FMA__DOT__mulPipe__DOT__s3__DOT___sig_shifted_raw_T[5U] 
        = (VVentus__ConstPool__CONST_h7b110aeb_0[5U] 
           & __Vtemp_h2ce4aade__0[5U]);
    __PVT__FMA__DOT__mulPipe__DOT__s3__DOT___sig_shifted_raw_T[6U] 
        = (VVentus__ConstPool__CONST_h7b110aeb_0[6U] 
           & __Vtemp_h2ce4aade__0[6U]);
    __PVT__FMA__DOT__mulPipe__DOT__s3__DOT___sig_shifted_raw_T[7U] 
        = (VVentus__ConstPool__CONST_h7b110aeb_0[7U] 
           & __Vtemp_h2ce4aade__0[7U]);
    __PVT__FMA__DOT__mulPipe__DOT__s3__DOT___sig_shifted_raw_T[8U] 
        = (VVentus__ConstPool__CONST_h7b110aeb_0[8U] 
           & __Vtemp_h2ce4aade__0[8U]);
    __PVT__FMA__DOT__mulPipe__DOT__s3__DOT___sig_shifted_raw_T[9U] 
        = (VVentus__ConstPool__CONST_h7b110aeb_0[9U] 
           & __Vtemp_h2ce4aade__0[9U]);
    __PVT__FMA__DOT__mulPipe__DOT__s3__DOT___sig_shifted_raw_T[0xaU] 
        = (VVentus__ConstPool__CONST_h7b110aeb_0[0xaU] 
           & __Vtemp_h2ce4aade__0[0xaU]);
    __PVT__FMA__DOT__mulPipe__DOT__s3__DOT___sig_shifted_raw_T[0xbU] 
        = (VVentus__ConstPool__CONST_h7b110aeb_0[0xbU] 
           & __Vtemp_h2ce4aade__0[0xbU]);
    __PVT__FMA__DOT__mulPipe__DOT__s3__DOT___sig_shifted_raw_T[0xcU] 
        = (VVentus__ConstPool__CONST_h7b110aeb_0[0xcU] 
           & __Vtemp_h2ce4aade__0[0xcU]);
    __PVT__FMA__DOT__mulPipe__DOT__s3__DOT___sig_shifted_raw_T[0xdU] 
        = (VVentus__ConstPool__CONST_h7b110aeb_0[0xdU] 
           & __Vtemp_h2ce4aade__0[0xdU]);
    __PVT__FMA__DOT__mulPipe__DOT__s3__DOT___sig_shifted_raw_T[0xeU] 
        = (VVentus__ConstPool__CONST_h7b110aeb_0[0xeU] 
           & __Vtemp_h2ce4aade__0[0xeU]);
    __PVT__FMA__DOT__mulPipe__DOT__s3__DOT___sig_shifted_raw_T[0xfU] 
        = (VVentus__ConstPool__CONST_h7b110aeb_0[0xfU] 
           & __Vtemp_h2ce4aade__0[0xfU]);
    __PVT__FMA__DOT__mulPipe__DOT__s3__DOT___sig_shifted_raw_T[0x10U] 
        = (VVentus__ConstPool__CONST_h7b110aeb_0[0x10U] 
           & __Vtemp_h2ce4aade__0[0x10U]);
    __PVT__FMA__DOT__mulPipe__DOT__s3__DOT___sig_shifted_raw_T[0x11U] 
        = (VVentus__ConstPool__CONST_h7b110aeb_0[0x11U] 
           & __Vtemp_h2ce4aade__0[0x11U]);
    __PVT__FMA__DOT__mulPipe__DOT__s3__DOT___sig_shifted_raw_T[0x12U] 
        = (VVentus__ConstPool__CONST_h7b110aeb_0[0x12U] 
           & __Vtemp_h2ce4aade__0[0x12U]);
    vlSelf->__PVT__FMA__DOT__toOutArbiter_io_out_valid 
        = ((IData)(vlSelf->__PVT__FMA__DOT__addFIFO__DOT__maybe_full) 
           | (IData)(vlSelf->__PVT__FMA__DOT__mulFIFO__DOT__maybe_full));
    vlSelf->__PVT__FMA__DOT__addFIFO__DOT__do_deq = 
        ((IData)(vlSelf->__PVT__FMA__DOT__addFIFO__DOT__maybe_full) 
         & (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addFIFO_io_deq_ready));
    vlSelf->__PVT__FMA__DOT__mulFIFO_io_deq_ready = 
        ((~ (IData)(vlSelf->__PVT__FMA__DOT__addFIFO__DOT__maybe_full)) 
         & (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addFIFO_io_deq_ready));
    vlSelf->__PVT__FMA__DOT__addPipe_io_out_ready = 
        (1U & ((~ (IData)(vlSelf->__PVT__FMA__DOT__addFIFO__DOT__maybe_full)) 
               | (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addFIFO_io_deq_ready)));
    vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2__DOT__near_path_is_zero 
        = ((0U == (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_near_path_out_exp)) 
           & (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_near_path_sig_is_zero));
    if (vlSelf->__PVT__FPMV__DOT___a_T_8) {
        vlSelf->__PVT__FPMV__DOT__s1_op = vlSelf->__PVT__FPMV_io_in_bits_op;
        vlSelf->__PVT__FPMV__DOT__a = ((2U == (IData)(vlSelf->__PVT__FPMV_io_in_bits_op))
                                        ? (QData)((IData)(vlSelf->__PVT__FPMV_io_in_bits_a))
                                        : (((QData)((IData)(
                                                            ((4U 
                                                              == (IData)(vlSelf->__PVT__FPMV_io_in_bits_op))
                                                              ? 
                                                             ((IData)(
                                                                      ((0x10U 
                                                                        == 
                                                                        (0x38U 
                                                                         & (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0_io_in_bits_op))) 
                                                                       & (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_1_io_in_bits_a 
                                                                          >> 0x1fU))) 
                                                              ^ (IData)(vlSelf->FPMV__DOT____VdfgTmp_h8faae4b3__0))
                                                              : 
                                                             ((5U 
                                                               == (IData)(vlSelf->__PVT__FPMV_io_in_bits_op))
                                                               ? 
                                                              (1U 
                                                               & (~ (IData)(vlSelf->FPMV__DOT____VdfgTmp_h8faae4b3__0)))
                                                               : 
                                                              ((6U 
                                                                == (IData)(vlSelf->__PVT__FPMV_io_in_bits_op))
                                                                ? 
                                                               (((2U 
                                                                  == 
                                                                  (7U 
                                                                   & ((IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0_io_in_bits_op) 
                                                                      >> 3U)))
                                                                  ? vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_1_io_in_bits_b
                                                                  : 0U) 
                                                                >> 0x1fU)
                                                                : vlSelf->__PVT__FPMV_io_in_bits_a))))) 
                                            << 0x1fU) 
                                           | (QData)((IData)(
                                                             ((2U 
                                                               == 
                                                               (7U 
                                                                & ((IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0_io_in_bits_op) 
                                                                   >> 3U)))
                                                               ? 
                                                              (0x7fffffffU 
                                                               & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_1_io_in_bits_a)
                                                               : 0U)))));
    }
    if (vlSelf->__PVT__FCMP__DOT___eq_T_4) {
        vlSelf->__PVT__FCMP__DOT__a = vlSelf->__PVT__FCMP__DOT__FCMPCore_io_a;
        vlSelf->__PVT__FCMP__DOT__b = vlSelf->__PVT__FCMP__DOT__FCMPCore_io_b;
        vlSelf->__PVT__FCMP__DOT__eq = ((~ (IData)(vlSelf->__PVT__FCMP__DOT__FCMPCore__DOT__hasNaN)) 
                                        & ((0U == (IData)(vlSelf->__PVT__FCMP__DOT__FCMPCore__DOT__a_minus_b)) 
                                           | (IData)(vlSelf->__PVT__FCMP__DOT__FCMPCore__DOT__bothZero)));
        vlSelf->__PVT__FCMP__DOT__lt = ((~ (IData)(vlSelf->__PVT__FCMP__DOT__FCMPCore__DOT__hasNaN)) 
                                        & ((IData)(vlSelf->__PVT__FCMP__DOT__FCMPCore__DOT__same_sign)
                                            ? ((0U 
                                                != (IData)(vlSelf->__PVT__FCMP__DOT__FCMPCore__DOT__a_minus_b)) 
                                               & (IData)(vlSelf->__PVT__FCMP__DOT__FCMPCore__DOT__uint_less))
                                            : ((~ (IData)(vlSelf->__PVT__FCMP__DOT__FCMPCore__DOT__bothZero)) 
                                               & (IData)(vlSelf->__PVT__FCMP__DOT__FCMPCore__DOT__fp_a_sign))));
        vlSelf->__PVT__FCMP__DOT__le = ((~ (IData)(vlSelf->__PVT__FCMP__DOT__FCMPCore__DOT__hasNaN)) 
                                        & ((IData)(vlSelf->__PVT__FCMP__DOT__FCMPCore__DOT__same_sign)
                                            ? ((IData)(vlSelf->__PVT__FCMP__DOT__FCMPCore__DOT__uint_less) 
                                               | (0U 
                                                  == (IData)(vlSelf->__PVT__FCMP__DOT__FCMPCore__DOT__a_minus_b)))
                                            : ((IData)(vlSelf->__PVT__FCMP__DOT__FCMPCore__DOT__fp_a_sign) 
                                               | (IData)(vlSelf->__PVT__FCMP__DOT__FCMPCore__DOT__bothZero))));
        vlSelf->__PVT__FCMP__DOT__op = ((1U == (7U 
                                                & ((IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0_io_in_bits_op) 
                                                   >> 3U)))
                                         ? (7U & (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0_io_in_bits_op))
                                         : 0U);
        vlSelf->__PVT__FCMP__DOT__fflags = ((((~ (IData)(
                                                         ((8U 
                                                           == 
                                                           (0x38U 
                                                            & (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0_io_in_bits_op))) 
                                                          & (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_1_io_in_bits_a 
                                                             >> 0x16U)))) 
                                              & (IData)(vlSelf->__PVT__FCMP__DOT__FCMPCore__DOT__decode_a___05FisNaN)) 
                                             | ((~ (IData)(
                                                           ((8U 
                                                             == 
                                                             (0x38U 
                                                              & (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0_io_in_bits_op))) 
                                                            & (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_1_io_in_bits_b 
                                                               >> 0x16U)))) 
                                                & (IData)(vlSelf->__PVT__FCMP__DOT__FCMPCore__DOT__decode_b___05FisNaN))) 
                                            << 4U);
    }
    vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__exp_is_subnormal 
        = ((~ (__PVT__FMA__DOT__mulPipe__DOT__s3__DOT___sig_shifted_raw_T[2U] 
               >> 9U)) & (IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3_io_in_r_may_be_subnormal));
    vlSelf->outArbiter__DOT____VdfgTmp_h245e14da__0 
        = ((IData)(vlSelf->__PVT__FMA__DOT__toOutArbiter_io_out_valid) 
           | (IData)(vlSelf->__PVT__FCMP__DOT__REG_1));
    vlSelf->__PVT__FCMP_io_out_ready = ((~ (IData)(vlSelf->__PVT__FMA__DOT__toOutArbiter_io_out_valid)) 
                                        & (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addFIFO_io_deq_ready));
    vlSelf->__PVT__FMA__DOT__mulFIFO__DOT__do_deq = 
        ((IData)(vlSelf->__PVT__FMA__DOT__mulFIFO_io_deq_ready) 
         & (IData)(vlSelf->__PVT__FMA__DOT__mulFIFO__DOT__maybe_full));
    vlSelf->__PVT__FMA__DOT__mulFIFO_io_enq_ready = 
        (1U & ((~ (IData)(vlSelf->__PVT__FMA__DOT__mulFIFO__DOT__maybe_full)) 
               | (IData)(vlSelf->__PVT__FMA__DOT__mulFIFO_io_deq_ready)));
    vlSelf->__PVT__FMA__DOT__addFIFO__DOT__ram_result_MPORT_en 
        = ((IData)(vlSelf->__PVT__FMA__DOT__addPipe_io_out_ready) 
           & (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__REG_1));
    vlSelf->__PVT__FMA__DOT__addPipe__DOT___s2_io_in_T_3 
        = ((~ ((~ (IData)(vlSelf->__PVT__FMA__DOT__addPipe_io_out_ready)) 
               & (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__REG_1))) 
           & (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__REG));
    vlSelf->__PVT__FMA__DOT__addPipe__DOT___T_2 = (
                                                   (~ (IData)(vlSelf->__PVT__FMA__DOT__addPipe_io_out_ready)) 
                                                   & ((IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__REG) 
                                                      & (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__REG_1)));
    vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2__DOT__far_path_tininess_rounder__DOT__rounder__DOT__inexact 
        = (IData)((0U != (3U & vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_far_path_out_sig)));
    vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2__DOT__far_path_rounder__DOT__inexact 
        = (IData)((0U != (7U & vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_far_path_out_sig)));
    vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2__DOT__near_path_tininess_rounder__DOT__rounder__DOT__inexact 
        = (IData)((0U != (3U & vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_near_path_out_sig)));
    vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2__DOT__near_path_rounder__DOT__inexact 
        = (IData)((0U != (7U & vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_near_path_out_sig)));
    vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2__DOT__rmin 
        = ((1U == (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_rm)) 
           | (((~ (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_far_path_out_sign)) 
               & (2U == (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_rm))) 
              | ((3U == (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_rm)) 
                 & (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_far_path_out_sign))));
    vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__no_extra_shift 
        = (1U & ((__PVT__FMA__DOT__mulPipe__DOT__s3__DOT___sig_shifted_raw_T[2U] 
                  >> 9U) | (IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__exp_is_subnormal)));
    vlSelf->outArbiter__DOT____VdfgTmp_h5724d08f__0 
        = ((IData)(vlSelf->outArbiter__DOT____VdfgTmp_h245e14da__0) 
           | (IData)(vlSelf->__PVT__FPMV__DOT__REG_1));
    vlSelf->__PVT__FPMV_io_out_ready = ((~ (IData)(vlSelf->outArbiter__DOT____VdfgTmp_h245e14da__0)) 
                                        & (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addFIFO_io_deq_ready));
    vlSelf->__PVT__IntToFP__DOT__IntToFP_postnorm__DOT__rounder__DOT__inexact 
        = (IData)((0ULL != (0xffffffffffULL & vlSelf->__PVT__IntToFP__DOT__r_norm_int)));
    if (vlSelf->__PVT__FPToInt__DOT__isSingle) {
        vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__rpath_rounder_io_signIn 
            = (1U & (IData)((vlSelf->__PVT__FPToInt__DOT__src 
                             >> 0x1fU)));
        vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__fp_a_sig 
            = (0x7fffffU & (IData)(vlSelf->__PVT__FPToInt__DOT__src));
        vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__fp_a_exp 
            = (0xffU & (IData)((vlSelf->__PVT__FPToInt__DOT__src 
                                >> 0x17U)));
    } else {
        vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__rpath_rounder_io_signIn = 0U;
        vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__fp_a_sig = 0U;
        vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__fp_a_exp = 0U;
    }
    vlSelf->__PVT__FPMV__DOT__classifyOut_decode___05FisSubnormal 
        = ((~ (IData)((0U != (0xffU & (IData)((vlSelf->__PVT__FPMV__DOT__a 
                                               >> 0x17U)))))) 
           & (0U != (0x7fffffU & (IData)(vlSelf->__PVT__FPMV__DOT__a))));
    vlSelf->__PVT__FPMV__DOT__classifyOut_decode___05FisInf 
        = (IData)(((0x7f800000ULL == (0x7f800000ULL 
                                      & vlSelf->__PVT__FPMV__DOT__a)) 
                   & (~ (IData)((0U != (0x7fffffU & (IData)(vlSelf->__PVT__FPMV__DOT__a)))))));
    vlSelf->__PVT__FPMV__DOT__classifyOut_decode___05FisZero 
        = (1U & ((~ (IData)((0U != (0xffU & (IData)(
                                                    (vlSelf->__PVT__FPMV__DOT__a 
                                                     >> 0x17U)))))) 
                 & (~ (IData)((0U != (0x7fffffU & (IData)(vlSelf->__PVT__FPMV__DOT__a)))))));
    vlSelf->__PVT__FPMV__DOT__classifyOut_decode___05FisNaN 
        = (IData)(((0x7f800000ULL == (0x7f800000ULL 
                                      & vlSelf->__PVT__FPMV__DOT__a)) 
                   & (0U != (0x7fffffU & (IData)(vlSelf->__PVT__FPMV__DOT__a)))));
    vlSelf->__PVT__FPMV__DOT__classifyOut_isNormal 
        = ((~ (IData)((0xffU == (0xffU & (IData)((vlSelf->__PVT__FPMV__DOT__a 
                                                  >> 0x17U)))))) 
           & (0U != (0xffU & (IData)((vlSelf->__PVT__FPMV__DOT__a 
                                      >> 0x17U)))));
    if ((4U == (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_rm))) {
        vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2__DOT__far_path_rounder__DOT__r_up 
            = (1U & (vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_far_path_out_sig 
                     >> 2U));
        vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2__DOT__near_path_rounder__DOT__r_up 
            = (1U & (vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_near_path_out_sig 
                     >> 2U));
    } else if ((2U == (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_rm))) {
        vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2__DOT__far_path_rounder__DOT__r_up 
            = (1U & ((IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2__DOT__far_path_rounder__DOT__inexact) 
                     & (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_far_path_out_sign)));
        vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2__DOT__near_path_rounder__DOT__r_up 
            = (1U & ((IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2__DOT__near_path_rounder__DOT__inexact) 
                     & (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_near_path_out_sign)));
    } else if ((3U == (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_rm))) {
        vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2__DOT__far_path_rounder__DOT__r_up 
            = (1U & ((~ (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_far_path_out_sign)) 
                     & (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2__DOT__far_path_rounder__DOT__inexact)));
        vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2__DOT__near_path_rounder__DOT__r_up 
            = (1U & ((~ (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_near_path_out_sign)) 
                     & (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2__DOT__near_path_rounder__DOT__inexact)));
    } else {
        vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2__DOT__far_path_rounder__DOT__r_up 
            = (1U & ((1U != (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_rm)) 
                     & ((0U == (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_rm)) 
                        & ((vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_far_path_out_sig 
                            >> 2U) & (IData)((0U != 
                                              (0xbU 
                                               & vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_far_path_out_sig)))))));
        vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2__DOT__near_path_rounder__DOT__r_up 
            = (1U & ((1U != (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_rm)) 
                     & ((0U == (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_rm)) 
                        & ((vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_near_path_out_sig 
                            >> 2U) & (IData)((0U != 
                                              (0xbU 
                                               & vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_near_path_out_sig)))))));
    }
    VL_SHIFTL_WWI(74,74,32, __Vtemp_hf13d2d1e__0, vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__sig_shifted_raw, 1U);
    if (vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__no_extra_shift) {
        __PVT__FMA__DOT__mulPipe__DOT__s3__DOT___exp_pre_round_T_2 
            = (0x1ffU & (IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3_io_in_r_exp_shifted));
        vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__sig_shifted[0U] 
            = vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__sig_shifted_raw[0U];
        vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__sig_shifted[1U] 
            = vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__sig_shifted_raw[1U];
        vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__sig_shifted[2U] 
            = (0x3ffU & vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__sig_shifted_raw[2U]);
    } else {
        __PVT__FMA__DOT__mulPipe__DOT__s3__DOT___exp_pre_round_T_2 
            = (0x1ffU & ((IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3_io_in_r_exp_shifted) 
                         - (IData)(1U)));
        vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__sig_shifted[0U] 
            = __Vtemp_hf13d2d1e__0[0U];
        vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__sig_shifted[1U] 
            = __Vtemp_hf13d2d1e__0[1U];
        vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__sig_shifted[2U] 
            = (0x3ffU & __Vtemp_hf13d2d1e__0[2U]);
    }
    vlSelf->__PVT__FPToInt_io_out_ready = ((~ (IData)(vlSelf->outArbiter__DOT____VdfgTmp_h5724d08f__0)) 
                                           & (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addFIFO_io_deq_ready));
    vlSelf->__PVT__IntToFP_io_out_ready = ((~ ((IData)(vlSelf->outArbiter__DOT____VdfgTmp_h5724d08f__0) 
                                               | (IData)(vlSelf->__PVT__FPToInt__DOT__REG_1))) 
                                           & (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addFIFO_io_deq_ready));
    vlSelf->__PVT__IntToFP__DOT__IntToFP_postnorm__DOT__rounder__DOT__r_up 
        = (1U & ((4U == (IData)(vlSelf->__PVT__IntToFP__DOT__r_1))
                  ? (IData)((vlSelf->__PVT__IntToFP__DOT__r_norm_int 
                             >> 0x27U)) : ((2U == (IData)(vlSelf->__PVT__IntToFP__DOT__r_1))
                                            ? ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_postnorm__DOT__rounder__DOT__inexact) 
                                               & (IData)(vlSelf->__PVT__IntToFP__DOT__r_sign))
                                            : ((3U 
                                                == (IData)(vlSelf->__PVT__IntToFP__DOT__r_1))
                                                ? (
                                                   (~ (IData)(vlSelf->__PVT__IntToFP__DOT__r_sign)) 
                                                   & (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_postnorm__DOT__rounder__DOT__inexact))
                                                : (
                                                   (1U 
                                                    != (IData)(vlSelf->__PVT__IntToFP__DOT__r_1)) 
                                                   & ((0U 
                                                       == (IData)(vlSelf->__PVT__IntToFP__DOT__r_1)) 
                                                      & ((IData)(
                                                                 (vlSelf->__PVT__IntToFP__DOT__r_norm_int 
                                                                  >> 0x27U)) 
                                                         & (IData)(
                                                                   (0ULL 
                                                                    != 
                                                                    (0x17fffffffffULL 
                                                                     & vlSelf->__PVT__IntToFP__DOT__r_norm_int))))))))));
    vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__lpath_iv 
        = ((~ (IData)(vlSelf->__PVT__FPToInt__DOT__coreOp)) 
           & (IData)(vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__rpath_rounder_io_signIn));
    vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__raw_a_sig 
        = (((IData)((0U != (IData)(vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__fp_a_exp))) 
            << 0x17U) | vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__fp_a_sig);
    vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__raw_a_exp 
        = ((IData)(vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__fp_a_exp) 
           | (1U & (~ (IData)((0U != (IData)(vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__fp_a_exp))))));
    vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2__DOT__far_path_rounder_io_cout 
        = ((IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2__DOT__far_path_rounder__DOT__r_up) 
           & (0x3fffff8U == (0x3fffff8U & vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_far_path_out_sig)));
    vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2__DOT__near_path_exp_rounded 
        = (0xffU & (((IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2__DOT__near_path_rounder__DOT__r_up) 
                     & (0x7fffffU == (0x7fffffU & (vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_near_path_out_sig 
                                                   >> 3U)))) 
                    + (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_near_path_out_exp)));
    if (vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__exp_is_subnormal) {
        vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__exp_pre_round = 0U;
        vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__raw_in_exp = 0U;
    } else {
        vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__exp_pre_round 
            = __PVT__FMA__DOT__mulPipe__DOT__s3__DOT___exp_pre_round_T_2;
        vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__raw_in_exp 
            = (0xffU & (IData)(__PVT__FMA__DOT__mulPipe__DOT__s3__DOT___exp_pre_round_T_2));
    }
    vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__tininess_rounder__DOT__rounder__DOT__inexact 
        = (1U & ((vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__sig_shifted[1U] 
                  >> 0x10U) | (0U != (0xffffffffffffULL 
                                      & (((QData)((IData)(
                                                          vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__sig_shifted[1U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__sig_shifted[0U])))))));
    vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__rounder_io_stickyIn 
        = (1U & ((vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__sig_shifted[1U] 
                  >> 0x10U) | (0U != (0xffffffffffffULL 
                                      & (((QData)((IData)(
                                                          vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__sig_shifted[1U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__sig_shifted[0U])))))));
    vlSelf->__PVT__FPToInt__DOT___io_out_bits_fflags_T_3 
        = ((~ ((~ (IData)(vlSelf->__PVT__FPToInt_io_out_ready)) 
               & (IData)(vlSelf->__PVT__FPToInt__DOT__REG_1))) 
           & (IData)(vlSelf->__PVT__FPToInt__DOT__REG));
    vlSelf->__PVT__IntToFP__DOT___s2_isSingle_T_8 = 
        ((~ ((~ (IData)(vlSelf->__PVT__IntToFP_io_out_ready)) 
             & (IData)(vlSelf->__PVT__IntToFP__DOT__REG_1))) 
         & (IData)(vlSelf->__PVT__IntToFP__DOT__REG));
    vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__lpath_may_of 
        = ((IData)(vlSelf->__PVT__FPToInt__DOT__coreOp) 
           & ((IData)(vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__raw_a_exp) 
              == (0xffU & ((IData)(0x7fU) + ((2U & (IData)(vlSelf->__PVT__FPToInt__DOT__coreOp))
                                              ? 0x3fU
                                              : 0x1fU)))));
    vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__shiftRightJam__DOT___io_sticky_T 
        = ((vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__raw_a_sig 
            << 1U) & ((((IData)(1U) << (0x1fU & ((IData)(0x16U) 
                                                 - (IData)(vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__raw_a_exp)))) 
                       - (IData)(1U)) | ((0x19U < (0xffU 
                                                   & ((IData)(0x96U) 
                                                      - (IData)(vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__raw_a_exp))))
                                          ? 0x1ffffffU
                                          : 0U)));
    vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__shiftRightJam__DOT___io_out_T 
        = ((0x18U >= (0xffU & ((IData)(0x96U) - (IData)(vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__raw_a_exp))))
            ? (0x1ffffffU & ((vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__raw_a_sig 
                              << 1U) >> (0xffU & ((IData)(0x96U) 
                                                  - (IData)(vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__raw_a_exp)))))
            : 0U);
    vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__rounder__DOT__inexact 
        = (1U & ((vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__sig_shifted[1U] 
                  >> 0x11U) | (IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__rounder_io_stickyIn)));
    vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__rpath_rounder_io_in 
        = ((0x19U < (0xffU & ((IData)(0x96U) - (IData)(vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__raw_a_exp))))
            ? 0U : (0xffffffU & (vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__shiftRightJam__DOT___io_out_T 
                                 >> 1U)));
    vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__rpath_rounder_io_roundIn 
        = ((0x19U >= (0xffU & ((IData)(0x96U) - (IData)(vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__raw_a_exp)))) 
           & vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__shiftRightJam__DOT___io_out_T);
    vlSelf->__PVT__FMA__DOT__mulFIFO__DOT__ram_result_MPORT_en 
        = ((IData)(vlSelf->__PVT__FMA__DOT__mulFIFO_io_enq_ready) 
           & ((IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__REG_1) 
              & (2U == (IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__toAdd_op_r_1))));
    vlSelf->__PVT__FMA__DOT__mulPipe_io_out_ready = 
        (1U & (((~ (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT___T_2)) 
                & ((IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__toAdd_op_r_1) 
                   >> 2U)) | ((IData)(vlSelf->__PVT__FMA__DOT__mulFIFO_io_enq_ready) 
                              & (2U == (IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__toAdd_op_r_1)))));
    vlSelf->__PVT__FMA__DOT__toAddArbiter_io_in_0_valid 
        = (((IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__toAdd_op_r_1) 
            >> 2U) & (IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__REG_1));
    vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__rmin 
        = ((1U == (IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3_io_in_r_rm)) 
           | (((~ (IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3_io_in_r_prod_sign)) 
               & (2U == (IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3_io_in_r_rm))) 
              | ((3U == (IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3_io_in_r_rm)) 
                 & (IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3_io_in_r_prod_sign))));
    vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__rounder__DOT__r_up 
        = (1U & ((4U == (IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3_io_in_r_rm))
                  ? (vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__sig_shifted[1U] 
                     >> 0x11U) : ((2U == (IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3_io_in_r_rm))
                                   ? ((IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__rounder__DOT__inexact) 
                                      & (IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3_io_in_r_prod_sign))
                                   : ((3U == (IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3_io_in_r_rm))
                                       ? ((~ (IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3_io_in_r_prod_sign)) 
                                          & (IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__rounder__DOT__inexact))
                                       : ((1U != (IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3_io_in_r_rm)) 
                                          & ((0U == (IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3_io_in_r_rm)) 
                                             & ((vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__sig_shifted[1U] 
                                                 >> 0x11U) 
                                                & ((IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__rounder_io_stickyIn) 
                                                   | (vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__sig_shifted[1U] 
                                                      >> 0x12U)))))))));
    vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__rpath_rounder__DOT__inexact 
        = ((IData)(vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__rpath_rounder_io_roundIn) 
           | (0U != vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__shiftRightJam__DOT___io_sticky_T));
    vlSelf->__PVT__FMA__DOT__mulPipe__DOT___s3_io_in_T_3 
        = ((~ ((~ (IData)(vlSelf->__PVT__FMA__DOT__mulPipe_io_out_ready)) 
               & (IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__REG_1))) 
           & (IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__REG));
    vlSelf->__PVT__FMA__DOT__addPipe__DOT__isFMA = 
        ((IData)(vlSelf->__PVT__FMA__DOT__toAddArbiter_io_in_0_valid) 
         & ((IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__toAdd_op_r_1) 
            >> 2U));
    vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__rounder_io_cout 
        = ((IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__rounder__DOT__r_up) 
           & (0x7fffffU == (0x7fffffU & ((vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__sig_shifted[2U] 
                                          << 0xeU) 
                                         | (vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__sig_shifted[1U] 
                                            >> 0x12U)))));
    vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__rpath_rounder__DOT__r_up 
        = ((4U == (IData)(vlSelf->__PVT__FPToInt__DOT__rm))
            ? (IData)(vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__rpath_rounder_io_roundIn)
            : ((2U == (IData)(vlSelf->__PVT__FPToInt__DOT__rm))
                ? ((IData)(vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__rpath_rounder__DOT__inexact) 
                   & (IData)(vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__rpath_rounder_io_signIn))
                : ((3U == (IData)(vlSelf->__PVT__FPToInt__DOT__rm))
                    ? ((~ (IData)(vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__rpath_rounder_io_signIn)) 
                       & (IData)(vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__rpath_rounder__DOT__inexact))
                    : ((1U != (IData)(vlSelf->__PVT__FPToInt__DOT__rm)) 
                       & ((0U == (IData)(vlSelf->__PVT__FPToInt__DOT__rm)) 
                          & ((IData)(vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__rpath_rounder_io_roundIn) 
                             & ((0U != vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__shiftRightJam__DOT___io_sticky_T) 
                                | ((0x19U >= (0xffU 
                                              & ((IData)(0x96U) 
                                                 - (IData)(vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__raw_a_exp)))) 
                                   & (vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__shiftRightJam__DOT___io_out_T 
                                      >> 1U)))))))));
    vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__common_of 
        = (((IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__rounder_io_cout)
             ? (0xfeU == (IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__raw_in_exp))
             : (0xffU == (IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__raw_in_exp))) 
           | (IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3_io_in_r_early_overflow));
    vlSelf->__VdfgTmp_h22dfd192__0 = ((((IData)(vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__rpath_rounder__DOT__r_up) 
                                        & (0xffffffU 
                                           == vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__rpath_rounder_io_in)) 
                                       << 0x18U) | 
                                      (0xffffffU & 
                                       (vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__rpath_rounder_io_in 
                                        + (IData)(vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__rpath_rounder__DOT__r_up))));
    vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__int_abs 
        = ((0x96U <= (IData)(vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__raw_a_exp))
            ? ((QData)((IData)(vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__raw_a_sig)) 
               << (0x3fU & ((IData)(vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__raw_a_exp) 
                            - (IData)(0x16U)))) : (QData)((IData)(vlSelf->__VdfgTmp_h22dfd192__0)));
}

VL_INLINE_OPT void VVentus_ScalarFPU_1___nba_sequent__TOP__GPGPU_top__DOT__SM_wrapper__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_2__0(VVentus_ScalarFPU_1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VVentus__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VVentus_ScalarFPU_1___nba_sequent__TOP__GPGPU_top__DOT__SM_wrapper__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_2__0\n"); );
    // Init
    VlWide<19>/*584:0*/ __PVT__FMA__DOT__mulPipe__DOT__s3__DOT___sig_shifted_raw_T;
    SData/*8:0*/ __PVT__FMA__DOT__mulPipe__DOT__s3__DOT___exp_pre_round_T_2;
    CData/*0:0*/ __Vdly__FMA__DOT__mulPipe__DOT__REG;
    CData/*0:0*/ __Vdly__FMA__DOT__mulPipe__DOT__REG_1;
    CData/*0:0*/ __Vdly__FMA__DOT__addPipe__DOT__REG;
    CData/*0:0*/ __Vdly__FMA__DOT__addPipe__DOT__REG_1;
    IData/*31:0*/ __Vdlyvval__FMA__DOT__mulFIFO__DOT__ram_result__v0;
    CData/*0:0*/ __Vdlyvset__FMA__DOT__mulFIFO__DOT__ram_result__v0;
    IData/*31:0*/ __Vdlyvval__FMA__DOT__addFIFO__DOT__ram_result__v0;
    CData/*0:0*/ __Vdlyvset__FMA__DOT__addFIFO__DOT__ram_result__v0;
    CData/*0:0*/ __Vdly__FCMP__DOT__REG;
    CData/*0:0*/ __Vdly__FCMP__DOT__REG_1;
    CData/*0:0*/ __Vdly__FPMV__DOT__REG;
    CData/*0:0*/ __Vdly__FPMV__DOT__REG_1;
    CData/*0:0*/ __Vdly__FPToInt__DOT__REG;
    CData/*0:0*/ __Vdly__FPToInt__DOT__REG_1;
    CData/*0:0*/ __Vdly__IntToFP__DOT__REG;
    CData/*0:0*/ __Vdly__IntToFP__DOT__REG_1;
    VlWide<3>/*95:0*/ __Vtemp_hd69ef506__0;
    VlWide<3>/*95:0*/ __Vtemp_h2d568758__0;
    VlWide<19>/*607:0*/ __Vtemp_hd7be74e6__0;
    VlWide<19>/*607:0*/ __Vtemp_h2ce4aade__0;
    VlWide<3>/*95:0*/ __Vtemp_hf13d2d1e__0;
    // Body
    __Vdly__IntToFP__DOT__REG_1 = vlSelf->__PVT__IntToFP__DOT__REG_1;
    __Vdly__IntToFP__DOT__REG = vlSelf->__PVT__IntToFP__DOT__REG;
    __Vdly__FMA__DOT__mulPipe__DOT__REG = vlSelf->__PVT__FMA__DOT__mulPipe__DOT__REG;
    __Vdly__FMA__DOT__mulPipe__DOT__REG_1 = vlSelf->__PVT__FMA__DOT__mulPipe__DOT__REG_1;
    __Vdly__FMA__DOT__addPipe__DOT__REG = vlSelf->__PVT__FMA__DOT__addPipe__DOT__REG;
    __Vdly__FMA__DOT__addPipe__DOT__REG_1 = vlSelf->__PVT__FMA__DOT__addPipe__DOT__REG_1;
    __Vdly__FPToInt__DOT__REG = vlSelf->__PVT__FPToInt__DOT__REG;
    __Vdly__FPMV__DOT__REG = vlSelf->__PVT__FPMV__DOT__REG;
    __Vdly__FCMP__DOT__REG = vlSelf->__PVT__FCMP__DOT__REG;
    __Vdly__FPToInt__DOT__REG_1 = vlSelf->__PVT__FPToInt__DOT__REG_1;
    __Vdly__FPMV__DOT__REG_1 = vlSelf->__PVT__FPMV__DOT__REG_1;
    __Vdly__FCMP__DOT__REG_1 = vlSelf->__PVT__FCMP__DOT__REG_1;
    __Vdlyvset__FMA__DOT__mulFIFO__DOT__ram_result__v0 = 0U;
    __Vdlyvset__FMA__DOT__addFIFO__DOT__ram_result__v0 = 0U;
    if (vlSymsp->TOP.reset) {
        __Vdly__IntToFP__DOT__REG = 0U;
        __Vdly__IntToFP__DOT__REG_1 = 0U;
        __Vdly__FMA__DOT__mulPipe__DOT__REG = 0U;
        __Vdly__FMA__DOT__mulPipe__DOT__REG_1 = 0U;
        __Vdly__FMA__DOT__addPipe__DOT__REG = 0U;
        __Vdly__FMA__DOT__addPipe__DOT__REG_1 = 0U;
        __Vdly__FPToInt__DOT__REG = 0U;
        __Vdly__FPToInt__DOT__REG_1 = 0U;
        __Vdly__FPMV__DOT__REG = 0U;
        __Vdly__FPMV__DOT__REG_1 = 0U;
        __Vdly__FCMP__DOT__REG = 0U;
        __Vdly__FCMP__DOT__REG_1 = 0U;
        vlSelf->__PVT__FMA__DOT__mulFIFO__DOT__maybe_full = 0U;
        vlSelf->__PVT__FMA__DOT__addFIFO__DOT__maybe_full = 0U;
    } else {
        if ((1U & (~ ((~ (IData)(vlSelf->__PVT__IntToFP_io_out_ready)) 
                      & ((IData)(vlSelf->__PVT__IntToFP__DOT__REG) 
                         & (IData)(vlSelf->__PVT__IntToFP__DOT__REG_1)))))) {
            __Vdly__IntToFP__DOT__REG = vlSelf->__PVT__IntToFP_io_in_valid;
        }
        if ((1U & (~ ((~ (IData)(vlSelf->__PVT__IntToFP_io_out_ready)) 
                      & (IData)(vlSelf->__PVT__IntToFP__DOT__REG_1))))) {
            __Vdly__IntToFP__DOT__REG_1 = vlSelf->__PVT__IntToFP__DOT__REG;
        }
        if ((1U & (~ ((~ (IData)(vlSelf->__PVT__FMA__DOT__mulPipe_io_out_ready)) 
                      & ((IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__REG) 
                         & (IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__REG_1)))))) {
            __Vdly__FMA__DOT__mulPipe__DOT__REG = vlSelf->__PVT__FMA__DOT__mulPipe_io_in_valid;
        }
        if ((1U & (~ ((~ (IData)(vlSelf->__PVT__FMA__DOT__mulPipe_io_out_ready)) 
                      & (IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__REG_1))))) {
            __Vdly__FMA__DOT__mulPipe__DOT__REG_1 = vlSelf->__PVT__FMA__DOT__mulPipe__DOT__REG;
        }
        if ((1U & (~ ((~ (IData)(vlSelf->__PVT__FMA__DOT__addPipe_io_out_ready)) 
                      & ((IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__REG) 
                         & (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__REG_1)))))) {
            __Vdly__FMA__DOT__addPipe__DOT__REG = vlSelf->__PVT__FMA__DOT__addPipe_io_in_valid;
        }
        if ((1U & (~ ((~ (IData)(vlSelf->__PVT__FMA__DOT__addPipe_io_out_ready)) 
                      & (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__REG_1))))) {
            __Vdly__FMA__DOT__addPipe__DOT__REG_1 = vlSelf->__PVT__FMA__DOT__addPipe__DOT__REG;
        }
        if ((1U & (~ ((~ (IData)(vlSelf->__PVT__FPToInt_io_out_ready)) 
                      & ((IData)(vlSelf->__PVT__FPToInt__DOT__REG) 
                         & (IData)(vlSelf->__PVT__FPToInt__DOT__REG_1)))))) {
            __Vdly__FPToInt__DOT__REG = vlSelf->__PVT__FPToInt_io_in_valid;
        }
        if ((1U & (~ ((~ (IData)(vlSelf->__PVT__FPToInt_io_out_ready)) 
                      & (IData)(vlSelf->__PVT__FPToInt__DOT__REG_1))))) {
            __Vdly__FPToInt__DOT__REG_1 = vlSelf->__PVT__FPToInt__DOT__REG;
        }
        if ((1U & (~ ((~ (IData)(vlSelf->__PVT__FPMV_io_out_ready)) 
                      & ((IData)(vlSelf->__PVT__FPMV__DOT__REG) 
                         & (IData)(vlSelf->__PVT__FPMV__DOT__REG_1)))))) {
            __Vdly__FPMV__DOT__REG = vlSelf->__PVT__FPMV_io_in_valid;
        }
        if ((1U & (~ ((~ (IData)(vlSelf->__PVT__FPMV_io_out_ready)) 
                      & (IData)(vlSelf->__PVT__FPMV__DOT__REG_1))))) {
            __Vdly__FPMV__DOT__REG_1 = vlSelf->__PVT__FPMV__DOT__REG;
        }
        if ((1U & (~ ((~ (IData)(vlSelf->__PVT__FCMP_io_out_ready)) 
                      & ((IData)(vlSelf->__PVT__FCMP__DOT__REG) 
                         & (IData)(vlSelf->__PVT__FCMP__DOT__REG_1)))))) {
            __Vdly__FCMP__DOT__REG = vlSelf->__PVT__FCMP_io_in_valid;
        }
        if ((1U & (~ ((~ (IData)(vlSelf->__PVT__FCMP_io_out_ready)) 
                      & (IData)(vlSelf->__PVT__FCMP__DOT__REG_1))))) {
            __Vdly__FCMP__DOT__REG_1 = vlSelf->__PVT__FCMP__DOT__REG;
        }
        if (((IData)(vlSelf->__PVT__FMA__DOT__mulFIFO__DOT__ram_result_MPORT_en) 
             != (IData)(vlSelf->__PVT__FMA__DOT__mulFIFO__DOT__do_deq))) {
            vlSelf->__PVT__FMA__DOT__mulFIFO__DOT__maybe_full 
                = vlSelf->__PVT__FMA__DOT__mulFIFO__DOT__ram_result_MPORT_en;
        }
        if (((IData)(vlSelf->__PVT__FMA__DOT__addFIFO__DOT__ram_result_MPORT_en) 
             != (IData)(vlSelf->__PVT__FMA__DOT__addFIFO__DOT__do_deq))) {
            vlSelf->__PVT__FMA__DOT__addFIFO__DOT__maybe_full 
                = vlSelf->__PVT__FMA__DOT__addFIFO__DOT__ram_result_MPORT_en;
        }
    }
    if (vlSelf->__PVT__FMA__DOT__mulFIFO__DOT__ram_result_MPORT_en) {
        __Vdlyvval__FMA__DOT__mulFIFO__DOT__ram_result__v0 
            = ((IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3_io_in_r_special_case_valid)
                ? ((IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3_io_in_r_special_case_bits_nan)
                    ? 0x7fc00000U : ((IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3_io_in_r_special_case_bits_inf)
                                      ? (0x7f800000U 
                                         | ((IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3_io_in_r_prod_sign) 
                                            << 0x1fU))
                                      : ((IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3_io_in_r_prod_sign) 
                                         << 0x1fU)))
                : (((IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3_io_in_r_prod_sign) 
                    << 0x1fU) | ((0x7f800000U & (((IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__common_of)
                                                   ? 
                                                  ((IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__rmin)
                                                    ? 0xfeU
                                                    : 0xffU)
                                                   : 
                                                  ((IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__rounder_io_cout) 
                                                   + (IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__raw_in_exp))) 
                                                 << 0x17U)) 
                                 | (0x7fffffU & ((IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__common_of)
                                                  ? 
                                                 ((IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__rmin)
                                                   ? 0x7fffffU
                                                   : 0U)
                                                  : 
                                                 (((vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__sig_shifted[2U] 
                                                    << 0xeU) 
                                                   | (vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__sig_shifted[1U] 
                                                      >> 0x12U)) 
                                                  + (IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__rounder__DOT__r_up)))))));
        __Vdlyvset__FMA__DOT__mulFIFO__DOT__ram_result__v0 = 1U;
    }
    if (vlSelf->__PVT__FMA__DOT__addFIFO__DOT__ram_result_MPORT_en) {
        __Vdlyvval__FMA__DOT__addFIFO__DOT__ram_result__v0 
            = ((IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_special_case_valid)
                ? ((IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_special_case_bits_nan)
                    ? 0x7fc00000U : (0x7f800000U | 
                                     ((IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_special_case_bits_inf_sign) 
                                      << 0x1fU))) : 
               ((((IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_sel_far_path) 
                  & ((0xffU == (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_far_path_out_exp)) 
                     | (((IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2__DOT__far_path_rounder_io_cout) 
                         & (0xfeU == (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_far_path_out_exp))) 
                        | (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_far_path_mul_of)))) 
                 | ((~ (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_sel_far_path)) 
                    & (0xffU == (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2__DOT__near_path_exp_rounded))))
                 ? ((((IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_sel_far_path)
                       ? (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_far_path_out_sign)
                       : (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_near_path_out_sign)) 
                     << 0x1fU) | ((((IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2__DOT__rmin)
                                     ? 0xfeU : 0xffU) 
                                   << 0x17U) | ((IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2__DOT__rmin)
                                                 ? 0x7fffffU
                                                 : 0U)))
                 : ((IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_sel_far_path)
                     ? (((IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_far_path_out_sign) 
                         << 0x1fU) | ((0x7f800000U 
                                       & (((IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2__DOT__far_path_rounder_io_cout) 
                                           + (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_far_path_out_exp)) 
                                          << 0x17U)) 
                                      | (0x7fffffU 
                                         & ((vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_far_path_out_sig 
                                             >> 3U) 
                                            + (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2__DOT__far_path_rounder__DOT__r_up)))))
                     : (((((~ (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2__DOT__near_path_is_zero)) 
                           & (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_near_path_out_sign)) 
                          | ((2U == (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_rm)) 
                             & (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2__DOT__near_path_is_zero))) 
                         << 0x1fU) | (((IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2__DOT__near_path_exp_rounded) 
                                       << 0x17U) | 
                                      (0x7fffffU & 
                                       ((vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_near_path_out_sig 
                                         >> 3U) + (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2__DOT__near_path_rounder__DOT__r_up))))))));
        __Vdlyvset__FMA__DOT__addFIFO__DOT__ram_result__v0 = 1U;
    }
    if (vlSelf->__PVT__FMA__DOT__addPipe__DOT___s1_io_a_T_4) {
        vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1_io_b_inter_valid_r 
            = vlSelf->__PVT__FMA__DOT__addPipe__DOT__isFMA;
        vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1_io_b_inter_flags_r_isNaN 
            = ((IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__isFMA) 
               & (IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3_io_in_r_special_case_bits_nan));
        vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1_io_b_inter_flags_r_isInf 
            = ((IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__isFMA) 
               & ((~ (IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3_io_in_r_special_case_bits_nan)) 
                  & (IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3_io_in_r_special_case_bits_inf)));
    }
    if (vlSelf->__PVT__FMA__DOT__addPipe__DOT___s2_io_in_T_3) {
        if (vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT___near_path_out_T_2) {
            vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_near_path_sig_is_zero 
                = (1U & ((~ (IData)((0U != vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__near_path_mods_1__DOT__lza_ab_io_f))) 
                         & (~ ((IData)(1U) + (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__near_path_mods_1__DOT___a_minus_b_T_3)))));
            vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_near_path_out_exp 
                = (0xffU & (((IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__near_path_mods_1__DOT__exceed_lim)
                              ? (0U != (0x1ffffffffffffULL 
                                        & ((0x2000000000000ULL 
                                            >> (0x3fU 
                                                & (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__near_path_mods_1_io_in_a_exp))) 
                                           & (1ULL 
                                              + vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__near_path_mods_1__DOT___a_minus_b_T_3))))
                              : ((0U != (0x1ffffffffffffULL 
                                         & ((vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__near_path_mods_1__DOT__int_bit_mask 
                                             >> 1U) 
                                            & (1ULL 
                                               + vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__near_path_mods_1__DOT___a_minus_b_T_3)))) 
                                 | (0U != vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__near_path_mods_1__DOT___int_bit_predicted_T_1)))
                             ? (((IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__near_path_mods_1_io_in_a_exp) 
                                 - (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__near_path_mods_1__DOT__lzc_clz_io_out)) 
                                - (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__near_path_mods_1__DOT__lza_error))
                             : 0U));
            vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_near_path_out_sig 
                = ((0x7fffffeU & ((IData)((vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__near_path_mods_1__DOT__near_path_sig 
                                           >> 0x17U)) 
                                  << 1U)) | (0U != 
                                             (0x7fffffU 
                                              & (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__near_path_mods_1__DOT__near_path_sig))));
            vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_near_path_out_sign 
                = (1U & ((1U & (IData)((1ULL & ((1ULL 
                                                 + vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__near_path_mods_1__DOT___a_minus_b_T_3) 
                                                >> 0x31U))))
                          ? (IData)((vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1_io_a_r 
                                     >> 0x37U)) : (IData)(
                                                          (vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1_io_b_r 
                                                           >> 0x37U))));
        } else {
            vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_near_path_sig_is_zero 
                = (1U & ((~ (IData)((0U != vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__near_path_mods_0__DOT__lza_ab_io_f))) 
                         & (~ ((IData)(1U) + (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__near_path_mods_0__DOT___a_minus_b_T_3)))));
            vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_near_path_out_exp 
                = (0xffU & (((IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__near_path_mods_0__DOT__exceed_lim)
                              ? (0U != (0x1ffffffffffffULL 
                                        & ((0x2000000000000ULL 
                                            >> (0x3fU 
                                                & (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__near_path_mods_0_io_in_a_exp))) 
                                           & (1ULL 
                                              + vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__near_path_mods_0__DOT___a_minus_b_T_3))))
                              : ((0U != (0x1ffffffffffffULL 
                                         & ((vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__near_path_mods_0__DOT__int_bit_mask 
                                             >> 1U) 
                                            & (1ULL 
                                               + vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__near_path_mods_0__DOT___a_minus_b_T_3)))) 
                                 | (0U != vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__near_path_mods_0__DOT___int_bit_predicted_T_1)))
                             ? (((IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__near_path_mods_0_io_in_a_exp) 
                                 - (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__near_path_mods_0__DOT__lzc_clz_io_out)) 
                                - (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__near_path_mods_0__DOT__lza_error))
                             : 0U));
            vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_near_path_out_sig 
                = ((0x7fffffeU & ((IData)((vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__near_path_mods_0__DOT__near_path_sig 
                                           >> 0x17U)) 
                                  << 1U)) | (0U != 
                                             (0x7fffffU 
                                              & (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__near_path_mods_0__DOT__near_path_sig))));
            vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_near_path_out_sign 
                = (1U & ((1U & (IData)((1ULL & ((1ULL 
                                                 + vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__near_path_mods_0__DOT___a_minus_b_T_3) 
                                                >> 0x31U))))
                          ? (IData)((vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1_io_b_r 
                                     >> 0x37U)) : (IData)(
                                                          (vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1_io_a_r 
                                                           >> 0x37U))));
        }
        vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_far_path_out_exp 
            = (0xffU & ((((1U & (IData)((vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__far_path_mods_0__DOT__adder_result 
                                         >> 0x33U)))
                           ? ((IData)(1U) + (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__far_path_mods_0_io_in_a_exp))
                           : 0U) | ((1U == (3U & (IData)(
                                                         (vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__far_path_mods_0__DOT__adder_result 
                                                          >> 0x32U))))
                                     ? (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__far_path_mods_0_io_in_a_exp)
                                     : 0U)) | ((0U 
                                                == 
                                                (3U 
                                                 & (IData)(
                                                           (vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__far_path_mods_0__DOT__adder_result 
                                                            >> 0x32U))))
                                                ? ((IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__far_path_mods_0_io_in_a_exp) 
                                                   - (IData)(1U))
                                                : 0U)));
        vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_special_case_valid 
            = ((IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__special_path_hasNaN) 
               | ((IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__decode_a___05FisInf) 
                  | (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__b_isInf)));
        vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_special_case_bits_nan 
            = ((IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__special_path_hasNaN) 
               | ((IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__decode_a___05FisInf) 
                  & ((IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__b_isInf) 
                     & (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__far_path_mods_0_io_in_effSub))));
        vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_far_path_out_sig 
            = ((((1U & (IData)((vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__far_path_mods_0__DOT__adder_result 
                                >> 0x33U))) ? ((0x7fffffeU 
                                                & ((IData)(
                                                           (vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__far_path_mods_0__DOT__adder_result 
                                                            >> 0x1aU)) 
                                                   << 1U)) 
                                               | (0U 
                                                  != 
                                                  (0x3ffffffU 
                                                   & (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__far_path_mods_0__DOT__adder_result))))
                  : 0U) | (((1U == (3U & (IData)((vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__far_path_mods_0__DOT__adder_result 
                                                  >> 0x32U)))) 
                            | (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__far_path_mods_0_io_in_smallAdd))
                            ? ((0x7fffffeU & ((IData)(
                                                      (vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__far_path_mods_0__DOT__adder_result 
                                                       >> 0x19U)) 
                                              << 1U)) 
                               | (0U != (0x1ffffffU 
                                         & (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__far_path_mods_0__DOT__adder_result))))
                            : 0U)) | (((~ (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__far_path_mods_0_io_in_smallAdd)) 
                                       & (0ULL == (0xc000000000000ULL 
                                                   & vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__far_path_mods_0__DOT__adder_result)))
                                       ? ((0x7fffffeU 
                                           & ((IData)(
                                                      (vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__far_path_mods_0__DOT__adder_result 
                                                       >> 0x18U)) 
                                              << 1U)) 
                                          | (0U != 
                                             (0xffffffU 
                                              & (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__far_path_mods_0__DOT__adder_result))))
                                       : 0U));
        vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_rm 
            = vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1_io_rm_r;
        vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_sel_far_path 
            = (1U & ((~ (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__far_path_mods_0_io_in_effSub)) 
                     | ((1U < (0xffU & ((IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__need_swap)
                                         ? (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__exp_diff_b_a)
                                         : (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__exp_diff_a_b)))) 
                        | (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1_io_b_inter_flags_r_overflow))));
        vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_far_path_mul_of 
            = ((IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1_io_b_inter_flags_r_overflow) 
               | ((~ (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__far_path_mods_0_io_in_effSub)) 
                  & (0x7f800000000000ULL == (0x7f800000000000ULL 
                                             & vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1_io_b_r))));
        vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_special_case_bits_inf_sign 
            = (1U & ((IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__decode_a___05FisInf)
                      ? (IData)((vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1_io_a_r 
                                 >> 0x37U)) : (IData)(
                                                      (vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1_io_b_r 
                                                       >> 0x37U))));
        vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_far_path_out_sign 
            = (1U & ((IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__need_swap)
                      ? (IData)((vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1_io_b_r 
                                 >> 0x37U)) : (IData)(
                                                      (vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1_io_a_r 
                                                       >> 0x37U))));
    }
    if (vlSelf->__PVT__FMA__DOT__addPipe__DOT___s1_io_a_T_4) {
        vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1_io_rm_r 
            = vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s1_io_rm;
        vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1_io_b_inter_flags_r_overflow 
            = ((IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__isFMA) 
               & (0xffU < (IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__exp_pre_round)));
        vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1_io_b_r 
            = ((QData)((IData)((((IData)(vlSelf->__PVT__FMA__DOT__toAddArbiter_io_in_0_valid) 
                                 & (IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__toAdd_op_r_1))
                                 ? (((~ (vlSelf->__PVT__FMA__DOT__addPipe__DOT__srcB 
                                         >> 0x1fU)) 
                                     << 0x1fU) | (0x7fffffffU 
                                                  & vlSelf->__PVT__FMA__DOT__addPipe__DOT__srcB))
                                 : vlSelf->__PVT__FMA__DOT__addPipe__DOT__srcB))) 
               << 0x18U);
        vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1_io_a_r 
            = ((IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__isFMA)
                ? (((QData)((IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3_io_in_r_prod_sign)) 
                    << 0x37U) | (((QData)((IData)(((IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3_io_in_r_special_case_bits_hasZero)
                                                    ? 0U
                                                    : (IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__raw_in_exp)))) 
                                  << 0x2fU) | ((IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3_io_in_r_special_case_bits_hasZero)
                                                ? 0ULL
                                                : (0x7fffffffffffULL 
                                                   & ((((QData)((IData)(
                                                                        vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__sig_shifted[2U])) 
                                                        << 0x26U) 
                                                       | (((QData)((IData)(
                                                                           vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__sig_shifted[1U])) 
                                                           << 6U) 
                                                          | ((QData)((IData)(
                                                                             vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__sig_shifted[0U])) 
                                                             >> 0x1aU))) 
                                                      | (QData)((IData)(
                                                                        (0U 
                                                                         != 
                                                                         (0x3ffffffU 
                                                                          & vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__sig_shifted[0U])))))))))
                : ((QData)((IData)(((0U == (7U & ((IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0_io_in_bits_op) 
                                                  >> 3U)))
                                     ? vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_2_io_in_bits_a
                                     : 0U))) << 0x18U));
    }
    if (vlSelf->__PVT__FMA__DOT__mulPipe__DOT___s3_io_in_T_3) {
        vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3_io_in_r_early_overflow 
            = vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s2_io_in_r_early_overflow;
        vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3_io_in_r_rm 
            = vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s2_io_in_r_rm;
        vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3_io_in_r_exp_shifted 
            = vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s2_io_in_r_exp_shifted;
        vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3_io_in_r_may_be_subnormal 
            = vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s2_io_in_r_may_be_subnormal;
        vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3_io_in_r_shift_amt 
            = vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s2_io_in_r_shift_amt;
        vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3_io_in_r_prod 
            = (0xffffffffffffULL & ((QData)((IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__multiplier__DOT__io_result_r)) 
                                    * (QData)((IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__multiplier__DOT__io_result_r_1))));
        vlSelf->__PVT__FMA__DOT__mulPipe__DOT__toAdd_addAnother_r_1 
            = vlSelf->__PVT__FMA__DOT__mulPipe__DOT__toAdd_addAnother_r;
        vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3_io_in_r_special_case_valid 
            = vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s2_io_in_r_special_case_valid;
        vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3_io_in_r_special_case_bits_inf 
            = vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s2_io_in_r_special_case_bits_inf;
        vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3_io_in_r_special_case_bits_nan 
            = vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s2_io_in_r_special_case_bits_nan;
        vlSelf->__PVT__FMA__DOT__mulPipe__DOT__toAdd_op_r_1 
            = vlSelf->__PVT__FMA__DOT__mulPipe__DOT__toAdd_op_r;
        vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3_io_in_r_special_case_bits_hasZero 
            = vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s2_io_in_r_special_case_bits_hasZero;
        vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3_io_in_r_prod_sign 
            = vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s2_io_in_r_prod_sign;
    }
    if (vlSelf->__PVT__IntToFP__DOT___s2_isSingle_T_8) {
        vlSelf->__PVT__IntToFP__DOT__io_out_bits_result_r 
            = (((IData)(vlSelf->__PVT__IntToFP__DOT__r_sign) 
                << 0x1fU) | ((((IData)(vlSelf->__PVT__IntToFP__DOT__r_is_zero)
                                ? 0U : (0xffU & (((IData)(0xbeU) 
                                                  - (IData)(vlSelf->__PVT__IntToFP__DOT__r_lzc)) 
                                                 + 
                                                 ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_postnorm__DOT__rounder__DOT__r_up) 
                                                  & (0x7fffffU 
                                                     == 
                                                     (0x7fffffU 
                                                      & (IData)(
                                                                (vlSelf->__PVT__IntToFP__DOT__r_norm_int 
                                                                 >> 0x28U)))))))) 
                              << 0x17U) | (0x7fffffU 
                                           & ((IData)(
                                                      (vlSelf->__PVT__IntToFP__DOT__r_norm_int 
                                                       >> 0x28U)) 
                                              + (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_postnorm__DOT__rounder__DOT__r_up)))));
        vlSelf->__PVT__IntToFP__DOT__s2_isSingle = vlSelf->__PVT__IntToFP__DOT__s2_isSingle_r;
    }
    if (vlSelf->__PVT__IntToFP__DOT___s2_isSingle_T_4) {
        vlSelf->__PVT__IntToFP__DOT__r_1 = ((4U == 
                                             (7U & 
                                              ((IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0_io_in_bits_op) 
                                               >> 3U)))
                                             ? (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0_io_in_bits_rm)
                                             : 0U);
        vlSelf->__PVT__IntToFP__DOT__r_norm_int = (0x7fffffffffffffffULL 
                                                   & ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lzc_error)
                                                       ? 
                                                      (vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__in_shift_s1 
                                                       << 1U)
                                                       : vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__in_shift_s1));
        vlSelf->__PVT__IntToFP__DOT__r_lzc = (0x3fU 
                                              & ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lzc) 
                                                 + (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lzc_error)));
        vlSelf->__PVT__IntToFP__DOT__r_sign = vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__in_sign;
        vlSelf->__PVT__IntToFP__DOT__r_is_zero = (0ULL 
                                                  == vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__pos_lzc_clz_io_in);
        vlSelf->__PVT__IntToFP__DOT__s2_isSingle_r 
            = (1U & (~ (IData)(vlSelf->IntToFP__DOT____VdfgTmp_h0d28c158__0)));
    }
    if (vlSelf->__PVT__FPToInt__DOT___io_out_bits_fflags_T_3) {
        vlSelf->__PVT__FPToInt__DOT__io_out_bits_result_r_1 
            = (((((IData)(vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__raw_a_exp) 
                  > (0xffU & ((IData)(0x7fU) + ((2U 
                                                 & (IData)(vlSelf->__PVT__FPToInt__DOT__coreOp))
                                                 ? 0x3fU
                                                 : 0x1fU)))) 
                 | ((0x96U <= (IData)(vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__raw_a_exp)) 
                    & (((~ (IData)(vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__rpath_rounder_io_signIn)) 
                        & (IData)(vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__lpath_may_of)) 
                       | ((IData)(vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__lpath_may_of) 
                          & ((IData)(vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__rpath_rounder_io_signIn) 
                             & (0U != vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__fp_a_sig)))))) 
                | (((0x96U <= (IData)(vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__raw_a_exp)) 
                    & (IData)(vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__lpath_iv)) 
                   | ((0x96U > (IData)(vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__raw_a_exp)) 
                      & ((IData)(vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__lpath_iv) 
                         & (0U != vlSelf->__VdfgTmp_h22dfd192__0)))))
                ? ((1U & ((~ (IData)(vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__rpath_rounder_io_signIn)) 
                          | ((0xffU == (IData)(vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__fp_a_exp)) 
                             & (0U != vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__fp_a_sig))))
                    ? ((2U & (IData)(vlSelf->__PVT__FPToInt__DOT__coreOp))
                        ? (0x7fffffffffffffffULL | 
                           ((QData)((IData)((1U & (~ (IData)(vlSelf->__PVT__FPToInt__DOT__coreOp))))) 
                            << 0x3fU)) : (0x7fffffffULL 
                                          | (0x80000000ULL 
                                             & ((QData)((IData)(
                                                                (1U 
                                                                 & (~ (IData)(vlSelf->__PVT__FPToInt__DOT__coreOp))))) 
                                                << 0x1fU))))
                    : ((2U & (IData)(vlSelf->__PVT__FPToInt__DOT__coreOp))
                        ? ((QData)((IData)((1U & (IData)(vlSelf->__PVT__FPToInt__DOT__coreOp)))) 
                           << 0x3fU) : (0x80000000ULL 
                                        & ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(vlSelf->__PVT__FPToInt__DOT__coreOp)))) 
                                           << 0x1fU))))
                : ((((IData)(vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__rpath_rounder_io_signIn) 
                     & (IData)(vlSelf->__PVT__FPToInt__DOT__coreOp))
                     ? (- vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__int_abs)
                     : vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__int_abs) 
                   & (0xffffffffULL | ((QData)((IData)(
                                                       ((2U 
                                                         & (IData)(vlSelf->__PVT__FPToInt__DOT__coreOp))
                                                         ? 0xffffffffU
                                                         : 0U))) 
                                       << 0x20U))));
        vlSelf->__PVT__FPToInt__DOT__io_out_bits_result_r 
            = vlSelf->__PVT__FPToInt__DOT__isSingle;
    }
    if (vlSelf->__PVT__FPToInt__DOT___isSingle_T_7) {
        if ((3U == (7U & ((IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0_io_in_bits_op) 
                          >> 3U)))) {
            vlSelf->__PVT__FPToInt__DOT__rm = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0_io_in_bits_rm;
            vlSelf->__PVT__FPToInt__DOT__coreOp = (3U 
                                                   & (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0_io_in_bits_op));
        } else {
            vlSelf->__PVT__FPToInt__DOT__rm = 0U;
            vlSelf->__PVT__FPToInt__DOT__coreOp = 0U;
        }
        vlSelf->__PVT__FPToInt__DOT__src = (QData)((IData)(
                                                           ((3U 
                                                             == 
                                                             (7U 
                                                              & ((IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0_io_in_bits_op) 
                                                                 >> 3U)))
                                                             ? vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_2_io_in_bits_a
                                                             : 0U)));
        vlSelf->__PVT__FPToInt__DOT__isSingle = (1U 
                                                 & (~ (IData)(
                                                              (0x1cU 
                                                               == 
                                                               (0x3cU 
                                                                & (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0_io_in_bits_op))))));
    }
    if (((~ ((~ (IData)(vlSelf->__PVT__FPMV_io_out_ready)) 
             & (IData)(vlSelf->__PVT__FPMV__DOT__REG_1))) 
         & (IData)(vlSelf->__PVT__FPMV__DOT__REG))) {
        vlSelf->__PVT__FPMV__DOT__io_out_bits_result_r 
            = ((2U == (IData)(vlSelf->__PVT__FPMV__DOT__s1_op))
                ? (QData)((IData)(((((IData)(vlSelf->__PVT__FPMV__DOT__classifyOut_decode___05FisNaN) 
                                     & (IData)((vlSelf->__PVT__FPMV__DOT__a 
                                                >> 0x16U))) 
                                    << 9U) | ((((~ (IData)(
                                                           (vlSelf->__PVT__FPMV__DOT__a 
                                                            >> 0x16U))) 
                                                & (IData)(vlSelf->__PVT__FPMV__DOT__classifyOut_decode___05FisNaN)) 
                                               << 8U) 
                                              | ((((~ (IData)(
                                                              (vlSelf->__PVT__FPMV__DOT__a 
                                                               >> 0x1fU))) 
                                                   & (IData)(vlSelf->__PVT__FPMV__DOT__classifyOut_decode___05FisInf)) 
                                                  << 7U) 
                                                 | ((((~ (IData)(
                                                                 (vlSelf->__PVT__FPMV__DOT__a 
                                                                  >> 0x1fU))) 
                                                      & (IData)(vlSelf->__PVT__FPMV__DOT__classifyOut_isNormal)) 
                                                     << 6U) 
                                                    | ((((~ (IData)(
                                                                    (vlSelf->__PVT__FPMV__DOT__a 
                                                                     >> 0x1fU))) 
                                                         & (IData)(vlSelf->__PVT__FPMV__DOT__classifyOut_decode___05FisSubnormal)) 
                                                        << 5U) 
                                                       | ((((~ (IData)(
                                                                       (vlSelf->__PVT__FPMV__DOT__a 
                                                                        >> 0x1fU))) 
                                                            & (IData)(vlSelf->__PVT__FPMV__DOT__classifyOut_decode___05FisZero)) 
                                                           << 4U) 
                                                          | ((((IData)(vlSelf->__PVT__FPMV__DOT__classifyOut_decode___05FisZero) 
                                                               & (IData)(
                                                                         (vlSelf->__PVT__FPMV__DOT__a 
                                                                          >> 0x1fU))) 
                                                              << 3U) 
                                                             | ((((IData)(vlSelf->__PVT__FPMV__DOT__classifyOut_decode___05FisSubnormal) 
                                                                  & (IData)(
                                                                            (vlSelf->__PVT__FPMV__DOT__a 
                                                                             >> 0x1fU))) 
                                                                 << 2U) 
                                                                | ((((IData)(vlSelf->__PVT__FPMV__DOT__classifyOut_isNormal) 
                                                                     & (IData)(
                                                                               (vlSelf->__PVT__FPMV__DOT__a 
                                                                                >> 0x1fU))) 
                                                                    << 1U) 
                                                                   | ((IData)(vlSelf->__PVT__FPMV__DOT__classifyOut_decode___05FisInf) 
                                                                      & (IData)(
                                                                                (vlSelf->__PVT__FPMV__DOT__a 
                                                                                >> 0x1fU))))))))))))))
                : vlSelf->__PVT__FPMV__DOT__a);
    }
    if (((~ ((~ (IData)(vlSelf->__PVT__FCMP_io_out_ready)) 
             & (IData)(vlSelf->__PVT__FCMP__DOT__REG_1))) 
         & (IData)(vlSelf->__PVT__FCMP__DOT__REG))) {
        vlSelf->__PVT__FCMP__DOT__io_out_bits_result_r 
            = ((0x10U & (IData)(vlSelf->__PVT__FCMP__DOT__fflags))
                ? 0U : ((8U == (8U | (IData)(vlSelf->__PVT__FCMP__DOT__op)))
                         ? ((IData)(vlSelf->__PVT__FCMP__DOT__lt)
                             ? vlSelf->__PVT__FCMP__DOT__a
                             : vlSelf->__PVT__FCMP__DOT__b)
                         : ((9U == (8U | (IData)(vlSelf->__PVT__FCMP__DOT__op)))
                             ? ((IData)(vlSelf->__PVT__FCMP__DOT__lt)
                                 ? vlSelf->__PVT__FCMP__DOT__b
                                 : vlSelf->__PVT__FCMP__DOT__a)
                             : ((3U == (IData)(vlSelf->__PVT__FCMP__DOT__op))
                                 ? (IData)(vlSelf->__PVT__FCMP__DOT__lt)
                                 : ((2U == (IData)(vlSelf->__PVT__FCMP__DOT__op))
                                     ? (IData)(vlSelf->__PVT__FCMP__DOT__le)
                                     : ((5U == (IData)(vlSelf->__PVT__FCMP__DOT__op))
                                         ? (1U & (~ (IData)(vlSelf->__PVT__FCMP__DOT__eq)))
                                         : ((4U == (IData)(vlSelf->__PVT__FCMP__DOT__op))
                                             ? (IData)(vlSelf->__PVT__FCMP__DOT__eq)
                                             : 0U)))))));
    }
    vlSelf->__PVT__IntToFP__DOT__REG = __Vdly__IntToFP__DOT__REG;
    vlSelf->__PVT__IntToFP__DOT__REG_1 = __Vdly__IntToFP__DOT__REG_1;
    vlSelf->__PVT__FMA__DOT__mulPipe__DOT__REG = __Vdly__FMA__DOT__mulPipe__DOT__REG;
    vlSelf->__PVT__FMA__DOT__mulPipe__DOT__REG_1 = __Vdly__FMA__DOT__mulPipe__DOT__REG_1;
    vlSelf->__PVT__FMA__DOT__addPipe__DOT__REG = __Vdly__FMA__DOT__addPipe__DOT__REG;
    vlSelf->__PVT__FMA__DOT__addPipe__DOT__REG_1 = __Vdly__FMA__DOT__addPipe__DOT__REG_1;
    vlSelf->__PVT__FPToInt__DOT__REG = __Vdly__FPToInt__DOT__REG;
    vlSelf->__PVT__FPToInt__DOT__REG_1 = __Vdly__FPToInt__DOT__REG_1;
    if (__Vdlyvset__FMA__DOT__mulFIFO__DOT__ram_result__v0) {
        vlSelf->__PVT__FMA__DOT__mulFIFO__DOT__ram_result[0U] 
            = __Vdlyvval__FMA__DOT__mulFIFO__DOT__ram_result__v0;
    }
    if (__Vdlyvset__FMA__DOT__addFIFO__DOT__ram_result__v0) {
        vlSelf->__PVT__FMA__DOT__addFIFO__DOT__ram_result[0U] 
            = __Vdlyvval__FMA__DOT__addFIFO__DOT__ram_result__v0;
    }
    vlSelf->__PVT__FPMV__DOT__REG = __Vdly__FPMV__DOT__REG;
    vlSelf->__PVT__FPMV__DOT__REG_1 = __Vdly__FPMV__DOT__REG_1;
    vlSelf->__PVT__FCMP__DOT__REG = __Vdly__FCMP__DOT__REG;
    vlSelf->__PVT__FCMP__DOT__REG_1 = __Vdly__FCMP__DOT__REG_1;
    if (vlSelf->__PVT__FMA__DOT__mulPipe__DOT__multiplier_io_regEnables_0) {
        vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s2_io_in_r_early_overflow 
            = (0x17dU < (IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s1__DOT__exp_sum));
        vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s2_io_in_r_rm 
            = vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s1_io_rm;
        vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s2_io_in_r_exp_shifted 
            = (0x1ffU & (((IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s1__DOT__exp_sum) 
                          - (IData)(0x64U)) - (IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s1__DOT__shift_amt)));
        vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s2_io_in_r_may_be_subnormal 
            = (1U & ((IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s1__DOT__exceed_lim) 
                     | (1U & (((IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s1__DOT__exp_sum) 
                               - (IData)(0x65U)) >> 9U))));
        vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s2_io_in_r_shift_amt 
            = vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s1__DOT__shift_amt;
        vlSelf->__PVT__FMA__DOT__mulPipe__DOT__multiplier__DOT__io_result_r_1 
            = vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s1__DOT__raw_b_sig;
        vlSelf->__PVT__FMA__DOT__mulPipe__DOT__multiplier__DOT__io_result_r 
            = vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s1__DOT__raw_a_sig;
        vlSelf->__PVT__FMA__DOT__mulPipe__DOT__toAdd_addAnother_r 
            = ((0U == (7U & ((IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0_io_in_bits_op) 
                             >> 3U))) ? ((IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.pipe__DOT__fpu__DOT____VdfgTmp_hd90b9525__0)
                                          ? vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__pipe__DOT__exe_data__DOT__ram_in2_2
                                         [0U] : vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__pipe__DOT__exe_data__DOT__ram_in3_2
                                         [0U]) : 0U);
        vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s2_io_in_r_special_case_valid 
            = ((IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s1__DOT__hasZero) 
               | ((IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s1__DOT__hasNaN) 
                  | (IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s1__DOT__hasInf)));
        vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s2_io_in_r_special_case_bits_inf 
            = vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s1__DOT__hasInf;
        vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s2_io_in_r_special_case_bits_nan 
            = ((IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s1__DOT__hasNaN) 
               | ((IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s1__DOT__hasZero) 
                  & (IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s1__DOT__hasInf)));
        vlSelf->__PVT__FMA__DOT__mulPipe__DOT__toAdd_op_r 
            = vlSelf->__PVT__FMA__DOT__mulPipe_io_in_bits_op;
        vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s2_io_in_r_special_case_bits_hasZero 
            = vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s1__DOT__hasZero;
        vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s2_io_in_r_prod_sign 
            = (1U & ((IData)(((0U == (0x38U & (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0_io_in_bits_op))) 
                              & (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_2_io_in_bits_a 
                                 >> 0x1fU))) ^ (vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s1_io_b 
                                                >> 0x1fU)));
    }
    VL_EXTEND_WQ(74,48, __Vtemp_hd69ef506__0, vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3_io_in_r_prod);
    VL_SHIFTL_WWI(74,74,9, __Vtemp_h2d568758__0, __Vtemp_hd69ef506__0, (IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3_io_in_r_shift_amt));
    vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__sig_shifted_raw[0U] 
        = __Vtemp_h2d568758__0[0U];
    vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__sig_shifted_raw[1U] 
        = __Vtemp_h2d568758__0[1U];
    vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__sig_shifted_raw[2U] 
        = (0x3ffU & __Vtemp_h2d568758__0[2U]);
    VL_EXTEND_WQ(585,48, __Vtemp_hd7be74e6__0, vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3_io_in_r_prod);
    VL_SHIFTL_WWI(585,585,9, __Vtemp_h2ce4aade__0, __Vtemp_hd7be74e6__0, (IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3_io_in_r_shift_amt));
    __PVT__FMA__DOT__mulPipe__DOT__s3__DOT___sig_shifted_raw_T[0U] 
        = (VVentus__ConstPool__CONST_h7b110aeb_0[0U] 
           & __Vtemp_h2ce4aade__0[0U]);
    __PVT__FMA__DOT__mulPipe__DOT__s3__DOT___sig_shifted_raw_T[1U] 
        = (VVentus__ConstPool__CONST_h7b110aeb_0[1U] 
           & __Vtemp_h2ce4aade__0[1U]);
    __PVT__FMA__DOT__mulPipe__DOT__s3__DOT___sig_shifted_raw_T[2U] 
        = (VVentus__ConstPool__CONST_h7b110aeb_0[2U] 
           & __Vtemp_h2ce4aade__0[2U]);
    __PVT__FMA__DOT__mulPipe__DOT__s3__DOT___sig_shifted_raw_T[3U] 
        = (VVentus__ConstPool__CONST_h7b110aeb_0[3U] 
           & __Vtemp_h2ce4aade__0[3U]);
    __PVT__FMA__DOT__mulPipe__DOT__s3__DOT___sig_shifted_raw_T[4U] 
        = (VVentus__ConstPool__CONST_h7b110aeb_0[4U] 
           & __Vtemp_h2ce4aade__0[4U]);
    __PVT__FMA__DOT__mulPipe__DOT__s3__DOT___sig_shifted_raw_T[5U] 
        = (VVentus__ConstPool__CONST_h7b110aeb_0[5U] 
           & __Vtemp_h2ce4aade__0[5U]);
    __PVT__FMA__DOT__mulPipe__DOT__s3__DOT___sig_shifted_raw_T[6U] 
        = (VVentus__ConstPool__CONST_h7b110aeb_0[6U] 
           & __Vtemp_h2ce4aade__0[6U]);
    __PVT__FMA__DOT__mulPipe__DOT__s3__DOT___sig_shifted_raw_T[7U] 
        = (VVentus__ConstPool__CONST_h7b110aeb_0[7U] 
           & __Vtemp_h2ce4aade__0[7U]);
    __PVT__FMA__DOT__mulPipe__DOT__s3__DOT___sig_shifted_raw_T[8U] 
        = (VVentus__ConstPool__CONST_h7b110aeb_0[8U] 
           & __Vtemp_h2ce4aade__0[8U]);
    __PVT__FMA__DOT__mulPipe__DOT__s3__DOT___sig_shifted_raw_T[9U] 
        = (VVentus__ConstPool__CONST_h7b110aeb_0[9U] 
           & __Vtemp_h2ce4aade__0[9U]);
    __PVT__FMA__DOT__mulPipe__DOT__s3__DOT___sig_shifted_raw_T[0xaU] 
        = (VVentus__ConstPool__CONST_h7b110aeb_0[0xaU] 
           & __Vtemp_h2ce4aade__0[0xaU]);
    __PVT__FMA__DOT__mulPipe__DOT__s3__DOT___sig_shifted_raw_T[0xbU] 
        = (VVentus__ConstPool__CONST_h7b110aeb_0[0xbU] 
           & __Vtemp_h2ce4aade__0[0xbU]);
    __PVT__FMA__DOT__mulPipe__DOT__s3__DOT___sig_shifted_raw_T[0xcU] 
        = (VVentus__ConstPool__CONST_h7b110aeb_0[0xcU] 
           & __Vtemp_h2ce4aade__0[0xcU]);
    __PVT__FMA__DOT__mulPipe__DOT__s3__DOT___sig_shifted_raw_T[0xdU] 
        = (VVentus__ConstPool__CONST_h7b110aeb_0[0xdU] 
           & __Vtemp_h2ce4aade__0[0xdU]);
    __PVT__FMA__DOT__mulPipe__DOT__s3__DOT___sig_shifted_raw_T[0xeU] 
        = (VVentus__ConstPool__CONST_h7b110aeb_0[0xeU] 
           & __Vtemp_h2ce4aade__0[0xeU]);
    __PVT__FMA__DOT__mulPipe__DOT__s3__DOT___sig_shifted_raw_T[0xfU] 
        = (VVentus__ConstPool__CONST_h7b110aeb_0[0xfU] 
           & __Vtemp_h2ce4aade__0[0xfU]);
    __PVT__FMA__DOT__mulPipe__DOT__s3__DOT___sig_shifted_raw_T[0x10U] 
        = (VVentus__ConstPool__CONST_h7b110aeb_0[0x10U] 
           & __Vtemp_h2ce4aade__0[0x10U]);
    __PVT__FMA__DOT__mulPipe__DOT__s3__DOT___sig_shifted_raw_T[0x11U] 
        = (VVentus__ConstPool__CONST_h7b110aeb_0[0x11U] 
           & __Vtemp_h2ce4aade__0[0x11U]);
    __PVT__FMA__DOT__mulPipe__DOT__s3__DOT___sig_shifted_raw_T[0x12U] 
        = (VVentus__ConstPool__CONST_h7b110aeb_0[0x12U] 
           & __Vtemp_h2ce4aade__0[0x12U]);
    vlSelf->__PVT__FMA__DOT__toOutArbiter_io_out_valid 
        = ((IData)(vlSelf->__PVT__FMA__DOT__addFIFO__DOT__maybe_full) 
           | (IData)(vlSelf->__PVT__FMA__DOT__mulFIFO__DOT__maybe_full));
    vlSelf->__PVT__FMA__DOT__addFIFO__DOT__do_deq = 
        ((IData)(vlSelf->__PVT__FMA__DOT__addFIFO__DOT__maybe_full) 
         & (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addFIFO_io_deq_ready));
    vlSelf->__PVT__FMA__DOT__mulFIFO_io_deq_ready = 
        ((~ (IData)(vlSelf->__PVT__FMA__DOT__addFIFO__DOT__maybe_full)) 
         & (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addFIFO_io_deq_ready));
    vlSelf->__PVT__FMA__DOT__addPipe_io_out_ready = 
        (1U & ((~ (IData)(vlSelf->__PVT__FMA__DOT__addFIFO__DOT__maybe_full)) 
               | (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addFIFO_io_deq_ready)));
    vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2__DOT__near_path_is_zero 
        = ((0U == (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_near_path_out_exp)) 
           & (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_near_path_sig_is_zero));
    if (vlSelf->__PVT__FPMV__DOT___a_T_8) {
        vlSelf->__PVT__FPMV__DOT__s1_op = vlSelf->__PVT__FPMV_io_in_bits_op;
        vlSelf->__PVT__FPMV__DOT__a = ((2U == (IData)(vlSelf->__PVT__FPMV_io_in_bits_op))
                                        ? (QData)((IData)(vlSelf->__PVT__FPMV_io_in_bits_a))
                                        : (((QData)((IData)(
                                                            ((4U 
                                                              == (IData)(vlSelf->__PVT__FPMV_io_in_bits_op))
                                                              ? 
                                                             ((IData)(
                                                                      ((0x10U 
                                                                        == 
                                                                        (0x38U 
                                                                         & (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0_io_in_bits_op))) 
                                                                       & (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_2_io_in_bits_a 
                                                                          >> 0x1fU))) 
                                                              ^ (IData)(vlSelf->FPMV__DOT____VdfgTmp_h8faae4b3__0))
                                                              : 
                                                             ((5U 
                                                               == (IData)(vlSelf->__PVT__FPMV_io_in_bits_op))
                                                               ? 
                                                              (1U 
                                                               & (~ (IData)(vlSelf->FPMV__DOT____VdfgTmp_h8faae4b3__0)))
                                                               : 
                                                              ((6U 
                                                                == (IData)(vlSelf->__PVT__FPMV_io_in_bits_op))
                                                                ? 
                                                               (((2U 
                                                                  == 
                                                                  (7U 
                                                                   & ((IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0_io_in_bits_op) 
                                                                      >> 3U)))
                                                                  ? vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_2_io_in_bits_b
                                                                  : 0U) 
                                                                >> 0x1fU)
                                                                : vlSelf->__PVT__FPMV_io_in_bits_a))))) 
                                            << 0x1fU) 
                                           | (QData)((IData)(
                                                             ((2U 
                                                               == 
                                                               (7U 
                                                                & ((IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0_io_in_bits_op) 
                                                                   >> 3U)))
                                                               ? 
                                                              (0x7fffffffU 
                                                               & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_2_io_in_bits_a)
                                                               : 0U)))));
    }
    if (vlSelf->__PVT__FCMP__DOT___eq_T_4) {
        vlSelf->__PVT__FCMP__DOT__a = vlSelf->__PVT__FCMP__DOT__FCMPCore_io_a;
        vlSelf->__PVT__FCMP__DOT__b = vlSelf->__PVT__FCMP__DOT__FCMPCore_io_b;
        vlSelf->__PVT__FCMP__DOT__eq = ((~ (IData)(vlSelf->__PVT__FCMP__DOT__FCMPCore__DOT__hasNaN)) 
                                        & ((0U == (IData)(vlSelf->__PVT__FCMP__DOT__FCMPCore__DOT__a_minus_b)) 
                                           | (IData)(vlSelf->__PVT__FCMP__DOT__FCMPCore__DOT__bothZero)));
        vlSelf->__PVT__FCMP__DOT__lt = ((~ (IData)(vlSelf->__PVT__FCMP__DOT__FCMPCore__DOT__hasNaN)) 
                                        & ((IData)(vlSelf->__PVT__FCMP__DOT__FCMPCore__DOT__same_sign)
                                            ? ((0U 
                                                != (IData)(vlSelf->__PVT__FCMP__DOT__FCMPCore__DOT__a_minus_b)) 
                                               & (IData)(vlSelf->__PVT__FCMP__DOT__FCMPCore__DOT__uint_less))
                                            : ((~ (IData)(vlSelf->__PVT__FCMP__DOT__FCMPCore__DOT__bothZero)) 
                                               & (IData)(vlSelf->__PVT__FCMP__DOT__FCMPCore__DOT__fp_a_sign))));
        vlSelf->__PVT__FCMP__DOT__le = ((~ (IData)(vlSelf->__PVT__FCMP__DOT__FCMPCore__DOT__hasNaN)) 
                                        & ((IData)(vlSelf->__PVT__FCMP__DOT__FCMPCore__DOT__same_sign)
                                            ? ((IData)(vlSelf->__PVT__FCMP__DOT__FCMPCore__DOT__uint_less) 
                                               | (0U 
                                                  == (IData)(vlSelf->__PVT__FCMP__DOT__FCMPCore__DOT__a_minus_b)))
                                            : ((IData)(vlSelf->__PVT__FCMP__DOT__FCMPCore__DOT__fp_a_sign) 
                                               | (IData)(vlSelf->__PVT__FCMP__DOT__FCMPCore__DOT__bothZero))));
        vlSelf->__PVT__FCMP__DOT__op = ((1U == (7U 
                                                & ((IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0_io_in_bits_op) 
                                                   >> 3U)))
                                         ? (7U & (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0_io_in_bits_op))
                                         : 0U);
        vlSelf->__PVT__FCMP__DOT__fflags = ((((~ (IData)(
                                                         ((8U 
                                                           == 
                                                           (0x38U 
                                                            & (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0_io_in_bits_op))) 
                                                          & (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_2_io_in_bits_a 
                                                             >> 0x16U)))) 
                                              & (IData)(vlSelf->__PVT__FCMP__DOT__FCMPCore__DOT__decode_a___05FisNaN)) 
                                             | ((~ (IData)(
                                                           ((8U 
                                                             == 
                                                             (0x38U 
                                                              & (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0_io_in_bits_op))) 
                                                            & (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_2_io_in_bits_b 
                                                               >> 0x16U)))) 
                                                & (IData)(vlSelf->__PVT__FCMP__DOT__FCMPCore__DOT__decode_b___05FisNaN))) 
                                            << 4U);
    }
    vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__exp_is_subnormal 
        = ((~ (__PVT__FMA__DOT__mulPipe__DOT__s3__DOT___sig_shifted_raw_T[2U] 
               >> 9U)) & (IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3_io_in_r_may_be_subnormal));
    vlSelf->outArbiter__DOT____VdfgTmp_h245e14da__0 
        = ((IData)(vlSelf->__PVT__FMA__DOT__toOutArbiter_io_out_valid) 
           | (IData)(vlSelf->__PVT__FCMP__DOT__REG_1));
    vlSelf->__PVT__FCMP_io_out_ready = ((~ (IData)(vlSelf->__PVT__FMA__DOT__toOutArbiter_io_out_valid)) 
                                        & (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addFIFO_io_deq_ready));
    vlSelf->__PVT__FMA__DOT__mulFIFO__DOT__do_deq = 
        ((IData)(vlSelf->__PVT__FMA__DOT__mulFIFO_io_deq_ready) 
         & (IData)(vlSelf->__PVT__FMA__DOT__mulFIFO__DOT__maybe_full));
    vlSelf->__PVT__FMA__DOT__mulFIFO_io_enq_ready = 
        (1U & ((~ (IData)(vlSelf->__PVT__FMA__DOT__mulFIFO__DOT__maybe_full)) 
               | (IData)(vlSelf->__PVT__FMA__DOT__mulFIFO_io_deq_ready)));
    vlSelf->__PVT__FMA__DOT__addFIFO__DOT__ram_result_MPORT_en 
        = ((IData)(vlSelf->__PVT__FMA__DOT__addPipe_io_out_ready) 
           & (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__REG_1));
    vlSelf->__PVT__FMA__DOT__addPipe__DOT___s2_io_in_T_3 
        = ((~ ((~ (IData)(vlSelf->__PVT__FMA__DOT__addPipe_io_out_ready)) 
               & (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__REG_1))) 
           & (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__REG));
    vlSelf->__PVT__FMA__DOT__addPipe__DOT___T_2 = (
                                                   (~ (IData)(vlSelf->__PVT__FMA__DOT__addPipe_io_out_ready)) 
                                                   & ((IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__REG) 
                                                      & (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__REG_1)));
    vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2__DOT__far_path_tininess_rounder__DOT__rounder__DOT__inexact 
        = (IData)((0U != (3U & vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_far_path_out_sig)));
    vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2__DOT__far_path_rounder__DOT__inexact 
        = (IData)((0U != (7U & vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_far_path_out_sig)));
    vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2__DOT__near_path_tininess_rounder__DOT__rounder__DOT__inexact 
        = (IData)((0U != (3U & vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_near_path_out_sig)));
    vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2__DOT__near_path_rounder__DOT__inexact 
        = (IData)((0U != (7U & vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_near_path_out_sig)));
    vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2__DOT__rmin 
        = ((1U == (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_rm)) 
           | (((~ (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_far_path_out_sign)) 
               & (2U == (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_rm))) 
              | ((3U == (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_rm)) 
                 & (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_far_path_out_sign))));
    vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__no_extra_shift 
        = (1U & ((__PVT__FMA__DOT__mulPipe__DOT__s3__DOT___sig_shifted_raw_T[2U] 
                  >> 9U) | (IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__exp_is_subnormal)));
    vlSelf->outArbiter__DOT____VdfgTmp_h5724d08f__0 
        = ((IData)(vlSelf->outArbiter__DOT____VdfgTmp_h245e14da__0) 
           | (IData)(vlSelf->__PVT__FPMV__DOT__REG_1));
    vlSelf->__PVT__FPMV_io_out_ready = ((~ (IData)(vlSelf->outArbiter__DOT____VdfgTmp_h245e14da__0)) 
                                        & (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addFIFO_io_deq_ready));
    vlSelf->__PVT__IntToFP__DOT__IntToFP_postnorm__DOT__rounder__DOT__inexact 
        = (IData)((0ULL != (0xffffffffffULL & vlSelf->__PVT__IntToFP__DOT__r_norm_int)));
    if (vlSelf->__PVT__FPToInt__DOT__isSingle) {
        vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__rpath_rounder_io_signIn 
            = (1U & (IData)((vlSelf->__PVT__FPToInt__DOT__src 
                             >> 0x1fU)));
        vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__fp_a_sig 
            = (0x7fffffU & (IData)(vlSelf->__PVT__FPToInt__DOT__src));
        vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__fp_a_exp 
            = (0xffU & (IData)((vlSelf->__PVT__FPToInt__DOT__src 
                                >> 0x17U)));
    } else {
        vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__rpath_rounder_io_signIn = 0U;
        vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__fp_a_sig = 0U;
        vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__fp_a_exp = 0U;
    }
    vlSelf->__PVT__FPMV__DOT__classifyOut_decode___05FisSubnormal 
        = ((~ (IData)((0U != (0xffU & (IData)((vlSelf->__PVT__FPMV__DOT__a 
                                               >> 0x17U)))))) 
           & (0U != (0x7fffffU & (IData)(vlSelf->__PVT__FPMV__DOT__a))));
    vlSelf->__PVT__FPMV__DOT__classifyOut_decode___05FisInf 
        = (IData)(((0x7f800000ULL == (0x7f800000ULL 
                                      & vlSelf->__PVT__FPMV__DOT__a)) 
                   & (~ (IData)((0U != (0x7fffffU & (IData)(vlSelf->__PVT__FPMV__DOT__a)))))));
    vlSelf->__PVT__FPMV__DOT__classifyOut_decode___05FisZero 
        = (1U & ((~ (IData)((0U != (0xffU & (IData)(
                                                    (vlSelf->__PVT__FPMV__DOT__a 
                                                     >> 0x17U)))))) 
                 & (~ (IData)((0U != (0x7fffffU & (IData)(vlSelf->__PVT__FPMV__DOT__a)))))));
    vlSelf->__PVT__FPMV__DOT__classifyOut_decode___05FisNaN 
        = (IData)(((0x7f800000ULL == (0x7f800000ULL 
                                      & vlSelf->__PVT__FPMV__DOT__a)) 
                   & (0U != (0x7fffffU & (IData)(vlSelf->__PVT__FPMV__DOT__a)))));
    vlSelf->__PVT__FPMV__DOT__classifyOut_isNormal 
        = ((~ (IData)((0xffU == (0xffU & (IData)((vlSelf->__PVT__FPMV__DOT__a 
                                                  >> 0x17U)))))) 
           & (0U != (0xffU & (IData)((vlSelf->__PVT__FPMV__DOT__a 
                                      >> 0x17U)))));
    if ((4U == (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_rm))) {
        vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2__DOT__far_path_rounder__DOT__r_up 
            = (1U & (vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_far_path_out_sig 
                     >> 2U));
        vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2__DOT__near_path_rounder__DOT__r_up 
            = (1U & (vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_near_path_out_sig 
                     >> 2U));
    } else if ((2U == (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_rm))) {
        vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2__DOT__far_path_rounder__DOT__r_up 
            = (1U & ((IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2__DOT__far_path_rounder__DOT__inexact) 
                     & (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_far_path_out_sign)));
        vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2__DOT__near_path_rounder__DOT__r_up 
            = (1U & ((IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2__DOT__near_path_rounder__DOT__inexact) 
                     & (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_near_path_out_sign)));
    } else if ((3U == (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_rm))) {
        vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2__DOT__far_path_rounder__DOT__r_up 
            = (1U & ((~ (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_far_path_out_sign)) 
                     & (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2__DOT__far_path_rounder__DOT__inexact)));
        vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2__DOT__near_path_rounder__DOT__r_up 
            = (1U & ((~ (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_near_path_out_sign)) 
                     & (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2__DOT__near_path_rounder__DOT__inexact)));
    } else {
        vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2__DOT__far_path_rounder__DOT__r_up 
            = (1U & ((1U != (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_rm)) 
                     & ((0U == (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_rm)) 
                        & ((vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_far_path_out_sig 
                            >> 2U) & (IData)((0U != 
                                              (0xbU 
                                               & vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_far_path_out_sig)))))));
        vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2__DOT__near_path_rounder__DOT__r_up 
            = (1U & ((1U != (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_rm)) 
                     & ((0U == (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_rm)) 
                        & ((vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_near_path_out_sig 
                            >> 2U) & (IData)((0U != 
                                              (0xbU 
                                               & vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_near_path_out_sig)))))));
    }
    VL_SHIFTL_WWI(74,74,32, __Vtemp_hf13d2d1e__0, vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__sig_shifted_raw, 1U);
    if (vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__no_extra_shift) {
        __PVT__FMA__DOT__mulPipe__DOT__s3__DOT___exp_pre_round_T_2 
            = (0x1ffU & (IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3_io_in_r_exp_shifted));
        vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__sig_shifted[0U] 
            = vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__sig_shifted_raw[0U];
        vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__sig_shifted[1U] 
            = vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__sig_shifted_raw[1U];
        vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__sig_shifted[2U] 
            = (0x3ffU & vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__sig_shifted_raw[2U]);
    } else {
        __PVT__FMA__DOT__mulPipe__DOT__s3__DOT___exp_pre_round_T_2 
            = (0x1ffU & ((IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3_io_in_r_exp_shifted) 
                         - (IData)(1U)));
        vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__sig_shifted[0U] 
            = __Vtemp_hf13d2d1e__0[0U];
        vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__sig_shifted[1U] 
            = __Vtemp_hf13d2d1e__0[1U];
        vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__sig_shifted[2U] 
            = (0x3ffU & __Vtemp_hf13d2d1e__0[2U]);
    }
    vlSelf->__PVT__FPToInt_io_out_ready = ((~ (IData)(vlSelf->outArbiter__DOT____VdfgTmp_h5724d08f__0)) 
                                           & (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addFIFO_io_deq_ready));
    vlSelf->__PVT__IntToFP_io_out_ready = ((~ ((IData)(vlSelf->outArbiter__DOT____VdfgTmp_h5724d08f__0) 
                                               | (IData)(vlSelf->__PVT__FPToInt__DOT__REG_1))) 
                                           & (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addFIFO_io_deq_ready));
    vlSelf->__PVT__IntToFP__DOT__IntToFP_postnorm__DOT__rounder__DOT__r_up 
        = (1U & ((4U == (IData)(vlSelf->__PVT__IntToFP__DOT__r_1))
                  ? (IData)((vlSelf->__PVT__IntToFP__DOT__r_norm_int 
                             >> 0x27U)) : ((2U == (IData)(vlSelf->__PVT__IntToFP__DOT__r_1))
                                            ? ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_postnorm__DOT__rounder__DOT__inexact) 
                                               & (IData)(vlSelf->__PVT__IntToFP__DOT__r_sign))
                                            : ((3U 
                                                == (IData)(vlSelf->__PVT__IntToFP__DOT__r_1))
                                                ? (
                                                   (~ (IData)(vlSelf->__PVT__IntToFP__DOT__r_sign)) 
                                                   & (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_postnorm__DOT__rounder__DOT__inexact))
                                                : (
                                                   (1U 
                                                    != (IData)(vlSelf->__PVT__IntToFP__DOT__r_1)) 
                                                   & ((0U 
                                                       == (IData)(vlSelf->__PVT__IntToFP__DOT__r_1)) 
                                                      & ((IData)(
                                                                 (vlSelf->__PVT__IntToFP__DOT__r_norm_int 
                                                                  >> 0x27U)) 
                                                         & (IData)(
                                                                   (0ULL 
                                                                    != 
                                                                    (0x17fffffffffULL 
                                                                     & vlSelf->__PVT__IntToFP__DOT__r_norm_int))))))))));
    vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__lpath_iv 
        = ((~ (IData)(vlSelf->__PVT__FPToInt__DOT__coreOp)) 
           & (IData)(vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__rpath_rounder_io_signIn));
    vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__raw_a_sig 
        = (((IData)((0U != (IData)(vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__fp_a_exp))) 
            << 0x17U) | vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__fp_a_sig);
    vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__raw_a_exp 
        = ((IData)(vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__fp_a_exp) 
           | (1U & (~ (IData)((0U != (IData)(vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__fp_a_exp))))));
    vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2__DOT__far_path_rounder_io_cout 
        = ((IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2__DOT__far_path_rounder__DOT__r_up) 
           & (0x3fffff8U == (0x3fffff8U & vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_far_path_out_sig)));
    vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2__DOT__near_path_exp_rounded 
        = (0xffU & (((IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2__DOT__near_path_rounder__DOT__r_up) 
                     & (0x7fffffU == (0x7fffffU & (vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_near_path_out_sig 
                                                   >> 3U)))) 
                    + (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_near_path_out_exp)));
    if (vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__exp_is_subnormal) {
        vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__exp_pre_round = 0U;
        vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__raw_in_exp = 0U;
    } else {
        vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__exp_pre_round 
            = __PVT__FMA__DOT__mulPipe__DOT__s3__DOT___exp_pre_round_T_2;
        vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__raw_in_exp 
            = (0xffU & (IData)(__PVT__FMA__DOT__mulPipe__DOT__s3__DOT___exp_pre_round_T_2));
    }
    vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__tininess_rounder__DOT__rounder__DOT__inexact 
        = (1U & ((vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__sig_shifted[1U] 
                  >> 0x10U) | (0U != (0xffffffffffffULL 
                                      & (((QData)((IData)(
                                                          vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__sig_shifted[1U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__sig_shifted[0U])))))));
    vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__rounder_io_stickyIn 
        = (1U & ((vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__sig_shifted[1U] 
                  >> 0x10U) | (0U != (0xffffffffffffULL 
                                      & (((QData)((IData)(
                                                          vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__sig_shifted[1U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__sig_shifted[0U])))))));
    vlSelf->__PVT__FPToInt__DOT___io_out_bits_fflags_T_3 
        = ((~ ((~ (IData)(vlSelf->__PVT__FPToInt_io_out_ready)) 
               & (IData)(vlSelf->__PVT__FPToInt__DOT__REG_1))) 
           & (IData)(vlSelf->__PVT__FPToInt__DOT__REG));
    vlSelf->__PVT__IntToFP__DOT___s2_isSingle_T_8 = 
        ((~ ((~ (IData)(vlSelf->__PVT__IntToFP_io_out_ready)) 
             & (IData)(vlSelf->__PVT__IntToFP__DOT__REG_1))) 
         & (IData)(vlSelf->__PVT__IntToFP__DOT__REG));
    vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__lpath_may_of 
        = ((IData)(vlSelf->__PVT__FPToInt__DOT__coreOp) 
           & ((IData)(vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__raw_a_exp) 
              == (0xffU & ((IData)(0x7fU) + ((2U & (IData)(vlSelf->__PVT__FPToInt__DOT__coreOp))
                                              ? 0x3fU
                                              : 0x1fU)))));
    vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__shiftRightJam__DOT___io_sticky_T 
        = ((vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__raw_a_sig 
            << 1U) & ((((IData)(1U) << (0x1fU & ((IData)(0x16U) 
                                                 - (IData)(vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__raw_a_exp)))) 
                       - (IData)(1U)) | ((0x19U < (0xffU 
                                                   & ((IData)(0x96U) 
                                                      - (IData)(vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__raw_a_exp))))
                                          ? 0x1ffffffU
                                          : 0U)));
    vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__shiftRightJam__DOT___io_out_T 
        = ((0x18U >= (0xffU & ((IData)(0x96U) - (IData)(vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__raw_a_exp))))
            ? (0x1ffffffU & ((vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__raw_a_sig 
                              << 1U) >> (0xffU & ((IData)(0x96U) 
                                                  - (IData)(vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__raw_a_exp)))))
            : 0U);
    vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__rounder__DOT__inexact 
        = (1U & ((vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__sig_shifted[1U] 
                  >> 0x11U) | (IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__rounder_io_stickyIn)));
    vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__rpath_rounder_io_in 
        = ((0x19U < (0xffU & ((IData)(0x96U) - (IData)(vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__raw_a_exp))))
            ? 0U : (0xffffffU & (vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__shiftRightJam__DOT___io_out_T 
                                 >> 1U)));
    vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__rpath_rounder_io_roundIn 
        = ((0x19U >= (0xffU & ((IData)(0x96U) - (IData)(vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__raw_a_exp)))) 
           & vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__shiftRightJam__DOT___io_out_T);
    vlSelf->__PVT__FMA__DOT__mulFIFO__DOT__ram_result_MPORT_en 
        = ((IData)(vlSelf->__PVT__FMA__DOT__mulFIFO_io_enq_ready) 
           & ((IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__REG_1) 
              & (2U == (IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__toAdd_op_r_1))));
    vlSelf->__PVT__FMA__DOT__mulPipe_io_out_ready = 
        (1U & (((~ (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT___T_2)) 
                & ((IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__toAdd_op_r_1) 
                   >> 2U)) | ((IData)(vlSelf->__PVT__FMA__DOT__mulFIFO_io_enq_ready) 
                              & (2U == (IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__toAdd_op_r_1)))));
    vlSelf->__PVT__FMA__DOT__toAddArbiter_io_in_0_valid 
        = (((IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__toAdd_op_r_1) 
            >> 2U) & (IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__REG_1));
    vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__rmin 
        = ((1U == (IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3_io_in_r_rm)) 
           | (((~ (IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3_io_in_r_prod_sign)) 
               & (2U == (IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3_io_in_r_rm))) 
              | ((3U == (IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3_io_in_r_rm)) 
                 & (IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3_io_in_r_prod_sign))));
    vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__rounder__DOT__r_up 
        = (1U & ((4U == (IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3_io_in_r_rm))
                  ? (vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__sig_shifted[1U] 
                     >> 0x11U) : ((2U == (IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3_io_in_r_rm))
                                   ? ((IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__rounder__DOT__inexact) 
                                      & (IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3_io_in_r_prod_sign))
                                   : ((3U == (IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3_io_in_r_rm))
                                       ? ((~ (IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3_io_in_r_prod_sign)) 
                                          & (IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__rounder__DOT__inexact))
                                       : ((1U != (IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3_io_in_r_rm)) 
                                          & ((0U == (IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3_io_in_r_rm)) 
                                             & ((vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__sig_shifted[1U] 
                                                 >> 0x11U) 
                                                & ((IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__rounder_io_stickyIn) 
                                                   | (vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__sig_shifted[1U] 
                                                      >> 0x12U)))))))));
    vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__rpath_rounder__DOT__inexact 
        = ((IData)(vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__rpath_rounder_io_roundIn) 
           | (0U != vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__shiftRightJam__DOT___io_sticky_T));
    vlSelf->__PVT__FMA__DOT__mulPipe__DOT___s3_io_in_T_3 
        = ((~ ((~ (IData)(vlSelf->__PVT__FMA__DOT__mulPipe_io_out_ready)) 
               & (IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__REG_1))) 
           & (IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__REG));
    vlSelf->__PVT__FMA__DOT__addPipe__DOT__isFMA = 
        ((IData)(vlSelf->__PVT__FMA__DOT__toAddArbiter_io_in_0_valid) 
         & ((IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__toAdd_op_r_1) 
            >> 2U));
    vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__rounder_io_cout 
        = ((IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__rounder__DOT__r_up) 
           & (0x7fffffU == (0x7fffffU & ((vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__sig_shifted[2U] 
                                          << 0xeU) 
                                         | (vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__sig_shifted[1U] 
                                            >> 0x12U)))));
    vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__rpath_rounder__DOT__r_up 
        = ((4U == (IData)(vlSelf->__PVT__FPToInt__DOT__rm))
            ? (IData)(vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__rpath_rounder_io_roundIn)
            : ((2U == (IData)(vlSelf->__PVT__FPToInt__DOT__rm))
                ? ((IData)(vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__rpath_rounder__DOT__inexact) 
                   & (IData)(vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__rpath_rounder_io_signIn))
                : ((3U == (IData)(vlSelf->__PVT__FPToInt__DOT__rm))
                    ? ((~ (IData)(vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__rpath_rounder_io_signIn)) 
                       & (IData)(vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__rpath_rounder__DOT__inexact))
                    : ((1U != (IData)(vlSelf->__PVT__FPToInt__DOT__rm)) 
                       & ((0U == (IData)(vlSelf->__PVT__FPToInt__DOT__rm)) 
                          & ((IData)(vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__rpath_rounder_io_roundIn) 
                             & ((0U != vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__shiftRightJam__DOT___io_sticky_T) 
                                | ((0x19U >= (0xffU 
                                              & ((IData)(0x96U) 
                                                 - (IData)(vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__raw_a_exp)))) 
                                   & (vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__shiftRightJam__DOT___io_out_T 
                                      >> 1U)))))))));
    vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__common_of 
        = (((IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__rounder_io_cout)
             ? (0xfeU == (IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__raw_in_exp))
             : (0xffU == (IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__raw_in_exp))) 
           | (IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3_io_in_r_early_overflow));
    vlSelf->__VdfgTmp_h22dfd192__0 = ((((IData)(vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__rpath_rounder__DOT__r_up) 
                                        & (0xffffffU 
                                           == vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__rpath_rounder_io_in)) 
                                       << 0x18U) | 
                                      (0xffffffU & 
                                       (vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__rpath_rounder_io_in 
                                        + (IData)(vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__rpath_rounder__DOT__r_up))));
    vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__int_abs 
        = ((0x96U <= (IData)(vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__raw_a_exp))
            ? ((QData)((IData)(vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__raw_a_sig)) 
               << (0x3fU & ((IData)(vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__raw_a_exp) 
                            - (IData)(0x16U)))) : (QData)((IData)(vlSelf->__VdfgTmp_h22dfd192__0)));
}

VL_INLINE_OPT void VVentus_ScalarFPU_1___nba_sequent__TOP__GPGPU_top__DOT__SM_wrapper__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3__0(VVentus_ScalarFPU_1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VVentus__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VVentus_ScalarFPU_1___nba_sequent__TOP__GPGPU_top__DOT__SM_wrapper__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3__0\n"); );
    // Init
    VlWide<19>/*584:0*/ __PVT__FMA__DOT__mulPipe__DOT__s3__DOT___sig_shifted_raw_T;
    SData/*8:0*/ __PVT__FMA__DOT__mulPipe__DOT__s3__DOT___exp_pre_round_T_2;
    CData/*0:0*/ __Vdly__FMA__DOT__mulPipe__DOT__REG;
    CData/*0:0*/ __Vdly__FMA__DOT__mulPipe__DOT__REG_1;
    CData/*0:0*/ __Vdly__FMA__DOT__addPipe__DOT__REG;
    CData/*0:0*/ __Vdly__FMA__DOT__addPipe__DOT__REG_1;
    IData/*31:0*/ __Vdlyvval__FMA__DOT__mulFIFO__DOT__ram_result__v0;
    CData/*0:0*/ __Vdlyvset__FMA__DOT__mulFIFO__DOT__ram_result__v0;
    IData/*31:0*/ __Vdlyvval__FMA__DOT__addFIFO__DOT__ram_result__v0;
    CData/*0:0*/ __Vdlyvset__FMA__DOT__addFIFO__DOT__ram_result__v0;
    CData/*0:0*/ __Vdly__FCMP__DOT__REG;
    CData/*0:0*/ __Vdly__FCMP__DOT__REG_1;
    CData/*0:0*/ __Vdly__FPMV__DOT__REG;
    CData/*0:0*/ __Vdly__FPMV__DOT__REG_1;
    CData/*0:0*/ __Vdly__FPToInt__DOT__REG;
    CData/*0:0*/ __Vdly__FPToInt__DOT__REG_1;
    CData/*0:0*/ __Vdly__IntToFP__DOT__REG;
    CData/*0:0*/ __Vdly__IntToFP__DOT__REG_1;
    VlWide<3>/*95:0*/ __Vtemp_hd69ef506__0;
    VlWide<3>/*95:0*/ __Vtemp_h2d568758__0;
    VlWide<19>/*607:0*/ __Vtemp_hd7be74e6__0;
    VlWide<19>/*607:0*/ __Vtemp_h2ce4aade__0;
    VlWide<3>/*95:0*/ __Vtemp_hf13d2d1e__0;
    // Body
    __Vdly__IntToFP__DOT__REG_1 = vlSelf->__PVT__IntToFP__DOT__REG_1;
    __Vdly__IntToFP__DOT__REG = vlSelf->__PVT__IntToFP__DOT__REG;
    __Vdly__FMA__DOT__mulPipe__DOT__REG = vlSelf->__PVT__FMA__DOT__mulPipe__DOT__REG;
    __Vdly__FMA__DOT__mulPipe__DOT__REG_1 = vlSelf->__PVT__FMA__DOT__mulPipe__DOT__REG_1;
    __Vdly__FMA__DOT__addPipe__DOT__REG = vlSelf->__PVT__FMA__DOT__addPipe__DOT__REG;
    __Vdly__FMA__DOT__addPipe__DOT__REG_1 = vlSelf->__PVT__FMA__DOT__addPipe__DOT__REG_1;
    __Vdly__FPToInt__DOT__REG = vlSelf->__PVT__FPToInt__DOT__REG;
    __Vdly__FPMV__DOT__REG = vlSelf->__PVT__FPMV__DOT__REG;
    __Vdly__FCMP__DOT__REG = vlSelf->__PVT__FCMP__DOT__REG;
    __Vdly__FPToInt__DOT__REG_1 = vlSelf->__PVT__FPToInt__DOT__REG_1;
    __Vdly__FPMV__DOT__REG_1 = vlSelf->__PVT__FPMV__DOT__REG_1;
    __Vdly__FCMP__DOT__REG_1 = vlSelf->__PVT__FCMP__DOT__REG_1;
    __Vdlyvset__FMA__DOT__mulFIFO__DOT__ram_result__v0 = 0U;
    __Vdlyvset__FMA__DOT__addFIFO__DOT__ram_result__v0 = 0U;
    if (vlSymsp->TOP.reset) {
        __Vdly__IntToFP__DOT__REG = 0U;
        __Vdly__IntToFP__DOT__REG_1 = 0U;
        __Vdly__FMA__DOT__mulPipe__DOT__REG = 0U;
        __Vdly__FMA__DOT__mulPipe__DOT__REG_1 = 0U;
        __Vdly__FMA__DOT__addPipe__DOT__REG = 0U;
        __Vdly__FMA__DOT__addPipe__DOT__REG_1 = 0U;
        __Vdly__FPToInt__DOT__REG = 0U;
        __Vdly__FPToInt__DOT__REG_1 = 0U;
        __Vdly__FPMV__DOT__REG = 0U;
        __Vdly__FPMV__DOT__REG_1 = 0U;
        __Vdly__FCMP__DOT__REG = 0U;
        __Vdly__FCMP__DOT__REG_1 = 0U;
        vlSelf->__PVT__FMA__DOT__mulFIFO__DOT__maybe_full = 0U;
        vlSelf->__PVT__FMA__DOT__addFIFO__DOT__maybe_full = 0U;
    } else {
        if ((1U & (~ ((~ (IData)(vlSelf->__PVT__IntToFP_io_out_ready)) 
                      & ((IData)(vlSelf->__PVT__IntToFP__DOT__REG) 
                         & (IData)(vlSelf->__PVT__IntToFP__DOT__REG_1)))))) {
            __Vdly__IntToFP__DOT__REG = vlSelf->__PVT__IntToFP_io_in_valid;
        }
        if ((1U & (~ ((~ (IData)(vlSelf->__PVT__IntToFP_io_out_ready)) 
                      & (IData)(vlSelf->__PVT__IntToFP__DOT__REG_1))))) {
            __Vdly__IntToFP__DOT__REG_1 = vlSelf->__PVT__IntToFP__DOT__REG;
        }
        if ((1U & (~ ((~ (IData)(vlSelf->__PVT__FMA__DOT__mulPipe_io_out_ready)) 
                      & ((IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__REG) 
                         & (IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__REG_1)))))) {
            __Vdly__FMA__DOT__mulPipe__DOT__REG = vlSelf->__PVT__FMA__DOT__mulPipe_io_in_valid;
        }
        if ((1U & (~ ((~ (IData)(vlSelf->__PVT__FMA__DOT__mulPipe_io_out_ready)) 
                      & (IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__REG_1))))) {
            __Vdly__FMA__DOT__mulPipe__DOT__REG_1 = vlSelf->__PVT__FMA__DOT__mulPipe__DOT__REG;
        }
        if ((1U & (~ ((~ (IData)(vlSelf->__PVT__FMA__DOT__addPipe_io_out_ready)) 
                      & ((IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__REG) 
                         & (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__REG_1)))))) {
            __Vdly__FMA__DOT__addPipe__DOT__REG = vlSelf->__PVT__FMA__DOT__addPipe_io_in_valid;
        }
        if ((1U & (~ ((~ (IData)(vlSelf->__PVT__FMA__DOT__addPipe_io_out_ready)) 
                      & (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__REG_1))))) {
            __Vdly__FMA__DOT__addPipe__DOT__REG_1 = vlSelf->__PVT__FMA__DOT__addPipe__DOT__REG;
        }
        if ((1U & (~ ((~ (IData)(vlSelf->__PVT__FPToInt_io_out_ready)) 
                      & ((IData)(vlSelf->__PVT__FPToInt__DOT__REG) 
                         & (IData)(vlSelf->__PVT__FPToInt__DOT__REG_1)))))) {
            __Vdly__FPToInt__DOT__REG = vlSelf->__PVT__FPToInt_io_in_valid;
        }
        if ((1U & (~ ((~ (IData)(vlSelf->__PVT__FPToInt_io_out_ready)) 
                      & (IData)(vlSelf->__PVT__FPToInt__DOT__REG_1))))) {
            __Vdly__FPToInt__DOT__REG_1 = vlSelf->__PVT__FPToInt__DOT__REG;
        }
        if ((1U & (~ ((~ (IData)(vlSelf->__PVT__FPMV_io_out_ready)) 
                      & ((IData)(vlSelf->__PVT__FPMV__DOT__REG) 
                         & (IData)(vlSelf->__PVT__FPMV__DOT__REG_1)))))) {
            __Vdly__FPMV__DOT__REG = vlSelf->__PVT__FPMV_io_in_valid;
        }
        if ((1U & (~ ((~ (IData)(vlSelf->__PVT__FPMV_io_out_ready)) 
                      & (IData)(vlSelf->__PVT__FPMV__DOT__REG_1))))) {
            __Vdly__FPMV__DOT__REG_1 = vlSelf->__PVT__FPMV__DOT__REG;
        }
        if ((1U & (~ ((~ (IData)(vlSelf->__PVT__FCMP_io_out_ready)) 
                      & ((IData)(vlSelf->__PVT__FCMP__DOT__REG) 
                         & (IData)(vlSelf->__PVT__FCMP__DOT__REG_1)))))) {
            __Vdly__FCMP__DOT__REG = vlSelf->__PVT__FCMP_io_in_valid;
        }
        if ((1U & (~ ((~ (IData)(vlSelf->__PVT__FCMP_io_out_ready)) 
                      & (IData)(vlSelf->__PVT__FCMP__DOT__REG_1))))) {
            __Vdly__FCMP__DOT__REG_1 = vlSelf->__PVT__FCMP__DOT__REG;
        }
        if (((IData)(vlSelf->__PVT__FMA__DOT__mulFIFO__DOT__ram_result_MPORT_en) 
             != (IData)(vlSelf->__PVT__FMA__DOT__mulFIFO__DOT__do_deq))) {
            vlSelf->__PVT__FMA__DOT__mulFIFO__DOT__maybe_full 
                = vlSelf->__PVT__FMA__DOT__mulFIFO__DOT__ram_result_MPORT_en;
        }
        if (((IData)(vlSelf->__PVT__FMA__DOT__addFIFO__DOT__ram_result_MPORT_en) 
             != (IData)(vlSelf->__PVT__FMA__DOT__addFIFO__DOT__do_deq))) {
            vlSelf->__PVT__FMA__DOT__addFIFO__DOT__maybe_full 
                = vlSelf->__PVT__FMA__DOT__addFIFO__DOT__ram_result_MPORT_en;
        }
    }
    if (vlSelf->__PVT__FMA__DOT__mulFIFO__DOT__ram_result_MPORT_en) {
        __Vdlyvval__FMA__DOT__mulFIFO__DOT__ram_result__v0 
            = ((IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3_io_in_r_special_case_valid)
                ? ((IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3_io_in_r_special_case_bits_nan)
                    ? 0x7fc00000U : ((IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3_io_in_r_special_case_bits_inf)
                                      ? (0x7f800000U 
                                         | ((IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3_io_in_r_prod_sign) 
                                            << 0x1fU))
                                      : ((IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3_io_in_r_prod_sign) 
                                         << 0x1fU)))
                : (((IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3_io_in_r_prod_sign) 
                    << 0x1fU) | ((0x7f800000U & (((IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__common_of)
                                                   ? 
                                                  ((IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__rmin)
                                                    ? 0xfeU
                                                    : 0xffU)
                                                   : 
                                                  ((IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__rounder_io_cout) 
                                                   + (IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__raw_in_exp))) 
                                                 << 0x17U)) 
                                 | (0x7fffffU & ((IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__common_of)
                                                  ? 
                                                 ((IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__rmin)
                                                   ? 0x7fffffU
                                                   : 0U)
                                                  : 
                                                 (((vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__sig_shifted[2U] 
                                                    << 0xeU) 
                                                   | (vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__sig_shifted[1U] 
                                                      >> 0x12U)) 
                                                  + (IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__rounder__DOT__r_up)))))));
        __Vdlyvset__FMA__DOT__mulFIFO__DOT__ram_result__v0 = 1U;
    }
    if (vlSelf->__PVT__FMA__DOT__addFIFO__DOT__ram_result_MPORT_en) {
        __Vdlyvval__FMA__DOT__addFIFO__DOT__ram_result__v0 
            = ((IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_special_case_valid)
                ? ((IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_special_case_bits_nan)
                    ? 0x7fc00000U : (0x7f800000U | 
                                     ((IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_special_case_bits_inf_sign) 
                                      << 0x1fU))) : 
               ((((IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_sel_far_path) 
                  & ((0xffU == (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_far_path_out_exp)) 
                     | (((IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2__DOT__far_path_rounder_io_cout) 
                         & (0xfeU == (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_far_path_out_exp))) 
                        | (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_far_path_mul_of)))) 
                 | ((~ (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_sel_far_path)) 
                    & (0xffU == (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2__DOT__near_path_exp_rounded))))
                 ? ((((IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_sel_far_path)
                       ? (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_far_path_out_sign)
                       : (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_near_path_out_sign)) 
                     << 0x1fU) | ((((IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2__DOT__rmin)
                                     ? 0xfeU : 0xffU) 
                                   << 0x17U) | ((IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2__DOT__rmin)
                                                 ? 0x7fffffU
                                                 : 0U)))
                 : ((IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_sel_far_path)
                     ? (((IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_far_path_out_sign) 
                         << 0x1fU) | ((0x7f800000U 
                                       & (((IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2__DOT__far_path_rounder_io_cout) 
                                           + (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_far_path_out_exp)) 
                                          << 0x17U)) 
                                      | (0x7fffffU 
                                         & ((vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_far_path_out_sig 
                                             >> 3U) 
                                            + (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2__DOT__far_path_rounder__DOT__r_up)))))
                     : (((((~ (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2__DOT__near_path_is_zero)) 
                           & (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_near_path_out_sign)) 
                          | ((2U == (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_rm)) 
                             & (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2__DOT__near_path_is_zero))) 
                         << 0x1fU) | (((IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2__DOT__near_path_exp_rounded) 
                                       << 0x17U) | 
                                      (0x7fffffU & 
                                       ((vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_near_path_out_sig 
                                         >> 3U) + (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2__DOT__near_path_rounder__DOT__r_up))))))));
        __Vdlyvset__FMA__DOT__addFIFO__DOT__ram_result__v0 = 1U;
    }
    if (vlSelf->__PVT__FMA__DOT__addPipe__DOT___s1_io_a_T_4) {
        vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1_io_b_inter_valid_r 
            = vlSelf->__PVT__FMA__DOT__addPipe__DOT__isFMA;
        vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1_io_b_inter_flags_r_isNaN 
            = ((IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__isFMA) 
               & (IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3_io_in_r_special_case_bits_nan));
        vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1_io_b_inter_flags_r_isInf 
            = ((IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__isFMA) 
               & ((~ (IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3_io_in_r_special_case_bits_nan)) 
                  & (IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3_io_in_r_special_case_bits_inf)));
    }
    if (vlSelf->__PVT__FMA__DOT__addPipe__DOT___s2_io_in_T_3) {
        if (vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT___near_path_out_T_2) {
            vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_near_path_sig_is_zero 
                = (1U & ((~ (IData)((0U != vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__near_path_mods_1__DOT__lza_ab_io_f))) 
                         & (~ ((IData)(1U) + (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__near_path_mods_1__DOT___a_minus_b_T_3)))));
            vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_near_path_out_exp 
                = (0xffU & (((IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__near_path_mods_1__DOT__exceed_lim)
                              ? (0U != (0x1ffffffffffffULL 
                                        & ((0x2000000000000ULL 
                                            >> (0x3fU 
                                                & (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__near_path_mods_1_io_in_a_exp))) 
                                           & (1ULL 
                                              + vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__near_path_mods_1__DOT___a_minus_b_T_3))))
                              : ((0U != (0x1ffffffffffffULL 
                                         & ((vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__near_path_mods_1__DOT__int_bit_mask 
                                             >> 1U) 
                                            & (1ULL 
                                               + vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__near_path_mods_1__DOT___a_minus_b_T_3)))) 
                                 | (0U != vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__near_path_mods_1__DOT___int_bit_predicted_T_1)))
                             ? (((IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__near_path_mods_1_io_in_a_exp) 
                                 - (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__near_path_mods_1__DOT__lzc_clz_io_out)) 
                                - (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__near_path_mods_1__DOT__lza_error))
                             : 0U));
            vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_near_path_out_sig 
                = ((0x7fffffeU & ((IData)((vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__near_path_mods_1__DOT__near_path_sig 
                                           >> 0x17U)) 
                                  << 1U)) | (0U != 
                                             (0x7fffffU 
                                              & (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__near_path_mods_1__DOT__near_path_sig))));
            vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_near_path_out_sign 
                = (1U & ((1U & (IData)((1ULL & ((1ULL 
                                                 + vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__near_path_mods_1__DOT___a_minus_b_T_3) 
                                                >> 0x31U))))
                          ? (IData)((vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1_io_a_r 
                                     >> 0x37U)) : (IData)(
                                                          (vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1_io_b_r 
                                                           >> 0x37U))));
        } else {
            vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_near_path_sig_is_zero 
                = (1U & ((~ (IData)((0U != vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__near_path_mods_0__DOT__lza_ab_io_f))) 
                         & (~ ((IData)(1U) + (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__near_path_mods_0__DOT___a_minus_b_T_3)))));
            vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_near_path_out_exp 
                = (0xffU & (((IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__near_path_mods_0__DOT__exceed_lim)
                              ? (0U != (0x1ffffffffffffULL 
                                        & ((0x2000000000000ULL 
                                            >> (0x3fU 
                                                & (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__near_path_mods_0_io_in_a_exp))) 
                                           & (1ULL 
                                              + vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__near_path_mods_0__DOT___a_minus_b_T_3))))
                              : ((0U != (0x1ffffffffffffULL 
                                         & ((vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__near_path_mods_0__DOT__int_bit_mask 
                                             >> 1U) 
                                            & (1ULL 
                                               + vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__near_path_mods_0__DOT___a_minus_b_T_3)))) 
                                 | (0U != vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__near_path_mods_0__DOT___int_bit_predicted_T_1)))
                             ? (((IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__near_path_mods_0_io_in_a_exp) 
                                 - (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__near_path_mods_0__DOT__lzc_clz_io_out)) 
                                - (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__near_path_mods_0__DOT__lza_error))
                             : 0U));
            vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_near_path_out_sig 
                = ((0x7fffffeU & ((IData)((vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__near_path_mods_0__DOT__near_path_sig 
                                           >> 0x17U)) 
                                  << 1U)) | (0U != 
                                             (0x7fffffU 
                                              & (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__near_path_mods_0__DOT__near_path_sig))));
            vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_near_path_out_sign 
                = (1U & ((1U & (IData)((1ULL & ((1ULL 
                                                 + vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__near_path_mods_0__DOT___a_minus_b_T_3) 
                                                >> 0x31U))))
                          ? (IData)((vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1_io_b_r 
                                     >> 0x37U)) : (IData)(
                                                          (vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1_io_a_r 
                                                           >> 0x37U))));
        }
        vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_far_path_out_exp 
            = (0xffU & ((((1U & (IData)((vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__far_path_mods_0__DOT__adder_result 
                                         >> 0x33U)))
                           ? ((IData)(1U) + (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__far_path_mods_0_io_in_a_exp))
                           : 0U) | ((1U == (3U & (IData)(
                                                         (vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__far_path_mods_0__DOT__adder_result 
                                                          >> 0x32U))))
                                     ? (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__far_path_mods_0_io_in_a_exp)
                                     : 0U)) | ((0U 
                                                == 
                                                (3U 
                                                 & (IData)(
                                                           (vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__far_path_mods_0__DOT__adder_result 
                                                            >> 0x32U))))
                                                ? ((IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__far_path_mods_0_io_in_a_exp) 
                                                   - (IData)(1U))
                                                : 0U)));
        vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_special_case_valid 
            = ((IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__special_path_hasNaN) 
               | ((IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__decode_a___05FisInf) 
                  | (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__b_isInf)));
        vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_special_case_bits_nan 
            = ((IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__special_path_hasNaN) 
               | ((IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__decode_a___05FisInf) 
                  & ((IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__b_isInf) 
                     & (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__far_path_mods_0_io_in_effSub))));
        vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_far_path_out_sig 
            = ((((1U & (IData)((vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__far_path_mods_0__DOT__adder_result 
                                >> 0x33U))) ? ((0x7fffffeU 
                                                & ((IData)(
                                                           (vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__far_path_mods_0__DOT__adder_result 
                                                            >> 0x1aU)) 
                                                   << 1U)) 
                                               | (0U 
                                                  != 
                                                  (0x3ffffffU 
                                                   & (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__far_path_mods_0__DOT__adder_result))))
                  : 0U) | (((1U == (3U & (IData)((vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__far_path_mods_0__DOT__adder_result 
                                                  >> 0x32U)))) 
                            | (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__far_path_mods_0_io_in_smallAdd))
                            ? ((0x7fffffeU & ((IData)(
                                                      (vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__far_path_mods_0__DOT__adder_result 
                                                       >> 0x19U)) 
                                              << 1U)) 
                               | (0U != (0x1ffffffU 
                                         & (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__far_path_mods_0__DOT__adder_result))))
                            : 0U)) | (((~ (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__far_path_mods_0_io_in_smallAdd)) 
                                       & (0ULL == (0xc000000000000ULL 
                                                   & vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__far_path_mods_0__DOT__adder_result)))
                                       ? ((0x7fffffeU 
                                           & ((IData)(
                                                      (vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__far_path_mods_0__DOT__adder_result 
                                                       >> 0x18U)) 
                                              << 1U)) 
                                          | (0U != 
                                             (0xffffffU 
                                              & (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__far_path_mods_0__DOT__adder_result))))
                                       : 0U));
        vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_rm 
            = vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1_io_rm_r;
        vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_sel_far_path 
            = (1U & ((~ (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__far_path_mods_0_io_in_effSub)) 
                     | ((1U < (0xffU & ((IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__need_swap)
                                         ? (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__exp_diff_b_a)
                                         : (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__exp_diff_a_b)))) 
                        | (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1_io_b_inter_flags_r_overflow))));
        vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_far_path_mul_of 
            = ((IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1_io_b_inter_flags_r_overflow) 
               | ((~ (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__far_path_mods_0_io_in_effSub)) 
                  & (0x7f800000000000ULL == (0x7f800000000000ULL 
                                             & vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1_io_b_r))));
        vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_special_case_bits_inf_sign 
            = (1U & ((IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__decode_a___05FisInf)
                      ? (IData)((vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1_io_a_r 
                                 >> 0x37U)) : (IData)(
                                                      (vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1_io_b_r 
                                                       >> 0x37U))));
        vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_far_path_out_sign 
            = (1U & ((IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__need_swap)
                      ? (IData)((vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1_io_b_r 
                                 >> 0x37U)) : (IData)(
                                                      (vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1_io_a_r 
                                                       >> 0x37U))));
    }
    if (vlSelf->__PVT__FMA__DOT__addPipe__DOT___s1_io_a_T_4) {
        vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1_io_rm_r 
            = vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s1_io_rm;
        vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1_io_b_inter_flags_r_overflow 
            = ((IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__isFMA) 
               & (0xffU < (IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__exp_pre_round)));
        vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1_io_b_r 
            = ((QData)((IData)((((IData)(vlSelf->__PVT__FMA__DOT__toAddArbiter_io_in_0_valid) 
                                 & (IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__toAdd_op_r_1))
                                 ? (((~ (vlSelf->__PVT__FMA__DOT__addPipe__DOT__srcB 
                                         >> 0x1fU)) 
                                     << 0x1fU) | (0x7fffffffU 
                                                  & vlSelf->__PVT__FMA__DOT__addPipe__DOT__srcB))
                                 : vlSelf->__PVT__FMA__DOT__addPipe__DOT__srcB))) 
               << 0x18U);
        vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1_io_a_r 
            = ((IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__isFMA)
                ? (((QData)((IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3_io_in_r_prod_sign)) 
                    << 0x37U) | (((QData)((IData)(((IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3_io_in_r_special_case_bits_hasZero)
                                                    ? 0U
                                                    : (IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__raw_in_exp)))) 
                                  << 0x2fU) | ((IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3_io_in_r_special_case_bits_hasZero)
                                                ? 0ULL
                                                : (0x7fffffffffffULL 
                                                   & ((((QData)((IData)(
                                                                        vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__sig_shifted[2U])) 
                                                        << 0x26U) 
                                                       | (((QData)((IData)(
                                                                           vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__sig_shifted[1U])) 
                                                           << 6U) 
                                                          | ((QData)((IData)(
                                                                             vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__sig_shifted[0U])) 
                                                             >> 0x1aU))) 
                                                      | (QData)((IData)(
                                                                        (0U 
                                                                         != 
                                                                         (0x3ffffffU 
                                                                          & vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__sig_shifted[0U])))))))))
                : ((QData)((IData)(((0U == (7U & ((IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0_io_in_bits_op) 
                                                  >> 3U)))
                                     ? vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3_io_in_bits_a
                                     : 0U))) << 0x18U));
    }
    if (vlSelf->__PVT__FMA__DOT__mulPipe__DOT___s3_io_in_T_3) {
        vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3_io_in_r_early_overflow 
            = vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s2_io_in_r_early_overflow;
        vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3_io_in_r_rm 
            = vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s2_io_in_r_rm;
        vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3_io_in_r_exp_shifted 
            = vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s2_io_in_r_exp_shifted;
        vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3_io_in_r_may_be_subnormal 
            = vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s2_io_in_r_may_be_subnormal;
        vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3_io_in_r_shift_amt 
            = vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s2_io_in_r_shift_amt;
        vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3_io_in_r_prod 
            = (0xffffffffffffULL & ((QData)((IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__multiplier__DOT__io_result_r)) 
                                    * (QData)((IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__multiplier__DOT__io_result_r_1))));
        vlSelf->__PVT__FMA__DOT__mulPipe__DOT__toAdd_addAnother_r_1 
            = vlSelf->__PVT__FMA__DOT__mulPipe__DOT__toAdd_addAnother_r;
        vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3_io_in_r_special_case_valid 
            = vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s2_io_in_r_special_case_valid;
        vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3_io_in_r_special_case_bits_inf 
            = vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s2_io_in_r_special_case_bits_inf;
        vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3_io_in_r_special_case_bits_nan 
            = vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s2_io_in_r_special_case_bits_nan;
        vlSelf->__PVT__FMA__DOT__mulPipe__DOT__toAdd_op_r_1 
            = vlSelf->__PVT__FMA__DOT__mulPipe__DOT__toAdd_op_r;
        vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3_io_in_r_special_case_bits_hasZero 
            = vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s2_io_in_r_special_case_bits_hasZero;
        vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3_io_in_r_prod_sign 
            = vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s2_io_in_r_prod_sign;
    }
    if (vlSelf->__PVT__IntToFP__DOT___s2_isSingle_T_8) {
        vlSelf->__PVT__IntToFP__DOT__io_out_bits_result_r 
            = (((IData)(vlSelf->__PVT__IntToFP__DOT__r_sign) 
                << 0x1fU) | ((((IData)(vlSelf->__PVT__IntToFP__DOT__r_is_zero)
                                ? 0U : (0xffU & (((IData)(0xbeU) 
                                                  - (IData)(vlSelf->__PVT__IntToFP__DOT__r_lzc)) 
                                                 + 
                                                 ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_postnorm__DOT__rounder__DOT__r_up) 
                                                  & (0x7fffffU 
                                                     == 
                                                     (0x7fffffU 
                                                      & (IData)(
                                                                (vlSelf->__PVT__IntToFP__DOT__r_norm_int 
                                                                 >> 0x28U)))))))) 
                              << 0x17U) | (0x7fffffU 
                                           & ((IData)(
                                                      (vlSelf->__PVT__IntToFP__DOT__r_norm_int 
                                                       >> 0x28U)) 
                                              + (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_postnorm__DOT__rounder__DOT__r_up)))));
        vlSelf->__PVT__IntToFP__DOT__s2_isSingle = vlSelf->__PVT__IntToFP__DOT__s2_isSingle_r;
    }
    if (vlSelf->__PVT__IntToFP__DOT___s2_isSingle_T_4) {
        vlSelf->__PVT__IntToFP__DOT__r_1 = ((4U == 
                                             (7U & 
                                              ((IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0_io_in_bits_op) 
                                               >> 3U)))
                                             ? (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0_io_in_bits_rm)
                                             : 0U);
        vlSelf->__PVT__IntToFP__DOT__r_norm_int = (0x7fffffffffffffffULL 
                                                   & ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lzc_error)
                                                       ? 
                                                      (vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__in_shift_s1 
                                                       << 1U)
                                                       : vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__in_shift_s1));
        vlSelf->__PVT__IntToFP__DOT__r_lzc = (0x3fU 
                                              & ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lzc) 
                                                 + (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lzc_error)));
        vlSelf->__PVT__IntToFP__DOT__r_sign = vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__in_sign;
        vlSelf->__PVT__IntToFP__DOT__r_is_zero = (0ULL 
                                                  == vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__pos_lzc_clz_io_in);
        vlSelf->__PVT__IntToFP__DOT__s2_isSingle_r 
            = (1U & (~ (IData)(vlSelf->IntToFP__DOT____VdfgTmp_h0d28c158__0)));
    }
    if (vlSelf->__PVT__FPToInt__DOT___io_out_bits_fflags_T_3) {
        vlSelf->__PVT__FPToInt__DOT__io_out_bits_result_r_1 
            = (((((IData)(vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__raw_a_exp) 
                  > (0xffU & ((IData)(0x7fU) + ((2U 
                                                 & (IData)(vlSelf->__PVT__FPToInt__DOT__coreOp))
                                                 ? 0x3fU
                                                 : 0x1fU)))) 
                 | ((0x96U <= (IData)(vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__raw_a_exp)) 
                    & (((~ (IData)(vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__rpath_rounder_io_signIn)) 
                        & (IData)(vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__lpath_may_of)) 
                       | ((IData)(vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__lpath_may_of) 
                          & ((IData)(vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__rpath_rounder_io_signIn) 
                             & (0U != vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__fp_a_sig)))))) 
                | (((0x96U <= (IData)(vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__raw_a_exp)) 
                    & (IData)(vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__lpath_iv)) 
                   | ((0x96U > (IData)(vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__raw_a_exp)) 
                      & ((IData)(vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__lpath_iv) 
                         & (0U != vlSelf->__VdfgTmp_h22dfd192__0)))))
                ? ((1U & ((~ (IData)(vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__rpath_rounder_io_signIn)) 
                          | ((0xffU == (IData)(vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__fp_a_exp)) 
                             & (0U != vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__fp_a_sig))))
                    ? ((2U & (IData)(vlSelf->__PVT__FPToInt__DOT__coreOp))
                        ? (0x7fffffffffffffffULL | 
                           ((QData)((IData)((1U & (~ (IData)(vlSelf->__PVT__FPToInt__DOT__coreOp))))) 
                            << 0x3fU)) : (0x7fffffffULL 
                                          | (0x80000000ULL 
                                             & ((QData)((IData)(
                                                                (1U 
                                                                 & (~ (IData)(vlSelf->__PVT__FPToInt__DOT__coreOp))))) 
                                                << 0x1fU))))
                    : ((2U & (IData)(vlSelf->__PVT__FPToInt__DOT__coreOp))
                        ? ((QData)((IData)((1U & (IData)(vlSelf->__PVT__FPToInt__DOT__coreOp)))) 
                           << 0x3fU) : (0x80000000ULL 
                                        & ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(vlSelf->__PVT__FPToInt__DOT__coreOp)))) 
                                           << 0x1fU))))
                : ((((IData)(vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__rpath_rounder_io_signIn) 
                     & (IData)(vlSelf->__PVT__FPToInt__DOT__coreOp))
                     ? (- vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__int_abs)
                     : vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__int_abs) 
                   & (0xffffffffULL | ((QData)((IData)(
                                                       ((2U 
                                                         & (IData)(vlSelf->__PVT__FPToInt__DOT__coreOp))
                                                         ? 0xffffffffU
                                                         : 0U))) 
                                       << 0x20U))));
        vlSelf->__PVT__FPToInt__DOT__io_out_bits_result_r 
            = vlSelf->__PVT__FPToInt__DOT__isSingle;
    }
    if (vlSelf->__PVT__FPToInt__DOT___isSingle_T_7) {
        if ((3U == (7U & ((IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0_io_in_bits_op) 
                          >> 3U)))) {
            vlSelf->__PVT__FPToInt__DOT__rm = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0_io_in_bits_rm;
            vlSelf->__PVT__FPToInt__DOT__coreOp = (3U 
                                                   & (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0_io_in_bits_op));
        } else {
            vlSelf->__PVT__FPToInt__DOT__rm = 0U;
            vlSelf->__PVT__FPToInt__DOT__coreOp = 0U;
        }
        vlSelf->__PVT__FPToInt__DOT__src = (QData)((IData)(
                                                           ((3U 
                                                             == 
                                                             (7U 
                                                              & ((IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0_io_in_bits_op) 
                                                                 >> 3U)))
                                                             ? vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3_io_in_bits_a
                                                             : 0U)));
        vlSelf->__PVT__FPToInt__DOT__isSingle = (1U 
                                                 & (~ (IData)(
                                                              (0x1cU 
                                                               == 
                                                               (0x3cU 
                                                                & (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0_io_in_bits_op))))));
    }
    if (((~ ((~ (IData)(vlSelf->__PVT__FPMV_io_out_ready)) 
             & (IData)(vlSelf->__PVT__FPMV__DOT__REG_1))) 
         & (IData)(vlSelf->__PVT__FPMV__DOT__REG))) {
        vlSelf->__PVT__FPMV__DOT__io_out_bits_result_r 
            = ((2U == (IData)(vlSelf->__PVT__FPMV__DOT__s1_op))
                ? (QData)((IData)(((((IData)(vlSelf->__PVT__FPMV__DOT__classifyOut_decode___05FisNaN) 
                                     & (IData)((vlSelf->__PVT__FPMV__DOT__a 
                                                >> 0x16U))) 
                                    << 9U) | ((((~ (IData)(
                                                           (vlSelf->__PVT__FPMV__DOT__a 
                                                            >> 0x16U))) 
                                                & (IData)(vlSelf->__PVT__FPMV__DOT__classifyOut_decode___05FisNaN)) 
                                               << 8U) 
                                              | ((((~ (IData)(
                                                              (vlSelf->__PVT__FPMV__DOT__a 
                                                               >> 0x1fU))) 
                                                   & (IData)(vlSelf->__PVT__FPMV__DOT__classifyOut_decode___05FisInf)) 
                                                  << 7U) 
                                                 | ((((~ (IData)(
                                                                 (vlSelf->__PVT__FPMV__DOT__a 
                                                                  >> 0x1fU))) 
                                                      & (IData)(vlSelf->__PVT__FPMV__DOT__classifyOut_isNormal)) 
                                                     << 6U) 
                                                    | ((((~ (IData)(
                                                                    (vlSelf->__PVT__FPMV__DOT__a 
                                                                     >> 0x1fU))) 
                                                         & (IData)(vlSelf->__PVT__FPMV__DOT__classifyOut_decode___05FisSubnormal)) 
                                                        << 5U) 
                                                       | ((((~ (IData)(
                                                                       (vlSelf->__PVT__FPMV__DOT__a 
                                                                        >> 0x1fU))) 
                                                            & (IData)(vlSelf->__PVT__FPMV__DOT__classifyOut_decode___05FisZero)) 
                                                           << 4U) 
                                                          | ((((IData)(vlSelf->__PVT__FPMV__DOT__classifyOut_decode___05FisZero) 
                                                               & (IData)(
                                                                         (vlSelf->__PVT__FPMV__DOT__a 
                                                                          >> 0x1fU))) 
                                                              << 3U) 
                                                             | ((((IData)(vlSelf->__PVT__FPMV__DOT__classifyOut_decode___05FisSubnormal) 
                                                                  & (IData)(
                                                                            (vlSelf->__PVT__FPMV__DOT__a 
                                                                             >> 0x1fU))) 
                                                                 << 2U) 
                                                                | ((((IData)(vlSelf->__PVT__FPMV__DOT__classifyOut_isNormal) 
                                                                     & (IData)(
                                                                               (vlSelf->__PVT__FPMV__DOT__a 
                                                                                >> 0x1fU))) 
                                                                    << 1U) 
                                                                   | ((IData)(vlSelf->__PVT__FPMV__DOT__classifyOut_decode___05FisInf) 
                                                                      & (IData)(
                                                                                (vlSelf->__PVT__FPMV__DOT__a 
                                                                                >> 0x1fU))))))))))))))
                : vlSelf->__PVT__FPMV__DOT__a);
    }
    if (((~ ((~ (IData)(vlSelf->__PVT__FCMP_io_out_ready)) 
             & (IData)(vlSelf->__PVT__FCMP__DOT__REG_1))) 
         & (IData)(vlSelf->__PVT__FCMP__DOT__REG))) {
        vlSelf->__PVT__FCMP__DOT__io_out_bits_result_r 
            = ((0x10U & (IData)(vlSelf->__PVT__FCMP__DOT__fflags))
                ? 0U : ((8U == (8U | (IData)(vlSelf->__PVT__FCMP__DOT__op)))
                         ? ((IData)(vlSelf->__PVT__FCMP__DOT__lt)
                             ? vlSelf->__PVT__FCMP__DOT__a
                             : vlSelf->__PVT__FCMP__DOT__b)
                         : ((9U == (8U | (IData)(vlSelf->__PVT__FCMP__DOT__op)))
                             ? ((IData)(vlSelf->__PVT__FCMP__DOT__lt)
                                 ? vlSelf->__PVT__FCMP__DOT__b
                                 : vlSelf->__PVT__FCMP__DOT__a)
                             : ((3U == (IData)(vlSelf->__PVT__FCMP__DOT__op))
                                 ? (IData)(vlSelf->__PVT__FCMP__DOT__lt)
                                 : ((2U == (IData)(vlSelf->__PVT__FCMP__DOT__op))
                                     ? (IData)(vlSelf->__PVT__FCMP__DOT__le)
                                     : ((5U == (IData)(vlSelf->__PVT__FCMP__DOT__op))
                                         ? (1U & (~ (IData)(vlSelf->__PVT__FCMP__DOT__eq)))
                                         : ((4U == (IData)(vlSelf->__PVT__FCMP__DOT__op))
                                             ? (IData)(vlSelf->__PVT__FCMP__DOT__eq)
                                             : 0U)))))));
    }
    vlSelf->__PVT__IntToFP__DOT__REG = __Vdly__IntToFP__DOT__REG;
    vlSelf->__PVT__IntToFP__DOT__REG_1 = __Vdly__IntToFP__DOT__REG_1;
    vlSelf->__PVT__FMA__DOT__mulPipe__DOT__REG = __Vdly__FMA__DOT__mulPipe__DOT__REG;
    vlSelf->__PVT__FMA__DOT__mulPipe__DOT__REG_1 = __Vdly__FMA__DOT__mulPipe__DOT__REG_1;
    vlSelf->__PVT__FMA__DOT__addPipe__DOT__REG = __Vdly__FMA__DOT__addPipe__DOT__REG;
    vlSelf->__PVT__FMA__DOT__addPipe__DOT__REG_1 = __Vdly__FMA__DOT__addPipe__DOT__REG_1;
    vlSelf->__PVT__FPToInt__DOT__REG = __Vdly__FPToInt__DOT__REG;
    vlSelf->__PVT__FPToInt__DOT__REG_1 = __Vdly__FPToInt__DOT__REG_1;
    if (__Vdlyvset__FMA__DOT__mulFIFO__DOT__ram_result__v0) {
        vlSelf->__PVT__FMA__DOT__mulFIFO__DOT__ram_result[0U] 
            = __Vdlyvval__FMA__DOT__mulFIFO__DOT__ram_result__v0;
    }
    if (__Vdlyvset__FMA__DOT__addFIFO__DOT__ram_result__v0) {
        vlSelf->__PVT__FMA__DOT__addFIFO__DOT__ram_result[0U] 
            = __Vdlyvval__FMA__DOT__addFIFO__DOT__ram_result__v0;
    }
    vlSelf->__PVT__FPMV__DOT__REG = __Vdly__FPMV__DOT__REG;
    vlSelf->__PVT__FPMV__DOT__REG_1 = __Vdly__FPMV__DOT__REG_1;
    vlSelf->__PVT__FCMP__DOT__REG = __Vdly__FCMP__DOT__REG;
    vlSelf->__PVT__FCMP__DOT__REG_1 = __Vdly__FCMP__DOT__REG_1;
    if (vlSelf->__PVT__FMA__DOT__mulPipe__DOT__multiplier_io_regEnables_0) {
        vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s2_io_in_r_early_overflow 
            = (0x17dU < (IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s1__DOT__exp_sum));
        vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s2_io_in_r_rm 
            = vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s1_io_rm;
        vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s2_io_in_r_exp_shifted 
            = (0x1ffU & (((IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s1__DOT__exp_sum) 
                          - (IData)(0x64U)) - (IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s1__DOT__shift_amt)));
        vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s2_io_in_r_may_be_subnormal 
            = (1U & ((IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s1__DOT__exceed_lim) 
                     | (1U & (((IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s1__DOT__exp_sum) 
                               - (IData)(0x65U)) >> 9U))));
        vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s2_io_in_r_shift_amt 
            = vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s1__DOT__shift_amt;
        vlSelf->__PVT__FMA__DOT__mulPipe__DOT__multiplier__DOT__io_result_r_1 
            = vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s1__DOT__raw_b_sig;
        vlSelf->__PVT__FMA__DOT__mulPipe__DOT__multiplier__DOT__io_result_r 
            = vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s1__DOT__raw_a_sig;
        vlSelf->__PVT__FMA__DOT__mulPipe__DOT__toAdd_addAnother_r 
            = ((0U == (7U & ((IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0_io_in_bits_op) 
                             >> 3U))) ? ((IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.pipe__DOT__fpu__DOT____VdfgTmp_hd90b9525__0)
                                          ? vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__pipe__DOT__exe_data__DOT__ram_in2_3
                                         [0U] : vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__pipe__DOT__exe_data__DOT__ram_in3_3
                                         [0U]) : 0U);
        vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s2_io_in_r_special_case_valid 
            = ((IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s1__DOT__hasZero) 
               | ((IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s1__DOT__hasNaN) 
                  | (IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s1__DOT__hasInf)));
        vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s2_io_in_r_special_case_bits_inf 
            = vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s1__DOT__hasInf;
        vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s2_io_in_r_special_case_bits_nan 
            = ((IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s1__DOT__hasNaN) 
               | ((IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s1__DOT__hasZero) 
                  & (IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s1__DOT__hasInf)));
        vlSelf->__PVT__FMA__DOT__mulPipe__DOT__toAdd_op_r 
            = vlSelf->__PVT__FMA__DOT__mulPipe_io_in_bits_op;
        vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s2_io_in_r_special_case_bits_hasZero 
            = vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s1__DOT__hasZero;
        vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s2_io_in_r_prod_sign 
            = (1U & ((IData)(((0U == (0x38U & (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0_io_in_bits_op))) 
                              & (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3_io_in_bits_a 
                                 >> 0x1fU))) ^ (vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s1_io_b 
                                                >> 0x1fU)));
    }
    VL_EXTEND_WQ(74,48, __Vtemp_hd69ef506__0, vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3_io_in_r_prod);
    VL_SHIFTL_WWI(74,74,9, __Vtemp_h2d568758__0, __Vtemp_hd69ef506__0, (IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3_io_in_r_shift_amt));
    vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__sig_shifted_raw[0U] 
        = __Vtemp_h2d568758__0[0U];
    vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__sig_shifted_raw[1U] 
        = __Vtemp_h2d568758__0[1U];
    vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__sig_shifted_raw[2U] 
        = (0x3ffU & __Vtemp_h2d568758__0[2U]);
    VL_EXTEND_WQ(585,48, __Vtemp_hd7be74e6__0, vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3_io_in_r_prod);
    VL_SHIFTL_WWI(585,585,9, __Vtemp_h2ce4aade__0, __Vtemp_hd7be74e6__0, (IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3_io_in_r_shift_amt));
    __PVT__FMA__DOT__mulPipe__DOT__s3__DOT___sig_shifted_raw_T[0U] 
        = (VVentus__ConstPool__CONST_h7b110aeb_0[0U] 
           & __Vtemp_h2ce4aade__0[0U]);
    __PVT__FMA__DOT__mulPipe__DOT__s3__DOT___sig_shifted_raw_T[1U] 
        = (VVentus__ConstPool__CONST_h7b110aeb_0[1U] 
           & __Vtemp_h2ce4aade__0[1U]);
    __PVT__FMA__DOT__mulPipe__DOT__s3__DOT___sig_shifted_raw_T[2U] 
        = (VVentus__ConstPool__CONST_h7b110aeb_0[2U] 
           & __Vtemp_h2ce4aade__0[2U]);
    __PVT__FMA__DOT__mulPipe__DOT__s3__DOT___sig_shifted_raw_T[3U] 
        = (VVentus__ConstPool__CONST_h7b110aeb_0[3U] 
           & __Vtemp_h2ce4aade__0[3U]);
    __PVT__FMA__DOT__mulPipe__DOT__s3__DOT___sig_shifted_raw_T[4U] 
        = (VVentus__ConstPool__CONST_h7b110aeb_0[4U] 
           & __Vtemp_h2ce4aade__0[4U]);
    __PVT__FMA__DOT__mulPipe__DOT__s3__DOT___sig_shifted_raw_T[5U] 
        = (VVentus__ConstPool__CONST_h7b110aeb_0[5U] 
           & __Vtemp_h2ce4aade__0[5U]);
    __PVT__FMA__DOT__mulPipe__DOT__s3__DOT___sig_shifted_raw_T[6U] 
        = (VVentus__ConstPool__CONST_h7b110aeb_0[6U] 
           & __Vtemp_h2ce4aade__0[6U]);
    __PVT__FMA__DOT__mulPipe__DOT__s3__DOT___sig_shifted_raw_T[7U] 
        = (VVentus__ConstPool__CONST_h7b110aeb_0[7U] 
           & __Vtemp_h2ce4aade__0[7U]);
    __PVT__FMA__DOT__mulPipe__DOT__s3__DOT___sig_shifted_raw_T[8U] 
        = (VVentus__ConstPool__CONST_h7b110aeb_0[8U] 
           & __Vtemp_h2ce4aade__0[8U]);
    __PVT__FMA__DOT__mulPipe__DOT__s3__DOT___sig_shifted_raw_T[9U] 
        = (VVentus__ConstPool__CONST_h7b110aeb_0[9U] 
           & __Vtemp_h2ce4aade__0[9U]);
    __PVT__FMA__DOT__mulPipe__DOT__s3__DOT___sig_shifted_raw_T[0xaU] 
        = (VVentus__ConstPool__CONST_h7b110aeb_0[0xaU] 
           & __Vtemp_h2ce4aade__0[0xaU]);
    __PVT__FMA__DOT__mulPipe__DOT__s3__DOT___sig_shifted_raw_T[0xbU] 
        = (VVentus__ConstPool__CONST_h7b110aeb_0[0xbU] 
           & __Vtemp_h2ce4aade__0[0xbU]);
    __PVT__FMA__DOT__mulPipe__DOT__s3__DOT___sig_shifted_raw_T[0xcU] 
        = (VVentus__ConstPool__CONST_h7b110aeb_0[0xcU] 
           & __Vtemp_h2ce4aade__0[0xcU]);
    __PVT__FMA__DOT__mulPipe__DOT__s3__DOT___sig_shifted_raw_T[0xdU] 
        = (VVentus__ConstPool__CONST_h7b110aeb_0[0xdU] 
           & __Vtemp_h2ce4aade__0[0xdU]);
    __PVT__FMA__DOT__mulPipe__DOT__s3__DOT___sig_shifted_raw_T[0xeU] 
        = (VVentus__ConstPool__CONST_h7b110aeb_0[0xeU] 
           & __Vtemp_h2ce4aade__0[0xeU]);
    __PVT__FMA__DOT__mulPipe__DOT__s3__DOT___sig_shifted_raw_T[0xfU] 
        = (VVentus__ConstPool__CONST_h7b110aeb_0[0xfU] 
           & __Vtemp_h2ce4aade__0[0xfU]);
    __PVT__FMA__DOT__mulPipe__DOT__s3__DOT___sig_shifted_raw_T[0x10U] 
        = (VVentus__ConstPool__CONST_h7b110aeb_0[0x10U] 
           & __Vtemp_h2ce4aade__0[0x10U]);
    __PVT__FMA__DOT__mulPipe__DOT__s3__DOT___sig_shifted_raw_T[0x11U] 
        = (VVentus__ConstPool__CONST_h7b110aeb_0[0x11U] 
           & __Vtemp_h2ce4aade__0[0x11U]);
    __PVT__FMA__DOT__mulPipe__DOT__s3__DOT___sig_shifted_raw_T[0x12U] 
        = (VVentus__ConstPool__CONST_h7b110aeb_0[0x12U] 
           & __Vtemp_h2ce4aade__0[0x12U]);
    vlSelf->__PVT__FMA__DOT__toOutArbiter_io_out_valid 
        = ((IData)(vlSelf->__PVT__FMA__DOT__addFIFO__DOT__maybe_full) 
           | (IData)(vlSelf->__PVT__FMA__DOT__mulFIFO__DOT__maybe_full));
    vlSelf->__PVT__FMA__DOT__addFIFO__DOT__do_deq = 
        ((IData)(vlSelf->__PVT__FMA__DOT__addFIFO__DOT__maybe_full) 
         & (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addFIFO_io_deq_ready));
    vlSelf->__PVT__FMA__DOT__mulFIFO_io_deq_ready = 
        ((~ (IData)(vlSelf->__PVT__FMA__DOT__addFIFO__DOT__maybe_full)) 
         & (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addFIFO_io_deq_ready));
    vlSelf->__PVT__FMA__DOT__addPipe_io_out_ready = 
        (1U & ((~ (IData)(vlSelf->__PVT__FMA__DOT__addFIFO__DOT__maybe_full)) 
               | (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addFIFO_io_deq_ready)));
    vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2__DOT__near_path_is_zero 
        = ((0U == (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_near_path_out_exp)) 
           & (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_near_path_sig_is_zero));
    if (vlSelf->__PVT__FPMV__DOT___a_T_8) {
        vlSelf->__PVT__FPMV__DOT__s1_op = vlSelf->__PVT__FPMV_io_in_bits_op;
        vlSelf->__PVT__FPMV__DOT__a = ((2U == (IData)(vlSelf->__PVT__FPMV_io_in_bits_op))
                                        ? (QData)((IData)(vlSelf->__PVT__FPMV_io_in_bits_a))
                                        : (((QData)((IData)(
                                                            ((4U 
                                                              == (IData)(vlSelf->__PVT__FPMV_io_in_bits_op))
                                                              ? 
                                                             ((IData)(
                                                                      ((0x10U 
                                                                        == 
                                                                        (0x38U 
                                                                         & (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0_io_in_bits_op))) 
                                                                       & (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3_io_in_bits_a 
                                                                          >> 0x1fU))) 
                                                              ^ (IData)(vlSelf->FPMV__DOT____VdfgTmp_h8faae4b3__0))
                                                              : 
                                                             ((5U 
                                                               == (IData)(vlSelf->__PVT__FPMV_io_in_bits_op))
                                                               ? 
                                                              (1U 
                                                               & (~ (IData)(vlSelf->FPMV__DOT____VdfgTmp_h8faae4b3__0)))
                                                               : 
                                                              ((6U 
                                                                == (IData)(vlSelf->__PVT__FPMV_io_in_bits_op))
                                                                ? 
                                                               (((2U 
                                                                  == 
                                                                  (7U 
                                                                   & ((IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0_io_in_bits_op) 
                                                                      >> 3U)))
                                                                  ? vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3_io_in_bits_b
                                                                  : 0U) 
                                                                >> 0x1fU)
                                                                : vlSelf->__PVT__FPMV_io_in_bits_a))))) 
                                            << 0x1fU) 
                                           | (QData)((IData)(
                                                             ((2U 
                                                               == 
                                                               (7U 
                                                                & ((IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0_io_in_bits_op) 
                                                                   >> 3U)))
                                                               ? 
                                                              (0x7fffffffU 
                                                               & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3_io_in_bits_a)
                                                               : 0U)))));
    }
    if (vlSelf->__PVT__FCMP__DOT___eq_T_4) {
        vlSelf->__PVT__FCMP__DOT__a = vlSelf->__PVT__FCMP__DOT__FCMPCore_io_a;
        vlSelf->__PVT__FCMP__DOT__b = vlSelf->__PVT__FCMP__DOT__FCMPCore_io_b;
        vlSelf->__PVT__FCMP__DOT__eq = ((~ (IData)(vlSelf->__PVT__FCMP__DOT__FCMPCore__DOT__hasNaN)) 
                                        & ((0U == (IData)(vlSelf->__PVT__FCMP__DOT__FCMPCore__DOT__a_minus_b)) 
                                           | (IData)(vlSelf->__PVT__FCMP__DOT__FCMPCore__DOT__bothZero)));
        vlSelf->__PVT__FCMP__DOT__lt = ((~ (IData)(vlSelf->__PVT__FCMP__DOT__FCMPCore__DOT__hasNaN)) 
                                        & ((IData)(vlSelf->__PVT__FCMP__DOT__FCMPCore__DOT__same_sign)
                                            ? ((0U 
                                                != (IData)(vlSelf->__PVT__FCMP__DOT__FCMPCore__DOT__a_minus_b)) 
                                               & (IData)(vlSelf->__PVT__FCMP__DOT__FCMPCore__DOT__uint_less))
                                            : ((~ (IData)(vlSelf->__PVT__FCMP__DOT__FCMPCore__DOT__bothZero)) 
                                               & (IData)(vlSelf->__PVT__FCMP__DOT__FCMPCore__DOT__fp_a_sign))));
        vlSelf->__PVT__FCMP__DOT__le = ((~ (IData)(vlSelf->__PVT__FCMP__DOT__FCMPCore__DOT__hasNaN)) 
                                        & ((IData)(vlSelf->__PVT__FCMP__DOT__FCMPCore__DOT__same_sign)
                                            ? ((IData)(vlSelf->__PVT__FCMP__DOT__FCMPCore__DOT__uint_less) 
                                               | (0U 
                                                  == (IData)(vlSelf->__PVT__FCMP__DOT__FCMPCore__DOT__a_minus_b)))
                                            : ((IData)(vlSelf->__PVT__FCMP__DOT__FCMPCore__DOT__fp_a_sign) 
                                               | (IData)(vlSelf->__PVT__FCMP__DOT__FCMPCore__DOT__bothZero))));
        vlSelf->__PVT__FCMP__DOT__op = ((1U == (7U 
                                                & ((IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0_io_in_bits_op) 
                                                   >> 3U)))
                                         ? (7U & (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0_io_in_bits_op))
                                         : 0U);
        vlSelf->__PVT__FCMP__DOT__fflags = ((((~ (IData)(
                                                         ((8U 
                                                           == 
                                                           (0x38U 
                                                            & (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0_io_in_bits_op))) 
                                                          & (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3_io_in_bits_a 
                                                             >> 0x16U)))) 
                                              & (IData)(vlSelf->__PVT__FCMP__DOT__FCMPCore__DOT__decode_a___05FisNaN)) 
                                             | ((~ (IData)(
                                                           ((8U 
                                                             == 
                                                             (0x38U 
                                                              & (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0_io_in_bits_op))) 
                                                            & (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3_io_in_bits_b 
                                                               >> 0x16U)))) 
                                                & (IData)(vlSelf->__PVT__FCMP__DOT__FCMPCore__DOT__decode_b___05FisNaN))) 
                                            << 4U);
    }
    vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__exp_is_subnormal 
        = ((~ (__PVT__FMA__DOT__mulPipe__DOT__s3__DOT___sig_shifted_raw_T[2U] 
               >> 9U)) & (IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3_io_in_r_may_be_subnormal));
    vlSelf->outArbiter__DOT____VdfgTmp_h245e14da__0 
        = ((IData)(vlSelf->__PVT__FMA__DOT__toOutArbiter_io_out_valid) 
           | (IData)(vlSelf->__PVT__FCMP__DOT__REG_1));
    vlSelf->__PVT__FCMP_io_out_ready = ((~ (IData)(vlSelf->__PVT__FMA__DOT__toOutArbiter_io_out_valid)) 
                                        & (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addFIFO_io_deq_ready));
    vlSelf->__PVT__FMA__DOT__mulFIFO__DOT__do_deq = 
        ((IData)(vlSelf->__PVT__FMA__DOT__mulFIFO_io_deq_ready) 
         & (IData)(vlSelf->__PVT__FMA__DOT__mulFIFO__DOT__maybe_full));
    vlSelf->__PVT__FMA__DOT__mulFIFO_io_enq_ready = 
        (1U & ((~ (IData)(vlSelf->__PVT__FMA__DOT__mulFIFO__DOT__maybe_full)) 
               | (IData)(vlSelf->__PVT__FMA__DOT__mulFIFO_io_deq_ready)));
    vlSelf->__PVT__FMA__DOT__addFIFO__DOT__ram_result_MPORT_en 
        = ((IData)(vlSelf->__PVT__FMA__DOT__addPipe_io_out_ready) 
           & (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__REG_1));
    vlSelf->__PVT__FMA__DOT__addPipe__DOT___s2_io_in_T_3 
        = ((~ ((~ (IData)(vlSelf->__PVT__FMA__DOT__addPipe_io_out_ready)) 
               & (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__REG_1))) 
           & (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__REG));
    vlSelf->__PVT__FMA__DOT__addPipe__DOT___T_2 = (
                                                   (~ (IData)(vlSelf->__PVT__FMA__DOT__addPipe_io_out_ready)) 
                                                   & ((IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__REG) 
                                                      & (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__REG_1)));
    vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2__DOT__far_path_tininess_rounder__DOT__rounder__DOT__inexact 
        = (IData)((0U != (3U & vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_far_path_out_sig)));
    vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2__DOT__far_path_rounder__DOT__inexact 
        = (IData)((0U != (7U & vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_far_path_out_sig)));
    vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2__DOT__near_path_tininess_rounder__DOT__rounder__DOT__inexact 
        = (IData)((0U != (3U & vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_near_path_out_sig)));
    vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2__DOT__near_path_rounder__DOT__inexact 
        = (IData)((0U != (7U & vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_near_path_out_sig)));
    vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2__DOT__rmin 
        = ((1U == (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_rm)) 
           | (((~ (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_far_path_out_sign)) 
               & (2U == (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_rm))) 
              | ((3U == (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_rm)) 
                 & (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_far_path_out_sign))));
    vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__no_extra_shift 
        = (1U & ((__PVT__FMA__DOT__mulPipe__DOT__s3__DOT___sig_shifted_raw_T[2U] 
                  >> 9U) | (IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__exp_is_subnormal)));
    vlSelf->outArbiter__DOT____VdfgTmp_h5724d08f__0 
        = ((IData)(vlSelf->outArbiter__DOT____VdfgTmp_h245e14da__0) 
           | (IData)(vlSelf->__PVT__FPMV__DOT__REG_1));
    vlSelf->__PVT__FPMV_io_out_ready = ((~ (IData)(vlSelf->outArbiter__DOT____VdfgTmp_h245e14da__0)) 
                                        & (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addFIFO_io_deq_ready));
    vlSelf->__PVT__IntToFP__DOT__IntToFP_postnorm__DOT__rounder__DOT__inexact 
        = (IData)((0ULL != (0xffffffffffULL & vlSelf->__PVT__IntToFP__DOT__r_norm_int)));
    if (vlSelf->__PVT__FPToInt__DOT__isSingle) {
        vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__rpath_rounder_io_signIn 
            = (1U & (IData)((vlSelf->__PVT__FPToInt__DOT__src 
                             >> 0x1fU)));
        vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__fp_a_sig 
            = (0x7fffffU & (IData)(vlSelf->__PVT__FPToInt__DOT__src));
        vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__fp_a_exp 
            = (0xffU & (IData)((vlSelf->__PVT__FPToInt__DOT__src 
                                >> 0x17U)));
    } else {
        vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__rpath_rounder_io_signIn = 0U;
        vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__fp_a_sig = 0U;
        vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__fp_a_exp = 0U;
    }
    vlSelf->__PVT__FPMV__DOT__classifyOut_decode___05FisSubnormal 
        = ((~ (IData)((0U != (0xffU & (IData)((vlSelf->__PVT__FPMV__DOT__a 
                                               >> 0x17U)))))) 
           & (0U != (0x7fffffU & (IData)(vlSelf->__PVT__FPMV__DOT__a))));
    vlSelf->__PVT__FPMV__DOT__classifyOut_decode___05FisInf 
        = (IData)(((0x7f800000ULL == (0x7f800000ULL 
                                      & vlSelf->__PVT__FPMV__DOT__a)) 
                   & (~ (IData)((0U != (0x7fffffU & (IData)(vlSelf->__PVT__FPMV__DOT__a)))))));
    vlSelf->__PVT__FPMV__DOT__classifyOut_decode___05FisZero 
        = (1U & ((~ (IData)((0U != (0xffU & (IData)(
                                                    (vlSelf->__PVT__FPMV__DOT__a 
                                                     >> 0x17U)))))) 
                 & (~ (IData)((0U != (0x7fffffU & (IData)(vlSelf->__PVT__FPMV__DOT__a)))))));
    vlSelf->__PVT__FPMV__DOT__classifyOut_decode___05FisNaN 
        = (IData)(((0x7f800000ULL == (0x7f800000ULL 
                                      & vlSelf->__PVT__FPMV__DOT__a)) 
                   & (0U != (0x7fffffU & (IData)(vlSelf->__PVT__FPMV__DOT__a)))));
    vlSelf->__PVT__FPMV__DOT__classifyOut_isNormal 
        = ((~ (IData)((0xffU == (0xffU & (IData)((vlSelf->__PVT__FPMV__DOT__a 
                                                  >> 0x17U)))))) 
           & (0U != (0xffU & (IData)((vlSelf->__PVT__FPMV__DOT__a 
                                      >> 0x17U)))));
    if ((4U == (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_rm))) {
        vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2__DOT__far_path_rounder__DOT__r_up 
            = (1U & (vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_far_path_out_sig 
                     >> 2U));
        vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2__DOT__near_path_rounder__DOT__r_up 
            = (1U & (vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_near_path_out_sig 
                     >> 2U));
    } else if ((2U == (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_rm))) {
        vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2__DOT__far_path_rounder__DOT__r_up 
            = (1U & ((IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2__DOT__far_path_rounder__DOT__inexact) 
                     & (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_far_path_out_sign)));
        vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2__DOT__near_path_rounder__DOT__r_up 
            = (1U & ((IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2__DOT__near_path_rounder__DOT__inexact) 
                     & (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_near_path_out_sign)));
    } else if ((3U == (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_rm))) {
        vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2__DOT__far_path_rounder__DOT__r_up 
            = (1U & ((~ (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_far_path_out_sign)) 
                     & (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2__DOT__far_path_rounder__DOT__inexact)));
        vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2__DOT__near_path_rounder__DOT__r_up 
            = (1U & ((~ (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_near_path_out_sign)) 
                     & (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2__DOT__near_path_rounder__DOT__inexact)));
    } else {
        vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2__DOT__far_path_rounder__DOT__r_up 
            = (1U & ((1U != (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_rm)) 
                     & ((0U == (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_rm)) 
                        & ((vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_far_path_out_sig 
                            >> 2U) & (IData)((0U != 
                                              (0xbU 
                                               & vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_far_path_out_sig)))))));
        vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2__DOT__near_path_rounder__DOT__r_up 
            = (1U & ((1U != (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_rm)) 
                     & ((0U == (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_rm)) 
                        & ((vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_near_path_out_sig 
                            >> 2U) & (IData)((0U != 
                                              (0xbU 
                                               & vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_near_path_out_sig)))))));
    }
    VL_SHIFTL_WWI(74,74,32, __Vtemp_hf13d2d1e__0, vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__sig_shifted_raw, 1U);
    if (vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__no_extra_shift) {
        __PVT__FMA__DOT__mulPipe__DOT__s3__DOT___exp_pre_round_T_2 
            = (0x1ffU & (IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3_io_in_r_exp_shifted));
        vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__sig_shifted[0U] 
            = vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__sig_shifted_raw[0U];
        vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__sig_shifted[1U] 
            = vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__sig_shifted_raw[1U];
        vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__sig_shifted[2U] 
            = (0x3ffU & vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__sig_shifted_raw[2U]);
    } else {
        __PVT__FMA__DOT__mulPipe__DOT__s3__DOT___exp_pre_round_T_2 
            = (0x1ffU & ((IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3_io_in_r_exp_shifted) 
                         - (IData)(1U)));
        vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__sig_shifted[0U] 
            = __Vtemp_hf13d2d1e__0[0U];
        vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__sig_shifted[1U] 
            = __Vtemp_hf13d2d1e__0[1U];
        vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__sig_shifted[2U] 
            = (0x3ffU & __Vtemp_hf13d2d1e__0[2U]);
    }
    vlSelf->__PVT__FPToInt_io_out_ready = ((~ (IData)(vlSelf->outArbiter__DOT____VdfgTmp_h5724d08f__0)) 
                                           & (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addFIFO_io_deq_ready));
    vlSelf->__PVT__IntToFP_io_out_ready = ((~ ((IData)(vlSelf->outArbiter__DOT____VdfgTmp_h5724d08f__0) 
                                               | (IData)(vlSelf->__PVT__FPToInt__DOT__REG_1))) 
                                           & (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addFIFO_io_deq_ready));
    vlSelf->__PVT__IntToFP__DOT__IntToFP_postnorm__DOT__rounder__DOT__r_up 
        = (1U & ((4U == (IData)(vlSelf->__PVT__IntToFP__DOT__r_1))
                  ? (IData)((vlSelf->__PVT__IntToFP__DOT__r_norm_int 
                             >> 0x27U)) : ((2U == (IData)(vlSelf->__PVT__IntToFP__DOT__r_1))
                                            ? ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_postnorm__DOT__rounder__DOT__inexact) 
                                               & (IData)(vlSelf->__PVT__IntToFP__DOT__r_sign))
                                            : ((3U 
                                                == (IData)(vlSelf->__PVT__IntToFP__DOT__r_1))
                                                ? (
                                                   (~ (IData)(vlSelf->__PVT__IntToFP__DOT__r_sign)) 
                                                   & (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_postnorm__DOT__rounder__DOT__inexact))
                                                : (
                                                   (1U 
                                                    != (IData)(vlSelf->__PVT__IntToFP__DOT__r_1)) 
                                                   & ((0U 
                                                       == (IData)(vlSelf->__PVT__IntToFP__DOT__r_1)) 
                                                      & ((IData)(
                                                                 (vlSelf->__PVT__IntToFP__DOT__r_norm_int 
                                                                  >> 0x27U)) 
                                                         & (IData)(
                                                                   (0ULL 
                                                                    != 
                                                                    (0x17fffffffffULL 
                                                                     & vlSelf->__PVT__IntToFP__DOT__r_norm_int))))))))));
    vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__lpath_iv 
        = ((~ (IData)(vlSelf->__PVT__FPToInt__DOT__coreOp)) 
           & (IData)(vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__rpath_rounder_io_signIn));
    vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__raw_a_sig 
        = (((IData)((0U != (IData)(vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__fp_a_exp))) 
            << 0x17U) | vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__fp_a_sig);
    vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__raw_a_exp 
        = ((IData)(vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__fp_a_exp) 
           | (1U & (~ (IData)((0U != (IData)(vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__fp_a_exp))))));
    vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2__DOT__far_path_rounder_io_cout 
        = ((IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2__DOT__far_path_rounder__DOT__r_up) 
           & (0x3fffff8U == (0x3fffff8U & vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_far_path_out_sig)));
    vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2__DOT__near_path_exp_rounded 
        = (0xffU & (((IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2__DOT__near_path_rounder__DOT__r_up) 
                     & (0x7fffffU == (0x7fffffU & (vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_near_path_out_sig 
                                                   >> 3U)))) 
                    + (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_near_path_out_exp)));
    if (vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__exp_is_subnormal) {
        vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__exp_pre_round = 0U;
        vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__raw_in_exp = 0U;
    } else {
        vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__exp_pre_round 
            = __PVT__FMA__DOT__mulPipe__DOT__s3__DOT___exp_pre_round_T_2;
        vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__raw_in_exp 
            = (0xffU & (IData)(__PVT__FMA__DOT__mulPipe__DOT__s3__DOT___exp_pre_round_T_2));
    }
    vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__tininess_rounder__DOT__rounder__DOT__inexact 
        = (1U & ((vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__sig_shifted[1U] 
                  >> 0x10U) | (0U != (0xffffffffffffULL 
                                      & (((QData)((IData)(
                                                          vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__sig_shifted[1U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__sig_shifted[0U])))))));
    vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__rounder_io_stickyIn 
        = (1U & ((vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__sig_shifted[1U] 
                  >> 0x10U) | (0U != (0xffffffffffffULL 
                                      & (((QData)((IData)(
                                                          vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__sig_shifted[1U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__sig_shifted[0U])))))));
    vlSelf->__PVT__FPToInt__DOT___io_out_bits_fflags_T_3 
        = ((~ ((~ (IData)(vlSelf->__PVT__FPToInt_io_out_ready)) 
               & (IData)(vlSelf->__PVT__FPToInt__DOT__REG_1))) 
           & (IData)(vlSelf->__PVT__FPToInt__DOT__REG));
    vlSelf->__PVT__IntToFP__DOT___s2_isSingle_T_8 = 
        ((~ ((~ (IData)(vlSelf->__PVT__IntToFP_io_out_ready)) 
             & (IData)(vlSelf->__PVT__IntToFP__DOT__REG_1))) 
         & (IData)(vlSelf->__PVT__IntToFP__DOT__REG));
    vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__lpath_may_of 
        = ((IData)(vlSelf->__PVT__FPToInt__DOT__coreOp) 
           & ((IData)(vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__raw_a_exp) 
              == (0xffU & ((IData)(0x7fU) + ((2U & (IData)(vlSelf->__PVT__FPToInt__DOT__coreOp))
                                              ? 0x3fU
                                              : 0x1fU)))));
    vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__shiftRightJam__DOT___io_sticky_T 
        = ((vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__raw_a_sig 
            << 1U) & ((((IData)(1U) << (0x1fU & ((IData)(0x16U) 
                                                 - (IData)(vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__raw_a_exp)))) 
                       - (IData)(1U)) | ((0x19U < (0xffU 
                                                   & ((IData)(0x96U) 
                                                      - (IData)(vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__raw_a_exp))))
                                          ? 0x1ffffffU
                                          : 0U)));
    vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__shiftRightJam__DOT___io_out_T 
        = ((0x18U >= (0xffU & ((IData)(0x96U) - (IData)(vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__raw_a_exp))))
            ? (0x1ffffffU & ((vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__raw_a_sig 
                              << 1U) >> (0xffU & ((IData)(0x96U) 
                                                  - (IData)(vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__raw_a_exp)))))
            : 0U);
    vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__rounder__DOT__inexact 
        = (1U & ((vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__sig_shifted[1U] 
                  >> 0x11U) | (IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__rounder_io_stickyIn)));
    vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__rpath_rounder_io_in 
        = ((0x19U < (0xffU & ((IData)(0x96U) - (IData)(vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__raw_a_exp))))
            ? 0U : (0xffffffU & (vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__shiftRightJam__DOT___io_out_T 
                                 >> 1U)));
    vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__rpath_rounder_io_roundIn 
        = ((0x19U >= (0xffU & ((IData)(0x96U) - (IData)(vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__raw_a_exp)))) 
           & vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__shiftRightJam__DOT___io_out_T);
    vlSelf->__PVT__FMA__DOT__mulFIFO__DOT__ram_result_MPORT_en 
        = ((IData)(vlSelf->__PVT__FMA__DOT__mulFIFO_io_enq_ready) 
           & ((IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__REG_1) 
              & (2U == (IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__toAdd_op_r_1))));
    vlSelf->__PVT__FMA__DOT__mulPipe_io_out_ready = 
        (1U & (((~ (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT___T_2)) 
                & ((IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__toAdd_op_r_1) 
                   >> 2U)) | ((IData)(vlSelf->__PVT__FMA__DOT__mulFIFO_io_enq_ready) 
                              & (2U == (IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__toAdd_op_r_1)))));
    vlSelf->__PVT__FMA__DOT__toAddArbiter_io_in_0_valid 
        = (((IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__toAdd_op_r_1) 
            >> 2U) & (IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__REG_1));
    vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__rmin 
        = ((1U == (IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3_io_in_r_rm)) 
           | (((~ (IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3_io_in_r_prod_sign)) 
               & (2U == (IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3_io_in_r_rm))) 
              | ((3U == (IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3_io_in_r_rm)) 
                 & (IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3_io_in_r_prod_sign))));
    vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__rounder__DOT__r_up 
        = (1U & ((4U == (IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3_io_in_r_rm))
                  ? (vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__sig_shifted[1U] 
                     >> 0x11U) : ((2U == (IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3_io_in_r_rm))
                                   ? ((IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__rounder__DOT__inexact) 
                                      & (IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3_io_in_r_prod_sign))
                                   : ((3U == (IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3_io_in_r_rm))
                                       ? ((~ (IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3_io_in_r_prod_sign)) 
                                          & (IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__rounder__DOT__inexact))
                                       : ((1U != (IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3_io_in_r_rm)) 
                                          & ((0U == (IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3_io_in_r_rm)) 
                                             & ((vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__sig_shifted[1U] 
                                                 >> 0x11U) 
                                                & ((IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__rounder_io_stickyIn) 
                                                   | (vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__sig_shifted[1U] 
                                                      >> 0x12U)))))))));
    vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__rpath_rounder__DOT__inexact 
        = ((IData)(vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__rpath_rounder_io_roundIn) 
           | (0U != vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__shiftRightJam__DOT___io_sticky_T));
    vlSelf->__PVT__FMA__DOT__mulPipe__DOT___s3_io_in_T_3 
        = ((~ ((~ (IData)(vlSelf->__PVT__FMA__DOT__mulPipe_io_out_ready)) 
               & (IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__REG_1))) 
           & (IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__REG));
    vlSelf->__PVT__FMA__DOT__addPipe__DOT__isFMA = 
        ((IData)(vlSelf->__PVT__FMA__DOT__toAddArbiter_io_in_0_valid) 
         & ((IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__toAdd_op_r_1) 
            >> 2U));
    vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__rounder_io_cout 
        = ((IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__rounder__DOT__r_up) 
           & (0x7fffffU == (0x7fffffU & ((vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__sig_shifted[2U] 
                                          << 0xeU) 
                                         | (vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__sig_shifted[1U] 
                                            >> 0x12U)))));
    vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__rpath_rounder__DOT__r_up 
        = ((4U == (IData)(vlSelf->__PVT__FPToInt__DOT__rm))
            ? (IData)(vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__rpath_rounder_io_roundIn)
            : ((2U == (IData)(vlSelf->__PVT__FPToInt__DOT__rm))
                ? ((IData)(vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__rpath_rounder__DOT__inexact) 
                   & (IData)(vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__rpath_rounder_io_signIn))
                : ((3U == (IData)(vlSelf->__PVT__FPToInt__DOT__rm))
                    ? ((~ (IData)(vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__rpath_rounder_io_signIn)) 
                       & (IData)(vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__rpath_rounder__DOT__inexact))
                    : ((1U != (IData)(vlSelf->__PVT__FPToInt__DOT__rm)) 
                       & ((0U == (IData)(vlSelf->__PVT__FPToInt__DOT__rm)) 
                          & ((IData)(vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__rpath_rounder_io_roundIn) 
                             & ((0U != vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__shiftRightJam__DOT___io_sticky_T) 
                                | ((0x19U >= (0xffU 
                                              & ((IData)(0x96U) 
                                                 - (IData)(vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__raw_a_exp)))) 
                                   & (vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__shiftRightJam__DOT___io_out_T 
                                      >> 1U)))))))));
    vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__common_of 
        = (((IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__rounder_io_cout)
             ? (0xfeU == (IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__raw_in_exp))
             : (0xffU == (IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__raw_in_exp))) 
           | (IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3_io_in_r_early_overflow));
    vlSelf->__VdfgTmp_h22dfd192__0 = ((((IData)(vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__rpath_rounder__DOT__r_up) 
                                        & (0xffffffU 
                                           == vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__rpath_rounder_io_in)) 
                                       << 0x18U) | 
                                      (0xffffffU & 
                                       (vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__rpath_rounder_io_in 
                                        + (IData)(vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__rpath_rounder__DOT__r_up))));
    vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__int_abs 
        = ((0x96U <= (IData)(vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__raw_a_exp))
            ? ((QData)((IData)(vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__raw_a_sig)) 
               << (0x3fU & ((IData)(vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__raw_a_exp) 
                            - (IData)(0x16U)))) : (QData)((IData)(vlSelf->__VdfgTmp_h22dfd192__0)));
}

VL_INLINE_OPT void VVentus_ScalarFPU_1___nba_sequent__TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_1__0(VVentus_ScalarFPU_1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VVentus__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VVentus_ScalarFPU_1___nba_sequent__TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_1__0\n"); );
    // Init
    VlWide<19>/*584:0*/ __PVT__FMA__DOT__mulPipe__DOT__s3__DOT___sig_shifted_raw_T;
    SData/*8:0*/ __PVT__FMA__DOT__mulPipe__DOT__s3__DOT___exp_pre_round_T_2;
    CData/*0:0*/ __Vdly__FMA__DOT__mulPipe__DOT__REG;
    CData/*0:0*/ __Vdly__FMA__DOT__mulPipe__DOT__REG_1;
    CData/*0:0*/ __Vdly__FMA__DOT__addPipe__DOT__REG;
    CData/*0:0*/ __Vdly__FMA__DOT__addPipe__DOT__REG_1;
    IData/*31:0*/ __Vdlyvval__FMA__DOT__mulFIFO__DOT__ram_result__v0;
    CData/*0:0*/ __Vdlyvset__FMA__DOT__mulFIFO__DOT__ram_result__v0;
    IData/*31:0*/ __Vdlyvval__FMA__DOT__addFIFO__DOT__ram_result__v0;
    CData/*0:0*/ __Vdlyvset__FMA__DOT__addFIFO__DOT__ram_result__v0;
    CData/*0:0*/ __Vdly__FCMP__DOT__REG;
    CData/*0:0*/ __Vdly__FCMP__DOT__REG_1;
    CData/*0:0*/ __Vdly__FPMV__DOT__REG;
    CData/*0:0*/ __Vdly__FPMV__DOT__REG_1;
    CData/*0:0*/ __Vdly__FPToInt__DOT__REG;
    CData/*0:0*/ __Vdly__FPToInt__DOT__REG_1;
    CData/*0:0*/ __Vdly__IntToFP__DOT__REG;
    CData/*0:0*/ __Vdly__IntToFP__DOT__REG_1;
    VlWide<3>/*95:0*/ __Vtemp_hd69ef506__0;
    VlWide<3>/*95:0*/ __Vtemp_h2d568758__0;
    VlWide<19>/*607:0*/ __Vtemp_hd7be74e6__0;
    VlWide<19>/*607:0*/ __Vtemp_h2ce4aade__0;
    VlWide<3>/*95:0*/ __Vtemp_hf13d2d1e__0;
    // Body
    __Vdly__IntToFP__DOT__REG_1 = vlSelf->__PVT__IntToFP__DOT__REG_1;
    __Vdly__IntToFP__DOT__REG = vlSelf->__PVT__IntToFP__DOT__REG;
    __Vdly__FMA__DOT__mulPipe__DOT__REG = vlSelf->__PVT__FMA__DOT__mulPipe__DOT__REG;
    __Vdly__FMA__DOT__mulPipe__DOT__REG_1 = vlSelf->__PVT__FMA__DOT__mulPipe__DOT__REG_1;
    __Vdly__FMA__DOT__addPipe__DOT__REG = vlSelf->__PVT__FMA__DOT__addPipe__DOT__REG;
    __Vdly__FMA__DOT__addPipe__DOT__REG_1 = vlSelf->__PVT__FMA__DOT__addPipe__DOT__REG_1;
    __Vdly__FPToInt__DOT__REG = vlSelf->__PVT__FPToInt__DOT__REG;
    __Vdly__FPMV__DOT__REG = vlSelf->__PVT__FPMV__DOT__REG;
    __Vdly__FCMP__DOT__REG = vlSelf->__PVT__FCMP__DOT__REG;
    __Vdly__FPToInt__DOT__REG_1 = vlSelf->__PVT__FPToInt__DOT__REG_1;
    __Vdly__FPMV__DOT__REG_1 = vlSelf->__PVT__FPMV__DOT__REG_1;
    __Vdly__FCMP__DOT__REG_1 = vlSelf->__PVT__FCMP__DOT__REG_1;
    __Vdlyvset__FMA__DOT__mulFIFO__DOT__ram_result__v0 = 0U;
    __Vdlyvset__FMA__DOT__addFIFO__DOT__ram_result__v0 = 0U;
    if (vlSymsp->TOP.reset) {
        __Vdly__IntToFP__DOT__REG = 0U;
        __Vdly__IntToFP__DOT__REG_1 = 0U;
        __Vdly__FMA__DOT__mulPipe__DOT__REG = 0U;
        __Vdly__FMA__DOT__mulPipe__DOT__REG_1 = 0U;
        __Vdly__FMA__DOT__addPipe__DOT__REG = 0U;
        __Vdly__FMA__DOT__addPipe__DOT__REG_1 = 0U;
        __Vdly__FPToInt__DOT__REG = 0U;
        __Vdly__FPToInt__DOT__REG_1 = 0U;
        __Vdly__FPMV__DOT__REG = 0U;
        __Vdly__FPMV__DOT__REG_1 = 0U;
        __Vdly__FCMP__DOT__REG = 0U;
        __Vdly__FCMP__DOT__REG_1 = 0U;
        vlSelf->__PVT__FMA__DOT__mulFIFO__DOT__maybe_full = 0U;
        vlSelf->__PVT__FMA__DOT__addFIFO__DOT__maybe_full = 0U;
    } else {
        if ((1U & (~ ((~ (IData)(vlSelf->__PVT__IntToFP_io_out_ready)) 
                      & ((IData)(vlSelf->__PVT__IntToFP__DOT__REG) 
                         & (IData)(vlSelf->__PVT__IntToFP__DOT__REG_1)))))) {
            __Vdly__IntToFP__DOT__REG = vlSelf->__PVT__IntToFP_io_in_valid;
        }
        if ((1U & (~ ((~ (IData)(vlSelf->__PVT__IntToFP_io_out_ready)) 
                      & (IData)(vlSelf->__PVT__IntToFP__DOT__REG_1))))) {
            __Vdly__IntToFP__DOT__REG_1 = vlSelf->__PVT__IntToFP__DOT__REG;
        }
        if ((1U & (~ ((~ (IData)(vlSelf->__PVT__FMA__DOT__mulPipe_io_out_ready)) 
                      & ((IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__REG) 
                         & (IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__REG_1)))))) {
            __Vdly__FMA__DOT__mulPipe__DOT__REG = vlSelf->__PVT__FMA__DOT__mulPipe_io_in_valid;
        }
        if ((1U & (~ ((~ (IData)(vlSelf->__PVT__FMA__DOT__mulPipe_io_out_ready)) 
                      & (IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__REG_1))))) {
            __Vdly__FMA__DOT__mulPipe__DOT__REG_1 = vlSelf->__PVT__FMA__DOT__mulPipe__DOT__REG;
        }
        if ((1U & (~ ((~ (IData)(vlSelf->__PVT__FMA__DOT__addPipe_io_out_ready)) 
                      & ((IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__REG) 
                         & (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__REG_1)))))) {
            __Vdly__FMA__DOT__addPipe__DOT__REG = vlSelf->__PVT__FMA__DOT__addPipe_io_in_valid;
        }
        if ((1U & (~ ((~ (IData)(vlSelf->__PVT__FMA__DOT__addPipe_io_out_ready)) 
                      & (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__REG_1))))) {
            __Vdly__FMA__DOT__addPipe__DOT__REG_1 = vlSelf->__PVT__FMA__DOT__addPipe__DOT__REG;
        }
        if ((1U & (~ ((~ (IData)(vlSelf->__PVT__FPToInt_io_out_ready)) 
                      & ((IData)(vlSelf->__PVT__FPToInt__DOT__REG) 
                         & (IData)(vlSelf->__PVT__FPToInt__DOT__REG_1)))))) {
            __Vdly__FPToInt__DOT__REG = vlSelf->__PVT__FPToInt_io_in_valid;
        }
        if ((1U & (~ ((~ (IData)(vlSelf->__PVT__FPToInt_io_out_ready)) 
                      & (IData)(vlSelf->__PVT__FPToInt__DOT__REG_1))))) {
            __Vdly__FPToInt__DOT__REG_1 = vlSelf->__PVT__FPToInt__DOT__REG;
        }
        if ((1U & (~ ((~ (IData)(vlSelf->__PVT__FPMV_io_out_ready)) 
                      & ((IData)(vlSelf->__PVT__FPMV__DOT__REG) 
                         & (IData)(vlSelf->__PVT__FPMV__DOT__REG_1)))))) {
            __Vdly__FPMV__DOT__REG = vlSelf->__PVT__FPMV_io_in_valid;
        }
        if ((1U & (~ ((~ (IData)(vlSelf->__PVT__FPMV_io_out_ready)) 
                      & (IData)(vlSelf->__PVT__FPMV__DOT__REG_1))))) {
            __Vdly__FPMV__DOT__REG_1 = vlSelf->__PVT__FPMV__DOT__REG;
        }
        if ((1U & (~ ((~ (IData)(vlSelf->__PVT__FCMP_io_out_ready)) 
                      & ((IData)(vlSelf->__PVT__FCMP__DOT__REG) 
                         & (IData)(vlSelf->__PVT__FCMP__DOT__REG_1)))))) {
            __Vdly__FCMP__DOT__REG = vlSelf->__PVT__FCMP_io_in_valid;
        }
        if ((1U & (~ ((~ (IData)(vlSelf->__PVT__FCMP_io_out_ready)) 
                      & (IData)(vlSelf->__PVT__FCMP__DOT__REG_1))))) {
            __Vdly__FCMP__DOT__REG_1 = vlSelf->__PVT__FCMP__DOT__REG;
        }
        if (((IData)(vlSelf->__PVT__FMA__DOT__mulFIFO__DOT__ram_result_MPORT_en) 
             != (IData)(vlSelf->__PVT__FMA__DOT__mulFIFO__DOT__do_deq))) {
            vlSelf->__PVT__FMA__DOT__mulFIFO__DOT__maybe_full 
                = vlSelf->__PVT__FMA__DOT__mulFIFO__DOT__ram_result_MPORT_en;
        }
        if (((IData)(vlSelf->__PVT__FMA__DOT__addFIFO__DOT__ram_result_MPORT_en) 
             != (IData)(vlSelf->__PVT__FMA__DOT__addFIFO__DOT__do_deq))) {
            vlSelf->__PVT__FMA__DOT__addFIFO__DOT__maybe_full 
                = vlSelf->__PVT__FMA__DOT__addFIFO__DOT__ram_result_MPORT_en;
        }
    }
    if (vlSelf->__PVT__FMA__DOT__mulFIFO__DOT__ram_result_MPORT_en) {
        __Vdlyvval__FMA__DOT__mulFIFO__DOT__ram_result__v0 
            = ((IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3_io_in_r_special_case_valid)
                ? ((IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3_io_in_r_special_case_bits_nan)
                    ? 0x7fc00000U : ((IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3_io_in_r_special_case_bits_inf)
                                      ? (0x7f800000U 
                                         | ((IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3_io_in_r_prod_sign) 
                                            << 0x1fU))
                                      : ((IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3_io_in_r_prod_sign) 
                                         << 0x1fU)))
                : (((IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3_io_in_r_prod_sign) 
                    << 0x1fU) | ((0x7f800000U & (((IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__common_of)
                                                   ? 
                                                  ((IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__rmin)
                                                    ? 0xfeU
                                                    : 0xffU)
                                                   : 
                                                  ((IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__rounder_io_cout) 
                                                   + (IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__raw_in_exp))) 
                                                 << 0x17U)) 
                                 | (0x7fffffU & ((IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__common_of)
                                                  ? 
                                                 ((IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__rmin)
                                                   ? 0x7fffffU
                                                   : 0U)
                                                  : 
                                                 (((vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__sig_shifted[2U] 
                                                    << 0xeU) 
                                                   | (vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__sig_shifted[1U] 
                                                      >> 0x12U)) 
                                                  + (IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__rounder__DOT__r_up)))))));
        __Vdlyvset__FMA__DOT__mulFIFO__DOT__ram_result__v0 = 1U;
    }
    if (vlSelf->__PVT__FMA__DOT__addFIFO__DOT__ram_result_MPORT_en) {
        __Vdlyvval__FMA__DOT__addFIFO__DOT__ram_result__v0 
            = ((IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_special_case_valid)
                ? ((IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_special_case_bits_nan)
                    ? 0x7fc00000U : (0x7f800000U | 
                                     ((IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_special_case_bits_inf_sign) 
                                      << 0x1fU))) : 
               ((((IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_sel_far_path) 
                  & ((0xffU == (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_far_path_out_exp)) 
                     | (((IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2__DOT__far_path_rounder_io_cout) 
                         & (0xfeU == (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_far_path_out_exp))) 
                        | (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_far_path_mul_of)))) 
                 | ((~ (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_sel_far_path)) 
                    & (0xffU == (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2__DOT__near_path_exp_rounded))))
                 ? ((((IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_sel_far_path)
                       ? (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_far_path_out_sign)
                       : (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_near_path_out_sign)) 
                     << 0x1fU) | ((((IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2__DOT__rmin)
                                     ? 0xfeU : 0xffU) 
                                   << 0x17U) | ((IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2__DOT__rmin)
                                                 ? 0x7fffffU
                                                 : 0U)))
                 : ((IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_sel_far_path)
                     ? (((IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_far_path_out_sign) 
                         << 0x1fU) | ((0x7f800000U 
                                       & (((IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2__DOT__far_path_rounder_io_cout) 
                                           + (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_far_path_out_exp)) 
                                          << 0x17U)) 
                                      | (0x7fffffU 
                                         & ((vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_far_path_out_sig 
                                             >> 3U) 
                                            + (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2__DOT__far_path_rounder__DOT__r_up)))))
                     : (((((~ (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2__DOT__near_path_is_zero)) 
                           & (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_near_path_out_sign)) 
                          | ((2U == (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_rm)) 
                             & (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2__DOT__near_path_is_zero))) 
                         << 0x1fU) | (((IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2__DOT__near_path_exp_rounded) 
                                       << 0x17U) | 
                                      (0x7fffffU & 
                                       ((vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_near_path_out_sig 
                                         >> 3U) + (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2__DOT__near_path_rounder__DOT__r_up))))))));
        __Vdlyvset__FMA__DOT__addFIFO__DOT__ram_result__v0 = 1U;
    }
    if (vlSelf->__PVT__FMA__DOT__addPipe__DOT___s1_io_a_T_4) {
        vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1_io_b_inter_valid_r 
            = vlSelf->__PVT__FMA__DOT__addPipe__DOT__isFMA;
        vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1_io_b_inter_flags_r_isNaN 
            = ((IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__isFMA) 
               & (IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3_io_in_r_special_case_bits_nan));
        vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1_io_b_inter_flags_r_isInf 
            = ((IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__isFMA) 
               & ((~ (IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3_io_in_r_special_case_bits_nan)) 
                  & (IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3_io_in_r_special_case_bits_inf)));
    }
    if (vlSelf->__PVT__FMA__DOT__addPipe__DOT___s2_io_in_T_3) {
        if (vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT___near_path_out_T_2) {
            vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_near_path_sig_is_zero 
                = (1U & ((~ (IData)((0U != vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__near_path_mods_1__DOT__lza_ab_io_f))) 
                         & (~ ((IData)(1U) + (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__near_path_mods_1__DOT___a_minus_b_T_3)))));
            vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_near_path_out_exp 
                = (0xffU & (((IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__near_path_mods_1__DOT__exceed_lim)
                              ? (0U != (0x1ffffffffffffULL 
                                        & ((0x2000000000000ULL 
                                            >> (0x3fU 
                                                & (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__near_path_mods_1_io_in_a_exp))) 
                                           & (1ULL 
                                              + vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__near_path_mods_1__DOT___a_minus_b_T_3))))
                              : ((0U != (0x1ffffffffffffULL 
                                         & ((vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__near_path_mods_1__DOT__int_bit_mask 
                                             >> 1U) 
                                            & (1ULL 
                                               + vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__near_path_mods_1__DOT___a_minus_b_T_3)))) 
                                 | (0U != vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__near_path_mods_1__DOT___int_bit_predicted_T_1)))
                             ? (((IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__near_path_mods_1_io_in_a_exp) 
                                 - (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__near_path_mods_1__DOT__lzc_clz_io_out)) 
                                - (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__near_path_mods_1__DOT__lza_error))
                             : 0U));
            vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_near_path_out_sig 
                = ((0x7fffffeU & ((IData)((vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__near_path_mods_1__DOT__near_path_sig 
                                           >> 0x17U)) 
                                  << 1U)) | (0U != 
                                             (0x7fffffU 
                                              & (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__near_path_mods_1__DOT__near_path_sig))));
            vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_near_path_out_sign 
                = (1U & ((1U & (IData)((1ULL & ((1ULL 
                                                 + vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__near_path_mods_1__DOT___a_minus_b_T_3) 
                                                >> 0x31U))))
                          ? (IData)((vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1_io_a_r 
                                     >> 0x37U)) : (IData)(
                                                          (vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1_io_b_r 
                                                           >> 0x37U))));
        } else {
            vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_near_path_sig_is_zero 
                = (1U & ((~ (IData)((0U != vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__near_path_mods_0__DOT__lza_ab_io_f))) 
                         & (~ ((IData)(1U) + (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__near_path_mods_0__DOT___a_minus_b_T_3)))));
            vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_near_path_out_exp 
                = (0xffU & (((IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__near_path_mods_0__DOT__exceed_lim)
                              ? (0U != (0x1ffffffffffffULL 
                                        & ((0x2000000000000ULL 
                                            >> (0x3fU 
                                                & (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__near_path_mods_0_io_in_a_exp))) 
                                           & (1ULL 
                                              + vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__near_path_mods_0__DOT___a_minus_b_T_3))))
                              : ((0U != (0x1ffffffffffffULL 
                                         & ((vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__near_path_mods_0__DOT__int_bit_mask 
                                             >> 1U) 
                                            & (1ULL 
                                               + vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__near_path_mods_0__DOT___a_minus_b_T_3)))) 
                                 | (0U != vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__near_path_mods_0__DOT___int_bit_predicted_T_1)))
                             ? (((IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__near_path_mods_0_io_in_a_exp) 
                                 - (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__near_path_mods_0__DOT__lzc_clz_io_out)) 
                                - (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__near_path_mods_0__DOT__lza_error))
                             : 0U));
            vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_near_path_out_sig 
                = ((0x7fffffeU & ((IData)((vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__near_path_mods_0__DOT__near_path_sig 
                                           >> 0x17U)) 
                                  << 1U)) | (0U != 
                                             (0x7fffffU 
                                              & (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__near_path_mods_0__DOT__near_path_sig))));
            vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_near_path_out_sign 
                = (1U & ((1U & (IData)((1ULL & ((1ULL 
                                                 + vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__near_path_mods_0__DOT___a_minus_b_T_3) 
                                                >> 0x31U))))
                          ? (IData)((vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1_io_b_r 
                                     >> 0x37U)) : (IData)(
                                                          (vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1_io_a_r 
                                                           >> 0x37U))));
        }
        vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_far_path_out_exp 
            = (0xffU & ((((1U & (IData)((vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__far_path_mods_0__DOT__adder_result 
                                         >> 0x33U)))
                           ? ((IData)(1U) + (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__far_path_mods_0_io_in_a_exp))
                           : 0U) | ((1U == (3U & (IData)(
                                                         (vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__far_path_mods_0__DOT__adder_result 
                                                          >> 0x32U))))
                                     ? (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__far_path_mods_0_io_in_a_exp)
                                     : 0U)) | ((0U 
                                                == 
                                                (3U 
                                                 & (IData)(
                                                           (vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__far_path_mods_0__DOT__adder_result 
                                                            >> 0x32U))))
                                                ? ((IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__far_path_mods_0_io_in_a_exp) 
                                                   - (IData)(1U))
                                                : 0U)));
        vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_special_case_valid 
            = ((IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__special_path_hasNaN) 
               | ((IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__decode_a___05FisInf) 
                  | (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__b_isInf)));
        vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_special_case_bits_nan 
            = ((IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__special_path_hasNaN) 
               | ((IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__decode_a___05FisInf) 
                  & ((IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__b_isInf) 
                     & (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__far_path_mods_0_io_in_effSub))));
        vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_far_path_out_sig 
            = ((((1U & (IData)((vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__far_path_mods_0__DOT__adder_result 
                                >> 0x33U))) ? ((0x7fffffeU 
                                                & ((IData)(
                                                           (vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__far_path_mods_0__DOT__adder_result 
                                                            >> 0x1aU)) 
                                                   << 1U)) 
                                               | (0U 
                                                  != 
                                                  (0x3ffffffU 
                                                   & (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__far_path_mods_0__DOT__adder_result))))
                  : 0U) | (((1U == (3U & (IData)((vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__far_path_mods_0__DOT__adder_result 
                                                  >> 0x32U)))) 
                            | (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__far_path_mods_0_io_in_smallAdd))
                            ? ((0x7fffffeU & ((IData)(
                                                      (vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__far_path_mods_0__DOT__adder_result 
                                                       >> 0x19U)) 
                                              << 1U)) 
                               | (0U != (0x1ffffffU 
                                         & (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__far_path_mods_0__DOT__adder_result))))
                            : 0U)) | (((~ (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__far_path_mods_0_io_in_smallAdd)) 
                                       & (0ULL == (0xc000000000000ULL 
                                                   & vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__far_path_mods_0__DOT__adder_result)))
                                       ? ((0x7fffffeU 
                                           & ((IData)(
                                                      (vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__far_path_mods_0__DOT__adder_result 
                                                       >> 0x18U)) 
                                              << 1U)) 
                                          | (0U != 
                                             (0xffffffU 
                                              & (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__far_path_mods_0__DOT__adder_result))))
                                       : 0U));
        vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_rm 
            = vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1_io_rm_r;
        vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_sel_far_path 
            = (1U & ((~ (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__far_path_mods_0_io_in_effSub)) 
                     | ((1U < (0xffU & ((IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__need_swap)
                                         ? (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__exp_diff_b_a)
                                         : (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__exp_diff_a_b)))) 
                        | (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1_io_b_inter_flags_r_overflow))));
        vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_far_path_mul_of 
            = ((IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1_io_b_inter_flags_r_overflow) 
               | ((~ (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__far_path_mods_0_io_in_effSub)) 
                  & (0x7f800000000000ULL == (0x7f800000000000ULL 
                                             & vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1_io_b_r))));
        vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_special_case_bits_inf_sign 
            = (1U & ((IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__decode_a___05FisInf)
                      ? (IData)((vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1_io_a_r 
                                 >> 0x37U)) : (IData)(
                                                      (vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1_io_b_r 
                                                       >> 0x37U))));
        vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_far_path_out_sign 
            = (1U & ((IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__need_swap)
                      ? (IData)((vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1_io_b_r 
                                 >> 0x37U)) : (IData)(
                                                      (vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1_io_a_r 
                                                       >> 0x37U))));
    }
    if (vlSelf->__PVT__FMA__DOT__addPipe__DOT___s1_io_a_T_4) {
        vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1_io_rm_r 
            = vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s1_io_rm;
        vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1_io_b_inter_flags_r_overflow 
            = ((IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__isFMA) 
               & (0xffU < (IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__exp_pre_round)));
        vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1_io_b_r 
            = ((QData)((IData)((((IData)(vlSelf->__PVT__FMA__DOT__toAddArbiter_io_in_0_valid) 
                                 & (IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__toAdd_op_r_1))
                                 ? (((~ (vlSelf->__PVT__FMA__DOT__addPipe__DOT__srcB 
                                         >> 0x1fU)) 
                                     << 0x1fU) | (0x7fffffffU 
                                                  & vlSelf->__PVT__FMA__DOT__addPipe__DOT__srcB))
                                 : vlSelf->__PVT__FMA__DOT__addPipe__DOT__srcB))) 
               << 0x18U);
        vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1_io_a_r 
            = ((IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__isFMA)
                ? (((QData)((IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3_io_in_r_prod_sign)) 
                    << 0x37U) | (((QData)((IData)(((IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3_io_in_r_special_case_bits_hasZero)
                                                    ? 0U
                                                    : (IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__raw_in_exp)))) 
                                  << 0x2fU) | ((IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3_io_in_r_special_case_bits_hasZero)
                                                ? 0ULL
                                                : (0x7fffffffffffULL 
                                                   & ((((QData)((IData)(
                                                                        vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__sig_shifted[2U])) 
                                                        << 0x26U) 
                                                       | (((QData)((IData)(
                                                                           vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__sig_shifted[1U])) 
                                                           << 6U) 
                                                          | ((QData)((IData)(
                                                                             vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__sig_shifted[0U])) 
                                                             >> 0x1aU))) 
                                                      | (QData)((IData)(
                                                                        (0U 
                                                                         != 
                                                                         (0x3ffffffU 
                                                                          & vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__sig_shifted[0U])))))))))
                : ((QData)((IData)(((0U == (7U & ((IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0_io_in_bits_op) 
                                                  >> 3U)))
                                     ? vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_1_io_in_bits_a
                                     : 0U))) << 0x18U));
    }
    if (vlSelf->__PVT__FMA__DOT__mulPipe__DOT___s3_io_in_T_3) {
        vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3_io_in_r_early_overflow 
            = vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s2_io_in_r_early_overflow;
        vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3_io_in_r_rm 
            = vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s2_io_in_r_rm;
        vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3_io_in_r_exp_shifted 
            = vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s2_io_in_r_exp_shifted;
        vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3_io_in_r_may_be_subnormal 
            = vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s2_io_in_r_may_be_subnormal;
        vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3_io_in_r_shift_amt 
            = vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s2_io_in_r_shift_amt;
        vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3_io_in_r_prod 
            = (0xffffffffffffULL & ((QData)((IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__multiplier__DOT__io_result_r)) 
                                    * (QData)((IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__multiplier__DOT__io_result_r_1))));
        vlSelf->__PVT__FMA__DOT__mulPipe__DOT__toAdd_addAnother_r_1 
            = vlSelf->__PVT__FMA__DOT__mulPipe__DOT__toAdd_addAnother_r;
        vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3_io_in_r_special_case_valid 
            = vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s2_io_in_r_special_case_valid;
        vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3_io_in_r_special_case_bits_inf 
            = vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s2_io_in_r_special_case_bits_inf;
        vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3_io_in_r_special_case_bits_nan 
            = vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s2_io_in_r_special_case_bits_nan;
        vlSelf->__PVT__FMA__DOT__mulPipe__DOT__toAdd_op_r_1 
            = vlSelf->__PVT__FMA__DOT__mulPipe__DOT__toAdd_op_r;
        vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3_io_in_r_special_case_bits_hasZero 
            = vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s2_io_in_r_special_case_bits_hasZero;
        vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3_io_in_r_prod_sign 
            = vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s2_io_in_r_prod_sign;
    }
    if (vlSelf->__PVT__IntToFP__DOT___s2_isSingle_T_8) {
        vlSelf->__PVT__IntToFP__DOT__io_out_bits_result_r 
            = (((IData)(vlSelf->__PVT__IntToFP__DOT__r_sign) 
                << 0x1fU) | ((((IData)(vlSelf->__PVT__IntToFP__DOT__r_is_zero)
                                ? 0U : (0xffU & (((IData)(0xbeU) 
                                                  - (IData)(vlSelf->__PVT__IntToFP__DOT__r_lzc)) 
                                                 + 
                                                 ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_postnorm__DOT__rounder__DOT__r_up) 
                                                  & (0x7fffffU 
                                                     == 
                                                     (0x7fffffU 
                                                      & (IData)(
                                                                (vlSelf->__PVT__IntToFP__DOT__r_norm_int 
                                                                 >> 0x28U)))))))) 
                              << 0x17U) | (0x7fffffU 
                                           & ((IData)(
                                                      (vlSelf->__PVT__IntToFP__DOT__r_norm_int 
                                                       >> 0x28U)) 
                                              + (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_postnorm__DOT__rounder__DOT__r_up)))));
        vlSelf->__PVT__IntToFP__DOT__s2_isSingle = vlSelf->__PVT__IntToFP__DOT__s2_isSingle_r;
    }
    if (vlSelf->__PVT__IntToFP__DOT___s2_isSingle_T_4) {
        vlSelf->__PVT__IntToFP__DOT__r_1 = ((4U == 
                                             (7U & 
                                              ((IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0_io_in_bits_op) 
                                               >> 3U)))
                                             ? (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0_io_in_bits_rm)
                                             : 0U);
        vlSelf->__PVT__IntToFP__DOT__r_norm_int = (0x7fffffffffffffffULL 
                                                   & ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lzc_error)
                                                       ? 
                                                      (vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__in_shift_s1 
                                                       << 1U)
                                                       : vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__in_shift_s1));
        vlSelf->__PVT__IntToFP__DOT__r_lzc = (0x3fU 
                                              & ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lzc) 
                                                 + (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lzc_error)));
        vlSelf->__PVT__IntToFP__DOT__r_sign = vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__in_sign;
        vlSelf->__PVT__IntToFP__DOT__r_is_zero = (0ULL 
                                                  == vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__pos_lzc_clz_io_in);
        vlSelf->__PVT__IntToFP__DOT__s2_isSingle_r 
            = (1U & (~ (IData)(vlSelf->IntToFP__DOT____VdfgTmp_h0d28c158__0)));
    }
    if (vlSelf->__PVT__FPToInt__DOT___io_out_bits_fflags_T_3) {
        vlSelf->__PVT__FPToInt__DOT__io_out_bits_result_r_1 
            = (((((IData)(vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__raw_a_exp) 
                  > (0xffU & ((IData)(0x7fU) + ((2U 
                                                 & (IData)(vlSelf->__PVT__FPToInt__DOT__coreOp))
                                                 ? 0x3fU
                                                 : 0x1fU)))) 
                 | ((0x96U <= (IData)(vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__raw_a_exp)) 
                    & (((~ (IData)(vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__rpath_rounder_io_signIn)) 
                        & (IData)(vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__lpath_may_of)) 
                       | ((IData)(vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__lpath_may_of) 
                          & ((IData)(vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__rpath_rounder_io_signIn) 
                             & (0U != vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__fp_a_sig)))))) 
                | (((0x96U <= (IData)(vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__raw_a_exp)) 
                    & (IData)(vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__lpath_iv)) 
                   | ((0x96U > (IData)(vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__raw_a_exp)) 
                      & ((IData)(vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__lpath_iv) 
                         & (0U != vlSelf->__VdfgTmp_h22dfd192__0)))))
                ? ((1U & ((~ (IData)(vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__rpath_rounder_io_signIn)) 
                          | ((0xffU == (IData)(vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__fp_a_exp)) 
                             & (0U != vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__fp_a_sig))))
                    ? ((2U & (IData)(vlSelf->__PVT__FPToInt__DOT__coreOp))
                        ? (0x7fffffffffffffffULL | 
                           ((QData)((IData)((1U & (~ (IData)(vlSelf->__PVT__FPToInt__DOT__coreOp))))) 
                            << 0x3fU)) : (0x7fffffffULL 
                                          | (0x80000000ULL 
                                             & ((QData)((IData)(
                                                                (1U 
                                                                 & (~ (IData)(vlSelf->__PVT__FPToInt__DOT__coreOp))))) 
                                                << 0x1fU))))
                    : ((2U & (IData)(vlSelf->__PVT__FPToInt__DOT__coreOp))
                        ? ((QData)((IData)((1U & (IData)(vlSelf->__PVT__FPToInt__DOT__coreOp)))) 
                           << 0x3fU) : (0x80000000ULL 
                                        & ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(vlSelf->__PVT__FPToInt__DOT__coreOp)))) 
                                           << 0x1fU))))
                : ((((IData)(vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__rpath_rounder_io_signIn) 
                     & (IData)(vlSelf->__PVT__FPToInt__DOT__coreOp))
                     ? (- vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__int_abs)
                     : vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__int_abs) 
                   & (0xffffffffULL | ((QData)((IData)(
                                                       ((2U 
                                                         & (IData)(vlSelf->__PVT__FPToInt__DOT__coreOp))
                                                         ? 0xffffffffU
                                                         : 0U))) 
                                       << 0x20U))));
        vlSelf->__PVT__FPToInt__DOT__io_out_bits_result_r 
            = vlSelf->__PVT__FPToInt__DOT__isSingle;
    }
    if (vlSelf->__PVT__FPToInt__DOT___isSingle_T_7) {
        if ((3U == (7U & ((IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0_io_in_bits_op) 
                          >> 3U)))) {
            vlSelf->__PVT__FPToInt__DOT__rm = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0_io_in_bits_rm;
            vlSelf->__PVT__FPToInt__DOT__coreOp = (3U 
                                                   & (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0_io_in_bits_op));
        } else {
            vlSelf->__PVT__FPToInt__DOT__rm = 0U;
            vlSelf->__PVT__FPToInt__DOT__coreOp = 0U;
        }
        vlSelf->__PVT__FPToInt__DOT__src = (QData)((IData)(
                                                           ((3U 
                                                             == 
                                                             (7U 
                                                              & ((IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0_io_in_bits_op) 
                                                                 >> 3U)))
                                                             ? vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_1_io_in_bits_a
                                                             : 0U)));
        vlSelf->__PVT__FPToInt__DOT__isSingle = (1U 
                                                 & (~ (IData)(
                                                              (0x1cU 
                                                               == 
                                                               (0x3cU 
                                                                & (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0_io_in_bits_op))))));
    }
    if (((~ ((~ (IData)(vlSelf->__PVT__FPMV_io_out_ready)) 
             & (IData)(vlSelf->__PVT__FPMV__DOT__REG_1))) 
         & (IData)(vlSelf->__PVT__FPMV__DOT__REG))) {
        vlSelf->__PVT__FPMV__DOT__io_out_bits_result_r 
            = ((2U == (IData)(vlSelf->__PVT__FPMV__DOT__s1_op))
                ? (QData)((IData)(((((IData)(vlSelf->__PVT__FPMV__DOT__classifyOut_decode___05FisNaN) 
                                     & (IData)((vlSelf->__PVT__FPMV__DOT__a 
                                                >> 0x16U))) 
                                    << 9U) | ((((~ (IData)(
                                                           (vlSelf->__PVT__FPMV__DOT__a 
                                                            >> 0x16U))) 
                                                & (IData)(vlSelf->__PVT__FPMV__DOT__classifyOut_decode___05FisNaN)) 
                                               << 8U) 
                                              | ((((~ (IData)(
                                                              (vlSelf->__PVT__FPMV__DOT__a 
                                                               >> 0x1fU))) 
                                                   & (IData)(vlSelf->__PVT__FPMV__DOT__classifyOut_decode___05FisInf)) 
                                                  << 7U) 
                                                 | ((((~ (IData)(
                                                                 (vlSelf->__PVT__FPMV__DOT__a 
                                                                  >> 0x1fU))) 
                                                      & (IData)(vlSelf->__PVT__FPMV__DOT__classifyOut_isNormal)) 
                                                     << 6U) 
                                                    | ((((~ (IData)(
                                                                    (vlSelf->__PVT__FPMV__DOT__a 
                                                                     >> 0x1fU))) 
                                                         & (IData)(vlSelf->__PVT__FPMV__DOT__classifyOut_decode___05FisSubnormal)) 
                                                        << 5U) 
                                                       | ((((~ (IData)(
                                                                       (vlSelf->__PVT__FPMV__DOT__a 
                                                                        >> 0x1fU))) 
                                                            & (IData)(vlSelf->__PVT__FPMV__DOT__classifyOut_decode___05FisZero)) 
                                                           << 4U) 
                                                          | ((((IData)(vlSelf->__PVT__FPMV__DOT__classifyOut_decode___05FisZero) 
                                                               & (IData)(
                                                                         (vlSelf->__PVT__FPMV__DOT__a 
                                                                          >> 0x1fU))) 
                                                              << 3U) 
                                                             | ((((IData)(vlSelf->__PVT__FPMV__DOT__classifyOut_decode___05FisSubnormal) 
                                                                  & (IData)(
                                                                            (vlSelf->__PVT__FPMV__DOT__a 
                                                                             >> 0x1fU))) 
                                                                 << 2U) 
                                                                | ((((IData)(vlSelf->__PVT__FPMV__DOT__classifyOut_isNormal) 
                                                                     & (IData)(
                                                                               (vlSelf->__PVT__FPMV__DOT__a 
                                                                                >> 0x1fU))) 
                                                                    << 1U) 
                                                                   | ((IData)(vlSelf->__PVT__FPMV__DOT__classifyOut_decode___05FisInf) 
                                                                      & (IData)(
                                                                                (vlSelf->__PVT__FPMV__DOT__a 
                                                                                >> 0x1fU))))))))))))))
                : vlSelf->__PVT__FPMV__DOT__a);
    }
    if (((~ ((~ (IData)(vlSelf->__PVT__FCMP_io_out_ready)) 
             & (IData)(vlSelf->__PVT__FCMP__DOT__REG_1))) 
         & (IData)(vlSelf->__PVT__FCMP__DOT__REG))) {
        vlSelf->__PVT__FCMP__DOT__io_out_bits_result_r 
            = ((0x10U & (IData)(vlSelf->__PVT__FCMP__DOT__fflags))
                ? 0U : ((8U == (8U | (IData)(vlSelf->__PVT__FCMP__DOT__op)))
                         ? ((IData)(vlSelf->__PVT__FCMP__DOT__lt)
                             ? vlSelf->__PVT__FCMP__DOT__a
                             : vlSelf->__PVT__FCMP__DOT__b)
                         : ((9U == (8U | (IData)(vlSelf->__PVT__FCMP__DOT__op)))
                             ? ((IData)(vlSelf->__PVT__FCMP__DOT__lt)
                                 ? vlSelf->__PVT__FCMP__DOT__b
                                 : vlSelf->__PVT__FCMP__DOT__a)
                             : ((3U == (IData)(vlSelf->__PVT__FCMP__DOT__op))
                                 ? (IData)(vlSelf->__PVT__FCMP__DOT__lt)
                                 : ((2U == (IData)(vlSelf->__PVT__FCMP__DOT__op))
                                     ? (IData)(vlSelf->__PVT__FCMP__DOT__le)
                                     : ((5U == (IData)(vlSelf->__PVT__FCMP__DOT__op))
                                         ? (1U & (~ (IData)(vlSelf->__PVT__FCMP__DOT__eq)))
                                         : ((4U == (IData)(vlSelf->__PVT__FCMP__DOT__op))
                                             ? (IData)(vlSelf->__PVT__FCMP__DOT__eq)
                                             : 0U)))))));
    }
    vlSelf->__PVT__IntToFP__DOT__REG = __Vdly__IntToFP__DOT__REG;
    vlSelf->__PVT__IntToFP__DOT__REG_1 = __Vdly__IntToFP__DOT__REG_1;
    vlSelf->__PVT__FMA__DOT__mulPipe__DOT__REG = __Vdly__FMA__DOT__mulPipe__DOT__REG;
    vlSelf->__PVT__FMA__DOT__mulPipe__DOT__REG_1 = __Vdly__FMA__DOT__mulPipe__DOT__REG_1;
    vlSelf->__PVT__FMA__DOT__addPipe__DOT__REG = __Vdly__FMA__DOT__addPipe__DOT__REG;
    vlSelf->__PVT__FMA__DOT__addPipe__DOT__REG_1 = __Vdly__FMA__DOT__addPipe__DOT__REG_1;
    vlSelf->__PVT__FPToInt__DOT__REG = __Vdly__FPToInt__DOT__REG;
    vlSelf->__PVT__FPToInt__DOT__REG_1 = __Vdly__FPToInt__DOT__REG_1;
    if (__Vdlyvset__FMA__DOT__mulFIFO__DOT__ram_result__v0) {
        vlSelf->__PVT__FMA__DOT__mulFIFO__DOT__ram_result[0U] 
            = __Vdlyvval__FMA__DOT__mulFIFO__DOT__ram_result__v0;
    }
    if (__Vdlyvset__FMA__DOT__addFIFO__DOT__ram_result__v0) {
        vlSelf->__PVT__FMA__DOT__addFIFO__DOT__ram_result[0U] 
            = __Vdlyvval__FMA__DOT__addFIFO__DOT__ram_result__v0;
    }
    vlSelf->__PVT__FPMV__DOT__REG = __Vdly__FPMV__DOT__REG;
    vlSelf->__PVT__FPMV__DOT__REG_1 = __Vdly__FPMV__DOT__REG_1;
    vlSelf->__PVT__FCMP__DOT__REG = __Vdly__FCMP__DOT__REG;
    vlSelf->__PVT__FCMP__DOT__REG_1 = __Vdly__FCMP__DOT__REG_1;
    if (vlSelf->__PVT__FMA__DOT__mulPipe__DOT__multiplier_io_regEnables_0) {
        vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s2_io_in_r_early_overflow 
            = (0x17dU < (IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s1__DOT__exp_sum));
        vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s2_io_in_r_rm 
            = vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s1_io_rm;
        vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s2_io_in_r_exp_shifted 
            = (0x1ffU & (((IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s1__DOT__exp_sum) 
                          - (IData)(0x64U)) - (IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s1__DOT__shift_amt)));
        vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s2_io_in_r_may_be_subnormal 
            = (1U & ((IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s1__DOT__exceed_lim) 
                     | (1U & (((IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s1__DOT__exp_sum) 
                               - (IData)(0x65U)) >> 9U))));
        vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s2_io_in_r_shift_amt 
            = vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s1__DOT__shift_amt;
        vlSelf->__PVT__FMA__DOT__mulPipe__DOT__multiplier__DOT__io_result_r_1 
            = vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s1__DOT__raw_b_sig;
        vlSelf->__PVT__FMA__DOT__mulPipe__DOT__multiplier__DOT__io_result_r 
            = vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s1__DOT__raw_a_sig;
        vlSelf->__PVT__FMA__DOT__mulPipe__DOT__toAdd_addAnother_r 
            = ((0U == (7U & ((IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0_io_in_bits_op) 
                             >> 3U))) ? ((IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.pipe__DOT__fpu__DOT____VdfgTmp_hd90b9525__0)
                                          ? vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__exe_data__DOT__ram_in2_1
                                         [0U] : vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__exe_data__DOT__ram_in3_1
                                         [0U]) : 0U);
        vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s2_io_in_r_special_case_valid 
            = ((IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s1__DOT__hasZero) 
               | ((IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s1__DOT__hasNaN) 
                  | (IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s1__DOT__hasInf)));
        vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s2_io_in_r_special_case_bits_inf 
            = vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s1__DOT__hasInf;
        vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s2_io_in_r_special_case_bits_nan 
            = ((IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s1__DOT__hasNaN) 
               | ((IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s1__DOT__hasZero) 
                  & (IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s1__DOT__hasInf)));
        vlSelf->__PVT__FMA__DOT__mulPipe__DOT__toAdd_op_r 
            = vlSelf->__PVT__FMA__DOT__mulPipe_io_in_bits_op;
        vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s2_io_in_r_special_case_bits_hasZero 
            = vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s1__DOT__hasZero;
        vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s2_io_in_r_prod_sign 
            = (1U & ((IData)(((0U == (0x38U & (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0_io_in_bits_op))) 
                              & (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_1_io_in_bits_a 
                                 >> 0x1fU))) ^ (vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s1_io_b 
                                                >> 0x1fU)));
    }
    VL_EXTEND_WQ(74,48, __Vtemp_hd69ef506__0, vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3_io_in_r_prod);
    VL_SHIFTL_WWI(74,74,9, __Vtemp_h2d568758__0, __Vtemp_hd69ef506__0, (IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3_io_in_r_shift_amt));
    vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__sig_shifted_raw[0U] 
        = __Vtemp_h2d568758__0[0U];
    vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__sig_shifted_raw[1U] 
        = __Vtemp_h2d568758__0[1U];
    vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__sig_shifted_raw[2U] 
        = (0x3ffU & __Vtemp_h2d568758__0[2U]);
    VL_EXTEND_WQ(585,48, __Vtemp_hd7be74e6__0, vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3_io_in_r_prod);
    VL_SHIFTL_WWI(585,585,9, __Vtemp_h2ce4aade__0, __Vtemp_hd7be74e6__0, (IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3_io_in_r_shift_amt));
    __PVT__FMA__DOT__mulPipe__DOT__s3__DOT___sig_shifted_raw_T[0U] 
        = (VVentus__ConstPool__CONST_h7b110aeb_0[0U] 
           & __Vtemp_h2ce4aade__0[0U]);
    __PVT__FMA__DOT__mulPipe__DOT__s3__DOT___sig_shifted_raw_T[1U] 
        = (VVentus__ConstPool__CONST_h7b110aeb_0[1U] 
           & __Vtemp_h2ce4aade__0[1U]);
    __PVT__FMA__DOT__mulPipe__DOT__s3__DOT___sig_shifted_raw_T[2U] 
        = (VVentus__ConstPool__CONST_h7b110aeb_0[2U] 
           & __Vtemp_h2ce4aade__0[2U]);
    __PVT__FMA__DOT__mulPipe__DOT__s3__DOT___sig_shifted_raw_T[3U] 
        = (VVentus__ConstPool__CONST_h7b110aeb_0[3U] 
           & __Vtemp_h2ce4aade__0[3U]);
    __PVT__FMA__DOT__mulPipe__DOT__s3__DOT___sig_shifted_raw_T[4U] 
        = (VVentus__ConstPool__CONST_h7b110aeb_0[4U] 
           & __Vtemp_h2ce4aade__0[4U]);
    __PVT__FMA__DOT__mulPipe__DOT__s3__DOT___sig_shifted_raw_T[5U] 
        = (VVentus__ConstPool__CONST_h7b110aeb_0[5U] 
           & __Vtemp_h2ce4aade__0[5U]);
    __PVT__FMA__DOT__mulPipe__DOT__s3__DOT___sig_shifted_raw_T[6U] 
        = (VVentus__ConstPool__CONST_h7b110aeb_0[6U] 
           & __Vtemp_h2ce4aade__0[6U]);
    __PVT__FMA__DOT__mulPipe__DOT__s3__DOT___sig_shifted_raw_T[7U] 
        = (VVentus__ConstPool__CONST_h7b110aeb_0[7U] 
           & __Vtemp_h2ce4aade__0[7U]);
    __PVT__FMA__DOT__mulPipe__DOT__s3__DOT___sig_shifted_raw_T[8U] 
        = (VVentus__ConstPool__CONST_h7b110aeb_0[8U] 
           & __Vtemp_h2ce4aade__0[8U]);
    __PVT__FMA__DOT__mulPipe__DOT__s3__DOT___sig_shifted_raw_T[9U] 
        = (VVentus__ConstPool__CONST_h7b110aeb_0[9U] 
           & __Vtemp_h2ce4aade__0[9U]);
    __PVT__FMA__DOT__mulPipe__DOT__s3__DOT___sig_shifted_raw_T[0xaU] 
        = (VVentus__ConstPool__CONST_h7b110aeb_0[0xaU] 
           & __Vtemp_h2ce4aade__0[0xaU]);
    __PVT__FMA__DOT__mulPipe__DOT__s3__DOT___sig_shifted_raw_T[0xbU] 
        = (VVentus__ConstPool__CONST_h7b110aeb_0[0xbU] 
           & __Vtemp_h2ce4aade__0[0xbU]);
    __PVT__FMA__DOT__mulPipe__DOT__s3__DOT___sig_shifted_raw_T[0xcU] 
        = (VVentus__ConstPool__CONST_h7b110aeb_0[0xcU] 
           & __Vtemp_h2ce4aade__0[0xcU]);
    __PVT__FMA__DOT__mulPipe__DOT__s3__DOT___sig_shifted_raw_T[0xdU] 
        = (VVentus__ConstPool__CONST_h7b110aeb_0[0xdU] 
           & __Vtemp_h2ce4aade__0[0xdU]);
    __PVT__FMA__DOT__mulPipe__DOT__s3__DOT___sig_shifted_raw_T[0xeU] 
        = (VVentus__ConstPool__CONST_h7b110aeb_0[0xeU] 
           & __Vtemp_h2ce4aade__0[0xeU]);
    __PVT__FMA__DOT__mulPipe__DOT__s3__DOT___sig_shifted_raw_T[0xfU] 
        = (VVentus__ConstPool__CONST_h7b110aeb_0[0xfU] 
           & __Vtemp_h2ce4aade__0[0xfU]);
    __PVT__FMA__DOT__mulPipe__DOT__s3__DOT___sig_shifted_raw_T[0x10U] 
        = (VVentus__ConstPool__CONST_h7b110aeb_0[0x10U] 
           & __Vtemp_h2ce4aade__0[0x10U]);
    __PVT__FMA__DOT__mulPipe__DOT__s3__DOT___sig_shifted_raw_T[0x11U] 
        = (VVentus__ConstPool__CONST_h7b110aeb_0[0x11U] 
           & __Vtemp_h2ce4aade__0[0x11U]);
    __PVT__FMA__DOT__mulPipe__DOT__s3__DOT___sig_shifted_raw_T[0x12U] 
        = (VVentus__ConstPool__CONST_h7b110aeb_0[0x12U] 
           & __Vtemp_h2ce4aade__0[0x12U]);
    vlSelf->__PVT__FMA__DOT__toOutArbiter_io_out_valid 
        = ((IData)(vlSelf->__PVT__FMA__DOT__addFIFO__DOT__maybe_full) 
           | (IData)(vlSelf->__PVT__FMA__DOT__mulFIFO__DOT__maybe_full));
    vlSelf->__PVT__FMA__DOT__addFIFO__DOT__do_deq = 
        ((IData)(vlSelf->__PVT__FMA__DOT__addFIFO__DOT__maybe_full) 
         & (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addFIFO_io_deq_ready));
    vlSelf->__PVT__FMA__DOT__mulFIFO_io_deq_ready = 
        ((~ (IData)(vlSelf->__PVT__FMA__DOT__addFIFO__DOT__maybe_full)) 
         & (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addFIFO_io_deq_ready));
    vlSelf->__PVT__FMA__DOT__addPipe_io_out_ready = 
        (1U & ((~ (IData)(vlSelf->__PVT__FMA__DOT__addFIFO__DOT__maybe_full)) 
               | (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addFIFO_io_deq_ready)));
    vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2__DOT__near_path_is_zero 
        = ((0U == (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_near_path_out_exp)) 
           & (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_near_path_sig_is_zero));
    if (vlSelf->__PVT__FPMV__DOT___a_T_8) {
        vlSelf->__PVT__FPMV__DOT__s1_op = vlSelf->__PVT__FPMV_io_in_bits_op;
        vlSelf->__PVT__FPMV__DOT__a = ((2U == (IData)(vlSelf->__PVT__FPMV_io_in_bits_op))
                                        ? (QData)((IData)(vlSelf->__PVT__FPMV_io_in_bits_a))
                                        : (((QData)((IData)(
                                                            ((4U 
                                                              == (IData)(vlSelf->__PVT__FPMV_io_in_bits_op))
                                                              ? 
                                                             ((IData)(
                                                                      ((0x10U 
                                                                        == 
                                                                        (0x38U 
                                                                         & (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0_io_in_bits_op))) 
                                                                       & (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_1_io_in_bits_a 
                                                                          >> 0x1fU))) 
                                                              ^ (IData)(vlSelf->FPMV__DOT____VdfgTmp_h8faae4b3__0))
                                                              : 
                                                             ((5U 
                                                               == (IData)(vlSelf->__PVT__FPMV_io_in_bits_op))
                                                               ? 
                                                              (1U 
                                                               & (~ (IData)(vlSelf->FPMV__DOT____VdfgTmp_h8faae4b3__0)))
                                                               : 
                                                              ((6U 
                                                                == (IData)(vlSelf->__PVT__FPMV_io_in_bits_op))
                                                                ? 
                                                               (((2U 
                                                                  == 
                                                                  (7U 
                                                                   & ((IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0_io_in_bits_op) 
                                                                      >> 3U)))
                                                                  ? vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_1_io_in_bits_b
                                                                  : 0U) 
                                                                >> 0x1fU)
                                                                : vlSelf->__PVT__FPMV_io_in_bits_a))))) 
                                            << 0x1fU) 
                                           | (QData)((IData)(
                                                             ((2U 
                                                               == 
                                                               (7U 
                                                                & ((IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0_io_in_bits_op) 
                                                                   >> 3U)))
                                                               ? 
                                                              (0x7fffffffU 
                                                               & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_1_io_in_bits_a)
                                                               : 0U)))));
    }
    if (vlSelf->__PVT__FCMP__DOT___eq_T_4) {
        vlSelf->__PVT__FCMP__DOT__a = vlSelf->__PVT__FCMP__DOT__FCMPCore_io_a;
        vlSelf->__PVT__FCMP__DOT__b = vlSelf->__PVT__FCMP__DOT__FCMPCore_io_b;
        vlSelf->__PVT__FCMP__DOT__eq = ((~ (IData)(vlSelf->__PVT__FCMP__DOT__FCMPCore__DOT__hasNaN)) 
                                        & ((0U == (IData)(vlSelf->__PVT__FCMP__DOT__FCMPCore__DOT__a_minus_b)) 
                                           | (IData)(vlSelf->__PVT__FCMP__DOT__FCMPCore__DOT__bothZero)));
        vlSelf->__PVT__FCMP__DOT__lt = ((~ (IData)(vlSelf->__PVT__FCMP__DOT__FCMPCore__DOT__hasNaN)) 
                                        & ((IData)(vlSelf->__PVT__FCMP__DOT__FCMPCore__DOT__same_sign)
                                            ? ((0U 
                                                != (IData)(vlSelf->__PVT__FCMP__DOT__FCMPCore__DOT__a_minus_b)) 
                                               & (IData)(vlSelf->__PVT__FCMP__DOT__FCMPCore__DOT__uint_less))
                                            : ((~ (IData)(vlSelf->__PVT__FCMP__DOT__FCMPCore__DOT__bothZero)) 
                                               & (IData)(vlSelf->__PVT__FCMP__DOT__FCMPCore__DOT__fp_a_sign))));
        vlSelf->__PVT__FCMP__DOT__le = ((~ (IData)(vlSelf->__PVT__FCMP__DOT__FCMPCore__DOT__hasNaN)) 
                                        & ((IData)(vlSelf->__PVT__FCMP__DOT__FCMPCore__DOT__same_sign)
                                            ? ((IData)(vlSelf->__PVT__FCMP__DOT__FCMPCore__DOT__uint_less) 
                                               | (0U 
                                                  == (IData)(vlSelf->__PVT__FCMP__DOT__FCMPCore__DOT__a_minus_b)))
                                            : ((IData)(vlSelf->__PVT__FCMP__DOT__FCMPCore__DOT__fp_a_sign) 
                                               | (IData)(vlSelf->__PVT__FCMP__DOT__FCMPCore__DOT__bothZero))));
        vlSelf->__PVT__FCMP__DOT__op = ((1U == (7U 
                                                & ((IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0_io_in_bits_op) 
                                                   >> 3U)))
                                         ? (7U & (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0_io_in_bits_op))
                                         : 0U);
        vlSelf->__PVT__FCMP__DOT__fflags = ((((~ (IData)(
                                                         ((8U 
                                                           == 
                                                           (0x38U 
                                                            & (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0_io_in_bits_op))) 
                                                          & (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_1_io_in_bits_a 
                                                             >> 0x16U)))) 
                                              & (IData)(vlSelf->__PVT__FCMP__DOT__FCMPCore__DOT__decode_a___05FisNaN)) 
                                             | ((~ (IData)(
                                                           ((8U 
                                                             == 
                                                             (0x38U 
                                                              & (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0_io_in_bits_op))) 
                                                            & (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_1_io_in_bits_b 
                                                               >> 0x16U)))) 
                                                & (IData)(vlSelf->__PVT__FCMP__DOT__FCMPCore__DOT__decode_b___05FisNaN))) 
                                            << 4U);
    }
    vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__exp_is_subnormal 
        = ((~ (__PVT__FMA__DOT__mulPipe__DOT__s3__DOT___sig_shifted_raw_T[2U] 
               >> 9U)) & (IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3_io_in_r_may_be_subnormal));
    vlSelf->outArbiter__DOT____VdfgTmp_h245e14da__0 
        = ((IData)(vlSelf->__PVT__FMA__DOT__toOutArbiter_io_out_valid) 
           | (IData)(vlSelf->__PVT__FCMP__DOT__REG_1));
    vlSelf->__PVT__FCMP_io_out_ready = ((~ (IData)(vlSelf->__PVT__FMA__DOT__toOutArbiter_io_out_valid)) 
                                        & (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addFIFO_io_deq_ready));
    vlSelf->__PVT__FMA__DOT__mulFIFO__DOT__do_deq = 
        ((IData)(vlSelf->__PVT__FMA__DOT__mulFIFO_io_deq_ready) 
         & (IData)(vlSelf->__PVT__FMA__DOT__mulFIFO__DOT__maybe_full));
    vlSelf->__PVT__FMA__DOT__mulFIFO_io_enq_ready = 
        (1U & ((~ (IData)(vlSelf->__PVT__FMA__DOT__mulFIFO__DOT__maybe_full)) 
               | (IData)(vlSelf->__PVT__FMA__DOT__mulFIFO_io_deq_ready)));
    vlSelf->__PVT__FMA__DOT__addFIFO__DOT__ram_result_MPORT_en 
        = ((IData)(vlSelf->__PVT__FMA__DOT__addPipe_io_out_ready) 
           & (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__REG_1));
    vlSelf->__PVT__FMA__DOT__addPipe__DOT___s2_io_in_T_3 
        = ((~ ((~ (IData)(vlSelf->__PVT__FMA__DOT__addPipe_io_out_ready)) 
               & (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__REG_1))) 
           & (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__REG));
    vlSelf->__PVT__FMA__DOT__addPipe__DOT___T_2 = (
                                                   (~ (IData)(vlSelf->__PVT__FMA__DOT__addPipe_io_out_ready)) 
                                                   & ((IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__REG) 
                                                      & (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__REG_1)));
    vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2__DOT__far_path_tininess_rounder__DOT__rounder__DOT__inexact 
        = (IData)((0U != (3U & vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_far_path_out_sig)));
    vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2__DOT__far_path_rounder__DOT__inexact 
        = (IData)((0U != (7U & vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_far_path_out_sig)));
    vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2__DOT__near_path_tininess_rounder__DOT__rounder__DOT__inexact 
        = (IData)((0U != (3U & vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_near_path_out_sig)));
    vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2__DOT__near_path_rounder__DOT__inexact 
        = (IData)((0U != (7U & vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_near_path_out_sig)));
    vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2__DOT__rmin 
        = ((1U == (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_rm)) 
           | (((~ (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_far_path_out_sign)) 
               & (2U == (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_rm))) 
              | ((3U == (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_rm)) 
                 & (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_far_path_out_sign))));
    vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__no_extra_shift 
        = (1U & ((__PVT__FMA__DOT__mulPipe__DOT__s3__DOT___sig_shifted_raw_T[2U] 
                  >> 9U) | (IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__exp_is_subnormal)));
    vlSelf->outArbiter__DOT____VdfgTmp_h5724d08f__0 
        = ((IData)(vlSelf->outArbiter__DOT____VdfgTmp_h245e14da__0) 
           | (IData)(vlSelf->__PVT__FPMV__DOT__REG_1));
    vlSelf->__PVT__FPMV_io_out_ready = ((~ (IData)(vlSelf->outArbiter__DOT____VdfgTmp_h245e14da__0)) 
                                        & (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addFIFO_io_deq_ready));
    vlSelf->__PVT__IntToFP__DOT__IntToFP_postnorm__DOT__rounder__DOT__inexact 
        = (IData)((0ULL != (0xffffffffffULL & vlSelf->__PVT__IntToFP__DOT__r_norm_int)));
    if (vlSelf->__PVT__FPToInt__DOT__isSingle) {
        vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__rpath_rounder_io_signIn 
            = (1U & (IData)((vlSelf->__PVT__FPToInt__DOT__src 
                             >> 0x1fU)));
        vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__fp_a_sig 
            = (0x7fffffU & (IData)(vlSelf->__PVT__FPToInt__DOT__src));
        vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__fp_a_exp 
            = (0xffU & (IData)((vlSelf->__PVT__FPToInt__DOT__src 
                                >> 0x17U)));
    } else {
        vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__rpath_rounder_io_signIn = 0U;
        vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__fp_a_sig = 0U;
        vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__fp_a_exp = 0U;
    }
    vlSelf->__PVT__FPMV__DOT__classifyOut_decode___05FisSubnormal 
        = ((~ (IData)((0U != (0xffU & (IData)((vlSelf->__PVT__FPMV__DOT__a 
                                               >> 0x17U)))))) 
           & (0U != (0x7fffffU & (IData)(vlSelf->__PVT__FPMV__DOT__a))));
    vlSelf->__PVT__FPMV__DOT__classifyOut_decode___05FisInf 
        = (IData)(((0x7f800000ULL == (0x7f800000ULL 
                                      & vlSelf->__PVT__FPMV__DOT__a)) 
                   & (~ (IData)((0U != (0x7fffffU & (IData)(vlSelf->__PVT__FPMV__DOT__a)))))));
    vlSelf->__PVT__FPMV__DOT__classifyOut_decode___05FisZero 
        = (1U & ((~ (IData)((0U != (0xffU & (IData)(
                                                    (vlSelf->__PVT__FPMV__DOT__a 
                                                     >> 0x17U)))))) 
                 & (~ (IData)((0U != (0x7fffffU & (IData)(vlSelf->__PVT__FPMV__DOT__a)))))));
    vlSelf->__PVT__FPMV__DOT__classifyOut_decode___05FisNaN 
        = (IData)(((0x7f800000ULL == (0x7f800000ULL 
                                      & vlSelf->__PVT__FPMV__DOT__a)) 
                   & (0U != (0x7fffffU & (IData)(vlSelf->__PVT__FPMV__DOT__a)))));
    vlSelf->__PVT__FPMV__DOT__classifyOut_isNormal 
        = ((~ (IData)((0xffU == (0xffU & (IData)((vlSelf->__PVT__FPMV__DOT__a 
                                                  >> 0x17U)))))) 
           & (0U != (0xffU & (IData)((vlSelf->__PVT__FPMV__DOT__a 
                                      >> 0x17U)))));
    if ((4U == (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_rm))) {
        vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2__DOT__far_path_rounder__DOT__r_up 
            = (1U & (vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_far_path_out_sig 
                     >> 2U));
        vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2__DOT__near_path_rounder__DOT__r_up 
            = (1U & (vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_near_path_out_sig 
                     >> 2U));
    } else if ((2U == (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_rm))) {
        vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2__DOT__far_path_rounder__DOT__r_up 
            = (1U & ((IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2__DOT__far_path_rounder__DOT__inexact) 
                     & (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_far_path_out_sign)));
        vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2__DOT__near_path_rounder__DOT__r_up 
            = (1U & ((IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2__DOT__near_path_rounder__DOT__inexact) 
                     & (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_near_path_out_sign)));
    } else if ((3U == (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_rm))) {
        vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2__DOT__far_path_rounder__DOT__r_up 
            = (1U & ((~ (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_far_path_out_sign)) 
                     & (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2__DOT__far_path_rounder__DOT__inexact)));
        vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2__DOT__near_path_rounder__DOT__r_up 
            = (1U & ((~ (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_near_path_out_sign)) 
                     & (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2__DOT__near_path_rounder__DOT__inexact)));
    } else {
        vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2__DOT__far_path_rounder__DOT__r_up 
            = (1U & ((1U != (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_rm)) 
                     & ((0U == (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_rm)) 
                        & ((vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_far_path_out_sig 
                            >> 2U) & (IData)((0U != 
                                              (0xbU 
                                               & vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_far_path_out_sig)))))));
        vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2__DOT__near_path_rounder__DOT__r_up 
            = (1U & ((1U != (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_rm)) 
                     & ((0U == (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_rm)) 
                        & ((vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_near_path_out_sig 
                            >> 2U) & (IData)((0U != 
                                              (0xbU 
                                               & vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_near_path_out_sig)))))));
    }
    VL_SHIFTL_WWI(74,74,32, __Vtemp_hf13d2d1e__0, vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__sig_shifted_raw, 1U);
    if (vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__no_extra_shift) {
        __PVT__FMA__DOT__mulPipe__DOT__s3__DOT___exp_pre_round_T_2 
            = (0x1ffU & (IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3_io_in_r_exp_shifted));
        vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__sig_shifted[0U] 
            = vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__sig_shifted_raw[0U];
        vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__sig_shifted[1U] 
            = vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__sig_shifted_raw[1U];
        vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__sig_shifted[2U] 
            = (0x3ffU & vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__sig_shifted_raw[2U]);
    } else {
        __PVT__FMA__DOT__mulPipe__DOT__s3__DOT___exp_pre_round_T_2 
            = (0x1ffU & ((IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3_io_in_r_exp_shifted) 
                         - (IData)(1U)));
        vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__sig_shifted[0U] 
            = __Vtemp_hf13d2d1e__0[0U];
        vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__sig_shifted[1U] 
            = __Vtemp_hf13d2d1e__0[1U];
        vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__sig_shifted[2U] 
            = (0x3ffU & __Vtemp_hf13d2d1e__0[2U]);
    }
    vlSelf->__PVT__FPToInt_io_out_ready = ((~ (IData)(vlSelf->outArbiter__DOT____VdfgTmp_h5724d08f__0)) 
                                           & (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addFIFO_io_deq_ready));
    vlSelf->__PVT__IntToFP_io_out_ready = ((~ ((IData)(vlSelf->outArbiter__DOT____VdfgTmp_h5724d08f__0) 
                                               | (IData)(vlSelf->__PVT__FPToInt__DOT__REG_1))) 
                                           & (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addFIFO_io_deq_ready));
    vlSelf->__PVT__IntToFP__DOT__IntToFP_postnorm__DOT__rounder__DOT__r_up 
        = (1U & ((4U == (IData)(vlSelf->__PVT__IntToFP__DOT__r_1))
                  ? (IData)((vlSelf->__PVT__IntToFP__DOT__r_norm_int 
                             >> 0x27U)) : ((2U == (IData)(vlSelf->__PVT__IntToFP__DOT__r_1))
                                            ? ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_postnorm__DOT__rounder__DOT__inexact) 
                                               & (IData)(vlSelf->__PVT__IntToFP__DOT__r_sign))
                                            : ((3U 
                                                == (IData)(vlSelf->__PVT__IntToFP__DOT__r_1))
                                                ? (
                                                   (~ (IData)(vlSelf->__PVT__IntToFP__DOT__r_sign)) 
                                                   & (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_postnorm__DOT__rounder__DOT__inexact))
                                                : (
                                                   (1U 
                                                    != (IData)(vlSelf->__PVT__IntToFP__DOT__r_1)) 
                                                   & ((0U 
                                                       == (IData)(vlSelf->__PVT__IntToFP__DOT__r_1)) 
                                                      & ((IData)(
                                                                 (vlSelf->__PVT__IntToFP__DOT__r_norm_int 
                                                                  >> 0x27U)) 
                                                         & (IData)(
                                                                   (0ULL 
                                                                    != 
                                                                    (0x17fffffffffULL 
                                                                     & vlSelf->__PVT__IntToFP__DOT__r_norm_int))))))))));
    vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__lpath_iv 
        = ((~ (IData)(vlSelf->__PVT__FPToInt__DOT__coreOp)) 
           & (IData)(vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__rpath_rounder_io_signIn));
    vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__raw_a_sig 
        = (((IData)((0U != (IData)(vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__fp_a_exp))) 
            << 0x17U) | vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__fp_a_sig);
    vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__raw_a_exp 
        = ((IData)(vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__fp_a_exp) 
           | (1U & (~ (IData)((0U != (IData)(vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__fp_a_exp))))));
    vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2__DOT__far_path_rounder_io_cout 
        = ((IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2__DOT__far_path_rounder__DOT__r_up) 
           & (0x3fffff8U == (0x3fffff8U & vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_far_path_out_sig)));
    vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2__DOT__near_path_exp_rounded 
        = (0xffU & (((IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2__DOT__near_path_rounder__DOT__r_up) 
                     & (0x7fffffU == (0x7fffffU & (vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_near_path_out_sig 
                                                   >> 3U)))) 
                    + (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_near_path_out_exp)));
    if (vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__exp_is_subnormal) {
        vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__exp_pre_round = 0U;
        vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__raw_in_exp = 0U;
    } else {
        vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__exp_pre_round 
            = __PVT__FMA__DOT__mulPipe__DOT__s3__DOT___exp_pre_round_T_2;
        vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__raw_in_exp 
            = (0xffU & (IData)(__PVT__FMA__DOT__mulPipe__DOT__s3__DOT___exp_pre_round_T_2));
    }
    vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__tininess_rounder__DOT__rounder__DOT__inexact 
        = (1U & ((vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__sig_shifted[1U] 
                  >> 0x10U) | (0U != (0xffffffffffffULL 
                                      & (((QData)((IData)(
                                                          vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__sig_shifted[1U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__sig_shifted[0U])))))));
    vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__rounder_io_stickyIn 
        = (1U & ((vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__sig_shifted[1U] 
                  >> 0x10U) | (0U != (0xffffffffffffULL 
                                      & (((QData)((IData)(
                                                          vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__sig_shifted[1U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__sig_shifted[0U])))))));
    vlSelf->__PVT__FPToInt__DOT___io_out_bits_fflags_T_3 
        = ((~ ((~ (IData)(vlSelf->__PVT__FPToInt_io_out_ready)) 
               & (IData)(vlSelf->__PVT__FPToInt__DOT__REG_1))) 
           & (IData)(vlSelf->__PVT__FPToInt__DOT__REG));
    vlSelf->__PVT__IntToFP__DOT___s2_isSingle_T_8 = 
        ((~ ((~ (IData)(vlSelf->__PVT__IntToFP_io_out_ready)) 
             & (IData)(vlSelf->__PVT__IntToFP__DOT__REG_1))) 
         & (IData)(vlSelf->__PVT__IntToFP__DOT__REG));
    vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__lpath_may_of 
        = ((IData)(vlSelf->__PVT__FPToInt__DOT__coreOp) 
           & ((IData)(vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__raw_a_exp) 
              == (0xffU & ((IData)(0x7fU) + ((2U & (IData)(vlSelf->__PVT__FPToInt__DOT__coreOp))
                                              ? 0x3fU
                                              : 0x1fU)))));
    vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__shiftRightJam__DOT___io_sticky_T 
        = ((vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__raw_a_sig 
            << 1U) & ((((IData)(1U) << (0x1fU & ((IData)(0x16U) 
                                                 - (IData)(vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__raw_a_exp)))) 
                       - (IData)(1U)) | ((0x19U < (0xffU 
                                                   & ((IData)(0x96U) 
                                                      - (IData)(vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__raw_a_exp))))
                                          ? 0x1ffffffU
                                          : 0U)));
    vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__shiftRightJam__DOT___io_out_T 
        = ((0x18U >= (0xffU & ((IData)(0x96U) - (IData)(vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__raw_a_exp))))
            ? (0x1ffffffU & ((vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__raw_a_sig 
                              << 1U) >> (0xffU & ((IData)(0x96U) 
                                                  - (IData)(vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__raw_a_exp)))))
            : 0U);
    vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__rounder__DOT__inexact 
        = (1U & ((vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__sig_shifted[1U] 
                  >> 0x11U) | (IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__rounder_io_stickyIn)));
    vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__rpath_rounder_io_in 
        = ((0x19U < (0xffU & ((IData)(0x96U) - (IData)(vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__raw_a_exp))))
            ? 0U : (0xffffffU & (vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__shiftRightJam__DOT___io_out_T 
                                 >> 1U)));
    vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__rpath_rounder_io_roundIn 
        = ((0x19U >= (0xffU & ((IData)(0x96U) - (IData)(vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__raw_a_exp)))) 
           & vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__shiftRightJam__DOT___io_out_T);
    vlSelf->__PVT__FMA__DOT__mulFIFO__DOT__ram_result_MPORT_en 
        = ((IData)(vlSelf->__PVT__FMA__DOT__mulFIFO_io_enq_ready) 
           & ((IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__REG_1) 
              & (2U == (IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__toAdd_op_r_1))));
    vlSelf->__PVT__FMA__DOT__mulPipe_io_out_ready = 
        (1U & (((~ (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT___T_2)) 
                & ((IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__toAdd_op_r_1) 
                   >> 2U)) | ((IData)(vlSelf->__PVT__FMA__DOT__mulFIFO_io_enq_ready) 
                              & (2U == (IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__toAdd_op_r_1)))));
    vlSelf->__PVT__FMA__DOT__toAddArbiter_io_in_0_valid 
        = (((IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__toAdd_op_r_1) 
            >> 2U) & (IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__REG_1));
    vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__rmin 
        = ((1U == (IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3_io_in_r_rm)) 
           | (((~ (IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3_io_in_r_prod_sign)) 
               & (2U == (IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3_io_in_r_rm))) 
              | ((3U == (IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3_io_in_r_rm)) 
                 & (IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3_io_in_r_prod_sign))));
    vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__rounder__DOT__r_up 
        = (1U & ((4U == (IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3_io_in_r_rm))
                  ? (vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__sig_shifted[1U] 
                     >> 0x11U) : ((2U == (IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3_io_in_r_rm))
                                   ? ((IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__rounder__DOT__inexact) 
                                      & (IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3_io_in_r_prod_sign))
                                   : ((3U == (IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3_io_in_r_rm))
                                       ? ((~ (IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3_io_in_r_prod_sign)) 
                                          & (IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__rounder__DOT__inexact))
                                       : ((1U != (IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3_io_in_r_rm)) 
                                          & ((0U == (IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3_io_in_r_rm)) 
                                             & ((vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__sig_shifted[1U] 
                                                 >> 0x11U) 
                                                & ((IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__rounder_io_stickyIn) 
                                                   | (vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__sig_shifted[1U] 
                                                      >> 0x12U)))))))));
    vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__rpath_rounder__DOT__inexact 
        = ((IData)(vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__rpath_rounder_io_roundIn) 
           | (0U != vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__shiftRightJam__DOT___io_sticky_T));
    vlSelf->__PVT__FMA__DOT__mulPipe__DOT___s3_io_in_T_3 
        = ((~ ((~ (IData)(vlSelf->__PVT__FMA__DOT__mulPipe_io_out_ready)) 
               & (IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__REG_1))) 
           & (IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__REG));
    vlSelf->__PVT__FMA__DOT__addPipe__DOT__isFMA = 
        ((IData)(vlSelf->__PVT__FMA__DOT__toAddArbiter_io_in_0_valid) 
         & ((IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__toAdd_op_r_1) 
            >> 2U));
    vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__rounder_io_cout 
        = ((IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__rounder__DOT__r_up) 
           & (0x7fffffU == (0x7fffffU & ((vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__sig_shifted[2U] 
                                          << 0xeU) 
                                         | (vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__sig_shifted[1U] 
                                            >> 0x12U)))));
    vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__rpath_rounder__DOT__r_up 
        = ((4U == (IData)(vlSelf->__PVT__FPToInt__DOT__rm))
            ? (IData)(vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__rpath_rounder_io_roundIn)
            : ((2U == (IData)(vlSelf->__PVT__FPToInt__DOT__rm))
                ? ((IData)(vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__rpath_rounder__DOT__inexact) 
                   & (IData)(vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__rpath_rounder_io_signIn))
                : ((3U == (IData)(vlSelf->__PVT__FPToInt__DOT__rm))
                    ? ((~ (IData)(vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__rpath_rounder_io_signIn)) 
                       & (IData)(vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__rpath_rounder__DOT__inexact))
                    : ((1U != (IData)(vlSelf->__PVT__FPToInt__DOT__rm)) 
                       & ((0U == (IData)(vlSelf->__PVT__FPToInt__DOT__rm)) 
                          & ((IData)(vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__rpath_rounder_io_roundIn) 
                             & ((0U != vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__shiftRightJam__DOT___io_sticky_T) 
                                | ((0x19U >= (0xffU 
                                              & ((IData)(0x96U) 
                                                 - (IData)(vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__raw_a_exp)))) 
                                   & (vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__shiftRightJam__DOT___io_out_T 
                                      >> 1U)))))))));
    vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__common_of 
        = (((IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__rounder_io_cout)
             ? (0xfeU == (IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__raw_in_exp))
             : (0xffU == (IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__raw_in_exp))) 
           | (IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3_io_in_r_early_overflow));
    vlSelf->__VdfgTmp_h22dfd192__0 = ((((IData)(vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__rpath_rounder__DOT__r_up) 
                                        & (0xffffffU 
                                           == vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__rpath_rounder_io_in)) 
                                       << 0x18U) | 
                                      (0xffffffU & 
                                       (vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__rpath_rounder_io_in 
                                        + (IData)(vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__rpath_rounder__DOT__r_up))));
    vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__int_abs 
        = ((0x96U <= (IData)(vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__raw_a_exp))
            ? ((QData)((IData)(vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__raw_a_sig)) 
               << (0x3fU & ((IData)(vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__raw_a_exp) 
                            - (IData)(0x16U)))) : (QData)((IData)(vlSelf->__VdfgTmp_h22dfd192__0)));
}

VL_INLINE_OPT void VVentus_ScalarFPU_1___nba_sequent__TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_2__0(VVentus_ScalarFPU_1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VVentus__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VVentus_ScalarFPU_1___nba_sequent__TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_2__0\n"); );
    // Init
    VlWide<19>/*584:0*/ __PVT__FMA__DOT__mulPipe__DOT__s3__DOT___sig_shifted_raw_T;
    SData/*8:0*/ __PVT__FMA__DOT__mulPipe__DOT__s3__DOT___exp_pre_round_T_2;
    CData/*0:0*/ __Vdly__FMA__DOT__mulPipe__DOT__REG;
    CData/*0:0*/ __Vdly__FMA__DOT__mulPipe__DOT__REG_1;
    CData/*0:0*/ __Vdly__FMA__DOT__addPipe__DOT__REG;
    CData/*0:0*/ __Vdly__FMA__DOT__addPipe__DOT__REG_1;
    IData/*31:0*/ __Vdlyvval__FMA__DOT__mulFIFO__DOT__ram_result__v0;
    CData/*0:0*/ __Vdlyvset__FMA__DOT__mulFIFO__DOT__ram_result__v0;
    IData/*31:0*/ __Vdlyvval__FMA__DOT__addFIFO__DOT__ram_result__v0;
    CData/*0:0*/ __Vdlyvset__FMA__DOT__addFIFO__DOT__ram_result__v0;
    CData/*0:0*/ __Vdly__FCMP__DOT__REG;
    CData/*0:0*/ __Vdly__FCMP__DOT__REG_1;
    CData/*0:0*/ __Vdly__FPMV__DOT__REG;
    CData/*0:0*/ __Vdly__FPMV__DOT__REG_1;
    CData/*0:0*/ __Vdly__FPToInt__DOT__REG;
    CData/*0:0*/ __Vdly__FPToInt__DOT__REG_1;
    CData/*0:0*/ __Vdly__IntToFP__DOT__REG;
    CData/*0:0*/ __Vdly__IntToFP__DOT__REG_1;
    VlWide<3>/*95:0*/ __Vtemp_hd69ef506__0;
    VlWide<3>/*95:0*/ __Vtemp_h2d568758__0;
    VlWide<19>/*607:0*/ __Vtemp_hd7be74e6__0;
    VlWide<19>/*607:0*/ __Vtemp_h2ce4aade__0;
    VlWide<3>/*95:0*/ __Vtemp_hf13d2d1e__0;
    // Body
    __Vdly__IntToFP__DOT__REG_1 = vlSelf->__PVT__IntToFP__DOT__REG_1;
    __Vdly__IntToFP__DOT__REG = vlSelf->__PVT__IntToFP__DOT__REG;
    __Vdly__FMA__DOT__mulPipe__DOT__REG = vlSelf->__PVT__FMA__DOT__mulPipe__DOT__REG;
    __Vdly__FMA__DOT__mulPipe__DOT__REG_1 = vlSelf->__PVT__FMA__DOT__mulPipe__DOT__REG_1;
    __Vdly__FMA__DOT__addPipe__DOT__REG = vlSelf->__PVT__FMA__DOT__addPipe__DOT__REG;
    __Vdly__FMA__DOT__addPipe__DOT__REG_1 = vlSelf->__PVT__FMA__DOT__addPipe__DOT__REG_1;
    __Vdly__FPToInt__DOT__REG = vlSelf->__PVT__FPToInt__DOT__REG;
    __Vdly__FPMV__DOT__REG = vlSelf->__PVT__FPMV__DOT__REG;
    __Vdly__FCMP__DOT__REG = vlSelf->__PVT__FCMP__DOT__REG;
    __Vdly__FPToInt__DOT__REG_1 = vlSelf->__PVT__FPToInt__DOT__REG_1;
    __Vdly__FPMV__DOT__REG_1 = vlSelf->__PVT__FPMV__DOT__REG_1;
    __Vdly__FCMP__DOT__REG_1 = vlSelf->__PVT__FCMP__DOT__REG_1;
    __Vdlyvset__FMA__DOT__mulFIFO__DOT__ram_result__v0 = 0U;
    __Vdlyvset__FMA__DOT__addFIFO__DOT__ram_result__v0 = 0U;
    if (vlSymsp->TOP.reset) {
        __Vdly__IntToFP__DOT__REG = 0U;
        __Vdly__IntToFP__DOT__REG_1 = 0U;
        __Vdly__FMA__DOT__mulPipe__DOT__REG = 0U;
        __Vdly__FMA__DOT__mulPipe__DOT__REG_1 = 0U;
        __Vdly__FMA__DOT__addPipe__DOT__REG = 0U;
        __Vdly__FMA__DOT__addPipe__DOT__REG_1 = 0U;
        __Vdly__FPToInt__DOT__REG = 0U;
        __Vdly__FPToInt__DOT__REG_1 = 0U;
        __Vdly__FPMV__DOT__REG = 0U;
        __Vdly__FPMV__DOT__REG_1 = 0U;
        __Vdly__FCMP__DOT__REG = 0U;
        __Vdly__FCMP__DOT__REG_1 = 0U;
        vlSelf->__PVT__FMA__DOT__mulFIFO__DOT__maybe_full = 0U;
        vlSelf->__PVT__FMA__DOT__addFIFO__DOT__maybe_full = 0U;
    } else {
        if ((1U & (~ ((~ (IData)(vlSelf->__PVT__IntToFP_io_out_ready)) 
                      & ((IData)(vlSelf->__PVT__IntToFP__DOT__REG) 
                         & (IData)(vlSelf->__PVT__IntToFP__DOT__REG_1)))))) {
            __Vdly__IntToFP__DOT__REG = vlSelf->__PVT__IntToFP_io_in_valid;
        }
        if ((1U & (~ ((~ (IData)(vlSelf->__PVT__IntToFP_io_out_ready)) 
                      & (IData)(vlSelf->__PVT__IntToFP__DOT__REG_1))))) {
            __Vdly__IntToFP__DOT__REG_1 = vlSelf->__PVT__IntToFP__DOT__REG;
        }
        if ((1U & (~ ((~ (IData)(vlSelf->__PVT__FMA__DOT__mulPipe_io_out_ready)) 
                      & ((IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__REG) 
                         & (IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__REG_1)))))) {
            __Vdly__FMA__DOT__mulPipe__DOT__REG = vlSelf->__PVT__FMA__DOT__mulPipe_io_in_valid;
        }
        if ((1U & (~ ((~ (IData)(vlSelf->__PVT__FMA__DOT__mulPipe_io_out_ready)) 
                      & (IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__REG_1))))) {
            __Vdly__FMA__DOT__mulPipe__DOT__REG_1 = vlSelf->__PVT__FMA__DOT__mulPipe__DOT__REG;
        }
        if ((1U & (~ ((~ (IData)(vlSelf->__PVT__FMA__DOT__addPipe_io_out_ready)) 
                      & ((IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__REG) 
                         & (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__REG_1)))))) {
            __Vdly__FMA__DOT__addPipe__DOT__REG = vlSelf->__PVT__FMA__DOT__addPipe_io_in_valid;
        }
        if ((1U & (~ ((~ (IData)(vlSelf->__PVT__FMA__DOT__addPipe_io_out_ready)) 
                      & (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__REG_1))))) {
            __Vdly__FMA__DOT__addPipe__DOT__REG_1 = vlSelf->__PVT__FMA__DOT__addPipe__DOT__REG;
        }
        if ((1U & (~ ((~ (IData)(vlSelf->__PVT__FPToInt_io_out_ready)) 
                      & ((IData)(vlSelf->__PVT__FPToInt__DOT__REG) 
                         & (IData)(vlSelf->__PVT__FPToInt__DOT__REG_1)))))) {
            __Vdly__FPToInt__DOT__REG = vlSelf->__PVT__FPToInt_io_in_valid;
        }
        if ((1U & (~ ((~ (IData)(vlSelf->__PVT__FPToInt_io_out_ready)) 
                      & (IData)(vlSelf->__PVT__FPToInt__DOT__REG_1))))) {
            __Vdly__FPToInt__DOT__REG_1 = vlSelf->__PVT__FPToInt__DOT__REG;
        }
        if ((1U & (~ ((~ (IData)(vlSelf->__PVT__FPMV_io_out_ready)) 
                      & ((IData)(vlSelf->__PVT__FPMV__DOT__REG) 
                         & (IData)(vlSelf->__PVT__FPMV__DOT__REG_1)))))) {
            __Vdly__FPMV__DOT__REG = vlSelf->__PVT__FPMV_io_in_valid;
        }
        if ((1U & (~ ((~ (IData)(vlSelf->__PVT__FPMV_io_out_ready)) 
                      & (IData)(vlSelf->__PVT__FPMV__DOT__REG_1))))) {
            __Vdly__FPMV__DOT__REG_1 = vlSelf->__PVT__FPMV__DOT__REG;
        }
        if ((1U & (~ ((~ (IData)(vlSelf->__PVT__FCMP_io_out_ready)) 
                      & ((IData)(vlSelf->__PVT__FCMP__DOT__REG) 
                         & (IData)(vlSelf->__PVT__FCMP__DOT__REG_1)))))) {
            __Vdly__FCMP__DOT__REG = vlSelf->__PVT__FCMP_io_in_valid;
        }
        if ((1U & (~ ((~ (IData)(vlSelf->__PVT__FCMP_io_out_ready)) 
                      & (IData)(vlSelf->__PVT__FCMP__DOT__REG_1))))) {
            __Vdly__FCMP__DOT__REG_1 = vlSelf->__PVT__FCMP__DOT__REG;
        }
        if (((IData)(vlSelf->__PVT__FMA__DOT__mulFIFO__DOT__ram_result_MPORT_en) 
             != (IData)(vlSelf->__PVT__FMA__DOT__mulFIFO__DOT__do_deq))) {
            vlSelf->__PVT__FMA__DOT__mulFIFO__DOT__maybe_full 
                = vlSelf->__PVT__FMA__DOT__mulFIFO__DOT__ram_result_MPORT_en;
        }
        if (((IData)(vlSelf->__PVT__FMA__DOT__addFIFO__DOT__ram_result_MPORT_en) 
             != (IData)(vlSelf->__PVT__FMA__DOT__addFIFO__DOT__do_deq))) {
            vlSelf->__PVT__FMA__DOT__addFIFO__DOT__maybe_full 
                = vlSelf->__PVT__FMA__DOT__addFIFO__DOT__ram_result_MPORT_en;
        }
    }
    if (vlSelf->__PVT__FMA__DOT__mulFIFO__DOT__ram_result_MPORT_en) {
        __Vdlyvval__FMA__DOT__mulFIFO__DOT__ram_result__v0 
            = ((IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3_io_in_r_special_case_valid)
                ? ((IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3_io_in_r_special_case_bits_nan)
                    ? 0x7fc00000U : ((IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3_io_in_r_special_case_bits_inf)
                                      ? (0x7f800000U 
                                         | ((IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3_io_in_r_prod_sign) 
                                            << 0x1fU))
                                      : ((IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3_io_in_r_prod_sign) 
                                         << 0x1fU)))
                : (((IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3_io_in_r_prod_sign) 
                    << 0x1fU) | ((0x7f800000U & (((IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__common_of)
                                                   ? 
                                                  ((IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__rmin)
                                                    ? 0xfeU
                                                    : 0xffU)
                                                   : 
                                                  ((IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__rounder_io_cout) 
                                                   + (IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__raw_in_exp))) 
                                                 << 0x17U)) 
                                 | (0x7fffffU & ((IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__common_of)
                                                  ? 
                                                 ((IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__rmin)
                                                   ? 0x7fffffU
                                                   : 0U)
                                                  : 
                                                 (((vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__sig_shifted[2U] 
                                                    << 0xeU) 
                                                   | (vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__sig_shifted[1U] 
                                                      >> 0x12U)) 
                                                  + (IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__rounder__DOT__r_up)))))));
        __Vdlyvset__FMA__DOT__mulFIFO__DOT__ram_result__v0 = 1U;
    }
    if (vlSelf->__PVT__FMA__DOT__addFIFO__DOT__ram_result_MPORT_en) {
        __Vdlyvval__FMA__DOT__addFIFO__DOT__ram_result__v0 
            = ((IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_special_case_valid)
                ? ((IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_special_case_bits_nan)
                    ? 0x7fc00000U : (0x7f800000U | 
                                     ((IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_special_case_bits_inf_sign) 
                                      << 0x1fU))) : 
               ((((IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_sel_far_path) 
                  & ((0xffU == (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_far_path_out_exp)) 
                     | (((IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2__DOT__far_path_rounder_io_cout) 
                         & (0xfeU == (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_far_path_out_exp))) 
                        | (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_far_path_mul_of)))) 
                 | ((~ (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_sel_far_path)) 
                    & (0xffU == (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2__DOT__near_path_exp_rounded))))
                 ? ((((IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_sel_far_path)
                       ? (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_far_path_out_sign)
                       : (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_near_path_out_sign)) 
                     << 0x1fU) | ((((IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2__DOT__rmin)
                                     ? 0xfeU : 0xffU) 
                                   << 0x17U) | ((IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2__DOT__rmin)
                                                 ? 0x7fffffU
                                                 : 0U)))
                 : ((IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_sel_far_path)
                     ? (((IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_far_path_out_sign) 
                         << 0x1fU) | ((0x7f800000U 
                                       & (((IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2__DOT__far_path_rounder_io_cout) 
                                           + (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_far_path_out_exp)) 
                                          << 0x17U)) 
                                      | (0x7fffffU 
                                         & ((vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_far_path_out_sig 
                                             >> 3U) 
                                            + (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2__DOT__far_path_rounder__DOT__r_up)))))
                     : (((((~ (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2__DOT__near_path_is_zero)) 
                           & (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_near_path_out_sign)) 
                          | ((2U == (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_rm)) 
                             & (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2__DOT__near_path_is_zero))) 
                         << 0x1fU) | (((IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2__DOT__near_path_exp_rounded) 
                                       << 0x17U) | 
                                      (0x7fffffU & 
                                       ((vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_near_path_out_sig 
                                         >> 3U) + (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2__DOT__near_path_rounder__DOT__r_up))))))));
        __Vdlyvset__FMA__DOT__addFIFO__DOT__ram_result__v0 = 1U;
    }
    if (vlSelf->__PVT__FMA__DOT__addPipe__DOT___s1_io_a_T_4) {
        vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1_io_b_inter_valid_r 
            = vlSelf->__PVT__FMA__DOT__addPipe__DOT__isFMA;
        vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1_io_b_inter_flags_r_isNaN 
            = ((IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__isFMA) 
               & (IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3_io_in_r_special_case_bits_nan));
        vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1_io_b_inter_flags_r_isInf 
            = ((IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__isFMA) 
               & ((~ (IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3_io_in_r_special_case_bits_nan)) 
                  & (IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3_io_in_r_special_case_bits_inf)));
    }
    if (vlSelf->__PVT__FMA__DOT__addPipe__DOT___s2_io_in_T_3) {
        if (vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT___near_path_out_T_2) {
            vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_near_path_sig_is_zero 
                = (1U & ((~ (IData)((0U != vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__near_path_mods_1__DOT__lza_ab_io_f))) 
                         & (~ ((IData)(1U) + (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__near_path_mods_1__DOT___a_minus_b_T_3)))));
            vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_near_path_out_exp 
                = (0xffU & (((IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__near_path_mods_1__DOT__exceed_lim)
                              ? (0U != (0x1ffffffffffffULL 
                                        & ((0x2000000000000ULL 
                                            >> (0x3fU 
                                                & (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__near_path_mods_1_io_in_a_exp))) 
                                           & (1ULL 
                                              + vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__near_path_mods_1__DOT___a_minus_b_T_3))))
                              : ((0U != (0x1ffffffffffffULL 
                                         & ((vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__near_path_mods_1__DOT__int_bit_mask 
                                             >> 1U) 
                                            & (1ULL 
                                               + vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__near_path_mods_1__DOT___a_minus_b_T_3)))) 
                                 | (0U != vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__near_path_mods_1__DOT___int_bit_predicted_T_1)))
                             ? (((IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__near_path_mods_1_io_in_a_exp) 
                                 - (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__near_path_mods_1__DOT__lzc_clz_io_out)) 
                                - (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__near_path_mods_1__DOT__lza_error))
                             : 0U));
            vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_near_path_out_sig 
                = ((0x7fffffeU & ((IData)((vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__near_path_mods_1__DOT__near_path_sig 
                                           >> 0x17U)) 
                                  << 1U)) | (0U != 
                                             (0x7fffffU 
                                              & (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__near_path_mods_1__DOT__near_path_sig))));
            vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_near_path_out_sign 
                = (1U & ((1U & (IData)((1ULL & ((1ULL 
                                                 + vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__near_path_mods_1__DOT___a_minus_b_T_3) 
                                                >> 0x31U))))
                          ? (IData)((vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1_io_a_r 
                                     >> 0x37U)) : (IData)(
                                                          (vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1_io_b_r 
                                                           >> 0x37U))));
        } else {
            vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_near_path_sig_is_zero 
                = (1U & ((~ (IData)((0U != vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__near_path_mods_0__DOT__lza_ab_io_f))) 
                         & (~ ((IData)(1U) + (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__near_path_mods_0__DOT___a_minus_b_T_3)))));
            vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_near_path_out_exp 
                = (0xffU & (((IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__near_path_mods_0__DOT__exceed_lim)
                              ? (0U != (0x1ffffffffffffULL 
                                        & ((0x2000000000000ULL 
                                            >> (0x3fU 
                                                & (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__near_path_mods_0_io_in_a_exp))) 
                                           & (1ULL 
                                              + vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__near_path_mods_0__DOT___a_minus_b_T_3))))
                              : ((0U != (0x1ffffffffffffULL 
                                         & ((vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__near_path_mods_0__DOT__int_bit_mask 
                                             >> 1U) 
                                            & (1ULL 
                                               + vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__near_path_mods_0__DOT___a_minus_b_T_3)))) 
                                 | (0U != vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__near_path_mods_0__DOT___int_bit_predicted_T_1)))
                             ? (((IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__near_path_mods_0_io_in_a_exp) 
                                 - (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__near_path_mods_0__DOT__lzc_clz_io_out)) 
                                - (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__near_path_mods_0__DOT__lza_error))
                             : 0U));
            vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_near_path_out_sig 
                = ((0x7fffffeU & ((IData)((vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__near_path_mods_0__DOT__near_path_sig 
                                           >> 0x17U)) 
                                  << 1U)) | (0U != 
                                             (0x7fffffU 
                                              & (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__near_path_mods_0__DOT__near_path_sig))));
            vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_near_path_out_sign 
                = (1U & ((1U & (IData)((1ULL & ((1ULL 
                                                 + vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__near_path_mods_0__DOT___a_minus_b_T_3) 
                                                >> 0x31U))))
                          ? (IData)((vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1_io_b_r 
                                     >> 0x37U)) : (IData)(
                                                          (vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1_io_a_r 
                                                           >> 0x37U))));
        }
        vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_far_path_out_exp 
            = (0xffU & ((((1U & (IData)((vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__far_path_mods_0__DOT__adder_result 
                                         >> 0x33U)))
                           ? ((IData)(1U) + (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__far_path_mods_0_io_in_a_exp))
                           : 0U) | ((1U == (3U & (IData)(
                                                         (vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__far_path_mods_0__DOT__adder_result 
                                                          >> 0x32U))))
                                     ? (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__far_path_mods_0_io_in_a_exp)
                                     : 0U)) | ((0U 
                                                == 
                                                (3U 
                                                 & (IData)(
                                                           (vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__far_path_mods_0__DOT__adder_result 
                                                            >> 0x32U))))
                                                ? ((IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__far_path_mods_0_io_in_a_exp) 
                                                   - (IData)(1U))
                                                : 0U)));
        vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_special_case_valid 
            = ((IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__special_path_hasNaN) 
               | ((IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__decode_a___05FisInf) 
                  | (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__b_isInf)));
        vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_special_case_bits_nan 
            = ((IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__special_path_hasNaN) 
               | ((IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__decode_a___05FisInf) 
                  & ((IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__b_isInf) 
                     & (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__far_path_mods_0_io_in_effSub))));
        vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_far_path_out_sig 
            = ((((1U & (IData)((vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__far_path_mods_0__DOT__adder_result 
                                >> 0x33U))) ? ((0x7fffffeU 
                                                & ((IData)(
                                                           (vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__far_path_mods_0__DOT__adder_result 
                                                            >> 0x1aU)) 
                                                   << 1U)) 
                                               | (0U 
                                                  != 
                                                  (0x3ffffffU 
                                                   & (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__far_path_mods_0__DOT__adder_result))))
                  : 0U) | (((1U == (3U & (IData)((vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__far_path_mods_0__DOT__adder_result 
                                                  >> 0x32U)))) 
                            | (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__far_path_mods_0_io_in_smallAdd))
                            ? ((0x7fffffeU & ((IData)(
                                                      (vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__far_path_mods_0__DOT__adder_result 
                                                       >> 0x19U)) 
                                              << 1U)) 
                               | (0U != (0x1ffffffU 
                                         & (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__far_path_mods_0__DOT__adder_result))))
                            : 0U)) | (((~ (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__far_path_mods_0_io_in_smallAdd)) 
                                       & (0ULL == (0xc000000000000ULL 
                                                   & vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__far_path_mods_0__DOT__adder_result)))
                                       ? ((0x7fffffeU 
                                           & ((IData)(
                                                      (vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__far_path_mods_0__DOT__adder_result 
                                                       >> 0x18U)) 
                                              << 1U)) 
                                          | (0U != 
                                             (0xffffffU 
                                              & (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__far_path_mods_0__DOT__adder_result))))
                                       : 0U));
        vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_rm 
            = vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1_io_rm_r;
        vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_sel_far_path 
            = (1U & ((~ (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__far_path_mods_0_io_in_effSub)) 
                     | ((1U < (0xffU & ((IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__need_swap)
                                         ? (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__exp_diff_b_a)
                                         : (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__exp_diff_a_b)))) 
                        | (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1_io_b_inter_flags_r_overflow))));
        vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_far_path_mul_of 
            = ((IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1_io_b_inter_flags_r_overflow) 
               | ((~ (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__far_path_mods_0_io_in_effSub)) 
                  & (0x7f800000000000ULL == (0x7f800000000000ULL 
                                             & vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1_io_b_r))));
        vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_special_case_bits_inf_sign 
            = (1U & ((IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__decode_a___05FisInf)
                      ? (IData)((vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1_io_a_r 
                                 >> 0x37U)) : (IData)(
                                                      (vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1_io_b_r 
                                                       >> 0x37U))));
        vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_far_path_out_sign 
            = (1U & ((IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__need_swap)
                      ? (IData)((vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1_io_b_r 
                                 >> 0x37U)) : (IData)(
                                                      (vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1_io_a_r 
                                                       >> 0x37U))));
    }
    if (vlSelf->__PVT__FMA__DOT__addPipe__DOT___s1_io_a_T_4) {
        vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1_io_rm_r 
            = vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s1_io_rm;
        vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1_io_b_inter_flags_r_overflow 
            = ((IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__isFMA) 
               & (0xffU < (IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__exp_pre_round)));
        vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1_io_b_r 
            = ((QData)((IData)((((IData)(vlSelf->__PVT__FMA__DOT__toAddArbiter_io_in_0_valid) 
                                 & (IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__toAdd_op_r_1))
                                 ? (((~ (vlSelf->__PVT__FMA__DOT__addPipe__DOT__srcB 
                                         >> 0x1fU)) 
                                     << 0x1fU) | (0x7fffffffU 
                                                  & vlSelf->__PVT__FMA__DOT__addPipe__DOT__srcB))
                                 : vlSelf->__PVT__FMA__DOT__addPipe__DOT__srcB))) 
               << 0x18U);
        vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1_io_a_r 
            = ((IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__isFMA)
                ? (((QData)((IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3_io_in_r_prod_sign)) 
                    << 0x37U) | (((QData)((IData)(((IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3_io_in_r_special_case_bits_hasZero)
                                                    ? 0U
                                                    : (IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__raw_in_exp)))) 
                                  << 0x2fU) | ((IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3_io_in_r_special_case_bits_hasZero)
                                                ? 0ULL
                                                : (0x7fffffffffffULL 
                                                   & ((((QData)((IData)(
                                                                        vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__sig_shifted[2U])) 
                                                        << 0x26U) 
                                                       | (((QData)((IData)(
                                                                           vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__sig_shifted[1U])) 
                                                           << 6U) 
                                                          | ((QData)((IData)(
                                                                             vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__sig_shifted[0U])) 
                                                             >> 0x1aU))) 
                                                      | (QData)((IData)(
                                                                        (0U 
                                                                         != 
                                                                         (0x3ffffffU 
                                                                          & vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__sig_shifted[0U])))))))))
                : ((QData)((IData)(((0U == (7U & ((IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0_io_in_bits_op) 
                                                  >> 3U)))
                                     ? vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_2_io_in_bits_a
                                     : 0U))) << 0x18U));
    }
    if (vlSelf->__PVT__FMA__DOT__mulPipe__DOT___s3_io_in_T_3) {
        vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3_io_in_r_early_overflow 
            = vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s2_io_in_r_early_overflow;
        vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3_io_in_r_rm 
            = vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s2_io_in_r_rm;
        vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3_io_in_r_exp_shifted 
            = vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s2_io_in_r_exp_shifted;
        vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3_io_in_r_may_be_subnormal 
            = vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s2_io_in_r_may_be_subnormal;
        vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3_io_in_r_shift_amt 
            = vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s2_io_in_r_shift_amt;
        vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3_io_in_r_prod 
            = (0xffffffffffffULL & ((QData)((IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__multiplier__DOT__io_result_r)) 
                                    * (QData)((IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__multiplier__DOT__io_result_r_1))));
        vlSelf->__PVT__FMA__DOT__mulPipe__DOT__toAdd_addAnother_r_1 
            = vlSelf->__PVT__FMA__DOT__mulPipe__DOT__toAdd_addAnother_r;
        vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3_io_in_r_special_case_valid 
            = vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s2_io_in_r_special_case_valid;
        vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3_io_in_r_special_case_bits_inf 
            = vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s2_io_in_r_special_case_bits_inf;
        vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3_io_in_r_special_case_bits_nan 
            = vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s2_io_in_r_special_case_bits_nan;
        vlSelf->__PVT__FMA__DOT__mulPipe__DOT__toAdd_op_r_1 
            = vlSelf->__PVT__FMA__DOT__mulPipe__DOT__toAdd_op_r;
        vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3_io_in_r_special_case_bits_hasZero 
            = vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s2_io_in_r_special_case_bits_hasZero;
        vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3_io_in_r_prod_sign 
            = vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s2_io_in_r_prod_sign;
    }
    if (vlSelf->__PVT__IntToFP__DOT___s2_isSingle_T_8) {
        vlSelf->__PVT__IntToFP__DOT__io_out_bits_result_r 
            = (((IData)(vlSelf->__PVT__IntToFP__DOT__r_sign) 
                << 0x1fU) | ((((IData)(vlSelf->__PVT__IntToFP__DOT__r_is_zero)
                                ? 0U : (0xffU & (((IData)(0xbeU) 
                                                  - (IData)(vlSelf->__PVT__IntToFP__DOT__r_lzc)) 
                                                 + 
                                                 ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_postnorm__DOT__rounder__DOT__r_up) 
                                                  & (0x7fffffU 
                                                     == 
                                                     (0x7fffffU 
                                                      & (IData)(
                                                                (vlSelf->__PVT__IntToFP__DOT__r_norm_int 
                                                                 >> 0x28U)))))))) 
                              << 0x17U) | (0x7fffffU 
                                           & ((IData)(
                                                      (vlSelf->__PVT__IntToFP__DOT__r_norm_int 
                                                       >> 0x28U)) 
                                              + (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_postnorm__DOT__rounder__DOT__r_up)))));
        vlSelf->__PVT__IntToFP__DOT__s2_isSingle = vlSelf->__PVT__IntToFP__DOT__s2_isSingle_r;
    }
    if (vlSelf->__PVT__IntToFP__DOT___s2_isSingle_T_4) {
        vlSelf->__PVT__IntToFP__DOT__r_1 = ((4U == 
                                             (7U & 
                                              ((IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0_io_in_bits_op) 
                                               >> 3U)))
                                             ? (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0_io_in_bits_rm)
                                             : 0U);
        vlSelf->__PVT__IntToFP__DOT__r_norm_int = (0x7fffffffffffffffULL 
                                                   & ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lzc_error)
                                                       ? 
                                                      (vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__in_shift_s1 
                                                       << 1U)
                                                       : vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__in_shift_s1));
        vlSelf->__PVT__IntToFP__DOT__r_lzc = (0x3fU 
                                              & ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lzc) 
                                                 + (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lzc_error)));
        vlSelf->__PVT__IntToFP__DOT__r_sign = vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__in_sign;
        vlSelf->__PVT__IntToFP__DOT__r_is_zero = (0ULL 
                                                  == vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__pos_lzc_clz_io_in);
        vlSelf->__PVT__IntToFP__DOT__s2_isSingle_r 
            = (1U & (~ (IData)(vlSelf->IntToFP__DOT____VdfgTmp_h0d28c158__0)));
    }
    if (vlSelf->__PVT__FPToInt__DOT___io_out_bits_fflags_T_3) {
        vlSelf->__PVT__FPToInt__DOT__io_out_bits_result_r_1 
            = (((((IData)(vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__raw_a_exp) 
                  > (0xffU & ((IData)(0x7fU) + ((2U 
                                                 & (IData)(vlSelf->__PVT__FPToInt__DOT__coreOp))
                                                 ? 0x3fU
                                                 : 0x1fU)))) 
                 | ((0x96U <= (IData)(vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__raw_a_exp)) 
                    & (((~ (IData)(vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__rpath_rounder_io_signIn)) 
                        & (IData)(vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__lpath_may_of)) 
                       | ((IData)(vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__lpath_may_of) 
                          & ((IData)(vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__rpath_rounder_io_signIn) 
                             & (0U != vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__fp_a_sig)))))) 
                | (((0x96U <= (IData)(vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__raw_a_exp)) 
                    & (IData)(vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__lpath_iv)) 
                   | ((0x96U > (IData)(vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__raw_a_exp)) 
                      & ((IData)(vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__lpath_iv) 
                         & (0U != vlSelf->__VdfgTmp_h22dfd192__0)))))
                ? ((1U & ((~ (IData)(vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__rpath_rounder_io_signIn)) 
                          | ((0xffU == (IData)(vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__fp_a_exp)) 
                             & (0U != vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__fp_a_sig))))
                    ? ((2U & (IData)(vlSelf->__PVT__FPToInt__DOT__coreOp))
                        ? (0x7fffffffffffffffULL | 
                           ((QData)((IData)((1U & (~ (IData)(vlSelf->__PVT__FPToInt__DOT__coreOp))))) 
                            << 0x3fU)) : (0x7fffffffULL 
                                          | (0x80000000ULL 
                                             & ((QData)((IData)(
                                                                (1U 
                                                                 & (~ (IData)(vlSelf->__PVT__FPToInt__DOT__coreOp))))) 
                                                << 0x1fU))))
                    : ((2U & (IData)(vlSelf->__PVT__FPToInt__DOT__coreOp))
                        ? ((QData)((IData)((1U & (IData)(vlSelf->__PVT__FPToInt__DOT__coreOp)))) 
                           << 0x3fU) : (0x80000000ULL 
                                        & ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(vlSelf->__PVT__FPToInt__DOT__coreOp)))) 
                                           << 0x1fU))))
                : ((((IData)(vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__rpath_rounder_io_signIn) 
                     & (IData)(vlSelf->__PVT__FPToInt__DOT__coreOp))
                     ? (- vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__int_abs)
                     : vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__int_abs) 
                   & (0xffffffffULL | ((QData)((IData)(
                                                       ((2U 
                                                         & (IData)(vlSelf->__PVT__FPToInt__DOT__coreOp))
                                                         ? 0xffffffffU
                                                         : 0U))) 
                                       << 0x20U))));
        vlSelf->__PVT__FPToInt__DOT__io_out_bits_result_r 
            = vlSelf->__PVT__FPToInt__DOT__isSingle;
    }
    if (vlSelf->__PVT__FPToInt__DOT___isSingle_T_7) {
        if ((3U == (7U & ((IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0_io_in_bits_op) 
                          >> 3U)))) {
            vlSelf->__PVT__FPToInt__DOT__rm = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0_io_in_bits_rm;
            vlSelf->__PVT__FPToInt__DOT__coreOp = (3U 
                                                   & (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0_io_in_bits_op));
        } else {
            vlSelf->__PVT__FPToInt__DOT__rm = 0U;
            vlSelf->__PVT__FPToInt__DOT__coreOp = 0U;
        }
        vlSelf->__PVT__FPToInt__DOT__src = (QData)((IData)(
                                                           ((3U 
                                                             == 
                                                             (7U 
                                                              & ((IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0_io_in_bits_op) 
                                                                 >> 3U)))
                                                             ? vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_2_io_in_bits_a
                                                             : 0U)));
        vlSelf->__PVT__FPToInt__DOT__isSingle = (1U 
                                                 & (~ (IData)(
                                                              (0x1cU 
                                                               == 
                                                               (0x3cU 
                                                                & (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0_io_in_bits_op))))));
    }
    if (((~ ((~ (IData)(vlSelf->__PVT__FPMV_io_out_ready)) 
             & (IData)(vlSelf->__PVT__FPMV__DOT__REG_1))) 
         & (IData)(vlSelf->__PVT__FPMV__DOT__REG))) {
        vlSelf->__PVT__FPMV__DOT__io_out_bits_result_r 
            = ((2U == (IData)(vlSelf->__PVT__FPMV__DOT__s1_op))
                ? (QData)((IData)(((((IData)(vlSelf->__PVT__FPMV__DOT__classifyOut_decode___05FisNaN) 
                                     & (IData)((vlSelf->__PVT__FPMV__DOT__a 
                                                >> 0x16U))) 
                                    << 9U) | ((((~ (IData)(
                                                           (vlSelf->__PVT__FPMV__DOT__a 
                                                            >> 0x16U))) 
                                                & (IData)(vlSelf->__PVT__FPMV__DOT__classifyOut_decode___05FisNaN)) 
                                               << 8U) 
                                              | ((((~ (IData)(
                                                              (vlSelf->__PVT__FPMV__DOT__a 
                                                               >> 0x1fU))) 
                                                   & (IData)(vlSelf->__PVT__FPMV__DOT__classifyOut_decode___05FisInf)) 
                                                  << 7U) 
                                                 | ((((~ (IData)(
                                                                 (vlSelf->__PVT__FPMV__DOT__a 
                                                                  >> 0x1fU))) 
                                                      & (IData)(vlSelf->__PVT__FPMV__DOT__classifyOut_isNormal)) 
                                                     << 6U) 
                                                    | ((((~ (IData)(
                                                                    (vlSelf->__PVT__FPMV__DOT__a 
                                                                     >> 0x1fU))) 
                                                         & (IData)(vlSelf->__PVT__FPMV__DOT__classifyOut_decode___05FisSubnormal)) 
                                                        << 5U) 
                                                       | ((((~ (IData)(
                                                                       (vlSelf->__PVT__FPMV__DOT__a 
                                                                        >> 0x1fU))) 
                                                            & (IData)(vlSelf->__PVT__FPMV__DOT__classifyOut_decode___05FisZero)) 
                                                           << 4U) 
                                                          | ((((IData)(vlSelf->__PVT__FPMV__DOT__classifyOut_decode___05FisZero) 
                                                               & (IData)(
                                                                         (vlSelf->__PVT__FPMV__DOT__a 
                                                                          >> 0x1fU))) 
                                                              << 3U) 
                                                             | ((((IData)(vlSelf->__PVT__FPMV__DOT__classifyOut_decode___05FisSubnormal) 
                                                                  & (IData)(
                                                                            (vlSelf->__PVT__FPMV__DOT__a 
                                                                             >> 0x1fU))) 
                                                                 << 2U) 
                                                                | ((((IData)(vlSelf->__PVT__FPMV__DOT__classifyOut_isNormal) 
                                                                     & (IData)(
                                                                               (vlSelf->__PVT__FPMV__DOT__a 
                                                                                >> 0x1fU))) 
                                                                    << 1U) 
                                                                   | ((IData)(vlSelf->__PVT__FPMV__DOT__classifyOut_decode___05FisInf) 
                                                                      & (IData)(
                                                                                (vlSelf->__PVT__FPMV__DOT__a 
                                                                                >> 0x1fU))))))))))))))
                : vlSelf->__PVT__FPMV__DOT__a);
    }
    if (((~ ((~ (IData)(vlSelf->__PVT__FCMP_io_out_ready)) 
             & (IData)(vlSelf->__PVT__FCMP__DOT__REG_1))) 
         & (IData)(vlSelf->__PVT__FCMP__DOT__REG))) {
        vlSelf->__PVT__FCMP__DOT__io_out_bits_result_r 
            = ((0x10U & (IData)(vlSelf->__PVT__FCMP__DOT__fflags))
                ? 0U : ((8U == (8U | (IData)(vlSelf->__PVT__FCMP__DOT__op)))
                         ? ((IData)(vlSelf->__PVT__FCMP__DOT__lt)
                             ? vlSelf->__PVT__FCMP__DOT__a
                             : vlSelf->__PVT__FCMP__DOT__b)
                         : ((9U == (8U | (IData)(vlSelf->__PVT__FCMP__DOT__op)))
                             ? ((IData)(vlSelf->__PVT__FCMP__DOT__lt)
                                 ? vlSelf->__PVT__FCMP__DOT__b
                                 : vlSelf->__PVT__FCMP__DOT__a)
                             : ((3U == (IData)(vlSelf->__PVT__FCMP__DOT__op))
                                 ? (IData)(vlSelf->__PVT__FCMP__DOT__lt)
                                 : ((2U == (IData)(vlSelf->__PVT__FCMP__DOT__op))
                                     ? (IData)(vlSelf->__PVT__FCMP__DOT__le)
                                     : ((5U == (IData)(vlSelf->__PVT__FCMP__DOT__op))
                                         ? (1U & (~ (IData)(vlSelf->__PVT__FCMP__DOT__eq)))
                                         : ((4U == (IData)(vlSelf->__PVT__FCMP__DOT__op))
                                             ? (IData)(vlSelf->__PVT__FCMP__DOT__eq)
                                             : 0U)))))));
    }
    vlSelf->__PVT__IntToFP__DOT__REG = __Vdly__IntToFP__DOT__REG;
    vlSelf->__PVT__IntToFP__DOT__REG_1 = __Vdly__IntToFP__DOT__REG_1;
    vlSelf->__PVT__FMA__DOT__mulPipe__DOT__REG = __Vdly__FMA__DOT__mulPipe__DOT__REG;
    vlSelf->__PVT__FMA__DOT__mulPipe__DOT__REG_1 = __Vdly__FMA__DOT__mulPipe__DOT__REG_1;
    vlSelf->__PVT__FMA__DOT__addPipe__DOT__REG = __Vdly__FMA__DOT__addPipe__DOT__REG;
    vlSelf->__PVT__FMA__DOT__addPipe__DOT__REG_1 = __Vdly__FMA__DOT__addPipe__DOT__REG_1;
    vlSelf->__PVT__FPToInt__DOT__REG = __Vdly__FPToInt__DOT__REG;
    vlSelf->__PVT__FPToInt__DOT__REG_1 = __Vdly__FPToInt__DOT__REG_1;
    if (__Vdlyvset__FMA__DOT__mulFIFO__DOT__ram_result__v0) {
        vlSelf->__PVT__FMA__DOT__mulFIFO__DOT__ram_result[0U] 
            = __Vdlyvval__FMA__DOT__mulFIFO__DOT__ram_result__v0;
    }
    if (__Vdlyvset__FMA__DOT__addFIFO__DOT__ram_result__v0) {
        vlSelf->__PVT__FMA__DOT__addFIFO__DOT__ram_result[0U] 
            = __Vdlyvval__FMA__DOT__addFIFO__DOT__ram_result__v0;
    }
    vlSelf->__PVT__FPMV__DOT__REG = __Vdly__FPMV__DOT__REG;
    vlSelf->__PVT__FPMV__DOT__REG_1 = __Vdly__FPMV__DOT__REG_1;
    vlSelf->__PVT__FCMP__DOT__REG = __Vdly__FCMP__DOT__REG;
    vlSelf->__PVT__FCMP__DOT__REG_1 = __Vdly__FCMP__DOT__REG_1;
    if (vlSelf->__PVT__FMA__DOT__mulPipe__DOT__multiplier_io_regEnables_0) {
        vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s2_io_in_r_early_overflow 
            = (0x17dU < (IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s1__DOT__exp_sum));
        vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s2_io_in_r_rm 
            = vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s1_io_rm;
        vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s2_io_in_r_exp_shifted 
            = (0x1ffU & (((IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s1__DOT__exp_sum) 
                          - (IData)(0x64U)) - (IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s1__DOT__shift_amt)));
        vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s2_io_in_r_may_be_subnormal 
            = (1U & ((IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s1__DOT__exceed_lim) 
                     | (1U & (((IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s1__DOT__exp_sum) 
                               - (IData)(0x65U)) >> 9U))));
        vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s2_io_in_r_shift_amt 
            = vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s1__DOT__shift_amt;
        vlSelf->__PVT__FMA__DOT__mulPipe__DOT__multiplier__DOT__io_result_r_1 
            = vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s1__DOT__raw_b_sig;
        vlSelf->__PVT__FMA__DOT__mulPipe__DOT__multiplier__DOT__io_result_r 
            = vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s1__DOT__raw_a_sig;
        vlSelf->__PVT__FMA__DOT__mulPipe__DOT__toAdd_addAnother_r 
            = ((0U == (7U & ((IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0_io_in_bits_op) 
                             >> 3U))) ? ((IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.pipe__DOT__fpu__DOT____VdfgTmp_hd90b9525__0)
                                          ? vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__exe_data__DOT__ram_in2_2
                                         [0U] : vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__exe_data__DOT__ram_in3_2
                                         [0U]) : 0U);
        vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s2_io_in_r_special_case_valid 
            = ((IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s1__DOT__hasZero) 
               | ((IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s1__DOT__hasNaN) 
                  | (IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s1__DOT__hasInf)));
        vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s2_io_in_r_special_case_bits_inf 
            = vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s1__DOT__hasInf;
        vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s2_io_in_r_special_case_bits_nan 
            = ((IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s1__DOT__hasNaN) 
               | ((IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s1__DOT__hasZero) 
                  & (IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s1__DOT__hasInf)));
        vlSelf->__PVT__FMA__DOT__mulPipe__DOT__toAdd_op_r 
            = vlSelf->__PVT__FMA__DOT__mulPipe_io_in_bits_op;
        vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s2_io_in_r_special_case_bits_hasZero 
            = vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s1__DOT__hasZero;
        vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s2_io_in_r_prod_sign 
            = (1U & ((IData)(((0U == (0x38U & (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0_io_in_bits_op))) 
                              & (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_2_io_in_bits_a 
                                 >> 0x1fU))) ^ (vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s1_io_b 
                                                >> 0x1fU)));
    }
    VL_EXTEND_WQ(74,48, __Vtemp_hd69ef506__0, vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3_io_in_r_prod);
    VL_SHIFTL_WWI(74,74,9, __Vtemp_h2d568758__0, __Vtemp_hd69ef506__0, (IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3_io_in_r_shift_amt));
    vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__sig_shifted_raw[0U] 
        = __Vtemp_h2d568758__0[0U];
    vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__sig_shifted_raw[1U] 
        = __Vtemp_h2d568758__0[1U];
    vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__sig_shifted_raw[2U] 
        = (0x3ffU & __Vtemp_h2d568758__0[2U]);
    VL_EXTEND_WQ(585,48, __Vtemp_hd7be74e6__0, vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3_io_in_r_prod);
    VL_SHIFTL_WWI(585,585,9, __Vtemp_h2ce4aade__0, __Vtemp_hd7be74e6__0, (IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3_io_in_r_shift_amt));
    __PVT__FMA__DOT__mulPipe__DOT__s3__DOT___sig_shifted_raw_T[0U] 
        = (VVentus__ConstPool__CONST_h7b110aeb_0[0U] 
           & __Vtemp_h2ce4aade__0[0U]);
    __PVT__FMA__DOT__mulPipe__DOT__s3__DOT___sig_shifted_raw_T[1U] 
        = (VVentus__ConstPool__CONST_h7b110aeb_0[1U] 
           & __Vtemp_h2ce4aade__0[1U]);
    __PVT__FMA__DOT__mulPipe__DOT__s3__DOT___sig_shifted_raw_T[2U] 
        = (VVentus__ConstPool__CONST_h7b110aeb_0[2U] 
           & __Vtemp_h2ce4aade__0[2U]);
    __PVT__FMA__DOT__mulPipe__DOT__s3__DOT___sig_shifted_raw_T[3U] 
        = (VVentus__ConstPool__CONST_h7b110aeb_0[3U] 
           & __Vtemp_h2ce4aade__0[3U]);
    __PVT__FMA__DOT__mulPipe__DOT__s3__DOT___sig_shifted_raw_T[4U] 
        = (VVentus__ConstPool__CONST_h7b110aeb_0[4U] 
           & __Vtemp_h2ce4aade__0[4U]);
    __PVT__FMA__DOT__mulPipe__DOT__s3__DOT___sig_shifted_raw_T[5U] 
        = (VVentus__ConstPool__CONST_h7b110aeb_0[5U] 
           & __Vtemp_h2ce4aade__0[5U]);
    __PVT__FMA__DOT__mulPipe__DOT__s3__DOT___sig_shifted_raw_T[6U] 
        = (VVentus__ConstPool__CONST_h7b110aeb_0[6U] 
           & __Vtemp_h2ce4aade__0[6U]);
    __PVT__FMA__DOT__mulPipe__DOT__s3__DOT___sig_shifted_raw_T[7U] 
        = (VVentus__ConstPool__CONST_h7b110aeb_0[7U] 
           & __Vtemp_h2ce4aade__0[7U]);
    __PVT__FMA__DOT__mulPipe__DOT__s3__DOT___sig_shifted_raw_T[8U] 
        = (VVentus__ConstPool__CONST_h7b110aeb_0[8U] 
           & __Vtemp_h2ce4aade__0[8U]);
    __PVT__FMA__DOT__mulPipe__DOT__s3__DOT___sig_shifted_raw_T[9U] 
        = (VVentus__ConstPool__CONST_h7b110aeb_0[9U] 
           & __Vtemp_h2ce4aade__0[9U]);
    __PVT__FMA__DOT__mulPipe__DOT__s3__DOT___sig_shifted_raw_T[0xaU] 
        = (VVentus__ConstPool__CONST_h7b110aeb_0[0xaU] 
           & __Vtemp_h2ce4aade__0[0xaU]);
    __PVT__FMA__DOT__mulPipe__DOT__s3__DOT___sig_shifted_raw_T[0xbU] 
        = (VVentus__ConstPool__CONST_h7b110aeb_0[0xbU] 
           & __Vtemp_h2ce4aade__0[0xbU]);
    __PVT__FMA__DOT__mulPipe__DOT__s3__DOT___sig_shifted_raw_T[0xcU] 
        = (VVentus__ConstPool__CONST_h7b110aeb_0[0xcU] 
           & __Vtemp_h2ce4aade__0[0xcU]);
    __PVT__FMA__DOT__mulPipe__DOT__s3__DOT___sig_shifted_raw_T[0xdU] 
        = (VVentus__ConstPool__CONST_h7b110aeb_0[0xdU] 
           & __Vtemp_h2ce4aade__0[0xdU]);
    __PVT__FMA__DOT__mulPipe__DOT__s3__DOT___sig_shifted_raw_T[0xeU] 
        = (VVentus__ConstPool__CONST_h7b110aeb_0[0xeU] 
           & __Vtemp_h2ce4aade__0[0xeU]);
    __PVT__FMA__DOT__mulPipe__DOT__s3__DOT___sig_shifted_raw_T[0xfU] 
        = (VVentus__ConstPool__CONST_h7b110aeb_0[0xfU] 
           & __Vtemp_h2ce4aade__0[0xfU]);
    __PVT__FMA__DOT__mulPipe__DOT__s3__DOT___sig_shifted_raw_T[0x10U] 
        = (VVentus__ConstPool__CONST_h7b110aeb_0[0x10U] 
           & __Vtemp_h2ce4aade__0[0x10U]);
    __PVT__FMA__DOT__mulPipe__DOT__s3__DOT___sig_shifted_raw_T[0x11U] 
        = (VVentus__ConstPool__CONST_h7b110aeb_0[0x11U] 
           & __Vtemp_h2ce4aade__0[0x11U]);
    __PVT__FMA__DOT__mulPipe__DOT__s3__DOT___sig_shifted_raw_T[0x12U] 
        = (VVentus__ConstPool__CONST_h7b110aeb_0[0x12U] 
           & __Vtemp_h2ce4aade__0[0x12U]);
    vlSelf->__PVT__FMA__DOT__toOutArbiter_io_out_valid 
        = ((IData)(vlSelf->__PVT__FMA__DOT__addFIFO__DOT__maybe_full) 
           | (IData)(vlSelf->__PVT__FMA__DOT__mulFIFO__DOT__maybe_full));
    vlSelf->__PVT__FMA__DOT__addFIFO__DOT__do_deq = 
        ((IData)(vlSelf->__PVT__FMA__DOT__addFIFO__DOT__maybe_full) 
         & (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addFIFO_io_deq_ready));
    vlSelf->__PVT__FMA__DOT__mulFIFO_io_deq_ready = 
        ((~ (IData)(vlSelf->__PVT__FMA__DOT__addFIFO__DOT__maybe_full)) 
         & (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addFIFO_io_deq_ready));
    vlSelf->__PVT__FMA__DOT__addPipe_io_out_ready = 
        (1U & ((~ (IData)(vlSelf->__PVT__FMA__DOT__addFIFO__DOT__maybe_full)) 
               | (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addFIFO_io_deq_ready)));
    vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2__DOT__near_path_is_zero 
        = ((0U == (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_near_path_out_exp)) 
           & (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_near_path_sig_is_zero));
    if (vlSelf->__PVT__FPMV__DOT___a_T_8) {
        vlSelf->__PVT__FPMV__DOT__s1_op = vlSelf->__PVT__FPMV_io_in_bits_op;
        vlSelf->__PVT__FPMV__DOT__a = ((2U == (IData)(vlSelf->__PVT__FPMV_io_in_bits_op))
                                        ? (QData)((IData)(vlSelf->__PVT__FPMV_io_in_bits_a))
                                        : (((QData)((IData)(
                                                            ((4U 
                                                              == (IData)(vlSelf->__PVT__FPMV_io_in_bits_op))
                                                              ? 
                                                             ((IData)(
                                                                      ((0x10U 
                                                                        == 
                                                                        (0x38U 
                                                                         & (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0_io_in_bits_op))) 
                                                                       & (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_2_io_in_bits_a 
                                                                          >> 0x1fU))) 
                                                              ^ (IData)(vlSelf->FPMV__DOT____VdfgTmp_h8faae4b3__0))
                                                              : 
                                                             ((5U 
                                                               == (IData)(vlSelf->__PVT__FPMV_io_in_bits_op))
                                                               ? 
                                                              (1U 
                                                               & (~ (IData)(vlSelf->FPMV__DOT____VdfgTmp_h8faae4b3__0)))
                                                               : 
                                                              ((6U 
                                                                == (IData)(vlSelf->__PVT__FPMV_io_in_bits_op))
                                                                ? 
                                                               (((2U 
                                                                  == 
                                                                  (7U 
                                                                   & ((IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0_io_in_bits_op) 
                                                                      >> 3U)))
                                                                  ? vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_2_io_in_bits_b
                                                                  : 0U) 
                                                                >> 0x1fU)
                                                                : vlSelf->__PVT__FPMV_io_in_bits_a))))) 
                                            << 0x1fU) 
                                           | (QData)((IData)(
                                                             ((2U 
                                                               == 
                                                               (7U 
                                                                & ((IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0_io_in_bits_op) 
                                                                   >> 3U)))
                                                               ? 
                                                              (0x7fffffffU 
                                                               & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_2_io_in_bits_a)
                                                               : 0U)))));
    }
    if (vlSelf->__PVT__FCMP__DOT___eq_T_4) {
        vlSelf->__PVT__FCMP__DOT__a = vlSelf->__PVT__FCMP__DOT__FCMPCore_io_a;
        vlSelf->__PVT__FCMP__DOT__b = vlSelf->__PVT__FCMP__DOT__FCMPCore_io_b;
        vlSelf->__PVT__FCMP__DOT__eq = ((~ (IData)(vlSelf->__PVT__FCMP__DOT__FCMPCore__DOT__hasNaN)) 
                                        & ((0U == (IData)(vlSelf->__PVT__FCMP__DOT__FCMPCore__DOT__a_minus_b)) 
                                           | (IData)(vlSelf->__PVT__FCMP__DOT__FCMPCore__DOT__bothZero)));
        vlSelf->__PVT__FCMP__DOT__lt = ((~ (IData)(vlSelf->__PVT__FCMP__DOT__FCMPCore__DOT__hasNaN)) 
                                        & ((IData)(vlSelf->__PVT__FCMP__DOT__FCMPCore__DOT__same_sign)
                                            ? ((0U 
                                                != (IData)(vlSelf->__PVT__FCMP__DOT__FCMPCore__DOT__a_minus_b)) 
                                               & (IData)(vlSelf->__PVT__FCMP__DOT__FCMPCore__DOT__uint_less))
                                            : ((~ (IData)(vlSelf->__PVT__FCMP__DOT__FCMPCore__DOT__bothZero)) 
                                               & (IData)(vlSelf->__PVT__FCMP__DOT__FCMPCore__DOT__fp_a_sign))));
        vlSelf->__PVT__FCMP__DOT__le = ((~ (IData)(vlSelf->__PVT__FCMP__DOT__FCMPCore__DOT__hasNaN)) 
                                        & ((IData)(vlSelf->__PVT__FCMP__DOT__FCMPCore__DOT__same_sign)
                                            ? ((IData)(vlSelf->__PVT__FCMP__DOT__FCMPCore__DOT__uint_less) 
                                               | (0U 
                                                  == (IData)(vlSelf->__PVT__FCMP__DOT__FCMPCore__DOT__a_minus_b)))
                                            : ((IData)(vlSelf->__PVT__FCMP__DOT__FCMPCore__DOT__fp_a_sign) 
                                               | (IData)(vlSelf->__PVT__FCMP__DOT__FCMPCore__DOT__bothZero))));
        vlSelf->__PVT__FCMP__DOT__op = ((1U == (7U 
                                                & ((IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0_io_in_bits_op) 
                                                   >> 3U)))
                                         ? (7U & (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0_io_in_bits_op))
                                         : 0U);
        vlSelf->__PVT__FCMP__DOT__fflags = ((((~ (IData)(
                                                         ((8U 
                                                           == 
                                                           (0x38U 
                                                            & (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0_io_in_bits_op))) 
                                                          & (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_2_io_in_bits_a 
                                                             >> 0x16U)))) 
                                              & (IData)(vlSelf->__PVT__FCMP__DOT__FCMPCore__DOT__decode_a___05FisNaN)) 
                                             | ((~ (IData)(
                                                           ((8U 
                                                             == 
                                                             (0x38U 
                                                              & (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0_io_in_bits_op))) 
                                                            & (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_2_io_in_bits_b 
                                                               >> 0x16U)))) 
                                                & (IData)(vlSelf->__PVT__FCMP__DOT__FCMPCore__DOT__decode_b___05FisNaN))) 
                                            << 4U);
    }
    vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__exp_is_subnormal 
        = ((~ (__PVT__FMA__DOT__mulPipe__DOT__s3__DOT___sig_shifted_raw_T[2U] 
               >> 9U)) & (IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3_io_in_r_may_be_subnormal));
    vlSelf->outArbiter__DOT____VdfgTmp_h245e14da__0 
        = ((IData)(vlSelf->__PVT__FMA__DOT__toOutArbiter_io_out_valid) 
           | (IData)(vlSelf->__PVT__FCMP__DOT__REG_1));
    vlSelf->__PVT__FCMP_io_out_ready = ((~ (IData)(vlSelf->__PVT__FMA__DOT__toOutArbiter_io_out_valid)) 
                                        & (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addFIFO_io_deq_ready));
    vlSelf->__PVT__FMA__DOT__mulFIFO__DOT__do_deq = 
        ((IData)(vlSelf->__PVT__FMA__DOT__mulFIFO_io_deq_ready) 
         & (IData)(vlSelf->__PVT__FMA__DOT__mulFIFO__DOT__maybe_full));
    vlSelf->__PVT__FMA__DOT__mulFIFO_io_enq_ready = 
        (1U & ((~ (IData)(vlSelf->__PVT__FMA__DOT__mulFIFO__DOT__maybe_full)) 
               | (IData)(vlSelf->__PVT__FMA__DOT__mulFIFO_io_deq_ready)));
    vlSelf->__PVT__FMA__DOT__addFIFO__DOT__ram_result_MPORT_en 
        = ((IData)(vlSelf->__PVT__FMA__DOT__addPipe_io_out_ready) 
           & (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__REG_1));
    vlSelf->__PVT__FMA__DOT__addPipe__DOT___s2_io_in_T_3 
        = ((~ ((~ (IData)(vlSelf->__PVT__FMA__DOT__addPipe_io_out_ready)) 
               & (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__REG_1))) 
           & (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__REG));
    vlSelf->__PVT__FMA__DOT__addPipe__DOT___T_2 = (
                                                   (~ (IData)(vlSelf->__PVT__FMA__DOT__addPipe_io_out_ready)) 
                                                   & ((IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__REG) 
                                                      & (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__REG_1)));
    vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2__DOT__far_path_tininess_rounder__DOT__rounder__DOT__inexact 
        = (IData)((0U != (3U & vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_far_path_out_sig)));
    vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2__DOT__far_path_rounder__DOT__inexact 
        = (IData)((0U != (7U & vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_far_path_out_sig)));
    vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2__DOT__near_path_tininess_rounder__DOT__rounder__DOT__inexact 
        = (IData)((0U != (3U & vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_near_path_out_sig)));
    vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2__DOT__near_path_rounder__DOT__inexact 
        = (IData)((0U != (7U & vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_near_path_out_sig)));
    vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2__DOT__rmin 
        = ((1U == (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_rm)) 
           | (((~ (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_far_path_out_sign)) 
               & (2U == (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_rm))) 
              | ((3U == (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_rm)) 
                 & (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_far_path_out_sign))));
    vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__no_extra_shift 
        = (1U & ((__PVT__FMA__DOT__mulPipe__DOT__s3__DOT___sig_shifted_raw_T[2U] 
                  >> 9U) | (IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__exp_is_subnormal)));
    vlSelf->outArbiter__DOT____VdfgTmp_h5724d08f__0 
        = ((IData)(vlSelf->outArbiter__DOT____VdfgTmp_h245e14da__0) 
           | (IData)(vlSelf->__PVT__FPMV__DOT__REG_1));
    vlSelf->__PVT__FPMV_io_out_ready = ((~ (IData)(vlSelf->outArbiter__DOT____VdfgTmp_h245e14da__0)) 
                                        & (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addFIFO_io_deq_ready));
    vlSelf->__PVT__IntToFP__DOT__IntToFP_postnorm__DOT__rounder__DOT__inexact 
        = (IData)((0ULL != (0xffffffffffULL & vlSelf->__PVT__IntToFP__DOT__r_norm_int)));
    if (vlSelf->__PVT__FPToInt__DOT__isSingle) {
        vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__rpath_rounder_io_signIn 
            = (1U & (IData)((vlSelf->__PVT__FPToInt__DOT__src 
                             >> 0x1fU)));
        vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__fp_a_sig 
            = (0x7fffffU & (IData)(vlSelf->__PVT__FPToInt__DOT__src));
        vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__fp_a_exp 
            = (0xffU & (IData)((vlSelf->__PVT__FPToInt__DOT__src 
                                >> 0x17U)));
    } else {
        vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__rpath_rounder_io_signIn = 0U;
        vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__fp_a_sig = 0U;
        vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__fp_a_exp = 0U;
    }
    vlSelf->__PVT__FPMV__DOT__classifyOut_decode___05FisSubnormal 
        = ((~ (IData)((0U != (0xffU & (IData)((vlSelf->__PVT__FPMV__DOT__a 
                                               >> 0x17U)))))) 
           & (0U != (0x7fffffU & (IData)(vlSelf->__PVT__FPMV__DOT__a))));
    vlSelf->__PVT__FPMV__DOT__classifyOut_decode___05FisInf 
        = (IData)(((0x7f800000ULL == (0x7f800000ULL 
                                      & vlSelf->__PVT__FPMV__DOT__a)) 
                   & (~ (IData)((0U != (0x7fffffU & (IData)(vlSelf->__PVT__FPMV__DOT__a)))))));
    vlSelf->__PVT__FPMV__DOT__classifyOut_decode___05FisZero 
        = (1U & ((~ (IData)((0U != (0xffU & (IData)(
                                                    (vlSelf->__PVT__FPMV__DOT__a 
                                                     >> 0x17U)))))) 
                 & (~ (IData)((0U != (0x7fffffU & (IData)(vlSelf->__PVT__FPMV__DOT__a)))))));
    vlSelf->__PVT__FPMV__DOT__classifyOut_decode___05FisNaN 
        = (IData)(((0x7f800000ULL == (0x7f800000ULL 
                                      & vlSelf->__PVT__FPMV__DOT__a)) 
                   & (0U != (0x7fffffU & (IData)(vlSelf->__PVT__FPMV__DOT__a)))));
    vlSelf->__PVT__FPMV__DOT__classifyOut_isNormal 
        = ((~ (IData)((0xffU == (0xffU & (IData)((vlSelf->__PVT__FPMV__DOT__a 
                                                  >> 0x17U)))))) 
           & (0U != (0xffU & (IData)((vlSelf->__PVT__FPMV__DOT__a 
                                      >> 0x17U)))));
    if ((4U == (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_rm))) {
        vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2__DOT__far_path_rounder__DOT__r_up 
            = (1U & (vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_far_path_out_sig 
                     >> 2U));
        vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2__DOT__near_path_rounder__DOT__r_up 
            = (1U & (vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_near_path_out_sig 
                     >> 2U));
    } else if ((2U == (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_rm))) {
        vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2__DOT__far_path_rounder__DOT__r_up 
            = (1U & ((IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2__DOT__far_path_rounder__DOT__inexact) 
                     & (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_far_path_out_sign)));
        vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2__DOT__near_path_rounder__DOT__r_up 
            = (1U & ((IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2__DOT__near_path_rounder__DOT__inexact) 
                     & (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_near_path_out_sign)));
    } else if ((3U == (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_rm))) {
        vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2__DOT__far_path_rounder__DOT__r_up 
            = (1U & ((~ (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_far_path_out_sign)) 
                     & (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2__DOT__far_path_rounder__DOT__inexact)));
        vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2__DOT__near_path_rounder__DOT__r_up 
            = (1U & ((~ (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_near_path_out_sign)) 
                     & (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2__DOT__near_path_rounder__DOT__inexact)));
    } else {
        vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2__DOT__far_path_rounder__DOT__r_up 
            = (1U & ((1U != (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_rm)) 
                     & ((0U == (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_rm)) 
                        & ((vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_far_path_out_sig 
                            >> 2U) & (IData)((0U != 
                                              (0xbU 
                                               & vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_far_path_out_sig)))))));
        vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2__DOT__near_path_rounder__DOT__r_up 
            = (1U & ((1U != (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_rm)) 
                     & ((0U == (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_rm)) 
                        & ((vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_near_path_out_sig 
                            >> 2U) & (IData)((0U != 
                                              (0xbU 
                                               & vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_near_path_out_sig)))))));
    }
    VL_SHIFTL_WWI(74,74,32, __Vtemp_hf13d2d1e__0, vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__sig_shifted_raw, 1U);
    if (vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__no_extra_shift) {
        __PVT__FMA__DOT__mulPipe__DOT__s3__DOT___exp_pre_round_T_2 
            = (0x1ffU & (IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3_io_in_r_exp_shifted));
        vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__sig_shifted[0U] 
            = vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__sig_shifted_raw[0U];
        vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__sig_shifted[1U] 
            = vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__sig_shifted_raw[1U];
        vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__sig_shifted[2U] 
            = (0x3ffU & vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__sig_shifted_raw[2U]);
    } else {
        __PVT__FMA__DOT__mulPipe__DOT__s3__DOT___exp_pre_round_T_2 
            = (0x1ffU & ((IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3_io_in_r_exp_shifted) 
                         - (IData)(1U)));
        vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__sig_shifted[0U] 
            = __Vtemp_hf13d2d1e__0[0U];
        vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__sig_shifted[1U] 
            = __Vtemp_hf13d2d1e__0[1U];
        vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__sig_shifted[2U] 
            = (0x3ffU & __Vtemp_hf13d2d1e__0[2U]);
    }
    vlSelf->__PVT__FPToInt_io_out_ready = ((~ (IData)(vlSelf->outArbiter__DOT____VdfgTmp_h5724d08f__0)) 
                                           & (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addFIFO_io_deq_ready));
    vlSelf->__PVT__IntToFP_io_out_ready = ((~ ((IData)(vlSelf->outArbiter__DOT____VdfgTmp_h5724d08f__0) 
                                               | (IData)(vlSelf->__PVT__FPToInt__DOT__REG_1))) 
                                           & (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addFIFO_io_deq_ready));
    vlSelf->__PVT__IntToFP__DOT__IntToFP_postnorm__DOT__rounder__DOT__r_up 
        = (1U & ((4U == (IData)(vlSelf->__PVT__IntToFP__DOT__r_1))
                  ? (IData)((vlSelf->__PVT__IntToFP__DOT__r_norm_int 
                             >> 0x27U)) : ((2U == (IData)(vlSelf->__PVT__IntToFP__DOT__r_1))
                                            ? ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_postnorm__DOT__rounder__DOT__inexact) 
                                               & (IData)(vlSelf->__PVT__IntToFP__DOT__r_sign))
                                            : ((3U 
                                                == (IData)(vlSelf->__PVT__IntToFP__DOT__r_1))
                                                ? (
                                                   (~ (IData)(vlSelf->__PVT__IntToFP__DOT__r_sign)) 
                                                   & (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_postnorm__DOT__rounder__DOT__inexact))
                                                : (
                                                   (1U 
                                                    != (IData)(vlSelf->__PVT__IntToFP__DOT__r_1)) 
                                                   & ((0U 
                                                       == (IData)(vlSelf->__PVT__IntToFP__DOT__r_1)) 
                                                      & ((IData)(
                                                                 (vlSelf->__PVT__IntToFP__DOT__r_norm_int 
                                                                  >> 0x27U)) 
                                                         & (IData)(
                                                                   (0ULL 
                                                                    != 
                                                                    (0x17fffffffffULL 
                                                                     & vlSelf->__PVT__IntToFP__DOT__r_norm_int))))))))));
    vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__lpath_iv 
        = ((~ (IData)(vlSelf->__PVT__FPToInt__DOT__coreOp)) 
           & (IData)(vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__rpath_rounder_io_signIn));
    vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__raw_a_sig 
        = (((IData)((0U != (IData)(vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__fp_a_exp))) 
            << 0x17U) | vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__fp_a_sig);
    vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__raw_a_exp 
        = ((IData)(vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__fp_a_exp) 
           | (1U & (~ (IData)((0U != (IData)(vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__fp_a_exp))))));
    vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2__DOT__far_path_rounder_io_cout 
        = ((IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2__DOT__far_path_rounder__DOT__r_up) 
           & (0x3fffff8U == (0x3fffff8U & vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_far_path_out_sig)));
    vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2__DOT__near_path_exp_rounded 
        = (0xffU & (((IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2__DOT__near_path_rounder__DOT__r_up) 
                     & (0x7fffffU == (0x7fffffU & (vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_near_path_out_sig 
                                                   >> 3U)))) 
                    + (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_near_path_out_exp)));
    if (vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__exp_is_subnormal) {
        vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__exp_pre_round = 0U;
        vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__raw_in_exp = 0U;
    } else {
        vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__exp_pre_round 
            = __PVT__FMA__DOT__mulPipe__DOT__s3__DOT___exp_pre_round_T_2;
        vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__raw_in_exp 
            = (0xffU & (IData)(__PVT__FMA__DOT__mulPipe__DOT__s3__DOT___exp_pre_round_T_2));
    }
    vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__tininess_rounder__DOT__rounder__DOT__inexact 
        = (1U & ((vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__sig_shifted[1U] 
                  >> 0x10U) | (0U != (0xffffffffffffULL 
                                      & (((QData)((IData)(
                                                          vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__sig_shifted[1U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__sig_shifted[0U])))))));
    vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__rounder_io_stickyIn 
        = (1U & ((vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__sig_shifted[1U] 
                  >> 0x10U) | (0U != (0xffffffffffffULL 
                                      & (((QData)((IData)(
                                                          vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__sig_shifted[1U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__sig_shifted[0U])))))));
    vlSelf->__PVT__FPToInt__DOT___io_out_bits_fflags_T_3 
        = ((~ ((~ (IData)(vlSelf->__PVT__FPToInt_io_out_ready)) 
               & (IData)(vlSelf->__PVT__FPToInt__DOT__REG_1))) 
           & (IData)(vlSelf->__PVT__FPToInt__DOT__REG));
    vlSelf->__PVT__IntToFP__DOT___s2_isSingle_T_8 = 
        ((~ ((~ (IData)(vlSelf->__PVT__IntToFP_io_out_ready)) 
             & (IData)(vlSelf->__PVT__IntToFP__DOT__REG_1))) 
         & (IData)(vlSelf->__PVT__IntToFP__DOT__REG));
    vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__lpath_may_of 
        = ((IData)(vlSelf->__PVT__FPToInt__DOT__coreOp) 
           & ((IData)(vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__raw_a_exp) 
              == (0xffU & ((IData)(0x7fU) + ((2U & (IData)(vlSelf->__PVT__FPToInt__DOT__coreOp))
                                              ? 0x3fU
                                              : 0x1fU)))));
    vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__shiftRightJam__DOT___io_sticky_T 
        = ((vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__raw_a_sig 
            << 1U) & ((((IData)(1U) << (0x1fU & ((IData)(0x16U) 
                                                 - (IData)(vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__raw_a_exp)))) 
                       - (IData)(1U)) | ((0x19U < (0xffU 
                                                   & ((IData)(0x96U) 
                                                      - (IData)(vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__raw_a_exp))))
                                          ? 0x1ffffffU
                                          : 0U)));
    vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__shiftRightJam__DOT___io_out_T 
        = ((0x18U >= (0xffU & ((IData)(0x96U) - (IData)(vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__raw_a_exp))))
            ? (0x1ffffffU & ((vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__raw_a_sig 
                              << 1U) >> (0xffU & ((IData)(0x96U) 
                                                  - (IData)(vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__raw_a_exp)))))
            : 0U);
    vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__rounder__DOT__inexact 
        = (1U & ((vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__sig_shifted[1U] 
                  >> 0x11U) | (IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__rounder_io_stickyIn)));
    vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__rpath_rounder_io_in 
        = ((0x19U < (0xffU & ((IData)(0x96U) - (IData)(vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__raw_a_exp))))
            ? 0U : (0xffffffU & (vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__shiftRightJam__DOT___io_out_T 
                                 >> 1U)));
    vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__rpath_rounder_io_roundIn 
        = ((0x19U >= (0xffU & ((IData)(0x96U) - (IData)(vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__raw_a_exp)))) 
           & vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__shiftRightJam__DOT___io_out_T);
    vlSelf->__PVT__FMA__DOT__mulFIFO__DOT__ram_result_MPORT_en 
        = ((IData)(vlSelf->__PVT__FMA__DOT__mulFIFO_io_enq_ready) 
           & ((IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__REG_1) 
              & (2U == (IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__toAdd_op_r_1))));
    vlSelf->__PVT__FMA__DOT__mulPipe_io_out_ready = 
        (1U & (((~ (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT___T_2)) 
                & ((IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__toAdd_op_r_1) 
                   >> 2U)) | ((IData)(vlSelf->__PVT__FMA__DOT__mulFIFO_io_enq_ready) 
                              & (2U == (IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__toAdd_op_r_1)))));
    vlSelf->__PVT__FMA__DOT__toAddArbiter_io_in_0_valid 
        = (((IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__toAdd_op_r_1) 
            >> 2U) & (IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__REG_1));
    vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__rmin 
        = ((1U == (IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3_io_in_r_rm)) 
           | (((~ (IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3_io_in_r_prod_sign)) 
               & (2U == (IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3_io_in_r_rm))) 
              | ((3U == (IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3_io_in_r_rm)) 
                 & (IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3_io_in_r_prod_sign))));
    vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__rounder__DOT__r_up 
        = (1U & ((4U == (IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3_io_in_r_rm))
                  ? (vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__sig_shifted[1U] 
                     >> 0x11U) : ((2U == (IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3_io_in_r_rm))
                                   ? ((IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__rounder__DOT__inexact) 
                                      & (IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3_io_in_r_prod_sign))
                                   : ((3U == (IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3_io_in_r_rm))
                                       ? ((~ (IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3_io_in_r_prod_sign)) 
                                          & (IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__rounder__DOT__inexact))
                                       : ((1U != (IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3_io_in_r_rm)) 
                                          & ((0U == (IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3_io_in_r_rm)) 
                                             & ((vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__sig_shifted[1U] 
                                                 >> 0x11U) 
                                                & ((IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__rounder_io_stickyIn) 
                                                   | (vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__sig_shifted[1U] 
                                                      >> 0x12U)))))))));
    vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__rpath_rounder__DOT__inexact 
        = ((IData)(vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__rpath_rounder_io_roundIn) 
           | (0U != vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__shiftRightJam__DOT___io_sticky_T));
    vlSelf->__PVT__FMA__DOT__mulPipe__DOT___s3_io_in_T_3 
        = ((~ ((~ (IData)(vlSelf->__PVT__FMA__DOT__mulPipe_io_out_ready)) 
               & (IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__REG_1))) 
           & (IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__REG));
    vlSelf->__PVT__FMA__DOT__addPipe__DOT__isFMA = 
        ((IData)(vlSelf->__PVT__FMA__DOT__toAddArbiter_io_in_0_valid) 
         & ((IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__toAdd_op_r_1) 
            >> 2U));
    vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__rounder_io_cout 
        = ((IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__rounder__DOT__r_up) 
           & (0x7fffffU == (0x7fffffU & ((vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__sig_shifted[2U] 
                                          << 0xeU) 
                                         | (vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__sig_shifted[1U] 
                                            >> 0x12U)))));
    vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__rpath_rounder__DOT__r_up 
        = ((4U == (IData)(vlSelf->__PVT__FPToInt__DOT__rm))
            ? (IData)(vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__rpath_rounder_io_roundIn)
            : ((2U == (IData)(vlSelf->__PVT__FPToInt__DOT__rm))
                ? ((IData)(vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__rpath_rounder__DOT__inexact) 
                   & (IData)(vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__rpath_rounder_io_signIn))
                : ((3U == (IData)(vlSelf->__PVT__FPToInt__DOT__rm))
                    ? ((~ (IData)(vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__rpath_rounder_io_signIn)) 
                       & (IData)(vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__rpath_rounder__DOT__inexact))
                    : ((1U != (IData)(vlSelf->__PVT__FPToInt__DOT__rm)) 
                       & ((0U == (IData)(vlSelf->__PVT__FPToInt__DOT__rm)) 
                          & ((IData)(vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__rpath_rounder_io_roundIn) 
                             & ((0U != vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__shiftRightJam__DOT___io_sticky_T) 
                                | ((0x19U >= (0xffU 
                                              & ((IData)(0x96U) 
                                                 - (IData)(vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__raw_a_exp)))) 
                                   & (vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__shiftRightJam__DOT___io_out_T 
                                      >> 1U)))))))));
    vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__common_of 
        = (((IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__rounder_io_cout)
             ? (0xfeU == (IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__raw_in_exp))
             : (0xffU == (IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__raw_in_exp))) 
           | (IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3_io_in_r_early_overflow));
    vlSelf->__VdfgTmp_h22dfd192__0 = ((((IData)(vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__rpath_rounder__DOT__r_up) 
                                        & (0xffffffU 
                                           == vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__rpath_rounder_io_in)) 
                                       << 0x18U) | 
                                      (0xffffffU & 
                                       (vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__rpath_rounder_io_in 
                                        + (IData)(vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__rpath_rounder__DOT__r_up))));
    vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__int_abs 
        = ((0x96U <= (IData)(vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__raw_a_exp))
            ? ((QData)((IData)(vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__raw_a_sig)) 
               << (0x3fU & ((IData)(vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__raw_a_exp) 
                            - (IData)(0x16U)))) : (QData)((IData)(vlSelf->__VdfgTmp_h22dfd192__0)));
}

VL_INLINE_OPT void VVentus_ScalarFPU_1___nba_sequent__TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3__0(VVentus_ScalarFPU_1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VVentus__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VVentus_ScalarFPU_1___nba_sequent__TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3__0\n"); );
    // Init
    VlWide<19>/*584:0*/ __PVT__FMA__DOT__mulPipe__DOT__s3__DOT___sig_shifted_raw_T;
    SData/*8:0*/ __PVT__FMA__DOT__mulPipe__DOT__s3__DOT___exp_pre_round_T_2;
    CData/*0:0*/ __Vdly__FMA__DOT__mulPipe__DOT__REG;
    CData/*0:0*/ __Vdly__FMA__DOT__mulPipe__DOT__REG_1;
    CData/*0:0*/ __Vdly__FMA__DOT__addPipe__DOT__REG;
    CData/*0:0*/ __Vdly__FMA__DOT__addPipe__DOT__REG_1;
    IData/*31:0*/ __Vdlyvval__FMA__DOT__mulFIFO__DOT__ram_result__v0;
    CData/*0:0*/ __Vdlyvset__FMA__DOT__mulFIFO__DOT__ram_result__v0;
    IData/*31:0*/ __Vdlyvval__FMA__DOT__addFIFO__DOT__ram_result__v0;
    CData/*0:0*/ __Vdlyvset__FMA__DOT__addFIFO__DOT__ram_result__v0;
    CData/*0:0*/ __Vdly__FCMP__DOT__REG;
    CData/*0:0*/ __Vdly__FCMP__DOT__REG_1;
    CData/*0:0*/ __Vdly__FPMV__DOT__REG;
    CData/*0:0*/ __Vdly__FPMV__DOT__REG_1;
    CData/*0:0*/ __Vdly__FPToInt__DOT__REG;
    CData/*0:0*/ __Vdly__FPToInt__DOT__REG_1;
    CData/*0:0*/ __Vdly__IntToFP__DOT__REG;
    CData/*0:0*/ __Vdly__IntToFP__DOT__REG_1;
    VlWide<3>/*95:0*/ __Vtemp_hd69ef506__0;
    VlWide<3>/*95:0*/ __Vtemp_h2d568758__0;
    VlWide<19>/*607:0*/ __Vtemp_hd7be74e6__0;
    VlWide<19>/*607:0*/ __Vtemp_h2ce4aade__0;
    VlWide<3>/*95:0*/ __Vtemp_hf13d2d1e__0;
    // Body
    __Vdly__IntToFP__DOT__REG_1 = vlSelf->__PVT__IntToFP__DOT__REG_1;
    __Vdly__IntToFP__DOT__REG = vlSelf->__PVT__IntToFP__DOT__REG;
    __Vdly__FMA__DOT__mulPipe__DOT__REG = vlSelf->__PVT__FMA__DOT__mulPipe__DOT__REG;
    __Vdly__FMA__DOT__mulPipe__DOT__REG_1 = vlSelf->__PVT__FMA__DOT__mulPipe__DOT__REG_1;
    __Vdly__FMA__DOT__addPipe__DOT__REG = vlSelf->__PVT__FMA__DOT__addPipe__DOT__REG;
    __Vdly__FMA__DOT__addPipe__DOT__REG_1 = vlSelf->__PVT__FMA__DOT__addPipe__DOT__REG_1;
    __Vdly__FPToInt__DOT__REG = vlSelf->__PVT__FPToInt__DOT__REG;
    __Vdly__FPMV__DOT__REG = vlSelf->__PVT__FPMV__DOT__REG;
    __Vdly__FCMP__DOT__REG = vlSelf->__PVT__FCMP__DOT__REG;
    __Vdly__FPToInt__DOT__REG_1 = vlSelf->__PVT__FPToInt__DOT__REG_1;
    __Vdly__FPMV__DOT__REG_1 = vlSelf->__PVT__FPMV__DOT__REG_1;
    __Vdly__FCMP__DOT__REG_1 = vlSelf->__PVT__FCMP__DOT__REG_1;
    __Vdlyvset__FMA__DOT__mulFIFO__DOT__ram_result__v0 = 0U;
    __Vdlyvset__FMA__DOT__addFIFO__DOT__ram_result__v0 = 0U;
    if (vlSymsp->TOP.reset) {
        __Vdly__IntToFP__DOT__REG = 0U;
        __Vdly__IntToFP__DOT__REG_1 = 0U;
        __Vdly__FMA__DOT__mulPipe__DOT__REG = 0U;
        __Vdly__FMA__DOT__mulPipe__DOT__REG_1 = 0U;
        __Vdly__FMA__DOT__addPipe__DOT__REG = 0U;
        __Vdly__FMA__DOT__addPipe__DOT__REG_1 = 0U;
        __Vdly__FPToInt__DOT__REG = 0U;
        __Vdly__FPToInt__DOT__REG_1 = 0U;
        __Vdly__FPMV__DOT__REG = 0U;
        __Vdly__FPMV__DOT__REG_1 = 0U;
        __Vdly__FCMP__DOT__REG = 0U;
        __Vdly__FCMP__DOT__REG_1 = 0U;
        vlSelf->__PVT__FMA__DOT__mulFIFO__DOT__maybe_full = 0U;
        vlSelf->__PVT__FMA__DOT__addFIFO__DOT__maybe_full = 0U;
    } else {
        if ((1U & (~ ((~ (IData)(vlSelf->__PVT__IntToFP_io_out_ready)) 
                      & ((IData)(vlSelf->__PVT__IntToFP__DOT__REG) 
                         & (IData)(vlSelf->__PVT__IntToFP__DOT__REG_1)))))) {
            __Vdly__IntToFP__DOT__REG = vlSelf->__PVT__IntToFP_io_in_valid;
        }
        if ((1U & (~ ((~ (IData)(vlSelf->__PVT__IntToFP_io_out_ready)) 
                      & (IData)(vlSelf->__PVT__IntToFP__DOT__REG_1))))) {
            __Vdly__IntToFP__DOT__REG_1 = vlSelf->__PVT__IntToFP__DOT__REG;
        }
        if ((1U & (~ ((~ (IData)(vlSelf->__PVT__FMA__DOT__mulPipe_io_out_ready)) 
                      & ((IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__REG) 
                         & (IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__REG_1)))))) {
            __Vdly__FMA__DOT__mulPipe__DOT__REG = vlSelf->__PVT__FMA__DOT__mulPipe_io_in_valid;
        }
        if ((1U & (~ ((~ (IData)(vlSelf->__PVT__FMA__DOT__mulPipe_io_out_ready)) 
                      & (IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__REG_1))))) {
            __Vdly__FMA__DOT__mulPipe__DOT__REG_1 = vlSelf->__PVT__FMA__DOT__mulPipe__DOT__REG;
        }
        if ((1U & (~ ((~ (IData)(vlSelf->__PVT__FMA__DOT__addPipe_io_out_ready)) 
                      & ((IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__REG) 
                         & (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__REG_1)))))) {
            __Vdly__FMA__DOT__addPipe__DOT__REG = vlSelf->__PVT__FMA__DOT__addPipe_io_in_valid;
        }
        if ((1U & (~ ((~ (IData)(vlSelf->__PVT__FMA__DOT__addPipe_io_out_ready)) 
                      & (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__REG_1))))) {
            __Vdly__FMA__DOT__addPipe__DOT__REG_1 = vlSelf->__PVT__FMA__DOT__addPipe__DOT__REG;
        }
        if ((1U & (~ ((~ (IData)(vlSelf->__PVT__FPToInt_io_out_ready)) 
                      & ((IData)(vlSelf->__PVT__FPToInt__DOT__REG) 
                         & (IData)(vlSelf->__PVT__FPToInt__DOT__REG_1)))))) {
            __Vdly__FPToInt__DOT__REG = vlSelf->__PVT__FPToInt_io_in_valid;
        }
        if ((1U & (~ ((~ (IData)(vlSelf->__PVT__FPToInt_io_out_ready)) 
                      & (IData)(vlSelf->__PVT__FPToInt__DOT__REG_1))))) {
            __Vdly__FPToInt__DOT__REG_1 = vlSelf->__PVT__FPToInt__DOT__REG;
        }
        if ((1U & (~ ((~ (IData)(vlSelf->__PVT__FPMV_io_out_ready)) 
                      & ((IData)(vlSelf->__PVT__FPMV__DOT__REG) 
                         & (IData)(vlSelf->__PVT__FPMV__DOT__REG_1)))))) {
            __Vdly__FPMV__DOT__REG = vlSelf->__PVT__FPMV_io_in_valid;
        }
        if ((1U & (~ ((~ (IData)(vlSelf->__PVT__FPMV_io_out_ready)) 
                      & (IData)(vlSelf->__PVT__FPMV__DOT__REG_1))))) {
            __Vdly__FPMV__DOT__REG_1 = vlSelf->__PVT__FPMV__DOT__REG;
        }
        if ((1U & (~ ((~ (IData)(vlSelf->__PVT__FCMP_io_out_ready)) 
                      & ((IData)(vlSelf->__PVT__FCMP__DOT__REG) 
                         & (IData)(vlSelf->__PVT__FCMP__DOT__REG_1)))))) {
            __Vdly__FCMP__DOT__REG = vlSelf->__PVT__FCMP_io_in_valid;
        }
        if ((1U & (~ ((~ (IData)(vlSelf->__PVT__FCMP_io_out_ready)) 
                      & (IData)(vlSelf->__PVT__FCMP__DOT__REG_1))))) {
            __Vdly__FCMP__DOT__REG_1 = vlSelf->__PVT__FCMP__DOT__REG;
        }
        if (((IData)(vlSelf->__PVT__FMA__DOT__mulFIFO__DOT__ram_result_MPORT_en) 
             != (IData)(vlSelf->__PVT__FMA__DOT__mulFIFO__DOT__do_deq))) {
            vlSelf->__PVT__FMA__DOT__mulFIFO__DOT__maybe_full 
                = vlSelf->__PVT__FMA__DOT__mulFIFO__DOT__ram_result_MPORT_en;
        }
        if (((IData)(vlSelf->__PVT__FMA__DOT__addFIFO__DOT__ram_result_MPORT_en) 
             != (IData)(vlSelf->__PVT__FMA__DOT__addFIFO__DOT__do_deq))) {
            vlSelf->__PVT__FMA__DOT__addFIFO__DOT__maybe_full 
                = vlSelf->__PVT__FMA__DOT__addFIFO__DOT__ram_result_MPORT_en;
        }
    }
    if (vlSelf->__PVT__FMA__DOT__mulFIFO__DOT__ram_result_MPORT_en) {
        __Vdlyvval__FMA__DOT__mulFIFO__DOT__ram_result__v0 
            = ((IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3_io_in_r_special_case_valid)
                ? ((IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3_io_in_r_special_case_bits_nan)
                    ? 0x7fc00000U : ((IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3_io_in_r_special_case_bits_inf)
                                      ? (0x7f800000U 
                                         | ((IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3_io_in_r_prod_sign) 
                                            << 0x1fU))
                                      : ((IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3_io_in_r_prod_sign) 
                                         << 0x1fU)))
                : (((IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3_io_in_r_prod_sign) 
                    << 0x1fU) | ((0x7f800000U & (((IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__common_of)
                                                   ? 
                                                  ((IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__rmin)
                                                    ? 0xfeU
                                                    : 0xffU)
                                                   : 
                                                  ((IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__rounder_io_cout) 
                                                   + (IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__raw_in_exp))) 
                                                 << 0x17U)) 
                                 | (0x7fffffU & ((IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__common_of)
                                                  ? 
                                                 ((IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__rmin)
                                                   ? 0x7fffffU
                                                   : 0U)
                                                  : 
                                                 (((vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__sig_shifted[2U] 
                                                    << 0xeU) 
                                                   | (vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__sig_shifted[1U] 
                                                      >> 0x12U)) 
                                                  + (IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__rounder__DOT__r_up)))))));
        __Vdlyvset__FMA__DOT__mulFIFO__DOT__ram_result__v0 = 1U;
    }
    if (vlSelf->__PVT__FMA__DOT__addFIFO__DOT__ram_result_MPORT_en) {
        __Vdlyvval__FMA__DOT__addFIFO__DOT__ram_result__v0 
            = ((IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_special_case_valid)
                ? ((IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_special_case_bits_nan)
                    ? 0x7fc00000U : (0x7f800000U | 
                                     ((IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_special_case_bits_inf_sign) 
                                      << 0x1fU))) : 
               ((((IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_sel_far_path) 
                  & ((0xffU == (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_far_path_out_exp)) 
                     | (((IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2__DOT__far_path_rounder_io_cout) 
                         & (0xfeU == (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_far_path_out_exp))) 
                        | (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_far_path_mul_of)))) 
                 | ((~ (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_sel_far_path)) 
                    & (0xffU == (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2__DOT__near_path_exp_rounded))))
                 ? ((((IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_sel_far_path)
                       ? (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_far_path_out_sign)
                       : (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_near_path_out_sign)) 
                     << 0x1fU) | ((((IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2__DOT__rmin)
                                     ? 0xfeU : 0xffU) 
                                   << 0x17U) | ((IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2__DOT__rmin)
                                                 ? 0x7fffffU
                                                 : 0U)))
                 : ((IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_sel_far_path)
                     ? (((IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_far_path_out_sign) 
                         << 0x1fU) | ((0x7f800000U 
                                       & (((IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2__DOT__far_path_rounder_io_cout) 
                                           + (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_far_path_out_exp)) 
                                          << 0x17U)) 
                                      | (0x7fffffU 
                                         & ((vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_far_path_out_sig 
                                             >> 3U) 
                                            + (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2__DOT__far_path_rounder__DOT__r_up)))))
                     : (((((~ (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2__DOT__near_path_is_zero)) 
                           & (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_near_path_out_sign)) 
                          | ((2U == (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_rm)) 
                             & (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2__DOT__near_path_is_zero))) 
                         << 0x1fU) | (((IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2__DOT__near_path_exp_rounded) 
                                       << 0x17U) | 
                                      (0x7fffffU & 
                                       ((vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_near_path_out_sig 
                                         >> 3U) + (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2__DOT__near_path_rounder__DOT__r_up))))))));
        __Vdlyvset__FMA__DOT__addFIFO__DOT__ram_result__v0 = 1U;
    }
    if (vlSelf->__PVT__FMA__DOT__addPipe__DOT___s1_io_a_T_4) {
        vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1_io_b_inter_valid_r 
            = vlSelf->__PVT__FMA__DOT__addPipe__DOT__isFMA;
        vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1_io_b_inter_flags_r_isNaN 
            = ((IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__isFMA) 
               & (IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3_io_in_r_special_case_bits_nan));
        vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1_io_b_inter_flags_r_isInf 
            = ((IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__isFMA) 
               & ((~ (IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3_io_in_r_special_case_bits_nan)) 
                  & (IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3_io_in_r_special_case_bits_inf)));
    }
    if (vlSelf->__PVT__FMA__DOT__addPipe__DOT___s2_io_in_T_3) {
        if (vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT___near_path_out_T_2) {
            vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_near_path_sig_is_zero 
                = (1U & ((~ (IData)((0U != vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__near_path_mods_1__DOT__lza_ab_io_f))) 
                         & (~ ((IData)(1U) + (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__near_path_mods_1__DOT___a_minus_b_T_3)))));
            vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_near_path_out_exp 
                = (0xffU & (((IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__near_path_mods_1__DOT__exceed_lim)
                              ? (0U != (0x1ffffffffffffULL 
                                        & ((0x2000000000000ULL 
                                            >> (0x3fU 
                                                & (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__near_path_mods_1_io_in_a_exp))) 
                                           & (1ULL 
                                              + vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__near_path_mods_1__DOT___a_minus_b_T_3))))
                              : ((0U != (0x1ffffffffffffULL 
                                         & ((vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__near_path_mods_1__DOT__int_bit_mask 
                                             >> 1U) 
                                            & (1ULL 
                                               + vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__near_path_mods_1__DOT___a_minus_b_T_3)))) 
                                 | (0U != vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__near_path_mods_1__DOT___int_bit_predicted_T_1)))
                             ? (((IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__near_path_mods_1_io_in_a_exp) 
                                 - (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__near_path_mods_1__DOT__lzc_clz_io_out)) 
                                - (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__near_path_mods_1__DOT__lza_error))
                             : 0U));
            vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_near_path_out_sig 
                = ((0x7fffffeU & ((IData)((vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__near_path_mods_1__DOT__near_path_sig 
                                           >> 0x17U)) 
                                  << 1U)) | (0U != 
                                             (0x7fffffU 
                                              & (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__near_path_mods_1__DOT__near_path_sig))));
            vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_near_path_out_sign 
                = (1U & ((1U & (IData)((1ULL & ((1ULL 
                                                 + vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__near_path_mods_1__DOT___a_minus_b_T_3) 
                                                >> 0x31U))))
                          ? (IData)((vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1_io_a_r 
                                     >> 0x37U)) : (IData)(
                                                          (vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1_io_b_r 
                                                           >> 0x37U))));
        } else {
            vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_near_path_sig_is_zero 
                = (1U & ((~ (IData)((0U != vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__near_path_mods_0__DOT__lza_ab_io_f))) 
                         & (~ ((IData)(1U) + (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__near_path_mods_0__DOT___a_minus_b_T_3)))));
            vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_near_path_out_exp 
                = (0xffU & (((IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__near_path_mods_0__DOT__exceed_lim)
                              ? (0U != (0x1ffffffffffffULL 
                                        & ((0x2000000000000ULL 
                                            >> (0x3fU 
                                                & (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__near_path_mods_0_io_in_a_exp))) 
                                           & (1ULL 
                                              + vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__near_path_mods_0__DOT___a_minus_b_T_3))))
                              : ((0U != (0x1ffffffffffffULL 
                                         & ((vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__near_path_mods_0__DOT__int_bit_mask 
                                             >> 1U) 
                                            & (1ULL 
                                               + vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__near_path_mods_0__DOT___a_minus_b_T_3)))) 
                                 | (0U != vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__near_path_mods_0__DOT___int_bit_predicted_T_1)))
                             ? (((IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__near_path_mods_0_io_in_a_exp) 
                                 - (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__near_path_mods_0__DOT__lzc_clz_io_out)) 
                                - (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__near_path_mods_0__DOT__lza_error))
                             : 0U));
            vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_near_path_out_sig 
                = ((0x7fffffeU & ((IData)((vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__near_path_mods_0__DOT__near_path_sig 
                                           >> 0x17U)) 
                                  << 1U)) | (0U != 
                                             (0x7fffffU 
                                              & (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__near_path_mods_0__DOT__near_path_sig))));
            vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_near_path_out_sign 
                = (1U & ((1U & (IData)((1ULL & ((1ULL 
                                                 + vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__near_path_mods_0__DOT___a_minus_b_T_3) 
                                                >> 0x31U))))
                          ? (IData)((vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1_io_b_r 
                                     >> 0x37U)) : (IData)(
                                                          (vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1_io_a_r 
                                                           >> 0x37U))));
        }
        vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_far_path_out_exp 
            = (0xffU & ((((1U & (IData)((vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__far_path_mods_0__DOT__adder_result 
                                         >> 0x33U)))
                           ? ((IData)(1U) + (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__far_path_mods_0_io_in_a_exp))
                           : 0U) | ((1U == (3U & (IData)(
                                                         (vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__far_path_mods_0__DOT__adder_result 
                                                          >> 0x32U))))
                                     ? (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__far_path_mods_0_io_in_a_exp)
                                     : 0U)) | ((0U 
                                                == 
                                                (3U 
                                                 & (IData)(
                                                           (vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__far_path_mods_0__DOT__adder_result 
                                                            >> 0x32U))))
                                                ? ((IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__far_path_mods_0_io_in_a_exp) 
                                                   - (IData)(1U))
                                                : 0U)));
        vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_special_case_valid 
            = ((IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__special_path_hasNaN) 
               | ((IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__decode_a___05FisInf) 
                  | (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__b_isInf)));
        vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_special_case_bits_nan 
            = ((IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__special_path_hasNaN) 
               | ((IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__decode_a___05FisInf) 
                  & ((IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__b_isInf) 
                     & (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__far_path_mods_0_io_in_effSub))));
        vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_far_path_out_sig 
            = ((((1U & (IData)((vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__far_path_mods_0__DOT__adder_result 
                                >> 0x33U))) ? ((0x7fffffeU 
                                                & ((IData)(
                                                           (vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__far_path_mods_0__DOT__adder_result 
                                                            >> 0x1aU)) 
                                                   << 1U)) 
                                               | (0U 
                                                  != 
                                                  (0x3ffffffU 
                                                   & (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__far_path_mods_0__DOT__adder_result))))
                  : 0U) | (((1U == (3U & (IData)((vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__far_path_mods_0__DOT__adder_result 
                                                  >> 0x32U)))) 
                            | (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__far_path_mods_0_io_in_smallAdd))
                            ? ((0x7fffffeU & ((IData)(
                                                      (vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__far_path_mods_0__DOT__adder_result 
                                                       >> 0x19U)) 
                                              << 1U)) 
                               | (0U != (0x1ffffffU 
                                         & (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__far_path_mods_0__DOT__adder_result))))
                            : 0U)) | (((~ (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__far_path_mods_0_io_in_smallAdd)) 
                                       & (0ULL == (0xc000000000000ULL 
                                                   & vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__far_path_mods_0__DOT__adder_result)))
                                       ? ((0x7fffffeU 
                                           & ((IData)(
                                                      (vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__far_path_mods_0__DOT__adder_result 
                                                       >> 0x18U)) 
                                              << 1U)) 
                                          | (0U != 
                                             (0xffffffU 
                                              & (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__far_path_mods_0__DOT__adder_result))))
                                       : 0U));
        vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_rm 
            = vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1_io_rm_r;
        vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_sel_far_path 
            = (1U & ((~ (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__far_path_mods_0_io_in_effSub)) 
                     | ((1U < (0xffU & ((IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__need_swap)
                                         ? (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__exp_diff_b_a)
                                         : (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__exp_diff_a_b)))) 
                        | (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1_io_b_inter_flags_r_overflow))));
        vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_far_path_mul_of 
            = ((IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1_io_b_inter_flags_r_overflow) 
               | ((~ (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__far_path_mods_0_io_in_effSub)) 
                  & (0x7f800000000000ULL == (0x7f800000000000ULL 
                                             & vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1_io_b_r))));
        vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_special_case_bits_inf_sign 
            = (1U & ((IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__decode_a___05FisInf)
                      ? (IData)((vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1_io_a_r 
                                 >> 0x37U)) : (IData)(
                                                      (vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1_io_b_r 
                                                       >> 0x37U))));
        vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_far_path_out_sign 
            = (1U & ((IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1->__PVT__need_swap)
                      ? (IData)((vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1_io_b_r 
                                 >> 0x37U)) : (IData)(
                                                      (vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1_io_a_r 
                                                       >> 0x37U))));
    }
    if (vlSelf->__PVT__FMA__DOT__addPipe__DOT___s1_io_a_T_4) {
        vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1_io_rm_r 
            = vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s1_io_rm;
        vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1_io_b_inter_flags_r_overflow 
            = ((IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__isFMA) 
               & (0xffU < (IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__exp_pre_round)));
        vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1_io_b_r 
            = ((QData)((IData)((((IData)(vlSelf->__PVT__FMA__DOT__toAddArbiter_io_in_0_valid) 
                                 & (IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__toAdd_op_r_1))
                                 ? (((~ (vlSelf->__PVT__FMA__DOT__addPipe__DOT__srcB 
                                         >> 0x1fU)) 
                                     << 0x1fU) | (0x7fffffffU 
                                                  & vlSelf->__PVT__FMA__DOT__addPipe__DOT__srcB))
                                 : vlSelf->__PVT__FMA__DOT__addPipe__DOT__srcB))) 
               << 0x18U);
        vlSelf->__PVT__FMA__DOT__addPipe__DOT__s1_io_a_r 
            = ((IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__isFMA)
                ? (((QData)((IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3_io_in_r_prod_sign)) 
                    << 0x37U) | (((QData)((IData)(((IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3_io_in_r_special_case_bits_hasZero)
                                                    ? 0U
                                                    : (IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__raw_in_exp)))) 
                                  << 0x2fU) | ((IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3_io_in_r_special_case_bits_hasZero)
                                                ? 0ULL
                                                : (0x7fffffffffffULL 
                                                   & ((((QData)((IData)(
                                                                        vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__sig_shifted[2U])) 
                                                        << 0x26U) 
                                                       | (((QData)((IData)(
                                                                           vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__sig_shifted[1U])) 
                                                           << 6U) 
                                                          | ((QData)((IData)(
                                                                             vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__sig_shifted[0U])) 
                                                             >> 0x1aU))) 
                                                      | (QData)((IData)(
                                                                        (0U 
                                                                         != 
                                                                         (0x3ffffffU 
                                                                          & vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__sig_shifted[0U])))))))))
                : ((QData)((IData)(((0U == (7U & ((IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0_io_in_bits_op) 
                                                  >> 3U)))
                                     ? vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3_io_in_bits_a
                                     : 0U))) << 0x18U));
    }
    if (vlSelf->__PVT__FMA__DOT__mulPipe__DOT___s3_io_in_T_3) {
        vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3_io_in_r_early_overflow 
            = vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s2_io_in_r_early_overflow;
        vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3_io_in_r_rm 
            = vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s2_io_in_r_rm;
        vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3_io_in_r_exp_shifted 
            = vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s2_io_in_r_exp_shifted;
        vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3_io_in_r_may_be_subnormal 
            = vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s2_io_in_r_may_be_subnormal;
        vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3_io_in_r_shift_amt 
            = vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s2_io_in_r_shift_amt;
        vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3_io_in_r_prod 
            = (0xffffffffffffULL & ((QData)((IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__multiplier__DOT__io_result_r)) 
                                    * (QData)((IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__multiplier__DOT__io_result_r_1))));
        vlSelf->__PVT__FMA__DOT__mulPipe__DOT__toAdd_addAnother_r_1 
            = vlSelf->__PVT__FMA__DOT__mulPipe__DOT__toAdd_addAnother_r;
        vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3_io_in_r_special_case_valid 
            = vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s2_io_in_r_special_case_valid;
        vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3_io_in_r_special_case_bits_inf 
            = vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s2_io_in_r_special_case_bits_inf;
        vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3_io_in_r_special_case_bits_nan 
            = vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s2_io_in_r_special_case_bits_nan;
        vlSelf->__PVT__FMA__DOT__mulPipe__DOT__toAdd_op_r_1 
            = vlSelf->__PVT__FMA__DOT__mulPipe__DOT__toAdd_op_r;
        vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3_io_in_r_special_case_bits_hasZero 
            = vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s2_io_in_r_special_case_bits_hasZero;
        vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3_io_in_r_prod_sign 
            = vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s2_io_in_r_prod_sign;
    }
    if (vlSelf->__PVT__IntToFP__DOT___s2_isSingle_T_8) {
        vlSelf->__PVT__IntToFP__DOT__io_out_bits_result_r 
            = (((IData)(vlSelf->__PVT__IntToFP__DOT__r_sign) 
                << 0x1fU) | ((((IData)(vlSelf->__PVT__IntToFP__DOT__r_is_zero)
                                ? 0U : (0xffU & (((IData)(0xbeU) 
                                                  - (IData)(vlSelf->__PVT__IntToFP__DOT__r_lzc)) 
                                                 + 
                                                 ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_postnorm__DOT__rounder__DOT__r_up) 
                                                  & (0x7fffffU 
                                                     == 
                                                     (0x7fffffU 
                                                      & (IData)(
                                                                (vlSelf->__PVT__IntToFP__DOT__r_norm_int 
                                                                 >> 0x28U)))))))) 
                              << 0x17U) | (0x7fffffU 
                                           & ((IData)(
                                                      (vlSelf->__PVT__IntToFP__DOT__r_norm_int 
                                                       >> 0x28U)) 
                                              + (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_postnorm__DOT__rounder__DOT__r_up)))));
        vlSelf->__PVT__IntToFP__DOT__s2_isSingle = vlSelf->__PVT__IntToFP__DOT__s2_isSingle_r;
    }
    if (vlSelf->__PVT__IntToFP__DOT___s2_isSingle_T_4) {
        vlSelf->__PVT__IntToFP__DOT__r_1 = ((4U == 
                                             (7U & 
                                              ((IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0_io_in_bits_op) 
                                               >> 3U)))
                                             ? (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0_io_in_bits_rm)
                                             : 0U);
        vlSelf->__PVT__IntToFP__DOT__r_norm_int = (0x7fffffffffffffffULL 
                                                   & ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lzc_error)
                                                       ? 
                                                      (vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__in_shift_s1 
                                                       << 1U)
                                                       : vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__in_shift_s1));
        vlSelf->__PVT__IntToFP__DOT__r_lzc = (0x3fU 
                                              & ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lzc) 
                                                 + (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lzc_error)));
        vlSelf->__PVT__IntToFP__DOT__r_sign = vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__in_sign;
        vlSelf->__PVT__IntToFP__DOT__r_is_zero = (0ULL 
                                                  == vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__pos_lzc_clz_io_in);
        vlSelf->__PVT__IntToFP__DOT__s2_isSingle_r 
            = (1U & (~ (IData)(vlSelf->IntToFP__DOT____VdfgTmp_h0d28c158__0)));
    }
    if (vlSelf->__PVT__FPToInt__DOT___io_out_bits_fflags_T_3) {
        vlSelf->__PVT__FPToInt__DOT__io_out_bits_result_r_1 
            = (((((IData)(vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__raw_a_exp) 
                  > (0xffU & ((IData)(0x7fU) + ((2U 
                                                 & (IData)(vlSelf->__PVT__FPToInt__DOT__coreOp))
                                                 ? 0x3fU
                                                 : 0x1fU)))) 
                 | ((0x96U <= (IData)(vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__raw_a_exp)) 
                    & (((~ (IData)(vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__rpath_rounder_io_signIn)) 
                        & (IData)(vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__lpath_may_of)) 
                       | ((IData)(vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__lpath_may_of) 
                          & ((IData)(vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__rpath_rounder_io_signIn) 
                             & (0U != vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__fp_a_sig)))))) 
                | (((0x96U <= (IData)(vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__raw_a_exp)) 
                    & (IData)(vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__lpath_iv)) 
                   | ((0x96U > (IData)(vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__raw_a_exp)) 
                      & ((IData)(vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__lpath_iv) 
                         & (0U != vlSelf->__VdfgTmp_h22dfd192__0)))))
                ? ((1U & ((~ (IData)(vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__rpath_rounder_io_signIn)) 
                          | ((0xffU == (IData)(vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__fp_a_exp)) 
                             & (0U != vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__fp_a_sig))))
                    ? ((2U & (IData)(vlSelf->__PVT__FPToInt__DOT__coreOp))
                        ? (0x7fffffffffffffffULL | 
                           ((QData)((IData)((1U & (~ (IData)(vlSelf->__PVT__FPToInt__DOT__coreOp))))) 
                            << 0x3fU)) : (0x7fffffffULL 
                                          | (0x80000000ULL 
                                             & ((QData)((IData)(
                                                                (1U 
                                                                 & (~ (IData)(vlSelf->__PVT__FPToInt__DOT__coreOp))))) 
                                                << 0x1fU))))
                    : ((2U & (IData)(vlSelf->__PVT__FPToInt__DOT__coreOp))
                        ? ((QData)((IData)((1U & (IData)(vlSelf->__PVT__FPToInt__DOT__coreOp)))) 
                           << 0x3fU) : (0x80000000ULL 
                                        & ((QData)((IData)(
                                                           (1U 
                                                            & (IData)(vlSelf->__PVT__FPToInt__DOT__coreOp)))) 
                                           << 0x1fU))))
                : ((((IData)(vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__rpath_rounder_io_signIn) 
                     & (IData)(vlSelf->__PVT__FPToInt__DOT__coreOp))
                     ? (- vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__int_abs)
                     : vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__int_abs) 
                   & (0xffffffffULL | ((QData)((IData)(
                                                       ((2U 
                                                         & (IData)(vlSelf->__PVT__FPToInt__DOT__coreOp))
                                                         ? 0xffffffffU
                                                         : 0U))) 
                                       << 0x20U))));
        vlSelf->__PVT__FPToInt__DOT__io_out_bits_result_r 
            = vlSelf->__PVT__FPToInt__DOT__isSingle;
    }
    if (vlSelf->__PVT__FPToInt__DOT___isSingle_T_7) {
        if ((3U == (7U & ((IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0_io_in_bits_op) 
                          >> 3U)))) {
            vlSelf->__PVT__FPToInt__DOT__rm = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0_io_in_bits_rm;
            vlSelf->__PVT__FPToInt__DOT__coreOp = (3U 
                                                   & (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0_io_in_bits_op));
        } else {
            vlSelf->__PVT__FPToInt__DOT__rm = 0U;
            vlSelf->__PVT__FPToInt__DOT__coreOp = 0U;
        }
        vlSelf->__PVT__FPToInt__DOT__src = (QData)((IData)(
                                                           ((3U 
                                                             == 
                                                             (7U 
                                                              & ((IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0_io_in_bits_op) 
                                                                 >> 3U)))
                                                             ? vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3_io_in_bits_a
                                                             : 0U)));
        vlSelf->__PVT__FPToInt__DOT__isSingle = (1U 
                                                 & (~ (IData)(
                                                              (0x1cU 
                                                               == 
                                                               (0x3cU 
                                                                & (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0_io_in_bits_op))))));
    }
    if (((~ ((~ (IData)(vlSelf->__PVT__FPMV_io_out_ready)) 
             & (IData)(vlSelf->__PVT__FPMV__DOT__REG_1))) 
         & (IData)(vlSelf->__PVT__FPMV__DOT__REG))) {
        vlSelf->__PVT__FPMV__DOT__io_out_bits_result_r 
            = ((2U == (IData)(vlSelf->__PVT__FPMV__DOT__s1_op))
                ? (QData)((IData)(((((IData)(vlSelf->__PVT__FPMV__DOT__classifyOut_decode___05FisNaN) 
                                     & (IData)((vlSelf->__PVT__FPMV__DOT__a 
                                                >> 0x16U))) 
                                    << 9U) | ((((~ (IData)(
                                                           (vlSelf->__PVT__FPMV__DOT__a 
                                                            >> 0x16U))) 
                                                & (IData)(vlSelf->__PVT__FPMV__DOT__classifyOut_decode___05FisNaN)) 
                                               << 8U) 
                                              | ((((~ (IData)(
                                                              (vlSelf->__PVT__FPMV__DOT__a 
                                                               >> 0x1fU))) 
                                                   & (IData)(vlSelf->__PVT__FPMV__DOT__classifyOut_decode___05FisInf)) 
                                                  << 7U) 
                                                 | ((((~ (IData)(
                                                                 (vlSelf->__PVT__FPMV__DOT__a 
                                                                  >> 0x1fU))) 
                                                      & (IData)(vlSelf->__PVT__FPMV__DOT__classifyOut_isNormal)) 
                                                     << 6U) 
                                                    | ((((~ (IData)(
                                                                    (vlSelf->__PVT__FPMV__DOT__a 
                                                                     >> 0x1fU))) 
                                                         & (IData)(vlSelf->__PVT__FPMV__DOT__classifyOut_decode___05FisSubnormal)) 
                                                        << 5U) 
                                                       | ((((~ (IData)(
                                                                       (vlSelf->__PVT__FPMV__DOT__a 
                                                                        >> 0x1fU))) 
                                                            & (IData)(vlSelf->__PVT__FPMV__DOT__classifyOut_decode___05FisZero)) 
                                                           << 4U) 
                                                          | ((((IData)(vlSelf->__PVT__FPMV__DOT__classifyOut_decode___05FisZero) 
                                                               & (IData)(
                                                                         (vlSelf->__PVT__FPMV__DOT__a 
                                                                          >> 0x1fU))) 
                                                              << 3U) 
                                                             | ((((IData)(vlSelf->__PVT__FPMV__DOT__classifyOut_decode___05FisSubnormal) 
                                                                  & (IData)(
                                                                            (vlSelf->__PVT__FPMV__DOT__a 
                                                                             >> 0x1fU))) 
                                                                 << 2U) 
                                                                | ((((IData)(vlSelf->__PVT__FPMV__DOT__classifyOut_isNormal) 
                                                                     & (IData)(
                                                                               (vlSelf->__PVT__FPMV__DOT__a 
                                                                                >> 0x1fU))) 
                                                                    << 1U) 
                                                                   | ((IData)(vlSelf->__PVT__FPMV__DOT__classifyOut_decode___05FisInf) 
                                                                      & (IData)(
                                                                                (vlSelf->__PVT__FPMV__DOT__a 
                                                                                >> 0x1fU))))))))))))))
                : vlSelf->__PVT__FPMV__DOT__a);
    }
    if (((~ ((~ (IData)(vlSelf->__PVT__FCMP_io_out_ready)) 
             & (IData)(vlSelf->__PVT__FCMP__DOT__REG_1))) 
         & (IData)(vlSelf->__PVT__FCMP__DOT__REG))) {
        vlSelf->__PVT__FCMP__DOT__io_out_bits_result_r 
            = ((0x10U & (IData)(vlSelf->__PVT__FCMP__DOT__fflags))
                ? 0U : ((8U == (8U | (IData)(vlSelf->__PVT__FCMP__DOT__op)))
                         ? ((IData)(vlSelf->__PVT__FCMP__DOT__lt)
                             ? vlSelf->__PVT__FCMP__DOT__a
                             : vlSelf->__PVT__FCMP__DOT__b)
                         : ((9U == (8U | (IData)(vlSelf->__PVT__FCMP__DOT__op)))
                             ? ((IData)(vlSelf->__PVT__FCMP__DOT__lt)
                                 ? vlSelf->__PVT__FCMP__DOT__b
                                 : vlSelf->__PVT__FCMP__DOT__a)
                             : ((3U == (IData)(vlSelf->__PVT__FCMP__DOT__op))
                                 ? (IData)(vlSelf->__PVT__FCMP__DOT__lt)
                                 : ((2U == (IData)(vlSelf->__PVT__FCMP__DOT__op))
                                     ? (IData)(vlSelf->__PVT__FCMP__DOT__le)
                                     : ((5U == (IData)(vlSelf->__PVT__FCMP__DOT__op))
                                         ? (1U & (~ (IData)(vlSelf->__PVT__FCMP__DOT__eq)))
                                         : ((4U == (IData)(vlSelf->__PVT__FCMP__DOT__op))
                                             ? (IData)(vlSelf->__PVT__FCMP__DOT__eq)
                                             : 0U)))))));
    }
    vlSelf->__PVT__IntToFP__DOT__REG = __Vdly__IntToFP__DOT__REG;
    vlSelf->__PVT__IntToFP__DOT__REG_1 = __Vdly__IntToFP__DOT__REG_1;
    vlSelf->__PVT__FMA__DOT__mulPipe__DOT__REG = __Vdly__FMA__DOT__mulPipe__DOT__REG;
    vlSelf->__PVT__FMA__DOT__mulPipe__DOT__REG_1 = __Vdly__FMA__DOT__mulPipe__DOT__REG_1;
    vlSelf->__PVT__FMA__DOT__addPipe__DOT__REG = __Vdly__FMA__DOT__addPipe__DOT__REG;
    vlSelf->__PVT__FMA__DOT__addPipe__DOT__REG_1 = __Vdly__FMA__DOT__addPipe__DOT__REG_1;
    vlSelf->__PVT__FPToInt__DOT__REG = __Vdly__FPToInt__DOT__REG;
    vlSelf->__PVT__FPToInt__DOT__REG_1 = __Vdly__FPToInt__DOT__REG_1;
    if (__Vdlyvset__FMA__DOT__mulFIFO__DOT__ram_result__v0) {
        vlSelf->__PVT__FMA__DOT__mulFIFO__DOT__ram_result[0U] 
            = __Vdlyvval__FMA__DOT__mulFIFO__DOT__ram_result__v0;
    }
    if (__Vdlyvset__FMA__DOT__addFIFO__DOT__ram_result__v0) {
        vlSelf->__PVT__FMA__DOT__addFIFO__DOT__ram_result[0U] 
            = __Vdlyvval__FMA__DOT__addFIFO__DOT__ram_result__v0;
    }
    vlSelf->__PVT__FPMV__DOT__REG = __Vdly__FPMV__DOT__REG;
    vlSelf->__PVT__FPMV__DOT__REG_1 = __Vdly__FPMV__DOT__REG_1;
    vlSelf->__PVT__FCMP__DOT__REG = __Vdly__FCMP__DOT__REG;
    vlSelf->__PVT__FCMP__DOT__REG_1 = __Vdly__FCMP__DOT__REG_1;
    if (vlSelf->__PVT__FMA__DOT__mulPipe__DOT__multiplier_io_regEnables_0) {
        vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s2_io_in_r_early_overflow 
            = (0x17dU < (IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s1__DOT__exp_sum));
        vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s2_io_in_r_rm 
            = vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s1_io_rm;
        vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s2_io_in_r_exp_shifted 
            = (0x1ffU & (((IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s1__DOT__exp_sum) 
                          - (IData)(0x64U)) - (IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s1__DOT__shift_amt)));
        vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s2_io_in_r_may_be_subnormal 
            = (1U & ((IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s1__DOT__exceed_lim) 
                     | (1U & (((IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s1__DOT__exp_sum) 
                               - (IData)(0x65U)) >> 9U))));
        vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s2_io_in_r_shift_amt 
            = vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s1__DOT__shift_amt;
        vlSelf->__PVT__FMA__DOT__mulPipe__DOT__multiplier__DOT__io_result_r_1 
            = vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s1__DOT__raw_b_sig;
        vlSelf->__PVT__FMA__DOT__mulPipe__DOT__multiplier__DOT__io_result_r 
            = vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s1__DOT__raw_a_sig;
        vlSelf->__PVT__FMA__DOT__mulPipe__DOT__toAdd_addAnother_r 
            = ((0U == (7U & ((IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0_io_in_bits_op) 
                             >> 3U))) ? ((IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.pipe__DOT__fpu__DOT____VdfgTmp_hd90b9525__0)
                                          ? vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__exe_data__DOT__ram_in2_3
                                         [0U] : vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__exe_data__DOT__ram_in3_3
                                         [0U]) : 0U);
        vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s2_io_in_r_special_case_valid 
            = ((IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s1__DOT__hasZero) 
               | ((IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s1__DOT__hasNaN) 
                  | (IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s1__DOT__hasInf)));
        vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s2_io_in_r_special_case_bits_inf 
            = vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s1__DOT__hasInf;
        vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s2_io_in_r_special_case_bits_nan 
            = ((IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s1__DOT__hasNaN) 
               | ((IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s1__DOT__hasZero) 
                  & (IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s1__DOT__hasInf)));
        vlSelf->__PVT__FMA__DOT__mulPipe__DOT__toAdd_op_r 
            = vlSelf->__PVT__FMA__DOT__mulPipe_io_in_bits_op;
        vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s2_io_in_r_special_case_bits_hasZero 
            = vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s1__DOT__hasZero;
        vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s2_io_in_r_prod_sign 
            = (1U & ((IData)(((0U == (0x38U & (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0_io_in_bits_op))) 
                              & (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3_io_in_bits_a 
                                 >> 0x1fU))) ^ (vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s1_io_b 
                                                >> 0x1fU)));
    }
    VL_EXTEND_WQ(74,48, __Vtemp_hd69ef506__0, vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3_io_in_r_prod);
    VL_SHIFTL_WWI(74,74,9, __Vtemp_h2d568758__0, __Vtemp_hd69ef506__0, (IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3_io_in_r_shift_amt));
    vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__sig_shifted_raw[0U] 
        = __Vtemp_h2d568758__0[0U];
    vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__sig_shifted_raw[1U] 
        = __Vtemp_h2d568758__0[1U];
    vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__sig_shifted_raw[2U] 
        = (0x3ffU & __Vtemp_h2d568758__0[2U]);
    VL_EXTEND_WQ(585,48, __Vtemp_hd7be74e6__0, vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3_io_in_r_prod);
    VL_SHIFTL_WWI(585,585,9, __Vtemp_h2ce4aade__0, __Vtemp_hd7be74e6__0, (IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3_io_in_r_shift_amt));
    __PVT__FMA__DOT__mulPipe__DOT__s3__DOT___sig_shifted_raw_T[0U] 
        = (VVentus__ConstPool__CONST_h7b110aeb_0[0U] 
           & __Vtemp_h2ce4aade__0[0U]);
    __PVT__FMA__DOT__mulPipe__DOT__s3__DOT___sig_shifted_raw_T[1U] 
        = (VVentus__ConstPool__CONST_h7b110aeb_0[1U] 
           & __Vtemp_h2ce4aade__0[1U]);
    __PVT__FMA__DOT__mulPipe__DOT__s3__DOT___sig_shifted_raw_T[2U] 
        = (VVentus__ConstPool__CONST_h7b110aeb_0[2U] 
           & __Vtemp_h2ce4aade__0[2U]);
    __PVT__FMA__DOT__mulPipe__DOT__s3__DOT___sig_shifted_raw_T[3U] 
        = (VVentus__ConstPool__CONST_h7b110aeb_0[3U] 
           & __Vtemp_h2ce4aade__0[3U]);
    __PVT__FMA__DOT__mulPipe__DOT__s3__DOT___sig_shifted_raw_T[4U] 
        = (VVentus__ConstPool__CONST_h7b110aeb_0[4U] 
           & __Vtemp_h2ce4aade__0[4U]);
    __PVT__FMA__DOT__mulPipe__DOT__s3__DOT___sig_shifted_raw_T[5U] 
        = (VVentus__ConstPool__CONST_h7b110aeb_0[5U] 
           & __Vtemp_h2ce4aade__0[5U]);
    __PVT__FMA__DOT__mulPipe__DOT__s3__DOT___sig_shifted_raw_T[6U] 
        = (VVentus__ConstPool__CONST_h7b110aeb_0[6U] 
           & __Vtemp_h2ce4aade__0[6U]);
    __PVT__FMA__DOT__mulPipe__DOT__s3__DOT___sig_shifted_raw_T[7U] 
        = (VVentus__ConstPool__CONST_h7b110aeb_0[7U] 
           & __Vtemp_h2ce4aade__0[7U]);
    __PVT__FMA__DOT__mulPipe__DOT__s3__DOT___sig_shifted_raw_T[8U] 
        = (VVentus__ConstPool__CONST_h7b110aeb_0[8U] 
           & __Vtemp_h2ce4aade__0[8U]);
    __PVT__FMA__DOT__mulPipe__DOT__s3__DOT___sig_shifted_raw_T[9U] 
        = (VVentus__ConstPool__CONST_h7b110aeb_0[9U] 
           & __Vtemp_h2ce4aade__0[9U]);
    __PVT__FMA__DOT__mulPipe__DOT__s3__DOT___sig_shifted_raw_T[0xaU] 
        = (VVentus__ConstPool__CONST_h7b110aeb_0[0xaU] 
           & __Vtemp_h2ce4aade__0[0xaU]);
    __PVT__FMA__DOT__mulPipe__DOT__s3__DOT___sig_shifted_raw_T[0xbU] 
        = (VVentus__ConstPool__CONST_h7b110aeb_0[0xbU] 
           & __Vtemp_h2ce4aade__0[0xbU]);
    __PVT__FMA__DOT__mulPipe__DOT__s3__DOT___sig_shifted_raw_T[0xcU] 
        = (VVentus__ConstPool__CONST_h7b110aeb_0[0xcU] 
           & __Vtemp_h2ce4aade__0[0xcU]);
    __PVT__FMA__DOT__mulPipe__DOT__s3__DOT___sig_shifted_raw_T[0xdU] 
        = (VVentus__ConstPool__CONST_h7b110aeb_0[0xdU] 
           & __Vtemp_h2ce4aade__0[0xdU]);
    __PVT__FMA__DOT__mulPipe__DOT__s3__DOT___sig_shifted_raw_T[0xeU] 
        = (VVentus__ConstPool__CONST_h7b110aeb_0[0xeU] 
           & __Vtemp_h2ce4aade__0[0xeU]);
    __PVT__FMA__DOT__mulPipe__DOT__s3__DOT___sig_shifted_raw_T[0xfU] 
        = (VVentus__ConstPool__CONST_h7b110aeb_0[0xfU] 
           & __Vtemp_h2ce4aade__0[0xfU]);
    __PVT__FMA__DOT__mulPipe__DOT__s3__DOT___sig_shifted_raw_T[0x10U] 
        = (VVentus__ConstPool__CONST_h7b110aeb_0[0x10U] 
           & __Vtemp_h2ce4aade__0[0x10U]);
    __PVT__FMA__DOT__mulPipe__DOT__s3__DOT___sig_shifted_raw_T[0x11U] 
        = (VVentus__ConstPool__CONST_h7b110aeb_0[0x11U] 
           & __Vtemp_h2ce4aade__0[0x11U]);
    __PVT__FMA__DOT__mulPipe__DOT__s3__DOT___sig_shifted_raw_T[0x12U] 
        = (VVentus__ConstPool__CONST_h7b110aeb_0[0x12U] 
           & __Vtemp_h2ce4aade__0[0x12U]);
    vlSelf->__PVT__FMA__DOT__toOutArbiter_io_out_valid 
        = ((IData)(vlSelf->__PVT__FMA__DOT__addFIFO__DOT__maybe_full) 
           | (IData)(vlSelf->__PVT__FMA__DOT__mulFIFO__DOT__maybe_full));
    vlSelf->__PVT__FMA__DOT__addFIFO__DOT__do_deq = 
        ((IData)(vlSelf->__PVT__FMA__DOT__addFIFO__DOT__maybe_full) 
         & (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addFIFO_io_deq_ready));
    vlSelf->__PVT__FMA__DOT__mulFIFO_io_deq_ready = 
        ((~ (IData)(vlSelf->__PVT__FMA__DOT__addFIFO__DOT__maybe_full)) 
         & (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addFIFO_io_deq_ready));
    vlSelf->__PVT__FMA__DOT__addPipe_io_out_ready = 
        (1U & ((~ (IData)(vlSelf->__PVT__FMA__DOT__addFIFO__DOT__maybe_full)) 
               | (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addFIFO_io_deq_ready)));
    vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2__DOT__near_path_is_zero 
        = ((0U == (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_near_path_out_exp)) 
           & (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_near_path_sig_is_zero));
    if (vlSelf->__PVT__FPMV__DOT___a_T_8) {
        vlSelf->__PVT__FPMV__DOT__s1_op = vlSelf->__PVT__FPMV_io_in_bits_op;
        vlSelf->__PVT__FPMV__DOT__a = ((2U == (IData)(vlSelf->__PVT__FPMV_io_in_bits_op))
                                        ? (QData)((IData)(vlSelf->__PVT__FPMV_io_in_bits_a))
                                        : (((QData)((IData)(
                                                            ((4U 
                                                              == (IData)(vlSelf->__PVT__FPMV_io_in_bits_op))
                                                              ? 
                                                             ((IData)(
                                                                      ((0x10U 
                                                                        == 
                                                                        (0x38U 
                                                                         & (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0_io_in_bits_op))) 
                                                                       & (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3_io_in_bits_a 
                                                                          >> 0x1fU))) 
                                                              ^ (IData)(vlSelf->FPMV__DOT____VdfgTmp_h8faae4b3__0))
                                                              : 
                                                             ((5U 
                                                               == (IData)(vlSelf->__PVT__FPMV_io_in_bits_op))
                                                               ? 
                                                              (1U 
                                                               & (~ (IData)(vlSelf->FPMV__DOT____VdfgTmp_h8faae4b3__0)))
                                                               : 
                                                              ((6U 
                                                                == (IData)(vlSelf->__PVT__FPMV_io_in_bits_op))
                                                                ? 
                                                               (((2U 
                                                                  == 
                                                                  (7U 
                                                                   & ((IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0_io_in_bits_op) 
                                                                      >> 3U)))
                                                                  ? vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3_io_in_bits_b
                                                                  : 0U) 
                                                                >> 0x1fU)
                                                                : vlSelf->__PVT__FPMV_io_in_bits_a))))) 
                                            << 0x1fU) 
                                           | (QData)((IData)(
                                                             ((2U 
                                                               == 
                                                               (7U 
                                                                & ((IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0_io_in_bits_op) 
                                                                   >> 3U)))
                                                               ? 
                                                              (0x7fffffffU 
                                                               & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3_io_in_bits_a)
                                                               : 0U)))));
    }
    if (vlSelf->__PVT__FCMP__DOT___eq_T_4) {
        vlSelf->__PVT__FCMP__DOT__a = vlSelf->__PVT__FCMP__DOT__FCMPCore_io_a;
        vlSelf->__PVT__FCMP__DOT__b = vlSelf->__PVT__FCMP__DOT__FCMPCore_io_b;
        vlSelf->__PVT__FCMP__DOT__eq = ((~ (IData)(vlSelf->__PVT__FCMP__DOT__FCMPCore__DOT__hasNaN)) 
                                        & ((0U == (IData)(vlSelf->__PVT__FCMP__DOT__FCMPCore__DOT__a_minus_b)) 
                                           | (IData)(vlSelf->__PVT__FCMP__DOT__FCMPCore__DOT__bothZero)));
        vlSelf->__PVT__FCMP__DOT__lt = ((~ (IData)(vlSelf->__PVT__FCMP__DOT__FCMPCore__DOT__hasNaN)) 
                                        & ((IData)(vlSelf->__PVT__FCMP__DOT__FCMPCore__DOT__same_sign)
                                            ? ((0U 
                                                != (IData)(vlSelf->__PVT__FCMP__DOT__FCMPCore__DOT__a_minus_b)) 
                                               & (IData)(vlSelf->__PVT__FCMP__DOT__FCMPCore__DOT__uint_less))
                                            : ((~ (IData)(vlSelf->__PVT__FCMP__DOT__FCMPCore__DOT__bothZero)) 
                                               & (IData)(vlSelf->__PVT__FCMP__DOT__FCMPCore__DOT__fp_a_sign))));
        vlSelf->__PVT__FCMP__DOT__le = ((~ (IData)(vlSelf->__PVT__FCMP__DOT__FCMPCore__DOT__hasNaN)) 
                                        & ((IData)(vlSelf->__PVT__FCMP__DOT__FCMPCore__DOT__same_sign)
                                            ? ((IData)(vlSelf->__PVT__FCMP__DOT__FCMPCore__DOT__uint_less) 
                                               | (0U 
                                                  == (IData)(vlSelf->__PVT__FCMP__DOT__FCMPCore__DOT__a_minus_b)))
                                            : ((IData)(vlSelf->__PVT__FCMP__DOT__FCMPCore__DOT__fp_a_sign) 
                                               | (IData)(vlSelf->__PVT__FCMP__DOT__FCMPCore__DOT__bothZero))));
        vlSelf->__PVT__FCMP__DOT__op = ((1U == (7U 
                                                & ((IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0_io_in_bits_op) 
                                                   >> 3U)))
                                         ? (7U & (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0_io_in_bits_op))
                                         : 0U);
        vlSelf->__PVT__FCMP__DOT__fflags = ((((~ (IData)(
                                                         ((8U 
                                                           == 
                                                           (0x38U 
                                                            & (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0_io_in_bits_op))) 
                                                          & (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3_io_in_bits_a 
                                                             >> 0x16U)))) 
                                              & (IData)(vlSelf->__PVT__FCMP__DOT__FCMPCore__DOT__decode_a___05FisNaN)) 
                                             | ((~ (IData)(
                                                           ((8U 
                                                             == 
                                                             (0x38U 
                                                              & (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0_io_in_bits_op))) 
                                                            & (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3_io_in_bits_b 
                                                               >> 0x16U)))) 
                                                & (IData)(vlSelf->__PVT__FCMP__DOT__FCMPCore__DOT__decode_b___05FisNaN))) 
                                            << 4U);
    }
    vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__exp_is_subnormal 
        = ((~ (__PVT__FMA__DOT__mulPipe__DOT__s3__DOT___sig_shifted_raw_T[2U] 
               >> 9U)) & (IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3_io_in_r_may_be_subnormal));
    vlSelf->outArbiter__DOT____VdfgTmp_h245e14da__0 
        = ((IData)(vlSelf->__PVT__FMA__DOT__toOutArbiter_io_out_valid) 
           | (IData)(vlSelf->__PVT__FCMP__DOT__REG_1));
    vlSelf->__PVT__FCMP_io_out_ready = ((~ (IData)(vlSelf->__PVT__FMA__DOT__toOutArbiter_io_out_valid)) 
                                        & (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addFIFO_io_deq_ready));
    vlSelf->__PVT__FMA__DOT__mulFIFO__DOT__do_deq = 
        ((IData)(vlSelf->__PVT__FMA__DOT__mulFIFO_io_deq_ready) 
         & (IData)(vlSelf->__PVT__FMA__DOT__mulFIFO__DOT__maybe_full));
    vlSelf->__PVT__FMA__DOT__mulFIFO_io_enq_ready = 
        (1U & ((~ (IData)(vlSelf->__PVT__FMA__DOT__mulFIFO__DOT__maybe_full)) 
               | (IData)(vlSelf->__PVT__FMA__DOT__mulFIFO_io_deq_ready)));
    vlSelf->__PVT__FMA__DOT__addFIFO__DOT__ram_result_MPORT_en 
        = ((IData)(vlSelf->__PVT__FMA__DOT__addPipe_io_out_ready) 
           & (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__REG_1));
    vlSelf->__PVT__FMA__DOT__addPipe__DOT___s2_io_in_T_3 
        = ((~ ((~ (IData)(vlSelf->__PVT__FMA__DOT__addPipe_io_out_ready)) 
               & (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__REG_1))) 
           & (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__REG));
    vlSelf->__PVT__FMA__DOT__addPipe__DOT___T_2 = (
                                                   (~ (IData)(vlSelf->__PVT__FMA__DOT__addPipe_io_out_ready)) 
                                                   & ((IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__REG) 
                                                      & (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__REG_1)));
    vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2__DOT__far_path_tininess_rounder__DOT__rounder__DOT__inexact 
        = (IData)((0U != (3U & vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_far_path_out_sig)));
    vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2__DOT__far_path_rounder__DOT__inexact 
        = (IData)((0U != (7U & vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_far_path_out_sig)));
    vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2__DOT__near_path_tininess_rounder__DOT__rounder__DOT__inexact 
        = (IData)((0U != (3U & vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_near_path_out_sig)));
    vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2__DOT__near_path_rounder__DOT__inexact 
        = (IData)((0U != (7U & vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_near_path_out_sig)));
    vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2__DOT__rmin 
        = ((1U == (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_rm)) 
           | (((~ (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_far_path_out_sign)) 
               & (2U == (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_rm))) 
              | ((3U == (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_rm)) 
                 & (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_far_path_out_sign))));
    vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__no_extra_shift 
        = (1U & ((__PVT__FMA__DOT__mulPipe__DOT__s3__DOT___sig_shifted_raw_T[2U] 
                  >> 9U) | (IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__exp_is_subnormal)));
    vlSelf->outArbiter__DOT____VdfgTmp_h5724d08f__0 
        = ((IData)(vlSelf->outArbiter__DOT____VdfgTmp_h245e14da__0) 
           | (IData)(vlSelf->__PVT__FPMV__DOT__REG_1));
    vlSelf->__PVT__FPMV_io_out_ready = ((~ (IData)(vlSelf->outArbiter__DOT____VdfgTmp_h245e14da__0)) 
                                        & (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addFIFO_io_deq_ready));
    vlSelf->__PVT__IntToFP__DOT__IntToFP_postnorm__DOT__rounder__DOT__inexact 
        = (IData)((0ULL != (0xffffffffffULL & vlSelf->__PVT__IntToFP__DOT__r_norm_int)));
    if (vlSelf->__PVT__FPToInt__DOT__isSingle) {
        vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__rpath_rounder_io_signIn 
            = (1U & (IData)((vlSelf->__PVT__FPToInt__DOT__src 
                             >> 0x1fU)));
        vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__fp_a_sig 
            = (0x7fffffU & (IData)(vlSelf->__PVT__FPToInt__DOT__src));
        vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__fp_a_exp 
            = (0xffU & (IData)((vlSelf->__PVT__FPToInt__DOT__src 
                                >> 0x17U)));
    } else {
        vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__rpath_rounder_io_signIn = 0U;
        vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__fp_a_sig = 0U;
        vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__fp_a_exp = 0U;
    }
    vlSelf->__PVT__FPMV__DOT__classifyOut_decode___05FisSubnormal 
        = ((~ (IData)((0U != (0xffU & (IData)((vlSelf->__PVT__FPMV__DOT__a 
                                               >> 0x17U)))))) 
           & (0U != (0x7fffffU & (IData)(vlSelf->__PVT__FPMV__DOT__a))));
    vlSelf->__PVT__FPMV__DOT__classifyOut_decode___05FisInf 
        = (IData)(((0x7f800000ULL == (0x7f800000ULL 
                                      & vlSelf->__PVT__FPMV__DOT__a)) 
                   & (~ (IData)((0U != (0x7fffffU & (IData)(vlSelf->__PVT__FPMV__DOT__a)))))));
    vlSelf->__PVT__FPMV__DOT__classifyOut_decode___05FisZero 
        = (1U & ((~ (IData)((0U != (0xffU & (IData)(
                                                    (vlSelf->__PVT__FPMV__DOT__a 
                                                     >> 0x17U)))))) 
                 & (~ (IData)((0U != (0x7fffffU & (IData)(vlSelf->__PVT__FPMV__DOT__a)))))));
    vlSelf->__PVT__FPMV__DOT__classifyOut_decode___05FisNaN 
        = (IData)(((0x7f800000ULL == (0x7f800000ULL 
                                      & vlSelf->__PVT__FPMV__DOT__a)) 
                   & (0U != (0x7fffffU & (IData)(vlSelf->__PVT__FPMV__DOT__a)))));
    vlSelf->__PVT__FPMV__DOT__classifyOut_isNormal 
        = ((~ (IData)((0xffU == (0xffU & (IData)((vlSelf->__PVT__FPMV__DOT__a 
                                                  >> 0x17U)))))) 
           & (0U != (0xffU & (IData)((vlSelf->__PVT__FPMV__DOT__a 
                                      >> 0x17U)))));
    if ((4U == (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_rm))) {
        vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2__DOT__far_path_rounder__DOT__r_up 
            = (1U & (vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_far_path_out_sig 
                     >> 2U));
        vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2__DOT__near_path_rounder__DOT__r_up 
            = (1U & (vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_near_path_out_sig 
                     >> 2U));
    } else if ((2U == (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_rm))) {
        vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2__DOT__far_path_rounder__DOT__r_up 
            = (1U & ((IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2__DOT__far_path_rounder__DOT__inexact) 
                     & (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_far_path_out_sign)));
        vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2__DOT__near_path_rounder__DOT__r_up 
            = (1U & ((IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2__DOT__near_path_rounder__DOT__inexact) 
                     & (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_near_path_out_sign)));
    } else if ((3U == (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_rm))) {
        vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2__DOT__far_path_rounder__DOT__r_up 
            = (1U & ((~ (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_far_path_out_sign)) 
                     & (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2__DOT__far_path_rounder__DOT__inexact)));
        vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2__DOT__near_path_rounder__DOT__r_up 
            = (1U & ((~ (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_near_path_out_sign)) 
                     & (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2__DOT__near_path_rounder__DOT__inexact)));
    } else {
        vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2__DOT__far_path_rounder__DOT__r_up 
            = (1U & ((1U != (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_rm)) 
                     & ((0U == (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_rm)) 
                        & ((vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_far_path_out_sig 
                            >> 2U) & (IData)((0U != 
                                              (0xbU 
                                               & vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_far_path_out_sig)))))));
        vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2__DOT__near_path_rounder__DOT__r_up 
            = (1U & ((1U != (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_rm)) 
                     & ((0U == (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_rm)) 
                        & ((vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_near_path_out_sig 
                            >> 2U) & (IData)((0U != 
                                              (0xbU 
                                               & vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_near_path_out_sig)))))));
    }
    VL_SHIFTL_WWI(74,74,32, __Vtemp_hf13d2d1e__0, vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__sig_shifted_raw, 1U);
    if (vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__no_extra_shift) {
        __PVT__FMA__DOT__mulPipe__DOT__s3__DOT___exp_pre_round_T_2 
            = (0x1ffU & (IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3_io_in_r_exp_shifted));
        vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__sig_shifted[0U] 
            = vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__sig_shifted_raw[0U];
        vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__sig_shifted[1U] 
            = vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__sig_shifted_raw[1U];
        vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__sig_shifted[2U] 
            = (0x3ffU & vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__sig_shifted_raw[2U]);
    } else {
        __PVT__FMA__DOT__mulPipe__DOT__s3__DOT___exp_pre_round_T_2 
            = (0x1ffU & ((IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3_io_in_r_exp_shifted) 
                         - (IData)(1U)));
        vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__sig_shifted[0U] 
            = __Vtemp_hf13d2d1e__0[0U];
        vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__sig_shifted[1U] 
            = __Vtemp_hf13d2d1e__0[1U];
        vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__sig_shifted[2U] 
            = (0x3ffU & __Vtemp_hf13d2d1e__0[2U]);
    }
    vlSelf->__PVT__FPToInt_io_out_ready = ((~ (IData)(vlSelf->outArbiter__DOT____VdfgTmp_h5724d08f__0)) 
                                           & (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addFIFO_io_deq_ready));
    vlSelf->__PVT__IntToFP_io_out_ready = ((~ ((IData)(vlSelf->outArbiter__DOT____VdfgTmp_h5724d08f__0) 
                                               | (IData)(vlSelf->__PVT__FPToInt__DOT__REG_1))) 
                                           & (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addFIFO_io_deq_ready));
    vlSelf->__PVT__IntToFP__DOT__IntToFP_postnorm__DOT__rounder__DOT__r_up 
        = (1U & ((4U == (IData)(vlSelf->__PVT__IntToFP__DOT__r_1))
                  ? (IData)((vlSelf->__PVT__IntToFP__DOT__r_norm_int 
                             >> 0x27U)) : ((2U == (IData)(vlSelf->__PVT__IntToFP__DOT__r_1))
                                            ? ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_postnorm__DOT__rounder__DOT__inexact) 
                                               & (IData)(vlSelf->__PVT__IntToFP__DOT__r_sign))
                                            : ((3U 
                                                == (IData)(vlSelf->__PVT__IntToFP__DOT__r_1))
                                                ? (
                                                   (~ (IData)(vlSelf->__PVT__IntToFP__DOT__r_sign)) 
                                                   & (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_postnorm__DOT__rounder__DOT__inexact))
                                                : (
                                                   (1U 
                                                    != (IData)(vlSelf->__PVT__IntToFP__DOT__r_1)) 
                                                   & ((0U 
                                                       == (IData)(vlSelf->__PVT__IntToFP__DOT__r_1)) 
                                                      & ((IData)(
                                                                 (vlSelf->__PVT__IntToFP__DOT__r_norm_int 
                                                                  >> 0x27U)) 
                                                         & (IData)(
                                                                   (0ULL 
                                                                    != 
                                                                    (0x17fffffffffULL 
                                                                     & vlSelf->__PVT__IntToFP__DOT__r_norm_int))))))))));
    vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__lpath_iv 
        = ((~ (IData)(vlSelf->__PVT__FPToInt__DOT__coreOp)) 
           & (IData)(vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__rpath_rounder_io_signIn));
    vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__raw_a_sig 
        = (((IData)((0U != (IData)(vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__fp_a_exp))) 
            << 0x17U) | vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__fp_a_sig);
    vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__raw_a_exp 
        = ((IData)(vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__fp_a_exp) 
           | (1U & (~ (IData)((0U != (IData)(vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__fp_a_exp))))));
    vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2__DOT__far_path_rounder_io_cout 
        = ((IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2__DOT__far_path_rounder__DOT__r_up) 
           & (0x3fffff8U == (0x3fffff8U & vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_far_path_out_sig)));
    vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2__DOT__near_path_exp_rounded 
        = (0xffU & (((IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2__DOT__near_path_rounder__DOT__r_up) 
                     & (0x7fffffU == (0x7fffffU & (vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_near_path_out_sig 
                                                   >> 3U)))) 
                    + (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__s2_io_in_r_near_path_out_exp)));
    if (vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__exp_is_subnormal) {
        vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__exp_pre_round = 0U;
        vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__raw_in_exp = 0U;
    } else {
        vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__exp_pre_round 
            = __PVT__FMA__DOT__mulPipe__DOT__s3__DOT___exp_pre_round_T_2;
        vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__raw_in_exp 
            = (0xffU & (IData)(__PVT__FMA__DOT__mulPipe__DOT__s3__DOT___exp_pre_round_T_2));
    }
    vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__tininess_rounder__DOT__rounder__DOT__inexact 
        = (1U & ((vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__sig_shifted[1U] 
                  >> 0x10U) | (0U != (0xffffffffffffULL 
                                      & (((QData)((IData)(
                                                          vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__sig_shifted[1U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__sig_shifted[0U])))))));
    vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__rounder_io_stickyIn 
        = (1U & ((vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__sig_shifted[1U] 
                  >> 0x10U) | (0U != (0xffffffffffffULL 
                                      & (((QData)((IData)(
                                                          vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__sig_shifted[1U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__sig_shifted[0U])))))));
    vlSelf->__PVT__FPToInt__DOT___io_out_bits_fflags_T_3 
        = ((~ ((~ (IData)(vlSelf->__PVT__FPToInt_io_out_ready)) 
               & (IData)(vlSelf->__PVT__FPToInt__DOT__REG_1))) 
           & (IData)(vlSelf->__PVT__FPToInt__DOT__REG));
    vlSelf->__PVT__IntToFP__DOT___s2_isSingle_T_8 = 
        ((~ ((~ (IData)(vlSelf->__PVT__IntToFP_io_out_ready)) 
             & (IData)(vlSelf->__PVT__IntToFP__DOT__REG_1))) 
         & (IData)(vlSelf->__PVT__IntToFP__DOT__REG));
    vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__lpath_may_of 
        = ((IData)(vlSelf->__PVT__FPToInt__DOT__coreOp) 
           & ((IData)(vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__raw_a_exp) 
              == (0xffU & ((IData)(0x7fU) + ((2U & (IData)(vlSelf->__PVT__FPToInt__DOT__coreOp))
                                              ? 0x3fU
                                              : 0x1fU)))));
    vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__shiftRightJam__DOT___io_sticky_T 
        = ((vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__raw_a_sig 
            << 1U) & ((((IData)(1U) << (0x1fU & ((IData)(0x16U) 
                                                 - (IData)(vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__raw_a_exp)))) 
                       - (IData)(1U)) | ((0x19U < (0xffU 
                                                   & ((IData)(0x96U) 
                                                      - (IData)(vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__raw_a_exp))))
                                          ? 0x1ffffffU
                                          : 0U)));
    vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__shiftRightJam__DOT___io_out_T 
        = ((0x18U >= (0xffU & ((IData)(0x96U) - (IData)(vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__raw_a_exp))))
            ? (0x1ffffffU & ((vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__raw_a_sig 
                              << 1U) >> (0xffU & ((IData)(0x96U) 
                                                  - (IData)(vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__raw_a_exp)))))
            : 0U);
    vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__rounder__DOT__inexact 
        = (1U & ((vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__sig_shifted[1U] 
                  >> 0x11U) | (IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__rounder_io_stickyIn)));
    vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__rpath_rounder_io_in 
        = ((0x19U < (0xffU & ((IData)(0x96U) - (IData)(vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__raw_a_exp))))
            ? 0U : (0xffffffU & (vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__shiftRightJam__DOT___io_out_T 
                                 >> 1U)));
    vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__rpath_rounder_io_roundIn 
        = ((0x19U >= (0xffU & ((IData)(0x96U) - (IData)(vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__raw_a_exp)))) 
           & vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__shiftRightJam__DOT___io_out_T);
    vlSelf->__PVT__FMA__DOT__mulFIFO__DOT__ram_result_MPORT_en 
        = ((IData)(vlSelf->__PVT__FMA__DOT__mulFIFO_io_enq_ready) 
           & ((IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__REG_1) 
              & (2U == (IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__toAdd_op_r_1))));
    vlSelf->__PVT__FMA__DOT__mulPipe_io_out_ready = 
        (1U & (((~ (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT___T_2)) 
                & ((IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__toAdd_op_r_1) 
                   >> 2U)) | ((IData)(vlSelf->__PVT__FMA__DOT__mulFIFO_io_enq_ready) 
                              & (2U == (IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__toAdd_op_r_1)))));
    vlSelf->__PVT__FMA__DOT__toAddArbiter_io_in_0_valid 
        = (((IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__toAdd_op_r_1) 
            >> 2U) & (IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__REG_1));
    vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__rmin 
        = ((1U == (IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3_io_in_r_rm)) 
           | (((~ (IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3_io_in_r_prod_sign)) 
               & (2U == (IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3_io_in_r_rm))) 
              | ((3U == (IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3_io_in_r_rm)) 
                 & (IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3_io_in_r_prod_sign))));
    vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__rounder__DOT__r_up 
        = (1U & ((4U == (IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3_io_in_r_rm))
                  ? (vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__sig_shifted[1U] 
                     >> 0x11U) : ((2U == (IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3_io_in_r_rm))
                                   ? ((IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__rounder__DOT__inexact) 
                                      & (IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3_io_in_r_prod_sign))
                                   : ((3U == (IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3_io_in_r_rm))
                                       ? ((~ (IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3_io_in_r_prod_sign)) 
                                          & (IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__rounder__DOT__inexact))
                                       : ((1U != (IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3_io_in_r_rm)) 
                                          & ((0U == (IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3_io_in_r_rm)) 
                                             & ((vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__sig_shifted[1U] 
                                                 >> 0x11U) 
                                                & ((IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__rounder_io_stickyIn) 
                                                   | (vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__sig_shifted[1U] 
                                                      >> 0x12U)))))))));
    vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__rpath_rounder__DOT__inexact 
        = ((IData)(vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__rpath_rounder_io_roundIn) 
           | (0U != vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__shiftRightJam__DOT___io_sticky_T));
    vlSelf->__PVT__FMA__DOT__mulPipe__DOT___s3_io_in_T_3 
        = ((~ ((~ (IData)(vlSelf->__PVT__FMA__DOT__mulPipe_io_out_ready)) 
               & (IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__REG_1))) 
           & (IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__REG));
    vlSelf->__PVT__FMA__DOT__addPipe__DOT__isFMA = 
        ((IData)(vlSelf->__PVT__FMA__DOT__toAddArbiter_io_in_0_valid) 
         & ((IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__toAdd_op_r_1) 
            >> 2U));
    vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__rounder_io_cout 
        = ((IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__rounder__DOT__r_up) 
           & (0x7fffffU == (0x7fffffU & ((vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__sig_shifted[2U] 
                                          << 0xeU) 
                                         | (vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__sig_shifted[1U] 
                                            >> 0x12U)))));
    vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__rpath_rounder__DOT__r_up 
        = ((4U == (IData)(vlSelf->__PVT__FPToInt__DOT__rm))
            ? (IData)(vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__rpath_rounder_io_roundIn)
            : ((2U == (IData)(vlSelf->__PVT__FPToInt__DOT__rm))
                ? ((IData)(vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__rpath_rounder__DOT__inexact) 
                   & (IData)(vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__rpath_rounder_io_signIn))
                : ((3U == (IData)(vlSelf->__PVT__FPToInt__DOT__rm))
                    ? ((~ (IData)(vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__rpath_rounder_io_signIn)) 
                       & (IData)(vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__rpath_rounder__DOT__inexact))
                    : ((1U != (IData)(vlSelf->__PVT__FPToInt__DOT__rm)) 
                       & ((0U == (IData)(vlSelf->__PVT__FPToInt__DOT__rm)) 
                          & ((IData)(vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__rpath_rounder_io_roundIn) 
                             & ((0U != vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__shiftRightJam__DOT___io_sticky_T) 
                                | ((0x19U >= (0xffU 
                                              & ((IData)(0x96U) 
                                                 - (IData)(vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__raw_a_exp)))) 
                                   & (vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__shiftRightJam__DOT___io_out_T 
                                      >> 1U)))))))));
    vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__common_of 
        = (((IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__rounder_io_cout)
             ? (0xfeU == (IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__raw_in_exp))
             : (0xffU == (IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3__DOT__raw_in_exp))) 
           | (IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s3_io_in_r_early_overflow));
    vlSelf->__VdfgTmp_h22dfd192__0 = ((((IData)(vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__rpath_rounder__DOT__r_up) 
                                        & (0xffffffU 
                                           == vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__rpath_rounder_io_in)) 
                                       << 0x18U) | 
                                      (0xffffffU & 
                                       (vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__rpath_rounder_io_in 
                                        + (IData)(vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__rpath_rounder__DOT__r_up))));
    vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__int_abs 
        = ((0x96U <= (IData)(vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__raw_a_exp))
            ? ((QData)((IData)(vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__raw_a_sig)) 
               << (0x3fU & ((IData)(vlSelf->__PVT__FPToInt__DOT__F2ICore__DOT__raw_a_exp) 
                            - (IData)(0x16U)))) : (QData)((IData)(vlSelf->__VdfgTmp_h22dfd192__0)));
}
