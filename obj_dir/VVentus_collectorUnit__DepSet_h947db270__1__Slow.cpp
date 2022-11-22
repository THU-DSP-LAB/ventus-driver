// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VVentus.h for the primary calling header

#include "verilated.h"

#include "VVentus__Syms.h"
#include "VVentus_collectorUnit.h"

VL_ATTR_COLD void VVentus_collectorUnit___stl_sequent__TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__operand_collector__DOT__collectorUnit_1__1(VVentus_collectorUnit* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VVentus__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VVentus_collectorUnit___stl_sequent__TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__operand_collector__DOT__collectorUnit_1__1\n"); );
    // Init
    CData/*0:0*/ __PVT___io_outArbiterIO_0_bits_bankID_T_2;
    CData/*4:0*/ __PVT___io_outArbiterIO_0_bits_bankID_T_7;
    CData/*1:0*/ __PVT___io_outArbiterIO_0_bits_bankID_T_49;
    CData/*4:0*/ __PVT___io_outArbiterIO_0_bits_rsAddr_T_3;
    CData/*2:0*/ __PVT___io_outArbiterIO_0_bits_rsAddr_T_51;
    CData/*4:0*/ __PVT___io_outArbiterIO_1_bits_bankID_T_7;
    CData/*1:0*/ __PVT___io_outArbiterIO_1_bits_bankID_T_49;
    CData/*4:0*/ __PVT___io_outArbiterIO_1_bits_rsAddr_T_3;
    CData/*2:0*/ __PVT___io_outArbiterIO_1_bits_rsAddr_T_51;
    CData/*4:0*/ __PVT___io_outArbiterIO_2_bits_bankID_T_7;
    CData/*1:0*/ __PVT___io_outArbiterIO_2_bits_bankID_T_49;
    CData/*4:0*/ __PVT___io_outArbiterIO_2_bits_rsAddr_T_3;
    CData/*2:0*/ __PVT___io_outArbiterIO_2_bits_rsAddr_T_51;
    CData/*4:0*/ __PVT___io_outArbiterIO_3_bits_bankID_T_7;
    CData/*1:0*/ __PVT___io_outArbiterIO_3_bits_bankID_T_49;
    IData/*20:0*/ __PVT__imm__DOT___out_T_7;
    // Body
    vlSelf->__PVT___T_11 = (((2U != (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__operand_collector__DOT__collectorUnit.__PVT__state)) 
                             & (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_io_issue_ready)) 
                            & (2U == (IData)(vlSelf->__PVT__state)));
    if ((0U == (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_io_control_bits_sel_alu1))) {
        vlSelf->__PVT___GEN_6 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_io_control_bits_pc;
        vlSelf->__PVT___GEN_7 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_io_control_bits_pc;
        vlSelf->__PVT___GEN_8 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_io_control_bits_pc;
        vlSelf->__PVT___GEN_9 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_io_control_bits_pc;
    } else {
        vlSelf->__PVT___GEN_6 = vlSelf->__PVT__rsReg_0_0;
        vlSelf->__PVT___GEN_7 = vlSelf->__PVT__rsReg_0_1;
        vlSelf->__PVT___GEN_8 = vlSelf->__PVT__rsReg_0_2;
        vlSelf->__PVT___GEN_9 = vlSelf->__PVT__rsReg_0_3;
    }
    vlSelf->__PVT___GEN_17 = ((3U == (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_io_control_bits_sel_alu1)) 
                              | (0U == (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_io_control_bits_sel_alu1)));
    vlSelf->__PVT___GEN_36 = (1U & ((~ (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_io_control_bits_mask)) 
                                    | (IData)(vlSelf->__PVT__mask_0)));
    if ((0U == (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_io_control_bits_sel_alu2))) {
        vlSelf->__PVT___GEN_18 = 4U;
        vlSelf->__PVT___GEN_19 = 4U;
        vlSelf->__PVT___GEN_20 = 4U;
        vlSelf->__PVT___GEN_21 = 4U;
    } else {
        vlSelf->__PVT___GEN_18 = vlSelf->__PVT__rsReg_1_0;
        vlSelf->__PVT___GEN_19 = vlSelf->__PVT__rsReg_1_1;
        vlSelf->__PVT___GEN_20 = vlSelf->__PVT__rsReg_1_2;
        vlSelf->__PVT___GEN_21 = vlSelf->__PVT__rsReg_1_3;
    }
    vlSelf->__PVT___GEN_29 = ((3U == (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_io_control_bits_sel_alu2)) 
                              | (0U == (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_io_control_bits_sel_alu2)));
    if ((2U == (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_io_control_bits_sel_alu3))) {
        vlSelf->__PVT___rsTypeWire_2_T_8 = 1U;
        vlSelf->__PVT___regIdxWire_2_T_8 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_io_control_bits_reg_idx3;
    } else if ((3U == (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_io_control_bits_sel_alu3))) {
        if (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_io_control_bits_isvec) {
            vlSelf->__PVT___rsTypeWire_2_T_8 = 2U;
            vlSelf->__PVT___regIdxWire_2_T_8 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_io_control_bits_reg_idx3;
        } else {
            vlSelf->__PVT___rsTypeWire_2_T_8 = 1U;
            vlSelf->__PVT___regIdxWire_2_T_8 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_io_control_bits_reg_idx2;
        }
    } else if ((1U == (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_io_control_bits_sel_alu3))) {
        vlSelf->__PVT___rsTypeWire_2_T_8 = 2U;
        vlSelf->__PVT___regIdxWire_2_T_8 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_io_control_bits_reg_idx3;
    } else if ((3U == (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_io_control_bits_branch))) {
        vlSelf->__PVT___rsTypeWire_2_T_8 = 1U;
        vlSelf->__PVT___regIdxWire_2_T_8 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_io_control_bits_reg_idx1;
    } else {
        vlSelf->__PVT___rsTypeWire_2_T_8 = 3U;
        vlSelf->__PVT___regIdxWire_2_T_8 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_io_control_bits_reg_idx3;
    }
    vlSelf->__PVT___T_20 = ((0U == (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_io_control_bits_sel_alu3)) 
                            & (3U != (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_io_control_bits_branch)));
    vlSelf->__PVT___io_outArbiterIO_0_bits_bankID_T 
        = ((IData)(vlSelf->__PVT__io_control_ready) 
           & ((1U == (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__Demux__DOT___io_out_0_valid_T_2)) 
              & (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__Demux_io_in_valid)));
    if ((1U == (IData)(vlSelf->__PVT__state))) {
        vlSelf->__PVT__imm_io_inst = vlSelf->__PVT__controlReg_inst;
        vlSelf->__PVT__imm_io_sel = vlSelf->__PVT__controlReg_sel_imm;
        vlSelf->__PVT__io_outArbiterIO_0_valid = ((~ (IData)(vlSelf->__PVT__ready_0)) 
                                                  & (IData)(vlSelf->__PVT__valid_0));
        vlSelf->__PVT__io_outArbiterIO_1_valid = ((~ (IData)(vlSelf->__PVT__ready_1)) 
                                                  & (IData)(vlSelf->__PVT__valid_1));
        vlSelf->__PVT__io_outArbiterIO_2_valid = ((~ (IData)(vlSelf->__PVT__ready_2)) 
                                                  & (IData)(vlSelf->__PVT__valid_2));
        vlSelf->__PVT__io_outArbiterIO_3_valid = ((~ (IData)(vlSelf->__PVT__ready_3)) 
                                                  & (IData)(vlSelf->__PVT__valid_3));
    } else if ((0U == (IData)(vlSelf->__PVT__state))) {
        vlSelf->__PVT__imm_io_inst = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_io_control_bits_inst;
        vlSelf->__PVT__imm_io_sel = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_io_control_bits_sel_imm;
        vlSelf->__PVT__io_outArbiterIO_0_valid = ((~ 
                                                   ((0U 
                                                     == (IData)(vlSelf->__PVT__state)) 
                                                    & ((IData)(vlSelf->__PVT___io_outArbiterIO_0_bits_bankID_T) 
                                                       & (IData)(vlSelf->__PVT___GEN_17)))) 
                                                  & (IData)(vlSelf->__PVT___io_outArbiterIO_0_bits_bankID_T));
        vlSelf->__PVT__io_outArbiterIO_1_valid = ((~ 
                                                   ((0U 
                                                     == (IData)(vlSelf->__PVT__state)) 
                                                    & ((IData)(vlSelf->__PVT___io_outArbiterIO_0_bits_bankID_T) 
                                                       & (IData)(vlSelf->__PVT___GEN_29)))) 
                                                  & (IData)(vlSelf->__PVT___io_outArbiterIO_0_bits_bankID_T));
        vlSelf->__PVT__io_outArbiterIO_2_valid = ((~ 
                                                   ((0U 
                                                     == (IData)(vlSelf->__PVT__state)) 
                                                    & ((IData)(vlSelf->__PVT___io_outArbiterIO_0_bits_bankID_T) 
                                                       & (IData)(vlSelf->__PVT___T_20)))) 
                                                  & (IData)(vlSelf->__PVT___io_outArbiterIO_0_bits_bankID_T));
        vlSelf->__PVT__io_outArbiterIO_3_valid = ((~ 
                                                   ((0U 
                                                     == (IData)(vlSelf->__PVT__state)) 
                                                    & ((~ (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_io_control_bits_mask)) 
                                                       & (IData)(vlSelf->__PVT___io_outArbiterIO_0_bits_bankID_T)))) 
                                                  & (IData)(vlSelf->__PVT___io_outArbiterIO_0_bits_bankID_T));
    } else {
        vlSelf->__PVT__imm_io_inst = 0U;
        vlSelf->__PVT__imm_io_sel = 0U;
        vlSelf->__PVT__io_outArbiterIO_0_valid = 0U;
        vlSelf->__PVT__io_outArbiterIO_1_valid = 0U;
        vlSelf->__PVT__io_outArbiterIO_2_valid = 0U;
        vlSelf->__PVT__io_outArbiterIO_3_valid = 0U;
    }
    __PVT__imm__DOT___out_T_7 = ((2U == (IData)(vlSelf->__PVT__imm_io_sel))
                                  ? ((0x1fe000U & (
                                                   (- (IData)(
                                                              (vlSelf->__PVT__imm_io_inst 
                                                               >> 0x1fU))) 
                                                   << 0xdU)) 
                                     | ((0x1000U & 
                                         (vlSelf->__PVT__imm_io_inst 
                                          >> 0x13U)) 
                                        | ((0x800U 
                                            & (vlSelf->__PVT__imm_io_inst 
                                               << 4U)) 
                                           | ((0x7e0U 
                                               & (vlSelf->__PVT__imm_io_inst 
                                                  >> 0x14U)) 
                                              | (0x1eU 
                                                 & (vlSelf->__PVT__imm_io_inst 
                                                    >> 7U))))))
                                  : ((1U == (IData)(vlSelf->__PVT__imm_io_sel))
                                      ? ((0x1ff000U 
                                          & ((- (IData)(
                                                        (vlSelf->__PVT__imm_io_inst 
                                                         >> 0x1fU))) 
                                             << 0xcU)) 
                                         | ((0xfe0U 
                                             & (vlSelf->__PVT__imm_io_inst 
                                                >> 0x14U)) 
                                            | (0x1fU 
                                               & (vlSelf->__PVT__imm_io_inst 
                                                  >> 7U))))
                                      : ((5U == (IData)(vlSelf->__PVT__imm_io_sel))
                                          ? ((0x100000U 
                                              & (vlSelf->__PVT__imm_io_inst 
                                                 >> 0xbU)) 
                                             | ((0xff000U 
                                                 & vlSelf->__PVT__imm_io_inst) 
                                                | ((0x800U 
                                                    & (vlSelf->__PVT__imm_io_inst 
                                                       >> 9U)) 
                                                   | (0x7feU 
                                                      & (vlSelf->__PVT__imm_io_inst 
                                                         >> 0x14U)))))
                                          : ((0x1ff000U 
                                              & ((- (IData)(
                                                            (vlSelf->__PVT__imm_io_inst 
                                                             >> 0x1fU))) 
                                                 << 0xcU)) 
                                             | (vlSelf->__PVT__imm_io_inst 
                                                >> 0x14U)))));
    vlSelf->__PVT___GEN_85 = ((IData)(vlSelf->__PVT___io_outArbiterIO_0_bits_bankID_T) 
                              | (IData)(vlSelf->__PVT__valid_0));
    vlSelf->__PVT___GEN_86 = ((IData)(vlSelf->__PVT___io_outArbiterIO_0_bits_bankID_T) 
                              | (IData)(vlSelf->__PVT__valid_1));
    vlSelf->__PVT___GEN_87 = ((IData)(vlSelf->__PVT___io_outArbiterIO_0_bits_bankID_T) 
                              | (IData)(vlSelf->__PVT__valid_2));
    vlSelf->__PVT___GEN_88 = ((IData)(vlSelf->__PVT___io_outArbiterIO_0_bits_bankID_T) 
                              | (IData)(vlSelf->__PVT__valid_3));
    if ((0U == (IData)(vlSelf->__PVT__state))) {
        if (vlSelf->__PVT___io_outArbiterIO_0_bits_bankID_T) {
            vlSelf->__PVT__regIdxWire_0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_io_control_bits_reg_idx1;
            vlSelf->__PVT__regIdxWire_1 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_io_control_bits_reg_idx2;
            vlSelf->__PVT__regIdxWire_2 = vlSelf->__PVT___regIdxWire_2_T_8;
            __PVT___io_outArbiterIO_0_bits_bankID_T_2 = 1U;
        } else {
            vlSelf->__PVT__regIdxWire_0 = 0U;
            vlSelf->__PVT__regIdxWire_1 = 0U;
            vlSelf->__PVT__regIdxWire_2 = 0U;
            __PVT___io_outArbiterIO_0_bits_bankID_T_2 = 0U;
        }
    } else {
        vlSelf->__PVT__regIdxWire_0 = 0U;
        vlSelf->__PVT__regIdxWire_1 = 0U;
        vlSelf->__PVT__regIdxWire_2 = 0U;
        __PVT___io_outArbiterIO_0_bits_bankID_T_2 = 0U;
    }
    vlSelf->__PVT__imm_io_out = ((6U == (IData)(vlSelf->__PVT__imm_io_sel))
                                  ? (((- (IData)((1U 
                                                  & (vlSelf->__PVT__imm_io_inst 
                                                     >> 0x13U)))) 
                                      << 5U) | (0x1fU 
                                                & (vlSelf->__PVT__imm_io_inst 
                                                   >> 0xfU)))
                                  : ((7U == (IData)(vlSelf->__PVT__imm_io_sel))
                                      ? (0x1fU & (vlSelf->__PVT__imm_io_inst 
                                                  >> 0xfU))
                                      : ((4U == (IData)(vlSelf->__PVT__imm_io_sel))
                                          ? (((- (IData)(
                                                         (1U 
                                                          & (vlSelf->__PVT__imm_io_inst 
                                                             >> 0x18U)))) 
                                              << 5U) 
                                             | (0x1fU 
                                                & (vlSelf->__PVT__imm_io_inst 
                                                   >> 0x14U)))
                                          : ((3U == (IData)(vlSelf->__PVT__imm_io_sel))
                                              ? (0xfffff000U 
                                                 & vlSelf->__PVT__imm_io_inst)
                                              : (((- (IData)(
                                                             (1U 
                                                              & (__PVT__imm__DOT___out_T_7 
                                                                 >> 0x14U)))) 
                                                  << 0x15U) 
                                                 | __PVT__imm__DOT___out_T_7)))));
    if (__PVT___io_outArbiterIO_0_bits_bankID_T_2) {
        if ((0U == (IData)(vlSelf->__PVT__state))) {
            if (vlSelf->__PVT___io_outArbiterIO_0_bits_bankID_T) {
                vlSelf->__PVT__io_outArbiterIO_0_bits_rsType 
                    = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_io_control_bits_sel_alu1;
                vlSelf->__PVT__io_outArbiterIO_1_bits_rsType 
                    = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_io_control_bits_sel_alu2;
                vlSelf->__PVT__io_outArbiterIO_2_bits_rsType 
                    = vlSelf->__PVT___rsTypeWire_2_T_8;
            } else {
                vlSelf->__PVT__io_outArbiterIO_0_bits_rsType = 0U;
                vlSelf->__PVT__io_outArbiterIO_1_bits_rsType = 0U;
                vlSelf->__PVT__io_outArbiterIO_2_bits_rsType = 0U;
            }
        } else {
            vlSelf->__PVT__io_outArbiterIO_0_bits_rsType = 0U;
            vlSelf->__PVT__io_outArbiterIO_1_bits_rsType = 0U;
            vlSelf->__PVT__io_outArbiterIO_2_bits_rsType = 0U;
        }
        __PVT___io_outArbiterIO_0_bits_rsAddr_T_3 = vlSelf->__PVT__regIdxWire_0;
        __PVT___io_outArbiterIO_1_bits_rsAddr_T_3 = vlSelf->__PVT__regIdxWire_1;
        __PVT___io_outArbiterIO_2_bits_rsAddr_T_3 = vlSelf->__PVT__regIdxWire_2;
        vlSelf->__PVT___io_outArbiterIO_0_bits_rsAddr_T_69 
            = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_io_control_bits_wid;
        __PVT___io_outArbiterIO_3_bits_bankID_T_7 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_io_control_bits_wid;
        __PVT___io_outArbiterIO_0_bits_bankID_T_7 = 
            (0x1fU & ((IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_io_control_bits_wid) 
                      + (IData)(vlSelf->__PVT__regIdxWire_0)));
        __PVT___io_outArbiterIO_1_bits_bankID_T_7 = 
            (0x1fU & ((IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_io_control_bits_wid) 
                      + (IData)(vlSelf->__PVT__regIdxWire_1)));
        __PVT___io_outArbiterIO_2_bits_bankID_T_7 = 
            (0x1fU & ((IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_io_control_bits_wid) 
                      + (IData)(vlSelf->__PVT__regIdxWire_2)));
    } else {
        vlSelf->__PVT__io_outArbiterIO_0_bits_rsType 
            = vlSelf->__PVT__rsType_0;
        vlSelf->__PVT__io_outArbiterIO_1_bits_rsType 
            = vlSelf->__PVT__rsType_1;
        vlSelf->__PVT__io_outArbiterIO_2_bits_rsType 
            = vlSelf->__PVT__rsType_2;
        __PVT___io_outArbiterIO_0_bits_rsAddr_T_3 = vlSelf->__PVT__regIdx_0;
        __PVT___io_outArbiterIO_1_bits_rsAddr_T_3 = vlSelf->__PVT__regIdx_1;
        __PVT___io_outArbiterIO_2_bits_rsAddr_T_3 = vlSelf->__PVT__regIdx_2;
        vlSelf->__PVT___io_outArbiterIO_0_bits_rsAddr_T_69 
            = vlSelf->__PVT__controlReg_wid;
        __PVT___io_outArbiterIO_3_bits_bankID_T_7 = vlSelf->__PVT__controlReg_wid;
        __PVT___io_outArbiterIO_0_bits_bankID_T_7 = 
            (0x1fU & ((IData)(vlSelf->__PVT__controlReg_wid) 
                      + (IData)(vlSelf->__PVT__regIdx_0)));
        __PVT___io_outArbiterIO_1_bits_bankID_T_7 = 
            (0x1fU & ((IData)(vlSelf->__PVT__controlReg_wid) 
                      + (IData)(vlSelf->__PVT__regIdx_1)));
        __PVT___io_outArbiterIO_2_bits_bankID_T_7 = 
            (0x1fU & ((IData)(vlSelf->__PVT__controlReg_wid) 
                      + (IData)(vlSelf->__PVT__regIdx_2)));
    }
    vlSelf->__PVT___rsReg_2_0_T_1 = (vlSelf->__PVT__imm_io_out 
                                     + vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_io_control_bits_pc);
    __PVT___io_outArbiterIO_0_bits_rsAddr_T_51 = ((0x18U 
                                                   == (IData)(__PVT___io_outArbiterIO_0_bits_rsAddr_T_3))
                                                   ? 6U
                                                   : 
                                                  ((0x17U 
                                                    == (IData)(__PVT___io_outArbiterIO_0_bits_rsAddr_T_3))
                                                    ? 5U
                                                    : 
                                                   ((0x16U 
                                                     == (IData)(__PVT___io_outArbiterIO_0_bits_rsAddr_T_3))
                                                     ? 5U
                                                     : 
                                                    ((0x15U 
                                                      == (IData)(__PVT___io_outArbiterIO_0_bits_rsAddr_T_3))
                                                      ? 5U
                                                      : 
                                                     ((0x14U 
                                                       == (IData)(__PVT___io_outArbiterIO_0_bits_rsAddr_T_3))
                                                       ? 5U
                                                       : 
                                                      ((0x13U 
                                                        == (IData)(__PVT___io_outArbiterIO_0_bits_rsAddr_T_3))
                                                        ? 4U
                                                        : 
                                                       ((0x12U 
                                                         == (IData)(__PVT___io_outArbiterIO_0_bits_rsAddr_T_3))
                                                         ? 4U
                                                         : 
                                                        ((0x11U 
                                                          == (IData)(__PVT___io_outArbiterIO_0_bits_rsAddr_T_3))
                                                          ? 4U
                                                          : 
                                                         ((0x10U 
                                                           == (IData)(__PVT___io_outArbiterIO_0_bits_rsAddr_T_3))
                                                           ? 4U
                                                           : 
                                                          ((0xfU 
                                                            == (IData)(__PVT___io_outArbiterIO_0_bits_rsAddr_T_3))
                                                            ? 3U
                                                            : 
                                                           ((0xeU 
                                                             == (IData)(__PVT___io_outArbiterIO_0_bits_rsAddr_T_3))
                                                             ? 3U
                                                             : 
                                                            ((0xdU 
                                                              == (IData)(__PVT___io_outArbiterIO_0_bits_rsAddr_T_3))
                                                              ? 3U
                                                              : 
                                                             ((0xcU 
                                                               == (IData)(__PVT___io_outArbiterIO_0_bits_rsAddr_T_3))
                                                               ? 3U
                                                               : 
                                                              ((0xbU 
                                                                == (IData)(__PVT___io_outArbiterIO_0_bits_rsAddr_T_3))
                                                                ? 2U
                                                                : 
                                                               ((0xaU 
                                                                 == (IData)(__PVT___io_outArbiterIO_0_bits_rsAddr_T_3))
                                                                 ? 2U
                                                                 : 
                                                                ((9U 
                                                                  == (IData)(__PVT___io_outArbiterIO_0_bits_rsAddr_T_3))
                                                                  ? 2U
                                                                  : 
                                                                 ((8U 
                                                                   == (IData)(__PVT___io_outArbiterIO_0_bits_rsAddr_T_3))
                                                                   ? 2U
                                                                   : 
                                                                  ((7U 
                                                                    == (IData)(__PVT___io_outArbiterIO_0_bits_rsAddr_T_3)) 
                                                                   | ((6U 
                                                                       == (IData)(__PVT___io_outArbiterIO_0_bits_rsAddr_T_3)) 
                                                                      | ((5U 
                                                                          == (IData)(__PVT___io_outArbiterIO_0_bits_rsAddr_T_3)) 
                                                                         | (4U 
                                                                            == (IData)(__PVT___io_outArbiterIO_0_bits_rsAddr_T_3))))))))))))))))))))));
    __PVT___io_outArbiterIO_1_bits_rsAddr_T_51 = ((0x18U 
                                                   == (IData)(__PVT___io_outArbiterIO_1_bits_rsAddr_T_3))
                                                   ? 6U
                                                   : 
                                                  ((0x17U 
                                                    == (IData)(__PVT___io_outArbiterIO_1_bits_rsAddr_T_3))
                                                    ? 5U
                                                    : 
                                                   ((0x16U 
                                                     == (IData)(__PVT___io_outArbiterIO_1_bits_rsAddr_T_3))
                                                     ? 5U
                                                     : 
                                                    ((0x15U 
                                                      == (IData)(__PVT___io_outArbiterIO_1_bits_rsAddr_T_3))
                                                      ? 5U
                                                      : 
                                                     ((0x14U 
                                                       == (IData)(__PVT___io_outArbiterIO_1_bits_rsAddr_T_3))
                                                       ? 5U
                                                       : 
                                                      ((0x13U 
                                                        == (IData)(__PVT___io_outArbiterIO_1_bits_rsAddr_T_3))
                                                        ? 4U
                                                        : 
                                                       ((0x12U 
                                                         == (IData)(__PVT___io_outArbiterIO_1_bits_rsAddr_T_3))
                                                         ? 4U
                                                         : 
                                                        ((0x11U 
                                                          == (IData)(__PVT___io_outArbiterIO_1_bits_rsAddr_T_3))
                                                          ? 4U
                                                          : 
                                                         ((0x10U 
                                                           == (IData)(__PVT___io_outArbiterIO_1_bits_rsAddr_T_3))
                                                           ? 4U
                                                           : 
                                                          ((0xfU 
                                                            == (IData)(__PVT___io_outArbiterIO_1_bits_rsAddr_T_3))
                                                            ? 3U
                                                            : 
                                                           ((0xeU 
                                                             == (IData)(__PVT___io_outArbiterIO_1_bits_rsAddr_T_3))
                                                             ? 3U
                                                             : 
                                                            ((0xdU 
                                                              == (IData)(__PVT___io_outArbiterIO_1_bits_rsAddr_T_3))
                                                              ? 3U
                                                              : 
                                                             ((0xcU 
                                                               == (IData)(__PVT___io_outArbiterIO_1_bits_rsAddr_T_3))
                                                               ? 3U
                                                               : 
                                                              ((0xbU 
                                                                == (IData)(__PVT___io_outArbiterIO_1_bits_rsAddr_T_3))
                                                                ? 2U
                                                                : 
                                                               ((0xaU 
                                                                 == (IData)(__PVT___io_outArbiterIO_1_bits_rsAddr_T_3))
                                                                 ? 2U
                                                                 : 
                                                                ((9U 
                                                                  == (IData)(__PVT___io_outArbiterIO_1_bits_rsAddr_T_3))
                                                                  ? 2U
                                                                  : 
                                                                 ((8U 
                                                                   == (IData)(__PVT___io_outArbiterIO_1_bits_rsAddr_T_3))
                                                                   ? 2U
                                                                   : 
                                                                  ((7U 
                                                                    == (IData)(__PVT___io_outArbiterIO_1_bits_rsAddr_T_3)) 
                                                                   | ((6U 
                                                                       == (IData)(__PVT___io_outArbiterIO_1_bits_rsAddr_T_3)) 
                                                                      | ((5U 
                                                                          == (IData)(__PVT___io_outArbiterIO_1_bits_rsAddr_T_3)) 
                                                                         | (4U 
                                                                            == (IData)(__PVT___io_outArbiterIO_1_bits_rsAddr_T_3))))))))))))))))))))));
    __PVT___io_outArbiterIO_2_bits_rsAddr_T_51 = ((0x18U 
                                                   == (IData)(__PVT___io_outArbiterIO_2_bits_rsAddr_T_3))
                                                   ? 6U
                                                   : 
                                                  ((0x17U 
                                                    == (IData)(__PVT___io_outArbiterIO_2_bits_rsAddr_T_3))
                                                    ? 5U
                                                    : 
                                                   ((0x16U 
                                                     == (IData)(__PVT___io_outArbiterIO_2_bits_rsAddr_T_3))
                                                     ? 5U
                                                     : 
                                                    ((0x15U 
                                                      == (IData)(__PVT___io_outArbiterIO_2_bits_rsAddr_T_3))
                                                      ? 5U
                                                      : 
                                                     ((0x14U 
                                                       == (IData)(__PVT___io_outArbiterIO_2_bits_rsAddr_T_3))
                                                       ? 5U
                                                       : 
                                                      ((0x13U 
                                                        == (IData)(__PVT___io_outArbiterIO_2_bits_rsAddr_T_3))
                                                        ? 4U
                                                        : 
                                                       ((0x12U 
                                                         == (IData)(__PVT___io_outArbiterIO_2_bits_rsAddr_T_3))
                                                         ? 4U
                                                         : 
                                                        ((0x11U 
                                                          == (IData)(__PVT___io_outArbiterIO_2_bits_rsAddr_T_3))
                                                          ? 4U
                                                          : 
                                                         ((0x10U 
                                                           == (IData)(__PVT___io_outArbiterIO_2_bits_rsAddr_T_3))
                                                           ? 4U
                                                           : 
                                                          ((0xfU 
                                                            == (IData)(__PVT___io_outArbiterIO_2_bits_rsAddr_T_3))
                                                            ? 3U
                                                            : 
                                                           ((0xeU 
                                                             == (IData)(__PVT___io_outArbiterIO_2_bits_rsAddr_T_3))
                                                             ? 3U
                                                             : 
                                                            ((0xdU 
                                                              == (IData)(__PVT___io_outArbiterIO_2_bits_rsAddr_T_3))
                                                              ? 3U
                                                              : 
                                                             ((0xcU 
                                                               == (IData)(__PVT___io_outArbiterIO_2_bits_rsAddr_T_3))
                                                               ? 3U
                                                               : 
                                                              ((0xbU 
                                                                == (IData)(__PVT___io_outArbiterIO_2_bits_rsAddr_T_3))
                                                                ? 2U
                                                                : 
                                                               ((0xaU 
                                                                 == (IData)(__PVT___io_outArbiterIO_2_bits_rsAddr_T_3))
                                                                 ? 2U
                                                                 : 
                                                                ((9U 
                                                                  == (IData)(__PVT___io_outArbiterIO_2_bits_rsAddr_T_3))
                                                                  ? 2U
                                                                  : 
                                                                 ((8U 
                                                                   == (IData)(__PVT___io_outArbiterIO_2_bits_rsAddr_T_3))
                                                                   ? 2U
                                                                   : 
                                                                  ((7U 
                                                                    == (IData)(__PVT___io_outArbiterIO_2_bits_rsAddr_T_3)) 
                                                                   | ((6U 
                                                                       == (IData)(__PVT___io_outArbiterIO_2_bits_rsAddr_T_3)) 
                                                                      | ((5U 
                                                                          == (IData)(__PVT___io_outArbiterIO_2_bits_rsAddr_T_3)) 
                                                                         | (4U 
                                                                            == (IData)(__PVT___io_outArbiterIO_2_bits_rsAddr_T_3))))))))))))))))))))));
    __PVT___io_outArbiterIO_3_bits_bankID_T_49 = ((0x15U 
                                                   == (IData)(__PVT___io_outArbiterIO_3_bits_bankID_T_7))
                                                   ? 1U
                                                   : 
                                                  ((0x14U 
                                                    == (IData)(__PVT___io_outArbiterIO_3_bits_bankID_T_7))
                                                    ? 0U
                                                    : 
                                                   ((0x13U 
                                                     == (IData)(__PVT___io_outArbiterIO_3_bits_bankID_T_7))
                                                     ? 3U
                                                     : 
                                                    ((0x12U 
                                                      == (IData)(__PVT___io_outArbiterIO_3_bits_bankID_T_7))
                                                      ? 2U
                                                      : 
                                                     ((0x11U 
                                                       == (IData)(__PVT___io_outArbiterIO_3_bits_bankID_T_7))
                                                       ? 1U
                                                       : 
                                                      ((0x10U 
                                                        == (IData)(__PVT___io_outArbiterIO_3_bits_bankID_T_7))
                                                        ? 0U
                                                        : 
                                                       ((0xfU 
                                                         == (IData)(__PVT___io_outArbiterIO_3_bits_bankID_T_7))
                                                         ? 3U
                                                         : 
                                                        ((0xeU 
                                                          == (IData)(__PVT___io_outArbiterIO_3_bits_bankID_T_7))
                                                          ? 2U
                                                          : 
                                                         ((0xdU 
                                                           == (IData)(__PVT___io_outArbiterIO_3_bits_bankID_T_7))
                                                           ? 1U
                                                           : 
                                                          ((0xcU 
                                                            == (IData)(__PVT___io_outArbiterIO_3_bits_bankID_T_7))
                                                            ? 0U
                                                            : 
                                                           ((0xbU 
                                                             == (IData)(__PVT___io_outArbiterIO_3_bits_bankID_T_7))
                                                             ? 3U
                                                             : 
                                                            ((0xaU 
                                                              == (IData)(__PVT___io_outArbiterIO_3_bits_bankID_T_7))
                                                              ? 2U
                                                              : 
                                                             ((9U 
                                                               == (IData)(__PVT___io_outArbiterIO_3_bits_bankID_T_7))
                                                               ? 1U
                                                               : 
                                                              ((8U 
                                                                == (IData)(__PVT___io_outArbiterIO_3_bits_bankID_T_7))
                                                                ? 0U
                                                                : 
                                                               ((7U 
                                                                 == (IData)(__PVT___io_outArbiterIO_3_bits_bankID_T_7))
                                                                 ? 3U
                                                                 : 
                                                                ((6U 
                                                                  == (IData)(__PVT___io_outArbiterIO_3_bits_bankID_T_7))
                                                                  ? 2U
                                                                  : 
                                                                 ((5U 
                                                                   == (IData)(__PVT___io_outArbiterIO_3_bits_bankID_T_7))
                                                                   ? 1U
                                                                   : 
                                                                  ((4U 
                                                                    == (IData)(__PVT___io_outArbiterIO_3_bits_bankID_T_7))
                                                                    ? 0U
                                                                    : 
                                                                   ((3U 
                                                                     == (IData)(__PVT___io_outArbiterIO_3_bits_bankID_T_7))
                                                                     ? 3U
                                                                     : 
                                                                    ((2U 
                                                                      == (IData)(__PVT___io_outArbiterIO_3_bits_bankID_T_7))
                                                                      ? 2U
                                                                      : 
                                                                     (1U 
                                                                      == (IData)(__PVT___io_outArbiterIO_3_bits_bankID_T_7))))))))))))))))))))));
    __PVT___io_outArbiterIO_0_bits_bankID_T_49 = ((0x15U 
                                                   == (IData)(__PVT___io_outArbiterIO_0_bits_bankID_T_7))
                                                   ? 1U
                                                   : 
                                                  ((0x14U 
                                                    == (IData)(__PVT___io_outArbiterIO_0_bits_bankID_T_7))
                                                    ? 0U
                                                    : 
                                                   ((0x13U 
                                                     == (IData)(__PVT___io_outArbiterIO_0_bits_bankID_T_7))
                                                     ? 3U
                                                     : 
                                                    ((0x12U 
                                                      == (IData)(__PVT___io_outArbiterIO_0_bits_bankID_T_7))
                                                      ? 2U
                                                      : 
                                                     ((0x11U 
                                                       == (IData)(__PVT___io_outArbiterIO_0_bits_bankID_T_7))
                                                       ? 1U
                                                       : 
                                                      ((0x10U 
                                                        == (IData)(__PVT___io_outArbiterIO_0_bits_bankID_T_7))
                                                        ? 0U
                                                        : 
                                                       ((0xfU 
                                                         == (IData)(__PVT___io_outArbiterIO_0_bits_bankID_T_7))
                                                         ? 3U
                                                         : 
                                                        ((0xeU 
                                                          == (IData)(__PVT___io_outArbiterIO_0_bits_bankID_T_7))
                                                          ? 2U
                                                          : 
                                                         ((0xdU 
                                                           == (IData)(__PVT___io_outArbiterIO_0_bits_bankID_T_7))
                                                           ? 1U
                                                           : 
                                                          ((0xcU 
                                                            == (IData)(__PVT___io_outArbiterIO_0_bits_bankID_T_7))
                                                            ? 0U
                                                            : 
                                                           ((0xbU 
                                                             == (IData)(__PVT___io_outArbiterIO_0_bits_bankID_T_7))
                                                             ? 3U
                                                             : 
                                                            ((0xaU 
                                                              == (IData)(__PVT___io_outArbiterIO_0_bits_bankID_T_7))
                                                              ? 2U
                                                              : 
                                                             ((9U 
                                                               == (IData)(__PVT___io_outArbiterIO_0_bits_bankID_T_7))
                                                               ? 1U
                                                               : 
                                                              ((8U 
                                                                == (IData)(__PVT___io_outArbiterIO_0_bits_bankID_T_7))
                                                                ? 0U
                                                                : 
                                                               ((7U 
                                                                 == (IData)(__PVT___io_outArbiterIO_0_bits_bankID_T_7))
                                                                 ? 3U
                                                                 : 
                                                                ((6U 
                                                                  == (IData)(__PVT___io_outArbiterIO_0_bits_bankID_T_7))
                                                                  ? 2U
                                                                  : 
                                                                 ((5U 
                                                                   == (IData)(__PVT___io_outArbiterIO_0_bits_bankID_T_7))
                                                                   ? 1U
                                                                   : 
                                                                  ((4U 
                                                                    == (IData)(__PVT___io_outArbiterIO_0_bits_bankID_T_7))
                                                                    ? 0U
                                                                    : 
                                                                   ((3U 
                                                                     == (IData)(__PVT___io_outArbiterIO_0_bits_bankID_T_7))
                                                                     ? 3U
                                                                     : 
                                                                    ((2U 
                                                                      == (IData)(__PVT___io_outArbiterIO_0_bits_bankID_T_7))
                                                                      ? 2U
                                                                      : 
                                                                     (1U 
                                                                      == (IData)(__PVT___io_outArbiterIO_0_bits_bankID_T_7))))))))))))))))))))));
    __PVT___io_outArbiterIO_1_bits_bankID_T_49 = ((0x15U 
                                                   == (IData)(__PVT___io_outArbiterIO_1_bits_bankID_T_7))
                                                   ? 1U
                                                   : 
                                                  ((0x14U 
                                                    == (IData)(__PVT___io_outArbiterIO_1_bits_bankID_T_7))
                                                    ? 0U
                                                    : 
                                                   ((0x13U 
                                                     == (IData)(__PVT___io_outArbiterIO_1_bits_bankID_T_7))
                                                     ? 3U
                                                     : 
                                                    ((0x12U 
                                                      == (IData)(__PVT___io_outArbiterIO_1_bits_bankID_T_7))
                                                      ? 2U
                                                      : 
                                                     ((0x11U 
                                                       == (IData)(__PVT___io_outArbiterIO_1_bits_bankID_T_7))
                                                       ? 1U
                                                       : 
                                                      ((0x10U 
                                                        == (IData)(__PVT___io_outArbiterIO_1_bits_bankID_T_7))
                                                        ? 0U
                                                        : 
                                                       ((0xfU 
                                                         == (IData)(__PVT___io_outArbiterIO_1_bits_bankID_T_7))
                                                         ? 3U
                                                         : 
                                                        ((0xeU 
                                                          == (IData)(__PVT___io_outArbiterIO_1_bits_bankID_T_7))
                                                          ? 2U
                                                          : 
                                                         ((0xdU 
                                                           == (IData)(__PVT___io_outArbiterIO_1_bits_bankID_T_7))
                                                           ? 1U
                                                           : 
                                                          ((0xcU 
                                                            == (IData)(__PVT___io_outArbiterIO_1_bits_bankID_T_7))
                                                            ? 0U
                                                            : 
                                                           ((0xbU 
                                                             == (IData)(__PVT___io_outArbiterIO_1_bits_bankID_T_7))
                                                             ? 3U
                                                             : 
                                                            ((0xaU 
                                                              == (IData)(__PVT___io_outArbiterIO_1_bits_bankID_T_7))
                                                              ? 2U
                                                              : 
                                                             ((9U 
                                                               == (IData)(__PVT___io_outArbiterIO_1_bits_bankID_T_7))
                                                               ? 1U
                                                               : 
                                                              ((8U 
                                                                == (IData)(__PVT___io_outArbiterIO_1_bits_bankID_T_7))
                                                                ? 0U
                                                                : 
                                                               ((7U 
                                                                 == (IData)(__PVT___io_outArbiterIO_1_bits_bankID_T_7))
                                                                 ? 3U
                                                                 : 
                                                                ((6U 
                                                                  == (IData)(__PVT___io_outArbiterIO_1_bits_bankID_T_7))
                                                                  ? 2U
                                                                  : 
                                                                 ((5U 
                                                                   == (IData)(__PVT___io_outArbiterIO_1_bits_bankID_T_7))
                                                                   ? 1U
                                                                   : 
                                                                  ((4U 
                                                                    == (IData)(__PVT___io_outArbiterIO_1_bits_bankID_T_7))
                                                                    ? 0U
                                                                    : 
                                                                   ((3U 
                                                                     == (IData)(__PVT___io_outArbiterIO_1_bits_bankID_T_7))
                                                                     ? 3U
                                                                     : 
                                                                    ((2U 
                                                                      == (IData)(__PVT___io_outArbiterIO_1_bits_bankID_T_7))
                                                                      ? 2U
                                                                      : 
                                                                     (1U 
                                                                      == (IData)(__PVT___io_outArbiterIO_1_bits_bankID_T_7))))))))))))))))))))));
    __PVT___io_outArbiterIO_2_bits_bankID_T_49 = ((0x15U 
                                                   == (IData)(__PVT___io_outArbiterIO_2_bits_bankID_T_7))
                                                   ? 1U
                                                   : 
                                                  ((0x14U 
                                                    == (IData)(__PVT___io_outArbiterIO_2_bits_bankID_T_7))
                                                    ? 0U
                                                    : 
                                                   ((0x13U 
                                                     == (IData)(__PVT___io_outArbiterIO_2_bits_bankID_T_7))
                                                     ? 3U
                                                     : 
                                                    ((0x12U 
                                                      == (IData)(__PVT___io_outArbiterIO_2_bits_bankID_T_7))
                                                      ? 2U
                                                      : 
                                                     ((0x11U 
                                                       == (IData)(__PVT___io_outArbiterIO_2_bits_bankID_T_7))
                                                       ? 1U
                                                       : 
                                                      ((0x10U 
                                                        == (IData)(__PVT___io_outArbiterIO_2_bits_bankID_T_7))
                                                        ? 0U
                                                        : 
                                                       ((0xfU 
                                                         == (IData)(__PVT___io_outArbiterIO_2_bits_bankID_T_7))
                                                         ? 3U
                                                         : 
                                                        ((0xeU 
                                                          == (IData)(__PVT___io_outArbiterIO_2_bits_bankID_T_7))
                                                          ? 2U
                                                          : 
                                                         ((0xdU 
                                                           == (IData)(__PVT___io_outArbiterIO_2_bits_bankID_T_7))
                                                           ? 1U
                                                           : 
                                                          ((0xcU 
                                                            == (IData)(__PVT___io_outArbiterIO_2_bits_bankID_T_7))
                                                            ? 0U
                                                            : 
                                                           ((0xbU 
                                                             == (IData)(__PVT___io_outArbiterIO_2_bits_bankID_T_7))
                                                             ? 3U
                                                             : 
                                                            ((0xaU 
                                                              == (IData)(__PVT___io_outArbiterIO_2_bits_bankID_T_7))
                                                              ? 2U
                                                              : 
                                                             ((9U 
                                                               == (IData)(__PVT___io_outArbiterIO_2_bits_bankID_T_7))
                                                               ? 1U
                                                               : 
                                                              ((8U 
                                                                == (IData)(__PVT___io_outArbiterIO_2_bits_bankID_T_7))
                                                                ? 0U
                                                                : 
                                                               ((7U 
                                                                 == (IData)(__PVT___io_outArbiterIO_2_bits_bankID_T_7))
                                                                 ? 3U
                                                                 : 
                                                                ((6U 
                                                                  == (IData)(__PVT___io_outArbiterIO_2_bits_bankID_T_7))
                                                                  ? 2U
                                                                  : 
                                                                 ((5U 
                                                                   == (IData)(__PVT___io_outArbiterIO_2_bits_bankID_T_7))
                                                                   ? 1U
                                                                   : 
                                                                  ((4U 
                                                                    == (IData)(__PVT___io_outArbiterIO_2_bits_bankID_T_7))
                                                                    ? 0U
                                                                    : 
                                                                   ((3U 
                                                                     == (IData)(__PVT___io_outArbiterIO_2_bits_bankID_T_7))
                                                                     ? 3U
                                                                     : 
                                                                    ((2U 
                                                                      == (IData)(__PVT___io_outArbiterIO_2_bits_bankID_T_7))
                                                                      ? 2U
                                                                      : 
                                                                     (1U 
                                                                      == (IData)(__PVT___io_outArbiterIO_2_bits_bankID_T_7))))))))))))))))))))));
    vlSelf->__PVT___io_outArbiterIO_0_bits_rsAddr_T_72 
        = (0x3fU & (((0x1fU == (IData)(__PVT___io_outArbiterIO_0_bits_rsAddr_T_3))
                      ? 7U : ((0x1eU == (IData)(__PVT___io_outArbiterIO_0_bits_rsAddr_T_3))
                               ? 7U : ((0x1dU == (IData)(__PVT___io_outArbiterIO_0_bits_rsAddr_T_3))
                                        ? 7U : ((0x1cU 
                                                 == (IData)(__PVT___io_outArbiterIO_0_bits_rsAddr_T_3))
                                                 ? 7U
                                                 : 
                                                ((0x1bU 
                                                  == (IData)(__PVT___io_outArbiterIO_0_bits_rsAddr_T_3))
                                                  ? 6U
                                                  : 
                                                 ((0x1aU 
                                                   == (IData)(__PVT___io_outArbiterIO_0_bits_rsAddr_T_3))
                                                   ? 6U
                                                   : 
                                                  ((0x19U 
                                                    == (IData)(__PVT___io_outArbiterIO_0_bits_rsAddr_T_3))
                                                    ? 6U
                                                    : (IData)(__PVT___io_outArbiterIO_0_bits_rsAddr_T_51)))))))) 
                    + ((IData)(vlSelf->__PVT___io_outArbiterIO_0_bits_rsAddr_T_69) 
                       << 3U)));
    vlSelf->__PVT___io_outArbiterIO_1_bits_rsAddr_T_72 
        = (0x3fU & (((0x1fU == (IData)(__PVT___io_outArbiterIO_1_bits_rsAddr_T_3))
                      ? 7U : ((0x1eU == (IData)(__PVT___io_outArbiterIO_1_bits_rsAddr_T_3))
                               ? 7U : ((0x1dU == (IData)(__PVT___io_outArbiterIO_1_bits_rsAddr_T_3))
                                        ? 7U : ((0x1cU 
                                                 == (IData)(__PVT___io_outArbiterIO_1_bits_rsAddr_T_3))
                                                 ? 7U
                                                 : 
                                                ((0x1bU 
                                                  == (IData)(__PVT___io_outArbiterIO_1_bits_rsAddr_T_3))
                                                  ? 6U
                                                  : 
                                                 ((0x1aU 
                                                   == (IData)(__PVT___io_outArbiterIO_1_bits_rsAddr_T_3))
                                                   ? 6U
                                                   : 
                                                  ((0x19U 
                                                    == (IData)(__PVT___io_outArbiterIO_1_bits_rsAddr_T_3))
                                                    ? 6U
                                                    : (IData)(__PVT___io_outArbiterIO_1_bits_rsAddr_T_51)))))))) 
                    + ((IData)(vlSelf->__PVT___io_outArbiterIO_0_bits_rsAddr_T_69) 
                       << 3U)));
    vlSelf->__PVT___io_outArbiterIO_2_bits_rsAddr_T_72 
        = (0x3fU & (((0x1fU == (IData)(__PVT___io_outArbiterIO_2_bits_rsAddr_T_3))
                      ? 7U : ((0x1eU == (IData)(__PVT___io_outArbiterIO_2_bits_rsAddr_T_3))
                               ? 7U : ((0x1dU == (IData)(__PVT___io_outArbiterIO_2_bits_rsAddr_T_3))
                                        ? 7U : ((0x1cU 
                                                 == (IData)(__PVT___io_outArbiterIO_2_bits_rsAddr_T_3))
                                                 ? 7U
                                                 : 
                                                ((0x1bU 
                                                  == (IData)(__PVT___io_outArbiterIO_2_bits_rsAddr_T_3))
                                                  ? 6U
                                                  : 
                                                 ((0x1aU 
                                                   == (IData)(__PVT___io_outArbiterIO_2_bits_rsAddr_T_3))
                                                   ? 6U
                                                   : 
                                                  ((0x19U 
                                                    == (IData)(__PVT___io_outArbiterIO_2_bits_rsAddr_T_3))
                                                    ? 6U
                                                    : (IData)(__PVT___io_outArbiterIO_2_bits_rsAddr_T_51)))))))) 
                    + ((IData)(vlSelf->__PVT___io_outArbiterIO_0_bits_rsAddr_T_69) 
                       << 3U)));
    vlSelf->__PVT__io_outArbiterIO_3_bits_bankID = 
        ((0x1fU == (IData)(__PVT___io_outArbiterIO_3_bits_bankID_T_7))
          ? 3U : ((0x1eU == (IData)(__PVT___io_outArbiterIO_3_bits_bankID_T_7))
                   ? 2U : ((0x1dU == (IData)(__PVT___io_outArbiterIO_3_bits_bankID_T_7))
                            ? 1U : ((0x1cU == (IData)(__PVT___io_outArbiterIO_3_bits_bankID_T_7))
                                     ? 0U : ((0x1bU 
                                              == (IData)(__PVT___io_outArbiterIO_3_bits_bankID_T_7))
                                              ? 3U : 
                                             ((0x1aU 
                                               == (IData)(__PVT___io_outArbiterIO_3_bits_bankID_T_7))
                                               ? 2U
                                               : ((0x19U 
                                                   == (IData)(__PVT___io_outArbiterIO_3_bits_bankID_T_7))
                                                   ? 1U
                                                   : 
                                                  ((0x18U 
                                                    == (IData)(__PVT___io_outArbiterIO_3_bits_bankID_T_7))
                                                    ? 0U
                                                    : 
                                                   ((0x17U 
                                                     == (IData)(__PVT___io_outArbiterIO_3_bits_bankID_T_7))
                                                     ? 3U
                                                     : 
                                                    ((0x16U 
                                                      == (IData)(__PVT___io_outArbiterIO_3_bits_bankID_T_7))
                                                      ? 2U
                                                      : (IData)(__PVT___io_outArbiterIO_3_bits_bankID_T_49)))))))))));
    vlSelf->__PVT__io_outArbiterIO_0_bits_bankID = 
        ((0x1fU == (IData)(__PVT___io_outArbiterIO_0_bits_bankID_T_7))
          ? 3U : ((0x1eU == (IData)(__PVT___io_outArbiterIO_0_bits_bankID_T_7))
                   ? 2U : ((0x1dU == (IData)(__PVT___io_outArbiterIO_0_bits_bankID_T_7))
                            ? 1U : ((0x1cU == (IData)(__PVT___io_outArbiterIO_0_bits_bankID_T_7))
                                     ? 0U : ((0x1bU 
                                              == (IData)(__PVT___io_outArbiterIO_0_bits_bankID_T_7))
                                              ? 3U : 
                                             ((0x1aU 
                                               == (IData)(__PVT___io_outArbiterIO_0_bits_bankID_T_7))
                                               ? 2U
                                               : ((0x19U 
                                                   == (IData)(__PVT___io_outArbiterIO_0_bits_bankID_T_7))
                                                   ? 1U
                                                   : 
                                                  ((0x18U 
                                                    == (IData)(__PVT___io_outArbiterIO_0_bits_bankID_T_7))
                                                    ? 0U
                                                    : 
                                                   ((0x17U 
                                                     == (IData)(__PVT___io_outArbiterIO_0_bits_bankID_T_7))
                                                     ? 3U
                                                     : 
                                                    ((0x16U 
                                                      == (IData)(__PVT___io_outArbiterIO_0_bits_bankID_T_7))
                                                      ? 2U
                                                      : (IData)(__PVT___io_outArbiterIO_0_bits_bankID_T_49)))))))))));
    vlSelf->__PVT__io_outArbiterIO_1_bits_bankID = 
        ((0x1fU == (IData)(__PVT___io_outArbiterIO_1_bits_bankID_T_7))
          ? 3U : ((0x1eU == (IData)(__PVT___io_outArbiterIO_1_bits_bankID_T_7))
                   ? 2U : ((0x1dU == (IData)(__PVT___io_outArbiterIO_1_bits_bankID_T_7))
                            ? 1U : ((0x1cU == (IData)(__PVT___io_outArbiterIO_1_bits_bankID_T_7))
                                     ? 0U : ((0x1bU 
                                              == (IData)(__PVT___io_outArbiterIO_1_bits_bankID_T_7))
                                              ? 3U : 
                                             ((0x1aU 
                                               == (IData)(__PVT___io_outArbiterIO_1_bits_bankID_T_7))
                                               ? 2U
                                               : ((0x19U 
                                                   == (IData)(__PVT___io_outArbiterIO_1_bits_bankID_T_7))
                                                   ? 1U
                                                   : 
                                                  ((0x18U 
                                                    == (IData)(__PVT___io_outArbiterIO_1_bits_bankID_T_7))
                                                    ? 0U
                                                    : 
                                                   ((0x17U 
                                                     == (IData)(__PVT___io_outArbiterIO_1_bits_bankID_T_7))
                                                     ? 3U
                                                     : 
                                                    ((0x16U 
                                                      == (IData)(__PVT___io_outArbiterIO_1_bits_bankID_T_7))
                                                      ? 2U
                                                      : (IData)(__PVT___io_outArbiterIO_1_bits_bankID_T_49)))))))))));
    vlSelf->__PVT__io_outArbiterIO_2_bits_bankID = 
        ((0x1fU == (IData)(__PVT___io_outArbiterIO_2_bits_bankID_T_7))
          ? 3U : ((0x1eU == (IData)(__PVT___io_outArbiterIO_2_bits_bankID_T_7))
                   ? 2U : ((0x1dU == (IData)(__PVT___io_outArbiterIO_2_bits_bankID_T_7))
                            ? 1U : ((0x1cU == (IData)(__PVT___io_outArbiterIO_2_bits_bankID_T_7))
                                     ? 0U : ((0x1bU 
                                              == (IData)(__PVT___io_outArbiterIO_2_bits_bankID_T_7))
                                              ? 3U : 
                                             ((0x1aU 
                                               == (IData)(__PVT___io_outArbiterIO_2_bits_bankID_T_7))
                                               ? 2U
                                               : ((0x19U 
                                                   == (IData)(__PVT___io_outArbiterIO_2_bits_bankID_T_7))
                                                   ? 1U
                                                   : 
                                                  ((0x18U 
                                                    == (IData)(__PVT___io_outArbiterIO_2_bits_bankID_T_7))
                                                    ? 0U
                                                    : 
                                                   ((0x17U 
                                                     == (IData)(__PVT___io_outArbiterIO_2_bits_bankID_T_7))
                                                     ? 3U
                                                     : 
                                                    ((0x16U 
                                                      == (IData)(__PVT___io_outArbiterIO_2_bits_bankID_T_7))
                                                      ? 2U
                                                      : (IData)(__PVT___io_outArbiterIO_2_bits_bankID_T_49)))))))))));
}

VL_ATTR_COLD void VVentus_collectorUnit___stl_sequent__TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__operand_collector__DOT__collectorUnit_1__2(VVentus_collectorUnit* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VVentus__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VVentus_collectorUnit___stl_sequent__TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__operand_collector__DOT__collectorUnit_1__2\n"); );
    // Init
    IData/*31:0*/ __PVT___T_26_0;
    IData/*31:0*/ __PVT___T_31_0;
    IData/*31:0*/ __PVT___T_36;
    IData/*31:0*/ __PVT___GEN_171;
    IData/*31:0*/ __PVT___GEN_172;
    IData/*31:0*/ __PVT___GEN_173;
    IData/*31:0*/ __PVT___GEN_174;
    IData/*31:0*/ __PVT___GEN_176;
    IData/*31:0*/ __PVT___GEN_177;
    IData/*31:0*/ __PVT___GEN_178;
    IData/*31:0*/ __PVT___GEN_179;
    IData/*31:0*/ __PVT___GEN_181;
    IData/*31:0*/ __PVT___GEN_182;
    IData/*31:0*/ __PVT___GEN_183;
    IData/*31:0*/ __PVT___GEN_184;
    IData/*31:0*/ __PVT___T_54_0;
    IData/*31:0*/ __PVT___T_59_0;
    IData/*31:0*/ __PVT___T_64;
    IData/*31:0*/ __PVT___GEN_241;
    IData/*31:0*/ __PVT___GEN_242;
    IData/*31:0*/ __PVT___GEN_243;
    IData/*31:0*/ __PVT___GEN_244;
    IData/*31:0*/ __PVT___GEN_246;
    IData/*31:0*/ __PVT___GEN_247;
    IData/*31:0*/ __PVT___GEN_248;
    IData/*31:0*/ __PVT___GEN_249;
    IData/*31:0*/ __PVT___GEN_251;
    IData/*31:0*/ __PVT___GEN_252;
    IData/*31:0*/ __PVT___GEN_253;
    IData/*31:0*/ __PVT___GEN_254;
    IData/*31:0*/ __PVT___T_82_0;
    IData/*31:0*/ __PVT___T_87_0;
    IData/*31:0*/ __PVT___T_92;
    IData/*31:0*/ __PVT___T_110_0;
    IData/*31:0*/ __PVT___T_115_0;
    IData/*31:0*/ __PVT___T_120;
    // Body
    if ((1U == (IData)(vlSelf->__PVT__rsType_0))) {
        __PVT___T_110_0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_1_io_bankIn_3_bits_data_0;
        __PVT___T_82_0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_1_io_bankIn_2_bits_data_0;
        __PVT___T_54_0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_1_io_bankIn_1_bits_data_0;
        __PVT___T_26_0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_1_io_bankIn_0_bits_data_0;
    } else {
        __PVT___T_110_0 = 0U;
        __PVT___T_82_0 = 0U;
        __PVT___T_54_0 = 0U;
        __PVT___T_26_0 = 0U;
    }
    if ((1U == (IData)(vlSelf->__PVT__rsType_1))) {
        __PVT___T_115_0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_1_io_bankIn_3_bits_data_0;
        __PVT___T_87_0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_1_io_bankIn_2_bits_data_0;
        __PVT___T_59_0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_1_io_bankIn_1_bits_data_0;
        __PVT___T_31_0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_1_io_bankIn_0_bits_data_0;
    } else {
        __PVT___T_115_0 = 0U;
        __PVT___T_87_0 = 0U;
        __PVT___T_59_0 = 0U;
        __PVT___T_31_0 = 0U;
    }
    __PVT___T_120 = (vlSelf->__PVT__imm_io_out + vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_1_io_bankIn_3_bits_data_0);
    __PVT___T_92 = (vlSelf->__PVT__imm_io_out + vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_1_io_bankIn_2_bits_data_0);
    __PVT___T_64 = (vlSelf->__PVT__imm_io_out + vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_1_io_bankIn_1_bits_data_0);
    __PVT___T_36 = (vlSelf->__PVT__imm_io_out + vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_1_io_bankIn_0_bits_data_0);
    if ((2U == (IData)(vlSelf->__PVT__rsType_0))) {
        vlSelf->__PVT___T_112_0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_1_io_bankIn_3_bits_data_0;
        vlSelf->__PVT___T_112_1 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_1_io_bankIn_3_bits_data_1;
        vlSelf->__PVT___T_112_2 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_1_io_bankIn_3_bits_data_2;
        vlSelf->__PVT___T_112_3 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_1_io_bankIn_3_bits_data_3;
    } else {
        vlSelf->__PVT___T_112_0 = __PVT___T_110_0;
        vlSelf->__PVT___T_112_1 = __PVT___T_110_0;
        vlSelf->__PVT___T_112_2 = __PVT___T_110_0;
        vlSelf->__PVT___T_112_3 = __PVT___T_110_0;
    }
    if ((2U == (IData)(vlSelf->__PVT__rsType_1))) {
        vlSelf->__PVT___T_117_0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_1_io_bankIn_3_bits_data_0;
        vlSelf->__PVT___T_117_1 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_1_io_bankIn_3_bits_data_1;
        vlSelf->__PVT___T_117_2 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_1_io_bankIn_3_bits_data_2;
        vlSelf->__PVT___T_117_3 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_1_io_bankIn_3_bits_data_3;
    } else {
        vlSelf->__PVT___T_117_0 = __PVT___T_115_0;
        vlSelf->__PVT___T_117_1 = __PVT___T_115_0;
        vlSelf->__PVT___T_117_2 = __PVT___T_115_0;
        vlSelf->__PVT___T_117_3 = __PVT___T_115_0;
    }
    if (vlSelf->__PVT___T_23) {
        if ((0U == (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_1_io_bankIn_0_bits_regOrder))) {
            if ((2U == (IData)(vlSelf->__PVT__rsType_0))) {
                __PVT___GEN_171 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_1_io_bankIn_0_bits_data_0;
                __PVT___GEN_172 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_1_io_bankIn_0_bits_data_1;
                __PVT___GEN_173 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_1_io_bankIn_0_bits_data_2;
                __PVT___GEN_174 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_1_io_bankIn_0_bits_data_3;
            } else {
                __PVT___GEN_171 = __PVT___T_26_0;
                __PVT___GEN_172 = __PVT___T_26_0;
                __PVT___GEN_173 = __PVT___T_26_0;
                __PVT___GEN_174 = __PVT___T_26_0;
            }
            __PVT___GEN_176 = vlSelf->__PVT__rsReg_1_0;
            __PVT___GEN_177 = vlSelf->__PVT__rsReg_1_1;
            __PVT___GEN_178 = vlSelf->__PVT__rsReg_1_2;
            __PVT___GEN_179 = vlSelf->__PVT__rsReg_1_3;
            __PVT___GEN_181 = vlSelf->__PVT__rsReg_2_0;
            __PVT___GEN_182 = vlSelf->__PVT__rsReg_2_1;
            __PVT___GEN_183 = vlSelf->__PVT__rsReg_2_2;
            __PVT___GEN_184 = vlSelf->__PVT__rsReg_2_3;
        } else {
            __PVT___GEN_171 = vlSelf->__PVT__rsReg_0_0;
            __PVT___GEN_172 = vlSelf->__PVT__rsReg_0_1;
            __PVT___GEN_173 = vlSelf->__PVT__rsReg_0_2;
            __PVT___GEN_174 = vlSelf->__PVT__rsReg_0_3;
            if ((1U == (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_1_io_bankIn_0_bits_regOrder))) {
                if ((2U == (IData)(vlSelf->__PVT__rsType_1))) {
                    __PVT___GEN_176 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_1_io_bankIn_0_bits_data_0;
                    __PVT___GEN_177 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_1_io_bankIn_0_bits_data_1;
                    __PVT___GEN_178 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_1_io_bankIn_0_bits_data_2;
                    __PVT___GEN_179 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_1_io_bankIn_0_bits_data_3;
                } else {
                    __PVT___GEN_176 = __PVT___T_31_0;
                    __PVT___GEN_177 = __PVT___T_31_0;
                    __PVT___GEN_178 = __PVT___T_31_0;
                    __PVT___GEN_179 = __PVT___T_31_0;
                }
                __PVT___GEN_181 = vlSelf->__PVT__rsReg_2_0;
                __PVT___GEN_182 = vlSelf->__PVT__rsReg_2_1;
                __PVT___GEN_183 = vlSelf->__PVT__rsReg_2_2;
                __PVT___GEN_184 = vlSelf->__PVT__rsReg_2_3;
            } else {
                __PVT___GEN_176 = vlSelf->__PVT__rsReg_1_0;
                __PVT___GEN_177 = vlSelf->__PVT__rsReg_1_1;
                __PVT___GEN_178 = vlSelf->__PVT__rsReg_1_2;
                __PVT___GEN_179 = vlSelf->__PVT__rsReg_1_3;
                if ((2U == (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_1_io_bankIn_0_bits_regOrder))) {
                    if ((2U == (IData)(vlSelf->__PVT__controlReg_sel_alu3))) {
                        __PVT___GEN_181 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_1_io_bankIn_0_bits_data_0;
                        __PVT___GEN_182 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_1_io_bankIn_0_bits_data_0;
                        __PVT___GEN_183 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_1_io_bankIn_0_bits_data_0;
                        __PVT___GEN_184 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_1_io_bankIn_0_bits_data_0;
                    } else if ((3U == (IData)(vlSelf->__PVT__controlReg_sel_alu3))) {
                        __PVT___GEN_181 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_1_io_bankIn_0_bits_data_0;
                        if (vlSelf->__PVT__controlReg_isvec) {
                            __PVT___GEN_182 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_1_io_bankIn_0_bits_data_1;
                            __PVT___GEN_183 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_1_io_bankIn_0_bits_data_2;
                            __PVT___GEN_184 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_1_io_bankIn_0_bits_data_3;
                        } else {
                            __PVT___GEN_182 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_1_io_bankIn_0_bits_data_0;
                            __PVT___GEN_183 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_1_io_bankIn_0_bits_data_0;
                            __PVT___GEN_184 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_1_io_bankIn_0_bits_data_0;
                        }
                    } else if ((1U == (IData)(vlSelf->__PVT__controlReg_sel_alu3))) {
                        __PVT___GEN_181 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_1_io_bankIn_0_bits_data_0;
                        __PVT___GEN_182 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_1_io_bankIn_0_bits_data_1;
                        __PVT___GEN_183 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_1_io_bankIn_0_bits_data_2;
                        __PVT___GEN_184 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_1_io_bankIn_0_bits_data_3;
                    } else {
                        __PVT___GEN_181 = __PVT___T_36;
                        __PVT___GEN_182 = __PVT___T_36;
                        __PVT___GEN_183 = __PVT___T_36;
                        __PVT___GEN_184 = __PVT___T_36;
                    }
                } else {
                    __PVT___GEN_181 = vlSelf->__PVT__rsReg_2_0;
                    __PVT___GEN_182 = vlSelf->__PVT__rsReg_2_1;
                    __PVT___GEN_183 = vlSelf->__PVT__rsReg_2_2;
                    __PVT___GEN_184 = vlSelf->__PVT__rsReg_2_3;
                }
            }
        }
    } else {
        __PVT___GEN_171 = vlSelf->__PVT__rsReg_0_0;
        __PVT___GEN_172 = vlSelf->__PVT__rsReg_0_1;
        __PVT___GEN_173 = vlSelf->__PVT__rsReg_0_2;
        __PVT___GEN_174 = vlSelf->__PVT__rsReg_0_3;
        __PVT___GEN_176 = vlSelf->__PVT__rsReg_1_0;
        __PVT___GEN_177 = vlSelf->__PVT__rsReg_1_1;
        __PVT___GEN_178 = vlSelf->__PVT__rsReg_1_2;
        __PVT___GEN_179 = vlSelf->__PVT__rsReg_1_3;
        __PVT___GEN_181 = vlSelf->__PVT__rsReg_2_0;
        __PVT___GEN_182 = vlSelf->__PVT__rsReg_2_1;
        __PVT___GEN_183 = vlSelf->__PVT__rsReg_2_2;
        __PVT___GEN_184 = vlSelf->__PVT__rsReg_2_3;
    }
    if (vlSelf->__PVT___T_51) {
        if ((0U == (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_1_io_bankIn_1_bits_regOrder))) {
            if ((2U == (IData)(vlSelf->__PVT__rsType_0))) {
                __PVT___GEN_241 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_1_io_bankIn_1_bits_data_0;
                __PVT___GEN_242 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_1_io_bankIn_1_bits_data_1;
                __PVT___GEN_243 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_1_io_bankIn_1_bits_data_2;
                __PVT___GEN_244 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_1_io_bankIn_1_bits_data_3;
            } else {
                __PVT___GEN_241 = __PVT___T_54_0;
                __PVT___GEN_242 = __PVT___T_54_0;
                __PVT___GEN_243 = __PVT___T_54_0;
                __PVT___GEN_244 = __PVT___T_54_0;
            }
            __PVT___GEN_246 = __PVT___GEN_176;
            __PVT___GEN_247 = __PVT___GEN_177;
            __PVT___GEN_248 = __PVT___GEN_178;
            __PVT___GEN_249 = __PVT___GEN_179;
            __PVT___GEN_251 = __PVT___GEN_181;
            __PVT___GEN_252 = __PVT___GEN_182;
            __PVT___GEN_253 = __PVT___GEN_183;
            __PVT___GEN_254 = __PVT___GEN_184;
        } else {
            __PVT___GEN_241 = __PVT___GEN_171;
            __PVT___GEN_242 = __PVT___GEN_172;
            __PVT___GEN_243 = __PVT___GEN_173;
            __PVT___GEN_244 = __PVT___GEN_174;
            if ((1U == (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_1_io_bankIn_1_bits_regOrder))) {
                if ((2U == (IData)(vlSelf->__PVT__rsType_1))) {
                    __PVT___GEN_246 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_1_io_bankIn_1_bits_data_0;
                    __PVT___GEN_247 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_1_io_bankIn_1_bits_data_1;
                    __PVT___GEN_248 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_1_io_bankIn_1_bits_data_2;
                    __PVT___GEN_249 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_1_io_bankIn_1_bits_data_3;
                } else {
                    __PVT___GEN_246 = __PVT___T_59_0;
                    __PVT___GEN_247 = __PVT___T_59_0;
                    __PVT___GEN_248 = __PVT___T_59_0;
                    __PVT___GEN_249 = __PVT___T_59_0;
                }
                __PVT___GEN_251 = __PVT___GEN_181;
                __PVT___GEN_252 = __PVT___GEN_182;
                __PVT___GEN_253 = __PVT___GEN_183;
                __PVT___GEN_254 = __PVT___GEN_184;
            } else {
                __PVT___GEN_246 = __PVT___GEN_176;
                __PVT___GEN_247 = __PVT___GEN_177;
                __PVT___GEN_248 = __PVT___GEN_178;
                __PVT___GEN_249 = __PVT___GEN_179;
                if ((2U == (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_1_io_bankIn_1_bits_regOrder))) {
                    if ((2U == (IData)(vlSelf->__PVT__controlReg_sel_alu3))) {
                        __PVT___GEN_251 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_1_io_bankIn_1_bits_data_0;
                        __PVT___GEN_252 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_1_io_bankIn_1_bits_data_0;
                        __PVT___GEN_253 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_1_io_bankIn_1_bits_data_0;
                        __PVT___GEN_254 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_1_io_bankIn_1_bits_data_0;
                    } else if ((3U == (IData)(vlSelf->__PVT__controlReg_sel_alu3))) {
                        __PVT___GEN_251 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_1_io_bankIn_1_bits_data_0;
                        if (vlSelf->__PVT__controlReg_isvec) {
                            __PVT___GEN_252 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_1_io_bankIn_1_bits_data_1;
                            __PVT___GEN_253 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_1_io_bankIn_1_bits_data_2;
                            __PVT___GEN_254 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_1_io_bankIn_1_bits_data_3;
                        } else {
                            __PVT___GEN_252 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_1_io_bankIn_1_bits_data_0;
                            __PVT___GEN_253 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_1_io_bankIn_1_bits_data_0;
                            __PVT___GEN_254 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_1_io_bankIn_1_bits_data_0;
                        }
                    } else if ((1U == (IData)(vlSelf->__PVT__controlReg_sel_alu3))) {
                        __PVT___GEN_251 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_1_io_bankIn_1_bits_data_0;
                        __PVT___GEN_252 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_1_io_bankIn_1_bits_data_1;
                        __PVT___GEN_253 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_1_io_bankIn_1_bits_data_2;
                        __PVT___GEN_254 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_1_io_bankIn_1_bits_data_3;
                    } else {
                        __PVT___GEN_251 = __PVT___T_64;
                        __PVT___GEN_252 = __PVT___T_64;
                        __PVT___GEN_253 = __PVT___T_64;
                        __PVT___GEN_254 = __PVT___T_64;
                    }
                } else {
                    __PVT___GEN_251 = __PVT___GEN_181;
                    __PVT___GEN_252 = __PVT___GEN_182;
                    __PVT___GEN_253 = __PVT___GEN_183;
                    __PVT___GEN_254 = __PVT___GEN_184;
                }
            }
        }
    } else {
        __PVT___GEN_241 = __PVT___GEN_171;
        __PVT___GEN_242 = __PVT___GEN_172;
        __PVT___GEN_243 = __PVT___GEN_173;
        __PVT___GEN_244 = __PVT___GEN_174;
        __PVT___GEN_246 = __PVT___GEN_176;
        __PVT___GEN_247 = __PVT___GEN_177;
        __PVT___GEN_248 = __PVT___GEN_178;
        __PVT___GEN_249 = __PVT___GEN_179;
        __PVT___GEN_251 = __PVT___GEN_181;
        __PVT___GEN_252 = __PVT___GEN_182;
        __PVT___GEN_253 = __PVT___GEN_183;
        __PVT___GEN_254 = __PVT___GEN_184;
    }
    if (vlSelf->__PVT___T_79) {
        if ((0U == (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_1_io_bankIn_2_bits_regOrder))) {
            if ((2U == (IData)(vlSelf->__PVT__rsType_0))) {
                vlSelf->__PVT___GEN_311 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_1_io_bankIn_2_bits_data_0;
                vlSelf->__PVT___GEN_312 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_1_io_bankIn_2_bits_data_1;
                vlSelf->__PVT___GEN_313 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_1_io_bankIn_2_bits_data_2;
                vlSelf->__PVT___GEN_314 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_1_io_bankIn_2_bits_data_3;
            } else {
                vlSelf->__PVT___GEN_311 = __PVT___T_82_0;
                vlSelf->__PVT___GEN_312 = __PVT___T_82_0;
                vlSelf->__PVT___GEN_313 = __PVT___T_82_0;
                vlSelf->__PVT___GEN_314 = __PVT___T_82_0;
            }
            vlSelf->__PVT___GEN_316 = __PVT___GEN_246;
            vlSelf->__PVT___GEN_317 = __PVT___GEN_247;
            vlSelf->__PVT___GEN_318 = __PVT___GEN_248;
            vlSelf->__PVT___GEN_319 = __PVT___GEN_249;
            vlSelf->__PVT___GEN_321 = __PVT___GEN_251;
            vlSelf->__PVT___GEN_322 = __PVT___GEN_252;
            vlSelf->__PVT___GEN_323 = __PVT___GEN_253;
            vlSelf->__PVT___GEN_324 = __PVT___GEN_254;
        } else {
            vlSelf->__PVT___GEN_311 = __PVT___GEN_241;
            vlSelf->__PVT___GEN_312 = __PVT___GEN_242;
            vlSelf->__PVT___GEN_313 = __PVT___GEN_243;
            vlSelf->__PVT___GEN_314 = __PVT___GEN_244;
            if ((1U == (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_1_io_bankIn_2_bits_regOrder))) {
                if ((2U == (IData)(vlSelf->__PVT__rsType_1))) {
                    vlSelf->__PVT___GEN_316 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_1_io_bankIn_2_bits_data_0;
                    vlSelf->__PVT___GEN_317 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_1_io_bankIn_2_bits_data_1;
                    vlSelf->__PVT___GEN_318 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_1_io_bankIn_2_bits_data_2;
                    vlSelf->__PVT___GEN_319 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_1_io_bankIn_2_bits_data_3;
                } else {
                    vlSelf->__PVT___GEN_316 = __PVT___T_87_0;
                    vlSelf->__PVT___GEN_317 = __PVT___T_87_0;
                    vlSelf->__PVT___GEN_318 = __PVT___T_87_0;
                    vlSelf->__PVT___GEN_319 = __PVT___T_87_0;
                }
                vlSelf->__PVT___GEN_321 = __PVT___GEN_251;
                vlSelf->__PVT___GEN_322 = __PVT___GEN_252;
                vlSelf->__PVT___GEN_323 = __PVT___GEN_253;
                vlSelf->__PVT___GEN_324 = __PVT___GEN_254;
            } else {
                vlSelf->__PVT___GEN_316 = __PVT___GEN_246;
                vlSelf->__PVT___GEN_317 = __PVT___GEN_247;
                vlSelf->__PVT___GEN_318 = __PVT___GEN_248;
                vlSelf->__PVT___GEN_319 = __PVT___GEN_249;
                if ((2U == (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_1_io_bankIn_2_bits_regOrder))) {
                    if ((2U == (IData)(vlSelf->__PVT__controlReg_sel_alu3))) {
                        vlSelf->__PVT___GEN_321 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_1_io_bankIn_2_bits_data_0;
                        vlSelf->__PVT___GEN_322 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_1_io_bankIn_2_bits_data_0;
                        vlSelf->__PVT___GEN_323 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_1_io_bankIn_2_bits_data_0;
                        vlSelf->__PVT___GEN_324 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_1_io_bankIn_2_bits_data_0;
                    } else if ((3U == (IData)(vlSelf->__PVT__controlReg_sel_alu3))) {
                        vlSelf->__PVT___GEN_321 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_1_io_bankIn_2_bits_data_0;
                        if (vlSelf->__PVT__controlReg_isvec) {
                            vlSelf->__PVT___GEN_322 
                                = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_1_io_bankIn_2_bits_data_1;
                            vlSelf->__PVT___GEN_323 
                                = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_1_io_bankIn_2_bits_data_2;
                            vlSelf->__PVT___GEN_324 
                                = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_1_io_bankIn_2_bits_data_3;
                        } else {
                            vlSelf->__PVT___GEN_322 
                                = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_1_io_bankIn_2_bits_data_0;
                            vlSelf->__PVT___GEN_323 
                                = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_1_io_bankIn_2_bits_data_0;
                            vlSelf->__PVT___GEN_324 
                                = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_1_io_bankIn_2_bits_data_0;
                        }
                    } else if ((1U == (IData)(vlSelf->__PVT__controlReg_sel_alu3))) {
                        vlSelf->__PVT___GEN_321 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_1_io_bankIn_2_bits_data_0;
                        vlSelf->__PVT___GEN_322 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_1_io_bankIn_2_bits_data_1;
                        vlSelf->__PVT___GEN_323 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_1_io_bankIn_2_bits_data_2;
                        vlSelf->__PVT___GEN_324 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_1_io_bankIn_2_bits_data_3;
                    } else {
                        vlSelf->__PVT___GEN_321 = __PVT___T_92;
                        vlSelf->__PVT___GEN_322 = __PVT___T_92;
                        vlSelf->__PVT___GEN_323 = __PVT___T_92;
                        vlSelf->__PVT___GEN_324 = __PVT___T_92;
                    }
                } else {
                    vlSelf->__PVT___GEN_321 = __PVT___GEN_251;
                    vlSelf->__PVT___GEN_322 = __PVT___GEN_252;
                    vlSelf->__PVT___GEN_323 = __PVT___GEN_253;
                    vlSelf->__PVT___GEN_324 = __PVT___GEN_254;
                }
            }
        }
    } else {
        vlSelf->__PVT___GEN_311 = __PVT___GEN_241;
        vlSelf->__PVT___GEN_312 = __PVT___GEN_242;
        vlSelf->__PVT___GEN_313 = __PVT___GEN_243;
        vlSelf->__PVT___GEN_314 = __PVT___GEN_244;
        vlSelf->__PVT___GEN_316 = __PVT___GEN_246;
        vlSelf->__PVT___GEN_317 = __PVT___GEN_247;
        vlSelf->__PVT___GEN_318 = __PVT___GEN_248;
        vlSelf->__PVT___GEN_319 = __PVT___GEN_249;
        vlSelf->__PVT___GEN_321 = __PVT___GEN_251;
        vlSelf->__PVT___GEN_322 = __PVT___GEN_252;
        vlSelf->__PVT___GEN_323 = __PVT___GEN_253;
        vlSelf->__PVT___GEN_324 = __PVT___GEN_254;
    }
    if ((2U == (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_1_io_bankIn_3_bits_regOrder))) {
        if ((2U == (IData)(vlSelf->__PVT__controlReg_sel_alu3))) {
            vlSelf->__PVT___GEN_336 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_1_io_bankIn_3_bits_data_0;
            vlSelf->__PVT___GEN_337 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_1_io_bankIn_3_bits_data_0;
            vlSelf->__PVT___GEN_338 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_1_io_bankIn_3_bits_data_0;
            vlSelf->__PVT___GEN_339 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_1_io_bankIn_3_bits_data_0;
        } else if ((3U == (IData)(vlSelf->__PVT__controlReg_sel_alu3))) {
            vlSelf->__PVT___GEN_336 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_1_io_bankIn_3_bits_data_0;
            if (vlSelf->__PVT__controlReg_isvec) {
                vlSelf->__PVT___GEN_337 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_1_io_bankIn_3_bits_data_1;
                vlSelf->__PVT___GEN_338 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_1_io_bankIn_3_bits_data_2;
                vlSelf->__PVT___GEN_339 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_1_io_bankIn_3_bits_data_3;
            } else {
                vlSelf->__PVT___GEN_337 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_1_io_bankIn_3_bits_data_0;
                vlSelf->__PVT___GEN_338 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_1_io_bankIn_3_bits_data_0;
                vlSelf->__PVT___GEN_339 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_1_io_bankIn_3_bits_data_0;
            }
        } else if ((1U == (IData)(vlSelf->__PVT__controlReg_sel_alu3))) {
            vlSelf->__PVT___GEN_336 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_1_io_bankIn_3_bits_data_0;
            vlSelf->__PVT___GEN_337 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_1_io_bankIn_3_bits_data_1;
            vlSelf->__PVT___GEN_338 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_1_io_bankIn_3_bits_data_2;
            vlSelf->__PVT___GEN_339 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_1_io_bankIn_3_bits_data_3;
        } else {
            vlSelf->__PVT___GEN_336 = __PVT___T_120;
            vlSelf->__PVT___GEN_337 = __PVT___T_120;
            vlSelf->__PVT___GEN_338 = __PVT___T_120;
            vlSelf->__PVT___GEN_339 = __PVT___T_120;
        }
    } else {
        vlSelf->__PVT___GEN_336 = vlSelf->__PVT___GEN_321;
        vlSelf->__PVT___GEN_337 = vlSelf->__PVT___GEN_322;
        vlSelf->__PVT___GEN_338 = vlSelf->__PVT___GEN_323;
        vlSelf->__PVT___GEN_339 = vlSelf->__PVT___GEN_324;
    }
}

VL_ATTR_COLD void VVentus_collectorUnit___stl_sequent__TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__operand_collector__DOT__collectorUnit_2__0(VVentus_collectorUnit* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VVentus__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VVentus_collectorUnit___stl_sequent__TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__operand_collector__DOT__collectorUnit_2__0\n"); );
    // Init
    CData/*0:0*/ __PVT___GEN_175;
    CData/*0:0*/ __PVT___GEN_180;
    CData/*0:0*/ __PVT___GEN_185;
    CData/*0:0*/ __PVT___GEN_186;
    CData/*0:0*/ __PVT___GEN_187;
    CData/*0:0*/ __PVT___GEN_188;
    CData/*0:0*/ __PVT___GEN_189;
    CData/*0:0*/ __PVT___GEN_190;
    CData/*0:0*/ __PVT___GEN_250;
    CData/*0:0*/ __PVT___GEN_255;
    CData/*0:0*/ __PVT___GEN_256;
    CData/*0:0*/ __PVT___GEN_257;
    CData/*0:0*/ __PVT___GEN_258;
    CData/*0:0*/ __PVT___GEN_259;
    CData/*0:0*/ __PVT___GEN_260;
    // Body
    vlSelf->__PVT__io_issue_valid = (2U == (IData)(vlSelf->__PVT__state));
    vlSelf->__PVT___io_bankIn_0_ready_T = (1U == (IData)(vlSelf->__PVT__state));
    vlSelf->__PVT___io_outArbiterIO_0_bits_bankID_T_1 
        = (0U == (IData)(vlSelf->__PVT__state));
    vlSelf->__PVT___io_control_ready_T_1 = (((IData)(vlSelf->__PVT__valid_3) 
                                             << 3U) 
                                            | (((IData)(vlSelf->__PVT__valid_2) 
                                                << 2U) 
                                               | (((IData)(vlSelf->__PVT__valid_1) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->__PVT__valid_0))));
    vlSelf->__PVT___T_107 = (((~ (IData)(vlSelf->__PVT__ready_3)) 
                              & (1U == (IData)(vlSelf->__PVT__state))) 
                             & ((IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.pipe__DOT__operand_collector__DOT__crossBar__DOT____VdfgTmp_h2d22f79c__0) 
                                | ((IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.pipe__DOT__operand_collector__DOT__crossBar__DOT____VdfgTmp_heaa6ffa7__0) 
                                   | ((IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.pipe__DOT__operand_collector__DOT__crossBar__DOT____VdfgTmp_h0446d71c__0) 
                                      | (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.pipe__DOT__operand_collector__DOT__crossBar__DOT____VdfgTmp_h878ef6a5__0)))));
    vlSelf->__PVT___T_79 = (((~ (IData)(vlSelf->__PVT__ready_2)) 
                             & (1U == (IData)(vlSelf->__PVT__state))) 
                            & ((IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.pipe__DOT__operand_collector__DOT__crossBar__DOT____VdfgTmp_h337e4c23__0) 
                               | ((IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.pipe__DOT__operand_collector__DOT__crossBar__DOT____VdfgTmp_hd1e316c2__0) 
                                  | ((IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.pipe__DOT__operand_collector__DOT__crossBar__DOT____VdfgTmp_h1f09b9a1__0) 
                                     | (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.pipe__DOT__operand_collector__DOT__crossBar__DOT____VdfgTmp_h9125ec06__0)))));
    vlSelf->__PVT___T_51 = (((~ (IData)(vlSelf->__PVT__ready_1)) 
                             & (1U == (IData)(vlSelf->__PVT__state))) 
                            & ((IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.pipe__DOT__operand_collector__DOT__crossBar__DOT____VdfgTmp_h3372bece__0) 
                               | ((IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.pipe__DOT__operand_collector__DOT__crossBar__DOT____VdfgTmp_hd117269f__0) 
                                  | ((IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.pipe__DOT__operand_collector__DOT__crossBar__DOT____VdfgTmp_h1f35ca4c__0) 
                                     | (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.pipe__DOT__operand_collector__DOT__crossBar__DOT____VdfgTmp_h91d91fd5__0)))));
    vlSelf->__PVT___T_23 = (((~ (IData)(vlSelf->__PVT__ready_0)) 
                             & (1U == (IData)(vlSelf->__PVT__state))) 
                            & ((IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.pipe__DOT__operand_collector__DOT__crossBar__DOT____VdfgTmp_h32d468ce__0) 
                               | ((IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.pipe__DOT__operand_collector__DOT__crossBar__DOT____VdfgTmp_hd1f4b00d__0) 
                                  | ((IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.pipe__DOT__operand_collector__DOT__crossBar__DOT____VdfgTmp_h1f115c72__0) 
                                     | (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.pipe__DOT__operand_collector__DOT__crossBar__DOT____VdfgTmp_h91824993__0)))));
    vlSelf->__PVT__io_control_ready = ((~ (IData)((0U 
                                                   != (IData)(vlSelf->__PVT___io_control_ready_T_1)))) 
                                       & (0U == (IData)(vlSelf->__PVT__state)));
    if (vlSelf->__PVT___T_23) {
        __PVT___GEN_175 = ((0U == (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2_io_bankIn_0_bits_regOrder)) 
                           | (IData)(vlSelf->__PVT__ready_0));
        if ((0U == (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2_io_bankIn_0_bits_regOrder))) {
            __PVT___GEN_180 = vlSelf->__PVT__ready_1;
            __PVT___GEN_185 = vlSelf->__PVT__ready_2;
            __PVT___GEN_190 = vlSelf->__PVT__ready_3;
            __PVT___GEN_186 = (1U & (IData)(vlSelf->__PVT__mask_0));
            __PVT___GEN_187 = (1U & (IData)(vlSelf->__PVT__mask_1));
            __PVT___GEN_188 = (1U & (IData)(vlSelf->__PVT__mask_2));
            __PVT___GEN_189 = (1U & (IData)(vlSelf->__PVT__mask_3));
        } else {
            __PVT___GEN_180 = ((1U == (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2_io_bankIn_0_bits_regOrder)) 
                               | (IData)(vlSelf->__PVT__ready_1));
            if ((1U == (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2_io_bankIn_0_bits_regOrder))) {
                __PVT___GEN_185 = vlSelf->__PVT__ready_2;
                __PVT___GEN_190 = vlSelf->__PVT__ready_3;
                __PVT___GEN_186 = (1U & (IData)(vlSelf->__PVT__mask_0));
                __PVT___GEN_187 = (1U & (IData)(vlSelf->__PVT__mask_1));
                __PVT___GEN_188 = (1U & (IData)(vlSelf->__PVT__mask_2));
                __PVT___GEN_189 = (1U & (IData)(vlSelf->__PVT__mask_3));
            } else {
                __PVT___GEN_185 = ((2U == (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2_io_bankIn_0_bits_regOrder)) 
                                   | (IData)(vlSelf->__PVT__ready_2));
                if ((2U == (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2_io_bankIn_0_bits_regOrder))) {
                    __PVT___GEN_190 = vlSelf->__PVT__ready_3;
                    __PVT___GEN_186 = (1U & (IData)(vlSelf->__PVT__mask_0));
                    __PVT___GEN_187 = (1U & (IData)(vlSelf->__PVT__mask_1));
                    __PVT___GEN_188 = (1U & (IData)(vlSelf->__PVT__mask_2));
                    __PVT___GEN_189 = (1U & (IData)(vlSelf->__PVT__mask_3));
                } else {
                    __PVT___GEN_190 = ((3U == (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2_io_bankIn_0_bits_regOrder)) 
                                       | (IData)(vlSelf->__PVT__ready_3));
                    if ((3U == (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2_io_bankIn_0_bits_regOrder))) {
                        __PVT___GEN_186 = (1U & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2_io_bankIn_0_bits_v0_0);
                        __PVT___GEN_187 = (1U & (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2_io_bankIn_0_bits_v0_0 
                                                 >> 1U));
                        __PVT___GEN_188 = (1U & (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2_io_bankIn_0_bits_v0_0 
                                                 >> 2U));
                        __PVT___GEN_189 = (1U & (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2_io_bankIn_0_bits_v0_0 
                                                 >> 3U));
                    } else {
                        __PVT___GEN_186 = (1U & (IData)(vlSelf->__PVT__mask_0));
                        __PVT___GEN_187 = (1U & (IData)(vlSelf->__PVT__mask_1));
                        __PVT___GEN_188 = (1U & (IData)(vlSelf->__PVT__mask_2));
                        __PVT___GEN_189 = (1U & (IData)(vlSelf->__PVT__mask_3));
                    }
                }
            }
        }
    } else {
        __PVT___GEN_175 = vlSelf->__PVT__ready_0;
        __PVT___GEN_180 = vlSelf->__PVT__ready_1;
        __PVT___GEN_185 = vlSelf->__PVT__ready_2;
        __PVT___GEN_190 = vlSelf->__PVT__ready_3;
        __PVT___GEN_186 = (1U & (IData)(vlSelf->__PVT__mask_0));
        __PVT___GEN_187 = (1U & (IData)(vlSelf->__PVT__mask_1));
        __PVT___GEN_188 = (1U & (IData)(vlSelf->__PVT__mask_2));
        __PVT___GEN_189 = (1U & (IData)(vlSelf->__PVT__mask_3));
    }
    if (vlSelf->__PVT___T_51) {
        vlSelf->__PVT___GEN_245 = ((0U == (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2_io_bankIn_1_bits_regOrder)) 
                                   | (IData)(__PVT___GEN_175));
        if ((0U == (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2_io_bankIn_1_bits_regOrder))) {
            __PVT___GEN_250 = __PVT___GEN_180;
            __PVT___GEN_255 = __PVT___GEN_185;
            __PVT___GEN_260 = __PVT___GEN_190;
            __PVT___GEN_256 = (1U & (IData)(__PVT___GEN_186));
            __PVT___GEN_257 = (1U & (IData)(__PVT___GEN_187));
            __PVT___GEN_258 = (1U & (IData)(__PVT___GEN_188));
            __PVT___GEN_259 = (1U & (IData)(__PVT___GEN_189));
        } else {
            __PVT___GEN_250 = ((1U == (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2_io_bankIn_1_bits_regOrder)) 
                               | (IData)(__PVT___GEN_180));
            if ((1U == (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2_io_bankIn_1_bits_regOrder))) {
                __PVT___GEN_255 = __PVT___GEN_185;
                __PVT___GEN_260 = __PVT___GEN_190;
                __PVT___GEN_256 = (1U & (IData)(__PVT___GEN_186));
                __PVT___GEN_257 = (1U & (IData)(__PVT___GEN_187));
                __PVT___GEN_258 = (1U & (IData)(__PVT___GEN_188));
                __PVT___GEN_259 = (1U & (IData)(__PVT___GEN_189));
            } else {
                __PVT___GEN_255 = ((2U == (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2_io_bankIn_1_bits_regOrder)) 
                                   | (IData)(__PVT___GEN_185));
                if ((2U == (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2_io_bankIn_1_bits_regOrder))) {
                    __PVT___GEN_260 = __PVT___GEN_190;
                    __PVT___GEN_256 = (1U & (IData)(__PVT___GEN_186));
                    __PVT___GEN_257 = (1U & (IData)(__PVT___GEN_187));
                    __PVT___GEN_258 = (1U & (IData)(__PVT___GEN_188));
                    __PVT___GEN_259 = (1U & (IData)(__PVT___GEN_189));
                } else {
                    __PVT___GEN_260 = ((3U == (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2_io_bankIn_1_bits_regOrder)) 
                                       | (IData)(__PVT___GEN_190));
                    if ((3U == (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2_io_bankIn_1_bits_regOrder))) {
                        __PVT___GEN_256 = (1U & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2_io_bankIn_1_bits_v0_0);
                        __PVT___GEN_257 = (1U & (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2_io_bankIn_1_bits_v0_0 
                                                 >> 1U));
                        __PVT___GEN_258 = (1U & (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2_io_bankIn_1_bits_v0_0 
                                                 >> 2U));
                        __PVT___GEN_259 = (1U & (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2_io_bankIn_1_bits_v0_0 
                                                 >> 3U));
                    } else {
                        __PVT___GEN_256 = (1U & (IData)(__PVT___GEN_186));
                        __PVT___GEN_257 = (1U & (IData)(__PVT___GEN_187));
                        __PVT___GEN_258 = (1U & (IData)(__PVT___GEN_188));
                        __PVT___GEN_259 = (1U & (IData)(__PVT___GEN_189));
                    }
                }
            }
        }
    } else {
        vlSelf->__PVT___GEN_245 = __PVT___GEN_175;
        __PVT___GEN_250 = __PVT___GEN_180;
        __PVT___GEN_255 = __PVT___GEN_185;
        __PVT___GEN_260 = __PVT___GEN_190;
        __PVT___GEN_256 = (1U & (IData)(__PVT___GEN_186));
        __PVT___GEN_257 = (1U & (IData)(__PVT___GEN_187));
        __PVT___GEN_258 = (1U & (IData)(__PVT___GEN_188));
        __PVT___GEN_259 = (1U & (IData)(__PVT___GEN_189));
    }
    vlSelf->__PVT___GEN_295 = ((0U == (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2_io_bankIn_2_bits_regOrder)) 
                               | (IData)(vlSelf->__PVT___GEN_245));
    if (vlSelf->__PVT___T_79) {
        if ((0U == (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2_io_bankIn_2_bits_regOrder))) {
            vlSelf->__PVT___GEN_320 = __PVT___GEN_250;
            vlSelf->__PVT___GEN_325 = __PVT___GEN_255;
            vlSelf->__PVT___GEN_330 = __PVT___GEN_260;
            vlSelf->__PVT___GEN_326 = (1U & (IData)(__PVT___GEN_256));
            vlSelf->__PVT___GEN_327 = (1U & (IData)(__PVT___GEN_257));
            vlSelf->__PVT___GEN_328 = (1U & (IData)(__PVT___GEN_258));
            vlSelf->__PVT___GEN_329 = (1U & (IData)(__PVT___GEN_259));
        } else {
            vlSelf->__PVT___GEN_320 = ((1U == (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2_io_bankIn_2_bits_regOrder)) 
                                       | (IData)(__PVT___GEN_250));
            if ((1U == (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2_io_bankIn_2_bits_regOrder))) {
                vlSelf->__PVT___GEN_325 = __PVT___GEN_255;
                vlSelf->__PVT___GEN_330 = __PVT___GEN_260;
                vlSelf->__PVT___GEN_326 = (1U & (IData)(__PVT___GEN_256));
                vlSelf->__PVT___GEN_327 = (1U & (IData)(__PVT___GEN_257));
                vlSelf->__PVT___GEN_328 = (1U & (IData)(__PVT___GEN_258));
                vlSelf->__PVT___GEN_329 = (1U & (IData)(__PVT___GEN_259));
            } else {
                vlSelf->__PVT___GEN_325 = ((2U == (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2_io_bankIn_2_bits_regOrder)) 
                                           | (IData)(__PVT___GEN_255));
                if ((2U == (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2_io_bankIn_2_bits_regOrder))) {
                    vlSelf->__PVT___GEN_330 = __PVT___GEN_260;
                    vlSelf->__PVT___GEN_326 = (1U & (IData)(__PVT___GEN_256));
                    vlSelf->__PVT___GEN_327 = (1U & (IData)(__PVT___GEN_257));
                    vlSelf->__PVT___GEN_328 = (1U & (IData)(__PVT___GEN_258));
                    vlSelf->__PVT___GEN_329 = (1U & (IData)(__PVT___GEN_259));
                } else {
                    vlSelf->__PVT___GEN_330 = ((3U 
                                                == (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2_io_bankIn_2_bits_regOrder)) 
                                               | (IData)(__PVT___GEN_260));
                    if ((3U == (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2_io_bankIn_2_bits_regOrder))) {
                        vlSelf->__PVT___GEN_326 = (1U 
                                                   & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2_io_bankIn_2_bits_v0_0);
                        vlSelf->__PVT___GEN_327 = (1U 
                                                   & (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2_io_bankIn_2_bits_v0_0 
                                                      >> 1U));
                        vlSelf->__PVT___GEN_328 = (1U 
                                                   & (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2_io_bankIn_2_bits_v0_0 
                                                      >> 2U));
                        vlSelf->__PVT___GEN_329 = (1U 
                                                   & (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2_io_bankIn_2_bits_v0_0 
                                                      >> 3U));
                    } else {
                        vlSelf->__PVT___GEN_326 = (1U 
                                                   & (IData)(__PVT___GEN_256));
                        vlSelf->__PVT___GEN_327 = (1U 
                                                   & (IData)(__PVT___GEN_257));
                        vlSelf->__PVT___GEN_328 = (1U 
                                                   & (IData)(__PVT___GEN_258));
                        vlSelf->__PVT___GEN_329 = (1U 
                                                   & (IData)(__PVT___GEN_259));
                    }
                }
            }
        }
    } else {
        vlSelf->__PVT___GEN_320 = __PVT___GEN_250;
        vlSelf->__PVT___GEN_325 = __PVT___GEN_255;
        vlSelf->__PVT___GEN_330 = __PVT___GEN_260;
        vlSelf->__PVT___GEN_326 = (1U & (IData)(__PVT___GEN_256));
        vlSelf->__PVT___GEN_327 = (1U & (IData)(__PVT___GEN_257));
        vlSelf->__PVT___GEN_328 = (1U & (IData)(__PVT___GEN_258));
        vlSelf->__PVT___GEN_329 = (1U & (IData)(__PVT___GEN_259));
    }
}

VL_ATTR_COLD void VVentus_collectorUnit___stl_sequent__TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__operand_collector__DOT__collectorUnit_2__1(VVentus_collectorUnit* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VVentus__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VVentus_collectorUnit___stl_sequent__TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__operand_collector__DOT__collectorUnit_2__1\n"); );
    // Init
    CData/*0:0*/ __PVT___io_outArbiterIO_0_bits_bankID_T_2;
    CData/*4:0*/ __PVT___io_outArbiterIO_0_bits_bankID_T_7;
    CData/*1:0*/ __PVT___io_outArbiterIO_0_bits_bankID_T_49;
    CData/*4:0*/ __PVT___io_outArbiterIO_0_bits_rsAddr_T_3;
    CData/*2:0*/ __PVT___io_outArbiterIO_0_bits_rsAddr_T_51;
    CData/*4:0*/ __PVT___io_outArbiterIO_1_bits_bankID_T_7;
    CData/*1:0*/ __PVT___io_outArbiterIO_1_bits_bankID_T_49;
    CData/*4:0*/ __PVT___io_outArbiterIO_1_bits_rsAddr_T_3;
    CData/*2:0*/ __PVT___io_outArbiterIO_1_bits_rsAddr_T_51;
    CData/*4:0*/ __PVT___io_outArbiterIO_2_bits_bankID_T_7;
    CData/*1:0*/ __PVT___io_outArbiterIO_2_bits_bankID_T_49;
    CData/*4:0*/ __PVT___io_outArbiterIO_2_bits_rsAddr_T_3;
    CData/*2:0*/ __PVT___io_outArbiterIO_2_bits_rsAddr_T_51;
    CData/*4:0*/ __PVT___io_outArbiterIO_3_bits_bankID_T_7;
    CData/*1:0*/ __PVT___io_outArbiterIO_3_bits_bankID_T_49;
    IData/*20:0*/ __PVT__imm__DOT___out_T_7;
    // Body
    vlSelf->__PVT___T_11 = (((~ (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.pipe__DOT__operand_collector__DOT__issueArbiter__DOT____VdfgTmp_h245e14da__0)) 
                             & (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_io_issue_ready)) 
                            & (2U == (IData)(vlSelf->__PVT__state)));
    if ((0U == (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_io_control_bits_sel_alu1))) {
        vlSelf->__PVT___GEN_6 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_io_control_bits_pc;
        vlSelf->__PVT___GEN_7 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_io_control_bits_pc;
        vlSelf->__PVT___GEN_8 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_io_control_bits_pc;
        vlSelf->__PVT___GEN_9 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_io_control_bits_pc;
    } else {
        vlSelf->__PVT___GEN_6 = vlSelf->__PVT__rsReg_0_0;
        vlSelf->__PVT___GEN_7 = vlSelf->__PVT__rsReg_0_1;
        vlSelf->__PVT___GEN_8 = vlSelf->__PVT__rsReg_0_2;
        vlSelf->__PVT___GEN_9 = vlSelf->__PVT__rsReg_0_3;
    }
    vlSelf->__PVT___GEN_17 = ((3U == (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_io_control_bits_sel_alu1)) 
                              | (0U == (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_io_control_bits_sel_alu1)));
    vlSelf->__PVT___GEN_36 = (1U & ((~ (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_io_control_bits_mask)) 
                                    | (IData)(vlSelf->__PVT__mask_0)));
    if ((0U == (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_io_control_bits_sel_alu2))) {
        vlSelf->__PVT___GEN_18 = 4U;
        vlSelf->__PVT___GEN_19 = 4U;
        vlSelf->__PVT___GEN_20 = 4U;
        vlSelf->__PVT___GEN_21 = 4U;
    } else {
        vlSelf->__PVT___GEN_18 = vlSelf->__PVT__rsReg_1_0;
        vlSelf->__PVT___GEN_19 = vlSelf->__PVT__rsReg_1_1;
        vlSelf->__PVT___GEN_20 = vlSelf->__PVT__rsReg_1_2;
        vlSelf->__PVT___GEN_21 = vlSelf->__PVT__rsReg_1_3;
    }
    vlSelf->__PVT___GEN_29 = ((3U == (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_io_control_bits_sel_alu2)) 
                              | (0U == (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_io_control_bits_sel_alu2)));
    if ((2U == (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_io_control_bits_sel_alu3))) {
        vlSelf->__PVT___rsTypeWire_2_T_8 = 1U;
        vlSelf->__PVT___regIdxWire_2_T_8 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_io_control_bits_reg_idx3;
    } else if ((3U == (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_io_control_bits_sel_alu3))) {
        if (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_io_control_bits_isvec) {
            vlSelf->__PVT___rsTypeWire_2_T_8 = 2U;
            vlSelf->__PVT___regIdxWire_2_T_8 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_io_control_bits_reg_idx3;
        } else {
            vlSelf->__PVT___rsTypeWire_2_T_8 = 1U;
            vlSelf->__PVT___regIdxWire_2_T_8 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_io_control_bits_reg_idx2;
        }
    } else if ((1U == (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_io_control_bits_sel_alu3))) {
        vlSelf->__PVT___rsTypeWire_2_T_8 = 2U;
        vlSelf->__PVT___regIdxWire_2_T_8 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_io_control_bits_reg_idx3;
    } else if ((3U == (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_io_control_bits_branch))) {
        vlSelf->__PVT___rsTypeWire_2_T_8 = 1U;
        vlSelf->__PVT___regIdxWire_2_T_8 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_io_control_bits_reg_idx1;
    } else {
        vlSelf->__PVT___rsTypeWire_2_T_8 = 3U;
        vlSelf->__PVT___regIdxWire_2_T_8 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_io_control_bits_reg_idx3;
    }
    vlSelf->__PVT___T_20 = ((0U == (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_io_control_bits_sel_alu3)) 
                            & (3U != (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_io_control_bits_branch)));
    vlSelf->__PVT___io_outArbiterIO_0_bits_bankID_T 
        = ((IData)(vlSelf->__PVT__io_control_ready) 
           & ((2U == (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__Demux__DOT___io_out_0_valid_T_2)) 
              & (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__Demux_io_in_valid)));
    if ((1U == (IData)(vlSelf->__PVT__state))) {
        vlSelf->__PVT__imm_io_inst = vlSelf->__PVT__controlReg_inst;
        vlSelf->__PVT__imm_io_sel = vlSelf->__PVT__controlReg_sel_imm;
        vlSelf->__PVT__io_outArbiterIO_0_valid = ((~ (IData)(vlSelf->__PVT__ready_0)) 
                                                  & (IData)(vlSelf->__PVT__valid_0));
        vlSelf->__PVT__io_outArbiterIO_1_valid = ((~ (IData)(vlSelf->__PVT__ready_1)) 
                                                  & (IData)(vlSelf->__PVT__valid_1));
        vlSelf->__PVT__io_outArbiterIO_2_valid = ((~ (IData)(vlSelf->__PVT__ready_2)) 
                                                  & (IData)(vlSelf->__PVT__valid_2));
        vlSelf->__PVT__io_outArbiterIO_3_valid = ((~ (IData)(vlSelf->__PVT__ready_3)) 
                                                  & (IData)(vlSelf->__PVT__valid_3));
    } else if ((0U == (IData)(vlSelf->__PVT__state))) {
        vlSelf->__PVT__imm_io_inst = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_io_control_bits_inst;
        vlSelf->__PVT__imm_io_sel = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_io_control_bits_sel_imm;
        vlSelf->__PVT__io_outArbiterIO_0_valid = ((~ 
                                                   ((0U 
                                                     == (IData)(vlSelf->__PVT__state)) 
                                                    & ((IData)(vlSelf->__PVT___io_outArbiterIO_0_bits_bankID_T) 
                                                       & (IData)(vlSelf->__PVT___GEN_17)))) 
                                                  & (IData)(vlSelf->__PVT___io_outArbiterIO_0_bits_bankID_T));
        vlSelf->__PVT__io_outArbiterIO_1_valid = ((~ 
                                                   ((0U 
                                                     == (IData)(vlSelf->__PVT__state)) 
                                                    & ((IData)(vlSelf->__PVT___io_outArbiterIO_0_bits_bankID_T) 
                                                       & (IData)(vlSelf->__PVT___GEN_29)))) 
                                                  & (IData)(vlSelf->__PVT___io_outArbiterIO_0_bits_bankID_T));
        vlSelf->__PVT__io_outArbiterIO_2_valid = ((~ 
                                                   ((0U 
                                                     == (IData)(vlSelf->__PVT__state)) 
                                                    & ((IData)(vlSelf->__PVT___io_outArbiterIO_0_bits_bankID_T) 
                                                       & (IData)(vlSelf->__PVT___T_20)))) 
                                                  & (IData)(vlSelf->__PVT___io_outArbiterIO_0_bits_bankID_T));
        vlSelf->__PVT__io_outArbiterIO_3_valid = ((~ 
                                                   ((0U 
                                                     == (IData)(vlSelf->__PVT__state)) 
                                                    & ((~ (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_io_control_bits_mask)) 
                                                       & (IData)(vlSelf->__PVT___io_outArbiterIO_0_bits_bankID_T)))) 
                                                  & (IData)(vlSelf->__PVT___io_outArbiterIO_0_bits_bankID_T));
    } else {
        vlSelf->__PVT__imm_io_inst = 0U;
        vlSelf->__PVT__imm_io_sel = 0U;
        vlSelf->__PVT__io_outArbiterIO_0_valid = 0U;
        vlSelf->__PVT__io_outArbiterIO_1_valid = 0U;
        vlSelf->__PVT__io_outArbiterIO_2_valid = 0U;
        vlSelf->__PVT__io_outArbiterIO_3_valid = 0U;
    }
    __PVT__imm__DOT___out_T_7 = ((2U == (IData)(vlSelf->__PVT__imm_io_sel))
                                  ? ((0x1fe000U & (
                                                   (- (IData)(
                                                              (vlSelf->__PVT__imm_io_inst 
                                                               >> 0x1fU))) 
                                                   << 0xdU)) 
                                     | ((0x1000U & 
                                         (vlSelf->__PVT__imm_io_inst 
                                          >> 0x13U)) 
                                        | ((0x800U 
                                            & (vlSelf->__PVT__imm_io_inst 
                                               << 4U)) 
                                           | ((0x7e0U 
                                               & (vlSelf->__PVT__imm_io_inst 
                                                  >> 0x14U)) 
                                              | (0x1eU 
                                                 & (vlSelf->__PVT__imm_io_inst 
                                                    >> 7U))))))
                                  : ((1U == (IData)(vlSelf->__PVT__imm_io_sel))
                                      ? ((0x1ff000U 
                                          & ((- (IData)(
                                                        (vlSelf->__PVT__imm_io_inst 
                                                         >> 0x1fU))) 
                                             << 0xcU)) 
                                         | ((0xfe0U 
                                             & (vlSelf->__PVT__imm_io_inst 
                                                >> 0x14U)) 
                                            | (0x1fU 
                                               & (vlSelf->__PVT__imm_io_inst 
                                                  >> 7U))))
                                      : ((5U == (IData)(vlSelf->__PVT__imm_io_sel))
                                          ? ((0x100000U 
                                              & (vlSelf->__PVT__imm_io_inst 
                                                 >> 0xbU)) 
                                             | ((0xff000U 
                                                 & vlSelf->__PVT__imm_io_inst) 
                                                | ((0x800U 
                                                    & (vlSelf->__PVT__imm_io_inst 
                                                       >> 9U)) 
                                                   | (0x7feU 
                                                      & (vlSelf->__PVT__imm_io_inst 
                                                         >> 0x14U)))))
                                          : ((0x1ff000U 
                                              & ((- (IData)(
                                                            (vlSelf->__PVT__imm_io_inst 
                                                             >> 0x1fU))) 
                                                 << 0xcU)) 
                                             | (vlSelf->__PVT__imm_io_inst 
                                                >> 0x14U)))));
    vlSelf->__PVT___GEN_85 = ((IData)(vlSelf->__PVT___io_outArbiterIO_0_bits_bankID_T) 
                              | (IData)(vlSelf->__PVT__valid_0));
    vlSelf->__PVT___GEN_86 = ((IData)(vlSelf->__PVT___io_outArbiterIO_0_bits_bankID_T) 
                              | (IData)(vlSelf->__PVT__valid_1));
    vlSelf->__PVT___GEN_87 = ((IData)(vlSelf->__PVT___io_outArbiterIO_0_bits_bankID_T) 
                              | (IData)(vlSelf->__PVT__valid_2));
    vlSelf->__PVT___GEN_88 = ((IData)(vlSelf->__PVT___io_outArbiterIO_0_bits_bankID_T) 
                              | (IData)(vlSelf->__PVT__valid_3));
    if ((0U == (IData)(vlSelf->__PVT__state))) {
        if (vlSelf->__PVT___io_outArbiterIO_0_bits_bankID_T) {
            vlSelf->__PVT__regIdxWire_0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_io_control_bits_reg_idx1;
            vlSelf->__PVT__regIdxWire_1 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_io_control_bits_reg_idx2;
            vlSelf->__PVT__regIdxWire_2 = vlSelf->__PVT___regIdxWire_2_T_8;
            __PVT___io_outArbiterIO_0_bits_bankID_T_2 = 1U;
        } else {
            vlSelf->__PVT__regIdxWire_0 = 0U;
            vlSelf->__PVT__regIdxWire_1 = 0U;
            vlSelf->__PVT__regIdxWire_2 = 0U;
            __PVT___io_outArbiterIO_0_bits_bankID_T_2 = 0U;
        }
    } else {
        vlSelf->__PVT__regIdxWire_0 = 0U;
        vlSelf->__PVT__regIdxWire_1 = 0U;
        vlSelf->__PVT__regIdxWire_2 = 0U;
        __PVT___io_outArbiterIO_0_bits_bankID_T_2 = 0U;
    }
    vlSelf->__PVT__imm_io_out = ((6U == (IData)(vlSelf->__PVT__imm_io_sel))
                                  ? (((- (IData)((1U 
                                                  & (vlSelf->__PVT__imm_io_inst 
                                                     >> 0x13U)))) 
                                      << 5U) | (0x1fU 
                                                & (vlSelf->__PVT__imm_io_inst 
                                                   >> 0xfU)))
                                  : ((7U == (IData)(vlSelf->__PVT__imm_io_sel))
                                      ? (0x1fU & (vlSelf->__PVT__imm_io_inst 
                                                  >> 0xfU))
                                      : ((4U == (IData)(vlSelf->__PVT__imm_io_sel))
                                          ? (((- (IData)(
                                                         (1U 
                                                          & (vlSelf->__PVT__imm_io_inst 
                                                             >> 0x18U)))) 
                                              << 5U) 
                                             | (0x1fU 
                                                & (vlSelf->__PVT__imm_io_inst 
                                                   >> 0x14U)))
                                          : ((3U == (IData)(vlSelf->__PVT__imm_io_sel))
                                              ? (0xfffff000U 
                                                 & vlSelf->__PVT__imm_io_inst)
                                              : (((- (IData)(
                                                             (1U 
                                                              & (__PVT__imm__DOT___out_T_7 
                                                                 >> 0x14U)))) 
                                                  << 0x15U) 
                                                 | __PVT__imm__DOT___out_T_7)))));
    if (__PVT___io_outArbiterIO_0_bits_bankID_T_2) {
        if ((0U == (IData)(vlSelf->__PVT__state))) {
            if (vlSelf->__PVT___io_outArbiterIO_0_bits_bankID_T) {
                vlSelf->__PVT__io_outArbiterIO_0_bits_rsType 
                    = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_io_control_bits_sel_alu1;
                vlSelf->__PVT__io_outArbiterIO_1_bits_rsType 
                    = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_io_control_bits_sel_alu2;
                vlSelf->__PVT__io_outArbiterIO_2_bits_rsType 
                    = vlSelf->__PVT___rsTypeWire_2_T_8;
            } else {
                vlSelf->__PVT__io_outArbiterIO_0_bits_rsType = 0U;
                vlSelf->__PVT__io_outArbiterIO_1_bits_rsType = 0U;
                vlSelf->__PVT__io_outArbiterIO_2_bits_rsType = 0U;
            }
        } else {
            vlSelf->__PVT__io_outArbiterIO_0_bits_rsType = 0U;
            vlSelf->__PVT__io_outArbiterIO_1_bits_rsType = 0U;
            vlSelf->__PVT__io_outArbiterIO_2_bits_rsType = 0U;
        }
        __PVT___io_outArbiterIO_0_bits_rsAddr_T_3 = vlSelf->__PVT__regIdxWire_0;
        __PVT___io_outArbiterIO_1_bits_rsAddr_T_3 = vlSelf->__PVT__regIdxWire_1;
        __PVT___io_outArbiterIO_2_bits_rsAddr_T_3 = vlSelf->__PVT__regIdxWire_2;
        __PVT___io_outArbiterIO_3_bits_bankID_T_7 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_io_control_bits_wid;
        __PVT___io_outArbiterIO_0_bits_bankID_T_7 = 
            (0x1fU & ((IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_io_control_bits_wid) 
                      + (IData)(vlSelf->__PVT__regIdxWire_0)));
        __PVT___io_outArbiterIO_1_bits_bankID_T_7 = 
            (0x1fU & ((IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_io_control_bits_wid) 
                      + (IData)(vlSelf->__PVT__regIdxWire_1)));
        __PVT___io_outArbiterIO_2_bits_bankID_T_7 = 
            (0x1fU & ((IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_io_control_bits_wid) 
                      + (IData)(vlSelf->__PVT__regIdxWire_2)));
        vlSelf->__PVT___io_outArbiterIO_0_bits_rsAddr_T_69 
            = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_io_control_bits_wid;
    } else {
        vlSelf->__PVT__io_outArbiterIO_0_bits_rsType 
            = vlSelf->__PVT__rsType_0;
        vlSelf->__PVT__io_outArbiterIO_1_bits_rsType 
            = vlSelf->__PVT__rsType_1;
        vlSelf->__PVT__io_outArbiterIO_2_bits_rsType 
            = vlSelf->__PVT__rsType_2;
        __PVT___io_outArbiterIO_0_bits_rsAddr_T_3 = vlSelf->__PVT__regIdx_0;
        __PVT___io_outArbiterIO_1_bits_rsAddr_T_3 = vlSelf->__PVT__regIdx_1;
        __PVT___io_outArbiterIO_2_bits_rsAddr_T_3 = vlSelf->__PVT__regIdx_2;
        __PVT___io_outArbiterIO_3_bits_bankID_T_7 = vlSelf->__PVT__controlReg_wid;
        __PVT___io_outArbiterIO_0_bits_bankID_T_7 = 
            (0x1fU & ((IData)(vlSelf->__PVT__controlReg_wid) 
                      + (IData)(vlSelf->__PVT__regIdx_0)));
        __PVT___io_outArbiterIO_1_bits_bankID_T_7 = 
            (0x1fU & ((IData)(vlSelf->__PVT__controlReg_wid) 
                      + (IData)(vlSelf->__PVT__regIdx_1)));
        __PVT___io_outArbiterIO_2_bits_bankID_T_7 = 
            (0x1fU & ((IData)(vlSelf->__PVT__controlReg_wid) 
                      + (IData)(vlSelf->__PVT__regIdx_2)));
        vlSelf->__PVT___io_outArbiterIO_0_bits_rsAddr_T_69 
            = vlSelf->__PVT__controlReg_wid;
    }
    vlSelf->__PVT___rsReg_2_0_T_1 = (vlSelf->__PVT__imm_io_out 
                                     + vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_io_control_bits_pc);
    __PVT___io_outArbiterIO_0_bits_rsAddr_T_51 = ((0x18U 
                                                   == (IData)(__PVT___io_outArbiterIO_0_bits_rsAddr_T_3))
                                                   ? 6U
                                                   : 
                                                  ((0x17U 
                                                    == (IData)(__PVT___io_outArbiterIO_0_bits_rsAddr_T_3))
                                                    ? 5U
                                                    : 
                                                   ((0x16U 
                                                     == (IData)(__PVT___io_outArbiterIO_0_bits_rsAddr_T_3))
                                                     ? 5U
                                                     : 
                                                    ((0x15U 
                                                      == (IData)(__PVT___io_outArbiterIO_0_bits_rsAddr_T_3))
                                                      ? 5U
                                                      : 
                                                     ((0x14U 
                                                       == (IData)(__PVT___io_outArbiterIO_0_bits_rsAddr_T_3))
                                                       ? 5U
                                                       : 
                                                      ((0x13U 
                                                        == (IData)(__PVT___io_outArbiterIO_0_bits_rsAddr_T_3))
                                                        ? 4U
                                                        : 
                                                       ((0x12U 
                                                         == (IData)(__PVT___io_outArbiterIO_0_bits_rsAddr_T_3))
                                                         ? 4U
                                                         : 
                                                        ((0x11U 
                                                          == (IData)(__PVT___io_outArbiterIO_0_bits_rsAddr_T_3))
                                                          ? 4U
                                                          : 
                                                         ((0x10U 
                                                           == (IData)(__PVT___io_outArbiterIO_0_bits_rsAddr_T_3))
                                                           ? 4U
                                                           : 
                                                          ((0xfU 
                                                            == (IData)(__PVT___io_outArbiterIO_0_bits_rsAddr_T_3))
                                                            ? 3U
                                                            : 
                                                           ((0xeU 
                                                             == (IData)(__PVT___io_outArbiterIO_0_bits_rsAddr_T_3))
                                                             ? 3U
                                                             : 
                                                            ((0xdU 
                                                              == (IData)(__PVT___io_outArbiterIO_0_bits_rsAddr_T_3))
                                                              ? 3U
                                                              : 
                                                             ((0xcU 
                                                               == (IData)(__PVT___io_outArbiterIO_0_bits_rsAddr_T_3))
                                                               ? 3U
                                                               : 
                                                              ((0xbU 
                                                                == (IData)(__PVT___io_outArbiterIO_0_bits_rsAddr_T_3))
                                                                ? 2U
                                                                : 
                                                               ((0xaU 
                                                                 == (IData)(__PVT___io_outArbiterIO_0_bits_rsAddr_T_3))
                                                                 ? 2U
                                                                 : 
                                                                ((9U 
                                                                  == (IData)(__PVT___io_outArbiterIO_0_bits_rsAddr_T_3))
                                                                  ? 2U
                                                                  : 
                                                                 ((8U 
                                                                   == (IData)(__PVT___io_outArbiterIO_0_bits_rsAddr_T_3))
                                                                   ? 2U
                                                                   : 
                                                                  ((7U 
                                                                    == (IData)(__PVT___io_outArbiterIO_0_bits_rsAddr_T_3)) 
                                                                   | ((6U 
                                                                       == (IData)(__PVT___io_outArbiterIO_0_bits_rsAddr_T_3)) 
                                                                      | ((5U 
                                                                          == (IData)(__PVT___io_outArbiterIO_0_bits_rsAddr_T_3)) 
                                                                         | (4U 
                                                                            == (IData)(__PVT___io_outArbiterIO_0_bits_rsAddr_T_3))))))))))))))))))))));
    __PVT___io_outArbiterIO_1_bits_rsAddr_T_51 = ((0x18U 
                                                   == (IData)(__PVT___io_outArbiterIO_1_bits_rsAddr_T_3))
                                                   ? 6U
                                                   : 
                                                  ((0x17U 
                                                    == (IData)(__PVT___io_outArbiterIO_1_bits_rsAddr_T_3))
                                                    ? 5U
                                                    : 
                                                   ((0x16U 
                                                     == (IData)(__PVT___io_outArbiterIO_1_bits_rsAddr_T_3))
                                                     ? 5U
                                                     : 
                                                    ((0x15U 
                                                      == (IData)(__PVT___io_outArbiterIO_1_bits_rsAddr_T_3))
                                                      ? 5U
                                                      : 
                                                     ((0x14U 
                                                       == (IData)(__PVT___io_outArbiterIO_1_bits_rsAddr_T_3))
                                                       ? 5U
                                                       : 
                                                      ((0x13U 
                                                        == (IData)(__PVT___io_outArbiterIO_1_bits_rsAddr_T_3))
                                                        ? 4U
                                                        : 
                                                       ((0x12U 
                                                         == (IData)(__PVT___io_outArbiterIO_1_bits_rsAddr_T_3))
                                                         ? 4U
                                                         : 
                                                        ((0x11U 
                                                          == (IData)(__PVT___io_outArbiterIO_1_bits_rsAddr_T_3))
                                                          ? 4U
                                                          : 
                                                         ((0x10U 
                                                           == (IData)(__PVT___io_outArbiterIO_1_bits_rsAddr_T_3))
                                                           ? 4U
                                                           : 
                                                          ((0xfU 
                                                            == (IData)(__PVT___io_outArbiterIO_1_bits_rsAddr_T_3))
                                                            ? 3U
                                                            : 
                                                           ((0xeU 
                                                             == (IData)(__PVT___io_outArbiterIO_1_bits_rsAddr_T_3))
                                                             ? 3U
                                                             : 
                                                            ((0xdU 
                                                              == (IData)(__PVT___io_outArbiterIO_1_bits_rsAddr_T_3))
                                                              ? 3U
                                                              : 
                                                             ((0xcU 
                                                               == (IData)(__PVT___io_outArbiterIO_1_bits_rsAddr_T_3))
                                                               ? 3U
                                                               : 
                                                              ((0xbU 
                                                                == (IData)(__PVT___io_outArbiterIO_1_bits_rsAddr_T_3))
                                                                ? 2U
                                                                : 
                                                               ((0xaU 
                                                                 == (IData)(__PVT___io_outArbiterIO_1_bits_rsAddr_T_3))
                                                                 ? 2U
                                                                 : 
                                                                ((9U 
                                                                  == (IData)(__PVT___io_outArbiterIO_1_bits_rsAddr_T_3))
                                                                  ? 2U
                                                                  : 
                                                                 ((8U 
                                                                   == (IData)(__PVT___io_outArbiterIO_1_bits_rsAddr_T_3))
                                                                   ? 2U
                                                                   : 
                                                                  ((7U 
                                                                    == (IData)(__PVT___io_outArbiterIO_1_bits_rsAddr_T_3)) 
                                                                   | ((6U 
                                                                       == (IData)(__PVT___io_outArbiterIO_1_bits_rsAddr_T_3)) 
                                                                      | ((5U 
                                                                          == (IData)(__PVT___io_outArbiterIO_1_bits_rsAddr_T_3)) 
                                                                         | (4U 
                                                                            == (IData)(__PVT___io_outArbiterIO_1_bits_rsAddr_T_3))))))))))))))))))))));
    __PVT___io_outArbiterIO_2_bits_rsAddr_T_51 = ((0x18U 
                                                   == (IData)(__PVT___io_outArbiterIO_2_bits_rsAddr_T_3))
                                                   ? 6U
                                                   : 
                                                  ((0x17U 
                                                    == (IData)(__PVT___io_outArbiterIO_2_bits_rsAddr_T_3))
                                                    ? 5U
                                                    : 
                                                   ((0x16U 
                                                     == (IData)(__PVT___io_outArbiterIO_2_bits_rsAddr_T_3))
                                                     ? 5U
                                                     : 
                                                    ((0x15U 
                                                      == (IData)(__PVT___io_outArbiterIO_2_bits_rsAddr_T_3))
                                                      ? 5U
                                                      : 
                                                     ((0x14U 
                                                       == (IData)(__PVT___io_outArbiterIO_2_bits_rsAddr_T_3))
                                                       ? 5U
                                                       : 
                                                      ((0x13U 
                                                        == (IData)(__PVT___io_outArbiterIO_2_bits_rsAddr_T_3))
                                                        ? 4U
                                                        : 
                                                       ((0x12U 
                                                         == (IData)(__PVT___io_outArbiterIO_2_bits_rsAddr_T_3))
                                                         ? 4U
                                                         : 
                                                        ((0x11U 
                                                          == (IData)(__PVT___io_outArbiterIO_2_bits_rsAddr_T_3))
                                                          ? 4U
                                                          : 
                                                         ((0x10U 
                                                           == (IData)(__PVT___io_outArbiterIO_2_bits_rsAddr_T_3))
                                                           ? 4U
                                                           : 
                                                          ((0xfU 
                                                            == (IData)(__PVT___io_outArbiterIO_2_bits_rsAddr_T_3))
                                                            ? 3U
                                                            : 
                                                           ((0xeU 
                                                             == (IData)(__PVT___io_outArbiterIO_2_bits_rsAddr_T_3))
                                                             ? 3U
                                                             : 
                                                            ((0xdU 
                                                              == (IData)(__PVT___io_outArbiterIO_2_bits_rsAddr_T_3))
                                                              ? 3U
                                                              : 
                                                             ((0xcU 
                                                               == (IData)(__PVT___io_outArbiterIO_2_bits_rsAddr_T_3))
                                                               ? 3U
                                                               : 
                                                              ((0xbU 
                                                                == (IData)(__PVT___io_outArbiterIO_2_bits_rsAddr_T_3))
                                                                ? 2U
                                                                : 
                                                               ((0xaU 
                                                                 == (IData)(__PVT___io_outArbiterIO_2_bits_rsAddr_T_3))
                                                                 ? 2U
                                                                 : 
                                                                ((9U 
                                                                  == (IData)(__PVT___io_outArbiterIO_2_bits_rsAddr_T_3))
                                                                  ? 2U
                                                                  : 
                                                                 ((8U 
                                                                   == (IData)(__PVT___io_outArbiterIO_2_bits_rsAddr_T_3))
                                                                   ? 2U
                                                                   : 
                                                                  ((7U 
                                                                    == (IData)(__PVT___io_outArbiterIO_2_bits_rsAddr_T_3)) 
                                                                   | ((6U 
                                                                       == (IData)(__PVT___io_outArbiterIO_2_bits_rsAddr_T_3)) 
                                                                      | ((5U 
                                                                          == (IData)(__PVT___io_outArbiterIO_2_bits_rsAddr_T_3)) 
                                                                         | (4U 
                                                                            == (IData)(__PVT___io_outArbiterIO_2_bits_rsAddr_T_3))))))))))))))))))))));
    __PVT___io_outArbiterIO_3_bits_bankID_T_49 = ((0x15U 
                                                   == (IData)(__PVT___io_outArbiterIO_3_bits_bankID_T_7))
                                                   ? 1U
                                                   : 
                                                  ((0x14U 
                                                    == (IData)(__PVT___io_outArbiterIO_3_bits_bankID_T_7))
                                                    ? 0U
                                                    : 
                                                   ((0x13U 
                                                     == (IData)(__PVT___io_outArbiterIO_3_bits_bankID_T_7))
                                                     ? 3U
                                                     : 
                                                    ((0x12U 
                                                      == (IData)(__PVT___io_outArbiterIO_3_bits_bankID_T_7))
                                                      ? 2U
                                                      : 
                                                     ((0x11U 
                                                       == (IData)(__PVT___io_outArbiterIO_3_bits_bankID_T_7))
                                                       ? 1U
                                                       : 
                                                      ((0x10U 
                                                        == (IData)(__PVT___io_outArbiterIO_3_bits_bankID_T_7))
                                                        ? 0U
                                                        : 
                                                       ((0xfU 
                                                         == (IData)(__PVT___io_outArbiterIO_3_bits_bankID_T_7))
                                                         ? 3U
                                                         : 
                                                        ((0xeU 
                                                          == (IData)(__PVT___io_outArbiterIO_3_bits_bankID_T_7))
                                                          ? 2U
                                                          : 
                                                         ((0xdU 
                                                           == (IData)(__PVT___io_outArbiterIO_3_bits_bankID_T_7))
                                                           ? 1U
                                                           : 
                                                          ((0xcU 
                                                            == (IData)(__PVT___io_outArbiterIO_3_bits_bankID_T_7))
                                                            ? 0U
                                                            : 
                                                           ((0xbU 
                                                             == (IData)(__PVT___io_outArbiterIO_3_bits_bankID_T_7))
                                                             ? 3U
                                                             : 
                                                            ((0xaU 
                                                              == (IData)(__PVT___io_outArbiterIO_3_bits_bankID_T_7))
                                                              ? 2U
                                                              : 
                                                             ((9U 
                                                               == (IData)(__PVT___io_outArbiterIO_3_bits_bankID_T_7))
                                                               ? 1U
                                                               : 
                                                              ((8U 
                                                                == (IData)(__PVT___io_outArbiterIO_3_bits_bankID_T_7))
                                                                ? 0U
                                                                : 
                                                               ((7U 
                                                                 == (IData)(__PVT___io_outArbiterIO_3_bits_bankID_T_7))
                                                                 ? 3U
                                                                 : 
                                                                ((6U 
                                                                  == (IData)(__PVT___io_outArbiterIO_3_bits_bankID_T_7))
                                                                  ? 2U
                                                                  : 
                                                                 ((5U 
                                                                   == (IData)(__PVT___io_outArbiterIO_3_bits_bankID_T_7))
                                                                   ? 1U
                                                                   : 
                                                                  ((4U 
                                                                    == (IData)(__PVT___io_outArbiterIO_3_bits_bankID_T_7))
                                                                    ? 0U
                                                                    : 
                                                                   ((3U 
                                                                     == (IData)(__PVT___io_outArbiterIO_3_bits_bankID_T_7))
                                                                     ? 3U
                                                                     : 
                                                                    ((2U 
                                                                      == (IData)(__PVT___io_outArbiterIO_3_bits_bankID_T_7))
                                                                      ? 2U
                                                                      : 
                                                                     (1U 
                                                                      == (IData)(__PVT___io_outArbiterIO_3_bits_bankID_T_7))))))))))))))))))))));
    __PVT___io_outArbiterIO_0_bits_bankID_T_49 = ((0x15U 
                                                   == (IData)(__PVT___io_outArbiterIO_0_bits_bankID_T_7))
                                                   ? 1U
                                                   : 
                                                  ((0x14U 
                                                    == (IData)(__PVT___io_outArbiterIO_0_bits_bankID_T_7))
                                                    ? 0U
                                                    : 
                                                   ((0x13U 
                                                     == (IData)(__PVT___io_outArbiterIO_0_bits_bankID_T_7))
                                                     ? 3U
                                                     : 
                                                    ((0x12U 
                                                      == (IData)(__PVT___io_outArbiterIO_0_bits_bankID_T_7))
                                                      ? 2U
                                                      : 
                                                     ((0x11U 
                                                       == (IData)(__PVT___io_outArbiterIO_0_bits_bankID_T_7))
                                                       ? 1U
                                                       : 
                                                      ((0x10U 
                                                        == (IData)(__PVT___io_outArbiterIO_0_bits_bankID_T_7))
                                                        ? 0U
                                                        : 
                                                       ((0xfU 
                                                         == (IData)(__PVT___io_outArbiterIO_0_bits_bankID_T_7))
                                                         ? 3U
                                                         : 
                                                        ((0xeU 
                                                          == (IData)(__PVT___io_outArbiterIO_0_bits_bankID_T_7))
                                                          ? 2U
                                                          : 
                                                         ((0xdU 
                                                           == (IData)(__PVT___io_outArbiterIO_0_bits_bankID_T_7))
                                                           ? 1U
                                                           : 
                                                          ((0xcU 
                                                            == (IData)(__PVT___io_outArbiterIO_0_bits_bankID_T_7))
                                                            ? 0U
                                                            : 
                                                           ((0xbU 
                                                             == (IData)(__PVT___io_outArbiterIO_0_bits_bankID_T_7))
                                                             ? 3U
                                                             : 
                                                            ((0xaU 
                                                              == (IData)(__PVT___io_outArbiterIO_0_bits_bankID_T_7))
                                                              ? 2U
                                                              : 
                                                             ((9U 
                                                               == (IData)(__PVT___io_outArbiterIO_0_bits_bankID_T_7))
                                                               ? 1U
                                                               : 
                                                              ((8U 
                                                                == (IData)(__PVT___io_outArbiterIO_0_bits_bankID_T_7))
                                                                ? 0U
                                                                : 
                                                               ((7U 
                                                                 == (IData)(__PVT___io_outArbiterIO_0_bits_bankID_T_7))
                                                                 ? 3U
                                                                 : 
                                                                ((6U 
                                                                  == (IData)(__PVT___io_outArbiterIO_0_bits_bankID_T_7))
                                                                  ? 2U
                                                                  : 
                                                                 ((5U 
                                                                   == (IData)(__PVT___io_outArbiterIO_0_bits_bankID_T_7))
                                                                   ? 1U
                                                                   : 
                                                                  ((4U 
                                                                    == (IData)(__PVT___io_outArbiterIO_0_bits_bankID_T_7))
                                                                    ? 0U
                                                                    : 
                                                                   ((3U 
                                                                     == (IData)(__PVT___io_outArbiterIO_0_bits_bankID_T_7))
                                                                     ? 3U
                                                                     : 
                                                                    ((2U 
                                                                      == (IData)(__PVT___io_outArbiterIO_0_bits_bankID_T_7))
                                                                      ? 2U
                                                                      : 
                                                                     (1U 
                                                                      == (IData)(__PVT___io_outArbiterIO_0_bits_bankID_T_7))))))))))))))))))))));
    __PVT___io_outArbiterIO_1_bits_bankID_T_49 = ((0x15U 
                                                   == (IData)(__PVT___io_outArbiterIO_1_bits_bankID_T_7))
                                                   ? 1U
                                                   : 
                                                  ((0x14U 
                                                    == (IData)(__PVT___io_outArbiterIO_1_bits_bankID_T_7))
                                                    ? 0U
                                                    : 
                                                   ((0x13U 
                                                     == (IData)(__PVT___io_outArbiterIO_1_bits_bankID_T_7))
                                                     ? 3U
                                                     : 
                                                    ((0x12U 
                                                      == (IData)(__PVT___io_outArbiterIO_1_bits_bankID_T_7))
                                                      ? 2U
                                                      : 
                                                     ((0x11U 
                                                       == (IData)(__PVT___io_outArbiterIO_1_bits_bankID_T_7))
                                                       ? 1U
                                                       : 
                                                      ((0x10U 
                                                        == (IData)(__PVT___io_outArbiterIO_1_bits_bankID_T_7))
                                                        ? 0U
                                                        : 
                                                       ((0xfU 
                                                         == (IData)(__PVT___io_outArbiterIO_1_bits_bankID_T_7))
                                                         ? 3U
                                                         : 
                                                        ((0xeU 
                                                          == (IData)(__PVT___io_outArbiterIO_1_bits_bankID_T_7))
                                                          ? 2U
                                                          : 
                                                         ((0xdU 
                                                           == (IData)(__PVT___io_outArbiterIO_1_bits_bankID_T_7))
                                                           ? 1U
                                                           : 
                                                          ((0xcU 
                                                            == (IData)(__PVT___io_outArbiterIO_1_bits_bankID_T_7))
                                                            ? 0U
                                                            : 
                                                           ((0xbU 
                                                             == (IData)(__PVT___io_outArbiterIO_1_bits_bankID_T_7))
                                                             ? 3U
                                                             : 
                                                            ((0xaU 
                                                              == (IData)(__PVT___io_outArbiterIO_1_bits_bankID_T_7))
                                                              ? 2U
                                                              : 
                                                             ((9U 
                                                               == (IData)(__PVT___io_outArbiterIO_1_bits_bankID_T_7))
                                                               ? 1U
                                                               : 
                                                              ((8U 
                                                                == (IData)(__PVT___io_outArbiterIO_1_bits_bankID_T_7))
                                                                ? 0U
                                                                : 
                                                               ((7U 
                                                                 == (IData)(__PVT___io_outArbiterIO_1_bits_bankID_T_7))
                                                                 ? 3U
                                                                 : 
                                                                ((6U 
                                                                  == (IData)(__PVT___io_outArbiterIO_1_bits_bankID_T_7))
                                                                  ? 2U
                                                                  : 
                                                                 ((5U 
                                                                   == (IData)(__PVT___io_outArbiterIO_1_bits_bankID_T_7))
                                                                   ? 1U
                                                                   : 
                                                                  ((4U 
                                                                    == (IData)(__PVT___io_outArbiterIO_1_bits_bankID_T_7))
                                                                    ? 0U
                                                                    : 
                                                                   ((3U 
                                                                     == (IData)(__PVT___io_outArbiterIO_1_bits_bankID_T_7))
                                                                     ? 3U
                                                                     : 
                                                                    ((2U 
                                                                      == (IData)(__PVT___io_outArbiterIO_1_bits_bankID_T_7))
                                                                      ? 2U
                                                                      : 
                                                                     (1U 
                                                                      == (IData)(__PVT___io_outArbiterIO_1_bits_bankID_T_7))))))))))))))))))))));
    __PVT___io_outArbiterIO_2_bits_bankID_T_49 = ((0x15U 
                                                   == (IData)(__PVT___io_outArbiterIO_2_bits_bankID_T_7))
                                                   ? 1U
                                                   : 
                                                  ((0x14U 
                                                    == (IData)(__PVT___io_outArbiterIO_2_bits_bankID_T_7))
                                                    ? 0U
                                                    : 
                                                   ((0x13U 
                                                     == (IData)(__PVT___io_outArbiterIO_2_bits_bankID_T_7))
                                                     ? 3U
                                                     : 
                                                    ((0x12U 
                                                      == (IData)(__PVT___io_outArbiterIO_2_bits_bankID_T_7))
                                                      ? 2U
                                                      : 
                                                     ((0x11U 
                                                       == (IData)(__PVT___io_outArbiterIO_2_bits_bankID_T_7))
                                                       ? 1U
                                                       : 
                                                      ((0x10U 
                                                        == (IData)(__PVT___io_outArbiterIO_2_bits_bankID_T_7))
                                                        ? 0U
                                                        : 
                                                       ((0xfU 
                                                         == (IData)(__PVT___io_outArbiterIO_2_bits_bankID_T_7))
                                                         ? 3U
                                                         : 
                                                        ((0xeU 
                                                          == (IData)(__PVT___io_outArbiterIO_2_bits_bankID_T_7))
                                                          ? 2U
                                                          : 
                                                         ((0xdU 
                                                           == (IData)(__PVT___io_outArbiterIO_2_bits_bankID_T_7))
                                                           ? 1U
                                                           : 
                                                          ((0xcU 
                                                            == (IData)(__PVT___io_outArbiterIO_2_bits_bankID_T_7))
                                                            ? 0U
                                                            : 
                                                           ((0xbU 
                                                             == (IData)(__PVT___io_outArbiterIO_2_bits_bankID_T_7))
                                                             ? 3U
                                                             : 
                                                            ((0xaU 
                                                              == (IData)(__PVT___io_outArbiterIO_2_bits_bankID_T_7))
                                                              ? 2U
                                                              : 
                                                             ((9U 
                                                               == (IData)(__PVT___io_outArbiterIO_2_bits_bankID_T_7))
                                                               ? 1U
                                                               : 
                                                              ((8U 
                                                                == (IData)(__PVT___io_outArbiterIO_2_bits_bankID_T_7))
                                                                ? 0U
                                                                : 
                                                               ((7U 
                                                                 == (IData)(__PVT___io_outArbiterIO_2_bits_bankID_T_7))
                                                                 ? 3U
                                                                 : 
                                                                ((6U 
                                                                  == (IData)(__PVT___io_outArbiterIO_2_bits_bankID_T_7))
                                                                  ? 2U
                                                                  : 
                                                                 ((5U 
                                                                   == (IData)(__PVT___io_outArbiterIO_2_bits_bankID_T_7))
                                                                   ? 1U
                                                                   : 
                                                                  ((4U 
                                                                    == (IData)(__PVT___io_outArbiterIO_2_bits_bankID_T_7))
                                                                    ? 0U
                                                                    : 
                                                                   ((3U 
                                                                     == (IData)(__PVT___io_outArbiterIO_2_bits_bankID_T_7))
                                                                     ? 3U
                                                                     : 
                                                                    ((2U 
                                                                      == (IData)(__PVT___io_outArbiterIO_2_bits_bankID_T_7))
                                                                      ? 2U
                                                                      : 
                                                                     (1U 
                                                                      == (IData)(__PVT___io_outArbiterIO_2_bits_bankID_T_7))))))))))))))))))))));
    vlSelf->__PVT___io_outArbiterIO_0_bits_rsAddr_T_72 
        = (0x3fU & (((0x1fU == (IData)(__PVT___io_outArbiterIO_0_bits_rsAddr_T_3))
                      ? 7U : ((0x1eU == (IData)(__PVT___io_outArbiterIO_0_bits_rsAddr_T_3))
                               ? 7U : ((0x1dU == (IData)(__PVT___io_outArbiterIO_0_bits_rsAddr_T_3))
                                        ? 7U : ((0x1cU 
                                                 == (IData)(__PVT___io_outArbiterIO_0_bits_rsAddr_T_3))
                                                 ? 7U
                                                 : 
                                                ((0x1bU 
                                                  == (IData)(__PVT___io_outArbiterIO_0_bits_rsAddr_T_3))
                                                  ? 6U
                                                  : 
                                                 ((0x1aU 
                                                   == (IData)(__PVT___io_outArbiterIO_0_bits_rsAddr_T_3))
                                                   ? 6U
                                                   : 
                                                  ((0x19U 
                                                    == (IData)(__PVT___io_outArbiterIO_0_bits_rsAddr_T_3))
                                                    ? 6U
                                                    : (IData)(__PVT___io_outArbiterIO_0_bits_rsAddr_T_51)))))))) 
                    + ((IData)(vlSelf->__PVT___io_outArbiterIO_0_bits_rsAddr_T_69) 
                       << 3U)));
    vlSelf->__PVT___io_outArbiterIO_1_bits_rsAddr_T_72 
        = (0x3fU & (((0x1fU == (IData)(__PVT___io_outArbiterIO_1_bits_rsAddr_T_3))
                      ? 7U : ((0x1eU == (IData)(__PVT___io_outArbiterIO_1_bits_rsAddr_T_3))
                               ? 7U : ((0x1dU == (IData)(__PVT___io_outArbiterIO_1_bits_rsAddr_T_3))
                                        ? 7U : ((0x1cU 
                                                 == (IData)(__PVT___io_outArbiterIO_1_bits_rsAddr_T_3))
                                                 ? 7U
                                                 : 
                                                ((0x1bU 
                                                  == (IData)(__PVT___io_outArbiterIO_1_bits_rsAddr_T_3))
                                                  ? 6U
                                                  : 
                                                 ((0x1aU 
                                                   == (IData)(__PVT___io_outArbiterIO_1_bits_rsAddr_T_3))
                                                   ? 6U
                                                   : 
                                                  ((0x19U 
                                                    == (IData)(__PVT___io_outArbiterIO_1_bits_rsAddr_T_3))
                                                    ? 6U
                                                    : (IData)(__PVT___io_outArbiterIO_1_bits_rsAddr_T_51)))))))) 
                    + ((IData)(vlSelf->__PVT___io_outArbiterIO_0_bits_rsAddr_T_69) 
                       << 3U)));
    vlSelf->__PVT___io_outArbiterIO_2_bits_rsAddr_T_72 
        = (0x3fU & (((0x1fU == (IData)(__PVT___io_outArbiterIO_2_bits_rsAddr_T_3))
                      ? 7U : ((0x1eU == (IData)(__PVT___io_outArbiterIO_2_bits_rsAddr_T_3))
                               ? 7U : ((0x1dU == (IData)(__PVT___io_outArbiterIO_2_bits_rsAddr_T_3))
                                        ? 7U : ((0x1cU 
                                                 == (IData)(__PVT___io_outArbiterIO_2_bits_rsAddr_T_3))
                                                 ? 7U
                                                 : 
                                                ((0x1bU 
                                                  == (IData)(__PVT___io_outArbiterIO_2_bits_rsAddr_T_3))
                                                  ? 6U
                                                  : 
                                                 ((0x1aU 
                                                   == (IData)(__PVT___io_outArbiterIO_2_bits_rsAddr_T_3))
                                                   ? 6U
                                                   : 
                                                  ((0x19U 
                                                    == (IData)(__PVT___io_outArbiterIO_2_bits_rsAddr_T_3))
                                                    ? 6U
                                                    : (IData)(__PVT___io_outArbiterIO_2_bits_rsAddr_T_51)))))))) 
                    + ((IData)(vlSelf->__PVT___io_outArbiterIO_0_bits_rsAddr_T_69) 
                       << 3U)));
    vlSelf->__PVT__io_outArbiterIO_3_bits_bankID = 
        ((0x1fU == (IData)(__PVT___io_outArbiterIO_3_bits_bankID_T_7))
          ? 3U : ((0x1eU == (IData)(__PVT___io_outArbiterIO_3_bits_bankID_T_7))
                   ? 2U : ((0x1dU == (IData)(__PVT___io_outArbiterIO_3_bits_bankID_T_7))
                            ? 1U : ((0x1cU == (IData)(__PVT___io_outArbiterIO_3_bits_bankID_T_7))
                                     ? 0U : ((0x1bU 
                                              == (IData)(__PVT___io_outArbiterIO_3_bits_bankID_T_7))
                                              ? 3U : 
                                             ((0x1aU 
                                               == (IData)(__PVT___io_outArbiterIO_3_bits_bankID_T_7))
                                               ? 2U
                                               : ((0x19U 
                                                   == (IData)(__PVT___io_outArbiterIO_3_bits_bankID_T_7))
                                                   ? 1U
                                                   : 
                                                  ((0x18U 
                                                    == (IData)(__PVT___io_outArbiterIO_3_bits_bankID_T_7))
                                                    ? 0U
                                                    : 
                                                   ((0x17U 
                                                     == (IData)(__PVT___io_outArbiterIO_3_bits_bankID_T_7))
                                                     ? 3U
                                                     : 
                                                    ((0x16U 
                                                      == (IData)(__PVT___io_outArbiterIO_3_bits_bankID_T_7))
                                                      ? 2U
                                                      : (IData)(__PVT___io_outArbiterIO_3_bits_bankID_T_49)))))))))));
    vlSelf->__PVT__io_outArbiterIO_0_bits_bankID = 
        ((0x1fU == (IData)(__PVT___io_outArbiterIO_0_bits_bankID_T_7))
          ? 3U : ((0x1eU == (IData)(__PVT___io_outArbiterIO_0_bits_bankID_T_7))
                   ? 2U : ((0x1dU == (IData)(__PVT___io_outArbiterIO_0_bits_bankID_T_7))
                            ? 1U : ((0x1cU == (IData)(__PVT___io_outArbiterIO_0_bits_bankID_T_7))
                                     ? 0U : ((0x1bU 
                                              == (IData)(__PVT___io_outArbiterIO_0_bits_bankID_T_7))
                                              ? 3U : 
                                             ((0x1aU 
                                               == (IData)(__PVT___io_outArbiterIO_0_bits_bankID_T_7))
                                               ? 2U
                                               : ((0x19U 
                                                   == (IData)(__PVT___io_outArbiterIO_0_bits_bankID_T_7))
                                                   ? 1U
                                                   : 
                                                  ((0x18U 
                                                    == (IData)(__PVT___io_outArbiterIO_0_bits_bankID_T_7))
                                                    ? 0U
                                                    : 
                                                   ((0x17U 
                                                     == (IData)(__PVT___io_outArbiterIO_0_bits_bankID_T_7))
                                                     ? 3U
                                                     : 
                                                    ((0x16U 
                                                      == (IData)(__PVT___io_outArbiterIO_0_bits_bankID_T_7))
                                                      ? 2U
                                                      : (IData)(__PVT___io_outArbiterIO_0_bits_bankID_T_49)))))))))));
    vlSelf->__PVT__io_outArbiterIO_1_bits_bankID = 
        ((0x1fU == (IData)(__PVT___io_outArbiterIO_1_bits_bankID_T_7))
          ? 3U : ((0x1eU == (IData)(__PVT___io_outArbiterIO_1_bits_bankID_T_7))
                   ? 2U : ((0x1dU == (IData)(__PVT___io_outArbiterIO_1_bits_bankID_T_7))
                            ? 1U : ((0x1cU == (IData)(__PVT___io_outArbiterIO_1_bits_bankID_T_7))
                                     ? 0U : ((0x1bU 
                                              == (IData)(__PVT___io_outArbiterIO_1_bits_bankID_T_7))
                                              ? 3U : 
                                             ((0x1aU 
                                               == (IData)(__PVT___io_outArbiterIO_1_bits_bankID_T_7))
                                               ? 2U
                                               : ((0x19U 
                                                   == (IData)(__PVT___io_outArbiterIO_1_bits_bankID_T_7))
                                                   ? 1U
                                                   : 
                                                  ((0x18U 
                                                    == (IData)(__PVT___io_outArbiterIO_1_bits_bankID_T_7))
                                                    ? 0U
                                                    : 
                                                   ((0x17U 
                                                     == (IData)(__PVT___io_outArbiterIO_1_bits_bankID_T_7))
                                                     ? 3U
                                                     : 
                                                    ((0x16U 
                                                      == (IData)(__PVT___io_outArbiterIO_1_bits_bankID_T_7))
                                                      ? 2U
                                                      : (IData)(__PVT___io_outArbiterIO_1_bits_bankID_T_49)))))))))));
    vlSelf->__PVT__io_outArbiterIO_2_bits_bankID = 
        ((0x1fU == (IData)(__PVT___io_outArbiterIO_2_bits_bankID_T_7))
          ? 3U : ((0x1eU == (IData)(__PVT___io_outArbiterIO_2_bits_bankID_T_7))
                   ? 2U : ((0x1dU == (IData)(__PVT___io_outArbiterIO_2_bits_bankID_T_7))
                            ? 1U : ((0x1cU == (IData)(__PVT___io_outArbiterIO_2_bits_bankID_T_7))
                                     ? 0U : ((0x1bU 
                                              == (IData)(__PVT___io_outArbiterIO_2_bits_bankID_T_7))
                                              ? 3U : 
                                             ((0x1aU 
                                               == (IData)(__PVT___io_outArbiterIO_2_bits_bankID_T_7))
                                               ? 2U
                                               : ((0x19U 
                                                   == (IData)(__PVT___io_outArbiterIO_2_bits_bankID_T_7))
                                                   ? 1U
                                                   : 
                                                  ((0x18U 
                                                    == (IData)(__PVT___io_outArbiterIO_2_bits_bankID_T_7))
                                                    ? 0U
                                                    : 
                                                   ((0x17U 
                                                     == (IData)(__PVT___io_outArbiterIO_2_bits_bankID_T_7))
                                                     ? 3U
                                                     : 
                                                    ((0x16U 
                                                      == (IData)(__PVT___io_outArbiterIO_2_bits_bankID_T_7))
                                                      ? 2U
                                                      : (IData)(__PVT___io_outArbiterIO_2_bits_bankID_T_49)))))))))));
}

VL_ATTR_COLD void VVentus_collectorUnit___stl_sequent__TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__operand_collector__DOT__collectorUnit_2__2(VVentus_collectorUnit* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VVentus__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VVentus_collectorUnit___stl_sequent__TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__operand_collector__DOT__collectorUnit_2__2\n"); );
    // Init
    IData/*31:0*/ __PVT___T_26_0;
    IData/*31:0*/ __PVT___T_31_0;
    IData/*31:0*/ __PVT___T_36;
    IData/*31:0*/ __PVT___GEN_171;
    IData/*31:0*/ __PVT___GEN_172;
    IData/*31:0*/ __PVT___GEN_173;
    IData/*31:0*/ __PVT___GEN_174;
    IData/*31:0*/ __PVT___GEN_176;
    IData/*31:0*/ __PVT___GEN_177;
    IData/*31:0*/ __PVT___GEN_178;
    IData/*31:0*/ __PVT___GEN_179;
    IData/*31:0*/ __PVT___GEN_181;
    IData/*31:0*/ __PVT___GEN_182;
    IData/*31:0*/ __PVT___GEN_183;
    IData/*31:0*/ __PVT___GEN_184;
    IData/*31:0*/ __PVT___T_54_0;
    IData/*31:0*/ __PVT___T_59_0;
    IData/*31:0*/ __PVT___T_64;
    IData/*31:0*/ __PVT___GEN_241;
    IData/*31:0*/ __PVT___GEN_242;
    IData/*31:0*/ __PVT___GEN_243;
    IData/*31:0*/ __PVT___GEN_244;
    IData/*31:0*/ __PVT___GEN_246;
    IData/*31:0*/ __PVT___GEN_247;
    IData/*31:0*/ __PVT___GEN_248;
    IData/*31:0*/ __PVT___GEN_249;
    IData/*31:0*/ __PVT___GEN_251;
    IData/*31:0*/ __PVT___GEN_252;
    IData/*31:0*/ __PVT___GEN_253;
    IData/*31:0*/ __PVT___GEN_254;
    IData/*31:0*/ __PVT___T_82_0;
    IData/*31:0*/ __PVT___T_87_0;
    IData/*31:0*/ __PVT___T_92;
    IData/*31:0*/ __PVT___T_110_0;
    IData/*31:0*/ __PVT___T_115_0;
    IData/*31:0*/ __PVT___T_120;
    // Body
    if ((1U == (IData)(vlSelf->__PVT__rsType_0))) {
        __PVT___T_110_0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2_io_bankIn_3_bits_data_0;
        __PVT___T_82_0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2_io_bankIn_2_bits_data_0;
        __PVT___T_54_0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2_io_bankIn_1_bits_data_0;
        __PVT___T_26_0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2_io_bankIn_0_bits_data_0;
    } else {
        __PVT___T_110_0 = 0U;
        __PVT___T_82_0 = 0U;
        __PVT___T_54_0 = 0U;
        __PVT___T_26_0 = 0U;
    }
    if ((1U == (IData)(vlSelf->__PVT__rsType_1))) {
        __PVT___T_115_0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2_io_bankIn_3_bits_data_0;
        __PVT___T_87_0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2_io_bankIn_2_bits_data_0;
        __PVT___T_59_0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2_io_bankIn_1_bits_data_0;
        __PVT___T_31_0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2_io_bankIn_0_bits_data_0;
    } else {
        __PVT___T_115_0 = 0U;
        __PVT___T_87_0 = 0U;
        __PVT___T_59_0 = 0U;
        __PVT___T_31_0 = 0U;
    }
    __PVT___T_120 = (vlSelf->__PVT__imm_io_out + vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2_io_bankIn_3_bits_data_0);
    __PVT___T_92 = (vlSelf->__PVT__imm_io_out + vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2_io_bankIn_2_bits_data_0);
    __PVT___T_64 = (vlSelf->__PVT__imm_io_out + vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2_io_bankIn_1_bits_data_0);
    __PVT___T_36 = (vlSelf->__PVT__imm_io_out + vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2_io_bankIn_0_bits_data_0);
    if ((2U == (IData)(vlSelf->__PVT__rsType_0))) {
        vlSelf->__PVT___T_112_0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2_io_bankIn_3_bits_data_0;
        vlSelf->__PVT___T_112_1 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2_io_bankIn_3_bits_data_1;
        vlSelf->__PVT___T_112_2 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2_io_bankIn_3_bits_data_2;
        vlSelf->__PVT___T_112_3 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2_io_bankIn_3_bits_data_3;
    } else {
        vlSelf->__PVT___T_112_0 = __PVT___T_110_0;
        vlSelf->__PVT___T_112_1 = __PVT___T_110_0;
        vlSelf->__PVT___T_112_2 = __PVT___T_110_0;
        vlSelf->__PVT___T_112_3 = __PVT___T_110_0;
    }
    if ((2U == (IData)(vlSelf->__PVT__rsType_1))) {
        vlSelf->__PVT___T_117_0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2_io_bankIn_3_bits_data_0;
        vlSelf->__PVT___T_117_1 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2_io_bankIn_3_bits_data_1;
        vlSelf->__PVT___T_117_2 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2_io_bankIn_3_bits_data_2;
        vlSelf->__PVT___T_117_3 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2_io_bankIn_3_bits_data_3;
    } else {
        vlSelf->__PVT___T_117_0 = __PVT___T_115_0;
        vlSelf->__PVT___T_117_1 = __PVT___T_115_0;
        vlSelf->__PVT___T_117_2 = __PVT___T_115_0;
        vlSelf->__PVT___T_117_3 = __PVT___T_115_0;
    }
    if (vlSelf->__PVT___T_23) {
        if ((0U == (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2_io_bankIn_0_bits_regOrder))) {
            if ((2U == (IData)(vlSelf->__PVT__rsType_0))) {
                __PVT___GEN_171 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2_io_bankIn_0_bits_data_0;
                __PVT___GEN_172 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2_io_bankIn_0_bits_data_1;
                __PVT___GEN_173 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2_io_bankIn_0_bits_data_2;
                __PVT___GEN_174 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2_io_bankIn_0_bits_data_3;
            } else {
                __PVT___GEN_171 = __PVT___T_26_0;
                __PVT___GEN_172 = __PVT___T_26_0;
                __PVT___GEN_173 = __PVT___T_26_0;
                __PVT___GEN_174 = __PVT___T_26_0;
            }
            __PVT___GEN_176 = vlSelf->__PVT__rsReg_1_0;
            __PVT___GEN_177 = vlSelf->__PVT__rsReg_1_1;
            __PVT___GEN_178 = vlSelf->__PVT__rsReg_1_2;
            __PVT___GEN_179 = vlSelf->__PVT__rsReg_1_3;
            __PVT___GEN_181 = vlSelf->__PVT__rsReg_2_0;
            __PVT___GEN_182 = vlSelf->__PVT__rsReg_2_1;
            __PVT___GEN_183 = vlSelf->__PVT__rsReg_2_2;
            __PVT___GEN_184 = vlSelf->__PVT__rsReg_2_3;
        } else {
            __PVT___GEN_171 = vlSelf->__PVT__rsReg_0_0;
            __PVT___GEN_172 = vlSelf->__PVT__rsReg_0_1;
            __PVT___GEN_173 = vlSelf->__PVT__rsReg_0_2;
            __PVT___GEN_174 = vlSelf->__PVT__rsReg_0_3;
            if ((1U == (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2_io_bankIn_0_bits_regOrder))) {
                if ((2U == (IData)(vlSelf->__PVT__rsType_1))) {
                    __PVT___GEN_176 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2_io_bankIn_0_bits_data_0;
                    __PVT___GEN_177 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2_io_bankIn_0_bits_data_1;
                    __PVT___GEN_178 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2_io_bankIn_0_bits_data_2;
                    __PVT___GEN_179 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2_io_bankIn_0_bits_data_3;
                } else {
                    __PVT___GEN_176 = __PVT___T_31_0;
                    __PVT___GEN_177 = __PVT___T_31_0;
                    __PVT___GEN_178 = __PVT___T_31_0;
                    __PVT___GEN_179 = __PVT___T_31_0;
                }
                __PVT___GEN_181 = vlSelf->__PVT__rsReg_2_0;
                __PVT___GEN_182 = vlSelf->__PVT__rsReg_2_1;
                __PVT___GEN_183 = vlSelf->__PVT__rsReg_2_2;
                __PVT___GEN_184 = vlSelf->__PVT__rsReg_2_3;
            } else {
                __PVT___GEN_176 = vlSelf->__PVT__rsReg_1_0;
                __PVT___GEN_177 = vlSelf->__PVT__rsReg_1_1;
                __PVT___GEN_178 = vlSelf->__PVT__rsReg_1_2;
                __PVT___GEN_179 = vlSelf->__PVT__rsReg_1_3;
                if ((2U == (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2_io_bankIn_0_bits_regOrder))) {
                    if ((2U == (IData)(vlSelf->__PVT__controlReg_sel_alu3))) {
                        __PVT___GEN_181 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2_io_bankIn_0_bits_data_0;
                        __PVT___GEN_182 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2_io_bankIn_0_bits_data_0;
                        __PVT___GEN_183 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2_io_bankIn_0_bits_data_0;
                        __PVT___GEN_184 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2_io_bankIn_0_bits_data_0;
                    } else if ((3U == (IData)(vlSelf->__PVT__controlReg_sel_alu3))) {
                        __PVT___GEN_181 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2_io_bankIn_0_bits_data_0;
                        if (vlSelf->__PVT__controlReg_isvec) {
                            __PVT___GEN_182 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2_io_bankIn_0_bits_data_1;
                            __PVT___GEN_183 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2_io_bankIn_0_bits_data_2;
                            __PVT___GEN_184 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2_io_bankIn_0_bits_data_3;
                        } else {
                            __PVT___GEN_182 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2_io_bankIn_0_bits_data_0;
                            __PVT___GEN_183 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2_io_bankIn_0_bits_data_0;
                            __PVT___GEN_184 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2_io_bankIn_0_bits_data_0;
                        }
                    } else if ((1U == (IData)(vlSelf->__PVT__controlReg_sel_alu3))) {
                        __PVT___GEN_181 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2_io_bankIn_0_bits_data_0;
                        __PVT___GEN_182 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2_io_bankIn_0_bits_data_1;
                        __PVT___GEN_183 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2_io_bankIn_0_bits_data_2;
                        __PVT___GEN_184 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2_io_bankIn_0_bits_data_3;
                    } else {
                        __PVT___GEN_181 = __PVT___T_36;
                        __PVT___GEN_182 = __PVT___T_36;
                        __PVT___GEN_183 = __PVT___T_36;
                        __PVT___GEN_184 = __PVT___T_36;
                    }
                } else {
                    __PVT___GEN_181 = vlSelf->__PVT__rsReg_2_0;
                    __PVT___GEN_182 = vlSelf->__PVT__rsReg_2_1;
                    __PVT___GEN_183 = vlSelf->__PVT__rsReg_2_2;
                    __PVT___GEN_184 = vlSelf->__PVT__rsReg_2_3;
                }
            }
        }
    } else {
        __PVT___GEN_171 = vlSelf->__PVT__rsReg_0_0;
        __PVT___GEN_172 = vlSelf->__PVT__rsReg_0_1;
        __PVT___GEN_173 = vlSelf->__PVT__rsReg_0_2;
        __PVT___GEN_174 = vlSelf->__PVT__rsReg_0_3;
        __PVT___GEN_176 = vlSelf->__PVT__rsReg_1_0;
        __PVT___GEN_177 = vlSelf->__PVT__rsReg_1_1;
        __PVT___GEN_178 = vlSelf->__PVT__rsReg_1_2;
        __PVT___GEN_179 = vlSelf->__PVT__rsReg_1_3;
        __PVT___GEN_181 = vlSelf->__PVT__rsReg_2_0;
        __PVT___GEN_182 = vlSelf->__PVT__rsReg_2_1;
        __PVT___GEN_183 = vlSelf->__PVT__rsReg_2_2;
        __PVT___GEN_184 = vlSelf->__PVT__rsReg_2_3;
    }
    if (vlSelf->__PVT___T_51) {
        if ((0U == (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2_io_bankIn_1_bits_regOrder))) {
            if ((2U == (IData)(vlSelf->__PVT__rsType_0))) {
                __PVT___GEN_241 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2_io_bankIn_1_bits_data_0;
                __PVT___GEN_242 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2_io_bankIn_1_bits_data_1;
                __PVT___GEN_243 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2_io_bankIn_1_bits_data_2;
                __PVT___GEN_244 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2_io_bankIn_1_bits_data_3;
            } else {
                __PVT___GEN_241 = __PVT___T_54_0;
                __PVT___GEN_242 = __PVT___T_54_0;
                __PVT___GEN_243 = __PVT___T_54_0;
                __PVT___GEN_244 = __PVT___T_54_0;
            }
            __PVT___GEN_246 = __PVT___GEN_176;
            __PVT___GEN_247 = __PVT___GEN_177;
            __PVT___GEN_248 = __PVT___GEN_178;
            __PVT___GEN_249 = __PVT___GEN_179;
            __PVT___GEN_251 = __PVT___GEN_181;
            __PVT___GEN_252 = __PVT___GEN_182;
            __PVT___GEN_253 = __PVT___GEN_183;
            __PVT___GEN_254 = __PVT___GEN_184;
        } else {
            __PVT___GEN_241 = __PVT___GEN_171;
            __PVT___GEN_242 = __PVT___GEN_172;
            __PVT___GEN_243 = __PVT___GEN_173;
            __PVT___GEN_244 = __PVT___GEN_174;
            if ((1U == (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2_io_bankIn_1_bits_regOrder))) {
                if ((2U == (IData)(vlSelf->__PVT__rsType_1))) {
                    __PVT___GEN_246 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2_io_bankIn_1_bits_data_0;
                    __PVT___GEN_247 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2_io_bankIn_1_bits_data_1;
                    __PVT___GEN_248 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2_io_bankIn_1_bits_data_2;
                    __PVT___GEN_249 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2_io_bankIn_1_bits_data_3;
                } else {
                    __PVT___GEN_246 = __PVT___T_59_0;
                    __PVT___GEN_247 = __PVT___T_59_0;
                    __PVT___GEN_248 = __PVT___T_59_0;
                    __PVT___GEN_249 = __PVT___T_59_0;
                }
                __PVT___GEN_251 = __PVT___GEN_181;
                __PVT___GEN_252 = __PVT___GEN_182;
                __PVT___GEN_253 = __PVT___GEN_183;
                __PVT___GEN_254 = __PVT___GEN_184;
            } else {
                __PVT___GEN_246 = __PVT___GEN_176;
                __PVT___GEN_247 = __PVT___GEN_177;
                __PVT___GEN_248 = __PVT___GEN_178;
                __PVT___GEN_249 = __PVT___GEN_179;
                if ((2U == (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2_io_bankIn_1_bits_regOrder))) {
                    if ((2U == (IData)(vlSelf->__PVT__controlReg_sel_alu3))) {
                        __PVT___GEN_251 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2_io_bankIn_1_bits_data_0;
                        __PVT___GEN_252 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2_io_bankIn_1_bits_data_0;
                        __PVT___GEN_253 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2_io_bankIn_1_bits_data_0;
                        __PVT___GEN_254 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2_io_bankIn_1_bits_data_0;
                    } else if ((3U == (IData)(vlSelf->__PVT__controlReg_sel_alu3))) {
                        __PVT___GEN_251 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2_io_bankIn_1_bits_data_0;
                        if (vlSelf->__PVT__controlReg_isvec) {
                            __PVT___GEN_252 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2_io_bankIn_1_bits_data_1;
                            __PVT___GEN_253 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2_io_bankIn_1_bits_data_2;
                            __PVT___GEN_254 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2_io_bankIn_1_bits_data_3;
                        } else {
                            __PVT___GEN_252 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2_io_bankIn_1_bits_data_0;
                            __PVT___GEN_253 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2_io_bankIn_1_bits_data_0;
                            __PVT___GEN_254 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2_io_bankIn_1_bits_data_0;
                        }
                    } else if ((1U == (IData)(vlSelf->__PVT__controlReg_sel_alu3))) {
                        __PVT___GEN_251 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2_io_bankIn_1_bits_data_0;
                        __PVT___GEN_252 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2_io_bankIn_1_bits_data_1;
                        __PVT___GEN_253 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2_io_bankIn_1_bits_data_2;
                        __PVT___GEN_254 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2_io_bankIn_1_bits_data_3;
                    } else {
                        __PVT___GEN_251 = __PVT___T_64;
                        __PVT___GEN_252 = __PVT___T_64;
                        __PVT___GEN_253 = __PVT___T_64;
                        __PVT___GEN_254 = __PVT___T_64;
                    }
                } else {
                    __PVT___GEN_251 = __PVT___GEN_181;
                    __PVT___GEN_252 = __PVT___GEN_182;
                    __PVT___GEN_253 = __PVT___GEN_183;
                    __PVT___GEN_254 = __PVT___GEN_184;
                }
            }
        }
    } else {
        __PVT___GEN_241 = __PVT___GEN_171;
        __PVT___GEN_242 = __PVT___GEN_172;
        __PVT___GEN_243 = __PVT___GEN_173;
        __PVT___GEN_244 = __PVT___GEN_174;
        __PVT___GEN_246 = __PVT___GEN_176;
        __PVT___GEN_247 = __PVT___GEN_177;
        __PVT___GEN_248 = __PVT___GEN_178;
        __PVT___GEN_249 = __PVT___GEN_179;
        __PVT___GEN_251 = __PVT___GEN_181;
        __PVT___GEN_252 = __PVT___GEN_182;
        __PVT___GEN_253 = __PVT___GEN_183;
        __PVT___GEN_254 = __PVT___GEN_184;
    }
    if (vlSelf->__PVT___T_79) {
        if ((0U == (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2_io_bankIn_2_bits_regOrder))) {
            if ((2U == (IData)(vlSelf->__PVT__rsType_0))) {
                vlSelf->__PVT___GEN_311 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2_io_bankIn_2_bits_data_0;
                vlSelf->__PVT___GEN_312 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2_io_bankIn_2_bits_data_1;
                vlSelf->__PVT___GEN_313 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2_io_bankIn_2_bits_data_2;
                vlSelf->__PVT___GEN_314 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2_io_bankIn_2_bits_data_3;
            } else {
                vlSelf->__PVT___GEN_311 = __PVT___T_82_0;
                vlSelf->__PVT___GEN_312 = __PVT___T_82_0;
                vlSelf->__PVT___GEN_313 = __PVT___T_82_0;
                vlSelf->__PVT___GEN_314 = __PVT___T_82_0;
            }
            vlSelf->__PVT___GEN_316 = __PVT___GEN_246;
            vlSelf->__PVT___GEN_317 = __PVT___GEN_247;
            vlSelf->__PVT___GEN_318 = __PVT___GEN_248;
            vlSelf->__PVT___GEN_319 = __PVT___GEN_249;
            vlSelf->__PVT___GEN_321 = __PVT___GEN_251;
            vlSelf->__PVT___GEN_322 = __PVT___GEN_252;
            vlSelf->__PVT___GEN_323 = __PVT___GEN_253;
            vlSelf->__PVT___GEN_324 = __PVT___GEN_254;
        } else {
            vlSelf->__PVT___GEN_311 = __PVT___GEN_241;
            vlSelf->__PVT___GEN_312 = __PVT___GEN_242;
            vlSelf->__PVT___GEN_313 = __PVT___GEN_243;
            vlSelf->__PVT___GEN_314 = __PVT___GEN_244;
            if ((1U == (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2_io_bankIn_2_bits_regOrder))) {
                if ((2U == (IData)(vlSelf->__PVT__rsType_1))) {
                    vlSelf->__PVT___GEN_316 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2_io_bankIn_2_bits_data_0;
                    vlSelf->__PVT___GEN_317 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2_io_bankIn_2_bits_data_1;
                    vlSelf->__PVT___GEN_318 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2_io_bankIn_2_bits_data_2;
                    vlSelf->__PVT___GEN_319 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2_io_bankIn_2_bits_data_3;
                } else {
                    vlSelf->__PVT___GEN_316 = __PVT___T_87_0;
                    vlSelf->__PVT___GEN_317 = __PVT___T_87_0;
                    vlSelf->__PVT___GEN_318 = __PVT___T_87_0;
                    vlSelf->__PVT___GEN_319 = __PVT___T_87_0;
                }
                vlSelf->__PVT___GEN_321 = __PVT___GEN_251;
                vlSelf->__PVT___GEN_322 = __PVT___GEN_252;
                vlSelf->__PVT___GEN_323 = __PVT___GEN_253;
                vlSelf->__PVT___GEN_324 = __PVT___GEN_254;
            } else {
                vlSelf->__PVT___GEN_316 = __PVT___GEN_246;
                vlSelf->__PVT___GEN_317 = __PVT___GEN_247;
                vlSelf->__PVT___GEN_318 = __PVT___GEN_248;
                vlSelf->__PVT___GEN_319 = __PVT___GEN_249;
                if ((2U == (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2_io_bankIn_2_bits_regOrder))) {
                    if ((2U == (IData)(vlSelf->__PVT__controlReg_sel_alu3))) {
                        vlSelf->__PVT___GEN_321 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2_io_bankIn_2_bits_data_0;
                        vlSelf->__PVT___GEN_322 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2_io_bankIn_2_bits_data_0;
                        vlSelf->__PVT___GEN_323 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2_io_bankIn_2_bits_data_0;
                        vlSelf->__PVT___GEN_324 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2_io_bankIn_2_bits_data_0;
                    } else if ((3U == (IData)(vlSelf->__PVT__controlReg_sel_alu3))) {
                        vlSelf->__PVT___GEN_321 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2_io_bankIn_2_bits_data_0;
                        if (vlSelf->__PVT__controlReg_isvec) {
                            vlSelf->__PVT___GEN_322 
                                = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2_io_bankIn_2_bits_data_1;
                            vlSelf->__PVT___GEN_323 
                                = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2_io_bankIn_2_bits_data_2;
                            vlSelf->__PVT___GEN_324 
                                = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2_io_bankIn_2_bits_data_3;
                        } else {
                            vlSelf->__PVT___GEN_322 
                                = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2_io_bankIn_2_bits_data_0;
                            vlSelf->__PVT___GEN_323 
                                = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2_io_bankIn_2_bits_data_0;
                            vlSelf->__PVT___GEN_324 
                                = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2_io_bankIn_2_bits_data_0;
                        }
                    } else if ((1U == (IData)(vlSelf->__PVT__controlReg_sel_alu3))) {
                        vlSelf->__PVT___GEN_321 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2_io_bankIn_2_bits_data_0;
                        vlSelf->__PVT___GEN_322 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2_io_bankIn_2_bits_data_1;
                        vlSelf->__PVT___GEN_323 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2_io_bankIn_2_bits_data_2;
                        vlSelf->__PVT___GEN_324 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2_io_bankIn_2_bits_data_3;
                    } else {
                        vlSelf->__PVT___GEN_321 = __PVT___T_92;
                        vlSelf->__PVT___GEN_322 = __PVT___T_92;
                        vlSelf->__PVT___GEN_323 = __PVT___T_92;
                        vlSelf->__PVT___GEN_324 = __PVT___T_92;
                    }
                } else {
                    vlSelf->__PVT___GEN_321 = __PVT___GEN_251;
                    vlSelf->__PVT___GEN_322 = __PVT___GEN_252;
                    vlSelf->__PVT___GEN_323 = __PVT___GEN_253;
                    vlSelf->__PVT___GEN_324 = __PVT___GEN_254;
                }
            }
        }
    } else {
        vlSelf->__PVT___GEN_311 = __PVT___GEN_241;
        vlSelf->__PVT___GEN_312 = __PVT___GEN_242;
        vlSelf->__PVT___GEN_313 = __PVT___GEN_243;
        vlSelf->__PVT___GEN_314 = __PVT___GEN_244;
        vlSelf->__PVT___GEN_316 = __PVT___GEN_246;
        vlSelf->__PVT___GEN_317 = __PVT___GEN_247;
        vlSelf->__PVT___GEN_318 = __PVT___GEN_248;
        vlSelf->__PVT___GEN_319 = __PVT___GEN_249;
        vlSelf->__PVT___GEN_321 = __PVT___GEN_251;
        vlSelf->__PVT___GEN_322 = __PVT___GEN_252;
        vlSelf->__PVT___GEN_323 = __PVT___GEN_253;
        vlSelf->__PVT___GEN_324 = __PVT___GEN_254;
    }
    if ((2U == (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2_io_bankIn_3_bits_regOrder))) {
        if ((2U == (IData)(vlSelf->__PVT__controlReg_sel_alu3))) {
            vlSelf->__PVT___GEN_336 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2_io_bankIn_3_bits_data_0;
            vlSelf->__PVT___GEN_337 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2_io_bankIn_3_bits_data_0;
            vlSelf->__PVT___GEN_338 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2_io_bankIn_3_bits_data_0;
            vlSelf->__PVT___GEN_339 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2_io_bankIn_3_bits_data_0;
        } else if ((3U == (IData)(vlSelf->__PVT__controlReg_sel_alu3))) {
            vlSelf->__PVT___GEN_336 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2_io_bankIn_3_bits_data_0;
            if (vlSelf->__PVT__controlReg_isvec) {
                vlSelf->__PVT___GEN_337 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2_io_bankIn_3_bits_data_1;
                vlSelf->__PVT___GEN_338 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2_io_bankIn_3_bits_data_2;
                vlSelf->__PVT___GEN_339 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2_io_bankIn_3_bits_data_3;
            } else {
                vlSelf->__PVT___GEN_337 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2_io_bankIn_3_bits_data_0;
                vlSelf->__PVT___GEN_338 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2_io_bankIn_3_bits_data_0;
                vlSelf->__PVT___GEN_339 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2_io_bankIn_3_bits_data_0;
            }
        } else if ((1U == (IData)(vlSelf->__PVT__controlReg_sel_alu3))) {
            vlSelf->__PVT___GEN_336 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2_io_bankIn_3_bits_data_0;
            vlSelf->__PVT___GEN_337 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2_io_bankIn_3_bits_data_1;
            vlSelf->__PVT___GEN_338 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2_io_bankIn_3_bits_data_2;
            vlSelf->__PVT___GEN_339 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2_io_bankIn_3_bits_data_3;
        } else {
            vlSelf->__PVT___GEN_336 = __PVT___T_120;
            vlSelf->__PVT___GEN_337 = __PVT___T_120;
            vlSelf->__PVT___GEN_338 = __PVT___T_120;
            vlSelf->__PVT___GEN_339 = __PVT___T_120;
        }
    } else {
        vlSelf->__PVT___GEN_336 = vlSelf->__PVT___GEN_321;
        vlSelf->__PVT___GEN_337 = vlSelf->__PVT___GEN_322;
        vlSelf->__PVT___GEN_338 = vlSelf->__PVT___GEN_323;
        vlSelf->__PVT___GEN_339 = vlSelf->__PVT___GEN_324;
    }
}

VL_ATTR_COLD void VVentus_collectorUnit___stl_sequent__TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__operand_collector__DOT__collectorUnit_3__0(VVentus_collectorUnit* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VVentus__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VVentus_collectorUnit___stl_sequent__TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__operand_collector__DOT__collectorUnit_3__0\n"); );
    // Init
    CData/*0:0*/ __PVT___GEN_175;
    CData/*0:0*/ __PVT___GEN_180;
    CData/*0:0*/ __PVT___GEN_185;
    CData/*0:0*/ __PVT___GEN_186;
    CData/*0:0*/ __PVT___GEN_187;
    CData/*0:0*/ __PVT___GEN_188;
    CData/*0:0*/ __PVT___GEN_189;
    CData/*0:0*/ __PVT___GEN_190;
    CData/*0:0*/ __PVT___GEN_250;
    CData/*0:0*/ __PVT___GEN_255;
    CData/*0:0*/ __PVT___GEN_256;
    CData/*0:0*/ __PVT___GEN_257;
    CData/*0:0*/ __PVT___GEN_258;
    CData/*0:0*/ __PVT___GEN_259;
    CData/*0:0*/ __PVT___GEN_260;
    // Body
    vlSelf->__PVT__io_issue_valid = (2U == (IData)(vlSelf->__PVT__state));
    vlSelf->__PVT___io_bankIn_0_ready_T = (1U == (IData)(vlSelf->__PVT__state));
    vlSelf->__PVT___io_outArbiterIO_0_bits_bankID_T_1 
        = (0U == (IData)(vlSelf->__PVT__state));
    vlSelf->__PVT___io_control_ready_T_1 = (((IData)(vlSelf->__PVT__valid_3) 
                                             << 3U) 
                                            | (((IData)(vlSelf->__PVT__valid_2) 
                                                << 2U) 
                                               | (((IData)(vlSelf->__PVT__valid_1) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->__PVT__valid_0))));
    vlSelf->__PVT___T_107 = (((~ (IData)(vlSelf->__PVT__ready_3)) 
                              & (1U == (IData)(vlSelf->__PVT__state))) 
                             & ((IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.pipe__DOT__operand_collector__DOT__crossBar__DOT____VdfgTmp_h0c933018__0) 
                                | ((IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.pipe__DOT__operand_collector__DOT__crossBar__DOT____VdfgTmp_h8991ccf5__0) 
                                   | ((IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.pipe__DOT__operand_collector__DOT__crossBar__DOT____VdfgTmp_h753d4ebc__0) 
                                      | (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.pipe__DOT__operand_collector__DOT__crossBar__DOT____VdfgTmp_hd1563a5f__0)))));
    vlSelf->__PVT___T_79 = (((~ (IData)(vlSelf->__PVT__ready_2)) 
                             & (1U == (IData)(vlSelf->__PVT__state))) 
                            & ((IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.pipe__DOT__operand_collector__DOT__crossBar__DOT____VdfgTmp_h02f698bb__0) 
                               | ((IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.pipe__DOT__operand_collector__DOT__crossBar__DOT____VdfgTmp_h82dd656a__0) 
                                  | ((IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.pipe__DOT__operand_collector__DOT__crossBar__DOT____VdfgTmp_h4cf0285f__0) 
                                     | (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.pipe__DOT__operand_collector__DOT__crossBar__DOT____VdfgTmp_h27290432__0)))));
    vlSelf->__PVT___T_51 = (((~ (IData)(vlSelf->__PVT__ready_1)) 
                             & (1U == (IData)(vlSelf->__PVT__state))) 
                            & ((IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.pipe__DOT__operand_collector__DOT__crossBar__DOT____VdfgTmp_h02e2e9d6__0) 
                               | ((IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.pipe__DOT__operand_collector__DOT__crossBar__DOT____VdfgTmp_h82c195dd__0) 
                                  | ((IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.pipe__DOT__operand_collector__DOT__crossBar__DOT____VdfgTmp_h4c8c3b6c__0) 
                                     | (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.pipe__DOT__operand_collector__DOT__crossBar__DOT____VdfgTmp_h2725150f__0)))));
    vlSelf->__PVT___T_23 = (((~ (IData)(vlSelf->__PVT__ready_0)) 
                             & (1U == (IData)(vlSelf->__PVT__state))) 
                            & ((IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.pipe__DOT__operand_collector__DOT__crossBar__DOT____VdfgTmp_h028cbbd6__0) 
                               | ((IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.pipe__DOT__operand_collector__DOT__crossBar__DOT____VdfgTmp_h82a6032f__0) 
                                  | ((IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.pipe__DOT__operand_collector__DOT__crossBar__DOT____VdfgTmp_h4ce9b56a__0) 
                                     | (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.pipe__DOT__operand_collector__DOT__crossBar__DOT____VdfgTmp_h2742a345__0)))));
    vlSelf->__PVT__io_control_ready = ((~ (IData)((0U 
                                                   != (IData)(vlSelf->__PVT___io_control_ready_T_1)))) 
                                       & (0U == (IData)(vlSelf->__PVT__state)));
    if (vlSelf->__PVT___T_23) {
        __PVT___GEN_175 = ((0U == (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3_io_bankIn_0_bits_regOrder)) 
                           | (IData)(vlSelf->__PVT__ready_0));
        if ((0U == (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3_io_bankIn_0_bits_regOrder))) {
            __PVT___GEN_180 = vlSelf->__PVT__ready_1;
            __PVT___GEN_185 = vlSelf->__PVT__ready_2;
            __PVT___GEN_190 = vlSelf->__PVT__ready_3;
            __PVT___GEN_186 = (1U & (IData)(vlSelf->__PVT__mask_0));
            __PVT___GEN_187 = (1U & (IData)(vlSelf->__PVT__mask_1));
            __PVT___GEN_188 = (1U & (IData)(vlSelf->__PVT__mask_2));
            __PVT___GEN_189 = (1U & (IData)(vlSelf->__PVT__mask_3));
        } else {
            __PVT___GEN_180 = ((1U == (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3_io_bankIn_0_bits_regOrder)) 
                               | (IData)(vlSelf->__PVT__ready_1));
            if ((1U == (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3_io_bankIn_0_bits_regOrder))) {
                __PVT___GEN_185 = vlSelf->__PVT__ready_2;
                __PVT___GEN_190 = vlSelf->__PVT__ready_3;
                __PVT___GEN_186 = (1U & (IData)(vlSelf->__PVT__mask_0));
                __PVT___GEN_187 = (1U & (IData)(vlSelf->__PVT__mask_1));
                __PVT___GEN_188 = (1U & (IData)(vlSelf->__PVT__mask_2));
                __PVT___GEN_189 = (1U & (IData)(vlSelf->__PVT__mask_3));
            } else {
                __PVT___GEN_185 = ((2U == (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3_io_bankIn_0_bits_regOrder)) 
                                   | (IData)(vlSelf->__PVT__ready_2));
                if ((2U == (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3_io_bankIn_0_bits_regOrder))) {
                    __PVT___GEN_190 = vlSelf->__PVT__ready_3;
                    __PVT___GEN_186 = (1U & (IData)(vlSelf->__PVT__mask_0));
                    __PVT___GEN_187 = (1U & (IData)(vlSelf->__PVT__mask_1));
                    __PVT___GEN_188 = (1U & (IData)(vlSelf->__PVT__mask_2));
                    __PVT___GEN_189 = (1U & (IData)(vlSelf->__PVT__mask_3));
                } else {
                    __PVT___GEN_190 = ((3U == (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3_io_bankIn_0_bits_regOrder)) 
                                       | (IData)(vlSelf->__PVT__ready_3));
                    if ((3U == (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3_io_bankIn_0_bits_regOrder))) {
                        __PVT___GEN_186 = (1U & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3_io_bankIn_0_bits_v0_0);
                        __PVT___GEN_187 = (1U & (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3_io_bankIn_0_bits_v0_0 
                                                 >> 1U));
                        __PVT___GEN_188 = (1U & (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3_io_bankIn_0_bits_v0_0 
                                                 >> 2U));
                        __PVT___GEN_189 = (1U & (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3_io_bankIn_0_bits_v0_0 
                                                 >> 3U));
                    } else {
                        __PVT___GEN_186 = (1U & (IData)(vlSelf->__PVT__mask_0));
                        __PVT___GEN_187 = (1U & (IData)(vlSelf->__PVT__mask_1));
                        __PVT___GEN_188 = (1U & (IData)(vlSelf->__PVT__mask_2));
                        __PVT___GEN_189 = (1U & (IData)(vlSelf->__PVT__mask_3));
                    }
                }
            }
        }
    } else {
        __PVT___GEN_175 = vlSelf->__PVT__ready_0;
        __PVT___GEN_180 = vlSelf->__PVT__ready_1;
        __PVT___GEN_185 = vlSelf->__PVT__ready_2;
        __PVT___GEN_190 = vlSelf->__PVT__ready_3;
        __PVT___GEN_186 = (1U & (IData)(vlSelf->__PVT__mask_0));
        __PVT___GEN_187 = (1U & (IData)(vlSelf->__PVT__mask_1));
        __PVT___GEN_188 = (1U & (IData)(vlSelf->__PVT__mask_2));
        __PVT___GEN_189 = (1U & (IData)(vlSelf->__PVT__mask_3));
    }
    if (vlSelf->__PVT___T_51) {
        vlSelf->__PVT___GEN_245 = ((0U == (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3_io_bankIn_1_bits_regOrder)) 
                                   | (IData)(__PVT___GEN_175));
        if ((0U == (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3_io_bankIn_1_bits_regOrder))) {
            __PVT___GEN_250 = __PVT___GEN_180;
            __PVT___GEN_255 = __PVT___GEN_185;
            __PVT___GEN_260 = __PVT___GEN_190;
            __PVT___GEN_256 = (1U & (IData)(__PVT___GEN_186));
            __PVT___GEN_257 = (1U & (IData)(__PVT___GEN_187));
            __PVT___GEN_258 = (1U & (IData)(__PVT___GEN_188));
            __PVT___GEN_259 = (1U & (IData)(__PVT___GEN_189));
        } else {
            __PVT___GEN_250 = ((1U == (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3_io_bankIn_1_bits_regOrder)) 
                               | (IData)(__PVT___GEN_180));
            if ((1U == (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3_io_bankIn_1_bits_regOrder))) {
                __PVT___GEN_255 = __PVT___GEN_185;
                __PVT___GEN_260 = __PVT___GEN_190;
                __PVT___GEN_256 = (1U & (IData)(__PVT___GEN_186));
                __PVT___GEN_257 = (1U & (IData)(__PVT___GEN_187));
                __PVT___GEN_258 = (1U & (IData)(__PVT___GEN_188));
                __PVT___GEN_259 = (1U & (IData)(__PVT___GEN_189));
            } else {
                __PVT___GEN_255 = ((2U == (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3_io_bankIn_1_bits_regOrder)) 
                                   | (IData)(__PVT___GEN_185));
                if ((2U == (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3_io_bankIn_1_bits_regOrder))) {
                    __PVT___GEN_260 = __PVT___GEN_190;
                    __PVT___GEN_256 = (1U & (IData)(__PVT___GEN_186));
                    __PVT___GEN_257 = (1U & (IData)(__PVT___GEN_187));
                    __PVT___GEN_258 = (1U & (IData)(__PVT___GEN_188));
                    __PVT___GEN_259 = (1U & (IData)(__PVT___GEN_189));
                } else {
                    __PVT___GEN_260 = ((3U == (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3_io_bankIn_1_bits_regOrder)) 
                                       | (IData)(__PVT___GEN_190));
                    if ((3U == (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3_io_bankIn_1_bits_regOrder))) {
                        __PVT___GEN_256 = (1U & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3_io_bankIn_1_bits_v0_0);
                        __PVT___GEN_257 = (1U & (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3_io_bankIn_1_bits_v0_0 
                                                 >> 1U));
                        __PVT___GEN_258 = (1U & (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3_io_bankIn_1_bits_v0_0 
                                                 >> 2U));
                        __PVT___GEN_259 = (1U & (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3_io_bankIn_1_bits_v0_0 
                                                 >> 3U));
                    } else {
                        __PVT___GEN_256 = (1U & (IData)(__PVT___GEN_186));
                        __PVT___GEN_257 = (1U & (IData)(__PVT___GEN_187));
                        __PVT___GEN_258 = (1U & (IData)(__PVT___GEN_188));
                        __PVT___GEN_259 = (1U & (IData)(__PVT___GEN_189));
                    }
                }
            }
        }
    } else {
        vlSelf->__PVT___GEN_245 = __PVT___GEN_175;
        __PVT___GEN_250 = __PVT___GEN_180;
        __PVT___GEN_255 = __PVT___GEN_185;
        __PVT___GEN_260 = __PVT___GEN_190;
        __PVT___GEN_256 = (1U & (IData)(__PVT___GEN_186));
        __PVT___GEN_257 = (1U & (IData)(__PVT___GEN_187));
        __PVT___GEN_258 = (1U & (IData)(__PVT___GEN_188));
        __PVT___GEN_259 = (1U & (IData)(__PVT___GEN_189));
    }
    vlSelf->__PVT___GEN_295 = ((0U == (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3_io_bankIn_2_bits_regOrder)) 
                               | (IData)(vlSelf->__PVT___GEN_245));
    if (vlSelf->__PVT___T_79) {
        if ((0U == (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3_io_bankIn_2_bits_regOrder))) {
            vlSelf->__PVT___GEN_320 = __PVT___GEN_250;
            vlSelf->__PVT___GEN_325 = __PVT___GEN_255;
            vlSelf->__PVT___GEN_330 = __PVT___GEN_260;
            vlSelf->__PVT___GEN_326 = (1U & (IData)(__PVT___GEN_256));
            vlSelf->__PVT___GEN_327 = (1U & (IData)(__PVT___GEN_257));
            vlSelf->__PVT___GEN_328 = (1U & (IData)(__PVT___GEN_258));
            vlSelf->__PVT___GEN_329 = (1U & (IData)(__PVT___GEN_259));
        } else {
            vlSelf->__PVT___GEN_320 = ((1U == (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3_io_bankIn_2_bits_regOrder)) 
                                       | (IData)(__PVT___GEN_250));
            if ((1U == (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3_io_bankIn_2_bits_regOrder))) {
                vlSelf->__PVT___GEN_325 = __PVT___GEN_255;
                vlSelf->__PVT___GEN_330 = __PVT___GEN_260;
                vlSelf->__PVT___GEN_326 = (1U & (IData)(__PVT___GEN_256));
                vlSelf->__PVT___GEN_327 = (1U & (IData)(__PVT___GEN_257));
                vlSelf->__PVT___GEN_328 = (1U & (IData)(__PVT___GEN_258));
                vlSelf->__PVT___GEN_329 = (1U & (IData)(__PVT___GEN_259));
            } else {
                vlSelf->__PVT___GEN_325 = ((2U == (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3_io_bankIn_2_bits_regOrder)) 
                                           | (IData)(__PVT___GEN_255));
                if ((2U == (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3_io_bankIn_2_bits_regOrder))) {
                    vlSelf->__PVT___GEN_330 = __PVT___GEN_260;
                    vlSelf->__PVT___GEN_326 = (1U & (IData)(__PVT___GEN_256));
                    vlSelf->__PVT___GEN_327 = (1U & (IData)(__PVT___GEN_257));
                    vlSelf->__PVT___GEN_328 = (1U & (IData)(__PVT___GEN_258));
                    vlSelf->__PVT___GEN_329 = (1U & (IData)(__PVT___GEN_259));
                } else {
                    vlSelf->__PVT___GEN_330 = ((3U 
                                                == (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3_io_bankIn_2_bits_regOrder)) 
                                               | (IData)(__PVT___GEN_260));
                    if ((3U == (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3_io_bankIn_2_bits_regOrder))) {
                        vlSelf->__PVT___GEN_326 = (1U 
                                                   & vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3_io_bankIn_2_bits_v0_0);
                        vlSelf->__PVT___GEN_327 = (1U 
                                                   & (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3_io_bankIn_2_bits_v0_0 
                                                      >> 1U));
                        vlSelf->__PVT___GEN_328 = (1U 
                                                   & (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3_io_bankIn_2_bits_v0_0 
                                                      >> 2U));
                        vlSelf->__PVT___GEN_329 = (1U 
                                                   & (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3_io_bankIn_2_bits_v0_0 
                                                      >> 3U));
                    } else {
                        vlSelf->__PVT___GEN_326 = (1U 
                                                   & (IData)(__PVT___GEN_256));
                        vlSelf->__PVT___GEN_327 = (1U 
                                                   & (IData)(__PVT___GEN_257));
                        vlSelf->__PVT___GEN_328 = (1U 
                                                   & (IData)(__PVT___GEN_258));
                        vlSelf->__PVT___GEN_329 = (1U 
                                                   & (IData)(__PVT___GEN_259));
                    }
                }
            }
        }
    } else {
        vlSelf->__PVT___GEN_320 = __PVT___GEN_250;
        vlSelf->__PVT___GEN_325 = __PVT___GEN_255;
        vlSelf->__PVT___GEN_330 = __PVT___GEN_260;
        vlSelf->__PVT___GEN_326 = (1U & (IData)(__PVT___GEN_256));
        vlSelf->__PVT___GEN_327 = (1U & (IData)(__PVT___GEN_257));
        vlSelf->__PVT___GEN_328 = (1U & (IData)(__PVT___GEN_258));
        vlSelf->__PVT___GEN_329 = (1U & (IData)(__PVT___GEN_259));
    }
}

VL_ATTR_COLD void VVentus_collectorUnit___stl_sequent__TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__operand_collector__DOT__collectorUnit_3__1(VVentus_collectorUnit* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VVentus__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VVentus_collectorUnit___stl_sequent__TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__operand_collector__DOT__collectorUnit_3__1\n"); );
    // Init
    CData/*0:0*/ __PVT___io_outArbiterIO_0_bits_bankID_T_2;
    CData/*4:0*/ __PVT___io_outArbiterIO_0_bits_bankID_T_7;
    CData/*1:0*/ __PVT___io_outArbiterIO_0_bits_bankID_T_49;
    CData/*4:0*/ __PVT___io_outArbiterIO_0_bits_rsAddr_T_3;
    CData/*2:0*/ __PVT___io_outArbiterIO_0_bits_rsAddr_T_51;
    CData/*4:0*/ __PVT___io_outArbiterIO_1_bits_bankID_T_7;
    CData/*1:0*/ __PVT___io_outArbiterIO_1_bits_bankID_T_49;
    CData/*4:0*/ __PVT___io_outArbiterIO_1_bits_rsAddr_T_3;
    CData/*2:0*/ __PVT___io_outArbiterIO_1_bits_rsAddr_T_51;
    CData/*4:0*/ __PVT___io_outArbiterIO_2_bits_bankID_T_7;
    CData/*1:0*/ __PVT___io_outArbiterIO_2_bits_bankID_T_49;
    CData/*4:0*/ __PVT___io_outArbiterIO_2_bits_rsAddr_T_3;
    CData/*2:0*/ __PVT___io_outArbiterIO_2_bits_rsAddr_T_51;
    CData/*4:0*/ __PVT___io_outArbiterIO_3_bits_bankID_T_7;
    CData/*1:0*/ __PVT___io_outArbiterIO_3_bits_bankID_T_49;
    IData/*20:0*/ __PVT__imm__DOT___out_T_7;
    // Body
    vlSelf->__PVT___T_11 = (((~ (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.pipe__DOT__operand_collector__DOT__issueArbiter__DOT____VdfgTmp_h5724d08f__0)) 
                             & (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_io_issue_ready)) 
                            & (2U == (IData)(vlSelf->__PVT__state)));
    if ((0U == (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_io_control_bits_sel_alu1))) {
        vlSelf->__PVT___GEN_6 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_io_control_bits_pc;
        vlSelf->__PVT___GEN_7 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_io_control_bits_pc;
        vlSelf->__PVT___GEN_8 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_io_control_bits_pc;
        vlSelf->__PVT___GEN_9 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_io_control_bits_pc;
    } else {
        vlSelf->__PVT___GEN_6 = vlSelf->__PVT__rsReg_0_0;
        vlSelf->__PVT___GEN_7 = vlSelf->__PVT__rsReg_0_1;
        vlSelf->__PVT___GEN_8 = vlSelf->__PVT__rsReg_0_2;
        vlSelf->__PVT___GEN_9 = vlSelf->__PVT__rsReg_0_3;
    }
    vlSelf->__PVT___GEN_17 = ((3U == (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_io_control_bits_sel_alu1)) 
                              | (0U == (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_io_control_bits_sel_alu1)));
    vlSelf->__PVT___GEN_36 = (1U & ((~ (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_io_control_bits_mask)) 
                                    | (IData)(vlSelf->__PVT__mask_0)));
    if ((0U == (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_io_control_bits_sel_alu2))) {
        vlSelf->__PVT___GEN_18 = 4U;
        vlSelf->__PVT___GEN_19 = 4U;
        vlSelf->__PVT___GEN_20 = 4U;
        vlSelf->__PVT___GEN_21 = 4U;
    } else {
        vlSelf->__PVT___GEN_18 = vlSelf->__PVT__rsReg_1_0;
        vlSelf->__PVT___GEN_19 = vlSelf->__PVT__rsReg_1_1;
        vlSelf->__PVT___GEN_20 = vlSelf->__PVT__rsReg_1_2;
        vlSelf->__PVT___GEN_21 = vlSelf->__PVT__rsReg_1_3;
    }
    vlSelf->__PVT___GEN_29 = ((3U == (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_io_control_bits_sel_alu2)) 
                              | (0U == (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_io_control_bits_sel_alu2)));
    if ((2U == (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_io_control_bits_sel_alu3))) {
        vlSelf->__PVT___rsTypeWire_2_T_8 = 1U;
        vlSelf->__PVT___regIdxWire_2_T_8 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_io_control_bits_reg_idx3;
    } else if ((3U == (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_io_control_bits_sel_alu3))) {
        if (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_io_control_bits_isvec) {
            vlSelf->__PVT___rsTypeWire_2_T_8 = 2U;
            vlSelf->__PVT___regIdxWire_2_T_8 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_io_control_bits_reg_idx3;
        } else {
            vlSelf->__PVT___rsTypeWire_2_T_8 = 1U;
            vlSelf->__PVT___regIdxWire_2_T_8 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_io_control_bits_reg_idx2;
        }
    } else if ((1U == (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_io_control_bits_sel_alu3))) {
        vlSelf->__PVT___rsTypeWire_2_T_8 = 2U;
        vlSelf->__PVT___regIdxWire_2_T_8 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_io_control_bits_reg_idx3;
    } else if ((3U == (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_io_control_bits_branch))) {
        vlSelf->__PVT___rsTypeWire_2_T_8 = 1U;
        vlSelf->__PVT___regIdxWire_2_T_8 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_io_control_bits_reg_idx1;
    } else {
        vlSelf->__PVT___rsTypeWire_2_T_8 = 3U;
        vlSelf->__PVT___regIdxWire_2_T_8 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_io_control_bits_reg_idx3;
    }
    vlSelf->__PVT___T_20 = ((0U == (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_io_control_bits_sel_alu3)) 
                            & (3U != (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_io_control_bits_branch)));
    vlSelf->__PVT___io_outArbiterIO_0_bits_bankID_T 
        = ((IData)(vlSelf->__PVT__io_control_ready) 
           & ((3U == (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__Demux__DOT___io_out_0_valid_T_2)) 
              & (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__Demux_io_in_valid)));
    if ((1U == (IData)(vlSelf->__PVT__state))) {
        vlSelf->__PVT__imm_io_inst = vlSelf->__PVT__controlReg_inst;
        vlSelf->__PVT__imm_io_sel = vlSelf->__PVT__controlReg_sel_imm;
        vlSelf->__PVT__io_outArbiterIO_0_valid = ((~ (IData)(vlSelf->__PVT__ready_0)) 
                                                  & (IData)(vlSelf->__PVT__valid_0));
        vlSelf->__PVT__io_outArbiterIO_1_valid = ((~ (IData)(vlSelf->__PVT__ready_1)) 
                                                  & (IData)(vlSelf->__PVT__valid_1));
        vlSelf->__PVT__io_outArbiterIO_2_valid = ((~ (IData)(vlSelf->__PVT__ready_2)) 
                                                  & (IData)(vlSelf->__PVT__valid_2));
        vlSelf->__PVT__io_outArbiterIO_3_valid = ((~ (IData)(vlSelf->__PVT__ready_3)) 
                                                  & (IData)(vlSelf->__PVT__valid_3));
    } else if ((0U == (IData)(vlSelf->__PVT__state))) {
        vlSelf->__PVT__imm_io_inst = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_io_control_bits_inst;
        vlSelf->__PVT__imm_io_sel = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_io_control_bits_sel_imm;
        vlSelf->__PVT__io_outArbiterIO_0_valid = ((~ 
                                                   ((0U 
                                                     == (IData)(vlSelf->__PVT__state)) 
                                                    & ((IData)(vlSelf->__PVT___io_outArbiterIO_0_bits_bankID_T) 
                                                       & (IData)(vlSelf->__PVT___GEN_17)))) 
                                                  & (IData)(vlSelf->__PVT___io_outArbiterIO_0_bits_bankID_T));
        vlSelf->__PVT__io_outArbiterIO_1_valid = ((~ 
                                                   ((0U 
                                                     == (IData)(vlSelf->__PVT__state)) 
                                                    & ((IData)(vlSelf->__PVT___io_outArbiterIO_0_bits_bankID_T) 
                                                       & (IData)(vlSelf->__PVT___GEN_29)))) 
                                                  & (IData)(vlSelf->__PVT___io_outArbiterIO_0_bits_bankID_T));
        vlSelf->__PVT__io_outArbiterIO_2_valid = ((~ 
                                                   ((0U 
                                                     == (IData)(vlSelf->__PVT__state)) 
                                                    & ((IData)(vlSelf->__PVT___io_outArbiterIO_0_bits_bankID_T) 
                                                       & (IData)(vlSelf->__PVT___T_20)))) 
                                                  & (IData)(vlSelf->__PVT___io_outArbiterIO_0_bits_bankID_T));
        vlSelf->__PVT__io_outArbiterIO_3_valid = ((~ 
                                                   ((0U 
                                                     == (IData)(vlSelf->__PVT__state)) 
                                                    & ((~ (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_io_control_bits_mask)) 
                                                       & (IData)(vlSelf->__PVT___io_outArbiterIO_0_bits_bankID_T)))) 
                                                  & (IData)(vlSelf->__PVT___io_outArbiterIO_0_bits_bankID_T));
    } else {
        vlSelf->__PVT__imm_io_inst = 0U;
        vlSelf->__PVT__imm_io_sel = 0U;
        vlSelf->__PVT__io_outArbiterIO_0_valid = 0U;
        vlSelf->__PVT__io_outArbiterIO_1_valid = 0U;
        vlSelf->__PVT__io_outArbiterIO_2_valid = 0U;
        vlSelf->__PVT__io_outArbiterIO_3_valid = 0U;
    }
    __PVT__imm__DOT___out_T_7 = ((2U == (IData)(vlSelf->__PVT__imm_io_sel))
                                  ? ((0x1fe000U & (
                                                   (- (IData)(
                                                              (vlSelf->__PVT__imm_io_inst 
                                                               >> 0x1fU))) 
                                                   << 0xdU)) 
                                     | ((0x1000U & 
                                         (vlSelf->__PVT__imm_io_inst 
                                          >> 0x13U)) 
                                        | ((0x800U 
                                            & (vlSelf->__PVT__imm_io_inst 
                                               << 4U)) 
                                           | ((0x7e0U 
                                               & (vlSelf->__PVT__imm_io_inst 
                                                  >> 0x14U)) 
                                              | (0x1eU 
                                                 & (vlSelf->__PVT__imm_io_inst 
                                                    >> 7U))))))
                                  : ((1U == (IData)(vlSelf->__PVT__imm_io_sel))
                                      ? ((0x1ff000U 
                                          & ((- (IData)(
                                                        (vlSelf->__PVT__imm_io_inst 
                                                         >> 0x1fU))) 
                                             << 0xcU)) 
                                         | ((0xfe0U 
                                             & (vlSelf->__PVT__imm_io_inst 
                                                >> 0x14U)) 
                                            | (0x1fU 
                                               & (vlSelf->__PVT__imm_io_inst 
                                                  >> 7U))))
                                      : ((5U == (IData)(vlSelf->__PVT__imm_io_sel))
                                          ? ((0x100000U 
                                              & (vlSelf->__PVT__imm_io_inst 
                                                 >> 0xbU)) 
                                             | ((0xff000U 
                                                 & vlSelf->__PVT__imm_io_inst) 
                                                | ((0x800U 
                                                    & (vlSelf->__PVT__imm_io_inst 
                                                       >> 9U)) 
                                                   | (0x7feU 
                                                      & (vlSelf->__PVT__imm_io_inst 
                                                         >> 0x14U)))))
                                          : ((0x1ff000U 
                                              & ((- (IData)(
                                                            (vlSelf->__PVT__imm_io_inst 
                                                             >> 0x1fU))) 
                                                 << 0xcU)) 
                                             | (vlSelf->__PVT__imm_io_inst 
                                                >> 0x14U)))));
    vlSelf->__PVT___GEN_85 = ((IData)(vlSelf->__PVT___io_outArbiterIO_0_bits_bankID_T) 
                              | (IData)(vlSelf->__PVT__valid_0));
    vlSelf->__PVT___GEN_86 = ((IData)(vlSelf->__PVT___io_outArbiterIO_0_bits_bankID_T) 
                              | (IData)(vlSelf->__PVT__valid_1));
    vlSelf->__PVT___GEN_87 = ((IData)(vlSelf->__PVT___io_outArbiterIO_0_bits_bankID_T) 
                              | (IData)(vlSelf->__PVT__valid_2));
    vlSelf->__PVT___GEN_88 = ((IData)(vlSelf->__PVT___io_outArbiterIO_0_bits_bankID_T) 
                              | (IData)(vlSelf->__PVT__valid_3));
    if ((0U == (IData)(vlSelf->__PVT__state))) {
        if (vlSelf->__PVT___io_outArbiterIO_0_bits_bankID_T) {
            vlSelf->__PVT__regIdxWire_0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_io_control_bits_reg_idx1;
            vlSelf->__PVT__regIdxWire_1 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_io_control_bits_reg_idx2;
            vlSelf->__PVT__regIdxWire_2 = vlSelf->__PVT___regIdxWire_2_T_8;
            __PVT___io_outArbiterIO_0_bits_bankID_T_2 = 1U;
        } else {
            vlSelf->__PVT__regIdxWire_0 = 0U;
            vlSelf->__PVT__regIdxWire_1 = 0U;
            vlSelf->__PVT__regIdxWire_2 = 0U;
            __PVT___io_outArbiterIO_0_bits_bankID_T_2 = 0U;
        }
    } else {
        vlSelf->__PVT__regIdxWire_0 = 0U;
        vlSelf->__PVT__regIdxWire_1 = 0U;
        vlSelf->__PVT__regIdxWire_2 = 0U;
        __PVT___io_outArbiterIO_0_bits_bankID_T_2 = 0U;
    }
    vlSelf->__PVT__imm_io_out = ((6U == (IData)(vlSelf->__PVT__imm_io_sel))
                                  ? (((- (IData)((1U 
                                                  & (vlSelf->__PVT__imm_io_inst 
                                                     >> 0x13U)))) 
                                      << 5U) | (0x1fU 
                                                & (vlSelf->__PVT__imm_io_inst 
                                                   >> 0xfU)))
                                  : ((7U == (IData)(vlSelf->__PVT__imm_io_sel))
                                      ? (0x1fU & (vlSelf->__PVT__imm_io_inst 
                                                  >> 0xfU))
                                      : ((4U == (IData)(vlSelf->__PVT__imm_io_sel))
                                          ? (((- (IData)(
                                                         (1U 
                                                          & (vlSelf->__PVT__imm_io_inst 
                                                             >> 0x18U)))) 
                                              << 5U) 
                                             | (0x1fU 
                                                & (vlSelf->__PVT__imm_io_inst 
                                                   >> 0x14U)))
                                          : ((3U == (IData)(vlSelf->__PVT__imm_io_sel))
                                              ? (0xfffff000U 
                                                 & vlSelf->__PVT__imm_io_inst)
                                              : (((- (IData)(
                                                             (1U 
                                                              & (__PVT__imm__DOT___out_T_7 
                                                                 >> 0x14U)))) 
                                                  << 0x15U) 
                                                 | __PVT__imm__DOT___out_T_7)))));
    if (__PVT___io_outArbiterIO_0_bits_bankID_T_2) {
        if ((0U == (IData)(vlSelf->__PVT__state))) {
            if (vlSelf->__PVT___io_outArbiterIO_0_bits_bankID_T) {
                vlSelf->__PVT__io_outArbiterIO_0_bits_rsType 
                    = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_io_control_bits_sel_alu1;
                vlSelf->__PVT__io_outArbiterIO_1_bits_rsType 
                    = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_io_control_bits_sel_alu2;
                vlSelf->__PVT__io_outArbiterIO_2_bits_rsType 
                    = vlSelf->__PVT___rsTypeWire_2_T_8;
            } else {
                vlSelf->__PVT__io_outArbiterIO_0_bits_rsType = 0U;
                vlSelf->__PVT__io_outArbiterIO_1_bits_rsType = 0U;
                vlSelf->__PVT__io_outArbiterIO_2_bits_rsType = 0U;
            }
        } else {
            vlSelf->__PVT__io_outArbiterIO_0_bits_rsType = 0U;
            vlSelf->__PVT__io_outArbiterIO_1_bits_rsType = 0U;
            vlSelf->__PVT__io_outArbiterIO_2_bits_rsType = 0U;
        }
        __PVT___io_outArbiterIO_0_bits_rsAddr_T_3 = vlSelf->__PVT__regIdxWire_0;
        __PVT___io_outArbiterIO_1_bits_rsAddr_T_3 = vlSelf->__PVT__regIdxWire_1;
        __PVT___io_outArbiterIO_2_bits_rsAddr_T_3 = vlSelf->__PVT__regIdxWire_2;
        __PVT___io_outArbiterIO_3_bits_bankID_T_7 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_io_control_bits_wid;
        __PVT___io_outArbiterIO_0_bits_bankID_T_7 = 
            (0x1fU & ((IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_io_control_bits_wid) 
                      + (IData)(vlSelf->__PVT__regIdxWire_0)));
        __PVT___io_outArbiterIO_1_bits_bankID_T_7 = 
            (0x1fU & ((IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_io_control_bits_wid) 
                      + (IData)(vlSelf->__PVT__regIdxWire_1)));
        __PVT___io_outArbiterIO_2_bits_bankID_T_7 = 
            (0x1fU & ((IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_io_control_bits_wid) 
                      + (IData)(vlSelf->__PVT__regIdxWire_2)));
        vlSelf->__PVT___io_outArbiterIO_0_bits_rsAddr_T_69 
            = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_io_control_bits_wid;
    } else {
        vlSelf->__PVT__io_outArbiterIO_0_bits_rsType 
            = vlSelf->__PVT__rsType_0;
        vlSelf->__PVT__io_outArbiterIO_1_bits_rsType 
            = vlSelf->__PVT__rsType_1;
        vlSelf->__PVT__io_outArbiterIO_2_bits_rsType 
            = vlSelf->__PVT__rsType_2;
        __PVT___io_outArbiterIO_0_bits_rsAddr_T_3 = vlSelf->__PVT__regIdx_0;
        __PVT___io_outArbiterIO_1_bits_rsAddr_T_3 = vlSelf->__PVT__regIdx_1;
        __PVT___io_outArbiterIO_2_bits_rsAddr_T_3 = vlSelf->__PVT__regIdx_2;
        __PVT___io_outArbiterIO_3_bits_bankID_T_7 = vlSelf->__PVT__controlReg_wid;
        __PVT___io_outArbiterIO_0_bits_bankID_T_7 = 
            (0x1fU & ((IData)(vlSelf->__PVT__controlReg_wid) 
                      + (IData)(vlSelf->__PVT__regIdx_0)));
        __PVT___io_outArbiterIO_1_bits_bankID_T_7 = 
            (0x1fU & ((IData)(vlSelf->__PVT__controlReg_wid) 
                      + (IData)(vlSelf->__PVT__regIdx_1)));
        __PVT___io_outArbiterIO_2_bits_bankID_T_7 = 
            (0x1fU & ((IData)(vlSelf->__PVT__controlReg_wid) 
                      + (IData)(vlSelf->__PVT__regIdx_2)));
        vlSelf->__PVT___io_outArbiterIO_0_bits_rsAddr_T_69 
            = vlSelf->__PVT__controlReg_wid;
    }
    vlSelf->__PVT___rsReg_2_0_T_1 = (vlSelf->__PVT__imm_io_out 
                                     + vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_io_control_bits_pc);
    __PVT___io_outArbiterIO_0_bits_rsAddr_T_51 = ((0x18U 
                                                   == (IData)(__PVT___io_outArbiterIO_0_bits_rsAddr_T_3))
                                                   ? 6U
                                                   : 
                                                  ((0x17U 
                                                    == (IData)(__PVT___io_outArbiterIO_0_bits_rsAddr_T_3))
                                                    ? 5U
                                                    : 
                                                   ((0x16U 
                                                     == (IData)(__PVT___io_outArbiterIO_0_bits_rsAddr_T_3))
                                                     ? 5U
                                                     : 
                                                    ((0x15U 
                                                      == (IData)(__PVT___io_outArbiterIO_0_bits_rsAddr_T_3))
                                                      ? 5U
                                                      : 
                                                     ((0x14U 
                                                       == (IData)(__PVT___io_outArbiterIO_0_bits_rsAddr_T_3))
                                                       ? 5U
                                                       : 
                                                      ((0x13U 
                                                        == (IData)(__PVT___io_outArbiterIO_0_bits_rsAddr_T_3))
                                                        ? 4U
                                                        : 
                                                       ((0x12U 
                                                         == (IData)(__PVT___io_outArbiterIO_0_bits_rsAddr_T_3))
                                                         ? 4U
                                                         : 
                                                        ((0x11U 
                                                          == (IData)(__PVT___io_outArbiterIO_0_bits_rsAddr_T_3))
                                                          ? 4U
                                                          : 
                                                         ((0x10U 
                                                           == (IData)(__PVT___io_outArbiterIO_0_bits_rsAddr_T_3))
                                                           ? 4U
                                                           : 
                                                          ((0xfU 
                                                            == (IData)(__PVT___io_outArbiterIO_0_bits_rsAddr_T_3))
                                                            ? 3U
                                                            : 
                                                           ((0xeU 
                                                             == (IData)(__PVT___io_outArbiterIO_0_bits_rsAddr_T_3))
                                                             ? 3U
                                                             : 
                                                            ((0xdU 
                                                              == (IData)(__PVT___io_outArbiterIO_0_bits_rsAddr_T_3))
                                                              ? 3U
                                                              : 
                                                             ((0xcU 
                                                               == (IData)(__PVT___io_outArbiterIO_0_bits_rsAddr_T_3))
                                                               ? 3U
                                                               : 
                                                              ((0xbU 
                                                                == (IData)(__PVT___io_outArbiterIO_0_bits_rsAddr_T_3))
                                                                ? 2U
                                                                : 
                                                               ((0xaU 
                                                                 == (IData)(__PVT___io_outArbiterIO_0_bits_rsAddr_T_3))
                                                                 ? 2U
                                                                 : 
                                                                ((9U 
                                                                  == (IData)(__PVT___io_outArbiterIO_0_bits_rsAddr_T_3))
                                                                  ? 2U
                                                                  : 
                                                                 ((8U 
                                                                   == (IData)(__PVT___io_outArbiterIO_0_bits_rsAddr_T_3))
                                                                   ? 2U
                                                                   : 
                                                                  ((7U 
                                                                    == (IData)(__PVT___io_outArbiterIO_0_bits_rsAddr_T_3)) 
                                                                   | ((6U 
                                                                       == (IData)(__PVT___io_outArbiterIO_0_bits_rsAddr_T_3)) 
                                                                      | ((5U 
                                                                          == (IData)(__PVT___io_outArbiterIO_0_bits_rsAddr_T_3)) 
                                                                         | (4U 
                                                                            == (IData)(__PVT___io_outArbiterIO_0_bits_rsAddr_T_3))))))))))))))))))))));
    __PVT___io_outArbiterIO_1_bits_rsAddr_T_51 = ((0x18U 
                                                   == (IData)(__PVT___io_outArbiterIO_1_bits_rsAddr_T_3))
                                                   ? 6U
                                                   : 
                                                  ((0x17U 
                                                    == (IData)(__PVT___io_outArbiterIO_1_bits_rsAddr_T_3))
                                                    ? 5U
                                                    : 
                                                   ((0x16U 
                                                     == (IData)(__PVT___io_outArbiterIO_1_bits_rsAddr_T_3))
                                                     ? 5U
                                                     : 
                                                    ((0x15U 
                                                      == (IData)(__PVT___io_outArbiterIO_1_bits_rsAddr_T_3))
                                                      ? 5U
                                                      : 
                                                     ((0x14U 
                                                       == (IData)(__PVT___io_outArbiterIO_1_bits_rsAddr_T_3))
                                                       ? 5U
                                                       : 
                                                      ((0x13U 
                                                        == (IData)(__PVT___io_outArbiterIO_1_bits_rsAddr_T_3))
                                                        ? 4U
                                                        : 
                                                       ((0x12U 
                                                         == (IData)(__PVT___io_outArbiterIO_1_bits_rsAddr_T_3))
                                                         ? 4U
                                                         : 
                                                        ((0x11U 
                                                          == (IData)(__PVT___io_outArbiterIO_1_bits_rsAddr_T_3))
                                                          ? 4U
                                                          : 
                                                         ((0x10U 
                                                           == (IData)(__PVT___io_outArbiterIO_1_bits_rsAddr_T_3))
                                                           ? 4U
                                                           : 
                                                          ((0xfU 
                                                            == (IData)(__PVT___io_outArbiterIO_1_bits_rsAddr_T_3))
                                                            ? 3U
                                                            : 
                                                           ((0xeU 
                                                             == (IData)(__PVT___io_outArbiterIO_1_bits_rsAddr_T_3))
                                                             ? 3U
                                                             : 
                                                            ((0xdU 
                                                              == (IData)(__PVT___io_outArbiterIO_1_bits_rsAddr_T_3))
                                                              ? 3U
                                                              : 
                                                             ((0xcU 
                                                               == (IData)(__PVT___io_outArbiterIO_1_bits_rsAddr_T_3))
                                                               ? 3U
                                                               : 
                                                              ((0xbU 
                                                                == (IData)(__PVT___io_outArbiterIO_1_bits_rsAddr_T_3))
                                                                ? 2U
                                                                : 
                                                               ((0xaU 
                                                                 == (IData)(__PVT___io_outArbiterIO_1_bits_rsAddr_T_3))
                                                                 ? 2U
                                                                 : 
                                                                ((9U 
                                                                  == (IData)(__PVT___io_outArbiterIO_1_bits_rsAddr_T_3))
                                                                  ? 2U
                                                                  : 
                                                                 ((8U 
                                                                   == (IData)(__PVT___io_outArbiterIO_1_bits_rsAddr_T_3))
                                                                   ? 2U
                                                                   : 
                                                                  ((7U 
                                                                    == (IData)(__PVT___io_outArbiterIO_1_bits_rsAddr_T_3)) 
                                                                   | ((6U 
                                                                       == (IData)(__PVT___io_outArbiterIO_1_bits_rsAddr_T_3)) 
                                                                      | ((5U 
                                                                          == (IData)(__PVT___io_outArbiterIO_1_bits_rsAddr_T_3)) 
                                                                         | (4U 
                                                                            == (IData)(__PVT___io_outArbiterIO_1_bits_rsAddr_T_3))))))))))))))))))))));
    __PVT___io_outArbiterIO_2_bits_rsAddr_T_51 = ((0x18U 
                                                   == (IData)(__PVT___io_outArbiterIO_2_bits_rsAddr_T_3))
                                                   ? 6U
                                                   : 
                                                  ((0x17U 
                                                    == (IData)(__PVT___io_outArbiterIO_2_bits_rsAddr_T_3))
                                                    ? 5U
                                                    : 
                                                   ((0x16U 
                                                     == (IData)(__PVT___io_outArbiterIO_2_bits_rsAddr_T_3))
                                                     ? 5U
                                                     : 
                                                    ((0x15U 
                                                      == (IData)(__PVT___io_outArbiterIO_2_bits_rsAddr_T_3))
                                                      ? 5U
                                                      : 
                                                     ((0x14U 
                                                       == (IData)(__PVT___io_outArbiterIO_2_bits_rsAddr_T_3))
                                                       ? 5U
                                                       : 
                                                      ((0x13U 
                                                        == (IData)(__PVT___io_outArbiterIO_2_bits_rsAddr_T_3))
                                                        ? 4U
                                                        : 
                                                       ((0x12U 
                                                         == (IData)(__PVT___io_outArbiterIO_2_bits_rsAddr_T_3))
                                                         ? 4U
                                                         : 
                                                        ((0x11U 
                                                          == (IData)(__PVT___io_outArbiterIO_2_bits_rsAddr_T_3))
                                                          ? 4U
                                                          : 
                                                         ((0x10U 
                                                           == (IData)(__PVT___io_outArbiterIO_2_bits_rsAddr_T_3))
                                                           ? 4U
                                                           : 
                                                          ((0xfU 
                                                            == (IData)(__PVT___io_outArbiterIO_2_bits_rsAddr_T_3))
                                                            ? 3U
                                                            : 
                                                           ((0xeU 
                                                             == (IData)(__PVT___io_outArbiterIO_2_bits_rsAddr_T_3))
                                                             ? 3U
                                                             : 
                                                            ((0xdU 
                                                              == (IData)(__PVT___io_outArbiterIO_2_bits_rsAddr_T_3))
                                                              ? 3U
                                                              : 
                                                             ((0xcU 
                                                               == (IData)(__PVT___io_outArbiterIO_2_bits_rsAddr_T_3))
                                                               ? 3U
                                                               : 
                                                              ((0xbU 
                                                                == (IData)(__PVT___io_outArbiterIO_2_bits_rsAddr_T_3))
                                                                ? 2U
                                                                : 
                                                               ((0xaU 
                                                                 == (IData)(__PVT___io_outArbiterIO_2_bits_rsAddr_T_3))
                                                                 ? 2U
                                                                 : 
                                                                ((9U 
                                                                  == (IData)(__PVT___io_outArbiterIO_2_bits_rsAddr_T_3))
                                                                  ? 2U
                                                                  : 
                                                                 ((8U 
                                                                   == (IData)(__PVT___io_outArbiterIO_2_bits_rsAddr_T_3))
                                                                   ? 2U
                                                                   : 
                                                                  ((7U 
                                                                    == (IData)(__PVT___io_outArbiterIO_2_bits_rsAddr_T_3)) 
                                                                   | ((6U 
                                                                       == (IData)(__PVT___io_outArbiterIO_2_bits_rsAddr_T_3)) 
                                                                      | ((5U 
                                                                          == (IData)(__PVT___io_outArbiterIO_2_bits_rsAddr_T_3)) 
                                                                         | (4U 
                                                                            == (IData)(__PVT___io_outArbiterIO_2_bits_rsAddr_T_3))))))))))))))))))))));
    __PVT___io_outArbiterIO_3_bits_bankID_T_49 = ((0x15U 
                                                   == (IData)(__PVT___io_outArbiterIO_3_bits_bankID_T_7))
                                                   ? 1U
                                                   : 
                                                  ((0x14U 
                                                    == (IData)(__PVT___io_outArbiterIO_3_bits_bankID_T_7))
                                                    ? 0U
                                                    : 
                                                   ((0x13U 
                                                     == (IData)(__PVT___io_outArbiterIO_3_bits_bankID_T_7))
                                                     ? 3U
                                                     : 
                                                    ((0x12U 
                                                      == (IData)(__PVT___io_outArbiterIO_3_bits_bankID_T_7))
                                                      ? 2U
                                                      : 
                                                     ((0x11U 
                                                       == (IData)(__PVT___io_outArbiterIO_3_bits_bankID_T_7))
                                                       ? 1U
                                                       : 
                                                      ((0x10U 
                                                        == (IData)(__PVT___io_outArbiterIO_3_bits_bankID_T_7))
                                                        ? 0U
                                                        : 
                                                       ((0xfU 
                                                         == (IData)(__PVT___io_outArbiterIO_3_bits_bankID_T_7))
                                                         ? 3U
                                                         : 
                                                        ((0xeU 
                                                          == (IData)(__PVT___io_outArbiterIO_3_bits_bankID_T_7))
                                                          ? 2U
                                                          : 
                                                         ((0xdU 
                                                           == (IData)(__PVT___io_outArbiterIO_3_bits_bankID_T_7))
                                                           ? 1U
                                                           : 
                                                          ((0xcU 
                                                            == (IData)(__PVT___io_outArbiterIO_3_bits_bankID_T_7))
                                                            ? 0U
                                                            : 
                                                           ((0xbU 
                                                             == (IData)(__PVT___io_outArbiterIO_3_bits_bankID_T_7))
                                                             ? 3U
                                                             : 
                                                            ((0xaU 
                                                              == (IData)(__PVT___io_outArbiterIO_3_bits_bankID_T_7))
                                                              ? 2U
                                                              : 
                                                             ((9U 
                                                               == (IData)(__PVT___io_outArbiterIO_3_bits_bankID_T_7))
                                                               ? 1U
                                                               : 
                                                              ((8U 
                                                                == (IData)(__PVT___io_outArbiterIO_3_bits_bankID_T_7))
                                                                ? 0U
                                                                : 
                                                               ((7U 
                                                                 == (IData)(__PVT___io_outArbiterIO_3_bits_bankID_T_7))
                                                                 ? 3U
                                                                 : 
                                                                ((6U 
                                                                  == (IData)(__PVT___io_outArbiterIO_3_bits_bankID_T_7))
                                                                  ? 2U
                                                                  : 
                                                                 ((5U 
                                                                   == (IData)(__PVT___io_outArbiterIO_3_bits_bankID_T_7))
                                                                   ? 1U
                                                                   : 
                                                                  ((4U 
                                                                    == (IData)(__PVT___io_outArbiterIO_3_bits_bankID_T_7))
                                                                    ? 0U
                                                                    : 
                                                                   ((3U 
                                                                     == (IData)(__PVT___io_outArbiterIO_3_bits_bankID_T_7))
                                                                     ? 3U
                                                                     : 
                                                                    ((2U 
                                                                      == (IData)(__PVT___io_outArbiterIO_3_bits_bankID_T_7))
                                                                      ? 2U
                                                                      : 
                                                                     (1U 
                                                                      == (IData)(__PVT___io_outArbiterIO_3_bits_bankID_T_7))))))))))))))))))))));
    __PVT___io_outArbiterIO_0_bits_bankID_T_49 = ((0x15U 
                                                   == (IData)(__PVT___io_outArbiterIO_0_bits_bankID_T_7))
                                                   ? 1U
                                                   : 
                                                  ((0x14U 
                                                    == (IData)(__PVT___io_outArbiterIO_0_bits_bankID_T_7))
                                                    ? 0U
                                                    : 
                                                   ((0x13U 
                                                     == (IData)(__PVT___io_outArbiterIO_0_bits_bankID_T_7))
                                                     ? 3U
                                                     : 
                                                    ((0x12U 
                                                      == (IData)(__PVT___io_outArbiterIO_0_bits_bankID_T_7))
                                                      ? 2U
                                                      : 
                                                     ((0x11U 
                                                       == (IData)(__PVT___io_outArbiterIO_0_bits_bankID_T_7))
                                                       ? 1U
                                                       : 
                                                      ((0x10U 
                                                        == (IData)(__PVT___io_outArbiterIO_0_bits_bankID_T_7))
                                                        ? 0U
                                                        : 
                                                       ((0xfU 
                                                         == (IData)(__PVT___io_outArbiterIO_0_bits_bankID_T_7))
                                                         ? 3U
                                                         : 
                                                        ((0xeU 
                                                          == (IData)(__PVT___io_outArbiterIO_0_bits_bankID_T_7))
                                                          ? 2U
                                                          : 
                                                         ((0xdU 
                                                           == (IData)(__PVT___io_outArbiterIO_0_bits_bankID_T_7))
                                                           ? 1U
                                                           : 
                                                          ((0xcU 
                                                            == (IData)(__PVT___io_outArbiterIO_0_bits_bankID_T_7))
                                                            ? 0U
                                                            : 
                                                           ((0xbU 
                                                             == (IData)(__PVT___io_outArbiterIO_0_bits_bankID_T_7))
                                                             ? 3U
                                                             : 
                                                            ((0xaU 
                                                              == (IData)(__PVT___io_outArbiterIO_0_bits_bankID_T_7))
                                                              ? 2U
                                                              : 
                                                             ((9U 
                                                               == (IData)(__PVT___io_outArbiterIO_0_bits_bankID_T_7))
                                                               ? 1U
                                                               : 
                                                              ((8U 
                                                                == (IData)(__PVT___io_outArbiterIO_0_bits_bankID_T_7))
                                                                ? 0U
                                                                : 
                                                               ((7U 
                                                                 == (IData)(__PVT___io_outArbiterIO_0_bits_bankID_T_7))
                                                                 ? 3U
                                                                 : 
                                                                ((6U 
                                                                  == (IData)(__PVT___io_outArbiterIO_0_bits_bankID_T_7))
                                                                  ? 2U
                                                                  : 
                                                                 ((5U 
                                                                   == (IData)(__PVT___io_outArbiterIO_0_bits_bankID_T_7))
                                                                   ? 1U
                                                                   : 
                                                                  ((4U 
                                                                    == (IData)(__PVT___io_outArbiterIO_0_bits_bankID_T_7))
                                                                    ? 0U
                                                                    : 
                                                                   ((3U 
                                                                     == (IData)(__PVT___io_outArbiterIO_0_bits_bankID_T_7))
                                                                     ? 3U
                                                                     : 
                                                                    ((2U 
                                                                      == (IData)(__PVT___io_outArbiterIO_0_bits_bankID_T_7))
                                                                      ? 2U
                                                                      : 
                                                                     (1U 
                                                                      == (IData)(__PVT___io_outArbiterIO_0_bits_bankID_T_7))))))))))))))))))))));
    __PVT___io_outArbiterIO_1_bits_bankID_T_49 = ((0x15U 
                                                   == (IData)(__PVT___io_outArbiterIO_1_bits_bankID_T_7))
                                                   ? 1U
                                                   : 
                                                  ((0x14U 
                                                    == (IData)(__PVT___io_outArbiterIO_1_bits_bankID_T_7))
                                                    ? 0U
                                                    : 
                                                   ((0x13U 
                                                     == (IData)(__PVT___io_outArbiterIO_1_bits_bankID_T_7))
                                                     ? 3U
                                                     : 
                                                    ((0x12U 
                                                      == (IData)(__PVT___io_outArbiterIO_1_bits_bankID_T_7))
                                                      ? 2U
                                                      : 
                                                     ((0x11U 
                                                       == (IData)(__PVT___io_outArbiterIO_1_bits_bankID_T_7))
                                                       ? 1U
                                                       : 
                                                      ((0x10U 
                                                        == (IData)(__PVT___io_outArbiterIO_1_bits_bankID_T_7))
                                                        ? 0U
                                                        : 
                                                       ((0xfU 
                                                         == (IData)(__PVT___io_outArbiterIO_1_bits_bankID_T_7))
                                                         ? 3U
                                                         : 
                                                        ((0xeU 
                                                          == (IData)(__PVT___io_outArbiterIO_1_bits_bankID_T_7))
                                                          ? 2U
                                                          : 
                                                         ((0xdU 
                                                           == (IData)(__PVT___io_outArbiterIO_1_bits_bankID_T_7))
                                                           ? 1U
                                                           : 
                                                          ((0xcU 
                                                            == (IData)(__PVT___io_outArbiterIO_1_bits_bankID_T_7))
                                                            ? 0U
                                                            : 
                                                           ((0xbU 
                                                             == (IData)(__PVT___io_outArbiterIO_1_bits_bankID_T_7))
                                                             ? 3U
                                                             : 
                                                            ((0xaU 
                                                              == (IData)(__PVT___io_outArbiterIO_1_bits_bankID_T_7))
                                                              ? 2U
                                                              : 
                                                             ((9U 
                                                               == (IData)(__PVT___io_outArbiterIO_1_bits_bankID_T_7))
                                                               ? 1U
                                                               : 
                                                              ((8U 
                                                                == (IData)(__PVT___io_outArbiterIO_1_bits_bankID_T_7))
                                                                ? 0U
                                                                : 
                                                               ((7U 
                                                                 == (IData)(__PVT___io_outArbiterIO_1_bits_bankID_T_7))
                                                                 ? 3U
                                                                 : 
                                                                ((6U 
                                                                  == (IData)(__PVT___io_outArbiterIO_1_bits_bankID_T_7))
                                                                  ? 2U
                                                                  : 
                                                                 ((5U 
                                                                   == (IData)(__PVT___io_outArbiterIO_1_bits_bankID_T_7))
                                                                   ? 1U
                                                                   : 
                                                                  ((4U 
                                                                    == (IData)(__PVT___io_outArbiterIO_1_bits_bankID_T_7))
                                                                    ? 0U
                                                                    : 
                                                                   ((3U 
                                                                     == (IData)(__PVT___io_outArbiterIO_1_bits_bankID_T_7))
                                                                     ? 3U
                                                                     : 
                                                                    ((2U 
                                                                      == (IData)(__PVT___io_outArbiterIO_1_bits_bankID_T_7))
                                                                      ? 2U
                                                                      : 
                                                                     (1U 
                                                                      == (IData)(__PVT___io_outArbiterIO_1_bits_bankID_T_7))))))))))))))))))))));
    __PVT___io_outArbiterIO_2_bits_bankID_T_49 = ((0x15U 
                                                   == (IData)(__PVT___io_outArbiterIO_2_bits_bankID_T_7))
                                                   ? 1U
                                                   : 
                                                  ((0x14U 
                                                    == (IData)(__PVT___io_outArbiterIO_2_bits_bankID_T_7))
                                                    ? 0U
                                                    : 
                                                   ((0x13U 
                                                     == (IData)(__PVT___io_outArbiterIO_2_bits_bankID_T_7))
                                                     ? 3U
                                                     : 
                                                    ((0x12U 
                                                      == (IData)(__PVT___io_outArbiterIO_2_bits_bankID_T_7))
                                                      ? 2U
                                                      : 
                                                     ((0x11U 
                                                       == (IData)(__PVT___io_outArbiterIO_2_bits_bankID_T_7))
                                                       ? 1U
                                                       : 
                                                      ((0x10U 
                                                        == (IData)(__PVT___io_outArbiterIO_2_bits_bankID_T_7))
                                                        ? 0U
                                                        : 
                                                       ((0xfU 
                                                         == (IData)(__PVT___io_outArbiterIO_2_bits_bankID_T_7))
                                                         ? 3U
                                                         : 
                                                        ((0xeU 
                                                          == (IData)(__PVT___io_outArbiterIO_2_bits_bankID_T_7))
                                                          ? 2U
                                                          : 
                                                         ((0xdU 
                                                           == (IData)(__PVT___io_outArbiterIO_2_bits_bankID_T_7))
                                                           ? 1U
                                                           : 
                                                          ((0xcU 
                                                            == (IData)(__PVT___io_outArbiterIO_2_bits_bankID_T_7))
                                                            ? 0U
                                                            : 
                                                           ((0xbU 
                                                             == (IData)(__PVT___io_outArbiterIO_2_bits_bankID_T_7))
                                                             ? 3U
                                                             : 
                                                            ((0xaU 
                                                              == (IData)(__PVT___io_outArbiterIO_2_bits_bankID_T_7))
                                                              ? 2U
                                                              : 
                                                             ((9U 
                                                               == (IData)(__PVT___io_outArbiterIO_2_bits_bankID_T_7))
                                                               ? 1U
                                                               : 
                                                              ((8U 
                                                                == (IData)(__PVT___io_outArbiterIO_2_bits_bankID_T_7))
                                                                ? 0U
                                                                : 
                                                               ((7U 
                                                                 == (IData)(__PVT___io_outArbiterIO_2_bits_bankID_T_7))
                                                                 ? 3U
                                                                 : 
                                                                ((6U 
                                                                  == (IData)(__PVT___io_outArbiterIO_2_bits_bankID_T_7))
                                                                  ? 2U
                                                                  : 
                                                                 ((5U 
                                                                   == (IData)(__PVT___io_outArbiterIO_2_bits_bankID_T_7))
                                                                   ? 1U
                                                                   : 
                                                                  ((4U 
                                                                    == (IData)(__PVT___io_outArbiterIO_2_bits_bankID_T_7))
                                                                    ? 0U
                                                                    : 
                                                                   ((3U 
                                                                     == (IData)(__PVT___io_outArbiterIO_2_bits_bankID_T_7))
                                                                     ? 3U
                                                                     : 
                                                                    ((2U 
                                                                      == (IData)(__PVT___io_outArbiterIO_2_bits_bankID_T_7))
                                                                      ? 2U
                                                                      : 
                                                                     (1U 
                                                                      == (IData)(__PVT___io_outArbiterIO_2_bits_bankID_T_7))))))))))))))))))))));
    vlSelf->__PVT___io_outArbiterIO_0_bits_rsAddr_T_72 
        = (0x3fU & (((0x1fU == (IData)(__PVT___io_outArbiterIO_0_bits_rsAddr_T_3))
                      ? 7U : ((0x1eU == (IData)(__PVT___io_outArbiterIO_0_bits_rsAddr_T_3))
                               ? 7U : ((0x1dU == (IData)(__PVT___io_outArbiterIO_0_bits_rsAddr_T_3))
                                        ? 7U : ((0x1cU 
                                                 == (IData)(__PVT___io_outArbiterIO_0_bits_rsAddr_T_3))
                                                 ? 7U
                                                 : 
                                                ((0x1bU 
                                                  == (IData)(__PVT___io_outArbiterIO_0_bits_rsAddr_T_3))
                                                  ? 6U
                                                  : 
                                                 ((0x1aU 
                                                   == (IData)(__PVT___io_outArbiterIO_0_bits_rsAddr_T_3))
                                                   ? 6U
                                                   : 
                                                  ((0x19U 
                                                    == (IData)(__PVT___io_outArbiterIO_0_bits_rsAddr_T_3))
                                                    ? 6U
                                                    : (IData)(__PVT___io_outArbiterIO_0_bits_rsAddr_T_51)))))))) 
                    + ((IData)(vlSelf->__PVT___io_outArbiterIO_0_bits_rsAddr_T_69) 
                       << 3U)));
    vlSelf->__PVT___io_outArbiterIO_1_bits_rsAddr_T_72 
        = (0x3fU & (((0x1fU == (IData)(__PVT___io_outArbiterIO_1_bits_rsAddr_T_3))
                      ? 7U : ((0x1eU == (IData)(__PVT___io_outArbiterIO_1_bits_rsAddr_T_3))
                               ? 7U : ((0x1dU == (IData)(__PVT___io_outArbiterIO_1_bits_rsAddr_T_3))
                                        ? 7U : ((0x1cU 
                                                 == (IData)(__PVT___io_outArbiterIO_1_bits_rsAddr_T_3))
                                                 ? 7U
                                                 : 
                                                ((0x1bU 
                                                  == (IData)(__PVT___io_outArbiterIO_1_bits_rsAddr_T_3))
                                                  ? 6U
                                                  : 
                                                 ((0x1aU 
                                                   == (IData)(__PVT___io_outArbiterIO_1_bits_rsAddr_T_3))
                                                   ? 6U
                                                   : 
                                                  ((0x19U 
                                                    == (IData)(__PVT___io_outArbiterIO_1_bits_rsAddr_T_3))
                                                    ? 6U
                                                    : (IData)(__PVT___io_outArbiterIO_1_bits_rsAddr_T_51)))))))) 
                    + ((IData)(vlSelf->__PVT___io_outArbiterIO_0_bits_rsAddr_T_69) 
                       << 3U)));
    vlSelf->__PVT___io_outArbiterIO_2_bits_rsAddr_T_72 
        = (0x3fU & (((0x1fU == (IData)(__PVT___io_outArbiterIO_2_bits_rsAddr_T_3))
                      ? 7U : ((0x1eU == (IData)(__PVT___io_outArbiterIO_2_bits_rsAddr_T_3))
                               ? 7U : ((0x1dU == (IData)(__PVT___io_outArbiterIO_2_bits_rsAddr_T_3))
                                        ? 7U : ((0x1cU 
                                                 == (IData)(__PVT___io_outArbiterIO_2_bits_rsAddr_T_3))
                                                 ? 7U
                                                 : 
                                                ((0x1bU 
                                                  == (IData)(__PVT___io_outArbiterIO_2_bits_rsAddr_T_3))
                                                  ? 6U
                                                  : 
                                                 ((0x1aU 
                                                   == (IData)(__PVT___io_outArbiterIO_2_bits_rsAddr_T_3))
                                                   ? 6U
                                                   : 
                                                  ((0x19U 
                                                    == (IData)(__PVT___io_outArbiterIO_2_bits_rsAddr_T_3))
                                                    ? 6U
                                                    : (IData)(__PVT___io_outArbiterIO_2_bits_rsAddr_T_51)))))))) 
                    + ((IData)(vlSelf->__PVT___io_outArbiterIO_0_bits_rsAddr_T_69) 
                       << 3U)));
    vlSelf->__PVT__io_outArbiterIO_3_bits_bankID = 
        ((0x1fU == (IData)(__PVT___io_outArbiterIO_3_bits_bankID_T_7))
          ? 3U : ((0x1eU == (IData)(__PVT___io_outArbiterIO_3_bits_bankID_T_7))
                   ? 2U : ((0x1dU == (IData)(__PVT___io_outArbiterIO_3_bits_bankID_T_7))
                            ? 1U : ((0x1cU == (IData)(__PVT___io_outArbiterIO_3_bits_bankID_T_7))
                                     ? 0U : ((0x1bU 
                                              == (IData)(__PVT___io_outArbiterIO_3_bits_bankID_T_7))
                                              ? 3U : 
                                             ((0x1aU 
                                               == (IData)(__PVT___io_outArbiterIO_3_bits_bankID_T_7))
                                               ? 2U
                                               : ((0x19U 
                                                   == (IData)(__PVT___io_outArbiterIO_3_bits_bankID_T_7))
                                                   ? 1U
                                                   : 
                                                  ((0x18U 
                                                    == (IData)(__PVT___io_outArbiterIO_3_bits_bankID_T_7))
                                                    ? 0U
                                                    : 
                                                   ((0x17U 
                                                     == (IData)(__PVT___io_outArbiterIO_3_bits_bankID_T_7))
                                                     ? 3U
                                                     : 
                                                    ((0x16U 
                                                      == (IData)(__PVT___io_outArbiterIO_3_bits_bankID_T_7))
                                                      ? 2U
                                                      : (IData)(__PVT___io_outArbiterIO_3_bits_bankID_T_49)))))))))));
    vlSelf->__PVT__io_outArbiterIO_0_bits_bankID = 
        ((0x1fU == (IData)(__PVT___io_outArbiterIO_0_bits_bankID_T_7))
          ? 3U : ((0x1eU == (IData)(__PVT___io_outArbiterIO_0_bits_bankID_T_7))
                   ? 2U : ((0x1dU == (IData)(__PVT___io_outArbiterIO_0_bits_bankID_T_7))
                            ? 1U : ((0x1cU == (IData)(__PVT___io_outArbiterIO_0_bits_bankID_T_7))
                                     ? 0U : ((0x1bU 
                                              == (IData)(__PVT___io_outArbiterIO_0_bits_bankID_T_7))
                                              ? 3U : 
                                             ((0x1aU 
                                               == (IData)(__PVT___io_outArbiterIO_0_bits_bankID_T_7))
                                               ? 2U
                                               : ((0x19U 
                                                   == (IData)(__PVT___io_outArbiterIO_0_bits_bankID_T_7))
                                                   ? 1U
                                                   : 
                                                  ((0x18U 
                                                    == (IData)(__PVT___io_outArbiterIO_0_bits_bankID_T_7))
                                                    ? 0U
                                                    : 
                                                   ((0x17U 
                                                     == (IData)(__PVT___io_outArbiterIO_0_bits_bankID_T_7))
                                                     ? 3U
                                                     : 
                                                    ((0x16U 
                                                      == (IData)(__PVT___io_outArbiterIO_0_bits_bankID_T_7))
                                                      ? 2U
                                                      : (IData)(__PVT___io_outArbiterIO_0_bits_bankID_T_49)))))))))));
    vlSelf->__PVT__io_outArbiterIO_1_bits_bankID = 
        ((0x1fU == (IData)(__PVT___io_outArbiterIO_1_bits_bankID_T_7))
          ? 3U : ((0x1eU == (IData)(__PVT___io_outArbiterIO_1_bits_bankID_T_7))
                   ? 2U : ((0x1dU == (IData)(__PVT___io_outArbiterIO_1_bits_bankID_T_7))
                            ? 1U : ((0x1cU == (IData)(__PVT___io_outArbiterIO_1_bits_bankID_T_7))
                                     ? 0U : ((0x1bU 
                                              == (IData)(__PVT___io_outArbiterIO_1_bits_bankID_T_7))
                                              ? 3U : 
                                             ((0x1aU 
                                               == (IData)(__PVT___io_outArbiterIO_1_bits_bankID_T_7))
                                               ? 2U
                                               : ((0x19U 
                                                   == (IData)(__PVT___io_outArbiterIO_1_bits_bankID_T_7))
                                                   ? 1U
                                                   : 
                                                  ((0x18U 
                                                    == (IData)(__PVT___io_outArbiterIO_1_bits_bankID_T_7))
                                                    ? 0U
                                                    : 
                                                   ((0x17U 
                                                     == (IData)(__PVT___io_outArbiterIO_1_bits_bankID_T_7))
                                                     ? 3U
                                                     : 
                                                    ((0x16U 
                                                      == (IData)(__PVT___io_outArbiterIO_1_bits_bankID_T_7))
                                                      ? 2U
                                                      : (IData)(__PVT___io_outArbiterIO_1_bits_bankID_T_49)))))))))));
    vlSelf->__PVT__io_outArbiterIO_2_bits_bankID = 
        ((0x1fU == (IData)(__PVT___io_outArbiterIO_2_bits_bankID_T_7))
          ? 3U : ((0x1eU == (IData)(__PVT___io_outArbiterIO_2_bits_bankID_T_7))
                   ? 2U : ((0x1dU == (IData)(__PVT___io_outArbiterIO_2_bits_bankID_T_7))
                            ? 1U : ((0x1cU == (IData)(__PVT___io_outArbiterIO_2_bits_bankID_T_7))
                                     ? 0U : ((0x1bU 
                                              == (IData)(__PVT___io_outArbiterIO_2_bits_bankID_T_7))
                                              ? 3U : 
                                             ((0x1aU 
                                               == (IData)(__PVT___io_outArbiterIO_2_bits_bankID_T_7))
                                               ? 2U
                                               : ((0x19U 
                                                   == (IData)(__PVT___io_outArbiterIO_2_bits_bankID_T_7))
                                                   ? 1U
                                                   : 
                                                  ((0x18U 
                                                    == (IData)(__PVT___io_outArbiterIO_2_bits_bankID_T_7))
                                                    ? 0U
                                                    : 
                                                   ((0x17U 
                                                     == (IData)(__PVT___io_outArbiterIO_2_bits_bankID_T_7))
                                                     ? 3U
                                                     : 
                                                    ((0x16U 
                                                      == (IData)(__PVT___io_outArbiterIO_2_bits_bankID_T_7))
                                                      ? 2U
                                                      : (IData)(__PVT___io_outArbiterIO_2_bits_bankID_T_49)))))))))));
}

VL_ATTR_COLD void VVentus_collectorUnit___stl_sequent__TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__operand_collector__DOT__collectorUnit_3__2(VVentus_collectorUnit* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VVentus__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VVentus_collectorUnit___stl_sequent__TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__operand_collector__DOT__collectorUnit_3__2\n"); );
    // Init
    IData/*31:0*/ __PVT___T_26_0;
    IData/*31:0*/ __PVT___T_31_0;
    IData/*31:0*/ __PVT___T_36;
    IData/*31:0*/ __PVT___GEN_171;
    IData/*31:0*/ __PVT___GEN_172;
    IData/*31:0*/ __PVT___GEN_173;
    IData/*31:0*/ __PVT___GEN_174;
    IData/*31:0*/ __PVT___GEN_176;
    IData/*31:0*/ __PVT___GEN_177;
    IData/*31:0*/ __PVT___GEN_178;
    IData/*31:0*/ __PVT___GEN_179;
    IData/*31:0*/ __PVT___GEN_181;
    IData/*31:0*/ __PVT___GEN_182;
    IData/*31:0*/ __PVT___GEN_183;
    IData/*31:0*/ __PVT___GEN_184;
    IData/*31:0*/ __PVT___T_54_0;
    IData/*31:0*/ __PVT___T_59_0;
    IData/*31:0*/ __PVT___T_64;
    IData/*31:0*/ __PVT___GEN_241;
    IData/*31:0*/ __PVT___GEN_242;
    IData/*31:0*/ __PVT___GEN_243;
    IData/*31:0*/ __PVT___GEN_244;
    IData/*31:0*/ __PVT___GEN_246;
    IData/*31:0*/ __PVT___GEN_247;
    IData/*31:0*/ __PVT___GEN_248;
    IData/*31:0*/ __PVT___GEN_249;
    IData/*31:0*/ __PVT___GEN_251;
    IData/*31:0*/ __PVT___GEN_252;
    IData/*31:0*/ __PVT___GEN_253;
    IData/*31:0*/ __PVT___GEN_254;
    IData/*31:0*/ __PVT___T_82_0;
    IData/*31:0*/ __PVT___T_87_0;
    IData/*31:0*/ __PVT___T_92;
    IData/*31:0*/ __PVT___T_110_0;
    IData/*31:0*/ __PVT___T_115_0;
    IData/*31:0*/ __PVT___T_120;
    // Body
    if ((1U == (IData)(vlSelf->__PVT__rsType_0))) {
        __PVT___T_110_0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3_io_bankIn_3_bits_data_0;
        __PVT___T_82_0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3_io_bankIn_2_bits_data_0;
        __PVT___T_54_0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3_io_bankIn_1_bits_data_0;
        __PVT___T_26_0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3_io_bankIn_0_bits_data_0;
    } else {
        __PVT___T_110_0 = 0U;
        __PVT___T_82_0 = 0U;
        __PVT___T_54_0 = 0U;
        __PVT___T_26_0 = 0U;
    }
    if ((1U == (IData)(vlSelf->__PVT__rsType_1))) {
        __PVT___T_115_0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3_io_bankIn_3_bits_data_0;
        __PVT___T_87_0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3_io_bankIn_2_bits_data_0;
        __PVT___T_59_0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3_io_bankIn_1_bits_data_0;
        __PVT___T_31_0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3_io_bankIn_0_bits_data_0;
    } else {
        __PVT___T_115_0 = 0U;
        __PVT___T_87_0 = 0U;
        __PVT___T_59_0 = 0U;
        __PVT___T_31_0 = 0U;
    }
    __PVT___T_120 = (vlSelf->__PVT__imm_io_out + vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3_io_bankIn_3_bits_data_0);
    __PVT___T_92 = (vlSelf->__PVT__imm_io_out + vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3_io_bankIn_2_bits_data_0);
    __PVT___T_64 = (vlSelf->__PVT__imm_io_out + vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3_io_bankIn_1_bits_data_0);
    __PVT___T_36 = (vlSelf->__PVT__imm_io_out + vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3_io_bankIn_0_bits_data_0);
    if ((2U == (IData)(vlSelf->__PVT__rsType_0))) {
        vlSelf->__PVT___T_112_0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3_io_bankIn_3_bits_data_0;
        vlSelf->__PVT___T_112_1 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3_io_bankIn_3_bits_data_1;
        vlSelf->__PVT___T_112_2 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3_io_bankIn_3_bits_data_2;
        vlSelf->__PVT___T_112_3 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3_io_bankIn_3_bits_data_3;
    } else {
        vlSelf->__PVT___T_112_0 = __PVT___T_110_0;
        vlSelf->__PVT___T_112_1 = __PVT___T_110_0;
        vlSelf->__PVT___T_112_2 = __PVT___T_110_0;
        vlSelf->__PVT___T_112_3 = __PVT___T_110_0;
    }
    if ((2U == (IData)(vlSelf->__PVT__rsType_1))) {
        vlSelf->__PVT___T_117_0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3_io_bankIn_3_bits_data_0;
        vlSelf->__PVT___T_117_1 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3_io_bankIn_3_bits_data_1;
        vlSelf->__PVT___T_117_2 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3_io_bankIn_3_bits_data_2;
        vlSelf->__PVT___T_117_3 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3_io_bankIn_3_bits_data_3;
    } else {
        vlSelf->__PVT___T_117_0 = __PVT___T_115_0;
        vlSelf->__PVT___T_117_1 = __PVT___T_115_0;
        vlSelf->__PVT___T_117_2 = __PVT___T_115_0;
        vlSelf->__PVT___T_117_3 = __PVT___T_115_0;
    }
    if (vlSelf->__PVT___T_23) {
        if ((0U == (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3_io_bankIn_0_bits_regOrder))) {
            if ((2U == (IData)(vlSelf->__PVT__rsType_0))) {
                __PVT___GEN_171 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3_io_bankIn_0_bits_data_0;
                __PVT___GEN_172 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3_io_bankIn_0_bits_data_1;
                __PVT___GEN_173 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3_io_bankIn_0_bits_data_2;
                __PVT___GEN_174 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3_io_bankIn_0_bits_data_3;
            } else {
                __PVT___GEN_171 = __PVT___T_26_0;
                __PVT___GEN_172 = __PVT___T_26_0;
                __PVT___GEN_173 = __PVT___T_26_0;
                __PVT___GEN_174 = __PVT___T_26_0;
            }
            __PVT___GEN_176 = vlSelf->__PVT__rsReg_1_0;
            __PVT___GEN_177 = vlSelf->__PVT__rsReg_1_1;
            __PVT___GEN_178 = vlSelf->__PVT__rsReg_1_2;
            __PVT___GEN_179 = vlSelf->__PVT__rsReg_1_3;
            __PVT___GEN_181 = vlSelf->__PVT__rsReg_2_0;
            __PVT___GEN_182 = vlSelf->__PVT__rsReg_2_1;
            __PVT___GEN_183 = vlSelf->__PVT__rsReg_2_2;
            __PVT___GEN_184 = vlSelf->__PVT__rsReg_2_3;
        } else {
            __PVT___GEN_171 = vlSelf->__PVT__rsReg_0_0;
            __PVT___GEN_172 = vlSelf->__PVT__rsReg_0_1;
            __PVT___GEN_173 = vlSelf->__PVT__rsReg_0_2;
            __PVT___GEN_174 = vlSelf->__PVT__rsReg_0_3;
            if ((1U == (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3_io_bankIn_0_bits_regOrder))) {
                if ((2U == (IData)(vlSelf->__PVT__rsType_1))) {
                    __PVT___GEN_176 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3_io_bankIn_0_bits_data_0;
                    __PVT___GEN_177 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3_io_bankIn_0_bits_data_1;
                    __PVT___GEN_178 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3_io_bankIn_0_bits_data_2;
                    __PVT___GEN_179 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3_io_bankIn_0_bits_data_3;
                } else {
                    __PVT___GEN_176 = __PVT___T_31_0;
                    __PVT___GEN_177 = __PVT___T_31_0;
                    __PVT___GEN_178 = __PVT___T_31_0;
                    __PVT___GEN_179 = __PVT___T_31_0;
                }
                __PVT___GEN_181 = vlSelf->__PVT__rsReg_2_0;
                __PVT___GEN_182 = vlSelf->__PVT__rsReg_2_1;
                __PVT___GEN_183 = vlSelf->__PVT__rsReg_2_2;
                __PVT___GEN_184 = vlSelf->__PVT__rsReg_2_3;
            } else {
                __PVT___GEN_176 = vlSelf->__PVT__rsReg_1_0;
                __PVT___GEN_177 = vlSelf->__PVT__rsReg_1_1;
                __PVT___GEN_178 = vlSelf->__PVT__rsReg_1_2;
                __PVT___GEN_179 = vlSelf->__PVT__rsReg_1_3;
                if ((2U == (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3_io_bankIn_0_bits_regOrder))) {
                    if ((2U == (IData)(vlSelf->__PVT__controlReg_sel_alu3))) {
                        __PVT___GEN_181 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3_io_bankIn_0_bits_data_0;
                        __PVT___GEN_182 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3_io_bankIn_0_bits_data_0;
                        __PVT___GEN_183 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3_io_bankIn_0_bits_data_0;
                        __PVT___GEN_184 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3_io_bankIn_0_bits_data_0;
                    } else if ((3U == (IData)(vlSelf->__PVT__controlReg_sel_alu3))) {
                        __PVT___GEN_181 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3_io_bankIn_0_bits_data_0;
                        if (vlSelf->__PVT__controlReg_isvec) {
                            __PVT___GEN_182 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3_io_bankIn_0_bits_data_1;
                            __PVT___GEN_183 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3_io_bankIn_0_bits_data_2;
                            __PVT___GEN_184 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3_io_bankIn_0_bits_data_3;
                        } else {
                            __PVT___GEN_182 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3_io_bankIn_0_bits_data_0;
                            __PVT___GEN_183 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3_io_bankIn_0_bits_data_0;
                            __PVT___GEN_184 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3_io_bankIn_0_bits_data_0;
                        }
                    } else if ((1U == (IData)(vlSelf->__PVT__controlReg_sel_alu3))) {
                        __PVT___GEN_181 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3_io_bankIn_0_bits_data_0;
                        __PVT___GEN_182 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3_io_bankIn_0_bits_data_1;
                        __PVT___GEN_183 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3_io_bankIn_0_bits_data_2;
                        __PVT___GEN_184 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3_io_bankIn_0_bits_data_3;
                    } else {
                        __PVT___GEN_181 = __PVT___T_36;
                        __PVT___GEN_182 = __PVT___T_36;
                        __PVT___GEN_183 = __PVT___T_36;
                        __PVT___GEN_184 = __PVT___T_36;
                    }
                } else {
                    __PVT___GEN_181 = vlSelf->__PVT__rsReg_2_0;
                    __PVT___GEN_182 = vlSelf->__PVT__rsReg_2_1;
                    __PVT___GEN_183 = vlSelf->__PVT__rsReg_2_2;
                    __PVT___GEN_184 = vlSelf->__PVT__rsReg_2_3;
                }
            }
        }
    } else {
        __PVT___GEN_171 = vlSelf->__PVT__rsReg_0_0;
        __PVT___GEN_172 = vlSelf->__PVT__rsReg_0_1;
        __PVT___GEN_173 = vlSelf->__PVT__rsReg_0_2;
        __PVT___GEN_174 = vlSelf->__PVT__rsReg_0_3;
        __PVT___GEN_176 = vlSelf->__PVT__rsReg_1_0;
        __PVT___GEN_177 = vlSelf->__PVT__rsReg_1_1;
        __PVT___GEN_178 = vlSelf->__PVT__rsReg_1_2;
        __PVT___GEN_179 = vlSelf->__PVT__rsReg_1_3;
        __PVT___GEN_181 = vlSelf->__PVT__rsReg_2_0;
        __PVT___GEN_182 = vlSelf->__PVT__rsReg_2_1;
        __PVT___GEN_183 = vlSelf->__PVT__rsReg_2_2;
        __PVT___GEN_184 = vlSelf->__PVT__rsReg_2_3;
    }
    if (vlSelf->__PVT___T_51) {
        if ((0U == (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3_io_bankIn_1_bits_regOrder))) {
            if ((2U == (IData)(vlSelf->__PVT__rsType_0))) {
                __PVT___GEN_241 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3_io_bankIn_1_bits_data_0;
                __PVT___GEN_242 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3_io_bankIn_1_bits_data_1;
                __PVT___GEN_243 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3_io_bankIn_1_bits_data_2;
                __PVT___GEN_244 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3_io_bankIn_1_bits_data_3;
            } else {
                __PVT___GEN_241 = __PVT___T_54_0;
                __PVT___GEN_242 = __PVT___T_54_0;
                __PVT___GEN_243 = __PVT___T_54_0;
                __PVT___GEN_244 = __PVT___T_54_0;
            }
            __PVT___GEN_246 = __PVT___GEN_176;
            __PVT___GEN_247 = __PVT___GEN_177;
            __PVT___GEN_248 = __PVT___GEN_178;
            __PVT___GEN_249 = __PVT___GEN_179;
            __PVT___GEN_251 = __PVT___GEN_181;
            __PVT___GEN_252 = __PVT___GEN_182;
            __PVT___GEN_253 = __PVT___GEN_183;
            __PVT___GEN_254 = __PVT___GEN_184;
        } else {
            __PVT___GEN_241 = __PVT___GEN_171;
            __PVT___GEN_242 = __PVT___GEN_172;
            __PVT___GEN_243 = __PVT___GEN_173;
            __PVT___GEN_244 = __PVT___GEN_174;
            if ((1U == (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3_io_bankIn_1_bits_regOrder))) {
                if ((2U == (IData)(vlSelf->__PVT__rsType_1))) {
                    __PVT___GEN_246 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3_io_bankIn_1_bits_data_0;
                    __PVT___GEN_247 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3_io_bankIn_1_bits_data_1;
                    __PVT___GEN_248 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3_io_bankIn_1_bits_data_2;
                    __PVT___GEN_249 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3_io_bankIn_1_bits_data_3;
                } else {
                    __PVT___GEN_246 = __PVT___T_59_0;
                    __PVT___GEN_247 = __PVT___T_59_0;
                    __PVT___GEN_248 = __PVT___T_59_0;
                    __PVT___GEN_249 = __PVT___T_59_0;
                }
                __PVT___GEN_251 = __PVT___GEN_181;
                __PVT___GEN_252 = __PVT___GEN_182;
                __PVT___GEN_253 = __PVT___GEN_183;
                __PVT___GEN_254 = __PVT___GEN_184;
            } else {
                __PVT___GEN_246 = __PVT___GEN_176;
                __PVT___GEN_247 = __PVT___GEN_177;
                __PVT___GEN_248 = __PVT___GEN_178;
                __PVT___GEN_249 = __PVT___GEN_179;
                if ((2U == (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3_io_bankIn_1_bits_regOrder))) {
                    if ((2U == (IData)(vlSelf->__PVT__controlReg_sel_alu3))) {
                        __PVT___GEN_251 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3_io_bankIn_1_bits_data_0;
                        __PVT___GEN_252 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3_io_bankIn_1_bits_data_0;
                        __PVT___GEN_253 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3_io_bankIn_1_bits_data_0;
                        __PVT___GEN_254 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3_io_bankIn_1_bits_data_0;
                    } else if ((3U == (IData)(vlSelf->__PVT__controlReg_sel_alu3))) {
                        __PVT___GEN_251 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3_io_bankIn_1_bits_data_0;
                        if (vlSelf->__PVT__controlReg_isvec) {
                            __PVT___GEN_252 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3_io_bankIn_1_bits_data_1;
                            __PVT___GEN_253 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3_io_bankIn_1_bits_data_2;
                            __PVT___GEN_254 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3_io_bankIn_1_bits_data_3;
                        } else {
                            __PVT___GEN_252 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3_io_bankIn_1_bits_data_0;
                            __PVT___GEN_253 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3_io_bankIn_1_bits_data_0;
                            __PVT___GEN_254 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3_io_bankIn_1_bits_data_0;
                        }
                    } else if ((1U == (IData)(vlSelf->__PVT__controlReg_sel_alu3))) {
                        __PVT___GEN_251 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3_io_bankIn_1_bits_data_0;
                        __PVT___GEN_252 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3_io_bankIn_1_bits_data_1;
                        __PVT___GEN_253 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3_io_bankIn_1_bits_data_2;
                        __PVT___GEN_254 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3_io_bankIn_1_bits_data_3;
                    } else {
                        __PVT___GEN_251 = __PVT___T_64;
                        __PVT___GEN_252 = __PVT___T_64;
                        __PVT___GEN_253 = __PVT___T_64;
                        __PVT___GEN_254 = __PVT___T_64;
                    }
                } else {
                    __PVT___GEN_251 = __PVT___GEN_181;
                    __PVT___GEN_252 = __PVT___GEN_182;
                    __PVT___GEN_253 = __PVT___GEN_183;
                    __PVT___GEN_254 = __PVT___GEN_184;
                }
            }
        }
    } else {
        __PVT___GEN_241 = __PVT___GEN_171;
        __PVT___GEN_242 = __PVT___GEN_172;
        __PVT___GEN_243 = __PVT___GEN_173;
        __PVT___GEN_244 = __PVT___GEN_174;
        __PVT___GEN_246 = __PVT___GEN_176;
        __PVT___GEN_247 = __PVT___GEN_177;
        __PVT___GEN_248 = __PVT___GEN_178;
        __PVT___GEN_249 = __PVT___GEN_179;
        __PVT___GEN_251 = __PVT___GEN_181;
        __PVT___GEN_252 = __PVT___GEN_182;
        __PVT___GEN_253 = __PVT___GEN_183;
        __PVT___GEN_254 = __PVT___GEN_184;
    }
    if (vlSelf->__PVT___T_79) {
        if ((0U == (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3_io_bankIn_2_bits_regOrder))) {
            if ((2U == (IData)(vlSelf->__PVT__rsType_0))) {
                vlSelf->__PVT___GEN_311 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3_io_bankIn_2_bits_data_0;
                vlSelf->__PVT___GEN_312 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3_io_bankIn_2_bits_data_1;
                vlSelf->__PVT___GEN_313 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3_io_bankIn_2_bits_data_2;
                vlSelf->__PVT___GEN_314 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3_io_bankIn_2_bits_data_3;
            } else {
                vlSelf->__PVT___GEN_311 = __PVT___T_82_0;
                vlSelf->__PVT___GEN_312 = __PVT___T_82_0;
                vlSelf->__PVT___GEN_313 = __PVT___T_82_0;
                vlSelf->__PVT___GEN_314 = __PVT___T_82_0;
            }
            vlSelf->__PVT___GEN_316 = __PVT___GEN_246;
            vlSelf->__PVT___GEN_317 = __PVT___GEN_247;
            vlSelf->__PVT___GEN_318 = __PVT___GEN_248;
            vlSelf->__PVT___GEN_319 = __PVT___GEN_249;
            vlSelf->__PVT___GEN_321 = __PVT___GEN_251;
            vlSelf->__PVT___GEN_322 = __PVT___GEN_252;
            vlSelf->__PVT___GEN_323 = __PVT___GEN_253;
            vlSelf->__PVT___GEN_324 = __PVT___GEN_254;
        } else {
            vlSelf->__PVT___GEN_311 = __PVT___GEN_241;
            vlSelf->__PVT___GEN_312 = __PVT___GEN_242;
            vlSelf->__PVT___GEN_313 = __PVT___GEN_243;
            vlSelf->__PVT___GEN_314 = __PVT___GEN_244;
            if ((1U == (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3_io_bankIn_2_bits_regOrder))) {
                if ((2U == (IData)(vlSelf->__PVT__rsType_1))) {
                    vlSelf->__PVT___GEN_316 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3_io_bankIn_2_bits_data_0;
                    vlSelf->__PVT___GEN_317 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3_io_bankIn_2_bits_data_1;
                    vlSelf->__PVT___GEN_318 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3_io_bankIn_2_bits_data_2;
                    vlSelf->__PVT___GEN_319 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3_io_bankIn_2_bits_data_3;
                } else {
                    vlSelf->__PVT___GEN_316 = __PVT___T_87_0;
                    vlSelf->__PVT___GEN_317 = __PVT___T_87_0;
                    vlSelf->__PVT___GEN_318 = __PVT___T_87_0;
                    vlSelf->__PVT___GEN_319 = __PVT___T_87_0;
                }
                vlSelf->__PVT___GEN_321 = __PVT___GEN_251;
                vlSelf->__PVT___GEN_322 = __PVT___GEN_252;
                vlSelf->__PVT___GEN_323 = __PVT___GEN_253;
                vlSelf->__PVT___GEN_324 = __PVT___GEN_254;
            } else {
                vlSelf->__PVT___GEN_316 = __PVT___GEN_246;
                vlSelf->__PVT___GEN_317 = __PVT___GEN_247;
                vlSelf->__PVT___GEN_318 = __PVT___GEN_248;
                vlSelf->__PVT___GEN_319 = __PVT___GEN_249;
                if ((2U == (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3_io_bankIn_2_bits_regOrder))) {
                    if ((2U == (IData)(vlSelf->__PVT__controlReg_sel_alu3))) {
                        vlSelf->__PVT___GEN_321 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3_io_bankIn_2_bits_data_0;
                        vlSelf->__PVT___GEN_322 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3_io_bankIn_2_bits_data_0;
                        vlSelf->__PVT___GEN_323 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3_io_bankIn_2_bits_data_0;
                        vlSelf->__PVT___GEN_324 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3_io_bankIn_2_bits_data_0;
                    } else if ((3U == (IData)(vlSelf->__PVT__controlReg_sel_alu3))) {
                        vlSelf->__PVT___GEN_321 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3_io_bankIn_2_bits_data_0;
                        if (vlSelf->__PVT__controlReg_isvec) {
                            vlSelf->__PVT___GEN_322 
                                = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3_io_bankIn_2_bits_data_1;
                            vlSelf->__PVT___GEN_323 
                                = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3_io_bankIn_2_bits_data_2;
                            vlSelf->__PVT___GEN_324 
                                = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3_io_bankIn_2_bits_data_3;
                        } else {
                            vlSelf->__PVT___GEN_322 
                                = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3_io_bankIn_2_bits_data_0;
                            vlSelf->__PVT___GEN_323 
                                = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3_io_bankIn_2_bits_data_0;
                            vlSelf->__PVT___GEN_324 
                                = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3_io_bankIn_2_bits_data_0;
                        }
                    } else if ((1U == (IData)(vlSelf->__PVT__controlReg_sel_alu3))) {
                        vlSelf->__PVT___GEN_321 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3_io_bankIn_2_bits_data_0;
                        vlSelf->__PVT___GEN_322 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3_io_bankIn_2_bits_data_1;
                        vlSelf->__PVT___GEN_323 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3_io_bankIn_2_bits_data_2;
                        vlSelf->__PVT___GEN_324 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3_io_bankIn_2_bits_data_3;
                    } else {
                        vlSelf->__PVT___GEN_321 = __PVT___T_92;
                        vlSelf->__PVT___GEN_322 = __PVT___T_92;
                        vlSelf->__PVT___GEN_323 = __PVT___T_92;
                        vlSelf->__PVT___GEN_324 = __PVT___T_92;
                    }
                } else {
                    vlSelf->__PVT___GEN_321 = __PVT___GEN_251;
                    vlSelf->__PVT___GEN_322 = __PVT___GEN_252;
                    vlSelf->__PVT___GEN_323 = __PVT___GEN_253;
                    vlSelf->__PVT___GEN_324 = __PVT___GEN_254;
                }
            }
        }
    } else {
        vlSelf->__PVT___GEN_311 = __PVT___GEN_241;
        vlSelf->__PVT___GEN_312 = __PVT___GEN_242;
        vlSelf->__PVT___GEN_313 = __PVT___GEN_243;
        vlSelf->__PVT___GEN_314 = __PVT___GEN_244;
        vlSelf->__PVT___GEN_316 = __PVT___GEN_246;
        vlSelf->__PVT___GEN_317 = __PVT___GEN_247;
        vlSelf->__PVT___GEN_318 = __PVT___GEN_248;
        vlSelf->__PVT___GEN_319 = __PVT___GEN_249;
        vlSelf->__PVT___GEN_321 = __PVT___GEN_251;
        vlSelf->__PVT___GEN_322 = __PVT___GEN_252;
        vlSelf->__PVT___GEN_323 = __PVT___GEN_253;
        vlSelf->__PVT___GEN_324 = __PVT___GEN_254;
    }
    if ((2U == (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3_io_bankIn_3_bits_regOrder))) {
        if ((2U == (IData)(vlSelf->__PVT__controlReg_sel_alu3))) {
            vlSelf->__PVT___GEN_336 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3_io_bankIn_3_bits_data_0;
            vlSelf->__PVT___GEN_337 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3_io_bankIn_3_bits_data_0;
            vlSelf->__PVT___GEN_338 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3_io_bankIn_3_bits_data_0;
            vlSelf->__PVT___GEN_339 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3_io_bankIn_3_bits_data_0;
        } else if ((3U == (IData)(vlSelf->__PVT__controlReg_sel_alu3))) {
            vlSelf->__PVT___GEN_336 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3_io_bankIn_3_bits_data_0;
            if (vlSelf->__PVT__controlReg_isvec) {
                vlSelf->__PVT___GEN_337 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3_io_bankIn_3_bits_data_1;
                vlSelf->__PVT___GEN_338 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3_io_bankIn_3_bits_data_2;
                vlSelf->__PVT___GEN_339 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3_io_bankIn_3_bits_data_3;
            } else {
                vlSelf->__PVT___GEN_337 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3_io_bankIn_3_bits_data_0;
                vlSelf->__PVT___GEN_338 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3_io_bankIn_3_bits_data_0;
                vlSelf->__PVT___GEN_339 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3_io_bankIn_3_bits_data_0;
            }
        } else if ((1U == (IData)(vlSelf->__PVT__controlReg_sel_alu3))) {
            vlSelf->__PVT___GEN_336 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3_io_bankIn_3_bits_data_0;
            vlSelf->__PVT___GEN_337 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3_io_bankIn_3_bits_data_1;
            vlSelf->__PVT___GEN_338 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3_io_bankIn_3_bits_data_2;
            vlSelf->__PVT___GEN_339 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3_io_bankIn_3_bits_data_3;
        } else {
            vlSelf->__PVT___GEN_336 = __PVT___T_120;
            vlSelf->__PVT___GEN_337 = __PVT___T_120;
            vlSelf->__PVT___GEN_338 = __PVT___T_120;
            vlSelf->__PVT___GEN_339 = __PVT___T_120;
        }
    } else {
        vlSelf->__PVT___GEN_336 = vlSelf->__PVT___GEN_321;
        vlSelf->__PVT___GEN_337 = vlSelf->__PVT___GEN_322;
        vlSelf->__PVT___GEN_338 = vlSelf->__PVT___GEN_323;
        vlSelf->__PVT___GEN_339 = vlSelf->__PVT___GEN_324;
    }
}
