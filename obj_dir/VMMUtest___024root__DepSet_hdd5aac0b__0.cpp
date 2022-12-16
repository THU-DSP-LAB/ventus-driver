// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMMUtest.h for the primary calling header

#include "verilated.h"

#include "VMMUtest___024root.h"

VL_INLINE_OPT void VMMUtest___024root___ico_sequent__TOP__0(VMMUtest___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMMUtest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMMUtest___024root___ico_sequent__TOP__0\n"); );
    // Body
    vlSelf->MMUtest__DOT__mmu__DOT__tlb__DOT__l2tlb_req_fifo__DOT__ram_addr_MPORT_en 
        = ((IData)(vlSelf->io_host_req_ready) & (IData)(vlSelf->io_host_req_valid));
    vlSelf->MMUtest__DOT__mmu__DOT__tlb__DOT__tlb_rsp_fifo__DOT__do_deq 
        = ((IData)(vlSelf->MMUtest__DOT__mmu__DOT__tlb__DOT__tlb_rsp_fifo__DOT__maybe_full) 
           & (IData)(vlSelf->io_host_rsp_ready));
    vlSelf->MMUtest__DOT__mmu__DOT__ll_page_cache__DOT__mem_req_fifo__DOT__do_deq 
        = ((IData)(vlSelf->MMUtest__DOT__mmu__DOT__ll_page_cache__DOT__mem_req_fifo__DOT__maybe_full) 
           & (IData)(vlSelf->io_out_a_ready));
    vlSelf->io_out_d_ready = (0U != (((IData)(1U) << 
                                      (1U & ((IData)(vlSelf->io_out_d_bits_source) 
                                             >> 2U))) 
                                     & ((2U & ((~ (IData)(vlSelf->MMUtest__DOT__mmu__DOT__page_cache__DOT__mem_rsp_fifo__DOT__maybe_full)) 
                                               << 1U)) 
                                        | (1U & (~ (IData)(vlSelf->MMUtest__DOT__mmu__DOT__ll_page_cache__DOT__mem_rsp_fifo__DOT__maybe_full))))));
    vlSelf->MMUtest__DOT__mmu__DOT__page_cache__DOT__mem_req_fifo__DOT__do_deq 
        = (((~ (IData)(vlSelf->MMUtest__DOT__mmu__DOT__ll_page_cache__DOT__mem_req_fifo__DOT__maybe_full)) 
            & (IData)(vlSelf->io_out_a_ready)) & (IData)(vlSelf->MMUtest__DOT__mmu__DOT__page_cache__DOT__mem_req_fifo__DOT__maybe_full));
    vlSelf->MMUtest__DOT__mmu__DOT__page_cache__DOT__mem_rsp_fifo__DOT__ram_addr_MPORT_en 
        = ((~ (IData)(vlSelf->MMUtest__DOT__mmu__DOT__page_cache__DOT__mem_rsp_fifo__DOT__maybe_full)) 
           & (((IData)(vlSelf->io_out_d_bits_source) 
               >> 2U) & (IData)(vlSelf->io_out_d_valid)));
    vlSelf->MMUtest__DOT__mmu__DOT__ll_page_cache__DOT__mem_rsp_fifo__DOT__ram_addr_MPORT_en 
        = ((~ (IData)(vlSelf->MMUtest__DOT__mmu__DOT__ll_page_cache__DOT__mem_rsp_fifo__DOT__maybe_full)) 
           & ((~ ((IData)(vlSelf->io_out_d_bits_source) 
                  >> 2U)) & (IData)(vlSelf->io_out_d_valid)));
}

void VMMUtest___024root___eval_ico(VMMUtest___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMMUtest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMMUtest___024root___eval_ico\n"); );
    // Body
    if (vlSelf->__VicoTriggered.at(0U)) {
        VMMUtest___024root___ico_sequent__TOP__0(vlSelf);
    }
}

void VMMUtest___024root___eval_act(VMMUtest___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMMUtest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMMUtest___024root___eval_act\n"); );
}

VL_INLINE_OPT void VMMUtest___024root___nba_sequent__TOP__0(VMMUtest___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMMUtest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMMUtest___024root___nba_sequent__TOP__0\n"); );
    // Init
    QData/*63:0*/ MMUtest__DOT__mmu__DOT__ptw_io_ll_req_bits_addr;
    CData/*1:0*/ MMUtest__DOT__mmu__DOT__ptw__DOT__llreq_arb_io_out_bits_source;
    CData/*1:0*/ MMUtest__DOT__mmu__DOT__ptw__DOT__enq_ptr;
    CData/*1:0*/ MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_20;
    CData/*1:0*/ MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_21;
    CData/*1:0*/ MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_22;
    CData/*1:0*/ MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_23;
    CData/*1:0*/ MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_24;
    CData/*1:0*/ MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_25;
    CData/*1:0*/ MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_26;
    CData/*1:0*/ MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_27;
    QData/*43:0*/ MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_32;
    QData/*43:0*/ MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_33;
    QData/*43:0*/ MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_34;
    QData/*43:0*/ MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_35;
    CData/*1:0*/ MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_44;
    CData/*1:0*/ MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_45;
    CData/*1:0*/ MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_46;
    CData/*1:0*/ MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_47;
    CData/*0:0*/ MMUtest__DOT__mmu__DOT__ptw__DOT____VdfgTmp_h2ef22fef__0;
    CData/*0:0*/ MMUtest__DOT__mmu__DOT__ptw__DOT____VdfgTmp_h9b841bc6__0;
    CData/*0:0*/ MMUtest__DOT__mmu__DOT__ptw__DOT____VdfgTmp_h1087adb7__0;
    CData/*0:0*/ MMUtest__DOT__mmu__DOT__ptw__DOT____VdfgTmp_h58a007a5__0;
    CData/*1:0*/ MMUtest__DOT__mmu__DOT__llptw__DOT__enq_ptr;
    CData/*1:0*/ MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_12;
    CData/*1:0*/ MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_13;
    CData/*1:0*/ MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_14;
    CData/*1:0*/ MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_15;
    QData/*63:0*/ MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_16;
    QData/*63:0*/ MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_17;
    QData/*63:0*/ MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_18;
    QData/*63:0*/ MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_19;
    CData/*1:0*/ MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_28;
    CData/*1:0*/ MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_29;
    CData/*1:0*/ MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_30;
    CData/*1:0*/ MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_31;
    CData/*0:0*/ MMUtest__DOT__mmu__DOT__llptw__DOT____VdfgTmp_h2ef22fef__0;
    CData/*0:0*/ MMUtest__DOT__mmu__DOT__llptw__DOT____VdfgTmp_h9b841bc6__0;
    CData/*0:0*/ MMUtest__DOT__mmu__DOT__llptw__DOT____VdfgTmp_h1087adb7__0;
    CData/*0:0*/ MMUtest__DOT__mmu__DOT__llptw__DOT____VdfgTmp_h58a007a5__0;
    QData/*63:0*/ __Vdlyvval__MMUtest__DOT__mmu__DOT__tlb__DOT__l2tlb_req_fifo__DOT__ram_addr__v0;
    CData/*0:0*/ __Vdlyvset__MMUtest__DOT__mmu__DOT__tlb__DOT__l2tlb_req_fifo__DOT__ram_addr__v0;
    QData/*63:0*/ __Vdlyvval__MMUtest__DOT__mmu__DOT__tlb__DOT__l2tlb_req_fifo__DOT__ram_PTBR__v0;
    CData/*0:0*/ __Vdlyvset__MMUtest__DOT__mmu__DOT__tlb__DOT__l2tlb_req_fifo__DOT__ram_PTBR__v0;
    CData/*1:0*/ __Vdlyvval__MMUtest__DOT__mmu__DOT__tlb__DOT__l2tlb_req_fifo__DOT__ram_source__v0;
    CData/*0:0*/ __Vdlyvset__MMUtest__DOT__mmu__DOT__tlb__DOT__l2tlb_req_fifo__DOT__ram_source__v0;
    QData/*63:0*/ __Vdlyvval__MMUtest__DOT__mmu__DOT__tlb__DOT__tlb_rsp_fifo__DOT__ram_addr__v0;
    CData/*0:0*/ __Vdlyvset__MMUtest__DOT__mmu__DOT__tlb__DOT__tlb_rsp_fifo__DOT__ram_addr__v0;
    CData/*1:0*/ __Vdlyvval__MMUtest__DOT__mmu__DOT__tlb__DOT__tlb_rsp_fifo__DOT__ram_source__v0;
    CData/*0:0*/ __Vdlyvset__MMUtest__DOT__mmu__DOT__tlb__DOT__tlb_rsp_fifo__DOT__ram_source__v0;
    QData/*63:0*/ __Vdlyvval__MMUtest__DOT__mmu__DOT__l2tlb__DOT__ptw_req_fifo__DOT__ram_addr__v0;
    CData/*0:0*/ __Vdlyvset__MMUtest__DOT__mmu__DOT__l2tlb__DOT__ptw_req_fifo__DOT__ram_addr__v0;
    QData/*63:0*/ __Vdlyvval__MMUtest__DOT__mmu__DOT__l2tlb__DOT__ptw_req_fifo__DOT__ram_PTBR__v0;
    CData/*0:0*/ __Vdlyvset__MMUtest__DOT__mmu__DOT__l2tlb__DOT__ptw_req_fifo__DOT__ram_PTBR__v0;
    CData/*1:0*/ __Vdlyvval__MMUtest__DOT__mmu__DOT__l2tlb__DOT__ptw_req_fifo__DOT__ram_source__v0;
    CData/*0:0*/ __Vdlyvset__MMUtest__DOT__mmu__DOT__l2tlb__DOT__ptw_req_fifo__DOT__ram_source__v0;
    QData/*63:0*/ __Vdlyvval__MMUtest__DOT__mmu__DOT__l2tlb__DOT__l2tlb_rsp_fifo__DOT__ram_addr__v0;
    CData/*0:0*/ __Vdlyvset__MMUtest__DOT__mmu__DOT__l2tlb__DOT__l2tlb_rsp_fifo__DOT__ram_addr__v0;
    CData/*1:0*/ __Vdlyvval__MMUtest__DOT__mmu__DOT__l2tlb__DOT__l2tlb_rsp_fifo__DOT__ram_source__v0;
    CData/*0:0*/ __Vdlyvset__MMUtest__DOT__mmu__DOT__l2tlb__DOT__l2tlb_rsp_fifo__DOT__ram_source__v0;
    QData/*63:0*/ __Vdlyvval__MMUtest__DOT__mmu__DOT__page_cache__DOT__mem_req_fifo__DOT__ram_addr__v0;
    CData/*0:0*/ __Vdlyvset__MMUtest__DOT__mmu__DOT__page_cache__DOT__mem_req_fifo__DOT__ram_addr__v0;
    CData/*1:0*/ __Vdlyvval__MMUtest__DOT__mmu__DOT__page_cache__DOT__mem_req_fifo__DOT__ram_source__v0;
    CData/*0:0*/ __Vdlyvset__MMUtest__DOT__mmu__DOT__page_cache__DOT__mem_req_fifo__DOT__ram_source__v0;
    QData/*63:0*/ __Vdlyvval__MMUtest__DOT__mmu__DOT__page_cache__DOT__mem_rsp_fifo__DOT__ram_addr__v0;
    CData/*0:0*/ __Vdlyvset__MMUtest__DOT__mmu__DOT__page_cache__DOT__mem_rsp_fifo__DOT__ram_addr__v0;
    CData/*1:0*/ __Vdlyvval__MMUtest__DOT__mmu__DOT__page_cache__DOT__mem_rsp_fifo__DOT__ram_source__v0;
    CData/*0:0*/ __Vdlyvset__MMUtest__DOT__mmu__DOT__page_cache__DOT__mem_rsp_fifo__DOT__ram_source__v0;
    QData/*63:0*/ __Vdlyvval__MMUtest__DOT__mmu__DOT__ll_page_cache__DOT__mem_req_fifo__DOT__ram_addr__v0;
    CData/*0:0*/ __Vdlyvset__MMUtest__DOT__mmu__DOT__ll_page_cache__DOT__mem_req_fifo__DOT__ram_addr__v0;
    CData/*1:0*/ __Vdlyvval__MMUtest__DOT__mmu__DOT__ll_page_cache__DOT__mem_req_fifo__DOT__ram_source__v0;
    CData/*0:0*/ __Vdlyvset__MMUtest__DOT__mmu__DOT__ll_page_cache__DOT__mem_req_fifo__DOT__ram_source__v0;
    QData/*63:0*/ __Vdlyvval__MMUtest__DOT__mmu__DOT__ll_page_cache__DOT__mem_rsp_fifo__DOT__ram_addr__v0;
    CData/*0:0*/ __Vdlyvset__MMUtest__DOT__mmu__DOT__ll_page_cache__DOT__mem_rsp_fifo__DOT__ram_addr__v0;
    CData/*1:0*/ __Vdlyvval__MMUtest__DOT__mmu__DOT__ll_page_cache__DOT__mem_rsp_fifo__DOT__ram_source__v0;
    CData/*0:0*/ __Vdlyvset__MMUtest__DOT__mmu__DOT__ll_page_cache__DOT__mem_rsp_fifo__DOT__ram_source__v0;
    // Body
    __Vdlyvset__MMUtest__DOT__mmu__DOT__tlb__DOT__l2tlb_req_fifo__DOT__ram_source__v0 = 0U;
    __Vdlyvset__MMUtest__DOT__mmu__DOT__tlb__DOT__l2tlb_req_fifo__DOT__ram_PTBR__v0 = 0U;
    __Vdlyvset__MMUtest__DOT__mmu__DOT__tlb__DOT__l2tlb_req_fifo__DOT__ram_addr__v0 = 0U;
    __Vdlyvset__MMUtest__DOT__mmu__DOT__tlb__DOT__tlb_rsp_fifo__DOT__ram_addr__v0 = 0U;
    __Vdlyvset__MMUtest__DOT__mmu__DOT__tlb__DOT__tlb_rsp_fifo__DOT__ram_source__v0 = 0U;
    __Vdlyvset__MMUtest__DOT__mmu__DOT__ll_page_cache__DOT__mem_rsp_fifo__DOT__ram_addr__v0 = 0U;
    __Vdlyvset__MMUtest__DOT__mmu__DOT__page_cache__DOT__mem_rsp_fifo__DOT__ram_addr__v0 = 0U;
    __Vdlyvset__MMUtest__DOT__mmu__DOT__l2tlb__DOT__ptw_req_fifo__DOT__ram_source__v0 = 0U;
    __Vdlyvset__MMUtest__DOT__mmu__DOT__l2tlb__DOT__ptw_req_fifo__DOT__ram_addr__v0 = 0U;
    __Vdlyvset__MMUtest__DOT__mmu__DOT__l2tlb__DOT__ptw_req_fifo__DOT__ram_PTBR__v0 = 0U;
    __Vdlyvset__MMUtest__DOT__mmu__DOT__ll_page_cache__DOT__mem_rsp_fifo__DOT__ram_source__v0 = 0U;
    if (VL_UNLIKELY((((IData)(vlSelf->MMUtest__DOT__mmu__DOT__tlb__DOT__tlb_rsp_fifo__DOT__maybe_full) 
                      & (IData)(vlSelf->io_host_rsp_ready)) 
                     & (~ (IData)(vlSelf->reset))))) {
        VL_FWRITEF(0x80000002U,"addr translate complete, target is 0x%x for 0x%1#",
                   64,vlSelf->MMUtest__DOT__mmu__DOT__tlb__DOT__tlb_rsp_fifo__DOT__ram_addr
                   [0U],2,vlSelf->MMUtest__DOT__mmu__DOT__tlb__DOT__tlb_rsp_fifo__DOT__ram_source
                   [0U]);
    }
    __Vdlyvset__MMUtest__DOT__mmu__DOT__page_cache__DOT__mem_rsp_fifo__DOT__ram_source__v0 = 0U;
    __Vdlyvset__MMUtest__DOT__mmu__DOT__l2tlb__DOT__l2tlb_rsp_fifo__DOT__ram_addr__v0 = 0U;
    __Vdlyvset__MMUtest__DOT__mmu__DOT__ll_page_cache__DOT__mem_req_fifo__DOT__ram_addr__v0 = 0U;
    __Vdlyvset__MMUtest__DOT__mmu__DOT__l2tlb__DOT__l2tlb_rsp_fifo__DOT__ram_source__v0 = 0U;
    __Vdlyvset__MMUtest__DOT__mmu__DOT__ll_page_cache__DOT__mem_req_fifo__DOT__ram_source__v0 = 0U;
    __Vdlyvset__MMUtest__DOT__mmu__DOT__page_cache__DOT__mem_req_fifo__DOT__ram_source__v0 = 0U;
    __Vdlyvset__MMUtest__DOT__mmu__DOT__page_cache__DOT__mem_req_fifo__DOT__ram_addr__v0 = 0U;
    if (vlSelf->MMUtest__DOT__mmu__DOT__tlb__DOT__l2tlb_req_fifo__DOT__ram_addr_MPORT_en) {
        __Vdlyvval__MMUtest__DOT__mmu__DOT__tlb__DOT__l2tlb_req_fifo__DOT__ram_source__v0 
            = (3U & (IData)(vlSelf->io_host_req_bits_host_wg_id));
        __Vdlyvset__MMUtest__DOT__mmu__DOT__tlb__DOT__l2tlb_req_fifo__DOT__ram_source__v0 = 1U;
        __Vdlyvval__MMUtest__DOT__mmu__DOT__tlb__DOT__l2tlb_req_fifo__DOT__ram_PTBR__v0 
            = (QData)((IData)(vlSelf->io_host_req_bits_host_gds_baseaddr));
        __Vdlyvset__MMUtest__DOT__mmu__DOT__tlb__DOT__l2tlb_req_fifo__DOT__ram_PTBR__v0 = 1U;
        __Vdlyvval__MMUtest__DOT__mmu__DOT__tlb__DOT__l2tlb_req_fifo__DOT__ram_addr__v0 
            = (QData)((IData)(vlSelf->io_host_req_bits_host_start_pc));
        __Vdlyvset__MMUtest__DOT__mmu__DOT__tlb__DOT__l2tlb_req_fifo__DOT__ram_addr__v0 = 1U;
    }
    if (vlSelf->MMUtest__DOT__mmu__DOT__tlb__DOT__tlb_rsp_fifo__DOT__ram_addr_MPORT_en) {
        __Vdlyvval__MMUtest__DOT__mmu__DOT__tlb__DOT__tlb_rsp_fifo__DOT__ram_addr__v0 
            = vlSelf->MMUtest__DOT__mmu__DOT__l2tlb__DOT__l2tlb_rsp_fifo__DOT__ram_addr
            [0U];
        __Vdlyvset__MMUtest__DOT__mmu__DOT__tlb__DOT__tlb_rsp_fifo__DOT__ram_addr__v0 = 1U;
        __Vdlyvval__MMUtest__DOT__mmu__DOT__tlb__DOT__tlb_rsp_fifo__DOT__ram_source__v0 
            = vlSelf->MMUtest__DOT__mmu__DOT__l2tlb__DOT__l2tlb_rsp_fifo__DOT__ram_source
            [0U];
        __Vdlyvset__MMUtest__DOT__mmu__DOT__tlb__DOT__tlb_rsp_fifo__DOT__ram_source__v0 = 1U;
    }
    if (vlSelf->MMUtest__DOT__mmu__DOT__ll_page_cache__DOT__mem_rsp_fifo__DOT__ram_addr_MPORT_en) {
        __Vdlyvval__MMUtest__DOT__mmu__DOT__ll_page_cache__DOT__mem_rsp_fifo__DOT__ram_addr__v0 
            = vlSelf->io_out_d_bits_data;
        __Vdlyvset__MMUtest__DOT__mmu__DOT__ll_page_cache__DOT__mem_rsp_fifo__DOT__ram_addr__v0 = 1U;
        __Vdlyvval__MMUtest__DOT__mmu__DOT__ll_page_cache__DOT__mem_rsp_fifo__DOT__ram_source__v0 
            = (3U & (IData)(vlSelf->io_out_d_bits_source));
        __Vdlyvset__MMUtest__DOT__mmu__DOT__ll_page_cache__DOT__mem_rsp_fifo__DOT__ram_source__v0 = 1U;
    }
    if (vlSelf->MMUtest__DOT__mmu__DOT__page_cache__DOT__mem_rsp_fifo__DOT__ram_addr_MPORT_en) {
        __Vdlyvval__MMUtest__DOT__mmu__DOT__page_cache__DOT__mem_rsp_fifo__DOT__ram_addr__v0 
            = vlSelf->io_out_d_bits_data;
        __Vdlyvset__MMUtest__DOT__mmu__DOT__page_cache__DOT__mem_rsp_fifo__DOT__ram_addr__v0 = 1U;
        __Vdlyvval__MMUtest__DOT__mmu__DOT__page_cache__DOT__mem_rsp_fifo__DOT__ram_source__v0 
            = (3U & (IData)(vlSelf->io_out_d_bits_source));
        __Vdlyvset__MMUtest__DOT__mmu__DOT__page_cache__DOT__mem_rsp_fifo__DOT__ram_source__v0 = 1U;
    }
    if (vlSelf->MMUtest__DOT__mmu__DOT__l2tlb__DOT__ptw_req_fifo__DOT__ram_addr_MPORT_en) {
        __Vdlyvval__MMUtest__DOT__mmu__DOT__l2tlb__DOT__ptw_req_fifo__DOT__ram_source__v0 
            = vlSelf->MMUtest__DOT__mmu__DOT__tlb__DOT__l2tlb_req_fifo__DOT__ram_source
            [0U];
        __Vdlyvset__MMUtest__DOT__mmu__DOT__l2tlb__DOT__ptw_req_fifo__DOT__ram_source__v0 = 1U;
        __Vdlyvval__MMUtest__DOT__mmu__DOT__l2tlb__DOT__ptw_req_fifo__DOT__ram_addr__v0 
            = vlSelf->MMUtest__DOT__mmu__DOT__tlb__DOT__l2tlb_req_fifo__DOT__ram_addr
            [0U];
        __Vdlyvset__MMUtest__DOT__mmu__DOT__l2tlb__DOT__ptw_req_fifo__DOT__ram_addr__v0 = 1U;
        __Vdlyvval__MMUtest__DOT__mmu__DOT__l2tlb__DOT__ptw_req_fifo__DOT__ram_PTBR__v0 
            = vlSelf->MMUtest__DOT__mmu__DOT__tlb__DOT__l2tlb_req_fifo__DOT__ram_PTBR
            [0U];
        __Vdlyvset__MMUtest__DOT__mmu__DOT__l2tlb__DOT__ptw_req_fifo__DOT__ram_PTBR__v0 = 1U;
    }
    if (vlSelf->MMUtest__DOT__mmu__DOT__l2tlb__DOT__l2tlb_rsp_fifo__DOT__ram_addr_MPORT_en) {
        if ((3U == (IData)(vlSelf->MMUtest__DOT__mmu__DOT__llptw__DOT__ptwrsp_arb_io_chosen))) {
            __Vdlyvval__MMUtest__DOT__mmu__DOT__l2tlb__DOT__l2tlb_rsp_fifo__DOT__ram_addr__v0 
                = vlSelf->MMUtest__DOT__mmu__DOT__llptw__DOT__entries_3_addr;
            __Vdlyvval__MMUtest__DOT__mmu__DOT__l2tlb__DOT__l2tlb_rsp_fifo__DOT__ram_source__v0 
                = vlSelf->MMUtest__DOT__mmu__DOT__llptw__DOT__entries_3_source;
        } else if ((2U == (IData)(vlSelf->MMUtest__DOT__mmu__DOT__llptw__DOT__ptwrsp_arb_io_chosen))) {
            __Vdlyvval__MMUtest__DOT__mmu__DOT__l2tlb__DOT__l2tlb_rsp_fifo__DOT__ram_addr__v0 
                = vlSelf->MMUtest__DOT__mmu__DOT__llptw__DOT__entries_2_addr;
            __Vdlyvval__MMUtest__DOT__mmu__DOT__l2tlb__DOT__l2tlb_rsp_fifo__DOT__ram_source__v0 
                = vlSelf->MMUtest__DOT__mmu__DOT__llptw__DOT__entries_2_source;
        } else if ((1U == (IData)(vlSelf->MMUtest__DOT__mmu__DOT__llptw__DOT__ptwrsp_arb_io_chosen))) {
            __Vdlyvval__MMUtest__DOT__mmu__DOT__l2tlb__DOT__l2tlb_rsp_fifo__DOT__ram_addr__v0 
                = vlSelf->MMUtest__DOT__mmu__DOT__llptw__DOT__entries_1_addr;
            __Vdlyvval__MMUtest__DOT__mmu__DOT__l2tlb__DOT__l2tlb_rsp_fifo__DOT__ram_source__v0 
                = vlSelf->MMUtest__DOT__mmu__DOT__llptw__DOT__entries_1_source;
        } else {
            __Vdlyvval__MMUtest__DOT__mmu__DOT__l2tlb__DOT__l2tlb_rsp_fifo__DOT__ram_addr__v0 
                = vlSelf->MMUtest__DOT__mmu__DOT__llptw__DOT__entries_0_addr;
            __Vdlyvval__MMUtest__DOT__mmu__DOT__l2tlb__DOT__l2tlb_rsp_fifo__DOT__ram_source__v0 
                = vlSelf->MMUtest__DOT__mmu__DOT__llptw__DOT__entries_0_source;
        }
        __Vdlyvset__MMUtest__DOT__mmu__DOT__l2tlb__DOT__l2tlb_rsp_fifo__DOT__ram_addr__v0 = 1U;
        __Vdlyvset__MMUtest__DOT__mmu__DOT__l2tlb__DOT__l2tlb_rsp_fifo__DOT__ram_source__v0 = 1U;
        vlSelf->MMUtest__DOT__mmu__DOT__llptw__DOT__ptwrsp_arb__DOT__lastGrant 
            = vlSelf->MMUtest__DOT__mmu__DOT__llptw__DOT__ptwrsp_arb_io_chosen;
    }
    if (vlSelf->reset) {
        vlSelf->MMUtest__DOT__mmu__DOT__tlb__DOT__l2tlb_req_fifo__DOT__maybe_full = 0U;
        vlSelf->MMUtest__DOT__mmu__DOT__l2tlb__DOT__l2tlb_rsp_fifo__DOT__maybe_full = 0U;
        vlSelf->MMUtest__DOT__mmu__DOT__ll_page_cache__DOT__mem_rsp_fifo__DOT__maybe_full = 0U;
        vlSelf->MMUtest__DOT__mmu__DOT__page_cache__DOT__mem_req_fifo__DOT__maybe_full = 0U;
        vlSelf->MMUtest__DOT__mmu__DOT__ll_page_cache__DOT__mem_req_fifo__DOT__maybe_full = 0U;
        vlSelf->MMUtest__DOT__mmu__DOT__page_cache__DOT__mem_rsp_fifo__DOT__maybe_full = 0U;
        vlSelf->MMUtest__DOT__mmu__DOT__l2tlb__DOT__ptw_req_fifo__DOT__maybe_full = 0U;
        vlSelf->MMUtest__DOT__mmu__DOT__llptw__DOT__state_3 = 0U;
        vlSelf->MMUtest__DOT__mmu__DOT__llptw__DOT__state_0 = 0U;
        vlSelf->MMUtest__DOT__mmu__DOT__llptw__DOT__state_2 = 0U;
        vlSelf->MMUtest__DOT__mmu__DOT__llptw__DOT__state_1 = 0U;
        vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__state_3 = 0U;
        vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__state_0 = 0U;
        vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__state_2 = 0U;
        vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__state_1 = 0U;
        vlSelf->MMUtest__DOT__mmu__DOT__tlb__DOT__tlb_rsp_fifo__DOT__maybe_full = 0U;
    } else {
        if (((IData)(vlSelf->MMUtest__DOT__mmu__DOT__tlb__DOT__l2tlb_req_fifo__DOT__ram_addr_MPORT_en) 
             != (IData)(vlSelf->MMUtest__DOT__mmu__DOT__l2tlb__DOT__ptw_req_fifo__DOT__ram_addr_MPORT_en))) {
            vlSelf->MMUtest__DOT__mmu__DOT__tlb__DOT__l2tlb_req_fifo__DOT__maybe_full 
                = vlSelf->MMUtest__DOT__mmu__DOT__tlb__DOT__l2tlb_req_fifo__DOT__ram_addr_MPORT_en;
        }
        if (((IData)(vlSelf->MMUtest__DOT__mmu__DOT__l2tlb__DOT__l2tlb_rsp_fifo__DOT__ram_addr_MPORT_en) 
             != (IData)(vlSelf->MMUtest__DOT__mmu__DOT__tlb__DOT__tlb_rsp_fifo__DOT__ram_addr_MPORT_en))) {
            vlSelf->MMUtest__DOT__mmu__DOT__l2tlb__DOT__l2tlb_rsp_fifo__DOT__maybe_full 
                = vlSelf->MMUtest__DOT__mmu__DOT__l2tlb__DOT__l2tlb_rsp_fifo__DOT__ram_addr_MPORT_en;
        }
        if (((IData)(vlSelf->MMUtest__DOT__mmu__DOT__ll_page_cache__DOT__mem_rsp_fifo__DOT__ram_addr_MPORT_en) 
             != (IData)(vlSelf->MMUtest__DOT__mmu__DOT__ll_page_cache__DOT__mem_rsp_fifo__DOT__do_deq))) {
            vlSelf->MMUtest__DOT__mmu__DOT__ll_page_cache__DOT__mem_rsp_fifo__DOT__maybe_full 
                = vlSelf->MMUtest__DOT__mmu__DOT__ll_page_cache__DOT__mem_rsp_fifo__DOT__ram_addr_MPORT_en;
        }
        if (((IData)(vlSelf->MMUtest__DOT__mmu__DOT__page_cache__DOT__mem_req_fifo__DOT__ram_addr_MPORT_en) 
             != (IData)(vlSelf->MMUtest__DOT__mmu__DOT__page_cache__DOT__mem_req_fifo__DOT__do_deq))) {
            vlSelf->MMUtest__DOT__mmu__DOT__page_cache__DOT__mem_req_fifo__DOT__maybe_full 
                = vlSelf->MMUtest__DOT__mmu__DOT__page_cache__DOT__mem_req_fifo__DOT__ram_addr_MPORT_en;
        }
        if (((IData)(vlSelf->MMUtest__DOT__mmu__DOT__ll_page_cache__DOT__mem_req_fifo__DOT__ram_addr_MPORT_en) 
             != (IData)(vlSelf->MMUtest__DOT__mmu__DOT__ll_page_cache__DOT__mem_req_fifo__DOT__do_deq))) {
            vlSelf->MMUtest__DOT__mmu__DOT__ll_page_cache__DOT__mem_req_fifo__DOT__maybe_full 
                = vlSelf->MMUtest__DOT__mmu__DOT__ll_page_cache__DOT__mem_req_fifo__DOT__ram_addr_MPORT_en;
        }
        if (((IData)(vlSelf->MMUtest__DOT__mmu__DOT__page_cache__DOT__mem_rsp_fifo__DOT__ram_addr_MPORT_en) 
             != (IData)(vlSelf->MMUtest__DOT__mmu__DOT__page_cache__DOT__mem_rsp_fifo__DOT__do_deq))) {
            vlSelf->MMUtest__DOT__mmu__DOT__page_cache__DOT__mem_rsp_fifo__DOT__maybe_full 
                = vlSelf->MMUtest__DOT__mmu__DOT__page_cache__DOT__mem_rsp_fifo__DOT__ram_addr_MPORT_en;
        }
        if (((IData)(vlSelf->MMUtest__DOT__mmu__DOT__l2tlb__DOT__ptw_req_fifo__DOT__ram_addr_MPORT_en) 
             != (IData)(vlSelf->MMUtest__DOT__mmu__DOT__l2tlb__DOT__ptw_req_fifo__DOT__do_deq))) {
            vlSelf->MMUtest__DOT__mmu__DOT__l2tlb__DOT__ptw_req_fifo__DOT__maybe_full 
                = vlSelf->MMUtest__DOT__mmu__DOT__l2tlb__DOT__ptw_req_fifo__DOT__ram_addr_MPORT_en;
        }
        if (vlSelf->MMUtest__DOT__mmu__DOT__l2tlb__DOT__l2tlb_rsp_fifo__DOT__ram_addr_MPORT_en) {
            vlSelf->MMUtest__DOT__mmu__DOT__llptw__DOT__state_3 
                = ((3U == (IData)(vlSelf->MMUtest__DOT__mmu__DOT__llptw__DOT__deq_ptr))
                    ? 0U : (IData)(vlSelf->MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_46));
            vlSelf->MMUtest__DOT__mmu__DOT__llptw__DOT__state_0 
                = ((0U == (IData)(vlSelf->MMUtest__DOT__mmu__DOT__llptw__DOT__deq_ptr))
                    ? 0U : (IData)(vlSelf->MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_40));
            vlSelf->MMUtest__DOT__mmu__DOT__llptw__DOT__state_2 
                = ((2U == (IData)(vlSelf->MMUtest__DOT__mmu__DOT__llptw__DOT__deq_ptr))
                    ? 0U : (IData)(vlSelf->MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_44));
            vlSelf->MMUtest__DOT__mmu__DOT__llptw__DOT__state_1 
                = ((1U == (IData)(vlSelf->MMUtest__DOT__mmu__DOT__llptw__DOT__deq_ptr))
                    ? 0U : (IData)(vlSelf->MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_42));
        } else {
            vlSelf->MMUtest__DOT__mmu__DOT__llptw__DOT__state_3 
                = vlSelf->MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_46;
            vlSelf->MMUtest__DOT__mmu__DOT__llptw__DOT__state_0 
                = vlSelf->MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_40;
            vlSelf->MMUtest__DOT__mmu__DOT__llptw__DOT__state_2 
                = vlSelf->MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_44;
            vlSelf->MMUtest__DOT__mmu__DOT__llptw__DOT__state_1 
                = vlSelf->MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_42;
        }
        if (vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__llreq_arb__DOT___ctrl_validMask_grantMask_lastGrant_T) {
            vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__state_3 
                = ((3U == (IData)(vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__deq_ptr))
                    ? 0U : (IData)(vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_69));
            vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__state_0 
                = ((0U == (IData)(vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__deq_ptr))
                    ? 0U : (IData)(vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_60));
            vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__state_2 
                = ((2U == (IData)(vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__deq_ptr))
                    ? 0U : (IData)(vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_66));
            vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__state_1 
                = ((1U == (IData)(vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__deq_ptr))
                    ? 0U : (IData)(vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_63));
        } else {
            vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__state_3 
                = vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_69;
            vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__state_0 
                = vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_60;
            vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__state_2 
                = vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_66;
            vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__state_1 
                = vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_63;
        }
        if (((IData)(vlSelf->MMUtest__DOT__mmu__DOT__tlb__DOT__tlb_rsp_fifo__DOT__ram_addr_MPORT_en) 
             != (IData)(vlSelf->MMUtest__DOT__mmu__DOT__tlb__DOT__tlb_rsp_fifo__DOT__do_deq))) {
            vlSelf->MMUtest__DOT__mmu__DOT__tlb__DOT__tlb_rsp_fifo__DOT__maybe_full 
                = vlSelf->MMUtest__DOT__mmu__DOT__tlb__DOT__tlb_rsp_fifo__DOT__ram_addr_MPORT_en;
        }
    }
    if (vlSelf->MMUtest__DOT__mmu__DOT__ll_page_cache__DOT__mem_req_fifo__DOT__ram_addr_MPORT_en) {
        __Vdlyvval__MMUtest__DOT__mmu__DOT__ll_page_cache__DOT__mem_req_fifo__DOT__ram_addr__v0 
            = ((3U == (IData)(vlSelf->MMUtest__DOT__mmu__DOT__llptw__DOT__memreq_arb_io_chosen))
                ? vlSelf->MMUtest__DOT__mmu__DOT__llptw__DOT__entries_3_addr
                : ((2U == (IData)(vlSelf->MMUtest__DOT__mmu__DOT__llptw__DOT__memreq_arb_io_chosen))
                    ? vlSelf->MMUtest__DOT__mmu__DOT__llptw__DOT__entries_2_addr
                    : ((1U == (IData)(vlSelf->MMUtest__DOT__mmu__DOT__llptw__DOT__memreq_arb_io_chosen))
                        ? vlSelf->MMUtest__DOT__mmu__DOT__llptw__DOT__entries_1_addr
                        : vlSelf->MMUtest__DOT__mmu__DOT__llptw__DOT__entries_0_addr)));
        __Vdlyvset__MMUtest__DOT__mmu__DOT__ll_page_cache__DOT__mem_req_fifo__DOT__ram_addr__v0 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->MMUtest__DOT__mmu__DOT__llptw__DOT__entries_3_addr = 0ULL;
        vlSelf->MMUtest__DOT__mmu__DOT__llptw__DOT__entries_2_addr = 0ULL;
        vlSelf->MMUtest__DOT__mmu__DOT__llptw__DOT__entries_1_addr = 0ULL;
        vlSelf->MMUtest__DOT__mmu__DOT__llptw__DOT__entries_0_addr = 0ULL;
    } else if (vlSelf->MMUtest__DOT__mmu__DOT__l2tlb__DOT__l2tlb_rsp_fifo__DOT__ram_addr_MPORT_en) {
        vlSelf->MMUtest__DOT__mmu__DOT__llptw__DOT__entries_3_addr 
            = ((3U == (IData)(vlSelf->MMUtest__DOT__mmu__DOT__llptw__DOT__deq_ptr))
                ? 0ULL : vlSelf->MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_47);
        vlSelf->MMUtest__DOT__mmu__DOT__llptw__DOT__entries_2_addr 
            = ((2U == (IData)(vlSelf->MMUtest__DOT__mmu__DOT__llptw__DOT__deq_ptr))
                ? 0ULL : vlSelf->MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_45);
        vlSelf->MMUtest__DOT__mmu__DOT__llptw__DOT__entries_1_addr 
            = ((1U == (IData)(vlSelf->MMUtest__DOT__mmu__DOT__llptw__DOT__deq_ptr))
                ? 0ULL : vlSelf->MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_43);
        vlSelf->MMUtest__DOT__mmu__DOT__llptw__DOT__entries_0_addr 
            = ((0U == (IData)(vlSelf->MMUtest__DOT__mmu__DOT__llptw__DOT__deq_ptr))
                ? 0ULL : vlSelf->MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_41);
    } else {
        vlSelf->MMUtest__DOT__mmu__DOT__llptw__DOT__entries_3_addr 
            = vlSelf->MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_47;
        vlSelf->MMUtest__DOT__mmu__DOT__llptw__DOT__entries_2_addr 
            = vlSelf->MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_45;
        vlSelf->MMUtest__DOT__mmu__DOT__llptw__DOT__entries_1_addr 
            = vlSelf->MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_43;
        vlSelf->MMUtest__DOT__mmu__DOT__llptw__DOT__entries_0_addr 
            = vlSelf->MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_41;
    }
    if (vlSelf->MMUtest__DOT__mmu__DOT__ll_page_cache__DOT__mem_req_fifo__DOT__ram_addr_MPORT_en) {
        __Vdlyvval__MMUtest__DOT__mmu__DOT__ll_page_cache__DOT__mem_req_fifo__DOT__ram_source__v0 
            = ((3U == (IData)(vlSelf->MMUtest__DOT__mmu__DOT__llptw__DOT__memreq_arb_io_chosen))
                ? (IData)(vlSelf->MMUtest__DOT__mmu__DOT__llptw__DOT__entries_3_source)
                : ((2U == (IData)(vlSelf->MMUtest__DOT__mmu__DOT__llptw__DOT__memreq_arb_io_chosen))
                    ? (IData)(vlSelf->MMUtest__DOT__mmu__DOT__llptw__DOT__entries_2_source)
                    : ((1U == (IData)(vlSelf->MMUtest__DOT__mmu__DOT__llptw__DOT__memreq_arb_io_chosen))
                        ? (IData)(vlSelf->MMUtest__DOT__mmu__DOT__llptw__DOT__entries_1_source)
                        : (IData)(vlSelf->MMUtest__DOT__mmu__DOT__llptw__DOT__entries_0_source))));
        __Vdlyvset__MMUtest__DOT__mmu__DOT__ll_page_cache__DOT__mem_req_fifo__DOT__ram_source__v0 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->MMUtest__DOT__mmu__DOT__llptw__DOT__entries_3_source = 0U;
        vlSelf->MMUtest__DOT__mmu__DOT__llptw__DOT__entries_2_source = 0U;
        vlSelf->MMUtest__DOT__mmu__DOT__llptw__DOT__entries_1_source = 0U;
        vlSelf->MMUtest__DOT__mmu__DOT__llptw__DOT__entries_0_source = 0U;
    } else if (vlSelf->MMUtest__DOT__mmu__DOT__l2tlb__DOT__l2tlb_rsp_fifo__DOT__ram_addr_MPORT_en) {
        vlSelf->MMUtest__DOT__mmu__DOT__llptw__DOT__entries_3_source 
            = ((3U == (IData)(vlSelf->MMUtest__DOT__mmu__DOT__llptw__DOT__deq_ptr))
                ? 0U : (IData)(vlSelf->MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_23));
        vlSelf->MMUtest__DOT__mmu__DOT__llptw__DOT__entries_2_source 
            = ((2U == (IData)(vlSelf->MMUtest__DOT__mmu__DOT__llptw__DOT__deq_ptr))
                ? 0U : (IData)(vlSelf->MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_22));
        vlSelf->MMUtest__DOT__mmu__DOT__llptw__DOT__entries_1_source 
            = ((1U == (IData)(vlSelf->MMUtest__DOT__mmu__DOT__llptw__DOT__deq_ptr))
                ? 0U : (IData)(vlSelf->MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_21));
        vlSelf->MMUtest__DOT__mmu__DOT__llptw__DOT__entries_0_source 
            = ((0U == (IData)(vlSelf->MMUtest__DOT__mmu__DOT__llptw__DOT__deq_ptr))
                ? 0U : (IData)(vlSelf->MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_20));
    } else {
        vlSelf->MMUtest__DOT__mmu__DOT__llptw__DOT__entries_3_source 
            = vlSelf->MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_23;
        vlSelf->MMUtest__DOT__mmu__DOT__llptw__DOT__entries_2_source 
            = vlSelf->MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_22;
        vlSelf->MMUtest__DOT__mmu__DOT__llptw__DOT__entries_1_source 
            = vlSelf->MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_21;
        vlSelf->MMUtest__DOT__mmu__DOT__llptw__DOT__entries_0_source 
            = vlSelf->MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_20;
    }
    if (vlSelf->MMUtest__DOT__mmu__DOT__page_cache__DOT__mem_req_fifo__DOT__ram_addr_MPORT_en) {
        __Vdlyvval__MMUtest__DOT__mmu__DOT__page_cache__DOT__mem_req_fifo__DOT__ram_source__v0 
            = ((3U == (IData)(vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__memreq_arb_io_chosen))
                ? (IData)(vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_3_source)
                : ((2U == (IData)(vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__memreq_arb_io_chosen))
                    ? (IData)(vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_2_source)
                    : ((1U == (IData)(vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__memreq_arb_io_chosen))
                        ? (IData)(vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_1_source)
                        : (IData)(vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_0_source))));
        __Vdlyvset__MMUtest__DOT__mmu__DOT__page_cache__DOT__mem_req_fifo__DOT__ram_source__v0 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_3_source = 0U;
        vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_2_source = 0U;
        vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_1_source = 0U;
        vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_0_source = 0U;
    } else if (vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__llreq_arb__DOT___ctrl_validMask_grantMask_lastGrant_T) {
        vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_3_source 
            = ((3U == (IData)(vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__deq_ptr))
                ? 0U : (IData)(vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_39));
        vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_2_source 
            = ((2U == (IData)(vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__deq_ptr))
                ? 0U : (IData)(vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_38));
        vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_1_source 
            = ((1U == (IData)(vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__deq_ptr))
                ? 0U : (IData)(vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_37));
        vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_0_source 
            = ((0U == (IData)(vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__deq_ptr))
                ? 0U : (IData)(vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_36));
    } else {
        vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_3_source 
            = vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_39;
        vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_2_source 
            = vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_38;
        vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_1_source 
            = vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_37;
        vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_0_source 
            = vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_36;
    }
    if (vlSelf->MMUtest__DOT__mmu__DOT__page_cache__DOT__mem_req_fifo__DOT__ram_addr_MPORT_en) {
        __Vdlyvval__MMUtest__DOT__mmu__DOT__page_cache__DOT__mem_req_fifo__DOT__ram_addr__v0 
            = (0xffffffffffffffULL & ((((3U == (IData)(vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__memreq_arb_io_chosen))
                                         ? vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_3_ppn
                                         : ((2U == (IData)(vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__memreq_arb_io_chosen))
                                             ? vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_2_ppn
                                             : ((1U 
                                                 == (IData)(vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__memreq_arb_io_chosen))
                                                 ? vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_1_ppn
                                                 : vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_0_ppn))) 
                                       << 0xcU) + (QData)((IData)(
                                                                  (((0x1aU 
                                                                     >= 
                                                                     (0x3fU 
                                                                      & ((IData)(9U) 
                                                                         * 
                                                                         ((3U 
                                                                           == (IData)(vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__memreq_arb_io_chosen))
                                                                           ? (IData)(vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_3_cur_level)
                                                                           : 
                                                                          ((2U 
                                                                            == (IData)(vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__memreq_arb_io_chosen))
                                                                            ? (IData)(vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_2_cur_level)
                                                                            : 
                                                                           ((1U 
                                                                             == (IData)(vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__memreq_arb_io_chosen))
                                                                             ? (IData)(vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_1_cur_level)
                                                                             : (IData)(vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_0_cur_level)))))))
                                                                     ? 
                                                                    (0x1ffU 
                                                                     & (((3U 
                                                                          == (IData)(vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__memreq_arb_io_chosen))
                                                                          ? vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_3_vpn
                                                                          : 
                                                                         ((2U 
                                                                           == (IData)(vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__memreq_arb_io_chosen))
                                                                           ? vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_2_vpn
                                                                           : 
                                                                          ((1U 
                                                                            == (IData)(vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__memreq_arb_io_chosen))
                                                                            ? vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_1_vpn
                                                                            : vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_0_vpn))) 
                                                                        >> 
                                                                        (0x3fU 
                                                                         & ((IData)(9U) 
                                                                            * 
                                                                            ((3U 
                                                                              == (IData)(vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__memreq_arb_io_chosen))
                                                                              ? (IData)(vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_3_cur_level)
                                                                              : 
                                                                             ((2U 
                                                                               == (IData)(vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__memreq_arb_io_chosen))
                                                                               ? (IData)(vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_2_cur_level)
                                                                               : 
                                                                              ((1U 
                                                                                == (IData)(vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__memreq_arb_io_chosen))
                                                                                ? (IData)(vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_1_cur_level)
                                                                                : (IData)(vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_0_cur_level))))))))
                                                                     : 0U) 
                                                                   << 3U)))));
        __Vdlyvset__MMUtest__DOT__mmu__DOT__page_cache__DOT__mem_req_fifo__DOT__ram_addr__v0 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_3_vpn = 0U;
        vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_2_vpn = 0U;
        vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_1_vpn = 0U;
        vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_0_vpn = 0U;
        vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_3_ppn = 0ULL;
        vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_2_ppn = 0ULL;
        vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_1_ppn = 0ULL;
        vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_0_ppn = 0ULL;
        vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_3_cur_level = 0U;
        vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_2_cur_level = 0U;
        vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_1_cur_level = 0U;
        vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_0_cur_level = 0U;
    } else if (vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__llreq_arb__DOT___ctrl_validMask_grantMask_lastGrant_T) {
        if ((3U == (IData)(vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__deq_ptr))) {
            vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_3_vpn = 0U;
            vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_3_ppn = 0ULL;
            vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_3_cur_level = 0U;
        } else {
            vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_3_vpn 
                = vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_31;
            vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_3_ppn 
                = vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_71;
            vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_3_cur_level 
                = vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_70;
        }
        if ((2U == (IData)(vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__deq_ptr))) {
            vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_2_vpn = 0U;
            vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_2_ppn = 0ULL;
            vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_2_cur_level = 0U;
        } else {
            vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_2_vpn 
                = vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_30;
            vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_2_ppn 
                = vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_68;
            vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_2_cur_level 
                = vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_67;
        }
        if ((1U == (IData)(vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__deq_ptr))) {
            vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_1_vpn = 0U;
            vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_1_ppn = 0ULL;
            vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_1_cur_level = 0U;
        } else {
            vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_1_vpn 
                = vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_29;
            vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_1_ppn 
                = vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_65;
            vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_1_cur_level 
                = vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_64;
        }
        if ((0U == (IData)(vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__deq_ptr))) {
            vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_0_vpn = 0U;
            vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_0_ppn = 0ULL;
            vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_0_cur_level = 0U;
        } else {
            vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_0_vpn 
                = vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_28;
            vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_0_ppn 
                = vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_62;
            vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_0_cur_level 
                = vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_61;
        }
    } else {
        vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_3_vpn 
            = vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_31;
        vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_2_vpn 
            = vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_30;
        vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_1_vpn 
            = vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_29;
        vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_0_vpn 
            = vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_28;
        vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_3_ppn 
            = vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_71;
        vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_2_ppn 
            = vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_68;
        vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_1_ppn 
            = vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_65;
        vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_0_ppn 
            = vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_62;
        vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_3_cur_level 
            = vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_70;
        vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_2_cur_level 
            = vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_67;
        vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_1_cur_level 
            = vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_64;
        vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_0_cur_level 
            = vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_61;
    }
    if (__Vdlyvset__MMUtest__DOT__mmu__DOT__tlb__DOT__tlb_rsp_fifo__DOT__ram_addr__v0) {
        vlSelf->MMUtest__DOT__mmu__DOT__tlb__DOT__tlb_rsp_fifo__DOT__ram_addr[0U] 
            = __Vdlyvval__MMUtest__DOT__mmu__DOT__tlb__DOT__tlb_rsp_fifo__DOT__ram_addr__v0;
    }
    if (__Vdlyvset__MMUtest__DOT__mmu__DOT__tlb__DOT__tlb_rsp_fifo__DOT__ram_source__v0) {
        vlSelf->MMUtest__DOT__mmu__DOT__tlb__DOT__tlb_rsp_fifo__DOT__ram_source[0U] 
            = __Vdlyvval__MMUtest__DOT__mmu__DOT__tlb__DOT__tlb_rsp_fifo__DOT__ram_source__v0;
    }
    if (__Vdlyvset__MMUtest__DOT__mmu__DOT__ll_page_cache__DOT__mem_rsp_fifo__DOT__ram_addr__v0) {
        vlSelf->MMUtest__DOT__mmu__DOT__ll_page_cache__DOT__mem_rsp_fifo__DOT__ram_addr[0U] 
            = __Vdlyvval__MMUtest__DOT__mmu__DOT__ll_page_cache__DOT__mem_rsp_fifo__DOT__ram_addr__v0;
    }
    if (__Vdlyvset__MMUtest__DOT__mmu__DOT__page_cache__DOT__mem_rsp_fifo__DOT__ram_addr__v0) {
        vlSelf->MMUtest__DOT__mmu__DOT__page_cache__DOT__mem_rsp_fifo__DOT__ram_addr[0U] 
            = __Vdlyvval__MMUtest__DOT__mmu__DOT__page_cache__DOT__mem_rsp_fifo__DOT__ram_addr__v0;
    }
    if (__Vdlyvset__MMUtest__DOT__mmu__DOT__tlb__DOT__l2tlb_req_fifo__DOT__ram_source__v0) {
        vlSelf->MMUtest__DOT__mmu__DOT__tlb__DOT__l2tlb_req_fifo__DOT__ram_source[0U] 
            = __Vdlyvval__MMUtest__DOT__mmu__DOT__tlb__DOT__l2tlb_req_fifo__DOT__ram_source__v0;
    }
    if (__Vdlyvset__MMUtest__DOT__mmu__DOT__l2tlb__DOT__ptw_req_fifo__DOT__ram_source__v0) {
        vlSelf->MMUtest__DOT__mmu__DOT__l2tlb__DOT__ptw_req_fifo__DOT__ram_source[0U] 
            = __Vdlyvval__MMUtest__DOT__mmu__DOT__l2tlb__DOT__ptw_req_fifo__DOT__ram_source__v0;
    }
    if (__Vdlyvset__MMUtest__DOT__mmu__DOT__tlb__DOT__l2tlb_req_fifo__DOT__ram_addr__v0) {
        vlSelf->MMUtest__DOT__mmu__DOT__tlb__DOT__l2tlb_req_fifo__DOT__ram_addr[0U] 
            = __Vdlyvval__MMUtest__DOT__mmu__DOT__tlb__DOT__l2tlb_req_fifo__DOT__ram_addr__v0;
    }
    if (__Vdlyvset__MMUtest__DOT__mmu__DOT__l2tlb__DOT__ptw_req_fifo__DOT__ram_addr__v0) {
        vlSelf->MMUtest__DOT__mmu__DOT__l2tlb__DOT__ptw_req_fifo__DOT__ram_addr[0U] 
            = __Vdlyvval__MMUtest__DOT__mmu__DOT__l2tlb__DOT__ptw_req_fifo__DOT__ram_addr__v0;
    }
    if (__Vdlyvset__MMUtest__DOT__mmu__DOT__tlb__DOT__l2tlb_req_fifo__DOT__ram_PTBR__v0) {
        vlSelf->MMUtest__DOT__mmu__DOT__tlb__DOT__l2tlb_req_fifo__DOT__ram_PTBR[0U] 
            = __Vdlyvval__MMUtest__DOT__mmu__DOT__tlb__DOT__l2tlb_req_fifo__DOT__ram_PTBR__v0;
    }
    if (__Vdlyvset__MMUtest__DOT__mmu__DOT__l2tlb__DOT__ptw_req_fifo__DOT__ram_PTBR__v0) {
        vlSelf->MMUtest__DOT__mmu__DOT__l2tlb__DOT__ptw_req_fifo__DOT__ram_PTBR[0U] 
            = __Vdlyvval__MMUtest__DOT__mmu__DOT__l2tlb__DOT__ptw_req_fifo__DOT__ram_PTBR__v0;
    }
    if (__Vdlyvset__MMUtest__DOT__mmu__DOT__ll_page_cache__DOT__mem_rsp_fifo__DOT__ram_source__v0) {
        vlSelf->MMUtest__DOT__mmu__DOT__ll_page_cache__DOT__mem_rsp_fifo__DOT__ram_source[0U] 
            = __Vdlyvval__MMUtest__DOT__mmu__DOT__ll_page_cache__DOT__mem_rsp_fifo__DOT__ram_source__v0;
    }
    if (__Vdlyvset__MMUtest__DOT__mmu__DOT__page_cache__DOT__mem_rsp_fifo__DOT__ram_source__v0) {
        vlSelf->MMUtest__DOT__mmu__DOT__page_cache__DOT__mem_rsp_fifo__DOT__ram_source[0U] 
            = __Vdlyvval__MMUtest__DOT__mmu__DOT__page_cache__DOT__mem_rsp_fifo__DOT__ram_source__v0;
    }
    if (__Vdlyvset__MMUtest__DOT__mmu__DOT__l2tlb__DOT__l2tlb_rsp_fifo__DOT__ram_addr__v0) {
        vlSelf->MMUtest__DOT__mmu__DOT__l2tlb__DOT__l2tlb_rsp_fifo__DOT__ram_addr[0U] 
            = __Vdlyvval__MMUtest__DOT__mmu__DOT__l2tlb__DOT__l2tlb_rsp_fifo__DOT__ram_addr__v0;
    }
    if (__Vdlyvset__MMUtest__DOT__mmu__DOT__ll_page_cache__DOT__mem_req_fifo__DOT__ram_addr__v0) {
        vlSelf->MMUtest__DOT__mmu__DOT__ll_page_cache__DOT__mem_req_fifo__DOT__ram_addr[0U] 
            = __Vdlyvval__MMUtest__DOT__mmu__DOT__ll_page_cache__DOT__mem_req_fifo__DOT__ram_addr__v0;
    }
    if (__Vdlyvset__MMUtest__DOT__mmu__DOT__l2tlb__DOT__l2tlb_rsp_fifo__DOT__ram_source__v0) {
        vlSelf->MMUtest__DOT__mmu__DOT__l2tlb__DOT__l2tlb_rsp_fifo__DOT__ram_source[0U] 
            = __Vdlyvval__MMUtest__DOT__mmu__DOT__l2tlb__DOT__l2tlb_rsp_fifo__DOT__ram_source__v0;
    }
    if (__Vdlyvset__MMUtest__DOT__mmu__DOT__ll_page_cache__DOT__mem_req_fifo__DOT__ram_source__v0) {
        vlSelf->MMUtest__DOT__mmu__DOT__ll_page_cache__DOT__mem_req_fifo__DOT__ram_source[0U] 
            = __Vdlyvval__MMUtest__DOT__mmu__DOT__ll_page_cache__DOT__mem_req_fifo__DOT__ram_source__v0;
    }
    if (__Vdlyvset__MMUtest__DOT__mmu__DOT__page_cache__DOT__mem_req_fifo__DOT__ram_source__v0) {
        vlSelf->MMUtest__DOT__mmu__DOT__page_cache__DOT__mem_req_fifo__DOT__ram_source[0U] 
            = __Vdlyvval__MMUtest__DOT__mmu__DOT__page_cache__DOT__mem_req_fifo__DOT__ram_source__v0;
    }
    if (__Vdlyvset__MMUtest__DOT__mmu__DOT__page_cache__DOT__mem_req_fifo__DOT__ram_addr__v0) {
        vlSelf->MMUtest__DOT__mmu__DOT__page_cache__DOT__mem_req_fifo__DOT__ram_addr[0U] 
            = __Vdlyvval__MMUtest__DOT__mmu__DOT__page_cache__DOT__mem_req_fifo__DOT__ram_addr__v0;
    }
    vlSelf->io_host_rsp_bits_inflight_wg_buffer_host_wf_done_wg_id 
        = vlSelf->MMUtest__DOT__mmu__DOT__tlb__DOT__tlb_rsp_fifo__DOT__ram_source
        [0U];
    vlSelf->io_host_req_ready = (1U & (~ (IData)(vlSelf->MMUtest__DOT__mmu__DOT__tlb__DOT__l2tlb_req_fifo__DOT__maybe_full)));
    vlSelf->MMUtest__DOT__mmu__DOT__ll_page_cache__DOT__mem_rsp_fifo__DOT__ram_addr_MPORT_en 
        = ((~ (IData)(vlSelf->MMUtest__DOT__mmu__DOT__ll_page_cache__DOT__mem_rsp_fifo__DOT__maybe_full)) 
           & ((~ ((IData)(vlSelf->io_out_d_bits_source) 
                  >> 2U)) & (IData)(vlSelf->io_out_d_valid)));
    vlSelf->io_out_a_valid = ((IData)(vlSelf->MMUtest__DOT__mmu__DOT__ll_page_cache__DOT__mem_req_fifo__DOT__maybe_full) 
                              | (IData)(vlSelf->MMUtest__DOT__mmu__DOT__page_cache__DOT__mem_req_fifo__DOT__maybe_full));
    if (vlSelf->MMUtest__DOT__mmu__DOT__ll_page_cache__DOT__mem_req_fifo__DOT__maybe_full) {
        vlSelf->MMUtest__DOT__mmu__DOT__ll_page_cache__DOT__mem_req_fifo__DOT__do_deq 
            = vlSelf->io_out_a_ready;
        vlSelf->io_out_a_bits_source = vlSelf->MMUtest__DOT__mmu__DOT__ll_page_cache__DOT__mem_req_fifo__DOT__ram_source
            [0U];
    } else {
        vlSelf->MMUtest__DOT__mmu__DOT__ll_page_cache__DOT__mem_req_fifo__DOT__do_deq = 0U;
        vlSelf->io_out_a_bits_source = (4U | vlSelf->MMUtest__DOT__mmu__DOT__page_cache__DOT__mem_req_fifo__DOT__ram_source
                                        [0U]);
    }
    vlSelf->io_out_a_bits_address = (IData)(((IData)(vlSelf->MMUtest__DOT__mmu__DOT__ll_page_cache__DOT__mem_req_fifo__DOT__maybe_full)
                                              ? vlSelf->MMUtest__DOT__mmu__DOT__ll_page_cache__DOT__mem_req_fifo__DOT__ram_addr
                                             [0U] : 
                                             vlSelf->MMUtest__DOT__mmu__DOT__page_cache__DOT__mem_req_fifo__DOT__ram_addr
                                             [0U]));
    vlSelf->MMUtest__DOT__mmu__DOT__page_cache__DOT__mem_req_fifo__DOT__do_deq 
        = (((~ (IData)(vlSelf->MMUtest__DOT__mmu__DOT__ll_page_cache__DOT__mem_req_fifo__DOT__maybe_full)) 
            & (IData)(vlSelf->io_out_a_ready)) & (IData)(vlSelf->MMUtest__DOT__mmu__DOT__page_cache__DOT__mem_req_fifo__DOT__maybe_full));
    vlSelf->io_out_d_ready = (0U != (((IData)(1U) << 
                                      (1U & ((IData)(vlSelf->io_out_d_bits_source) 
                                             >> 2U))) 
                                     & ((2U & ((~ (IData)(vlSelf->MMUtest__DOT__mmu__DOT__page_cache__DOT__mem_rsp_fifo__DOT__maybe_full)) 
                                               << 1U)) 
                                        | (1U & (~ (IData)(vlSelf->MMUtest__DOT__mmu__DOT__ll_page_cache__DOT__mem_rsp_fifo__DOT__maybe_full))))));
    vlSelf->MMUtest__DOT__mmu__DOT__page_cache__DOT__mem_rsp_fifo__DOT__ram_addr_MPORT_en 
        = ((~ (IData)(vlSelf->MMUtest__DOT__mmu__DOT__page_cache__DOT__mem_rsp_fifo__DOT__maybe_full)) 
           & (((IData)(vlSelf->io_out_d_bits_source) 
               >> 2U) & (IData)(vlSelf->io_out_d_valid)));
    vlSelf->MMUtest__DOT__mmu__DOT__l2tlb__DOT__ptw_req_fifo__DOT__ram_addr_MPORT_en 
        = ((~ (IData)(vlSelf->MMUtest__DOT__mmu__DOT__l2tlb__DOT__ptw_req_fifo__DOT__maybe_full)) 
           & (IData)(vlSelf->MMUtest__DOT__mmu__DOT__tlb__DOT__l2tlb_req_fifo__DOT__maybe_full));
    vlSelf->MMUtest__DOT__mmu__DOT__ll_page_cache__DOT__mem_rsp_fifo__DOT__do_deq 
        = (((2U == (IData)(vlSelf->MMUtest__DOT__mmu__DOT__llptw__DOT__state_0)) 
            | ((2U == (IData)(vlSelf->MMUtest__DOT__mmu__DOT__llptw__DOT__state_1)) 
               | ((2U == (IData)(vlSelf->MMUtest__DOT__mmu__DOT__llptw__DOT__state_2)) 
                  | (2U == (IData)(vlSelf->MMUtest__DOT__mmu__DOT__llptw__DOT__state_3))))) 
           & (IData)(vlSelf->MMUtest__DOT__mmu__DOT__ll_page_cache__DOT__mem_rsp_fifo__DOT__maybe_full));
    if (vlSelf->MMUtest__DOT__mmu__DOT__ll_page_cache__DOT__mem_req_fifo__DOT__ram_addr_MPORT_en) {
        vlSelf->MMUtest__DOT__mmu__DOT__llptw__DOT__memreq_arb__DOT__lastGrant 
            = vlSelf->MMUtest__DOT__mmu__DOT__llptw__DOT__memreq_arb_io_chosen;
    }
    vlSelf->MMUtest__DOT__mmu__DOT__llptw__DOT__memreq_arb_io_chosen 
        = (((1U == (IData)(vlSelf->MMUtest__DOT__mmu__DOT__llptw__DOT__state_1)) 
            & (1U > (IData)(vlSelf->MMUtest__DOT__mmu__DOT__llptw__DOT__memreq_arb__DOT__lastGrant)))
            ? 1U : (((1U == (IData)(vlSelf->MMUtest__DOT__mmu__DOT__llptw__DOT__state_2)) 
                     & (2U > (IData)(vlSelf->MMUtest__DOT__mmu__DOT__llptw__DOT__memreq_arb__DOT__lastGrant)))
                     ? 2U : (((1U == (IData)(vlSelf->MMUtest__DOT__mmu__DOT__llptw__DOT__state_3)) 
                              & (3U > (IData)(vlSelf->MMUtest__DOT__mmu__DOT__llptw__DOT__memreq_arb__DOT__lastGrant)))
                              ? 3U : ((1U == (IData)(vlSelf->MMUtest__DOT__mmu__DOT__llptw__DOT__state_0))
                                       ? 0U : ((1U 
                                                == (IData)(vlSelf->MMUtest__DOT__mmu__DOT__llptw__DOT__state_1))
                                                ? 1U
                                                : (
                                                   (1U 
                                                    == (IData)(vlSelf->MMUtest__DOT__mmu__DOT__llptw__DOT__state_2))
                                                    ? 2U
                                                    : 3U))))));
    MMUtest__DOT__mmu__DOT__llptw__DOT__enq_ptr = (
                                                   (0U 
                                                    == (IData)(vlSelf->MMUtest__DOT__mmu__DOT__llptw__DOT__state_0))
                                                    ? 0U
                                                    : 
                                                   ((0U 
                                                     == (IData)(vlSelf->MMUtest__DOT__mmu__DOT__llptw__DOT__state_1))
                                                     ? 1U
                                                     : 
                                                    ((0U 
                                                      == (IData)(vlSelf->MMUtest__DOT__mmu__DOT__llptw__DOT__state_2))
                                                      ? 2U
                                                      : 3U)));
    vlSelf->MMUtest__DOT__mmu__DOT__page_cache__DOT__mem_rsp_fifo__DOT__do_deq 
        = (((2U == (IData)(vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__state_0)) 
            | ((2U == (IData)(vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__state_1)) 
               | ((2U == (IData)(vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__state_2)) 
                  | (2U == (IData)(vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__state_3))))) 
           & (IData)(vlSelf->MMUtest__DOT__mmu__DOT__page_cache__DOT__mem_rsp_fifo__DOT__maybe_full));
    if (vlSelf->MMUtest__DOT__mmu__DOT__page_cache__DOT__mem_req_fifo__DOT__ram_addr_MPORT_en) {
        vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__memreq_arb__DOT__lastGrant 
            = vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__memreq_arb_io_chosen;
    }
    vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__memreq_arb_io_chosen 
        = (((1U == (IData)(vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__state_1)) 
            & (1U > (IData)(vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__memreq_arb__DOT__lastGrant)))
            ? 1U : (((1U == (IData)(vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__state_2)) 
                     & (2U > (IData)(vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__memreq_arb__DOT__lastGrant)))
                     ? 2U : (((1U == (IData)(vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__state_3)) 
                              & (3U > (IData)(vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__memreq_arb__DOT__lastGrant)))
                              ? 3U : ((1U == (IData)(vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__state_0))
                                       ? 0U : ((1U 
                                                == (IData)(vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__state_1))
                                                ? 1U
                                                : (
                                                   (1U 
                                                    == (IData)(vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__state_2))
                                                    ? 2U
                                                    : 3U))))));
    MMUtest__DOT__mmu__DOT__ptw__DOT__enq_ptr = ((0U 
                                                  == (IData)(vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__state_0))
                                                  ? 0U
                                                  : 
                                                 ((0U 
                                                   == (IData)(vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__state_1))
                                                   ? 1U
                                                   : 
                                                  ((0U 
                                                    == (IData)(vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__state_2))
                                                    ? 2U
                                                    : 3U)));
    vlSelf->MMUtest__DOT__mmu__DOT__l2tlb__DOT__ptw_req_fifo__DOT__do_deq 
        = (((0U == (IData)(vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__state_0)) 
            | ((0U == (IData)(vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__state_1)) 
               | ((0U == (IData)(vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__state_2)) 
                  | (0U == (IData)(vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__state_3))))) 
           & (IData)(vlSelf->MMUtest__DOT__mmu__DOT__l2tlb__DOT__ptw_req_fifo__DOT__maybe_full));
    vlSelf->io_host_rsp_valid = vlSelf->MMUtest__DOT__mmu__DOT__tlb__DOT__tlb_rsp_fifo__DOT__maybe_full;
    vlSelf->MMUtest__DOT__mmu__DOT__tlb__DOT__tlb_rsp_fifo__DOT__ram_addr_MPORT_en 
        = ((~ (IData)(vlSelf->MMUtest__DOT__mmu__DOT__tlb__DOT__tlb_rsp_fifo__DOT__maybe_full)) 
           & (IData)(vlSelf->MMUtest__DOT__mmu__DOT__l2tlb__DOT__l2tlb_rsp_fifo__DOT__maybe_full));
    vlSelf->MMUtest__DOT__mmu__DOT__tlb__DOT__tlb_rsp_fifo__DOT__do_deq 
        = ((IData)(vlSelf->MMUtest__DOT__mmu__DOT__tlb__DOT__tlb_rsp_fifo__DOT__maybe_full) 
           & (IData)(vlSelf->io_host_rsp_ready));
    vlSelf->MMUtest__DOT__mmu__DOT__llptw__DOT__deq_ptr 
        = ((3U == (IData)(vlSelf->MMUtest__DOT__mmu__DOT__llptw__DOT__state_0))
            ? 0U : ((3U == (IData)(vlSelf->MMUtest__DOT__mmu__DOT__llptw__DOT__state_1))
                     ? 1U : ((3U == (IData)(vlSelf->MMUtest__DOT__mmu__DOT__llptw__DOT__state_2))
                              ? 2U : 3U)));
    vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__deq_ptr 
        = ((3U == (IData)(vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__state_0))
            ? 0U : ((3U == (IData)(vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__state_1))
                     ? 1U : ((3U == (IData)(vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__state_2))
                              ? 2U : 3U)));
    vlSelf->MMUtest__DOT__mmu__DOT__tlb__DOT__l2tlb_req_fifo__DOT__ram_addr_MPORT_en 
        = ((IData)(vlSelf->io_host_req_ready) & (IData)(vlSelf->io_host_req_valid));
    vlSelf->MMUtest__DOT__mmu__DOT__ll_page_cache__DOT__mem_req_fifo__DOT__ram_addr_MPORT_en 
        = ((~ (IData)(vlSelf->MMUtest__DOT__mmu__DOT__ll_page_cache__DOT__mem_req_fifo__DOT__maybe_full)) 
           & ((3U == (IData)(vlSelf->MMUtest__DOT__mmu__DOT__llptw__DOT__memreq_arb_io_chosen))
               ? (1U == (IData)(vlSelf->MMUtest__DOT__mmu__DOT__llptw__DOT__state_3))
               : ((2U == (IData)(vlSelf->MMUtest__DOT__mmu__DOT__llptw__DOT__memreq_arb_io_chosen))
                   ? (1U == (IData)(vlSelf->MMUtest__DOT__mmu__DOT__llptw__DOT__state_2))
                   : ((1U == (IData)(vlSelf->MMUtest__DOT__mmu__DOT__llptw__DOT__memreq_arb_io_chosen))
                       ? (1U == (IData)(vlSelf->MMUtest__DOT__mmu__DOT__llptw__DOT__state_1))
                       : (1U == (IData)(vlSelf->MMUtest__DOT__mmu__DOT__llptw__DOT__state_0))))));
    vlSelf->MMUtest__DOT__mmu__DOT__page_cache__DOT__mem_req_fifo__DOT__ram_addr_MPORT_en 
        = ((~ (IData)(vlSelf->MMUtest__DOT__mmu__DOT__page_cache__DOT__mem_req_fifo__DOT__maybe_full)) 
           & ((3U == (IData)(vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__memreq_arb_io_chosen))
               ? (1U == (IData)(vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__state_3))
               : ((2U == (IData)(vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__memreq_arb_io_chosen))
                   ? (1U == (IData)(vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__state_2))
                   : ((1U == (IData)(vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__memreq_arb_io_chosen))
                       ? (1U == (IData)(vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__state_1))
                       : (1U == (IData)(vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__state_0))))));
    if (vlSelf->MMUtest__DOT__mmu__DOT__l2tlb__DOT__ptw_req_fifo__DOT__do_deq) {
        MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_20 = 
            ((0U == (IData)(MMUtest__DOT__mmu__DOT__ptw__DOT__enq_ptr))
              ? 1U : (IData)(vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__state_0));
        MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_21 = 
            ((1U == (IData)(MMUtest__DOT__mmu__DOT__ptw__DOT__enq_ptr))
              ? 1U : (IData)(vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__state_1));
        MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_22 = 
            ((2U == (IData)(MMUtest__DOT__mmu__DOT__ptw__DOT__enq_ptr))
              ? 1U : (IData)(vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__state_2));
        MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_23 = 
            ((3U == (IData)(MMUtest__DOT__mmu__DOT__ptw__DOT__enq_ptr))
              ? 1U : (IData)(vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__state_3));
    } else {
        MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_20 = vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__state_0;
        MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_21 = vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__state_1;
        MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_22 = vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__state_2;
        MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_23 = vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__state_3;
    }
    if (vlSelf->MMUtest__DOT__mmu__DOT__page_cache__DOT__mem_req_fifo__DOT__ram_addr_MPORT_en) {
        MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_44 = 
            ((0U == (IData)(vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__memreq_arb_io_chosen))
              ? 2U : (IData)(MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_20));
        MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_45 = 
            ((1U == (IData)(vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__memreq_arb_io_chosen))
              ? 2U : (IData)(MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_21));
        MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_46 = 
            ((2U == (IData)(vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__memreq_arb_io_chosen))
              ? 2U : (IData)(MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_22));
        MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_47 = 
            ((3U == (IData)(vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__memreq_arb_io_chosen))
              ? 2U : (IData)(MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_23));
    } else {
        MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_44 = MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_20;
        MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_45 = MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_21;
        MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_46 = MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_22;
        MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_47 = MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_23;
    }
    if (vlSelf->MMUtest__DOT__mmu__DOT__l2tlb__DOT__ptw_req_fifo__DOT__do_deq) {
        if ((3U == (IData)(MMUtest__DOT__mmu__DOT__ptw__DOT__enq_ptr))) {
            vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_39 
                = vlSelf->MMUtest__DOT__mmu__DOT__l2tlb__DOT__ptw_req_fifo__DOT__ram_source
                [0U];
            vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_31 
                = (0x7ffffffU & (IData)((vlSelf->MMUtest__DOT__mmu__DOT__l2tlb__DOT__ptw_req_fifo__DOT__ram_addr
                                         [0U] >> 0xcU)));
            MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_35 
                = (0xfffffffffffULL & vlSelf->MMUtest__DOT__mmu__DOT__l2tlb__DOT__ptw_req_fifo__DOT__ram_PTBR
                   [0U]);
            MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_27 = 2U;
        } else {
            vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_39 
                = vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_3_source;
            vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_31 
                = (0x7ffffffU & vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_3_vpn);
            MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_35 
                = (0xfffffffffffULL & vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_3_ppn);
            MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_27 
                = vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_3_cur_level;
        }
        if ((2U == (IData)(MMUtest__DOT__mmu__DOT__ptw__DOT__enq_ptr))) {
            vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_38 
                = vlSelf->MMUtest__DOT__mmu__DOT__l2tlb__DOT__ptw_req_fifo__DOT__ram_source
                [0U];
            vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_30 
                = (0x7ffffffU & (IData)((vlSelf->MMUtest__DOT__mmu__DOT__l2tlb__DOT__ptw_req_fifo__DOT__ram_addr
                                         [0U] >> 0xcU)));
            MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_34 
                = (0xfffffffffffULL & vlSelf->MMUtest__DOT__mmu__DOT__l2tlb__DOT__ptw_req_fifo__DOT__ram_PTBR
                   [0U]);
            MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_26 = 2U;
        } else {
            vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_38 
                = vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_2_source;
            vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_30 
                = (0x7ffffffU & vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_2_vpn);
            MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_34 
                = (0xfffffffffffULL & vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_2_ppn);
            MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_26 
                = vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_2_cur_level;
        }
        if ((1U == (IData)(MMUtest__DOT__mmu__DOT__ptw__DOT__enq_ptr))) {
            vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_37 
                = vlSelf->MMUtest__DOT__mmu__DOT__l2tlb__DOT__ptw_req_fifo__DOT__ram_source
                [0U];
            vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_29 
                = (0x7ffffffU & (IData)((vlSelf->MMUtest__DOT__mmu__DOT__l2tlb__DOT__ptw_req_fifo__DOT__ram_addr
                                         [0U] >> 0xcU)));
            MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_33 
                = (0xfffffffffffULL & vlSelf->MMUtest__DOT__mmu__DOT__l2tlb__DOT__ptw_req_fifo__DOT__ram_PTBR
                   [0U]);
            MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_25 = 2U;
        } else {
            vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_37 
                = vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_1_source;
            vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_29 
                = (0x7ffffffU & vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_1_vpn);
            MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_33 
                = (0xfffffffffffULL & vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_1_ppn);
            MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_25 
                = vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_1_cur_level;
        }
        if ((0U == (IData)(MMUtest__DOT__mmu__DOT__ptw__DOT__enq_ptr))) {
            vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_36 
                = vlSelf->MMUtest__DOT__mmu__DOT__l2tlb__DOT__ptw_req_fifo__DOT__ram_source
                [0U];
            vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_28 
                = (0x7ffffffU & (IData)((vlSelf->MMUtest__DOT__mmu__DOT__l2tlb__DOT__ptw_req_fifo__DOT__ram_addr
                                         [0U] >> 0xcU)));
            MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_32 
                = (0xfffffffffffULL & vlSelf->MMUtest__DOT__mmu__DOT__l2tlb__DOT__ptw_req_fifo__DOT__ram_PTBR
                   [0U]);
            MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_24 = 2U;
        } else {
            vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_36 
                = vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_0_source;
            vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_28 
                = (0x7ffffffU & vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_0_vpn);
            MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_32 
                = (0xfffffffffffULL & vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_0_ppn);
            MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_24 
                = vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_0_cur_level;
        }
    } else {
        vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_39 
            = vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_3_source;
        vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_38 
            = vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_2_source;
        vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_37 
            = vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_1_source;
        vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_36 
            = vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_0_source;
        vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_31 
            = (0x7ffffffU & vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_3_vpn);
        vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_30 
            = (0x7ffffffU & vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_2_vpn);
        vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_29 
            = (0x7ffffffU & vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_1_vpn);
        vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_28 
            = (0x7ffffffU & vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_0_vpn);
        MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_35 = 
            (0xfffffffffffULL & vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_3_ppn);
        MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_34 = 
            (0xfffffffffffULL & vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_2_ppn);
        MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_33 = 
            (0xfffffffffffULL & vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_1_ppn);
        MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_32 = 
            (0xfffffffffffULL & vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_0_ppn);
        MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_27 = vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_3_cur_level;
        MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_26 = vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_2_cur_level;
        MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_25 = vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_1_cur_level;
        MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_24 = vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_0_cur_level;
    }
    MMUtest__DOT__mmu__DOT__llptw__DOT____VdfgTmp_h58a007a5__0 
        = ((2U == (IData)(vlSelf->MMUtest__DOT__mmu__DOT__llptw__DOT__state_3)) 
           & ((IData)(vlSelf->MMUtest__DOT__mmu__DOT__llptw__DOT__entries_3_source) 
              == vlSelf->MMUtest__DOT__mmu__DOT__ll_page_cache__DOT__mem_rsp_fifo__DOT__ram_source
              [0U]));
    MMUtest__DOT__mmu__DOT__llptw__DOT____VdfgTmp_h1087adb7__0 
        = ((2U == (IData)(vlSelf->MMUtest__DOT__mmu__DOT__llptw__DOT__state_2)) 
           & ((IData)(vlSelf->MMUtest__DOT__mmu__DOT__llptw__DOT__entries_2_source) 
              == vlSelf->MMUtest__DOT__mmu__DOT__ll_page_cache__DOT__mem_rsp_fifo__DOT__ram_source
              [0U]));
    MMUtest__DOT__mmu__DOT__llptw__DOT____VdfgTmp_h9b841bc6__0 
        = ((2U == (IData)(vlSelf->MMUtest__DOT__mmu__DOT__llptw__DOT__state_1)) 
           & ((IData)(vlSelf->MMUtest__DOT__mmu__DOT__llptw__DOT__entries_1_source) 
              == vlSelf->MMUtest__DOT__mmu__DOT__ll_page_cache__DOT__mem_rsp_fifo__DOT__ram_source
              [0U]));
    MMUtest__DOT__mmu__DOT__llptw__DOT____VdfgTmp_h2ef22fef__0 
        = ((2U == (IData)(vlSelf->MMUtest__DOT__mmu__DOT__llptw__DOT__state_0)) 
           & ((IData)(vlSelf->MMUtest__DOT__mmu__DOT__llptw__DOT__entries_0_source) 
              == vlSelf->MMUtest__DOT__mmu__DOT__ll_page_cache__DOT__mem_rsp_fifo__DOT__ram_source
              [0U]));
    vlSelf->MMUtest__DOT__mmu__DOT__llptw__DOT__ptwrsp_arb_io_chosen 
        = (((3U == (IData)(vlSelf->MMUtest__DOT__mmu__DOT__llptw__DOT__state_1)) 
            & (1U > (IData)(vlSelf->MMUtest__DOT__mmu__DOT__llptw__DOT__ptwrsp_arb__DOT__lastGrant)))
            ? 1U : (((3U == (IData)(vlSelf->MMUtest__DOT__mmu__DOT__llptw__DOT__state_2)) 
                     & (2U > (IData)(vlSelf->MMUtest__DOT__mmu__DOT__llptw__DOT__ptwrsp_arb__DOT__lastGrant)))
                     ? 2U : (((3U == (IData)(vlSelf->MMUtest__DOT__mmu__DOT__llptw__DOT__state_3)) 
                              & (3U > (IData)(vlSelf->MMUtest__DOT__mmu__DOT__llptw__DOT__ptwrsp_arb__DOT__lastGrant)))
                              ? 3U : (IData)(vlSelf->MMUtest__DOT__mmu__DOT__llptw__DOT__deq_ptr))));
    MMUtest__DOT__mmu__DOT__ptw__DOT____VdfgTmp_h58a007a5__0 
        = ((2U == (IData)(vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__state_3)) 
           & ((IData)(vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_3_source) 
              == vlSelf->MMUtest__DOT__mmu__DOT__page_cache__DOT__mem_rsp_fifo__DOT__ram_source
              [0U]));
    MMUtest__DOT__mmu__DOT__ptw__DOT____VdfgTmp_h1087adb7__0 
        = ((2U == (IData)(vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__state_2)) 
           & ((IData)(vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_2_source) 
              == vlSelf->MMUtest__DOT__mmu__DOT__page_cache__DOT__mem_rsp_fifo__DOT__ram_source
              [0U]));
    MMUtest__DOT__mmu__DOT__ptw__DOT____VdfgTmp_h9b841bc6__0 
        = ((2U == (IData)(vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__state_1)) 
           & ((IData)(vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_1_source) 
              == vlSelf->MMUtest__DOT__mmu__DOT__page_cache__DOT__mem_rsp_fifo__DOT__ram_source
              [0U]));
    MMUtest__DOT__mmu__DOT__ptw__DOT____VdfgTmp_h2ef22fef__0 
        = ((2U == (IData)(vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__state_0)) 
           & ((IData)(vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_0_source) 
              == vlSelf->MMUtest__DOT__mmu__DOT__page_cache__DOT__mem_rsp_fifo__DOT__ram_source
              [0U]));
    if (vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__llreq_arb__DOT___ctrl_validMask_grantMask_lastGrant_T) {
        vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__llreq_arb__DOT__lastGrant 
            = vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__llreq_arb_io_chosen;
    }
    vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__llreq_arb_io_chosen 
        = (((3U == (IData)(vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__state_1)) 
            & (1U > (IData)(vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__llreq_arb__DOT__lastGrant)))
            ? 1U : (((3U == (IData)(vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__state_2)) 
                     & (2U > (IData)(vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__llreq_arb__DOT__lastGrant)))
                     ? 2U : (((3U == (IData)(vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__state_3)) 
                              & (3U > (IData)(vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__llreq_arb__DOT__lastGrant)))
                              ? 3U : (IData)(vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__deq_ptr))));
    vlSelf->MMUtest__DOT__mmu__DOT__l2tlb__DOT__l2tlb_rsp_fifo__DOT__ram_addr_MPORT_en 
        = ((~ (IData)(vlSelf->MMUtest__DOT__mmu__DOT__l2tlb__DOT__l2tlb_rsp_fifo__DOT__maybe_full)) 
           & ((3U == (IData)(vlSelf->MMUtest__DOT__mmu__DOT__llptw__DOT__ptwrsp_arb_io_chosen))
               ? (3U == (IData)(vlSelf->MMUtest__DOT__mmu__DOT__llptw__DOT__state_3))
               : ((2U == (IData)(vlSelf->MMUtest__DOT__mmu__DOT__llptw__DOT__ptwrsp_arb_io_chosen))
                   ? (3U == (IData)(vlSelf->MMUtest__DOT__mmu__DOT__llptw__DOT__state_2))
                   : ((1U == (IData)(vlSelf->MMUtest__DOT__mmu__DOT__llptw__DOT__ptwrsp_arb_io_chosen))
                       ? (3U == (IData)(vlSelf->MMUtest__DOT__mmu__DOT__llptw__DOT__state_1))
                       : (3U == (IData)(vlSelf->MMUtest__DOT__mmu__DOT__llptw__DOT__state_0))))));
    if (vlSelf->MMUtest__DOT__mmu__DOT__page_cache__DOT__mem_rsp_fifo__DOT__do_deq) {
        if (MMUtest__DOT__mmu__DOT__ptw__DOT____VdfgTmp_h58a007a5__0) {
            vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_71 
                = (0xfffffffffffULL & (vlSelf->MMUtest__DOT__mmu__DOT__page_cache__DOT__mem_rsp_fifo__DOT__ram_addr
                                       [0U] >> 0xaU));
            vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_70 
                = (3U & ((IData)(vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_3_cur_level) 
                         - (IData)(1U)));
            vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_69 
                = ((1U < (IData)(vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_3_cur_level))
                    ? 1U : 3U);
        } else {
            vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_71 
                = (0xfffffffffffULL & MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_35);
            vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_70 
                = (3U & (IData)(MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_27));
            vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_69 
                = MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_47;
        }
        if (MMUtest__DOT__mmu__DOT__ptw__DOT____VdfgTmp_h1087adb7__0) {
            vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_68 
                = (0xfffffffffffULL & (vlSelf->MMUtest__DOT__mmu__DOT__page_cache__DOT__mem_rsp_fifo__DOT__ram_addr
                                       [0U] >> 0xaU));
            vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_67 
                = (3U & ((IData)(vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_2_cur_level) 
                         - (IData)(1U)));
            vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_66 
                = ((1U < (IData)(vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_2_cur_level))
                    ? 1U : 3U);
        } else {
            vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_68 
                = (0xfffffffffffULL & MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_34);
            vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_67 
                = (3U & (IData)(MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_26));
            vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_66 
                = MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_46;
        }
        if (MMUtest__DOT__mmu__DOT__ptw__DOT____VdfgTmp_h9b841bc6__0) {
            vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_65 
                = (0xfffffffffffULL & (vlSelf->MMUtest__DOT__mmu__DOT__page_cache__DOT__mem_rsp_fifo__DOT__ram_addr
                                       [0U] >> 0xaU));
            vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_64 
                = (3U & ((IData)(vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_1_cur_level) 
                         - (IData)(1U)));
            vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_63 
                = ((1U < (IData)(vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_1_cur_level))
                    ? 1U : 3U);
        } else {
            vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_65 
                = (0xfffffffffffULL & MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_33);
            vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_64 
                = (3U & (IData)(MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_25));
            vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_63 
                = MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_45;
        }
        if (MMUtest__DOT__mmu__DOT__ptw__DOT____VdfgTmp_h2ef22fef__0) {
            vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_62 
                = (0xfffffffffffULL & (vlSelf->MMUtest__DOT__mmu__DOT__page_cache__DOT__mem_rsp_fifo__DOT__ram_addr
                                       [0U] >> 0xaU));
            vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_61 
                = (3U & ((IData)(vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_0_cur_level) 
                         - (IData)(1U)));
            vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_60 
                = ((1U < (IData)(vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_0_cur_level))
                    ? 1U : 3U);
        } else {
            vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_62 
                = (0xfffffffffffULL & MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_32);
            vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_61 
                = (3U & (IData)(MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_24));
            vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_60 
                = MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_44;
        }
    } else {
        vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_71 
            = (0xfffffffffffULL & MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_35);
        vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_68 
            = (0xfffffffffffULL & MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_34);
        vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_65 
            = (0xfffffffffffULL & MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_33);
        vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_62 
            = (0xfffffffffffULL & MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_32);
        vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_70 
            = (3U & (IData)(MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_27));
        vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_67 
            = (3U & (IData)(MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_26));
        vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_64 
            = (3U & (IData)(MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_25));
        vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_61 
            = (3U & (IData)(MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_24));
        vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_60 
            = MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_44;
        vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_63 
            = MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_45;
        vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_66 
            = MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_46;
        vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_69 
            = MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_47;
    }
    MMUtest__DOT__mmu__DOT__ptw__DOT__llreq_arb_io_out_bits_source 
        = ((3U == (IData)(vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__llreq_arb_io_chosen))
            ? (IData)(vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_3_source)
            : ((2U == (IData)(vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__llreq_arb_io_chosen))
                ? (IData)(vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_2_source)
                : ((1U == (IData)(vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__llreq_arb_io_chosen))
                    ? (IData)(vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_1_source)
                    : (IData)(vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_0_source))));
    MMUtest__DOT__mmu__DOT__ptw_io_ll_req_bits_addr 
        = (0xffffffffffffffULL & ((((3U == (IData)(vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__llreq_arb_io_chosen))
                                     ? vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_3_ppn
                                     : ((2U == (IData)(vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__llreq_arb_io_chosen))
                                         ? vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_2_ppn
                                         : ((1U == (IData)(vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__llreq_arb_io_chosen))
                                             ? vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_1_ppn
                                             : vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_0_ppn))) 
                                   << 0xcU) + (QData)((IData)(
                                                              (((0x1aU 
                                                                 >= 
                                                                 (0x3fU 
                                                                  & ((IData)(9U) 
                                                                     * 
                                                                     ((3U 
                                                                       == (IData)(vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__llreq_arb_io_chosen))
                                                                       ? (IData)(vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_3_cur_level)
                                                                       : 
                                                                      ((2U 
                                                                        == (IData)(vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__llreq_arb_io_chosen))
                                                                        ? (IData)(vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_2_cur_level)
                                                                        : 
                                                                       ((1U 
                                                                         == (IData)(vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__llreq_arb_io_chosen))
                                                                         ? (IData)(vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_1_cur_level)
                                                                         : (IData)(vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_0_cur_level)))))))
                                                                 ? 
                                                                (0x1ffU 
                                                                 & (((3U 
                                                                      == (IData)(vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__llreq_arb_io_chosen))
                                                                      ? vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_3_vpn
                                                                      : 
                                                                     ((2U 
                                                                       == (IData)(vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__llreq_arb_io_chosen))
                                                                       ? vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_2_vpn
                                                                       : 
                                                                      ((1U 
                                                                        == (IData)(vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__llreq_arb_io_chosen))
                                                                        ? vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_1_vpn
                                                                        : vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_0_vpn))) 
                                                                    >> 
                                                                    (0x3fU 
                                                                     & ((IData)(9U) 
                                                                        * 
                                                                        ((3U 
                                                                          == (IData)(vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__llreq_arb_io_chosen))
                                                                          ? (IData)(vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_3_cur_level)
                                                                          : 
                                                                         ((2U 
                                                                           == (IData)(vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__llreq_arb_io_chosen))
                                                                           ? (IData)(vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_2_cur_level)
                                                                           : 
                                                                          ((1U 
                                                                            == (IData)(vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__llreq_arb_io_chosen))
                                                                            ? (IData)(vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_1_cur_level)
                                                                            : (IData)(vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_0_cur_level))))))))
                                                                 : 0U) 
                                                               << 3U)))));
    vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__llreq_arb__DOT___ctrl_validMask_grantMask_lastGrant_T 
        = (((0U == (IData)(vlSelf->MMUtest__DOT__mmu__DOT__llptw__DOT__state_0)) 
            | ((0U == (IData)(vlSelf->MMUtest__DOT__mmu__DOT__llptw__DOT__state_1)) 
               | ((0U == (IData)(vlSelf->MMUtest__DOT__mmu__DOT__llptw__DOT__state_2)) 
                  | (0U == (IData)(vlSelf->MMUtest__DOT__mmu__DOT__llptw__DOT__state_3))))) 
           & ((3U == (IData)(vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__llreq_arb_io_chosen))
               ? (3U == (IData)(vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__state_3))
               : ((2U == (IData)(vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__llreq_arb_io_chosen))
                   ? (3U == (IData)(vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__state_2))
                   : ((1U == (IData)(vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__llreq_arb_io_chosen))
                       ? (3U == (IData)(vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__state_1))
                       : (3U == (IData)(vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__state_0))))));
    if (vlSelf->MMUtest__DOT__mmu__DOT__ptw__DOT__llreq_arb__DOT___ctrl_validMask_grantMask_lastGrant_T) {
        if ((0U == (IData)(MMUtest__DOT__mmu__DOT__llptw__DOT__enq_ptr))) {
            vlSelf->MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_20 
                = MMUtest__DOT__mmu__DOT__ptw__DOT__llreq_arb_io_out_bits_source;
            MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_16 
                = MMUtest__DOT__mmu__DOT__ptw_io_ll_req_bits_addr;
            MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_12 = 1U;
        } else {
            vlSelf->MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_20 
                = vlSelf->MMUtest__DOT__mmu__DOT__llptw__DOT__entries_0_source;
            MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_16 
                = vlSelf->MMUtest__DOT__mmu__DOT__llptw__DOT__entries_0_addr;
            MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_12 
                = vlSelf->MMUtest__DOT__mmu__DOT__llptw__DOT__state_0;
        }
        if ((1U == (IData)(MMUtest__DOT__mmu__DOT__llptw__DOT__enq_ptr))) {
            vlSelf->MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_21 
                = MMUtest__DOT__mmu__DOT__ptw__DOT__llreq_arb_io_out_bits_source;
            MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_17 
                = MMUtest__DOT__mmu__DOT__ptw_io_ll_req_bits_addr;
            MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_13 = 1U;
        } else {
            vlSelf->MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_21 
                = vlSelf->MMUtest__DOT__mmu__DOT__llptw__DOT__entries_1_source;
            MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_17 
                = vlSelf->MMUtest__DOT__mmu__DOT__llptw__DOT__entries_1_addr;
            MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_13 
                = vlSelf->MMUtest__DOT__mmu__DOT__llptw__DOT__state_1;
        }
        if ((2U == (IData)(MMUtest__DOT__mmu__DOT__llptw__DOT__enq_ptr))) {
            vlSelf->MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_22 
                = MMUtest__DOT__mmu__DOT__ptw__DOT__llreq_arb_io_out_bits_source;
            MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_18 
                = MMUtest__DOT__mmu__DOT__ptw_io_ll_req_bits_addr;
            MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_14 = 1U;
        } else {
            vlSelf->MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_22 
                = vlSelf->MMUtest__DOT__mmu__DOT__llptw__DOT__entries_2_source;
            MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_18 
                = vlSelf->MMUtest__DOT__mmu__DOT__llptw__DOT__entries_2_addr;
            MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_14 
                = vlSelf->MMUtest__DOT__mmu__DOT__llptw__DOT__state_2;
        }
        if ((3U == (IData)(MMUtest__DOT__mmu__DOT__llptw__DOT__enq_ptr))) {
            vlSelf->MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_23 
                = MMUtest__DOT__mmu__DOT__ptw__DOT__llreq_arb_io_out_bits_source;
            MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_19 
                = MMUtest__DOT__mmu__DOT__ptw_io_ll_req_bits_addr;
            MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_15 = 1U;
        } else {
            vlSelf->MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_23 
                = vlSelf->MMUtest__DOT__mmu__DOT__llptw__DOT__entries_3_source;
            MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_19 
                = vlSelf->MMUtest__DOT__mmu__DOT__llptw__DOT__entries_3_addr;
            MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_15 
                = vlSelf->MMUtest__DOT__mmu__DOT__llptw__DOT__state_3;
        }
    } else {
        vlSelf->MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_20 
            = vlSelf->MMUtest__DOT__mmu__DOT__llptw__DOT__entries_0_source;
        vlSelf->MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_21 
            = vlSelf->MMUtest__DOT__mmu__DOT__llptw__DOT__entries_1_source;
        vlSelf->MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_22 
            = vlSelf->MMUtest__DOT__mmu__DOT__llptw__DOT__entries_2_source;
        vlSelf->MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_23 
            = vlSelf->MMUtest__DOT__mmu__DOT__llptw__DOT__entries_3_source;
        MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_16 
            = vlSelf->MMUtest__DOT__mmu__DOT__llptw__DOT__entries_0_addr;
        MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_17 
            = vlSelf->MMUtest__DOT__mmu__DOT__llptw__DOT__entries_1_addr;
        MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_18 
            = vlSelf->MMUtest__DOT__mmu__DOT__llptw__DOT__entries_2_addr;
        MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_19 
            = vlSelf->MMUtest__DOT__mmu__DOT__llptw__DOT__entries_3_addr;
        MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_12 
            = vlSelf->MMUtest__DOT__mmu__DOT__llptw__DOT__state_0;
        MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_13 
            = vlSelf->MMUtest__DOT__mmu__DOT__llptw__DOT__state_1;
        MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_14 
            = vlSelf->MMUtest__DOT__mmu__DOT__llptw__DOT__state_2;
        MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_15 
            = vlSelf->MMUtest__DOT__mmu__DOT__llptw__DOT__state_3;
    }
    if (vlSelf->MMUtest__DOT__mmu__DOT__ll_page_cache__DOT__mem_req_fifo__DOT__ram_addr_MPORT_en) {
        MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_28 
            = ((0U == (IData)(vlSelf->MMUtest__DOT__mmu__DOT__llptw__DOT__memreq_arb_io_chosen))
                ? 2U : (IData)(MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_12));
        MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_29 
            = ((1U == (IData)(vlSelf->MMUtest__DOT__mmu__DOT__llptw__DOT__memreq_arb_io_chosen))
                ? 2U : (IData)(MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_13));
        MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_30 
            = ((2U == (IData)(vlSelf->MMUtest__DOT__mmu__DOT__llptw__DOT__memreq_arb_io_chosen))
                ? 2U : (IData)(MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_14));
        MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_31 
            = ((3U == (IData)(vlSelf->MMUtest__DOT__mmu__DOT__llptw__DOT__memreq_arb_io_chosen))
                ? 2U : (IData)(MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_15));
    } else {
        MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_28 
            = MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_12;
        MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_29 
            = MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_13;
        MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_30 
            = MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_14;
        MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_31 
            = MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_15;
    }
    if (vlSelf->MMUtest__DOT__mmu__DOT__ll_page_cache__DOT__mem_rsp_fifo__DOT__do_deq) {
        if (MMUtest__DOT__mmu__DOT__llptw__DOT____VdfgTmp_h2ef22fef__0) {
            vlSelf->MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_41 
                = vlSelf->MMUtest__DOT__mmu__DOT__ll_page_cache__DOT__mem_rsp_fifo__DOT__ram_addr
                [0U];
            vlSelf->MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_40 = 3U;
        } else {
            vlSelf->MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_41 
                = MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_16;
            vlSelf->MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_40 
                = MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_28;
        }
        if (MMUtest__DOT__mmu__DOT__llptw__DOT____VdfgTmp_h9b841bc6__0) {
            vlSelf->MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_43 
                = vlSelf->MMUtest__DOT__mmu__DOT__ll_page_cache__DOT__mem_rsp_fifo__DOT__ram_addr
                [0U];
            vlSelf->MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_42 = 3U;
        } else {
            vlSelf->MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_43 
                = MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_17;
            vlSelf->MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_42 
                = MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_29;
        }
        if (MMUtest__DOT__mmu__DOT__llptw__DOT____VdfgTmp_h1087adb7__0) {
            vlSelf->MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_45 
                = vlSelf->MMUtest__DOT__mmu__DOT__ll_page_cache__DOT__mem_rsp_fifo__DOT__ram_addr
                [0U];
            vlSelf->MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_44 = 3U;
        } else {
            vlSelf->MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_45 
                = MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_18;
            vlSelf->MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_44 
                = MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_30;
        }
        if (MMUtest__DOT__mmu__DOT__llptw__DOT____VdfgTmp_h58a007a5__0) {
            vlSelf->MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_47 
                = vlSelf->MMUtest__DOT__mmu__DOT__ll_page_cache__DOT__mem_rsp_fifo__DOT__ram_addr
                [0U];
            vlSelf->MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_46 = 3U;
        } else {
            vlSelf->MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_47 
                = MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_19;
            vlSelf->MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_46 
                = MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_31;
        }
    } else {
        vlSelf->MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_41 
            = MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_16;
        vlSelf->MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_43 
            = MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_17;
        vlSelf->MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_45 
            = MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_18;
        vlSelf->MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_47 
            = MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_19;
        vlSelf->MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_40 
            = MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_28;
        vlSelf->MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_42 
            = MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_29;
        vlSelf->MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_44 
            = MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_30;
        vlSelf->MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_46 
            = MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_31;
    }
}

void VMMUtest___024root___eval_nba(VMMUtest___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMMUtest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMMUtest___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VMMUtest___024root___nba_sequent__TOP__0(vlSelf);
    }
}

void VMMUtest___024root___eval_triggers__ico(VMMUtest___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VMMUtest___024root___dump_triggers__ico(VMMUtest___024root* vlSelf);
#endif  // VL_DEBUG
void VMMUtest___024root___eval_triggers__act(VMMUtest___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VMMUtest___024root___dump_triggers__act(VMMUtest___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VMMUtest___024root___dump_triggers__nba(VMMUtest___024root* vlSelf);
#endif  // VL_DEBUG

void VMMUtest___024root___eval(VMMUtest___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMMUtest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMMUtest___024root___eval\n"); );
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
        VMMUtest___024root___eval_triggers__ico(vlSelf);
        if (vlSelf->__VicoTriggered.any()) {
            __VicoContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VicoIterCount))) {
#ifdef VL_DEBUG
                VMMUtest___024root___dump_triggers__ico(vlSelf);
#endif
                VL_FATAL_MT("MMUtest.v", 2335, "", "Input combinational region did not converge.");
            }
            vlSelf->__VicoIterCount = ((IData)(1U) 
                                       + vlSelf->__VicoIterCount);
            VMMUtest___024root___eval_ico(vlSelf);
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
            VMMUtest___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    VMMUtest___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("MMUtest.v", 2335, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                VMMUtest___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                VMMUtest___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("MMUtest.v", 2335, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            VMMUtest___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void VMMUtest___024root___eval_debug_assertions(VMMUtest___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMMUtest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMMUtest___024root___eval_debug_assertions\n"); );
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
    if (VL_UNLIKELY((vlSelf->io_out_d_bits_size & 0xf8U))) {
        Verilated::overWidthError("io_out_d_bits_size");}
    if (VL_UNLIKELY((vlSelf->io_out_d_bits_source & 0xf0U))) {
        Verilated::overWidthError("io_out_d_bits_source");}
}
#endif  // VL_DEBUG
