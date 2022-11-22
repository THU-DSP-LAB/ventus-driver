// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VVentus.h for the primary calling header

#include "verilated.h"

#include "VVentus_FCMA_ADD_s1.h"
#include "VVentus__Syms.h"

VL_ATTR_COLD void VVentus_FCMA_ADD_s1___stl_sequent__TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3__FMA__DOT__addPipe__DOT__s1__0(VVentus_FCMA_ADD_s1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VVentus__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      VVentus_FCMA_ADD_s1___stl_sequent__TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3__FMA__DOT__addPipe__DOT__s1__0\n"); );
    // Init
    QData/*48:0*/ __PVT__near_path_mods_0__DOT___exceed_lim_T;
    CData/*5:0*/ __PVT__near_path_mods_0__DOT__lzc_clz__DOT___io_out_T_65;
    CData/*5:0*/ __PVT__near_path_mods_0__DOT__lzc_clz__DOT___io_out_T_82;
    QData/*48:0*/ __PVT__near_path_mods_1__DOT___exceed_lim_T;
    CData/*5:0*/ __PVT__near_path_mods_1__DOT__lzc_clz__DOT___io_out_T_65;
    CData/*5:0*/ __PVT__near_path_mods_1__DOT__lzc_clz__DOT___io_out_T_82;
    // Body
    vlSelf->__PVT__decode_a___05FisInf = (IData)(((0x7f800000000000ULL 
                                                   == 
                                                   (0x7f800000000000ULL 
                                                    & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3.__PVT__FMA__DOT__addPipe__DOT__s1_io_a_r)) 
                                                  & (~ (IData)(
                                                               (0U 
                                                                != 
                                                                (0x7fffffffffffULL 
                                                                 & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3.__PVT__FMA__DOT__addPipe__DOT__s1_io_a_r))))));
    vlSelf->__PVT__far_path_mods_0_io_in_smallAdd = 
        (1U & ((~ (IData)((0U != (0xffU & (IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3.__PVT__FMA__DOT__addPipe__DOT__s1_io_a_r 
                                                   >> 0x2fU)))))) 
               & (~ (IData)((0U != (0xffU & (IData)(
                                                    (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3.__PVT__FMA__DOT__addPipe__DOT__s1_io_b_r 
                                                     >> 0x2fU))))))));
    vlSelf->__PVT__b_isInf = ((IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3.__PVT__FMA__DOT__addPipe__DOT__s1_io_b_inter_valid_r)
                               ? (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3.__PVT__FMA__DOT__addPipe__DOT__s1_io_b_inter_flags_r_isInf)
                               : (IData)(((0x7f800000000000ULL 
                                           == (0x7f800000000000ULL 
                                               & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3.__PVT__FMA__DOT__addPipe__DOT__s1_io_b_r)) 
                                          & (~ (IData)(
                                                       (0U 
                                                        != 
                                                        (0x7fffffffffffULL 
                                                         & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3.__PVT__FMA__DOT__addPipe__DOT__s1_io_b_r)))))));
    vlSelf->__PVT__special_path_hasNaN = ((IData)((
                                                   (0x7f800000000000ULL 
                                                    == 
                                                    (0x7f800000000000ULL 
                                                     & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3.__PVT__FMA__DOT__addPipe__DOT__s1_io_a_r)) 
                                                   & (0U 
                                                      != 
                                                      (0x7fffffffffffULL 
                                                       & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3.__PVT__FMA__DOT__addPipe__DOT__s1_io_a_r)))) 
                                          | ((IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3.__PVT__FMA__DOT__addPipe__DOT__s1_io_b_inter_valid_r)
                                              ? (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3.__PVT__FMA__DOT__addPipe__DOT__s1_io_b_inter_flags_r_isNaN)
                                              : (IData)(
                                                        ((0x7f800000000000ULL 
                                                          == 
                                                          (0x7f800000000000ULL 
                                                           & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3.__PVT__FMA__DOT__addPipe__DOT__s1_io_b_r)) 
                                                         & (0U 
                                                            != 
                                                            (0x7fffffffffffULL 
                                                             & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3.__PVT__FMA__DOT__addPipe__DOT__s1_io_b_r))))));
    vlSelf->__PVT__far_path_mods_0_io_in_effSub = (IData)(
                                                          ((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3.__PVT__FMA__DOT__addPipe__DOT__s1_io_a_r 
                                                            ^ vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3.__PVT__FMA__DOT__addPipe__DOT__s1_io_b_r) 
                                                           >> 0x37U));
    vlSelf->__PVT__near_path_mods_0_io_in_a_sig = (
                                                   ((QData)((IData)(
                                                                    (0U 
                                                                     != 
                                                                     (0xffU 
                                                                      & (IData)(
                                                                                (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3.__PVT__FMA__DOT__addPipe__DOT__s1_io_a_r 
                                                                                >> 0x2fU)))))) 
                                                    << 0x2fU) 
                                                   | (0x7fffffffffffULL 
                                                      & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3.__PVT__FMA__DOT__addPipe__DOT__s1_io_a_r));
    vlSelf->__PVT__near_path_mods_0_io_in_b_sig = (
                                                   ((QData)((IData)(
                                                                    (0U 
                                                                     != 
                                                                     (0xffU 
                                                                      & (IData)(
                                                                                (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3.__PVT__FMA__DOT__addPipe__DOT__s1_io_b_r 
                                                                                >> 0x2fU)))))) 
                                                    << 0x2fU) 
                                                   | (0x7fffffffffffULL 
                                                      & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3.__PVT__FMA__DOT__addPipe__DOT__s1_io_b_r));
    vlSelf->__PVT__near_path_mods_0_io_in_a_exp = (0xffU 
                                                   & ((IData)(
                                                              (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3.__PVT__FMA__DOT__addPipe__DOT__s1_io_a_r 
                                                               >> 0x2fU)) 
                                                      | (1U 
                                                         & (~ (IData)(
                                                                      (0U 
                                                                       != 
                                                                       (0xffU 
                                                                        & (IData)(
                                                                                (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3.__PVT__FMA__DOT__addPipe__DOT__s1_io_a_r 
                                                                                >> 0x2fU)))))))));
    vlSelf->__PVT__near_path_mods_1_io_in_a_exp = (0xffU 
                                                   & ((IData)(
                                                              (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3.__PVT__FMA__DOT__addPipe__DOT__s1_io_b_r 
                                                               >> 0x2fU)) 
                                                      | (1U 
                                                         & (~ (IData)(
                                                                      (0U 
                                                                       != 
                                                                       (0xffU 
                                                                        & (IData)(
                                                                                (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3.__PVT__FMA__DOT__addPipe__DOT__s1_io_b_r 
                                                                                >> 0x2fU)))))))));
    vlSelf->__PVT__exp_diff_b_a = (0x1ffU & ((IData)(vlSelf->__PVT__near_path_mods_1_io_in_a_exp) 
                                             - (IData)(vlSelf->__PVT__near_path_mods_0_io_in_a_exp)));
    vlSelf->__PVT__exp_diff_a_b = (0x1ffU & ((IData)(vlSelf->__PVT__near_path_mods_0_io_in_a_exp) 
                                             - (IData)(vlSelf->__PVT__near_path_mods_1_io_in_a_exp)));
    vlSelf->__PVT__near_path_mods_0_io_in_need_shift_b 
        = ((3U & (IData)(vlSelf->__PVT__near_path_mods_0_io_in_a_exp)) 
           != (3U & (IData)(vlSelf->__PVT__near_path_mods_1_io_in_a_exp)));
    vlSelf->__PVT__need_swap = (IData)((((IData)(vlSelf->__PVT__exp_diff_a_b) 
                                         >> 8U) | (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3.__PVT__FMA__DOT__addPipe__DOT__s1_io_b_inter_flags_r_overflow)));
    vlSelf->__PVT__near_path_mods_1__DOT__b_sig = (0x1ffffffffffffULL 
                                                   & ((vlSelf->__PVT__near_path_mods_0_io_in_a_sig 
                                                       << 1U) 
                                                      >> (IData)(vlSelf->__PVT__near_path_mods_0_io_in_need_shift_b)));
    vlSelf->__PVT__near_path_mods_0__DOT__b_sig = (0x1ffffffffffffULL 
                                                   & ((vlSelf->__PVT__near_path_mods_0_io_in_b_sig 
                                                       << 1U) 
                                                      >> (IData)(vlSelf->__PVT__near_path_mods_0_io_in_need_shift_b)));
    if (vlSelf->__PVT__need_swap) {
        vlSelf->__PVT__far_path_mods_0_io_in_a_exp 
            = vlSelf->__PVT__near_path_mods_1_io_in_a_exp;
        vlSelf->__PVT___T_5 = vlSelf->__PVT__exp_diff_b_a;
        vlSelf->__PVT__far_path_mods_0_io_in_b_sig 
            = vlSelf->__PVT__near_path_mods_0_io_in_a_sig;
    } else {
        vlSelf->__PVT__far_path_mods_0_io_in_a_exp 
            = vlSelf->__PVT__near_path_mods_0_io_in_a_exp;
        vlSelf->__PVT___T_5 = vlSelf->__PVT__exp_diff_a_b;
        vlSelf->__PVT__far_path_mods_0_io_in_b_sig 
            = vlSelf->__PVT__near_path_mods_0_io_in_b_sig;
    }
    vlSelf->__PVT__near_path_mods_1__DOT___a_minus_b_T_3 
        = (0x3ffffffffffffULL & ((vlSelf->__PVT__near_path_mods_0_io_in_b_sig 
                                  << 1U) + (0x2000000000000ULL 
                                            | (0x1ffffffffffffULL 
                                               & (~ vlSelf->__PVT__near_path_mods_1__DOT__b_sig)))));
    vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_1 
        = (1U & (VL_REDXOR_2((3ULL & vlSelf->__PVT__near_path_mods_1__DOT__b_sig)) 
                 ^ vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3.__PVT__FMA__DOT__addPipe__DOT__s1_io_b_r));
    vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_2 
        = (1U & ((~ ((~ (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3.__PVT__FMA__DOT__addPipe__DOT__s1_io_b_r)) 
                     & (IData)((vlSelf->__PVT__near_path_mods_1__DOT__b_sig 
                                >> 1U)))) ^ ((IData)(
                                                     (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3.__PVT__FMA__DOT__addPipe__DOT__s1_io_b_r 
                                                      >> 1U)) 
                                             ^ (~ (IData)(
                                                          (vlSelf->__PVT__near_path_mods_1__DOT__b_sig 
                                                           >> 2U))))));
    vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_3 
        = (1U & ((~ ((~ (IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3.__PVT__FMA__DOT__addPipe__DOT__s1_io_b_r 
                                 >> 1U))) & (IData)(
                                                    (vlSelf->__PVT__near_path_mods_1__DOT__b_sig 
                                                     >> 2U)))) 
                 ^ ((IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3.__PVT__FMA__DOT__addPipe__DOT__s1_io_b_r 
                             >> 2U)) ^ (~ (IData)((vlSelf->__PVT__near_path_mods_1__DOT__b_sig 
                                                   >> 3U))))));
    vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_4 
        = (1U & ((~ ((~ (IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3.__PVT__FMA__DOT__addPipe__DOT__s1_io_b_r 
                                 >> 2U))) & (IData)(
                                                    (vlSelf->__PVT__near_path_mods_1__DOT__b_sig 
                                                     >> 3U)))) 
                 ^ ((IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3.__PVT__FMA__DOT__addPipe__DOT__s1_io_b_r 
                             >> 3U)) ^ (~ (IData)((vlSelf->__PVT__near_path_mods_1__DOT__b_sig 
                                                   >> 4U))))));
    vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_5 
        = (1U & ((~ ((~ (IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3.__PVT__FMA__DOT__addPipe__DOT__s1_io_b_r 
                                 >> 3U))) & (IData)(
                                                    (vlSelf->__PVT__near_path_mods_1__DOT__b_sig 
                                                     >> 4U)))) 
                 ^ ((IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3.__PVT__FMA__DOT__addPipe__DOT__s1_io_b_r 
                             >> 4U)) ^ (~ (IData)((vlSelf->__PVT__near_path_mods_1__DOT__b_sig 
                                                   >> 5U))))));
    vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_6 
        = (1U & ((~ ((~ (IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3.__PVT__FMA__DOT__addPipe__DOT__s1_io_b_r 
                                 >> 4U))) & (IData)(
                                                    (vlSelf->__PVT__near_path_mods_1__DOT__b_sig 
                                                     >> 5U)))) 
                 ^ ((IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3.__PVT__FMA__DOT__addPipe__DOT__s1_io_b_r 
                             >> 5U)) ^ (~ (IData)((vlSelf->__PVT__near_path_mods_1__DOT__b_sig 
                                                   >> 6U))))));
    vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_7 
        = (1U & ((~ ((~ (IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3.__PVT__FMA__DOT__addPipe__DOT__s1_io_b_r 
                                 >> 5U))) & (IData)(
                                                    (vlSelf->__PVT__near_path_mods_1__DOT__b_sig 
                                                     >> 6U)))) 
                 ^ ((IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3.__PVT__FMA__DOT__addPipe__DOT__s1_io_b_r 
                             >> 6U)) ^ (~ (IData)((vlSelf->__PVT__near_path_mods_1__DOT__b_sig 
                                                   >> 7U))))));
    vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_8 
        = (1U & ((~ ((~ (IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3.__PVT__FMA__DOT__addPipe__DOT__s1_io_b_r 
                                 >> 6U))) & (IData)(
                                                    (vlSelf->__PVT__near_path_mods_1__DOT__b_sig 
                                                     >> 7U)))) 
                 ^ ((IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3.__PVT__FMA__DOT__addPipe__DOT__s1_io_b_r 
                             >> 7U)) ^ (~ (IData)((vlSelf->__PVT__near_path_mods_1__DOT__b_sig 
                                                   >> 8U))))));
    vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_9 
        = (1U & ((~ ((~ (IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3.__PVT__FMA__DOT__addPipe__DOT__s1_io_b_r 
                                 >> 7U))) & (IData)(
                                                    (vlSelf->__PVT__near_path_mods_1__DOT__b_sig 
                                                     >> 8U)))) 
                 ^ ((IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3.__PVT__FMA__DOT__addPipe__DOT__s1_io_b_r 
                             >> 8U)) ^ (~ (IData)((vlSelf->__PVT__near_path_mods_1__DOT__b_sig 
                                                   >> 9U))))));
    vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_10 
        = (1U & ((~ ((~ (IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3.__PVT__FMA__DOT__addPipe__DOT__s1_io_b_r 
                                 >> 8U))) & (IData)(
                                                    (vlSelf->__PVT__near_path_mods_1__DOT__b_sig 
                                                     >> 9U)))) 
                 ^ ((IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3.__PVT__FMA__DOT__addPipe__DOT__s1_io_b_r 
                             >> 9U)) ^ (~ (IData)((vlSelf->__PVT__near_path_mods_1__DOT__b_sig 
                                                   >> 0xaU))))));
    vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_11 
        = (1U & ((~ ((~ (IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3.__PVT__FMA__DOT__addPipe__DOT__s1_io_b_r 
                                 >> 9U))) & (IData)(
                                                    (vlSelf->__PVT__near_path_mods_1__DOT__b_sig 
                                                     >> 0xaU)))) 
                 ^ ((IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3.__PVT__FMA__DOT__addPipe__DOT__s1_io_b_r 
                             >> 0xaU)) ^ (~ (IData)(
                                                    (vlSelf->__PVT__near_path_mods_1__DOT__b_sig 
                                                     >> 0xbU))))));
    vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_18 
        = (1U & ((~ ((~ (IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3.__PVT__FMA__DOT__addPipe__DOT__s1_io_b_r 
                                 >> 0x10U))) & (IData)(
                                                       (vlSelf->__PVT__near_path_mods_1__DOT__b_sig 
                                                        >> 0x11U)))) 
                 ^ ((IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3.__PVT__FMA__DOT__addPipe__DOT__s1_io_b_r 
                             >> 0x11U)) ^ (~ (IData)(
                                                     (vlSelf->__PVT__near_path_mods_1__DOT__b_sig 
                                                      >> 0x12U))))));
    vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_19 
        = (1U & ((~ ((~ (IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3.__PVT__FMA__DOT__addPipe__DOT__s1_io_b_r 
                                 >> 0x11U))) & (IData)(
                                                       (vlSelf->__PVT__near_path_mods_1__DOT__b_sig 
                                                        >> 0x12U)))) 
                 ^ ((IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3.__PVT__FMA__DOT__addPipe__DOT__s1_io_b_r 
                             >> 0x12U)) ^ (~ (IData)(
                                                     (vlSelf->__PVT__near_path_mods_1__DOT__b_sig 
                                                      >> 0x13U))))));
    vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_20 
        = (1U & ((~ ((~ (IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3.__PVT__FMA__DOT__addPipe__DOT__s1_io_b_r 
                                 >> 0x12U))) & (IData)(
                                                       (vlSelf->__PVT__near_path_mods_1__DOT__b_sig 
                                                        >> 0x13U)))) 
                 ^ ((IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3.__PVT__FMA__DOT__addPipe__DOT__s1_io_b_r 
                             >> 0x13U)) ^ (~ (IData)(
                                                     (vlSelf->__PVT__near_path_mods_1__DOT__b_sig 
                                                      >> 0x14U))))));
    vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_21 
        = (1U & ((~ ((~ (IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3.__PVT__FMA__DOT__addPipe__DOT__s1_io_b_r 
                                 >> 0x13U))) & (IData)(
                                                       (vlSelf->__PVT__near_path_mods_1__DOT__b_sig 
                                                        >> 0x14U)))) 
                 ^ ((IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3.__PVT__FMA__DOT__addPipe__DOT__s1_io_b_r 
                             >> 0x14U)) ^ (~ (IData)(
                                                     (vlSelf->__PVT__near_path_mods_1__DOT__b_sig 
                                                      >> 0x15U))))));
    vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_22 
        = (1U & ((~ ((~ (IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3.__PVT__FMA__DOT__addPipe__DOT__s1_io_b_r 
                                 >> 0x14U))) & (IData)(
                                                       (vlSelf->__PVT__near_path_mods_1__DOT__b_sig 
                                                        >> 0x15U)))) 
                 ^ ((IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3.__PVT__FMA__DOT__addPipe__DOT__s1_io_b_r 
                             >> 0x15U)) ^ (~ (IData)(
                                                     (vlSelf->__PVT__near_path_mods_1__DOT__b_sig 
                                                      >> 0x16U))))));
    vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_23 
        = (1U & ((~ ((~ (IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3.__PVT__FMA__DOT__addPipe__DOT__s1_io_b_r 
                                 >> 0x15U))) & (IData)(
                                                       (vlSelf->__PVT__near_path_mods_1__DOT__b_sig 
                                                        >> 0x16U)))) 
                 ^ ((IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3.__PVT__FMA__DOT__addPipe__DOT__s1_io_b_r 
                             >> 0x16U)) ^ (~ (IData)(
                                                     (vlSelf->__PVT__near_path_mods_1__DOT__b_sig 
                                                      >> 0x17U))))));
    vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_13 
        = (1U & ((~ ((~ (IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3.__PVT__FMA__DOT__addPipe__DOT__s1_io_b_r 
                                 >> 0xbU))) & (IData)(
                                                      (vlSelf->__PVT__near_path_mods_1__DOT__b_sig 
                                                       >> 0xcU)))) 
                 ^ ((IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3.__PVT__FMA__DOT__addPipe__DOT__s1_io_b_r 
                             >> 0xcU)) ^ (~ (IData)(
                                                    (vlSelf->__PVT__near_path_mods_1__DOT__b_sig 
                                                     >> 0xdU))))));
    vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_14 
        = (1U & ((~ ((~ (IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3.__PVT__FMA__DOT__addPipe__DOT__s1_io_b_r 
                                 >> 0xcU))) & (IData)(
                                                      (vlSelf->__PVT__near_path_mods_1__DOT__b_sig 
                                                       >> 0xdU)))) 
                 ^ ((IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3.__PVT__FMA__DOT__addPipe__DOT__s1_io_b_r 
                             >> 0xdU)) ^ (~ (IData)(
                                                    (vlSelf->__PVT__near_path_mods_1__DOT__b_sig 
                                                     >> 0xeU))))));
    vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_15 
        = (1U & ((~ ((~ (IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3.__PVT__FMA__DOT__addPipe__DOT__s1_io_b_r 
                                 >> 0xdU))) & (IData)(
                                                      (vlSelf->__PVT__near_path_mods_1__DOT__b_sig 
                                                       >> 0xeU)))) 
                 ^ ((IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3.__PVT__FMA__DOT__addPipe__DOT__s1_io_b_r 
                             >> 0xeU)) ^ (~ (IData)(
                                                    (vlSelf->__PVT__near_path_mods_1__DOT__b_sig 
                                                     >> 0xfU))))));
    vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_16 
        = (1U & ((~ ((~ (IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3.__PVT__FMA__DOT__addPipe__DOT__s1_io_b_r 
                                 >> 0xeU))) & (IData)(
                                                      (vlSelf->__PVT__near_path_mods_1__DOT__b_sig 
                                                       >> 0xfU)))) 
                 ^ ((IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3.__PVT__FMA__DOT__addPipe__DOT__s1_io_b_r 
                             >> 0xfU)) ^ (~ (IData)(
                                                    (vlSelf->__PVT__near_path_mods_1__DOT__b_sig 
                                                     >> 0x10U))))));
    vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_17 
        = (1U & ((~ ((~ (IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3.__PVT__FMA__DOT__addPipe__DOT__s1_io_b_r 
                                 >> 0xfU))) & (IData)(
                                                      (vlSelf->__PVT__near_path_mods_1__DOT__b_sig 
                                                       >> 0x10U)))) 
                 ^ ((IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3.__PVT__FMA__DOT__addPipe__DOT__s1_io_b_r 
                             >> 0x10U)) ^ (~ (IData)(
                                                     (vlSelf->__PVT__near_path_mods_1__DOT__b_sig 
                                                      >> 0x11U))))));
    vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_25 
        = (1U & ((~ ((~ (IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3.__PVT__FMA__DOT__addPipe__DOT__s1_io_b_r 
                                 >> 0x17U))) & (IData)(
                                                       (vlSelf->__PVT__near_path_mods_1__DOT__b_sig 
                                                        >> 0x18U)))) 
                 ^ ((IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3.__PVT__FMA__DOT__addPipe__DOT__s1_io_b_r 
                             >> 0x18U)) ^ (~ (IData)(
                                                     (vlSelf->__PVT__near_path_mods_1__DOT__b_sig 
                                                      >> 0x19U))))));
    vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_26 
        = (1U & ((~ ((~ (IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3.__PVT__FMA__DOT__addPipe__DOT__s1_io_b_r 
                                 >> 0x18U))) & (IData)(
                                                       (vlSelf->__PVT__near_path_mods_1__DOT__b_sig 
                                                        >> 0x19U)))) 
                 ^ ((IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3.__PVT__FMA__DOT__addPipe__DOT__s1_io_b_r 
                             >> 0x19U)) ^ (~ (IData)(
                                                     (vlSelf->__PVT__near_path_mods_1__DOT__b_sig 
                                                      >> 0x1aU))))));
    vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_27 
        = (1U & ((~ ((~ (IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3.__PVT__FMA__DOT__addPipe__DOT__s1_io_b_r 
                                 >> 0x19U))) & (IData)(
                                                       (vlSelf->__PVT__near_path_mods_1__DOT__b_sig 
                                                        >> 0x1aU)))) 
                 ^ ((IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3.__PVT__FMA__DOT__addPipe__DOT__s1_io_b_r 
                             >> 0x1aU)) ^ (~ (IData)(
                                                     (vlSelf->__PVT__near_path_mods_1__DOT__b_sig 
                                                      >> 0x1bU))))));
    vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_28 
        = (1U & ((~ ((~ (IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3.__PVT__FMA__DOT__addPipe__DOT__s1_io_b_r 
                                 >> 0x1aU))) & (IData)(
                                                       (vlSelf->__PVT__near_path_mods_1__DOT__b_sig 
                                                        >> 0x1bU)))) 
                 ^ ((IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3.__PVT__FMA__DOT__addPipe__DOT__s1_io_b_r 
                             >> 0x1bU)) ^ (~ (IData)(
                                                     (vlSelf->__PVT__near_path_mods_1__DOT__b_sig 
                                                      >> 0x1cU))))));
    vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_29 
        = (1U & ((~ ((~ (IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3.__PVT__FMA__DOT__addPipe__DOT__s1_io_b_r 
                                 >> 0x1bU))) & (IData)(
                                                       (vlSelf->__PVT__near_path_mods_1__DOT__b_sig 
                                                        >> 0x1cU)))) 
                 ^ ((IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3.__PVT__FMA__DOT__addPipe__DOT__s1_io_b_r 
                             >> 0x1cU)) ^ (~ (IData)(
                                                     (vlSelf->__PVT__near_path_mods_1__DOT__b_sig 
                                                      >> 0x1dU))))));
    vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_30 
        = (1U & ((~ ((~ (IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3.__PVT__FMA__DOT__addPipe__DOT__s1_io_b_r 
                                 >> 0x1cU))) & (IData)(
                                                       (vlSelf->__PVT__near_path_mods_1__DOT__b_sig 
                                                        >> 0x1dU)))) 
                 ^ ((IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3.__PVT__FMA__DOT__addPipe__DOT__s1_io_b_r 
                             >> 0x1dU)) ^ (~ (IData)(
                                                     (vlSelf->__PVT__near_path_mods_1__DOT__b_sig 
                                                      >> 0x1eU))))));
    vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_31 
        = (1U & ((~ ((~ (IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3.__PVT__FMA__DOT__addPipe__DOT__s1_io_b_r 
                                 >> 0x1dU))) & (IData)(
                                                       (vlSelf->__PVT__near_path_mods_1__DOT__b_sig 
                                                        >> 0x1eU)))) 
                 ^ ((IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3.__PVT__FMA__DOT__addPipe__DOT__s1_io_b_r 
                             >> 0x1eU)) ^ (~ (IData)(
                                                     (vlSelf->__PVT__near_path_mods_1__DOT__b_sig 
                                                      >> 0x1fU))))));
    vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_32 
        = (1U & ((~ ((~ (IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3.__PVT__FMA__DOT__addPipe__DOT__s1_io_b_r 
                                 >> 0x1eU))) & (IData)(
                                                       (vlSelf->__PVT__near_path_mods_1__DOT__b_sig 
                                                        >> 0x1fU)))) 
                 ^ ((IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3.__PVT__FMA__DOT__addPipe__DOT__s1_io_b_r 
                             >> 0x1fU)) ^ (~ (IData)(
                                                     (vlSelf->__PVT__near_path_mods_1__DOT__b_sig 
                                                      >> 0x20U))))));
    vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_33 
        = (1U & ((~ ((~ (IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3.__PVT__FMA__DOT__addPipe__DOT__s1_io_b_r 
                                 >> 0x1fU))) & (IData)(
                                                       (vlSelf->__PVT__near_path_mods_1__DOT__b_sig 
                                                        >> 0x20U)))) 
                 ^ ((IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3.__PVT__FMA__DOT__addPipe__DOT__s1_io_b_r 
                             >> 0x20U)) ^ (~ (IData)(
                                                     (vlSelf->__PVT__near_path_mods_1__DOT__b_sig 
                                                      >> 0x21U))))));
    vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_34 
        = (1U & ((~ ((~ (IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3.__PVT__FMA__DOT__addPipe__DOT__s1_io_b_r 
                                 >> 0x20U))) & (IData)(
                                                       (vlSelf->__PVT__near_path_mods_1__DOT__b_sig 
                                                        >> 0x21U)))) 
                 ^ ((IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3.__PVT__FMA__DOT__addPipe__DOT__s1_io_b_r 
                             >> 0x21U)) ^ (~ (IData)(
                                                     (vlSelf->__PVT__near_path_mods_1__DOT__b_sig 
                                                      >> 0x22U))))));
    vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_35 
        = (1U & ((~ ((~ (IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3.__PVT__FMA__DOT__addPipe__DOT__s1_io_b_r 
                                 >> 0x21U))) & (IData)(
                                                       (vlSelf->__PVT__near_path_mods_1__DOT__b_sig 
                                                        >> 0x22U)))) 
                 ^ ((IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3.__PVT__FMA__DOT__addPipe__DOT__s1_io_b_r 
                             >> 0x22U)) ^ (~ (IData)(
                                                     (vlSelf->__PVT__near_path_mods_1__DOT__b_sig 
                                                      >> 0x23U))))));
    vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_42 
        = (1U & ((~ ((~ (IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3.__PVT__FMA__DOT__addPipe__DOT__s1_io_b_r 
                                 >> 0x28U))) & (IData)(
                                                       (vlSelf->__PVT__near_path_mods_1__DOT__b_sig 
                                                        >> 0x29U)))) 
                 ^ ((IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3.__PVT__FMA__DOT__addPipe__DOT__s1_io_b_r 
                             >> 0x29U)) ^ (~ (IData)(
                                                     (vlSelf->__PVT__near_path_mods_1__DOT__b_sig 
                                                      >> 0x2aU))))));
    vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_43 
        = (1U & ((~ ((~ (IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3.__PVT__FMA__DOT__addPipe__DOT__s1_io_b_r 
                                 >> 0x29U))) & (IData)(
                                                       (vlSelf->__PVT__near_path_mods_1__DOT__b_sig 
                                                        >> 0x2aU)))) 
                 ^ ((IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3.__PVT__FMA__DOT__addPipe__DOT__s1_io_b_r 
                             >> 0x2aU)) ^ (~ (IData)(
                                                     (vlSelf->__PVT__near_path_mods_1__DOT__b_sig 
                                                      >> 0x2bU))))));
    vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_44 
        = (1U & ((~ ((~ (IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3.__PVT__FMA__DOT__addPipe__DOT__s1_io_b_r 
                                 >> 0x2aU))) & (IData)(
                                                       (vlSelf->__PVT__near_path_mods_1__DOT__b_sig 
                                                        >> 0x2bU)))) 
                 ^ ((IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3.__PVT__FMA__DOT__addPipe__DOT__s1_io_b_r 
                             >> 0x2bU)) ^ (~ (IData)(
                                                     (vlSelf->__PVT__near_path_mods_1__DOT__b_sig 
                                                      >> 0x2cU))))));
    vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_45 
        = (1U & ((~ ((~ (IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3.__PVT__FMA__DOT__addPipe__DOT__s1_io_b_r 
                                 >> 0x2bU))) & (IData)(
                                                       (vlSelf->__PVT__near_path_mods_1__DOT__b_sig 
                                                        >> 0x2cU)))) 
                 ^ ((IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3.__PVT__FMA__DOT__addPipe__DOT__s1_io_b_r 
                             >> 0x2cU)) ^ (~ (IData)(
                                                     (vlSelf->__PVT__near_path_mods_1__DOT__b_sig 
                                                      >> 0x2dU))))));
    vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_46 
        = (1U & ((~ ((~ (IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3.__PVT__FMA__DOT__addPipe__DOT__s1_io_b_r 
                                 >> 0x2cU))) & (IData)(
                                                       (vlSelf->__PVT__near_path_mods_1__DOT__b_sig 
                                                        >> 0x2dU)))) 
                 ^ ((IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3.__PVT__FMA__DOT__addPipe__DOT__s1_io_b_r 
                             >> 0x2dU)) ^ (~ (IData)(
                                                     (vlSelf->__PVT__near_path_mods_1__DOT__b_sig 
                                                      >> 0x2eU))))));
    vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_47 
        = (1U & ((~ ((~ (IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3.__PVT__FMA__DOT__addPipe__DOT__s1_io_b_r 
                                 >> 0x2dU))) & (IData)(
                                                       (vlSelf->__PVT__near_path_mods_1__DOT__b_sig 
                                                        >> 0x2eU)))) 
                 ^ ((IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3.__PVT__FMA__DOT__addPipe__DOT__s1_io_b_r 
                             >> 0x2eU)) ^ (~ (IData)(
                                                     (vlSelf->__PVT__near_path_mods_1__DOT__b_sig 
                                                      >> 0x2fU))))));
    vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_48 
        = (1U & ((~ ((~ (IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3.__PVT__FMA__DOT__addPipe__DOT__s1_io_b_r 
                                 >> 0x2eU))) & (IData)(
                                                       (vlSelf->__PVT__near_path_mods_1__DOT__b_sig 
                                                        >> 0x2fU)))) 
                 ^ ((0U != (0xffU & (IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3.__PVT__FMA__DOT__addPipe__DOT__s1_io_b_r 
                                             >> 0x2fU)))) 
                    ^ (~ (IData)((vlSelf->__PVT__near_path_mods_1__DOT__b_sig 
                                  >> 0x30U))))));
    vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_37 
        = (1U & ((~ ((~ (IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3.__PVT__FMA__DOT__addPipe__DOT__s1_io_b_r 
                                 >> 0x23U))) & (IData)(
                                                       (vlSelf->__PVT__near_path_mods_1__DOT__b_sig 
                                                        >> 0x24U)))) 
                 ^ ((IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3.__PVT__FMA__DOT__addPipe__DOT__s1_io_b_r 
                             >> 0x24U)) ^ (~ (IData)(
                                                     (vlSelf->__PVT__near_path_mods_1__DOT__b_sig 
                                                      >> 0x25U))))));
    vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_38 
        = (1U & ((~ ((~ (IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3.__PVT__FMA__DOT__addPipe__DOT__s1_io_b_r 
                                 >> 0x24U))) & (IData)(
                                                       (vlSelf->__PVT__near_path_mods_1__DOT__b_sig 
                                                        >> 0x25U)))) 
                 ^ ((IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3.__PVT__FMA__DOT__addPipe__DOT__s1_io_b_r 
                             >> 0x25U)) ^ (~ (IData)(
                                                     (vlSelf->__PVT__near_path_mods_1__DOT__b_sig 
                                                      >> 0x26U))))));
    vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_39 
        = (1U & ((~ ((~ (IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3.__PVT__FMA__DOT__addPipe__DOT__s1_io_b_r 
                                 >> 0x25U))) & (IData)(
                                                       (vlSelf->__PVT__near_path_mods_1__DOT__b_sig 
                                                        >> 0x26U)))) 
                 ^ ((IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3.__PVT__FMA__DOT__addPipe__DOT__s1_io_b_r 
                             >> 0x26U)) ^ (~ (IData)(
                                                     (vlSelf->__PVT__near_path_mods_1__DOT__b_sig 
                                                      >> 0x27U))))));
    vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_40 
        = (1U & ((~ ((~ (IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3.__PVT__FMA__DOT__addPipe__DOT__s1_io_b_r 
                                 >> 0x26U))) & (IData)(
                                                       (vlSelf->__PVT__near_path_mods_1__DOT__b_sig 
                                                        >> 0x27U)))) 
                 ^ ((IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3.__PVT__FMA__DOT__addPipe__DOT__s1_io_b_r 
                             >> 0x27U)) ^ (~ (IData)(
                                                     (vlSelf->__PVT__near_path_mods_1__DOT__b_sig 
                                                      >> 0x28U))))));
    vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_41 
        = (1U & ((~ ((~ (IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3.__PVT__FMA__DOT__addPipe__DOT__s1_io_b_r 
                                 >> 0x27U))) & (IData)(
                                                       (vlSelf->__PVT__near_path_mods_1__DOT__b_sig 
                                                        >> 0x28U)))) 
                 ^ ((IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3.__PVT__FMA__DOT__addPipe__DOT__s1_io_b_r 
                             >> 0x28U)) ^ (~ (IData)(
                                                     (vlSelf->__PVT__near_path_mods_1__DOT__b_sig 
                                                      >> 0x29U))))));
    vlSelf->__PVT__near_path_mods_0__DOT___a_minus_b_T_3 
        = (0x3ffffffffffffULL & ((vlSelf->__PVT__near_path_mods_0_io_in_a_sig 
                                  << 1U) + (0x2000000000000ULL 
                                            | (0x1ffffffffffffULL 
                                               & (~ vlSelf->__PVT__near_path_mods_0__DOT__b_sig)))));
    vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_1 
        = (1U & (VL_REDXOR_2((3ULL & vlSelf->__PVT__near_path_mods_0__DOT__b_sig)) 
                 ^ vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3.__PVT__FMA__DOT__addPipe__DOT__s1_io_a_r));
    vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_2 
        = (1U & ((~ ((~ (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3.__PVT__FMA__DOT__addPipe__DOT__s1_io_a_r)) 
                     & (IData)((vlSelf->__PVT__near_path_mods_0__DOT__b_sig 
                                >> 1U)))) ^ ((IData)(
                                                     (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3.__PVT__FMA__DOT__addPipe__DOT__s1_io_a_r 
                                                      >> 1U)) 
                                             ^ (~ (IData)(
                                                          (vlSelf->__PVT__near_path_mods_0__DOT__b_sig 
                                                           >> 2U))))));
    vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_3 
        = (1U & ((~ ((~ (IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3.__PVT__FMA__DOT__addPipe__DOT__s1_io_a_r 
                                 >> 1U))) & (IData)(
                                                    (vlSelf->__PVT__near_path_mods_0__DOT__b_sig 
                                                     >> 2U)))) 
                 ^ ((IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3.__PVT__FMA__DOT__addPipe__DOT__s1_io_a_r 
                             >> 2U)) ^ (~ (IData)((vlSelf->__PVT__near_path_mods_0__DOT__b_sig 
                                                   >> 3U))))));
    vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_4 
        = (1U & ((~ ((~ (IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3.__PVT__FMA__DOT__addPipe__DOT__s1_io_a_r 
                                 >> 2U))) & (IData)(
                                                    (vlSelf->__PVT__near_path_mods_0__DOT__b_sig 
                                                     >> 3U)))) 
                 ^ ((IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3.__PVT__FMA__DOT__addPipe__DOT__s1_io_a_r 
                             >> 3U)) ^ (~ (IData)((vlSelf->__PVT__near_path_mods_0__DOT__b_sig 
                                                   >> 4U))))));
    vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_5 
        = (1U & ((~ ((~ (IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3.__PVT__FMA__DOT__addPipe__DOT__s1_io_a_r 
                                 >> 3U))) & (IData)(
                                                    (vlSelf->__PVT__near_path_mods_0__DOT__b_sig 
                                                     >> 4U)))) 
                 ^ ((IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3.__PVT__FMA__DOT__addPipe__DOT__s1_io_a_r 
                             >> 4U)) ^ (~ (IData)((vlSelf->__PVT__near_path_mods_0__DOT__b_sig 
                                                   >> 5U))))));
    vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_6 
        = (1U & ((~ ((~ (IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3.__PVT__FMA__DOT__addPipe__DOT__s1_io_a_r 
                                 >> 4U))) & (IData)(
                                                    (vlSelf->__PVT__near_path_mods_0__DOT__b_sig 
                                                     >> 5U)))) 
                 ^ ((IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3.__PVT__FMA__DOT__addPipe__DOT__s1_io_a_r 
                             >> 5U)) ^ (~ (IData)((vlSelf->__PVT__near_path_mods_0__DOT__b_sig 
                                                   >> 6U))))));
    vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_7 
        = (1U & ((~ ((~ (IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3.__PVT__FMA__DOT__addPipe__DOT__s1_io_a_r 
                                 >> 5U))) & (IData)(
                                                    (vlSelf->__PVT__near_path_mods_0__DOT__b_sig 
                                                     >> 6U)))) 
                 ^ ((IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3.__PVT__FMA__DOT__addPipe__DOT__s1_io_a_r 
                             >> 6U)) ^ (~ (IData)((vlSelf->__PVT__near_path_mods_0__DOT__b_sig 
                                                   >> 7U))))));
    vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_8 
        = (1U & ((~ ((~ (IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3.__PVT__FMA__DOT__addPipe__DOT__s1_io_a_r 
                                 >> 6U))) & (IData)(
                                                    (vlSelf->__PVT__near_path_mods_0__DOT__b_sig 
                                                     >> 7U)))) 
                 ^ ((IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3.__PVT__FMA__DOT__addPipe__DOT__s1_io_a_r 
                             >> 7U)) ^ (~ (IData)((vlSelf->__PVT__near_path_mods_0__DOT__b_sig 
                                                   >> 8U))))));
    vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_9 
        = (1U & ((~ ((~ (IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3.__PVT__FMA__DOT__addPipe__DOT__s1_io_a_r 
                                 >> 7U))) & (IData)(
                                                    (vlSelf->__PVT__near_path_mods_0__DOT__b_sig 
                                                     >> 8U)))) 
                 ^ ((IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3.__PVT__FMA__DOT__addPipe__DOT__s1_io_a_r 
                             >> 8U)) ^ (~ (IData)((vlSelf->__PVT__near_path_mods_0__DOT__b_sig 
                                                   >> 9U))))));
    vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_10 
        = (1U & ((~ ((~ (IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3.__PVT__FMA__DOT__addPipe__DOT__s1_io_a_r 
                                 >> 8U))) & (IData)(
                                                    (vlSelf->__PVT__near_path_mods_0__DOT__b_sig 
                                                     >> 9U)))) 
                 ^ ((IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3.__PVT__FMA__DOT__addPipe__DOT__s1_io_a_r 
                             >> 9U)) ^ (~ (IData)((vlSelf->__PVT__near_path_mods_0__DOT__b_sig 
                                                   >> 0xaU))))));
    vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_11 
        = (1U & ((~ ((~ (IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3.__PVT__FMA__DOT__addPipe__DOT__s1_io_a_r 
                                 >> 9U))) & (IData)(
                                                    (vlSelf->__PVT__near_path_mods_0__DOT__b_sig 
                                                     >> 0xaU)))) 
                 ^ ((IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3.__PVT__FMA__DOT__addPipe__DOT__s1_io_a_r 
                             >> 0xaU)) ^ (~ (IData)(
                                                    (vlSelf->__PVT__near_path_mods_0__DOT__b_sig 
                                                     >> 0xbU))))));
    vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_18 
        = (1U & ((~ ((~ (IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3.__PVT__FMA__DOT__addPipe__DOT__s1_io_a_r 
                                 >> 0x10U))) & (IData)(
                                                       (vlSelf->__PVT__near_path_mods_0__DOT__b_sig 
                                                        >> 0x11U)))) 
                 ^ ((IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3.__PVT__FMA__DOT__addPipe__DOT__s1_io_a_r 
                             >> 0x11U)) ^ (~ (IData)(
                                                     (vlSelf->__PVT__near_path_mods_0__DOT__b_sig 
                                                      >> 0x12U))))));
    vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_19 
        = (1U & ((~ ((~ (IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3.__PVT__FMA__DOT__addPipe__DOT__s1_io_a_r 
                                 >> 0x11U))) & (IData)(
                                                       (vlSelf->__PVT__near_path_mods_0__DOT__b_sig 
                                                        >> 0x12U)))) 
                 ^ ((IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3.__PVT__FMA__DOT__addPipe__DOT__s1_io_a_r 
                             >> 0x12U)) ^ (~ (IData)(
                                                     (vlSelf->__PVT__near_path_mods_0__DOT__b_sig 
                                                      >> 0x13U))))));
    vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_20 
        = (1U & ((~ ((~ (IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3.__PVT__FMA__DOT__addPipe__DOT__s1_io_a_r 
                                 >> 0x12U))) & (IData)(
                                                       (vlSelf->__PVT__near_path_mods_0__DOT__b_sig 
                                                        >> 0x13U)))) 
                 ^ ((IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3.__PVT__FMA__DOT__addPipe__DOT__s1_io_a_r 
                             >> 0x13U)) ^ (~ (IData)(
                                                     (vlSelf->__PVT__near_path_mods_0__DOT__b_sig 
                                                      >> 0x14U))))));
    vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_21 
        = (1U & ((~ ((~ (IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3.__PVT__FMA__DOT__addPipe__DOT__s1_io_a_r 
                                 >> 0x13U))) & (IData)(
                                                       (vlSelf->__PVT__near_path_mods_0__DOT__b_sig 
                                                        >> 0x14U)))) 
                 ^ ((IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3.__PVT__FMA__DOT__addPipe__DOT__s1_io_a_r 
                             >> 0x14U)) ^ (~ (IData)(
                                                     (vlSelf->__PVT__near_path_mods_0__DOT__b_sig 
                                                      >> 0x15U))))));
    vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_22 
        = (1U & ((~ ((~ (IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3.__PVT__FMA__DOT__addPipe__DOT__s1_io_a_r 
                                 >> 0x14U))) & (IData)(
                                                       (vlSelf->__PVT__near_path_mods_0__DOT__b_sig 
                                                        >> 0x15U)))) 
                 ^ ((IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3.__PVT__FMA__DOT__addPipe__DOT__s1_io_a_r 
                             >> 0x15U)) ^ (~ (IData)(
                                                     (vlSelf->__PVT__near_path_mods_0__DOT__b_sig 
                                                      >> 0x16U))))));
    vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_23 
        = (1U & ((~ ((~ (IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3.__PVT__FMA__DOT__addPipe__DOT__s1_io_a_r 
                                 >> 0x15U))) & (IData)(
                                                       (vlSelf->__PVT__near_path_mods_0__DOT__b_sig 
                                                        >> 0x16U)))) 
                 ^ ((IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3.__PVT__FMA__DOT__addPipe__DOT__s1_io_a_r 
                             >> 0x16U)) ^ (~ (IData)(
                                                     (vlSelf->__PVT__near_path_mods_0__DOT__b_sig 
                                                      >> 0x17U))))));
    vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_13 
        = (1U & ((~ ((~ (IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3.__PVT__FMA__DOT__addPipe__DOT__s1_io_a_r 
                                 >> 0xbU))) & (IData)(
                                                      (vlSelf->__PVT__near_path_mods_0__DOT__b_sig 
                                                       >> 0xcU)))) 
                 ^ ((IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3.__PVT__FMA__DOT__addPipe__DOT__s1_io_a_r 
                             >> 0xcU)) ^ (~ (IData)(
                                                    (vlSelf->__PVT__near_path_mods_0__DOT__b_sig 
                                                     >> 0xdU))))));
    vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_14 
        = (1U & ((~ ((~ (IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3.__PVT__FMA__DOT__addPipe__DOT__s1_io_a_r 
                                 >> 0xcU))) & (IData)(
                                                      (vlSelf->__PVT__near_path_mods_0__DOT__b_sig 
                                                       >> 0xdU)))) 
                 ^ ((IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3.__PVT__FMA__DOT__addPipe__DOT__s1_io_a_r 
                             >> 0xdU)) ^ (~ (IData)(
                                                    (vlSelf->__PVT__near_path_mods_0__DOT__b_sig 
                                                     >> 0xeU))))));
    vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_15 
        = (1U & ((~ ((~ (IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3.__PVT__FMA__DOT__addPipe__DOT__s1_io_a_r 
                                 >> 0xdU))) & (IData)(
                                                      (vlSelf->__PVT__near_path_mods_0__DOT__b_sig 
                                                       >> 0xeU)))) 
                 ^ ((IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3.__PVT__FMA__DOT__addPipe__DOT__s1_io_a_r 
                             >> 0xeU)) ^ (~ (IData)(
                                                    (vlSelf->__PVT__near_path_mods_0__DOT__b_sig 
                                                     >> 0xfU))))));
    vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_16 
        = (1U & ((~ ((~ (IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3.__PVT__FMA__DOT__addPipe__DOT__s1_io_a_r 
                                 >> 0xeU))) & (IData)(
                                                      (vlSelf->__PVT__near_path_mods_0__DOT__b_sig 
                                                       >> 0xfU)))) 
                 ^ ((IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3.__PVT__FMA__DOT__addPipe__DOT__s1_io_a_r 
                             >> 0xfU)) ^ (~ (IData)(
                                                    (vlSelf->__PVT__near_path_mods_0__DOT__b_sig 
                                                     >> 0x10U))))));
    vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_17 
        = (1U & ((~ ((~ (IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3.__PVT__FMA__DOT__addPipe__DOT__s1_io_a_r 
                                 >> 0xfU))) & (IData)(
                                                      (vlSelf->__PVT__near_path_mods_0__DOT__b_sig 
                                                       >> 0x10U)))) 
                 ^ ((IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3.__PVT__FMA__DOT__addPipe__DOT__s1_io_a_r 
                             >> 0x10U)) ^ (~ (IData)(
                                                     (vlSelf->__PVT__near_path_mods_0__DOT__b_sig 
                                                      >> 0x11U))))));
    vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_25 
        = (1U & ((~ ((~ (IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3.__PVT__FMA__DOT__addPipe__DOT__s1_io_a_r 
                                 >> 0x17U))) & (IData)(
                                                       (vlSelf->__PVT__near_path_mods_0__DOT__b_sig 
                                                        >> 0x18U)))) 
                 ^ ((IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3.__PVT__FMA__DOT__addPipe__DOT__s1_io_a_r 
                             >> 0x18U)) ^ (~ (IData)(
                                                     (vlSelf->__PVT__near_path_mods_0__DOT__b_sig 
                                                      >> 0x19U))))));
    vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_26 
        = (1U & ((~ ((~ (IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3.__PVT__FMA__DOT__addPipe__DOT__s1_io_a_r 
                                 >> 0x18U))) & (IData)(
                                                       (vlSelf->__PVT__near_path_mods_0__DOT__b_sig 
                                                        >> 0x19U)))) 
                 ^ ((IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3.__PVT__FMA__DOT__addPipe__DOT__s1_io_a_r 
                             >> 0x19U)) ^ (~ (IData)(
                                                     (vlSelf->__PVT__near_path_mods_0__DOT__b_sig 
                                                      >> 0x1aU))))));
    vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_27 
        = (1U & ((~ ((~ (IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3.__PVT__FMA__DOT__addPipe__DOT__s1_io_a_r 
                                 >> 0x19U))) & (IData)(
                                                       (vlSelf->__PVT__near_path_mods_0__DOT__b_sig 
                                                        >> 0x1aU)))) 
                 ^ ((IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3.__PVT__FMA__DOT__addPipe__DOT__s1_io_a_r 
                             >> 0x1aU)) ^ (~ (IData)(
                                                     (vlSelf->__PVT__near_path_mods_0__DOT__b_sig 
                                                      >> 0x1bU))))));
    vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_28 
        = (1U & ((~ ((~ (IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3.__PVT__FMA__DOT__addPipe__DOT__s1_io_a_r 
                                 >> 0x1aU))) & (IData)(
                                                       (vlSelf->__PVT__near_path_mods_0__DOT__b_sig 
                                                        >> 0x1bU)))) 
                 ^ ((IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3.__PVT__FMA__DOT__addPipe__DOT__s1_io_a_r 
                             >> 0x1bU)) ^ (~ (IData)(
                                                     (vlSelf->__PVT__near_path_mods_0__DOT__b_sig 
                                                      >> 0x1cU))))));
    vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_29 
        = (1U & ((~ ((~ (IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3.__PVT__FMA__DOT__addPipe__DOT__s1_io_a_r 
                                 >> 0x1bU))) & (IData)(
                                                       (vlSelf->__PVT__near_path_mods_0__DOT__b_sig 
                                                        >> 0x1cU)))) 
                 ^ ((IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3.__PVT__FMA__DOT__addPipe__DOT__s1_io_a_r 
                             >> 0x1cU)) ^ (~ (IData)(
                                                     (vlSelf->__PVT__near_path_mods_0__DOT__b_sig 
                                                      >> 0x1dU))))));
    vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_30 
        = (1U & ((~ ((~ (IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3.__PVT__FMA__DOT__addPipe__DOT__s1_io_a_r 
                                 >> 0x1cU))) & (IData)(
                                                       (vlSelf->__PVT__near_path_mods_0__DOT__b_sig 
                                                        >> 0x1dU)))) 
                 ^ ((IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3.__PVT__FMA__DOT__addPipe__DOT__s1_io_a_r 
                             >> 0x1dU)) ^ (~ (IData)(
                                                     (vlSelf->__PVT__near_path_mods_0__DOT__b_sig 
                                                      >> 0x1eU))))));
    vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_31 
        = (1U & ((~ ((~ (IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3.__PVT__FMA__DOT__addPipe__DOT__s1_io_a_r 
                                 >> 0x1dU))) & (IData)(
                                                       (vlSelf->__PVT__near_path_mods_0__DOT__b_sig 
                                                        >> 0x1eU)))) 
                 ^ ((IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3.__PVT__FMA__DOT__addPipe__DOT__s1_io_a_r 
                             >> 0x1eU)) ^ (~ (IData)(
                                                     (vlSelf->__PVT__near_path_mods_0__DOT__b_sig 
                                                      >> 0x1fU))))));
    vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_32 
        = (1U & ((~ ((~ (IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3.__PVT__FMA__DOT__addPipe__DOT__s1_io_a_r 
                                 >> 0x1eU))) & (IData)(
                                                       (vlSelf->__PVT__near_path_mods_0__DOT__b_sig 
                                                        >> 0x1fU)))) 
                 ^ ((IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3.__PVT__FMA__DOT__addPipe__DOT__s1_io_a_r 
                             >> 0x1fU)) ^ (~ (IData)(
                                                     (vlSelf->__PVT__near_path_mods_0__DOT__b_sig 
                                                      >> 0x20U))))));
    vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_33 
        = (1U & ((~ ((~ (IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3.__PVT__FMA__DOT__addPipe__DOT__s1_io_a_r 
                                 >> 0x1fU))) & (IData)(
                                                       (vlSelf->__PVT__near_path_mods_0__DOT__b_sig 
                                                        >> 0x20U)))) 
                 ^ ((IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3.__PVT__FMA__DOT__addPipe__DOT__s1_io_a_r 
                             >> 0x20U)) ^ (~ (IData)(
                                                     (vlSelf->__PVT__near_path_mods_0__DOT__b_sig 
                                                      >> 0x21U))))));
    vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_34 
        = (1U & ((~ ((~ (IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3.__PVT__FMA__DOT__addPipe__DOT__s1_io_a_r 
                                 >> 0x20U))) & (IData)(
                                                       (vlSelf->__PVT__near_path_mods_0__DOT__b_sig 
                                                        >> 0x21U)))) 
                 ^ ((IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3.__PVT__FMA__DOT__addPipe__DOT__s1_io_a_r 
                             >> 0x21U)) ^ (~ (IData)(
                                                     (vlSelf->__PVT__near_path_mods_0__DOT__b_sig 
                                                      >> 0x22U))))));
    vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_35 
        = (1U & ((~ ((~ (IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3.__PVT__FMA__DOT__addPipe__DOT__s1_io_a_r 
                                 >> 0x21U))) & (IData)(
                                                       (vlSelf->__PVT__near_path_mods_0__DOT__b_sig 
                                                        >> 0x22U)))) 
                 ^ ((IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3.__PVT__FMA__DOT__addPipe__DOT__s1_io_a_r 
                             >> 0x22U)) ^ (~ (IData)(
                                                     (vlSelf->__PVT__near_path_mods_0__DOT__b_sig 
                                                      >> 0x23U))))));
    vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_42 
        = (1U & ((~ ((~ (IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3.__PVT__FMA__DOT__addPipe__DOT__s1_io_a_r 
                                 >> 0x28U))) & (IData)(
                                                       (vlSelf->__PVT__near_path_mods_0__DOT__b_sig 
                                                        >> 0x29U)))) 
                 ^ ((IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3.__PVT__FMA__DOT__addPipe__DOT__s1_io_a_r 
                             >> 0x29U)) ^ (~ (IData)(
                                                     (vlSelf->__PVT__near_path_mods_0__DOT__b_sig 
                                                      >> 0x2aU))))));
    vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_43 
        = (1U & ((~ ((~ (IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3.__PVT__FMA__DOT__addPipe__DOT__s1_io_a_r 
                                 >> 0x29U))) & (IData)(
                                                       (vlSelf->__PVT__near_path_mods_0__DOT__b_sig 
                                                        >> 0x2aU)))) 
                 ^ ((IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3.__PVT__FMA__DOT__addPipe__DOT__s1_io_a_r 
                             >> 0x2aU)) ^ (~ (IData)(
                                                     (vlSelf->__PVT__near_path_mods_0__DOT__b_sig 
                                                      >> 0x2bU))))));
    vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_44 
        = (1U & ((~ ((~ (IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3.__PVT__FMA__DOT__addPipe__DOT__s1_io_a_r 
                                 >> 0x2aU))) & (IData)(
                                                       (vlSelf->__PVT__near_path_mods_0__DOT__b_sig 
                                                        >> 0x2bU)))) 
                 ^ ((IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3.__PVT__FMA__DOT__addPipe__DOT__s1_io_a_r 
                             >> 0x2bU)) ^ (~ (IData)(
                                                     (vlSelf->__PVT__near_path_mods_0__DOT__b_sig 
                                                      >> 0x2cU))))));
    vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_45 
        = (1U & ((~ ((~ (IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3.__PVT__FMA__DOT__addPipe__DOT__s1_io_a_r 
                                 >> 0x2bU))) & (IData)(
                                                       (vlSelf->__PVT__near_path_mods_0__DOT__b_sig 
                                                        >> 0x2cU)))) 
                 ^ ((IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3.__PVT__FMA__DOT__addPipe__DOT__s1_io_a_r 
                             >> 0x2cU)) ^ (~ (IData)(
                                                     (vlSelf->__PVT__near_path_mods_0__DOT__b_sig 
                                                      >> 0x2dU))))));
    vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_46 
        = (1U & ((~ ((~ (IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3.__PVT__FMA__DOT__addPipe__DOT__s1_io_a_r 
                                 >> 0x2cU))) & (IData)(
                                                       (vlSelf->__PVT__near_path_mods_0__DOT__b_sig 
                                                        >> 0x2dU)))) 
                 ^ ((IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3.__PVT__FMA__DOT__addPipe__DOT__s1_io_a_r 
                             >> 0x2dU)) ^ (~ (IData)(
                                                     (vlSelf->__PVT__near_path_mods_0__DOT__b_sig 
                                                      >> 0x2eU))))));
    vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_47 
        = (1U & ((~ ((~ (IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3.__PVT__FMA__DOT__addPipe__DOT__s1_io_a_r 
                                 >> 0x2dU))) & (IData)(
                                                       (vlSelf->__PVT__near_path_mods_0__DOT__b_sig 
                                                        >> 0x2eU)))) 
                 ^ ((IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3.__PVT__FMA__DOT__addPipe__DOT__s1_io_a_r 
                             >> 0x2eU)) ^ (~ (IData)(
                                                     (vlSelf->__PVT__near_path_mods_0__DOT__b_sig 
                                                      >> 0x2fU))))));
    vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_48 
        = (1U & ((~ ((~ (IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3.__PVT__FMA__DOT__addPipe__DOT__s1_io_a_r 
                                 >> 0x2eU))) & (IData)(
                                                       (vlSelf->__PVT__near_path_mods_0__DOT__b_sig 
                                                        >> 0x2fU)))) 
                 ^ ((0U != (0xffU & (IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3.__PVT__FMA__DOT__addPipe__DOT__s1_io_a_r 
                                             >> 0x2fU)))) 
                    ^ (~ (IData)((vlSelf->__PVT__near_path_mods_0__DOT__b_sig 
                                  >> 0x30U))))));
    vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_37 
        = (1U & ((~ ((~ (IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3.__PVT__FMA__DOT__addPipe__DOT__s1_io_a_r 
                                 >> 0x23U))) & (IData)(
                                                       (vlSelf->__PVT__near_path_mods_0__DOT__b_sig 
                                                        >> 0x24U)))) 
                 ^ ((IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3.__PVT__FMA__DOT__addPipe__DOT__s1_io_a_r 
                             >> 0x24U)) ^ (~ (IData)(
                                                     (vlSelf->__PVT__near_path_mods_0__DOT__b_sig 
                                                      >> 0x25U))))));
    vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_38 
        = (1U & ((~ ((~ (IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3.__PVT__FMA__DOT__addPipe__DOT__s1_io_a_r 
                                 >> 0x24U))) & (IData)(
                                                       (vlSelf->__PVT__near_path_mods_0__DOT__b_sig 
                                                        >> 0x25U)))) 
                 ^ ((IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3.__PVT__FMA__DOT__addPipe__DOT__s1_io_a_r 
                             >> 0x25U)) ^ (~ (IData)(
                                                     (vlSelf->__PVT__near_path_mods_0__DOT__b_sig 
                                                      >> 0x26U))))));
    vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_39 
        = (1U & ((~ ((~ (IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3.__PVT__FMA__DOT__addPipe__DOT__s1_io_a_r 
                                 >> 0x25U))) & (IData)(
                                                       (vlSelf->__PVT__near_path_mods_0__DOT__b_sig 
                                                        >> 0x26U)))) 
                 ^ ((IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3.__PVT__FMA__DOT__addPipe__DOT__s1_io_a_r 
                             >> 0x26U)) ^ (~ (IData)(
                                                     (vlSelf->__PVT__near_path_mods_0__DOT__b_sig 
                                                      >> 0x27U))))));
    vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_40 
        = (1U & ((~ ((~ (IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3.__PVT__FMA__DOT__addPipe__DOT__s1_io_a_r 
                                 >> 0x26U))) & (IData)(
                                                       (vlSelf->__PVT__near_path_mods_0__DOT__b_sig 
                                                        >> 0x27U)))) 
                 ^ ((IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3.__PVT__FMA__DOT__addPipe__DOT__s1_io_a_r 
                             >> 0x27U)) ^ (~ (IData)(
                                                     (vlSelf->__PVT__near_path_mods_0__DOT__b_sig 
                                                      >> 0x28U))))));
    vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_41 
        = (1U & ((~ ((~ (IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3.__PVT__FMA__DOT__addPipe__DOT__s1_io_a_r 
                                 >> 0x27U))) & (IData)(
                                                       (vlSelf->__PVT__near_path_mods_0__DOT__b_sig 
                                                        >> 0x28U)))) 
                 ^ ((IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3.__PVT__FMA__DOT__addPipe__DOT__s1_io_a_r 
                             >> 0x28U)) ^ (~ (IData)(
                                                     (vlSelf->__PVT__near_path_mods_0__DOT__b_sig 
                                                      >> 0x29U))))));
    vlSelf->__PVT__far_path_mods_0__DOT__adder_in_sig_b 
        = ((((0x32U < (0xffU & (IData)(vlSelf->__PVT___T_5)))
              ? 0ULL : ((0x31U >= (0xffU & (IData)(vlSelf->__PVT___T_5)))
                         ? (0x3ffffffffffffULL & ((vlSelf->__PVT__far_path_mods_0_io_in_b_sig 
                                                   << 2U) 
                                                  >> 
                                                  (0xffU 
                                                   & (IData)(vlSelf->__PVT___T_5))))
                         : 0ULL)) << 1U) | (QData)((IData)(
                                                           (0U 
                                                            != 
                                                            ((vlSelf->__PVT__far_path_mods_0_io_in_b_sig 
                                                              << 2U) 
                                                             & (((1ULL 
                                                                  << 
                                                                  (0x3fU 
                                                                   & (IData)(vlSelf->__PVT___T_5))) 
                                                                 - 1ULL) 
                                                                | ((0x32U 
                                                                    < 
                                                                    (0xffU 
                                                                     & (IData)(vlSelf->__PVT___T_5)))
                                                                    ? 0x3ffffffffffffULL
                                                                    : 0ULL)))))));
    vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__io_f_lo_hi_lo 
        = (((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_17) 
            << 5U) | (((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_16) 
                       << 4U) | (((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_15) 
                                  << 3U) | (((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_14) 
                                             << 2U) 
                                            | (((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_13) 
                                                << 1U) 
                                               | (1U 
                                                  & ((~ 
                                                      ((~ (IData)(
                                                                  (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3.__PVT__FMA__DOT__addPipe__DOT__s1_io_b_r 
                                                                   >> 0xaU))) 
                                                       & (IData)(
                                                                 (vlSelf->__PVT__near_path_mods_1__DOT__b_sig 
                                                                  >> 0xbU)))) 
                                                     ^ 
                                                     ((IData)(
                                                              (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3.__PVT__FMA__DOT__addPipe__DOT__s1_io_b_r 
                                                               >> 0xbU)) 
                                                      ^ 
                                                      (~ (IData)(
                                                                 (vlSelf->__PVT__near_path_mods_1__DOT__b_sig 
                                                                  >> 0xcU)))))))))));
    vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__io_f_hi_hi_lo 
        = (((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_41) 
            << 5U) | (((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_40) 
                       << 4U) | (((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_39) 
                                  << 3U) | (((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_38) 
                                             << 2U) 
                                            | (((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_37) 
                                                << 1U) 
                                               | (1U 
                                                  & ((~ 
                                                      ((~ (IData)(
                                                                  (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3.__PVT__FMA__DOT__addPipe__DOT__s1_io_b_r 
                                                                   >> 0x22U))) 
                                                       & (IData)(
                                                                 (vlSelf->__PVT__near_path_mods_1__DOT__b_sig 
                                                                  >> 0x23U)))) 
                                                     ^ 
                                                     ((IData)(
                                                              (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3.__PVT__FMA__DOT__addPipe__DOT__s1_io_b_r 
                                                               >> 0x23U)) 
                                                      ^ 
                                                      (~ (IData)(
                                                                 (vlSelf->__PVT__near_path_mods_1__DOT__b_sig 
                                                                  >> 0x24U)))))))))));
    vlSelf->__PVT___near_path_out_T_2 = (1U & ((IData)(vlSelf->__PVT__need_swap) 
                                               | ((~ (IData)(vlSelf->__PVT__near_path_mods_0_io_in_need_shift_b)) 
                                                  & (IData)(
                                                            (1ULL 
                                                             & ((1ULL 
                                                                 + vlSelf->__PVT__near_path_mods_0__DOT___a_minus_b_T_3) 
                                                                >> 0x31U))))));
    vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__io_f_lo_hi_lo 
        = (((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_17) 
            << 5U) | (((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_16) 
                       << 4U) | (((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_15) 
                                  << 3U) | (((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_14) 
                                             << 2U) 
                                            | (((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_13) 
                                                << 1U) 
                                               | (1U 
                                                  & ((~ 
                                                      ((~ (IData)(
                                                                  (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3.__PVT__FMA__DOT__addPipe__DOT__s1_io_a_r 
                                                                   >> 0xaU))) 
                                                       & (IData)(
                                                                 (vlSelf->__PVT__near_path_mods_0__DOT__b_sig 
                                                                  >> 0xbU)))) 
                                                     ^ 
                                                     ((IData)(
                                                              (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3.__PVT__FMA__DOT__addPipe__DOT__s1_io_a_r 
                                                               >> 0xbU)) 
                                                      ^ 
                                                      (~ (IData)(
                                                                 (vlSelf->__PVT__near_path_mods_0__DOT__b_sig 
                                                                  >> 0xcU)))))))))));
    vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__io_f_hi_hi_lo 
        = (((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_41) 
            << 5U) | (((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_40) 
                       << 4U) | (((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_39) 
                                  << 3U) | (((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_38) 
                                             << 2U) 
                                            | (((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_37) 
                                                << 1U) 
                                               | (1U 
                                                  & ((~ 
                                                      ((~ (IData)(
                                                                  (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3.__PVT__FMA__DOT__addPipe__DOT__s1_io_a_r 
                                                                   >> 0x22U))) 
                                                       & (IData)(
                                                                 (vlSelf->__PVT__near_path_mods_0__DOT__b_sig 
                                                                  >> 0x23U)))) 
                                                     ^ 
                                                     ((IData)(
                                                              (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3.__PVT__FMA__DOT__addPipe__DOT__s1_io_a_r 
                                                               >> 0x23U)) 
                                                      ^ 
                                                      (~ (IData)(
                                                                 (vlSelf->__PVT__near_path_mods_0__DOT__b_sig 
                                                                  >> 0x24U)))))))))));
    vlSelf->__PVT__far_path_mods_0__DOT__adder_result 
        = (0xfffffffffffffULL & (((((IData)(vlSelf->__PVT__need_swap)
                                     ? vlSelf->__PVT__near_path_mods_0_io_in_b_sig
                                     : vlSelf->__PVT__near_path_mods_0_io_in_a_sig) 
                                   << 3U) + ((IData)(vlSelf->__PVT__far_path_mods_0_io_in_effSub)
                                              ? (~ vlSelf->__PVT__far_path_mods_0__DOT__adder_in_sig_b)
                                              : vlSelf->__PVT__far_path_mods_0__DOT__adder_in_sig_b)) 
                                 + (QData)((IData)(vlSelf->__PVT__far_path_mods_0_io_in_effSub))));
    vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__io_f_hi 
        = (((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_48) 
            << 0x18U) | (((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_47) 
                          << 0x17U) | (((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_46) 
                                        << 0x16U) | 
                                       (((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_45) 
                                         << 0x15U) 
                                        | (((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_44) 
                                            << 0x14U) 
                                           | (((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_43) 
                                               << 0x13U) 
                                              | (((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_42) 
                                                  << 0x12U) 
                                                 | (((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__io_f_hi_hi_lo) 
                                                     << 0xcU) 
                                                    | (((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_35) 
                                                        << 0xbU) 
                                                       | (((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_34) 
                                                           << 0xaU) 
                                                          | (((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_33) 
                                                              << 9U) 
                                                             | (((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_32) 
                                                                 << 8U) 
                                                                | (((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_31) 
                                                                    << 7U) 
                                                                   | (((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_30) 
                                                                       << 6U) 
                                                                      | (((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_29) 
                                                                          << 5U) 
                                                                         | (((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_28) 
                                                                             << 4U) 
                                                                            | (((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_27) 
                                                                                << 3U) 
                                                                               | (((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_26) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_25) 
                                                                                << 1U) 
                                                                                | (1U 
                                                                                & ((~ 
                                                                                ((~ (IData)(
                                                                                (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3.__PVT__FMA__DOT__addPipe__DOT__s1_io_b_r 
                                                                                >> 0x16U))) 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_1__DOT__b_sig 
                                                                                >> 0x17U)))) 
                                                                                ^ 
                                                                                ((IData)(
                                                                                (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3.__PVT__FMA__DOT__addPipe__DOT__s1_io_b_r 
                                                                                >> 0x17U)) 
                                                                                ^ 
                                                                                (~ (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_1__DOT__b_sig 
                                                                                >> 0x18U)))))))))))))))))))))))));
    vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__io_f_hi 
        = (((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_48) 
            << 0x18U) | (((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_47) 
                          << 0x17U) | (((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_46) 
                                        << 0x16U) | 
                                       (((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_45) 
                                         << 0x15U) 
                                        | (((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_44) 
                                            << 0x14U) 
                                           | (((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_43) 
                                               << 0x13U) 
                                              | (((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_42) 
                                                  << 0x12U) 
                                                 | (((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__io_f_hi_hi_lo) 
                                                     << 0xcU) 
                                                    | (((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_35) 
                                                        << 0xbU) 
                                                       | (((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_34) 
                                                           << 0xaU) 
                                                          | (((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_33) 
                                                              << 9U) 
                                                             | (((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_32) 
                                                                 << 8U) 
                                                                | (((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_31) 
                                                                    << 7U) 
                                                                   | (((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_30) 
                                                                       << 6U) 
                                                                      | (((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_29) 
                                                                          << 5U) 
                                                                         | (((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_28) 
                                                                             << 4U) 
                                                                            | (((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_27) 
                                                                                << 3U) 
                                                                               | (((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_26) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_25) 
                                                                                << 1U) 
                                                                                | (1U 
                                                                                & ((~ 
                                                                                ((~ (IData)(
                                                                                (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3.__PVT__FMA__DOT__addPipe__DOT__s1_io_a_r 
                                                                                >> 0x16U))) 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_0__DOT__b_sig 
                                                                                >> 0x17U)))) 
                                                                                ^ 
                                                                                ((IData)(
                                                                                (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_3.__PVT__FMA__DOT__addPipe__DOT__s1_io_a_r 
                                                                                >> 0x17U)) 
                                                                                ^ 
                                                                                (~ (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_0__DOT__b_sig 
                                                                                >> 0x18U)))))))))))))))))))))))));
    __PVT__near_path_mods_1__DOT___exceed_lim_T = (0x3ffffffffffffULL 
                                                   & ((((QData)((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_48)) 
                                                        << 0x2fU) 
                                                       | (((QData)((IData)(
                                                                           ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_48) 
                                                                            | (IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_47)))) 
                                                           << 0x2eU) 
                                                          | (((QData)((IData)(
                                                                              ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_48) 
                                                                               | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_47) 
                                                                                | (IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_46))))) 
                                                              << 0x2dU) 
                                                             | (((QData)((IData)(
                                                                                ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_48) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_47) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_46) 
                                                                                | (IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_45)))))) 
                                                                 << 0x2cU) 
                                                                | (((QData)((IData)(
                                                                                ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_48) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_47) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_46) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_45) 
                                                                                | (IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_44))))))) 
                                                                    << 0x2bU) 
                                                                   | (((QData)((IData)(
                                                                                ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_48) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_47) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_46) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_45) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_44) 
                                                                                | (IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_43)))))))) 
                                                                       << 0x2aU) 
                                                                      | (((QData)((IData)(
                                                                                ((((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_48) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_47) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_46) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_45) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_44) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_43) 
                                                                                | (IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_42))))))) 
                                                                                << 5U) 
                                                                                | ((((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_48) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_47) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_46) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_45) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_44) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_43) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_42) 
                                                                                | (IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_41)))))))) 
                                                                                << 4U) 
                                                                                | ((((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_48) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_47) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_46) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_45) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_44) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_43) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_42) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_41) 
                                                                                | (IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_40))))))))) 
                                                                                << 3U) 
                                                                                | ((((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_48) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_47) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_46) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_45) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_44) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_43) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_42) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_41) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_40) 
                                                                                | (IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_39)))))))))) 
                                                                                << 2U) 
                                                                                | ((((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_48) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_47) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_46) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_45) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_44) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_43) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_42) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_41) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_40) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_39) 
                                                                                | (IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_38))))))))))) 
                                                                                << 1U) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_48) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_47) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_46) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_45) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_44) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_43) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_42) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_41) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_40) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_39) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_38) 
                                                                                | (IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_37))))))))))))))))))) 
                                                                          << 0x24U) 
                                                                         | (((QData)((IData)(
                                                                                ((((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_48) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_47) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_46) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_45) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_44) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_43) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_42) 
                                                                                | (0U 
                                                                                != (IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__io_f_hi_hi_lo))))))))) 
                                                                                << 0xbU) 
                                                                                | ((((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_48) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_47) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_46) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_45) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_44) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_43) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_42) 
                                                                                | ((0U 
                                                                                != (IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__io_f_hi_hi_lo)) 
                                                                                | (IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_35))))))))) 
                                                                                << 0xaU) 
                                                                                | ((((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_48) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_47) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_46) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_45) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_44) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_43) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_42) 
                                                                                | ((0U 
                                                                                != (IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__io_f_hi_hi_lo)) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_35) 
                                                                                | (IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_34)))))))))) 
                                                                                << 9U) 
                                                                                | ((((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_48) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_47) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_46) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_45) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_44) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_43) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_42) 
                                                                                | ((0U 
                                                                                != (IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__io_f_hi_hi_lo)) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_35) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_34) 
                                                                                | (IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_33))))))))))) 
                                                                                << 8U) 
                                                                                | ((((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_48) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_47) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_46) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_45) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_44) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_43) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_42) 
                                                                                | ((0U 
                                                                                != (IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__io_f_hi_hi_lo)) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_35) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_34) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_33) 
                                                                                | (IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_32)))))))))))) 
                                                                                << 7U) 
                                                                                | ((((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_48) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_47) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_46) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_45) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_44) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_43) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_42) 
                                                                                | ((0U 
                                                                                != (IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__io_f_hi_hi_lo)) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_35) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_34) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_33) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_32) 
                                                                                | (IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_31))))))))))))) 
                                                                                << 6U) 
                                                                                | ((((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_48) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_47) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_46) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_45) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_44) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_43) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_42) 
                                                                                | ((0U 
                                                                                != (IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__io_f_hi_hi_lo)) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_35) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_34) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_33) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_32) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_31) 
                                                                                | (IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_30)))))))))))))) 
                                                                                << 5U) 
                                                                                | ((((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_48) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_47) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_46) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_45) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_44) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_43) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_42) 
                                                                                | ((0U 
                                                                                != (IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__io_f_hi_hi_lo)) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_35) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_34) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_33) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_32) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_31) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_30) 
                                                                                | (IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_29))))))))))))))) 
                                                                                << 4U) 
                                                                                | ((((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_48) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_47) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_46) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_45) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_44) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_43) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_42) 
                                                                                | ((0U 
                                                                                != (IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__io_f_hi_hi_lo)) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_35) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_34) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_33) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_32) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_31) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_30) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_29) 
                                                                                | (IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_28)))))))))))))))) 
                                                                                << 3U) 
                                                                                | ((((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_48) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_47) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_46) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_45) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_44) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_43) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_42) 
                                                                                | ((0U 
                                                                                != (IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__io_f_hi_hi_lo)) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_35) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_34) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_33) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_32) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_31) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_30) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_29) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_28) 
                                                                                | (IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_27))))))))))))))))) 
                                                                                << 2U) 
                                                                                | ((((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_48) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_47) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_46) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_45) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_44) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_43) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_42) 
                                                                                | ((0U 
                                                                                != (IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__io_f_hi_hi_lo)) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_35) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_34) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_33) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_32) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_31) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_30) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_29) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_28) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_27) 
                                                                                | (IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_26)))))))))))))))))) 
                                                                                << 1U) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_48) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_47) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_46) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_45) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_44) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_43) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_42) 
                                                                                | ((0U 
                                                                                != (IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__io_f_hi_hi_lo)) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_35) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_34) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_33) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_32) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_31) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_30) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_29) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_28) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_27) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_26) 
                                                                                | (IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_25)))))))))))))))))))))))))))))))) 
                                                                             << 0x18U) 
                                                                            | (QData)((IData)(
                                                                                (((IData)(
                                                                                (0U 
                                                                                != vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__io_f_hi)) 
                                                                                << 0x17U) 
                                                                                | ((((0U 
                                                                                != vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__io_f_hi) 
                                                                                | (IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_23)) 
                                                                                << 0x16U) 
                                                                                | ((((0U 
                                                                                != vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__io_f_hi) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_23) 
                                                                                | (IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_22))) 
                                                                                << 0x15U) 
                                                                                | ((((0U 
                                                                                != vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__io_f_hi) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_23) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_22) 
                                                                                | (IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_21)))) 
                                                                                << 0x14U) 
                                                                                | ((((0U 
                                                                                != vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__io_f_hi) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_23) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_22) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_21) 
                                                                                | (IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_20))))) 
                                                                                << 0x13U) 
                                                                                | ((((0U 
                                                                                != vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__io_f_hi) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_23) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_22) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_21) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_20) 
                                                                                | (IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_19)))))) 
                                                                                << 0x12U) 
                                                                                | (((((0U 
                                                                                != vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__io_f_hi) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_23) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_22) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_21) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_20) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_19) 
                                                                                | (IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_18))))))) 
                                                                                << 0x11U) 
                                                                                | ((((0U 
                                                                                != vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__io_f_hi) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_23) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_22) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_21) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_20) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_19) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_18) 
                                                                                | (IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_17)))))))) 
                                                                                << 0x10U) 
                                                                                | ((((0U 
                                                                                != vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__io_f_hi) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_23) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_22) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_21) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_20) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_19) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_18) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_17) 
                                                                                | (IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_16))))))))) 
                                                                                << 0xfU) 
                                                                                | ((((0U 
                                                                                != vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__io_f_hi) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_23) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_22) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_21) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_20) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_19) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_18) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_17) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_16) 
                                                                                | (IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_15)))))))))) 
                                                                                << 0xeU) 
                                                                                | ((((0U 
                                                                                != vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__io_f_hi) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_23) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_22) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_21) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_20) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_19) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_18) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_17) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_16) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_15) 
                                                                                | (IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_14))))))))))) 
                                                                                << 0xdU) 
                                                                                | (((0U 
                                                                                != vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__io_f_hi) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_23) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_22) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_21) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_20) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_19) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_18) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_17) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_16) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_15) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_14) 
                                                                                | (IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_13)))))))))))) 
                                                                                << 0xcU)))))) 
                                                                                | ((((0U 
                                                                                != vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__io_f_hi) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_23) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_22) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_21) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_20) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_19) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_18) 
                                                                                | (0U 
                                                                                != (IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__io_f_lo_hi_lo))))))))) 
                                                                                << 0xbU) 
                                                                                | ((((0U 
                                                                                != vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__io_f_hi) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_23) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_22) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_21) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_20) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_19) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_18) 
                                                                                | ((0U 
                                                                                != (IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__io_f_lo_hi_lo)) 
                                                                                | (IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_11))))))))) 
                                                                                << 0xaU) 
                                                                                | ((((0U 
                                                                                != vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__io_f_hi) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_23) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_22) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_21) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_20) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_19) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_18) 
                                                                                | ((0U 
                                                                                != (IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__io_f_lo_hi_lo)) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_11) 
                                                                                | (IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_10)))))))))) 
                                                                                << 9U) 
                                                                                | ((((0U 
                                                                                != vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__io_f_hi) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_23) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_22) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_21) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_20) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_19) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_18) 
                                                                                | ((0U 
                                                                                != (IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__io_f_lo_hi_lo)) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_11) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_10) 
                                                                                | (IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_9))))))))))) 
                                                                                << 8U) 
                                                                                | ((((0U 
                                                                                != vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__io_f_hi) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_23) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_22) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_21) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_20) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_19) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_18) 
                                                                                | ((0U 
                                                                                != (IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__io_f_lo_hi_lo)) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_11) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_10) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_9) 
                                                                                | (IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_8)))))))))))) 
                                                                                << 7U) 
                                                                                | ((((0U 
                                                                                != vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__io_f_hi) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_23) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_22) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_21) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_20) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_19) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_18) 
                                                                                | ((0U 
                                                                                != (IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__io_f_lo_hi_lo)) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_11) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_10) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_9) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_8) 
                                                                                | (IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_7))))))))))))) 
                                                                                << 6U) 
                                                                                | ((((0U 
                                                                                != vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__io_f_hi) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_23) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_22) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_21) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_20) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_19) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_18) 
                                                                                | ((0U 
                                                                                != (IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__io_f_lo_hi_lo)) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_11) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_10) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_9) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_8) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_7) 
                                                                                | (IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_6)))))))))))))) 
                                                                                << 5U) 
                                                                                | ((((0U 
                                                                                != vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__io_f_hi) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_23) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_22) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_21) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_20) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_19) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_18) 
                                                                                | ((0U 
                                                                                != (IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__io_f_lo_hi_lo)) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_11) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_10) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_9) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_8) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_7) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_6) 
                                                                                | (IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_5))))))))))))))) 
                                                                                << 4U) 
                                                                                | ((((0U 
                                                                                != vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__io_f_hi) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_23) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_22) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_21) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_20) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_19) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_18) 
                                                                                | ((0U 
                                                                                != (IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__io_f_lo_hi_lo)) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_11) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_10) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_9) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_8) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_7) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_6) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_5) 
                                                                                | (IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_4)))))))))))))))) 
                                                                                << 3U) 
                                                                                | ((((0U 
                                                                                != vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__io_f_hi) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_23) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_22) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_21) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_20) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_19) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_18) 
                                                                                | ((0U 
                                                                                != (IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__io_f_lo_hi_lo)) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_11) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_10) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_9) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_8) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_7) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_6) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_5) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_4) 
                                                                                | (IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_3))))))))))))))))) 
                                                                                << 2U) 
                                                                                | ((((0U 
                                                                                != vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__io_f_hi) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_23) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_22) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_21) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_20) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_19) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_18) 
                                                                                | ((0U 
                                                                                != (IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__io_f_lo_hi_lo)) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_11) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_10) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_9) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_8) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_7) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_6) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_5) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_4) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_3) 
                                                                                | (IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_2)))))))))))))))))) 
                                                                                << 1U) 
                                                                                | ((0U 
                                                                                != vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__io_f_hi) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_23) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_22) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_21) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_20) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_19) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_18) 
                                                                                | ((0U 
                                                                                != (IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__io_f_lo_hi_lo)) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_11) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_10) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_9) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_8) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_7) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_6) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_5) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_4) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_3) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_2) 
                                                                                | (IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_1))))))))))))))))))))))))))))))))))))))))))))))) 
                                                      & (0x2000000000000ULL 
                                                         >> 
                                                         (0x3fU 
                                                          & (IData)(vlSelf->__PVT__near_path_mods_1_io_in_a_exp)))));
    vlSelf->__PVT__near_path_mods_1__DOT__lza_ab_io_f 
        = (((QData)((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__io_f_hi)) 
            << 0x18U) | (QData)((IData)((((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_23) 
                                          << 0x17U) 
                                         | (((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_22) 
                                             << 0x16U) 
                                            | (((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_21) 
                                                << 0x15U) 
                                               | (((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_20) 
                                                   << 0x14U) 
                                                  | (((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_19) 
                                                      << 0x13U) 
                                                     | (((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_18) 
                                                         << 0x12U) 
                                                        | (((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__io_f_lo_hi_lo) 
                                                            << 0xcU) 
                                                           | (((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_11) 
                                                               << 0xbU) 
                                                              | (((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_10) 
                                                                  << 0xaU) 
                                                                 | (((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_9) 
                                                                     << 9U) 
                                                                    | (((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_8) 
                                                                        << 8U) 
                                                                       | (((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_7) 
                                                                           << 7U) 
                                                                          | (((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_6) 
                                                                              << 6U) 
                                                                             | (((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_5) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_4) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_3) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_2) 
                                                                                << 2U) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_1) 
                                                                                << 1U)))))))))))))))))))));
    __PVT__near_path_mods_0__DOT___exceed_lim_T = (0x3ffffffffffffULL 
                                                   & ((((QData)((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_48)) 
                                                        << 0x2fU) 
                                                       | (((QData)((IData)(
                                                                           ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_48) 
                                                                            | (IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_47)))) 
                                                           << 0x2eU) 
                                                          | (((QData)((IData)(
                                                                              ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_48) 
                                                                               | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_47) 
                                                                                | (IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_46))))) 
                                                              << 0x2dU) 
                                                             | (((QData)((IData)(
                                                                                ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_48) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_47) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_46) 
                                                                                | (IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_45)))))) 
                                                                 << 0x2cU) 
                                                                | (((QData)((IData)(
                                                                                ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_48) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_47) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_46) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_45) 
                                                                                | (IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_44))))))) 
                                                                    << 0x2bU) 
                                                                   | (((QData)((IData)(
                                                                                ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_48) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_47) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_46) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_45) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_44) 
                                                                                | (IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_43)))))))) 
                                                                       << 0x2aU) 
                                                                      | (((QData)((IData)(
                                                                                ((((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_48) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_47) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_46) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_45) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_44) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_43) 
                                                                                | (IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_42))))))) 
                                                                                << 5U) 
                                                                                | ((((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_48) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_47) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_46) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_45) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_44) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_43) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_42) 
                                                                                | (IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_41)))))))) 
                                                                                << 4U) 
                                                                                | ((((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_48) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_47) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_46) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_45) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_44) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_43) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_42) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_41) 
                                                                                | (IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_40))))))))) 
                                                                                << 3U) 
                                                                                | ((((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_48) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_47) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_46) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_45) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_44) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_43) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_42) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_41) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_40) 
                                                                                | (IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_39)))))))))) 
                                                                                << 2U) 
                                                                                | ((((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_48) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_47) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_46) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_45) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_44) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_43) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_42) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_41) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_40) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_39) 
                                                                                | (IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_38))))))))))) 
                                                                                << 1U) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_48) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_47) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_46) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_45) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_44) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_43) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_42) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_41) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_40) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_39) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_38) 
                                                                                | (IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_37))))))))))))))))))) 
                                                                          << 0x24U) 
                                                                         | (((QData)((IData)(
                                                                                ((((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_48) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_47) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_46) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_45) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_44) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_43) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_42) 
                                                                                | (0U 
                                                                                != (IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__io_f_hi_hi_lo))))))))) 
                                                                                << 0xbU) 
                                                                                | ((((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_48) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_47) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_46) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_45) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_44) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_43) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_42) 
                                                                                | ((0U 
                                                                                != (IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__io_f_hi_hi_lo)) 
                                                                                | (IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_35))))))))) 
                                                                                << 0xaU) 
                                                                                | ((((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_48) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_47) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_46) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_45) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_44) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_43) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_42) 
                                                                                | ((0U 
                                                                                != (IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__io_f_hi_hi_lo)) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_35) 
                                                                                | (IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_34)))))))))) 
                                                                                << 9U) 
                                                                                | ((((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_48) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_47) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_46) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_45) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_44) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_43) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_42) 
                                                                                | ((0U 
                                                                                != (IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__io_f_hi_hi_lo)) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_35) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_34) 
                                                                                | (IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_33))))))))))) 
                                                                                << 8U) 
                                                                                | ((((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_48) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_47) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_46) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_45) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_44) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_43) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_42) 
                                                                                | ((0U 
                                                                                != (IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__io_f_hi_hi_lo)) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_35) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_34) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_33) 
                                                                                | (IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_32)))))))))))) 
                                                                                << 7U) 
                                                                                | ((((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_48) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_47) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_46) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_45) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_44) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_43) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_42) 
                                                                                | ((0U 
                                                                                != (IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__io_f_hi_hi_lo)) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_35) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_34) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_33) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_32) 
                                                                                | (IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_31))))))))))))) 
                                                                                << 6U) 
                                                                                | ((((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_48) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_47) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_46) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_45) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_44) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_43) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_42) 
                                                                                | ((0U 
                                                                                != (IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__io_f_hi_hi_lo)) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_35) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_34) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_33) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_32) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_31) 
                                                                                | (IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_30)))))))))))))) 
                                                                                << 5U) 
                                                                                | ((((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_48) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_47) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_46) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_45) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_44) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_43) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_42) 
                                                                                | ((0U 
                                                                                != (IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__io_f_hi_hi_lo)) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_35) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_34) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_33) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_32) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_31) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_30) 
                                                                                | (IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_29))))))))))))))) 
                                                                                << 4U) 
                                                                                | ((((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_48) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_47) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_46) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_45) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_44) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_43) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_42) 
                                                                                | ((0U 
                                                                                != (IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__io_f_hi_hi_lo)) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_35) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_34) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_33) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_32) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_31) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_30) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_29) 
                                                                                | (IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_28)))))))))))))))) 
                                                                                << 3U) 
                                                                                | ((((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_48) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_47) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_46) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_45) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_44) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_43) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_42) 
                                                                                | ((0U 
                                                                                != (IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__io_f_hi_hi_lo)) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_35) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_34) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_33) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_32) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_31) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_30) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_29) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_28) 
                                                                                | (IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_27))))))))))))))))) 
                                                                                << 2U) 
                                                                                | ((((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_48) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_47) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_46) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_45) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_44) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_43) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_42) 
                                                                                | ((0U 
                                                                                != (IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__io_f_hi_hi_lo)) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_35) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_34) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_33) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_32) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_31) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_30) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_29) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_28) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_27) 
                                                                                | (IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_26)))))))))))))))))) 
                                                                                << 1U) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_48) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_47) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_46) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_45) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_44) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_43) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_42) 
                                                                                | ((0U 
                                                                                != (IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__io_f_hi_hi_lo)) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_35) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_34) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_33) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_32) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_31) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_30) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_29) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_28) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_27) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_26) 
                                                                                | (IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_25)))))))))))))))))))))))))))))))) 
                                                                             << 0x18U) 
                                                                            | (QData)((IData)(
                                                                                (((IData)(
                                                                                (0U 
                                                                                != vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__io_f_hi)) 
                                                                                << 0x17U) 
                                                                                | ((((0U 
                                                                                != vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__io_f_hi) 
                                                                                | (IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_23)) 
                                                                                << 0x16U) 
                                                                                | ((((0U 
                                                                                != vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__io_f_hi) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_23) 
                                                                                | (IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_22))) 
                                                                                << 0x15U) 
                                                                                | ((((0U 
                                                                                != vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__io_f_hi) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_23) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_22) 
                                                                                | (IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_21)))) 
                                                                                << 0x14U) 
                                                                                | ((((0U 
                                                                                != vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__io_f_hi) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_23) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_22) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_21) 
                                                                                | (IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_20))))) 
                                                                                << 0x13U) 
                                                                                | ((((0U 
                                                                                != vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__io_f_hi) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_23) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_22) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_21) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_20) 
                                                                                | (IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_19)))))) 
                                                                                << 0x12U) 
                                                                                | (((((0U 
                                                                                != vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__io_f_hi) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_23) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_22) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_21) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_20) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_19) 
                                                                                | (IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_18))))))) 
                                                                                << 0x11U) 
                                                                                | ((((0U 
                                                                                != vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__io_f_hi) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_23) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_22) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_21) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_20) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_19) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_18) 
                                                                                | (IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_17)))))))) 
                                                                                << 0x10U) 
                                                                                | ((((0U 
                                                                                != vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__io_f_hi) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_23) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_22) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_21) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_20) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_19) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_18) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_17) 
                                                                                | (IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_16))))))))) 
                                                                                << 0xfU) 
                                                                                | ((((0U 
                                                                                != vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__io_f_hi) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_23) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_22) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_21) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_20) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_19) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_18) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_17) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_16) 
                                                                                | (IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_15)))))))))) 
                                                                                << 0xeU) 
                                                                                | ((((0U 
                                                                                != vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__io_f_hi) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_23) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_22) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_21) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_20) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_19) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_18) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_17) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_16) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_15) 
                                                                                | (IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_14))))))))))) 
                                                                                << 0xdU) 
                                                                                | (((0U 
                                                                                != vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__io_f_hi) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_23) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_22) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_21) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_20) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_19) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_18) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_17) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_16) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_15) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_14) 
                                                                                | (IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_13)))))))))))) 
                                                                                << 0xcU)))))) 
                                                                                | ((((0U 
                                                                                != vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__io_f_hi) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_23) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_22) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_21) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_20) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_19) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_18) 
                                                                                | (0U 
                                                                                != (IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__io_f_lo_hi_lo))))))))) 
                                                                                << 0xbU) 
                                                                                | ((((0U 
                                                                                != vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__io_f_hi) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_23) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_22) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_21) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_20) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_19) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_18) 
                                                                                | ((0U 
                                                                                != (IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__io_f_lo_hi_lo)) 
                                                                                | (IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_11))))))))) 
                                                                                << 0xaU) 
                                                                                | ((((0U 
                                                                                != vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__io_f_hi) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_23) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_22) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_21) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_20) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_19) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_18) 
                                                                                | ((0U 
                                                                                != (IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__io_f_lo_hi_lo)) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_11) 
                                                                                | (IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_10)))))))))) 
                                                                                << 9U) 
                                                                                | ((((0U 
                                                                                != vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__io_f_hi) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_23) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_22) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_21) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_20) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_19) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_18) 
                                                                                | ((0U 
                                                                                != (IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__io_f_lo_hi_lo)) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_11) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_10) 
                                                                                | (IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_9))))))))))) 
                                                                                << 8U) 
                                                                                | ((((0U 
                                                                                != vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__io_f_hi) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_23) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_22) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_21) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_20) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_19) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_18) 
                                                                                | ((0U 
                                                                                != (IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__io_f_lo_hi_lo)) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_11) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_10) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_9) 
                                                                                | (IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_8)))))))))))) 
                                                                                << 7U) 
                                                                                | ((((0U 
                                                                                != vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__io_f_hi) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_23) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_22) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_21) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_20) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_19) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_18) 
                                                                                | ((0U 
                                                                                != (IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__io_f_lo_hi_lo)) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_11) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_10) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_9) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_8) 
                                                                                | (IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_7))))))))))))) 
                                                                                << 6U) 
                                                                                | ((((0U 
                                                                                != vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__io_f_hi) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_23) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_22) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_21) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_20) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_19) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_18) 
                                                                                | ((0U 
                                                                                != (IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__io_f_lo_hi_lo)) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_11) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_10) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_9) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_8) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_7) 
                                                                                | (IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_6)))))))))))))) 
                                                                                << 5U) 
                                                                                | ((((0U 
                                                                                != vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__io_f_hi) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_23) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_22) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_21) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_20) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_19) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_18) 
                                                                                | ((0U 
                                                                                != (IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__io_f_lo_hi_lo)) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_11) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_10) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_9) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_8) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_7) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_6) 
                                                                                | (IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_5))))))))))))))) 
                                                                                << 4U) 
                                                                                | ((((0U 
                                                                                != vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__io_f_hi) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_23) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_22) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_21) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_20) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_19) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_18) 
                                                                                | ((0U 
                                                                                != (IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__io_f_lo_hi_lo)) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_11) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_10) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_9) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_8) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_7) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_6) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_5) 
                                                                                | (IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_4)))))))))))))))) 
                                                                                << 3U) 
                                                                                | ((((0U 
                                                                                != vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__io_f_hi) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_23) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_22) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_21) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_20) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_19) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_18) 
                                                                                | ((0U 
                                                                                != (IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__io_f_lo_hi_lo)) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_11) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_10) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_9) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_8) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_7) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_6) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_5) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_4) 
                                                                                | (IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_3))))))))))))))))) 
                                                                                << 2U) 
                                                                                | ((((0U 
                                                                                != vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__io_f_hi) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_23) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_22) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_21) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_20) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_19) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_18) 
                                                                                | ((0U 
                                                                                != (IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__io_f_lo_hi_lo)) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_11) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_10) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_9) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_8) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_7) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_6) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_5) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_4) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_3) 
                                                                                | (IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_2)))))))))))))))))) 
                                                                                << 1U) 
                                                                                | ((0U 
                                                                                != vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__io_f_hi) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_23) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_22) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_21) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_20) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_19) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_18) 
                                                                                | ((0U 
                                                                                != (IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__io_f_lo_hi_lo)) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_11) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_10) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_9) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_8) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_7) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_6) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_5) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_4) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_3) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_2) 
                                                                                | (IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_1))))))))))))))))))))))))))))))))))))))))))))))) 
                                                      & (0x2000000000000ULL 
                                                         >> 
                                                         (0x3fU 
                                                          & (IData)(vlSelf->__PVT__near_path_mods_0_io_in_a_exp)))));
    vlSelf->__PVT__near_path_mods_0__DOT__lza_ab_io_f 
        = (((QData)((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__io_f_hi)) 
            << 0x18U) | (QData)((IData)((((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_23) 
                                          << 0x17U) 
                                         | (((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_22) 
                                             << 0x16U) 
                                            | (((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_21) 
                                                << 0x15U) 
                                               | (((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_20) 
                                                   << 0x14U) 
                                                  | (((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_19) 
                                                      << 0x13U) 
                                                     | (((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_18) 
                                                         << 0x12U) 
                                                        | (((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__io_f_lo_hi_lo) 
                                                            << 0xcU) 
                                                           | (((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_11) 
                                                               << 0xbU) 
                                                              | (((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_10) 
                                                                  << 0xaU) 
                                                                 | (((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_9) 
                                                                     << 9U) 
                                                                    | (((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_8) 
                                                                        << 8U) 
                                                                       | (((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_7) 
                                                                           << 7U) 
                                                                          | (((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_6) 
                                                                              << 6U) 
                                                                             | (((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_5) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_4) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_3) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_2) 
                                                                                << 2U) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_1) 
                                                                                << 1U)))))))))))))))))))));
    vlSelf->__PVT__near_path_mods_1__DOT__exceed_lim 
        = ((~ (IData)((0U != __PVT__near_path_mods_1__DOT___exceed_lim_T))) 
           & (0x31U > (IData)(vlSelf->__PVT__near_path_mods_1_io_in_a_exp)));
    vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
        = (0x1ffffffffffffULL & (((0x31U > (IData)(vlSelf->__PVT__near_path_mods_1_io_in_a_exp))
                                   ? (0x3ffffffffffffULL 
                                      & (0x2000000000000ULL 
                                         >> (0x3fU 
                                             & (IData)(vlSelf->__PVT__near_path_mods_1_io_in_a_exp))))
                                   : 0ULL) | vlSelf->__PVT__near_path_mods_1__DOT__lza_ab_io_f));
    vlSelf->__PVT__near_path_mods_0__DOT__exceed_lim 
        = ((~ (IData)((0U != __PVT__near_path_mods_0__DOT___exceed_lim_T))) 
           & (0x31U > (IData)(vlSelf->__PVT__near_path_mods_0_io_in_a_exp)));
    vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
        = (0x1ffffffffffffULL & (((0x31U > (IData)(vlSelf->__PVT__near_path_mods_0_io_in_a_exp))
                                   ? (0x3ffffffffffffULL 
                                      & (0x2000000000000ULL 
                                         >> (0x3fU 
                                             & (IData)(vlSelf->__PVT__near_path_mods_0_io_in_a_exp))))
                                   : 0ULL) | vlSelf->__PVT__near_path_mods_0__DOT__lza_ab_io_f));
    vlSelf->__PVT__near_path_mods_1__DOT__int_bit_mask 
        = (((QData)((IData)((1U & (IData)((vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                           >> 0x30U))))) 
            << 0x30U) | (((QData)((IData)((0x800000000000ULL 
                                           == (0x1800000000000ULL 
                                               & vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in)))) 
                          << 0x2fU) | (((QData)((IData)(
                                                        (1U 
                                                         & ((~ (IData)(
                                                                       (0U 
                                                                        != 
                                                                        (3U 
                                                                         & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                                                >> 0x2fU)))))) 
                                                            & (IData)(
                                                                      (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                                       >> 0x2eU)))))) 
                                        << 0x2eU) | 
                                       (((QData)((IData)(
                                                         (1U 
                                                          & ((~ (IData)(
                                                                        (0U 
                                                                         != 
                                                                         (7U 
                                                                          & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                                                >> 0x2eU)))))) 
                                                             & (IData)(
                                                                       (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                                        >> 0x2dU)))))) 
                                         << 0x2dU) 
                                        | (((QData)((IData)(
                                                            (1U 
                                                             & ((~ (IData)(
                                                                           (0U 
                                                                            != 
                                                                            (0xfU 
                                                                             & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                                                >> 0x2dU)))))) 
                                                                & (IData)(
                                                                          (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                                           >> 0x2cU)))))) 
                                            << 0x2cU) 
                                           | (((QData)((IData)(
                                                               (1U 
                                                                & ((~ (IData)(
                                                                              (0U 
                                                                               != 
                                                                               (0x1fU 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                                                >> 0x2cU)))))) 
                                                                   & (IData)(
                                                                             (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                                              >> 0x2bU)))))) 
                                               << 0x2bU) 
                                              | (((QData)((IData)(
                                                                  (1U 
                                                                   & ((~ (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x3fU 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                                                >> 0x2bU)))))) 
                                                                      & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                                                >> 0x2aU)))))) 
                                                  << 0x2aU) 
                                                 | (((QData)((IData)(
                                                                     ((0x20U 
                                                                       & (((~ (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x7fU 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                                                >> 0x2aU)))))) 
                                                                           & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                                                >> 0x29U))) 
                                                                          << 5U)) 
                                                                      | ((0x10U 
                                                                          & (((~ (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xffU 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                                                >> 0x29U)))))) 
                                                                              & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                                                >> 0x28U))) 
                                                                             << 4U)) 
                                                                         | ((8U 
                                                                             & (((~ (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x1ffU 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                                                >> 0x28U)))))) 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                                                >> 0x27U))) 
                                                                                << 3U)) 
                                                                            | ((4U 
                                                                                & (((~ (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x3ffU 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                                                >> 0x27U)))))) 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                                                >> 0x26U))) 
                                                                                << 2U)) 
                                                                               | ((2U 
                                                                                & (((~ (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x7ffU 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                                                >> 0x26U)))))) 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                                                >> 0x25U))) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & ((~ (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xfffU 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                                                >> 0x25U)))))) 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                                                >> 0x24U))))))))))) 
                                                     << 0x24U) 
                                                    | (((QData)((IData)(
                                                                        ((0x800U 
                                                                          & (((~ (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x1fffU 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                                                >> 0x24U)))))) 
                                                                              & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                                                >> 0x23U))) 
                                                                             << 0xbU)) 
                                                                         | ((0x400U 
                                                                             & (((~ (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x3fffU 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                                                >> 0x23U)))))) 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                                                >> 0x22U))) 
                                                                                << 0xaU)) 
                                                                            | ((0x200U 
                                                                                & (((~ (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x7fffU 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                                                >> 0x22U)))))) 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                                                >> 0x21U))) 
                                                                                << 9U)) 
                                                                               | ((0x100U 
                                                                                & (((~ (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xffffU 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                                                >> 0x21U)))))) 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                                                >> 0x20U))) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & (((~ (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x1ffffU 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                                                >> 0x20U)))))) 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                                                >> 0x1fU))) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & (((~ (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x3ffffU 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                                                >> 0x1fU)))))) 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                                                >> 0x1eU))) 
                                                                                << 6U)) 
                                                                                | ((0x20U 
                                                                                & (((~ (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x7ffffU 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                                                >> 0x1eU)))))) 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                                                >> 0x1dU))) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & (((~ (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xfffffU 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                                                >> 0x1dU)))))) 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                                                >> 0x1cU))) 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & (((~ (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x1fffffU 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                                                >> 0x1cU)))))) 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                                                >> 0x1bU))) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & (((~ (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x3fffffU 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                                                >> 0x1bU)))))) 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                                                >> 0x1aU))) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & (((~ (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x7fffffU 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                                                >> 0x1aU)))))) 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                                                >> 0x19U))) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & ((~ (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xffffffU 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                                                >> 0x19U)))))) 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                                                >> 0x18U))))))))))))))))) 
                                                        << 0x18U) 
                                                       | (QData)((IData)(
                                                                         ((0x800000U 
                                                                           & (((~ (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x1ffffffU 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                                                >> 0x18U)))))) 
                                                                               & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                                                >> 0x17U))) 
                                                                              << 0x17U)) 
                                                                          | ((0x400000U 
                                                                              & (((~ (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x3ffffffU 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                                                >> 0x17U)))))) 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                                                >> 0x16U))) 
                                                                                << 0x16U)) 
                                                                             | ((0x200000U 
                                                                                & (((~ (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x7ffffffU 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                                                >> 0x16U)))))) 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                                                >> 0x15U))) 
                                                                                << 0x15U)) 
                                                                                | ((0x100000U 
                                                                                & (((~ (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xfffffffU 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                                                >> 0x15U)))))) 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                                                >> 0x14U))) 
                                                                                << 0x14U)) 
                                                                                | ((0x80000U 
                                                                                & (((~ (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x1fffffffU 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                                                >> 0x14U)))))) 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                                                >> 0x13U))) 
                                                                                << 0x13U)) 
                                                                                | ((0x40000U 
                                                                                & (((~ (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x3fffffffU 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                                                >> 0x13U)))))) 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                                                >> 0x12U))) 
                                                                                << 0x12U)) 
                                                                                | (((0x20000U 
                                                                                & (((~ (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x7fffffffU 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                                                >> 0x12U)))))) 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                                                >> 0x11U))) 
                                                                                << 0x11U)) 
                                                                                | ((0x10000U 
                                                                                & (((~ (IData)(
                                                                                (0U 
                                                                                != (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                                                >> 0x11U))))) 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                                                >> 0x10U))) 
                                                                                << 0x10U)) 
                                                                                | ((0x8000U 
                                                                                & (((~ (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x1ffffffffULL 
                                                                                & (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                                                >> 0x10U))))) 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                                                >> 0xfU))) 
                                                                                << 0xfU)) 
                                                                                | ((0x4000U 
                                                                                & (((~ (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x3ffffffffULL 
                                                                                & (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                                                >> 0xfU))))) 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                                                >> 0xeU))) 
                                                                                << 0xeU)) 
                                                                                | ((0x2000U 
                                                                                & (((~ (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x7ffffffffULL 
                                                                                & (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                                                >> 0xeU))))) 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                                                >> 0xdU))) 
                                                                                << 0xdU)) 
                                                                                | (0x1000U 
                                                                                & (((~ (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xfffffffffULL 
                                                                                & (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                                                >> 0xdU))))) 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                                                >> 0xcU))) 
                                                                                << 0xcU))))))) 
                                                                                | ((0x800U 
                                                                                & (((~ (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x1fffffffffULL 
                                                                                & (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                                                >> 0xcU))))) 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                                                >> 0xbU))) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & (((~ (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x3fffffffffULL 
                                                                                & (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                                                >> 0xbU))))) 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                                                >> 0xaU))) 
                                                                                << 0xaU)) 
                                                                                | ((0x200U 
                                                                                & (((~ (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x7fffffffffULL 
                                                                                & (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                                                >> 0xaU))))) 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                                                >> 9U))) 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & (((~ (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xffffffffffULL 
                                                                                & (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                                                >> 9U))))) 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                                                >> 8U))) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & (((~ (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x1ffffffffffULL 
                                                                                & (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                                                >> 8U))))) 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                                                >> 7U))) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & (((~ (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x3ffffffffffULL 
                                                                                & (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                                                >> 7U))))) 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                                                >> 6U))) 
                                                                                << 6U)) 
                                                                                | ((0x20U 
                                                                                & (((~ (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x7ffffffffffULL 
                                                                                & (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                                                >> 6U))))) 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                                                >> 5U))) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & (((~ (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xfffffffffffULL 
                                                                                & (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                                                >> 5U))))) 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                                                >> 4U))) 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & (((~ (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x1fffffffffffULL 
                                                                                & (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                                                >> 4U))))) 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                                                >> 3U))) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & (((~ (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x3fffffffffffULL 
                                                                                & (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                                                >> 3U))))) 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                                                >> 2U))) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & (((~ (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x7fffffffffffULL 
                                                                                & (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                                                >> 2U))))) 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                                                >> 1U))) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & ((~ (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xffffffffffffULL 
                                                                                & (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                                                >> 1U))))) 
                                                                                & (IData)(vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in))))))))))))))))))))))))))))))));
    __PVT__near_path_mods_1__DOT__lzc_clz__DOT___io_out_T_65 
        = ((1U & (IData)((vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                          >> 0x11U))) ? 0x1fU : ((1U 
                                                  & (IData)(
                                                            (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                             >> 0x10U)))
                                                  ? 0x20U
                                                  : 
                                                 ((1U 
                                                   & (IData)(
                                                             (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                              >> 0xfU)))
                                                   ? 0x21U
                                                   : 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                               >> 0xeU)))
                                                    ? 0x22U
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                                >> 0xdU)))
                                                     ? 0x23U
                                                     : 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                                 >> 0xcU)))
                                                      ? 0x24U
                                                      : 
                                                     ((1U 
                                                       & (IData)(
                                                                 (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                                  >> 0xbU)))
                                                       ? 0x25U
                                                       : 
                                                      ((1U 
                                                        & (IData)(
                                                                  (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                                   >> 0xaU)))
                                                        ? 0x26U
                                                        : 
                                                       ((1U 
                                                         & (IData)(
                                                                   (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                                    >> 9U)))
                                                         ? 0x27U
                                                         : 
                                                        ((1U 
                                                          & (IData)(
                                                                    (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                                     >> 8U)))
                                                          ? 0x28U
                                                          : 
                                                         ((1U 
                                                           & (IData)(
                                                                     (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                                      >> 7U)))
                                                           ? 0x29U
                                                           : 
                                                          ((1U 
                                                            & (IData)(
                                                                      (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                                       >> 6U)))
                                                            ? 0x2aU
                                                            : 
                                                           ((1U 
                                                             & (IData)(
                                                                       (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                                        >> 5U)))
                                                             ? 0x2bU
                                                             : 
                                                            ((1U 
                                                              & (IData)(
                                                                        (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                                         >> 4U)))
                                                              ? 0x2cU
                                                              : 
                                                             ((1U 
                                                               & (IData)(
                                                                         (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                                          >> 3U)))
                                                               ? 0x2dU
                                                               : 
                                                              ((1U 
                                                                & (IData)(
                                                                          (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                                           >> 2U)))
                                                                ? 0x2eU
                                                                : 
                                                               ((1U 
                                                                 & (IData)(
                                                                           (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                                            >> 1U)))
                                                                 ? 0x2fU
                                                                 : 0x30U)))))))))))))))));
    vlSelf->__PVT__near_path_mods_0__DOT__int_bit_mask 
        = (((QData)((IData)((1U & (IData)((vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                           >> 0x30U))))) 
            << 0x30U) | (((QData)((IData)((0x800000000000ULL 
                                           == (0x1800000000000ULL 
                                               & vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in)))) 
                          << 0x2fU) | (((QData)((IData)(
                                                        (1U 
                                                         & ((~ (IData)(
                                                                       (0U 
                                                                        != 
                                                                        (3U 
                                                                         & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                                                >> 0x2fU)))))) 
                                                            & (IData)(
                                                                      (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                                       >> 0x2eU)))))) 
                                        << 0x2eU) | 
                                       (((QData)((IData)(
                                                         (1U 
                                                          & ((~ (IData)(
                                                                        (0U 
                                                                         != 
                                                                         (7U 
                                                                          & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                                                >> 0x2eU)))))) 
                                                             & (IData)(
                                                                       (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                                        >> 0x2dU)))))) 
                                         << 0x2dU) 
                                        | (((QData)((IData)(
                                                            (1U 
                                                             & ((~ (IData)(
                                                                           (0U 
                                                                            != 
                                                                            (0xfU 
                                                                             & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                                                >> 0x2dU)))))) 
                                                                & (IData)(
                                                                          (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                                           >> 0x2cU)))))) 
                                            << 0x2cU) 
                                           | (((QData)((IData)(
                                                               (1U 
                                                                & ((~ (IData)(
                                                                              (0U 
                                                                               != 
                                                                               (0x1fU 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                                                >> 0x2cU)))))) 
                                                                   & (IData)(
                                                                             (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                                              >> 0x2bU)))))) 
                                               << 0x2bU) 
                                              | (((QData)((IData)(
                                                                  (1U 
                                                                   & ((~ (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x3fU 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                                                >> 0x2bU)))))) 
                                                                      & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                                                >> 0x2aU)))))) 
                                                  << 0x2aU) 
                                                 | (((QData)((IData)(
                                                                     ((0x20U 
                                                                       & (((~ (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x7fU 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                                                >> 0x2aU)))))) 
                                                                           & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                                                >> 0x29U))) 
                                                                          << 5U)) 
                                                                      | ((0x10U 
                                                                          & (((~ (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xffU 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                                                >> 0x29U)))))) 
                                                                              & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                                                >> 0x28U))) 
                                                                             << 4U)) 
                                                                         | ((8U 
                                                                             & (((~ (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x1ffU 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                                                >> 0x28U)))))) 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                                                >> 0x27U))) 
                                                                                << 3U)) 
                                                                            | ((4U 
                                                                                & (((~ (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x3ffU 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                                                >> 0x27U)))))) 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                                                >> 0x26U))) 
                                                                                << 2U)) 
                                                                               | ((2U 
                                                                                & (((~ (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x7ffU 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                                                >> 0x26U)))))) 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                                                >> 0x25U))) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & ((~ (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xfffU 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                                                >> 0x25U)))))) 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                                                >> 0x24U))))))))))) 
                                                     << 0x24U) 
                                                    | (((QData)((IData)(
                                                                        ((0x800U 
                                                                          & (((~ (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x1fffU 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                                                >> 0x24U)))))) 
                                                                              & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                                                >> 0x23U))) 
                                                                             << 0xbU)) 
                                                                         | ((0x400U 
                                                                             & (((~ (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x3fffU 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                                                >> 0x23U)))))) 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                                                >> 0x22U))) 
                                                                                << 0xaU)) 
                                                                            | ((0x200U 
                                                                                & (((~ (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x7fffU 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                                                >> 0x22U)))))) 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                                                >> 0x21U))) 
                                                                                << 9U)) 
                                                                               | ((0x100U 
                                                                                & (((~ (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xffffU 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                                                >> 0x21U)))))) 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                                                >> 0x20U))) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & (((~ (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x1ffffU 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                                                >> 0x20U)))))) 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                                                >> 0x1fU))) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & (((~ (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x3ffffU 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                                                >> 0x1fU)))))) 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                                                >> 0x1eU))) 
                                                                                << 6U)) 
                                                                                | ((0x20U 
                                                                                & (((~ (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x7ffffU 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                                                >> 0x1eU)))))) 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                                                >> 0x1dU))) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & (((~ (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xfffffU 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                                                >> 0x1dU)))))) 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                                                >> 0x1cU))) 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & (((~ (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x1fffffU 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                                                >> 0x1cU)))))) 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                                                >> 0x1bU))) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & (((~ (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x3fffffU 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                                                >> 0x1bU)))))) 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                                                >> 0x1aU))) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & (((~ (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x7fffffU 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                                                >> 0x1aU)))))) 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                                                >> 0x19U))) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & ((~ (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xffffffU 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                                                >> 0x19U)))))) 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                                                >> 0x18U))))))))))))))))) 
                                                        << 0x18U) 
                                                       | (QData)((IData)(
                                                                         ((0x800000U 
                                                                           & (((~ (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x1ffffffU 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                                                >> 0x18U)))))) 
                                                                               & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                                                >> 0x17U))) 
                                                                              << 0x17U)) 
                                                                          | ((0x400000U 
                                                                              & (((~ (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x3ffffffU 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                                                >> 0x17U)))))) 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                                                >> 0x16U))) 
                                                                                << 0x16U)) 
                                                                             | ((0x200000U 
                                                                                & (((~ (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x7ffffffU 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                                                >> 0x16U)))))) 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                                                >> 0x15U))) 
                                                                                << 0x15U)) 
                                                                                | ((0x100000U 
                                                                                & (((~ (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xfffffffU 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                                                >> 0x15U)))))) 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                                                >> 0x14U))) 
                                                                                << 0x14U)) 
                                                                                | ((0x80000U 
                                                                                & (((~ (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x1fffffffU 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                                                >> 0x14U)))))) 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                                                >> 0x13U))) 
                                                                                << 0x13U)) 
                                                                                | ((0x40000U 
                                                                                & (((~ (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x3fffffffU 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                                                >> 0x13U)))))) 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                                                >> 0x12U))) 
                                                                                << 0x12U)) 
                                                                                | (((0x20000U 
                                                                                & (((~ (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x7fffffffU 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                                                >> 0x12U)))))) 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                                                >> 0x11U))) 
                                                                                << 0x11U)) 
                                                                                | ((0x10000U 
                                                                                & (((~ (IData)(
                                                                                (0U 
                                                                                != (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                                                >> 0x11U))))) 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                                                >> 0x10U))) 
                                                                                << 0x10U)) 
                                                                                | ((0x8000U 
                                                                                & (((~ (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x1ffffffffULL 
                                                                                & (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                                                >> 0x10U))))) 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                                                >> 0xfU))) 
                                                                                << 0xfU)) 
                                                                                | ((0x4000U 
                                                                                & (((~ (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x3ffffffffULL 
                                                                                & (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                                                >> 0xfU))))) 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                                                >> 0xeU))) 
                                                                                << 0xeU)) 
                                                                                | ((0x2000U 
                                                                                & (((~ (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x7ffffffffULL 
                                                                                & (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                                                >> 0xeU))))) 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                                                >> 0xdU))) 
                                                                                << 0xdU)) 
                                                                                | (0x1000U 
                                                                                & (((~ (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xfffffffffULL 
                                                                                & (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                                                >> 0xdU))))) 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                                                >> 0xcU))) 
                                                                                << 0xcU))))))) 
                                                                                | ((0x800U 
                                                                                & (((~ (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x1fffffffffULL 
                                                                                & (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                                                >> 0xcU))))) 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                                                >> 0xbU))) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & (((~ (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x3fffffffffULL 
                                                                                & (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                                                >> 0xbU))))) 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                                                >> 0xaU))) 
                                                                                << 0xaU)) 
                                                                                | ((0x200U 
                                                                                & (((~ (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x7fffffffffULL 
                                                                                & (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                                                >> 0xaU))))) 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                                                >> 9U))) 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & (((~ (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xffffffffffULL 
                                                                                & (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                                                >> 9U))))) 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                                                >> 8U))) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & (((~ (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x1ffffffffffULL 
                                                                                & (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                                                >> 8U))))) 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                                                >> 7U))) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & (((~ (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x3ffffffffffULL 
                                                                                & (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                                                >> 7U))))) 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                                                >> 6U))) 
                                                                                << 6U)) 
                                                                                | ((0x20U 
                                                                                & (((~ (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x7ffffffffffULL 
                                                                                & (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                                                >> 6U))))) 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                                                >> 5U))) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & (((~ (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xfffffffffffULL 
                                                                                & (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                                                >> 5U))))) 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                                                >> 4U))) 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & (((~ (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x1fffffffffffULL 
                                                                                & (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                                                >> 4U))))) 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                                                >> 3U))) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & (((~ (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x3fffffffffffULL 
                                                                                & (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                                                >> 3U))))) 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                                                >> 2U))) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & (((~ (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x7fffffffffffULL 
                                                                                & (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                                                >> 2U))))) 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                                                >> 1U))) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & ((~ (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xffffffffffffULL 
                                                                                & (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                                                >> 1U))))) 
                                                                                & (IData)(vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in))))))))))))))))))))))))))))))));
    __PVT__near_path_mods_0__DOT__lzc_clz__DOT___io_out_T_65 
        = ((1U & (IData)((vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                          >> 0x11U))) ? 0x1fU : ((1U 
                                                  & (IData)(
                                                            (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                             >> 0x10U)))
                                                  ? 0x20U
                                                  : 
                                                 ((1U 
                                                   & (IData)(
                                                             (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                              >> 0xfU)))
                                                   ? 0x21U
                                                   : 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                               >> 0xeU)))
                                                    ? 0x22U
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                                >> 0xdU)))
                                                     ? 0x23U
                                                     : 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                                 >> 0xcU)))
                                                      ? 0x24U
                                                      : 
                                                     ((1U 
                                                       & (IData)(
                                                                 (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                                  >> 0xbU)))
                                                       ? 0x25U
                                                       : 
                                                      ((1U 
                                                        & (IData)(
                                                                  (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                                   >> 0xaU)))
                                                        ? 0x26U
                                                        : 
                                                       ((1U 
                                                         & (IData)(
                                                                   (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                                    >> 9U)))
                                                         ? 0x27U
                                                         : 
                                                        ((1U 
                                                          & (IData)(
                                                                    (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                                     >> 8U)))
                                                          ? 0x28U
                                                          : 
                                                         ((1U 
                                                           & (IData)(
                                                                     (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                                      >> 7U)))
                                                           ? 0x29U
                                                           : 
                                                          ((1U 
                                                            & (IData)(
                                                                      (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                                       >> 6U)))
                                                            ? 0x2aU
                                                            : 
                                                           ((1U 
                                                             & (IData)(
                                                                       (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                                        >> 5U)))
                                                             ? 0x2bU
                                                             : 
                                                            ((1U 
                                                              & (IData)(
                                                                        (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                                         >> 4U)))
                                                              ? 0x2cU
                                                              : 
                                                             ((1U 
                                                               & (IData)(
                                                                         (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                                          >> 3U)))
                                                               ? 0x2dU
                                                               : 
                                                              ((1U 
                                                                & (IData)(
                                                                          (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                                           >> 2U)))
                                                                ? 0x2eU
                                                                : 
                                                               ((1U 
                                                                 & (IData)(
                                                                           (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                                            >> 1U)))
                                                                 ? 0x2fU
                                                                 : 0x30U)))))))))))))))));
    vlSelf->__PVT__near_path_mods_1__DOT___int_bit_predicted_T_1 
        = ((vlSelf->__PVT__near_path_mods_1__DOT__int_bit_mask 
            | (QData)((IData)((1U & (~ (IData)((0U 
                                                != vlSelf->__PVT__near_path_mods_1__DOT__lza_ab_io_f))))))) 
           & (1ULL + vlSelf->__PVT__near_path_mods_1__DOT___a_minus_b_T_3));
    __PVT__near_path_mods_1__DOT__lzc_clz__DOT___io_out_T_82 
        = ((1U & (IData)((vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                          >> 0x22U))) ? 0xeU : ((1U 
                                                 & (IData)(
                                                           (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                            >> 0x21U)))
                                                 ? 0xfU
                                                 : 
                                                ((1U 
                                                  & (IData)(
                                                            (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                             >> 0x20U)))
                                                  ? 0x10U
                                                  : 
                                                 ((1U 
                                                   & (IData)(
                                                             (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                              >> 0x1fU)))
                                                   ? 0x11U
                                                   : 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                               >> 0x1eU)))
                                                    ? 0x12U
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                                >> 0x1dU)))
                                                     ? 0x13U
                                                     : 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                                 >> 0x1cU)))
                                                      ? 0x14U
                                                      : 
                                                     ((1U 
                                                       & (IData)(
                                                                 (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                                  >> 0x1bU)))
                                                       ? 0x15U
                                                       : 
                                                      ((1U 
                                                        & (IData)(
                                                                  (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                                   >> 0x1aU)))
                                                        ? 0x16U
                                                        : 
                                                       ((1U 
                                                         & (IData)(
                                                                   (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                                    >> 0x19U)))
                                                         ? 0x17U
                                                         : 
                                                        ((1U 
                                                          & (IData)(
                                                                    (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                                     >> 0x18U)))
                                                          ? 0x18U
                                                          : 
                                                         ((1U 
                                                           & (IData)(
                                                                     (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                                      >> 0x17U)))
                                                           ? 0x19U
                                                           : 
                                                          ((1U 
                                                            & (IData)(
                                                                      (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                                       >> 0x16U)))
                                                            ? 0x1aU
                                                            : 
                                                           ((1U 
                                                             & (IData)(
                                                                       (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                                        >> 0x15U)))
                                                             ? 0x1bU
                                                             : 
                                                            ((1U 
                                                              & (IData)(
                                                                        (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                                         >> 0x14U)))
                                                              ? 0x1cU
                                                              : 
                                                             ((1U 
                                                               & (IData)(
                                                                         (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                                          >> 0x13U)))
                                                               ? 0x1dU
                                                               : 
                                                              ((1U 
                                                                & (IData)(
                                                                          (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                                           >> 0x12U)))
                                                                ? 0x1eU
                                                                : (IData)(__PVT__near_path_mods_1__DOT__lzc_clz__DOT___io_out_T_65))))))))))))))))));
    vlSelf->__PVT__near_path_mods_0__DOT___int_bit_predicted_T_1 
        = ((vlSelf->__PVT__near_path_mods_0__DOT__int_bit_mask 
            | (QData)((IData)((1U & (~ (IData)((0U 
                                                != vlSelf->__PVT__near_path_mods_0__DOT__lza_ab_io_f))))))) 
           & (1ULL + vlSelf->__PVT__near_path_mods_0__DOT___a_minus_b_T_3));
    __PVT__near_path_mods_0__DOT__lzc_clz__DOT___io_out_T_82 
        = ((1U & (IData)((vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                          >> 0x22U))) ? 0xeU : ((1U 
                                                 & (IData)(
                                                           (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                            >> 0x21U)))
                                                 ? 0xfU
                                                 : 
                                                ((1U 
                                                  & (IData)(
                                                            (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                             >> 0x20U)))
                                                  ? 0x10U
                                                  : 
                                                 ((1U 
                                                   & (IData)(
                                                             (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                              >> 0x1fU)))
                                                   ? 0x11U
                                                   : 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                               >> 0x1eU)))
                                                    ? 0x12U
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                                >> 0x1dU)))
                                                     ? 0x13U
                                                     : 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                                 >> 0x1cU)))
                                                      ? 0x14U
                                                      : 
                                                     ((1U 
                                                       & (IData)(
                                                                 (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                                  >> 0x1bU)))
                                                       ? 0x15U
                                                       : 
                                                      ((1U 
                                                        & (IData)(
                                                                  (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                                   >> 0x1aU)))
                                                        ? 0x16U
                                                        : 
                                                       ((1U 
                                                         & (IData)(
                                                                   (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                                    >> 0x19U)))
                                                         ? 0x17U
                                                         : 
                                                        ((1U 
                                                          & (IData)(
                                                                    (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                                     >> 0x18U)))
                                                          ? 0x18U
                                                          : 
                                                         ((1U 
                                                           & (IData)(
                                                                     (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                                      >> 0x17U)))
                                                           ? 0x19U
                                                           : 
                                                          ((1U 
                                                            & (IData)(
                                                                      (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                                       >> 0x16U)))
                                                            ? 0x1aU
                                                            : 
                                                           ((1U 
                                                             & (IData)(
                                                                       (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                                        >> 0x15U)))
                                                             ? 0x1bU
                                                             : 
                                                            ((1U 
                                                              & (IData)(
                                                                        (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                                         >> 0x14U)))
                                                              ? 0x1cU
                                                              : 
                                                             ((1U 
                                                               & (IData)(
                                                                         (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                                          >> 0x13U)))
                                                               ? 0x1dU
                                                               : 
                                                              ((1U 
                                                                & (IData)(
                                                                          (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                                           >> 0x12U)))
                                                                ? 0x1eU
                                                                : (IData)(__PVT__near_path_mods_0__DOT__lzc_clz__DOT___io_out_T_65))))))))))))))))));
    vlSelf->__PVT__near_path_mods_1__DOT__lza_error 
        = (1U & ((~ (IData)((0U != vlSelf->__PVT__near_path_mods_1__DOT___int_bit_predicted_T_1))) 
                 & (~ (IData)(vlSelf->__PVT__near_path_mods_1__DOT__exceed_lim))));
    vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_out 
        = ((1U & (IData)((vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                          >> 0x30U))) ? 0U : ((1U & (IData)(
                                                            (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                             >> 0x2fU)))
                                               ? 1U
                                               : ((1U 
                                                   & (IData)(
                                                             (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                              >> 0x2eU)))
                                                   ? 2U
                                                   : 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                               >> 0x2dU)))
                                                    ? 3U
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                                >> 0x2cU)))
                                                     ? 4U
                                                     : 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                                 >> 0x2bU)))
                                                      ? 5U
                                                      : 
                                                     ((1U 
                                                       & (IData)(
                                                                 (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                                  >> 0x2aU)))
                                                       ? 6U
                                                       : 
                                                      ((1U 
                                                        & (IData)(
                                                                  (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                                   >> 0x29U)))
                                                        ? 7U
                                                        : 
                                                       ((1U 
                                                         & (IData)(
                                                                   (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                                    >> 0x28U)))
                                                         ? 8U
                                                         : 
                                                        ((1U 
                                                          & (IData)(
                                                                    (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                                     >> 0x27U)))
                                                          ? 9U
                                                          : 
                                                         ((1U 
                                                           & (IData)(
                                                                     (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                                      >> 0x26U)))
                                                           ? 0xaU
                                                           : 
                                                          ((1U 
                                                            & (IData)(
                                                                      (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                                       >> 0x25U)))
                                                            ? 0xbU
                                                            : 
                                                           ((1U 
                                                             & (IData)(
                                                                       (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                                        >> 0x24U)))
                                                             ? 0xcU
                                                             : 
                                                            ((1U 
                                                              & (IData)(
                                                                        (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                                         >> 0x23U)))
                                                              ? 0xdU
                                                              : (IData)(__PVT__near_path_mods_1__DOT__lzc_clz__DOT___io_out_T_82)))))))))))))));
    vlSelf->__PVT__near_path_mods_0__DOT__lza_error 
        = (1U & ((~ (IData)((0U != vlSelf->__PVT__near_path_mods_0__DOT___int_bit_predicted_T_1))) 
                 & (~ (IData)(vlSelf->__PVT__near_path_mods_0__DOT__exceed_lim))));
    vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_out 
        = ((1U & (IData)((vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                          >> 0x30U))) ? 0U : ((1U & (IData)(
                                                            (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                             >> 0x2fU)))
                                               ? 1U
                                               : ((1U 
                                                   & (IData)(
                                                             (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                              >> 0x2eU)))
                                                   ? 2U
                                                   : 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                               >> 0x2dU)))
                                                    ? 3U
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                                >> 0x2cU)))
                                                     ? 4U
                                                     : 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                                 >> 0x2bU)))
                                                      ? 5U
                                                      : 
                                                     ((1U 
                                                       & (IData)(
                                                                 (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                                  >> 0x2aU)))
                                                       ? 6U
                                                       : 
                                                      ((1U 
                                                        & (IData)(
                                                                  (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                                   >> 0x29U)))
                                                        ? 7U
                                                        : 
                                                       ((1U 
                                                         & (IData)(
                                                                   (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                                    >> 0x28U)))
                                                         ? 8U
                                                         : 
                                                        ((1U 
                                                          & (IData)(
                                                                    (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                                     >> 0x27U)))
                                                          ? 9U
                                                          : 
                                                         ((1U 
                                                           & (IData)(
                                                                     (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                                      >> 0x26U)))
                                                           ? 0xaU
                                                           : 
                                                          ((1U 
                                                            & (IData)(
                                                                      (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                                       >> 0x25U)))
                                                            ? 0xbU
                                                            : 
                                                           ((1U 
                                                             & (IData)(
                                                                       (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                                        >> 0x24U)))
                                                             ? 0xcU
                                                             : 
                                                            ((1U 
                                                              & (IData)(
                                                                        (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                                         >> 0x23U)))
                                                              ? 0xdU
                                                              : (IData)(__PVT__near_path_mods_0__DOT__lzc_clz__DOT___io_out_T_82)))))))))))))));
    vlSelf->__PVT__near_path_mods_1__DOT__sig_s1 = 
        (0x1ffffffffffffULL & ((1ULL + vlSelf->__PVT__near_path_mods_1__DOT___a_minus_b_T_3) 
                               << (IData)(vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_out)));
    vlSelf->__PVT__near_path_mods_0__DOT__sig_s1 = 
        (0x1ffffffffffffULL & ((1ULL + vlSelf->__PVT__near_path_mods_0__DOT___a_minus_b_T_3) 
                               << (IData)(vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_out)));
    vlSelf->__PVT__near_path_mods_1__DOT__near_path_sig 
        = (0x1ffffffffffffULL & ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_error)
                                  ? (vlSelf->__PVT__near_path_mods_1__DOT__sig_s1 
                                     << 1U) : vlSelf->__PVT__near_path_mods_1__DOT__sig_s1));
    vlSelf->__PVT__near_path_mods_0__DOT__near_path_sig 
        = (0x1ffffffffffffULL & ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_error)
                                  ? (vlSelf->__PVT__near_path_mods_0__DOT__sig_s1 
                                     << 1U) : vlSelf->__PVT__near_path_mods_0__DOT__sig_s1));
}

VL_ATTR_COLD void VVentus_FCMA_ADD_s1___stl_sequent__TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addPipe__DOT__s1__0(VVentus_FCMA_ADD_s1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VVentus__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      VVentus_FCMA_ADD_s1___stl_sequent__TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addPipe__DOT__s1__0\n"); );
    // Init
    QData/*48:0*/ __PVT__near_path_mods_0__DOT___exceed_lim_T;
    CData/*5:0*/ __PVT__near_path_mods_0__DOT__lzc_clz__DOT___io_out_T_65;
    CData/*5:0*/ __PVT__near_path_mods_0__DOT__lzc_clz__DOT___io_out_T_82;
    QData/*48:0*/ __PVT__near_path_mods_1__DOT___exceed_lim_T;
    CData/*5:0*/ __PVT__near_path_mods_1__DOT__lzc_clz__DOT___io_out_T_65;
    CData/*5:0*/ __PVT__near_path_mods_1__DOT__lzc_clz__DOT___io_out_T_82;
    // Body
    vlSelf->__PVT__decode_a___05FisInf = (IData)(((0x7f800000000000ULL 
                                                   == 
                                                   (0x7f800000000000ULL 
                                                    & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addPipe__DOT__s1_io_a_r)) 
                                                  & (~ (IData)(
                                                               (0U 
                                                                != 
                                                                (0x7fffffffffffULL 
                                                                 & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addPipe__DOT__s1_io_a_r))))));
    vlSelf->__PVT__far_path_mods_0_io_in_smallAdd = 
        (1U & ((~ (IData)((0U != (0xffU & (IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addPipe__DOT__s1_io_a_r 
                                                   >> 0x2fU)))))) 
               & (~ (IData)((0U != (0xffU & (IData)(
                                                    (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addPipe__DOT__s1_io_b_r 
                                                     >> 0x2fU))))))));
    vlSelf->__PVT__b_isInf = ((IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addPipe__DOT__s1_io_b_inter_valid_r)
                               ? (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addPipe__DOT__s1_io_b_inter_flags_r_isInf)
                               : (IData)(((0x7f800000000000ULL 
                                           == (0x7f800000000000ULL 
                                               & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addPipe__DOT__s1_io_b_r)) 
                                          & (~ (IData)(
                                                       (0U 
                                                        != 
                                                        (0x7fffffffffffULL 
                                                         & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addPipe__DOT__s1_io_b_r)))))));
    vlSelf->__PVT__special_path_hasNaN = ((IData)((
                                                   (0x7f800000000000ULL 
                                                    == 
                                                    (0x7f800000000000ULL 
                                                     & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addPipe__DOT__s1_io_a_r)) 
                                                   & (0U 
                                                      != 
                                                      (0x7fffffffffffULL 
                                                       & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addPipe__DOT__s1_io_a_r)))) 
                                          | ((IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addPipe__DOT__s1_io_b_inter_valid_r)
                                              ? (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addPipe__DOT__s1_io_b_inter_flags_r_isNaN)
                                              : (IData)(
                                                        ((0x7f800000000000ULL 
                                                          == 
                                                          (0x7f800000000000ULL 
                                                           & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addPipe__DOT__s1_io_b_r)) 
                                                         & (0U 
                                                            != 
                                                            (0x7fffffffffffULL 
                                                             & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addPipe__DOT__s1_io_b_r))))));
    vlSelf->__PVT__far_path_mods_0_io_in_effSub = (IData)(
                                                          ((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addPipe__DOT__s1_io_a_r 
                                                            ^ vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addPipe__DOT__s1_io_b_r) 
                                                           >> 0x37U));
    vlSelf->__PVT__near_path_mods_0_io_in_a_sig = (
                                                   ((QData)((IData)(
                                                                    (0U 
                                                                     != 
                                                                     (0xffU 
                                                                      & (IData)(
                                                                                (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addPipe__DOT__s1_io_a_r 
                                                                                >> 0x2fU)))))) 
                                                    << 0x2fU) 
                                                   | (0x7fffffffffffULL 
                                                      & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addPipe__DOT__s1_io_a_r));
    vlSelf->__PVT__near_path_mods_0_io_in_b_sig = (
                                                   ((QData)((IData)(
                                                                    (0U 
                                                                     != 
                                                                     (0xffU 
                                                                      & (IData)(
                                                                                (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addPipe__DOT__s1_io_b_r 
                                                                                >> 0x2fU)))))) 
                                                    << 0x2fU) 
                                                   | (0x7fffffffffffULL 
                                                      & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addPipe__DOT__s1_io_b_r));
    vlSelf->__PVT__near_path_mods_0_io_in_a_exp = (0xffU 
                                                   & ((IData)(
                                                              (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addPipe__DOT__s1_io_a_r 
                                                               >> 0x2fU)) 
                                                      | (1U 
                                                         & (~ (IData)(
                                                                      (0U 
                                                                       != 
                                                                       (0xffU 
                                                                        & (IData)(
                                                                                (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addPipe__DOT__s1_io_a_r 
                                                                                >> 0x2fU)))))))));
    vlSelf->__PVT__near_path_mods_1_io_in_a_exp = (0xffU 
                                                   & ((IData)(
                                                              (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addPipe__DOT__s1_io_b_r 
                                                               >> 0x2fU)) 
                                                      | (1U 
                                                         & (~ (IData)(
                                                                      (0U 
                                                                       != 
                                                                       (0xffU 
                                                                        & (IData)(
                                                                                (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addPipe__DOT__s1_io_b_r 
                                                                                >> 0x2fU)))))))));
    vlSelf->__PVT__exp_diff_b_a = (0x1ffU & ((IData)(vlSelf->__PVT__near_path_mods_1_io_in_a_exp) 
                                             - (IData)(vlSelf->__PVT__near_path_mods_0_io_in_a_exp)));
    vlSelf->__PVT__exp_diff_a_b = (0x1ffU & ((IData)(vlSelf->__PVT__near_path_mods_0_io_in_a_exp) 
                                             - (IData)(vlSelf->__PVT__near_path_mods_1_io_in_a_exp)));
    vlSelf->__PVT__near_path_mods_0_io_in_need_shift_b 
        = ((3U & (IData)(vlSelf->__PVT__near_path_mods_0_io_in_a_exp)) 
           != (3U & (IData)(vlSelf->__PVT__near_path_mods_1_io_in_a_exp)));
    vlSelf->__PVT__need_swap = (IData)((((IData)(vlSelf->__PVT__exp_diff_a_b) 
                                         >> 8U) | (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addPipe__DOT__s1_io_b_inter_flags_r_overflow)));
    vlSelf->__PVT__near_path_mods_1__DOT__b_sig = (0x1ffffffffffffULL 
                                                   & ((vlSelf->__PVT__near_path_mods_0_io_in_a_sig 
                                                       << 1U) 
                                                      >> (IData)(vlSelf->__PVT__near_path_mods_0_io_in_need_shift_b)));
    vlSelf->__PVT__near_path_mods_0__DOT__b_sig = (0x1ffffffffffffULL 
                                                   & ((vlSelf->__PVT__near_path_mods_0_io_in_b_sig 
                                                       << 1U) 
                                                      >> (IData)(vlSelf->__PVT__near_path_mods_0_io_in_need_shift_b)));
    if (vlSelf->__PVT__need_swap) {
        vlSelf->__PVT__far_path_mods_0_io_in_a_exp 
            = vlSelf->__PVT__near_path_mods_1_io_in_a_exp;
        vlSelf->__PVT___T_5 = vlSelf->__PVT__exp_diff_b_a;
        vlSelf->__PVT__far_path_mods_0_io_in_b_sig 
            = vlSelf->__PVT__near_path_mods_0_io_in_a_sig;
    } else {
        vlSelf->__PVT__far_path_mods_0_io_in_a_exp 
            = vlSelf->__PVT__near_path_mods_0_io_in_a_exp;
        vlSelf->__PVT___T_5 = vlSelf->__PVT__exp_diff_a_b;
        vlSelf->__PVT__far_path_mods_0_io_in_b_sig 
            = vlSelf->__PVT__near_path_mods_0_io_in_b_sig;
    }
    vlSelf->__PVT__near_path_mods_1__DOT___a_minus_b_T_3 
        = (0x3ffffffffffffULL & ((vlSelf->__PVT__near_path_mods_0_io_in_b_sig 
                                  << 1U) + (0x2000000000000ULL 
                                            | (0x1ffffffffffffULL 
                                               & (~ vlSelf->__PVT__near_path_mods_1__DOT__b_sig)))));
    vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_1 
        = (1U & (VL_REDXOR_2((3ULL & vlSelf->__PVT__near_path_mods_1__DOT__b_sig)) 
                 ^ vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addPipe__DOT__s1_io_b_r));
    vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_2 
        = (1U & ((~ ((~ (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addPipe__DOT__s1_io_b_r)) 
                     & (IData)((vlSelf->__PVT__near_path_mods_1__DOT__b_sig 
                                >> 1U)))) ^ ((IData)(
                                                     (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addPipe__DOT__s1_io_b_r 
                                                      >> 1U)) 
                                             ^ (~ (IData)(
                                                          (vlSelf->__PVT__near_path_mods_1__DOT__b_sig 
                                                           >> 2U))))));
    vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_3 
        = (1U & ((~ ((~ (IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addPipe__DOT__s1_io_b_r 
                                 >> 1U))) & (IData)(
                                                    (vlSelf->__PVT__near_path_mods_1__DOT__b_sig 
                                                     >> 2U)))) 
                 ^ ((IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addPipe__DOT__s1_io_b_r 
                             >> 2U)) ^ (~ (IData)((vlSelf->__PVT__near_path_mods_1__DOT__b_sig 
                                                   >> 3U))))));
    vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_4 
        = (1U & ((~ ((~ (IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addPipe__DOT__s1_io_b_r 
                                 >> 2U))) & (IData)(
                                                    (vlSelf->__PVT__near_path_mods_1__DOT__b_sig 
                                                     >> 3U)))) 
                 ^ ((IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addPipe__DOT__s1_io_b_r 
                             >> 3U)) ^ (~ (IData)((vlSelf->__PVT__near_path_mods_1__DOT__b_sig 
                                                   >> 4U))))));
    vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_5 
        = (1U & ((~ ((~ (IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addPipe__DOT__s1_io_b_r 
                                 >> 3U))) & (IData)(
                                                    (vlSelf->__PVT__near_path_mods_1__DOT__b_sig 
                                                     >> 4U)))) 
                 ^ ((IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addPipe__DOT__s1_io_b_r 
                             >> 4U)) ^ (~ (IData)((vlSelf->__PVT__near_path_mods_1__DOT__b_sig 
                                                   >> 5U))))));
    vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_6 
        = (1U & ((~ ((~ (IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addPipe__DOT__s1_io_b_r 
                                 >> 4U))) & (IData)(
                                                    (vlSelf->__PVT__near_path_mods_1__DOT__b_sig 
                                                     >> 5U)))) 
                 ^ ((IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addPipe__DOT__s1_io_b_r 
                             >> 5U)) ^ (~ (IData)((vlSelf->__PVT__near_path_mods_1__DOT__b_sig 
                                                   >> 6U))))));
    vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_7 
        = (1U & ((~ ((~ (IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addPipe__DOT__s1_io_b_r 
                                 >> 5U))) & (IData)(
                                                    (vlSelf->__PVT__near_path_mods_1__DOT__b_sig 
                                                     >> 6U)))) 
                 ^ ((IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addPipe__DOT__s1_io_b_r 
                             >> 6U)) ^ (~ (IData)((vlSelf->__PVT__near_path_mods_1__DOT__b_sig 
                                                   >> 7U))))));
    vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_8 
        = (1U & ((~ ((~ (IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addPipe__DOT__s1_io_b_r 
                                 >> 6U))) & (IData)(
                                                    (vlSelf->__PVT__near_path_mods_1__DOT__b_sig 
                                                     >> 7U)))) 
                 ^ ((IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addPipe__DOT__s1_io_b_r 
                             >> 7U)) ^ (~ (IData)((vlSelf->__PVT__near_path_mods_1__DOT__b_sig 
                                                   >> 8U))))));
    vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_9 
        = (1U & ((~ ((~ (IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addPipe__DOT__s1_io_b_r 
                                 >> 7U))) & (IData)(
                                                    (vlSelf->__PVT__near_path_mods_1__DOT__b_sig 
                                                     >> 8U)))) 
                 ^ ((IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addPipe__DOT__s1_io_b_r 
                             >> 8U)) ^ (~ (IData)((vlSelf->__PVT__near_path_mods_1__DOT__b_sig 
                                                   >> 9U))))));
    vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_10 
        = (1U & ((~ ((~ (IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addPipe__DOT__s1_io_b_r 
                                 >> 8U))) & (IData)(
                                                    (vlSelf->__PVT__near_path_mods_1__DOT__b_sig 
                                                     >> 9U)))) 
                 ^ ((IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addPipe__DOT__s1_io_b_r 
                             >> 9U)) ^ (~ (IData)((vlSelf->__PVT__near_path_mods_1__DOT__b_sig 
                                                   >> 0xaU))))));
    vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_11 
        = (1U & ((~ ((~ (IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addPipe__DOT__s1_io_b_r 
                                 >> 9U))) & (IData)(
                                                    (vlSelf->__PVT__near_path_mods_1__DOT__b_sig 
                                                     >> 0xaU)))) 
                 ^ ((IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addPipe__DOT__s1_io_b_r 
                             >> 0xaU)) ^ (~ (IData)(
                                                    (vlSelf->__PVT__near_path_mods_1__DOT__b_sig 
                                                     >> 0xbU))))));
    vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_18 
        = (1U & ((~ ((~ (IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addPipe__DOT__s1_io_b_r 
                                 >> 0x10U))) & (IData)(
                                                       (vlSelf->__PVT__near_path_mods_1__DOT__b_sig 
                                                        >> 0x11U)))) 
                 ^ ((IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addPipe__DOT__s1_io_b_r 
                             >> 0x11U)) ^ (~ (IData)(
                                                     (vlSelf->__PVT__near_path_mods_1__DOT__b_sig 
                                                      >> 0x12U))))));
    vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_19 
        = (1U & ((~ ((~ (IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addPipe__DOT__s1_io_b_r 
                                 >> 0x11U))) & (IData)(
                                                       (vlSelf->__PVT__near_path_mods_1__DOT__b_sig 
                                                        >> 0x12U)))) 
                 ^ ((IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addPipe__DOT__s1_io_b_r 
                             >> 0x12U)) ^ (~ (IData)(
                                                     (vlSelf->__PVT__near_path_mods_1__DOT__b_sig 
                                                      >> 0x13U))))));
    vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_20 
        = (1U & ((~ ((~ (IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addPipe__DOT__s1_io_b_r 
                                 >> 0x12U))) & (IData)(
                                                       (vlSelf->__PVT__near_path_mods_1__DOT__b_sig 
                                                        >> 0x13U)))) 
                 ^ ((IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addPipe__DOT__s1_io_b_r 
                             >> 0x13U)) ^ (~ (IData)(
                                                     (vlSelf->__PVT__near_path_mods_1__DOT__b_sig 
                                                      >> 0x14U))))));
    vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_21 
        = (1U & ((~ ((~ (IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addPipe__DOT__s1_io_b_r 
                                 >> 0x13U))) & (IData)(
                                                       (vlSelf->__PVT__near_path_mods_1__DOT__b_sig 
                                                        >> 0x14U)))) 
                 ^ ((IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addPipe__DOT__s1_io_b_r 
                             >> 0x14U)) ^ (~ (IData)(
                                                     (vlSelf->__PVT__near_path_mods_1__DOT__b_sig 
                                                      >> 0x15U))))));
    vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_22 
        = (1U & ((~ ((~ (IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addPipe__DOT__s1_io_b_r 
                                 >> 0x14U))) & (IData)(
                                                       (vlSelf->__PVT__near_path_mods_1__DOT__b_sig 
                                                        >> 0x15U)))) 
                 ^ ((IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addPipe__DOT__s1_io_b_r 
                             >> 0x15U)) ^ (~ (IData)(
                                                     (vlSelf->__PVT__near_path_mods_1__DOT__b_sig 
                                                      >> 0x16U))))));
    vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_23 
        = (1U & ((~ ((~ (IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addPipe__DOT__s1_io_b_r 
                                 >> 0x15U))) & (IData)(
                                                       (vlSelf->__PVT__near_path_mods_1__DOT__b_sig 
                                                        >> 0x16U)))) 
                 ^ ((IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addPipe__DOT__s1_io_b_r 
                             >> 0x16U)) ^ (~ (IData)(
                                                     (vlSelf->__PVT__near_path_mods_1__DOT__b_sig 
                                                      >> 0x17U))))));
    vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_13 
        = (1U & ((~ ((~ (IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addPipe__DOT__s1_io_b_r 
                                 >> 0xbU))) & (IData)(
                                                      (vlSelf->__PVT__near_path_mods_1__DOT__b_sig 
                                                       >> 0xcU)))) 
                 ^ ((IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addPipe__DOT__s1_io_b_r 
                             >> 0xcU)) ^ (~ (IData)(
                                                    (vlSelf->__PVT__near_path_mods_1__DOT__b_sig 
                                                     >> 0xdU))))));
    vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_14 
        = (1U & ((~ ((~ (IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addPipe__DOT__s1_io_b_r 
                                 >> 0xcU))) & (IData)(
                                                      (vlSelf->__PVT__near_path_mods_1__DOT__b_sig 
                                                       >> 0xdU)))) 
                 ^ ((IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addPipe__DOT__s1_io_b_r 
                             >> 0xdU)) ^ (~ (IData)(
                                                    (vlSelf->__PVT__near_path_mods_1__DOT__b_sig 
                                                     >> 0xeU))))));
    vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_15 
        = (1U & ((~ ((~ (IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addPipe__DOT__s1_io_b_r 
                                 >> 0xdU))) & (IData)(
                                                      (vlSelf->__PVT__near_path_mods_1__DOT__b_sig 
                                                       >> 0xeU)))) 
                 ^ ((IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addPipe__DOT__s1_io_b_r 
                             >> 0xeU)) ^ (~ (IData)(
                                                    (vlSelf->__PVT__near_path_mods_1__DOT__b_sig 
                                                     >> 0xfU))))));
    vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_16 
        = (1U & ((~ ((~ (IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addPipe__DOT__s1_io_b_r 
                                 >> 0xeU))) & (IData)(
                                                      (vlSelf->__PVT__near_path_mods_1__DOT__b_sig 
                                                       >> 0xfU)))) 
                 ^ ((IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addPipe__DOT__s1_io_b_r 
                             >> 0xfU)) ^ (~ (IData)(
                                                    (vlSelf->__PVT__near_path_mods_1__DOT__b_sig 
                                                     >> 0x10U))))));
    vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_17 
        = (1U & ((~ ((~ (IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addPipe__DOT__s1_io_b_r 
                                 >> 0xfU))) & (IData)(
                                                      (vlSelf->__PVT__near_path_mods_1__DOT__b_sig 
                                                       >> 0x10U)))) 
                 ^ ((IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addPipe__DOT__s1_io_b_r 
                             >> 0x10U)) ^ (~ (IData)(
                                                     (vlSelf->__PVT__near_path_mods_1__DOT__b_sig 
                                                      >> 0x11U))))));
    vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_25 
        = (1U & ((~ ((~ (IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addPipe__DOT__s1_io_b_r 
                                 >> 0x17U))) & (IData)(
                                                       (vlSelf->__PVT__near_path_mods_1__DOT__b_sig 
                                                        >> 0x18U)))) 
                 ^ ((IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addPipe__DOT__s1_io_b_r 
                             >> 0x18U)) ^ (~ (IData)(
                                                     (vlSelf->__PVT__near_path_mods_1__DOT__b_sig 
                                                      >> 0x19U))))));
    vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_26 
        = (1U & ((~ ((~ (IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addPipe__DOT__s1_io_b_r 
                                 >> 0x18U))) & (IData)(
                                                       (vlSelf->__PVT__near_path_mods_1__DOT__b_sig 
                                                        >> 0x19U)))) 
                 ^ ((IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addPipe__DOT__s1_io_b_r 
                             >> 0x19U)) ^ (~ (IData)(
                                                     (vlSelf->__PVT__near_path_mods_1__DOT__b_sig 
                                                      >> 0x1aU))))));
    vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_27 
        = (1U & ((~ ((~ (IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addPipe__DOT__s1_io_b_r 
                                 >> 0x19U))) & (IData)(
                                                       (vlSelf->__PVT__near_path_mods_1__DOT__b_sig 
                                                        >> 0x1aU)))) 
                 ^ ((IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addPipe__DOT__s1_io_b_r 
                             >> 0x1aU)) ^ (~ (IData)(
                                                     (vlSelf->__PVT__near_path_mods_1__DOT__b_sig 
                                                      >> 0x1bU))))));
    vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_28 
        = (1U & ((~ ((~ (IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addPipe__DOT__s1_io_b_r 
                                 >> 0x1aU))) & (IData)(
                                                       (vlSelf->__PVT__near_path_mods_1__DOT__b_sig 
                                                        >> 0x1bU)))) 
                 ^ ((IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addPipe__DOT__s1_io_b_r 
                             >> 0x1bU)) ^ (~ (IData)(
                                                     (vlSelf->__PVT__near_path_mods_1__DOT__b_sig 
                                                      >> 0x1cU))))));
    vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_29 
        = (1U & ((~ ((~ (IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addPipe__DOT__s1_io_b_r 
                                 >> 0x1bU))) & (IData)(
                                                       (vlSelf->__PVT__near_path_mods_1__DOT__b_sig 
                                                        >> 0x1cU)))) 
                 ^ ((IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addPipe__DOT__s1_io_b_r 
                             >> 0x1cU)) ^ (~ (IData)(
                                                     (vlSelf->__PVT__near_path_mods_1__DOT__b_sig 
                                                      >> 0x1dU))))));
    vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_30 
        = (1U & ((~ ((~ (IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addPipe__DOT__s1_io_b_r 
                                 >> 0x1cU))) & (IData)(
                                                       (vlSelf->__PVT__near_path_mods_1__DOT__b_sig 
                                                        >> 0x1dU)))) 
                 ^ ((IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addPipe__DOT__s1_io_b_r 
                             >> 0x1dU)) ^ (~ (IData)(
                                                     (vlSelf->__PVT__near_path_mods_1__DOT__b_sig 
                                                      >> 0x1eU))))));
    vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_31 
        = (1U & ((~ ((~ (IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addPipe__DOT__s1_io_b_r 
                                 >> 0x1dU))) & (IData)(
                                                       (vlSelf->__PVT__near_path_mods_1__DOT__b_sig 
                                                        >> 0x1eU)))) 
                 ^ ((IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addPipe__DOT__s1_io_b_r 
                             >> 0x1eU)) ^ (~ (IData)(
                                                     (vlSelf->__PVT__near_path_mods_1__DOT__b_sig 
                                                      >> 0x1fU))))));
    vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_32 
        = (1U & ((~ ((~ (IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addPipe__DOT__s1_io_b_r 
                                 >> 0x1eU))) & (IData)(
                                                       (vlSelf->__PVT__near_path_mods_1__DOT__b_sig 
                                                        >> 0x1fU)))) 
                 ^ ((IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addPipe__DOT__s1_io_b_r 
                             >> 0x1fU)) ^ (~ (IData)(
                                                     (vlSelf->__PVT__near_path_mods_1__DOT__b_sig 
                                                      >> 0x20U))))));
    vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_33 
        = (1U & ((~ ((~ (IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addPipe__DOT__s1_io_b_r 
                                 >> 0x1fU))) & (IData)(
                                                       (vlSelf->__PVT__near_path_mods_1__DOT__b_sig 
                                                        >> 0x20U)))) 
                 ^ ((IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addPipe__DOT__s1_io_b_r 
                             >> 0x20U)) ^ (~ (IData)(
                                                     (vlSelf->__PVT__near_path_mods_1__DOT__b_sig 
                                                      >> 0x21U))))));
    vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_34 
        = (1U & ((~ ((~ (IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addPipe__DOT__s1_io_b_r 
                                 >> 0x20U))) & (IData)(
                                                       (vlSelf->__PVT__near_path_mods_1__DOT__b_sig 
                                                        >> 0x21U)))) 
                 ^ ((IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addPipe__DOT__s1_io_b_r 
                             >> 0x21U)) ^ (~ (IData)(
                                                     (vlSelf->__PVT__near_path_mods_1__DOT__b_sig 
                                                      >> 0x22U))))));
    vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_35 
        = (1U & ((~ ((~ (IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addPipe__DOT__s1_io_b_r 
                                 >> 0x21U))) & (IData)(
                                                       (vlSelf->__PVT__near_path_mods_1__DOT__b_sig 
                                                        >> 0x22U)))) 
                 ^ ((IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addPipe__DOT__s1_io_b_r 
                             >> 0x22U)) ^ (~ (IData)(
                                                     (vlSelf->__PVT__near_path_mods_1__DOT__b_sig 
                                                      >> 0x23U))))));
    vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_42 
        = (1U & ((~ ((~ (IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addPipe__DOT__s1_io_b_r 
                                 >> 0x28U))) & (IData)(
                                                       (vlSelf->__PVT__near_path_mods_1__DOT__b_sig 
                                                        >> 0x29U)))) 
                 ^ ((IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addPipe__DOT__s1_io_b_r 
                             >> 0x29U)) ^ (~ (IData)(
                                                     (vlSelf->__PVT__near_path_mods_1__DOT__b_sig 
                                                      >> 0x2aU))))));
    vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_43 
        = (1U & ((~ ((~ (IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addPipe__DOT__s1_io_b_r 
                                 >> 0x29U))) & (IData)(
                                                       (vlSelf->__PVT__near_path_mods_1__DOT__b_sig 
                                                        >> 0x2aU)))) 
                 ^ ((IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addPipe__DOT__s1_io_b_r 
                             >> 0x2aU)) ^ (~ (IData)(
                                                     (vlSelf->__PVT__near_path_mods_1__DOT__b_sig 
                                                      >> 0x2bU))))));
    vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_44 
        = (1U & ((~ ((~ (IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addPipe__DOT__s1_io_b_r 
                                 >> 0x2aU))) & (IData)(
                                                       (vlSelf->__PVT__near_path_mods_1__DOT__b_sig 
                                                        >> 0x2bU)))) 
                 ^ ((IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addPipe__DOT__s1_io_b_r 
                             >> 0x2bU)) ^ (~ (IData)(
                                                     (vlSelf->__PVT__near_path_mods_1__DOT__b_sig 
                                                      >> 0x2cU))))));
    vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_45 
        = (1U & ((~ ((~ (IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addPipe__DOT__s1_io_b_r 
                                 >> 0x2bU))) & (IData)(
                                                       (vlSelf->__PVT__near_path_mods_1__DOT__b_sig 
                                                        >> 0x2cU)))) 
                 ^ ((IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addPipe__DOT__s1_io_b_r 
                             >> 0x2cU)) ^ (~ (IData)(
                                                     (vlSelf->__PVT__near_path_mods_1__DOT__b_sig 
                                                      >> 0x2dU))))));
    vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_46 
        = (1U & ((~ ((~ (IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addPipe__DOT__s1_io_b_r 
                                 >> 0x2cU))) & (IData)(
                                                       (vlSelf->__PVT__near_path_mods_1__DOT__b_sig 
                                                        >> 0x2dU)))) 
                 ^ ((IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addPipe__DOT__s1_io_b_r 
                             >> 0x2dU)) ^ (~ (IData)(
                                                     (vlSelf->__PVT__near_path_mods_1__DOT__b_sig 
                                                      >> 0x2eU))))));
    vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_47 
        = (1U & ((~ ((~ (IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addPipe__DOT__s1_io_b_r 
                                 >> 0x2dU))) & (IData)(
                                                       (vlSelf->__PVT__near_path_mods_1__DOT__b_sig 
                                                        >> 0x2eU)))) 
                 ^ ((IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addPipe__DOT__s1_io_b_r 
                             >> 0x2eU)) ^ (~ (IData)(
                                                     (vlSelf->__PVT__near_path_mods_1__DOT__b_sig 
                                                      >> 0x2fU))))));
    vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_48 
        = (1U & ((~ ((~ (IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addPipe__DOT__s1_io_b_r 
                                 >> 0x2eU))) & (IData)(
                                                       (vlSelf->__PVT__near_path_mods_1__DOT__b_sig 
                                                        >> 0x2fU)))) 
                 ^ ((0U != (0xffU & (IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addPipe__DOT__s1_io_b_r 
                                             >> 0x2fU)))) 
                    ^ (~ (IData)((vlSelf->__PVT__near_path_mods_1__DOT__b_sig 
                                  >> 0x30U))))));
    vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_37 
        = (1U & ((~ ((~ (IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addPipe__DOT__s1_io_b_r 
                                 >> 0x23U))) & (IData)(
                                                       (vlSelf->__PVT__near_path_mods_1__DOT__b_sig 
                                                        >> 0x24U)))) 
                 ^ ((IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addPipe__DOT__s1_io_b_r 
                             >> 0x24U)) ^ (~ (IData)(
                                                     (vlSelf->__PVT__near_path_mods_1__DOT__b_sig 
                                                      >> 0x25U))))));
    vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_38 
        = (1U & ((~ ((~ (IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addPipe__DOT__s1_io_b_r 
                                 >> 0x24U))) & (IData)(
                                                       (vlSelf->__PVT__near_path_mods_1__DOT__b_sig 
                                                        >> 0x25U)))) 
                 ^ ((IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addPipe__DOT__s1_io_b_r 
                             >> 0x25U)) ^ (~ (IData)(
                                                     (vlSelf->__PVT__near_path_mods_1__DOT__b_sig 
                                                      >> 0x26U))))));
    vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_39 
        = (1U & ((~ ((~ (IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addPipe__DOT__s1_io_b_r 
                                 >> 0x25U))) & (IData)(
                                                       (vlSelf->__PVT__near_path_mods_1__DOT__b_sig 
                                                        >> 0x26U)))) 
                 ^ ((IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addPipe__DOT__s1_io_b_r 
                             >> 0x26U)) ^ (~ (IData)(
                                                     (vlSelf->__PVT__near_path_mods_1__DOT__b_sig 
                                                      >> 0x27U))))));
    vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_40 
        = (1U & ((~ ((~ (IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addPipe__DOT__s1_io_b_r 
                                 >> 0x26U))) & (IData)(
                                                       (vlSelf->__PVT__near_path_mods_1__DOT__b_sig 
                                                        >> 0x27U)))) 
                 ^ ((IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addPipe__DOT__s1_io_b_r 
                             >> 0x27U)) ^ (~ (IData)(
                                                     (vlSelf->__PVT__near_path_mods_1__DOT__b_sig 
                                                      >> 0x28U))))));
    vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_41 
        = (1U & ((~ ((~ (IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addPipe__DOT__s1_io_b_r 
                                 >> 0x27U))) & (IData)(
                                                       (vlSelf->__PVT__near_path_mods_1__DOT__b_sig 
                                                        >> 0x28U)))) 
                 ^ ((IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addPipe__DOT__s1_io_b_r 
                             >> 0x28U)) ^ (~ (IData)(
                                                     (vlSelf->__PVT__near_path_mods_1__DOT__b_sig 
                                                      >> 0x29U))))));
    vlSelf->__PVT__near_path_mods_0__DOT___a_minus_b_T_3 
        = (0x3ffffffffffffULL & ((vlSelf->__PVT__near_path_mods_0_io_in_a_sig 
                                  << 1U) + (0x2000000000000ULL 
                                            | (0x1ffffffffffffULL 
                                               & (~ vlSelf->__PVT__near_path_mods_0__DOT__b_sig)))));
    vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_1 
        = (1U & (VL_REDXOR_2((3ULL & vlSelf->__PVT__near_path_mods_0__DOT__b_sig)) 
                 ^ vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addPipe__DOT__s1_io_a_r));
    vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_2 
        = (1U & ((~ ((~ (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addPipe__DOT__s1_io_a_r)) 
                     & (IData)((vlSelf->__PVT__near_path_mods_0__DOT__b_sig 
                                >> 1U)))) ^ ((IData)(
                                                     (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addPipe__DOT__s1_io_a_r 
                                                      >> 1U)) 
                                             ^ (~ (IData)(
                                                          (vlSelf->__PVT__near_path_mods_0__DOT__b_sig 
                                                           >> 2U))))));
    vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_3 
        = (1U & ((~ ((~ (IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addPipe__DOT__s1_io_a_r 
                                 >> 1U))) & (IData)(
                                                    (vlSelf->__PVT__near_path_mods_0__DOT__b_sig 
                                                     >> 2U)))) 
                 ^ ((IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addPipe__DOT__s1_io_a_r 
                             >> 2U)) ^ (~ (IData)((vlSelf->__PVT__near_path_mods_0__DOT__b_sig 
                                                   >> 3U))))));
    vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_4 
        = (1U & ((~ ((~ (IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addPipe__DOT__s1_io_a_r 
                                 >> 2U))) & (IData)(
                                                    (vlSelf->__PVT__near_path_mods_0__DOT__b_sig 
                                                     >> 3U)))) 
                 ^ ((IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addPipe__DOT__s1_io_a_r 
                             >> 3U)) ^ (~ (IData)((vlSelf->__PVT__near_path_mods_0__DOT__b_sig 
                                                   >> 4U))))));
    vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_5 
        = (1U & ((~ ((~ (IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addPipe__DOT__s1_io_a_r 
                                 >> 3U))) & (IData)(
                                                    (vlSelf->__PVT__near_path_mods_0__DOT__b_sig 
                                                     >> 4U)))) 
                 ^ ((IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addPipe__DOT__s1_io_a_r 
                             >> 4U)) ^ (~ (IData)((vlSelf->__PVT__near_path_mods_0__DOT__b_sig 
                                                   >> 5U))))));
    vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_6 
        = (1U & ((~ ((~ (IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addPipe__DOT__s1_io_a_r 
                                 >> 4U))) & (IData)(
                                                    (vlSelf->__PVT__near_path_mods_0__DOT__b_sig 
                                                     >> 5U)))) 
                 ^ ((IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addPipe__DOT__s1_io_a_r 
                             >> 5U)) ^ (~ (IData)((vlSelf->__PVT__near_path_mods_0__DOT__b_sig 
                                                   >> 6U))))));
    vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_7 
        = (1U & ((~ ((~ (IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addPipe__DOT__s1_io_a_r 
                                 >> 5U))) & (IData)(
                                                    (vlSelf->__PVT__near_path_mods_0__DOT__b_sig 
                                                     >> 6U)))) 
                 ^ ((IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addPipe__DOT__s1_io_a_r 
                             >> 6U)) ^ (~ (IData)((vlSelf->__PVT__near_path_mods_0__DOT__b_sig 
                                                   >> 7U))))));
    vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_8 
        = (1U & ((~ ((~ (IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addPipe__DOT__s1_io_a_r 
                                 >> 6U))) & (IData)(
                                                    (vlSelf->__PVT__near_path_mods_0__DOT__b_sig 
                                                     >> 7U)))) 
                 ^ ((IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addPipe__DOT__s1_io_a_r 
                             >> 7U)) ^ (~ (IData)((vlSelf->__PVT__near_path_mods_0__DOT__b_sig 
                                                   >> 8U))))));
    vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_9 
        = (1U & ((~ ((~ (IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addPipe__DOT__s1_io_a_r 
                                 >> 7U))) & (IData)(
                                                    (vlSelf->__PVT__near_path_mods_0__DOT__b_sig 
                                                     >> 8U)))) 
                 ^ ((IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addPipe__DOT__s1_io_a_r 
                             >> 8U)) ^ (~ (IData)((vlSelf->__PVT__near_path_mods_0__DOT__b_sig 
                                                   >> 9U))))));
    vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_10 
        = (1U & ((~ ((~ (IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addPipe__DOT__s1_io_a_r 
                                 >> 8U))) & (IData)(
                                                    (vlSelf->__PVT__near_path_mods_0__DOT__b_sig 
                                                     >> 9U)))) 
                 ^ ((IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addPipe__DOT__s1_io_a_r 
                             >> 9U)) ^ (~ (IData)((vlSelf->__PVT__near_path_mods_0__DOT__b_sig 
                                                   >> 0xaU))))));
    vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_11 
        = (1U & ((~ ((~ (IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addPipe__DOT__s1_io_a_r 
                                 >> 9U))) & (IData)(
                                                    (vlSelf->__PVT__near_path_mods_0__DOT__b_sig 
                                                     >> 0xaU)))) 
                 ^ ((IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addPipe__DOT__s1_io_a_r 
                             >> 0xaU)) ^ (~ (IData)(
                                                    (vlSelf->__PVT__near_path_mods_0__DOT__b_sig 
                                                     >> 0xbU))))));
    vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_18 
        = (1U & ((~ ((~ (IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addPipe__DOT__s1_io_a_r 
                                 >> 0x10U))) & (IData)(
                                                       (vlSelf->__PVT__near_path_mods_0__DOT__b_sig 
                                                        >> 0x11U)))) 
                 ^ ((IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addPipe__DOT__s1_io_a_r 
                             >> 0x11U)) ^ (~ (IData)(
                                                     (vlSelf->__PVT__near_path_mods_0__DOT__b_sig 
                                                      >> 0x12U))))));
    vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_19 
        = (1U & ((~ ((~ (IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addPipe__DOT__s1_io_a_r 
                                 >> 0x11U))) & (IData)(
                                                       (vlSelf->__PVT__near_path_mods_0__DOT__b_sig 
                                                        >> 0x12U)))) 
                 ^ ((IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addPipe__DOT__s1_io_a_r 
                             >> 0x12U)) ^ (~ (IData)(
                                                     (vlSelf->__PVT__near_path_mods_0__DOT__b_sig 
                                                      >> 0x13U))))));
    vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_20 
        = (1U & ((~ ((~ (IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addPipe__DOT__s1_io_a_r 
                                 >> 0x12U))) & (IData)(
                                                       (vlSelf->__PVT__near_path_mods_0__DOT__b_sig 
                                                        >> 0x13U)))) 
                 ^ ((IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addPipe__DOT__s1_io_a_r 
                             >> 0x13U)) ^ (~ (IData)(
                                                     (vlSelf->__PVT__near_path_mods_0__DOT__b_sig 
                                                      >> 0x14U))))));
    vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_21 
        = (1U & ((~ ((~ (IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addPipe__DOT__s1_io_a_r 
                                 >> 0x13U))) & (IData)(
                                                       (vlSelf->__PVT__near_path_mods_0__DOT__b_sig 
                                                        >> 0x14U)))) 
                 ^ ((IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addPipe__DOT__s1_io_a_r 
                             >> 0x14U)) ^ (~ (IData)(
                                                     (vlSelf->__PVT__near_path_mods_0__DOT__b_sig 
                                                      >> 0x15U))))));
    vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_22 
        = (1U & ((~ ((~ (IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addPipe__DOT__s1_io_a_r 
                                 >> 0x14U))) & (IData)(
                                                       (vlSelf->__PVT__near_path_mods_0__DOT__b_sig 
                                                        >> 0x15U)))) 
                 ^ ((IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addPipe__DOT__s1_io_a_r 
                             >> 0x15U)) ^ (~ (IData)(
                                                     (vlSelf->__PVT__near_path_mods_0__DOT__b_sig 
                                                      >> 0x16U))))));
    vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_23 
        = (1U & ((~ ((~ (IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addPipe__DOT__s1_io_a_r 
                                 >> 0x15U))) & (IData)(
                                                       (vlSelf->__PVT__near_path_mods_0__DOT__b_sig 
                                                        >> 0x16U)))) 
                 ^ ((IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addPipe__DOT__s1_io_a_r 
                             >> 0x16U)) ^ (~ (IData)(
                                                     (vlSelf->__PVT__near_path_mods_0__DOT__b_sig 
                                                      >> 0x17U))))));
    vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_13 
        = (1U & ((~ ((~ (IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addPipe__DOT__s1_io_a_r 
                                 >> 0xbU))) & (IData)(
                                                      (vlSelf->__PVT__near_path_mods_0__DOT__b_sig 
                                                       >> 0xcU)))) 
                 ^ ((IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addPipe__DOT__s1_io_a_r 
                             >> 0xcU)) ^ (~ (IData)(
                                                    (vlSelf->__PVT__near_path_mods_0__DOT__b_sig 
                                                     >> 0xdU))))));
    vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_14 
        = (1U & ((~ ((~ (IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addPipe__DOT__s1_io_a_r 
                                 >> 0xcU))) & (IData)(
                                                      (vlSelf->__PVT__near_path_mods_0__DOT__b_sig 
                                                       >> 0xdU)))) 
                 ^ ((IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addPipe__DOT__s1_io_a_r 
                             >> 0xdU)) ^ (~ (IData)(
                                                    (vlSelf->__PVT__near_path_mods_0__DOT__b_sig 
                                                     >> 0xeU))))));
    vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_15 
        = (1U & ((~ ((~ (IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addPipe__DOT__s1_io_a_r 
                                 >> 0xdU))) & (IData)(
                                                      (vlSelf->__PVT__near_path_mods_0__DOT__b_sig 
                                                       >> 0xeU)))) 
                 ^ ((IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addPipe__DOT__s1_io_a_r 
                             >> 0xeU)) ^ (~ (IData)(
                                                    (vlSelf->__PVT__near_path_mods_0__DOT__b_sig 
                                                     >> 0xfU))))));
    vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_16 
        = (1U & ((~ ((~ (IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addPipe__DOT__s1_io_a_r 
                                 >> 0xeU))) & (IData)(
                                                      (vlSelf->__PVT__near_path_mods_0__DOT__b_sig 
                                                       >> 0xfU)))) 
                 ^ ((IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addPipe__DOT__s1_io_a_r 
                             >> 0xfU)) ^ (~ (IData)(
                                                    (vlSelf->__PVT__near_path_mods_0__DOT__b_sig 
                                                     >> 0x10U))))));
    vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_17 
        = (1U & ((~ ((~ (IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addPipe__DOT__s1_io_a_r 
                                 >> 0xfU))) & (IData)(
                                                      (vlSelf->__PVT__near_path_mods_0__DOT__b_sig 
                                                       >> 0x10U)))) 
                 ^ ((IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addPipe__DOT__s1_io_a_r 
                             >> 0x10U)) ^ (~ (IData)(
                                                     (vlSelf->__PVT__near_path_mods_0__DOT__b_sig 
                                                      >> 0x11U))))));
    vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_25 
        = (1U & ((~ ((~ (IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addPipe__DOT__s1_io_a_r 
                                 >> 0x17U))) & (IData)(
                                                       (vlSelf->__PVT__near_path_mods_0__DOT__b_sig 
                                                        >> 0x18U)))) 
                 ^ ((IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addPipe__DOT__s1_io_a_r 
                             >> 0x18U)) ^ (~ (IData)(
                                                     (vlSelf->__PVT__near_path_mods_0__DOT__b_sig 
                                                      >> 0x19U))))));
    vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_26 
        = (1U & ((~ ((~ (IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addPipe__DOT__s1_io_a_r 
                                 >> 0x18U))) & (IData)(
                                                       (vlSelf->__PVT__near_path_mods_0__DOT__b_sig 
                                                        >> 0x19U)))) 
                 ^ ((IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addPipe__DOT__s1_io_a_r 
                             >> 0x19U)) ^ (~ (IData)(
                                                     (vlSelf->__PVT__near_path_mods_0__DOT__b_sig 
                                                      >> 0x1aU))))));
    vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_27 
        = (1U & ((~ ((~ (IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addPipe__DOT__s1_io_a_r 
                                 >> 0x19U))) & (IData)(
                                                       (vlSelf->__PVT__near_path_mods_0__DOT__b_sig 
                                                        >> 0x1aU)))) 
                 ^ ((IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addPipe__DOT__s1_io_a_r 
                             >> 0x1aU)) ^ (~ (IData)(
                                                     (vlSelf->__PVT__near_path_mods_0__DOT__b_sig 
                                                      >> 0x1bU))))));
    vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_28 
        = (1U & ((~ ((~ (IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addPipe__DOT__s1_io_a_r 
                                 >> 0x1aU))) & (IData)(
                                                       (vlSelf->__PVT__near_path_mods_0__DOT__b_sig 
                                                        >> 0x1bU)))) 
                 ^ ((IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addPipe__DOT__s1_io_a_r 
                             >> 0x1bU)) ^ (~ (IData)(
                                                     (vlSelf->__PVT__near_path_mods_0__DOT__b_sig 
                                                      >> 0x1cU))))));
    vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_29 
        = (1U & ((~ ((~ (IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addPipe__DOT__s1_io_a_r 
                                 >> 0x1bU))) & (IData)(
                                                       (vlSelf->__PVT__near_path_mods_0__DOT__b_sig 
                                                        >> 0x1cU)))) 
                 ^ ((IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addPipe__DOT__s1_io_a_r 
                             >> 0x1cU)) ^ (~ (IData)(
                                                     (vlSelf->__PVT__near_path_mods_0__DOT__b_sig 
                                                      >> 0x1dU))))));
    vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_30 
        = (1U & ((~ ((~ (IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addPipe__DOT__s1_io_a_r 
                                 >> 0x1cU))) & (IData)(
                                                       (vlSelf->__PVT__near_path_mods_0__DOT__b_sig 
                                                        >> 0x1dU)))) 
                 ^ ((IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addPipe__DOT__s1_io_a_r 
                             >> 0x1dU)) ^ (~ (IData)(
                                                     (vlSelf->__PVT__near_path_mods_0__DOT__b_sig 
                                                      >> 0x1eU))))));
    vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_31 
        = (1U & ((~ ((~ (IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addPipe__DOT__s1_io_a_r 
                                 >> 0x1dU))) & (IData)(
                                                       (vlSelf->__PVT__near_path_mods_0__DOT__b_sig 
                                                        >> 0x1eU)))) 
                 ^ ((IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addPipe__DOT__s1_io_a_r 
                             >> 0x1eU)) ^ (~ (IData)(
                                                     (vlSelf->__PVT__near_path_mods_0__DOT__b_sig 
                                                      >> 0x1fU))))));
    vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_32 
        = (1U & ((~ ((~ (IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addPipe__DOT__s1_io_a_r 
                                 >> 0x1eU))) & (IData)(
                                                       (vlSelf->__PVT__near_path_mods_0__DOT__b_sig 
                                                        >> 0x1fU)))) 
                 ^ ((IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addPipe__DOT__s1_io_a_r 
                             >> 0x1fU)) ^ (~ (IData)(
                                                     (vlSelf->__PVT__near_path_mods_0__DOT__b_sig 
                                                      >> 0x20U))))));
    vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_33 
        = (1U & ((~ ((~ (IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addPipe__DOT__s1_io_a_r 
                                 >> 0x1fU))) & (IData)(
                                                       (vlSelf->__PVT__near_path_mods_0__DOT__b_sig 
                                                        >> 0x20U)))) 
                 ^ ((IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addPipe__DOT__s1_io_a_r 
                             >> 0x20U)) ^ (~ (IData)(
                                                     (vlSelf->__PVT__near_path_mods_0__DOT__b_sig 
                                                      >> 0x21U))))));
    vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_34 
        = (1U & ((~ ((~ (IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addPipe__DOT__s1_io_a_r 
                                 >> 0x20U))) & (IData)(
                                                       (vlSelf->__PVT__near_path_mods_0__DOT__b_sig 
                                                        >> 0x21U)))) 
                 ^ ((IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addPipe__DOT__s1_io_a_r 
                             >> 0x21U)) ^ (~ (IData)(
                                                     (vlSelf->__PVT__near_path_mods_0__DOT__b_sig 
                                                      >> 0x22U))))));
    vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_35 
        = (1U & ((~ ((~ (IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addPipe__DOT__s1_io_a_r 
                                 >> 0x21U))) & (IData)(
                                                       (vlSelf->__PVT__near_path_mods_0__DOT__b_sig 
                                                        >> 0x22U)))) 
                 ^ ((IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addPipe__DOT__s1_io_a_r 
                             >> 0x22U)) ^ (~ (IData)(
                                                     (vlSelf->__PVT__near_path_mods_0__DOT__b_sig 
                                                      >> 0x23U))))));
    vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_42 
        = (1U & ((~ ((~ (IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addPipe__DOT__s1_io_a_r 
                                 >> 0x28U))) & (IData)(
                                                       (vlSelf->__PVT__near_path_mods_0__DOT__b_sig 
                                                        >> 0x29U)))) 
                 ^ ((IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addPipe__DOT__s1_io_a_r 
                             >> 0x29U)) ^ (~ (IData)(
                                                     (vlSelf->__PVT__near_path_mods_0__DOT__b_sig 
                                                      >> 0x2aU))))));
    vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_43 
        = (1U & ((~ ((~ (IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addPipe__DOT__s1_io_a_r 
                                 >> 0x29U))) & (IData)(
                                                       (vlSelf->__PVT__near_path_mods_0__DOT__b_sig 
                                                        >> 0x2aU)))) 
                 ^ ((IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addPipe__DOT__s1_io_a_r 
                             >> 0x2aU)) ^ (~ (IData)(
                                                     (vlSelf->__PVT__near_path_mods_0__DOT__b_sig 
                                                      >> 0x2bU))))));
    vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_44 
        = (1U & ((~ ((~ (IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addPipe__DOT__s1_io_a_r 
                                 >> 0x2aU))) & (IData)(
                                                       (vlSelf->__PVT__near_path_mods_0__DOT__b_sig 
                                                        >> 0x2bU)))) 
                 ^ ((IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addPipe__DOT__s1_io_a_r 
                             >> 0x2bU)) ^ (~ (IData)(
                                                     (vlSelf->__PVT__near_path_mods_0__DOT__b_sig 
                                                      >> 0x2cU))))));
    vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_45 
        = (1U & ((~ ((~ (IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addPipe__DOT__s1_io_a_r 
                                 >> 0x2bU))) & (IData)(
                                                       (vlSelf->__PVT__near_path_mods_0__DOT__b_sig 
                                                        >> 0x2cU)))) 
                 ^ ((IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addPipe__DOT__s1_io_a_r 
                             >> 0x2cU)) ^ (~ (IData)(
                                                     (vlSelf->__PVT__near_path_mods_0__DOT__b_sig 
                                                      >> 0x2dU))))));
    vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_46 
        = (1U & ((~ ((~ (IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addPipe__DOT__s1_io_a_r 
                                 >> 0x2cU))) & (IData)(
                                                       (vlSelf->__PVT__near_path_mods_0__DOT__b_sig 
                                                        >> 0x2dU)))) 
                 ^ ((IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addPipe__DOT__s1_io_a_r 
                             >> 0x2dU)) ^ (~ (IData)(
                                                     (vlSelf->__PVT__near_path_mods_0__DOT__b_sig 
                                                      >> 0x2eU))))));
    vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_47 
        = (1U & ((~ ((~ (IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addPipe__DOT__s1_io_a_r 
                                 >> 0x2dU))) & (IData)(
                                                       (vlSelf->__PVT__near_path_mods_0__DOT__b_sig 
                                                        >> 0x2eU)))) 
                 ^ ((IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addPipe__DOT__s1_io_a_r 
                             >> 0x2eU)) ^ (~ (IData)(
                                                     (vlSelf->__PVT__near_path_mods_0__DOT__b_sig 
                                                      >> 0x2fU))))));
    vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_48 
        = (1U & ((~ ((~ (IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addPipe__DOT__s1_io_a_r 
                                 >> 0x2eU))) & (IData)(
                                                       (vlSelf->__PVT__near_path_mods_0__DOT__b_sig 
                                                        >> 0x2fU)))) 
                 ^ ((0U != (0xffU & (IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addPipe__DOT__s1_io_a_r 
                                             >> 0x2fU)))) 
                    ^ (~ (IData)((vlSelf->__PVT__near_path_mods_0__DOT__b_sig 
                                  >> 0x30U))))));
    vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_37 
        = (1U & ((~ ((~ (IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addPipe__DOT__s1_io_a_r 
                                 >> 0x23U))) & (IData)(
                                                       (vlSelf->__PVT__near_path_mods_0__DOT__b_sig 
                                                        >> 0x24U)))) 
                 ^ ((IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addPipe__DOT__s1_io_a_r 
                             >> 0x24U)) ^ (~ (IData)(
                                                     (vlSelf->__PVT__near_path_mods_0__DOT__b_sig 
                                                      >> 0x25U))))));
    vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_38 
        = (1U & ((~ ((~ (IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addPipe__DOT__s1_io_a_r 
                                 >> 0x24U))) & (IData)(
                                                       (vlSelf->__PVT__near_path_mods_0__DOT__b_sig 
                                                        >> 0x25U)))) 
                 ^ ((IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addPipe__DOT__s1_io_a_r 
                             >> 0x25U)) ^ (~ (IData)(
                                                     (vlSelf->__PVT__near_path_mods_0__DOT__b_sig 
                                                      >> 0x26U))))));
    vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_39 
        = (1U & ((~ ((~ (IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addPipe__DOT__s1_io_a_r 
                                 >> 0x25U))) & (IData)(
                                                       (vlSelf->__PVT__near_path_mods_0__DOT__b_sig 
                                                        >> 0x26U)))) 
                 ^ ((IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addPipe__DOT__s1_io_a_r 
                             >> 0x26U)) ^ (~ (IData)(
                                                     (vlSelf->__PVT__near_path_mods_0__DOT__b_sig 
                                                      >> 0x27U))))));
    vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_40 
        = (1U & ((~ ((~ (IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addPipe__DOT__s1_io_a_r 
                                 >> 0x26U))) & (IData)(
                                                       (vlSelf->__PVT__near_path_mods_0__DOT__b_sig 
                                                        >> 0x27U)))) 
                 ^ ((IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addPipe__DOT__s1_io_a_r 
                             >> 0x27U)) ^ (~ (IData)(
                                                     (vlSelf->__PVT__near_path_mods_0__DOT__b_sig 
                                                      >> 0x28U))))));
    vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_41 
        = (1U & ((~ ((~ (IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addPipe__DOT__s1_io_a_r 
                                 >> 0x27U))) & (IData)(
                                                       (vlSelf->__PVT__near_path_mods_0__DOT__b_sig 
                                                        >> 0x28U)))) 
                 ^ ((IData)((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addPipe__DOT__s1_io_a_r 
                             >> 0x28U)) ^ (~ (IData)(
                                                     (vlSelf->__PVT__near_path_mods_0__DOT__b_sig 
                                                      >> 0x29U))))));
    vlSelf->__PVT__far_path_mods_0__DOT__adder_in_sig_b 
        = ((((0x32U < (0xffU & (IData)(vlSelf->__PVT___T_5)))
              ? 0ULL : ((0x31U >= (0xffU & (IData)(vlSelf->__PVT___T_5)))
                         ? (0x3ffffffffffffULL & ((vlSelf->__PVT__far_path_mods_0_io_in_b_sig 
                                                   << 2U) 
                                                  >> 
                                                  (0xffU 
                                                   & (IData)(vlSelf->__PVT___T_5))))
                         : 0ULL)) << 1U) | (QData)((IData)(
                                                           (0U 
                                                            != 
                                                            ((vlSelf->__PVT__far_path_mods_0_io_in_b_sig 
                                                              << 2U) 
                                                             & (((1ULL 
                                                                  << 
                                                                  (0x3fU 
                                                                   & (IData)(vlSelf->__PVT___T_5))) 
                                                                 - 1ULL) 
                                                                | ((0x32U 
                                                                    < 
                                                                    (0xffU 
                                                                     & (IData)(vlSelf->__PVT___T_5)))
                                                                    ? 0x3ffffffffffffULL
                                                                    : 0ULL)))))));
    vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__io_f_lo_hi_lo 
        = (((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_17) 
            << 5U) | (((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_16) 
                       << 4U) | (((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_15) 
                                  << 3U) | (((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_14) 
                                             << 2U) 
                                            | (((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_13) 
                                                << 1U) 
                                               | (1U 
                                                  & ((~ 
                                                      ((~ (IData)(
                                                                  (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addPipe__DOT__s1_io_b_r 
                                                                   >> 0xaU))) 
                                                       & (IData)(
                                                                 (vlSelf->__PVT__near_path_mods_1__DOT__b_sig 
                                                                  >> 0xbU)))) 
                                                     ^ 
                                                     ((IData)(
                                                              (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addPipe__DOT__s1_io_b_r 
                                                               >> 0xbU)) 
                                                      ^ 
                                                      (~ (IData)(
                                                                 (vlSelf->__PVT__near_path_mods_1__DOT__b_sig 
                                                                  >> 0xcU)))))))))));
    vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__io_f_hi_hi_lo 
        = (((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_41) 
            << 5U) | (((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_40) 
                       << 4U) | (((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_39) 
                                  << 3U) | (((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_38) 
                                             << 2U) 
                                            | (((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_37) 
                                                << 1U) 
                                               | (1U 
                                                  & ((~ 
                                                      ((~ (IData)(
                                                                  (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addPipe__DOT__s1_io_b_r 
                                                                   >> 0x22U))) 
                                                       & (IData)(
                                                                 (vlSelf->__PVT__near_path_mods_1__DOT__b_sig 
                                                                  >> 0x23U)))) 
                                                     ^ 
                                                     ((IData)(
                                                              (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addPipe__DOT__s1_io_b_r 
                                                               >> 0x23U)) 
                                                      ^ 
                                                      (~ (IData)(
                                                                 (vlSelf->__PVT__near_path_mods_1__DOT__b_sig 
                                                                  >> 0x24U)))))))))));
    vlSelf->__PVT___near_path_out_T_2 = (1U & ((IData)(vlSelf->__PVT__need_swap) 
                                               | ((~ (IData)(vlSelf->__PVT__near_path_mods_0_io_in_need_shift_b)) 
                                                  & (IData)(
                                                            (1ULL 
                                                             & ((1ULL 
                                                                 + vlSelf->__PVT__near_path_mods_0__DOT___a_minus_b_T_3) 
                                                                >> 0x31U))))));
    vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__io_f_lo_hi_lo 
        = (((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_17) 
            << 5U) | (((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_16) 
                       << 4U) | (((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_15) 
                                  << 3U) | (((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_14) 
                                             << 2U) 
                                            | (((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_13) 
                                                << 1U) 
                                               | (1U 
                                                  & ((~ 
                                                      ((~ (IData)(
                                                                  (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addPipe__DOT__s1_io_a_r 
                                                                   >> 0xaU))) 
                                                       & (IData)(
                                                                 (vlSelf->__PVT__near_path_mods_0__DOT__b_sig 
                                                                  >> 0xbU)))) 
                                                     ^ 
                                                     ((IData)(
                                                              (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addPipe__DOT__s1_io_a_r 
                                                               >> 0xbU)) 
                                                      ^ 
                                                      (~ (IData)(
                                                                 (vlSelf->__PVT__near_path_mods_0__DOT__b_sig 
                                                                  >> 0xcU)))))))))));
    vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__io_f_hi_hi_lo 
        = (((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_41) 
            << 5U) | (((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_40) 
                       << 4U) | (((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_39) 
                                  << 3U) | (((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_38) 
                                             << 2U) 
                                            | (((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_37) 
                                                << 1U) 
                                               | (1U 
                                                  & ((~ 
                                                      ((~ (IData)(
                                                                  (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addPipe__DOT__s1_io_a_r 
                                                                   >> 0x22U))) 
                                                       & (IData)(
                                                                 (vlSelf->__PVT__near_path_mods_0__DOT__b_sig 
                                                                  >> 0x23U)))) 
                                                     ^ 
                                                     ((IData)(
                                                              (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addPipe__DOT__s1_io_a_r 
                                                               >> 0x23U)) 
                                                      ^ 
                                                      (~ (IData)(
                                                                 (vlSelf->__PVT__near_path_mods_0__DOT__b_sig 
                                                                  >> 0x24U)))))))))));
    vlSelf->__PVT__far_path_mods_0__DOT__adder_result 
        = (0xfffffffffffffULL & (((((IData)(vlSelf->__PVT__need_swap)
                                     ? vlSelf->__PVT__near_path_mods_0_io_in_b_sig
                                     : vlSelf->__PVT__near_path_mods_0_io_in_a_sig) 
                                   << 3U) + ((IData)(vlSelf->__PVT__far_path_mods_0_io_in_effSub)
                                              ? (~ vlSelf->__PVT__far_path_mods_0__DOT__adder_in_sig_b)
                                              : vlSelf->__PVT__far_path_mods_0__DOT__adder_in_sig_b)) 
                                 + (QData)((IData)(vlSelf->__PVT__far_path_mods_0_io_in_effSub))));
    vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__io_f_hi 
        = (((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_48) 
            << 0x18U) | (((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_47) 
                          << 0x17U) | (((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_46) 
                                        << 0x16U) | 
                                       (((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_45) 
                                         << 0x15U) 
                                        | (((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_44) 
                                            << 0x14U) 
                                           | (((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_43) 
                                               << 0x13U) 
                                              | (((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_42) 
                                                  << 0x12U) 
                                                 | (((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__io_f_hi_hi_lo) 
                                                     << 0xcU) 
                                                    | (((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_35) 
                                                        << 0xbU) 
                                                       | (((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_34) 
                                                           << 0xaU) 
                                                          | (((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_33) 
                                                              << 9U) 
                                                             | (((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_32) 
                                                                 << 8U) 
                                                                | (((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_31) 
                                                                    << 7U) 
                                                                   | (((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_30) 
                                                                       << 6U) 
                                                                      | (((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_29) 
                                                                          << 5U) 
                                                                         | (((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_28) 
                                                                             << 4U) 
                                                                            | (((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_27) 
                                                                                << 3U) 
                                                                               | (((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_26) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_25) 
                                                                                << 1U) 
                                                                                | (1U 
                                                                                & ((~ 
                                                                                ((~ (IData)(
                                                                                (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addPipe__DOT__s1_io_b_r 
                                                                                >> 0x16U))) 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_1__DOT__b_sig 
                                                                                >> 0x17U)))) 
                                                                                ^ 
                                                                                ((IData)(
                                                                                (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addPipe__DOT__s1_io_b_r 
                                                                                >> 0x17U)) 
                                                                                ^ 
                                                                                (~ (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_1__DOT__b_sig 
                                                                                >> 0x18U)))))))))))))))))))))))));
    vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__io_f_hi 
        = (((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_48) 
            << 0x18U) | (((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_47) 
                          << 0x17U) | (((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_46) 
                                        << 0x16U) | 
                                       (((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_45) 
                                         << 0x15U) 
                                        | (((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_44) 
                                            << 0x14U) 
                                           | (((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_43) 
                                               << 0x13U) 
                                              | (((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_42) 
                                                  << 0x12U) 
                                                 | (((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__io_f_hi_hi_lo) 
                                                     << 0xcU) 
                                                    | (((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_35) 
                                                        << 0xbU) 
                                                       | (((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_34) 
                                                           << 0xaU) 
                                                          | (((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_33) 
                                                              << 9U) 
                                                             | (((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_32) 
                                                                 << 8U) 
                                                                | (((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_31) 
                                                                    << 7U) 
                                                                   | (((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_30) 
                                                                       << 6U) 
                                                                      | (((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_29) 
                                                                          << 5U) 
                                                                         | (((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_28) 
                                                                             << 4U) 
                                                                            | (((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_27) 
                                                                                << 3U) 
                                                                               | (((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_26) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_25) 
                                                                                << 1U) 
                                                                                | (1U 
                                                                                & ((~ 
                                                                                ((~ (IData)(
                                                                                (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addPipe__DOT__s1_io_a_r 
                                                                                >> 0x16U))) 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_0__DOT__b_sig 
                                                                                >> 0x17U)))) 
                                                                                ^ 
                                                                                ((IData)(
                                                                                (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__fpu__DOT__fpu__DOT__FPUArray_0__DOT__FMA__DOT__addPipe__DOT__s1_io_a_r 
                                                                                >> 0x17U)) 
                                                                                ^ 
                                                                                (~ (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_0__DOT__b_sig 
                                                                                >> 0x18U)))))))))))))))))))))))));
    __PVT__near_path_mods_1__DOT___exceed_lim_T = (0x3ffffffffffffULL 
                                                   & ((((QData)((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_48)) 
                                                        << 0x2fU) 
                                                       | (((QData)((IData)(
                                                                           ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_48) 
                                                                            | (IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_47)))) 
                                                           << 0x2eU) 
                                                          | (((QData)((IData)(
                                                                              ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_48) 
                                                                               | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_47) 
                                                                                | (IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_46))))) 
                                                              << 0x2dU) 
                                                             | (((QData)((IData)(
                                                                                ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_48) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_47) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_46) 
                                                                                | (IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_45)))))) 
                                                                 << 0x2cU) 
                                                                | (((QData)((IData)(
                                                                                ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_48) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_47) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_46) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_45) 
                                                                                | (IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_44))))))) 
                                                                    << 0x2bU) 
                                                                   | (((QData)((IData)(
                                                                                ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_48) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_47) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_46) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_45) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_44) 
                                                                                | (IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_43)))))))) 
                                                                       << 0x2aU) 
                                                                      | (((QData)((IData)(
                                                                                ((((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_48) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_47) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_46) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_45) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_44) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_43) 
                                                                                | (IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_42))))))) 
                                                                                << 5U) 
                                                                                | ((((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_48) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_47) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_46) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_45) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_44) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_43) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_42) 
                                                                                | (IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_41)))))))) 
                                                                                << 4U) 
                                                                                | ((((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_48) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_47) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_46) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_45) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_44) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_43) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_42) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_41) 
                                                                                | (IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_40))))))))) 
                                                                                << 3U) 
                                                                                | ((((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_48) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_47) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_46) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_45) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_44) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_43) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_42) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_41) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_40) 
                                                                                | (IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_39)))))))))) 
                                                                                << 2U) 
                                                                                | ((((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_48) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_47) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_46) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_45) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_44) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_43) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_42) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_41) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_40) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_39) 
                                                                                | (IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_38))))))))))) 
                                                                                << 1U) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_48) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_47) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_46) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_45) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_44) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_43) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_42) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_41) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_40) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_39) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_38) 
                                                                                | (IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_37))))))))))))))))))) 
                                                                          << 0x24U) 
                                                                         | (((QData)((IData)(
                                                                                ((((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_48) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_47) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_46) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_45) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_44) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_43) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_42) 
                                                                                | (0U 
                                                                                != (IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__io_f_hi_hi_lo))))))))) 
                                                                                << 0xbU) 
                                                                                | ((((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_48) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_47) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_46) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_45) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_44) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_43) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_42) 
                                                                                | ((0U 
                                                                                != (IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__io_f_hi_hi_lo)) 
                                                                                | (IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_35))))))))) 
                                                                                << 0xaU) 
                                                                                | ((((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_48) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_47) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_46) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_45) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_44) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_43) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_42) 
                                                                                | ((0U 
                                                                                != (IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__io_f_hi_hi_lo)) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_35) 
                                                                                | (IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_34)))))))))) 
                                                                                << 9U) 
                                                                                | ((((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_48) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_47) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_46) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_45) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_44) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_43) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_42) 
                                                                                | ((0U 
                                                                                != (IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__io_f_hi_hi_lo)) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_35) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_34) 
                                                                                | (IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_33))))))))))) 
                                                                                << 8U) 
                                                                                | ((((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_48) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_47) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_46) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_45) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_44) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_43) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_42) 
                                                                                | ((0U 
                                                                                != (IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__io_f_hi_hi_lo)) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_35) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_34) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_33) 
                                                                                | (IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_32)))))))))))) 
                                                                                << 7U) 
                                                                                | ((((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_48) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_47) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_46) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_45) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_44) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_43) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_42) 
                                                                                | ((0U 
                                                                                != (IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__io_f_hi_hi_lo)) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_35) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_34) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_33) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_32) 
                                                                                | (IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_31))))))))))))) 
                                                                                << 6U) 
                                                                                | ((((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_48) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_47) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_46) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_45) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_44) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_43) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_42) 
                                                                                | ((0U 
                                                                                != (IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__io_f_hi_hi_lo)) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_35) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_34) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_33) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_32) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_31) 
                                                                                | (IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_30)))))))))))))) 
                                                                                << 5U) 
                                                                                | ((((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_48) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_47) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_46) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_45) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_44) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_43) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_42) 
                                                                                | ((0U 
                                                                                != (IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__io_f_hi_hi_lo)) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_35) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_34) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_33) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_32) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_31) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_30) 
                                                                                | (IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_29))))))))))))))) 
                                                                                << 4U) 
                                                                                | ((((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_48) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_47) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_46) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_45) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_44) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_43) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_42) 
                                                                                | ((0U 
                                                                                != (IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__io_f_hi_hi_lo)) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_35) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_34) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_33) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_32) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_31) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_30) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_29) 
                                                                                | (IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_28)))))))))))))))) 
                                                                                << 3U) 
                                                                                | ((((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_48) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_47) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_46) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_45) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_44) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_43) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_42) 
                                                                                | ((0U 
                                                                                != (IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__io_f_hi_hi_lo)) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_35) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_34) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_33) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_32) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_31) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_30) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_29) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_28) 
                                                                                | (IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_27))))))))))))))))) 
                                                                                << 2U) 
                                                                                | ((((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_48) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_47) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_46) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_45) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_44) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_43) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_42) 
                                                                                | ((0U 
                                                                                != (IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__io_f_hi_hi_lo)) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_35) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_34) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_33) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_32) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_31) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_30) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_29) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_28) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_27) 
                                                                                | (IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_26)))))))))))))))))) 
                                                                                << 1U) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_48) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_47) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_46) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_45) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_44) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_43) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_42) 
                                                                                | ((0U 
                                                                                != (IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__io_f_hi_hi_lo)) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_35) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_34) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_33) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_32) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_31) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_30) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_29) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_28) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_27) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_26) 
                                                                                | (IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_25)))))))))))))))))))))))))))))))) 
                                                                             << 0x18U) 
                                                                            | (QData)((IData)(
                                                                                (((IData)(
                                                                                (0U 
                                                                                != vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__io_f_hi)) 
                                                                                << 0x17U) 
                                                                                | ((((0U 
                                                                                != vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__io_f_hi) 
                                                                                | (IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_23)) 
                                                                                << 0x16U) 
                                                                                | ((((0U 
                                                                                != vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__io_f_hi) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_23) 
                                                                                | (IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_22))) 
                                                                                << 0x15U) 
                                                                                | ((((0U 
                                                                                != vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__io_f_hi) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_23) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_22) 
                                                                                | (IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_21)))) 
                                                                                << 0x14U) 
                                                                                | ((((0U 
                                                                                != vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__io_f_hi) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_23) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_22) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_21) 
                                                                                | (IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_20))))) 
                                                                                << 0x13U) 
                                                                                | ((((0U 
                                                                                != vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__io_f_hi) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_23) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_22) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_21) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_20) 
                                                                                | (IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_19)))))) 
                                                                                << 0x12U) 
                                                                                | (((((0U 
                                                                                != vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__io_f_hi) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_23) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_22) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_21) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_20) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_19) 
                                                                                | (IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_18))))))) 
                                                                                << 0x11U) 
                                                                                | ((((0U 
                                                                                != vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__io_f_hi) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_23) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_22) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_21) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_20) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_19) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_18) 
                                                                                | (IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_17)))))))) 
                                                                                << 0x10U) 
                                                                                | ((((0U 
                                                                                != vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__io_f_hi) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_23) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_22) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_21) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_20) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_19) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_18) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_17) 
                                                                                | (IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_16))))))))) 
                                                                                << 0xfU) 
                                                                                | ((((0U 
                                                                                != vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__io_f_hi) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_23) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_22) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_21) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_20) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_19) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_18) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_17) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_16) 
                                                                                | (IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_15)))))))))) 
                                                                                << 0xeU) 
                                                                                | ((((0U 
                                                                                != vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__io_f_hi) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_23) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_22) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_21) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_20) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_19) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_18) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_17) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_16) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_15) 
                                                                                | (IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_14))))))))))) 
                                                                                << 0xdU) 
                                                                                | (((0U 
                                                                                != vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__io_f_hi) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_23) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_22) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_21) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_20) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_19) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_18) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_17) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_16) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_15) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_14) 
                                                                                | (IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_13)))))))))))) 
                                                                                << 0xcU)))))) 
                                                                                | ((((0U 
                                                                                != vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__io_f_hi) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_23) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_22) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_21) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_20) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_19) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_18) 
                                                                                | (0U 
                                                                                != (IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__io_f_lo_hi_lo))))))))) 
                                                                                << 0xbU) 
                                                                                | ((((0U 
                                                                                != vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__io_f_hi) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_23) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_22) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_21) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_20) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_19) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_18) 
                                                                                | ((0U 
                                                                                != (IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__io_f_lo_hi_lo)) 
                                                                                | (IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_11))))))))) 
                                                                                << 0xaU) 
                                                                                | ((((0U 
                                                                                != vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__io_f_hi) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_23) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_22) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_21) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_20) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_19) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_18) 
                                                                                | ((0U 
                                                                                != (IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__io_f_lo_hi_lo)) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_11) 
                                                                                | (IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_10)))))))))) 
                                                                                << 9U) 
                                                                                | ((((0U 
                                                                                != vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__io_f_hi) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_23) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_22) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_21) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_20) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_19) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_18) 
                                                                                | ((0U 
                                                                                != (IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__io_f_lo_hi_lo)) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_11) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_10) 
                                                                                | (IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_9))))))))))) 
                                                                                << 8U) 
                                                                                | ((((0U 
                                                                                != vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__io_f_hi) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_23) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_22) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_21) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_20) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_19) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_18) 
                                                                                | ((0U 
                                                                                != (IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__io_f_lo_hi_lo)) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_11) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_10) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_9) 
                                                                                | (IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_8)))))))))))) 
                                                                                << 7U) 
                                                                                | ((((0U 
                                                                                != vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__io_f_hi) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_23) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_22) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_21) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_20) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_19) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_18) 
                                                                                | ((0U 
                                                                                != (IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__io_f_lo_hi_lo)) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_11) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_10) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_9) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_8) 
                                                                                | (IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_7))))))))))))) 
                                                                                << 6U) 
                                                                                | ((((0U 
                                                                                != vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__io_f_hi) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_23) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_22) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_21) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_20) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_19) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_18) 
                                                                                | ((0U 
                                                                                != (IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__io_f_lo_hi_lo)) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_11) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_10) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_9) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_8) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_7) 
                                                                                | (IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_6)))))))))))))) 
                                                                                << 5U) 
                                                                                | ((((0U 
                                                                                != vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__io_f_hi) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_23) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_22) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_21) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_20) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_19) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_18) 
                                                                                | ((0U 
                                                                                != (IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__io_f_lo_hi_lo)) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_11) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_10) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_9) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_8) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_7) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_6) 
                                                                                | (IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_5))))))))))))))) 
                                                                                << 4U) 
                                                                                | ((((0U 
                                                                                != vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__io_f_hi) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_23) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_22) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_21) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_20) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_19) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_18) 
                                                                                | ((0U 
                                                                                != (IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__io_f_lo_hi_lo)) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_11) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_10) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_9) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_8) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_7) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_6) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_5) 
                                                                                | (IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_4)))))))))))))))) 
                                                                                << 3U) 
                                                                                | ((((0U 
                                                                                != vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__io_f_hi) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_23) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_22) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_21) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_20) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_19) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_18) 
                                                                                | ((0U 
                                                                                != (IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__io_f_lo_hi_lo)) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_11) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_10) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_9) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_8) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_7) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_6) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_5) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_4) 
                                                                                | (IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_3))))))))))))))))) 
                                                                                << 2U) 
                                                                                | ((((0U 
                                                                                != vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__io_f_hi) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_23) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_22) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_21) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_20) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_19) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_18) 
                                                                                | ((0U 
                                                                                != (IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__io_f_lo_hi_lo)) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_11) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_10) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_9) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_8) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_7) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_6) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_5) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_4) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_3) 
                                                                                | (IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_2)))))))))))))))))) 
                                                                                << 1U) 
                                                                                | ((0U 
                                                                                != vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__io_f_hi) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_23) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_22) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_21) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_20) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_19) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_18) 
                                                                                | ((0U 
                                                                                != (IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__io_f_lo_hi_lo)) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_11) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_10) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_9) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_8) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_7) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_6) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_5) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_4) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_3) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_2) 
                                                                                | (IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_1))))))))))))))))))))))))))))))))))))))))))))))) 
                                                      & (0x2000000000000ULL 
                                                         >> 
                                                         (0x3fU 
                                                          & (IData)(vlSelf->__PVT__near_path_mods_1_io_in_a_exp)))));
    vlSelf->__PVT__near_path_mods_1__DOT__lza_ab_io_f 
        = (((QData)((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__io_f_hi)) 
            << 0x18U) | (QData)((IData)((((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_23) 
                                          << 0x17U) 
                                         | (((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_22) 
                                             << 0x16U) 
                                            | (((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_21) 
                                                << 0x15U) 
                                               | (((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_20) 
                                                   << 0x14U) 
                                                  | (((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_19) 
                                                      << 0x13U) 
                                                     | (((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_18) 
                                                         << 0x12U) 
                                                        | (((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__io_f_lo_hi_lo) 
                                                            << 0xcU) 
                                                           | (((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_11) 
                                                               << 0xbU) 
                                                              | (((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_10) 
                                                                  << 0xaU) 
                                                                 | (((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_9) 
                                                                     << 9U) 
                                                                    | (((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_8) 
                                                                        << 8U) 
                                                                       | (((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_7) 
                                                                           << 7U) 
                                                                          | (((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_6) 
                                                                              << 6U) 
                                                                             | (((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_5) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_4) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_3) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_2) 
                                                                                << 2U) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_ab__DOT__f_1) 
                                                                                << 1U)))))))))))))))))))));
    __PVT__near_path_mods_0__DOT___exceed_lim_T = (0x3ffffffffffffULL 
                                                   & ((((QData)((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_48)) 
                                                        << 0x2fU) 
                                                       | (((QData)((IData)(
                                                                           ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_48) 
                                                                            | (IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_47)))) 
                                                           << 0x2eU) 
                                                          | (((QData)((IData)(
                                                                              ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_48) 
                                                                               | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_47) 
                                                                                | (IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_46))))) 
                                                              << 0x2dU) 
                                                             | (((QData)((IData)(
                                                                                ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_48) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_47) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_46) 
                                                                                | (IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_45)))))) 
                                                                 << 0x2cU) 
                                                                | (((QData)((IData)(
                                                                                ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_48) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_47) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_46) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_45) 
                                                                                | (IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_44))))))) 
                                                                    << 0x2bU) 
                                                                   | (((QData)((IData)(
                                                                                ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_48) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_47) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_46) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_45) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_44) 
                                                                                | (IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_43)))))))) 
                                                                       << 0x2aU) 
                                                                      | (((QData)((IData)(
                                                                                ((((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_48) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_47) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_46) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_45) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_44) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_43) 
                                                                                | (IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_42))))))) 
                                                                                << 5U) 
                                                                                | ((((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_48) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_47) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_46) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_45) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_44) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_43) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_42) 
                                                                                | (IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_41)))))))) 
                                                                                << 4U) 
                                                                                | ((((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_48) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_47) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_46) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_45) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_44) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_43) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_42) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_41) 
                                                                                | (IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_40))))))))) 
                                                                                << 3U) 
                                                                                | ((((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_48) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_47) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_46) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_45) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_44) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_43) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_42) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_41) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_40) 
                                                                                | (IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_39)))))))))) 
                                                                                << 2U) 
                                                                                | ((((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_48) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_47) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_46) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_45) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_44) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_43) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_42) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_41) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_40) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_39) 
                                                                                | (IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_38))))))))))) 
                                                                                << 1U) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_48) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_47) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_46) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_45) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_44) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_43) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_42) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_41) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_40) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_39) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_38) 
                                                                                | (IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_37))))))))))))))))))) 
                                                                          << 0x24U) 
                                                                         | (((QData)((IData)(
                                                                                ((((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_48) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_47) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_46) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_45) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_44) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_43) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_42) 
                                                                                | (0U 
                                                                                != (IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__io_f_hi_hi_lo))))))))) 
                                                                                << 0xbU) 
                                                                                | ((((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_48) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_47) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_46) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_45) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_44) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_43) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_42) 
                                                                                | ((0U 
                                                                                != (IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__io_f_hi_hi_lo)) 
                                                                                | (IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_35))))))))) 
                                                                                << 0xaU) 
                                                                                | ((((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_48) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_47) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_46) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_45) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_44) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_43) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_42) 
                                                                                | ((0U 
                                                                                != (IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__io_f_hi_hi_lo)) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_35) 
                                                                                | (IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_34)))))))))) 
                                                                                << 9U) 
                                                                                | ((((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_48) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_47) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_46) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_45) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_44) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_43) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_42) 
                                                                                | ((0U 
                                                                                != (IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__io_f_hi_hi_lo)) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_35) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_34) 
                                                                                | (IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_33))))))))))) 
                                                                                << 8U) 
                                                                                | ((((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_48) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_47) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_46) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_45) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_44) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_43) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_42) 
                                                                                | ((0U 
                                                                                != (IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__io_f_hi_hi_lo)) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_35) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_34) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_33) 
                                                                                | (IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_32)))))))))))) 
                                                                                << 7U) 
                                                                                | ((((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_48) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_47) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_46) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_45) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_44) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_43) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_42) 
                                                                                | ((0U 
                                                                                != (IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__io_f_hi_hi_lo)) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_35) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_34) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_33) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_32) 
                                                                                | (IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_31))))))))))))) 
                                                                                << 6U) 
                                                                                | ((((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_48) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_47) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_46) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_45) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_44) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_43) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_42) 
                                                                                | ((0U 
                                                                                != (IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__io_f_hi_hi_lo)) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_35) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_34) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_33) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_32) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_31) 
                                                                                | (IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_30)))))))))))))) 
                                                                                << 5U) 
                                                                                | ((((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_48) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_47) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_46) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_45) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_44) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_43) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_42) 
                                                                                | ((0U 
                                                                                != (IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__io_f_hi_hi_lo)) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_35) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_34) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_33) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_32) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_31) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_30) 
                                                                                | (IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_29))))))))))))))) 
                                                                                << 4U) 
                                                                                | ((((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_48) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_47) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_46) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_45) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_44) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_43) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_42) 
                                                                                | ((0U 
                                                                                != (IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__io_f_hi_hi_lo)) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_35) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_34) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_33) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_32) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_31) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_30) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_29) 
                                                                                | (IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_28)))))))))))))))) 
                                                                                << 3U) 
                                                                                | ((((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_48) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_47) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_46) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_45) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_44) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_43) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_42) 
                                                                                | ((0U 
                                                                                != (IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__io_f_hi_hi_lo)) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_35) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_34) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_33) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_32) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_31) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_30) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_29) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_28) 
                                                                                | (IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_27))))))))))))))))) 
                                                                                << 2U) 
                                                                                | ((((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_48) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_47) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_46) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_45) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_44) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_43) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_42) 
                                                                                | ((0U 
                                                                                != (IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__io_f_hi_hi_lo)) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_35) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_34) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_33) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_32) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_31) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_30) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_29) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_28) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_27) 
                                                                                | (IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_26)))))))))))))))))) 
                                                                                << 1U) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_48) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_47) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_46) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_45) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_44) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_43) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_42) 
                                                                                | ((0U 
                                                                                != (IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__io_f_hi_hi_lo)) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_35) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_34) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_33) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_32) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_31) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_30) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_29) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_28) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_27) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_26) 
                                                                                | (IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_25)))))))))))))))))))))))))))))))) 
                                                                             << 0x18U) 
                                                                            | (QData)((IData)(
                                                                                (((IData)(
                                                                                (0U 
                                                                                != vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__io_f_hi)) 
                                                                                << 0x17U) 
                                                                                | ((((0U 
                                                                                != vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__io_f_hi) 
                                                                                | (IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_23)) 
                                                                                << 0x16U) 
                                                                                | ((((0U 
                                                                                != vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__io_f_hi) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_23) 
                                                                                | (IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_22))) 
                                                                                << 0x15U) 
                                                                                | ((((0U 
                                                                                != vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__io_f_hi) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_23) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_22) 
                                                                                | (IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_21)))) 
                                                                                << 0x14U) 
                                                                                | ((((0U 
                                                                                != vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__io_f_hi) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_23) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_22) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_21) 
                                                                                | (IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_20))))) 
                                                                                << 0x13U) 
                                                                                | ((((0U 
                                                                                != vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__io_f_hi) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_23) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_22) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_21) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_20) 
                                                                                | (IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_19)))))) 
                                                                                << 0x12U) 
                                                                                | (((((0U 
                                                                                != vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__io_f_hi) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_23) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_22) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_21) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_20) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_19) 
                                                                                | (IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_18))))))) 
                                                                                << 0x11U) 
                                                                                | ((((0U 
                                                                                != vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__io_f_hi) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_23) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_22) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_21) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_20) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_19) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_18) 
                                                                                | (IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_17)))))))) 
                                                                                << 0x10U) 
                                                                                | ((((0U 
                                                                                != vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__io_f_hi) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_23) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_22) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_21) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_20) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_19) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_18) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_17) 
                                                                                | (IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_16))))))))) 
                                                                                << 0xfU) 
                                                                                | ((((0U 
                                                                                != vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__io_f_hi) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_23) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_22) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_21) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_20) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_19) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_18) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_17) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_16) 
                                                                                | (IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_15)))))))))) 
                                                                                << 0xeU) 
                                                                                | ((((0U 
                                                                                != vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__io_f_hi) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_23) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_22) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_21) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_20) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_19) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_18) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_17) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_16) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_15) 
                                                                                | (IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_14))))))))))) 
                                                                                << 0xdU) 
                                                                                | (((0U 
                                                                                != vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__io_f_hi) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_23) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_22) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_21) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_20) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_19) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_18) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_17) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_16) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_15) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_14) 
                                                                                | (IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_13)))))))))))) 
                                                                                << 0xcU)))))) 
                                                                                | ((((0U 
                                                                                != vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__io_f_hi) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_23) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_22) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_21) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_20) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_19) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_18) 
                                                                                | (0U 
                                                                                != (IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__io_f_lo_hi_lo))))))))) 
                                                                                << 0xbU) 
                                                                                | ((((0U 
                                                                                != vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__io_f_hi) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_23) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_22) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_21) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_20) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_19) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_18) 
                                                                                | ((0U 
                                                                                != (IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__io_f_lo_hi_lo)) 
                                                                                | (IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_11))))))))) 
                                                                                << 0xaU) 
                                                                                | ((((0U 
                                                                                != vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__io_f_hi) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_23) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_22) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_21) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_20) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_19) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_18) 
                                                                                | ((0U 
                                                                                != (IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__io_f_lo_hi_lo)) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_11) 
                                                                                | (IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_10)))))))))) 
                                                                                << 9U) 
                                                                                | ((((0U 
                                                                                != vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__io_f_hi) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_23) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_22) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_21) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_20) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_19) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_18) 
                                                                                | ((0U 
                                                                                != (IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__io_f_lo_hi_lo)) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_11) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_10) 
                                                                                | (IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_9))))))))))) 
                                                                                << 8U) 
                                                                                | ((((0U 
                                                                                != vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__io_f_hi) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_23) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_22) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_21) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_20) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_19) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_18) 
                                                                                | ((0U 
                                                                                != (IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__io_f_lo_hi_lo)) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_11) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_10) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_9) 
                                                                                | (IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_8)))))))))))) 
                                                                                << 7U) 
                                                                                | ((((0U 
                                                                                != vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__io_f_hi) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_23) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_22) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_21) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_20) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_19) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_18) 
                                                                                | ((0U 
                                                                                != (IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__io_f_lo_hi_lo)) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_11) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_10) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_9) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_8) 
                                                                                | (IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_7))))))))))))) 
                                                                                << 6U) 
                                                                                | ((((0U 
                                                                                != vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__io_f_hi) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_23) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_22) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_21) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_20) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_19) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_18) 
                                                                                | ((0U 
                                                                                != (IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__io_f_lo_hi_lo)) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_11) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_10) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_9) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_8) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_7) 
                                                                                | (IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_6)))))))))))))) 
                                                                                << 5U) 
                                                                                | ((((0U 
                                                                                != vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__io_f_hi) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_23) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_22) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_21) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_20) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_19) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_18) 
                                                                                | ((0U 
                                                                                != (IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__io_f_lo_hi_lo)) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_11) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_10) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_9) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_8) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_7) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_6) 
                                                                                | (IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_5))))))))))))))) 
                                                                                << 4U) 
                                                                                | ((((0U 
                                                                                != vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__io_f_hi) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_23) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_22) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_21) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_20) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_19) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_18) 
                                                                                | ((0U 
                                                                                != (IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__io_f_lo_hi_lo)) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_11) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_10) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_9) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_8) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_7) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_6) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_5) 
                                                                                | (IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_4)))))))))))))))) 
                                                                                << 3U) 
                                                                                | ((((0U 
                                                                                != vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__io_f_hi) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_23) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_22) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_21) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_20) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_19) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_18) 
                                                                                | ((0U 
                                                                                != (IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__io_f_lo_hi_lo)) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_11) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_10) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_9) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_8) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_7) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_6) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_5) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_4) 
                                                                                | (IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_3))))))))))))))))) 
                                                                                << 2U) 
                                                                                | ((((0U 
                                                                                != vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__io_f_hi) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_23) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_22) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_21) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_20) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_19) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_18) 
                                                                                | ((0U 
                                                                                != (IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__io_f_lo_hi_lo)) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_11) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_10) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_9) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_8) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_7) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_6) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_5) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_4) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_3) 
                                                                                | (IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_2)))))))))))))))))) 
                                                                                << 1U) 
                                                                                | ((0U 
                                                                                != vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__io_f_hi) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_23) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_22) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_21) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_20) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_19) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_18) 
                                                                                | ((0U 
                                                                                != (IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__io_f_lo_hi_lo)) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_11) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_10) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_9) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_8) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_7) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_6) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_5) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_4) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_3) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_2) 
                                                                                | (IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_1))))))))))))))))))))))))))))))))))))))))))))))) 
                                                      & (0x2000000000000ULL 
                                                         >> 
                                                         (0x3fU 
                                                          & (IData)(vlSelf->__PVT__near_path_mods_0_io_in_a_exp)))));
    vlSelf->__PVT__near_path_mods_0__DOT__lza_ab_io_f 
        = (((QData)((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__io_f_hi)) 
            << 0x18U) | (QData)((IData)((((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_23) 
                                          << 0x17U) 
                                         | (((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_22) 
                                             << 0x16U) 
                                            | (((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_21) 
                                                << 0x15U) 
                                               | (((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_20) 
                                                   << 0x14U) 
                                                  | (((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_19) 
                                                      << 0x13U) 
                                                     | (((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_18) 
                                                         << 0x12U) 
                                                        | (((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__io_f_lo_hi_lo) 
                                                            << 0xcU) 
                                                           | (((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_11) 
                                                               << 0xbU) 
                                                              | (((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_10) 
                                                                  << 0xaU) 
                                                                 | (((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_9) 
                                                                     << 9U) 
                                                                    | (((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_8) 
                                                                        << 8U) 
                                                                       | (((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_7) 
                                                                           << 7U) 
                                                                          | (((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_6) 
                                                                              << 6U) 
                                                                             | (((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_5) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_4) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_3) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_2) 
                                                                                << 2U) 
                                                                                | ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_ab__DOT__f_1) 
                                                                                << 1U)))))))))))))))))))));
    vlSelf->__PVT__near_path_mods_1__DOT__exceed_lim 
        = ((~ (IData)((0U != __PVT__near_path_mods_1__DOT___exceed_lim_T))) 
           & (0x31U > (IData)(vlSelf->__PVT__near_path_mods_1_io_in_a_exp)));
    vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
        = (0x1ffffffffffffULL & (((0x31U > (IData)(vlSelf->__PVT__near_path_mods_1_io_in_a_exp))
                                   ? (0x3ffffffffffffULL 
                                      & (0x2000000000000ULL 
                                         >> (0x3fU 
                                             & (IData)(vlSelf->__PVT__near_path_mods_1_io_in_a_exp))))
                                   : 0ULL) | vlSelf->__PVT__near_path_mods_1__DOT__lza_ab_io_f));
    vlSelf->__PVT__near_path_mods_0__DOT__exceed_lim 
        = ((~ (IData)((0U != __PVT__near_path_mods_0__DOT___exceed_lim_T))) 
           & (0x31U > (IData)(vlSelf->__PVT__near_path_mods_0_io_in_a_exp)));
    vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
        = (0x1ffffffffffffULL & (((0x31U > (IData)(vlSelf->__PVT__near_path_mods_0_io_in_a_exp))
                                   ? (0x3ffffffffffffULL 
                                      & (0x2000000000000ULL 
                                         >> (0x3fU 
                                             & (IData)(vlSelf->__PVT__near_path_mods_0_io_in_a_exp))))
                                   : 0ULL) | vlSelf->__PVT__near_path_mods_0__DOT__lza_ab_io_f));
    vlSelf->__PVT__near_path_mods_1__DOT__int_bit_mask 
        = (((QData)((IData)((1U & (IData)((vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                           >> 0x30U))))) 
            << 0x30U) | (((QData)((IData)((0x800000000000ULL 
                                           == (0x1800000000000ULL 
                                               & vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in)))) 
                          << 0x2fU) | (((QData)((IData)(
                                                        (1U 
                                                         & ((~ (IData)(
                                                                       (0U 
                                                                        != 
                                                                        (3U 
                                                                         & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                                                >> 0x2fU)))))) 
                                                            & (IData)(
                                                                      (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                                       >> 0x2eU)))))) 
                                        << 0x2eU) | 
                                       (((QData)((IData)(
                                                         (1U 
                                                          & ((~ (IData)(
                                                                        (0U 
                                                                         != 
                                                                         (7U 
                                                                          & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                                                >> 0x2eU)))))) 
                                                             & (IData)(
                                                                       (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                                        >> 0x2dU)))))) 
                                         << 0x2dU) 
                                        | (((QData)((IData)(
                                                            (1U 
                                                             & ((~ (IData)(
                                                                           (0U 
                                                                            != 
                                                                            (0xfU 
                                                                             & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                                                >> 0x2dU)))))) 
                                                                & (IData)(
                                                                          (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                                           >> 0x2cU)))))) 
                                            << 0x2cU) 
                                           | (((QData)((IData)(
                                                               (1U 
                                                                & ((~ (IData)(
                                                                              (0U 
                                                                               != 
                                                                               (0x1fU 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                                                >> 0x2cU)))))) 
                                                                   & (IData)(
                                                                             (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                                              >> 0x2bU)))))) 
                                               << 0x2bU) 
                                              | (((QData)((IData)(
                                                                  (1U 
                                                                   & ((~ (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x3fU 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                                                >> 0x2bU)))))) 
                                                                      & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                                                >> 0x2aU)))))) 
                                                  << 0x2aU) 
                                                 | (((QData)((IData)(
                                                                     ((0x20U 
                                                                       & (((~ (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x7fU 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                                                >> 0x2aU)))))) 
                                                                           & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                                                >> 0x29U))) 
                                                                          << 5U)) 
                                                                      | ((0x10U 
                                                                          & (((~ (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xffU 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                                                >> 0x29U)))))) 
                                                                              & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                                                >> 0x28U))) 
                                                                             << 4U)) 
                                                                         | ((8U 
                                                                             & (((~ (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x1ffU 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                                                >> 0x28U)))))) 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                                                >> 0x27U))) 
                                                                                << 3U)) 
                                                                            | ((4U 
                                                                                & (((~ (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x3ffU 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                                                >> 0x27U)))))) 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                                                >> 0x26U))) 
                                                                                << 2U)) 
                                                                               | ((2U 
                                                                                & (((~ (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x7ffU 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                                                >> 0x26U)))))) 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                                                >> 0x25U))) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & ((~ (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xfffU 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                                                >> 0x25U)))))) 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                                                >> 0x24U))))))))))) 
                                                     << 0x24U) 
                                                    | (((QData)((IData)(
                                                                        ((0x800U 
                                                                          & (((~ (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x1fffU 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                                                >> 0x24U)))))) 
                                                                              & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                                                >> 0x23U))) 
                                                                             << 0xbU)) 
                                                                         | ((0x400U 
                                                                             & (((~ (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x3fffU 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                                                >> 0x23U)))))) 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                                                >> 0x22U))) 
                                                                                << 0xaU)) 
                                                                            | ((0x200U 
                                                                                & (((~ (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x7fffU 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                                                >> 0x22U)))))) 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                                                >> 0x21U))) 
                                                                                << 9U)) 
                                                                               | ((0x100U 
                                                                                & (((~ (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xffffU 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                                                >> 0x21U)))))) 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                                                >> 0x20U))) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & (((~ (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x1ffffU 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                                                >> 0x20U)))))) 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                                                >> 0x1fU))) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & (((~ (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x3ffffU 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                                                >> 0x1fU)))))) 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                                                >> 0x1eU))) 
                                                                                << 6U)) 
                                                                                | ((0x20U 
                                                                                & (((~ (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x7ffffU 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                                                >> 0x1eU)))))) 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                                                >> 0x1dU))) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & (((~ (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xfffffU 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                                                >> 0x1dU)))))) 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                                                >> 0x1cU))) 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & (((~ (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x1fffffU 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                                                >> 0x1cU)))))) 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                                                >> 0x1bU))) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & (((~ (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x3fffffU 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                                                >> 0x1bU)))))) 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                                                >> 0x1aU))) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & (((~ (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x7fffffU 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                                                >> 0x1aU)))))) 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                                                >> 0x19U))) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & ((~ (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xffffffU 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                                                >> 0x19U)))))) 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                                                >> 0x18U))))))))))))))))) 
                                                        << 0x18U) 
                                                       | (QData)((IData)(
                                                                         ((0x800000U 
                                                                           & (((~ (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x1ffffffU 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                                                >> 0x18U)))))) 
                                                                               & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                                                >> 0x17U))) 
                                                                              << 0x17U)) 
                                                                          | ((0x400000U 
                                                                              & (((~ (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x3ffffffU 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                                                >> 0x17U)))))) 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                                                >> 0x16U))) 
                                                                                << 0x16U)) 
                                                                             | ((0x200000U 
                                                                                & (((~ (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x7ffffffU 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                                                >> 0x16U)))))) 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                                                >> 0x15U))) 
                                                                                << 0x15U)) 
                                                                                | ((0x100000U 
                                                                                & (((~ (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xfffffffU 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                                                >> 0x15U)))))) 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                                                >> 0x14U))) 
                                                                                << 0x14U)) 
                                                                                | ((0x80000U 
                                                                                & (((~ (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x1fffffffU 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                                                >> 0x14U)))))) 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                                                >> 0x13U))) 
                                                                                << 0x13U)) 
                                                                                | ((0x40000U 
                                                                                & (((~ (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x3fffffffU 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                                                >> 0x13U)))))) 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                                                >> 0x12U))) 
                                                                                << 0x12U)) 
                                                                                | (((0x20000U 
                                                                                & (((~ (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x7fffffffU 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                                                >> 0x12U)))))) 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                                                >> 0x11U))) 
                                                                                << 0x11U)) 
                                                                                | ((0x10000U 
                                                                                & (((~ (IData)(
                                                                                (0U 
                                                                                != (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                                                >> 0x11U))))) 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                                                >> 0x10U))) 
                                                                                << 0x10U)) 
                                                                                | ((0x8000U 
                                                                                & (((~ (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x1ffffffffULL 
                                                                                & (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                                                >> 0x10U))))) 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                                                >> 0xfU))) 
                                                                                << 0xfU)) 
                                                                                | ((0x4000U 
                                                                                & (((~ (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x3ffffffffULL 
                                                                                & (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                                                >> 0xfU))))) 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                                                >> 0xeU))) 
                                                                                << 0xeU)) 
                                                                                | ((0x2000U 
                                                                                & (((~ (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x7ffffffffULL 
                                                                                & (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                                                >> 0xeU))))) 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                                                >> 0xdU))) 
                                                                                << 0xdU)) 
                                                                                | (0x1000U 
                                                                                & (((~ (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xfffffffffULL 
                                                                                & (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                                                >> 0xdU))))) 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                                                >> 0xcU))) 
                                                                                << 0xcU))))))) 
                                                                                | ((0x800U 
                                                                                & (((~ (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x1fffffffffULL 
                                                                                & (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                                                >> 0xcU))))) 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                                                >> 0xbU))) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & (((~ (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x3fffffffffULL 
                                                                                & (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                                                >> 0xbU))))) 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                                                >> 0xaU))) 
                                                                                << 0xaU)) 
                                                                                | ((0x200U 
                                                                                & (((~ (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x7fffffffffULL 
                                                                                & (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                                                >> 0xaU))))) 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                                                >> 9U))) 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & (((~ (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xffffffffffULL 
                                                                                & (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                                                >> 9U))))) 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                                                >> 8U))) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & (((~ (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x1ffffffffffULL 
                                                                                & (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                                                >> 8U))))) 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                                                >> 7U))) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & (((~ (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x3ffffffffffULL 
                                                                                & (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                                                >> 7U))))) 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                                                >> 6U))) 
                                                                                << 6U)) 
                                                                                | ((0x20U 
                                                                                & (((~ (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x7ffffffffffULL 
                                                                                & (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                                                >> 6U))))) 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                                                >> 5U))) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & (((~ (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xfffffffffffULL 
                                                                                & (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                                                >> 5U))))) 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                                                >> 4U))) 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & (((~ (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x1fffffffffffULL 
                                                                                & (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                                                >> 4U))))) 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                                                >> 3U))) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & (((~ (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x3fffffffffffULL 
                                                                                & (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                                                >> 3U))))) 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                                                >> 2U))) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & (((~ (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x7fffffffffffULL 
                                                                                & (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                                                >> 2U))))) 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                                                >> 1U))) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & ((~ (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xffffffffffffULL 
                                                                                & (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                                                >> 1U))))) 
                                                                                & (IData)(vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in))))))))))))))))))))))))))))))));
    __PVT__near_path_mods_1__DOT__lzc_clz__DOT___io_out_T_65 
        = ((1U & (IData)((vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                          >> 0x11U))) ? 0x1fU : ((1U 
                                                  & (IData)(
                                                            (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                             >> 0x10U)))
                                                  ? 0x20U
                                                  : 
                                                 ((1U 
                                                   & (IData)(
                                                             (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                              >> 0xfU)))
                                                   ? 0x21U
                                                   : 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                               >> 0xeU)))
                                                    ? 0x22U
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                                >> 0xdU)))
                                                     ? 0x23U
                                                     : 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                                 >> 0xcU)))
                                                      ? 0x24U
                                                      : 
                                                     ((1U 
                                                       & (IData)(
                                                                 (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                                  >> 0xbU)))
                                                       ? 0x25U
                                                       : 
                                                      ((1U 
                                                        & (IData)(
                                                                  (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                                   >> 0xaU)))
                                                        ? 0x26U
                                                        : 
                                                       ((1U 
                                                         & (IData)(
                                                                   (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                                    >> 9U)))
                                                         ? 0x27U
                                                         : 
                                                        ((1U 
                                                          & (IData)(
                                                                    (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                                     >> 8U)))
                                                          ? 0x28U
                                                          : 
                                                         ((1U 
                                                           & (IData)(
                                                                     (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                                      >> 7U)))
                                                           ? 0x29U
                                                           : 
                                                          ((1U 
                                                            & (IData)(
                                                                      (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                                       >> 6U)))
                                                            ? 0x2aU
                                                            : 
                                                           ((1U 
                                                             & (IData)(
                                                                       (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                                        >> 5U)))
                                                             ? 0x2bU
                                                             : 
                                                            ((1U 
                                                              & (IData)(
                                                                        (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                                         >> 4U)))
                                                              ? 0x2cU
                                                              : 
                                                             ((1U 
                                                               & (IData)(
                                                                         (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                                          >> 3U)))
                                                               ? 0x2dU
                                                               : 
                                                              ((1U 
                                                                & (IData)(
                                                                          (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                                           >> 2U)))
                                                                ? 0x2eU
                                                                : 
                                                               ((1U 
                                                                 & (IData)(
                                                                           (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                                            >> 1U)))
                                                                 ? 0x2fU
                                                                 : 0x30U)))))))))))))))));
    vlSelf->__PVT__near_path_mods_0__DOT__int_bit_mask 
        = (((QData)((IData)((1U & (IData)((vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                           >> 0x30U))))) 
            << 0x30U) | (((QData)((IData)((0x800000000000ULL 
                                           == (0x1800000000000ULL 
                                               & vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in)))) 
                          << 0x2fU) | (((QData)((IData)(
                                                        (1U 
                                                         & ((~ (IData)(
                                                                       (0U 
                                                                        != 
                                                                        (3U 
                                                                         & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                                                >> 0x2fU)))))) 
                                                            & (IData)(
                                                                      (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                                       >> 0x2eU)))))) 
                                        << 0x2eU) | 
                                       (((QData)((IData)(
                                                         (1U 
                                                          & ((~ (IData)(
                                                                        (0U 
                                                                         != 
                                                                         (7U 
                                                                          & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                                                >> 0x2eU)))))) 
                                                             & (IData)(
                                                                       (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                                        >> 0x2dU)))))) 
                                         << 0x2dU) 
                                        | (((QData)((IData)(
                                                            (1U 
                                                             & ((~ (IData)(
                                                                           (0U 
                                                                            != 
                                                                            (0xfU 
                                                                             & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                                                >> 0x2dU)))))) 
                                                                & (IData)(
                                                                          (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                                           >> 0x2cU)))))) 
                                            << 0x2cU) 
                                           | (((QData)((IData)(
                                                               (1U 
                                                                & ((~ (IData)(
                                                                              (0U 
                                                                               != 
                                                                               (0x1fU 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                                                >> 0x2cU)))))) 
                                                                   & (IData)(
                                                                             (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                                              >> 0x2bU)))))) 
                                               << 0x2bU) 
                                              | (((QData)((IData)(
                                                                  (1U 
                                                                   & ((~ (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x3fU 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                                                >> 0x2bU)))))) 
                                                                      & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                                                >> 0x2aU)))))) 
                                                  << 0x2aU) 
                                                 | (((QData)((IData)(
                                                                     ((0x20U 
                                                                       & (((~ (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x7fU 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                                                >> 0x2aU)))))) 
                                                                           & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                                                >> 0x29U))) 
                                                                          << 5U)) 
                                                                      | ((0x10U 
                                                                          & (((~ (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xffU 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                                                >> 0x29U)))))) 
                                                                              & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                                                >> 0x28U))) 
                                                                             << 4U)) 
                                                                         | ((8U 
                                                                             & (((~ (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x1ffU 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                                                >> 0x28U)))))) 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                                                >> 0x27U))) 
                                                                                << 3U)) 
                                                                            | ((4U 
                                                                                & (((~ (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x3ffU 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                                                >> 0x27U)))))) 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                                                >> 0x26U))) 
                                                                                << 2U)) 
                                                                               | ((2U 
                                                                                & (((~ (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x7ffU 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                                                >> 0x26U)))))) 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                                                >> 0x25U))) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & ((~ (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xfffU 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                                                >> 0x25U)))))) 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                                                >> 0x24U))))))))))) 
                                                     << 0x24U) 
                                                    | (((QData)((IData)(
                                                                        ((0x800U 
                                                                          & (((~ (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x1fffU 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                                                >> 0x24U)))))) 
                                                                              & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                                                >> 0x23U))) 
                                                                             << 0xbU)) 
                                                                         | ((0x400U 
                                                                             & (((~ (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x3fffU 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                                                >> 0x23U)))))) 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                                                >> 0x22U))) 
                                                                                << 0xaU)) 
                                                                            | ((0x200U 
                                                                                & (((~ (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x7fffU 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                                                >> 0x22U)))))) 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                                                >> 0x21U))) 
                                                                                << 9U)) 
                                                                               | ((0x100U 
                                                                                & (((~ (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xffffU 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                                                >> 0x21U)))))) 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                                                >> 0x20U))) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & (((~ (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x1ffffU 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                                                >> 0x20U)))))) 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                                                >> 0x1fU))) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & (((~ (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x3ffffU 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                                                >> 0x1fU)))))) 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                                                >> 0x1eU))) 
                                                                                << 6U)) 
                                                                                | ((0x20U 
                                                                                & (((~ (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x7ffffU 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                                                >> 0x1eU)))))) 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                                                >> 0x1dU))) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & (((~ (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xfffffU 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                                                >> 0x1dU)))))) 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                                                >> 0x1cU))) 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & (((~ (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x1fffffU 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                                                >> 0x1cU)))))) 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                                                >> 0x1bU))) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & (((~ (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x3fffffU 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                                                >> 0x1bU)))))) 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                                                >> 0x1aU))) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & (((~ (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x7fffffU 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                                                >> 0x1aU)))))) 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                                                >> 0x19U))) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & ((~ (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xffffffU 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                                                >> 0x19U)))))) 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                                                >> 0x18U))))))))))))))))) 
                                                        << 0x18U) 
                                                       | (QData)((IData)(
                                                                         ((0x800000U 
                                                                           & (((~ (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x1ffffffU 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                                                >> 0x18U)))))) 
                                                                               & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                                                >> 0x17U))) 
                                                                              << 0x17U)) 
                                                                          | ((0x400000U 
                                                                              & (((~ (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x3ffffffU 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                                                >> 0x17U)))))) 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                                                >> 0x16U))) 
                                                                                << 0x16U)) 
                                                                             | ((0x200000U 
                                                                                & (((~ (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x7ffffffU 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                                                >> 0x16U)))))) 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                                                >> 0x15U))) 
                                                                                << 0x15U)) 
                                                                                | ((0x100000U 
                                                                                & (((~ (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xfffffffU 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                                                >> 0x15U)))))) 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                                                >> 0x14U))) 
                                                                                << 0x14U)) 
                                                                                | ((0x80000U 
                                                                                & (((~ (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x1fffffffU 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                                                >> 0x14U)))))) 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                                                >> 0x13U))) 
                                                                                << 0x13U)) 
                                                                                | ((0x40000U 
                                                                                & (((~ (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x3fffffffU 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                                                >> 0x13U)))))) 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                                                >> 0x12U))) 
                                                                                << 0x12U)) 
                                                                                | (((0x20000U 
                                                                                & (((~ (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x7fffffffU 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                                                >> 0x12U)))))) 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                                                >> 0x11U))) 
                                                                                << 0x11U)) 
                                                                                | ((0x10000U 
                                                                                & (((~ (IData)(
                                                                                (0U 
                                                                                != (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                                                >> 0x11U))))) 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                                                >> 0x10U))) 
                                                                                << 0x10U)) 
                                                                                | ((0x8000U 
                                                                                & (((~ (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x1ffffffffULL 
                                                                                & (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                                                >> 0x10U))))) 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                                                >> 0xfU))) 
                                                                                << 0xfU)) 
                                                                                | ((0x4000U 
                                                                                & (((~ (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x3ffffffffULL 
                                                                                & (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                                                >> 0xfU))))) 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                                                >> 0xeU))) 
                                                                                << 0xeU)) 
                                                                                | ((0x2000U 
                                                                                & (((~ (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x7ffffffffULL 
                                                                                & (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                                                >> 0xeU))))) 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                                                >> 0xdU))) 
                                                                                << 0xdU)) 
                                                                                | (0x1000U 
                                                                                & (((~ (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xfffffffffULL 
                                                                                & (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                                                >> 0xdU))))) 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                                                >> 0xcU))) 
                                                                                << 0xcU))))))) 
                                                                                | ((0x800U 
                                                                                & (((~ (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x1fffffffffULL 
                                                                                & (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                                                >> 0xcU))))) 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                                                >> 0xbU))) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & (((~ (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x3fffffffffULL 
                                                                                & (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                                                >> 0xbU))))) 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                                                >> 0xaU))) 
                                                                                << 0xaU)) 
                                                                                | ((0x200U 
                                                                                & (((~ (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x7fffffffffULL 
                                                                                & (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                                                >> 0xaU))))) 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                                                >> 9U))) 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & (((~ (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xffffffffffULL 
                                                                                & (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                                                >> 9U))))) 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                                                >> 8U))) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & (((~ (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x1ffffffffffULL 
                                                                                & (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                                                >> 8U))))) 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                                                >> 7U))) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & (((~ (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x3ffffffffffULL 
                                                                                & (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                                                >> 7U))))) 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                                                >> 6U))) 
                                                                                << 6U)) 
                                                                                | ((0x20U 
                                                                                & (((~ (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x7ffffffffffULL 
                                                                                & (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                                                >> 6U))))) 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                                                >> 5U))) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & (((~ (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xfffffffffffULL 
                                                                                & (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                                                >> 5U))))) 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                                                >> 4U))) 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & (((~ (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x1fffffffffffULL 
                                                                                & (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                                                >> 4U))))) 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                                                >> 3U))) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & (((~ (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x3fffffffffffULL 
                                                                                & (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                                                >> 3U))))) 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                                                >> 2U))) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & (((~ (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x7fffffffffffULL 
                                                                                & (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                                                >> 2U))))) 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                                                >> 1U))) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & ((~ (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xffffffffffffULL 
                                                                                & (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                                                >> 1U))))) 
                                                                                & (IData)(vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in))))))))))))))))))))))))))))))));
    __PVT__near_path_mods_0__DOT__lzc_clz__DOT___io_out_T_65 
        = ((1U & (IData)((vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                          >> 0x11U))) ? 0x1fU : ((1U 
                                                  & (IData)(
                                                            (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                             >> 0x10U)))
                                                  ? 0x20U
                                                  : 
                                                 ((1U 
                                                   & (IData)(
                                                             (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                              >> 0xfU)))
                                                   ? 0x21U
                                                   : 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                               >> 0xeU)))
                                                    ? 0x22U
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                                >> 0xdU)))
                                                     ? 0x23U
                                                     : 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                                 >> 0xcU)))
                                                      ? 0x24U
                                                      : 
                                                     ((1U 
                                                       & (IData)(
                                                                 (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                                  >> 0xbU)))
                                                       ? 0x25U
                                                       : 
                                                      ((1U 
                                                        & (IData)(
                                                                  (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                                   >> 0xaU)))
                                                        ? 0x26U
                                                        : 
                                                       ((1U 
                                                         & (IData)(
                                                                   (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                                    >> 9U)))
                                                         ? 0x27U
                                                         : 
                                                        ((1U 
                                                          & (IData)(
                                                                    (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                                     >> 8U)))
                                                          ? 0x28U
                                                          : 
                                                         ((1U 
                                                           & (IData)(
                                                                     (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                                      >> 7U)))
                                                           ? 0x29U
                                                           : 
                                                          ((1U 
                                                            & (IData)(
                                                                      (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                                       >> 6U)))
                                                            ? 0x2aU
                                                            : 
                                                           ((1U 
                                                             & (IData)(
                                                                       (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                                        >> 5U)))
                                                             ? 0x2bU
                                                             : 
                                                            ((1U 
                                                              & (IData)(
                                                                        (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                                         >> 4U)))
                                                              ? 0x2cU
                                                              : 
                                                             ((1U 
                                                               & (IData)(
                                                                         (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                                          >> 3U)))
                                                               ? 0x2dU
                                                               : 
                                                              ((1U 
                                                                & (IData)(
                                                                          (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                                           >> 2U)))
                                                                ? 0x2eU
                                                                : 
                                                               ((1U 
                                                                 & (IData)(
                                                                           (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                                            >> 1U)))
                                                                 ? 0x2fU
                                                                 : 0x30U)))))))))))))))));
    vlSelf->__PVT__near_path_mods_1__DOT___int_bit_predicted_T_1 
        = ((vlSelf->__PVT__near_path_mods_1__DOT__int_bit_mask 
            | (QData)((IData)((1U & (~ (IData)((0U 
                                                != vlSelf->__PVT__near_path_mods_1__DOT__lza_ab_io_f))))))) 
           & (1ULL + vlSelf->__PVT__near_path_mods_1__DOT___a_minus_b_T_3));
    __PVT__near_path_mods_1__DOT__lzc_clz__DOT___io_out_T_82 
        = ((1U & (IData)((vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                          >> 0x22U))) ? 0xeU : ((1U 
                                                 & (IData)(
                                                           (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                            >> 0x21U)))
                                                 ? 0xfU
                                                 : 
                                                ((1U 
                                                  & (IData)(
                                                            (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                             >> 0x20U)))
                                                  ? 0x10U
                                                  : 
                                                 ((1U 
                                                   & (IData)(
                                                             (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                              >> 0x1fU)))
                                                   ? 0x11U
                                                   : 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                               >> 0x1eU)))
                                                    ? 0x12U
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                                >> 0x1dU)))
                                                     ? 0x13U
                                                     : 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                                 >> 0x1cU)))
                                                      ? 0x14U
                                                      : 
                                                     ((1U 
                                                       & (IData)(
                                                                 (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                                  >> 0x1bU)))
                                                       ? 0x15U
                                                       : 
                                                      ((1U 
                                                        & (IData)(
                                                                  (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                                   >> 0x1aU)))
                                                        ? 0x16U
                                                        : 
                                                       ((1U 
                                                         & (IData)(
                                                                   (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                                    >> 0x19U)))
                                                         ? 0x17U
                                                         : 
                                                        ((1U 
                                                          & (IData)(
                                                                    (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                                     >> 0x18U)))
                                                          ? 0x18U
                                                          : 
                                                         ((1U 
                                                           & (IData)(
                                                                     (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                                      >> 0x17U)))
                                                           ? 0x19U
                                                           : 
                                                          ((1U 
                                                            & (IData)(
                                                                      (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                                       >> 0x16U)))
                                                            ? 0x1aU
                                                            : 
                                                           ((1U 
                                                             & (IData)(
                                                                       (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                                        >> 0x15U)))
                                                             ? 0x1bU
                                                             : 
                                                            ((1U 
                                                              & (IData)(
                                                                        (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                                         >> 0x14U)))
                                                              ? 0x1cU
                                                              : 
                                                             ((1U 
                                                               & (IData)(
                                                                         (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                                          >> 0x13U)))
                                                               ? 0x1dU
                                                               : 
                                                              ((1U 
                                                                & (IData)(
                                                                          (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                                           >> 0x12U)))
                                                                ? 0x1eU
                                                                : (IData)(__PVT__near_path_mods_1__DOT__lzc_clz__DOT___io_out_T_65))))))))))))))))));
    vlSelf->__PVT__near_path_mods_0__DOT___int_bit_predicted_T_1 
        = ((vlSelf->__PVT__near_path_mods_0__DOT__int_bit_mask 
            | (QData)((IData)((1U & (~ (IData)((0U 
                                                != vlSelf->__PVT__near_path_mods_0__DOT__lza_ab_io_f))))))) 
           & (1ULL + vlSelf->__PVT__near_path_mods_0__DOT___a_minus_b_T_3));
    __PVT__near_path_mods_0__DOT__lzc_clz__DOT___io_out_T_82 
        = ((1U & (IData)((vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                          >> 0x22U))) ? 0xeU : ((1U 
                                                 & (IData)(
                                                           (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                            >> 0x21U)))
                                                 ? 0xfU
                                                 : 
                                                ((1U 
                                                  & (IData)(
                                                            (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                             >> 0x20U)))
                                                  ? 0x10U
                                                  : 
                                                 ((1U 
                                                   & (IData)(
                                                             (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                              >> 0x1fU)))
                                                   ? 0x11U
                                                   : 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                               >> 0x1eU)))
                                                    ? 0x12U
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                                >> 0x1dU)))
                                                     ? 0x13U
                                                     : 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                                 >> 0x1cU)))
                                                      ? 0x14U
                                                      : 
                                                     ((1U 
                                                       & (IData)(
                                                                 (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                                  >> 0x1bU)))
                                                       ? 0x15U
                                                       : 
                                                      ((1U 
                                                        & (IData)(
                                                                  (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                                   >> 0x1aU)))
                                                        ? 0x16U
                                                        : 
                                                       ((1U 
                                                         & (IData)(
                                                                   (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                                    >> 0x19U)))
                                                         ? 0x17U
                                                         : 
                                                        ((1U 
                                                          & (IData)(
                                                                    (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                                     >> 0x18U)))
                                                          ? 0x18U
                                                          : 
                                                         ((1U 
                                                           & (IData)(
                                                                     (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                                      >> 0x17U)))
                                                           ? 0x19U
                                                           : 
                                                          ((1U 
                                                            & (IData)(
                                                                      (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                                       >> 0x16U)))
                                                            ? 0x1aU
                                                            : 
                                                           ((1U 
                                                             & (IData)(
                                                                       (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                                        >> 0x15U)))
                                                             ? 0x1bU
                                                             : 
                                                            ((1U 
                                                              & (IData)(
                                                                        (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                                         >> 0x14U)))
                                                              ? 0x1cU
                                                              : 
                                                             ((1U 
                                                               & (IData)(
                                                                         (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                                          >> 0x13U)))
                                                               ? 0x1dU
                                                               : 
                                                              ((1U 
                                                                & (IData)(
                                                                          (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                                           >> 0x12U)))
                                                                ? 0x1eU
                                                                : (IData)(__PVT__near_path_mods_0__DOT__lzc_clz__DOT___io_out_T_65))))))))))))))))));
    vlSelf->__PVT__near_path_mods_1__DOT__lza_error 
        = (1U & ((~ (IData)((0U != vlSelf->__PVT__near_path_mods_1__DOT___int_bit_predicted_T_1))) 
                 & (~ (IData)(vlSelf->__PVT__near_path_mods_1__DOT__exceed_lim))));
    vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_out 
        = ((1U & (IData)((vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                          >> 0x30U))) ? 0U : ((1U & (IData)(
                                                            (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                             >> 0x2fU)))
                                               ? 1U
                                               : ((1U 
                                                   & (IData)(
                                                             (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                              >> 0x2eU)))
                                                   ? 2U
                                                   : 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                               >> 0x2dU)))
                                                    ? 3U
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                                >> 0x2cU)))
                                                     ? 4U
                                                     : 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                                 >> 0x2bU)))
                                                      ? 5U
                                                      : 
                                                     ((1U 
                                                       & (IData)(
                                                                 (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                                  >> 0x2aU)))
                                                       ? 6U
                                                       : 
                                                      ((1U 
                                                        & (IData)(
                                                                  (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                                   >> 0x29U)))
                                                        ? 7U
                                                        : 
                                                       ((1U 
                                                         & (IData)(
                                                                   (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                                    >> 0x28U)))
                                                         ? 8U
                                                         : 
                                                        ((1U 
                                                          & (IData)(
                                                                    (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                                     >> 0x27U)))
                                                          ? 9U
                                                          : 
                                                         ((1U 
                                                           & (IData)(
                                                                     (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                                      >> 0x26U)))
                                                           ? 0xaU
                                                           : 
                                                          ((1U 
                                                            & (IData)(
                                                                      (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                                       >> 0x25U)))
                                                            ? 0xbU
                                                            : 
                                                           ((1U 
                                                             & (IData)(
                                                                       (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                                        >> 0x24U)))
                                                             ? 0xcU
                                                             : 
                                                            ((1U 
                                                              & (IData)(
                                                                        (vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_in 
                                                                         >> 0x23U)))
                                                              ? 0xdU
                                                              : (IData)(__PVT__near_path_mods_1__DOT__lzc_clz__DOT___io_out_T_82)))))))))))))));
    vlSelf->__PVT__near_path_mods_0__DOT__lza_error 
        = (1U & ((~ (IData)((0U != vlSelf->__PVT__near_path_mods_0__DOT___int_bit_predicted_T_1))) 
                 & (~ (IData)(vlSelf->__PVT__near_path_mods_0__DOT__exceed_lim))));
    vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_out 
        = ((1U & (IData)((vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                          >> 0x30U))) ? 0U : ((1U & (IData)(
                                                            (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                             >> 0x2fU)))
                                               ? 1U
                                               : ((1U 
                                                   & (IData)(
                                                             (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                              >> 0x2eU)))
                                                   ? 2U
                                                   : 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                               >> 0x2dU)))
                                                    ? 3U
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                                >> 0x2cU)))
                                                     ? 4U
                                                     : 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                                 >> 0x2bU)))
                                                      ? 5U
                                                      : 
                                                     ((1U 
                                                       & (IData)(
                                                                 (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                                  >> 0x2aU)))
                                                       ? 6U
                                                       : 
                                                      ((1U 
                                                        & (IData)(
                                                                  (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                                   >> 0x29U)))
                                                        ? 7U
                                                        : 
                                                       ((1U 
                                                         & (IData)(
                                                                   (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                                    >> 0x28U)))
                                                         ? 8U
                                                         : 
                                                        ((1U 
                                                          & (IData)(
                                                                    (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                                     >> 0x27U)))
                                                          ? 9U
                                                          : 
                                                         ((1U 
                                                           & (IData)(
                                                                     (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                                      >> 0x26U)))
                                                           ? 0xaU
                                                           : 
                                                          ((1U 
                                                            & (IData)(
                                                                      (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                                       >> 0x25U)))
                                                            ? 0xbU
                                                            : 
                                                           ((1U 
                                                             & (IData)(
                                                                       (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                                        >> 0x24U)))
                                                             ? 0xcU
                                                             : 
                                                            ((1U 
                                                              & (IData)(
                                                                        (vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_in 
                                                                         >> 0x23U)))
                                                              ? 0xdU
                                                              : (IData)(__PVT__near_path_mods_0__DOT__lzc_clz__DOT___io_out_T_82)))))))))))))));
    vlSelf->__PVT__near_path_mods_1__DOT__sig_s1 = 
        (0x1ffffffffffffULL & ((1ULL + vlSelf->__PVT__near_path_mods_1__DOT___a_minus_b_T_3) 
                               << (IData)(vlSelf->__PVT__near_path_mods_1__DOT__lzc_clz_io_out)));
    vlSelf->__PVT__near_path_mods_0__DOT__sig_s1 = 
        (0x1ffffffffffffULL & ((1ULL + vlSelf->__PVT__near_path_mods_0__DOT___a_minus_b_T_3) 
                               << (IData)(vlSelf->__PVT__near_path_mods_0__DOT__lzc_clz_io_out)));
    vlSelf->__PVT__near_path_mods_1__DOT__near_path_sig 
        = (0x1ffffffffffffULL & ((IData)(vlSelf->__PVT__near_path_mods_1__DOT__lza_error)
                                  ? (vlSelf->__PVT__near_path_mods_1__DOT__sig_s1 
                                     << 1U) : vlSelf->__PVT__near_path_mods_1__DOT__sig_s1));
    vlSelf->__PVT__near_path_mods_0__DOT__near_path_sig 
        = (0x1ffffffffffffULL & ((IData)(vlSelf->__PVT__near_path_mods_0__DOT__lza_error)
                                  ? (vlSelf->__PVT__near_path_mods_0__DOT__sig_s1 
                                     << 1U) : vlSelf->__PVT__near_path_mods_0__DOT__sig_s1));
}
