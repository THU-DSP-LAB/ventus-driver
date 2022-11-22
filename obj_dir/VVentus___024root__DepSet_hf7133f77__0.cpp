// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VVentus.h for the primary calling header

#include "verilated.h"

#include "VVentus___024root.h"

void VVentus___024root___eval_act(VVentus___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VVentus__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VVentus___024root___eval_act\n"); );
}

VL_INLINE_OPT void VVentus___024root___nba_sequent__TOP__3(VVentus___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VVentus__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VVentus___024root___nba_sequent__TOP__3\n"); );
    // Body
    vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_0__DOT___GEN_15 
        = ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_0_io_sinkd_valid) 
           | ((~ ((((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__wipeCount) 
                    >> 1U) & (0U == (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__requests__DOT__head_pop_head_addr))) 
                  & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_0__DOT__sche_dir_valid))) 
              & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_0__DOT__sche_dir_valid)));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_0__DOT___GEN_16 
        = ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_0_io_sinkd_valid) 
           | ((~ (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_0_io_allocate_valid)) 
              & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_0__DOT__sink_d_reg)));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_1__DOT___GEN_15 
        = ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_1_io_sinkd_valid) 
           | ((~ ((((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__wipeCount) 
                    >> 1U) & (1U == (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__requests__DOT__head_pop_head_addr))) 
                  & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_1__DOT__sche_dir_valid))) 
              & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_1__DOT__sche_dir_valid)));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_1__DOT___GEN_16 
        = ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_1_io_sinkd_valid) 
           | ((~ (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_1_io_allocate_valid)) 
              & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_1__DOT__sink_d_reg)));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_2__DOT___GEN_15 
        = ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_2_io_sinkd_valid) 
           | ((~ ((((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__wipeCount) 
                    >> 1U) & (2U == (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__requests__DOT__head_pop_head_addr))) 
                  & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_2__DOT__sche_dir_valid))) 
              & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_2__DOT__sche_dir_valid)));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_2__DOT___GEN_16 
        = ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_2_io_sinkd_valid) 
           | ((~ (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_2_io_allocate_valid)) 
              & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_2__DOT__sink_d_reg)));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_3__DOT___GEN_15 
        = ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_3_io_sinkd_valid) 
           | ((~ ((((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__wipeCount) 
                    >> 1U) & (3U == (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__requests__DOT__head_pop_head_addr))) 
                  & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_3__DOT__sche_dir_valid))) 
              & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_3__DOT__sche_dir_valid)));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_3__DOT___GEN_16 
        = ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_3_io_sinkd_valid) 
           | ((~ (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_3_io_allocate_valid)) 
              & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_3__DOT__sink_d_reg)));
}

void VVentus___024root___eval_triggers__ico(VVentus___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VVentus___024root___dump_triggers__ico(VVentus___024root* vlSelf);
#endif  // VL_DEBUG
void VVentus___024root___eval_ico(VVentus___024root* vlSelf);
void VVentus___024root___eval_triggers__act(VVentus___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VVentus___024root___dump_triggers__act(VVentus___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VVentus___024root___dump_triggers__nba(VVentus___024root* vlSelf);
#endif  // VL_DEBUG
void VVentus___024root___eval_nba(VVentus___024root* vlSelf);

void VVentus___024root___eval(VVentus___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VVentus__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VVentus___024root___eval\n"); );
    // Init
    CData/*0:0*/ __VicoContinue;
    VlTriggerVec<1> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    vlSelf->__VicoIterCount = 0U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        __VicoContinue = 0U;
        VVentus___024root___eval_triggers__ico(vlSelf);
        if (vlSelf->__VicoTriggered.any()) {
            __VicoContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VicoIterCount))) {
#ifdef VL_DEBUG
                VVentus___024root___dump_triggers__ico(vlSelf);
#endif
                VL_FATAL_MT("Ventus.v", 75594, "", "Input combinational region did not converge.");
            }
            vlSelf->__VicoIterCount = ((IData)(1U) 
                                       + vlSelf->__VicoIterCount);
            VVentus___024root___eval_ico(vlSelf);
        }
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            VVentus___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    VVentus___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("Ventus.v", 75594, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                VVentus___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                VVentus___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("Ventus.v", 75594, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            VVentus___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void VVentus___024root___eval_debug_assertions(VVentus___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VVentus__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VVentus___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((vlSelf->io_host_req_valid & 0xfeU))) {
        Verilated::overWidthError("io_host_req_valid");}
    if (VL_UNLIKELY((vlSelf->io_host_req_bits_host_wg_id 
                     & 0xe0U))) {
        Verilated::overWidthError("io_host_req_bits_host_wg_id");}
    if (VL_UNLIKELY((vlSelf->io_host_req_bits_host_num_wf 
                     & 0xf8U))) {
        Verilated::overWidthError("io_host_req_bits_host_num_wf");}
    if (VL_UNLIKELY((vlSelf->io_host_req_bits_host_wf_size 
                     & 0xfc00U))) {
        Verilated::overWidthError("io_host_req_bits_host_wf_size");}
    if (VL_UNLIKELY((vlSelf->io_host_req_bits_host_vgpr_size_total 
                     & 0xe000U))) {
        Verilated::overWidthError("io_host_req_bits_host_vgpr_size_total");}
    if (VL_UNLIKELY((vlSelf->io_host_req_bits_host_sgpr_size_total 
                     & 0xe000U))) {
        Verilated::overWidthError("io_host_req_bits_host_sgpr_size_total");}
    if (VL_UNLIKELY((vlSelf->io_host_req_bits_host_lds_size_total 
                     & 0xe000U))) {
        Verilated::overWidthError("io_host_req_bits_host_lds_size_total");}
    if (VL_UNLIKELY((vlSelf->io_host_req_bits_host_gds_size_total 
                     & 0xf800U))) {
        Verilated::overWidthError("io_host_req_bits_host_gds_size_total");}
    if (VL_UNLIKELY((vlSelf->io_host_req_bits_host_vgpr_size_per_wf 
                     & 0xe000U))) {
        Verilated::overWidthError("io_host_req_bits_host_vgpr_size_per_wf");}
    if (VL_UNLIKELY((vlSelf->io_host_req_bits_host_sgpr_size_per_wf 
                     & 0xe000U))) {
        Verilated::overWidthError("io_host_req_bits_host_sgpr_size_per_wf");}
    if (VL_UNLIKELY((vlSelf->io_host_rsp_ready & 0xfeU))) {
        Verilated::overWidthError("io_host_rsp_ready");}
    if (VL_UNLIKELY((vlSelf->io_out_a_ready & 0xfeU))) {
        Verilated::overWidthError("io_out_a_ready");}
    if (VL_UNLIKELY((vlSelf->io_out_d_valid & 0xfeU))) {
        Verilated::overWidthError("io_out_d_valid");}
    if (VL_UNLIKELY((vlSelf->io_out_d_bits_opcode & 0xf8U))) {
        Verilated::overWidthError("io_out_d_bits_opcode");}
    if (VL_UNLIKELY((vlSelf->io_out_d_bits_size & 0xf0U))) {
        Verilated::overWidthError("io_out_d_bits_size");}
    if (VL_UNLIKELY((vlSelf->io_out_d_bits_source & 0xf0U))) {
        Verilated::overWidthError("io_out_d_bits_source");}
}
#endif  // VL_DEBUG
