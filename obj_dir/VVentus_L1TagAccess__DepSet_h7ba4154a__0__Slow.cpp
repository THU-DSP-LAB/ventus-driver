// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VVentus.h for the primary calling header

#include "verilated.h"

#include "VVentus_L1TagAccess.h"
#include "VVentus__Syms.h"

VL_ATTR_COLD void VVentus_L1TagAccess___stl_sequent__TOP__GPGPU_top__DOT__SM_wrapper__icache__DOT__tagAccess__0(VVentus_L1TagAccess* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VVentus__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VVentus_L1TagAccess___stl_sequent__TOP__GPGPU_top__DOT__SM_wrapper__icache__DOT__tagAccess__0\n"); );
    // Init
    CData/*0:0*/ __PVT___GEN_78;
    CData/*0:0*/ __PVT___GEN_91;
    CData/*0:0*/ __PVT___GEN_110;
    CData/*0:0*/ __PVT___GEN_123;
    CData/*0:0*/ __PVT__iTagChecker__DOT___io_waymask_T_3;
    CData/*0:0*/ __PVT__Replacement__DOT___io_waymask_T_4;
    // Body
    vlSelf->__PVT__tagBodyAccess__DOT___bypass_wdata_lfsr_T_2 
        = (((QData)((IData)((1U & VL_REDXOR_8((0x1bULL 
                                               & vlSelf->__PVT__tagBodyAccess__DOT__bypass_wdata_lfsr))))) 
            << 0x3fU) | (vlSelf->__PVT__tagBodyAccess__DOT__bypass_wdata_lfsr 
                         >> 1U));
    vlSelf->__PVT__tagBodyAccess__DOT___bypass_wdata_lfsr_T_6 
        = (((QData)((IData)((1U & VL_REDXOR_8((0x1bULL 
                                               & vlSelf->__PVT__tagBodyAccess__DOT__bypass_wdata_lfsr_1))))) 
            << 0x3fU) | (vlSelf->__PVT__tagBodyAccess__DOT__bypass_wdata_lfsr_1 
                         >> 1U));
    vlSelf->__PVT__tagBodyAccess__DOT__array_0_raw_rdata_data 
        = vlSelf->__PVT__tagBodyAccess__DOT__array_0
        [vlSelf->__PVT__tagBodyAccess__DOT__array_0_raw_rdata_addr_pipe_0];
    vlSelf->__PVT__tagBodyAccess__DOT__array_1_raw_rdata_data 
        = vlSelf->__PVT__tagBodyAccess__DOT__array_1
        [vlSelf->__PVT__tagBodyAccess__DOT__array_1_raw_rdata_addr_pipe_0];
    if ((0x15U == (IData)(vlSelf->__PVT__iTagChecker_io_way_valid_r))) {
        vlSelf->__PVT___GEN_22 = vlSelf->__PVT__way_valid_21_0;
        vlSelf->__PVT___GEN_54 = vlSelf->__PVT__way_valid_21_1;
    } else if ((0x14U == (IData)(vlSelf->__PVT__iTagChecker_io_way_valid_r))) {
        vlSelf->__PVT___GEN_22 = vlSelf->__PVT__way_valid_20_0;
        vlSelf->__PVT___GEN_54 = vlSelf->__PVT__way_valid_20_1;
    } else if ((0x13U == (IData)(vlSelf->__PVT__iTagChecker_io_way_valid_r))) {
        vlSelf->__PVT___GEN_22 = vlSelf->__PVT__way_valid_19_0;
        vlSelf->__PVT___GEN_54 = vlSelf->__PVT__way_valid_19_1;
    } else if ((0x12U == (IData)(vlSelf->__PVT__iTagChecker_io_way_valid_r))) {
        vlSelf->__PVT___GEN_22 = vlSelf->__PVT__way_valid_18_0;
        vlSelf->__PVT___GEN_54 = vlSelf->__PVT__way_valid_18_1;
    } else if ((0x11U == (IData)(vlSelf->__PVT__iTagChecker_io_way_valid_r))) {
        vlSelf->__PVT___GEN_22 = vlSelf->__PVT__way_valid_17_0;
        vlSelf->__PVT___GEN_54 = vlSelf->__PVT__way_valid_17_1;
    } else if ((0x10U == (IData)(vlSelf->__PVT__iTagChecker_io_way_valid_r))) {
        vlSelf->__PVT___GEN_22 = vlSelf->__PVT__way_valid_16_0;
        vlSelf->__PVT___GEN_54 = vlSelf->__PVT__way_valid_16_1;
    } else if ((0xfU == (IData)(vlSelf->__PVT__iTagChecker_io_way_valid_r))) {
        vlSelf->__PVT___GEN_22 = vlSelf->__PVT__way_valid_15_0;
        vlSelf->__PVT___GEN_54 = vlSelf->__PVT__way_valid_15_1;
    } else if ((0xeU == (IData)(vlSelf->__PVT__iTagChecker_io_way_valid_r))) {
        vlSelf->__PVT___GEN_22 = vlSelf->__PVT__way_valid_14_0;
        vlSelf->__PVT___GEN_54 = vlSelf->__PVT__way_valid_14_1;
    } else if ((0xdU == (IData)(vlSelf->__PVT__iTagChecker_io_way_valid_r))) {
        vlSelf->__PVT___GEN_22 = vlSelf->__PVT__way_valid_13_0;
        vlSelf->__PVT___GEN_54 = vlSelf->__PVT__way_valid_13_1;
    } else if ((0xcU == (IData)(vlSelf->__PVT__iTagChecker_io_way_valid_r))) {
        vlSelf->__PVT___GEN_22 = vlSelf->__PVT__way_valid_12_0;
        vlSelf->__PVT___GEN_54 = vlSelf->__PVT__way_valid_12_1;
    } else if ((0xbU == (IData)(vlSelf->__PVT__iTagChecker_io_way_valid_r))) {
        vlSelf->__PVT___GEN_22 = vlSelf->__PVT__way_valid_11_0;
        vlSelf->__PVT___GEN_54 = vlSelf->__PVT__way_valid_11_1;
    } else if ((0xaU == (IData)(vlSelf->__PVT__iTagChecker_io_way_valid_r))) {
        vlSelf->__PVT___GEN_22 = vlSelf->__PVT__way_valid_10_0;
        vlSelf->__PVT___GEN_54 = vlSelf->__PVT__way_valid_10_1;
    } else if ((9U == (IData)(vlSelf->__PVT__iTagChecker_io_way_valid_r))) {
        vlSelf->__PVT___GEN_22 = vlSelf->__PVT__way_valid_9_0;
        vlSelf->__PVT___GEN_54 = vlSelf->__PVT__way_valid_9_1;
    } else if ((8U == (IData)(vlSelf->__PVT__iTagChecker_io_way_valid_r))) {
        vlSelf->__PVT___GEN_22 = vlSelf->__PVT__way_valid_8_0;
        vlSelf->__PVT___GEN_54 = vlSelf->__PVT__way_valid_8_1;
    } else if ((7U == (IData)(vlSelf->__PVT__iTagChecker_io_way_valid_r))) {
        vlSelf->__PVT___GEN_22 = vlSelf->__PVT__way_valid_7_0;
        vlSelf->__PVT___GEN_54 = vlSelf->__PVT__way_valid_7_1;
    } else if ((6U == (IData)(vlSelf->__PVT__iTagChecker_io_way_valid_r))) {
        vlSelf->__PVT___GEN_22 = vlSelf->__PVT__way_valid_6_0;
        vlSelf->__PVT___GEN_54 = vlSelf->__PVT__way_valid_6_1;
    } else if ((5U == (IData)(vlSelf->__PVT__iTagChecker_io_way_valid_r))) {
        vlSelf->__PVT___GEN_22 = vlSelf->__PVT__way_valid_5_0;
        vlSelf->__PVT___GEN_54 = vlSelf->__PVT__way_valid_5_1;
    } else if ((4U == (IData)(vlSelf->__PVT__iTagChecker_io_way_valid_r))) {
        vlSelf->__PVT___GEN_22 = vlSelf->__PVT__way_valid_4_0;
        vlSelf->__PVT___GEN_54 = vlSelf->__PVT__way_valid_4_1;
    } else if ((3U == (IData)(vlSelf->__PVT__iTagChecker_io_way_valid_r))) {
        vlSelf->__PVT___GEN_22 = vlSelf->__PVT__way_valid_3_0;
        vlSelf->__PVT___GEN_54 = vlSelf->__PVT__way_valid_3_1;
    } else if ((2U == (IData)(vlSelf->__PVT__iTagChecker_io_way_valid_r))) {
        vlSelf->__PVT___GEN_22 = vlSelf->__PVT__way_valid_2_0;
        vlSelf->__PVT___GEN_54 = vlSelf->__PVT__way_valid_2_1;
    } else if ((1U == (IData)(vlSelf->__PVT__iTagChecker_io_way_valid_r))) {
        vlSelf->__PVT___GEN_22 = vlSelf->__PVT__way_valid_1_0;
        vlSelf->__PVT___GEN_54 = vlSelf->__PVT__way_valid_1_1;
    } else {
        vlSelf->__PVT___GEN_22 = vlSelf->__PVT__way_valid_0_0;
        vlSelf->__PVT___GEN_54 = vlSelf->__PVT__way_valid_0_1;
    }
    vlSelf->__PVT__tagBodyAccess__DOT__bypass_mask_bypass 
        = ((((IData)(vlSelf->__PVT__tagBodyAccess__DOT__bypass_mask_need_check) 
             & ((IData)(vlSelf->__PVT__tagBodyAccess__DOT__bypass_mask_raddr_reg) 
                == (IData)(vlSelf->__PVT__tagBodyAccess__DOT__bypass_mask_waddr_reg)))
             ? 3U : 0U) & (IData)(vlSelf->__PVT__tagBodyAccess__DOT__bypass_mask_bypass_REG));
    if ((0xdU == (0x1fU & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__icache__DOT__mshrAccess_io_missRspOut_bits_blockAddr))) {
        __PVT___GEN_78 = vlSelf->__PVT__way_valid_13_0;
        __PVT___GEN_110 = vlSelf->__PVT__way_valid_13_1;
    } else if ((0xcU == (0x1fU & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__icache__DOT__mshrAccess_io_missRspOut_bits_blockAddr))) {
        __PVT___GEN_78 = vlSelf->__PVT__way_valid_12_0;
        __PVT___GEN_110 = vlSelf->__PVT__way_valid_12_1;
    } else if ((0xbU == (0x1fU & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__icache__DOT__mshrAccess_io_missRspOut_bits_blockAddr))) {
        __PVT___GEN_78 = vlSelf->__PVT__way_valid_11_0;
        __PVT___GEN_110 = vlSelf->__PVT__way_valid_11_1;
    } else if ((0xaU == (0x1fU & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__icache__DOT__mshrAccess_io_missRspOut_bits_blockAddr))) {
        __PVT___GEN_78 = vlSelf->__PVT__way_valid_10_0;
        __PVT___GEN_110 = vlSelf->__PVT__way_valid_10_1;
    } else if ((9U == (0x1fU & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__icache__DOT__mshrAccess_io_missRspOut_bits_blockAddr))) {
        __PVT___GEN_78 = vlSelf->__PVT__way_valid_9_0;
        __PVT___GEN_110 = vlSelf->__PVT__way_valid_9_1;
    } else if ((8U == (0x1fU & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__icache__DOT__mshrAccess_io_missRspOut_bits_blockAddr))) {
        __PVT___GEN_78 = vlSelf->__PVT__way_valid_8_0;
        __PVT___GEN_110 = vlSelf->__PVT__way_valid_8_1;
    } else if ((7U == (0x1fU & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__icache__DOT__mshrAccess_io_missRspOut_bits_blockAddr))) {
        __PVT___GEN_78 = vlSelf->__PVT__way_valid_7_0;
        __PVT___GEN_110 = vlSelf->__PVT__way_valid_7_1;
    } else if ((6U == (0x1fU & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__icache__DOT__mshrAccess_io_missRspOut_bits_blockAddr))) {
        __PVT___GEN_78 = vlSelf->__PVT__way_valid_6_0;
        __PVT___GEN_110 = vlSelf->__PVT__way_valid_6_1;
    } else if ((5U == (0x1fU & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__icache__DOT__mshrAccess_io_missRspOut_bits_blockAddr))) {
        __PVT___GEN_78 = vlSelf->__PVT__way_valid_5_0;
        __PVT___GEN_110 = vlSelf->__PVT__way_valid_5_1;
    } else if ((4U == (0x1fU & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__icache__DOT__mshrAccess_io_missRspOut_bits_blockAddr))) {
        __PVT___GEN_78 = vlSelf->__PVT__way_valid_4_0;
        __PVT___GEN_110 = vlSelf->__PVT__way_valid_4_1;
    } else if ((3U == (0x1fU & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__icache__DOT__mshrAccess_io_missRspOut_bits_blockAddr))) {
        __PVT___GEN_78 = vlSelf->__PVT__way_valid_3_0;
        __PVT___GEN_110 = vlSelf->__PVT__way_valid_3_1;
    } else if ((2U == (0x1fU & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__icache__DOT__mshrAccess_io_missRspOut_bits_blockAddr))) {
        __PVT___GEN_78 = vlSelf->__PVT__way_valid_2_0;
        __PVT___GEN_110 = vlSelf->__PVT__way_valid_2_1;
    } else if ((1U == (0x1fU & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__icache__DOT__mshrAccess_io_missRspOut_bits_blockAddr))) {
        __PVT___GEN_78 = vlSelf->__PVT__way_valid_1_0;
        __PVT___GEN_110 = vlSelf->__PVT__way_valid_1_1;
    } else {
        __PVT___GEN_78 = vlSelf->__PVT__way_valid_0_0;
        __PVT___GEN_110 = vlSelf->__PVT__way_valid_0_1;
    }
    __PVT__iTagChecker__DOT___io_waymask_T_3 = (((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__icache__DOT__pipeReqAddr_st1 
                                                  >> 9U) 
                                                 == 
                                                 (0x7fffffU 
                                                  & ((IData)(vlSelf->__PVT__tagBodyAccess__DOT__rdata_REG)
                                                      ? 
                                                     ((2U 
                                                       & (IData)(vlSelf->__PVT__tagBodyAccess__DOT__bypass_mask_bypass))
                                                       ? (IData)(vlSelf->__PVT__tagBodyAccess__DOT__bypass_wdata_lfsr_1)
                                                       : vlSelf->__PVT__tagBodyAccess__DOT__array_1_raw_rdata_data)
                                                      : vlSelf->__PVT__tagBodyAccess__DOT__rdata_r_1))) 
                                                & ((0x1fU 
                                                    == (IData)(vlSelf->__PVT__iTagChecker_io_way_valid_r))
                                                    ? (IData)(vlSelf->__PVT__way_valid_31_1)
                                                    : 
                                                   ((0x1eU 
                                                     == (IData)(vlSelf->__PVT__iTagChecker_io_way_valid_r))
                                                     ? (IData)(vlSelf->__PVT__way_valid_30_1)
                                                     : 
                                                    ((0x1dU 
                                                      == (IData)(vlSelf->__PVT__iTagChecker_io_way_valid_r))
                                                      ? (IData)(vlSelf->__PVT__way_valid_29_1)
                                                      : 
                                                     ((0x1cU 
                                                       == (IData)(vlSelf->__PVT__iTagChecker_io_way_valid_r))
                                                       ? (IData)(vlSelf->__PVT__way_valid_28_1)
                                                       : 
                                                      ((0x1bU 
                                                        == (IData)(vlSelf->__PVT__iTagChecker_io_way_valid_r))
                                                        ? (IData)(vlSelf->__PVT__way_valid_27_1)
                                                        : 
                                                       ((0x1aU 
                                                         == (IData)(vlSelf->__PVT__iTagChecker_io_way_valid_r))
                                                         ? (IData)(vlSelf->__PVT__way_valid_26_1)
                                                         : 
                                                        ((0x19U 
                                                          == (IData)(vlSelf->__PVT__iTagChecker_io_way_valid_r))
                                                          ? (IData)(vlSelf->__PVT__way_valid_25_1)
                                                          : 
                                                         ((0x18U 
                                                           == (IData)(vlSelf->__PVT__iTagChecker_io_way_valid_r))
                                                           ? (IData)(vlSelf->__PVT__way_valid_24_1)
                                                           : 
                                                          ((0x17U 
                                                            == (IData)(vlSelf->__PVT__iTagChecker_io_way_valid_r))
                                                            ? (IData)(vlSelf->__PVT__way_valid_23_1)
                                                            : 
                                                           ((0x16U 
                                                             == (IData)(vlSelf->__PVT__iTagChecker_io_way_valid_r))
                                                             ? (IData)(vlSelf->__PVT__way_valid_22_1)
                                                             : (IData)(vlSelf->__PVT___GEN_54))))))))))));
    vlSelf->__PVT__iTagChecker__DOT___io_waymask_T_1 
        = (((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__icache__DOT__pipeReqAddr_st1 
             >> 9U) == (0x7fffffU & ((IData)(vlSelf->__PVT__tagBodyAccess__DOT__rdata_REG)
                                      ? ((1U & (IData)(vlSelf->__PVT__tagBodyAccess__DOT__bypass_mask_bypass))
                                          ? (IData)(vlSelf->__PVT__tagBodyAccess__DOT__bypass_wdata_lfsr)
                                          : vlSelf->__PVT__tagBodyAccess__DOT__array_0_raw_rdata_data)
                                      : vlSelf->__PVT__tagBodyAccess__DOT__rdata_r_0))) 
           & ((0x1fU == (IData)(vlSelf->__PVT__iTagChecker_io_way_valid_r))
               ? (IData)(vlSelf->__PVT__way_valid_31_0)
               : ((0x1eU == (IData)(vlSelf->__PVT__iTagChecker_io_way_valid_r))
                   ? (IData)(vlSelf->__PVT__way_valid_30_0)
                   : ((0x1dU == (IData)(vlSelf->__PVT__iTagChecker_io_way_valid_r))
                       ? (IData)(vlSelf->__PVT__way_valid_29_0)
                       : ((0x1cU == (IData)(vlSelf->__PVT__iTagChecker_io_way_valid_r))
                           ? (IData)(vlSelf->__PVT__way_valid_28_0)
                           : ((0x1bU == (IData)(vlSelf->__PVT__iTagChecker_io_way_valid_r))
                               ? (IData)(vlSelf->__PVT__way_valid_27_0)
                               : ((0x1aU == (IData)(vlSelf->__PVT__iTagChecker_io_way_valid_r))
                                   ? (IData)(vlSelf->__PVT__way_valid_26_0)
                                   : ((0x19U == (IData)(vlSelf->__PVT__iTagChecker_io_way_valid_r))
                                       ? (IData)(vlSelf->__PVT__way_valid_25_0)
                                       : ((0x18U == (IData)(vlSelf->__PVT__iTagChecker_io_way_valid_r))
                                           ? (IData)(vlSelf->__PVT__way_valid_24_0)
                                           : ((0x17U 
                                               == (IData)(vlSelf->__PVT__iTagChecker_io_way_valid_r))
                                               ? (IData)(vlSelf->__PVT__way_valid_23_0)
                                               : ((0x16U 
                                                   == (IData)(vlSelf->__PVT__iTagChecker_io_way_valid_r))
                                                   ? (IData)(vlSelf->__PVT__way_valid_22_0)
                                                   : (IData)(vlSelf->__PVT___GEN_22))))))))))));
    if ((0x1aU == (0x1fU & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__icache__DOT__mshrAccess_io_missRspOut_bits_blockAddr))) {
        __PVT___GEN_91 = vlSelf->__PVT__way_valid_26_0;
        __PVT___GEN_123 = vlSelf->__PVT__way_valid_26_1;
    } else if ((0x19U == (0x1fU & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__icache__DOT__mshrAccess_io_missRspOut_bits_blockAddr))) {
        __PVT___GEN_91 = vlSelf->__PVT__way_valid_25_0;
        __PVT___GEN_123 = vlSelf->__PVT__way_valid_25_1;
    } else if ((0x18U == (0x1fU & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__icache__DOT__mshrAccess_io_missRspOut_bits_blockAddr))) {
        __PVT___GEN_91 = vlSelf->__PVT__way_valid_24_0;
        __PVT___GEN_123 = vlSelf->__PVT__way_valid_24_1;
    } else if ((0x17U == (0x1fU & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__icache__DOT__mshrAccess_io_missRspOut_bits_blockAddr))) {
        __PVT___GEN_91 = vlSelf->__PVT__way_valid_23_0;
        __PVT___GEN_123 = vlSelf->__PVT__way_valid_23_1;
    } else if ((0x16U == (0x1fU & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__icache__DOT__mshrAccess_io_missRspOut_bits_blockAddr))) {
        __PVT___GEN_91 = vlSelf->__PVT__way_valid_22_0;
        __PVT___GEN_123 = vlSelf->__PVT__way_valid_22_1;
    } else if ((0x15U == (0x1fU & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__icache__DOT__mshrAccess_io_missRspOut_bits_blockAddr))) {
        __PVT___GEN_91 = vlSelf->__PVT__way_valid_21_0;
        __PVT___GEN_123 = vlSelf->__PVT__way_valid_21_1;
    } else if ((0x14U == (0x1fU & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__icache__DOT__mshrAccess_io_missRspOut_bits_blockAddr))) {
        __PVT___GEN_91 = vlSelf->__PVT__way_valid_20_0;
        __PVT___GEN_123 = vlSelf->__PVT__way_valid_20_1;
    } else if ((0x13U == (0x1fU & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__icache__DOT__mshrAccess_io_missRspOut_bits_blockAddr))) {
        __PVT___GEN_91 = vlSelf->__PVT__way_valid_19_0;
        __PVT___GEN_123 = vlSelf->__PVT__way_valid_19_1;
    } else if ((0x12U == (0x1fU & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__icache__DOT__mshrAccess_io_missRspOut_bits_blockAddr))) {
        __PVT___GEN_91 = vlSelf->__PVT__way_valid_18_0;
        __PVT___GEN_123 = vlSelf->__PVT__way_valid_18_1;
    } else if ((0x11U == (0x1fU & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__icache__DOT__mshrAccess_io_missRspOut_bits_blockAddr))) {
        __PVT___GEN_91 = vlSelf->__PVT__way_valid_17_0;
        __PVT___GEN_123 = vlSelf->__PVT__way_valid_17_1;
    } else if ((0x10U == (0x1fU & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__icache__DOT__mshrAccess_io_missRspOut_bits_blockAddr))) {
        __PVT___GEN_91 = vlSelf->__PVT__way_valid_16_0;
        __PVT___GEN_123 = vlSelf->__PVT__way_valid_16_1;
    } else if ((0xfU == (0x1fU & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__icache__DOT__mshrAccess_io_missRspOut_bits_blockAddr))) {
        __PVT___GEN_91 = vlSelf->__PVT__way_valid_15_0;
        __PVT___GEN_123 = vlSelf->__PVT__way_valid_15_1;
    } else if ((0xeU == (0x1fU & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__icache__DOT__mshrAccess_io_missRspOut_bits_blockAddr))) {
        __PVT___GEN_91 = vlSelf->__PVT__way_valid_14_0;
        __PVT___GEN_123 = vlSelf->__PVT__way_valid_14_1;
    } else {
        __PVT___GEN_91 = __PVT___GEN_78;
        __PVT___GEN_123 = __PVT___GEN_110;
    }
    vlSelf->__PVT__io_waymaskHit_st1 = (((IData)(__PVT__iTagChecker__DOT___io_waymask_T_3) 
                                         << 1U) | (IData)(vlSelf->__PVT__iTagChecker__DOT___io_waymask_T_1));
    __PVT__Replacement__DOT___io_waymask_T_4 = ((0x1fU 
                                                 == 
                                                 (0x1fU 
                                                  & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__icache__DOT__mshrAccess_io_missRspOut_bits_blockAddr))
                                                 ? (IData)(vlSelf->__PVT__way_valid_31_1)
                                                 : 
                                                ((0x1eU 
                                                  == 
                                                  (0x1fU 
                                                   & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__icache__DOT__mshrAccess_io_missRspOut_bits_blockAddr))
                                                  ? (IData)(vlSelf->__PVT__way_valid_30_1)
                                                  : 
                                                 ((0x1dU 
                                                   == 
                                                   (0x1fU 
                                                    & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__icache__DOT__mshrAccess_io_missRspOut_bits_blockAddr))
                                                   ? (IData)(vlSelf->__PVT__way_valid_29_1)
                                                   : 
                                                  ((0x1cU 
                                                    == 
                                                    (0x1fU 
                                                     & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__icache__DOT__mshrAccess_io_missRspOut_bits_blockAddr))
                                                    ? (IData)(vlSelf->__PVT__way_valid_28_1)
                                                    : 
                                                   ((0x1bU 
                                                     == 
                                                     (0x1fU 
                                                      & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__icache__DOT__mshrAccess_io_missRspOut_bits_blockAddr))
                                                     ? (IData)(vlSelf->__PVT__way_valid_27_1)
                                                     : (IData)(__PVT___GEN_123))))));
    vlSelf->__PVT__Replacement_io_validbits_of_set 
        = ((((0x1fU == (0x1fU & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__icache__DOT__mshrAccess_io_missRspOut_bits_blockAddr))
              ? (IData)(vlSelf->__PVT__way_valid_31_0)
              : ((0x1eU == (0x1fU & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__icache__DOT__mshrAccess_io_missRspOut_bits_blockAddr))
                  ? (IData)(vlSelf->__PVT__way_valid_30_0)
                  : ((0x1dU == (0x1fU & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__icache__DOT__mshrAccess_io_missRspOut_bits_blockAddr))
                      ? (IData)(vlSelf->__PVT__way_valid_29_0)
                      : ((0x1cU == (0x1fU & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__icache__DOT__mshrAccess_io_missRspOut_bits_blockAddr))
                          ? (IData)(vlSelf->__PVT__way_valid_28_0)
                          : ((0x1bU == (0x1fU & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__icache__DOT__mshrAccess_io_missRspOut_bits_blockAddr))
                              ? (IData)(vlSelf->__PVT__way_valid_27_0)
                              : (IData)(__PVT___GEN_91)))))) 
            << 1U) | (IData)(__PVT__Replacement__DOT___io_waymask_T_4));
    vlSelf->__PVT__io_waymaskReplacement = (3U & ((3U 
                                                   == (IData)(vlSelf->__PVT__Replacement_io_validbits_of_set))
                                                   ? (IData)(vlSelf->__PVT__Replacement__DOT__victim_1Hidx)
                                                   : 
                                                  ((IData)(1U) 
                                                   << (IData)(__PVT__Replacement__DOT___io_waymask_T_4))));
    vlSelf->__PVT___GEN_129 = (((~ ((IData)(vlSelf->__PVT__io_waymaskReplacement) 
                                    >> 1U)) & (0U == 
                                               (0x1fU 
                                                & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__icache__DOT__mshrAccess_io_missRspOut_bits_blockAddr))) 
                               | (IData)(vlSelf->__PVT__way_valid_0_0));
    vlSelf->__PVT___GEN_130 = (((0U == (0x1fU & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__icache__DOT__mshrAccess_io_missRspOut_bits_blockAddr)) 
                                & ((IData)(vlSelf->__PVT__io_waymaskReplacement) 
                                   >> 1U)) | (IData)(vlSelf->__PVT__way_valid_0_1));
    vlSelf->__PVT___GEN_131 = (((~ ((IData)(vlSelf->__PVT__io_waymaskReplacement) 
                                    >> 1U)) & (1U == 
                                               (0x1fU 
                                                & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__icache__DOT__mshrAccess_io_missRspOut_bits_blockAddr))) 
                               | (IData)(vlSelf->__PVT__way_valid_1_0));
    vlSelf->__PVT___GEN_132 = (((1U == (0x1fU & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__icache__DOT__mshrAccess_io_missRspOut_bits_blockAddr)) 
                                & ((IData)(vlSelf->__PVT__io_waymaskReplacement) 
                                   >> 1U)) | (IData)(vlSelf->__PVT__way_valid_1_1));
    vlSelf->__PVT___GEN_133 = (((~ ((IData)(vlSelf->__PVT__io_waymaskReplacement) 
                                    >> 1U)) & (2U == 
                                               (0x1fU 
                                                & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__icache__DOT__mshrAccess_io_missRspOut_bits_blockAddr))) 
                               | (IData)(vlSelf->__PVT__way_valid_2_0));
    vlSelf->__PVT___GEN_134 = (((2U == (0x1fU & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__icache__DOT__mshrAccess_io_missRspOut_bits_blockAddr)) 
                                & ((IData)(vlSelf->__PVT__io_waymaskReplacement) 
                                   >> 1U)) | (IData)(vlSelf->__PVT__way_valid_2_1));
    vlSelf->__PVT___GEN_135 = (((~ ((IData)(vlSelf->__PVT__io_waymaskReplacement) 
                                    >> 1U)) & (3U == 
                                               (0x1fU 
                                                & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__icache__DOT__mshrAccess_io_missRspOut_bits_blockAddr))) 
                               | (IData)(vlSelf->__PVT__way_valid_3_0));
    vlSelf->__PVT___GEN_136 = (((3U == (0x1fU & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__icache__DOT__mshrAccess_io_missRspOut_bits_blockAddr)) 
                                & ((IData)(vlSelf->__PVT__io_waymaskReplacement) 
                                   >> 1U)) | (IData)(vlSelf->__PVT__way_valid_3_1));
    vlSelf->__PVT___GEN_137 = (((~ ((IData)(vlSelf->__PVT__io_waymaskReplacement) 
                                    >> 1U)) & (4U == 
                                               (0x1fU 
                                                & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__icache__DOT__mshrAccess_io_missRspOut_bits_blockAddr))) 
                               | (IData)(vlSelf->__PVT__way_valid_4_0));
    vlSelf->__PVT___GEN_138 = (((4U == (0x1fU & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__icache__DOT__mshrAccess_io_missRspOut_bits_blockAddr)) 
                                & ((IData)(vlSelf->__PVT__io_waymaskReplacement) 
                                   >> 1U)) | (IData)(vlSelf->__PVT__way_valid_4_1));
    vlSelf->__PVT___GEN_139 = (((~ ((IData)(vlSelf->__PVT__io_waymaskReplacement) 
                                    >> 1U)) & (5U == 
                                               (0x1fU 
                                                & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__icache__DOT__mshrAccess_io_missRspOut_bits_blockAddr))) 
                               | (IData)(vlSelf->__PVT__way_valid_5_0));
    vlSelf->__PVT___GEN_140 = (((5U == (0x1fU & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__icache__DOT__mshrAccess_io_missRspOut_bits_blockAddr)) 
                                & ((IData)(vlSelf->__PVT__io_waymaskReplacement) 
                                   >> 1U)) | (IData)(vlSelf->__PVT__way_valid_5_1));
    vlSelf->__PVT___GEN_141 = (((~ ((IData)(vlSelf->__PVT__io_waymaskReplacement) 
                                    >> 1U)) & (6U == 
                                               (0x1fU 
                                                & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__icache__DOT__mshrAccess_io_missRspOut_bits_blockAddr))) 
                               | (IData)(vlSelf->__PVT__way_valid_6_0));
    vlSelf->__PVT___GEN_142 = (((6U == (0x1fU & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__icache__DOT__mshrAccess_io_missRspOut_bits_blockAddr)) 
                                & ((IData)(vlSelf->__PVT__io_waymaskReplacement) 
                                   >> 1U)) | (IData)(vlSelf->__PVT__way_valid_6_1));
    vlSelf->__PVT___GEN_143 = (((~ ((IData)(vlSelf->__PVT__io_waymaskReplacement) 
                                    >> 1U)) & (7U == 
                                               (0x1fU 
                                                & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__icache__DOT__mshrAccess_io_missRspOut_bits_blockAddr))) 
                               | (IData)(vlSelf->__PVT__way_valid_7_0));
    vlSelf->__PVT___GEN_144 = (((7U == (0x1fU & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__icache__DOT__mshrAccess_io_missRspOut_bits_blockAddr)) 
                                & ((IData)(vlSelf->__PVT__io_waymaskReplacement) 
                                   >> 1U)) | (IData)(vlSelf->__PVT__way_valid_7_1));
    vlSelf->__PVT___GEN_145 = (((~ ((IData)(vlSelf->__PVT__io_waymaskReplacement) 
                                    >> 1U)) & (8U == 
                                               (0x1fU 
                                                & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__icache__DOT__mshrAccess_io_missRspOut_bits_blockAddr))) 
                               | (IData)(vlSelf->__PVT__way_valid_8_0));
    vlSelf->__PVT___GEN_146 = (((8U == (0x1fU & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__icache__DOT__mshrAccess_io_missRspOut_bits_blockAddr)) 
                                & ((IData)(vlSelf->__PVT__io_waymaskReplacement) 
                                   >> 1U)) | (IData)(vlSelf->__PVT__way_valid_8_1));
    vlSelf->__PVT___GEN_147 = (((~ ((IData)(vlSelf->__PVT__io_waymaskReplacement) 
                                    >> 1U)) & (9U == 
                                               (0x1fU 
                                                & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__icache__DOT__mshrAccess_io_missRspOut_bits_blockAddr))) 
                               | (IData)(vlSelf->__PVT__way_valid_9_0));
    vlSelf->__PVT___GEN_148 = (((9U == (0x1fU & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__icache__DOT__mshrAccess_io_missRspOut_bits_blockAddr)) 
                                & ((IData)(vlSelf->__PVT__io_waymaskReplacement) 
                                   >> 1U)) | (IData)(vlSelf->__PVT__way_valid_9_1));
    vlSelf->__PVT___GEN_149 = (((~ ((IData)(vlSelf->__PVT__io_waymaskReplacement) 
                                    >> 1U)) & (0xaU 
                                               == (0x1fU 
                                                   & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__icache__DOT__mshrAccess_io_missRspOut_bits_blockAddr))) 
                               | (IData)(vlSelf->__PVT__way_valid_10_0));
    vlSelf->__PVT___GEN_150 = (((0xaU == (0x1fU & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__icache__DOT__mshrAccess_io_missRspOut_bits_blockAddr)) 
                                & ((IData)(vlSelf->__PVT__io_waymaskReplacement) 
                                   >> 1U)) | (IData)(vlSelf->__PVT__way_valid_10_1));
    vlSelf->__PVT___GEN_151 = (((~ ((IData)(vlSelf->__PVT__io_waymaskReplacement) 
                                    >> 1U)) & (0xbU 
                                               == (0x1fU 
                                                   & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__icache__DOT__mshrAccess_io_missRspOut_bits_blockAddr))) 
                               | (IData)(vlSelf->__PVT__way_valid_11_0));
    vlSelf->__PVT___GEN_152 = (((0xbU == (0x1fU & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__icache__DOT__mshrAccess_io_missRspOut_bits_blockAddr)) 
                                & ((IData)(vlSelf->__PVT__io_waymaskReplacement) 
                                   >> 1U)) | (IData)(vlSelf->__PVT__way_valid_11_1));
    vlSelf->__PVT___GEN_153 = (((~ ((IData)(vlSelf->__PVT__io_waymaskReplacement) 
                                    >> 1U)) & (0xcU 
                                               == (0x1fU 
                                                   & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__icache__DOT__mshrAccess_io_missRspOut_bits_blockAddr))) 
                               | (IData)(vlSelf->__PVT__way_valid_12_0));
    vlSelf->__PVT___GEN_154 = (((0xcU == (0x1fU & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__icache__DOT__mshrAccess_io_missRspOut_bits_blockAddr)) 
                                & ((IData)(vlSelf->__PVT__io_waymaskReplacement) 
                                   >> 1U)) | (IData)(vlSelf->__PVT__way_valid_12_1));
    vlSelf->__PVT___GEN_155 = (((~ ((IData)(vlSelf->__PVT__io_waymaskReplacement) 
                                    >> 1U)) & (0xdU 
                                               == (0x1fU 
                                                   & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__icache__DOT__mshrAccess_io_missRspOut_bits_blockAddr))) 
                               | (IData)(vlSelf->__PVT__way_valid_13_0));
    vlSelf->__PVT___GEN_156 = (((0xdU == (0x1fU & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__icache__DOT__mshrAccess_io_missRspOut_bits_blockAddr)) 
                                & ((IData)(vlSelf->__PVT__io_waymaskReplacement) 
                                   >> 1U)) | (IData)(vlSelf->__PVT__way_valid_13_1));
    vlSelf->__PVT___GEN_157 = (((~ ((IData)(vlSelf->__PVT__io_waymaskReplacement) 
                                    >> 1U)) & (0xeU 
                                               == (0x1fU 
                                                   & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__icache__DOT__mshrAccess_io_missRspOut_bits_blockAddr))) 
                               | (IData)(vlSelf->__PVT__way_valid_14_0));
    vlSelf->__PVT___GEN_158 = (((0xeU == (0x1fU & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__icache__DOT__mshrAccess_io_missRspOut_bits_blockAddr)) 
                                & ((IData)(vlSelf->__PVT__io_waymaskReplacement) 
                                   >> 1U)) | (IData)(vlSelf->__PVT__way_valid_14_1));
    vlSelf->__PVT___GEN_159 = (((~ ((IData)(vlSelf->__PVT__io_waymaskReplacement) 
                                    >> 1U)) & (0xfU 
                                               == (0x1fU 
                                                   & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__icache__DOT__mshrAccess_io_missRspOut_bits_blockAddr))) 
                               | (IData)(vlSelf->__PVT__way_valid_15_0));
    vlSelf->__PVT___GEN_160 = (((0xfU == (0x1fU & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__icache__DOT__mshrAccess_io_missRspOut_bits_blockAddr)) 
                                & ((IData)(vlSelf->__PVT__io_waymaskReplacement) 
                                   >> 1U)) | (IData)(vlSelf->__PVT__way_valid_15_1));
    vlSelf->__PVT___GEN_161 = (((~ ((IData)(vlSelf->__PVT__io_waymaskReplacement) 
                                    >> 1U)) & (0x10U 
                                               == (0x1fU 
                                                   & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__icache__DOT__mshrAccess_io_missRspOut_bits_blockAddr))) 
                               | (IData)(vlSelf->__PVT__way_valid_16_0));
    vlSelf->__PVT___GEN_162 = (((0x10U == (0x1fU & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__icache__DOT__mshrAccess_io_missRspOut_bits_blockAddr)) 
                                & ((IData)(vlSelf->__PVT__io_waymaskReplacement) 
                                   >> 1U)) | (IData)(vlSelf->__PVT__way_valid_16_1));
    vlSelf->__PVT___GEN_163 = (((~ ((IData)(vlSelf->__PVT__io_waymaskReplacement) 
                                    >> 1U)) & (0x11U 
                                               == (0x1fU 
                                                   & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__icache__DOT__mshrAccess_io_missRspOut_bits_blockAddr))) 
                               | (IData)(vlSelf->__PVT__way_valid_17_0));
    vlSelf->__PVT___GEN_164 = (((0x11U == (0x1fU & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__icache__DOT__mshrAccess_io_missRspOut_bits_blockAddr)) 
                                & ((IData)(vlSelf->__PVT__io_waymaskReplacement) 
                                   >> 1U)) | (IData)(vlSelf->__PVT__way_valid_17_1));
    vlSelf->__PVT___GEN_165 = (((~ ((IData)(vlSelf->__PVT__io_waymaskReplacement) 
                                    >> 1U)) & (0x12U 
                                               == (0x1fU 
                                                   & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__icache__DOT__mshrAccess_io_missRspOut_bits_blockAddr))) 
                               | (IData)(vlSelf->__PVT__way_valid_18_0));
    vlSelf->__PVT___GEN_166 = (((0x12U == (0x1fU & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__icache__DOT__mshrAccess_io_missRspOut_bits_blockAddr)) 
                                & ((IData)(vlSelf->__PVT__io_waymaskReplacement) 
                                   >> 1U)) | (IData)(vlSelf->__PVT__way_valid_18_1));
    vlSelf->__PVT___GEN_167 = (((~ ((IData)(vlSelf->__PVT__io_waymaskReplacement) 
                                    >> 1U)) & (0x13U 
                                               == (0x1fU 
                                                   & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__icache__DOT__mshrAccess_io_missRspOut_bits_blockAddr))) 
                               | (IData)(vlSelf->__PVT__way_valid_19_0));
    vlSelf->__PVT___GEN_168 = (((0x13U == (0x1fU & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__icache__DOT__mshrAccess_io_missRspOut_bits_blockAddr)) 
                                & ((IData)(vlSelf->__PVT__io_waymaskReplacement) 
                                   >> 1U)) | (IData)(vlSelf->__PVT__way_valid_19_1));
    vlSelf->__PVT___GEN_169 = (((~ ((IData)(vlSelf->__PVT__io_waymaskReplacement) 
                                    >> 1U)) & (0x14U 
                                               == (0x1fU 
                                                   & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__icache__DOT__mshrAccess_io_missRspOut_bits_blockAddr))) 
                               | (IData)(vlSelf->__PVT__way_valid_20_0));
    vlSelf->__PVT___GEN_170 = (((0x14U == (0x1fU & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__icache__DOT__mshrAccess_io_missRspOut_bits_blockAddr)) 
                                & ((IData)(vlSelf->__PVT__io_waymaskReplacement) 
                                   >> 1U)) | (IData)(vlSelf->__PVT__way_valid_20_1));
    vlSelf->__PVT___GEN_171 = (((~ ((IData)(vlSelf->__PVT__io_waymaskReplacement) 
                                    >> 1U)) & (0x15U 
                                               == (0x1fU 
                                                   & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__icache__DOT__mshrAccess_io_missRspOut_bits_blockAddr))) 
                               | (IData)(vlSelf->__PVT__way_valid_21_0));
    vlSelf->__PVT___GEN_172 = (((0x15U == (0x1fU & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__icache__DOT__mshrAccess_io_missRspOut_bits_blockAddr)) 
                                & ((IData)(vlSelf->__PVT__io_waymaskReplacement) 
                                   >> 1U)) | (IData)(vlSelf->__PVT__way_valid_21_1));
    vlSelf->__PVT___GEN_173 = (((~ ((IData)(vlSelf->__PVT__io_waymaskReplacement) 
                                    >> 1U)) & (0x16U 
                                               == (0x1fU 
                                                   & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__icache__DOT__mshrAccess_io_missRspOut_bits_blockAddr))) 
                               | (IData)(vlSelf->__PVT__way_valid_22_0));
    vlSelf->__PVT___GEN_174 = (((0x16U == (0x1fU & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__icache__DOT__mshrAccess_io_missRspOut_bits_blockAddr)) 
                                & ((IData)(vlSelf->__PVT__io_waymaskReplacement) 
                                   >> 1U)) | (IData)(vlSelf->__PVT__way_valid_22_1));
    vlSelf->__PVT___GEN_175 = (((~ ((IData)(vlSelf->__PVT__io_waymaskReplacement) 
                                    >> 1U)) & (0x17U 
                                               == (0x1fU 
                                                   & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__icache__DOT__mshrAccess_io_missRspOut_bits_blockAddr))) 
                               | (IData)(vlSelf->__PVT__way_valid_23_0));
    vlSelf->__PVT___GEN_176 = (((0x17U == (0x1fU & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__icache__DOT__mshrAccess_io_missRspOut_bits_blockAddr)) 
                                & ((IData)(vlSelf->__PVT__io_waymaskReplacement) 
                                   >> 1U)) | (IData)(vlSelf->__PVT__way_valid_23_1));
    vlSelf->__PVT___GEN_177 = (((~ ((IData)(vlSelf->__PVT__io_waymaskReplacement) 
                                    >> 1U)) & (0x18U 
                                               == (0x1fU 
                                                   & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__icache__DOT__mshrAccess_io_missRspOut_bits_blockAddr))) 
                               | (IData)(vlSelf->__PVT__way_valid_24_0));
    vlSelf->__PVT___GEN_178 = (((0x18U == (0x1fU & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__icache__DOT__mshrAccess_io_missRspOut_bits_blockAddr)) 
                                & ((IData)(vlSelf->__PVT__io_waymaskReplacement) 
                                   >> 1U)) | (IData)(vlSelf->__PVT__way_valid_24_1));
    vlSelf->__PVT___GEN_179 = (((~ ((IData)(vlSelf->__PVT__io_waymaskReplacement) 
                                    >> 1U)) & (0x19U 
                                               == (0x1fU 
                                                   & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__icache__DOT__mshrAccess_io_missRspOut_bits_blockAddr))) 
                               | (IData)(vlSelf->__PVT__way_valid_25_0));
    vlSelf->__PVT___GEN_180 = (((0x19U == (0x1fU & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__icache__DOT__mshrAccess_io_missRspOut_bits_blockAddr)) 
                                & ((IData)(vlSelf->__PVT__io_waymaskReplacement) 
                                   >> 1U)) | (IData)(vlSelf->__PVT__way_valid_25_1));
    vlSelf->__PVT___GEN_181 = (((~ ((IData)(vlSelf->__PVT__io_waymaskReplacement) 
                                    >> 1U)) & (0x1aU 
                                               == (0x1fU 
                                                   & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__icache__DOT__mshrAccess_io_missRspOut_bits_blockAddr))) 
                               | (IData)(vlSelf->__PVT__way_valid_26_0));
    vlSelf->__PVT___GEN_182 = (((0x1aU == (0x1fU & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__icache__DOT__mshrAccess_io_missRspOut_bits_blockAddr)) 
                                & ((IData)(vlSelf->__PVT__io_waymaskReplacement) 
                                   >> 1U)) | (IData)(vlSelf->__PVT__way_valid_26_1));
    vlSelf->__PVT___GEN_183 = (((~ ((IData)(vlSelf->__PVT__io_waymaskReplacement) 
                                    >> 1U)) & (0x1bU 
                                               == (0x1fU 
                                                   & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__icache__DOT__mshrAccess_io_missRspOut_bits_blockAddr))) 
                               | (IData)(vlSelf->__PVT__way_valid_27_0));
    vlSelf->__PVT___GEN_184 = (((0x1bU == (0x1fU & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__icache__DOT__mshrAccess_io_missRspOut_bits_blockAddr)) 
                                & ((IData)(vlSelf->__PVT__io_waymaskReplacement) 
                                   >> 1U)) | (IData)(vlSelf->__PVT__way_valid_27_1));
    vlSelf->__PVT___GEN_185 = (((~ ((IData)(vlSelf->__PVT__io_waymaskReplacement) 
                                    >> 1U)) & (0x1cU 
                                               == (0x1fU 
                                                   & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__icache__DOT__mshrAccess_io_missRspOut_bits_blockAddr))) 
                               | (IData)(vlSelf->__PVT__way_valid_28_0));
    vlSelf->__PVT___GEN_186 = (((0x1cU == (0x1fU & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__icache__DOT__mshrAccess_io_missRspOut_bits_blockAddr)) 
                                & ((IData)(vlSelf->__PVT__io_waymaskReplacement) 
                                   >> 1U)) | (IData)(vlSelf->__PVT__way_valid_28_1));
    vlSelf->__PVT___GEN_187 = (((~ ((IData)(vlSelf->__PVT__io_waymaskReplacement) 
                                    >> 1U)) & (0x1dU 
                                               == (0x1fU 
                                                   & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__icache__DOT__mshrAccess_io_missRspOut_bits_blockAddr))) 
                               | (IData)(vlSelf->__PVT__way_valid_29_0));
    vlSelf->__PVT___GEN_188 = (((0x1dU == (0x1fU & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__icache__DOT__mshrAccess_io_missRspOut_bits_blockAddr)) 
                                & ((IData)(vlSelf->__PVT__io_waymaskReplacement) 
                                   >> 1U)) | (IData)(vlSelf->__PVT__way_valid_29_1));
    vlSelf->__PVT___GEN_189 = (((~ ((IData)(vlSelf->__PVT__io_waymaskReplacement) 
                                    >> 1U)) & (0x1eU 
                                               == (0x1fU 
                                                   & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__icache__DOT__mshrAccess_io_missRspOut_bits_blockAddr))) 
                               | (IData)(vlSelf->__PVT__way_valid_30_0));
    vlSelf->__PVT___GEN_190 = (((0x1eU == (0x1fU & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__icache__DOT__mshrAccess_io_missRspOut_bits_blockAddr)) 
                                & ((IData)(vlSelf->__PVT__io_waymaskReplacement) 
                                   >> 1U)) | (IData)(vlSelf->__PVT__way_valid_30_1));
    vlSelf->__PVT___GEN_191 = (((~ ((IData)(vlSelf->__PVT__io_waymaskReplacement) 
                                    >> 1U)) & (0x1fU 
                                               == (0x1fU 
                                                   & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__icache__DOT__mshrAccess_io_missRspOut_bits_blockAddr))) 
                               | (IData)(vlSelf->__PVT__way_valid_31_0));
    vlSelf->__PVT___GEN_192 = (((0x1fU == (0x1fU & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__icache__DOT__mshrAccess_io_missRspOut_bits_blockAddr)) 
                                & ((IData)(vlSelf->__PVT__io_waymaskReplacement) 
                                   >> 1U)) | (IData)(vlSelf->__PVT__way_valid_31_1));
}

VL_ATTR_COLD void VVentus_L1TagAccess___stl_sequent__TOP__GPGPU_top__DOT__SM_wrapper__dcache__DOT__TagAccess__0(VVentus_L1TagAccess* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VVentus__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VVentus_L1TagAccess___stl_sequent__TOP__GPGPU_top__DOT__SM_wrapper__dcache__DOT__TagAccess__0\n"); );
    // Init
    CData/*0:0*/ __PVT___GEN_78;
    CData/*0:0*/ __PVT___GEN_91;
    CData/*0:0*/ __PVT___GEN_110;
    CData/*0:0*/ __PVT___GEN_123;
    CData/*0:0*/ __PVT__iTagChecker__DOT___io_waymask_T_3;
    CData/*0:0*/ __PVT__Replacement__DOT___io_waymask_T_4;
    // Body
    vlSelf->__PVT__tagBodyAccess__DOT___bypass_wdata_lfsr_T_2 
        = (((QData)((IData)((1U & VL_REDXOR_8((0x1bULL 
                                               & vlSelf->__PVT__tagBodyAccess__DOT__bypass_wdata_lfsr))))) 
            << 0x3fU) | (vlSelf->__PVT__tagBodyAccess__DOT__bypass_wdata_lfsr 
                         >> 1U));
    vlSelf->__PVT__tagBodyAccess__DOT___bypass_wdata_lfsr_T_6 
        = (((QData)((IData)((1U & VL_REDXOR_8((0x1bULL 
                                               & vlSelf->__PVT__tagBodyAccess__DOT__bypass_wdata_lfsr_1))))) 
            << 0x3fU) | (vlSelf->__PVT__tagBodyAccess__DOT__bypass_wdata_lfsr_1 
                         >> 1U));
    vlSelf->__PVT__tagBodyAccess__DOT__array_0_raw_rdata_data 
        = vlSelf->__PVT__tagBodyAccess__DOT__array_0
        [vlSelf->__PVT__tagBodyAccess__DOT__array_0_raw_rdata_addr_pipe_0];
    vlSelf->__PVT__tagBodyAccess__DOT__array_1_raw_rdata_data 
        = vlSelf->__PVT__tagBodyAccess__DOT__array_1
        [vlSelf->__PVT__tagBodyAccess__DOT__array_0_raw_rdata_addr_pipe_0];
    if ((0x15U == (IData)(vlSelf->__PVT__iTagChecker_io_way_valid_r))) {
        vlSelf->__PVT___GEN_22 = vlSelf->__PVT__way_valid_21_0;
        vlSelf->__PVT___GEN_54 = vlSelf->__PVT__way_valid_21_1;
    } else if ((0x14U == (IData)(vlSelf->__PVT__iTagChecker_io_way_valid_r))) {
        vlSelf->__PVT___GEN_22 = vlSelf->__PVT__way_valid_20_0;
        vlSelf->__PVT___GEN_54 = vlSelf->__PVT__way_valid_20_1;
    } else if ((0x13U == (IData)(vlSelf->__PVT__iTagChecker_io_way_valid_r))) {
        vlSelf->__PVT___GEN_22 = vlSelf->__PVT__way_valid_19_0;
        vlSelf->__PVT___GEN_54 = vlSelf->__PVT__way_valid_19_1;
    } else if ((0x12U == (IData)(vlSelf->__PVT__iTagChecker_io_way_valid_r))) {
        vlSelf->__PVT___GEN_22 = vlSelf->__PVT__way_valid_18_0;
        vlSelf->__PVT___GEN_54 = vlSelf->__PVT__way_valid_18_1;
    } else if ((0x11U == (IData)(vlSelf->__PVT__iTagChecker_io_way_valid_r))) {
        vlSelf->__PVT___GEN_22 = vlSelf->__PVT__way_valid_17_0;
        vlSelf->__PVT___GEN_54 = vlSelf->__PVT__way_valid_17_1;
    } else if ((0x10U == (IData)(vlSelf->__PVT__iTagChecker_io_way_valid_r))) {
        vlSelf->__PVT___GEN_22 = vlSelf->__PVT__way_valid_16_0;
        vlSelf->__PVT___GEN_54 = vlSelf->__PVT__way_valid_16_1;
    } else if ((0xfU == (IData)(vlSelf->__PVT__iTagChecker_io_way_valid_r))) {
        vlSelf->__PVT___GEN_22 = vlSelf->__PVT__way_valid_15_0;
        vlSelf->__PVT___GEN_54 = vlSelf->__PVT__way_valid_15_1;
    } else if ((0xeU == (IData)(vlSelf->__PVT__iTagChecker_io_way_valid_r))) {
        vlSelf->__PVT___GEN_22 = vlSelf->__PVT__way_valid_14_0;
        vlSelf->__PVT___GEN_54 = vlSelf->__PVT__way_valid_14_1;
    } else if ((0xdU == (IData)(vlSelf->__PVT__iTagChecker_io_way_valid_r))) {
        vlSelf->__PVT___GEN_22 = vlSelf->__PVT__way_valid_13_0;
        vlSelf->__PVT___GEN_54 = vlSelf->__PVT__way_valid_13_1;
    } else if ((0xcU == (IData)(vlSelf->__PVT__iTagChecker_io_way_valid_r))) {
        vlSelf->__PVT___GEN_22 = vlSelf->__PVT__way_valid_12_0;
        vlSelf->__PVT___GEN_54 = vlSelf->__PVT__way_valid_12_1;
    } else if ((0xbU == (IData)(vlSelf->__PVT__iTagChecker_io_way_valid_r))) {
        vlSelf->__PVT___GEN_22 = vlSelf->__PVT__way_valid_11_0;
        vlSelf->__PVT___GEN_54 = vlSelf->__PVT__way_valid_11_1;
    } else if ((0xaU == (IData)(vlSelf->__PVT__iTagChecker_io_way_valid_r))) {
        vlSelf->__PVT___GEN_22 = vlSelf->__PVT__way_valid_10_0;
        vlSelf->__PVT___GEN_54 = vlSelf->__PVT__way_valid_10_1;
    } else if ((9U == (IData)(vlSelf->__PVT__iTagChecker_io_way_valid_r))) {
        vlSelf->__PVT___GEN_22 = vlSelf->__PVT__way_valid_9_0;
        vlSelf->__PVT___GEN_54 = vlSelf->__PVT__way_valid_9_1;
    } else if ((8U == (IData)(vlSelf->__PVT__iTagChecker_io_way_valid_r))) {
        vlSelf->__PVT___GEN_22 = vlSelf->__PVT__way_valid_8_0;
        vlSelf->__PVT___GEN_54 = vlSelf->__PVT__way_valid_8_1;
    } else if ((7U == (IData)(vlSelf->__PVT__iTagChecker_io_way_valid_r))) {
        vlSelf->__PVT___GEN_22 = vlSelf->__PVT__way_valid_7_0;
        vlSelf->__PVT___GEN_54 = vlSelf->__PVT__way_valid_7_1;
    } else if ((6U == (IData)(vlSelf->__PVT__iTagChecker_io_way_valid_r))) {
        vlSelf->__PVT___GEN_22 = vlSelf->__PVT__way_valid_6_0;
        vlSelf->__PVT___GEN_54 = vlSelf->__PVT__way_valid_6_1;
    } else if ((5U == (IData)(vlSelf->__PVT__iTagChecker_io_way_valid_r))) {
        vlSelf->__PVT___GEN_22 = vlSelf->__PVT__way_valid_5_0;
        vlSelf->__PVT___GEN_54 = vlSelf->__PVT__way_valid_5_1;
    } else if ((4U == (IData)(vlSelf->__PVT__iTagChecker_io_way_valid_r))) {
        vlSelf->__PVT___GEN_22 = vlSelf->__PVT__way_valid_4_0;
        vlSelf->__PVT___GEN_54 = vlSelf->__PVT__way_valid_4_1;
    } else if ((3U == (IData)(vlSelf->__PVT__iTagChecker_io_way_valid_r))) {
        vlSelf->__PVT___GEN_22 = vlSelf->__PVT__way_valid_3_0;
        vlSelf->__PVT___GEN_54 = vlSelf->__PVT__way_valid_3_1;
    } else if ((2U == (IData)(vlSelf->__PVT__iTagChecker_io_way_valid_r))) {
        vlSelf->__PVT___GEN_22 = vlSelf->__PVT__way_valid_2_0;
        vlSelf->__PVT___GEN_54 = vlSelf->__PVT__way_valid_2_1;
    } else if ((1U == (IData)(vlSelf->__PVT__iTagChecker_io_way_valid_r))) {
        vlSelf->__PVT___GEN_22 = vlSelf->__PVT__way_valid_1_0;
        vlSelf->__PVT___GEN_54 = vlSelf->__PVT__way_valid_1_1;
    } else {
        vlSelf->__PVT___GEN_22 = vlSelf->__PVT__way_valid_0_0;
        vlSelf->__PVT___GEN_54 = vlSelf->__PVT__way_valid_0_1;
    }
    vlSelf->__PVT__tagBodyAccess__DOT__bypass_mask_bypass 
        = ((((IData)(vlSelf->__PVT__tagBodyAccess__DOT__bypass_mask_need_check) 
             & ((IData)(vlSelf->__PVT__tagBodyAccess__DOT__bypass_mask_raddr_reg) 
                == (IData)(vlSelf->__PVT__tagBodyAccess__DOT__bypass_mask_waddr_reg)))
             ? 3U : 0U) & (IData)(vlSelf->__PVT__tagBodyAccess__DOT__bypass_mask_bypass_REG));
    if ((0xdU == (0x1fU & (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__dcache__DOT__memRsp_Q__DOT__ram_d_addr_io_deq_bits_MPORT_data 
                           >> 4U)))) {
        __PVT___GEN_78 = vlSelf->__PVT__way_valid_13_0;
        __PVT___GEN_110 = vlSelf->__PVT__way_valid_13_1;
    } else if ((0xcU == (0x1fU & (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__dcache__DOT__memRsp_Q__DOT__ram_d_addr_io_deq_bits_MPORT_data 
                                  >> 4U)))) {
        __PVT___GEN_78 = vlSelf->__PVT__way_valid_12_0;
        __PVT___GEN_110 = vlSelf->__PVT__way_valid_12_1;
    } else if ((0xbU == (0x1fU & (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__dcache__DOT__memRsp_Q__DOT__ram_d_addr_io_deq_bits_MPORT_data 
                                  >> 4U)))) {
        __PVT___GEN_78 = vlSelf->__PVT__way_valid_11_0;
        __PVT___GEN_110 = vlSelf->__PVT__way_valid_11_1;
    } else if ((0xaU == (0x1fU & (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__dcache__DOT__memRsp_Q__DOT__ram_d_addr_io_deq_bits_MPORT_data 
                                  >> 4U)))) {
        __PVT___GEN_78 = vlSelf->__PVT__way_valid_10_0;
        __PVT___GEN_110 = vlSelf->__PVT__way_valid_10_1;
    } else if ((9U == (0x1fU & (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__dcache__DOT__memRsp_Q__DOT__ram_d_addr_io_deq_bits_MPORT_data 
                                >> 4U)))) {
        __PVT___GEN_78 = vlSelf->__PVT__way_valid_9_0;
        __PVT___GEN_110 = vlSelf->__PVT__way_valid_9_1;
    } else if ((8U == (0x1fU & (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__dcache__DOT__memRsp_Q__DOT__ram_d_addr_io_deq_bits_MPORT_data 
                                >> 4U)))) {
        __PVT___GEN_78 = vlSelf->__PVT__way_valid_8_0;
        __PVT___GEN_110 = vlSelf->__PVT__way_valid_8_1;
    } else if ((7U == (0x1fU & (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__dcache__DOT__memRsp_Q__DOT__ram_d_addr_io_deq_bits_MPORT_data 
                                >> 4U)))) {
        __PVT___GEN_78 = vlSelf->__PVT__way_valid_7_0;
        __PVT___GEN_110 = vlSelf->__PVT__way_valid_7_1;
    } else if ((6U == (0x1fU & (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__dcache__DOT__memRsp_Q__DOT__ram_d_addr_io_deq_bits_MPORT_data 
                                >> 4U)))) {
        __PVT___GEN_78 = vlSelf->__PVT__way_valid_6_0;
        __PVT___GEN_110 = vlSelf->__PVT__way_valid_6_1;
    } else if ((5U == (0x1fU & (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__dcache__DOT__memRsp_Q__DOT__ram_d_addr_io_deq_bits_MPORT_data 
                                >> 4U)))) {
        __PVT___GEN_78 = vlSelf->__PVT__way_valid_5_0;
        __PVT___GEN_110 = vlSelf->__PVT__way_valid_5_1;
    } else if ((4U == (0x1fU & (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__dcache__DOT__memRsp_Q__DOT__ram_d_addr_io_deq_bits_MPORT_data 
                                >> 4U)))) {
        __PVT___GEN_78 = vlSelf->__PVT__way_valid_4_0;
        __PVT___GEN_110 = vlSelf->__PVT__way_valid_4_1;
    } else if ((3U == (0x1fU & (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__dcache__DOT__memRsp_Q__DOT__ram_d_addr_io_deq_bits_MPORT_data 
                                >> 4U)))) {
        __PVT___GEN_78 = vlSelf->__PVT__way_valid_3_0;
        __PVT___GEN_110 = vlSelf->__PVT__way_valid_3_1;
    } else if ((2U == (0x1fU & (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__dcache__DOT__memRsp_Q__DOT__ram_d_addr_io_deq_bits_MPORT_data 
                                >> 4U)))) {
        __PVT___GEN_78 = vlSelf->__PVT__way_valid_2_0;
        __PVT___GEN_110 = vlSelf->__PVT__way_valid_2_1;
    } else if ((1U == (0x1fU & (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__dcache__DOT__memRsp_Q__DOT__ram_d_addr_io_deq_bits_MPORT_data 
                                >> 4U)))) {
        __PVT___GEN_78 = vlSelf->__PVT__way_valid_1_0;
        __PVT___GEN_110 = vlSelf->__PVT__way_valid_1_1;
    } else {
        __PVT___GEN_78 = vlSelf->__PVT__way_valid_0_0;
        __PVT___GEN_110 = vlSelf->__PVT__way_valid_0_1;
    }
    __PVT__iTagChecker__DOT___io_waymask_T_3 = ((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__dcache__DOT__coreReq_st1_tag 
                                                 == 
                                                 (0x7fffffU 
                                                  & ((IData)(vlSelf->__PVT__tagBodyAccess__DOT__rdata_REG)
                                                      ? 
                                                     ((2U 
                                                       & (IData)(vlSelf->__PVT__tagBodyAccess__DOT__bypass_mask_bypass))
                                                       ? (IData)(vlSelf->__PVT__tagBodyAccess__DOT__bypass_wdata_lfsr_1)
                                                       : vlSelf->__PVT__tagBodyAccess__DOT__array_1_raw_rdata_data)
                                                      : vlSelf->__PVT__tagBodyAccess__DOT__rdata_r_1))) 
                                                & ((0x1fU 
                                                    == (IData)(vlSelf->__PVT__iTagChecker_io_way_valid_r))
                                                    ? (IData)(vlSelf->__PVT__way_valid_31_1)
                                                    : 
                                                   ((0x1eU 
                                                     == (IData)(vlSelf->__PVT__iTagChecker_io_way_valid_r))
                                                     ? (IData)(vlSelf->__PVT__way_valid_30_1)
                                                     : 
                                                    ((0x1dU 
                                                      == (IData)(vlSelf->__PVT__iTagChecker_io_way_valid_r))
                                                      ? (IData)(vlSelf->__PVT__way_valid_29_1)
                                                      : 
                                                     ((0x1cU 
                                                       == (IData)(vlSelf->__PVT__iTagChecker_io_way_valid_r))
                                                       ? (IData)(vlSelf->__PVT__way_valid_28_1)
                                                       : 
                                                      ((0x1bU 
                                                        == (IData)(vlSelf->__PVT__iTagChecker_io_way_valid_r))
                                                        ? (IData)(vlSelf->__PVT__way_valid_27_1)
                                                        : 
                                                       ((0x1aU 
                                                         == (IData)(vlSelf->__PVT__iTagChecker_io_way_valid_r))
                                                         ? (IData)(vlSelf->__PVT__way_valid_26_1)
                                                         : 
                                                        ((0x19U 
                                                          == (IData)(vlSelf->__PVT__iTagChecker_io_way_valid_r))
                                                          ? (IData)(vlSelf->__PVT__way_valid_25_1)
                                                          : 
                                                         ((0x18U 
                                                           == (IData)(vlSelf->__PVT__iTagChecker_io_way_valid_r))
                                                           ? (IData)(vlSelf->__PVT__way_valid_24_1)
                                                           : 
                                                          ((0x17U 
                                                            == (IData)(vlSelf->__PVT__iTagChecker_io_way_valid_r))
                                                            ? (IData)(vlSelf->__PVT__way_valid_23_1)
                                                            : 
                                                           ((0x16U 
                                                             == (IData)(vlSelf->__PVT__iTagChecker_io_way_valid_r))
                                                             ? (IData)(vlSelf->__PVT__way_valid_22_1)
                                                             : (IData)(vlSelf->__PVT___GEN_54))))))))))));
    vlSelf->__PVT__iTagChecker__DOT___io_waymask_T_1 
        = ((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__dcache__DOT__coreReq_st1_tag 
            == (0x7fffffU & ((IData)(vlSelf->__PVT__tagBodyAccess__DOT__rdata_REG)
                              ? ((1U & (IData)(vlSelf->__PVT__tagBodyAccess__DOT__bypass_mask_bypass))
                                  ? (IData)(vlSelf->__PVT__tagBodyAccess__DOT__bypass_wdata_lfsr)
                                  : vlSelf->__PVT__tagBodyAccess__DOT__array_0_raw_rdata_data)
                              : vlSelf->__PVT__tagBodyAccess__DOT__rdata_r_0))) 
           & ((0x1fU == (IData)(vlSelf->__PVT__iTagChecker_io_way_valid_r))
               ? (IData)(vlSelf->__PVT__way_valid_31_0)
               : ((0x1eU == (IData)(vlSelf->__PVT__iTagChecker_io_way_valid_r))
                   ? (IData)(vlSelf->__PVT__way_valid_30_0)
                   : ((0x1dU == (IData)(vlSelf->__PVT__iTagChecker_io_way_valid_r))
                       ? (IData)(vlSelf->__PVT__way_valid_29_0)
                       : ((0x1cU == (IData)(vlSelf->__PVT__iTagChecker_io_way_valid_r))
                           ? (IData)(vlSelf->__PVT__way_valid_28_0)
                           : ((0x1bU == (IData)(vlSelf->__PVT__iTagChecker_io_way_valid_r))
                               ? (IData)(vlSelf->__PVT__way_valid_27_0)
                               : ((0x1aU == (IData)(vlSelf->__PVT__iTagChecker_io_way_valid_r))
                                   ? (IData)(vlSelf->__PVT__way_valid_26_0)
                                   : ((0x19U == (IData)(vlSelf->__PVT__iTagChecker_io_way_valid_r))
                                       ? (IData)(vlSelf->__PVT__way_valid_25_0)
                                       : ((0x18U == (IData)(vlSelf->__PVT__iTagChecker_io_way_valid_r))
                                           ? (IData)(vlSelf->__PVT__way_valid_24_0)
                                           : ((0x17U 
                                               == (IData)(vlSelf->__PVT__iTagChecker_io_way_valid_r))
                                               ? (IData)(vlSelf->__PVT__way_valid_23_0)
                                               : ((0x16U 
                                                   == (IData)(vlSelf->__PVT__iTagChecker_io_way_valid_r))
                                                   ? (IData)(vlSelf->__PVT__way_valid_22_0)
                                                   : (IData)(vlSelf->__PVT___GEN_22))))))))))));
    if ((0x1aU == (0x1fU & (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__dcache__DOT__memRsp_Q__DOT__ram_d_addr_io_deq_bits_MPORT_data 
                            >> 4U)))) {
        __PVT___GEN_91 = vlSelf->__PVT__way_valid_26_0;
        __PVT___GEN_123 = vlSelf->__PVT__way_valid_26_1;
    } else if ((0x19U == (0x1fU & (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__dcache__DOT__memRsp_Q__DOT__ram_d_addr_io_deq_bits_MPORT_data 
                                   >> 4U)))) {
        __PVT___GEN_91 = vlSelf->__PVT__way_valid_25_0;
        __PVT___GEN_123 = vlSelf->__PVT__way_valid_25_1;
    } else if ((0x18U == (0x1fU & (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__dcache__DOT__memRsp_Q__DOT__ram_d_addr_io_deq_bits_MPORT_data 
                                   >> 4U)))) {
        __PVT___GEN_91 = vlSelf->__PVT__way_valid_24_0;
        __PVT___GEN_123 = vlSelf->__PVT__way_valid_24_1;
    } else if ((0x17U == (0x1fU & (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__dcache__DOT__memRsp_Q__DOT__ram_d_addr_io_deq_bits_MPORT_data 
                                   >> 4U)))) {
        __PVT___GEN_91 = vlSelf->__PVT__way_valid_23_0;
        __PVT___GEN_123 = vlSelf->__PVT__way_valid_23_1;
    } else if ((0x16U == (0x1fU & (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__dcache__DOT__memRsp_Q__DOT__ram_d_addr_io_deq_bits_MPORT_data 
                                   >> 4U)))) {
        __PVT___GEN_91 = vlSelf->__PVT__way_valid_22_0;
        __PVT___GEN_123 = vlSelf->__PVT__way_valid_22_1;
    } else if ((0x15U == (0x1fU & (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__dcache__DOT__memRsp_Q__DOT__ram_d_addr_io_deq_bits_MPORT_data 
                                   >> 4U)))) {
        __PVT___GEN_91 = vlSelf->__PVT__way_valid_21_0;
        __PVT___GEN_123 = vlSelf->__PVT__way_valid_21_1;
    } else if ((0x14U == (0x1fU & (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__dcache__DOT__memRsp_Q__DOT__ram_d_addr_io_deq_bits_MPORT_data 
                                   >> 4U)))) {
        __PVT___GEN_91 = vlSelf->__PVT__way_valid_20_0;
        __PVT___GEN_123 = vlSelf->__PVT__way_valid_20_1;
    } else if ((0x13U == (0x1fU & (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__dcache__DOT__memRsp_Q__DOT__ram_d_addr_io_deq_bits_MPORT_data 
                                   >> 4U)))) {
        __PVT___GEN_91 = vlSelf->__PVT__way_valid_19_0;
        __PVT___GEN_123 = vlSelf->__PVT__way_valid_19_1;
    } else if ((0x12U == (0x1fU & (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__dcache__DOT__memRsp_Q__DOT__ram_d_addr_io_deq_bits_MPORT_data 
                                   >> 4U)))) {
        __PVT___GEN_91 = vlSelf->__PVT__way_valid_18_0;
        __PVT___GEN_123 = vlSelf->__PVT__way_valid_18_1;
    } else if ((0x11U == (0x1fU & (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__dcache__DOT__memRsp_Q__DOT__ram_d_addr_io_deq_bits_MPORT_data 
                                   >> 4U)))) {
        __PVT___GEN_91 = vlSelf->__PVT__way_valid_17_0;
        __PVT___GEN_123 = vlSelf->__PVT__way_valid_17_1;
    } else if ((0x10U == (0x1fU & (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__dcache__DOT__memRsp_Q__DOT__ram_d_addr_io_deq_bits_MPORT_data 
                                   >> 4U)))) {
        __PVT___GEN_91 = vlSelf->__PVT__way_valid_16_0;
        __PVT___GEN_123 = vlSelf->__PVT__way_valid_16_1;
    } else if ((0xfU == (0x1fU & (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__dcache__DOT__memRsp_Q__DOT__ram_d_addr_io_deq_bits_MPORT_data 
                                  >> 4U)))) {
        __PVT___GEN_91 = vlSelf->__PVT__way_valid_15_0;
        __PVT___GEN_123 = vlSelf->__PVT__way_valid_15_1;
    } else if ((0xeU == (0x1fU & (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__dcache__DOT__memRsp_Q__DOT__ram_d_addr_io_deq_bits_MPORT_data 
                                  >> 4U)))) {
        __PVT___GEN_91 = vlSelf->__PVT__way_valid_14_0;
        __PVT___GEN_123 = vlSelf->__PVT__way_valid_14_1;
    } else {
        __PVT___GEN_91 = __PVT___GEN_78;
        __PVT___GEN_123 = __PVT___GEN_110;
    }
    vlSelf->__PVT__io_waymaskHit_st1 = (((IData)(__PVT__iTagChecker__DOT___io_waymask_T_3) 
                                         << 1U) | (IData)(vlSelf->__PVT__iTagChecker__DOT___io_waymask_T_1));
    __PVT__Replacement__DOT___io_waymask_T_4 = ((0x1fU 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__dcache__DOT__memRsp_Q__DOT__ram_d_addr_io_deq_bits_MPORT_data 
                                                     >> 4U)))
                                                 ? (IData)(vlSelf->__PVT__way_valid_31_1)
                                                 : 
                                                ((0x1eU 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__dcache__DOT__memRsp_Q__DOT__ram_d_addr_io_deq_bits_MPORT_data 
                                                      >> 4U)))
                                                  ? (IData)(vlSelf->__PVT__way_valid_30_1)
                                                  : 
                                                 ((0x1dU 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__dcache__DOT__memRsp_Q__DOT__ram_d_addr_io_deq_bits_MPORT_data 
                                                       >> 4U)))
                                                   ? (IData)(vlSelf->__PVT__way_valid_29_1)
                                                   : 
                                                  ((0x1cU 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__dcache__DOT__memRsp_Q__DOT__ram_d_addr_io_deq_bits_MPORT_data 
                                                        >> 4U)))
                                                    ? (IData)(vlSelf->__PVT__way_valid_28_1)
                                                    : 
                                                   ((0x1bU 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__dcache__DOT__memRsp_Q__DOT__ram_d_addr_io_deq_bits_MPORT_data 
                                                         >> 4U)))
                                                     ? (IData)(vlSelf->__PVT__way_valid_27_1)
                                                     : (IData)(__PVT___GEN_123))))));
    vlSelf->__PVT__Replacement_io_validbits_of_set 
        = ((((0x1fU == (0x1fU & (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__dcache__DOT__memRsp_Q__DOT__ram_d_addr_io_deq_bits_MPORT_data 
                                 >> 4U))) ? (IData)(vlSelf->__PVT__way_valid_31_0)
              : ((0x1eU == (0x1fU & (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__dcache__DOT__memRsp_Q__DOT__ram_d_addr_io_deq_bits_MPORT_data 
                                     >> 4U))) ? (IData)(vlSelf->__PVT__way_valid_30_0)
                  : ((0x1dU == (0x1fU & (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__dcache__DOT__memRsp_Q__DOT__ram_d_addr_io_deq_bits_MPORT_data 
                                         >> 4U))) ? (IData)(vlSelf->__PVT__way_valid_29_0)
                      : ((0x1cU == (0x1fU & (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__dcache__DOT__memRsp_Q__DOT__ram_d_addr_io_deq_bits_MPORT_data 
                                             >> 4U)))
                          ? (IData)(vlSelf->__PVT__way_valid_28_0)
                          : ((0x1bU == (0x1fU & (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__dcache__DOT__memRsp_Q__DOT__ram_d_addr_io_deq_bits_MPORT_data 
                                                 >> 4U)))
                              ? (IData)(vlSelf->__PVT__way_valid_27_0)
                              : (IData)(__PVT___GEN_91)))))) 
            << 1U) | (IData)(__PVT__Replacement__DOT___io_waymask_T_4));
    vlSelf->__PVT__io_waymaskReplacement = (3U & ((3U 
                                                   == (IData)(vlSelf->__PVT__Replacement_io_validbits_of_set))
                                                   ? (IData)(vlSelf->__PVT__Replacement__DOT__victim_1Hidx)
                                                   : 
                                                  ((IData)(1U) 
                                                   << (IData)(__PVT__Replacement__DOT___io_waymask_T_4))));
    vlSelf->__PVT___GEN_129 = ((IData)(((~ ((IData)(vlSelf->__PVT__io_waymaskReplacement) 
                                            >> 1U)) 
                                        & (0U == (0x1f0U 
                                                  & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__dcache__DOT__memRsp_Q__DOT__ram_d_addr_io_deq_bits_MPORT_data)))) 
                               | (IData)(vlSelf->__PVT__way_valid_0_0));
    vlSelf->__PVT___GEN_130 = ((IData)(((0U == (0x1f0U 
                                                & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__dcache__DOT__memRsp_Q__DOT__ram_d_addr_io_deq_bits_MPORT_data)) 
                                        & ((IData)(vlSelf->__PVT__io_waymaskReplacement) 
                                           >> 1U))) 
                               | (IData)(vlSelf->__PVT__way_valid_0_1));
    vlSelf->__PVT___GEN_131 = ((IData)(((~ ((IData)(vlSelf->__PVT__io_waymaskReplacement) 
                                            >> 1U)) 
                                        & (0x10U == 
                                           (0x1f0U 
                                            & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__dcache__DOT__memRsp_Q__DOT__ram_d_addr_io_deq_bits_MPORT_data)))) 
                               | (IData)(vlSelf->__PVT__way_valid_1_0));
    vlSelf->__PVT___GEN_132 = ((IData)(((0x10U == (0x1f0U 
                                                   & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__dcache__DOT__memRsp_Q__DOT__ram_d_addr_io_deq_bits_MPORT_data)) 
                                        & ((IData)(vlSelf->__PVT__io_waymaskReplacement) 
                                           >> 1U))) 
                               | (IData)(vlSelf->__PVT__way_valid_1_1));
    vlSelf->__PVT___GEN_133 = ((IData)(((~ ((IData)(vlSelf->__PVT__io_waymaskReplacement) 
                                            >> 1U)) 
                                        & (0x20U == 
                                           (0x1f0U 
                                            & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__dcache__DOT__memRsp_Q__DOT__ram_d_addr_io_deq_bits_MPORT_data)))) 
                               | (IData)(vlSelf->__PVT__way_valid_2_0));
    vlSelf->__PVT___GEN_134 = ((IData)(((0x20U == (0x1f0U 
                                                   & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__dcache__DOT__memRsp_Q__DOT__ram_d_addr_io_deq_bits_MPORT_data)) 
                                        & ((IData)(vlSelf->__PVT__io_waymaskReplacement) 
                                           >> 1U))) 
                               | (IData)(vlSelf->__PVT__way_valid_2_1));
    vlSelf->__PVT___GEN_135 = ((IData)(((~ ((IData)(vlSelf->__PVT__io_waymaskReplacement) 
                                            >> 1U)) 
                                        & (0x30U == 
                                           (0x1f0U 
                                            & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__dcache__DOT__memRsp_Q__DOT__ram_d_addr_io_deq_bits_MPORT_data)))) 
                               | (IData)(vlSelf->__PVT__way_valid_3_0));
    vlSelf->__PVT___GEN_136 = ((IData)(((0x30U == (0x1f0U 
                                                   & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__dcache__DOT__memRsp_Q__DOT__ram_d_addr_io_deq_bits_MPORT_data)) 
                                        & ((IData)(vlSelf->__PVT__io_waymaskReplacement) 
                                           >> 1U))) 
                               | (IData)(vlSelf->__PVT__way_valid_3_1));
    vlSelf->__PVT___GEN_137 = ((IData)(((~ ((IData)(vlSelf->__PVT__io_waymaskReplacement) 
                                            >> 1U)) 
                                        & (0x40U == 
                                           (0x1f0U 
                                            & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__dcache__DOT__memRsp_Q__DOT__ram_d_addr_io_deq_bits_MPORT_data)))) 
                               | (IData)(vlSelf->__PVT__way_valid_4_0));
    vlSelf->__PVT___GEN_138 = ((IData)(((0x40U == (0x1f0U 
                                                   & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__dcache__DOT__memRsp_Q__DOT__ram_d_addr_io_deq_bits_MPORT_data)) 
                                        & ((IData)(vlSelf->__PVT__io_waymaskReplacement) 
                                           >> 1U))) 
                               | (IData)(vlSelf->__PVT__way_valid_4_1));
    vlSelf->__PVT___GEN_139 = ((IData)(((~ ((IData)(vlSelf->__PVT__io_waymaskReplacement) 
                                            >> 1U)) 
                                        & (0x50U == 
                                           (0x1f0U 
                                            & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__dcache__DOT__memRsp_Q__DOT__ram_d_addr_io_deq_bits_MPORT_data)))) 
                               | (IData)(vlSelf->__PVT__way_valid_5_0));
    vlSelf->__PVT___GEN_140 = ((IData)(((0x50U == (0x1f0U 
                                                   & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__dcache__DOT__memRsp_Q__DOT__ram_d_addr_io_deq_bits_MPORT_data)) 
                                        & ((IData)(vlSelf->__PVT__io_waymaskReplacement) 
                                           >> 1U))) 
                               | (IData)(vlSelf->__PVT__way_valid_5_1));
    vlSelf->__PVT___GEN_141 = ((IData)(((~ ((IData)(vlSelf->__PVT__io_waymaskReplacement) 
                                            >> 1U)) 
                                        & (0x60U == 
                                           (0x1f0U 
                                            & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__dcache__DOT__memRsp_Q__DOT__ram_d_addr_io_deq_bits_MPORT_data)))) 
                               | (IData)(vlSelf->__PVT__way_valid_6_0));
    vlSelf->__PVT___GEN_142 = ((IData)(((0x60U == (0x1f0U 
                                                   & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__dcache__DOT__memRsp_Q__DOT__ram_d_addr_io_deq_bits_MPORT_data)) 
                                        & ((IData)(vlSelf->__PVT__io_waymaskReplacement) 
                                           >> 1U))) 
                               | (IData)(vlSelf->__PVT__way_valid_6_1));
    vlSelf->__PVT___GEN_143 = ((IData)(((~ ((IData)(vlSelf->__PVT__io_waymaskReplacement) 
                                            >> 1U)) 
                                        & (0x70U == 
                                           (0x1f0U 
                                            & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__dcache__DOT__memRsp_Q__DOT__ram_d_addr_io_deq_bits_MPORT_data)))) 
                               | (IData)(vlSelf->__PVT__way_valid_7_0));
    vlSelf->__PVT___GEN_144 = ((IData)(((0x70U == (0x1f0U 
                                                   & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__dcache__DOT__memRsp_Q__DOT__ram_d_addr_io_deq_bits_MPORT_data)) 
                                        & ((IData)(vlSelf->__PVT__io_waymaskReplacement) 
                                           >> 1U))) 
                               | (IData)(vlSelf->__PVT__way_valid_7_1));
    vlSelf->__PVT___GEN_145 = ((IData)(((~ ((IData)(vlSelf->__PVT__io_waymaskReplacement) 
                                            >> 1U)) 
                                        & (0x80U == 
                                           (0x1f0U 
                                            & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__dcache__DOT__memRsp_Q__DOT__ram_d_addr_io_deq_bits_MPORT_data)))) 
                               | (IData)(vlSelf->__PVT__way_valid_8_0));
    vlSelf->__PVT___GEN_146 = ((IData)(((0x80U == (0x1f0U 
                                                   & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__dcache__DOT__memRsp_Q__DOT__ram_d_addr_io_deq_bits_MPORT_data)) 
                                        & ((IData)(vlSelf->__PVT__io_waymaskReplacement) 
                                           >> 1U))) 
                               | (IData)(vlSelf->__PVT__way_valid_8_1));
    vlSelf->__PVT___GEN_147 = ((IData)(((~ ((IData)(vlSelf->__PVT__io_waymaskReplacement) 
                                            >> 1U)) 
                                        & (0x90U == 
                                           (0x1f0U 
                                            & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__dcache__DOT__memRsp_Q__DOT__ram_d_addr_io_deq_bits_MPORT_data)))) 
                               | (IData)(vlSelf->__PVT__way_valid_9_0));
    vlSelf->__PVT___GEN_148 = ((IData)(((0x90U == (0x1f0U 
                                                   & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__dcache__DOT__memRsp_Q__DOT__ram_d_addr_io_deq_bits_MPORT_data)) 
                                        & ((IData)(vlSelf->__PVT__io_waymaskReplacement) 
                                           >> 1U))) 
                               | (IData)(vlSelf->__PVT__way_valid_9_1));
    vlSelf->__PVT___GEN_149 = ((IData)(((~ ((IData)(vlSelf->__PVT__io_waymaskReplacement) 
                                            >> 1U)) 
                                        & (0xa0U == 
                                           (0x1f0U 
                                            & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__dcache__DOT__memRsp_Q__DOT__ram_d_addr_io_deq_bits_MPORT_data)))) 
                               | (IData)(vlSelf->__PVT__way_valid_10_0));
    vlSelf->__PVT___GEN_150 = ((IData)(((0xa0U == (0x1f0U 
                                                   & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__dcache__DOT__memRsp_Q__DOT__ram_d_addr_io_deq_bits_MPORT_data)) 
                                        & ((IData)(vlSelf->__PVT__io_waymaskReplacement) 
                                           >> 1U))) 
                               | (IData)(vlSelf->__PVT__way_valid_10_1));
    vlSelf->__PVT___GEN_151 = ((IData)(((~ ((IData)(vlSelf->__PVT__io_waymaskReplacement) 
                                            >> 1U)) 
                                        & (0xb0U == 
                                           (0x1f0U 
                                            & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__dcache__DOT__memRsp_Q__DOT__ram_d_addr_io_deq_bits_MPORT_data)))) 
                               | (IData)(vlSelf->__PVT__way_valid_11_0));
    vlSelf->__PVT___GEN_152 = ((IData)(((0xb0U == (0x1f0U 
                                                   & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__dcache__DOT__memRsp_Q__DOT__ram_d_addr_io_deq_bits_MPORT_data)) 
                                        & ((IData)(vlSelf->__PVT__io_waymaskReplacement) 
                                           >> 1U))) 
                               | (IData)(vlSelf->__PVT__way_valid_11_1));
    vlSelf->__PVT___GEN_153 = ((IData)(((~ ((IData)(vlSelf->__PVT__io_waymaskReplacement) 
                                            >> 1U)) 
                                        & (0xc0U == 
                                           (0x1f0U 
                                            & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__dcache__DOT__memRsp_Q__DOT__ram_d_addr_io_deq_bits_MPORT_data)))) 
                               | (IData)(vlSelf->__PVT__way_valid_12_0));
    vlSelf->__PVT___GEN_154 = ((IData)(((0xc0U == (0x1f0U 
                                                   & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__dcache__DOT__memRsp_Q__DOT__ram_d_addr_io_deq_bits_MPORT_data)) 
                                        & ((IData)(vlSelf->__PVT__io_waymaskReplacement) 
                                           >> 1U))) 
                               | (IData)(vlSelf->__PVT__way_valid_12_1));
    vlSelf->__PVT___GEN_155 = ((IData)(((~ ((IData)(vlSelf->__PVT__io_waymaskReplacement) 
                                            >> 1U)) 
                                        & (0xd0U == 
                                           (0x1f0U 
                                            & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__dcache__DOT__memRsp_Q__DOT__ram_d_addr_io_deq_bits_MPORT_data)))) 
                               | (IData)(vlSelf->__PVT__way_valid_13_0));
    vlSelf->__PVT___GEN_156 = ((IData)(((0xd0U == (0x1f0U 
                                                   & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__dcache__DOT__memRsp_Q__DOT__ram_d_addr_io_deq_bits_MPORT_data)) 
                                        & ((IData)(vlSelf->__PVT__io_waymaskReplacement) 
                                           >> 1U))) 
                               | (IData)(vlSelf->__PVT__way_valid_13_1));
    vlSelf->__PVT___GEN_157 = ((IData)(((~ ((IData)(vlSelf->__PVT__io_waymaskReplacement) 
                                            >> 1U)) 
                                        & (0xe0U == 
                                           (0x1f0U 
                                            & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__dcache__DOT__memRsp_Q__DOT__ram_d_addr_io_deq_bits_MPORT_data)))) 
                               | (IData)(vlSelf->__PVT__way_valid_14_0));
    vlSelf->__PVT___GEN_158 = ((IData)(((0xe0U == (0x1f0U 
                                                   & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__dcache__DOT__memRsp_Q__DOT__ram_d_addr_io_deq_bits_MPORT_data)) 
                                        & ((IData)(vlSelf->__PVT__io_waymaskReplacement) 
                                           >> 1U))) 
                               | (IData)(vlSelf->__PVT__way_valid_14_1));
    vlSelf->__PVT___GEN_159 = ((IData)(((~ ((IData)(vlSelf->__PVT__io_waymaskReplacement) 
                                            >> 1U)) 
                                        & (0xf0U == 
                                           (0x1f0U 
                                            & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__dcache__DOT__memRsp_Q__DOT__ram_d_addr_io_deq_bits_MPORT_data)))) 
                               | (IData)(vlSelf->__PVT__way_valid_15_0));
    vlSelf->__PVT___GEN_160 = ((IData)(((0xf0U == (0x1f0U 
                                                   & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__dcache__DOT__memRsp_Q__DOT__ram_d_addr_io_deq_bits_MPORT_data)) 
                                        & ((IData)(vlSelf->__PVT__io_waymaskReplacement) 
                                           >> 1U))) 
                               | (IData)(vlSelf->__PVT__way_valid_15_1));
    vlSelf->__PVT___GEN_161 = ((IData)(((~ ((IData)(vlSelf->__PVT__io_waymaskReplacement) 
                                            >> 1U)) 
                                        & (0x100U == 
                                           (0x1f0U 
                                            & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__dcache__DOT__memRsp_Q__DOT__ram_d_addr_io_deq_bits_MPORT_data)))) 
                               | (IData)(vlSelf->__PVT__way_valid_16_0));
    vlSelf->__PVT___GEN_162 = ((IData)(((0x100U == 
                                         (0x1f0U & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__dcache__DOT__memRsp_Q__DOT__ram_d_addr_io_deq_bits_MPORT_data)) 
                                        & ((IData)(vlSelf->__PVT__io_waymaskReplacement) 
                                           >> 1U))) 
                               | (IData)(vlSelf->__PVT__way_valid_16_1));
    vlSelf->__PVT___GEN_163 = ((IData)(((~ ((IData)(vlSelf->__PVT__io_waymaskReplacement) 
                                            >> 1U)) 
                                        & (0x110U == 
                                           (0x1f0U 
                                            & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__dcache__DOT__memRsp_Q__DOT__ram_d_addr_io_deq_bits_MPORT_data)))) 
                               | (IData)(vlSelf->__PVT__way_valid_17_0));
    vlSelf->__PVT___GEN_164 = ((IData)(((0x110U == 
                                         (0x1f0U & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__dcache__DOT__memRsp_Q__DOT__ram_d_addr_io_deq_bits_MPORT_data)) 
                                        & ((IData)(vlSelf->__PVT__io_waymaskReplacement) 
                                           >> 1U))) 
                               | (IData)(vlSelf->__PVT__way_valid_17_1));
    vlSelf->__PVT___GEN_165 = ((IData)(((~ ((IData)(vlSelf->__PVT__io_waymaskReplacement) 
                                            >> 1U)) 
                                        & (0x120U == 
                                           (0x1f0U 
                                            & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__dcache__DOT__memRsp_Q__DOT__ram_d_addr_io_deq_bits_MPORT_data)))) 
                               | (IData)(vlSelf->__PVT__way_valid_18_0));
    vlSelf->__PVT___GEN_166 = ((IData)(((0x120U == 
                                         (0x1f0U & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__dcache__DOT__memRsp_Q__DOT__ram_d_addr_io_deq_bits_MPORT_data)) 
                                        & ((IData)(vlSelf->__PVT__io_waymaskReplacement) 
                                           >> 1U))) 
                               | (IData)(vlSelf->__PVT__way_valid_18_1));
    vlSelf->__PVT___GEN_167 = ((IData)(((~ ((IData)(vlSelf->__PVT__io_waymaskReplacement) 
                                            >> 1U)) 
                                        & (0x130U == 
                                           (0x1f0U 
                                            & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__dcache__DOT__memRsp_Q__DOT__ram_d_addr_io_deq_bits_MPORT_data)))) 
                               | (IData)(vlSelf->__PVT__way_valid_19_0));
    vlSelf->__PVT___GEN_168 = ((IData)(((0x130U == 
                                         (0x1f0U & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__dcache__DOT__memRsp_Q__DOT__ram_d_addr_io_deq_bits_MPORT_data)) 
                                        & ((IData)(vlSelf->__PVT__io_waymaskReplacement) 
                                           >> 1U))) 
                               | (IData)(vlSelf->__PVT__way_valid_19_1));
    vlSelf->__PVT___GEN_169 = ((IData)(((~ ((IData)(vlSelf->__PVT__io_waymaskReplacement) 
                                            >> 1U)) 
                                        & (0x140U == 
                                           (0x1f0U 
                                            & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__dcache__DOT__memRsp_Q__DOT__ram_d_addr_io_deq_bits_MPORT_data)))) 
                               | (IData)(vlSelf->__PVT__way_valid_20_0));
    vlSelf->__PVT___GEN_170 = ((IData)(((0x140U == 
                                         (0x1f0U & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__dcache__DOT__memRsp_Q__DOT__ram_d_addr_io_deq_bits_MPORT_data)) 
                                        & ((IData)(vlSelf->__PVT__io_waymaskReplacement) 
                                           >> 1U))) 
                               | (IData)(vlSelf->__PVT__way_valid_20_1));
    vlSelf->__PVT___GEN_171 = ((IData)(((~ ((IData)(vlSelf->__PVT__io_waymaskReplacement) 
                                            >> 1U)) 
                                        & (0x150U == 
                                           (0x1f0U 
                                            & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__dcache__DOT__memRsp_Q__DOT__ram_d_addr_io_deq_bits_MPORT_data)))) 
                               | (IData)(vlSelf->__PVT__way_valid_21_0));
    vlSelf->__PVT___GEN_172 = ((IData)(((0x150U == 
                                         (0x1f0U & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__dcache__DOT__memRsp_Q__DOT__ram_d_addr_io_deq_bits_MPORT_data)) 
                                        & ((IData)(vlSelf->__PVT__io_waymaskReplacement) 
                                           >> 1U))) 
                               | (IData)(vlSelf->__PVT__way_valid_21_1));
    vlSelf->__PVT___GEN_173 = ((IData)(((~ ((IData)(vlSelf->__PVT__io_waymaskReplacement) 
                                            >> 1U)) 
                                        & (0x160U == 
                                           (0x1f0U 
                                            & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__dcache__DOT__memRsp_Q__DOT__ram_d_addr_io_deq_bits_MPORT_data)))) 
                               | (IData)(vlSelf->__PVT__way_valid_22_0));
    vlSelf->__PVT___GEN_174 = ((IData)(((0x160U == 
                                         (0x1f0U & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__dcache__DOT__memRsp_Q__DOT__ram_d_addr_io_deq_bits_MPORT_data)) 
                                        & ((IData)(vlSelf->__PVT__io_waymaskReplacement) 
                                           >> 1U))) 
                               | (IData)(vlSelf->__PVT__way_valid_22_1));
    vlSelf->__PVT___GEN_175 = ((IData)(((~ ((IData)(vlSelf->__PVT__io_waymaskReplacement) 
                                            >> 1U)) 
                                        & (0x170U == 
                                           (0x1f0U 
                                            & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__dcache__DOT__memRsp_Q__DOT__ram_d_addr_io_deq_bits_MPORT_data)))) 
                               | (IData)(vlSelf->__PVT__way_valid_23_0));
    vlSelf->__PVT___GEN_176 = ((IData)(((0x170U == 
                                         (0x1f0U & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__dcache__DOT__memRsp_Q__DOT__ram_d_addr_io_deq_bits_MPORT_data)) 
                                        & ((IData)(vlSelf->__PVT__io_waymaskReplacement) 
                                           >> 1U))) 
                               | (IData)(vlSelf->__PVT__way_valid_23_1));
    vlSelf->__PVT___GEN_177 = ((IData)(((~ ((IData)(vlSelf->__PVT__io_waymaskReplacement) 
                                            >> 1U)) 
                                        & (0x180U == 
                                           (0x1f0U 
                                            & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__dcache__DOT__memRsp_Q__DOT__ram_d_addr_io_deq_bits_MPORT_data)))) 
                               | (IData)(vlSelf->__PVT__way_valid_24_0));
    vlSelf->__PVT___GEN_178 = ((IData)(((0x180U == 
                                         (0x1f0U & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__dcache__DOT__memRsp_Q__DOT__ram_d_addr_io_deq_bits_MPORT_data)) 
                                        & ((IData)(vlSelf->__PVT__io_waymaskReplacement) 
                                           >> 1U))) 
                               | (IData)(vlSelf->__PVT__way_valid_24_1));
    vlSelf->__PVT___GEN_179 = ((IData)(((~ ((IData)(vlSelf->__PVT__io_waymaskReplacement) 
                                            >> 1U)) 
                                        & (0x190U == 
                                           (0x1f0U 
                                            & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__dcache__DOT__memRsp_Q__DOT__ram_d_addr_io_deq_bits_MPORT_data)))) 
                               | (IData)(vlSelf->__PVT__way_valid_25_0));
    vlSelf->__PVT___GEN_180 = ((IData)(((0x190U == 
                                         (0x1f0U & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__dcache__DOT__memRsp_Q__DOT__ram_d_addr_io_deq_bits_MPORT_data)) 
                                        & ((IData)(vlSelf->__PVT__io_waymaskReplacement) 
                                           >> 1U))) 
                               | (IData)(vlSelf->__PVT__way_valid_25_1));
    vlSelf->__PVT___GEN_181 = ((IData)(((~ ((IData)(vlSelf->__PVT__io_waymaskReplacement) 
                                            >> 1U)) 
                                        & (0x1a0U == 
                                           (0x1f0U 
                                            & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__dcache__DOT__memRsp_Q__DOT__ram_d_addr_io_deq_bits_MPORT_data)))) 
                               | (IData)(vlSelf->__PVT__way_valid_26_0));
    vlSelf->__PVT___GEN_182 = ((IData)(((0x1a0U == 
                                         (0x1f0U & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__dcache__DOT__memRsp_Q__DOT__ram_d_addr_io_deq_bits_MPORT_data)) 
                                        & ((IData)(vlSelf->__PVT__io_waymaskReplacement) 
                                           >> 1U))) 
                               | (IData)(vlSelf->__PVT__way_valid_26_1));
    vlSelf->__PVT___GEN_183 = ((IData)(((~ ((IData)(vlSelf->__PVT__io_waymaskReplacement) 
                                            >> 1U)) 
                                        & (0x1b0U == 
                                           (0x1f0U 
                                            & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__dcache__DOT__memRsp_Q__DOT__ram_d_addr_io_deq_bits_MPORT_data)))) 
                               | (IData)(vlSelf->__PVT__way_valid_27_0));
    vlSelf->__PVT___GEN_184 = ((IData)(((0x1b0U == 
                                         (0x1f0U & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__dcache__DOT__memRsp_Q__DOT__ram_d_addr_io_deq_bits_MPORT_data)) 
                                        & ((IData)(vlSelf->__PVT__io_waymaskReplacement) 
                                           >> 1U))) 
                               | (IData)(vlSelf->__PVT__way_valid_27_1));
    vlSelf->__PVT___GEN_185 = ((IData)(((~ ((IData)(vlSelf->__PVT__io_waymaskReplacement) 
                                            >> 1U)) 
                                        & (0x1c0U == 
                                           (0x1f0U 
                                            & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__dcache__DOT__memRsp_Q__DOT__ram_d_addr_io_deq_bits_MPORT_data)))) 
                               | (IData)(vlSelf->__PVT__way_valid_28_0));
    vlSelf->__PVT___GEN_186 = ((IData)(((0x1c0U == 
                                         (0x1f0U & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__dcache__DOT__memRsp_Q__DOT__ram_d_addr_io_deq_bits_MPORT_data)) 
                                        & ((IData)(vlSelf->__PVT__io_waymaskReplacement) 
                                           >> 1U))) 
                               | (IData)(vlSelf->__PVT__way_valid_28_1));
    vlSelf->__PVT___GEN_187 = ((IData)(((~ ((IData)(vlSelf->__PVT__io_waymaskReplacement) 
                                            >> 1U)) 
                                        & (0x1d0U == 
                                           (0x1f0U 
                                            & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__dcache__DOT__memRsp_Q__DOT__ram_d_addr_io_deq_bits_MPORT_data)))) 
                               | (IData)(vlSelf->__PVT__way_valid_29_0));
    vlSelf->__PVT___GEN_188 = ((IData)(((0x1d0U == 
                                         (0x1f0U & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__dcache__DOT__memRsp_Q__DOT__ram_d_addr_io_deq_bits_MPORT_data)) 
                                        & ((IData)(vlSelf->__PVT__io_waymaskReplacement) 
                                           >> 1U))) 
                               | (IData)(vlSelf->__PVT__way_valid_29_1));
    vlSelf->__PVT___GEN_189 = ((IData)(((~ ((IData)(vlSelf->__PVT__io_waymaskReplacement) 
                                            >> 1U)) 
                                        & (0x1e0U == 
                                           (0x1f0U 
                                            & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__dcache__DOT__memRsp_Q__DOT__ram_d_addr_io_deq_bits_MPORT_data)))) 
                               | (IData)(vlSelf->__PVT__way_valid_30_0));
    vlSelf->__PVT___GEN_190 = ((IData)(((0x1e0U == 
                                         (0x1f0U & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__dcache__DOT__memRsp_Q__DOT__ram_d_addr_io_deq_bits_MPORT_data)) 
                                        & ((IData)(vlSelf->__PVT__io_waymaskReplacement) 
                                           >> 1U))) 
                               | (IData)(vlSelf->__PVT__way_valid_30_1));
    vlSelf->__PVT___GEN_191 = ((IData)(((~ ((IData)(vlSelf->__PVT__io_waymaskReplacement) 
                                            >> 1U)) 
                                        & (0x1f0U == 
                                           (0x1f0U 
                                            & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__dcache__DOT__memRsp_Q__DOT__ram_d_addr_io_deq_bits_MPORT_data)))) 
                               | (IData)(vlSelf->__PVT__way_valid_31_0));
    vlSelf->__PVT___GEN_192 = ((IData)(((0x1f0U == 
                                         (0x1f0U & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__dcache__DOT__memRsp_Q__DOT__ram_d_addr_io_deq_bits_MPORT_data)) 
                                        & ((IData)(vlSelf->__PVT__io_waymaskReplacement) 
                                           >> 1U))) 
                               | (IData)(vlSelf->__PVT__way_valid_31_1));
}

VL_ATTR_COLD void VVentus_L1TagAccess___stl_sequent__TOP__GPGPU_top__DOT__SM_wrapper_1__icache__DOT__tagAccess__0(VVentus_L1TagAccess* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VVentus__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VVentus_L1TagAccess___stl_sequent__TOP__GPGPU_top__DOT__SM_wrapper_1__icache__DOT__tagAccess__0\n"); );
    // Init
    CData/*0:0*/ __PVT___GEN_78;
    CData/*0:0*/ __PVT___GEN_91;
    CData/*0:0*/ __PVT___GEN_110;
    CData/*0:0*/ __PVT___GEN_123;
    CData/*0:0*/ __PVT__iTagChecker__DOT___io_waymask_T_3;
    CData/*0:0*/ __PVT__Replacement__DOT___io_waymask_T_4;
    // Body
    vlSelf->__PVT__tagBodyAccess__DOT___bypass_wdata_lfsr_T_2 
        = (((QData)((IData)((1U & VL_REDXOR_8((0x1bULL 
                                               & vlSelf->__PVT__tagBodyAccess__DOT__bypass_wdata_lfsr))))) 
            << 0x3fU) | (vlSelf->__PVT__tagBodyAccess__DOT__bypass_wdata_lfsr 
                         >> 1U));
    vlSelf->__PVT__tagBodyAccess__DOT___bypass_wdata_lfsr_T_6 
        = (((QData)((IData)((1U & VL_REDXOR_8((0x1bULL 
                                               & vlSelf->__PVT__tagBodyAccess__DOT__bypass_wdata_lfsr_1))))) 
            << 0x3fU) | (vlSelf->__PVT__tagBodyAccess__DOT__bypass_wdata_lfsr_1 
                         >> 1U));
    vlSelf->__PVT__tagBodyAccess__DOT__array_0_raw_rdata_data 
        = vlSelf->__PVT__tagBodyAccess__DOT__array_0
        [vlSelf->__PVT__tagBodyAccess__DOT__array_0_raw_rdata_addr_pipe_0];
    vlSelf->__PVT__tagBodyAccess__DOT__array_1_raw_rdata_data 
        = vlSelf->__PVT__tagBodyAccess__DOT__array_1
        [vlSelf->__PVT__tagBodyAccess__DOT__array_1_raw_rdata_addr_pipe_0];
    if ((0x15U == (IData)(vlSelf->__PVT__iTagChecker_io_way_valid_r))) {
        vlSelf->__PVT___GEN_22 = vlSelf->__PVT__way_valid_21_0;
        vlSelf->__PVT___GEN_54 = vlSelf->__PVT__way_valid_21_1;
    } else if ((0x14U == (IData)(vlSelf->__PVT__iTagChecker_io_way_valid_r))) {
        vlSelf->__PVT___GEN_22 = vlSelf->__PVT__way_valid_20_0;
        vlSelf->__PVT___GEN_54 = vlSelf->__PVT__way_valid_20_1;
    } else if ((0x13U == (IData)(vlSelf->__PVT__iTagChecker_io_way_valid_r))) {
        vlSelf->__PVT___GEN_22 = vlSelf->__PVT__way_valid_19_0;
        vlSelf->__PVT___GEN_54 = vlSelf->__PVT__way_valid_19_1;
    } else if ((0x12U == (IData)(vlSelf->__PVT__iTagChecker_io_way_valid_r))) {
        vlSelf->__PVT___GEN_22 = vlSelf->__PVT__way_valid_18_0;
        vlSelf->__PVT___GEN_54 = vlSelf->__PVT__way_valid_18_1;
    } else if ((0x11U == (IData)(vlSelf->__PVT__iTagChecker_io_way_valid_r))) {
        vlSelf->__PVT___GEN_22 = vlSelf->__PVT__way_valid_17_0;
        vlSelf->__PVT___GEN_54 = vlSelf->__PVT__way_valid_17_1;
    } else if ((0x10U == (IData)(vlSelf->__PVT__iTagChecker_io_way_valid_r))) {
        vlSelf->__PVT___GEN_22 = vlSelf->__PVT__way_valid_16_0;
        vlSelf->__PVT___GEN_54 = vlSelf->__PVT__way_valid_16_1;
    } else if ((0xfU == (IData)(vlSelf->__PVT__iTagChecker_io_way_valid_r))) {
        vlSelf->__PVT___GEN_22 = vlSelf->__PVT__way_valid_15_0;
        vlSelf->__PVT___GEN_54 = vlSelf->__PVT__way_valid_15_1;
    } else if ((0xeU == (IData)(vlSelf->__PVT__iTagChecker_io_way_valid_r))) {
        vlSelf->__PVT___GEN_22 = vlSelf->__PVT__way_valid_14_0;
        vlSelf->__PVT___GEN_54 = vlSelf->__PVT__way_valid_14_1;
    } else if ((0xdU == (IData)(vlSelf->__PVT__iTagChecker_io_way_valid_r))) {
        vlSelf->__PVT___GEN_22 = vlSelf->__PVT__way_valid_13_0;
        vlSelf->__PVT___GEN_54 = vlSelf->__PVT__way_valid_13_1;
    } else if ((0xcU == (IData)(vlSelf->__PVT__iTagChecker_io_way_valid_r))) {
        vlSelf->__PVT___GEN_22 = vlSelf->__PVT__way_valid_12_0;
        vlSelf->__PVT___GEN_54 = vlSelf->__PVT__way_valid_12_1;
    } else if ((0xbU == (IData)(vlSelf->__PVT__iTagChecker_io_way_valid_r))) {
        vlSelf->__PVT___GEN_22 = vlSelf->__PVT__way_valid_11_0;
        vlSelf->__PVT___GEN_54 = vlSelf->__PVT__way_valid_11_1;
    } else if ((0xaU == (IData)(vlSelf->__PVT__iTagChecker_io_way_valid_r))) {
        vlSelf->__PVT___GEN_22 = vlSelf->__PVT__way_valid_10_0;
        vlSelf->__PVT___GEN_54 = vlSelf->__PVT__way_valid_10_1;
    } else if ((9U == (IData)(vlSelf->__PVT__iTagChecker_io_way_valid_r))) {
        vlSelf->__PVT___GEN_22 = vlSelf->__PVT__way_valid_9_0;
        vlSelf->__PVT___GEN_54 = vlSelf->__PVT__way_valid_9_1;
    } else if ((8U == (IData)(vlSelf->__PVT__iTagChecker_io_way_valid_r))) {
        vlSelf->__PVT___GEN_22 = vlSelf->__PVT__way_valid_8_0;
        vlSelf->__PVT___GEN_54 = vlSelf->__PVT__way_valid_8_1;
    } else if ((7U == (IData)(vlSelf->__PVT__iTagChecker_io_way_valid_r))) {
        vlSelf->__PVT___GEN_22 = vlSelf->__PVT__way_valid_7_0;
        vlSelf->__PVT___GEN_54 = vlSelf->__PVT__way_valid_7_1;
    } else if ((6U == (IData)(vlSelf->__PVT__iTagChecker_io_way_valid_r))) {
        vlSelf->__PVT___GEN_22 = vlSelf->__PVT__way_valid_6_0;
        vlSelf->__PVT___GEN_54 = vlSelf->__PVT__way_valid_6_1;
    } else if ((5U == (IData)(vlSelf->__PVT__iTagChecker_io_way_valid_r))) {
        vlSelf->__PVT___GEN_22 = vlSelf->__PVT__way_valid_5_0;
        vlSelf->__PVT___GEN_54 = vlSelf->__PVT__way_valid_5_1;
    } else if ((4U == (IData)(vlSelf->__PVT__iTagChecker_io_way_valid_r))) {
        vlSelf->__PVT___GEN_22 = vlSelf->__PVT__way_valid_4_0;
        vlSelf->__PVT___GEN_54 = vlSelf->__PVT__way_valid_4_1;
    } else if ((3U == (IData)(vlSelf->__PVT__iTagChecker_io_way_valid_r))) {
        vlSelf->__PVT___GEN_22 = vlSelf->__PVT__way_valid_3_0;
        vlSelf->__PVT___GEN_54 = vlSelf->__PVT__way_valid_3_1;
    } else if ((2U == (IData)(vlSelf->__PVT__iTagChecker_io_way_valid_r))) {
        vlSelf->__PVT___GEN_22 = vlSelf->__PVT__way_valid_2_0;
        vlSelf->__PVT___GEN_54 = vlSelf->__PVT__way_valid_2_1;
    } else if ((1U == (IData)(vlSelf->__PVT__iTagChecker_io_way_valid_r))) {
        vlSelf->__PVT___GEN_22 = vlSelf->__PVT__way_valid_1_0;
        vlSelf->__PVT___GEN_54 = vlSelf->__PVT__way_valid_1_1;
    } else {
        vlSelf->__PVT___GEN_22 = vlSelf->__PVT__way_valid_0_0;
        vlSelf->__PVT___GEN_54 = vlSelf->__PVT__way_valid_0_1;
    }
    vlSelf->__PVT__tagBodyAccess__DOT__bypass_mask_bypass 
        = ((((IData)(vlSelf->__PVT__tagBodyAccess__DOT__bypass_mask_need_check) 
             & ((IData)(vlSelf->__PVT__tagBodyAccess__DOT__bypass_mask_raddr_reg) 
                == (IData)(vlSelf->__PVT__tagBodyAccess__DOT__bypass_mask_waddr_reg)))
             ? 3U : 0U) & (IData)(vlSelf->__PVT__tagBodyAccess__DOT__bypass_mask_bypass_REG));
    if ((0xdU == (0x1fU & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__icache__DOT__mshrAccess_io_missRspOut_bits_blockAddr))) {
        __PVT___GEN_78 = vlSelf->__PVT__way_valid_13_0;
        __PVT___GEN_110 = vlSelf->__PVT__way_valid_13_1;
    } else if ((0xcU == (0x1fU & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__icache__DOT__mshrAccess_io_missRspOut_bits_blockAddr))) {
        __PVT___GEN_78 = vlSelf->__PVT__way_valid_12_0;
        __PVT___GEN_110 = vlSelf->__PVT__way_valid_12_1;
    } else if ((0xbU == (0x1fU & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__icache__DOT__mshrAccess_io_missRspOut_bits_blockAddr))) {
        __PVT___GEN_78 = vlSelf->__PVT__way_valid_11_0;
        __PVT___GEN_110 = vlSelf->__PVT__way_valid_11_1;
    } else if ((0xaU == (0x1fU & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__icache__DOT__mshrAccess_io_missRspOut_bits_blockAddr))) {
        __PVT___GEN_78 = vlSelf->__PVT__way_valid_10_0;
        __PVT___GEN_110 = vlSelf->__PVT__way_valid_10_1;
    } else if ((9U == (0x1fU & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__icache__DOT__mshrAccess_io_missRspOut_bits_blockAddr))) {
        __PVT___GEN_78 = vlSelf->__PVT__way_valid_9_0;
        __PVT___GEN_110 = vlSelf->__PVT__way_valid_9_1;
    } else if ((8U == (0x1fU & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__icache__DOT__mshrAccess_io_missRspOut_bits_blockAddr))) {
        __PVT___GEN_78 = vlSelf->__PVT__way_valid_8_0;
        __PVT___GEN_110 = vlSelf->__PVT__way_valid_8_1;
    } else if ((7U == (0x1fU & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__icache__DOT__mshrAccess_io_missRspOut_bits_blockAddr))) {
        __PVT___GEN_78 = vlSelf->__PVT__way_valid_7_0;
        __PVT___GEN_110 = vlSelf->__PVT__way_valid_7_1;
    } else if ((6U == (0x1fU & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__icache__DOT__mshrAccess_io_missRspOut_bits_blockAddr))) {
        __PVT___GEN_78 = vlSelf->__PVT__way_valid_6_0;
        __PVT___GEN_110 = vlSelf->__PVT__way_valid_6_1;
    } else if ((5U == (0x1fU & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__icache__DOT__mshrAccess_io_missRspOut_bits_blockAddr))) {
        __PVT___GEN_78 = vlSelf->__PVT__way_valid_5_0;
        __PVT___GEN_110 = vlSelf->__PVT__way_valid_5_1;
    } else if ((4U == (0x1fU & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__icache__DOT__mshrAccess_io_missRspOut_bits_blockAddr))) {
        __PVT___GEN_78 = vlSelf->__PVT__way_valid_4_0;
        __PVT___GEN_110 = vlSelf->__PVT__way_valid_4_1;
    } else if ((3U == (0x1fU & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__icache__DOT__mshrAccess_io_missRspOut_bits_blockAddr))) {
        __PVT___GEN_78 = vlSelf->__PVT__way_valid_3_0;
        __PVT___GEN_110 = vlSelf->__PVT__way_valid_3_1;
    } else if ((2U == (0x1fU & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__icache__DOT__mshrAccess_io_missRspOut_bits_blockAddr))) {
        __PVT___GEN_78 = vlSelf->__PVT__way_valid_2_0;
        __PVT___GEN_110 = vlSelf->__PVT__way_valid_2_1;
    } else if ((1U == (0x1fU & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__icache__DOT__mshrAccess_io_missRspOut_bits_blockAddr))) {
        __PVT___GEN_78 = vlSelf->__PVT__way_valid_1_0;
        __PVT___GEN_110 = vlSelf->__PVT__way_valid_1_1;
    } else {
        __PVT___GEN_78 = vlSelf->__PVT__way_valid_0_0;
        __PVT___GEN_110 = vlSelf->__PVT__way_valid_0_1;
    }
    __PVT__iTagChecker__DOT___io_waymask_T_3 = (((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__icache__DOT__pipeReqAddr_st1 
                                                  >> 9U) 
                                                 == 
                                                 (0x7fffffU 
                                                  & ((IData)(vlSelf->__PVT__tagBodyAccess__DOT__rdata_REG)
                                                      ? 
                                                     ((2U 
                                                       & (IData)(vlSelf->__PVT__tagBodyAccess__DOT__bypass_mask_bypass))
                                                       ? (IData)(vlSelf->__PVT__tagBodyAccess__DOT__bypass_wdata_lfsr_1)
                                                       : vlSelf->__PVT__tagBodyAccess__DOT__array_1_raw_rdata_data)
                                                      : vlSelf->__PVT__tagBodyAccess__DOT__rdata_r_1))) 
                                                & ((0x1fU 
                                                    == (IData)(vlSelf->__PVT__iTagChecker_io_way_valid_r))
                                                    ? (IData)(vlSelf->__PVT__way_valid_31_1)
                                                    : 
                                                   ((0x1eU 
                                                     == (IData)(vlSelf->__PVT__iTagChecker_io_way_valid_r))
                                                     ? (IData)(vlSelf->__PVT__way_valid_30_1)
                                                     : 
                                                    ((0x1dU 
                                                      == (IData)(vlSelf->__PVT__iTagChecker_io_way_valid_r))
                                                      ? (IData)(vlSelf->__PVT__way_valid_29_1)
                                                      : 
                                                     ((0x1cU 
                                                       == (IData)(vlSelf->__PVT__iTagChecker_io_way_valid_r))
                                                       ? (IData)(vlSelf->__PVT__way_valid_28_1)
                                                       : 
                                                      ((0x1bU 
                                                        == (IData)(vlSelf->__PVT__iTagChecker_io_way_valid_r))
                                                        ? (IData)(vlSelf->__PVT__way_valid_27_1)
                                                        : 
                                                       ((0x1aU 
                                                         == (IData)(vlSelf->__PVT__iTagChecker_io_way_valid_r))
                                                         ? (IData)(vlSelf->__PVT__way_valid_26_1)
                                                         : 
                                                        ((0x19U 
                                                          == (IData)(vlSelf->__PVT__iTagChecker_io_way_valid_r))
                                                          ? (IData)(vlSelf->__PVT__way_valid_25_1)
                                                          : 
                                                         ((0x18U 
                                                           == (IData)(vlSelf->__PVT__iTagChecker_io_way_valid_r))
                                                           ? (IData)(vlSelf->__PVT__way_valid_24_1)
                                                           : 
                                                          ((0x17U 
                                                            == (IData)(vlSelf->__PVT__iTagChecker_io_way_valid_r))
                                                            ? (IData)(vlSelf->__PVT__way_valid_23_1)
                                                            : 
                                                           ((0x16U 
                                                             == (IData)(vlSelf->__PVT__iTagChecker_io_way_valid_r))
                                                             ? (IData)(vlSelf->__PVT__way_valid_22_1)
                                                             : (IData)(vlSelf->__PVT___GEN_54))))))))))));
    vlSelf->__PVT__iTagChecker__DOT___io_waymask_T_1 
        = (((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__icache__DOT__pipeReqAddr_st1 
             >> 9U) == (0x7fffffU & ((IData)(vlSelf->__PVT__tagBodyAccess__DOT__rdata_REG)
                                      ? ((1U & (IData)(vlSelf->__PVT__tagBodyAccess__DOT__bypass_mask_bypass))
                                          ? (IData)(vlSelf->__PVT__tagBodyAccess__DOT__bypass_wdata_lfsr)
                                          : vlSelf->__PVT__tagBodyAccess__DOT__array_0_raw_rdata_data)
                                      : vlSelf->__PVT__tagBodyAccess__DOT__rdata_r_0))) 
           & ((0x1fU == (IData)(vlSelf->__PVT__iTagChecker_io_way_valid_r))
               ? (IData)(vlSelf->__PVT__way_valid_31_0)
               : ((0x1eU == (IData)(vlSelf->__PVT__iTagChecker_io_way_valid_r))
                   ? (IData)(vlSelf->__PVT__way_valid_30_0)
                   : ((0x1dU == (IData)(vlSelf->__PVT__iTagChecker_io_way_valid_r))
                       ? (IData)(vlSelf->__PVT__way_valid_29_0)
                       : ((0x1cU == (IData)(vlSelf->__PVT__iTagChecker_io_way_valid_r))
                           ? (IData)(vlSelf->__PVT__way_valid_28_0)
                           : ((0x1bU == (IData)(vlSelf->__PVT__iTagChecker_io_way_valid_r))
                               ? (IData)(vlSelf->__PVT__way_valid_27_0)
                               : ((0x1aU == (IData)(vlSelf->__PVT__iTagChecker_io_way_valid_r))
                                   ? (IData)(vlSelf->__PVT__way_valid_26_0)
                                   : ((0x19U == (IData)(vlSelf->__PVT__iTagChecker_io_way_valid_r))
                                       ? (IData)(vlSelf->__PVT__way_valid_25_0)
                                       : ((0x18U == (IData)(vlSelf->__PVT__iTagChecker_io_way_valid_r))
                                           ? (IData)(vlSelf->__PVT__way_valid_24_0)
                                           : ((0x17U 
                                               == (IData)(vlSelf->__PVT__iTagChecker_io_way_valid_r))
                                               ? (IData)(vlSelf->__PVT__way_valid_23_0)
                                               : ((0x16U 
                                                   == (IData)(vlSelf->__PVT__iTagChecker_io_way_valid_r))
                                                   ? (IData)(vlSelf->__PVT__way_valid_22_0)
                                                   : (IData)(vlSelf->__PVT___GEN_22))))))))))));
    if ((0x1aU == (0x1fU & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__icache__DOT__mshrAccess_io_missRspOut_bits_blockAddr))) {
        __PVT___GEN_91 = vlSelf->__PVT__way_valid_26_0;
        __PVT___GEN_123 = vlSelf->__PVT__way_valid_26_1;
    } else if ((0x19U == (0x1fU & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__icache__DOT__mshrAccess_io_missRspOut_bits_blockAddr))) {
        __PVT___GEN_91 = vlSelf->__PVT__way_valid_25_0;
        __PVT___GEN_123 = vlSelf->__PVT__way_valid_25_1;
    } else if ((0x18U == (0x1fU & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__icache__DOT__mshrAccess_io_missRspOut_bits_blockAddr))) {
        __PVT___GEN_91 = vlSelf->__PVT__way_valid_24_0;
        __PVT___GEN_123 = vlSelf->__PVT__way_valid_24_1;
    } else if ((0x17U == (0x1fU & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__icache__DOT__mshrAccess_io_missRspOut_bits_blockAddr))) {
        __PVT___GEN_91 = vlSelf->__PVT__way_valid_23_0;
        __PVT___GEN_123 = vlSelf->__PVT__way_valid_23_1;
    } else if ((0x16U == (0x1fU & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__icache__DOT__mshrAccess_io_missRspOut_bits_blockAddr))) {
        __PVT___GEN_91 = vlSelf->__PVT__way_valid_22_0;
        __PVT___GEN_123 = vlSelf->__PVT__way_valid_22_1;
    } else if ((0x15U == (0x1fU & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__icache__DOT__mshrAccess_io_missRspOut_bits_blockAddr))) {
        __PVT___GEN_91 = vlSelf->__PVT__way_valid_21_0;
        __PVT___GEN_123 = vlSelf->__PVT__way_valid_21_1;
    } else if ((0x14U == (0x1fU & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__icache__DOT__mshrAccess_io_missRspOut_bits_blockAddr))) {
        __PVT___GEN_91 = vlSelf->__PVT__way_valid_20_0;
        __PVT___GEN_123 = vlSelf->__PVT__way_valid_20_1;
    } else if ((0x13U == (0x1fU & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__icache__DOT__mshrAccess_io_missRspOut_bits_blockAddr))) {
        __PVT___GEN_91 = vlSelf->__PVT__way_valid_19_0;
        __PVT___GEN_123 = vlSelf->__PVT__way_valid_19_1;
    } else if ((0x12U == (0x1fU & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__icache__DOT__mshrAccess_io_missRspOut_bits_blockAddr))) {
        __PVT___GEN_91 = vlSelf->__PVT__way_valid_18_0;
        __PVT___GEN_123 = vlSelf->__PVT__way_valid_18_1;
    } else if ((0x11U == (0x1fU & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__icache__DOT__mshrAccess_io_missRspOut_bits_blockAddr))) {
        __PVT___GEN_91 = vlSelf->__PVT__way_valid_17_0;
        __PVT___GEN_123 = vlSelf->__PVT__way_valid_17_1;
    } else if ((0x10U == (0x1fU & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__icache__DOT__mshrAccess_io_missRspOut_bits_blockAddr))) {
        __PVT___GEN_91 = vlSelf->__PVT__way_valid_16_0;
        __PVT___GEN_123 = vlSelf->__PVT__way_valid_16_1;
    } else if ((0xfU == (0x1fU & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__icache__DOT__mshrAccess_io_missRspOut_bits_blockAddr))) {
        __PVT___GEN_91 = vlSelf->__PVT__way_valid_15_0;
        __PVT___GEN_123 = vlSelf->__PVT__way_valid_15_1;
    } else if ((0xeU == (0x1fU & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__icache__DOT__mshrAccess_io_missRspOut_bits_blockAddr))) {
        __PVT___GEN_91 = vlSelf->__PVT__way_valid_14_0;
        __PVT___GEN_123 = vlSelf->__PVT__way_valid_14_1;
    } else {
        __PVT___GEN_91 = __PVT___GEN_78;
        __PVT___GEN_123 = __PVT___GEN_110;
    }
    vlSelf->__PVT__io_waymaskHit_st1 = (((IData)(__PVT__iTagChecker__DOT___io_waymask_T_3) 
                                         << 1U) | (IData)(vlSelf->__PVT__iTagChecker__DOT___io_waymask_T_1));
    __PVT__Replacement__DOT___io_waymask_T_4 = ((0x1fU 
                                                 == 
                                                 (0x1fU 
                                                  & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__icache__DOT__mshrAccess_io_missRspOut_bits_blockAddr))
                                                 ? (IData)(vlSelf->__PVT__way_valid_31_1)
                                                 : 
                                                ((0x1eU 
                                                  == 
                                                  (0x1fU 
                                                   & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__icache__DOT__mshrAccess_io_missRspOut_bits_blockAddr))
                                                  ? (IData)(vlSelf->__PVT__way_valid_30_1)
                                                  : 
                                                 ((0x1dU 
                                                   == 
                                                   (0x1fU 
                                                    & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__icache__DOT__mshrAccess_io_missRspOut_bits_blockAddr))
                                                   ? (IData)(vlSelf->__PVT__way_valid_29_1)
                                                   : 
                                                  ((0x1cU 
                                                    == 
                                                    (0x1fU 
                                                     & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__icache__DOT__mshrAccess_io_missRspOut_bits_blockAddr))
                                                    ? (IData)(vlSelf->__PVT__way_valid_28_1)
                                                    : 
                                                   ((0x1bU 
                                                     == 
                                                     (0x1fU 
                                                      & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__icache__DOT__mshrAccess_io_missRspOut_bits_blockAddr))
                                                     ? (IData)(vlSelf->__PVT__way_valid_27_1)
                                                     : (IData)(__PVT___GEN_123))))));
    vlSelf->__PVT__Replacement_io_validbits_of_set 
        = ((((0x1fU == (0x1fU & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__icache__DOT__mshrAccess_io_missRspOut_bits_blockAddr))
              ? (IData)(vlSelf->__PVT__way_valid_31_0)
              : ((0x1eU == (0x1fU & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__icache__DOT__mshrAccess_io_missRspOut_bits_blockAddr))
                  ? (IData)(vlSelf->__PVT__way_valid_30_0)
                  : ((0x1dU == (0x1fU & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__icache__DOT__mshrAccess_io_missRspOut_bits_blockAddr))
                      ? (IData)(vlSelf->__PVT__way_valid_29_0)
                      : ((0x1cU == (0x1fU & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__icache__DOT__mshrAccess_io_missRspOut_bits_blockAddr))
                          ? (IData)(vlSelf->__PVT__way_valid_28_0)
                          : ((0x1bU == (0x1fU & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__icache__DOT__mshrAccess_io_missRspOut_bits_blockAddr))
                              ? (IData)(vlSelf->__PVT__way_valid_27_0)
                              : (IData)(__PVT___GEN_91)))))) 
            << 1U) | (IData)(__PVT__Replacement__DOT___io_waymask_T_4));
    vlSelf->__PVT__io_waymaskReplacement = (3U & ((3U 
                                                   == (IData)(vlSelf->__PVT__Replacement_io_validbits_of_set))
                                                   ? (IData)(vlSelf->__PVT__Replacement__DOT__victim_1Hidx)
                                                   : 
                                                  ((IData)(1U) 
                                                   << (IData)(__PVT__Replacement__DOT___io_waymask_T_4))));
    vlSelf->__PVT___GEN_129 = (((~ ((IData)(vlSelf->__PVT__io_waymaskReplacement) 
                                    >> 1U)) & (0U == 
                                               (0x1fU 
                                                & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__icache__DOT__mshrAccess_io_missRspOut_bits_blockAddr))) 
                               | (IData)(vlSelf->__PVT__way_valid_0_0));
    vlSelf->__PVT___GEN_130 = (((0U == (0x1fU & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__icache__DOT__mshrAccess_io_missRspOut_bits_blockAddr)) 
                                & ((IData)(vlSelf->__PVT__io_waymaskReplacement) 
                                   >> 1U)) | (IData)(vlSelf->__PVT__way_valid_0_1));
    vlSelf->__PVT___GEN_131 = (((~ ((IData)(vlSelf->__PVT__io_waymaskReplacement) 
                                    >> 1U)) & (1U == 
                                               (0x1fU 
                                                & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__icache__DOT__mshrAccess_io_missRspOut_bits_blockAddr))) 
                               | (IData)(vlSelf->__PVT__way_valid_1_0));
    vlSelf->__PVT___GEN_132 = (((1U == (0x1fU & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__icache__DOT__mshrAccess_io_missRspOut_bits_blockAddr)) 
                                & ((IData)(vlSelf->__PVT__io_waymaskReplacement) 
                                   >> 1U)) | (IData)(vlSelf->__PVT__way_valid_1_1));
    vlSelf->__PVT___GEN_133 = (((~ ((IData)(vlSelf->__PVT__io_waymaskReplacement) 
                                    >> 1U)) & (2U == 
                                               (0x1fU 
                                                & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__icache__DOT__mshrAccess_io_missRspOut_bits_blockAddr))) 
                               | (IData)(vlSelf->__PVT__way_valid_2_0));
    vlSelf->__PVT___GEN_134 = (((2U == (0x1fU & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__icache__DOT__mshrAccess_io_missRspOut_bits_blockAddr)) 
                                & ((IData)(vlSelf->__PVT__io_waymaskReplacement) 
                                   >> 1U)) | (IData)(vlSelf->__PVT__way_valid_2_1));
    vlSelf->__PVT___GEN_135 = (((~ ((IData)(vlSelf->__PVT__io_waymaskReplacement) 
                                    >> 1U)) & (3U == 
                                               (0x1fU 
                                                & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__icache__DOT__mshrAccess_io_missRspOut_bits_blockAddr))) 
                               | (IData)(vlSelf->__PVT__way_valid_3_0));
    vlSelf->__PVT___GEN_136 = (((3U == (0x1fU & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__icache__DOT__mshrAccess_io_missRspOut_bits_blockAddr)) 
                                & ((IData)(vlSelf->__PVT__io_waymaskReplacement) 
                                   >> 1U)) | (IData)(vlSelf->__PVT__way_valid_3_1));
    vlSelf->__PVT___GEN_137 = (((~ ((IData)(vlSelf->__PVT__io_waymaskReplacement) 
                                    >> 1U)) & (4U == 
                                               (0x1fU 
                                                & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__icache__DOT__mshrAccess_io_missRspOut_bits_blockAddr))) 
                               | (IData)(vlSelf->__PVT__way_valid_4_0));
    vlSelf->__PVT___GEN_138 = (((4U == (0x1fU & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__icache__DOT__mshrAccess_io_missRspOut_bits_blockAddr)) 
                                & ((IData)(vlSelf->__PVT__io_waymaskReplacement) 
                                   >> 1U)) | (IData)(vlSelf->__PVT__way_valid_4_1));
    vlSelf->__PVT___GEN_139 = (((~ ((IData)(vlSelf->__PVT__io_waymaskReplacement) 
                                    >> 1U)) & (5U == 
                                               (0x1fU 
                                                & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__icache__DOT__mshrAccess_io_missRspOut_bits_blockAddr))) 
                               | (IData)(vlSelf->__PVT__way_valid_5_0));
    vlSelf->__PVT___GEN_140 = (((5U == (0x1fU & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__icache__DOT__mshrAccess_io_missRspOut_bits_blockAddr)) 
                                & ((IData)(vlSelf->__PVT__io_waymaskReplacement) 
                                   >> 1U)) | (IData)(vlSelf->__PVT__way_valid_5_1));
    vlSelf->__PVT___GEN_141 = (((~ ((IData)(vlSelf->__PVT__io_waymaskReplacement) 
                                    >> 1U)) & (6U == 
                                               (0x1fU 
                                                & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__icache__DOT__mshrAccess_io_missRspOut_bits_blockAddr))) 
                               | (IData)(vlSelf->__PVT__way_valid_6_0));
    vlSelf->__PVT___GEN_142 = (((6U == (0x1fU & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__icache__DOT__mshrAccess_io_missRspOut_bits_blockAddr)) 
                                & ((IData)(vlSelf->__PVT__io_waymaskReplacement) 
                                   >> 1U)) | (IData)(vlSelf->__PVT__way_valid_6_1));
    vlSelf->__PVT___GEN_143 = (((~ ((IData)(vlSelf->__PVT__io_waymaskReplacement) 
                                    >> 1U)) & (7U == 
                                               (0x1fU 
                                                & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__icache__DOT__mshrAccess_io_missRspOut_bits_blockAddr))) 
                               | (IData)(vlSelf->__PVT__way_valid_7_0));
    vlSelf->__PVT___GEN_144 = (((7U == (0x1fU & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__icache__DOT__mshrAccess_io_missRspOut_bits_blockAddr)) 
                                & ((IData)(vlSelf->__PVT__io_waymaskReplacement) 
                                   >> 1U)) | (IData)(vlSelf->__PVT__way_valid_7_1));
    vlSelf->__PVT___GEN_145 = (((~ ((IData)(vlSelf->__PVT__io_waymaskReplacement) 
                                    >> 1U)) & (8U == 
                                               (0x1fU 
                                                & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__icache__DOT__mshrAccess_io_missRspOut_bits_blockAddr))) 
                               | (IData)(vlSelf->__PVT__way_valid_8_0));
    vlSelf->__PVT___GEN_146 = (((8U == (0x1fU & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__icache__DOT__mshrAccess_io_missRspOut_bits_blockAddr)) 
                                & ((IData)(vlSelf->__PVT__io_waymaskReplacement) 
                                   >> 1U)) | (IData)(vlSelf->__PVT__way_valid_8_1));
    vlSelf->__PVT___GEN_147 = (((~ ((IData)(vlSelf->__PVT__io_waymaskReplacement) 
                                    >> 1U)) & (9U == 
                                               (0x1fU 
                                                & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__icache__DOT__mshrAccess_io_missRspOut_bits_blockAddr))) 
                               | (IData)(vlSelf->__PVT__way_valid_9_0));
    vlSelf->__PVT___GEN_148 = (((9U == (0x1fU & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__icache__DOT__mshrAccess_io_missRspOut_bits_blockAddr)) 
                                & ((IData)(vlSelf->__PVT__io_waymaskReplacement) 
                                   >> 1U)) | (IData)(vlSelf->__PVT__way_valid_9_1));
    vlSelf->__PVT___GEN_149 = (((~ ((IData)(vlSelf->__PVT__io_waymaskReplacement) 
                                    >> 1U)) & (0xaU 
                                               == (0x1fU 
                                                   & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__icache__DOT__mshrAccess_io_missRspOut_bits_blockAddr))) 
                               | (IData)(vlSelf->__PVT__way_valid_10_0));
    vlSelf->__PVT___GEN_150 = (((0xaU == (0x1fU & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__icache__DOT__mshrAccess_io_missRspOut_bits_blockAddr)) 
                                & ((IData)(vlSelf->__PVT__io_waymaskReplacement) 
                                   >> 1U)) | (IData)(vlSelf->__PVT__way_valid_10_1));
    vlSelf->__PVT___GEN_151 = (((~ ((IData)(vlSelf->__PVT__io_waymaskReplacement) 
                                    >> 1U)) & (0xbU 
                                               == (0x1fU 
                                                   & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__icache__DOT__mshrAccess_io_missRspOut_bits_blockAddr))) 
                               | (IData)(vlSelf->__PVT__way_valid_11_0));
    vlSelf->__PVT___GEN_152 = (((0xbU == (0x1fU & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__icache__DOT__mshrAccess_io_missRspOut_bits_blockAddr)) 
                                & ((IData)(vlSelf->__PVT__io_waymaskReplacement) 
                                   >> 1U)) | (IData)(vlSelf->__PVT__way_valid_11_1));
    vlSelf->__PVT___GEN_153 = (((~ ((IData)(vlSelf->__PVT__io_waymaskReplacement) 
                                    >> 1U)) & (0xcU 
                                               == (0x1fU 
                                                   & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__icache__DOT__mshrAccess_io_missRspOut_bits_blockAddr))) 
                               | (IData)(vlSelf->__PVT__way_valid_12_0));
    vlSelf->__PVT___GEN_154 = (((0xcU == (0x1fU & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__icache__DOT__mshrAccess_io_missRspOut_bits_blockAddr)) 
                                & ((IData)(vlSelf->__PVT__io_waymaskReplacement) 
                                   >> 1U)) | (IData)(vlSelf->__PVT__way_valid_12_1));
    vlSelf->__PVT___GEN_155 = (((~ ((IData)(vlSelf->__PVT__io_waymaskReplacement) 
                                    >> 1U)) & (0xdU 
                                               == (0x1fU 
                                                   & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__icache__DOT__mshrAccess_io_missRspOut_bits_blockAddr))) 
                               | (IData)(vlSelf->__PVT__way_valid_13_0));
    vlSelf->__PVT___GEN_156 = (((0xdU == (0x1fU & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__icache__DOT__mshrAccess_io_missRspOut_bits_blockAddr)) 
                                & ((IData)(vlSelf->__PVT__io_waymaskReplacement) 
                                   >> 1U)) | (IData)(vlSelf->__PVT__way_valid_13_1));
    vlSelf->__PVT___GEN_157 = (((~ ((IData)(vlSelf->__PVT__io_waymaskReplacement) 
                                    >> 1U)) & (0xeU 
                                               == (0x1fU 
                                                   & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__icache__DOT__mshrAccess_io_missRspOut_bits_blockAddr))) 
                               | (IData)(vlSelf->__PVT__way_valid_14_0));
    vlSelf->__PVT___GEN_158 = (((0xeU == (0x1fU & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__icache__DOT__mshrAccess_io_missRspOut_bits_blockAddr)) 
                                & ((IData)(vlSelf->__PVT__io_waymaskReplacement) 
                                   >> 1U)) | (IData)(vlSelf->__PVT__way_valid_14_1));
    vlSelf->__PVT___GEN_159 = (((~ ((IData)(vlSelf->__PVT__io_waymaskReplacement) 
                                    >> 1U)) & (0xfU 
                                               == (0x1fU 
                                                   & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__icache__DOT__mshrAccess_io_missRspOut_bits_blockAddr))) 
                               | (IData)(vlSelf->__PVT__way_valid_15_0));
    vlSelf->__PVT___GEN_160 = (((0xfU == (0x1fU & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__icache__DOT__mshrAccess_io_missRspOut_bits_blockAddr)) 
                                & ((IData)(vlSelf->__PVT__io_waymaskReplacement) 
                                   >> 1U)) | (IData)(vlSelf->__PVT__way_valid_15_1));
    vlSelf->__PVT___GEN_161 = (((~ ((IData)(vlSelf->__PVT__io_waymaskReplacement) 
                                    >> 1U)) & (0x10U 
                                               == (0x1fU 
                                                   & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__icache__DOT__mshrAccess_io_missRspOut_bits_blockAddr))) 
                               | (IData)(vlSelf->__PVT__way_valid_16_0));
    vlSelf->__PVT___GEN_162 = (((0x10U == (0x1fU & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__icache__DOT__mshrAccess_io_missRspOut_bits_blockAddr)) 
                                & ((IData)(vlSelf->__PVT__io_waymaskReplacement) 
                                   >> 1U)) | (IData)(vlSelf->__PVT__way_valid_16_1));
    vlSelf->__PVT___GEN_163 = (((~ ((IData)(vlSelf->__PVT__io_waymaskReplacement) 
                                    >> 1U)) & (0x11U 
                                               == (0x1fU 
                                                   & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__icache__DOT__mshrAccess_io_missRspOut_bits_blockAddr))) 
                               | (IData)(vlSelf->__PVT__way_valid_17_0));
    vlSelf->__PVT___GEN_164 = (((0x11U == (0x1fU & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__icache__DOT__mshrAccess_io_missRspOut_bits_blockAddr)) 
                                & ((IData)(vlSelf->__PVT__io_waymaskReplacement) 
                                   >> 1U)) | (IData)(vlSelf->__PVT__way_valid_17_1));
    vlSelf->__PVT___GEN_165 = (((~ ((IData)(vlSelf->__PVT__io_waymaskReplacement) 
                                    >> 1U)) & (0x12U 
                                               == (0x1fU 
                                                   & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__icache__DOT__mshrAccess_io_missRspOut_bits_blockAddr))) 
                               | (IData)(vlSelf->__PVT__way_valid_18_0));
    vlSelf->__PVT___GEN_166 = (((0x12U == (0x1fU & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__icache__DOT__mshrAccess_io_missRspOut_bits_blockAddr)) 
                                & ((IData)(vlSelf->__PVT__io_waymaskReplacement) 
                                   >> 1U)) | (IData)(vlSelf->__PVT__way_valid_18_1));
    vlSelf->__PVT___GEN_167 = (((~ ((IData)(vlSelf->__PVT__io_waymaskReplacement) 
                                    >> 1U)) & (0x13U 
                                               == (0x1fU 
                                                   & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__icache__DOT__mshrAccess_io_missRspOut_bits_blockAddr))) 
                               | (IData)(vlSelf->__PVT__way_valid_19_0));
    vlSelf->__PVT___GEN_168 = (((0x13U == (0x1fU & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__icache__DOT__mshrAccess_io_missRspOut_bits_blockAddr)) 
                                & ((IData)(vlSelf->__PVT__io_waymaskReplacement) 
                                   >> 1U)) | (IData)(vlSelf->__PVT__way_valid_19_1));
    vlSelf->__PVT___GEN_169 = (((~ ((IData)(vlSelf->__PVT__io_waymaskReplacement) 
                                    >> 1U)) & (0x14U 
                                               == (0x1fU 
                                                   & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__icache__DOT__mshrAccess_io_missRspOut_bits_blockAddr))) 
                               | (IData)(vlSelf->__PVT__way_valid_20_0));
    vlSelf->__PVT___GEN_170 = (((0x14U == (0x1fU & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__icache__DOT__mshrAccess_io_missRspOut_bits_blockAddr)) 
                                & ((IData)(vlSelf->__PVT__io_waymaskReplacement) 
                                   >> 1U)) | (IData)(vlSelf->__PVT__way_valid_20_1));
    vlSelf->__PVT___GEN_171 = (((~ ((IData)(vlSelf->__PVT__io_waymaskReplacement) 
                                    >> 1U)) & (0x15U 
                                               == (0x1fU 
                                                   & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__icache__DOT__mshrAccess_io_missRspOut_bits_blockAddr))) 
                               | (IData)(vlSelf->__PVT__way_valid_21_0));
    vlSelf->__PVT___GEN_172 = (((0x15U == (0x1fU & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__icache__DOT__mshrAccess_io_missRspOut_bits_blockAddr)) 
                                & ((IData)(vlSelf->__PVT__io_waymaskReplacement) 
                                   >> 1U)) | (IData)(vlSelf->__PVT__way_valid_21_1));
    vlSelf->__PVT___GEN_173 = (((~ ((IData)(vlSelf->__PVT__io_waymaskReplacement) 
                                    >> 1U)) & (0x16U 
                                               == (0x1fU 
                                                   & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__icache__DOT__mshrAccess_io_missRspOut_bits_blockAddr))) 
                               | (IData)(vlSelf->__PVT__way_valid_22_0));
    vlSelf->__PVT___GEN_174 = (((0x16U == (0x1fU & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__icache__DOT__mshrAccess_io_missRspOut_bits_blockAddr)) 
                                & ((IData)(vlSelf->__PVT__io_waymaskReplacement) 
                                   >> 1U)) | (IData)(vlSelf->__PVT__way_valid_22_1));
    vlSelf->__PVT___GEN_175 = (((~ ((IData)(vlSelf->__PVT__io_waymaskReplacement) 
                                    >> 1U)) & (0x17U 
                                               == (0x1fU 
                                                   & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__icache__DOT__mshrAccess_io_missRspOut_bits_blockAddr))) 
                               | (IData)(vlSelf->__PVT__way_valid_23_0));
    vlSelf->__PVT___GEN_176 = (((0x17U == (0x1fU & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__icache__DOT__mshrAccess_io_missRspOut_bits_blockAddr)) 
                                & ((IData)(vlSelf->__PVT__io_waymaskReplacement) 
                                   >> 1U)) | (IData)(vlSelf->__PVT__way_valid_23_1));
    vlSelf->__PVT___GEN_177 = (((~ ((IData)(vlSelf->__PVT__io_waymaskReplacement) 
                                    >> 1U)) & (0x18U 
                                               == (0x1fU 
                                                   & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__icache__DOT__mshrAccess_io_missRspOut_bits_blockAddr))) 
                               | (IData)(vlSelf->__PVT__way_valid_24_0));
    vlSelf->__PVT___GEN_178 = (((0x18U == (0x1fU & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__icache__DOT__mshrAccess_io_missRspOut_bits_blockAddr)) 
                                & ((IData)(vlSelf->__PVT__io_waymaskReplacement) 
                                   >> 1U)) | (IData)(vlSelf->__PVT__way_valid_24_1));
    vlSelf->__PVT___GEN_179 = (((~ ((IData)(vlSelf->__PVT__io_waymaskReplacement) 
                                    >> 1U)) & (0x19U 
                                               == (0x1fU 
                                                   & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__icache__DOT__mshrAccess_io_missRspOut_bits_blockAddr))) 
                               | (IData)(vlSelf->__PVT__way_valid_25_0));
    vlSelf->__PVT___GEN_180 = (((0x19U == (0x1fU & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__icache__DOT__mshrAccess_io_missRspOut_bits_blockAddr)) 
                                & ((IData)(vlSelf->__PVT__io_waymaskReplacement) 
                                   >> 1U)) | (IData)(vlSelf->__PVT__way_valid_25_1));
    vlSelf->__PVT___GEN_181 = (((~ ((IData)(vlSelf->__PVT__io_waymaskReplacement) 
                                    >> 1U)) & (0x1aU 
                                               == (0x1fU 
                                                   & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__icache__DOT__mshrAccess_io_missRspOut_bits_blockAddr))) 
                               | (IData)(vlSelf->__PVT__way_valid_26_0));
    vlSelf->__PVT___GEN_182 = (((0x1aU == (0x1fU & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__icache__DOT__mshrAccess_io_missRspOut_bits_blockAddr)) 
                                & ((IData)(vlSelf->__PVT__io_waymaskReplacement) 
                                   >> 1U)) | (IData)(vlSelf->__PVT__way_valid_26_1));
    vlSelf->__PVT___GEN_183 = (((~ ((IData)(vlSelf->__PVT__io_waymaskReplacement) 
                                    >> 1U)) & (0x1bU 
                                               == (0x1fU 
                                                   & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__icache__DOT__mshrAccess_io_missRspOut_bits_blockAddr))) 
                               | (IData)(vlSelf->__PVT__way_valid_27_0));
    vlSelf->__PVT___GEN_184 = (((0x1bU == (0x1fU & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__icache__DOT__mshrAccess_io_missRspOut_bits_blockAddr)) 
                                & ((IData)(vlSelf->__PVT__io_waymaskReplacement) 
                                   >> 1U)) | (IData)(vlSelf->__PVT__way_valid_27_1));
    vlSelf->__PVT___GEN_185 = (((~ ((IData)(vlSelf->__PVT__io_waymaskReplacement) 
                                    >> 1U)) & (0x1cU 
                                               == (0x1fU 
                                                   & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__icache__DOT__mshrAccess_io_missRspOut_bits_blockAddr))) 
                               | (IData)(vlSelf->__PVT__way_valid_28_0));
    vlSelf->__PVT___GEN_186 = (((0x1cU == (0x1fU & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__icache__DOT__mshrAccess_io_missRspOut_bits_blockAddr)) 
                                & ((IData)(vlSelf->__PVT__io_waymaskReplacement) 
                                   >> 1U)) | (IData)(vlSelf->__PVT__way_valid_28_1));
    vlSelf->__PVT___GEN_187 = (((~ ((IData)(vlSelf->__PVT__io_waymaskReplacement) 
                                    >> 1U)) & (0x1dU 
                                               == (0x1fU 
                                                   & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__icache__DOT__mshrAccess_io_missRspOut_bits_blockAddr))) 
                               | (IData)(vlSelf->__PVT__way_valid_29_0));
    vlSelf->__PVT___GEN_188 = (((0x1dU == (0x1fU & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__icache__DOT__mshrAccess_io_missRspOut_bits_blockAddr)) 
                                & ((IData)(vlSelf->__PVT__io_waymaskReplacement) 
                                   >> 1U)) | (IData)(vlSelf->__PVT__way_valid_29_1));
    vlSelf->__PVT___GEN_189 = (((~ ((IData)(vlSelf->__PVT__io_waymaskReplacement) 
                                    >> 1U)) & (0x1eU 
                                               == (0x1fU 
                                                   & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__icache__DOT__mshrAccess_io_missRspOut_bits_blockAddr))) 
                               | (IData)(vlSelf->__PVT__way_valid_30_0));
    vlSelf->__PVT___GEN_190 = (((0x1eU == (0x1fU & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__icache__DOT__mshrAccess_io_missRspOut_bits_blockAddr)) 
                                & ((IData)(vlSelf->__PVT__io_waymaskReplacement) 
                                   >> 1U)) | (IData)(vlSelf->__PVT__way_valid_30_1));
    vlSelf->__PVT___GEN_191 = (((~ ((IData)(vlSelf->__PVT__io_waymaskReplacement) 
                                    >> 1U)) & (0x1fU 
                                               == (0x1fU 
                                                   & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__icache__DOT__mshrAccess_io_missRspOut_bits_blockAddr))) 
                               | (IData)(vlSelf->__PVT__way_valid_31_0));
    vlSelf->__PVT___GEN_192 = (((0x1fU == (0x1fU & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__icache__DOT__mshrAccess_io_missRspOut_bits_blockAddr)) 
                                & ((IData)(vlSelf->__PVT__io_waymaskReplacement) 
                                   >> 1U)) | (IData)(vlSelf->__PVT__way_valid_31_1));
}

VL_ATTR_COLD void VVentus_L1TagAccess___stl_sequent__TOP__GPGPU_top__DOT__SM_wrapper_1__dcache__DOT__TagAccess__0(VVentus_L1TagAccess* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VVentus__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VVentus_L1TagAccess___stl_sequent__TOP__GPGPU_top__DOT__SM_wrapper_1__dcache__DOT__TagAccess__0\n"); );
    // Init
    CData/*0:0*/ __PVT___GEN_78;
    CData/*0:0*/ __PVT___GEN_91;
    CData/*0:0*/ __PVT___GEN_110;
    CData/*0:0*/ __PVT___GEN_123;
    CData/*0:0*/ __PVT__iTagChecker__DOT___io_waymask_T_3;
    CData/*0:0*/ __PVT__Replacement__DOT___io_waymask_T_4;
    // Body
    vlSelf->__PVT__tagBodyAccess__DOT___bypass_wdata_lfsr_T_2 
        = (((QData)((IData)((1U & VL_REDXOR_8((0x1bULL 
                                               & vlSelf->__PVT__tagBodyAccess__DOT__bypass_wdata_lfsr))))) 
            << 0x3fU) | (vlSelf->__PVT__tagBodyAccess__DOT__bypass_wdata_lfsr 
                         >> 1U));
    vlSelf->__PVT__tagBodyAccess__DOT___bypass_wdata_lfsr_T_6 
        = (((QData)((IData)((1U & VL_REDXOR_8((0x1bULL 
                                               & vlSelf->__PVT__tagBodyAccess__DOT__bypass_wdata_lfsr_1))))) 
            << 0x3fU) | (vlSelf->__PVT__tagBodyAccess__DOT__bypass_wdata_lfsr_1 
                         >> 1U));
    vlSelf->__PVT__tagBodyAccess__DOT__array_0_raw_rdata_data 
        = vlSelf->__PVT__tagBodyAccess__DOT__array_0
        [vlSelf->__PVT__tagBodyAccess__DOT__array_0_raw_rdata_addr_pipe_0];
    vlSelf->__PVT__tagBodyAccess__DOT__array_1_raw_rdata_data 
        = vlSelf->__PVT__tagBodyAccess__DOT__array_1
        [vlSelf->__PVT__tagBodyAccess__DOT__array_1_raw_rdata_addr_pipe_0];
    if ((0x15U == (IData)(vlSelf->__PVT__iTagChecker_io_way_valid_r))) {
        vlSelf->__PVT___GEN_22 = vlSelf->__PVT__way_valid_21_0;
        vlSelf->__PVT___GEN_54 = vlSelf->__PVT__way_valid_21_1;
    } else if ((0x14U == (IData)(vlSelf->__PVT__iTagChecker_io_way_valid_r))) {
        vlSelf->__PVT___GEN_22 = vlSelf->__PVT__way_valid_20_0;
        vlSelf->__PVT___GEN_54 = vlSelf->__PVT__way_valid_20_1;
    } else if ((0x13U == (IData)(vlSelf->__PVT__iTagChecker_io_way_valid_r))) {
        vlSelf->__PVT___GEN_22 = vlSelf->__PVT__way_valid_19_0;
        vlSelf->__PVT___GEN_54 = vlSelf->__PVT__way_valid_19_1;
    } else if ((0x12U == (IData)(vlSelf->__PVT__iTagChecker_io_way_valid_r))) {
        vlSelf->__PVT___GEN_22 = vlSelf->__PVT__way_valid_18_0;
        vlSelf->__PVT___GEN_54 = vlSelf->__PVT__way_valid_18_1;
    } else if ((0x11U == (IData)(vlSelf->__PVT__iTagChecker_io_way_valid_r))) {
        vlSelf->__PVT___GEN_22 = vlSelf->__PVT__way_valid_17_0;
        vlSelf->__PVT___GEN_54 = vlSelf->__PVT__way_valid_17_1;
    } else if ((0x10U == (IData)(vlSelf->__PVT__iTagChecker_io_way_valid_r))) {
        vlSelf->__PVT___GEN_22 = vlSelf->__PVT__way_valid_16_0;
        vlSelf->__PVT___GEN_54 = vlSelf->__PVT__way_valid_16_1;
    } else if ((0xfU == (IData)(vlSelf->__PVT__iTagChecker_io_way_valid_r))) {
        vlSelf->__PVT___GEN_22 = vlSelf->__PVT__way_valid_15_0;
        vlSelf->__PVT___GEN_54 = vlSelf->__PVT__way_valid_15_1;
    } else if ((0xeU == (IData)(vlSelf->__PVT__iTagChecker_io_way_valid_r))) {
        vlSelf->__PVT___GEN_22 = vlSelf->__PVT__way_valid_14_0;
        vlSelf->__PVT___GEN_54 = vlSelf->__PVT__way_valid_14_1;
    } else if ((0xdU == (IData)(vlSelf->__PVT__iTagChecker_io_way_valid_r))) {
        vlSelf->__PVT___GEN_22 = vlSelf->__PVT__way_valid_13_0;
        vlSelf->__PVT___GEN_54 = vlSelf->__PVT__way_valid_13_1;
    } else if ((0xcU == (IData)(vlSelf->__PVT__iTagChecker_io_way_valid_r))) {
        vlSelf->__PVT___GEN_22 = vlSelf->__PVT__way_valid_12_0;
        vlSelf->__PVT___GEN_54 = vlSelf->__PVT__way_valid_12_1;
    } else if ((0xbU == (IData)(vlSelf->__PVT__iTagChecker_io_way_valid_r))) {
        vlSelf->__PVT___GEN_22 = vlSelf->__PVT__way_valid_11_0;
        vlSelf->__PVT___GEN_54 = vlSelf->__PVT__way_valid_11_1;
    } else if ((0xaU == (IData)(vlSelf->__PVT__iTagChecker_io_way_valid_r))) {
        vlSelf->__PVT___GEN_22 = vlSelf->__PVT__way_valid_10_0;
        vlSelf->__PVT___GEN_54 = vlSelf->__PVT__way_valid_10_1;
    } else if ((9U == (IData)(vlSelf->__PVT__iTagChecker_io_way_valid_r))) {
        vlSelf->__PVT___GEN_22 = vlSelf->__PVT__way_valid_9_0;
        vlSelf->__PVT___GEN_54 = vlSelf->__PVT__way_valid_9_1;
    } else if ((8U == (IData)(vlSelf->__PVT__iTagChecker_io_way_valid_r))) {
        vlSelf->__PVT___GEN_22 = vlSelf->__PVT__way_valid_8_0;
        vlSelf->__PVT___GEN_54 = vlSelf->__PVT__way_valid_8_1;
    } else if ((7U == (IData)(vlSelf->__PVT__iTagChecker_io_way_valid_r))) {
        vlSelf->__PVT___GEN_22 = vlSelf->__PVT__way_valid_7_0;
        vlSelf->__PVT___GEN_54 = vlSelf->__PVT__way_valid_7_1;
    } else if ((6U == (IData)(vlSelf->__PVT__iTagChecker_io_way_valid_r))) {
        vlSelf->__PVT___GEN_22 = vlSelf->__PVT__way_valid_6_0;
        vlSelf->__PVT___GEN_54 = vlSelf->__PVT__way_valid_6_1;
    } else if ((5U == (IData)(vlSelf->__PVT__iTagChecker_io_way_valid_r))) {
        vlSelf->__PVT___GEN_22 = vlSelf->__PVT__way_valid_5_0;
        vlSelf->__PVT___GEN_54 = vlSelf->__PVT__way_valid_5_1;
    } else if ((4U == (IData)(vlSelf->__PVT__iTagChecker_io_way_valid_r))) {
        vlSelf->__PVT___GEN_22 = vlSelf->__PVT__way_valid_4_0;
        vlSelf->__PVT___GEN_54 = vlSelf->__PVT__way_valid_4_1;
    } else if ((3U == (IData)(vlSelf->__PVT__iTagChecker_io_way_valid_r))) {
        vlSelf->__PVT___GEN_22 = vlSelf->__PVT__way_valid_3_0;
        vlSelf->__PVT___GEN_54 = vlSelf->__PVT__way_valid_3_1;
    } else if ((2U == (IData)(vlSelf->__PVT__iTagChecker_io_way_valid_r))) {
        vlSelf->__PVT___GEN_22 = vlSelf->__PVT__way_valid_2_0;
        vlSelf->__PVT___GEN_54 = vlSelf->__PVT__way_valid_2_1;
    } else if ((1U == (IData)(vlSelf->__PVT__iTagChecker_io_way_valid_r))) {
        vlSelf->__PVT___GEN_22 = vlSelf->__PVT__way_valid_1_0;
        vlSelf->__PVT___GEN_54 = vlSelf->__PVT__way_valid_1_1;
    } else {
        vlSelf->__PVT___GEN_22 = vlSelf->__PVT__way_valid_0_0;
        vlSelf->__PVT___GEN_54 = vlSelf->__PVT__way_valid_0_1;
    }
    vlSelf->__PVT__tagBodyAccess__DOT__bypass_mask_bypass 
        = ((((IData)(vlSelf->__PVT__tagBodyAccess__DOT__bypass_mask_need_check) 
             & ((IData)(vlSelf->__PVT__tagBodyAccess__DOT__bypass_mask_raddr_reg) 
                == (IData)(vlSelf->__PVT__tagBodyAccess__DOT__bypass_mask_waddr_reg)))
             ? 3U : 0U) & (IData)(vlSelf->__PVT__tagBodyAccess__DOT__bypass_mask_bypass_REG));
    if ((0xdU == (0x1fU & (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__dcache__DOT__memRsp_Q__DOT__ram_d_addr_io_deq_bits_MPORT_data 
                           >> 4U)))) {
        __PVT___GEN_78 = vlSelf->__PVT__way_valid_13_0;
        __PVT___GEN_110 = vlSelf->__PVT__way_valid_13_1;
    } else if ((0xcU == (0x1fU & (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__dcache__DOT__memRsp_Q__DOT__ram_d_addr_io_deq_bits_MPORT_data 
                                  >> 4U)))) {
        __PVT___GEN_78 = vlSelf->__PVT__way_valid_12_0;
        __PVT___GEN_110 = vlSelf->__PVT__way_valid_12_1;
    } else if ((0xbU == (0x1fU & (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__dcache__DOT__memRsp_Q__DOT__ram_d_addr_io_deq_bits_MPORT_data 
                                  >> 4U)))) {
        __PVT___GEN_78 = vlSelf->__PVT__way_valid_11_0;
        __PVT___GEN_110 = vlSelf->__PVT__way_valid_11_1;
    } else if ((0xaU == (0x1fU & (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__dcache__DOT__memRsp_Q__DOT__ram_d_addr_io_deq_bits_MPORT_data 
                                  >> 4U)))) {
        __PVT___GEN_78 = vlSelf->__PVT__way_valid_10_0;
        __PVT___GEN_110 = vlSelf->__PVT__way_valid_10_1;
    } else if ((9U == (0x1fU & (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__dcache__DOT__memRsp_Q__DOT__ram_d_addr_io_deq_bits_MPORT_data 
                                >> 4U)))) {
        __PVT___GEN_78 = vlSelf->__PVT__way_valid_9_0;
        __PVT___GEN_110 = vlSelf->__PVT__way_valid_9_1;
    } else if ((8U == (0x1fU & (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__dcache__DOT__memRsp_Q__DOT__ram_d_addr_io_deq_bits_MPORT_data 
                                >> 4U)))) {
        __PVT___GEN_78 = vlSelf->__PVT__way_valid_8_0;
        __PVT___GEN_110 = vlSelf->__PVT__way_valid_8_1;
    } else if ((7U == (0x1fU & (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__dcache__DOT__memRsp_Q__DOT__ram_d_addr_io_deq_bits_MPORT_data 
                                >> 4U)))) {
        __PVT___GEN_78 = vlSelf->__PVT__way_valid_7_0;
        __PVT___GEN_110 = vlSelf->__PVT__way_valid_7_1;
    } else if ((6U == (0x1fU & (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__dcache__DOT__memRsp_Q__DOT__ram_d_addr_io_deq_bits_MPORT_data 
                                >> 4U)))) {
        __PVT___GEN_78 = vlSelf->__PVT__way_valid_6_0;
        __PVT___GEN_110 = vlSelf->__PVT__way_valid_6_1;
    } else if ((5U == (0x1fU & (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__dcache__DOT__memRsp_Q__DOT__ram_d_addr_io_deq_bits_MPORT_data 
                                >> 4U)))) {
        __PVT___GEN_78 = vlSelf->__PVT__way_valid_5_0;
        __PVT___GEN_110 = vlSelf->__PVT__way_valid_5_1;
    } else if ((4U == (0x1fU & (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__dcache__DOT__memRsp_Q__DOT__ram_d_addr_io_deq_bits_MPORT_data 
                                >> 4U)))) {
        __PVT___GEN_78 = vlSelf->__PVT__way_valid_4_0;
        __PVT___GEN_110 = vlSelf->__PVT__way_valid_4_1;
    } else if ((3U == (0x1fU & (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__dcache__DOT__memRsp_Q__DOT__ram_d_addr_io_deq_bits_MPORT_data 
                                >> 4U)))) {
        __PVT___GEN_78 = vlSelf->__PVT__way_valid_3_0;
        __PVT___GEN_110 = vlSelf->__PVT__way_valid_3_1;
    } else if ((2U == (0x1fU & (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__dcache__DOT__memRsp_Q__DOT__ram_d_addr_io_deq_bits_MPORT_data 
                                >> 4U)))) {
        __PVT___GEN_78 = vlSelf->__PVT__way_valid_2_0;
        __PVT___GEN_110 = vlSelf->__PVT__way_valid_2_1;
    } else if ((1U == (0x1fU & (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__dcache__DOT__memRsp_Q__DOT__ram_d_addr_io_deq_bits_MPORT_data 
                                >> 4U)))) {
        __PVT___GEN_78 = vlSelf->__PVT__way_valid_1_0;
        __PVT___GEN_110 = vlSelf->__PVT__way_valid_1_1;
    } else {
        __PVT___GEN_78 = vlSelf->__PVT__way_valid_0_0;
        __PVT___GEN_110 = vlSelf->__PVT__way_valid_0_1;
    }
    __PVT__iTagChecker__DOT___io_waymask_T_3 = ((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__dcache__DOT__coreReq_st1_tag 
                                                 == 
                                                 (0x7fffffU 
                                                  & ((IData)(vlSelf->__PVT__tagBodyAccess__DOT__rdata_REG)
                                                      ? 
                                                     ((2U 
                                                       & (IData)(vlSelf->__PVT__tagBodyAccess__DOT__bypass_mask_bypass))
                                                       ? (IData)(vlSelf->__PVT__tagBodyAccess__DOT__bypass_wdata_lfsr_1)
                                                       : vlSelf->__PVT__tagBodyAccess__DOT__array_1_raw_rdata_data)
                                                      : vlSelf->__PVT__tagBodyAccess__DOT__rdata_r_1))) 
                                                & ((0x1fU 
                                                    == (IData)(vlSelf->__PVT__iTagChecker_io_way_valid_r))
                                                    ? (IData)(vlSelf->__PVT__way_valid_31_1)
                                                    : 
                                                   ((0x1eU 
                                                     == (IData)(vlSelf->__PVT__iTagChecker_io_way_valid_r))
                                                     ? (IData)(vlSelf->__PVT__way_valid_30_1)
                                                     : 
                                                    ((0x1dU 
                                                      == (IData)(vlSelf->__PVT__iTagChecker_io_way_valid_r))
                                                      ? (IData)(vlSelf->__PVT__way_valid_29_1)
                                                      : 
                                                     ((0x1cU 
                                                       == (IData)(vlSelf->__PVT__iTagChecker_io_way_valid_r))
                                                       ? (IData)(vlSelf->__PVT__way_valid_28_1)
                                                       : 
                                                      ((0x1bU 
                                                        == (IData)(vlSelf->__PVT__iTagChecker_io_way_valid_r))
                                                        ? (IData)(vlSelf->__PVT__way_valid_27_1)
                                                        : 
                                                       ((0x1aU 
                                                         == (IData)(vlSelf->__PVT__iTagChecker_io_way_valid_r))
                                                         ? (IData)(vlSelf->__PVT__way_valid_26_1)
                                                         : 
                                                        ((0x19U 
                                                          == (IData)(vlSelf->__PVT__iTagChecker_io_way_valid_r))
                                                          ? (IData)(vlSelf->__PVT__way_valid_25_1)
                                                          : 
                                                         ((0x18U 
                                                           == (IData)(vlSelf->__PVT__iTagChecker_io_way_valid_r))
                                                           ? (IData)(vlSelf->__PVT__way_valid_24_1)
                                                           : 
                                                          ((0x17U 
                                                            == (IData)(vlSelf->__PVT__iTagChecker_io_way_valid_r))
                                                            ? (IData)(vlSelf->__PVT__way_valid_23_1)
                                                            : 
                                                           ((0x16U 
                                                             == (IData)(vlSelf->__PVT__iTagChecker_io_way_valid_r))
                                                             ? (IData)(vlSelf->__PVT__way_valid_22_1)
                                                             : (IData)(vlSelf->__PVT___GEN_54))))))))))));
    vlSelf->__PVT__iTagChecker__DOT___io_waymask_T_1 
        = ((vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__dcache__DOT__coreReq_st1_tag 
            == (0x7fffffU & ((IData)(vlSelf->__PVT__tagBodyAccess__DOT__rdata_REG)
                              ? ((1U & (IData)(vlSelf->__PVT__tagBodyAccess__DOT__bypass_mask_bypass))
                                  ? (IData)(vlSelf->__PVT__tagBodyAccess__DOT__bypass_wdata_lfsr)
                                  : vlSelf->__PVT__tagBodyAccess__DOT__array_0_raw_rdata_data)
                              : vlSelf->__PVT__tagBodyAccess__DOT__rdata_r_0))) 
           & ((0x1fU == (IData)(vlSelf->__PVT__iTagChecker_io_way_valid_r))
               ? (IData)(vlSelf->__PVT__way_valid_31_0)
               : ((0x1eU == (IData)(vlSelf->__PVT__iTagChecker_io_way_valid_r))
                   ? (IData)(vlSelf->__PVT__way_valid_30_0)
                   : ((0x1dU == (IData)(vlSelf->__PVT__iTagChecker_io_way_valid_r))
                       ? (IData)(vlSelf->__PVT__way_valid_29_0)
                       : ((0x1cU == (IData)(vlSelf->__PVT__iTagChecker_io_way_valid_r))
                           ? (IData)(vlSelf->__PVT__way_valid_28_0)
                           : ((0x1bU == (IData)(vlSelf->__PVT__iTagChecker_io_way_valid_r))
                               ? (IData)(vlSelf->__PVT__way_valid_27_0)
                               : ((0x1aU == (IData)(vlSelf->__PVT__iTagChecker_io_way_valid_r))
                                   ? (IData)(vlSelf->__PVT__way_valid_26_0)
                                   : ((0x19U == (IData)(vlSelf->__PVT__iTagChecker_io_way_valid_r))
                                       ? (IData)(vlSelf->__PVT__way_valid_25_0)
                                       : ((0x18U == (IData)(vlSelf->__PVT__iTagChecker_io_way_valid_r))
                                           ? (IData)(vlSelf->__PVT__way_valid_24_0)
                                           : ((0x17U 
                                               == (IData)(vlSelf->__PVT__iTagChecker_io_way_valid_r))
                                               ? (IData)(vlSelf->__PVT__way_valid_23_0)
                                               : ((0x16U 
                                                   == (IData)(vlSelf->__PVT__iTagChecker_io_way_valid_r))
                                                   ? (IData)(vlSelf->__PVT__way_valid_22_0)
                                                   : (IData)(vlSelf->__PVT___GEN_22))))))))))));
    if ((0x1aU == (0x1fU & (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__dcache__DOT__memRsp_Q__DOT__ram_d_addr_io_deq_bits_MPORT_data 
                            >> 4U)))) {
        __PVT___GEN_91 = vlSelf->__PVT__way_valid_26_0;
        __PVT___GEN_123 = vlSelf->__PVT__way_valid_26_1;
    } else if ((0x19U == (0x1fU & (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__dcache__DOT__memRsp_Q__DOT__ram_d_addr_io_deq_bits_MPORT_data 
                                   >> 4U)))) {
        __PVT___GEN_91 = vlSelf->__PVT__way_valid_25_0;
        __PVT___GEN_123 = vlSelf->__PVT__way_valid_25_1;
    } else if ((0x18U == (0x1fU & (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__dcache__DOT__memRsp_Q__DOT__ram_d_addr_io_deq_bits_MPORT_data 
                                   >> 4U)))) {
        __PVT___GEN_91 = vlSelf->__PVT__way_valid_24_0;
        __PVT___GEN_123 = vlSelf->__PVT__way_valid_24_1;
    } else if ((0x17U == (0x1fU & (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__dcache__DOT__memRsp_Q__DOT__ram_d_addr_io_deq_bits_MPORT_data 
                                   >> 4U)))) {
        __PVT___GEN_91 = vlSelf->__PVT__way_valid_23_0;
        __PVT___GEN_123 = vlSelf->__PVT__way_valid_23_1;
    } else if ((0x16U == (0x1fU & (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__dcache__DOT__memRsp_Q__DOT__ram_d_addr_io_deq_bits_MPORT_data 
                                   >> 4U)))) {
        __PVT___GEN_91 = vlSelf->__PVT__way_valid_22_0;
        __PVT___GEN_123 = vlSelf->__PVT__way_valid_22_1;
    } else if ((0x15U == (0x1fU & (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__dcache__DOT__memRsp_Q__DOT__ram_d_addr_io_deq_bits_MPORT_data 
                                   >> 4U)))) {
        __PVT___GEN_91 = vlSelf->__PVT__way_valid_21_0;
        __PVT___GEN_123 = vlSelf->__PVT__way_valid_21_1;
    } else if ((0x14U == (0x1fU & (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__dcache__DOT__memRsp_Q__DOT__ram_d_addr_io_deq_bits_MPORT_data 
                                   >> 4U)))) {
        __PVT___GEN_91 = vlSelf->__PVT__way_valid_20_0;
        __PVT___GEN_123 = vlSelf->__PVT__way_valid_20_1;
    } else if ((0x13U == (0x1fU & (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__dcache__DOT__memRsp_Q__DOT__ram_d_addr_io_deq_bits_MPORT_data 
                                   >> 4U)))) {
        __PVT___GEN_91 = vlSelf->__PVT__way_valid_19_0;
        __PVT___GEN_123 = vlSelf->__PVT__way_valid_19_1;
    } else if ((0x12U == (0x1fU & (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__dcache__DOT__memRsp_Q__DOT__ram_d_addr_io_deq_bits_MPORT_data 
                                   >> 4U)))) {
        __PVT___GEN_91 = vlSelf->__PVT__way_valid_18_0;
        __PVT___GEN_123 = vlSelf->__PVT__way_valid_18_1;
    } else if ((0x11U == (0x1fU & (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__dcache__DOT__memRsp_Q__DOT__ram_d_addr_io_deq_bits_MPORT_data 
                                   >> 4U)))) {
        __PVT___GEN_91 = vlSelf->__PVT__way_valid_17_0;
        __PVT___GEN_123 = vlSelf->__PVT__way_valid_17_1;
    } else if ((0x10U == (0x1fU & (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__dcache__DOT__memRsp_Q__DOT__ram_d_addr_io_deq_bits_MPORT_data 
                                   >> 4U)))) {
        __PVT___GEN_91 = vlSelf->__PVT__way_valid_16_0;
        __PVT___GEN_123 = vlSelf->__PVT__way_valid_16_1;
    } else if ((0xfU == (0x1fU & (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__dcache__DOT__memRsp_Q__DOT__ram_d_addr_io_deq_bits_MPORT_data 
                                  >> 4U)))) {
        __PVT___GEN_91 = vlSelf->__PVT__way_valid_15_0;
        __PVT___GEN_123 = vlSelf->__PVT__way_valid_15_1;
    } else if ((0xeU == (0x1fU & (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__dcache__DOT__memRsp_Q__DOT__ram_d_addr_io_deq_bits_MPORT_data 
                                  >> 4U)))) {
        __PVT___GEN_91 = vlSelf->__PVT__way_valid_14_0;
        __PVT___GEN_123 = vlSelf->__PVT__way_valid_14_1;
    } else {
        __PVT___GEN_91 = __PVT___GEN_78;
        __PVT___GEN_123 = __PVT___GEN_110;
    }
    vlSelf->__PVT__io_waymaskHit_st1 = (((IData)(__PVT__iTagChecker__DOT___io_waymask_T_3) 
                                         << 1U) | (IData)(vlSelf->__PVT__iTagChecker__DOT___io_waymask_T_1));
    __PVT__Replacement__DOT___io_waymask_T_4 = ((0x1fU 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__dcache__DOT__memRsp_Q__DOT__ram_d_addr_io_deq_bits_MPORT_data 
                                                     >> 4U)))
                                                 ? (IData)(vlSelf->__PVT__way_valid_31_1)
                                                 : 
                                                ((0x1eU 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__dcache__DOT__memRsp_Q__DOT__ram_d_addr_io_deq_bits_MPORT_data 
                                                      >> 4U)))
                                                  ? (IData)(vlSelf->__PVT__way_valid_30_1)
                                                  : 
                                                 ((0x1dU 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__dcache__DOT__memRsp_Q__DOT__ram_d_addr_io_deq_bits_MPORT_data 
                                                       >> 4U)))
                                                   ? (IData)(vlSelf->__PVT__way_valid_29_1)
                                                   : 
                                                  ((0x1cU 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__dcache__DOT__memRsp_Q__DOT__ram_d_addr_io_deq_bits_MPORT_data 
                                                        >> 4U)))
                                                    ? (IData)(vlSelf->__PVT__way_valid_28_1)
                                                    : 
                                                   ((0x1bU 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__dcache__DOT__memRsp_Q__DOT__ram_d_addr_io_deq_bits_MPORT_data 
                                                         >> 4U)))
                                                     ? (IData)(vlSelf->__PVT__way_valid_27_1)
                                                     : (IData)(__PVT___GEN_123))))));
    vlSelf->__PVT__Replacement_io_validbits_of_set 
        = ((((0x1fU == (0x1fU & (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__dcache__DOT__memRsp_Q__DOT__ram_d_addr_io_deq_bits_MPORT_data 
                                 >> 4U))) ? (IData)(vlSelf->__PVT__way_valid_31_0)
              : ((0x1eU == (0x1fU & (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__dcache__DOT__memRsp_Q__DOT__ram_d_addr_io_deq_bits_MPORT_data 
                                     >> 4U))) ? (IData)(vlSelf->__PVT__way_valid_30_0)
                  : ((0x1dU == (0x1fU & (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__dcache__DOT__memRsp_Q__DOT__ram_d_addr_io_deq_bits_MPORT_data 
                                         >> 4U))) ? (IData)(vlSelf->__PVT__way_valid_29_0)
                      : ((0x1cU == (0x1fU & (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__dcache__DOT__memRsp_Q__DOT__ram_d_addr_io_deq_bits_MPORT_data 
                                             >> 4U)))
                          ? (IData)(vlSelf->__PVT__way_valid_28_0)
                          : ((0x1bU == (0x1fU & (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__dcache__DOT__memRsp_Q__DOT__ram_d_addr_io_deq_bits_MPORT_data 
                                                 >> 4U)))
                              ? (IData)(vlSelf->__PVT__way_valid_27_0)
                              : (IData)(__PVT___GEN_91)))))) 
            << 1U) | (IData)(__PVT__Replacement__DOT___io_waymask_T_4));
    vlSelf->__PVT__io_waymaskReplacement = (3U & ((3U 
                                                   == (IData)(vlSelf->__PVT__Replacement_io_validbits_of_set))
                                                   ? (IData)(vlSelf->__PVT__Replacement__DOT__victim_1Hidx)
                                                   : 
                                                  ((IData)(1U) 
                                                   << (IData)(__PVT__Replacement__DOT___io_waymask_T_4))));
    vlSelf->__PVT___GEN_129 = ((IData)(((~ ((IData)(vlSelf->__PVT__io_waymaskReplacement) 
                                            >> 1U)) 
                                        & (0U == (0x1f0U 
                                                  & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__dcache__DOT__memRsp_Q__DOT__ram_d_addr_io_deq_bits_MPORT_data)))) 
                               | (IData)(vlSelf->__PVT__way_valid_0_0));
    vlSelf->__PVT___GEN_130 = ((IData)(((0U == (0x1f0U 
                                                & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__dcache__DOT__memRsp_Q__DOT__ram_d_addr_io_deq_bits_MPORT_data)) 
                                        & ((IData)(vlSelf->__PVT__io_waymaskReplacement) 
                                           >> 1U))) 
                               | (IData)(vlSelf->__PVT__way_valid_0_1));
    vlSelf->__PVT___GEN_131 = ((IData)(((~ ((IData)(vlSelf->__PVT__io_waymaskReplacement) 
                                            >> 1U)) 
                                        & (0x10U == 
                                           (0x1f0U 
                                            & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__dcache__DOT__memRsp_Q__DOT__ram_d_addr_io_deq_bits_MPORT_data)))) 
                               | (IData)(vlSelf->__PVT__way_valid_1_0));
    vlSelf->__PVT___GEN_132 = ((IData)(((0x10U == (0x1f0U 
                                                   & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__dcache__DOT__memRsp_Q__DOT__ram_d_addr_io_deq_bits_MPORT_data)) 
                                        & ((IData)(vlSelf->__PVT__io_waymaskReplacement) 
                                           >> 1U))) 
                               | (IData)(vlSelf->__PVT__way_valid_1_1));
    vlSelf->__PVT___GEN_133 = ((IData)(((~ ((IData)(vlSelf->__PVT__io_waymaskReplacement) 
                                            >> 1U)) 
                                        & (0x20U == 
                                           (0x1f0U 
                                            & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__dcache__DOT__memRsp_Q__DOT__ram_d_addr_io_deq_bits_MPORT_data)))) 
                               | (IData)(vlSelf->__PVT__way_valid_2_0));
    vlSelf->__PVT___GEN_134 = ((IData)(((0x20U == (0x1f0U 
                                                   & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__dcache__DOT__memRsp_Q__DOT__ram_d_addr_io_deq_bits_MPORT_data)) 
                                        & ((IData)(vlSelf->__PVT__io_waymaskReplacement) 
                                           >> 1U))) 
                               | (IData)(vlSelf->__PVT__way_valid_2_1));
    vlSelf->__PVT___GEN_135 = ((IData)(((~ ((IData)(vlSelf->__PVT__io_waymaskReplacement) 
                                            >> 1U)) 
                                        & (0x30U == 
                                           (0x1f0U 
                                            & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__dcache__DOT__memRsp_Q__DOT__ram_d_addr_io_deq_bits_MPORT_data)))) 
                               | (IData)(vlSelf->__PVT__way_valid_3_0));
    vlSelf->__PVT___GEN_136 = ((IData)(((0x30U == (0x1f0U 
                                                   & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__dcache__DOT__memRsp_Q__DOT__ram_d_addr_io_deq_bits_MPORT_data)) 
                                        & ((IData)(vlSelf->__PVT__io_waymaskReplacement) 
                                           >> 1U))) 
                               | (IData)(vlSelf->__PVT__way_valid_3_1));
    vlSelf->__PVT___GEN_137 = ((IData)(((~ ((IData)(vlSelf->__PVT__io_waymaskReplacement) 
                                            >> 1U)) 
                                        & (0x40U == 
                                           (0x1f0U 
                                            & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__dcache__DOT__memRsp_Q__DOT__ram_d_addr_io_deq_bits_MPORT_data)))) 
                               | (IData)(vlSelf->__PVT__way_valid_4_0));
    vlSelf->__PVT___GEN_138 = ((IData)(((0x40U == (0x1f0U 
                                                   & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__dcache__DOT__memRsp_Q__DOT__ram_d_addr_io_deq_bits_MPORT_data)) 
                                        & ((IData)(vlSelf->__PVT__io_waymaskReplacement) 
                                           >> 1U))) 
                               | (IData)(vlSelf->__PVT__way_valid_4_1));
    vlSelf->__PVT___GEN_139 = ((IData)(((~ ((IData)(vlSelf->__PVT__io_waymaskReplacement) 
                                            >> 1U)) 
                                        & (0x50U == 
                                           (0x1f0U 
                                            & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__dcache__DOT__memRsp_Q__DOT__ram_d_addr_io_deq_bits_MPORT_data)))) 
                               | (IData)(vlSelf->__PVT__way_valid_5_0));
    vlSelf->__PVT___GEN_140 = ((IData)(((0x50U == (0x1f0U 
                                                   & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__dcache__DOT__memRsp_Q__DOT__ram_d_addr_io_deq_bits_MPORT_data)) 
                                        & ((IData)(vlSelf->__PVT__io_waymaskReplacement) 
                                           >> 1U))) 
                               | (IData)(vlSelf->__PVT__way_valid_5_1));
    vlSelf->__PVT___GEN_141 = ((IData)(((~ ((IData)(vlSelf->__PVT__io_waymaskReplacement) 
                                            >> 1U)) 
                                        & (0x60U == 
                                           (0x1f0U 
                                            & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__dcache__DOT__memRsp_Q__DOT__ram_d_addr_io_deq_bits_MPORT_data)))) 
                               | (IData)(vlSelf->__PVT__way_valid_6_0));
    vlSelf->__PVT___GEN_142 = ((IData)(((0x60U == (0x1f0U 
                                                   & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__dcache__DOT__memRsp_Q__DOT__ram_d_addr_io_deq_bits_MPORT_data)) 
                                        & ((IData)(vlSelf->__PVT__io_waymaskReplacement) 
                                           >> 1U))) 
                               | (IData)(vlSelf->__PVT__way_valid_6_1));
    vlSelf->__PVT___GEN_143 = ((IData)(((~ ((IData)(vlSelf->__PVT__io_waymaskReplacement) 
                                            >> 1U)) 
                                        & (0x70U == 
                                           (0x1f0U 
                                            & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__dcache__DOT__memRsp_Q__DOT__ram_d_addr_io_deq_bits_MPORT_data)))) 
                               | (IData)(vlSelf->__PVT__way_valid_7_0));
    vlSelf->__PVT___GEN_144 = ((IData)(((0x70U == (0x1f0U 
                                                   & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__dcache__DOT__memRsp_Q__DOT__ram_d_addr_io_deq_bits_MPORT_data)) 
                                        & ((IData)(vlSelf->__PVT__io_waymaskReplacement) 
                                           >> 1U))) 
                               | (IData)(vlSelf->__PVT__way_valid_7_1));
    vlSelf->__PVT___GEN_145 = ((IData)(((~ ((IData)(vlSelf->__PVT__io_waymaskReplacement) 
                                            >> 1U)) 
                                        & (0x80U == 
                                           (0x1f0U 
                                            & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__dcache__DOT__memRsp_Q__DOT__ram_d_addr_io_deq_bits_MPORT_data)))) 
                               | (IData)(vlSelf->__PVT__way_valid_8_0));
    vlSelf->__PVT___GEN_146 = ((IData)(((0x80U == (0x1f0U 
                                                   & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__dcache__DOT__memRsp_Q__DOT__ram_d_addr_io_deq_bits_MPORT_data)) 
                                        & ((IData)(vlSelf->__PVT__io_waymaskReplacement) 
                                           >> 1U))) 
                               | (IData)(vlSelf->__PVT__way_valid_8_1));
    vlSelf->__PVT___GEN_147 = ((IData)(((~ ((IData)(vlSelf->__PVT__io_waymaskReplacement) 
                                            >> 1U)) 
                                        & (0x90U == 
                                           (0x1f0U 
                                            & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__dcache__DOT__memRsp_Q__DOT__ram_d_addr_io_deq_bits_MPORT_data)))) 
                               | (IData)(vlSelf->__PVT__way_valid_9_0));
    vlSelf->__PVT___GEN_148 = ((IData)(((0x90U == (0x1f0U 
                                                   & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__dcache__DOT__memRsp_Q__DOT__ram_d_addr_io_deq_bits_MPORT_data)) 
                                        & ((IData)(vlSelf->__PVT__io_waymaskReplacement) 
                                           >> 1U))) 
                               | (IData)(vlSelf->__PVT__way_valid_9_1));
    vlSelf->__PVT___GEN_149 = ((IData)(((~ ((IData)(vlSelf->__PVT__io_waymaskReplacement) 
                                            >> 1U)) 
                                        & (0xa0U == 
                                           (0x1f0U 
                                            & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__dcache__DOT__memRsp_Q__DOT__ram_d_addr_io_deq_bits_MPORT_data)))) 
                               | (IData)(vlSelf->__PVT__way_valid_10_0));
    vlSelf->__PVT___GEN_150 = ((IData)(((0xa0U == (0x1f0U 
                                                   & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__dcache__DOT__memRsp_Q__DOT__ram_d_addr_io_deq_bits_MPORT_data)) 
                                        & ((IData)(vlSelf->__PVT__io_waymaskReplacement) 
                                           >> 1U))) 
                               | (IData)(vlSelf->__PVT__way_valid_10_1));
    vlSelf->__PVT___GEN_151 = ((IData)(((~ ((IData)(vlSelf->__PVT__io_waymaskReplacement) 
                                            >> 1U)) 
                                        & (0xb0U == 
                                           (0x1f0U 
                                            & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__dcache__DOT__memRsp_Q__DOT__ram_d_addr_io_deq_bits_MPORT_data)))) 
                               | (IData)(vlSelf->__PVT__way_valid_11_0));
    vlSelf->__PVT___GEN_152 = ((IData)(((0xb0U == (0x1f0U 
                                                   & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__dcache__DOT__memRsp_Q__DOT__ram_d_addr_io_deq_bits_MPORT_data)) 
                                        & ((IData)(vlSelf->__PVT__io_waymaskReplacement) 
                                           >> 1U))) 
                               | (IData)(vlSelf->__PVT__way_valid_11_1));
    vlSelf->__PVT___GEN_153 = ((IData)(((~ ((IData)(vlSelf->__PVT__io_waymaskReplacement) 
                                            >> 1U)) 
                                        & (0xc0U == 
                                           (0x1f0U 
                                            & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__dcache__DOT__memRsp_Q__DOT__ram_d_addr_io_deq_bits_MPORT_data)))) 
                               | (IData)(vlSelf->__PVT__way_valid_12_0));
    vlSelf->__PVT___GEN_154 = ((IData)(((0xc0U == (0x1f0U 
                                                   & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__dcache__DOT__memRsp_Q__DOT__ram_d_addr_io_deq_bits_MPORT_data)) 
                                        & ((IData)(vlSelf->__PVT__io_waymaskReplacement) 
                                           >> 1U))) 
                               | (IData)(vlSelf->__PVT__way_valid_12_1));
    vlSelf->__PVT___GEN_155 = ((IData)(((~ ((IData)(vlSelf->__PVT__io_waymaskReplacement) 
                                            >> 1U)) 
                                        & (0xd0U == 
                                           (0x1f0U 
                                            & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__dcache__DOT__memRsp_Q__DOT__ram_d_addr_io_deq_bits_MPORT_data)))) 
                               | (IData)(vlSelf->__PVT__way_valid_13_0));
    vlSelf->__PVT___GEN_156 = ((IData)(((0xd0U == (0x1f0U 
                                                   & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__dcache__DOT__memRsp_Q__DOT__ram_d_addr_io_deq_bits_MPORT_data)) 
                                        & ((IData)(vlSelf->__PVT__io_waymaskReplacement) 
                                           >> 1U))) 
                               | (IData)(vlSelf->__PVT__way_valid_13_1));
    vlSelf->__PVT___GEN_157 = ((IData)(((~ ((IData)(vlSelf->__PVT__io_waymaskReplacement) 
                                            >> 1U)) 
                                        & (0xe0U == 
                                           (0x1f0U 
                                            & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__dcache__DOT__memRsp_Q__DOT__ram_d_addr_io_deq_bits_MPORT_data)))) 
                               | (IData)(vlSelf->__PVT__way_valid_14_0));
    vlSelf->__PVT___GEN_158 = ((IData)(((0xe0U == (0x1f0U 
                                                   & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__dcache__DOT__memRsp_Q__DOT__ram_d_addr_io_deq_bits_MPORT_data)) 
                                        & ((IData)(vlSelf->__PVT__io_waymaskReplacement) 
                                           >> 1U))) 
                               | (IData)(vlSelf->__PVT__way_valid_14_1));
    vlSelf->__PVT___GEN_159 = ((IData)(((~ ((IData)(vlSelf->__PVT__io_waymaskReplacement) 
                                            >> 1U)) 
                                        & (0xf0U == 
                                           (0x1f0U 
                                            & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__dcache__DOT__memRsp_Q__DOT__ram_d_addr_io_deq_bits_MPORT_data)))) 
                               | (IData)(vlSelf->__PVT__way_valid_15_0));
    vlSelf->__PVT___GEN_160 = ((IData)(((0xf0U == (0x1f0U 
                                                   & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__dcache__DOT__memRsp_Q__DOT__ram_d_addr_io_deq_bits_MPORT_data)) 
                                        & ((IData)(vlSelf->__PVT__io_waymaskReplacement) 
                                           >> 1U))) 
                               | (IData)(vlSelf->__PVT__way_valid_15_1));
    vlSelf->__PVT___GEN_161 = ((IData)(((~ ((IData)(vlSelf->__PVT__io_waymaskReplacement) 
                                            >> 1U)) 
                                        & (0x100U == 
                                           (0x1f0U 
                                            & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__dcache__DOT__memRsp_Q__DOT__ram_d_addr_io_deq_bits_MPORT_data)))) 
                               | (IData)(vlSelf->__PVT__way_valid_16_0));
    vlSelf->__PVT___GEN_162 = ((IData)(((0x100U == 
                                         (0x1f0U & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__dcache__DOT__memRsp_Q__DOT__ram_d_addr_io_deq_bits_MPORT_data)) 
                                        & ((IData)(vlSelf->__PVT__io_waymaskReplacement) 
                                           >> 1U))) 
                               | (IData)(vlSelf->__PVT__way_valid_16_1));
    vlSelf->__PVT___GEN_163 = ((IData)(((~ ((IData)(vlSelf->__PVT__io_waymaskReplacement) 
                                            >> 1U)) 
                                        & (0x110U == 
                                           (0x1f0U 
                                            & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__dcache__DOT__memRsp_Q__DOT__ram_d_addr_io_deq_bits_MPORT_data)))) 
                               | (IData)(vlSelf->__PVT__way_valid_17_0));
    vlSelf->__PVT___GEN_164 = ((IData)(((0x110U == 
                                         (0x1f0U & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__dcache__DOT__memRsp_Q__DOT__ram_d_addr_io_deq_bits_MPORT_data)) 
                                        & ((IData)(vlSelf->__PVT__io_waymaskReplacement) 
                                           >> 1U))) 
                               | (IData)(vlSelf->__PVT__way_valid_17_1));
    vlSelf->__PVT___GEN_165 = ((IData)(((~ ((IData)(vlSelf->__PVT__io_waymaskReplacement) 
                                            >> 1U)) 
                                        & (0x120U == 
                                           (0x1f0U 
                                            & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__dcache__DOT__memRsp_Q__DOT__ram_d_addr_io_deq_bits_MPORT_data)))) 
                               | (IData)(vlSelf->__PVT__way_valid_18_0));
    vlSelf->__PVT___GEN_166 = ((IData)(((0x120U == 
                                         (0x1f0U & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__dcache__DOT__memRsp_Q__DOT__ram_d_addr_io_deq_bits_MPORT_data)) 
                                        & ((IData)(vlSelf->__PVT__io_waymaskReplacement) 
                                           >> 1U))) 
                               | (IData)(vlSelf->__PVT__way_valid_18_1));
    vlSelf->__PVT___GEN_167 = ((IData)(((~ ((IData)(vlSelf->__PVT__io_waymaskReplacement) 
                                            >> 1U)) 
                                        & (0x130U == 
                                           (0x1f0U 
                                            & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__dcache__DOT__memRsp_Q__DOT__ram_d_addr_io_deq_bits_MPORT_data)))) 
                               | (IData)(vlSelf->__PVT__way_valid_19_0));
    vlSelf->__PVT___GEN_168 = ((IData)(((0x130U == 
                                         (0x1f0U & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__dcache__DOT__memRsp_Q__DOT__ram_d_addr_io_deq_bits_MPORT_data)) 
                                        & ((IData)(vlSelf->__PVT__io_waymaskReplacement) 
                                           >> 1U))) 
                               | (IData)(vlSelf->__PVT__way_valid_19_1));
    vlSelf->__PVT___GEN_169 = ((IData)(((~ ((IData)(vlSelf->__PVT__io_waymaskReplacement) 
                                            >> 1U)) 
                                        & (0x140U == 
                                           (0x1f0U 
                                            & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__dcache__DOT__memRsp_Q__DOT__ram_d_addr_io_deq_bits_MPORT_data)))) 
                               | (IData)(vlSelf->__PVT__way_valid_20_0));
    vlSelf->__PVT___GEN_170 = ((IData)(((0x140U == 
                                         (0x1f0U & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__dcache__DOT__memRsp_Q__DOT__ram_d_addr_io_deq_bits_MPORT_data)) 
                                        & ((IData)(vlSelf->__PVT__io_waymaskReplacement) 
                                           >> 1U))) 
                               | (IData)(vlSelf->__PVT__way_valid_20_1));
    vlSelf->__PVT___GEN_171 = ((IData)(((~ ((IData)(vlSelf->__PVT__io_waymaskReplacement) 
                                            >> 1U)) 
                                        & (0x150U == 
                                           (0x1f0U 
                                            & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__dcache__DOT__memRsp_Q__DOT__ram_d_addr_io_deq_bits_MPORT_data)))) 
                               | (IData)(vlSelf->__PVT__way_valid_21_0));
    vlSelf->__PVT___GEN_172 = ((IData)(((0x150U == 
                                         (0x1f0U & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__dcache__DOT__memRsp_Q__DOT__ram_d_addr_io_deq_bits_MPORT_data)) 
                                        & ((IData)(vlSelf->__PVT__io_waymaskReplacement) 
                                           >> 1U))) 
                               | (IData)(vlSelf->__PVT__way_valid_21_1));
    vlSelf->__PVT___GEN_173 = ((IData)(((~ ((IData)(vlSelf->__PVT__io_waymaskReplacement) 
                                            >> 1U)) 
                                        & (0x160U == 
                                           (0x1f0U 
                                            & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__dcache__DOT__memRsp_Q__DOT__ram_d_addr_io_deq_bits_MPORT_data)))) 
                               | (IData)(vlSelf->__PVT__way_valid_22_0));
    vlSelf->__PVT___GEN_174 = ((IData)(((0x160U == 
                                         (0x1f0U & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__dcache__DOT__memRsp_Q__DOT__ram_d_addr_io_deq_bits_MPORT_data)) 
                                        & ((IData)(vlSelf->__PVT__io_waymaskReplacement) 
                                           >> 1U))) 
                               | (IData)(vlSelf->__PVT__way_valid_22_1));
    vlSelf->__PVT___GEN_175 = ((IData)(((~ ((IData)(vlSelf->__PVT__io_waymaskReplacement) 
                                            >> 1U)) 
                                        & (0x170U == 
                                           (0x1f0U 
                                            & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__dcache__DOT__memRsp_Q__DOT__ram_d_addr_io_deq_bits_MPORT_data)))) 
                               | (IData)(vlSelf->__PVT__way_valid_23_0));
    vlSelf->__PVT___GEN_176 = ((IData)(((0x170U == 
                                         (0x1f0U & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__dcache__DOT__memRsp_Q__DOT__ram_d_addr_io_deq_bits_MPORT_data)) 
                                        & ((IData)(vlSelf->__PVT__io_waymaskReplacement) 
                                           >> 1U))) 
                               | (IData)(vlSelf->__PVT__way_valid_23_1));
    vlSelf->__PVT___GEN_177 = ((IData)(((~ ((IData)(vlSelf->__PVT__io_waymaskReplacement) 
                                            >> 1U)) 
                                        & (0x180U == 
                                           (0x1f0U 
                                            & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__dcache__DOT__memRsp_Q__DOT__ram_d_addr_io_deq_bits_MPORT_data)))) 
                               | (IData)(vlSelf->__PVT__way_valid_24_0));
    vlSelf->__PVT___GEN_178 = ((IData)(((0x180U == 
                                         (0x1f0U & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__dcache__DOT__memRsp_Q__DOT__ram_d_addr_io_deq_bits_MPORT_data)) 
                                        & ((IData)(vlSelf->__PVT__io_waymaskReplacement) 
                                           >> 1U))) 
                               | (IData)(vlSelf->__PVT__way_valid_24_1));
    vlSelf->__PVT___GEN_179 = ((IData)(((~ ((IData)(vlSelf->__PVT__io_waymaskReplacement) 
                                            >> 1U)) 
                                        & (0x190U == 
                                           (0x1f0U 
                                            & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__dcache__DOT__memRsp_Q__DOT__ram_d_addr_io_deq_bits_MPORT_data)))) 
                               | (IData)(vlSelf->__PVT__way_valid_25_0));
    vlSelf->__PVT___GEN_180 = ((IData)(((0x190U == 
                                         (0x1f0U & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__dcache__DOT__memRsp_Q__DOT__ram_d_addr_io_deq_bits_MPORT_data)) 
                                        & ((IData)(vlSelf->__PVT__io_waymaskReplacement) 
                                           >> 1U))) 
                               | (IData)(vlSelf->__PVT__way_valid_25_1));
    vlSelf->__PVT___GEN_181 = ((IData)(((~ ((IData)(vlSelf->__PVT__io_waymaskReplacement) 
                                            >> 1U)) 
                                        & (0x1a0U == 
                                           (0x1f0U 
                                            & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__dcache__DOT__memRsp_Q__DOT__ram_d_addr_io_deq_bits_MPORT_data)))) 
                               | (IData)(vlSelf->__PVT__way_valid_26_0));
    vlSelf->__PVT___GEN_182 = ((IData)(((0x1a0U == 
                                         (0x1f0U & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__dcache__DOT__memRsp_Q__DOT__ram_d_addr_io_deq_bits_MPORT_data)) 
                                        & ((IData)(vlSelf->__PVT__io_waymaskReplacement) 
                                           >> 1U))) 
                               | (IData)(vlSelf->__PVT__way_valid_26_1));
    vlSelf->__PVT___GEN_183 = ((IData)(((~ ((IData)(vlSelf->__PVT__io_waymaskReplacement) 
                                            >> 1U)) 
                                        & (0x1b0U == 
                                           (0x1f0U 
                                            & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__dcache__DOT__memRsp_Q__DOT__ram_d_addr_io_deq_bits_MPORT_data)))) 
                               | (IData)(vlSelf->__PVT__way_valid_27_0));
    vlSelf->__PVT___GEN_184 = ((IData)(((0x1b0U == 
                                         (0x1f0U & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__dcache__DOT__memRsp_Q__DOT__ram_d_addr_io_deq_bits_MPORT_data)) 
                                        & ((IData)(vlSelf->__PVT__io_waymaskReplacement) 
                                           >> 1U))) 
                               | (IData)(vlSelf->__PVT__way_valid_27_1));
    vlSelf->__PVT___GEN_185 = ((IData)(((~ ((IData)(vlSelf->__PVT__io_waymaskReplacement) 
                                            >> 1U)) 
                                        & (0x1c0U == 
                                           (0x1f0U 
                                            & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__dcache__DOT__memRsp_Q__DOT__ram_d_addr_io_deq_bits_MPORT_data)))) 
                               | (IData)(vlSelf->__PVT__way_valid_28_0));
    vlSelf->__PVT___GEN_186 = ((IData)(((0x1c0U == 
                                         (0x1f0U & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__dcache__DOT__memRsp_Q__DOT__ram_d_addr_io_deq_bits_MPORT_data)) 
                                        & ((IData)(vlSelf->__PVT__io_waymaskReplacement) 
                                           >> 1U))) 
                               | (IData)(vlSelf->__PVT__way_valid_28_1));
    vlSelf->__PVT___GEN_187 = ((IData)(((~ ((IData)(vlSelf->__PVT__io_waymaskReplacement) 
                                            >> 1U)) 
                                        & (0x1d0U == 
                                           (0x1f0U 
                                            & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__dcache__DOT__memRsp_Q__DOT__ram_d_addr_io_deq_bits_MPORT_data)))) 
                               | (IData)(vlSelf->__PVT__way_valid_29_0));
    vlSelf->__PVT___GEN_188 = ((IData)(((0x1d0U == 
                                         (0x1f0U & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__dcache__DOT__memRsp_Q__DOT__ram_d_addr_io_deq_bits_MPORT_data)) 
                                        & ((IData)(vlSelf->__PVT__io_waymaskReplacement) 
                                           >> 1U))) 
                               | (IData)(vlSelf->__PVT__way_valid_29_1));
    vlSelf->__PVT___GEN_189 = ((IData)(((~ ((IData)(vlSelf->__PVT__io_waymaskReplacement) 
                                            >> 1U)) 
                                        & (0x1e0U == 
                                           (0x1f0U 
                                            & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__dcache__DOT__memRsp_Q__DOT__ram_d_addr_io_deq_bits_MPORT_data)))) 
                               | (IData)(vlSelf->__PVT__way_valid_30_0));
    vlSelf->__PVT___GEN_190 = ((IData)(((0x1e0U == 
                                         (0x1f0U & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__dcache__DOT__memRsp_Q__DOT__ram_d_addr_io_deq_bits_MPORT_data)) 
                                        & ((IData)(vlSelf->__PVT__io_waymaskReplacement) 
                                           >> 1U))) 
                               | (IData)(vlSelf->__PVT__way_valid_30_1));
    vlSelf->__PVT___GEN_191 = ((IData)(((~ ((IData)(vlSelf->__PVT__io_waymaskReplacement) 
                                            >> 1U)) 
                                        & (0x1f0U == 
                                           (0x1f0U 
                                            & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__dcache__DOT__memRsp_Q__DOT__ram_d_addr_io_deq_bits_MPORT_data)))) 
                               | (IData)(vlSelf->__PVT__way_valid_31_0));
    vlSelf->__PVT___GEN_192 = ((IData)(((0x1f0U == 
                                         (0x1f0U & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__dcache__DOT__memRsp_Q__DOT__ram_d_addr_io_deq_bits_MPORT_data)) 
                                        & ((IData)(vlSelf->__PVT__io_waymaskReplacement) 
                                           >> 1U))) 
                               | (IData)(vlSelf->__PVT__way_valid_31_1));
}
