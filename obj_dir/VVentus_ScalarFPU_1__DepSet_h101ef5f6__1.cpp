// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VVentus.h for the primary calling header

#include "verilated.h"

#include "VVentus_ScalarFPU_1.h"
#include "VVentus__Syms.h"

VL_INLINE_OPT void VVentus_ScalarFPU_1___nba_sequent__TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_2__1(VVentus_ScalarFPU_1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VVentus__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VVentus_ScalarFPU_1___nba_sequent__TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_2__1\n"); );
    // Init
    CData/*5:0*/ __PVT__FMA__DOT__mulPipe__DOT__s1__DOT__lzc_clz__DOT___io_out_T_66;
    CData/*5:0*/ __PVT__IntToFP__DOT__IntToFP_prenorm__DOT__pos_lzc_clz__DOT___io_out_T_70;
    CData/*5:0*/ __PVT__IntToFP__DOT__IntToFP_prenorm__DOT__pos_lzc_clz__DOT___io_out_T_77;
    CData/*5:0*/ __PVT__IntToFP__DOT__IntToFP_prenorm__DOT__pos_lzc_clz__DOT___io_out_T_84;
    // Body
    if ((2U == (7U & ((IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0_io_in_bits_op) 
                      >> 3U)))) {
        vlSelf->__PVT__FPMV_io_in_bits_op = (7U & (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0_io_in_bits_op));
        vlSelf->__PVT__FPMV_io_in_bits_a = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_2_io_in_bits_a;
    } else {
        vlSelf->__PVT__FPMV_io_in_bits_op = 0U;
        vlSelf->__PVT__FPMV_io_in_bits_a = 0U;
    }
    vlSelf->FPMV__DOT____VdfgTmp_h8faae4b3__0 = (IData)(
                                                        ((0x10U 
                                                          == 
                                                          (0x38U 
                                                           & (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0_io_in_bits_op))) 
                                                         & (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_2_io_in_bits_b 
                                                            >> 0x1fU)));
    vlSelf->__PVT__FCMP_io_in_valid = (IData)(((8U 
                                                == 
                                                (0x38U 
                                                 & (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0_io_in_bits_op))) 
                                               & (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0_io_in_valid)));
    vlSelf->__PVT__FPMV_io_in_valid = (IData)(((0x10U 
                                                == 
                                                (0x38U 
                                                 & (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0_io_in_bits_op))) 
                                               & (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0_io_in_valid)));
    vlSelf->__PVT__FPToInt_io_in_valid = (IData)(((0x18U 
                                                   == 
                                                   (0x38U 
                                                    & (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0_io_in_bits_op))) 
                                                  & (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0_io_in_valid)));
    vlSelf->__PVT__IntToFP_io_in_valid = (IData)(((0x20U 
                                                   == 
                                                   (0x38U 
                                                    & (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0_io_in_bits_op))) 
                                                  & (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0_io_in_valid)));
    if ((1U == (7U & ((IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0_io_in_bits_op) 
                      >> 3U)))) {
        vlSelf->__PVT__FCMP__DOT__FCMPCore_io_a = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_2_io_in_bits_a;
        vlSelf->__PVT__FCMP__DOT__FCMPCore_io_b = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_2_io_in_bits_b;
        vlSelf->__PVT__FCMP__DOT__FCMPCore__DOT__fp_a_exp 
            = (0xffU & (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_2_io_in_bits_a 
                        >> 0x17U));
        vlSelf->__PVT__FCMP__DOT__FCMPCore__DOT__fp_a_sig 
            = (0x7fffffU & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_2_io_in_bits_a);
        vlSelf->__PVT__FCMP__DOT__FCMPCore__DOT__fp_b_exp 
            = (0xffU & (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_2_io_in_bits_b 
                        >> 0x17U));
        vlSelf->__PVT__FCMP__DOT__FCMPCore__DOT__fp_b_sig 
            = (0x7fffffU & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_2_io_in_bits_b);
    } else {
        vlSelf->__PVT__FCMP__DOT__FCMPCore_io_a = 0U;
        vlSelf->__PVT__FCMP__DOT__FCMPCore_io_b = 0U;
        vlSelf->__PVT__FCMP__DOT__FCMPCore__DOT__fp_a_exp = 0U;
        vlSelf->__PVT__FCMP__DOT__FCMPCore__DOT__fp_a_sig = 0U;
        vlSelf->__PVT__FCMP__DOT__FCMPCore__DOT__fp_b_exp = 0U;
        vlSelf->__PVT__FCMP__DOT__FCMPCore__DOT__fp_b_sig = 0U;
    }
    vlSelf->__PVT__FCMP__DOT__FCMPCore__DOT__fp_a_sign 
        = (IData)(((8U == (0x38U & (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0_io_in_bits_op))) 
                   & (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_2_io_in_bits_a 
                      >> 0x1fU)));
    vlSelf->__PVT__FMA_io_in_valid = (IData)(((0U == 
                                               (0x38U 
                                                & (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0_io_in_bits_op))) 
                                              & (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0_io_in_valid)));
    if ((0U == (7U & ((IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0_io_in_bits_op) 
                      >> 3U)))) {
        vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s1__DOT__fp_a_sig 
            = (0x7fffffU & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_2_io_in_bits_a);
        vlSelf->__PVT__FMA__DOT__mulPipe_io_in_bits_b 
            = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_2_io_in_bits_b;
        vlSelf->__PVT__FMA__DOT__mulPipe_io_in_bits_op 
            = (7U & (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0_io_in_bits_op));
        vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s1__DOT__fp_a_exp 
            = (0xffU & (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_2_io_in_bits_a 
                        >> 0x17U));
        vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s1_io_rm 
            = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0_io_in_bits_rm;
    } else {
        vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s1__DOT__fp_a_sig = 0U;
        vlSelf->__PVT__FMA__DOT__mulPipe_io_in_bits_b = 0U;
        vlSelf->__PVT__FMA__DOT__mulPipe_io_in_bits_op = 0U;
        vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s1__DOT__fp_a_exp = 0U;
        vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s1_io_rm = 0U;
    }
    vlSelf->__PVT___T_58 = ((4U == (7U & ((IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0_io_in_bits_op) 
                                          >> 3U))) ? vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_2_io_in_bits_a
                             : 0U);
    vlSelf->IntToFP__DOT____VdfgTmp_h0d28c158__0 = (IData)(
                                                           (0x24U 
                                                            == 
                                                            (0x3cU 
                                                             & (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0_io_in_bits_op))));
    vlSelf->__PVT__FCMP__DOT___eq_T_4 = ((~ ((~ (IData)(vlSelf->__PVT__FCMP_io_out_ready)) 
                                             & ((IData)(vlSelf->__PVT__FCMP__DOT__REG) 
                                                & (IData)(vlSelf->__PVT__FCMP__DOT__REG_1)))) 
                                         & (IData)(vlSelf->__PVT__FCMP_io_in_valid));
    vlSelf->__PVT__FPMV__DOT___a_T_8 = ((~ ((~ (IData)(vlSelf->__PVT__FPMV_io_out_ready)) 
                                            & ((IData)(vlSelf->__PVT__FPMV__DOT__REG) 
                                               & (IData)(vlSelf->__PVT__FPMV__DOT__REG_1)))) 
                                        & (IData)(vlSelf->__PVT__FPMV_io_in_valid));
    vlSelf->__PVT__FPToInt__DOT___isSingle_T_7 = ((~ 
                                                   ((~ (IData)(vlSelf->__PVT__FPToInt_io_out_ready)) 
                                                    & ((IData)(vlSelf->__PVT__FPToInt__DOT__REG) 
                                                       & (IData)(vlSelf->__PVT__FPToInt__DOT__REG_1)))) 
                                                  & (IData)(vlSelf->__PVT__FPToInt_io_in_valid));
    vlSelf->__PVT__IntToFP__DOT___s2_isSingle_T_4 = 
        ((~ ((~ (IData)(vlSelf->__PVT__IntToFP_io_out_ready)) 
             & ((IData)(vlSelf->__PVT__IntToFP__DOT__REG) 
                & (IData)(vlSelf->__PVT__IntToFP__DOT__REG_1)))) 
         & (IData)(vlSelf->__PVT__IntToFP_io_in_valid));
    vlSelf->__PVT__FCMP__DOT__FCMPCore__DOT__a_minus_b 
        = (0x1ffffffffULL & ((QData)((IData)(vlSelf->__PVT__FCMP__DOT__FCMPCore_io_a)) 
                             - (QData)((IData)(vlSelf->__PVT__FCMP__DOT__FCMPCore_io_b))));
    vlSelf->__PVT__FCMP__DOT__FCMPCore__DOT__same_sign 
        = ((IData)(vlSelf->__PVT__FCMP__DOT__FCMPCore__DOT__fp_a_sign) 
           == (IData)(((8U == (0x38U & (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0_io_in_bits_op))) 
                       & (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_2_io_in_bits_b 
                          >> 0x1fU))));
    vlSelf->__PVT__FCMP__DOT__FCMPCore__DOT__decode_a___05FisNaN 
        = ((0xffU == (IData)(vlSelf->__PVT__FCMP__DOT__FCMPCore__DOT__fp_a_exp)) 
           & (0U != vlSelf->__PVT__FCMP__DOT__FCMPCore__DOT__fp_a_sig));
    vlSelf->__PVT__FCMP__DOT__FCMPCore__DOT__bothZero 
        = (1U & (((~ (IData)((0U != (IData)(vlSelf->__PVT__FCMP__DOT__FCMPCore__DOT__fp_a_exp)))) 
                  & (~ (IData)((0U != vlSelf->__PVT__FCMP__DOT__FCMPCore__DOT__fp_a_sig)))) 
                 & ((~ (IData)((0U != (IData)(vlSelf->__PVT__FCMP__DOT__FCMPCore__DOT__fp_b_exp)))) 
                    & (~ (IData)((0U != vlSelf->__PVT__FCMP__DOT__FCMPCore__DOT__fp_b_sig))))));
    vlSelf->__PVT__FCMP__DOT__FCMPCore__DOT__decode_b___05FisNaN 
        = ((0xffU == (IData)(vlSelf->__PVT__FCMP__DOT__FCMPCore__DOT__fp_b_exp)) 
           & (0U != vlSelf->__PVT__FCMP__DOT__FCMPCore__DOT__fp_b_sig));
    vlSelf->__PVT__FMA__DOT__addPipe_io_in_valid = 
        ((IData)(vlSelf->__PVT__FMA__DOT__toAddArbiter_io_in_0_valid) 
         | ((0U == ((0U == (7U & ((IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0_io_in_bits_op) 
                                  >> 3U))) ? (3U & 
                                              ((IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0_io_in_bits_op) 
                                               >> 1U))
                     : 0U)) & (IData)(vlSelf->__PVT__FMA_io_in_valid)));
    vlSelf->__PVT__FMA__DOT__addPipe__DOT__srcB = ((IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__isFMA)
                                                    ? vlSelf->__PVT__FMA__DOT__mulPipe__DOT__toAdd_addAnother_r_1
                                                    : vlSelf->__PVT__FMA__DOT__mulPipe_io_in_bits_b);
    vlSelf->__PVT__FMA__DOT__mulPipe_io_in_valid = 
        ((IData)(vlSelf->__PVT__FMA_io_in_valid) & 
         ((IData)((4U == (0x3cU & (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0_io_in_bits_op)))) 
          | (2U == (IData)(vlSelf->__PVT__FMA__DOT__mulPipe_io_in_bits_op))));
    vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s1_io_b 
        = (((7U == (IData)(vlSelf->__PVT__FMA__DOT__mulPipe_io_in_bits_op)) 
            | (6U == (IData)(vlSelf->__PVT__FMA__DOT__mulPipe_io_in_bits_op)))
            ? (((~ (IData)(((0U == (0x38U & (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0_io_in_bits_op))) 
                            & (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_2_io_in_bits_b 
                               >> 0x1fU)))) << 0x1fU) 
               | ((0U == (7U & ((IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0_io_in_bits_op) 
                                >> 3U))) ? (0x7fffffffU 
                                            & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_2_io_in_bits_b)
                   : 0U)) : vlSelf->__PVT__FMA__DOT__mulPipe_io_in_bits_b);
    vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s1__DOT__raw_a_sig 
        = (((IData)((0U != (IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s1__DOT__fp_a_exp))) 
            << 0x17U) | vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s1__DOT__fp_a_sig);
    __PVT__IntToFP__DOT__IntToFP_prenorm__DOT__pos_lzc_clz__DOT___io_out_T_70 
        = (((~ (IData)(vlSelf->IntToFP__DOT____VdfgTmp_h0d28c158__0)) 
            & (IData)(((0x20U == (0x38U & (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0_io_in_bits_op))) 
                       & (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_2_io_in_bits_a 
                          >> 7U)))) ? 0x38U : (((~ (IData)(vlSelf->IntToFP__DOT____VdfgTmp_h0d28c158__0)) 
                                                & (IData)(
                                                          ((0x20U 
                                                            == 
                                                            (0x38U 
                                                             & (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0_io_in_bits_op))) 
                                                           & (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_2_io_in_bits_a 
                                                              >> 6U))))
                                                ? 0x39U
                                                : (
                                                   ((~ (IData)(vlSelf->IntToFP__DOT____VdfgTmp_h0d28c158__0)) 
                                                    & (IData)(
                                                              ((0x20U 
                                                                == 
                                                                (0x38U 
                                                                 & (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0_io_in_bits_op))) 
                                                               & (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_2_io_in_bits_a 
                                                                  >> 5U))))
                                                    ? 0x3aU
                                                    : 
                                                   (((~ (IData)(vlSelf->IntToFP__DOT____VdfgTmp_h0d28c158__0)) 
                                                     & (IData)(
                                                               ((0x20U 
                                                                 == 
                                                                 (0x38U 
                                                                  & (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0_io_in_bits_op))) 
                                                                & (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_2_io_in_bits_a 
                                                                   >> 4U))))
                                                     ? 0x3bU
                                                     : 
                                                    (((~ (IData)(vlSelf->IntToFP__DOT____VdfgTmp_h0d28c158__0)) 
                                                      & (IData)(
                                                                ((0x20U 
                                                                  == 
                                                                  (0x38U 
                                                                   & (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0_io_in_bits_op))) 
                                                                 & (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_2_io_in_bits_a 
                                                                    >> 3U))))
                                                      ? 0x3cU
                                                      : 
                                                     (((~ (IData)(vlSelf->IntToFP__DOT____VdfgTmp_h0d28c158__0)) 
                                                       & (IData)(
                                                                 ((0x20U 
                                                                   == 
                                                                   (0x38U 
                                                                    & (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0_io_in_bits_op))) 
                                                                  & (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_2_io_in_bits_a 
                                                                     >> 2U))))
                                                       ? 0x3dU
                                                       : 
                                                      (((~ (IData)(vlSelf->IntToFP__DOT____VdfgTmp_h0d28c158__0)) 
                                                        & (IData)(
                                                                  ((0x20U 
                                                                    == 
                                                                    (0x38U 
                                                                     & (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0_io_in_bits_op))) 
                                                                   & (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_2_io_in_bits_a 
                                                                      >> 1U))))
                                                        ? 0x3eU
                                                        : 0x3fU)))))));
    vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__pos_lzc_clz_io_in 
        = ((IData)(vlSelf->IntToFP__DOT____VdfgTmp_h0d28c158__0)
            ? 0ULL : (QData)((IData)(vlSelf->__PVT___T_58)));
    vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm_io_in_sign 
        = ((~ (IData)(vlSelf->IntToFP__DOT____VdfgTmp_h0d28c158__0)) 
           & (IData)((0x21U == (0x39U & (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0_io_in_bits_op)))));
    vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm_io_in_long 
        = ((~ (IData)(vlSelf->IntToFP__DOT____VdfgTmp_h0d28c158__0)) 
           & (IData)((0x22U == (0x3aU & (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0_io_in_bits_op)))));
    vlSelf->IntToFP__DOT__IntToFP_prenorm__DOT____VdfgTmp_h664229ef__0 
        = ((~ (IData)(vlSelf->IntToFP__DOT____VdfgTmp_h0d28c158__0)) 
           & (IData)(((0x20U == (0x38U & (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0_io_in_bits_op))) 
                      & (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_2_io_in_bits_a 
                         >> 0x1fU))));
    vlSelf->__PVT__FCMP__DOT__FCMPCore__DOT__uint_less 
        = ((IData)(vlSelf->__PVT__FCMP__DOT__FCMPCore__DOT__fp_a_sign) 
           ^ (vlSelf->__PVT__FCMP__DOT__FCMPCore__DOT__a_minus_b 
              >> 0x20U));
    vlSelf->__PVT__FCMP__DOT__FCMPCore__DOT__hasNaN 
        = ((IData)(vlSelf->__PVT__FCMP__DOT__FCMPCore__DOT__decode_a___05FisNaN) 
           | (IData)(vlSelf->__PVT__FCMP__DOT__FCMPCore__DOT__decode_b___05FisNaN));
    vlSelf->__PVT__FMA__DOT__addPipe__DOT___s1_io_a_T_4 
        = ((~ (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT___T_2)) 
           & (IData)(vlSelf->__PVT__FMA__DOT__addPipe_io_in_valid));
    vlSelf->__PVT__FMA__DOT__mulPipe__DOT__multiplier_io_regEnables_0 
        = ((~ ((~ (IData)(vlSelf->__PVT__FMA__DOT__mulPipe_io_out_ready)) 
               & ((IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__REG) 
                  & (IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__REG_1)))) 
           & (IData)(vlSelf->__PVT__FMA__DOT__mulPipe_io_in_valid));
    vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s1__DOT__hasNaN 
        = (((0xffU == (IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s1__DOT__fp_a_exp)) 
            & (0U != vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s1__DOT__fp_a_sig)) 
           | (IData)(((0x7f800000U == (0x7f800000U 
                                       & vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s1_io_b)) 
                      & (0U != (0x7fffffU & vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s1_io_b)))));
    vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s1__DOT__hasZero 
        = (1U & (((~ (IData)((0U != (IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s1__DOT__fp_a_exp)))) 
                  & (~ (IData)((0U != vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s1__DOT__fp_a_sig)))) 
                 | ((~ (IData)((0U != (0xffU & (vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s1_io_b 
                                                >> 0x17U))))) 
                    & (~ (IData)((0U != (0x7fffffU 
                                         & vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s1_io_b)))))));
    vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s1__DOT__hasInf 
        = (((~ (IData)((0U != vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s1__DOT__fp_a_sig))) 
            & (0xffU == (IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s1__DOT__fp_a_exp))) 
           | (IData)(((0x7f800000U == (0x7f800000U 
                                       & vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s1_io_b)) 
                      & (~ (IData)((0U != (0x7fffffU 
                                           & vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s1_io_b)))))));
    vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s1__DOT__exp_sum 
        = (0x1ffU & (((IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s1__DOT__fp_a_exp) 
                      | (1U & (~ (IData)((0U != (IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s1__DOT__fp_a_exp)))))) 
                     + (0xffU & ((vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s1_io_b 
                                  >> 0x17U) | (1U & 
                                               (~ (IData)(
                                                          (0U 
                                                           != 
                                                           (0xffU 
                                                            & (vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s1_io_b 
                                                               >> 0x17U))))))))));
    vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s1__DOT__raw_b_sig 
        = (((IData)((0U != (0xffU & (vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s1_io_b 
                                     >> 0x17U)))) << 0x17U) 
           | (0x7fffffU & vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s1_io_b));
    __PVT__IntToFP__DOT__IntToFP_prenorm__DOT__pos_lzc_clz__DOT___io_out_T_77 
        = (((~ (IData)(vlSelf->IntToFP__DOT____VdfgTmp_h0d28c158__0)) 
            & (IData)(((0x20U == (0x38U & (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0_io_in_bits_op))) 
                       & (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_2_io_in_bits_a 
                          >> 0xeU)))) ? 0x31U : (((~ (IData)(vlSelf->IntToFP__DOT____VdfgTmp_h0d28c158__0)) 
                                                  & (IData)(
                                                            ((0x20U 
                                                              == 
                                                              (0x38U 
                                                               & (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0_io_in_bits_op))) 
                                                             & (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_2_io_in_bits_a 
                                                                >> 0xdU))))
                                                  ? 0x32U
                                                  : 
                                                 (((~ (IData)(vlSelf->IntToFP__DOT____VdfgTmp_h0d28c158__0)) 
                                                   & (IData)(
                                                             ((0x20U 
                                                               == 
                                                               (0x38U 
                                                                & (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0_io_in_bits_op))) 
                                                              & (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_2_io_in_bits_a 
                                                                 >> 0xcU))))
                                                   ? 0x33U
                                                   : 
                                                  (((~ (IData)(vlSelf->IntToFP__DOT____VdfgTmp_h0d28c158__0)) 
                                                    & (IData)(
                                                              ((0x20U 
                                                                == 
                                                                (0x38U 
                                                                 & (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0_io_in_bits_op))) 
                                                               & (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_2_io_in_bits_a 
                                                                  >> 0xbU))))
                                                    ? 0x34U
                                                    : 
                                                   (((~ (IData)(vlSelf->IntToFP__DOT____VdfgTmp_h0d28c158__0)) 
                                                     & (IData)(
                                                               ((0x20U 
                                                                 == 
                                                                 (0x38U 
                                                                  & (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0_io_in_bits_op))) 
                                                                & (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_2_io_in_bits_a 
                                                                   >> 0xaU))))
                                                     ? 0x35U
                                                     : 
                                                    (((~ (IData)(vlSelf->IntToFP__DOT____VdfgTmp_h0d28c158__0)) 
                                                      & (IData)(
                                                                ((0x20U 
                                                                  == 
                                                                  (0x38U 
                                                                   & (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0_io_in_bits_op))) 
                                                                 & (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_2_io_in_bits_a 
                                                                    >> 9U))))
                                                      ? 0x36U
                                                      : 
                                                     (((~ (IData)(vlSelf->IntToFP__DOT____VdfgTmp_h0d28c158__0)) 
                                                       & (IData)(
                                                                 ((0x20U 
                                                                   == 
                                                                   (0x38U 
                                                                    & (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0_io_in_bits_op))) 
                                                                  & (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_2_io_in_bits_a 
                                                                     >> 8U))))
                                                       ? 0x37U
                                                       : (IData)(__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__pos_lzc_clz__DOT___io_out_T_70))))))));
    vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__in_sign 
        = ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm_io_in_sign) 
           & ((~ (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm_io_in_long)) 
              & (IData)(vlSelf->IntToFP__DOT__IntToFP_prenorm__DOT____VdfgTmp_h664229ef__0)));
    vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__in_raw 
        = (((~ (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm_io_in_long)) 
            & (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm_io_in_sign))
            ? (((QData)((IData)(((IData)(vlSelf->IntToFP__DOT__IntToFP_prenorm__DOT____VdfgTmp_h664229ef__0)
                                  ? 0xffffffffU : 0U))) 
                << 0x20U) | (QData)((IData)(((IData)(vlSelf->IntToFP__DOT____VdfgTmp_h0d28c158__0)
                                              ? 0U : vlSelf->__PVT___T_58))))
            : vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__pos_lzc_clz_io_in);
    vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s1__DOT__subnormal_sig 
        = ((0U != (IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s1__DOT__fp_a_exp))
            ? vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s1__DOT__raw_b_sig
            : vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s1__DOT__raw_a_sig);
    __PVT__IntToFP__DOT__IntToFP_prenorm__DOT__pos_lzc_clz__DOT___io_out_T_84 
        = (((~ (IData)(vlSelf->IntToFP__DOT____VdfgTmp_h0d28c158__0)) 
            & (IData)(((0x20U == (0x38U & (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0_io_in_bits_op))) 
                       & (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_2_io_in_bits_a 
                          >> 0x15U)))) ? 0x2aU : ((
                                                   (~ (IData)(vlSelf->IntToFP__DOT____VdfgTmp_h0d28c158__0)) 
                                                   & (IData)(
                                                             ((0x20U 
                                                               == 
                                                               (0x38U 
                                                                & (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0_io_in_bits_op))) 
                                                              & (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_2_io_in_bits_a 
                                                                 >> 0x14U))))
                                                   ? 0x2bU
                                                   : 
                                                  (((~ (IData)(vlSelf->IntToFP__DOT____VdfgTmp_h0d28c158__0)) 
                                                    & (IData)(
                                                              ((0x20U 
                                                                == 
                                                                (0x38U 
                                                                 & (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0_io_in_bits_op))) 
                                                               & (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_2_io_in_bits_a 
                                                                  >> 0x13U))))
                                                    ? 0x2cU
                                                    : 
                                                   (((~ (IData)(vlSelf->IntToFP__DOT____VdfgTmp_h0d28c158__0)) 
                                                     & (IData)(
                                                               ((0x20U 
                                                                 == 
                                                                 (0x38U 
                                                                  & (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0_io_in_bits_op))) 
                                                                & (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_2_io_in_bits_a 
                                                                   >> 0x12U))))
                                                     ? 0x2dU
                                                     : 
                                                    (((~ (IData)(vlSelf->IntToFP__DOT____VdfgTmp_h0d28c158__0)) 
                                                      & (IData)(
                                                                ((0x20U 
                                                                  == 
                                                                  (0x38U 
                                                                   & (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0_io_in_bits_op))) 
                                                                 & (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_2_io_in_bits_a 
                                                                    >> 0x11U))))
                                                      ? 0x2eU
                                                      : 
                                                     (((~ (IData)(vlSelf->IntToFP__DOT____VdfgTmp_h0d28c158__0)) 
                                                       & (IData)(
                                                                 ((0x20U 
                                                                   == 
                                                                   (0x38U 
                                                                    & (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0_io_in_bits_op))) 
                                                                  & (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_2_io_in_bits_a 
                                                                     >> 0x10U))))
                                                       ? 0x2fU
                                                       : 
                                                      (((~ (IData)(vlSelf->IntToFP__DOT____VdfgTmp_h0d28c158__0)) 
                                                        & (IData)(
                                                                  ((0x20U 
                                                                    == 
                                                                    (0x38U 
                                                                     & (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0_io_in_bits_op))) 
                                                                   & (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_2_io_in_bits_a 
                                                                      >> 0xfU))))
                                                        ? 0x30U
                                                        : (IData)(__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__pos_lzc_clz__DOT___io_out_T_77))))))));
    vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_1 
        = (1U & VL_REDXOR_2((3ULL & vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__in_raw)));
    vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_2 
        = (1U & VL_REDXOR_4((6ULL & vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__in_raw)));
    vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_3 
        = (1U & VL_REDXOR_4((0xcULL & vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__in_raw)));
    vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_4 
        = (1U & VL_REDXOR_8((0x18ULL & vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__in_raw)));
    vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_5 
        = (1U & VL_REDXOR_8((0x30ULL & vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__in_raw)));
    vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_6 
        = (1U & VL_REDXOR_8((0x60ULL & vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__in_raw)));
    vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_7 
        = (1U & VL_REDXOR_8((0xc0ULL & vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__in_raw)));
    vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_8 
        = (1U & VL_REDXOR_16((0x180ULL & vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__in_raw)));
    vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_9 
        = (1U & VL_REDXOR_16((0x300ULL & vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__in_raw)));
    vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_10 
        = (1U & VL_REDXOR_16((0x600ULL & vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__in_raw)));
    vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_11 
        = (1U & VL_REDXOR_16((0xc00ULL & vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__in_raw)));
    vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_12 
        = (1U & VL_REDXOR_16((0x1800ULL & vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__in_raw)));
    vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_13 
        = (1U & VL_REDXOR_16((0x3000ULL & vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__in_raw)));
    vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_14 
        = (1U & VL_REDXOR_16((0x6000ULL & vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__in_raw)));
    vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_15 
        = (1U & VL_REDXOR_16((0xc000ULL & vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__in_raw)));
    vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_24 
        = (1U & VL_REDXOR_32((0x1800000ULL & vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__in_raw)));
    vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_25 
        = (1U & VL_REDXOR_32((0x3000000ULL & vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__in_raw)));
    vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_26 
        = (1U & VL_REDXOR_32((0x6000000ULL & vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__in_raw)));
    vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_27 
        = (1U & VL_REDXOR_32((0xc000000ULL & vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__in_raw)));
    vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_28 
        = (1U & VL_REDXOR_32((0x18000000ULL & vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__in_raw)));
    vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_29 
        = (1U & VL_REDXOR_32((0x30000000ULL & vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__in_raw)));
    vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_30 
        = (1U & VL_REDXOR_32((0x60000000ULL & vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__in_raw)));
    vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_31 
        = (1U & VL_REDXOR_32((0xc0000000ULL & vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__in_raw)));
    vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_35 
        = (1U & VL_REDXOR_64((0xc00000000ULL & vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__in_raw)));
    vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_36 
        = (1U & VL_REDXOR_64((0x1800000000ULL & vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__in_raw)));
    vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_37 
        = (1U & VL_REDXOR_64((0x3000000000ULL & vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__in_raw)));
    vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_38 
        = (1U & VL_REDXOR_64((0x6000000000ULL & vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__in_raw)));
    vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_39 
        = (1U & VL_REDXOR_64((0xc000000000ULL & vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__in_raw)));
    vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_40 
        = (1U & VL_REDXOR_64((0x18000000000ULL & vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__in_raw)));
    vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_41 
        = (1U & VL_REDXOR_64((0x30000000000ULL & vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__in_raw)));
    vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_42 
        = (1U & VL_REDXOR_64((0x60000000000ULL & vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__in_raw)));
    vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_43 
        = (1U & VL_REDXOR_64((0xc0000000000ULL & vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__in_raw)));
    vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_44 
        = (1U & VL_REDXOR_64((0x180000000000ULL & vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__in_raw)));
    vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_45 
        = (1U & VL_REDXOR_64((0x300000000000ULL & vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__in_raw)));
    vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_46 
        = (1U & VL_REDXOR_64((0x600000000000ULL & vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__in_raw)));
    vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_47 
        = (1U & VL_REDXOR_64((0xc00000000000ULL & vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__in_raw)));
    vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_56 
        = (1U & VL_REDXOR_64((0x180000000000000ULL 
                              & vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__in_raw)));
    vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_57 
        = (1U & VL_REDXOR_64((0x300000000000000ULL 
                              & vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__in_raw)));
    vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_58 
        = (1U & VL_REDXOR_64((0x600000000000000ULL 
                              & vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__in_raw)));
    vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_59 
        = (1U & VL_REDXOR_64((0xc00000000000000ULL 
                              & vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__in_raw)));
    vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_60 
        = (1U & VL_REDXOR_64((0x1800000000000000ULL 
                              & vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__in_raw)));
    vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_61 
        = (1U & VL_REDXOR_64((0x3000000000000000ULL 
                              & vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__in_raw)));
    vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_62 
        = (1U & VL_REDXOR_64((0x6000000000000000ULL 
                              & vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__in_raw)));
    vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_63 
        = (1U & VL_REDXOR_64((0xc000000000000000ULL 
                              & vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__in_raw)));
    vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_16 
        = (1U & VL_REDXOR_32((0x18000ULL & vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__in_raw)));
    vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_17 
        = (1U & VL_REDXOR_32((0x30000ULL & vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__in_raw)));
    vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_18 
        = (1U & VL_REDXOR_32((0x60000ULL & vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__in_raw)));
    vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_19 
        = (1U & VL_REDXOR_32((0xc0000ULL & vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__in_raw)));
    vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_20 
        = (1U & VL_REDXOR_32((0x180000ULL & vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__in_raw)));
    vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_21 
        = (1U & VL_REDXOR_32((0x300000ULL & vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__in_raw)));
    vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_22 
        = (1U & VL_REDXOR_32((0x600000ULL & vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__in_raw)));
    vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_23 
        = (1U & VL_REDXOR_32((0xc00000ULL & vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__in_raw)));
    vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_32 
        = (1U & VL_REDXOR_64((0x180000000ULL & vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__in_raw)));
    vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_33 
        = (1U & VL_REDXOR_64((0x300000000ULL & vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__in_raw)));
    vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_34 
        = (1U & VL_REDXOR_64((0x600000000ULL & vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__in_raw)));
    vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_48 
        = (1U & VL_REDXOR_64((0x1800000000000ULL & vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__in_raw)));
    vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_49 
        = (1U & VL_REDXOR_64((0x3000000000000ULL & vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__in_raw)));
    vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_50 
        = (1U & VL_REDXOR_64((0x6000000000000ULL & vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__in_raw)));
    vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_51 
        = (1U & VL_REDXOR_64((0xc000000000000ULL & vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__in_raw)));
    vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_52 
        = (1U & VL_REDXOR_64((0x18000000000000ULL & vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__in_raw)));
    vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_53 
        = (1U & VL_REDXOR_64((0x30000000000000ULL & vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__in_raw)));
    vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_54 
        = (1U & VL_REDXOR_64((0x60000000000000ULL & vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__in_raw)));
    vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_55 
        = (1U & VL_REDXOR_64((0xc0000000000000ULL & vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__in_raw)));
    __PVT__FMA__DOT__mulPipe__DOT__s1__DOT__lzc_clz__DOT___io_out_T_66 
        = ((0x20000U & vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s1__DOT__subnormal_sig)
            ? 0x20U : ((0x10000U & vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s1__DOT__subnormal_sig)
                        ? 0x21U : ((0x8000U & vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s1__DOT__subnormal_sig)
                                    ? 0x22U : ((0x4000U 
                                                & vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s1__DOT__subnormal_sig)
                                                ? 0x23U
                                                : (
                                                   (0x2000U 
                                                    & vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s1__DOT__subnormal_sig)
                                                    ? 0x24U
                                                    : 
                                                   ((0x1000U 
                                                     & vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s1__DOT__subnormal_sig)
                                                     ? 0x25U
                                                     : 
                                                    ((0x800U 
                                                      & vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s1__DOT__subnormal_sig)
                                                      ? 0x26U
                                                      : 
                                                     ((0x400U 
                                                       & vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s1__DOT__subnormal_sig)
                                                       ? 0x27U
                                                       : 
                                                      ((0x200U 
                                                        & vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s1__DOT__subnormal_sig)
                                                        ? 0x28U
                                                        : 
                                                       ((0x100U 
                                                         & vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s1__DOT__subnormal_sig)
                                                         ? 0x29U
                                                         : 
                                                        ((0x80U 
                                                          & vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s1__DOT__subnormal_sig)
                                                          ? 0x2aU
                                                          : 
                                                         ((0x40U 
                                                           & vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s1__DOT__subnormal_sig)
                                                           ? 0x2bU
                                                           : 
                                                          ((0x20U 
                                                            & vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s1__DOT__subnormal_sig)
                                                            ? 0x2cU
                                                            : 
                                                           ((0x10U 
                                                             & vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s1__DOT__subnormal_sig)
                                                             ? 0x2dU
                                                             : 
                                                            ((8U 
                                                              & vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s1__DOT__subnormal_sig)
                                                              ? 0x2eU
                                                              : 
                                                             ((4U 
                                                               & vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s1__DOT__subnormal_sig)
                                                               ? 0x2fU
                                                               : 
                                                              ((2U 
                                                                & vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s1__DOT__subnormal_sig)
                                                                ? 0x30U
                                                                : 0x31U)))))))))))))))));
    vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__pos_lzc_clz__DOT___io_out_T_91 
        = (((~ (IData)(vlSelf->IntToFP__DOT____VdfgTmp_h0d28c158__0)) 
            & (IData)(((0x20U == (0x38U & (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0_io_in_bits_op))) 
                       & (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_2_io_in_bits_a 
                          >> 0x1cU)))) ? 0x23U : ((
                                                   (~ (IData)(vlSelf->IntToFP__DOT____VdfgTmp_h0d28c158__0)) 
                                                   & (IData)(
                                                             ((0x20U 
                                                               == 
                                                               (0x38U 
                                                                & (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0_io_in_bits_op))) 
                                                              & (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_2_io_in_bits_a 
                                                                 >> 0x1bU))))
                                                   ? 0x24U
                                                   : 
                                                  (((~ (IData)(vlSelf->IntToFP__DOT____VdfgTmp_h0d28c158__0)) 
                                                    & (IData)(
                                                              ((0x20U 
                                                                == 
                                                                (0x38U 
                                                                 & (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0_io_in_bits_op))) 
                                                               & (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_2_io_in_bits_a 
                                                                  >> 0x1aU))))
                                                    ? 0x25U
                                                    : 
                                                   (((~ (IData)(vlSelf->IntToFP__DOT____VdfgTmp_h0d28c158__0)) 
                                                     & (IData)(
                                                               ((0x20U 
                                                                 == 
                                                                 (0x38U 
                                                                  & (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0_io_in_bits_op))) 
                                                                & (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_2_io_in_bits_a 
                                                                   >> 0x19U))))
                                                     ? 0x26U
                                                     : 
                                                    (((~ (IData)(vlSelf->IntToFP__DOT____VdfgTmp_h0d28c158__0)) 
                                                      & (IData)(
                                                                ((0x20U 
                                                                  == 
                                                                  (0x38U 
                                                                   & (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0_io_in_bits_op))) 
                                                                 & (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_2_io_in_bits_a 
                                                                    >> 0x18U))))
                                                      ? 0x27U
                                                      : 
                                                     (((~ (IData)(vlSelf->IntToFP__DOT____VdfgTmp_h0d28c158__0)) 
                                                       & (IData)(
                                                                 ((0x20U 
                                                                   == 
                                                                   (0x38U 
                                                                    & (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0_io_in_bits_op))) 
                                                                  & (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_2_io_in_bits_a 
                                                                     >> 0x17U))))
                                                       ? 0x28U
                                                       : 
                                                      (((~ (IData)(vlSelf->IntToFP__DOT____VdfgTmp_h0d28c158__0)) 
                                                        & (IData)(
                                                                  ((0x20U 
                                                                    == 
                                                                    (0x38U 
                                                                     & (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0_io_in_bits_op))) 
                                                                   & (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_2_io_in_bits_a 
                                                                      >> 0x16U))))
                                                        ? 0x29U
                                                        : (IData)(__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__pos_lzc_clz__DOT___io_out_T_84))))))));
    vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__io_f_lo_hi_lo 
        = (((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_23) 
            << 7U) | (((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_22) 
                       << 6U) | (((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_21) 
                                  << 5U) | (((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_20) 
                                             << 4U) 
                                            | (((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_19) 
                                                << 3U) 
                                               | (((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_18) 
                                                   << 2U) 
                                                  | (((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_17) 
                                                      << 1U) 
                                                     | (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_16))))))));
    vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__neg_lzc_clz__DOT___io_out_T_97 
        = ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_34)
            ? 0x1dU : ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_33)
                        ? 0x1eU : ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_32)
                                    ? 0x1fU : ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_31)
                                                ? 0x20U
                                                : ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_30)
                                                    ? 0x21U
                                                    : 
                                                   ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_29)
                                                     ? 0x22U
                                                     : 
                                                    ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_28)
                                                      ? 0x23U
                                                      : 
                                                     ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_27)
                                                       ? 0x24U
                                                       : 
                                                      ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_26)
                                                        ? 0x25U
                                                        : 
                                                       ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_25)
                                                         ? 0x26U
                                                         : 
                                                        ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_24)
                                                          ? 0x27U
                                                          : 
                                                         ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_23)
                                                           ? 0x28U
                                                           : 
                                                          ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_22)
                                                            ? 0x29U
                                                            : 
                                                           ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_21)
                                                             ? 0x2aU
                                                             : 
                                                            ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_20)
                                                              ? 0x2bU
                                                              : 
                                                             ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_19)
                                                               ? 0x2cU
                                                               : 
                                                              ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_18)
                                                                ? 0x2dU
                                                                : 
                                                               ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_17)
                                                                 ? 0x2eU
                                                                 : 
                                                                ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_16)
                                                                  ? 0x2fU
                                                                  : 
                                                                 ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_15)
                                                                   ? 0x30U
                                                                   : 
                                                                  ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_14)
                                                                    ? 0x31U
                                                                    : 
                                                                   ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_13)
                                                                     ? 0x32U
                                                                     : 
                                                                    ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_12)
                                                                      ? 0x33U
                                                                      : 
                                                                     ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_11)
                                                                       ? 0x34U
                                                                       : 
                                                                      ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_10)
                                                                        ? 0x35U
                                                                        : 
                                                                       ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_9)
                                                                         ? 0x36U
                                                                         : 
                                                                        ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_8)
                                                                          ? 0x37U
                                                                          : 
                                                                         ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_7)
                                                                           ? 0x38U
                                                                           : 
                                                                          ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_6)
                                                                            ? 0x39U
                                                                            : 
                                                                           ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_5)
                                                                             ? 0x3aU
                                                                             : 
                                                                            ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_4)
                                                                              ? 0x3bU
                                                                              : 
                                                                             ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_3)
                                                                               ? 0x3cU
                                                                               : 
                                                                              ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_2)
                                                                                ? 0x3dU
                                                                                : 
                                                                               ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_1)
                                                                                 ? 0x3eU
                                                                                 : 0x3fU))))))))))))))))))))))))))))))))));
    if (vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__in_sign) {
        vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__in_abs 
            = (1ULL + (~ vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__in_raw));
        vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lzc 
            = ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_63)
                ? 0U : ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_62)
                         ? 1U : ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_61)
                                  ? 2U : ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_60)
                                           ? 3U : ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_59)
                                                    ? 4U
                                                    : 
                                                   ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_58)
                                                     ? 5U
                                                     : 
                                                    ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_57)
                                                      ? 6U
                                                      : 
                                                     ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_56)
                                                       ? 7U
                                                       : 
                                                      ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_55)
                                                        ? 8U
                                                        : 
                                                       ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_54)
                                                         ? 9U
                                                         : 
                                                        ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_53)
                                                          ? 0xaU
                                                          : 
                                                         ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_52)
                                                           ? 0xbU
                                                           : 
                                                          ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_51)
                                                            ? 0xcU
                                                            : 
                                                           ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_50)
                                                             ? 0xdU
                                                             : 
                                                            ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_49)
                                                              ? 0xeU
                                                              : 
                                                             ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_48)
                                                               ? 0xfU
                                                               : 
                                                              ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_47)
                                                                ? 0x10U
                                                                : 
                                                               ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_46)
                                                                 ? 0x11U
                                                                 : 
                                                                ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_45)
                                                                  ? 0x12U
                                                                  : 
                                                                 ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_44)
                                                                   ? 0x13U
                                                                   : 
                                                                  ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_43)
                                                                    ? 0x14U
                                                                    : 
                                                                   ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_42)
                                                                     ? 0x15U
                                                                     : 
                                                                    ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_41)
                                                                      ? 0x16U
                                                                      : 
                                                                     ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_40)
                                                                       ? 0x17U
                                                                       : 
                                                                      ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_39)
                                                                        ? 0x18U
                                                                        : 
                                                                       ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_38)
                                                                         ? 0x19U
                                                                         : 
                                                                        ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_37)
                                                                          ? 0x1aU
                                                                          : 
                                                                         ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_36)
                                                                           ? 0x1bU
                                                                           : 
                                                                          ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_35)
                                                                            ? 0x1cU
                                                                            : (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__neg_lzc_clz__DOT___io_out_T_97))))))))))))))))))))))))))))));
    } else {
        vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__in_abs 
            = vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__in_raw;
        vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lzc 
            = ((IData)(vlSelf->IntToFP__DOT__IntToFP_prenorm__DOT____VdfgTmp_h664229ef__0)
                ? 0x20U : (((~ (IData)(vlSelf->IntToFP__DOT____VdfgTmp_h0d28c158__0)) 
                            & (IData)(((0x20U == (0x38U 
                                                  & (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0_io_in_bits_op))) 
                                       & (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_2_io_in_bits_a 
                                          >> 0x1eU))))
                            ? 0x21U : (((~ (IData)(vlSelf->IntToFP__DOT____VdfgTmp_h0d28c158__0)) 
                                        & (IData)((
                                                   (0x20U 
                                                    == 
                                                    (0x38U 
                                                     & (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0_io_in_bits_op))) 
                                                   & (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_2_io_in_bits_a 
                                                      >> 0x1dU))))
                                        ? 0x22U : (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__pos_lzc_clz__DOT___io_out_T_91))));
    }
    vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__io_f_hi_hi_lo 
        = (((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_55) 
            << 7U) | (((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_54) 
                       << 6U) | (((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_53) 
                                  << 5U) | (((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_52) 
                                             << 4U) 
                                            | (((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_51) 
                                                << 3U) 
                                               | (((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_50) 
                                                   << 2U) 
                                                  | (((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_49) 
                                                      << 1U) 
                                                     | (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_48))))))));
    vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s1__DOT__lzc_clz__DOT___io_out_T_72 
        = ((0x800000U & vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s1__DOT__subnormal_sig)
            ? 0x1aU : ((0x400000U & vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s1__DOT__subnormal_sig)
                        ? 0x1bU : ((0x200000U & vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s1__DOT__subnormal_sig)
                                    ? 0x1cU : ((0x100000U 
                                                & vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s1__DOT__subnormal_sig)
                                                ? 0x1dU
                                                : (
                                                   (0x80000U 
                                                    & vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s1__DOT__subnormal_sig)
                                                    ? 0x1eU
                                                    : 
                                                   ((0x40000U 
                                                     & vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s1__DOT__subnormal_sig)
                                                     ? 0x1fU
                                                     : (IData)(__PVT__FMA__DOT__mulPipe__DOT__s1__DOT__lzc_clz__DOT___io_out_T_66)))))));
    vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__io_f_hi 
        = (((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_63) 
            << 0x1fU) | (((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_62) 
                          << 0x1eU) | (((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_61) 
                                        << 0x1dU) | 
                                       (((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_60) 
                                         << 0x1cU) 
                                        | (((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_59) 
                                            << 0x1bU) 
                                           | (((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_58) 
                                               << 0x1aU) 
                                              | (((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_57) 
                                                  << 0x19U) 
                                                 | (((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_56) 
                                                     << 0x18U) 
                                                    | (((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__io_f_hi_hi_lo) 
                                                        << 0x10U) 
                                                       | (((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_47) 
                                                           << 0xfU) 
                                                          | (((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_46) 
                                                              << 0xeU) 
                                                             | (((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_45) 
                                                                 << 0xdU) 
                                                                | (((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_44) 
                                                                    << 0xcU) 
                                                                   | (((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_43) 
                                                                       << 0xbU) 
                                                                      | (((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_42) 
                                                                          << 0xaU) 
                                                                         | (((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_41) 
                                                                             << 9U) 
                                                                            | (((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_40) 
                                                                                << 8U) 
                                                                               | (((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_39) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_38) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_37) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_36) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_35) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_34) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_33) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_32)))))))))))))))))))))))));
    vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s1__DOT__exceed_lim 
        = ((0x1ffU & ((IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s1__DOT__exp_sum) 
                      - (IData)(0x65U))) <= (IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s1__DOT__lzc_clz__DOT___io_out_T_72));
    vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__in_shift_s1 
        = (0x7fffffffffffffffULL & (vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__in_abs 
                                    << (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lzc)));
    vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__one_mask 
        = (((QData)((IData)((((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_63) 
                              << 0x1fU) | ((((~ (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_63)) 
                                             & (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_62)) 
                                            << 0x1eU) 
                                           | ((((~ 
                                                 ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_63) 
                                                  | (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_62))) 
                                                & (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_61)) 
                                               << 0x1dU) 
                                              | ((((~ 
                                                    ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_63) 
                                                     | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_62) 
                                                        | (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_61)))) 
                                                   & (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_60)) 
                                                  << 0x1cU) 
                                                 | ((((~ 
                                                       ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_63) 
                                                        | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_62) 
                                                           | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_61) 
                                                              | (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_60))))) 
                                                      & (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_59)) 
                                                     << 0x1bU) 
                                                    | ((((~ 
                                                          ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_63) 
                                                           | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_62) 
                                                              | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_61) 
                                                                 | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_60) 
                                                                    | (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_59)))))) 
                                                         & (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_58)) 
                                                        << 0x1aU) 
                                                       | ((((~ 
                                                             ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_63) 
                                                              | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_62) 
                                                                 | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_61) 
                                                                    | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_60) 
                                                                       | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_59) 
                                                                          | (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_58))))))) 
                                                            & (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_57)) 
                                                           << 0x19U) 
                                                          | ((((~ 
                                                                ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_63) 
                                                                 | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_62) 
                                                                    | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_61) 
                                                                       | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_60) 
                                                                          | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_59) 
                                                                             | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_58) 
                                                                                | (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_57)))))))) 
                                                               & (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_56)) 
                                                              << 0x18U) 
                                                             | (((((~ 
                                                                    ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_63) 
                                                                     | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_62) 
                                                                        | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_61) 
                                                                           | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_60) 
                                                                              | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_59) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_58) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_57) 
                                                                                | (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_56))))))))) 
                                                                   & (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_55)) 
                                                                  << 0x17U) 
                                                                 | ((((~ 
                                                                       ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_63) 
                                                                        | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_62) 
                                                                           | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_61) 
                                                                              | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_60) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_59) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_58) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_57) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_56) 
                                                                                | (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_55)))))))))) 
                                                                      & (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_54)) 
                                                                     << 0x16U) 
                                                                    | ((((~ 
                                                                          ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_63) 
                                                                           | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_62) 
                                                                              | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_61) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_60) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_59) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_58) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_57) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_56) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_55) 
                                                                                | (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_54))))))))))) 
                                                                         & (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_53)) 
                                                                        << 0x15U) 
                                                                       | ((((~ 
                                                                             ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_63) 
                                                                              | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_62) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_61) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_60) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_59) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_58) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_57) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_56) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_55) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_54) 
                                                                                | (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_53)))))))))))) 
                                                                            & (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_52)) 
                                                                           << 0x14U) 
                                                                          | ((((~ 
                                                                                ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_63) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_62) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_61) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_60) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_59) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_58) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_57) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_56) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_55) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_54) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_53) 
                                                                                | (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_52))))))))))))) 
                                                                               & (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_51)) 
                                                                              << 0x13U) 
                                                                             | ((((~ 
                                                                                ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_63) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_62) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_61) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_60) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_59) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_58) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_57) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_56) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_55) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_54) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_53) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_52) 
                                                                                | (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_51)))))))))))))) 
                                                                                & (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_50)) 
                                                                                << 0x12U) 
                                                                                | ((((~ 
                                                                                ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_63) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_62) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_61) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_60) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_59) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_58) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_57) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_56) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_55) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_54) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_53) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_52) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_51) 
                                                                                | (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_50))))))))))))))) 
                                                                                & (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_49)) 
                                                                                << 0x11U) 
                                                                                | (((~ 
                                                                                ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_63) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_62) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_61) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_60) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_59) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_58) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_57) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_56) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_55) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_54) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_53) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_52) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_51) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_50) 
                                                                                | (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_49)))))))))))))))) 
                                                                                & (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_48)) 
                                                                                << 0x10U)))))))) 
                                                                | ((((~ 
                                                                      ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_63) 
                                                                       | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_62) 
                                                                          | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_61) 
                                                                             | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_60) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_59) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_58) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_57) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_56) 
                                                                                | (0U 
                                                                                != (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__io_f_hi_hi_lo))))))))))) 
                                                                     & (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_47)) 
                                                                    << 0xfU) 
                                                                   | ((((~ 
                                                                         ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_63) 
                                                                          | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_62) 
                                                                             | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_61) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_60) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_59) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_58) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_57) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_56) 
                                                                                | ((0U 
                                                                                != (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__io_f_hi_hi_lo)) 
                                                                                | (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_47))))))))))) 
                                                                        & (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_46)) 
                                                                       << 0xeU) 
                                                                      | ((((~ 
                                                                            ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_63) 
                                                                             | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_62) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_61) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_60) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_59) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_58) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_57) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_56) 
                                                                                | ((0U 
                                                                                != (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__io_f_hi_hi_lo)) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_47) 
                                                                                | (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_46)))))))))))) 
                                                                           & (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_45)) 
                                                                          << 0xdU) 
                                                                         | ((((~ 
                                                                               ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_63) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_62) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_61) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_60) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_59) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_58) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_57) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_56) 
                                                                                | ((0U 
                                                                                != (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__io_f_hi_hi_lo)) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_47) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_46) 
                                                                                | (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_45))))))))))))) 
                                                                              & (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_44)) 
                                                                             << 0xcU) 
                                                                            | ((((~ 
                                                                                ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_63) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_62) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_61) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_60) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_59) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_58) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_57) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_56) 
                                                                                | ((0U 
                                                                                != (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__io_f_hi_hi_lo)) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_47) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_46) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_45) 
                                                                                | (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_44)))))))))))))) 
                                                                                & (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_43)) 
                                                                                << 0xbU) 
                                                                               | ((((~ 
                                                                                ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_63) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_62) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_61) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_60) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_59) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_58) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_57) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_56) 
                                                                                | ((0U 
                                                                                != (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__io_f_hi_hi_lo)) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_47) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_46) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_45) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_44) 
                                                                                | (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_43))))))))))))))) 
                                                                                & (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_42)) 
                                                                                << 0xaU) 
                                                                                | ((((~ 
                                                                                ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_63) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_62) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_61) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_60) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_59) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_58) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_57) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_56) 
                                                                                | ((0U 
                                                                                != (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__io_f_hi_hi_lo)) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_47) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_46) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_45) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_44) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_43) 
                                                                                | (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_42)))))))))))))))) 
                                                                                & (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_41)) 
                                                                                << 9U) 
                                                                                | ((((~ 
                                                                                ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_63) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_62) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_61) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_60) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_59) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_58) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_57) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_56) 
                                                                                | ((0U 
                                                                                != (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__io_f_hi_hi_lo)) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_47) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_46) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_45) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_44) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_43) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_42) 
                                                                                | (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_41))))))))))))))))) 
                                                                                & (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_40)) 
                                                                                << 8U) 
                                                                                | ((((~ 
                                                                                ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_63) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_62) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_61) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_60) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_59) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_58) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_57) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_56) 
                                                                                | ((0U 
                                                                                != (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__io_f_hi_hi_lo)) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_47) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_46) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_45) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_44) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_43) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_42) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_41) 
                                                                                | (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_40)))))))))))))))))) 
                                                                                & (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_39)) 
                                                                                << 7U) 
                                                                                | ((((~ 
                                                                                ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_63) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_62) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_61) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_60) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_59) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_58) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_57) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_56) 
                                                                                | ((0U 
                                                                                != (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__io_f_hi_hi_lo)) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_47) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_46) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_45) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_44) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_43) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_42) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_41) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_40) 
                                                                                | (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_39))))))))))))))))))) 
                                                                                & (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_38)) 
                                                                                << 6U) 
                                                                                | ((((~ 
                                                                                ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_63) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_62) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_61) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_60) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_59) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_58) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_57) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_56) 
                                                                                | ((0U 
                                                                                != (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__io_f_hi_hi_lo)) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_47) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_46) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_45) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_44) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_43) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_42) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_41) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_40) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_39) 
                                                                                | (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_38)))))))))))))))))))) 
                                                                                & (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_37)) 
                                                                                << 5U) 
                                                                                | ((((~ 
                                                                                ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_63) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_62) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_61) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_60) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_59) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_58) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_57) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_56) 
                                                                                | ((0U 
                                                                                != (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__io_f_hi_hi_lo)) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_47) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_46) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_45) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_44) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_43) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_42) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_41) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_40) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_39) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_38) 
                                                                                | (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_37))))))))))))))))))))) 
                                                                                & (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_36)) 
                                                                                << 4U) 
                                                                                | ((((~ 
                                                                                ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_63) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_62) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_61) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_60) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_59) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_58) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_57) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_56) 
                                                                                | ((0U 
                                                                                != (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__io_f_hi_hi_lo)) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_47) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_46) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_45) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_44) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_43) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_42) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_41) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_40) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_39) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_38) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_37) 
                                                                                | (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_36)))))))))))))))))))))) 
                                                                                & (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_35)) 
                                                                                << 3U) 
                                                                                | ((((~ 
                                                                                ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_63) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_62) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_61) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_60) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_59) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_58) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_57) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_56) 
                                                                                | ((0U 
                                                                                != (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__io_f_hi_hi_lo)) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_47) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_46) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_45) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_44) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_43) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_42) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_41) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_40) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_39) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_38) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_37) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_36) 
                                                                                | (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_35))))))))))))))))))))))) 
                                                                                & (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_34)) 
                                                                                << 2U) 
                                                                                | ((((~ 
                                                                                ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_63) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_62) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_61) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_60) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_59) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_58) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_57) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_56) 
                                                                                | ((0U 
                                                                                != (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__io_f_hi_hi_lo)) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_47) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_46) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_45) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_44) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_43) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_42) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_41) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_40) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_39) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_38) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_37) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_36) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_35) 
                                                                                | (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_34)))))))))))))))))))))))) 
                                                                                & (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_33)) 
                                                                                << 1U) 
                                                                                | ((~ 
                                                                                ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_63) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_62) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_61) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_60) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_59) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_58) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_57) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_56) 
                                                                                | ((0U 
                                                                                != (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__io_f_hi_hi_lo)) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_47) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_46) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_45) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_44) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_43) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_42) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_41) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_40) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_39) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_38) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_37) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_36) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_35) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_34) 
                                                                                | (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_33))))))))))))))))))))))))) 
                                                                                & (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_32)))))))))))))))))))))))))))) 
            << 0x20U) | (QData)((IData)(((((~ (IData)(
                                                      (0U 
                                                       != vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__io_f_hi))) 
                                           & (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_31)) 
                                          << 0x1fU) 
                                         | ((((~ ((0U 
                                                   != vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__io_f_hi) 
                                                  | (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_31))) 
                                              & (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_30)) 
                                             << 0x1eU) 
                                            | ((((~ 
                                                  ((0U 
                                                    != vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__io_f_hi) 
                                                   | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_31) 
                                                      | (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_30)))) 
                                                 & (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_29)) 
                                                << 0x1dU) 
                                               | ((((~ 
                                                     ((0U 
                                                       != vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__io_f_hi) 
                                                      | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_31) 
                                                         | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_30) 
                                                            | (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_29))))) 
                                                    & (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_28)) 
                                                   << 0x1cU) 
                                                  | ((((~ 
                                                        ((0U 
                                                          != vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__io_f_hi) 
                                                         | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_31) 
                                                            | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_30) 
                                                               | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_29) 
                                                                  | (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_28)))))) 
                                                       & (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_27)) 
                                                      << 0x1bU) 
                                                     | ((((~ 
                                                           ((0U 
                                                             != vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__io_f_hi) 
                                                            | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_31) 
                                                               | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_30) 
                                                                  | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_29) 
                                                                     | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_28) 
                                                                        | (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_27))))))) 
                                                          & (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_26)) 
                                                         << 0x1aU) 
                                                        | ((((~ 
                                                              ((0U 
                                                                != vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__io_f_hi) 
                                                               | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_31) 
                                                                  | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_30) 
                                                                     | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_29) 
                                                                        | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_28) 
                                                                           | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_27) 
                                                                              | (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_26)))))))) 
                                                             & (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_25)) 
                                                            << 0x19U) 
                                                           | ((((~ 
                                                                 ((0U 
                                                                   != vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__io_f_hi) 
                                                                  | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_31) 
                                                                     | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_30) 
                                                                        | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_29) 
                                                                           | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_28) 
                                                                              | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_27) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_26) 
                                                                                | (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_25))))))))) 
                                                                & (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_24)) 
                                                               << 0x18U) 
                                                              | (((((~ 
                                                                     ((0U 
                                                                       != vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__io_f_hi) 
                                                                      | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_31) 
                                                                         | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_30) 
                                                                            | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_29) 
                                                                               | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_28) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_27) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_26) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_25) 
                                                                                | (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_24)))))))))) 
                                                                    & (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_23)) 
                                                                   << 0x17U) 
                                                                  | ((((~ 
                                                                        ((0U 
                                                                          != vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__io_f_hi) 
                                                                         | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_31) 
                                                                            | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_30) 
                                                                               | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_29) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_28) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_27) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_26) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_25) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_24) 
                                                                                | (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_23))))))))))) 
                                                                       & (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_22)) 
                                                                      << 0x16U) 
                                                                     | ((((~ 
                                                                           ((0U 
                                                                             != vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__io_f_hi) 
                                                                            | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_31) 
                                                                               | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_30) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_29) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_28) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_27) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_26) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_25) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_24) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_23) 
                                                                                | (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_22)))))))))))) 
                                                                          & (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_21)) 
                                                                         << 0x15U) 
                                                                        | ((((~ 
                                                                              ((0U 
                                                                                != vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__io_f_hi) 
                                                                               | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_31) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_30) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_29) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_28) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_27) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_26) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_25) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_24) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_23) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_22) 
                                                                                | (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_21))))))))))))) 
                                                                             & (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_20)) 
                                                                            << 0x14U) 
                                                                           | ((((~ 
                                                                                ((0U 
                                                                                != vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__io_f_hi) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_31) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_30) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_29) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_28) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_27) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_26) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_25) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_24) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_23) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_22) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_21) 
                                                                                | (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_20)))))))))))))) 
                                                                                & (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_19)) 
                                                                               << 0x13U) 
                                                                              | ((((~ 
                                                                                ((0U 
                                                                                != vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__io_f_hi) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_31) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_30) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_29) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_28) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_27) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_26) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_25) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_24) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_23) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_22) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_21) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_20) 
                                                                                | (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_19))))))))))))))) 
                                                                                & (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_18)) 
                                                                                << 0x12U) 
                                                                                | ((((~ 
                                                                                ((0U 
                                                                                != vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__io_f_hi) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_31) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_30) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_29) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_28) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_27) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_26) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_25) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_24) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_23) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_22) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_21) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_20) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_19) 
                                                                                | (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_18)))))))))))))))) 
                                                                                & (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_17)) 
                                                                                << 0x11U) 
                                                                                | (((~ 
                                                                                ((0U 
                                                                                != vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__io_f_hi) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_31) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_30) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_29) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_28) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_27) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_26) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_25) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_24) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_23) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_22) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_21) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_20) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_19) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_18) 
                                                                                | (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_17))))))))))))))))) 
                                                                                & (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_16)) 
                                                                                << 0x10U)))))))) 
                                                                 | ((((~ 
                                                                       ((0U 
                                                                         != vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__io_f_hi) 
                                                                        | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_31) 
                                                                           | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_30) 
                                                                              | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_29) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_28) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_27) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_26) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_25) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_24) 
                                                                                | (0U 
                                                                                != (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__io_f_lo_hi_lo)))))))))))) 
                                                                      & (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_15)) 
                                                                     << 0xfU) 
                                                                    | ((((~ 
                                                                          ((0U 
                                                                            != vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__io_f_hi) 
                                                                           | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_31) 
                                                                              | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_30) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_29) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_28) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_27) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_26) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_25) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_24) 
                                                                                | ((0U 
                                                                                != (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__io_f_lo_hi_lo)) 
                                                                                | (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_15)))))))))))) 
                                                                         & (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_14)) 
                                                                        << 0xeU) 
                                                                       | ((((~ 
                                                                             ((0U 
                                                                               != vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__io_f_hi) 
                                                                              | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_31) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_30) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_29) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_28) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_27) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_26) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_25) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_24) 
                                                                                | ((0U 
                                                                                != (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__io_f_lo_hi_lo)) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_15) 
                                                                                | (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_14))))))))))))) 
                                                                            & (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_13)) 
                                                                           << 0xdU) 
                                                                          | ((((~ 
                                                                                ((0U 
                                                                                != vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__io_f_hi) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_31) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_30) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_29) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_28) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_27) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_26) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_25) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_24) 
                                                                                | ((0U 
                                                                                != (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__io_f_lo_hi_lo)) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_15) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_14) 
                                                                                | (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_13)))))))))))))) 
                                                                               & (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_12)) 
                                                                              << 0xcU) 
                                                                             | ((((~ 
                                                                                ((0U 
                                                                                != vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__io_f_hi) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_31) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_30) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_29) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_28) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_27) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_26) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_25) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_24) 
                                                                                | ((0U 
                                                                                != (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__io_f_lo_hi_lo)) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_15) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_14) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_13) 
                                                                                | (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_12))))))))))))))) 
                                                                                & (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_11)) 
                                                                                << 0xbU) 
                                                                                | ((((~ 
                                                                                ((0U 
                                                                                != vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__io_f_hi) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_31) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_30) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_29) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_28) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_27) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_26) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_25) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_24) 
                                                                                | ((0U 
                                                                                != (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__io_f_lo_hi_lo)) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_15) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_14) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_13) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_12) 
                                                                                | (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_11)))))))))))))))) 
                                                                                & (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_10)) 
                                                                                << 0xaU) 
                                                                                | ((((~ 
                                                                                ((0U 
                                                                                != vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__io_f_hi) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_31) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_30) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_29) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_28) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_27) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_26) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_25) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_24) 
                                                                                | ((0U 
                                                                                != (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__io_f_lo_hi_lo)) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_15) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_14) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_13) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_12) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_11) 
                                                                                | (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_10))))))))))))))))) 
                                                                                & (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_9)) 
                                                                                << 9U) 
                                                                                | ((((~ 
                                                                                ((0U 
                                                                                != vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__io_f_hi) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_31) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_30) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_29) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_28) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_27) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_26) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_25) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_24) 
                                                                                | ((0U 
                                                                                != (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__io_f_lo_hi_lo)) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_15) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_14) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_13) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_12) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_11) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_10) 
                                                                                | (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_9)))))))))))))))))) 
                                                                                & (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_8)) 
                                                                                << 8U) 
                                                                                | ((((~ 
                                                                                ((0U 
                                                                                != vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__io_f_hi) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_31) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_30) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_29) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_28) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_27) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_26) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_25) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_24) 
                                                                                | ((0U 
                                                                                != (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__io_f_lo_hi_lo)) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_15) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_14) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_13) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_12) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_11) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_10) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_9) 
                                                                                | (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_8))))))))))))))))))) 
                                                                                & (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_7)) 
                                                                                << 7U) 
                                                                                | ((((~ 
                                                                                ((0U 
                                                                                != vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__io_f_hi) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_31) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_30) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_29) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_28) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_27) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_26) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_25) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_24) 
                                                                                | ((0U 
                                                                                != (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__io_f_lo_hi_lo)) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_15) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_14) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_13) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_12) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_11) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_10) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_9) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_8) 
                                                                                | (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_7)))))))))))))))))))) 
                                                                                & (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_6)) 
                                                                                << 6U) 
                                                                                | ((((~ 
                                                                                ((0U 
                                                                                != vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__io_f_hi) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_31) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_30) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_29) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_28) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_27) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_26) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_25) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_24) 
                                                                                | ((0U 
                                                                                != (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__io_f_lo_hi_lo)) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_15) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_14) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_13) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_12) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_11) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_10) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_9) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_8) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_7) 
                                                                                | (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_6))))))))))))))))))))) 
                                                                                & (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_5)) 
                                                                                << 5U) 
                                                                                | ((((~ 
                                                                                ((0U 
                                                                                != vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__io_f_hi) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_31) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_30) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_29) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_28) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_27) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_26) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_25) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_24) 
                                                                                | ((0U 
                                                                                != (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__io_f_lo_hi_lo)) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_15) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_14) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_13) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_12) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_11) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_10) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_9) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_8) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_7) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_6) 
                                                                                | (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_5)))))))))))))))))))))) 
                                                                                & (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_4)) 
                                                                                << 4U) 
                                                                                | ((((~ 
                                                                                ((0U 
                                                                                != vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__io_f_hi) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_31) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_30) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_29) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_28) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_27) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_26) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_25) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_24) 
                                                                                | ((0U 
                                                                                != (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__io_f_lo_hi_lo)) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_15) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_14) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_13) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_12) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_11) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_10) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_9) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_8) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_7) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_6) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_5) 
                                                                                | (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_4))))))))))))))))))))))) 
                                                                                & (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_3)) 
                                                                                << 3U) 
                                                                                | ((((~ 
                                                                                ((0U 
                                                                                != vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__io_f_hi) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_31) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_30) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_29) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_28) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_27) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_26) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_25) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_24) 
                                                                                | ((0U 
                                                                                != (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__io_f_lo_hi_lo)) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_15) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_14) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_13) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_12) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_11) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_10) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_9) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_8) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_7) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_6) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_5) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_4) 
                                                                                | (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_3)))))))))))))))))))))))) 
                                                                                & (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_2)) 
                                                                                << 2U) 
                                                                                | ((((~ 
                                                                                ((0U 
                                                                                != vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__io_f_hi) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_31) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_30) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_29) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_28) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_27) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_26) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_25) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_24) 
                                                                                | ((0U 
                                                                                != (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__io_f_lo_hi_lo)) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_15) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_14) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_13) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_12) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_11) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_10) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_9) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_8) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_7) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_6) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_5) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_4) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_3) 
                                                                                | (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_2))))))))))))))))))))))))) 
                                                                                & (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_1)) 
                                                                                << 1U) 
                                                                                | (1U 
                                                                                & (~ 
                                                                                ((0U 
                                                                                != vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__io_f_hi) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_31) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_30) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_29) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_28) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_27) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_26) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_25) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_24) 
                                                                                | ((0U 
                                                                                != (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__io_f_lo_hi_lo)) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_15) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_14) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_13) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_12) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_11) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_10) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_9) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_8) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_7) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_6) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_5) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_4) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_3) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_2) 
                                                                                | (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_1))))))))))))))))))))))))))))))))))))))))))))))))))))));
    vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s1__DOT__shift_amt 
        = ((0x200U & ((IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s1__DOT__exp_sum) 
                      - (IData)(0x65U))) ? 0U : (0x1ffU 
                                                 & ((IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s1__DOT__exceed_lim)
                                                     ? 
                                                    ((IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s1__DOT__exp_sum) 
                                                     - (IData)(0x65U))
                                                     : (IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s1__DOT__lzc_clz__DOT___io_out_T_72))));
    vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lzc_error 
        = ((~ (IData)((0U != (vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__in_abs 
                              & vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__one_mask)))) 
           & (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__in_sign));
}

VL_INLINE_OPT void VVentus_ScalarFPU_1___nba_sequent__TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3__1(VVentus_ScalarFPU_1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VVentus__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VVentus_ScalarFPU_1___nba_sequent__TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3__1\n"); );
    // Init
    CData/*5:0*/ __PVT__FMA__DOT__mulPipe__DOT__s1__DOT__lzc_clz__DOT___io_out_T_66;
    CData/*5:0*/ __PVT__IntToFP__DOT__IntToFP_prenorm__DOT__pos_lzc_clz__DOT___io_out_T_70;
    CData/*5:0*/ __PVT__IntToFP__DOT__IntToFP_prenorm__DOT__pos_lzc_clz__DOT___io_out_T_77;
    CData/*5:0*/ __PVT__IntToFP__DOT__IntToFP_prenorm__DOT__pos_lzc_clz__DOT___io_out_T_84;
    // Body
    if ((2U == (7U & ((IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0_io_in_bits_op) 
                      >> 3U)))) {
        vlSelf->__PVT__FPMV_io_in_bits_op = (7U & (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0_io_in_bits_op));
        vlSelf->__PVT__FPMV_io_in_bits_a = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3_io_in_bits_a;
    } else {
        vlSelf->__PVT__FPMV_io_in_bits_op = 0U;
        vlSelf->__PVT__FPMV_io_in_bits_a = 0U;
    }
    vlSelf->FPMV__DOT____VdfgTmp_h8faae4b3__0 = (IData)(
                                                        ((0x10U 
                                                          == 
                                                          (0x38U 
                                                           & (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0_io_in_bits_op))) 
                                                         & (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3_io_in_bits_b 
                                                            >> 0x1fU)));
    vlSelf->__PVT__FCMP_io_in_valid = (IData)(((8U 
                                                == 
                                                (0x38U 
                                                 & (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0_io_in_bits_op))) 
                                               & (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0_io_in_valid)));
    vlSelf->__PVT__FPMV_io_in_valid = (IData)(((0x10U 
                                                == 
                                                (0x38U 
                                                 & (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0_io_in_bits_op))) 
                                               & (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0_io_in_valid)));
    vlSelf->__PVT__FPToInt_io_in_valid = (IData)(((0x18U 
                                                   == 
                                                   (0x38U 
                                                    & (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0_io_in_bits_op))) 
                                                  & (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0_io_in_valid)));
    vlSelf->__PVT__IntToFP_io_in_valid = (IData)(((0x20U 
                                                   == 
                                                   (0x38U 
                                                    & (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0_io_in_bits_op))) 
                                                  & (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0_io_in_valid)));
    if ((1U == (7U & ((IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0_io_in_bits_op) 
                      >> 3U)))) {
        vlSelf->__PVT__FCMP__DOT__FCMPCore_io_a = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3_io_in_bits_a;
        vlSelf->__PVT__FCMP__DOT__FCMPCore_io_b = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3_io_in_bits_b;
        vlSelf->__PVT__FCMP__DOT__FCMPCore__DOT__fp_a_exp 
            = (0xffU & (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3_io_in_bits_a 
                        >> 0x17U));
        vlSelf->__PVT__FCMP__DOT__FCMPCore__DOT__fp_a_sig 
            = (0x7fffffU & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3_io_in_bits_a);
        vlSelf->__PVT__FCMP__DOT__FCMPCore__DOT__fp_b_exp 
            = (0xffU & (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3_io_in_bits_b 
                        >> 0x17U));
        vlSelf->__PVT__FCMP__DOT__FCMPCore__DOT__fp_b_sig 
            = (0x7fffffU & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3_io_in_bits_b);
    } else {
        vlSelf->__PVT__FCMP__DOT__FCMPCore_io_a = 0U;
        vlSelf->__PVT__FCMP__DOT__FCMPCore_io_b = 0U;
        vlSelf->__PVT__FCMP__DOT__FCMPCore__DOT__fp_a_exp = 0U;
        vlSelf->__PVT__FCMP__DOT__FCMPCore__DOT__fp_a_sig = 0U;
        vlSelf->__PVT__FCMP__DOT__FCMPCore__DOT__fp_b_exp = 0U;
        vlSelf->__PVT__FCMP__DOT__FCMPCore__DOT__fp_b_sig = 0U;
    }
    vlSelf->__PVT__FCMP__DOT__FCMPCore__DOT__fp_a_sign 
        = (IData)(((8U == (0x38U & (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0_io_in_bits_op))) 
                   & (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3_io_in_bits_a 
                      >> 0x1fU)));
    vlSelf->__PVT__FMA_io_in_valid = (IData)(((0U == 
                                               (0x38U 
                                                & (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0_io_in_bits_op))) 
                                              & (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0_io_in_valid)));
    if ((0U == (7U & ((IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0_io_in_bits_op) 
                      >> 3U)))) {
        vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s1__DOT__fp_a_sig 
            = (0x7fffffU & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3_io_in_bits_a);
        vlSelf->__PVT__FMA__DOT__mulPipe_io_in_bits_b 
            = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3_io_in_bits_b;
        vlSelf->__PVT__FMA__DOT__mulPipe_io_in_bits_op 
            = (7U & (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0_io_in_bits_op));
        vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s1__DOT__fp_a_exp 
            = (0xffU & (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3_io_in_bits_a 
                        >> 0x17U));
        vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s1_io_rm 
            = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0_io_in_bits_rm;
    } else {
        vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s1__DOT__fp_a_sig = 0U;
        vlSelf->__PVT__FMA__DOT__mulPipe_io_in_bits_b = 0U;
        vlSelf->__PVT__FMA__DOT__mulPipe_io_in_bits_op = 0U;
        vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s1__DOT__fp_a_exp = 0U;
        vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s1_io_rm = 0U;
    }
    vlSelf->__PVT___T_58 = ((4U == (7U & ((IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0_io_in_bits_op) 
                                          >> 3U))) ? vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3_io_in_bits_a
                             : 0U);
    vlSelf->IntToFP__DOT____VdfgTmp_h0d28c158__0 = (IData)(
                                                           (0x24U 
                                                            == 
                                                            (0x3cU 
                                                             & (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0_io_in_bits_op))));
    vlSelf->__PVT__FCMP__DOT___eq_T_4 = ((~ ((~ (IData)(vlSelf->__PVT__FCMP_io_out_ready)) 
                                             & ((IData)(vlSelf->__PVT__FCMP__DOT__REG) 
                                                & (IData)(vlSelf->__PVT__FCMP__DOT__REG_1)))) 
                                         & (IData)(vlSelf->__PVT__FCMP_io_in_valid));
    vlSelf->__PVT__FPMV__DOT___a_T_8 = ((~ ((~ (IData)(vlSelf->__PVT__FPMV_io_out_ready)) 
                                            & ((IData)(vlSelf->__PVT__FPMV__DOT__REG) 
                                               & (IData)(vlSelf->__PVT__FPMV__DOT__REG_1)))) 
                                        & (IData)(vlSelf->__PVT__FPMV_io_in_valid));
    vlSelf->__PVT__FPToInt__DOT___isSingle_T_7 = ((~ 
                                                   ((~ (IData)(vlSelf->__PVT__FPToInt_io_out_ready)) 
                                                    & ((IData)(vlSelf->__PVT__FPToInt__DOT__REG) 
                                                       & (IData)(vlSelf->__PVT__FPToInt__DOT__REG_1)))) 
                                                  & (IData)(vlSelf->__PVT__FPToInt_io_in_valid));
    vlSelf->__PVT__IntToFP__DOT___s2_isSingle_T_4 = 
        ((~ ((~ (IData)(vlSelf->__PVT__IntToFP_io_out_ready)) 
             & ((IData)(vlSelf->__PVT__IntToFP__DOT__REG) 
                & (IData)(vlSelf->__PVT__IntToFP__DOT__REG_1)))) 
         & (IData)(vlSelf->__PVT__IntToFP_io_in_valid));
    vlSelf->__PVT__FCMP__DOT__FCMPCore__DOT__a_minus_b 
        = (0x1ffffffffULL & ((QData)((IData)(vlSelf->__PVT__FCMP__DOT__FCMPCore_io_a)) 
                             - (QData)((IData)(vlSelf->__PVT__FCMP__DOT__FCMPCore_io_b))));
    vlSelf->__PVT__FCMP__DOT__FCMPCore__DOT__same_sign 
        = ((IData)(vlSelf->__PVT__FCMP__DOT__FCMPCore__DOT__fp_a_sign) 
           == (IData)(((8U == (0x38U & (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0_io_in_bits_op))) 
                       & (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3_io_in_bits_b 
                          >> 0x1fU))));
    vlSelf->__PVT__FCMP__DOT__FCMPCore__DOT__decode_a___05FisNaN 
        = ((0xffU == (IData)(vlSelf->__PVT__FCMP__DOT__FCMPCore__DOT__fp_a_exp)) 
           & (0U != vlSelf->__PVT__FCMP__DOT__FCMPCore__DOT__fp_a_sig));
    vlSelf->__PVT__FCMP__DOT__FCMPCore__DOT__bothZero 
        = (1U & (((~ (IData)((0U != (IData)(vlSelf->__PVT__FCMP__DOT__FCMPCore__DOT__fp_a_exp)))) 
                  & (~ (IData)((0U != vlSelf->__PVT__FCMP__DOT__FCMPCore__DOT__fp_a_sig)))) 
                 & ((~ (IData)((0U != (IData)(vlSelf->__PVT__FCMP__DOT__FCMPCore__DOT__fp_b_exp)))) 
                    & (~ (IData)((0U != vlSelf->__PVT__FCMP__DOT__FCMPCore__DOT__fp_b_sig))))));
    vlSelf->__PVT__FCMP__DOT__FCMPCore__DOT__decode_b___05FisNaN 
        = ((0xffU == (IData)(vlSelf->__PVT__FCMP__DOT__FCMPCore__DOT__fp_b_exp)) 
           & (0U != vlSelf->__PVT__FCMP__DOT__FCMPCore__DOT__fp_b_sig));
    vlSelf->__PVT__FMA__DOT__addPipe_io_in_valid = 
        ((IData)(vlSelf->__PVT__FMA__DOT__toAddArbiter_io_in_0_valid) 
         | ((0U == ((0U == (7U & ((IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0_io_in_bits_op) 
                                  >> 3U))) ? (3U & 
                                              ((IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0_io_in_bits_op) 
                                               >> 1U))
                     : 0U)) & (IData)(vlSelf->__PVT__FMA_io_in_valid)));
    vlSelf->__PVT__FMA__DOT__addPipe__DOT__srcB = ((IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT__isFMA)
                                                    ? vlSelf->__PVT__FMA__DOT__mulPipe__DOT__toAdd_addAnother_r_1
                                                    : vlSelf->__PVT__FMA__DOT__mulPipe_io_in_bits_b);
    vlSelf->__PVT__FMA__DOT__mulPipe_io_in_valid = 
        ((IData)(vlSelf->__PVT__FMA_io_in_valid) & 
         ((IData)((4U == (0x3cU & (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0_io_in_bits_op)))) 
          | (2U == (IData)(vlSelf->__PVT__FMA__DOT__mulPipe_io_in_bits_op))));
    vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s1_io_b 
        = (((7U == (IData)(vlSelf->__PVT__FMA__DOT__mulPipe_io_in_bits_op)) 
            | (6U == (IData)(vlSelf->__PVT__FMA__DOT__mulPipe_io_in_bits_op)))
            ? (((~ (IData)(((0U == (0x38U & (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0_io_in_bits_op))) 
                            & (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3_io_in_bits_b 
                               >> 0x1fU)))) << 0x1fU) 
               | ((0U == (7U & ((IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0_io_in_bits_op) 
                                >> 3U))) ? (0x7fffffffU 
                                            & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3_io_in_bits_b)
                   : 0U)) : vlSelf->__PVT__FMA__DOT__mulPipe_io_in_bits_b);
    vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s1__DOT__raw_a_sig 
        = (((IData)((0U != (IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s1__DOT__fp_a_exp))) 
            << 0x17U) | vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s1__DOT__fp_a_sig);
    __PVT__IntToFP__DOT__IntToFP_prenorm__DOT__pos_lzc_clz__DOT___io_out_T_70 
        = (((~ (IData)(vlSelf->IntToFP__DOT____VdfgTmp_h0d28c158__0)) 
            & (IData)(((0x20U == (0x38U & (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0_io_in_bits_op))) 
                       & (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3_io_in_bits_a 
                          >> 7U)))) ? 0x38U : (((~ (IData)(vlSelf->IntToFP__DOT____VdfgTmp_h0d28c158__0)) 
                                                & (IData)(
                                                          ((0x20U 
                                                            == 
                                                            (0x38U 
                                                             & (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0_io_in_bits_op))) 
                                                           & (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3_io_in_bits_a 
                                                              >> 6U))))
                                                ? 0x39U
                                                : (
                                                   ((~ (IData)(vlSelf->IntToFP__DOT____VdfgTmp_h0d28c158__0)) 
                                                    & (IData)(
                                                              ((0x20U 
                                                                == 
                                                                (0x38U 
                                                                 & (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0_io_in_bits_op))) 
                                                               & (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3_io_in_bits_a 
                                                                  >> 5U))))
                                                    ? 0x3aU
                                                    : 
                                                   (((~ (IData)(vlSelf->IntToFP__DOT____VdfgTmp_h0d28c158__0)) 
                                                     & (IData)(
                                                               ((0x20U 
                                                                 == 
                                                                 (0x38U 
                                                                  & (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0_io_in_bits_op))) 
                                                                & (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3_io_in_bits_a 
                                                                   >> 4U))))
                                                     ? 0x3bU
                                                     : 
                                                    (((~ (IData)(vlSelf->IntToFP__DOT____VdfgTmp_h0d28c158__0)) 
                                                      & (IData)(
                                                                ((0x20U 
                                                                  == 
                                                                  (0x38U 
                                                                   & (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0_io_in_bits_op))) 
                                                                 & (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3_io_in_bits_a 
                                                                    >> 3U))))
                                                      ? 0x3cU
                                                      : 
                                                     (((~ (IData)(vlSelf->IntToFP__DOT____VdfgTmp_h0d28c158__0)) 
                                                       & (IData)(
                                                                 ((0x20U 
                                                                   == 
                                                                   (0x38U 
                                                                    & (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0_io_in_bits_op))) 
                                                                  & (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3_io_in_bits_a 
                                                                     >> 2U))))
                                                       ? 0x3dU
                                                       : 
                                                      (((~ (IData)(vlSelf->IntToFP__DOT____VdfgTmp_h0d28c158__0)) 
                                                        & (IData)(
                                                                  ((0x20U 
                                                                    == 
                                                                    (0x38U 
                                                                     & (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0_io_in_bits_op))) 
                                                                   & (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3_io_in_bits_a 
                                                                      >> 1U))))
                                                        ? 0x3eU
                                                        : 0x3fU)))))));
    vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__pos_lzc_clz_io_in 
        = ((IData)(vlSelf->IntToFP__DOT____VdfgTmp_h0d28c158__0)
            ? 0ULL : (QData)((IData)(vlSelf->__PVT___T_58)));
    vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm_io_in_sign 
        = ((~ (IData)(vlSelf->IntToFP__DOT____VdfgTmp_h0d28c158__0)) 
           & (IData)((0x21U == (0x39U & (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0_io_in_bits_op)))));
    vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm_io_in_long 
        = ((~ (IData)(vlSelf->IntToFP__DOT____VdfgTmp_h0d28c158__0)) 
           & (IData)((0x22U == (0x3aU & (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0_io_in_bits_op)))));
    vlSelf->IntToFP__DOT__IntToFP_prenorm__DOT____VdfgTmp_h664229ef__0 
        = ((~ (IData)(vlSelf->IntToFP__DOT____VdfgTmp_h0d28c158__0)) 
           & (IData)(((0x20U == (0x38U & (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0_io_in_bits_op))) 
                      & (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3_io_in_bits_a 
                         >> 0x1fU))));
    vlSelf->__PVT__FCMP__DOT__FCMPCore__DOT__uint_less 
        = ((IData)(vlSelf->__PVT__FCMP__DOT__FCMPCore__DOT__fp_a_sign) 
           ^ (vlSelf->__PVT__FCMP__DOT__FCMPCore__DOT__a_minus_b 
              >> 0x20U));
    vlSelf->__PVT__FCMP__DOT__FCMPCore__DOT__hasNaN 
        = ((IData)(vlSelf->__PVT__FCMP__DOT__FCMPCore__DOT__decode_a___05FisNaN) 
           | (IData)(vlSelf->__PVT__FCMP__DOT__FCMPCore__DOT__decode_b___05FisNaN));
    vlSelf->__PVT__FMA__DOT__addPipe__DOT___s1_io_a_T_4 
        = ((~ (IData)(vlSelf->__PVT__FMA__DOT__addPipe__DOT___T_2)) 
           & (IData)(vlSelf->__PVT__FMA__DOT__addPipe_io_in_valid));
    vlSelf->__PVT__FMA__DOT__mulPipe__DOT__multiplier_io_regEnables_0 
        = ((~ ((~ (IData)(vlSelf->__PVT__FMA__DOT__mulPipe_io_out_ready)) 
               & ((IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__REG) 
                  & (IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__REG_1)))) 
           & (IData)(vlSelf->__PVT__FMA__DOT__mulPipe_io_in_valid));
    vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s1__DOT__hasNaN 
        = (((0xffU == (IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s1__DOT__fp_a_exp)) 
            & (0U != vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s1__DOT__fp_a_sig)) 
           | (IData)(((0x7f800000U == (0x7f800000U 
                                       & vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s1_io_b)) 
                      & (0U != (0x7fffffU & vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s1_io_b)))));
    vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s1__DOT__hasZero 
        = (1U & (((~ (IData)((0U != (IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s1__DOT__fp_a_exp)))) 
                  & (~ (IData)((0U != vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s1__DOT__fp_a_sig)))) 
                 | ((~ (IData)((0U != (0xffU & (vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s1_io_b 
                                                >> 0x17U))))) 
                    & (~ (IData)((0U != (0x7fffffU 
                                         & vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s1_io_b)))))));
    vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s1__DOT__hasInf 
        = (((~ (IData)((0U != vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s1__DOT__fp_a_sig))) 
            & (0xffU == (IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s1__DOT__fp_a_exp))) 
           | (IData)(((0x7f800000U == (0x7f800000U 
                                       & vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s1_io_b)) 
                      & (~ (IData)((0U != (0x7fffffU 
                                           & vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s1_io_b)))))));
    vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s1__DOT__exp_sum 
        = (0x1ffU & (((IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s1__DOT__fp_a_exp) 
                      | (1U & (~ (IData)((0U != (IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s1__DOT__fp_a_exp)))))) 
                     + (0xffU & ((vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s1_io_b 
                                  >> 0x17U) | (1U & 
                                               (~ (IData)(
                                                          (0U 
                                                           != 
                                                           (0xffU 
                                                            & (vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s1_io_b 
                                                               >> 0x17U))))))))));
    vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s1__DOT__raw_b_sig 
        = (((IData)((0U != (0xffU & (vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s1_io_b 
                                     >> 0x17U)))) << 0x17U) 
           | (0x7fffffU & vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s1_io_b));
    __PVT__IntToFP__DOT__IntToFP_prenorm__DOT__pos_lzc_clz__DOT___io_out_T_77 
        = (((~ (IData)(vlSelf->IntToFP__DOT____VdfgTmp_h0d28c158__0)) 
            & (IData)(((0x20U == (0x38U & (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0_io_in_bits_op))) 
                       & (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3_io_in_bits_a 
                          >> 0xeU)))) ? 0x31U : (((~ (IData)(vlSelf->IntToFP__DOT____VdfgTmp_h0d28c158__0)) 
                                                  & (IData)(
                                                            ((0x20U 
                                                              == 
                                                              (0x38U 
                                                               & (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0_io_in_bits_op))) 
                                                             & (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3_io_in_bits_a 
                                                                >> 0xdU))))
                                                  ? 0x32U
                                                  : 
                                                 (((~ (IData)(vlSelf->IntToFP__DOT____VdfgTmp_h0d28c158__0)) 
                                                   & (IData)(
                                                             ((0x20U 
                                                               == 
                                                               (0x38U 
                                                                & (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0_io_in_bits_op))) 
                                                              & (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3_io_in_bits_a 
                                                                 >> 0xcU))))
                                                   ? 0x33U
                                                   : 
                                                  (((~ (IData)(vlSelf->IntToFP__DOT____VdfgTmp_h0d28c158__0)) 
                                                    & (IData)(
                                                              ((0x20U 
                                                                == 
                                                                (0x38U 
                                                                 & (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0_io_in_bits_op))) 
                                                               & (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3_io_in_bits_a 
                                                                  >> 0xbU))))
                                                    ? 0x34U
                                                    : 
                                                   (((~ (IData)(vlSelf->IntToFP__DOT____VdfgTmp_h0d28c158__0)) 
                                                     & (IData)(
                                                               ((0x20U 
                                                                 == 
                                                                 (0x38U 
                                                                  & (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0_io_in_bits_op))) 
                                                                & (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3_io_in_bits_a 
                                                                   >> 0xaU))))
                                                     ? 0x35U
                                                     : 
                                                    (((~ (IData)(vlSelf->IntToFP__DOT____VdfgTmp_h0d28c158__0)) 
                                                      & (IData)(
                                                                ((0x20U 
                                                                  == 
                                                                  (0x38U 
                                                                   & (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0_io_in_bits_op))) 
                                                                 & (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3_io_in_bits_a 
                                                                    >> 9U))))
                                                      ? 0x36U
                                                      : 
                                                     (((~ (IData)(vlSelf->IntToFP__DOT____VdfgTmp_h0d28c158__0)) 
                                                       & (IData)(
                                                                 ((0x20U 
                                                                   == 
                                                                   (0x38U 
                                                                    & (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0_io_in_bits_op))) 
                                                                  & (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3_io_in_bits_a 
                                                                     >> 8U))))
                                                       ? 0x37U
                                                       : (IData)(__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__pos_lzc_clz__DOT___io_out_T_70))))))));
    vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__in_sign 
        = ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm_io_in_sign) 
           & ((~ (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm_io_in_long)) 
              & (IData)(vlSelf->IntToFP__DOT__IntToFP_prenorm__DOT____VdfgTmp_h664229ef__0)));
    vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__in_raw 
        = (((~ (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm_io_in_long)) 
            & (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm_io_in_sign))
            ? (((QData)((IData)(((IData)(vlSelf->IntToFP__DOT__IntToFP_prenorm__DOT____VdfgTmp_h664229ef__0)
                                  ? 0xffffffffU : 0U))) 
                << 0x20U) | (QData)((IData)(((IData)(vlSelf->IntToFP__DOT____VdfgTmp_h0d28c158__0)
                                              ? 0U : vlSelf->__PVT___T_58))))
            : vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__pos_lzc_clz_io_in);
    vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s1__DOT__subnormal_sig 
        = ((0U != (IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s1__DOT__fp_a_exp))
            ? vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s1__DOT__raw_b_sig
            : vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s1__DOT__raw_a_sig);
    __PVT__IntToFP__DOT__IntToFP_prenorm__DOT__pos_lzc_clz__DOT___io_out_T_84 
        = (((~ (IData)(vlSelf->IntToFP__DOT____VdfgTmp_h0d28c158__0)) 
            & (IData)(((0x20U == (0x38U & (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0_io_in_bits_op))) 
                       & (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3_io_in_bits_a 
                          >> 0x15U)))) ? 0x2aU : ((
                                                   (~ (IData)(vlSelf->IntToFP__DOT____VdfgTmp_h0d28c158__0)) 
                                                   & (IData)(
                                                             ((0x20U 
                                                               == 
                                                               (0x38U 
                                                                & (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0_io_in_bits_op))) 
                                                              & (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3_io_in_bits_a 
                                                                 >> 0x14U))))
                                                   ? 0x2bU
                                                   : 
                                                  (((~ (IData)(vlSelf->IntToFP__DOT____VdfgTmp_h0d28c158__0)) 
                                                    & (IData)(
                                                              ((0x20U 
                                                                == 
                                                                (0x38U 
                                                                 & (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0_io_in_bits_op))) 
                                                               & (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3_io_in_bits_a 
                                                                  >> 0x13U))))
                                                    ? 0x2cU
                                                    : 
                                                   (((~ (IData)(vlSelf->IntToFP__DOT____VdfgTmp_h0d28c158__0)) 
                                                     & (IData)(
                                                               ((0x20U 
                                                                 == 
                                                                 (0x38U 
                                                                  & (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0_io_in_bits_op))) 
                                                                & (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3_io_in_bits_a 
                                                                   >> 0x12U))))
                                                     ? 0x2dU
                                                     : 
                                                    (((~ (IData)(vlSelf->IntToFP__DOT____VdfgTmp_h0d28c158__0)) 
                                                      & (IData)(
                                                                ((0x20U 
                                                                  == 
                                                                  (0x38U 
                                                                   & (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0_io_in_bits_op))) 
                                                                 & (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3_io_in_bits_a 
                                                                    >> 0x11U))))
                                                      ? 0x2eU
                                                      : 
                                                     (((~ (IData)(vlSelf->IntToFP__DOT____VdfgTmp_h0d28c158__0)) 
                                                       & (IData)(
                                                                 ((0x20U 
                                                                   == 
                                                                   (0x38U 
                                                                    & (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0_io_in_bits_op))) 
                                                                  & (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3_io_in_bits_a 
                                                                     >> 0x10U))))
                                                       ? 0x2fU
                                                       : 
                                                      (((~ (IData)(vlSelf->IntToFP__DOT____VdfgTmp_h0d28c158__0)) 
                                                        & (IData)(
                                                                  ((0x20U 
                                                                    == 
                                                                    (0x38U 
                                                                     & (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0_io_in_bits_op))) 
                                                                   & (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3_io_in_bits_a 
                                                                      >> 0xfU))))
                                                        ? 0x30U
                                                        : (IData)(__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__pos_lzc_clz__DOT___io_out_T_77))))))));
    vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_1 
        = (1U & VL_REDXOR_2((3ULL & vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__in_raw)));
    vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_2 
        = (1U & VL_REDXOR_4((6ULL & vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__in_raw)));
    vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_3 
        = (1U & VL_REDXOR_4((0xcULL & vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__in_raw)));
    vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_4 
        = (1U & VL_REDXOR_8((0x18ULL & vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__in_raw)));
    vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_5 
        = (1U & VL_REDXOR_8((0x30ULL & vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__in_raw)));
    vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_6 
        = (1U & VL_REDXOR_8((0x60ULL & vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__in_raw)));
    vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_7 
        = (1U & VL_REDXOR_8((0xc0ULL & vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__in_raw)));
    vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_8 
        = (1U & VL_REDXOR_16((0x180ULL & vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__in_raw)));
    vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_9 
        = (1U & VL_REDXOR_16((0x300ULL & vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__in_raw)));
    vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_10 
        = (1U & VL_REDXOR_16((0x600ULL & vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__in_raw)));
    vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_11 
        = (1U & VL_REDXOR_16((0xc00ULL & vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__in_raw)));
    vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_12 
        = (1U & VL_REDXOR_16((0x1800ULL & vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__in_raw)));
    vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_13 
        = (1U & VL_REDXOR_16((0x3000ULL & vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__in_raw)));
    vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_14 
        = (1U & VL_REDXOR_16((0x6000ULL & vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__in_raw)));
    vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_15 
        = (1U & VL_REDXOR_16((0xc000ULL & vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__in_raw)));
    vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_24 
        = (1U & VL_REDXOR_32((0x1800000ULL & vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__in_raw)));
    vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_25 
        = (1U & VL_REDXOR_32((0x3000000ULL & vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__in_raw)));
    vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_26 
        = (1U & VL_REDXOR_32((0x6000000ULL & vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__in_raw)));
    vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_27 
        = (1U & VL_REDXOR_32((0xc000000ULL & vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__in_raw)));
    vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_28 
        = (1U & VL_REDXOR_32((0x18000000ULL & vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__in_raw)));
    vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_29 
        = (1U & VL_REDXOR_32((0x30000000ULL & vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__in_raw)));
    vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_30 
        = (1U & VL_REDXOR_32((0x60000000ULL & vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__in_raw)));
    vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_31 
        = (1U & VL_REDXOR_32((0xc0000000ULL & vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__in_raw)));
    vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_35 
        = (1U & VL_REDXOR_64((0xc00000000ULL & vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__in_raw)));
    vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_36 
        = (1U & VL_REDXOR_64((0x1800000000ULL & vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__in_raw)));
    vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_37 
        = (1U & VL_REDXOR_64((0x3000000000ULL & vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__in_raw)));
    vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_38 
        = (1U & VL_REDXOR_64((0x6000000000ULL & vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__in_raw)));
    vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_39 
        = (1U & VL_REDXOR_64((0xc000000000ULL & vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__in_raw)));
    vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_40 
        = (1U & VL_REDXOR_64((0x18000000000ULL & vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__in_raw)));
    vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_41 
        = (1U & VL_REDXOR_64((0x30000000000ULL & vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__in_raw)));
    vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_42 
        = (1U & VL_REDXOR_64((0x60000000000ULL & vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__in_raw)));
    vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_43 
        = (1U & VL_REDXOR_64((0xc0000000000ULL & vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__in_raw)));
    vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_44 
        = (1U & VL_REDXOR_64((0x180000000000ULL & vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__in_raw)));
    vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_45 
        = (1U & VL_REDXOR_64((0x300000000000ULL & vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__in_raw)));
    vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_46 
        = (1U & VL_REDXOR_64((0x600000000000ULL & vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__in_raw)));
    vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_47 
        = (1U & VL_REDXOR_64((0xc00000000000ULL & vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__in_raw)));
    vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_56 
        = (1U & VL_REDXOR_64((0x180000000000000ULL 
                              & vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__in_raw)));
    vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_57 
        = (1U & VL_REDXOR_64((0x300000000000000ULL 
                              & vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__in_raw)));
    vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_58 
        = (1U & VL_REDXOR_64((0x600000000000000ULL 
                              & vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__in_raw)));
    vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_59 
        = (1U & VL_REDXOR_64((0xc00000000000000ULL 
                              & vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__in_raw)));
    vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_60 
        = (1U & VL_REDXOR_64((0x1800000000000000ULL 
                              & vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__in_raw)));
    vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_61 
        = (1U & VL_REDXOR_64((0x3000000000000000ULL 
                              & vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__in_raw)));
    vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_62 
        = (1U & VL_REDXOR_64((0x6000000000000000ULL 
                              & vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__in_raw)));
    vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_63 
        = (1U & VL_REDXOR_64((0xc000000000000000ULL 
                              & vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__in_raw)));
    vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_16 
        = (1U & VL_REDXOR_32((0x18000ULL & vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__in_raw)));
    vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_17 
        = (1U & VL_REDXOR_32((0x30000ULL & vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__in_raw)));
    vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_18 
        = (1U & VL_REDXOR_32((0x60000ULL & vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__in_raw)));
    vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_19 
        = (1U & VL_REDXOR_32((0xc0000ULL & vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__in_raw)));
    vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_20 
        = (1U & VL_REDXOR_32((0x180000ULL & vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__in_raw)));
    vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_21 
        = (1U & VL_REDXOR_32((0x300000ULL & vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__in_raw)));
    vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_22 
        = (1U & VL_REDXOR_32((0x600000ULL & vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__in_raw)));
    vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_23 
        = (1U & VL_REDXOR_32((0xc00000ULL & vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__in_raw)));
    vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_32 
        = (1U & VL_REDXOR_64((0x180000000ULL & vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__in_raw)));
    vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_33 
        = (1U & VL_REDXOR_64((0x300000000ULL & vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__in_raw)));
    vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_34 
        = (1U & VL_REDXOR_64((0x600000000ULL & vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__in_raw)));
    vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_48 
        = (1U & VL_REDXOR_64((0x1800000000000ULL & vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__in_raw)));
    vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_49 
        = (1U & VL_REDXOR_64((0x3000000000000ULL & vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__in_raw)));
    vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_50 
        = (1U & VL_REDXOR_64((0x6000000000000ULL & vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__in_raw)));
    vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_51 
        = (1U & VL_REDXOR_64((0xc000000000000ULL & vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__in_raw)));
    vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_52 
        = (1U & VL_REDXOR_64((0x18000000000000ULL & vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__in_raw)));
    vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_53 
        = (1U & VL_REDXOR_64((0x30000000000000ULL & vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__in_raw)));
    vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_54 
        = (1U & VL_REDXOR_64((0x60000000000000ULL & vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__in_raw)));
    vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_55 
        = (1U & VL_REDXOR_64((0xc0000000000000ULL & vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__in_raw)));
    __PVT__FMA__DOT__mulPipe__DOT__s1__DOT__lzc_clz__DOT___io_out_T_66 
        = ((0x20000U & vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s1__DOT__subnormal_sig)
            ? 0x20U : ((0x10000U & vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s1__DOT__subnormal_sig)
                        ? 0x21U : ((0x8000U & vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s1__DOT__subnormal_sig)
                                    ? 0x22U : ((0x4000U 
                                                & vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s1__DOT__subnormal_sig)
                                                ? 0x23U
                                                : (
                                                   (0x2000U 
                                                    & vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s1__DOT__subnormal_sig)
                                                    ? 0x24U
                                                    : 
                                                   ((0x1000U 
                                                     & vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s1__DOT__subnormal_sig)
                                                     ? 0x25U
                                                     : 
                                                    ((0x800U 
                                                      & vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s1__DOT__subnormal_sig)
                                                      ? 0x26U
                                                      : 
                                                     ((0x400U 
                                                       & vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s1__DOT__subnormal_sig)
                                                       ? 0x27U
                                                       : 
                                                      ((0x200U 
                                                        & vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s1__DOT__subnormal_sig)
                                                        ? 0x28U
                                                        : 
                                                       ((0x100U 
                                                         & vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s1__DOT__subnormal_sig)
                                                         ? 0x29U
                                                         : 
                                                        ((0x80U 
                                                          & vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s1__DOT__subnormal_sig)
                                                          ? 0x2aU
                                                          : 
                                                         ((0x40U 
                                                           & vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s1__DOT__subnormal_sig)
                                                           ? 0x2bU
                                                           : 
                                                          ((0x20U 
                                                            & vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s1__DOT__subnormal_sig)
                                                            ? 0x2cU
                                                            : 
                                                           ((0x10U 
                                                             & vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s1__DOT__subnormal_sig)
                                                             ? 0x2dU
                                                             : 
                                                            ((8U 
                                                              & vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s1__DOT__subnormal_sig)
                                                              ? 0x2eU
                                                              : 
                                                             ((4U 
                                                               & vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s1__DOT__subnormal_sig)
                                                               ? 0x2fU
                                                               : 
                                                              ((2U 
                                                                & vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s1__DOT__subnormal_sig)
                                                                ? 0x30U
                                                                : 0x31U)))))))))))))))));
    vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__pos_lzc_clz__DOT___io_out_T_91 
        = (((~ (IData)(vlSelf->IntToFP__DOT____VdfgTmp_h0d28c158__0)) 
            & (IData)(((0x20U == (0x38U & (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0_io_in_bits_op))) 
                       & (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3_io_in_bits_a 
                          >> 0x1cU)))) ? 0x23U : ((
                                                   (~ (IData)(vlSelf->IntToFP__DOT____VdfgTmp_h0d28c158__0)) 
                                                   & (IData)(
                                                             ((0x20U 
                                                               == 
                                                               (0x38U 
                                                                & (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0_io_in_bits_op))) 
                                                              & (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3_io_in_bits_a 
                                                                 >> 0x1bU))))
                                                   ? 0x24U
                                                   : 
                                                  (((~ (IData)(vlSelf->IntToFP__DOT____VdfgTmp_h0d28c158__0)) 
                                                    & (IData)(
                                                              ((0x20U 
                                                                == 
                                                                (0x38U 
                                                                 & (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0_io_in_bits_op))) 
                                                               & (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3_io_in_bits_a 
                                                                  >> 0x1aU))))
                                                    ? 0x25U
                                                    : 
                                                   (((~ (IData)(vlSelf->IntToFP__DOT____VdfgTmp_h0d28c158__0)) 
                                                     & (IData)(
                                                               ((0x20U 
                                                                 == 
                                                                 (0x38U 
                                                                  & (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0_io_in_bits_op))) 
                                                                & (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3_io_in_bits_a 
                                                                   >> 0x19U))))
                                                     ? 0x26U
                                                     : 
                                                    (((~ (IData)(vlSelf->IntToFP__DOT____VdfgTmp_h0d28c158__0)) 
                                                      & (IData)(
                                                                ((0x20U 
                                                                  == 
                                                                  (0x38U 
                                                                   & (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0_io_in_bits_op))) 
                                                                 & (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3_io_in_bits_a 
                                                                    >> 0x18U))))
                                                      ? 0x27U
                                                      : 
                                                     (((~ (IData)(vlSelf->IntToFP__DOT____VdfgTmp_h0d28c158__0)) 
                                                       & (IData)(
                                                                 ((0x20U 
                                                                   == 
                                                                   (0x38U 
                                                                    & (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0_io_in_bits_op))) 
                                                                  & (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3_io_in_bits_a 
                                                                     >> 0x17U))))
                                                       ? 0x28U
                                                       : 
                                                      (((~ (IData)(vlSelf->IntToFP__DOT____VdfgTmp_h0d28c158__0)) 
                                                        & (IData)(
                                                                  ((0x20U 
                                                                    == 
                                                                    (0x38U 
                                                                     & (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0_io_in_bits_op))) 
                                                                   & (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3_io_in_bits_a 
                                                                      >> 0x16U))))
                                                        ? 0x29U
                                                        : (IData)(__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__pos_lzc_clz__DOT___io_out_T_84))))))));
    vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__io_f_lo_hi_lo 
        = (((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_23) 
            << 7U) | (((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_22) 
                       << 6U) | (((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_21) 
                                  << 5U) | (((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_20) 
                                             << 4U) 
                                            | (((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_19) 
                                                << 3U) 
                                               | (((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_18) 
                                                   << 2U) 
                                                  | (((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_17) 
                                                      << 1U) 
                                                     | (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_16))))))));
    vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__neg_lzc_clz__DOT___io_out_T_97 
        = ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_34)
            ? 0x1dU : ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_33)
                        ? 0x1eU : ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_32)
                                    ? 0x1fU : ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_31)
                                                ? 0x20U
                                                : ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_30)
                                                    ? 0x21U
                                                    : 
                                                   ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_29)
                                                     ? 0x22U
                                                     : 
                                                    ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_28)
                                                      ? 0x23U
                                                      : 
                                                     ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_27)
                                                       ? 0x24U
                                                       : 
                                                      ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_26)
                                                        ? 0x25U
                                                        : 
                                                       ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_25)
                                                         ? 0x26U
                                                         : 
                                                        ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_24)
                                                          ? 0x27U
                                                          : 
                                                         ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_23)
                                                           ? 0x28U
                                                           : 
                                                          ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_22)
                                                            ? 0x29U
                                                            : 
                                                           ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_21)
                                                             ? 0x2aU
                                                             : 
                                                            ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_20)
                                                              ? 0x2bU
                                                              : 
                                                             ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_19)
                                                               ? 0x2cU
                                                               : 
                                                              ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_18)
                                                                ? 0x2dU
                                                                : 
                                                               ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_17)
                                                                 ? 0x2eU
                                                                 : 
                                                                ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_16)
                                                                  ? 0x2fU
                                                                  : 
                                                                 ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_15)
                                                                   ? 0x30U
                                                                   : 
                                                                  ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_14)
                                                                    ? 0x31U
                                                                    : 
                                                                   ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_13)
                                                                     ? 0x32U
                                                                     : 
                                                                    ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_12)
                                                                      ? 0x33U
                                                                      : 
                                                                     ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_11)
                                                                       ? 0x34U
                                                                       : 
                                                                      ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_10)
                                                                        ? 0x35U
                                                                        : 
                                                                       ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_9)
                                                                         ? 0x36U
                                                                         : 
                                                                        ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_8)
                                                                          ? 0x37U
                                                                          : 
                                                                         ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_7)
                                                                           ? 0x38U
                                                                           : 
                                                                          ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_6)
                                                                            ? 0x39U
                                                                            : 
                                                                           ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_5)
                                                                             ? 0x3aU
                                                                             : 
                                                                            ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_4)
                                                                              ? 0x3bU
                                                                              : 
                                                                             ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_3)
                                                                               ? 0x3cU
                                                                               : 
                                                                              ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_2)
                                                                                ? 0x3dU
                                                                                : 
                                                                               ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_1)
                                                                                 ? 0x3eU
                                                                                 : 0x3fU))))))))))))))))))))))))))))))))));
    if (vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__in_sign) {
        vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__in_abs 
            = (1ULL + (~ vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__in_raw));
        vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lzc 
            = ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_63)
                ? 0U : ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_62)
                         ? 1U : ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_61)
                                  ? 2U : ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_60)
                                           ? 3U : ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_59)
                                                    ? 4U
                                                    : 
                                                   ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_58)
                                                     ? 5U
                                                     : 
                                                    ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_57)
                                                      ? 6U
                                                      : 
                                                     ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_56)
                                                       ? 7U
                                                       : 
                                                      ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_55)
                                                        ? 8U
                                                        : 
                                                       ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_54)
                                                         ? 9U
                                                         : 
                                                        ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_53)
                                                          ? 0xaU
                                                          : 
                                                         ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_52)
                                                           ? 0xbU
                                                           : 
                                                          ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_51)
                                                            ? 0xcU
                                                            : 
                                                           ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_50)
                                                             ? 0xdU
                                                             : 
                                                            ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_49)
                                                              ? 0xeU
                                                              : 
                                                             ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_48)
                                                               ? 0xfU
                                                               : 
                                                              ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_47)
                                                                ? 0x10U
                                                                : 
                                                               ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_46)
                                                                 ? 0x11U
                                                                 : 
                                                                ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_45)
                                                                  ? 0x12U
                                                                  : 
                                                                 ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_44)
                                                                   ? 0x13U
                                                                   : 
                                                                  ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_43)
                                                                    ? 0x14U
                                                                    : 
                                                                   ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_42)
                                                                     ? 0x15U
                                                                     : 
                                                                    ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_41)
                                                                      ? 0x16U
                                                                      : 
                                                                     ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_40)
                                                                       ? 0x17U
                                                                       : 
                                                                      ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_39)
                                                                        ? 0x18U
                                                                        : 
                                                                       ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_38)
                                                                         ? 0x19U
                                                                         : 
                                                                        ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_37)
                                                                          ? 0x1aU
                                                                          : 
                                                                         ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_36)
                                                                           ? 0x1bU
                                                                           : 
                                                                          ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_35)
                                                                            ? 0x1cU
                                                                            : (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__neg_lzc_clz__DOT___io_out_T_97))))))))))))))))))))))))))))));
    } else {
        vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__in_abs 
            = vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__in_raw;
        vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lzc 
            = ((IData)(vlSelf->IntToFP__DOT__IntToFP_prenorm__DOT____VdfgTmp_h664229ef__0)
                ? 0x20U : (((~ (IData)(vlSelf->IntToFP__DOT____VdfgTmp_h0d28c158__0)) 
                            & (IData)(((0x20U == (0x38U 
                                                  & (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0_io_in_bits_op))) 
                                       & (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3_io_in_bits_a 
                                          >> 0x1eU))))
                            ? 0x21U : (((~ (IData)(vlSelf->IntToFP__DOT____VdfgTmp_h0d28c158__0)) 
                                        & (IData)((
                                                   (0x20U 
                                                    == 
                                                    (0x38U 
                                                     & (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0_io_in_bits_op))) 
                                                   & (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3_io_in_bits_a 
                                                      >> 0x1dU))))
                                        ? 0x22U : (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__pos_lzc_clz__DOT___io_out_T_91))));
    }
    vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__io_f_hi_hi_lo 
        = (((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_55) 
            << 7U) | (((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_54) 
                       << 6U) | (((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_53) 
                                  << 5U) | (((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_52) 
                                             << 4U) 
                                            | (((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_51) 
                                                << 3U) 
                                               | (((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_50) 
                                                   << 2U) 
                                                  | (((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_49) 
                                                      << 1U) 
                                                     | (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_48))))))));
    vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s1__DOT__lzc_clz__DOT___io_out_T_72 
        = ((0x800000U & vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s1__DOT__subnormal_sig)
            ? 0x1aU : ((0x400000U & vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s1__DOT__subnormal_sig)
                        ? 0x1bU : ((0x200000U & vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s1__DOT__subnormal_sig)
                                    ? 0x1cU : ((0x100000U 
                                                & vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s1__DOT__subnormal_sig)
                                                ? 0x1dU
                                                : (
                                                   (0x80000U 
                                                    & vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s1__DOT__subnormal_sig)
                                                    ? 0x1eU
                                                    : 
                                                   ((0x40000U 
                                                     & vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s1__DOT__subnormal_sig)
                                                     ? 0x1fU
                                                     : (IData)(__PVT__FMA__DOT__mulPipe__DOT__s1__DOT__lzc_clz__DOT___io_out_T_66)))))));
    vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__io_f_hi 
        = (((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_63) 
            << 0x1fU) | (((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_62) 
                          << 0x1eU) | (((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_61) 
                                        << 0x1dU) | 
                                       (((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_60) 
                                         << 0x1cU) 
                                        | (((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_59) 
                                            << 0x1bU) 
                                           | (((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_58) 
                                               << 0x1aU) 
                                              | (((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_57) 
                                                  << 0x19U) 
                                                 | (((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_56) 
                                                     << 0x18U) 
                                                    | (((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__io_f_hi_hi_lo) 
                                                        << 0x10U) 
                                                       | (((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_47) 
                                                           << 0xfU) 
                                                          | (((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_46) 
                                                              << 0xeU) 
                                                             | (((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_45) 
                                                                 << 0xdU) 
                                                                | (((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_44) 
                                                                    << 0xcU) 
                                                                   | (((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_43) 
                                                                       << 0xbU) 
                                                                      | (((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_42) 
                                                                          << 0xaU) 
                                                                         | (((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_41) 
                                                                             << 9U) 
                                                                            | (((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_40) 
                                                                                << 8U) 
                                                                               | (((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_39) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_38) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_37) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_36) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_35) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_34) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_33) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_32)))))))))))))))))))))))));
    vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s1__DOT__exceed_lim 
        = ((0x1ffU & ((IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s1__DOT__exp_sum) 
                      - (IData)(0x65U))) <= (IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s1__DOT__lzc_clz__DOT___io_out_T_72));
    vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__in_shift_s1 
        = (0x7fffffffffffffffULL & (vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__in_abs 
                                    << (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lzc)));
    vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__one_mask 
        = (((QData)((IData)((((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_63) 
                              << 0x1fU) | ((((~ (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_63)) 
                                             & (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_62)) 
                                            << 0x1eU) 
                                           | ((((~ 
                                                 ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_63) 
                                                  | (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_62))) 
                                                & (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_61)) 
                                               << 0x1dU) 
                                              | ((((~ 
                                                    ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_63) 
                                                     | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_62) 
                                                        | (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_61)))) 
                                                   & (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_60)) 
                                                  << 0x1cU) 
                                                 | ((((~ 
                                                       ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_63) 
                                                        | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_62) 
                                                           | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_61) 
                                                              | (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_60))))) 
                                                      & (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_59)) 
                                                     << 0x1bU) 
                                                    | ((((~ 
                                                          ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_63) 
                                                           | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_62) 
                                                              | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_61) 
                                                                 | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_60) 
                                                                    | (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_59)))))) 
                                                         & (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_58)) 
                                                        << 0x1aU) 
                                                       | ((((~ 
                                                             ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_63) 
                                                              | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_62) 
                                                                 | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_61) 
                                                                    | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_60) 
                                                                       | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_59) 
                                                                          | (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_58))))))) 
                                                            & (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_57)) 
                                                           << 0x19U) 
                                                          | ((((~ 
                                                                ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_63) 
                                                                 | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_62) 
                                                                    | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_61) 
                                                                       | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_60) 
                                                                          | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_59) 
                                                                             | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_58) 
                                                                                | (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_57)))))))) 
                                                               & (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_56)) 
                                                              << 0x18U) 
                                                             | (((((~ 
                                                                    ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_63) 
                                                                     | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_62) 
                                                                        | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_61) 
                                                                           | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_60) 
                                                                              | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_59) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_58) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_57) 
                                                                                | (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_56))))))))) 
                                                                   & (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_55)) 
                                                                  << 0x17U) 
                                                                 | ((((~ 
                                                                       ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_63) 
                                                                        | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_62) 
                                                                           | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_61) 
                                                                              | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_60) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_59) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_58) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_57) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_56) 
                                                                                | (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_55)))))))))) 
                                                                      & (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_54)) 
                                                                     << 0x16U) 
                                                                    | ((((~ 
                                                                          ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_63) 
                                                                           | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_62) 
                                                                              | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_61) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_60) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_59) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_58) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_57) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_56) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_55) 
                                                                                | (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_54))))))))))) 
                                                                         & (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_53)) 
                                                                        << 0x15U) 
                                                                       | ((((~ 
                                                                             ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_63) 
                                                                              | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_62) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_61) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_60) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_59) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_58) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_57) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_56) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_55) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_54) 
                                                                                | (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_53)))))))))))) 
                                                                            & (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_52)) 
                                                                           << 0x14U) 
                                                                          | ((((~ 
                                                                                ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_63) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_62) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_61) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_60) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_59) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_58) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_57) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_56) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_55) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_54) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_53) 
                                                                                | (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_52))))))))))))) 
                                                                               & (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_51)) 
                                                                              << 0x13U) 
                                                                             | ((((~ 
                                                                                ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_63) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_62) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_61) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_60) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_59) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_58) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_57) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_56) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_55) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_54) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_53) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_52) 
                                                                                | (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_51)))))))))))))) 
                                                                                & (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_50)) 
                                                                                << 0x12U) 
                                                                                | ((((~ 
                                                                                ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_63) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_62) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_61) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_60) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_59) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_58) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_57) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_56) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_55) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_54) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_53) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_52) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_51) 
                                                                                | (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_50))))))))))))))) 
                                                                                & (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_49)) 
                                                                                << 0x11U) 
                                                                                | (((~ 
                                                                                ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_63) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_62) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_61) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_60) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_59) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_58) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_57) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_56) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_55) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_54) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_53) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_52) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_51) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_50) 
                                                                                | (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_49)))))))))))))))) 
                                                                                & (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_48)) 
                                                                                << 0x10U)))))))) 
                                                                | ((((~ 
                                                                      ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_63) 
                                                                       | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_62) 
                                                                          | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_61) 
                                                                             | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_60) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_59) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_58) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_57) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_56) 
                                                                                | (0U 
                                                                                != (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__io_f_hi_hi_lo))))))))))) 
                                                                     & (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_47)) 
                                                                    << 0xfU) 
                                                                   | ((((~ 
                                                                         ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_63) 
                                                                          | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_62) 
                                                                             | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_61) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_60) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_59) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_58) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_57) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_56) 
                                                                                | ((0U 
                                                                                != (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__io_f_hi_hi_lo)) 
                                                                                | (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_47))))))))))) 
                                                                        & (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_46)) 
                                                                       << 0xeU) 
                                                                      | ((((~ 
                                                                            ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_63) 
                                                                             | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_62) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_61) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_60) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_59) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_58) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_57) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_56) 
                                                                                | ((0U 
                                                                                != (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__io_f_hi_hi_lo)) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_47) 
                                                                                | (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_46)))))))))))) 
                                                                           & (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_45)) 
                                                                          << 0xdU) 
                                                                         | ((((~ 
                                                                               ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_63) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_62) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_61) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_60) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_59) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_58) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_57) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_56) 
                                                                                | ((0U 
                                                                                != (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__io_f_hi_hi_lo)) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_47) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_46) 
                                                                                | (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_45))))))))))))) 
                                                                              & (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_44)) 
                                                                             << 0xcU) 
                                                                            | ((((~ 
                                                                                ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_63) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_62) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_61) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_60) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_59) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_58) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_57) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_56) 
                                                                                | ((0U 
                                                                                != (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__io_f_hi_hi_lo)) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_47) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_46) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_45) 
                                                                                | (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_44)))))))))))))) 
                                                                                & (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_43)) 
                                                                                << 0xbU) 
                                                                               | ((((~ 
                                                                                ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_63) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_62) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_61) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_60) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_59) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_58) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_57) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_56) 
                                                                                | ((0U 
                                                                                != (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__io_f_hi_hi_lo)) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_47) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_46) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_45) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_44) 
                                                                                | (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_43))))))))))))))) 
                                                                                & (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_42)) 
                                                                                << 0xaU) 
                                                                                | ((((~ 
                                                                                ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_63) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_62) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_61) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_60) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_59) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_58) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_57) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_56) 
                                                                                | ((0U 
                                                                                != (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__io_f_hi_hi_lo)) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_47) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_46) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_45) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_44) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_43) 
                                                                                | (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_42)))))))))))))))) 
                                                                                & (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_41)) 
                                                                                << 9U) 
                                                                                | ((((~ 
                                                                                ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_63) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_62) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_61) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_60) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_59) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_58) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_57) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_56) 
                                                                                | ((0U 
                                                                                != (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__io_f_hi_hi_lo)) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_47) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_46) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_45) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_44) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_43) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_42) 
                                                                                | (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_41))))))))))))))))) 
                                                                                & (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_40)) 
                                                                                << 8U) 
                                                                                | ((((~ 
                                                                                ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_63) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_62) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_61) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_60) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_59) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_58) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_57) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_56) 
                                                                                | ((0U 
                                                                                != (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__io_f_hi_hi_lo)) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_47) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_46) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_45) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_44) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_43) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_42) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_41) 
                                                                                | (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_40)))))))))))))))))) 
                                                                                & (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_39)) 
                                                                                << 7U) 
                                                                                | ((((~ 
                                                                                ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_63) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_62) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_61) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_60) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_59) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_58) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_57) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_56) 
                                                                                | ((0U 
                                                                                != (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__io_f_hi_hi_lo)) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_47) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_46) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_45) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_44) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_43) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_42) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_41) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_40) 
                                                                                | (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_39))))))))))))))))))) 
                                                                                & (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_38)) 
                                                                                << 6U) 
                                                                                | ((((~ 
                                                                                ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_63) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_62) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_61) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_60) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_59) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_58) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_57) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_56) 
                                                                                | ((0U 
                                                                                != (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__io_f_hi_hi_lo)) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_47) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_46) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_45) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_44) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_43) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_42) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_41) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_40) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_39) 
                                                                                | (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_38)))))))))))))))))))) 
                                                                                & (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_37)) 
                                                                                << 5U) 
                                                                                | ((((~ 
                                                                                ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_63) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_62) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_61) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_60) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_59) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_58) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_57) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_56) 
                                                                                | ((0U 
                                                                                != (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__io_f_hi_hi_lo)) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_47) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_46) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_45) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_44) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_43) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_42) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_41) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_40) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_39) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_38) 
                                                                                | (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_37))))))))))))))))))))) 
                                                                                & (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_36)) 
                                                                                << 4U) 
                                                                                | ((((~ 
                                                                                ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_63) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_62) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_61) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_60) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_59) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_58) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_57) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_56) 
                                                                                | ((0U 
                                                                                != (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__io_f_hi_hi_lo)) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_47) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_46) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_45) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_44) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_43) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_42) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_41) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_40) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_39) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_38) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_37) 
                                                                                | (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_36)))))))))))))))))))))) 
                                                                                & (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_35)) 
                                                                                << 3U) 
                                                                                | ((((~ 
                                                                                ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_63) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_62) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_61) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_60) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_59) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_58) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_57) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_56) 
                                                                                | ((0U 
                                                                                != (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__io_f_hi_hi_lo)) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_47) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_46) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_45) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_44) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_43) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_42) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_41) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_40) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_39) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_38) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_37) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_36) 
                                                                                | (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_35))))))))))))))))))))))) 
                                                                                & (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_34)) 
                                                                                << 2U) 
                                                                                | ((((~ 
                                                                                ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_63) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_62) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_61) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_60) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_59) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_58) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_57) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_56) 
                                                                                | ((0U 
                                                                                != (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__io_f_hi_hi_lo)) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_47) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_46) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_45) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_44) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_43) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_42) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_41) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_40) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_39) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_38) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_37) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_36) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_35) 
                                                                                | (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_34)))))))))))))))))))))))) 
                                                                                & (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_33)) 
                                                                                << 1U) 
                                                                                | ((~ 
                                                                                ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_63) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_62) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_61) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_60) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_59) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_58) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_57) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_56) 
                                                                                | ((0U 
                                                                                != (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__io_f_hi_hi_lo)) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_47) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_46) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_45) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_44) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_43) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_42) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_41) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_40) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_39) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_38) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_37) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_36) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_35) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_34) 
                                                                                | (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_33))))))))))))))))))))))))) 
                                                                                & (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_32)))))))))))))))))))))))))))) 
            << 0x20U) | (QData)((IData)(((((~ (IData)(
                                                      (0U 
                                                       != vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__io_f_hi))) 
                                           & (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_31)) 
                                          << 0x1fU) 
                                         | ((((~ ((0U 
                                                   != vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__io_f_hi) 
                                                  | (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_31))) 
                                              & (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_30)) 
                                             << 0x1eU) 
                                            | ((((~ 
                                                  ((0U 
                                                    != vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__io_f_hi) 
                                                   | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_31) 
                                                      | (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_30)))) 
                                                 & (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_29)) 
                                                << 0x1dU) 
                                               | ((((~ 
                                                     ((0U 
                                                       != vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__io_f_hi) 
                                                      | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_31) 
                                                         | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_30) 
                                                            | (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_29))))) 
                                                    & (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_28)) 
                                                   << 0x1cU) 
                                                  | ((((~ 
                                                        ((0U 
                                                          != vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__io_f_hi) 
                                                         | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_31) 
                                                            | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_30) 
                                                               | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_29) 
                                                                  | (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_28)))))) 
                                                       & (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_27)) 
                                                      << 0x1bU) 
                                                     | ((((~ 
                                                           ((0U 
                                                             != vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__io_f_hi) 
                                                            | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_31) 
                                                               | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_30) 
                                                                  | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_29) 
                                                                     | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_28) 
                                                                        | (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_27))))))) 
                                                          & (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_26)) 
                                                         << 0x1aU) 
                                                        | ((((~ 
                                                              ((0U 
                                                                != vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__io_f_hi) 
                                                               | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_31) 
                                                                  | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_30) 
                                                                     | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_29) 
                                                                        | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_28) 
                                                                           | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_27) 
                                                                              | (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_26)))))))) 
                                                             & (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_25)) 
                                                            << 0x19U) 
                                                           | ((((~ 
                                                                 ((0U 
                                                                   != vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__io_f_hi) 
                                                                  | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_31) 
                                                                     | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_30) 
                                                                        | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_29) 
                                                                           | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_28) 
                                                                              | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_27) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_26) 
                                                                                | (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_25))))))))) 
                                                                & (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_24)) 
                                                               << 0x18U) 
                                                              | (((((~ 
                                                                     ((0U 
                                                                       != vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__io_f_hi) 
                                                                      | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_31) 
                                                                         | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_30) 
                                                                            | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_29) 
                                                                               | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_28) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_27) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_26) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_25) 
                                                                                | (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_24)))))))))) 
                                                                    & (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_23)) 
                                                                   << 0x17U) 
                                                                  | ((((~ 
                                                                        ((0U 
                                                                          != vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__io_f_hi) 
                                                                         | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_31) 
                                                                            | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_30) 
                                                                               | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_29) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_28) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_27) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_26) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_25) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_24) 
                                                                                | (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_23))))))))))) 
                                                                       & (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_22)) 
                                                                      << 0x16U) 
                                                                     | ((((~ 
                                                                           ((0U 
                                                                             != vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__io_f_hi) 
                                                                            | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_31) 
                                                                               | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_30) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_29) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_28) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_27) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_26) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_25) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_24) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_23) 
                                                                                | (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_22)))))))))))) 
                                                                          & (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_21)) 
                                                                         << 0x15U) 
                                                                        | ((((~ 
                                                                              ((0U 
                                                                                != vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__io_f_hi) 
                                                                               | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_31) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_30) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_29) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_28) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_27) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_26) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_25) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_24) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_23) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_22) 
                                                                                | (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_21))))))))))))) 
                                                                             & (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_20)) 
                                                                            << 0x14U) 
                                                                           | ((((~ 
                                                                                ((0U 
                                                                                != vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__io_f_hi) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_31) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_30) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_29) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_28) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_27) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_26) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_25) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_24) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_23) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_22) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_21) 
                                                                                | (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_20)))))))))))))) 
                                                                                & (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_19)) 
                                                                               << 0x13U) 
                                                                              | ((((~ 
                                                                                ((0U 
                                                                                != vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__io_f_hi) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_31) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_30) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_29) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_28) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_27) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_26) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_25) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_24) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_23) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_22) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_21) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_20) 
                                                                                | (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_19))))))))))))))) 
                                                                                & (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_18)) 
                                                                                << 0x12U) 
                                                                                | ((((~ 
                                                                                ((0U 
                                                                                != vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__io_f_hi) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_31) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_30) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_29) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_28) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_27) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_26) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_25) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_24) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_23) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_22) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_21) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_20) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_19) 
                                                                                | (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_18)))))))))))))))) 
                                                                                & (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_17)) 
                                                                                << 0x11U) 
                                                                                | (((~ 
                                                                                ((0U 
                                                                                != vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__io_f_hi) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_31) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_30) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_29) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_28) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_27) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_26) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_25) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_24) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_23) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_22) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_21) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_20) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_19) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_18) 
                                                                                | (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_17))))))))))))))))) 
                                                                                & (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_16)) 
                                                                                << 0x10U)))))))) 
                                                                 | ((((~ 
                                                                       ((0U 
                                                                         != vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__io_f_hi) 
                                                                        | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_31) 
                                                                           | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_30) 
                                                                              | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_29) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_28) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_27) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_26) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_25) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_24) 
                                                                                | (0U 
                                                                                != (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__io_f_lo_hi_lo)))))))))))) 
                                                                      & (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_15)) 
                                                                     << 0xfU) 
                                                                    | ((((~ 
                                                                          ((0U 
                                                                            != vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__io_f_hi) 
                                                                           | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_31) 
                                                                              | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_30) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_29) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_28) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_27) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_26) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_25) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_24) 
                                                                                | ((0U 
                                                                                != (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__io_f_lo_hi_lo)) 
                                                                                | (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_15)))))))))))) 
                                                                         & (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_14)) 
                                                                        << 0xeU) 
                                                                       | ((((~ 
                                                                             ((0U 
                                                                               != vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__io_f_hi) 
                                                                              | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_31) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_30) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_29) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_28) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_27) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_26) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_25) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_24) 
                                                                                | ((0U 
                                                                                != (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__io_f_lo_hi_lo)) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_15) 
                                                                                | (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_14))))))))))))) 
                                                                            & (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_13)) 
                                                                           << 0xdU) 
                                                                          | ((((~ 
                                                                                ((0U 
                                                                                != vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__io_f_hi) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_31) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_30) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_29) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_28) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_27) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_26) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_25) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_24) 
                                                                                | ((0U 
                                                                                != (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__io_f_lo_hi_lo)) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_15) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_14) 
                                                                                | (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_13)))))))))))))) 
                                                                               & (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_12)) 
                                                                              << 0xcU) 
                                                                             | ((((~ 
                                                                                ((0U 
                                                                                != vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__io_f_hi) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_31) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_30) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_29) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_28) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_27) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_26) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_25) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_24) 
                                                                                | ((0U 
                                                                                != (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__io_f_lo_hi_lo)) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_15) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_14) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_13) 
                                                                                | (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_12))))))))))))))) 
                                                                                & (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_11)) 
                                                                                << 0xbU) 
                                                                                | ((((~ 
                                                                                ((0U 
                                                                                != vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__io_f_hi) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_31) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_30) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_29) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_28) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_27) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_26) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_25) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_24) 
                                                                                | ((0U 
                                                                                != (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__io_f_lo_hi_lo)) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_15) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_14) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_13) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_12) 
                                                                                | (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_11)))))))))))))))) 
                                                                                & (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_10)) 
                                                                                << 0xaU) 
                                                                                | ((((~ 
                                                                                ((0U 
                                                                                != vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__io_f_hi) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_31) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_30) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_29) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_28) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_27) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_26) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_25) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_24) 
                                                                                | ((0U 
                                                                                != (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__io_f_lo_hi_lo)) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_15) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_14) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_13) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_12) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_11) 
                                                                                | (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_10))))))))))))))))) 
                                                                                & (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_9)) 
                                                                                << 9U) 
                                                                                | ((((~ 
                                                                                ((0U 
                                                                                != vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__io_f_hi) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_31) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_30) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_29) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_28) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_27) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_26) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_25) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_24) 
                                                                                | ((0U 
                                                                                != (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__io_f_lo_hi_lo)) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_15) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_14) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_13) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_12) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_11) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_10) 
                                                                                | (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_9)))))))))))))))))) 
                                                                                & (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_8)) 
                                                                                << 8U) 
                                                                                | ((((~ 
                                                                                ((0U 
                                                                                != vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__io_f_hi) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_31) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_30) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_29) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_28) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_27) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_26) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_25) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_24) 
                                                                                | ((0U 
                                                                                != (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__io_f_lo_hi_lo)) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_15) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_14) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_13) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_12) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_11) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_10) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_9) 
                                                                                | (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_8))))))))))))))))))) 
                                                                                & (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_7)) 
                                                                                << 7U) 
                                                                                | ((((~ 
                                                                                ((0U 
                                                                                != vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__io_f_hi) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_31) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_30) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_29) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_28) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_27) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_26) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_25) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_24) 
                                                                                | ((0U 
                                                                                != (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__io_f_lo_hi_lo)) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_15) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_14) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_13) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_12) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_11) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_10) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_9) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_8) 
                                                                                | (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_7)))))))))))))))))))) 
                                                                                & (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_6)) 
                                                                                << 6U) 
                                                                                | ((((~ 
                                                                                ((0U 
                                                                                != vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__io_f_hi) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_31) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_30) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_29) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_28) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_27) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_26) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_25) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_24) 
                                                                                | ((0U 
                                                                                != (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__io_f_lo_hi_lo)) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_15) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_14) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_13) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_12) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_11) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_10) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_9) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_8) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_7) 
                                                                                | (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_6))))))))))))))))))))) 
                                                                                & (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_5)) 
                                                                                << 5U) 
                                                                                | ((((~ 
                                                                                ((0U 
                                                                                != vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__io_f_hi) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_31) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_30) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_29) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_28) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_27) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_26) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_25) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_24) 
                                                                                | ((0U 
                                                                                != (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__io_f_lo_hi_lo)) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_15) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_14) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_13) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_12) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_11) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_10) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_9) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_8) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_7) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_6) 
                                                                                | (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_5)))))))))))))))))))))) 
                                                                                & (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_4)) 
                                                                                << 4U) 
                                                                                | ((((~ 
                                                                                ((0U 
                                                                                != vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__io_f_hi) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_31) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_30) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_29) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_28) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_27) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_26) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_25) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_24) 
                                                                                | ((0U 
                                                                                != (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__io_f_lo_hi_lo)) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_15) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_14) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_13) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_12) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_11) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_10) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_9) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_8) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_7) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_6) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_5) 
                                                                                | (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_4))))))))))))))))))))))) 
                                                                                & (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_3)) 
                                                                                << 3U) 
                                                                                | ((((~ 
                                                                                ((0U 
                                                                                != vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__io_f_hi) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_31) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_30) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_29) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_28) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_27) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_26) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_25) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_24) 
                                                                                | ((0U 
                                                                                != (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__io_f_lo_hi_lo)) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_15) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_14) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_13) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_12) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_11) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_10) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_9) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_8) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_7) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_6) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_5) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_4) 
                                                                                | (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_3)))))))))))))))))))))))) 
                                                                                & (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_2)) 
                                                                                << 2U) 
                                                                                | ((((~ 
                                                                                ((0U 
                                                                                != vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__io_f_hi) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_31) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_30) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_29) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_28) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_27) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_26) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_25) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_24) 
                                                                                | ((0U 
                                                                                != (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__io_f_lo_hi_lo)) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_15) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_14) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_13) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_12) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_11) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_10) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_9) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_8) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_7) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_6) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_5) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_4) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_3) 
                                                                                | (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_2))))))))))))))))))))))))) 
                                                                                & (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_1)) 
                                                                                << 1U) 
                                                                                | (1U 
                                                                                & (~ 
                                                                                ((0U 
                                                                                != vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__io_f_hi) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_31) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_30) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_29) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_28) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_27) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_26) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_25) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_24) 
                                                                                | ((0U 
                                                                                != (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__io_f_lo_hi_lo)) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_15) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_14) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_13) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_12) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_11) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_10) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_9) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_8) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_7) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_6) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_5) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_4) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_3) 
                                                                                | ((IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_2) 
                                                                                | (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lza__DOT__f_1))))))))))))))))))))))))))))))))))))))))))))))))))))));
    vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s1__DOT__shift_amt 
        = ((0x200U & ((IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s1__DOT__exp_sum) 
                      - (IData)(0x65U))) ? 0U : (0x1ffU 
                                                 & ((IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s1__DOT__exceed_lim)
                                                     ? 
                                                    ((IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s1__DOT__exp_sum) 
                                                     - (IData)(0x65U))
                                                     : (IData)(vlSelf->__PVT__FMA__DOT__mulPipe__DOT__s1__DOT__lzc_clz__DOT___io_out_T_72))));
    vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__lzc_error 
        = ((~ (IData)((0U != (vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__in_abs 
                              & vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__one_mask)))) 
           & (IData)(vlSelf->__PVT__IntToFP__DOT__IntToFP_prenorm__DOT__in_sign));
}
