// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VVentus.h for the primary calling header

#include "verilated.h"

#include "VVentus_SM_wrapper.h"
#include "VVentus_collectorUnit.h"

VL_ATTR_COLD void VVentus_SM_wrapper___stl_sequent__TOP__GPGPU_top__DOT__SM_wrapper__4(VVentus_SM_wrapper* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VVentus__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        VVentus_SM_wrapper___stl_sequent__TOP__GPGPU_top__DOT__SM_wrapper__4\n"); );
    // Init
    CData/*3:0*/ __PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_0__DOT___GEN_87;
    CData/*3:0*/ __PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_1__DOT___GEN_87;
    CData/*3:0*/ __PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_2__DOT___GEN_87;
    CData/*3:0*/ __PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_3__DOT___GEN_87;
    // Body
    vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_0_io_in_0_valid 
        = ((IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit->__PVT__io_outArbiterIO_0_valid) 
           & (0U == (IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit->__PVT__io_outArbiterIO_0_bits_bankID)));
    vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_1_io_in_0_valid 
        = ((IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit->__PVT__io_outArbiterIO_0_valid) 
           & (1U == (IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit->__PVT__io_outArbiterIO_0_bits_bankID)));
    vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_2_io_in_0_valid 
        = ((IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit->__PVT__io_outArbiterIO_0_valid) 
           & (2U == (IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit->__PVT__io_outArbiterIO_0_bits_bankID)));
    vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_3_io_in_0_valid 
        = ((IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit->__PVT__io_outArbiterIO_0_valid) 
           & (3U == (IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit->__PVT__io_outArbiterIO_0_bits_bankID)));
    vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_0_io_in_3_valid 
        = ((IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit->__PVT__io_outArbiterIO_3_valid) 
           & (0U == (IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit->__PVT__io_outArbiterIO_3_bits_bankID)));
    vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_1_io_in_3_valid 
        = ((IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit->__PVT__io_outArbiterIO_3_valid) 
           & (1U == (IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit->__PVT__io_outArbiterIO_3_bits_bankID)));
    vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_2_io_in_3_valid 
        = ((IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit->__PVT__io_outArbiterIO_3_valid) 
           & (2U == (IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit->__PVT__io_outArbiterIO_3_bits_bankID)));
    vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_3_io_in_3_valid 
        = ((IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit->__PVT__io_outArbiterIO_3_valid) 
           & (3U == (IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit->__PVT__io_outArbiterIO_3_bits_bankID)));
    vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_0_io_in_1_valid 
        = ((IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit->__PVT__io_outArbiterIO_1_valid) 
           & (0U == (IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit->__PVT__io_outArbiterIO_1_bits_bankID)));
    vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_1_io_in_1_valid 
        = ((IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit->__PVT__io_outArbiterIO_1_valid) 
           & (1U == (IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit->__PVT__io_outArbiterIO_1_bits_bankID)));
    vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_2_io_in_1_valid 
        = ((IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit->__PVT__io_outArbiterIO_1_valid) 
           & (2U == (IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit->__PVT__io_outArbiterIO_1_bits_bankID)));
    vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_3_io_in_1_valid 
        = ((IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit->__PVT__io_outArbiterIO_1_valid) 
           & (3U == (IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit->__PVT__io_outArbiterIO_1_bits_bankID)));
    vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_0_io_in_2_valid 
        = ((IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit->__PVT__io_outArbiterIO_2_valid) 
           & (0U == (IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit->__PVT__io_outArbiterIO_2_bits_bankID)));
    vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_1_io_in_2_valid 
        = ((IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit->__PVT__io_outArbiterIO_2_valid) 
           & (1U == (IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit->__PVT__io_outArbiterIO_2_bits_bankID)));
    vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_2_io_in_2_valid 
        = ((IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit->__PVT__io_outArbiterIO_2_valid) 
           & (2U == (IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit->__PVT__io_outArbiterIO_2_bits_bankID)));
    vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_3_io_in_2_valid 
        = ((IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit->__PVT__io_outArbiterIO_2_valid) 
           & (3U == (IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit->__PVT__io_outArbiterIO_2_bits_bankID)));
    vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_0_io_in_7_valid 
        = ((IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_1->__PVT__io_outArbiterIO_3_valid) 
           & (0U == (IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_1->__PVT__io_outArbiterIO_3_bits_bankID)));
    vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_1_io_in_7_valid 
        = ((IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_1->__PVT__io_outArbiterIO_3_valid) 
           & (1U == (IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_1->__PVT__io_outArbiterIO_3_bits_bankID)));
    vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_2_io_in_7_valid 
        = ((IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_1->__PVT__io_outArbiterIO_3_valid) 
           & (2U == (IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_1->__PVT__io_outArbiterIO_3_bits_bankID)));
    vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_3_io_in_7_valid 
        = ((IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_1->__PVT__io_outArbiterIO_3_valid) 
           & (3U == (IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_1->__PVT__io_outArbiterIO_3_bits_bankID)));
    vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_0_io_in_4_valid 
        = ((IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_1->__PVT__io_outArbiterIO_0_valid) 
           & (0U == (IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_1->__PVT__io_outArbiterIO_0_bits_bankID)));
    vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_1_io_in_4_valid 
        = ((IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_1->__PVT__io_outArbiterIO_0_valid) 
           & (1U == (IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_1->__PVT__io_outArbiterIO_0_bits_bankID)));
    vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_2_io_in_4_valid 
        = ((IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_1->__PVT__io_outArbiterIO_0_valid) 
           & (2U == (IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_1->__PVT__io_outArbiterIO_0_bits_bankID)));
    vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_3_io_in_4_valid 
        = ((IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_1->__PVT__io_outArbiterIO_0_valid) 
           & (3U == (IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_1->__PVT__io_outArbiterIO_0_bits_bankID)));
    vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_0_io_in_5_valid 
        = ((IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_1->__PVT__io_outArbiterIO_1_valid) 
           & (0U == (IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_1->__PVT__io_outArbiterIO_1_bits_bankID)));
    vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_1_io_in_5_valid 
        = ((IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_1->__PVT__io_outArbiterIO_1_valid) 
           & (1U == (IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_1->__PVT__io_outArbiterIO_1_bits_bankID)));
    vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_2_io_in_5_valid 
        = ((IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_1->__PVT__io_outArbiterIO_1_valid) 
           & (2U == (IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_1->__PVT__io_outArbiterIO_1_bits_bankID)));
    vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_3_io_in_5_valid 
        = ((IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_1->__PVT__io_outArbiterIO_1_valid) 
           & (3U == (IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_1->__PVT__io_outArbiterIO_1_bits_bankID)));
    vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_0_io_in_6_valid 
        = ((IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_1->__PVT__io_outArbiterIO_2_valid) 
           & (0U == (IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_1->__PVT__io_outArbiterIO_2_bits_bankID)));
    vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_1_io_in_6_valid 
        = ((IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_1->__PVT__io_outArbiterIO_2_valid) 
           & (1U == (IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_1->__PVT__io_outArbiterIO_2_bits_bankID)));
    vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_2_io_in_6_valid 
        = ((IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_1->__PVT__io_outArbiterIO_2_valid) 
           & (2U == (IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_1->__PVT__io_outArbiterIO_2_bits_bankID)));
    vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_3_io_in_6_valid 
        = ((IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_1->__PVT__io_outArbiterIO_2_valid) 
           & (3U == (IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_1->__PVT__io_outArbiterIO_2_bits_bankID)));
    vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_0_io_in_11_valid 
        = ((IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2->__PVT__io_outArbiterIO_3_valid) 
           & (0U == (IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2->__PVT__io_outArbiterIO_3_bits_bankID)));
    vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_1_io_in_11_valid 
        = ((IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2->__PVT__io_outArbiterIO_3_valid) 
           & (1U == (IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2->__PVT__io_outArbiterIO_3_bits_bankID)));
    vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_2_io_in_11_valid 
        = ((IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2->__PVT__io_outArbiterIO_3_valid) 
           & (2U == (IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2->__PVT__io_outArbiterIO_3_bits_bankID)));
    vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_3_io_in_11_valid 
        = ((IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2->__PVT__io_outArbiterIO_3_valid) 
           & (3U == (IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2->__PVT__io_outArbiterIO_3_bits_bankID)));
    vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_0_io_in_8_valid 
        = ((IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2->__PVT__io_outArbiterIO_0_valid) 
           & (0U == (IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2->__PVT__io_outArbiterIO_0_bits_bankID)));
    vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_1_io_in_8_valid 
        = ((IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2->__PVT__io_outArbiterIO_0_valid) 
           & (1U == (IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2->__PVT__io_outArbiterIO_0_bits_bankID)));
    vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_2_io_in_8_valid 
        = ((IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2->__PVT__io_outArbiterIO_0_valid) 
           & (2U == (IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2->__PVT__io_outArbiterIO_0_bits_bankID)));
    vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_3_io_in_8_valid 
        = ((IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2->__PVT__io_outArbiterIO_0_valid) 
           & (3U == (IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2->__PVT__io_outArbiterIO_0_bits_bankID)));
    vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_0_io_in_9_valid 
        = ((IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2->__PVT__io_outArbiterIO_1_valid) 
           & (0U == (IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2->__PVT__io_outArbiterIO_1_bits_bankID)));
    vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_1_io_in_9_valid 
        = ((IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2->__PVT__io_outArbiterIO_1_valid) 
           & (1U == (IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2->__PVT__io_outArbiterIO_1_bits_bankID)));
    vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_2_io_in_9_valid 
        = ((IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2->__PVT__io_outArbiterIO_1_valid) 
           & (2U == (IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2->__PVT__io_outArbiterIO_1_bits_bankID)));
    vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_3_io_in_9_valid 
        = ((IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2->__PVT__io_outArbiterIO_1_valid) 
           & (3U == (IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2->__PVT__io_outArbiterIO_1_bits_bankID)));
    vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_0_io_in_10_valid 
        = ((IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2->__PVT__io_outArbiterIO_2_valid) 
           & (0U == (IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2->__PVT__io_outArbiterIO_2_bits_bankID)));
    vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_1_io_in_10_valid 
        = ((IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2->__PVT__io_outArbiterIO_2_valid) 
           & (1U == (IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2->__PVT__io_outArbiterIO_2_bits_bankID)));
    vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_2_io_in_10_valid 
        = ((IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2->__PVT__io_outArbiterIO_2_valid) 
           & (2U == (IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2->__PVT__io_outArbiterIO_2_bits_bankID)));
    vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_3_io_in_10_valid 
        = ((IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2->__PVT__io_outArbiterIO_2_valid) 
           & (3U == (IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2->__PVT__io_outArbiterIO_2_bits_bankID)));
    vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_0_io_in_15_valid 
        = ((IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3->__PVT__io_outArbiterIO_3_valid) 
           & (0U == (IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3->__PVT__io_outArbiterIO_3_bits_bankID)));
    vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_1_io_in_15_valid 
        = ((IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3->__PVT__io_outArbiterIO_3_valid) 
           & (1U == (IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3->__PVT__io_outArbiterIO_3_bits_bankID)));
    vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_2_io_in_15_valid 
        = ((IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3->__PVT__io_outArbiterIO_3_valid) 
           & (2U == (IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3->__PVT__io_outArbiterIO_3_bits_bankID)));
    vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_3_io_in_15_valid 
        = ((IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3->__PVT__io_outArbiterIO_3_valid) 
           & (3U == (IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3->__PVT__io_outArbiterIO_3_bits_bankID)));
    vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_0_io_in_12_valid 
        = ((IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3->__PVT__io_outArbiterIO_0_valid) 
           & (0U == (IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3->__PVT__io_outArbiterIO_0_bits_bankID)));
    vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_1_io_in_12_valid 
        = ((IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3->__PVT__io_outArbiterIO_0_valid) 
           & (1U == (IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3->__PVT__io_outArbiterIO_0_bits_bankID)));
    vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_2_io_in_12_valid 
        = ((IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3->__PVT__io_outArbiterIO_0_valid) 
           & (2U == (IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3->__PVT__io_outArbiterIO_0_bits_bankID)));
    vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_3_io_in_12_valid 
        = ((IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3->__PVT__io_outArbiterIO_0_valid) 
           & (3U == (IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3->__PVT__io_outArbiterIO_0_bits_bankID)));
    vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_0_io_in_13_valid 
        = ((IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3->__PVT__io_outArbiterIO_1_valid) 
           & (0U == (IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3->__PVT__io_outArbiterIO_1_bits_bankID)));
    vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_1_io_in_13_valid 
        = ((IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3->__PVT__io_outArbiterIO_1_valid) 
           & (1U == (IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3->__PVT__io_outArbiterIO_1_bits_bankID)));
    vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_2_io_in_13_valid 
        = ((IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3->__PVT__io_outArbiterIO_1_valid) 
           & (2U == (IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3->__PVT__io_outArbiterIO_1_bits_bankID)));
    vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_3_io_in_13_valid 
        = ((IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3->__PVT__io_outArbiterIO_1_valid) 
           & (3U == (IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3->__PVT__io_outArbiterIO_1_bits_bankID)));
    vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_0_io_in_14_valid 
        = ((IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3->__PVT__io_outArbiterIO_2_valid) 
           & (0U == (IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3->__PVT__io_outArbiterIO_2_bits_bankID)));
    vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_1_io_in_14_valid 
        = ((IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3->__PVT__io_outArbiterIO_2_valid) 
           & (1U == (IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3->__PVT__io_outArbiterIO_2_bits_bankID)));
    vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_2_io_in_14_valid 
        = ((IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3->__PVT__io_outArbiterIO_2_valid) 
           & (2U == (IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3->__PVT__io_outArbiterIO_2_bits_bankID)));
    vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_3_io_in_14_valid 
        = ((IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3->__PVT__io_outArbiterIO_2_valid) 
           & (3U == (IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3->__PVT__io_outArbiterIO_2_bits_bankID)));
    __PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_0__DOT___GEN_87 
        = (((IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_0_io_in_8_valid) 
            & (8U > (IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_0__DOT__lastGrant)))
            ? 8U : (((IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_0_io_in_9_valid) 
                     & (9U > (IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_0__DOT__lastGrant)))
                     ? 9U : (((IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_0_io_in_10_valid) 
                              & (0xaU > (IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_0__DOT__lastGrant)))
                              ? 0xaU : (((IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_0_io_in_11_valid) 
                                         & (0xbU > (IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_0__DOT__lastGrant)))
                                         ? 0xbU : (
                                                   ((IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_0_io_in_12_valid) 
                                                    & (0xcU 
                                                       > (IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_0__DOT__lastGrant)))
                                                    ? 0xcU
                                                    : 
                                                   (((IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_0_io_in_13_valid) 
                                                     & (0xdU 
                                                        > (IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_0__DOT__lastGrant)))
                                                     ? 0xdU
                                                     : 
                                                    (((IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_0_io_in_14_valid) 
                                                      & (0xeU 
                                                         > (IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_0__DOT__lastGrant)))
                                                      ? 0xeU
                                                      : 
                                                     (((IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_0_io_in_15_valid) 
                                                       & (0xfU 
                                                          > (IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_0__DOT__lastGrant)))
                                                       ? 0xfU
                                                       : 
                                                      ((IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_0_io_in_0_valid)
                                                        ? 0U
                                                        : 
                                                       ((IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_0_io_in_1_valid)
                                                         ? 1U
                                                         : 
                                                        ((IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_0_io_in_2_valid)
                                                          ? 2U
                                                          : 
                                                         ((IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_0_io_in_3_valid)
                                                           ? 3U
                                                           : 
                                                          ((IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_0_io_in_4_valid)
                                                            ? 4U
                                                            : 
                                                           ((IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_0_io_in_5_valid)
                                                             ? 5U
                                                             : 
                                                            ((IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_0_io_in_6_valid)
                                                              ? 6U
                                                              : 
                                                             ((IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_0_io_in_7_valid)
                                                               ? 7U
                                                               : 
                                                              ((IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_0_io_in_8_valid)
                                                                ? 8U
                                                                : 
                                                               ((IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_0_io_in_9_valid)
                                                                 ? 9U
                                                                 : 
                                                                ((IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_0_io_in_10_valid)
                                                                  ? 0xaU
                                                                  : 
                                                                 ((IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_0_io_in_11_valid)
                                                                   ? 0xbU
                                                                   : 
                                                                  ((IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_0_io_in_12_valid)
                                                                    ? 0xcU
                                                                    : 
                                                                   ((IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_0_io_in_13_valid)
                                                                     ? 0xdU
                                                                     : 
                                                                    ((IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_0_io_in_14_valid)
                                                                      ? 0xeU
                                                                      : 0xfU)))))))))))))))))))))));
    __PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_1__DOT___GEN_87 
        = (((IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_1_io_in_8_valid) 
            & (8U > (IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_1__DOT__lastGrant)))
            ? 8U : (((IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_1_io_in_9_valid) 
                     & (9U > (IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_1__DOT__lastGrant)))
                     ? 9U : (((IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_1_io_in_10_valid) 
                              & (0xaU > (IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_1__DOT__lastGrant)))
                              ? 0xaU : (((IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_1_io_in_11_valid) 
                                         & (0xbU > (IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_1__DOT__lastGrant)))
                                         ? 0xbU : (
                                                   ((IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_1_io_in_12_valid) 
                                                    & (0xcU 
                                                       > (IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_1__DOT__lastGrant)))
                                                    ? 0xcU
                                                    : 
                                                   (((IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_1_io_in_13_valid) 
                                                     & (0xdU 
                                                        > (IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_1__DOT__lastGrant)))
                                                     ? 0xdU
                                                     : 
                                                    (((IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_1_io_in_14_valid) 
                                                      & (0xeU 
                                                         > (IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_1__DOT__lastGrant)))
                                                      ? 0xeU
                                                      : 
                                                     (((IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_1_io_in_15_valid) 
                                                       & (0xfU 
                                                          > (IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_1__DOT__lastGrant)))
                                                       ? 0xfU
                                                       : 
                                                      ((IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_1_io_in_0_valid)
                                                        ? 0U
                                                        : 
                                                       ((IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_1_io_in_1_valid)
                                                         ? 1U
                                                         : 
                                                        ((IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_1_io_in_2_valid)
                                                          ? 2U
                                                          : 
                                                         ((IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_1_io_in_3_valid)
                                                           ? 3U
                                                           : 
                                                          ((IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_1_io_in_4_valid)
                                                            ? 4U
                                                            : 
                                                           ((IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_1_io_in_5_valid)
                                                             ? 5U
                                                             : 
                                                            ((IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_1_io_in_6_valid)
                                                              ? 6U
                                                              : 
                                                             ((IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_1_io_in_7_valid)
                                                               ? 7U
                                                               : 
                                                              ((IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_1_io_in_8_valid)
                                                                ? 8U
                                                                : 
                                                               ((IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_1_io_in_9_valid)
                                                                 ? 9U
                                                                 : 
                                                                ((IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_1_io_in_10_valid)
                                                                  ? 0xaU
                                                                  : 
                                                                 ((IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_1_io_in_11_valid)
                                                                   ? 0xbU
                                                                   : 
                                                                  ((IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_1_io_in_12_valid)
                                                                    ? 0xcU
                                                                    : 
                                                                   ((IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_1_io_in_13_valid)
                                                                     ? 0xdU
                                                                     : 
                                                                    ((IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_1_io_in_14_valid)
                                                                      ? 0xeU
                                                                      : 0xfU)))))))))))))))))))))));
    __PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_2__DOT___GEN_87 
        = (((IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_2_io_in_8_valid) 
            & (8U > (IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_2__DOT__lastGrant)))
            ? 8U : (((IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_2_io_in_9_valid) 
                     & (9U > (IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_2__DOT__lastGrant)))
                     ? 9U : (((IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_2_io_in_10_valid) 
                              & (0xaU > (IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_2__DOT__lastGrant)))
                              ? 0xaU : (((IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_2_io_in_11_valid) 
                                         & (0xbU > (IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_2__DOT__lastGrant)))
                                         ? 0xbU : (
                                                   ((IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_2_io_in_12_valid) 
                                                    & (0xcU 
                                                       > (IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_2__DOT__lastGrant)))
                                                    ? 0xcU
                                                    : 
                                                   (((IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_2_io_in_13_valid) 
                                                     & (0xdU 
                                                        > (IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_2__DOT__lastGrant)))
                                                     ? 0xdU
                                                     : 
                                                    (((IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_2_io_in_14_valid) 
                                                      & (0xeU 
                                                         > (IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_2__DOT__lastGrant)))
                                                      ? 0xeU
                                                      : 
                                                     (((IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_2_io_in_15_valid) 
                                                       & (0xfU 
                                                          > (IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_2__DOT__lastGrant)))
                                                       ? 0xfU
                                                       : 
                                                      ((IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_2_io_in_0_valid)
                                                        ? 0U
                                                        : 
                                                       ((IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_2_io_in_1_valid)
                                                         ? 1U
                                                         : 
                                                        ((IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_2_io_in_2_valid)
                                                          ? 2U
                                                          : 
                                                         ((IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_2_io_in_3_valid)
                                                           ? 3U
                                                           : 
                                                          ((IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_2_io_in_4_valid)
                                                            ? 4U
                                                            : 
                                                           ((IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_2_io_in_5_valid)
                                                             ? 5U
                                                             : 
                                                            ((IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_2_io_in_6_valid)
                                                              ? 6U
                                                              : 
                                                             ((IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_2_io_in_7_valid)
                                                               ? 7U
                                                               : 
                                                              ((IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_2_io_in_8_valid)
                                                                ? 8U
                                                                : 
                                                               ((IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_2_io_in_9_valid)
                                                                 ? 9U
                                                                 : 
                                                                ((IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_2_io_in_10_valid)
                                                                  ? 0xaU
                                                                  : 
                                                                 ((IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_2_io_in_11_valid)
                                                                   ? 0xbU
                                                                   : 
                                                                  ((IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_2_io_in_12_valid)
                                                                    ? 0xcU
                                                                    : 
                                                                   ((IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_2_io_in_13_valid)
                                                                     ? 0xdU
                                                                     : 
                                                                    ((IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_2_io_in_14_valid)
                                                                      ? 0xeU
                                                                      : 0xfU)))))))))))))))))))))));
    __PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_3__DOT___GEN_87 
        = (((IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_3_io_in_8_valid) 
            & (8U > (IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_3__DOT__lastGrant)))
            ? 8U : (((IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_3_io_in_9_valid) 
                     & (9U > (IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_3__DOT__lastGrant)))
                     ? 9U : (((IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_3_io_in_10_valid) 
                              & (0xaU > (IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_3__DOT__lastGrant)))
                              ? 0xaU : (((IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_3_io_in_11_valid) 
                                         & (0xbU > (IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_3__DOT__lastGrant)))
                                         ? 0xbU : (
                                                   ((IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_3_io_in_12_valid) 
                                                    & (0xcU 
                                                       > (IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_3__DOT__lastGrant)))
                                                    ? 0xcU
                                                    : 
                                                   (((IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_3_io_in_13_valid) 
                                                     & (0xdU 
                                                        > (IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_3__DOT__lastGrant)))
                                                     ? 0xdU
                                                     : 
                                                    (((IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_3_io_in_14_valid) 
                                                      & (0xeU 
                                                         > (IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_3__DOT__lastGrant)))
                                                      ? 0xeU
                                                      : 
                                                     (((IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_3_io_in_15_valid) 
                                                       & (0xfU 
                                                          > (IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_3__DOT__lastGrant)))
                                                       ? 0xfU
                                                       : 
                                                      ((IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_3_io_in_0_valid)
                                                        ? 0U
                                                        : 
                                                       ((IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_3_io_in_1_valid)
                                                         ? 1U
                                                         : 
                                                        ((IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_3_io_in_2_valid)
                                                          ? 2U
                                                          : 
                                                         ((IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_3_io_in_3_valid)
                                                           ? 3U
                                                           : 
                                                          ((IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_3_io_in_4_valid)
                                                            ? 4U
                                                            : 
                                                           ((IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_3_io_in_5_valid)
                                                             ? 5U
                                                             : 
                                                            ((IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_3_io_in_6_valid)
                                                              ? 6U
                                                              : 
                                                             ((IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_3_io_in_7_valid)
                                                               ? 7U
                                                               : 
                                                              ((IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_3_io_in_8_valid)
                                                                ? 8U
                                                                : 
                                                               ((IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_3_io_in_9_valid)
                                                                 ? 9U
                                                                 : 
                                                                ((IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_3_io_in_10_valid)
                                                                  ? 0xaU
                                                                  : 
                                                                 ((IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_3_io_in_11_valid)
                                                                   ? 0xbU
                                                                   : 
                                                                  ((IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_3_io_in_12_valid)
                                                                    ? 0xcU
                                                                    : 
                                                                   ((IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_3_io_in_13_valid)
                                                                     ? 0xdU
                                                                     : 
                                                                    ((IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_3_io_in_14_valid)
                                                                      ? 0xeU
                                                                      : 0xfU)))))))))))))))))))))));
    vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_0_io_chosen 
        = (((IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_0_io_in_1_valid) 
            & (1U > (IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_0__DOT__lastGrant)))
            ? 1U : (((IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_0_io_in_2_valid) 
                     & (2U > (IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_0__DOT__lastGrant)))
                     ? 2U : (((IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_0_io_in_3_valid) 
                              & (3U > (IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_0__DOT__lastGrant)))
                              ? 3U : (((IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_0_io_in_4_valid) 
                                       & (4U > (IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_0__DOT__lastGrant)))
                                       ? 4U : (((IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_0_io_in_5_valid) 
                                                & (5U 
                                                   > (IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_0__DOT__lastGrant)))
                                                ? 5U
                                                : (
                                                   ((IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_0_io_in_6_valid) 
                                                    & (6U 
                                                       > (IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_0__DOT__lastGrant)))
                                                    ? 6U
                                                    : 
                                                   (((IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_0_io_in_7_valid) 
                                                     & (7U 
                                                        > (IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_0__DOT__lastGrant)))
                                                     ? 7U
                                                     : (IData)(__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_0__DOT___GEN_87))))))));
    vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_1_io_chosen 
        = (((IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_1_io_in_1_valid) 
            & (1U > (IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_1__DOT__lastGrant)))
            ? 1U : (((IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_1_io_in_2_valid) 
                     & (2U > (IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_1__DOT__lastGrant)))
                     ? 2U : (((IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_1_io_in_3_valid) 
                              & (3U > (IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_1__DOT__lastGrant)))
                              ? 3U : (((IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_1_io_in_4_valid) 
                                       & (4U > (IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_1__DOT__lastGrant)))
                                       ? 4U : (((IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_1_io_in_5_valid) 
                                                & (5U 
                                                   > (IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_1__DOT__lastGrant)))
                                                ? 5U
                                                : (
                                                   ((IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_1_io_in_6_valid) 
                                                    & (6U 
                                                       > (IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_1__DOT__lastGrant)))
                                                    ? 6U
                                                    : 
                                                   (((IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_1_io_in_7_valid) 
                                                     & (7U 
                                                        > (IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_1__DOT__lastGrant)))
                                                     ? 7U
                                                     : (IData)(__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_1__DOT___GEN_87))))))));
    vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_2_io_chosen 
        = (((IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_2_io_in_1_valid) 
            & (1U > (IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_2__DOT__lastGrant)))
            ? 1U : (((IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_2_io_in_2_valid) 
                     & (2U > (IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_2__DOT__lastGrant)))
                     ? 2U : (((IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_2_io_in_3_valid) 
                              & (3U > (IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_2__DOT__lastGrant)))
                              ? 3U : (((IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_2_io_in_4_valid) 
                                       & (4U > (IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_2__DOT__lastGrant)))
                                       ? 4U : (((IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_2_io_in_5_valid) 
                                                & (5U 
                                                   > (IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_2__DOT__lastGrant)))
                                                ? 5U
                                                : (
                                                   ((IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_2_io_in_6_valid) 
                                                    & (6U 
                                                       > (IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_2__DOT__lastGrant)))
                                                    ? 6U
                                                    : 
                                                   (((IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_2_io_in_7_valid) 
                                                     & (7U 
                                                        > (IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_2__DOT__lastGrant)))
                                                     ? 7U
                                                     : (IData)(__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_2__DOT___GEN_87))))))));
    vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_3_io_chosen 
        = (((IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_3_io_in_1_valid) 
            & (1U > (IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_3__DOT__lastGrant)))
            ? 1U : (((IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_3_io_in_2_valid) 
                     & (2U > (IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_3__DOT__lastGrant)))
                     ? 2U : (((IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_3_io_in_3_valid) 
                              & (3U > (IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_3__DOT__lastGrant)))
                              ? 3U : (((IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_3_io_in_4_valid) 
                                       & (4U > (IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_3__DOT__lastGrant)))
                                       ? 4U : (((IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_3_io_in_5_valid) 
                                                & (5U 
                                                   > (IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_3__DOT__lastGrant)))
                                                ? 5U
                                                : (
                                                   ((IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_3_io_in_6_valid) 
                                                    & (6U 
                                                       > (IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_3__DOT__lastGrant)))
                                                    ? 6U
                                                    : 
                                                   (((IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_3_io_in_7_valid) 
                                                     & (7U 
                                                        > (IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_3__DOT__lastGrant)))
                                                     ? 7U
                                                     : (IData)(__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_3__DOT___GEN_87))))))));
    if ((0xfU == (IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_0_io_chosen))) {
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_0_io_out_bits_rsType = 0U;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_0_io_out_valid 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_0_io_in_15_valid;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_0_io_out_bits_rsAddr 
            = (0x1fU & ((IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3->__PVT___io_outArbiterIO_0_bits_rsAddr_T_69) 
                        << 3U));
    } else if ((0xeU == (IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_0_io_chosen))) {
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_0_io_out_bits_rsType 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3->__PVT__io_outArbiterIO_2_bits_rsType;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_0_io_out_valid 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_0_io_in_14_valid;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_0_io_out_bits_rsAddr 
            = (0x1fU & (IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3->__PVT___io_outArbiterIO_2_bits_rsAddr_T_72));
    } else if ((0xdU == (IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_0_io_chosen))) {
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_0_io_out_bits_rsType 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3->__PVT__io_outArbiterIO_1_bits_rsType;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_0_io_out_valid 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_0_io_in_13_valid;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_0_io_out_bits_rsAddr 
            = (0x1fU & (IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3->__PVT___io_outArbiterIO_1_bits_rsAddr_T_72));
    } else if ((0xcU == (IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_0_io_chosen))) {
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_0_io_out_bits_rsType 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3->__PVT__io_outArbiterIO_0_bits_rsType;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_0_io_out_valid 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_0_io_in_12_valid;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_0_io_out_bits_rsAddr 
            = (0x1fU & (IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3->__PVT___io_outArbiterIO_0_bits_rsAddr_T_72));
    } else if ((0xbU == (IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_0_io_chosen))) {
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_0_io_out_bits_rsType = 0U;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_0_io_out_valid 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_0_io_in_11_valid;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_0_io_out_bits_rsAddr 
            = (0x1fU & ((IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2->__PVT___io_outArbiterIO_0_bits_rsAddr_T_69) 
                        << 3U));
    } else if ((0xaU == (IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_0_io_chosen))) {
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_0_io_out_bits_rsType 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2->__PVT__io_outArbiterIO_2_bits_rsType;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_0_io_out_valid 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_0_io_in_10_valid;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_0_io_out_bits_rsAddr 
            = (0x1fU & (IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2->__PVT___io_outArbiterIO_2_bits_rsAddr_T_72));
    } else if ((9U == (IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_0_io_chosen))) {
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_0_io_out_bits_rsType 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2->__PVT__io_outArbiterIO_1_bits_rsType;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_0_io_out_valid 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_0_io_in_9_valid;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_0_io_out_bits_rsAddr 
            = (0x1fU & (IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2->__PVT___io_outArbiterIO_1_bits_rsAddr_T_72));
    } else if ((8U == (IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_0_io_chosen))) {
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_0_io_out_bits_rsType 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2->__PVT__io_outArbiterIO_0_bits_rsType;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_0_io_out_valid 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_0_io_in_8_valid;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_0_io_out_bits_rsAddr 
            = (0x1fU & (IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2->__PVT___io_outArbiterIO_0_bits_rsAddr_T_72));
    } else if ((7U == (IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_0_io_chosen))) {
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_0_io_out_bits_rsType = 0U;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_0_io_out_valid 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_0_io_in_7_valid;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_0_io_out_bits_rsAddr 
            = (0x1fU & ((IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_1->__PVT___io_outArbiterIO_0_bits_rsAddr_T_69) 
                        << 3U));
    } else if ((6U == (IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_0_io_chosen))) {
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_0_io_out_bits_rsType 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_1->__PVT__io_outArbiterIO_2_bits_rsType;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_0_io_out_valid 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_0_io_in_6_valid;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_0_io_out_bits_rsAddr 
            = (0x1fU & (IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_1->__PVT___io_outArbiterIO_2_bits_rsAddr_T_72));
    } else if ((5U == (IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_0_io_chosen))) {
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_0_io_out_bits_rsType 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_1->__PVT__io_outArbiterIO_1_bits_rsType;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_0_io_out_valid 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_0_io_in_5_valid;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_0_io_out_bits_rsAddr 
            = (0x1fU & (IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_1->__PVT___io_outArbiterIO_1_bits_rsAddr_T_72));
    } else if ((4U == (IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_0_io_chosen))) {
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_0_io_out_bits_rsType 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_1->__PVT__io_outArbiterIO_0_bits_rsType;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_0_io_out_valid 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_0_io_in_4_valid;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_0_io_out_bits_rsAddr 
            = (0x1fU & (IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_1->__PVT___io_outArbiterIO_0_bits_rsAddr_T_72));
    } else if ((3U == (IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_0_io_chosen))) {
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_0_io_out_bits_rsType = 0U;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_0_io_out_valid 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_0_io_in_3_valid;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_0_io_out_bits_rsAddr 
            = (0x1fU & ((IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit->__PVT___io_outArbiterIO_0_bits_rsAddr_T_69) 
                        << 3U));
    } else if ((2U == (IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_0_io_chosen))) {
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_0_io_out_bits_rsType 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit->__PVT__io_outArbiterIO_2_bits_rsType;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_0_io_out_valid 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_0_io_in_2_valid;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_0_io_out_bits_rsAddr 
            = (0x1fU & (IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit->__PVT___io_outArbiterIO_2_bits_rsAddr_T_72));
    } else if ((1U == (IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_0_io_chosen))) {
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_0_io_out_bits_rsType 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit->__PVT__io_outArbiterIO_1_bits_rsType;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_0_io_out_valid 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_0_io_in_1_valid;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_0_io_out_bits_rsAddr 
            = (0x1fU & (IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit->__PVT___io_outArbiterIO_1_bits_rsAddr_T_72));
    } else {
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_0_io_out_bits_rsType 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit->__PVT__io_outArbiterIO_0_bits_rsType;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_0_io_out_valid 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_0_io_in_0_valid;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_0_io_out_bits_rsAddr 
            = (0x1fU & (IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit->__PVT___io_outArbiterIO_0_bits_rsAddr_T_72));
    }
    if ((0xfU == (IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_1_io_chosen))) {
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_1_io_out_bits_rsType = 0U;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_1_io_out_valid 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_1_io_in_15_valid;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_1_io_out_bits_rsAddr 
            = (0x1fU & ((IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3->__PVT___io_outArbiterIO_0_bits_rsAddr_T_69) 
                        << 3U));
    } else if ((0xeU == (IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_1_io_chosen))) {
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_1_io_out_bits_rsType 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3->__PVT__io_outArbiterIO_2_bits_rsType;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_1_io_out_valid 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_1_io_in_14_valid;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_1_io_out_bits_rsAddr 
            = (0x1fU & (IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3->__PVT___io_outArbiterIO_2_bits_rsAddr_T_72));
    } else if ((0xdU == (IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_1_io_chosen))) {
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_1_io_out_bits_rsType 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3->__PVT__io_outArbiterIO_1_bits_rsType;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_1_io_out_valid 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_1_io_in_13_valid;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_1_io_out_bits_rsAddr 
            = (0x1fU & (IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3->__PVT___io_outArbiterIO_1_bits_rsAddr_T_72));
    } else if ((0xcU == (IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_1_io_chosen))) {
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_1_io_out_bits_rsType 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3->__PVT__io_outArbiterIO_0_bits_rsType;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_1_io_out_valid 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_1_io_in_12_valid;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_1_io_out_bits_rsAddr 
            = (0x1fU & (IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3->__PVT___io_outArbiterIO_0_bits_rsAddr_T_72));
    } else if ((0xbU == (IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_1_io_chosen))) {
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_1_io_out_bits_rsType = 0U;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_1_io_out_valid 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_1_io_in_11_valid;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_1_io_out_bits_rsAddr 
            = (0x1fU & ((IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2->__PVT___io_outArbiterIO_0_bits_rsAddr_T_69) 
                        << 3U));
    } else if ((0xaU == (IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_1_io_chosen))) {
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_1_io_out_bits_rsType 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2->__PVT__io_outArbiterIO_2_bits_rsType;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_1_io_out_valid 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_1_io_in_10_valid;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_1_io_out_bits_rsAddr 
            = (0x1fU & (IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2->__PVT___io_outArbiterIO_2_bits_rsAddr_T_72));
    } else if ((9U == (IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_1_io_chosen))) {
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_1_io_out_bits_rsType 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2->__PVT__io_outArbiterIO_1_bits_rsType;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_1_io_out_valid 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_1_io_in_9_valid;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_1_io_out_bits_rsAddr 
            = (0x1fU & (IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2->__PVT___io_outArbiterIO_1_bits_rsAddr_T_72));
    } else if ((8U == (IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_1_io_chosen))) {
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_1_io_out_bits_rsType 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2->__PVT__io_outArbiterIO_0_bits_rsType;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_1_io_out_valid 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_1_io_in_8_valid;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_1_io_out_bits_rsAddr 
            = (0x1fU & (IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2->__PVT___io_outArbiterIO_0_bits_rsAddr_T_72));
    } else if ((7U == (IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_1_io_chosen))) {
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_1_io_out_bits_rsType = 0U;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_1_io_out_valid 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_1_io_in_7_valid;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_1_io_out_bits_rsAddr 
            = (0x1fU & ((IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_1->__PVT___io_outArbiterIO_0_bits_rsAddr_T_69) 
                        << 3U));
    } else if ((6U == (IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_1_io_chosen))) {
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_1_io_out_bits_rsType 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_1->__PVT__io_outArbiterIO_2_bits_rsType;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_1_io_out_valid 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_1_io_in_6_valid;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_1_io_out_bits_rsAddr 
            = (0x1fU & (IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_1->__PVT___io_outArbiterIO_2_bits_rsAddr_T_72));
    } else if ((5U == (IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_1_io_chosen))) {
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_1_io_out_bits_rsType 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_1->__PVT__io_outArbiterIO_1_bits_rsType;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_1_io_out_valid 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_1_io_in_5_valid;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_1_io_out_bits_rsAddr 
            = (0x1fU & (IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_1->__PVT___io_outArbiterIO_1_bits_rsAddr_T_72));
    } else if ((4U == (IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_1_io_chosen))) {
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_1_io_out_bits_rsType 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_1->__PVT__io_outArbiterIO_0_bits_rsType;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_1_io_out_valid 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_1_io_in_4_valid;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_1_io_out_bits_rsAddr 
            = (0x1fU & (IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_1->__PVT___io_outArbiterIO_0_bits_rsAddr_T_72));
    } else if ((3U == (IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_1_io_chosen))) {
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_1_io_out_bits_rsType = 0U;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_1_io_out_valid 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_1_io_in_3_valid;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_1_io_out_bits_rsAddr 
            = (0x1fU & ((IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit->__PVT___io_outArbiterIO_0_bits_rsAddr_T_69) 
                        << 3U));
    } else if ((2U == (IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_1_io_chosen))) {
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_1_io_out_bits_rsType 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit->__PVT__io_outArbiterIO_2_bits_rsType;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_1_io_out_valid 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_1_io_in_2_valid;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_1_io_out_bits_rsAddr 
            = (0x1fU & (IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit->__PVT___io_outArbiterIO_2_bits_rsAddr_T_72));
    } else if ((1U == (IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_1_io_chosen))) {
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_1_io_out_bits_rsType 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit->__PVT__io_outArbiterIO_1_bits_rsType;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_1_io_out_valid 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_1_io_in_1_valid;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_1_io_out_bits_rsAddr 
            = (0x1fU & (IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit->__PVT___io_outArbiterIO_1_bits_rsAddr_T_72));
    } else {
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_1_io_out_bits_rsType 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit->__PVT__io_outArbiterIO_0_bits_rsType;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_1_io_out_valid 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_1_io_in_0_valid;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_1_io_out_bits_rsAddr 
            = (0x1fU & (IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit->__PVT___io_outArbiterIO_0_bits_rsAddr_T_72));
    }
    if ((0xfU == (IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_2_io_chosen))) {
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_2_io_out_bits_rsType = 0U;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_2_io_out_valid 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_2_io_in_15_valid;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_2_io_out_bits_rsAddr 
            = (0x1fU & ((IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3->__PVT___io_outArbiterIO_0_bits_rsAddr_T_69) 
                        << 3U));
    } else if ((0xeU == (IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_2_io_chosen))) {
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_2_io_out_bits_rsType 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3->__PVT__io_outArbiterIO_2_bits_rsType;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_2_io_out_valid 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_2_io_in_14_valid;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_2_io_out_bits_rsAddr 
            = (0x1fU & (IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3->__PVT___io_outArbiterIO_2_bits_rsAddr_T_72));
    } else if ((0xdU == (IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_2_io_chosen))) {
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_2_io_out_bits_rsType 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3->__PVT__io_outArbiterIO_1_bits_rsType;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_2_io_out_valid 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_2_io_in_13_valid;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_2_io_out_bits_rsAddr 
            = (0x1fU & (IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3->__PVT___io_outArbiterIO_1_bits_rsAddr_T_72));
    } else if ((0xcU == (IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_2_io_chosen))) {
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_2_io_out_bits_rsType 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3->__PVT__io_outArbiterIO_0_bits_rsType;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_2_io_out_valid 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_2_io_in_12_valid;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_2_io_out_bits_rsAddr 
            = (0x1fU & (IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3->__PVT___io_outArbiterIO_0_bits_rsAddr_T_72));
    } else if ((0xbU == (IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_2_io_chosen))) {
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_2_io_out_bits_rsType = 0U;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_2_io_out_valid 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_2_io_in_11_valid;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_2_io_out_bits_rsAddr 
            = (0x1fU & ((IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2->__PVT___io_outArbiterIO_0_bits_rsAddr_T_69) 
                        << 3U));
    } else if ((0xaU == (IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_2_io_chosen))) {
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_2_io_out_bits_rsType 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2->__PVT__io_outArbiterIO_2_bits_rsType;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_2_io_out_valid 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_2_io_in_10_valid;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_2_io_out_bits_rsAddr 
            = (0x1fU & (IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2->__PVT___io_outArbiterIO_2_bits_rsAddr_T_72));
    } else if ((9U == (IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_2_io_chosen))) {
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_2_io_out_bits_rsType 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2->__PVT__io_outArbiterIO_1_bits_rsType;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_2_io_out_valid 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_2_io_in_9_valid;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_2_io_out_bits_rsAddr 
            = (0x1fU & (IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2->__PVT___io_outArbiterIO_1_bits_rsAddr_T_72));
    } else if ((8U == (IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_2_io_chosen))) {
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_2_io_out_bits_rsType 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2->__PVT__io_outArbiterIO_0_bits_rsType;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_2_io_out_valid 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_2_io_in_8_valid;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_2_io_out_bits_rsAddr 
            = (0x1fU & (IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2->__PVT___io_outArbiterIO_0_bits_rsAddr_T_72));
    } else if ((7U == (IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_2_io_chosen))) {
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_2_io_out_bits_rsType = 0U;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_2_io_out_valid 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_2_io_in_7_valid;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_2_io_out_bits_rsAddr 
            = (0x1fU & ((IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_1->__PVT___io_outArbiterIO_0_bits_rsAddr_T_69) 
                        << 3U));
    } else if ((6U == (IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_2_io_chosen))) {
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_2_io_out_bits_rsType 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_1->__PVT__io_outArbiterIO_2_bits_rsType;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_2_io_out_valid 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_2_io_in_6_valid;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_2_io_out_bits_rsAddr 
            = (0x1fU & (IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_1->__PVT___io_outArbiterIO_2_bits_rsAddr_T_72));
    } else if ((5U == (IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_2_io_chosen))) {
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_2_io_out_bits_rsType 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_1->__PVT__io_outArbiterIO_1_bits_rsType;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_2_io_out_valid 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_2_io_in_5_valid;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_2_io_out_bits_rsAddr 
            = (0x1fU & (IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_1->__PVT___io_outArbiterIO_1_bits_rsAddr_T_72));
    } else if ((4U == (IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_2_io_chosen))) {
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_2_io_out_bits_rsType 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_1->__PVT__io_outArbiterIO_0_bits_rsType;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_2_io_out_valid 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_2_io_in_4_valid;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_2_io_out_bits_rsAddr 
            = (0x1fU & (IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_1->__PVT___io_outArbiterIO_0_bits_rsAddr_T_72));
    } else if ((3U == (IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_2_io_chosen))) {
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_2_io_out_bits_rsType = 0U;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_2_io_out_valid 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_2_io_in_3_valid;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_2_io_out_bits_rsAddr 
            = (0x1fU & ((IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit->__PVT___io_outArbiterIO_0_bits_rsAddr_T_69) 
                        << 3U));
    } else if ((2U == (IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_2_io_chosen))) {
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_2_io_out_bits_rsType 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit->__PVT__io_outArbiterIO_2_bits_rsType;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_2_io_out_valid 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_2_io_in_2_valid;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_2_io_out_bits_rsAddr 
            = (0x1fU & (IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit->__PVT___io_outArbiterIO_2_bits_rsAddr_T_72));
    } else if ((1U == (IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_2_io_chosen))) {
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_2_io_out_bits_rsType 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit->__PVT__io_outArbiterIO_1_bits_rsType;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_2_io_out_valid 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_2_io_in_1_valid;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_2_io_out_bits_rsAddr 
            = (0x1fU & (IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit->__PVT___io_outArbiterIO_1_bits_rsAddr_T_72));
    } else {
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_2_io_out_bits_rsType 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit->__PVT__io_outArbiterIO_0_bits_rsType;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_2_io_out_valid 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_2_io_in_0_valid;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_2_io_out_bits_rsAddr 
            = (0x1fU & (IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit->__PVT___io_outArbiterIO_0_bits_rsAddr_T_72));
    }
    if ((0xfU == (IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_3_io_chosen))) {
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_3_io_out_bits_rsType = 0U;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_3_io_out_valid 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_3_io_in_15_valid;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_3_io_out_bits_rsAddr 
            = (0x1fU & ((IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3->__PVT___io_outArbiterIO_0_bits_rsAddr_T_69) 
                        << 3U));
    } else if ((0xeU == (IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_3_io_chosen))) {
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_3_io_out_bits_rsType 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3->__PVT__io_outArbiterIO_2_bits_rsType;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_3_io_out_valid 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_3_io_in_14_valid;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_3_io_out_bits_rsAddr 
            = (0x1fU & (IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3->__PVT___io_outArbiterIO_2_bits_rsAddr_T_72));
    } else if ((0xdU == (IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_3_io_chosen))) {
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_3_io_out_bits_rsType 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3->__PVT__io_outArbiterIO_1_bits_rsType;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_3_io_out_valid 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_3_io_in_13_valid;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_3_io_out_bits_rsAddr 
            = (0x1fU & (IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3->__PVT___io_outArbiterIO_1_bits_rsAddr_T_72));
    } else if ((0xcU == (IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_3_io_chosen))) {
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_3_io_out_bits_rsType 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3->__PVT__io_outArbiterIO_0_bits_rsType;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_3_io_out_valid 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_3_io_in_12_valid;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_3_io_out_bits_rsAddr 
            = (0x1fU & (IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3->__PVT___io_outArbiterIO_0_bits_rsAddr_T_72));
    } else if ((0xbU == (IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_3_io_chosen))) {
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_3_io_out_bits_rsType = 0U;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_3_io_out_valid 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_3_io_in_11_valid;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_3_io_out_bits_rsAddr 
            = (0x1fU & ((IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2->__PVT___io_outArbiterIO_0_bits_rsAddr_T_69) 
                        << 3U));
    } else if ((0xaU == (IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_3_io_chosen))) {
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_3_io_out_bits_rsType 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2->__PVT__io_outArbiterIO_2_bits_rsType;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_3_io_out_valid 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_3_io_in_10_valid;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_3_io_out_bits_rsAddr 
            = (0x1fU & (IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2->__PVT___io_outArbiterIO_2_bits_rsAddr_T_72));
    } else if ((9U == (IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_3_io_chosen))) {
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_3_io_out_bits_rsType 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2->__PVT__io_outArbiterIO_1_bits_rsType;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_3_io_out_valid 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_3_io_in_9_valid;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_3_io_out_bits_rsAddr 
            = (0x1fU & (IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2->__PVT___io_outArbiterIO_1_bits_rsAddr_T_72));
    } else if ((8U == (IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_3_io_chosen))) {
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_3_io_out_bits_rsType 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2->__PVT__io_outArbiterIO_0_bits_rsType;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_3_io_out_valid 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_3_io_in_8_valid;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_3_io_out_bits_rsAddr 
            = (0x1fU & (IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2->__PVT___io_outArbiterIO_0_bits_rsAddr_T_72));
    } else if ((7U == (IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_3_io_chosen))) {
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_3_io_out_bits_rsType = 0U;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_3_io_out_valid 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_3_io_in_7_valid;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_3_io_out_bits_rsAddr 
            = (0x1fU & ((IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_1->__PVT___io_outArbiterIO_0_bits_rsAddr_T_69) 
                        << 3U));
    } else if ((6U == (IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_3_io_chosen))) {
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_3_io_out_bits_rsType 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_1->__PVT__io_outArbiterIO_2_bits_rsType;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_3_io_out_valid 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_3_io_in_6_valid;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_3_io_out_bits_rsAddr 
            = (0x1fU & (IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_1->__PVT___io_outArbiterIO_2_bits_rsAddr_T_72));
    } else if ((5U == (IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_3_io_chosen))) {
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_3_io_out_bits_rsType 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_1->__PVT__io_outArbiterIO_1_bits_rsType;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_3_io_out_valid 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_3_io_in_5_valid;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_3_io_out_bits_rsAddr 
            = (0x1fU & (IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_1->__PVT___io_outArbiterIO_1_bits_rsAddr_T_72));
    } else if ((4U == (IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_3_io_chosen))) {
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_3_io_out_bits_rsType 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_1->__PVT__io_outArbiterIO_0_bits_rsType;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_3_io_out_valid 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_3_io_in_4_valid;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_3_io_out_bits_rsAddr 
            = (0x1fU & (IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_1->__PVT___io_outArbiterIO_0_bits_rsAddr_T_72));
    } else if ((3U == (IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_3_io_chosen))) {
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_3_io_out_bits_rsType = 0U;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_3_io_out_valid 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_3_io_in_3_valid;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_3_io_out_bits_rsAddr 
            = (0x1fU & ((IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit->__PVT___io_outArbiterIO_0_bits_rsAddr_T_69) 
                        << 3U));
    } else if ((2U == (IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_3_io_chosen))) {
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_3_io_out_bits_rsType 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit->__PVT__io_outArbiterIO_2_bits_rsType;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_3_io_out_valid 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_3_io_in_2_valid;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_3_io_out_bits_rsAddr 
            = (0x1fU & (IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit->__PVT___io_outArbiterIO_2_bits_rsAddr_T_72));
    } else if ((1U == (IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_3_io_chosen))) {
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_3_io_out_bits_rsType 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit->__PVT__io_outArbiterIO_1_bits_rsType;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_3_io_out_valid 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_3_io_in_1_valid;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_3_io_out_bits_rsAddr 
            = (0x1fU & (IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit->__PVT___io_outArbiterIO_1_bits_rsAddr_T_72));
    } else {
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_3_io_out_bits_rsType 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit->__PVT__io_outArbiterIO_0_bits_rsType;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_3_io_out_valid 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_3_io_in_0_valid;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_3_io_out_bits_rsAddr 
            = (0x1fU & (IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit->__PVT___io_outArbiterIO_0_bits_rsAddr_T_72));
    }
    vlSelf->pipe__DOT__operand_collector__DOT__FloatRegFileBank__DOT____VdfgTmp_hb2521e6a__0 
        = (((0x1fU & (IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT___wbVecBankAddr_T_64)) 
            == (IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_0_io_out_bits_rsAddr)) 
           & (IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__FloatRegFileBank__DOT__regs_0_MPORT_2_en));
    vlSelf->__PVT__pipe__DOT__operand_collector__DOT__RegFileBank_io_rs 
        = ((((0x1fU & (IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT___wbScaBankAddr_T_64)) 
             == (IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_0_io_out_bits_rsAddr)) 
            & (IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__RegFileBank_io_rdwen))
            ? vlSelf->__PVT__pipe__DOT__operand_collector__DOT__RegFileBank_1__DOT__regs_MPORT_data
            : ((0U != (IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_0_io_out_bits_rsAddr))
                ? vlSelf->__PVT__pipe__DOT__operand_collector__DOT__RegFileBank__DOT__regs
               [vlSelf->__PVT__pipe__DOT__operand_collector__DOT__RegFileBank__DOT__regs_io_rs_MPORT_addr_pipe_0]
                : 0U));
    vlSelf->pipe__DOT__operand_collector__DOT__FloatRegFileBank_1__DOT____VdfgTmp_hb2521e6a__0 
        = (((0x1fU & (IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT___wbVecBankAddr_T_64)) 
            == (IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_1_io_out_bits_rsAddr)) 
           & (IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__FloatRegFileBank_1__DOT__regs_0_MPORT_2_en));
    vlSelf->__PVT__pipe__DOT__operand_collector__DOT__RegFileBank_1_io_rs 
        = ((((0x1fU & (IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT___wbScaBankAddr_T_64)) 
             == (IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_1_io_out_bits_rsAddr)) 
            & (IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__RegFileBank_1_io_rdwen))
            ? vlSelf->__PVT__pipe__DOT__operand_collector__DOT__RegFileBank_1__DOT__regs_MPORT_data
            : ((0U != (IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_1_io_out_bits_rsAddr))
                ? vlSelf->__PVT__pipe__DOT__operand_collector__DOT__RegFileBank_1__DOT__regs
               [vlSelf->__PVT__pipe__DOT__operand_collector__DOT__RegFileBank_1__DOT__regs_io_rs_MPORT_addr_pipe_0]
                : 0U));
    vlSelf->pipe__DOT__operand_collector__DOT__FloatRegFileBank_2__DOT____VdfgTmp_hb2521e6a__0 
        = (((0x1fU & (IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT___wbVecBankAddr_T_64)) 
            == (IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_2_io_out_bits_rsAddr)) 
           & (IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__FloatRegFileBank_2__DOT__regs_0_MPORT_2_en));
    vlSelf->__PVT__pipe__DOT__operand_collector__DOT__RegFileBank_2_io_rs 
        = ((((0x1fU & (IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT___wbScaBankAddr_T_64)) 
             == (IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_2_io_out_bits_rsAddr)) 
            & (IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__RegFileBank_2_io_rdwen))
            ? vlSelf->__PVT__pipe__DOT__operand_collector__DOT__RegFileBank_1__DOT__regs_MPORT_data
            : ((0U != (IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_2_io_out_bits_rsAddr))
                ? vlSelf->__PVT__pipe__DOT__operand_collector__DOT__RegFileBank_2__DOT__regs
               [vlSelf->__PVT__pipe__DOT__operand_collector__DOT__RegFileBank_2__DOT__regs_io_rs_MPORT_addr_pipe_0]
                : 0U));
    vlSelf->pipe__DOT__operand_collector__DOT__FloatRegFileBank_3__DOT____VdfgTmp_hb2521e6a__0 
        = (((0x1fU & (IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT___wbVecBankAddr_T_64)) 
            == (IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_3_io_out_bits_rsAddr)) 
           & (IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__FloatRegFileBank_3__DOT__regs_0_MPORT_2_en));
    vlSelf->__PVT__pipe__DOT__operand_collector__DOT__RegFileBank_3_io_rs 
        = ((((0x1fU & (IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT___wbScaBankAddr_T_64)) 
             == (IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_3_io_out_bits_rsAddr)) 
            & (IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__RegFileBank_3_io_rdwen))
            ? vlSelf->__PVT__pipe__DOT__operand_collector__DOT__RegFileBank_1__DOT__regs_MPORT_data
            : ((0U != (IData)(vlSelf->__PVT__pipe__DOT__operand_collector__DOT__Arbiter__DOT__bankArbiterScalar_3_io_out_bits_rsAddr))
                ? vlSelf->__PVT__pipe__DOT__operand_collector__DOT__RegFileBank_3__DOT__regs
               [vlSelf->__PVT__pipe__DOT__operand_collector__DOT__RegFileBank_3__DOT__regs_io_rs_MPORT_addr_pipe_0]
                : 0U));
    if (vlSelf->__PVT__pipe__DOT__operand_collector__DOT__REG_2) {
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_0_1 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__RegFileBank_io_rs;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_0_2 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__RegFileBank_io_rs;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_0_3 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__RegFileBank_io_rs;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_0_0 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__RegFileBank_io_rs;
    } else if (vlSelf->__PVT__pipe__DOT__operand_collector__DOT__REG_3) {
        if (vlSelf->pipe__DOT__operand_collector__DOT__FloatRegFileBank__DOT____VdfgTmp_hb2521e6a__0) {
            vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_0_1 
                = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__FloatRegFileBank_1__DOT__regs_1_MPORT_2_data;
            vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_0_2 
                = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__FloatRegFileBank_1__DOT__regs_2_MPORT_2_data;
            vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_0_3 
                = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__FloatRegFileBank_1__DOT__regs_3_MPORT_2_data;
            vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_0_0 
                = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__FloatRegFileBank_1__DOT__regs_0_MPORT_2_data;
        } else {
            vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_0_1 
                = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__FloatRegFileBank__DOT__regs_1
                [vlSelf->__PVT__pipe__DOT__operand_collector__DOT__FloatRegFileBank__DOT__regs_1_MPORT_addr_pipe_0];
            vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_0_2 
                = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__FloatRegFileBank__DOT__regs_2
                [vlSelf->__PVT__pipe__DOT__operand_collector__DOT__FloatRegFileBank__DOT__regs_2_MPORT_addr_pipe_0];
            vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_0_3 
                = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__FloatRegFileBank__DOT__regs_3
                [vlSelf->__PVT__pipe__DOT__operand_collector__DOT__FloatRegFileBank__DOT__regs_3_MPORT_addr_pipe_0];
            vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_0_0 
                = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__FloatRegFileBank__DOT__regs_0
                [vlSelf->__PVT__pipe__DOT__operand_collector__DOT__FloatRegFileBank__DOT__regs_0_MPORT_addr_pipe_0];
        }
    } else {
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_0_1 = 0U;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_0_2 = 0U;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_0_3 = 0U;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_0_0 = 0U;
    }
    if (vlSelf->__PVT__pipe__DOT__operand_collector__DOT__REG_4) {
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_1_1 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__RegFileBank_1_io_rs;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_1_2 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__RegFileBank_1_io_rs;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_1_3 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__RegFileBank_1_io_rs;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_1_0 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__RegFileBank_1_io_rs;
    } else if (vlSelf->__PVT__pipe__DOT__operand_collector__DOT__REG_5) {
        if (vlSelf->pipe__DOT__operand_collector__DOT__FloatRegFileBank_1__DOT____VdfgTmp_hb2521e6a__0) {
            vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_1_1 
                = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__FloatRegFileBank_1__DOT__regs_1_MPORT_2_data;
            vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_1_2 
                = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__FloatRegFileBank_1__DOT__regs_2_MPORT_2_data;
            vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_1_3 
                = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__FloatRegFileBank_1__DOT__regs_3_MPORT_2_data;
            vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_1_0 
                = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__FloatRegFileBank_1__DOT__regs_0_MPORT_2_data;
        } else {
            vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_1_1 
                = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__FloatRegFileBank_1__DOT__regs_1
                [vlSelf->__PVT__pipe__DOT__operand_collector__DOT__FloatRegFileBank_1__DOT__regs_1_MPORT_addr_pipe_0];
            vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_1_2 
                = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__FloatRegFileBank_1__DOT__regs_2
                [vlSelf->__PVT__pipe__DOT__operand_collector__DOT__FloatRegFileBank_1__DOT__regs_2_MPORT_addr_pipe_0];
            vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_1_3 
                = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__FloatRegFileBank_1__DOT__regs_3
                [vlSelf->__PVT__pipe__DOT__operand_collector__DOT__FloatRegFileBank_1__DOT__regs_3_MPORT_addr_pipe_0];
            vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_1_0 
                = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__FloatRegFileBank_1__DOT__regs_0
                [vlSelf->__PVT__pipe__DOT__operand_collector__DOT__FloatRegFileBank_1__DOT__regs_0_MPORT_addr_pipe_0];
        }
    } else {
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_1_1 = 0U;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_1_2 = 0U;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_1_3 = 0U;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_1_0 = 0U;
    }
    if (vlSelf->__PVT__pipe__DOT__operand_collector__DOT__REG_6) {
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_2_1 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__RegFileBank_2_io_rs;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_2_2 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__RegFileBank_2_io_rs;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_2_3 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__RegFileBank_2_io_rs;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_2_0 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__RegFileBank_2_io_rs;
    } else if (vlSelf->__PVT__pipe__DOT__operand_collector__DOT__REG_7) {
        if (vlSelf->pipe__DOT__operand_collector__DOT__FloatRegFileBank_2__DOT____VdfgTmp_hb2521e6a__0) {
            vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_2_1 
                = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__FloatRegFileBank_1__DOT__regs_1_MPORT_2_data;
            vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_2_2 
                = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__FloatRegFileBank_1__DOT__regs_2_MPORT_2_data;
            vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_2_3 
                = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__FloatRegFileBank_1__DOT__regs_3_MPORT_2_data;
            vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_2_0 
                = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__FloatRegFileBank_1__DOT__regs_0_MPORT_2_data;
        } else {
            vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_2_1 
                = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__FloatRegFileBank_2__DOT__regs_1
                [vlSelf->__PVT__pipe__DOT__operand_collector__DOT__FloatRegFileBank_2__DOT__regs_1_MPORT_addr_pipe_0];
            vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_2_2 
                = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__FloatRegFileBank_2__DOT__regs_2
                [vlSelf->__PVT__pipe__DOT__operand_collector__DOT__FloatRegFileBank_2__DOT__regs_2_MPORT_addr_pipe_0];
            vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_2_3 
                = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__FloatRegFileBank_2__DOT__regs_3
                [vlSelf->__PVT__pipe__DOT__operand_collector__DOT__FloatRegFileBank_2__DOT__regs_3_MPORT_addr_pipe_0];
            vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_2_0 
                = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__FloatRegFileBank_2__DOT__regs_0
                [vlSelf->__PVT__pipe__DOT__operand_collector__DOT__FloatRegFileBank_2__DOT__regs_0_MPORT_addr_pipe_0];
        }
    } else {
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_2_1 = 0U;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_2_2 = 0U;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_2_3 = 0U;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_2_0 = 0U;
    }
    if (vlSelf->__PVT__pipe__DOT__operand_collector__DOT__REG_8) {
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_3_1 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__RegFileBank_3_io_rs;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_3_2 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__RegFileBank_3_io_rs;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_3_3 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__RegFileBank_3_io_rs;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_3_0 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__RegFileBank_3_io_rs;
    } else if (vlSelf->__PVT__pipe__DOT__operand_collector__DOT__REG_9) {
        if (vlSelf->pipe__DOT__operand_collector__DOT__FloatRegFileBank_3__DOT____VdfgTmp_hb2521e6a__0) {
            vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_3_1 
                = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__FloatRegFileBank_1__DOT__regs_1_MPORT_2_data;
            vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_3_2 
                = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__FloatRegFileBank_1__DOT__regs_2_MPORT_2_data;
            vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_3_3 
                = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__FloatRegFileBank_1__DOT__regs_3_MPORT_2_data;
            vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_3_0 
                = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__FloatRegFileBank_1__DOT__regs_0_MPORT_2_data;
        } else {
            vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_3_1 
                = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__FloatRegFileBank_3__DOT__regs_1
                [vlSelf->__PVT__pipe__DOT__operand_collector__DOT__FloatRegFileBank_3__DOT__regs_1_MPORT_addr_pipe_0];
            vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_3_2 
                = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__FloatRegFileBank_3__DOT__regs_2
                [vlSelf->__PVT__pipe__DOT__operand_collector__DOT__FloatRegFileBank_3__DOT__regs_2_MPORT_addr_pipe_0];
            vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_3_3 
                = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__FloatRegFileBank_3__DOT__regs_3
                [vlSelf->__PVT__pipe__DOT__operand_collector__DOT__FloatRegFileBank_3__DOT__regs_3_MPORT_addr_pipe_0];
            vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_3_0 
                = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__FloatRegFileBank_3__DOT__regs_0
                [vlSelf->__PVT__pipe__DOT__operand_collector__DOT__FloatRegFileBank_3__DOT__regs_0_MPORT_addr_pipe_0];
        }
    } else {
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_3_1 = 0U;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_3_2 = 0U;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_3_3 = 0U;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_3_0 = 0U;
    }
    if (vlSelf->pipe__DOT__operand_collector__DOT__crossBar__DOT____VdfgTmp_h440786a2__0) {
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_io_bankIn_3_bits_data_1 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_3_1;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_io_bankIn_3_bits_data_2 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_3_2;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_io_bankIn_3_bits_data_3 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_3_3;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_io_bankIn_3_bits_data_0 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_3_0;
    } else if (vlSelf->pipe__DOT__operand_collector__DOT__crossBar__DOT____VdfgTmp_h4652ad51__0) {
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_io_bankIn_3_bits_data_1 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_2_1;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_io_bankIn_3_bits_data_2 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_2_2;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_io_bankIn_3_bits_data_3 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_2_3;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_io_bankIn_3_bits_data_0 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_2_0;
    } else if (vlSelf->pipe__DOT__operand_collector__DOT__crossBar__DOT____VdfgTmp_h908086e0__0) {
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_io_bankIn_3_bits_data_1 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_1_1;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_io_bankIn_3_bits_data_2 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_1_2;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_io_bankIn_3_bits_data_3 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_1_3;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_io_bankIn_3_bits_data_0 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_1_0;
    } else if (vlSelf->pipe__DOT__operand_collector__DOT__crossBar__DOT____VdfgTmp_h874598fb__0) {
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_io_bankIn_3_bits_data_1 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_0_1;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_io_bankIn_3_bits_data_2 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_0_2;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_io_bankIn_3_bits_data_3 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_0_3;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_io_bankIn_3_bits_data_0 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_0_0;
    } else {
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_io_bankIn_3_bits_data_1 = 0U;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_io_bankIn_3_bits_data_2 = 0U;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_io_bankIn_3_bits_data_3 = 0U;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_io_bankIn_3_bits_data_0 = 0U;
    }
    if (vlSelf->pipe__DOT__operand_collector__DOT__crossBar__DOT____VdfgTmp_hd3d91af5__0) {
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_1_io_bankIn_3_bits_data_1 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_3_1;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_1_io_bankIn_3_bits_data_2 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_3_2;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_1_io_bankIn_3_bits_data_3 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_3_3;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_1_io_bankIn_3_bits_data_0 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_3_0;
    } else if (vlSelf->pipe__DOT__operand_collector__DOT__crossBar__DOT____VdfgTmp_hb242a68f__0) {
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_1_io_bankIn_3_bits_data_1 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_2_1;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_1_io_bankIn_3_bits_data_2 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_2_2;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_1_io_bankIn_3_bits_data_3 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_2_3;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_1_io_bankIn_3_bits_data_0 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_2_0;
    } else if (vlSelf->pipe__DOT__operand_collector__DOT__crossBar__DOT____VdfgTmp_h23714279__0) {
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_1_io_bankIn_3_bits_data_1 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_1_1;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_1_io_bankIn_3_bits_data_2 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_1_2;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_1_io_bankIn_3_bits_data_3 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_1_3;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_1_io_bankIn_3_bits_data_0 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_1_0;
    } else if (vlSelf->pipe__DOT__operand_collector__DOT__crossBar__DOT____VdfgTmp_h59b6297c__0) {
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_1_io_bankIn_3_bits_data_1 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_0_1;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_1_io_bankIn_3_bits_data_2 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_0_2;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_1_io_bankIn_3_bits_data_3 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_0_3;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_1_io_bankIn_3_bits_data_0 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_0_0;
    } else {
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_1_io_bankIn_3_bits_data_1 = 0U;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_1_io_bankIn_3_bits_data_2 = 0U;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_1_io_bankIn_3_bits_data_3 = 0U;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_1_io_bankIn_3_bits_data_0 = 0U;
    }
    if (vlSelf->pipe__DOT__operand_collector__DOT__crossBar__DOT____VdfgTmp_h2d22f79c__0) {
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2_io_bankIn_3_bits_data_1 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_3_1;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2_io_bankIn_3_bits_data_2 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_3_2;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2_io_bankIn_3_bits_data_3 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_3_3;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2_io_bankIn_3_bits_data_0 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_3_0;
    } else if (vlSelf->pipe__DOT__operand_collector__DOT__crossBar__DOT____VdfgTmp_heaa6ffa7__0) {
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2_io_bankIn_3_bits_data_1 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_2_1;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2_io_bankIn_3_bits_data_2 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_2_2;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2_io_bankIn_3_bits_data_3 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_2_3;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2_io_bankIn_3_bits_data_0 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_2_0;
    } else if (vlSelf->pipe__DOT__operand_collector__DOT__crossBar__DOT____VdfgTmp_h0446d71c__0) {
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2_io_bankIn_3_bits_data_1 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_1_1;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2_io_bankIn_3_bits_data_2 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_1_2;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2_io_bankIn_3_bits_data_3 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_1_3;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2_io_bankIn_3_bits_data_0 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_1_0;
    } else if (vlSelf->pipe__DOT__operand_collector__DOT__crossBar__DOT____VdfgTmp_h878ef6a5__0) {
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2_io_bankIn_3_bits_data_1 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_0_1;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2_io_bankIn_3_bits_data_2 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_0_2;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2_io_bankIn_3_bits_data_3 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_0_3;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2_io_bankIn_3_bits_data_0 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_0_0;
    } else {
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2_io_bankIn_3_bits_data_1 = 0U;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2_io_bankIn_3_bits_data_2 = 0U;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2_io_bankIn_3_bits_data_3 = 0U;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2_io_bankIn_3_bits_data_0 = 0U;
    }
    if (vlSelf->pipe__DOT__operand_collector__DOT__crossBar__DOT____VdfgTmp_h0c933018__0) {
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3_io_bankIn_3_bits_data_1 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_3_1;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3_io_bankIn_3_bits_data_2 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_3_2;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3_io_bankIn_3_bits_data_3 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_3_3;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3_io_bankIn_3_bits_data_0 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_3_0;
    } else if (vlSelf->pipe__DOT__operand_collector__DOT__crossBar__DOT____VdfgTmp_h8991ccf5__0) {
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3_io_bankIn_3_bits_data_1 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_2_1;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3_io_bankIn_3_bits_data_2 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_2_2;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3_io_bankIn_3_bits_data_3 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_2_3;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3_io_bankIn_3_bits_data_0 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_2_0;
    } else if (vlSelf->pipe__DOT__operand_collector__DOT__crossBar__DOT____VdfgTmp_h753d4ebc__0) {
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3_io_bankIn_3_bits_data_1 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_1_1;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3_io_bankIn_3_bits_data_2 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_1_2;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3_io_bankIn_3_bits_data_3 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_1_3;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3_io_bankIn_3_bits_data_0 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_1_0;
    } else if (vlSelf->pipe__DOT__operand_collector__DOT__crossBar__DOT____VdfgTmp_hd1563a5f__0) {
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3_io_bankIn_3_bits_data_1 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_0_1;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3_io_bankIn_3_bits_data_2 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_0_2;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3_io_bankIn_3_bits_data_3 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_0_3;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3_io_bankIn_3_bits_data_0 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_0_0;
    } else {
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3_io_bankIn_3_bits_data_1 = 0U;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3_io_bankIn_3_bits_data_2 = 0U;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3_io_bankIn_3_bits_data_3 = 0U;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3_io_bankIn_3_bits_data_0 = 0U;
    }
    if (vlSelf->pipe__DOT__operand_collector__DOT__crossBar__DOT____VdfgTmp_h4eba5105__0) {
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_io_bankIn_2_bits_data_1 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_3_1;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_io_bankIn_2_bits_data_2 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_3_2;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_io_bankIn_2_bits_data_3 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_3_3;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_io_bankIn_2_bits_data_0 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_3_0;
    } else if (vlSelf->pipe__DOT__operand_collector__DOT__crossBar__DOT____VdfgTmp_h5f0e16cc__0) {
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_io_bankIn_2_bits_data_1 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_2_1;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_io_bankIn_2_bits_data_2 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_2_2;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_io_bankIn_2_bits_data_3 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_2_3;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_io_bankIn_2_bits_data_0 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_2_0;
    } else if (vlSelf->pipe__DOT__operand_collector__DOT__crossBar__DOT____VdfgTmp_hea4da745__0) {
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_io_bankIn_2_bits_data_1 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_1_1;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_io_bankIn_2_bits_data_2 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_1_2;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_io_bankIn_2_bits_data_3 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_1_3;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_io_bankIn_2_bits_data_0 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_1_0;
    } else if (vlSelf->pipe__DOT__operand_collector__DOT__crossBar__DOT____VdfgTmp_hbdbe9504__0) {
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_io_bankIn_2_bits_data_1 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_0_1;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_io_bankIn_2_bits_data_2 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_0_2;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_io_bankIn_2_bits_data_3 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_0_3;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_io_bankIn_2_bits_data_0 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_0_0;
    } else {
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_io_bankIn_2_bits_data_1 = 0U;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_io_bankIn_2_bits_data_2 = 0U;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_io_bankIn_2_bits_data_3 = 0U;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_io_bankIn_2_bits_data_0 = 0U;
    }
    if (vlSelf->pipe__DOT__operand_collector__DOT__crossBar__DOT____VdfgTmp_hda7d7350__0) {
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_1_io_bankIn_2_bits_data_1 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_3_1;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_1_io_bankIn_2_bits_data_2 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_3_2;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_1_io_bankIn_2_bits_data_3 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_3_3;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_1_io_bankIn_2_bits_data_0 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_3_0;
    } else if (vlSelf->pipe__DOT__operand_collector__DOT__crossBar__DOT____VdfgTmp_hc4895f6a__0) {
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_1_io_bankIn_2_bits_data_1 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_2_1;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_1_io_bankIn_2_bits_data_2 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_2_2;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_1_io_bankIn_2_bits_data_3 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_2_3;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_1_io_bankIn_2_bits_data_0 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_2_0;
    } else if (vlSelf->pipe__DOT__operand_collector__DOT__crossBar__DOT____VdfgTmp_h59b42386__0) {
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_1_io_bankIn_2_bits_data_1 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_1_1;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_1_io_bankIn_2_bits_data_2 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_1_2;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_1_io_bankIn_2_bits_data_3 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_1_3;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_1_io_bankIn_2_bits_data_0 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_1_0;
    } else if (vlSelf->pipe__DOT__operand_collector__DOT__crossBar__DOT____VdfgTmp_h67cd2cd1__0) {
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_1_io_bankIn_2_bits_data_1 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_0_1;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_1_io_bankIn_2_bits_data_2 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_0_2;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_1_io_bankIn_2_bits_data_3 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_0_3;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_1_io_bankIn_2_bits_data_0 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_0_0;
    } else {
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_1_io_bankIn_2_bits_data_1 = 0U;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_1_io_bankIn_2_bits_data_2 = 0U;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_1_io_bankIn_2_bits_data_3 = 0U;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_1_io_bankIn_2_bits_data_0 = 0U;
    }
    if (vlSelf->pipe__DOT__operand_collector__DOT__crossBar__DOT____VdfgTmp_h337e4c23__0) {
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2_io_bankIn_2_bits_data_1 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_3_1;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2_io_bankIn_2_bits_data_2 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_3_2;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2_io_bankIn_2_bits_data_3 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_3_3;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2_io_bankIn_2_bits_data_0 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_3_0;
    } else if (vlSelf->pipe__DOT__operand_collector__DOT__crossBar__DOT____VdfgTmp_hd1e316c2__0) {
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2_io_bankIn_2_bits_data_1 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_2_1;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2_io_bankIn_2_bits_data_2 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_2_2;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2_io_bankIn_2_bits_data_3 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_2_3;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2_io_bankIn_2_bits_data_0 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_2_0;
    } else if (vlSelf->pipe__DOT__operand_collector__DOT__crossBar__DOT____VdfgTmp_h1f09b9a1__0) {
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2_io_bankIn_2_bits_data_1 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_1_1;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2_io_bankIn_2_bits_data_2 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_1_2;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2_io_bankIn_2_bits_data_3 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_1_3;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2_io_bankIn_2_bits_data_0 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_1_0;
    } else if (vlSelf->pipe__DOT__operand_collector__DOT__crossBar__DOT____VdfgTmp_h9125ec06__0) {
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2_io_bankIn_2_bits_data_1 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_0_1;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2_io_bankIn_2_bits_data_2 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_0_2;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2_io_bankIn_2_bits_data_3 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_0_3;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2_io_bankIn_2_bits_data_0 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_0_0;
    } else {
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2_io_bankIn_2_bits_data_1 = 0U;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2_io_bankIn_2_bits_data_2 = 0U;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2_io_bankIn_2_bits_data_3 = 0U;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2_io_bankIn_2_bits_data_0 = 0U;
    }
    if (vlSelf->pipe__DOT__operand_collector__DOT__crossBar__DOT____VdfgTmp_h02f698bb__0) {
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3_io_bankIn_2_bits_data_1 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_3_1;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3_io_bankIn_2_bits_data_2 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_3_2;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3_io_bankIn_2_bits_data_3 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_3_3;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3_io_bankIn_2_bits_data_0 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_3_0;
    } else if (vlSelf->pipe__DOT__operand_collector__DOT__crossBar__DOT____VdfgTmp_h82dd656a__0) {
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3_io_bankIn_2_bits_data_1 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_2_1;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3_io_bankIn_2_bits_data_2 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_2_2;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3_io_bankIn_2_bits_data_3 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_2_3;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3_io_bankIn_2_bits_data_0 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_2_0;
    } else if (vlSelf->pipe__DOT__operand_collector__DOT__crossBar__DOT____VdfgTmp_h4cf0285f__0) {
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3_io_bankIn_2_bits_data_1 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_1_1;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3_io_bankIn_2_bits_data_2 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_1_2;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3_io_bankIn_2_bits_data_3 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_1_3;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3_io_bankIn_2_bits_data_0 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_1_0;
    } else if (vlSelf->pipe__DOT__operand_collector__DOT__crossBar__DOT____VdfgTmp_h27290432__0) {
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3_io_bankIn_2_bits_data_1 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_0_1;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3_io_bankIn_2_bits_data_2 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_0_2;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3_io_bankIn_2_bits_data_3 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_0_3;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3_io_bankIn_2_bits_data_0 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_0_0;
    } else {
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3_io_bankIn_2_bits_data_1 = 0U;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3_io_bankIn_2_bits_data_2 = 0U;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3_io_bankIn_2_bits_data_3 = 0U;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3_io_bankIn_2_bits_data_0 = 0U;
    }
    if (vlSelf->pipe__DOT__operand_collector__DOT__crossBar__DOT____VdfgTmp_h4eb65e70__0) {
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_io_bankIn_1_bits_data_1 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_3_1;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_io_bankIn_1_bits_data_2 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_3_2;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_io_bankIn_1_bits_data_3 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_3_3;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_io_bankIn_1_bits_data_0 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_3_0;
    } else if (vlSelf->pipe__DOT__operand_collector__DOT__crossBar__DOT____VdfgTmp_h5f02e639__0) {
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_io_bankIn_1_bits_data_1 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_2_1;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_io_bankIn_1_bits_data_2 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_2_2;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_io_bankIn_1_bits_data_3 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_2_3;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_io_bankIn_1_bits_data_0 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_2_0;
    } else if (vlSelf->pipe__DOT__operand_collector__DOT__crossBar__DOT____VdfgTmp_hea31b5b0__0) {
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_io_bankIn_1_bits_data_1 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_1_1;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_io_bankIn_1_bits_data_2 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_1_2;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_io_bankIn_1_bits_data_3 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_1_3;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_io_bankIn_1_bits_data_0 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_1_0;
    } else if (vlSelf->pipe__DOT__operand_collector__DOT__crossBar__DOT____VdfgTmp_hbdb3622b__0) {
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_io_bankIn_1_bits_data_1 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_0_1;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_io_bankIn_1_bits_data_2 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_0_2;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_io_bankIn_1_bits_data_3 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_0_3;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_io_bankIn_1_bits_data_0 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_0_0;
    } else {
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_io_bankIn_1_bits_data_1 = 0U;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_io_bankIn_1_bits_data_2 = 0U;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_io_bankIn_1_bits_data_3 = 0U;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_io_bankIn_1_bits_data_0 = 0U;
    }
    if (vlSelf->pipe__DOT__operand_collector__DOT__crossBar__DOT____VdfgTmp_hdd8961ab__0) {
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_1_io_bankIn_1_bits_data_1 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_3_1;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_1_io_bankIn_1_bits_data_2 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_3_2;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_1_io_bankIn_1_bits_data_3 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_3_3;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_1_io_bankIn_1_bits_data_0 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_3_0;
    } else if (vlSelf->pipe__DOT__operand_collector__DOT__crossBar__DOT____VdfgTmp_hc4956fa7__0) {
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_1_io_bankIn_1_bits_data_1 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_2_1;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_1_io_bankIn_1_bits_data_2 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_2_2;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_1_io_bankIn_1_bits_data_3 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_2_3;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_1_io_bankIn_1_bits_data_0 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_2_0;
    } else if (vlSelf->pipe__DOT__operand_collector__DOT__crossBar__DOT____VdfgTmp_h59a05ca9__0) {
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_1_io_bankIn_1_bits_data_1 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_1_1;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_1_io_bankIn_1_bits_data_2 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_1_2;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_1_io_bankIn_1_bits_data_3 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_1_3;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_1_io_bankIn_1_bits_data_0 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_1_0;
    } else if (vlSelf->pipe__DOT__operand_collector__DOT__crossBar__DOT____VdfgTmp_h67f95e2c__0) {
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_1_io_bankIn_1_bits_data_1 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_0_1;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_1_io_bankIn_1_bits_data_2 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_0_2;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_1_io_bankIn_1_bits_data_3 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_0_3;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_1_io_bankIn_1_bits_data_0 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_0_0;
    } else {
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_1_io_bankIn_1_bits_data_1 = 0U;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_1_io_bankIn_1_bits_data_2 = 0U;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_1_io_bankIn_1_bits_data_3 = 0U;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_1_io_bankIn_1_bits_data_0 = 0U;
    }
    if (vlSelf->pipe__DOT__operand_collector__DOT__crossBar__DOT____VdfgTmp_h3372bece__0) {
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2_io_bankIn_1_bits_data_1 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_3_1;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2_io_bankIn_1_bits_data_2 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_3_2;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2_io_bankIn_1_bits_data_3 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_3_3;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2_io_bankIn_1_bits_data_0 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_3_0;
    } else if (vlSelf->pipe__DOT__operand_collector__DOT__crossBar__DOT____VdfgTmp_hd117269f__0) {
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2_io_bankIn_1_bits_data_1 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_2_1;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2_io_bankIn_1_bits_data_2 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_2_2;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2_io_bankIn_1_bits_data_3 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_2_3;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2_io_bankIn_1_bits_data_0 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_2_0;
    } else if (vlSelf->pipe__DOT__operand_collector__DOT__crossBar__DOT____VdfgTmp_h1f35ca4c__0) {
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2_io_bankIn_1_bits_data_1 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_1_1;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2_io_bankIn_1_bits_data_2 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_1_2;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2_io_bankIn_1_bits_data_3 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_1_3;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2_io_bankIn_1_bits_data_0 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_1_0;
    } else if (vlSelf->pipe__DOT__operand_collector__DOT__crossBar__DOT____VdfgTmp_h91d91fd5__0) {
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2_io_bankIn_1_bits_data_1 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_0_1;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2_io_bankIn_1_bits_data_2 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_0_2;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2_io_bankIn_1_bits_data_3 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_0_3;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2_io_bankIn_1_bits_data_0 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_0_0;
    } else {
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2_io_bankIn_1_bits_data_1 = 0U;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2_io_bankIn_1_bits_data_2 = 0U;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2_io_bankIn_1_bits_data_3 = 0U;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2_io_bankIn_1_bits_data_0 = 0U;
    }
    if (vlSelf->pipe__DOT__operand_collector__DOT__crossBar__DOT____VdfgTmp_h02e2e9d6__0) {
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3_io_bankIn_1_bits_data_1 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_3_1;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3_io_bankIn_1_bits_data_2 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_3_2;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3_io_bankIn_1_bits_data_3 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_3_3;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3_io_bankIn_1_bits_data_0 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_3_0;
    } else if (vlSelf->pipe__DOT__operand_collector__DOT__crossBar__DOT____VdfgTmp_h82c195dd__0) {
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3_io_bankIn_1_bits_data_1 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_2_1;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3_io_bankIn_1_bits_data_2 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_2_2;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3_io_bankIn_1_bits_data_3 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_2_3;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3_io_bankIn_1_bits_data_0 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_2_0;
    } else if (vlSelf->pipe__DOT__operand_collector__DOT__crossBar__DOT____VdfgTmp_h4c8c3b6c__0) {
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3_io_bankIn_1_bits_data_1 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_1_1;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3_io_bankIn_1_bits_data_2 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_1_2;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3_io_bankIn_1_bits_data_3 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_1_3;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3_io_bankIn_1_bits_data_0 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_1_0;
    } else if (vlSelf->pipe__DOT__operand_collector__DOT__crossBar__DOT____VdfgTmp_h2725150f__0) {
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3_io_bankIn_1_bits_data_1 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_0_1;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3_io_bankIn_1_bits_data_2 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_0_2;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3_io_bankIn_1_bits_data_3 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_0_3;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3_io_bankIn_1_bits_data_0 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_0_0;
    } else {
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3_io_bankIn_1_bits_data_1 = 0U;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3_io_bankIn_1_bits_data_2 = 0U;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3_io_bankIn_1_bits_data_3 = 0U;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3_io_bankIn_1_bits_data_0 = 0U;
    }
    if (vlSelf->pipe__DOT__operand_collector__DOT__crossBar__DOT____VdfgTmp_h4e1c0c70__0) {
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_io_bankIn_0_bits_data_1 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_3_1;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_io_bankIn_0_bits_data_2 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_3_2;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_io_bankIn_0_bits_data_3 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_3_3;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_io_bankIn_0_bits_data_0 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_3_0;
    } else if (vlSelf->pipe__DOT__operand_collector__DOT__crossBar__DOT____VdfgTmp_h5f276887__0) {
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_io_bankIn_0_bits_data_1 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_2_1;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_io_bankIn_0_bits_data_2 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_2_2;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_io_bankIn_0_bits_data_3 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_2_3;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_io_bankIn_0_bits_data_0 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_2_0;
    } else if (vlSelf->pipe__DOT__operand_collector__DOT__crossBar__DOT____VdfgTmp_hea550bb6__0) {
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_io_bankIn_0_bits_data_1 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_1_1;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_io_bankIn_0_bits_data_2 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_1_2;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_io_bankIn_0_bits_data_3 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_1_3;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_io_bankIn_0_bits_data_0 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_1_0;
    } else if (vlSelf->pipe__DOT__operand_collector__DOT__crossBar__DOT____VdfgTmp_hbd563191__0) {
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_io_bankIn_0_bits_data_1 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_0_1;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_io_bankIn_0_bits_data_2 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_0_2;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_io_bankIn_0_bits_data_3 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_0_3;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_io_bankIn_0_bits_data_0 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_0_0;
    } else {
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_io_bankIn_0_bits_data_1 = 0U;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_io_bankIn_0_bits_data_2 = 0U;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_io_bankIn_0_bits_data_3 = 0U;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_io_bankIn_0_bits_data_0 = 0U;
    }
    if (vlSelf->pipe__DOT__operand_collector__DOT__crossBar__DOT____VdfgTmp_hdde29fab__0) {
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_1_io_bankIn_0_bits_data_1 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_3_1;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_1_io_bankIn_0_bits_data_2 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_3_2;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_1_io_bankIn_0_bits_data_3 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_3_3;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_1_io_bankIn_0_bits_data_0 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_3_0;
    } else if (vlSelf->pipe__DOT__operand_collector__DOT__crossBar__DOT____VdfgTmp_hbb70f8d5__0) {
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_1_io_bankIn_0_bits_data_1 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_2_1;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_1_io_bankIn_0_bits_data_2 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_2_2;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_1_io_bankIn_0_bits_data_3 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_2_3;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_1_io_bankIn_0_bits_data_0 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_2_0;
    } else if (vlSelf->pipe__DOT__operand_collector__DOT__crossBar__DOT____VdfgTmp_h599ccf53__0) {
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_1_io_bankIn_0_bits_data_1 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_1_1;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_1_io_bankIn_0_bits_data_2 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_1_2;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_1_io_bankIn_0_bits_data_3 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_1_3;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_1_io_bankIn_0_bits_data_0 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_1_0;
    } else if (vlSelf->pipe__DOT__operand_collector__DOT__crossBar__DOT____VdfgTmp_h67a2b066__0) {
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_1_io_bankIn_0_bits_data_1 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_0_1;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_1_io_bankIn_0_bits_data_2 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_0_2;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_1_io_bankIn_0_bits_data_3 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_0_3;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_1_io_bankIn_0_bits_data_0 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_0_0;
    } else {
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_1_io_bankIn_0_bits_data_1 = 0U;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_1_io_bankIn_0_bits_data_2 = 0U;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_1_io_bankIn_0_bits_data_3 = 0U;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_1_io_bankIn_0_bits_data_0 = 0U;
    }
    if (vlSelf->pipe__DOT__operand_collector__DOT__crossBar__DOT____VdfgTmp_h32d468ce__0) {
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2_io_bankIn_0_bits_data_1 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_3_1;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2_io_bankIn_0_bits_data_2 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_3_2;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2_io_bankIn_0_bits_data_3 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_3_3;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2_io_bankIn_0_bits_data_0 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_3_0;
    } else if (vlSelf->pipe__DOT__operand_collector__DOT__crossBar__DOT____VdfgTmp_hd1f4b00d__0) {
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2_io_bankIn_0_bits_data_1 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_2_1;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2_io_bankIn_0_bits_data_2 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_2_2;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2_io_bankIn_0_bits_data_3 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_2_3;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2_io_bankIn_0_bits_data_0 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_2_0;
    } else if (vlSelf->pipe__DOT__operand_collector__DOT__crossBar__DOT____VdfgTmp_h1f115c72__0) {
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2_io_bankIn_0_bits_data_1 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_1_1;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2_io_bankIn_0_bits_data_2 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_1_2;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2_io_bankIn_0_bits_data_3 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_1_3;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2_io_bankIn_0_bits_data_0 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_1_0;
    } else if (vlSelf->pipe__DOT__operand_collector__DOT__crossBar__DOT____VdfgTmp_h91824993__0) {
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2_io_bankIn_0_bits_data_1 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_0_1;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2_io_bankIn_0_bits_data_2 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_0_2;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2_io_bankIn_0_bits_data_3 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_0_3;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2_io_bankIn_0_bits_data_0 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_0_0;
    } else {
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2_io_bankIn_0_bits_data_1 = 0U;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2_io_bankIn_0_bits_data_2 = 0U;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2_io_bankIn_0_bits_data_3 = 0U;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_2_io_bankIn_0_bits_data_0 = 0U;
    }
    if (vlSelf->pipe__DOT__operand_collector__DOT__crossBar__DOT____VdfgTmp_h028cbbd6__0) {
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3_io_bankIn_0_bits_data_1 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_3_1;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3_io_bankIn_0_bits_data_2 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_3_2;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3_io_bankIn_0_bits_data_3 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_3_3;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3_io_bankIn_0_bits_data_0 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_3_0;
    } else if (vlSelf->pipe__DOT__operand_collector__DOT__crossBar__DOT____VdfgTmp_h82a6032f__0) {
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3_io_bankIn_0_bits_data_1 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_2_1;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3_io_bankIn_0_bits_data_2 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_2_2;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3_io_bankIn_0_bits_data_3 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_2_3;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3_io_bankIn_0_bits_data_0 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_2_0;
    } else if (vlSelf->pipe__DOT__operand_collector__DOT__crossBar__DOT____VdfgTmp_h4ce9b56a__0) {
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3_io_bankIn_0_bits_data_1 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_1_1;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3_io_bankIn_0_bits_data_2 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_1_2;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3_io_bankIn_0_bits_data_3 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_1_3;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3_io_bankIn_0_bits_data_0 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_1_0;
    } else if (vlSelf->pipe__DOT__operand_collector__DOT__crossBar__DOT____VdfgTmp_h2742a345__0) {
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3_io_bankIn_0_bits_data_1 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_0_1;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3_io_bankIn_0_bits_data_2 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_0_2;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3_io_bankIn_0_bits_data_3 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_0_3;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3_io_bankIn_0_bits_data_0 
            = vlSelf->__PVT__pipe__DOT__operand_collector__DOT__crossBar_io_dataIn_rs_0_0;
    } else {
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3_io_bankIn_0_bits_data_1 = 0U;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3_io_bankIn_0_bits_data_2 = 0U;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3_io_bankIn_0_bits_data_3 = 0U;
        vlSelf->__PVT__pipe__DOT__operand_collector__DOT__collectorUnit_3_io_bankIn_0_bits_data_0 = 0U;
    }
}
