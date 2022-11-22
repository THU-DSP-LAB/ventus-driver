// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VVentus.h for the primary calling header

#include "verilated.h"

#include "VVentus_ArrayMultiplier.h"
#include "VVentus__Syms.h"

VL_INLINE_OPT void VVentus_ArrayMultiplier___nba_sequent__TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__mul__DOT__ArrayMultiplier_3__2(VVentus_ArrayMultiplier* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VVentus__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VVentus_ArrayMultiplier___nba_sequent__TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__mul__DOT__ArrayMultiplier_3__2\n"); );
    // Body
    vlSelf->__PVT___T_15 = ((~ ((~ (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__mul__DOT__ArrayMultiplier_3_io_out_ready)) 
                                & (IData)(vlSelf->__PVT__REG_1))) 
                            & (IData)(vlSelf->__PVT__REG));
    vlSelf->__PVT__mulDataModule_io_regEnables_0 = 
        ((~ ((~ (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__mul__DOT__ArrayMultiplier_3_io_out_ready)) 
             & ((IData)(vlSelf->__PVT__REG) & (IData)(vlSelf->__PVT__REG_1)))) 
         & (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__mul__DOT__ArrayMultiplier_io_in_valid));
    vlSelf->__PVT___mul_in1_T_4 = ((0x1aU == (0x1fU 
                                              & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__exe_data__DOT__ram_ctrl_alu_fn
                                              [0U])) 
                                   | (0x1bU == (0x1fU 
                                                & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__exe_data__DOT__ram_ctrl_alu_fn
                                                [0U])));
    vlSelf->__PVT__mulDataModule_io_b = ((0x15U == 
                                          (0x1fU & 
                                           vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__exe_data__DOT__ram_ctrl_alu_fn
                                           [0U])) ? 
                                         (((QData)((IData)(
                                                           (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__valu__DOT__ScalarALU_3_io_in2 
                                                            >> 0x1fU))) 
                                           << 0x20U) 
                                          | (QData)((IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__valu__DOT__ScalarALU_3_io_in2)))
                                          : (QData)((IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__valu__DOT__ScalarALU_3_io_in2)));
    vlSelf->__PVT__mul_in1 = ((IData)(vlSelf->__PVT___mul_in1_T_4)
                               ? vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__exe_data__DOT__ram_in3_3
                              [0U] : vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__valu__DOT___GEN_33);
    vlSelf->__PVT__mulDataModule__DOT__b_sext = (((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->__PVT__mulDataModule_io_b 
                                                                              >> 0x20U))))) 
                                                  << 0x21U) 
                                                 | vlSelf->__PVT__mulDataModule_io_b);
    vlSelf->__PVT__mulDataModule_io_a = (((0x15U == 
                                           (0x1fU & 
                                            vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__exe_data__DOT__ram_ctrl_alu_fn
                                            [0U])) 
                                          | (0x17U 
                                             == (0x1fU 
                                                 & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__exe_data__DOT__ram_ctrl_alu_fn
                                                 [0U])))
                                          ? (((QData)((IData)(
                                                              (vlSelf->__PVT__mul_in1 
                                                               >> 0x1fU))) 
                                              << 0x20U) 
                                             | (QData)((IData)(vlSelf->__PVT__mul_in1)))
                                          : (QData)((IData)(vlSelf->__PVT__mul_in1)));
    vlSelf->__PVT__mulDataModule__DOT__pp_temp = (0x3ffffffffULL 
                                                  & ((3U 
                                                      == 
                                                      (3U 
                                                       & (IData)(vlSelf->__PVT__mulDataModule_io_a)))
                                                      ? 
                                                     (~ vlSelf->__PVT__mulDataModule__DOT__b_sext)
                                                      : 
                                                     ((2U 
                                                       == 
                                                       (3U 
                                                        & (IData)(vlSelf->__PVT__mulDataModule_io_a)))
                                                       ? 
                                                      ((~ vlSelf->__PVT__mulDataModule__DOT__b_sext) 
                                                       << 1U)
                                                       : 
                                                      ((1U 
                                                        == 
                                                        (3U 
                                                         & (IData)(vlSelf->__PVT__mulDataModule_io_a)))
                                                        ? vlSelf->__PVT__mulDataModule__DOT__b_sext
                                                        : 0ULL))));
    vlSelf->__PVT__mulDataModule__DOT__pp_temp_1 = 
        (0x3ffffffffULL & ((6U == (7U & (IData)((vlSelf->__PVT__mulDataModule_io_a 
                                                 >> 1U))))
                            ? (~ vlSelf->__PVT__mulDataModule__DOT__b_sext)
                            : ((5U == (7U & (IData)(
                                                    (vlSelf->__PVT__mulDataModule_io_a 
                                                     >> 1U))))
                                ? (~ vlSelf->__PVT__mulDataModule__DOT__b_sext)
                                : ((4U == (7U & (IData)(
                                                        (vlSelf->__PVT__mulDataModule_io_a 
                                                         >> 1U))))
                                    ? ((~ vlSelf->__PVT__mulDataModule__DOT__b_sext) 
                                       << 1U) : ((3U 
                                                  == 
                                                  (7U 
                                                   & (IData)(
                                                             (vlSelf->__PVT__mulDataModule_io_a 
                                                              >> 1U))))
                                                  ? 
                                                 (vlSelf->__PVT__mulDataModule__DOT__b_sext 
                                                  << 1U)
                                                  : 
                                                 ((2U 
                                                   == 
                                                   (7U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__mulDataModule_io_a 
                                                               >> 1U))))
                                                   ? vlSelf->__PVT__mulDataModule__DOT__b_sext
                                                   : 
                                                  ((1U 
                                                    == 
                                                    (7U 
                                                     & (IData)(
                                                               (vlSelf->__PVT__mulDataModule_io_a 
                                                                >> 1U))))
                                                    ? vlSelf->__PVT__mulDataModule__DOT__b_sext
                                                    : 0ULL)))))));
    vlSelf->__PVT__mulDataModule__DOT__pp_temp_2 = 
        (0x3ffffffffULL & ((6U == (7U & (IData)((vlSelf->__PVT__mulDataModule_io_a 
                                                 >> 3U))))
                            ? (~ vlSelf->__PVT__mulDataModule__DOT__b_sext)
                            : ((5U == (7U & (IData)(
                                                    (vlSelf->__PVT__mulDataModule_io_a 
                                                     >> 3U))))
                                ? (~ vlSelf->__PVT__mulDataModule__DOT__b_sext)
                                : ((4U == (7U & (IData)(
                                                        (vlSelf->__PVT__mulDataModule_io_a 
                                                         >> 3U))))
                                    ? ((~ vlSelf->__PVT__mulDataModule__DOT__b_sext) 
                                       << 1U) : ((3U 
                                                  == 
                                                  (7U 
                                                   & (IData)(
                                                             (vlSelf->__PVT__mulDataModule_io_a 
                                                              >> 3U))))
                                                  ? 
                                                 (vlSelf->__PVT__mulDataModule__DOT__b_sext 
                                                  << 1U)
                                                  : 
                                                 ((2U 
                                                   == 
                                                   (7U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__mulDataModule_io_a 
                                                               >> 3U))))
                                                   ? vlSelf->__PVT__mulDataModule__DOT__b_sext
                                                   : 
                                                  ((1U 
                                                    == 
                                                    (7U 
                                                     & (IData)(
                                                               (vlSelf->__PVT__mulDataModule_io_a 
                                                                >> 3U))))
                                                    ? vlSelf->__PVT__mulDataModule__DOT__b_sext
                                                    : 0ULL)))))));
    vlSelf->__PVT__mulDataModule__DOT__pp_temp_3 = 
        (0x3ffffffffULL & ((6U == (7U & (IData)((vlSelf->__PVT__mulDataModule_io_a 
                                                 >> 5U))))
                            ? (~ vlSelf->__PVT__mulDataModule__DOT__b_sext)
                            : ((5U == (7U & (IData)(
                                                    (vlSelf->__PVT__mulDataModule_io_a 
                                                     >> 5U))))
                                ? (~ vlSelf->__PVT__mulDataModule__DOT__b_sext)
                                : ((4U == (7U & (IData)(
                                                        (vlSelf->__PVT__mulDataModule_io_a 
                                                         >> 5U))))
                                    ? ((~ vlSelf->__PVT__mulDataModule__DOT__b_sext) 
                                       << 1U) : ((3U 
                                                  == 
                                                  (7U 
                                                   & (IData)(
                                                             (vlSelf->__PVT__mulDataModule_io_a 
                                                              >> 5U))))
                                                  ? 
                                                 (vlSelf->__PVT__mulDataModule__DOT__b_sext 
                                                  << 1U)
                                                  : 
                                                 ((2U 
                                                   == 
                                                   (7U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__mulDataModule_io_a 
                                                               >> 5U))))
                                                   ? vlSelf->__PVT__mulDataModule__DOT__b_sext
                                                   : 
                                                  ((1U 
                                                    == 
                                                    (7U 
                                                     & (IData)(
                                                               (vlSelf->__PVT__mulDataModule_io_a 
                                                                >> 5U))))
                                                    ? vlSelf->__PVT__mulDataModule__DOT__b_sext
                                                    : 0ULL)))))));
    vlSelf->__PVT__mulDataModule__DOT__pp_temp_4 = 
        (0x3ffffffffULL & ((6U == (7U & (IData)((vlSelf->__PVT__mulDataModule_io_a 
                                                 >> 7U))))
                            ? (~ vlSelf->__PVT__mulDataModule__DOT__b_sext)
                            : ((5U == (7U & (IData)(
                                                    (vlSelf->__PVT__mulDataModule_io_a 
                                                     >> 7U))))
                                ? (~ vlSelf->__PVT__mulDataModule__DOT__b_sext)
                                : ((4U == (7U & (IData)(
                                                        (vlSelf->__PVT__mulDataModule_io_a 
                                                         >> 7U))))
                                    ? ((~ vlSelf->__PVT__mulDataModule__DOT__b_sext) 
                                       << 1U) : ((3U 
                                                  == 
                                                  (7U 
                                                   & (IData)(
                                                             (vlSelf->__PVT__mulDataModule_io_a 
                                                              >> 7U))))
                                                  ? 
                                                 (vlSelf->__PVT__mulDataModule__DOT__b_sext 
                                                  << 1U)
                                                  : 
                                                 ((2U 
                                                   == 
                                                   (7U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__mulDataModule_io_a 
                                                               >> 7U))))
                                                   ? vlSelf->__PVT__mulDataModule__DOT__b_sext
                                                   : 
                                                  ((1U 
                                                    == 
                                                    (7U 
                                                     & (IData)(
                                                               (vlSelf->__PVT__mulDataModule_io_a 
                                                                >> 7U))))
                                                    ? vlSelf->__PVT__mulDataModule__DOT__b_sext
                                                    : 0ULL)))))));
    vlSelf->__PVT__mulDataModule__DOT__pp_temp_5 = 
        (0x3ffffffffULL & ((6U == (7U & (IData)((vlSelf->__PVT__mulDataModule_io_a 
                                                 >> 9U))))
                            ? (~ vlSelf->__PVT__mulDataModule__DOT__b_sext)
                            : ((5U == (7U & (IData)(
                                                    (vlSelf->__PVT__mulDataModule_io_a 
                                                     >> 9U))))
                                ? (~ vlSelf->__PVT__mulDataModule__DOT__b_sext)
                                : ((4U == (7U & (IData)(
                                                        (vlSelf->__PVT__mulDataModule_io_a 
                                                         >> 9U))))
                                    ? ((~ vlSelf->__PVT__mulDataModule__DOT__b_sext) 
                                       << 1U) : ((3U 
                                                  == 
                                                  (7U 
                                                   & (IData)(
                                                             (vlSelf->__PVT__mulDataModule_io_a 
                                                              >> 9U))))
                                                  ? 
                                                 (vlSelf->__PVT__mulDataModule__DOT__b_sext 
                                                  << 1U)
                                                  : 
                                                 ((2U 
                                                   == 
                                                   (7U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__mulDataModule_io_a 
                                                               >> 9U))))
                                                   ? vlSelf->__PVT__mulDataModule__DOT__b_sext
                                                   : 
                                                  ((1U 
                                                    == 
                                                    (7U 
                                                     & (IData)(
                                                               (vlSelf->__PVT__mulDataModule_io_a 
                                                                >> 9U))))
                                                    ? vlSelf->__PVT__mulDataModule__DOT__b_sext
                                                    : 0ULL)))))));
    vlSelf->__PVT__mulDataModule__DOT__pp_temp_6 = 
        (0x3ffffffffULL & ((6U == (7U & (IData)((vlSelf->__PVT__mulDataModule_io_a 
                                                 >> 0xbU))))
                            ? (~ vlSelf->__PVT__mulDataModule__DOT__b_sext)
                            : ((5U == (7U & (IData)(
                                                    (vlSelf->__PVT__mulDataModule_io_a 
                                                     >> 0xbU))))
                                ? (~ vlSelf->__PVT__mulDataModule__DOT__b_sext)
                                : ((4U == (7U & (IData)(
                                                        (vlSelf->__PVT__mulDataModule_io_a 
                                                         >> 0xbU))))
                                    ? ((~ vlSelf->__PVT__mulDataModule__DOT__b_sext) 
                                       << 1U) : ((3U 
                                                  == 
                                                  (7U 
                                                   & (IData)(
                                                             (vlSelf->__PVT__mulDataModule_io_a 
                                                              >> 0xbU))))
                                                  ? 
                                                 (vlSelf->__PVT__mulDataModule__DOT__b_sext 
                                                  << 1U)
                                                  : 
                                                 ((2U 
                                                   == 
                                                   (7U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__mulDataModule_io_a 
                                                               >> 0xbU))))
                                                   ? vlSelf->__PVT__mulDataModule__DOT__b_sext
                                                   : 
                                                  ((1U 
                                                    == 
                                                    (7U 
                                                     & (IData)(
                                                               (vlSelf->__PVT__mulDataModule_io_a 
                                                                >> 0xbU))))
                                                    ? vlSelf->__PVT__mulDataModule__DOT__b_sext
                                                    : 0ULL)))))));
    vlSelf->__PVT__mulDataModule__DOT__pp_temp_7 = 
        (0x3ffffffffULL & ((6U == (7U & (IData)((vlSelf->__PVT__mulDataModule_io_a 
                                                 >> 0xdU))))
                            ? (~ vlSelf->__PVT__mulDataModule__DOT__b_sext)
                            : ((5U == (7U & (IData)(
                                                    (vlSelf->__PVT__mulDataModule_io_a 
                                                     >> 0xdU))))
                                ? (~ vlSelf->__PVT__mulDataModule__DOT__b_sext)
                                : ((4U == (7U & (IData)(
                                                        (vlSelf->__PVT__mulDataModule_io_a 
                                                         >> 0xdU))))
                                    ? ((~ vlSelf->__PVT__mulDataModule__DOT__b_sext) 
                                       << 1U) : ((3U 
                                                  == 
                                                  (7U 
                                                   & (IData)(
                                                             (vlSelf->__PVT__mulDataModule_io_a 
                                                              >> 0xdU))))
                                                  ? 
                                                 (vlSelf->__PVT__mulDataModule__DOT__b_sext 
                                                  << 1U)
                                                  : 
                                                 ((2U 
                                                   == 
                                                   (7U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__mulDataModule_io_a 
                                                               >> 0xdU))))
                                                   ? vlSelf->__PVT__mulDataModule__DOT__b_sext
                                                   : 
                                                  ((1U 
                                                    == 
                                                    (7U 
                                                     & (IData)(
                                                               (vlSelf->__PVT__mulDataModule_io_a 
                                                                >> 0xdU))))
                                                    ? vlSelf->__PVT__mulDataModule__DOT__b_sext
                                                    : 0ULL)))))));
    vlSelf->__PVT__mulDataModule__DOT__pp_temp_8 = 
        (0x3ffffffffULL & ((6U == (7U & (IData)((vlSelf->__PVT__mulDataModule_io_a 
                                                 >> 0xfU))))
                            ? (~ vlSelf->__PVT__mulDataModule__DOT__b_sext)
                            : ((5U == (7U & (IData)(
                                                    (vlSelf->__PVT__mulDataModule_io_a 
                                                     >> 0xfU))))
                                ? (~ vlSelf->__PVT__mulDataModule__DOT__b_sext)
                                : ((4U == (7U & (IData)(
                                                        (vlSelf->__PVT__mulDataModule_io_a 
                                                         >> 0xfU))))
                                    ? ((~ vlSelf->__PVT__mulDataModule__DOT__b_sext) 
                                       << 1U) : ((3U 
                                                  == 
                                                  (7U 
                                                   & (IData)(
                                                             (vlSelf->__PVT__mulDataModule_io_a 
                                                              >> 0xfU))))
                                                  ? 
                                                 (vlSelf->__PVT__mulDataModule__DOT__b_sext 
                                                  << 1U)
                                                  : 
                                                 ((2U 
                                                   == 
                                                   (7U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__mulDataModule_io_a 
                                                               >> 0xfU))))
                                                   ? vlSelf->__PVT__mulDataModule__DOT__b_sext
                                                   : 
                                                  ((1U 
                                                    == 
                                                    (7U 
                                                     & (IData)(
                                                               (vlSelf->__PVT__mulDataModule_io_a 
                                                                >> 0xfU))))
                                                    ? vlSelf->__PVT__mulDataModule__DOT__b_sext
                                                    : 0ULL)))))));
    vlSelf->__PVT__mulDataModule__DOT__pp_temp_9 = 
        (0x3ffffffffULL & ((6U == (7U & (IData)((vlSelf->__PVT__mulDataModule_io_a 
                                                 >> 0x11U))))
                            ? (~ vlSelf->__PVT__mulDataModule__DOT__b_sext)
                            : ((5U == (7U & (IData)(
                                                    (vlSelf->__PVT__mulDataModule_io_a 
                                                     >> 0x11U))))
                                ? (~ vlSelf->__PVT__mulDataModule__DOT__b_sext)
                                : ((4U == (7U & (IData)(
                                                        (vlSelf->__PVT__mulDataModule_io_a 
                                                         >> 0x11U))))
                                    ? ((~ vlSelf->__PVT__mulDataModule__DOT__b_sext) 
                                       << 1U) : ((3U 
                                                  == 
                                                  (7U 
                                                   & (IData)(
                                                             (vlSelf->__PVT__mulDataModule_io_a 
                                                              >> 0x11U))))
                                                  ? 
                                                 (vlSelf->__PVT__mulDataModule__DOT__b_sext 
                                                  << 1U)
                                                  : 
                                                 ((2U 
                                                   == 
                                                   (7U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__mulDataModule_io_a 
                                                               >> 0x11U))))
                                                   ? vlSelf->__PVT__mulDataModule__DOT__b_sext
                                                   : 
                                                  ((1U 
                                                    == 
                                                    (7U 
                                                     & (IData)(
                                                               (vlSelf->__PVT__mulDataModule_io_a 
                                                                >> 0x11U))))
                                                    ? vlSelf->__PVT__mulDataModule__DOT__b_sext
                                                    : 0ULL)))))));
    vlSelf->__PVT__mulDataModule__DOT__pp_temp_10 = 
        (0x3ffffffffULL & ((6U == (7U & (IData)((vlSelf->__PVT__mulDataModule_io_a 
                                                 >> 0x13U))))
                            ? (~ vlSelf->__PVT__mulDataModule__DOT__b_sext)
                            : ((5U == (7U & (IData)(
                                                    (vlSelf->__PVT__mulDataModule_io_a 
                                                     >> 0x13U))))
                                ? (~ vlSelf->__PVT__mulDataModule__DOT__b_sext)
                                : ((4U == (7U & (IData)(
                                                        (vlSelf->__PVT__mulDataModule_io_a 
                                                         >> 0x13U))))
                                    ? ((~ vlSelf->__PVT__mulDataModule__DOT__b_sext) 
                                       << 1U) : ((3U 
                                                  == 
                                                  (7U 
                                                   & (IData)(
                                                             (vlSelf->__PVT__mulDataModule_io_a 
                                                              >> 0x13U))))
                                                  ? 
                                                 (vlSelf->__PVT__mulDataModule__DOT__b_sext 
                                                  << 1U)
                                                  : 
                                                 ((2U 
                                                   == 
                                                   (7U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__mulDataModule_io_a 
                                                               >> 0x13U))))
                                                   ? vlSelf->__PVT__mulDataModule__DOT__b_sext
                                                   : 
                                                  ((1U 
                                                    == 
                                                    (7U 
                                                     & (IData)(
                                                               (vlSelf->__PVT__mulDataModule_io_a 
                                                                >> 0x13U))))
                                                    ? vlSelf->__PVT__mulDataModule__DOT__b_sext
                                                    : 0ULL)))))));
    vlSelf->__PVT__mulDataModule__DOT__pp_temp_11 = 
        (0x3ffffffffULL & ((6U == (7U & (IData)((vlSelf->__PVT__mulDataModule_io_a 
                                                 >> 0x15U))))
                            ? (~ vlSelf->__PVT__mulDataModule__DOT__b_sext)
                            : ((5U == (7U & (IData)(
                                                    (vlSelf->__PVT__mulDataModule_io_a 
                                                     >> 0x15U))))
                                ? (~ vlSelf->__PVT__mulDataModule__DOT__b_sext)
                                : ((4U == (7U & (IData)(
                                                        (vlSelf->__PVT__mulDataModule_io_a 
                                                         >> 0x15U))))
                                    ? ((~ vlSelf->__PVT__mulDataModule__DOT__b_sext) 
                                       << 1U) : ((3U 
                                                  == 
                                                  (7U 
                                                   & (IData)(
                                                             (vlSelf->__PVT__mulDataModule_io_a 
                                                              >> 0x15U))))
                                                  ? 
                                                 (vlSelf->__PVT__mulDataModule__DOT__b_sext 
                                                  << 1U)
                                                  : 
                                                 ((2U 
                                                   == 
                                                   (7U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__mulDataModule_io_a 
                                                               >> 0x15U))))
                                                   ? vlSelf->__PVT__mulDataModule__DOT__b_sext
                                                   : 
                                                  ((1U 
                                                    == 
                                                    (7U 
                                                     & (IData)(
                                                               (vlSelf->__PVT__mulDataModule_io_a 
                                                                >> 0x15U))))
                                                    ? vlSelf->__PVT__mulDataModule__DOT__b_sext
                                                    : 0ULL)))))));
    vlSelf->__PVT__mulDataModule__DOT__pp_temp_12 = 
        (0x3ffffffffULL & ((6U == (7U & (IData)((vlSelf->__PVT__mulDataModule_io_a 
                                                 >> 0x17U))))
                            ? (~ vlSelf->__PVT__mulDataModule__DOT__b_sext)
                            : ((5U == (7U & (IData)(
                                                    (vlSelf->__PVT__mulDataModule_io_a 
                                                     >> 0x17U))))
                                ? (~ vlSelf->__PVT__mulDataModule__DOT__b_sext)
                                : ((4U == (7U & (IData)(
                                                        (vlSelf->__PVT__mulDataModule_io_a 
                                                         >> 0x17U))))
                                    ? ((~ vlSelf->__PVT__mulDataModule__DOT__b_sext) 
                                       << 1U) : ((3U 
                                                  == 
                                                  (7U 
                                                   & (IData)(
                                                             (vlSelf->__PVT__mulDataModule_io_a 
                                                              >> 0x17U))))
                                                  ? 
                                                 (vlSelf->__PVT__mulDataModule__DOT__b_sext 
                                                  << 1U)
                                                  : 
                                                 ((2U 
                                                   == 
                                                   (7U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__mulDataModule_io_a 
                                                               >> 0x17U))))
                                                   ? vlSelf->__PVT__mulDataModule__DOT__b_sext
                                                   : 
                                                  ((1U 
                                                    == 
                                                    (7U 
                                                     & (IData)(
                                                               (vlSelf->__PVT__mulDataModule_io_a 
                                                                >> 0x17U))))
                                                    ? vlSelf->__PVT__mulDataModule__DOT__b_sext
                                                    : 0ULL)))))));
    vlSelf->__PVT__mulDataModule__DOT__pp_temp_13 = 
        (0x3ffffffffULL & ((6U == (7U & (IData)((vlSelf->__PVT__mulDataModule_io_a 
                                                 >> 0x19U))))
                            ? (~ vlSelf->__PVT__mulDataModule__DOT__b_sext)
                            : ((5U == (7U & (IData)(
                                                    (vlSelf->__PVT__mulDataModule_io_a 
                                                     >> 0x19U))))
                                ? (~ vlSelf->__PVT__mulDataModule__DOT__b_sext)
                                : ((4U == (7U & (IData)(
                                                        (vlSelf->__PVT__mulDataModule_io_a 
                                                         >> 0x19U))))
                                    ? ((~ vlSelf->__PVT__mulDataModule__DOT__b_sext) 
                                       << 1U) : ((3U 
                                                  == 
                                                  (7U 
                                                   & (IData)(
                                                             (vlSelf->__PVT__mulDataModule_io_a 
                                                              >> 0x19U))))
                                                  ? 
                                                 (vlSelf->__PVT__mulDataModule__DOT__b_sext 
                                                  << 1U)
                                                  : 
                                                 ((2U 
                                                   == 
                                                   (7U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__mulDataModule_io_a 
                                                               >> 0x19U))))
                                                   ? vlSelf->__PVT__mulDataModule__DOT__b_sext
                                                   : 
                                                  ((1U 
                                                    == 
                                                    (7U 
                                                     & (IData)(
                                                               (vlSelf->__PVT__mulDataModule_io_a 
                                                                >> 0x19U))))
                                                    ? vlSelf->__PVT__mulDataModule__DOT__b_sext
                                                    : 0ULL)))))));
    vlSelf->__PVT__mulDataModule__DOT__pp_temp_14 = 
        (0x3ffffffffULL & ((6U == (7U & (IData)((vlSelf->__PVT__mulDataModule_io_a 
                                                 >> 0x1bU))))
                            ? (~ vlSelf->__PVT__mulDataModule__DOT__b_sext)
                            : ((5U == (7U & (IData)(
                                                    (vlSelf->__PVT__mulDataModule_io_a 
                                                     >> 0x1bU))))
                                ? (~ vlSelf->__PVT__mulDataModule__DOT__b_sext)
                                : ((4U == (7U & (IData)(
                                                        (vlSelf->__PVT__mulDataModule_io_a 
                                                         >> 0x1bU))))
                                    ? ((~ vlSelf->__PVT__mulDataModule__DOT__b_sext) 
                                       << 1U) : ((3U 
                                                  == 
                                                  (7U 
                                                   & (IData)(
                                                             (vlSelf->__PVT__mulDataModule_io_a 
                                                              >> 0x1bU))))
                                                  ? 
                                                 (vlSelf->__PVT__mulDataModule__DOT__b_sext 
                                                  << 1U)
                                                  : 
                                                 ((2U 
                                                   == 
                                                   (7U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__mulDataModule_io_a 
                                                               >> 0x1bU))))
                                                   ? vlSelf->__PVT__mulDataModule__DOT__b_sext
                                                   : 
                                                  ((1U 
                                                    == 
                                                    (7U 
                                                     & (IData)(
                                                               (vlSelf->__PVT__mulDataModule_io_a 
                                                                >> 0x1bU))))
                                                    ? vlSelf->__PVT__mulDataModule__DOT__b_sext
                                                    : 0ULL)))))));
    vlSelf->__PVT__mulDataModule__DOT__pp_temp_15 = 
        (0x3ffffffffULL & ((6U == (7U & (IData)((vlSelf->__PVT__mulDataModule_io_a 
                                                 >> 0x1dU))))
                            ? (~ vlSelf->__PVT__mulDataModule__DOT__b_sext)
                            : ((5U == (7U & (IData)(
                                                    (vlSelf->__PVT__mulDataModule_io_a 
                                                     >> 0x1dU))))
                                ? (~ vlSelf->__PVT__mulDataModule__DOT__b_sext)
                                : ((4U == (7U & (IData)(
                                                        (vlSelf->__PVT__mulDataModule_io_a 
                                                         >> 0x1dU))))
                                    ? ((~ vlSelf->__PVT__mulDataModule__DOT__b_sext) 
                                       << 1U) : ((3U 
                                                  == 
                                                  (7U 
                                                   & (IData)(
                                                             (vlSelf->__PVT__mulDataModule_io_a 
                                                              >> 0x1dU))))
                                                  ? 
                                                 (vlSelf->__PVT__mulDataModule__DOT__b_sext 
                                                  << 1U)
                                                  : 
                                                 ((2U 
                                                   == 
                                                   (7U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__mulDataModule_io_a 
                                                               >> 0x1dU))))
                                                   ? vlSelf->__PVT__mulDataModule__DOT__b_sext
                                                   : 
                                                  ((1U 
                                                    == 
                                                    (7U 
                                                     & (IData)(
                                                               (vlSelf->__PVT__mulDataModule_io_a 
                                                                >> 0x1dU))))
                                                    ? vlSelf->__PVT__mulDataModule__DOT__b_sext
                                                    : 0ULL)))))));
    vlSelf->__PVT__mulDataModule__DOT__last_x_1 = (
                                                   (4U 
                                                    & ((IData)(
                                                               (vlSelf->__PVT__mulDataModule_io_a 
                                                                >> 0x20U)) 
                                                       << 2U)) 
                                                   | (3U 
                                                      & (IData)(
                                                                (vlSelf->__PVT__mulDataModule_io_a 
                                                                 >> 0x1fU))));
    vlSelf->__PVT__mulDataModule__DOT__pp = (((QData)((IData)(
                                                              (1U 
                                                               & (~ (IData)(
                                                                            (vlSelf->__PVT__mulDataModule__DOT__pp_temp 
                                                                             >> 0x21U)))))) 
                                              << 0x24U) 
                                             | (((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->__PVT__mulDataModule__DOT__pp_temp 
                                                                             >> 0x21U))))) 
                                                 << 0x23U) 
                                                | (((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->__PVT__mulDataModule__DOT__pp_temp 
                                                                                >> 0x21U))))) 
                                                    << 0x22U) 
                                                   | vlSelf->__PVT__mulDataModule__DOT__pp_temp)));
    vlSelf->__PVT__mulDataModule__DOT__pp_1 = (0x2000000000ULL 
                                               | (((QData)((IData)(
                                                                   (1U 
                                                                    & (~ (IData)(
                                                                                (vlSelf->__PVT__mulDataModule__DOT__pp_temp_1 
                                                                                >> 0x21U)))))) 
                                                   << 0x24U) 
                                                  | ((vlSelf->__PVT__mulDataModule__DOT__pp_temp_1 
                                                      << 2U) 
                                                     | (QData)((IData)(
                                                                       ((3U 
                                                                         == 
                                                                         (3U 
                                                                          & (IData)(vlSelf->__PVT__mulDataModule_io_a)))
                                                                         ? 1U
                                                                         : 
                                                                        ((2U 
                                                                          == 
                                                                          (3U 
                                                                           & (IData)(vlSelf->__PVT__mulDataModule_io_a)))
                                                                          ? 2U
                                                                          : 0U)))))));
    vlSelf->__PVT__mulDataModule__DOT__pp_2 = (0x2000000000ULL 
                                               | (((QData)((IData)(
                                                                   (1U 
                                                                    & (~ (IData)(
                                                                                (vlSelf->__PVT__mulDataModule__DOT__pp_temp_2 
                                                                                >> 0x21U)))))) 
                                                   << 0x24U) 
                                                  | ((vlSelf->__PVT__mulDataModule__DOT__pp_temp_2 
                                                      << 2U) 
                                                     | (QData)((IData)(
                                                                       ((6U 
                                                                         == 
                                                                         (7U 
                                                                          & (IData)(
                                                                                (vlSelf->__PVT__mulDataModule_io_a 
                                                                                >> 1U))))
                                                                         ? 1U
                                                                         : 
                                                                        ((5U 
                                                                          == 
                                                                          (7U 
                                                                           & (IData)(
                                                                                (vlSelf->__PVT__mulDataModule_io_a 
                                                                                >> 1U))))
                                                                          ? 1U
                                                                          : 
                                                                         ((4U 
                                                                           == 
                                                                           (7U 
                                                                            & (IData)(
                                                                                (vlSelf->__PVT__mulDataModule_io_a 
                                                                                >> 1U))))
                                                                           ? 2U
                                                                           : 0U))))))));
    vlSelf->__PVT__mulDataModule__DOT__pp_3 = (0x2000000000ULL 
                                               | (((QData)((IData)(
                                                                   (1U 
                                                                    & (~ (IData)(
                                                                                (vlSelf->__PVT__mulDataModule__DOT__pp_temp_3 
                                                                                >> 0x21U)))))) 
                                                   << 0x24U) 
                                                  | ((vlSelf->__PVT__mulDataModule__DOT__pp_temp_3 
                                                      << 2U) 
                                                     | (QData)((IData)(
                                                                       ((6U 
                                                                         == 
                                                                         (7U 
                                                                          & (IData)(
                                                                                (vlSelf->__PVT__mulDataModule_io_a 
                                                                                >> 3U))))
                                                                         ? 1U
                                                                         : 
                                                                        ((5U 
                                                                          == 
                                                                          (7U 
                                                                           & (IData)(
                                                                                (vlSelf->__PVT__mulDataModule_io_a 
                                                                                >> 3U))))
                                                                          ? 1U
                                                                          : 
                                                                         ((4U 
                                                                           == 
                                                                           (7U 
                                                                            & (IData)(
                                                                                (vlSelf->__PVT__mulDataModule_io_a 
                                                                                >> 3U))))
                                                                           ? 2U
                                                                           : 0U))))))));
    vlSelf->__PVT__mulDataModule__DOT__pp_4 = (0x2000000000ULL 
                                               | (((QData)((IData)(
                                                                   (1U 
                                                                    & (~ (IData)(
                                                                                (vlSelf->__PVT__mulDataModule__DOT__pp_temp_4 
                                                                                >> 0x21U)))))) 
                                                   << 0x24U) 
                                                  | ((vlSelf->__PVT__mulDataModule__DOT__pp_temp_4 
                                                      << 2U) 
                                                     | (QData)((IData)(
                                                                       ((6U 
                                                                         == 
                                                                         (7U 
                                                                          & (IData)(
                                                                                (vlSelf->__PVT__mulDataModule_io_a 
                                                                                >> 5U))))
                                                                         ? 1U
                                                                         : 
                                                                        ((5U 
                                                                          == 
                                                                          (7U 
                                                                           & (IData)(
                                                                                (vlSelf->__PVT__mulDataModule_io_a 
                                                                                >> 5U))))
                                                                          ? 1U
                                                                          : 
                                                                         ((4U 
                                                                           == 
                                                                           (7U 
                                                                            & (IData)(
                                                                                (vlSelf->__PVT__mulDataModule_io_a 
                                                                                >> 5U))))
                                                                           ? 2U
                                                                           : 0U))))))));
    vlSelf->__PVT__mulDataModule__DOT__pp_5 = (0x2000000000ULL 
                                               | (((QData)((IData)(
                                                                   (1U 
                                                                    & (~ (IData)(
                                                                                (vlSelf->__PVT__mulDataModule__DOT__pp_temp_5 
                                                                                >> 0x21U)))))) 
                                                   << 0x24U) 
                                                  | ((vlSelf->__PVT__mulDataModule__DOT__pp_temp_5 
                                                      << 2U) 
                                                     | (QData)((IData)(
                                                                       ((6U 
                                                                         == 
                                                                         (7U 
                                                                          & (IData)(
                                                                                (vlSelf->__PVT__mulDataModule_io_a 
                                                                                >> 7U))))
                                                                         ? 1U
                                                                         : 
                                                                        ((5U 
                                                                          == 
                                                                          (7U 
                                                                           & (IData)(
                                                                                (vlSelf->__PVT__mulDataModule_io_a 
                                                                                >> 7U))))
                                                                          ? 1U
                                                                          : 
                                                                         ((4U 
                                                                           == 
                                                                           (7U 
                                                                            & (IData)(
                                                                                (vlSelf->__PVT__mulDataModule_io_a 
                                                                                >> 7U))))
                                                                           ? 2U
                                                                           : 0U))))))));
    vlSelf->__PVT__mulDataModule__DOT__pp_6 = (0x2000000000ULL 
                                               | (((QData)((IData)(
                                                                   (1U 
                                                                    & (~ (IData)(
                                                                                (vlSelf->__PVT__mulDataModule__DOT__pp_temp_6 
                                                                                >> 0x21U)))))) 
                                                   << 0x24U) 
                                                  | ((vlSelf->__PVT__mulDataModule__DOT__pp_temp_6 
                                                      << 2U) 
                                                     | (QData)((IData)(
                                                                       ((6U 
                                                                         == 
                                                                         (7U 
                                                                          & (IData)(
                                                                                (vlSelf->__PVT__mulDataModule_io_a 
                                                                                >> 9U))))
                                                                         ? 1U
                                                                         : 
                                                                        ((5U 
                                                                          == 
                                                                          (7U 
                                                                           & (IData)(
                                                                                (vlSelf->__PVT__mulDataModule_io_a 
                                                                                >> 9U))))
                                                                          ? 1U
                                                                          : 
                                                                         ((4U 
                                                                           == 
                                                                           (7U 
                                                                            & (IData)(
                                                                                (vlSelf->__PVT__mulDataModule_io_a 
                                                                                >> 9U))))
                                                                           ? 2U
                                                                           : 0U))))))));
    vlSelf->__PVT__mulDataModule__DOT__pp_7 = (0x2000000000ULL 
                                               | (((QData)((IData)(
                                                                   (1U 
                                                                    & (~ (IData)(
                                                                                (vlSelf->__PVT__mulDataModule__DOT__pp_temp_7 
                                                                                >> 0x21U)))))) 
                                                   << 0x24U) 
                                                  | ((vlSelf->__PVT__mulDataModule__DOT__pp_temp_7 
                                                      << 2U) 
                                                     | (QData)((IData)(
                                                                       ((6U 
                                                                         == 
                                                                         (7U 
                                                                          & (IData)(
                                                                                (vlSelf->__PVT__mulDataModule_io_a 
                                                                                >> 0xbU))))
                                                                         ? 1U
                                                                         : 
                                                                        ((5U 
                                                                          == 
                                                                          (7U 
                                                                           & (IData)(
                                                                                (vlSelf->__PVT__mulDataModule_io_a 
                                                                                >> 0xbU))))
                                                                          ? 1U
                                                                          : 
                                                                         ((4U 
                                                                           == 
                                                                           (7U 
                                                                            & (IData)(
                                                                                (vlSelf->__PVT__mulDataModule_io_a 
                                                                                >> 0xbU))))
                                                                           ? 2U
                                                                           : 0U))))))));
    vlSelf->__PVT__mulDataModule__DOT__pp_8 = (0x2000000000ULL 
                                               | (((QData)((IData)(
                                                                   (1U 
                                                                    & (~ (IData)(
                                                                                (vlSelf->__PVT__mulDataModule__DOT__pp_temp_8 
                                                                                >> 0x21U)))))) 
                                                   << 0x24U) 
                                                  | ((vlSelf->__PVT__mulDataModule__DOT__pp_temp_8 
                                                      << 2U) 
                                                     | (QData)((IData)(
                                                                       ((6U 
                                                                         == 
                                                                         (7U 
                                                                          & (IData)(
                                                                                (vlSelf->__PVT__mulDataModule_io_a 
                                                                                >> 0xdU))))
                                                                         ? 1U
                                                                         : 
                                                                        ((5U 
                                                                          == 
                                                                          (7U 
                                                                           & (IData)(
                                                                                (vlSelf->__PVT__mulDataModule_io_a 
                                                                                >> 0xdU))))
                                                                          ? 1U
                                                                          : 
                                                                         ((4U 
                                                                           == 
                                                                           (7U 
                                                                            & (IData)(
                                                                                (vlSelf->__PVT__mulDataModule_io_a 
                                                                                >> 0xdU))))
                                                                           ? 2U
                                                                           : 0U))))))));
    vlSelf->__PVT__mulDataModule__DOT__pp_9 = (0x2000000000ULL 
                                               | (((QData)((IData)(
                                                                   (1U 
                                                                    & (~ (IData)(
                                                                                (vlSelf->__PVT__mulDataModule__DOT__pp_temp_9 
                                                                                >> 0x21U)))))) 
                                                   << 0x24U) 
                                                  | ((vlSelf->__PVT__mulDataModule__DOT__pp_temp_9 
                                                      << 2U) 
                                                     | (QData)((IData)(
                                                                       ((6U 
                                                                         == 
                                                                         (7U 
                                                                          & (IData)(
                                                                                (vlSelf->__PVT__mulDataModule_io_a 
                                                                                >> 0xfU))))
                                                                         ? 1U
                                                                         : 
                                                                        ((5U 
                                                                          == 
                                                                          (7U 
                                                                           & (IData)(
                                                                                (vlSelf->__PVT__mulDataModule_io_a 
                                                                                >> 0xfU))))
                                                                          ? 1U
                                                                          : 
                                                                         ((4U 
                                                                           == 
                                                                           (7U 
                                                                            & (IData)(
                                                                                (vlSelf->__PVT__mulDataModule_io_a 
                                                                                >> 0xfU))))
                                                                           ? 2U
                                                                           : 0U))))))));
    vlSelf->__PVT__mulDataModule__DOT__pp_10 = (0x2000000000ULL 
                                                | (((QData)((IData)(
                                                                    (1U 
                                                                     & (~ (IData)(
                                                                                (vlSelf->__PVT__mulDataModule__DOT__pp_temp_10 
                                                                                >> 0x21U)))))) 
                                                    << 0x24U) 
                                                   | ((vlSelf->__PVT__mulDataModule__DOT__pp_temp_10 
                                                       << 2U) 
                                                      | (QData)((IData)(
                                                                        ((6U 
                                                                          == 
                                                                          (7U 
                                                                           & (IData)(
                                                                                (vlSelf->__PVT__mulDataModule_io_a 
                                                                                >> 0x11U))))
                                                                          ? 1U
                                                                          : 
                                                                         ((5U 
                                                                           == 
                                                                           (7U 
                                                                            & (IData)(
                                                                                (vlSelf->__PVT__mulDataModule_io_a 
                                                                                >> 0x11U))))
                                                                           ? 1U
                                                                           : 
                                                                          ((4U 
                                                                            == 
                                                                            (7U 
                                                                             & (IData)(
                                                                                (vlSelf->__PVT__mulDataModule_io_a 
                                                                                >> 0x11U))))
                                                                            ? 2U
                                                                            : 0U))))))));
    vlSelf->__PVT__mulDataModule__DOT__pp_11 = (0x2000000000ULL 
                                                | (((QData)((IData)(
                                                                    (1U 
                                                                     & (~ (IData)(
                                                                                (vlSelf->__PVT__mulDataModule__DOT__pp_temp_11 
                                                                                >> 0x21U)))))) 
                                                    << 0x24U) 
                                                   | ((vlSelf->__PVT__mulDataModule__DOT__pp_temp_11 
                                                       << 2U) 
                                                      | (QData)((IData)(
                                                                        ((6U 
                                                                          == 
                                                                          (7U 
                                                                           & (IData)(
                                                                                (vlSelf->__PVT__mulDataModule_io_a 
                                                                                >> 0x13U))))
                                                                          ? 1U
                                                                          : 
                                                                         ((5U 
                                                                           == 
                                                                           (7U 
                                                                            & (IData)(
                                                                                (vlSelf->__PVT__mulDataModule_io_a 
                                                                                >> 0x13U))))
                                                                           ? 1U
                                                                           : 
                                                                          ((4U 
                                                                            == 
                                                                            (7U 
                                                                             & (IData)(
                                                                                (vlSelf->__PVT__mulDataModule_io_a 
                                                                                >> 0x13U))))
                                                                            ? 2U
                                                                            : 0U))))))));
    vlSelf->__PVT__mulDataModule__DOT__pp_12 = (0x2000000000ULL 
                                                | (((QData)((IData)(
                                                                    (1U 
                                                                     & (~ (IData)(
                                                                                (vlSelf->__PVT__mulDataModule__DOT__pp_temp_12 
                                                                                >> 0x21U)))))) 
                                                    << 0x24U) 
                                                   | ((vlSelf->__PVT__mulDataModule__DOT__pp_temp_12 
                                                       << 2U) 
                                                      | (QData)((IData)(
                                                                        ((6U 
                                                                          == 
                                                                          (7U 
                                                                           & (IData)(
                                                                                (vlSelf->__PVT__mulDataModule_io_a 
                                                                                >> 0x15U))))
                                                                          ? 1U
                                                                          : 
                                                                         ((5U 
                                                                           == 
                                                                           (7U 
                                                                            & (IData)(
                                                                                (vlSelf->__PVT__mulDataModule_io_a 
                                                                                >> 0x15U))))
                                                                           ? 1U
                                                                           : 
                                                                          ((4U 
                                                                            == 
                                                                            (7U 
                                                                             & (IData)(
                                                                                (vlSelf->__PVT__mulDataModule_io_a 
                                                                                >> 0x15U))))
                                                                            ? 2U
                                                                            : 0U))))))));
    vlSelf->__PVT__mulDataModule__DOT__pp_13 = (0x2000000000ULL 
                                                | (((QData)((IData)(
                                                                    (1U 
                                                                     & (~ (IData)(
                                                                                (vlSelf->__PVT__mulDataModule__DOT__pp_temp_13 
                                                                                >> 0x21U)))))) 
                                                    << 0x24U) 
                                                   | ((vlSelf->__PVT__mulDataModule__DOT__pp_temp_13 
                                                       << 2U) 
                                                      | (QData)((IData)(
                                                                        ((6U 
                                                                          == 
                                                                          (7U 
                                                                           & (IData)(
                                                                                (vlSelf->__PVT__mulDataModule_io_a 
                                                                                >> 0x17U))))
                                                                          ? 1U
                                                                          : 
                                                                         ((5U 
                                                                           == 
                                                                           (7U 
                                                                            & (IData)(
                                                                                (vlSelf->__PVT__mulDataModule_io_a 
                                                                                >> 0x17U))))
                                                                           ? 1U
                                                                           : 
                                                                          ((4U 
                                                                            == 
                                                                            (7U 
                                                                             & (IData)(
                                                                                (vlSelf->__PVT__mulDataModule_io_a 
                                                                                >> 0x17U))))
                                                                            ? 2U
                                                                            : 0U))))))));
    vlSelf->__PVT__mulDataModule__DOT__pp_14 = (0x2000000000ULL 
                                                | (((QData)((IData)(
                                                                    (1U 
                                                                     & (~ (IData)(
                                                                                (vlSelf->__PVT__mulDataModule__DOT__pp_temp_14 
                                                                                >> 0x21U)))))) 
                                                    << 0x24U) 
                                                   | ((vlSelf->__PVT__mulDataModule__DOT__pp_temp_14 
                                                       << 2U) 
                                                      | (QData)((IData)(
                                                                        ((6U 
                                                                          == 
                                                                          (7U 
                                                                           & (IData)(
                                                                                (vlSelf->__PVT__mulDataModule_io_a 
                                                                                >> 0x19U))))
                                                                          ? 1U
                                                                          : 
                                                                         ((5U 
                                                                           == 
                                                                           (7U 
                                                                            & (IData)(
                                                                                (vlSelf->__PVT__mulDataModule_io_a 
                                                                                >> 0x19U))))
                                                                           ? 1U
                                                                           : 
                                                                          ((4U 
                                                                            == 
                                                                            (7U 
                                                                             & (IData)(
                                                                                (vlSelf->__PVT__mulDataModule_io_a 
                                                                                >> 0x19U))))
                                                                            ? 2U
                                                                            : 0U))))))));
    vlSelf->__PVT__mulDataModule__DOT__pp_15 = (0x2000000000ULL 
                                                | (((QData)((IData)(
                                                                    (1U 
                                                                     & (~ (IData)(
                                                                                (vlSelf->__PVT__mulDataModule__DOT__pp_temp_15 
                                                                                >> 0x21U)))))) 
                                                    << 0x24U) 
                                                   | ((vlSelf->__PVT__mulDataModule__DOT__pp_temp_15 
                                                       << 2U) 
                                                      | (QData)((IData)(
                                                                        ((6U 
                                                                          == 
                                                                          (7U 
                                                                           & (IData)(
                                                                                (vlSelf->__PVT__mulDataModule_io_a 
                                                                                >> 0x1bU))))
                                                                          ? 1U
                                                                          : 
                                                                         ((5U 
                                                                           == 
                                                                           (7U 
                                                                            & (IData)(
                                                                                (vlSelf->__PVT__mulDataModule_io_a 
                                                                                >> 0x1bU))))
                                                                           ? 1U
                                                                           : 
                                                                          ((4U 
                                                                            == 
                                                                            (7U 
                                                                             & (IData)(
                                                                                (vlSelf->__PVT__mulDataModule_io_a 
                                                                                >> 0x1bU))))
                                                                            ? 2U
                                                                            : 0U))))))));
    vlSelf->__PVT__mulDataModule__DOT__pp_temp_16 = 
        (0x3ffffffffULL & ((6U == (IData)(vlSelf->__PVT__mulDataModule__DOT__last_x_1))
                            ? (~ vlSelf->__PVT__mulDataModule__DOT__b_sext)
                            : ((5U == (IData)(vlSelf->__PVT__mulDataModule__DOT__last_x_1))
                                ? (~ vlSelf->__PVT__mulDataModule__DOT__b_sext)
                                : ((4U == (IData)(vlSelf->__PVT__mulDataModule__DOT__last_x_1))
                                    ? ((~ vlSelf->__PVT__mulDataModule__DOT__b_sext) 
                                       << 1U) : ((3U 
                                                  == (IData)(vlSelf->__PVT__mulDataModule__DOT__last_x_1))
                                                  ? 
                                                 (vlSelf->__PVT__mulDataModule__DOT__b_sext 
                                                  << 1U)
                                                  : 
                                                 ((2U 
                                                   == (IData)(vlSelf->__PVT__mulDataModule__DOT__last_x_1))
                                                   ? vlSelf->__PVT__mulDataModule__DOT__b_sext
                                                   : 
                                                  ((1U 
                                                    == (IData)(vlSelf->__PVT__mulDataModule__DOT__last_x_1))
                                                    ? vlSelf->__PVT__mulDataModule__DOT__b_sext
                                                    : 0ULL)))))));
    vlSelf->__PVT__mulDataModule__DOT__pp_16 = (((QData)((IData)(
                                                                 (1U 
                                                                  & (~ (IData)(
                                                                               (vlSelf->__PVT__mulDataModule__DOT__pp_temp_16 
                                                                                >> 0x21U)))))) 
                                                 << 0x24U) 
                                                | ((vlSelf->__PVT__mulDataModule__DOT__pp_temp_16 
                                                    << 2U) 
                                                   | (QData)((IData)(
                                                                     ((6U 
                                                                       == 
                                                                       (7U 
                                                                        & (IData)(
                                                                                (vlSelf->__PVT__mulDataModule_io_a 
                                                                                >> 0x1dU))))
                                                                       ? 1U
                                                                       : 
                                                                      ((5U 
                                                                        == 
                                                                        (7U 
                                                                         & (IData)(
                                                                                (vlSelf->__PVT__mulDataModule_io_a 
                                                                                >> 0x1dU))))
                                                                        ? 1U
                                                                        : 
                                                                       ((4U 
                                                                         == 
                                                                         (7U 
                                                                          & (IData)(
                                                                                (vlSelf->__PVT__mulDataModule_io_a 
                                                                                >> 0x1dU))))
                                                                         ? 2U
                                                                         : 0U)))))));
}
