// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMMUtest.h for the primary calling header

#include "VMMUtest.h"
#include "VMMUtest__Syms.h"

//==========

void VMMUtest::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VMMUtest::eval\n"); );
    VMMUtest__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VMMUtest* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
#ifdef VL_DEBUG
    // Debug assertions
    _eval_debug_assertions();
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("../MMUtest.v", 2335, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VMMUtest::_eval_initial_loop(VMMUtest__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    _eval_initial(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        _eval_settle(vlSymsp);
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("../MMUtest.v", 2335, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void VMMUtest::_sequent__TOP__2(VMMUtest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMMUtest::_sequent__TOP__2\n"); );
    VMMUtest* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*0:0*/ __Vdlyvset__MMUtest__DOT__mmu__DOT__tlb__DOT__l2tlb_req_fifo__DOT__ram_addr__v0;
    CData/*0:0*/ __Vdlyvset__MMUtest__DOT__mmu__DOT__tlb__DOT__l2tlb_req_fifo__DOT__ram_PTBR__v0;
    CData/*1:0*/ __Vdlyvval__MMUtest__DOT__mmu__DOT__tlb__DOT__l2tlb_req_fifo__DOT__ram_source__v0;
    CData/*0:0*/ __Vdlyvset__MMUtest__DOT__mmu__DOT__tlb__DOT__l2tlb_req_fifo__DOT__ram_source__v0;
    CData/*0:0*/ __Vdlyvset__MMUtest__DOT__mmu__DOT__tlb__DOT__tlb_rsp_fifo__DOT__ram_addr__v0;
    CData/*1:0*/ __Vdlyvval__MMUtest__DOT__mmu__DOT__tlb__DOT__tlb_rsp_fifo__DOT__ram_source__v0;
    CData/*0:0*/ __Vdlyvset__MMUtest__DOT__mmu__DOT__tlb__DOT__tlb_rsp_fifo__DOT__ram_source__v0;
    CData/*0:0*/ __Vdlyvset__MMUtest__DOT__mmu__DOT__l2tlb__DOT__ptw_req_fifo__DOT__ram_addr__v0;
    CData/*0:0*/ __Vdlyvset__MMUtest__DOT__mmu__DOT__l2tlb__DOT__ptw_req_fifo__DOT__ram_PTBR__v0;
    CData/*1:0*/ __Vdlyvval__MMUtest__DOT__mmu__DOT__l2tlb__DOT__ptw_req_fifo__DOT__ram_source__v0;
    CData/*0:0*/ __Vdlyvset__MMUtest__DOT__mmu__DOT__l2tlb__DOT__ptw_req_fifo__DOT__ram_source__v0;
    CData/*0:0*/ __Vdlyvset__MMUtest__DOT__mmu__DOT__l2tlb__DOT__l2tlb_rsp_fifo__DOT__ram_addr__v0;
    CData/*1:0*/ __Vdlyvval__MMUtest__DOT__mmu__DOT__l2tlb__DOT__l2tlb_rsp_fifo__DOT__ram_source__v0;
    CData/*0:0*/ __Vdlyvset__MMUtest__DOT__mmu__DOT__l2tlb__DOT__l2tlb_rsp_fifo__DOT__ram_source__v0;
    CData/*0:0*/ __Vdlyvset__MMUtest__DOT__mmu__DOT__page_cache__DOT__mem_req_fifo__DOT__ram_addr__v0;
    CData/*1:0*/ __Vdlyvval__MMUtest__DOT__mmu__DOT__page_cache__DOT__mem_req_fifo__DOT__ram_source__v0;
    CData/*0:0*/ __Vdlyvset__MMUtest__DOT__mmu__DOT__page_cache__DOT__mem_req_fifo__DOT__ram_source__v0;
    CData/*0:0*/ __Vdlyvset__MMUtest__DOT__mmu__DOT__page_cache__DOT__mem_rsp_fifo__DOT__ram_addr__v0;
    CData/*1:0*/ __Vdlyvval__MMUtest__DOT__mmu__DOT__page_cache__DOT__mem_rsp_fifo__DOT__ram_source__v0;
    CData/*0:0*/ __Vdlyvset__MMUtest__DOT__mmu__DOT__page_cache__DOT__mem_rsp_fifo__DOT__ram_source__v0;
    CData/*0:0*/ __Vdlyvset__MMUtest__DOT__mmu__DOT__ll_page_cache__DOT__mem_req_fifo__DOT__ram_addr__v0;
    CData/*1:0*/ __Vdlyvval__MMUtest__DOT__mmu__DOT__ll_page_cache__DOT__mem_req_fifo__DOT__ram_source__v0;
    CData/*0:0*/ __Vdlyvset__MMUtest__DOT__mmu__DOT__ll_page_cache__DOT__mem_req_fifo__DOT__ram_source__v0;
    CData/*0:0*/ __Vdlyvset__MMUtest__DOT__mmu__DOT__ll_page_cache__DOT__mem_rsp_fifo__DOT__ram_addr__v0;
    CData/*1:0*/ __Vdlyvval__MMUtest__DOT__mmu__DOT__ll_page_cache__DOT__mem_rsp_fifo__DOT__ram_source__v0;
    CData/*0:0*/ __Vdlyvset__MMUtest__DOT__mmu__DOT__ll_page_cache__DOT__mem_rsp_fifo__DOT__ram_source__v0;
    QData/*63:0*/ __Vdlyvval__MMUtest__DOT__mmu__DOT__tlb__DOT__l2tlb_req_fifo__DOT__ram_addr__v0;
    QData/*63:0*/ __Vdlyvval__MMUtest__DOT__mmu__DOT__tlb__DOT__l2tlb_req_fifo__DOT__ram_PTBR__v0;
    QData/*63:0*/ __Vdlyvval__MMUtest__DOT__mmu__DOT__tlb__DOT__tlb_rsp_fifo__DOT__ram_addr__v0;
    QData/*63:0*/ __Vdlyvval__MMUtest__DOT__mmu__DOT__l2tlb__DOT__ptw_req_fifo__DOT__ram_addr__v0;
    QData/*63:0*/ __Vdlyvval__MMUtest__DOT__mmu__DOT__l2tlb__DOT__ptw_req_fifo__DOT__ram_PTBR__v0;
    QData/*63:0*/ __Vdlyvval__MMUtest__DOT__mmu__DOT__l2tlb__DOT__l2tlb_rsp_fifo__DOT__ram_addr__v0;
    QData/*63:0*/ __Vdlyvval__MMUtest__DOT__mmu__DOT__page_cache__DOT__mem_req_fifo__DOT__ram_addr__v0;
    QData/*63:0*/ __Vdlyvval__MMUtest__DOT__mmu__DOT__page_cache__DOT__mem_rsp_fifo__DOT__ram_addr__v0;
    QData/*63:0*/ __Vdlyvval__MMUtest__DOT__mmu__DOT__ll_page_cache__DOT__mem_req_fifo__DOT__ram_addr__v0;
    QData/*63:0*/ __Vdlyvval__MMUtest__DOT__mmu__DOT__ll_page_cache__DOT__mem_rsp_fifo__DOT__ram_addr__v0;
    // Body
    if (VL_UNLIKELY((((IData)(vlTOPp->io_host_rsp_ready) 
                      & (IData)(vlTOPp->io_host_rsp_valid)) 
                     & (~ (IData)(vlTOPp->reset))))) {
        VL_FWRITEF(0x80000002U,"addr translate complete, target is 0x%x for 0x%1#",
                   64,vlTOPp->MMUtest__DOT__mmu__DOT__tlb__DOT__tlb_rsp_fifo__DOT__ram_addr
                   [0U],2,vlTOPp->MMUtest__DOT__mmu__DOT__tlb__DOT__tlb_rsp_fifo__DOT__ram_source
                   [0U]);
    }
    __Vdlyvset__MMUtest__DOT__mmu__DOT__tlb__DOT__l2tlb_req_fifo__DOT__ram_source__v0 = 0U;
    __Vdlyvset__MMUtest__DOT__mmu__DOT__tlb__DOT__l2tlb_req_fifo__DOT__ram_PTBR__v0 = 0U;
    __Vdlyvset__MMUtest__DOT__mmu__DOT__tlb__DOT__l2tlb_req_fifo__DOT__ram_addr__v0 = 0U;
    __Vdlyvset__MMUtest__DOT__mmu__DOT__tlb__DOT__tlb_rsp_fifo__DOT__ram_addr__v0 = 0U;
    __Vdlyvset__MMUtest__DOT__mmu__DOT__tlb__DOT__tlb_rsp_fifo__DOT__ram_source__v0 = 0U;
    __Vdlyvset__MMUtest__DOT__mmu__DOT__ll_page_cache__DOT__mem_rsp_fifo__DOT__ram_addr__v0 = 0U;
    __Vdlyvset__MMUtest__DOT__mmu__DOT__l2tlb__DOT__l2tlb_rsp_fifo__DOT__ram_source__v0 = 0U;
    __Vdlyvset__MMUtest__DOT__mmu__DOT__l2tlb__DOT__l2tlb_rsp_fifo__DOT__ram_addr__v0 = 0U;
    __Vdlyvset__MMUtest__DOT__mmu__DOT__ll_page_cache__DOT__mem_rsp_fifo__DOT__ram_source__v0 = 0U;
    __Vdlyvset__MMUtest__DOT__mmu__DOT__page_cache__DOT__mem_rsp_fifo__DOT__ram_addr__v0 = 0U;
    __Vdlyvset__MMUtest__DOT__mmu__DOT__page_cache__DOT__mem_rsp_fifo__DOT__ram_source__v0 = 0U;
    __Vdlyvset__MMUtest__DOT__mmu__DOT__ll_page_cache__DOT__mem_req_fifo__DOT__ram_source__v0 = 0U;
    __Vdlyvset__MMUtest__DOT__mmu__DOT__ll_page_cache__DOT__mem_req_fifo__DOT__ram_addr__v0 = 0U;
    __Vdlyvset__MMUtest__DOT__mmu__DOT__l2tlb__DOT__ptw_req_fifo__DOT__ram_source__v0 = 0U;
    __Vdlyvset__MMUtest__DOT__mmu__DOT__l2tlb__DOT__ptw_req_fifo__DOT__ram_addr__v0 = 0U;
    __Vdlyvset__MMUtest__DOT__mmu__DOT__l2tlb__DOT__ptw_req_fifo__DOT__ram_PTBR__v0 = 0U;
    __Vdlyvset__MMUtest__DOT__mmu__DOT__page_cache__DOT__mem_req_fifo__DOT__ram_source__v0 = 0U;
    __Vdlyvset__MMUtest__DOT__mmu__DOT__page_cache__DOT__mem_req_fifo__DOT__ram_addr__v0 = 0U;
    if (((~ (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__tlb__DOT__l2tlb_req_fifo__DOT__maybe_full)) 
         & (IData)(vlTOPp->io_host_req_valid))) {
        __Vdlyvval__MMUtest__DOT__mmu__DOT__tlb__DOT__l2tlb_req_fifo__DOT__ram_source__v0 
            = (3U & (IData)(vlTOPp->io_host_req_bits_host_wg_id));
        __Vdlyvset__MMUtest__DOT__mmu__DOT__tlb__DOT__l2tlb_req_fifo__DOT__ram_source__v0 = 1U;
    }
    if (((~ (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__tlb__DOT__l2tlb_req_fifo__DOT__maybe_full)) 
         & (IData)(vlTOPp->io_host_req_valid))) {
        __Vdlyvval__MMUtest__DOT__mmu__DOT__tlb__DOT__l2tlb_req_fifo__DOT__ram_PTBR__v0 
            = (QData)((IData)(vlTOPp->io_host_req_bits_host_gds_baseaddr));
        __Vdlyvset__MMUtest__DOT__mmu__DOT__tlb__DOT__l2tlb_req_fifo__DOT__ram_PTBR__v0 = 1U;
    }
    if (((~ (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__tlb__DOT__l2tlb_req_fifo__DOT__maybe_full)) 
         & (IData)(vlTOPp->io_host_req_valid))) {
        __Vdlyvval__MMUtest__DOT__mmu__DOT__tlb__DOT__l2tlb_req_fifo__DOT__ram_addr__v0 
            = (QData)((IData)(vlTOPp->io_host_req_bits_host_start_pc));
        __Vdlyvset__MMUtest__DOT__mmu__DOT__tlb__DOT__l2tlb_req_fifo__DOT__ram_addr__v0 = 1U;
    }
    if (((~ (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__tlb__DOT__tlb_rsp_fifo__DOT__maybe_full)) 
         & (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__l2tlb__DOT__l2tlb_rsp_fifo__DOT__maybe_full))) {
        __Vdlyvval__MMUtest__DOT__mmu__DOT__tlb__DOT__tlb_rsp_fifo__DOT__ram_addr__v0 
            = vlTOPp->MMUtest__DOT__mmu__DOT__l2tlb__DOT__l2tlb_rsp_fifo__DOT__ram_addr
            [0U];
        __Vdlyvset__MMUtest__DOT__mmu__DOT__tlb__DOT__tlb_rsp_fifo__DOT__ram_addr__v0 = 1U;
    }
    if (((~ (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__tlb__DOT__tlb_rsp_fifo__DOT__maybe_full)) 
         & (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__l2tlb__DOT__l2tlb_rsp_fifo__DOT__maybe_full))) {
        __Vdlyvval__MMUtest__DOT__mmu__DOT__tlb__DOT__tlb_rsp_fifo__DOT__ram_source__v0 
            = vlTOPp->MMUtest__DOT__mmu__DOT__l2tlb__DOT__l2tlb_rsp_fifo__DOT__ram_source
            [0U];
        __Vdlyvset__MMUtest__DOT__mmu__DOT__tlb__DOT__tlb_rsp_fifo__DOT__ram_source__v0 = 1U;
    }
    if (((~ (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__l2tlb__DOT__l2tlb_rsp_fifo__DOT__maybe_full)) 
         & (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT__ptwrsp_arb_io_out_valid))) {
        vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT__ptwrsp_arb__DOT__lastGrant 
            = vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT__ptwrsp_arb_io_chosen;
    }
    if (((~ (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ll_page_cache__DOT__mem_rsp_fifo__DOT__maybe_full)) 
         & (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__mem_arb_io_memRspVecOut_0_valid))) {
        __Vdlyvval__MMUtest__DOT__mmu__DOT__ll_page_cache__DOT__mem_rsp_fifo__DOT__ram_addr__v0 
            = vlTOPp->io_out_d_bits_data;
        __Vdlyvset__MMUtest__DOT__mmu__DOT__ll_page_cache__DOT__mem_rsp_fifo__DOT__ram_addr__v0 = 1U;
    }
    if (((~ (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__l2tlb__DOT__l2tlb_rsp_fifo__DOT__maybe_full)) 
         & (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT__ptwrsp_arb_io_out_valid))) {
        __Vdlyvval__MMUtest__DOT__mmu__DOT__l2tlb__DOT__l2tlb_rsp_fifo__DOT__ram_source__v0 
            = ((3U == (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT__ptwrsp_arb_io_chosen))
                ? (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT__entries_3_source)
                : ((2U == (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT__ptwrsp_arb_io_chosen))
                    ? (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT__entries_2_source)
                    : ((1U == (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT__ptwrsp_arb_io_chosen))
                        ? (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT__entries_1_source)
                        : (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT__entries_0_source))));
        __Vdlyvset__MMUtest__DOT__mmu__DOT__l2tlb__DOT__l2tlb_rsp_fifo__DOT__ram_source__v0 = 1U;
    }
    if (((~ (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__l2tlb__DOT__l2tlb_rsp_fifo__DOT__maybe_full)) 
         & (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT__ptwrsp_arb_io_out_valid))) {
        __Vdlyvval__MMUtest__DOT__mmu__DOT__l2tlb__DOT__l2tlb_rsp_fifo__DOT__ram_addr__v0 
            = ((3U == (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT__ptwrsp_arb_io_chosen))
                ? vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT__entries_3_addr
                : ((2U == (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT__ptwrsp_arb_io_chosen))
                    ? vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT__entries_2_addr
                    : ((1U == (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT__ptwrsp_arb_io_chosen))
                        ? vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT__entries_1_addr
                        : vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT__entries_0_addr)));
        __Vdlyvset__MMUtest__DOT__mmu__DOT__l2tlb__DOT__l2tlb_rsp_fifo__DOT__ram_addr__v0 = 1U;
    }
    if (((~ (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ll_page_cache__DOT__mem_rsp_fifo__DOT__maybe_full)) 
         & (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__mem_arb_io_memRspVecOut_0_valid))) {
        __Vdlyvval__MMUtest__DOT__mmu__DOT__ll_page_cache__DOT__mem_rsp_fifo__DOT__ram_source__v0 
            = (3U & (IData)(vlTOPp->io_out_d_bits_source));
        __Vdlyvset__MMUtest__DOT__mmu__DOT__ll_page_cache__DOT__mem_rsp_fifo__DOT__ram_source__v0 = 1U;
    }
    if (((~ (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__page_cache__DOT__mem_rsp_fifo__DOT__maybe_full)) 
         & (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__mem_arb_io_memRspVecOut_1_valid))) {
        __Vdlyvval__MMUtest__DOT__mmu__DOT__page_cache__DOT__mem_rsp_fifo__DOT__ram_addr__v0 
            = vlTOPp->io_out_d_bits_data;
        __Vdlyvset__MMUtest__DOT__mmu__DOT__page_cache__DOT__mem_rsp_fifo__DOT__ram_addr__v0 = 1U;
    }
    if (((~ (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__page_cache__DOT__mem_rsp_fifo__DOT__maybe_full)) 
         & (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__mem_arb_io_memRspVecOut_1_valid))) {
        __Vdlyvval__MMUtest__DOT__mmu__DOT__page_cache__DOT__mem_rsp_fifo__DOT__ram_source__v0 
            = (3U & (IData)(vlTOPp->io_out_d_bits_source));
        __Vdlyvset__MMUtest__DOT__mmu__DOT__page_cache__DOT__mem_rsp_fifo__DOT__ram_source__v0 = 1U;
    }
    if (((~ (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ll_page_cache__DOT__mem_req_fifo__DOT__maybe_full)) 
         & (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT__memreq_arb_io_out_valid))) {
        __Vdlyvval__MMUtest__DOT__mmu__DOT__ll_page_cache__DOT__mem_req_fifo__DOT__ram_source__v0 
            = ((3U == (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT__memreq_arb_io_chosen))
                ? (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT__entries_3_source)
                : ((2U == (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT__memreq_arb_io_chosen))
                    ? (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT__entries_2_source)
                    : ((1U == (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT__memreq_arb_io_chosen))
                        ? (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT__entries_1_source)
                        : (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT__entries_0_source))));
        __Vdlyvset__MMUtest__DOT__mmu__DOT__ll_page_cache__DOT__mem_req_fifo__DOT__ram_source__v0 = 1U;
    }
    if (((~ (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ll_page_cache__DOT__mem_req_fifo__DOT__maybe_full)) 
         & (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT__memreq_arb_io_out_valid))) {
        __Vdlyvval__MMUtest__DOT__mmu__DOT__ll_page_cache__DOT__mem_req_fifo__DOT__ram_addr__v0 
            = ((3U == (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT__memreq_arb_io_chosen))
                ? vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT__entries_3_addr
                : ((2U == (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT__memreq_arb_io_chosen))
                    ? vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT__entries_2_addr
                    : ((1U == (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT__memreq_arb_io_chosen))
                        ? vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT__entries_1_addr
                        : vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT__entries_0_addr)));
        __Vdlyvset__MMUtest__DOT__mmu__DOT__ll_page_cache__DOT__mem_req_fifo__DOT__ram_addr__v0 = 1U;
    }
    if (((~ (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__l2tlb__DOT__ptw_req_fifo__DOT__maybe_full)) 
         & (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__tlb__DOT__l2tlb_req_fifo__DOT__maybe_full))) {
        __Vdlyvval__MMUtest__DOT__mmu__DOT__l2tlb__DOT__ptw_req_fifo__DOT__ram_source__v0 
            = vlTOPp->MMUtest__DOT__mmu__DOT__tlb__DOT__l2tlb_req_fifo__DOT__ram_source
            [0U];
        __Vdlyvset__MMUtest__DOT__mmu__DOT__l2tlb__DOT__ptw_req_fifo__DOT__ram_source__v0 = 1U;
    }
    if (((~ (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__l2tlb__DOT__ptw_req_fifo__DOT__maybe_full)) 
         & (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__tlb__DOT__l2tlb_req_fifo__DOT__maybe_full))) {
        __Vdlyvval__MMUtest__DOT__mmu__DOT__l2tlb__DOT__ptw_req_fifo__DOT__ram_addr__v0 
            = vlTOPp->MMUtest__DOT__mmu__DOT__tlb__DOT__l2tlb_req_fifo__DOT__ram_addr
            [0U];
        __Vdlyvset__MMUtest__DOT__mmu__DOT__l2tlb__DOT__ptw_req_fifo__DOT__ram_addr__v0 = 1U;
    }
    if (((~ (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__l2tlb__DOT__ptw_req_fifo__DOT__maybe_full)) 
         & (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__tlb__DOT__l2tlb_req_fifo__DOT__maybe_full))) {
        __Vdlyvval__MMUtest__DOT__mmu__DOT__l2tlb__DOT__ptw_req_fifo__DOT__ram_PTBR__v0 
            = vlTOPp->MMUtest__DOT__mmu__DOT__tlb__DOT__l2tlb_req_fifo__DOT__ram_PTBR
            [0U];
        __Vdlyvset__MMUtest__DOT__mmu__DOT__l2tlb__DOT__ptw_req_fifo__DOT__ram_PTBR__v0 = 1U;
    }
    if (((~ (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ll_page_cache__DOT__mem_req_fifo__DOT__maybe_full)) 
         & (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT__memreq_arb_io_out_valid))) {
        vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT__memreq_arb__DOT__lastGrant 
            = vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT__memreq_arb_io_chosen;
    }
    if (((~ (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__page_cache__DOT__mem_req_fifo__DOT__maybe_full)) 
         & (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__memreq_arb_io_out_valid))) {
        vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__memreq_arb__DOT__lastGrant 
            = vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__memreq_arb_io_chosen;
    }
    if (((~ (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__page_cache__DOT__mem_req_fifo__DOT__maybe_full)) 
         & (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__memreq_arb_io_out_valid))) {
        __Vdlyvval__MMUtest__DOT__mmu__DOT__page_cache__DOT__mem_req_fifo__DOT__ram_source__v0 
            = ((3U == (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__memreq_arb_io_chosen))
                ? (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_3_source)
                : ((2U == (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__memreq_arb_io_chosen))
                    ? (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_2_source)
                    : ((1U == (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__memreq_arb_io_chosen))
                        ? (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_1_source)
                        : (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_0_source))));
        __Vdlyvset__MMUtest__DOT__mmu__DOT__page_cache__DOT__mem_req_fifo__DOT__ram_source__v0 = 1U;
    }
    if (vlTOPp->reset) {
        vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT__state_3 = 0U;
        vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT__state_2 = 0U;
        vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT__state_0 = 0U;
        vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT__state_1 = 0U;
    } else {
        vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT__state_3 
            = ((IData)(vlTOPp->MMUtest__DOT__mmu__DOT__l2tlb__DOT__l2tlb_rsp_fifo__DOT__do_enq)
                ? ((3U == (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT__deq_ptr))
                    ? 0U : (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_46))
                : (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_46));
        vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT__state_2 
            = ((IData)(vlTOPp->MMUtest__DOT__mmu__DOT__l2tlb__DOT__l2tlb_rsp_fifo__DOT__do_enq)
                ? ((2U == (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT__deq_ptr))
                    ? 0U : (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_44))
                : (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_44));
        vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT__state_0 
            = ((IData)(vlTOPp->MMUtest__DOT__mmu__DOT__l2tlb__DOT__l2tlb_rsp_fifo__DOT__do_enq)
                ? ((0U == (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT__deq_ptr))
                    ? 0U : (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_40))
                : (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_40));
        vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT__state_1 
            = ((IData)(vlTOPp->MMUtest__DOT__mmu__DOT__l2tlb__DOT__l2tlb_rsp_fifo__DOT__do_enq)
                ? ((1U == (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT__deq_ptr))
                    ? 0U : (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_42))
                : (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_42));
    }
    if (((IData)(vlTOPp->MMUtest__DOT__mmu__DOT__llptw_io_ll_req_ready) 
         & (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__llreq_arb_io_out_valid))) {
        vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__llreq_arb__DOT__lastGrant 
            = vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__llreq_arb_io_chosen;
    }
    if (((~ (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__page_cache__DOT__mem_req_fifo__DOT__maybe_full)) 
         & (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__memreq_arb_io_out_valid))) {
        __Vdlyvval__MMUtest__DOT__mmu__DOT__page_cache__DOT__mem_req_fifo__DOT__ram_addr__v0 
            = (0xffffffffffffffULL & ((((3U == (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__memreq_arb_io_chosen))
                                         ? vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_3_ppn
                                         : ((2U == (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__memreq_arb_io_chosen))
                                             ? vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_2_ppn
                                             : ((1U 
                                                 == (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__memreq_arb_io_chosen))
                                                 ? vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_1_ppn
                                                 : vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_0_ppn))) 
                                       << 0xcU) + (QData)((IData)(
                                                                  (((0x1aU 
                                                                     >= 
                                                                     (0x3fU 
                                                                      & ((IData)(9U) 
                                                                         * 
                                                                         ((3U 
                                                                           == (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__memreq_arb_io_chosen))
                                                                           ? (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_3_cur_level)
                                                                           : 
                                                                          ((2U 
                                                                            == (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__memreq_arb_io_chosen))
                                                                            ? (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_2_cur_level)
                                                                            : 
                                                                           ((1U 
                                                                             == (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__memreq_arb_io_chosen))
                                                                             ? (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_1_cur_level)
                                                                             : (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_0_cur_level)))))))
                                                                     ? 
                                                                    (0x1ffU 
                                                                     & (((3U 
                                                                          == (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__memreq_arb_io_chosen))
                                                                          ? vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_3_vpn
                                                                          : 
                                                                         ((2U 
                                                                           == (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__memreq_arb_io_chosen))
                                                                           ? vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_2_vpn
                                                                           : 
                                                                          ((1U 
                                                                            == (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__memreq_arb_io_chosen))
                                                                            ? vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_1_vpn
                                                                            : vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_0_vpn))) 
                                                                        >> 
                                                                        (0x3fU 
                                                                         & ((IData)(9U) 
                                                                            * 
                                                                            ((3U 
                                                                              == (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__memreq_arb_io_chosen))
                                                                              ? (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_3_cur_level)
                                                                              : 
                                                                             ((2U 
                                                                               == (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__memreq_arb_io_chosen))
                                                                               ? (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_2_cur_level)
                                                                               : 
                                                                              ((1U 
                                                                                == (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__memreq_arb_io_chosen))
                                                                                ? (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_1_cur_level)
                                                                                : (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_0_cur_level))))))))
                                                                     : 0U) 
                                                                   << 3U)))));
        __Vdlyvset__MMUtest__DOT__mmu__DOT__page_cache__DOT__mem_req_fifo__DOT__ram_addr__v0 = 1U;
    }
    if (vlTOPp->reset) {
        vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__state_3 = 0U;
        vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__state_2 = 0U;
        vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__state_1 = 0U;
        vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__state_0 = 0U;
    } else {
        vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__state_3 
            = ((IData)(vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT___T)
                ? ((3U == (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__deq_ptr))
                    ? 0U : (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_69))
                : (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_69));
        vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__state_2 
            = ((IData)(vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT___T)
                ? ((2U == (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__deq_ptr))
                    ? 0U : (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_66))
                : (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_66));
        vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__state_1 
            = ((IData)(vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT___T)
                ? ((1U == (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__deq_ptr))
                    ? 0U : (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_63))
                : (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_63));
        vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__state_0 
            = ((IData)(vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT___T)
                ? ((0U == (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__deq_ptr))
                    ? 0U : (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_60))
                : (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_60));
    }
    if (__Vdlyvset__MMUtest__DOT__mmu__DOT__tlb__DOT__tlb_rsp_fifo__DOT__ram_addr__v0) {
        vlTOPp->MMUtest__DOT__mmu__DOT__tlb__DOT__tlb_rsp_fifo__DOT__ram_addr[0U] 
            = __Vdlyvval__MMUtest__DOT__mmu__DOT__tlb__DOT__tlb_rsp_fifo__DOT__ram_addr__v0;
    }
    if (__Vdlyvset__MMUtest__DOT__mmu__DOT__tlb__DOT__tlb_rsp_fifo__DOT__ram_source__v0) {
        vlTOPp->MMUtest__DOT__mmu__DOT__tlb__DOT__tlb_rsp_fifo__DOT__ram_source[0U] 
            = __Vdlyvval__MMUtest__DOT__mmu__DOT__tlb__DOT__tlb_rsp_fifo__DOT__ram_source__v0;
    }
    if (__Vdlyvset__MMUtest__DOT__mmu__DOT__ll_page_cache__DOT__mem_rsp_fifo__DOT__ram_addr__v0) {
        vlTOPp->MMUtest__DOT__mmu__DOT__ll_page_cache__DOT__mem_rsp_fifo__DOT__ram_addr[0U] 
            = __Vdlyvval__MMUtest__DOT__mmu__DOT__ll_page_cache__DOT__mem_rsp_fifo__DOT__ram_addr__v0;
    }
    if (__Vdlyvset__MMUtest__DOT__mmu__DOT__l2tlb__DOT__l2tlb_rsp_fifo__DOT__ram_source__v0) {
        vlTOPp->MMUtest__DOT__mmu__DOT__l2tlb__DOT__l2tlb_rsp_fifo__DOT__ram_source[0U] 
            = __Vdlyvval__MMUtest__DOT__mmu__DOT__l2tlb__DOT__l2tlb_rsp_fifo__DOT__ram_source__v0;
    }
    if (__Vdlyvset__MMUtest__DOT__mmu__DOT__l2tlb__DOT__l2tlb_rsp_fifo__DOT__ram_addr__v0) {
        vlTOPp->MMUtest__DOT__mmu__DOT__l2tlb__DOT__l2tlb_rsp_fifo__DOT__ram_addr[0U] 
            = __Vdlyvval__MMUtest__DOT__mmu__DOT__l2tlb__DOT__l2tlb_rsp_fifo__DOT__ram_addr__v0;
    }
    if (__Vdlyvset__MMUtest__DOT__mmu__DOT__ll_page_cache__DOT__mem_rsp_fifo__DOT__ram_source__v0) {
        vlTOPp->MMUtest__DOT__mmu__DOT__ll_page_cache__DOT__mem_rsp_fifo__DOT__ram_source[0U] 
            = __Vdlyvval__MMUtest__DOT__mmu__DOT__ll_page_cache__DOT__mem_rsp_fifo__DOT__ram_source__v0;
    }
    if (__Vdlyvset__MMUtest__DOT__mmu__DOT__page_cache__DOT__mem_rsp_fifo__DOT__ram_addr__v0) {
        vlTOPp->MMUtest__DOT__mmu__DOT__page_cache__DOT__mem_rsp_fifo__DOT__ram_addr[0U] 
            = __Vdlyvval__MMUtest__DOT__mmu__DOT__page_cache__DOT__mem_rsp_fifo__DOT__ram_addr__v0;
    }
    if (__Vdlyvset__MMUtest__DOT__mmu__DOT__page_cache__DOT__mem_rsp_fifo__DOT__ram_source__v0) {
        vlTOPp->MMUtest__DOT__mmu__DOT__page_cache__DOT__mem_rsp_fifo__DOT__ram_source[0U] 
            = __Vdlyvval__MMUtest__DOT__mmu__DOT__page_cache__DOT__mem_rsp_fifo__DOT__ram_source__v0;
    }
    if (__Vdlyvset__MMUtest__DOT__mmu__DOT__ll_page_cache__DOT__mem_req_fifo__DOT__ram_source__v0) {
        vlTOPp->MMUtest__DOT__mmu__DOT__ll_page_cache__DOT__mem_req_fifo__DOT__ram_source[0U] 
            = __Vdlyvval__MMUtest__DOT__mmu__DOT__ll_page_cache__DOT__mem_req_fifo__DOT__ram_source__v0;
    }
    if (__Vdlyvset__MMUtest__DOT__mmu__DOT__ll_page_cache__DOT__mem_req_fifo__DOT__ram_addr__v0) {
        vlTOPp->MMUtest__DOT__mmu__DOT__ll_page_cache__DOT__mem_req_fifo__DOT__ram_addr[0U] 
            = __Vdlyvval__MMUtest__DOT__mmu__DOT__ll_page_cache__DOT__mem_req_fifo__DOT__ram_addr__v0;
    }
    if (__Vdlyvset__MMUtest__DOT__mmu__DOT__tlb__DOT__l2tlb_req_fifo__DOT__ram_source__v0) {
        vlTOPp->MMUtest__DOT__mmu__DOT__tlb__DOT__l2tlb_req_fifo__DOT__ram_source[0U] 
            = __Vdlyvval__MMUtest__DOT__mmu__DOT__tlb__DOT__l2tlb_req_fifo__DOT__ram_source__v0;
    }
    if (__Vdlyvset__MMUtest__DOT__mmu__DOT__l2tlb__DOT__ptw_req_fifo__DOT__ram_source__v0) {
        vlTOPp->MMUtest__DOT__mmu__DOT__l2tlb__DOT__ptw_req_fifo__DOT__ram_source[0U] 
            = __Vdlyvval__MMUtest__DOT__mmu__DOT__l2tlb__DOT__ptw_req_fifo__DOT__ram_source__v0;
    }
    if (__Vdlyvset__MMUtest__DOT__mmu__DOT__tlb__DOT__l2tlb_req_fifo__DOT__ram_addr__v0) {
        vlTOPp->MMUtest__DOT__mmu__DOT__tlb__DOT__l2tlb_req_fifo__DOT__ram_addr[0U] 
            = __Vdlyvval__MMUtest__DOT__mmu__DOT__tlb__DOT__l2tlb_req_fifo__DOT__ram_addr__v0;
    }
    if (__Vdlyvset__MMUtest__DOT__mmu__DOT__l2tlb__DOT__ptw_req_fifo__DOT__ram_addr__v0) {
        vlTOPp->MMUtest__DOT__mmu__DOT__l2tlb__DOT__ptw_req_fifo__DOT__ram_addr[0U] 
            = __Vdlyvval__MMUtest__DOT__mmu__DOT__l2tlb__DOT__ptw_req_fifo__DOT__ram_addr__v0;
    }
    if (__Vdlyvset__MMUtest__DOT__mmu__DOT__tlb__DOT__l2tlb_req_fifo__DOT__ram_PTBR__v0) {
        vlTOPp->MMUtest__DOT__mmu__DOT__tlb__DOT__l2tlb_req_fifo__DOT__ram_PTBR[0U] 
            = __Vdlyvval__MMUtest__DOT__mmu__DOT__tlb__DOT__l2tlb_req_fifo__DOT__ram_PTBR__v0;
    }
    if (__Vdlyvset__MMUtest__DOT__mmu__DOT__l2tlb__DOT__ptw_req_fifo__DOT__ram_PTBR__v0) {
        vlTOPp->MMUtest__DOT__mmu__DOT__l2tlb__DOT__ptw_req_fifo__DOT__ram_PTBR[0U] 
            = __Vdlyvval__MMUtest__DOT__mmu__DOT__l2tlb__DOT__ptw_req_fifo__DOT__ram_PTBR__v0;
    }
    if (__Vdlyvset__MMUtest__DOT__mmu__DOT__page_cache__DOT__mem_req_fifo__DOT__ram_source__v0) {
        vlTOPp->MMUtest__DOT__mmu__DOT__page_cache__DOT__mem_req_fifo__DOT__ram_source[0U] 
            = __Vdlyvval__MMUtest__DOT__mmu__DOT__page_cache__DOT__mem_req_fifo__DOT__ram_source__v0;
    }
    if (__Vdlyvset__MMUtest__DOT__mmu__DOT__page_cache__DOT__mem_req_fifo__DOT__ram_addr__v0) {
        vlTOPp->MMUtest__DOT__mmu__DOT__page_cache__DOT__mem_req_fifo__DOT__ram_addr[0U] 
            = __Vdlyvval__MMUtest__DOT__mmu__DOT__page_cache__DOT__mem_req_fifo__DOT__ram_addr__v0;
    }
    vlTOPp->io_host_rsp_bits_inflight_wg_buffer_host_wf_done_wg_id 
        = vlTOPp->MMUtest__DOT__mmu__DOT__tlb__DOT__tlb_rsp_fifo__DOT__ram_source
        [0U];
    if (vlTOPp->reset) {
        vlTOPp->MMUtest__DOT__mmu__DOT__tlb__DOT__tlb_rsp_fifo__DOT__maybe_full = 0U;
    } else {
        if (((IData)(vlTOPp->MMUtest__DOT__mmu__DOT__tlb__DOT__tlb_rsp_fifo__DOT__do_enq) 
             != (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__tlb__DOT__tlb_rsp_fifo__DOT__do_deq))) {
            vlTOPp->MMUtest__DOT__mmu__DOT__tlb__DOT__tlb_rsp_fifo__DOT__maybe_full 
                = vlTOPp->MMUtest__DOT__mmu__DOT__tlb__DOT__tlb_rsp_fifo__DOT__do_enq;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->MMUtest__DOT__mmu__DOT__l2tlb__DOT__l2tlb_rsp_fifo__DOT__maybe_full = 0U;
    } else {
        if (((IData)(vlTOPp->MMUtest__DOT__mmu__DOT__l2tlb__DOT__l2tlb_rsp_fifo__DOT__do_enq) 
             != (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__tlb__DOT__tlb_rsp_fifo__DOT__do_enq))) {
            vlTOPp->MMUtest__DOT__mmu__DOT__l2tlb__DOT__l2tlb_rsp_fifo__DOT__maybe_full 
                = vlTOPp->MMUtest__DOT__mmu__DOT__l2tlb__DOT__l2tlb_rsp_fifo__DOT__do_enq;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->MMUtest__DOT__mmu__DOT__ll_page_cache__DOT__mem_rsp_fifo__DOT__maybe_full = 0U;
    } else {
        if (((IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ll_page_cache__DOT__mem_rsp_fifo__DOT__do_enq) 
             != (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ll_page_cache__DOT__mem_rsp_fifo__DOT__do_deq))) {
            vlTOPp->MMUtest__DOT__mmu__DOT__ll_page_cache__DOT__mem_rsp_fifo__DOT__maybe_full 
                = vlTOPp->MMUtest__DOT__mmu__DOT__ll_page_cache__DOT__mem_rsp_fifo__DOT__do_enq;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->MMUtest__DOT__mmu__DOT__page_cache__DOT__mem_rsp_fifo__DOT__maybe_full = 0U;
    } else {
        if (((IData)(vlTOPp->MMUtest__DOT__mmu__DOT__page_cache__DOT__mem_rsp_fifo__DOT__do_enq) 
             != (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__page_cache__DOT__mem_rsp_fifo__DOT__do_deq))) {
            vlTOPp->MMUtest__DOT__mmu__DOT__page_cache__DOT__mem_rsp_fifo__DOT__maybe_full 
                = vlTOPp->MMUtest__DOT__mmu__DOT__page_cache__DOT__mem_rsp_fifo__DOT__do_enq;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT__entries_3_source = 0U;
        vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT__entries_2_source = 0U;
        vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT__entries_1_source = 0U;
        vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT__entries_0_source = 0U;
        vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT__entries_3_addr = 0ULL;
        vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT__entries_2_addr = 0ULL;
        vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT__entries_1_addr = 0ULL;
        vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT__entries_0_addr = 0ULL;
    } else {
        vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT__entries_3_source 
            = ((IData)(vlTOPp->MMUtest__DOT__mmu__DOT__l2tlb__DOT__l2tlb_rsp_fifo__DOT__do_enq)
                ? ((3U == (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT__deq_ptr))
                    ? 0U : (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_23))
                : (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_23));
        vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT__entries_2_source 
            = ((IData)(vlTOPp->MMUtest__DOT__mmu__DOT__l2tlb__DOT__l2tlb_rsp_fifo__DOT__do_enq)
                ? ((2U == (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT__deq_ptr))
                    ? 0U : (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_22))
                : (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_22));
        vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT__entries_1_source 
            = ((IData)(vlTOPp->MMUtest__DOT__mmu__DOT__l2tlb__DOT__l2tlb_rsp_fifo__DOT__do_enq)
                ? ((1U == (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT__deq_ptr))
                    ? 0U : (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_21))
                : (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_21));
        vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT__entries_0_source 
            = ((IData)(vlTOPp->MMUtest__DOT__mmu__DOT__l2tlb__DOT__l2tlb_rsp_fifo__DOT__do_enq)
                ? ((0U == (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT__deq_ptr))
                    ? 0U : (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_20))
                : (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_20));
        vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT__entries_3_addr 
            = ((IData)(vlTOPp->MMUtest__DOT__mmu__DOT__l2tlb__DOT__l2tlb_rsp_fifo__DOT__do_enq)
                ? ((3U == (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT__deq_ptr))
                    ? 0ULL : vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_47)
                : vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_47);
        vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT__entries_2_addr 
            = ((IData)(vlTOPp->MMUtest__DOT__mmu__DOT__l2tlb__DOT__l2tlb_rsp_fifo__DOT__do_enq)
                ? ((2U == (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT__deq_ptr))
                    ? 0ULL : vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_45)
                : vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_45);
        vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT__entries_1_addr 
            = ((IData)(vlTOPp->MMUtest__DOT__mmu__DOT__l2tlb__DOT__l2tlb_rsp_fifo__DOT__do_enq)
                ? ((1U == (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT__deq_ptr))
                    ? 0ULL : vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_43)
                : vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_43);
        vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT__entries_0_addr 
            = ((IData)(vlTOPp->MMUtest__DOT__mmu__DOT__l2tlb__DOT__l2tlb_rsp_fifo__DOT__do_enq)
                ? ((0U == (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT__deq_ptr))
                    ? 0ULL : vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_41)
                : vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_41);
    }
    if (vlTOPp->reset) {
        vlTOPp->MMUtest__DOT__mmu__DOT__tlb__DOT__l2tlb_req_fifo__DOT__maybe_full = 0U;
    } else {
        if (((IData)(vlTOPp->MMUtest__DOT__mmu__DOT__tlb__DOT__l2tlb_req_fifo__DOT__do_enq) 
             != (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__l2tlb__DOT__ptw_req_fifo__DOT__do_enq))) {
            vlTOPp->MMUtest__DOT__mmu__DOT__tlb__DOT__l2tlb_req_fifo__DOT__maybe_full 
                = vlTOPp->MMUtest__DOT__mmu__DOT__tlb__DOT__l2tlb_req_fifo__DOT__do_enq;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->MMUtest__DOT__mmu__DOT__l2tlb__DOT__ptw_req_fifo__DOT__maybe_full = 0U;
    } else {
        if (((IData)(vlTOPp->MMUtest__DOT__mmu__DOT__l2tlb__DOT__ptw_req_fifo__DOT__do_enq) 
             != (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT___T))) {
            vlTOPp->MMUtest__DOT__mmu__DOT__l2tlb__DOT__ptw_req_fifo__DOT__maybe_full 
                = vlTOPp->MMUtest__DOT__mmu__DOT__l2tlb__DOT__ptw_req_fifo__DOT__do_enq;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->MMUtest__DOT__mmu__DOT__ll_page_cache__DOT__mem_req_fifo__DOT__maybe_full = 0U;
    } else {
        if (((IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ll_page_cache__DOT__mem_req_fifo__DOT__do_enq) 
             != (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ll_page_cache__DOT__mem_req_fifo__DOT__do_deq))) {
            vlTOPp->MMUtest__DOT__mmu__DOT__ll_page_cache__DOT__mem_req_fifo__DOT__maybe_full 
                = vlTOPp->MMUtest__DOT__mmu__DOT__ll_page_cache__DOT__mem_req_fifo__DOT__do_enq;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_3_source = 0U;
        vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_2_source = 0U;
        vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_1_source = 0U;
        vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_0_source = 0U;
    } else {
        vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_3_source 
            = ((IData)(vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT___T)
                ? ((3U == (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__deq_ptr))
                    ? 0U : (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_39))
                : (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_39));
        vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_2_source 
            = ((IData)(vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT___T)
                ? ((2U == (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__deq_ptr))
                    ? 0U : (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_38))
                : (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_38));
        vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_1_source 
            = ((IData)(vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT___T)
                ? ((1U == (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__deq_ptr))
                    ? 0U : (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_37))
                : (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_37));
        vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_0_source 
            = ((IData)(vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT___T)
                ? ((0U == (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__deq_ptr))
                    ? 0U : (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_36))
                : (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_36));
    }
    vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT__ptwrsp_arb_io_chosen 
        = (((3U == (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT__state_1)) 
            & (1U > (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT__ptwrsp_arb__DOT__lastGrant)))
            ? 1U : (((3U == (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT__state_2)) 
                     & (2U > (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT__ptwrsp_arb__DOT__lastGrant)))
                     ? 2U : (((3U == (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT__state_3)) 
                              & (3U > (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT__ptwrsp_arb__DOT__lastGrant)))
                              ? 3U : ((3U == (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT__state_0))
                                       ? 0U : ((3U 
                                                == (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT__state_1))
                                                ? 1U
                                                : (
                                                   (3U 
                                                    == (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT__state_2))
                                                    ? 2U
                                                    : 3U))))));
    vlTOPp->MMUtest__DOT__mmu__DOT__llptw_io_mem_rsp_ready 
        = ((((2U == (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT__state_0)) 
             | (2U == (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT__state_1))) 
            | (2U == (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT__state_2))) 
           | (2U == (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT__state_3)));
    vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT__enq_ptr 
        = ((0U == (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT__state_0))
            ? 0U : ((0U == (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT__state_1))
                     ? 1U : ((0U == (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT__state_2))
                              ? 2U : 3U)));
    vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT__memreq_arb_io_chosen 
        = (((1U == (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT__state_1)) 
            & (1U > (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT__memreq_arb__DOT__lastGrant)))
            ? 1U : (((1U == (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT__state_2)) 
                     & (2U > (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT__memreq_arb__DOT__lastGrant)))
                     ? 2U : (((1U == (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT__state_3)) 
                              & (3U > (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT__memreq_arb__DOT__lastGrant)))
                              ? 3U : ((1U == (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT__state_0))
                                       ? 0U : ((1U 
                                                == (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT__state_1))
                                                ? 1U
                                                : (
                                                   (1U 
                                                    == (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT__state_2))
                                                    ? 2U
                                                    : 3U))))));
    vlTOPp->MMUtest__DOT__mmu__DOT__llptw_io_ll_req_ready 
        = ((((0U == (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT__state_0)) 
             | (0U == (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT__state_1))) 
            | (0U == (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT__state_2))) 
           | (0U == (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT__state_3)));
    if (vlTOPp->reset) {
        vlTOPp->MMUtest__DOT__mmu__DOT__page_cache__DOT__mem_req_fifo__DOT__maybe_full = 0U;
    } else {
        if (((IData)(vlTOPp->MMUtest__DOT__mmu__DOT__page_cache__DOT__mem_req_fifo__DOT__do_enq) 
             != (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__page_cache__DOT__mem_req_fifo__DOT__do_deq))) {
            vlTOPp->MMUtest__DOT__mmu__DOT__page_cache__DOT__mem_req_fifo__DOT__maybe_full 
                = vlTOPp->MMUtest__DOT__mmu__DOT__page_cache__DOT__mem_req_fifo__DOT__do_enq;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_3_vpn = 0U;
        vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_2_vpn = 0U;
        vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_1_vpn = 0U;
        vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_0_vpn = 0U;
        vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_3_ppn = 0ULL;
        vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_2_ppn = 0ULL;
        vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_1_ppn = 0ULL;
        vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_0_ppn = 0ULL;
        vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_3_cur_level = 0U;
        vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_2_cur_level = 0U;
        vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_1_cur_level = 0U;
        vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_0_cur_level = 0U;
    } else {
        vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_3_vpn 
            = ((IData)(vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT___T)
                ? ((3U == (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__deq_ptr))
                    ? 0U : vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_31)
                : vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_31);
        vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_2_vpn 
            = ((IData)(vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT___T)
                ? ((2U == (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__deq_ptr))
                    ? 0U : vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_30)
                : vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_30);
        vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_1_vpn 
            = ((IData)(vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT___T)
                ? ((1U == (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__deq_ptr))
                    ? 0U : vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_29)
                : vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_29);
        vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_0_vpn 
            = ((IData)(vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT___T)
                ? ((0U == (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__deq_ptr))
                    ? 0U : vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_28)
                : vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_28);
        vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_3_ppn 
            = ((IData)(vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT___T)
                ? ((3U == (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__deq_ptr))
                    ? 0ULL : vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_71)
                : vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_71);
        vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_2_ppn 
            = ((IData)(vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT___T)
                ? ((2U == (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__deq_ptr))
                    ? 0ULL : vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_68)
                : vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_68);
        vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_1_ppn 
            = ((IData)(vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT___T)
                ? ((1U == (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__deq_ptr))
                    ? 0ULL : vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_65)
                : vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_65);
        vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_0_ppn 
            = ((IData)(vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT___T)
                ? ((0U == (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__deq_ptr))
                    ? 0ULL : vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_62)
                : vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_62);
        vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_3_cur_level 
            = ((IData)(vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT___T)
                ? ((3U == (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__deq_ptr))
                    ? 0U : (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_70))
                : (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_70));
        vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_2_cur_level 
            = ((IData)(vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT___T)
                ? ((2U == (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__deq_ptr))
                    ? 0U : (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_67))
                : (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_67));
        vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_1_cur_level 
            = ((IData)(vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT___T)
                ? ((1U == (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__deq_ptr))
                    ? 0U : (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_64))
                : (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_64));
        vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_0_cur_level 
            = ((IData)(vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT___T)
                ? ((0U == (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__deq_ptr))
                    ? 0U : (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_61))
                : (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_61));
    }
    vlTOPp->MMUtest__DOT__mmu__DOT__ptw_io_mem_rsp_ready 
        = ((((2U == (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__state_0)) 
             | (2U == (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__state_1))) 
            | (2U == (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__state_2))) 
           | (2U == (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__state_3)));
    vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__enq_ptr 
        = ((0U == (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__state_0))
            ? 0U : ((0U == (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__state_1))
                     ? 1U : ((0U == (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__state_2))
                              ? 2U : 3U)));
    vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__memreq_arb_io_chosen 
        = (((1U == (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__state_1)) 
            & (1U > (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__memreq_arb__DOT__lastGrant)))
            ? 1U : (((1U == (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__state_2)) 
                     & (2U > (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__memreq_arb__DOT__lastGrant)))
                     ? 2U : (((1U == (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__state_3)) 
                              & (3U > (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__memreq_arb__DOT__lastGrant)))
                              ? 3U : ((1U == (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__state_0))
                                       ? 0U : ((1U 
                                                == (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__state_1))
                                                ? 1U
                                                : (
                                                   (1U 
                                                    == (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__state_2))
                                                    ? 2U
                                                    : 3U))))));
    vlTOPp->MMUtest__DOT__mmu__DOT__ptw_io_ptw_req_ready 
        = ((((0U == (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__state_0)) 
             | (0U == (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__state_1))) 
            | (0U == (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__state_2))) 
           | (0U == (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__state_3)));
    vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__llreq_arb_io_chosen 
        = (((3U == (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__state_1)) 
            & (1U > (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__llreq_arb__DOT__lastGrant)))
            ? 1U : (((3U == (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__state_2)) 
                     & (2U > (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__llreq_arb__DOT__lastGrant)))
                     ? 2U : (((3U == (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__state_3)) 
                              & (3U > (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__llreq_arb__DOT__lastGrant)))
                              ? 3U : ((3U == (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__state_0))
                                       ? 0U : ((3U 
                                                == (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__state_1))
                                                ? 1U
                                                : (
                                                   (3U 
                                                    == (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__state_2))
                                                    ? 2U
                                                    : 3U))))));
    vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT__deq_ptr 
        = ((3U == (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT__state_0))
            ? 0U : ((3U == (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT__state_1))
                     ? 1U : ((3U == (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT__state_2))
                              ? 2U : 3U)));
    vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT__ptwrsp_arb_io_out_valid 
        = ((3U == (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT__ptwrsp_arb_io_chosen))
            ? (3U == (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT__state_3))
            : ((2U == (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT__ptwrsp_arb_io_chosen))
                ? (3U == (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT__state_2))
                : ((1U == (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT__ptwrsp_arb_io_chosen))
                    ? (3U == (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT__state_1))
                    : (3U == (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT__state_0)))));
    vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT__memreq_arb_io_out_valid 
        = ((3U == (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT__memreq_arb_io_chosen))
            ? (1U == (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT__state_3))
            : ((2U == (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT__memreq_arb_io_chosen))
                ? (1U == (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT__state_2))
                : ((1U == (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT__memreq_arb_io_chosen))
                    ? (1U == (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT__state_1))
                    : (1U == (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT__state_0)))));
    vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__deq_ptr 
        = ((3U == (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__state_0))
            ? 0U : ((3U == (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__state_1))
                     ? 1U : ((3U == (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__state_2))
                              ? 2U : 3U)));
    vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__memreq_arb_io_out_valid 
        = ((3U == (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__memreq_arb_io_chosen))
            ? (1U == (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__state_3))
            : ((2U == (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__memreq_arb_io_chosen))
                ? (1U == (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__state_2))
                : ((1U == (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__memreq_arb_io_chosen))
                    ? (1U == (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__state_1))
                    : (1U == (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__state_0)))));
    vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__llreq_arb_io_out_valid 
        = ((3U == (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__llreq_arb_io_chosen))
            ? (3U == (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__state_3))
            : ((2U == (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__llreq_arb_io_chosen))
                ? (3U == (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__state_2))
                : ((1U == (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__llreq_arb_io_chosen))
                    ? (3U == (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__state_1))
                    : (3U == (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__state_0)))));
    vlTOPp->io_host_rsp_valid = vlTOPp->MMUtest__DOT__mmu__DOT__tlb__DOT__tlb_rsp_fifo__DOT__maybe_full;
    vlTOPp->MMUtest__DOT__mmu__DOT__tlb__DOT__tlb_rsp_fifo__DOT__do_enq 
        = ((~ (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__tlb__DOT__tlb_rsp_fifo__DOT__maybe_full)) 
           & (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__l2tlb__DOT__l2tlb_rsp_fifo__DOT__maybe_full));
    vlTOPp->MMUtest__DOT__mmu__DOT__ll_page_cache__DOT__mem_rsp_fifo__DOT__do_deq 
        = ((IData)(vlTOPp->MMUtest__DOT__mmu__DOT__llptw_io_mem_rsp_ready) 
           & (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ll_page_cache__DOT__mem_rsp_fifo__DOT__maybe_full));
    vlTOPp->MMUtest__DOT__mmu__DOT__mem_arb__DOT___io_memRspIn_ready_T_2 
        = ((2U & ((~ (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ll_page_cache__DOT__mem_rsp_fifo__DOT__maybe_full)) 
                  << 1U)) | (1U & (~ (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__page_cache__DOT__mem_rsp_fifo__DOT__maybe_full))));
    vlTOPp->MMUtest__DOT__mmu__DOT__page_cache__DOT__mem_rsp_fifo__DOT__do_deq 
        = ((IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw_io_mem_rsp_ready) 
           & (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__page_cache__DOT__mem_rsp_fifo__DOT__maybe_full));
    vlTOPp->io_host_req_ready = (1U & (~ (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__tlb__DOT__l2tlb_req_fifo__DOT__maybe_full)));
    vlTOPp->MMUtest__DOT__mmu__DOT__l2tlb__DOT__ptw_req_fifo__DOT__do_enq 
        = ((~ (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__l2tlb__DOT__ptw_req_fifo__DOT__maybe_full)) 
           & (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__tlb__DOT__l2tlb_req_fifo__DOT__maybe_full));
    vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT___T = 
        ((IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw_io_ptw_req_ready) 
         & (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__l2tlb__DOT__ptw_req_fifo__DOT__maybe_full));
    vlTOPp->io_out_a_bits_source = ((IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ll_page_cache__DOT__mem_req_fifo__DOT__maybe_full)
                                     ? vlTOPp->MMUtest__DOT__mmu__DOT__ll_page_cache__DOT__mem_req_fifo__DOT__ram_source
                                    [0U] : (4U | vlTOPp->MMUtest__DOT__mmu__DOT__page_cache__DOT__mem_req_fifo__DOT__ram_source
                                            [0U]));
    vlTOPp->io_out_a_bits_address = (IData)(((IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ll_page_cache__DOT__mem_req_fifo__DOT__maybe_full)
                                              ? vlTOPp->MMUtest__DOT__mmu__DOT__ll_page_cache__DOT__mem_req_fifo__DOT__ram_addr
                                             [0U] : 
                                             vlTOPp->MMUtest__DOT__mmu__DOT__page_cache__DOT__mem_req_fifo__DOT__ram_addr
                                             [0U]));
    vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__llreq_arb_io_out_bits_source 
        = ((3U == (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__llreq_arb_io_chosen))
            ? (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_3_source)
            : ((2U == (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__llreq_arb_io_chosen))
                ? (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_2_source)
                : ((1U == (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__llreq_arb_io_chosen))
                    ? (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_1_source)
                    : (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_0_source))));
    vlTOPp->MMUtest__DOT__mmu__DOT__l2tlb__DOT__l2tlb_rsp_fifo__DOT__do_enq 
        = ((~ (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__l2tlb__DOT__l2tlb_rsp_fifo__DOT__maybe_full)) 
           & (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT__ptwrsp_arb_io_out_valid));
    vlTOPp->MMUtest__DOT__mmu__DOT__ll_page_cache__DOT__mem_req_fifo__DOT__do_enq 
        = ((~ (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ll_page_cache__DOT__mem_req_fifo__DOT__maybe_full)) 
           & (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT__memreq_arb_io_out_valid));
    vlTOPp->io_out_a_valid = ((IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ll_page_cache__DOT__mem_req_fifo__DOT__maybe_full) 
                              | (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__page_cache__DOT__mem_req_fifo__DOT__maybe_full));
    vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT___io_ll_req_bits_addr_T_3 
        = (0x7ffffffffffffffULL & ((((3U == (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__llreq_arb_io_chosen))
                                      ? vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_3_ppn
                                      : ((2U == (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__llreq_arb_io_chosen))
                                          ? vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_2_ppn
                                          : ((1U == (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__llreq_arb_io_chosen))
                                              ? vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_1_ppn
                                              : vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_0_ppn))) 
                                    << 0xcU) + (QData)((IData)(
                                                               (((0x1aU 
                                                                  >= 
                                                                  (0x3fU 
                                                                   & ((IData)(9U) 
                                                                      * 
                                                                      ((3U 
                                                                        == (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__llreq_arb_io_chosen))
                                                                        ? (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_3_cur_level)
                                                                        : 
                                                                       ((2U 
                                                                         == (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__llreq_arb_io_chosen))
                                                                         ? (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_2_cur_level)
                                                                         : 
                                                                        ((1U 
                                                                          == (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__llreq_arb_io_chosen))
                                                                          ? (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_1_cur_level)
                                                                          : (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_0_cur_level)))))))
                                                                  ? 
                                                                 (0x1ffU 
                                                                  & (((3U 
                                                                       == (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__llreq_arb_io_chosen))
                                                                       ? vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_3_vpn
                                                                       : 
                                                                      ((2U 
                                                                        == (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__llreq_arb_io_chosen))
                                                                        ? vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_2_vpn
                                                                        : 
                                                                       ((1U 
                                                                         == (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__llreq_arb_io_chosen))
                                                                         ? vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_1_vpn
                                                                         : vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_0_vpn))) 
                                                                     >> 
                                                                     (0x3fU 
                                                                      & ((IData)(9U) 
                                                                         * 
                                                                         ((3U 
                                                                           == (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__llreq_arb_io_chosen))
                                                                           ? (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_3_cur_level)
                                                                           : 
                                                                          ((2U 
                                                                            == (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__llreq_arb_io_chosen))
                                                                            ? (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_2_cur_level)
                                                                            : 
                                                                           ((1U 
                                                                             == (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__llreq_arb_io_chosen))
                                                                             ? (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_1_cur_level)
                                                                             : (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_0_cur_level))))))))
                                                                  : 0U) 
                                                                << 3U)))));
    vlTOPp->MMUtest__DOT__mmu__DOT__page_cache__DOT__mem_req_fifo__DOT__do_enq 
        = ((~ (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__page_cache__DOT__mem_req_fifo__DOT__maybe_full)) 
           & (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__memreq_arb_io_out_valid));
    vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT___T 
        = ((IData)(vlTOPp->MMUtest__DOT__mmu__DOT__llptw_io_ll_req_ready) 
           & (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__llreq_arb_io_out_valid));
    if (vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT___T) {
        vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_28 
            = (0x7ffffffU & ((0U == (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__enq_ptr))
                              ? (IData)((vlTOPp->MMUtest__DOT__mmu__DOT__l2tlb__DOT__ptw_req_fifo__DOT__ram_addr
                                         [0U] >> 0xcU))
                              : vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_0_vpn));
        vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_29 
            = (0x7ffffffU & ((1U == (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__enq_ptr))
                              ? (IData)((vlTOPp->MMUtest__DOT__mmu__DOT__l2tlb__DOT__ptw_req_fifo__DOT__ram_addr
                                         [0U] >> 0xcU))
                              : vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_1_vpn));
        vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_30 
            = (0x7ffffffU & ((2U == (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__enq_ptr))
                              ? (IData)((vlTOPp->MMUtest__DOT__mmu__DOT__l2tlb__DOT__ptw_req_fifo__DOT__ram_addr
                                         [0U] >> 0xcU))
                              : vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_2_vpn));
        vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_31 
            = (0x7ffffffU & ((3U == (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__enq_ptr))
                              ? (IData)((vlTOPp->MMUtest__DOT__mmu__DOT__l2tlb__DOT__ptw_req_fifo__DOT__ram_addr
                                         [0U] >> 0xcU))
                              : vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_3_vpn));
        vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_36 
            = ((0U == (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__enq_ptr))
                ? vlTOPp->MMUtest__DOT__mmu__DOT__l2tlb__DOT__ptw_req_fifo__DOT__ram_source
               [0U] : (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_0_source));
        vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_37 
            = ((1U == (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__enq_ptr))
                ? vlTOPp->MMUtest__DOT__mmu__DOT__l2tlb__DOT__ptw_req_fifo__DOT__ram_source
               [0U] : (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_1_source));
        vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_38 
            = ((2U == (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__enq_ptr))
                ? vlTOPp->MMUtest__DOT__mmu__DOT__l2tlb__DOT__ptw_req_fifo__DOT__ram_source
               [0U] : (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_2_source));
        vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_39 
            = ((3U == (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__enq_ptr))
                ? vlTOPp->MMUtest__DOT__mmu__DOT__l2tlb__DOT__ptw_req_fifo__DOT__ram_source
               [0U] : (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_3_source));
        vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_24 
            = ((0U == (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__enq_ptr))
                ? 2U : (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_0_cur_level));
        vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_25 
            = ((1U == (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__enq_ptr))
                ? 2U : (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_1_cur_level));
        vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_26 
            = ((2U == (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__enq_ptr))
                ? 2U : (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_2_cur_level));
        vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_27 
            = ((3U == (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__enq_ptr))
                ? 2U : (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_3_cur_level));
        vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_32 
            = (0xfffffffffffULL & ((0U == (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__enq_ptr))
                                    ? vlTOPp->MMUtest__DOT__mmu__DOT__l2tlb__DOT__ptw_req_fifo__DOT__ram_PTBR
                                   [0U] : vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_0_ppn));
        vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_33 
            = (0xfffffffffffULL & ((1U == (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__enq_ptr))
                                    ? vlTOPp->MMUtest__DOT__mmu__DOT__l2tlb__DOT__ptw_req_fifo__DOT__ram_PTBR
                                   [0U] : vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_1_ppn));
        vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_34 
            = (0xfffffffffffULL & ((2U == (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__enq_ptr))
                                    ? vlTOPp->MMUtest__DOT__mmu__DOT__l2tlb__DOT__ptw_req_fifo__DOT__ram_PTBR
                                   [0U] : vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_2_ppn));
        vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_35 
            = (0xfffffffffffULL & ((3U == (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__enq_ptr))
                                    ? vlTOPp->MMUtest__DOT__mmu__DOT__l2tlb__DOT__ptw_req_fifo__DOT__ram_PTBR
                                   [0U] : vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_3_ppn));
        vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_20 
            = ((0U == (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__enq_ptr))
                ? 1U : (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__state_0));
        vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_21 
            = ((1U == (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__enq_ptr))
                ? 1U : (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__state_1));
        vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_22 
            = ((2U == (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__enq_ptr))
                ? 1U : (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__state_2));
        vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_23 
            = ((3U == (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__enq_ptr))
                ? 1U : (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__state_3));
    } else {
        vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_28 
            = (0x7ffffffU & vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_0_vpn);
        vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_29 
            = (0x7ffffffU & vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_1_vpn);
        vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_30 
            = (0x7ffffffU & vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_2_vpn);
        vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_31 
            = (0x7ffffffU & vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_3_vpn);
        vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_36 
            = vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_0_source;
        vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_37 
            = vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_1_source;
        vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_38 
            = vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_2_source;
        vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_39 
            = vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_3_source;
        vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_24 
            = vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_0_cur_level;
        vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_25 
            = vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_1_cur_level;
        vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_26 
            = vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_2_cur_level;
        vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_27 
            = vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_3_cur_level;
        vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_32 
            = (0xfffffffffffULL & vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_0_ppn);
        vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_33 
            = (0xfffffffffffULL & vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_1_ppn);
        vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_34 
            = (0xfffffffffffULL & vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_2_ppn);
        vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_35 
            = (0xfffffffffffULL & vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_3_ppn);
        vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_20 
            = vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__state_0;
        vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_21 
            = vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__state_1;
        vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_22 
            = vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__state_2;
        vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_23 
            = vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__state_3;
    }
    if (vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT___T) {
        vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_20 
            = ((0U == (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT__enq_ptr))
                ? (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__llreq_arb_io_out_bits_source)
                : (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT__entries_0_source));
        vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_21 
            = ((1U == (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT__enq_ptr))
                ? (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__llreq_arb_io_out_bits_source)
                : (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT__entries_1_source));
        vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_22 
            = ((2U == (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT__enq_ptr))
                ? (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__llreq_arb_io_out_bits_source)
                : (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT__entries_2_source));
        vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_23 
            = ((3U == (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT__enq_ptr))
                ? (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__llreq_arb_io_out_bits_source)
                : (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT__entries_3_source));
        vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_16 
            = ((0U == (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT__enq_ptr))
                ? (0xffffffffffffffULL & vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT___io_ll_req_bits_addr_T_3)
                : vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT__entries_0_addr);
        vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_17 
            = ((1U == (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT__enq_ptr))
                ? (0xffffffffffffffULL & vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT___io_ll_req_bits_addr_T_3)
                : vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT__entries_1_addr);
        vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_18 
            = ((2U == (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT__enq_ptr))
                ? (0xffffffffffffffULL & vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT___io_ll_req_bits_addr_T_3)
                : vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT__entries_2_addr);
        vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_19 
            = ((3U == (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT__enq_ptr))
                ? (0xffffffffffffffULL & vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT___io_ll_req_bits_addr_T_3)
                : vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT__entries_3_addr);
        vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_12 
            = ((0U == (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT__enq_ptr))
                ? 1U : (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT__state_0));
        vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_13 
            = ((1U == (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT__enq_ptr))
                ? 1U : (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT__state_1));
        vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_14 
            = ((2U == (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT__enq_ptr))
                ? 1U : (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT__state_2));
        vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_15 
            = ((3U == (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT__enq_ptr))
                ? 1U : (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT__state_3));
    } else {
        vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_20 
            = vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT__entries_0_source;
        vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_21 
            = vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT__entries_1_source;
        vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_22 
            = vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT__entries_2_source;
        vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_23 
            = vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT__entries_3_source;
        vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_16 
            = vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT__entries_0_addr;
        vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_17 
            = vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT__entries_1_addr;
        vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_18 
            = vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT__entries_2_addr;
        vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_19 
            = vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT__entries_3_addr;
        vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_12 
            = vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT__state_0;
        vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_13 
            = vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT__state_1;
        vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_14 
            = vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT__state_2;
        vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_15 
            = vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT__state_3;
    }
    if (vlTOPp->MMUtest__DOT__mmu__DOT__page_cache__DOT__mem_rsp_fifo__DOT__do_deq) {
        vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_61 
            = (3U & (((2U == (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__state_0)) 
                      & ((IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_0_source) 
                         == vlTOPp->MMUtest__DOT__mmu__DOT__page_cache__DOT__mem_rsp_fifo__DOT__ram_source
                         [0U])) ? ((IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_0_cur_level) 
                                   - (IData)(1U)) : (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_24)));
        vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_64 
            = (3U & (((2U == (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__state_1)) 
                      & ((IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_1_source) 
                         == vlTOPp->MMUtest__DOT__mmu__DOT__page_cache__DOT__mem_rsp_fifo__DOT__ram_source
                         [0U])) ? ((IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_1_cur_level) 
                                   - (IData)(1U)) : (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_25)));
        vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_67 
            = (3U & (((2U == (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__state_2)) 
                      & ((IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_2_source) 
                         == vlTOPp->MMUtest__DOT__mmu__DOT__page_cache__DOT__mem_rsp_fifo__DOT__ram_source
                         [0U])) ? ((IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_2_cur_level) 
                                   - (IData)(1U)) : (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_26)));
        vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_70 
            = (3U & (((2U == (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__state_3)) 
                      & ((IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_3_source) 
                         == vlTOPp->MMUtest__DOT__mmu__DOT__page_cache__DOT__mem_rsp_fifo__DOT__ram_source
                         [0U])) ? ((IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_3_cur_level) 
                                   - (IData)(1U)) : (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_27)));
        vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_62 
            = (0xfffffffffffULL & (((2U == (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__state_0)) 
                                    & ((IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_0_source) 
                                       == vlTOPp->MMUtest__DOT__mmu__DOT__page_cache__DOT__mem_rsp_fifo__DOT__ram_source
                                       [0U])) ? (vlTOPp->MMUtest__DOT__mmu__DOT__page_cache__DOT__mem_rsp_fifo__DOT__ram_addr
                                                 [0U] 
                                                 >> 0xaU)
                                    : vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_32));
        vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_65 
            = (0xfffffffffffULL & (((2U == (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__state_1)) 
                                    & ((IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_1_source) 
                                       == vlTOPp->MMUtest__DOT__mmu__DOT__page_cache__DOT__mem_rsp_fifo__DOT__ram_source
                                       [0U])) ? (vlTOPp->MMUtest__DOT__mmu__DOT__page_cache__DOT__mem_rsp_fifo__DOT__ram_addr
                                                 [0U] 
                                                 >> 0xaU)
                                    : vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_33));
        vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_68 
            = (0xfffffffffffULL & (((2U == (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__state_2)) 
                                    & ((IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_2_source) 
                                       == vlTOPp->MMUtest__DOT__mmu__DOT__page_cache__DOT__mem_rsp_fifo__DOT__ram_source
                                       [0U])) ? (vlTOPp->MMUtest__DOT__mmu__DOT__page_cache__DOT__mem_rsp_fifo__DOT__ram_addr
                                                 [0U] 
                                                 >> 0xaU)
                                    : vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_34));
        vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_71 
            = (0xfffffffffffULL & (((2U == (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__state_3)) 
                                    & ((IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_3_source) 
                                       == vlTOPp->MMUtest__DOT__mmu__DOT__page_cache__DOT__mem_rsp_fifo__DOT__ram_source
                                       [0U])) ? (vlTOPp->MMUtest__DOT__mmu__DOT__page_cache__DOT__mem_rsp_fifo__DOT__ram_addr
                                                 [0U] 
                                                 >> 0xaU)
                                    : vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_35));
    } else {
        vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_61 
            = (3U & (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_24));
        vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_64 
            = (3U & (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_25));
        vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_67 
            = (3U & (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_26));
        vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_70 
            = (3U & (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_27));
        vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_62 
            = (0xfffffffffffULL & vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_32);
        vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_65 
            = (0xfffffffffffULL & vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_33);
        vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_68 
            = (0xfffffffffffULL & vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_34);
        vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_71 
            = (0xfffffffffffULL & vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_35);
    }
    if (vlTOPp->MMUtest__DOT__mmu__DOT__page_cache__DOT__mem_req_fifo__DOT__do_enq) {
        vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_44 
            = ((0U == (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__memreq_arb_io_chosen))
                ? 2U : (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_20));
        vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_45 
            = ((1U == (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__memreq_arb_io_chosen))
                ? 2U : (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_21));
        vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_46 
            = ((2U == (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__memreq_arb_io_chosen))
                ? 2U : (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_22));
        vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_47 
            = ((3U == (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__memreq_arb_io_chosen))
                ? 2U : (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_23));
    } else {
        vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_44 
            = vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_20;
        vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_45 
            = vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_21;
        vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_46 
            = vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_22;
        vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_47 
            = vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_23;
    }
    if (vlTOPp->MMUtest__DOT__mmu__DOT__ll_page_cache__DOT__mem_rsp_fifo__DOT__do_deq) {
        vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_41 
            = (((2U == (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT__state_0)) 
                & ((IData)(vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT__entries_0_source) 
                   == vlTOPp->MMUtest__DOT__mmu__DOT__ll_page_cache__DOT__mem_rsp_fifo__DOT__ram_source
                   [0U])) ? vlTOPp->MMUtest__DOT__mmu__DOT__ll_page_cache__DOT__mem_rsp_fifo__DOT__ram_addr
               [0U] : vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_16);
        vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_43 
            = (((2U == (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT__state_1)) 
                & ((IData)(vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT__entries_1_source) 
                   == vlTOPp->MMUtest__DOT__mmu__DOT__ll_page_cache__DOT__mem_rsp_fifo__DOT__ram_source
                   [0U])) ? vlTOPp->MMUtest__DOT__mmu__DOT__ll_page_cache__DOT__mem_rsp_fifo__DOT__ram_addr
               [0U] : vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_17);
        vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_45 
            = (((2U == (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT__state_2)) 
                & ((IData)(vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT__entries_2_source) 
                   == vlTOPp->MMUtest__DOT__mmu__DOT__ll_page_cache__DOT__mem_rsp_fifo__DOT__ram_source
                   [0U])) ? vlTOPp->MMUtest__DOT__mmu__DOT__ll_page_cache__DOT__mem_rsp_fifo__DOT__ram_addr
               [0U] : vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_18);
        vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_47 
            = (((2U == (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT__state_3)) 
                & ((IData)(vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT__entries_3_source) 
                   == vlTOPp->MMUtest__DOT__mmu__DOT__ll_page_cache__DOT__mem_rsp_fifo__DOT__ram_source
                   [0U])) ? vlTOPp->MMUtest__DOT__mmu__DOT__ll_page_cache__DOT__mem_rsp_fifo__DOT__ram_addr
               [0U] : vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_19);
    } else {
        vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_41 
            = vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_16;
        vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_43 
            = vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_17;
        vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_45 
            = vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_18;
        vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_47 
            = vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_19;
    }
    if (vlTOPp->MMUtest__DOT__mmu__DOT__ll_page_cache__DOT__mem_req_fifo__DOT__do_enq) {
        vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_28 
            = ((0U == (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT__memreq_arb_io_chosen))
                ? 2U : (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_12));
        vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_29 
            = ((1U == (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT__memreq_arb_io_chosen))
                ? 2U : (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_13));
        vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_30 
            = ((2U == (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT__memreq_arb_io_chosen))
                ? 2U : (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_14));
        vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_31 
            = ((3U == (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT__memreq_arb_io_chosen))
                ? 2U : (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_15));
    } else {
        vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_28 
            = vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_12;
        vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_29 
            = vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_13;
        vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_30 
            = vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_14;
        vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_31 
            = vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_15;
    }
    if (vlTOPp->MMUtest__DOT__mmu__DOT__page_cache__DOT__mem_rsp_fifo__DOT__do_deq) {
        vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_60 
            = (((2U == (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__state_0)) 
                & ((IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_0_source) 
                   == vlTOPp->MMUtest__DOT__mmu__DOT__page_cache__DOT__mem_rsp_fifo__DOT__ram_source
                   [0U])) ? ((1U < (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_0_cur_level))
                              ? 1U : 3U) : (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_44));
        vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_63 
            = (((2U == (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__state_1)) 
                & ((IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_1_source) 
                   == vlTOPp->MMUtest__DOT__mmu__DOT__page_cache__DOT__mem_rsp_fifo__DOT__ram_source
                   [0U])) ? ((1U < (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_1_cur_level))
                              ? 1U : 3U) : (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_45));
        vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_66 
            = (((2U == (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__state_2)) 
                & ((IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_2_source) 
                   == vlTOPp->MMUtest__DOT__mmu__DOT__page_cache__DOT__mem_rsp_fifo__DOT__ram_source
                   [0U])) ? ((1U < (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_2_cur_level))
                              ? 1U : 3U) : (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_46));
        vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_69 
            = (((2U == (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__state_3)) 
                & ((IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_3_source) 
                   == vlTOPp->MMUtest__DOT__mmu__DOT__page_cache__DOT__mem_rsp_fifo__DOT__ram_source
                   [0U])) ? ((1U < (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_3_cur_level))
                              ? 1U : 3U) : (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_47));
    } else {
        vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_60 
            = vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_44;
        vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_63 
            = vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_45;
        vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_66 
            = vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_46;
        vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_69 
            = vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_47;
    }
    if (vlTOPp->MMUtest__DOT__mmu__DOT__ll_page_cache__DOT__mem_rsp_fifo__DOT__do_deq) {
        vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_40 
            = (((2U == (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT__state_0)) 
                & ((IData)(vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT__entries_0_source) 
                   == vlTOPp->MMUtest__DOT__mmu__DOT__ll_page_cache__DOT__mem_rsp_fifo__DOT__ram_source
                   [0U])) ? 3U : (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_28));
        vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_42 
            = (((2U == (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT__state_1)) 
                & ((IData)(vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT__entries_1_source) 
                   == vlTOPp->MMUtest__DOT__mmu__DOT__ll_page_cache__DOT__mem_rsp_fifo__DOT__ram_source
                   [0U])) ? 3U : (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_29));
        vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_44 
            = (((2U == (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT__state_2)) 
                & ((IData)(vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT__entries_2_source) 
                   == vlTOPp->MMUtest__DOT__mmu__DOT__ll_page_cache__DOT__mem_rsp_fifo__DOT__ram_source
                   [0U])) ? 3U : (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_30));
        vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_46 
            = (((2U == (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT__state_3)) 
                & ((IData)(vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT__entries_3_source) 
                   == vlTOPp->MMUtest__DOT__mmu__DOT__ll_page_cache__DOT__mem_rsp_fifo__DOT__ram_source
                   [0U])) ? 3U : (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_31));
    } else {
        vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_40 
            = vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_28;
        vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_42 
            = vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_29;
        vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_44 
            = vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_30;
        vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_46 
            = vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_31;
    }
}

VL_INLINE_OPT void VMMUtest::_combo__TOP__4(VMMUtest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMMUtest::_combo__TOP__4\n"); );
    VMMUtest* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->MMUtest__DOT__mmu__DOT__mem_arb_io_memRspVecOut_0_valid 
        = ((~ ((IData)(vlTOPp->io_out_d_bits_source) 
               >> 2U)) & (IData)(vlTOPp->io_out_d_valid));
    vlTOPp->MMUtest__DOT__mmu__DOT__mem_arb_io_memRspVecOut_1_valid 
        = (((IData)(vlTOPp->io_out_d_bits_source) >> 2U) 
           & (IData)(vlTOPp->io_out_d_valid));
    vlTOPp->MMUtest__DOT__mmu__DOT__tlb__DOT__tlb_rsp_fifo__DOT__do_deq 
        = ((IData)(vlTOPp->io_host_rsp_ready) & (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__tlb__DOT__tlb_rsp_fifo__DOT__maybe_full));
    vlTOPp->MMUtest__DOT__mmu__DOT__tlb__DOT__l2tlb_req_fifo__DOT__do_enq 
        = ((~ (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__tlb__DOT__l2tlb_req_fifo__DOT__maybe_full)) 
           & (IData)(vlTOPp->io_host_req_valid));
    vlTOPp->MMUtest__DOT__mmu__DOT__ll_page_cache__DOT__mem_req_fifo__DOT__do_deq 
        = ((IData)(vlTOPp->io_out_a_ready) & (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ll_page_cache__DOT__mem_req_fifo__DOT__maybe_full));
    vlTOPp->MMUtest__DOT__mmu__DOT__page_cache__DOT__mem_req_fifo__DOT__do_deq 
        = (((~ (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ll_page_cache__DOT__mem_req_fifo__DOT__maybe_full)) 
            & (IData)(vlTOPp->io_out_a_ready)) & (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__page_cache__DOT__mem_req_fifo__DOT__maybe_full));
    vlTOPp->io_out_d_ready = (0U != (((IData)(1U) << 
                                      (1U & ((IData)(vlTOPp->io_out_d_bits_source) 
                                             >> 2U))) 
                                     & ((2U & ((IData)(vlTOPp->MMUtest__DOT__mmu__DOT__mem_arb__DOT___io_memRspIn_ready_T_2) 
                                               << 1U)) 
                                        | (1U & ((IData)(vlTOPp->MMUtest__DOT__mmu__DOT__mem_arb__DOT___io_memRspIn_ready_T_2) 
                                                 >> 1U)))));
    vlTOPp->MMUtest__DOT__mmu__DOT__ll_page_cache__DOT__mem_rsp_fifo__DOT__do_enq 
        = ((~ (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ll_page_cache__DOT__mem_rsp_fifo__DOT__maybe_full)) 
           & (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__mem_arb_io_memRspVecOut_0_valid));
    vlTOPp->MMUtest__DOT__mmu__DOT__page_cache__DOT__mem_rsp_fifo__DOT__do_enq 
        = ((~ (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__page_cache__DOT__mem_rsp_fifo__DOT__maybe_full)) 
           & (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__mem_arb_io_memRspVecOut_1_valid));
}

void VMMUtest::_eval(VMMUtest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMMUtest::_eval\n"); );
    VMMUtest* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clock) & (~ (IData)(vlTOPp->__Vclklast__TOP__clock)))) {
        vlTOPp->_sequent__TOP__2(vlSymsp);
    }
    vlTOPp->_combo__TOP__4(vlSymsp);
    // Final
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
}

VL_INLINE_OPT QData VMMUtest::_change_request(VMMUtest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMMUtest::_change_request\n"); );
    VMMUtest* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData VMMUtest::_change_request_1(VMMUtest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMMUtest::_change_request_1\n"); );
    VMMUtest* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VMMUtest::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMMUtest::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((io_host_req_valid & 0xfeU))) {
        Verilated::overWidthError("io_host_req_valid");}
    if (VL_UNLIKELY((io_host_req_bits_host_wg_id & 0xe0U))) {
        Verilated::overWidthError("io_host_req_bits_host_wg_id");}
    if (VL_UNLIKELY((io_host_req_bits_host_num_wf & 0xf8U))) {
        Verilated::overWidthError("io_host_req_bits_host_num_wf");}
    if (VL_UNLIKELY((io_host_req_bits_host_wf_size 
                     & 0xfc00U))) {
        Verilated::overWidthError("io_host_req_bits_host_wf_size");}
    if (VL_UNLIKELY((io_host_req_bits_host_vgpr_size_total 
                     & 0xe000U))) {
        Verilated::overWidthError("io_host_req_bits_host_vgpr_size_total");}
    if (VL_UNLIKELY((io_host_req_bits_host_sgpr_size_total 
                     & 0xe000U))) {
        Verilated::overWidthError("io_host_req_bits_host_sgpr_size_total");}
    if (VL_UNLIKELY((io_host_req_bits_host_lds_size_total 
                     & 0xe000U))) {
        Verilated::overWidthError("io_host_req_bits_host_lds_size_total");}
    if (VL_UNLIKELY((io_host_req_bits_host_gds_size_total 
                     & 0xf800U))) {
        Verilated::overWidthError("io_host_req_bits_host_gds_size_total");}
    if (VL_UNLIKELY((io_host_req_bits_host_vgpr_size_per_wf 
                     & 0xe000U))) {
        Verilated::overWidthError("io_host_req_bits_host_vgpr_size_per_wf");}
    if (VL_UNLIKELY((io_host_req_bits_host_sgpr_size_per_wf 
                     & 0xe000U))) {
        Verilated::overWidthError("io_host_req_bits_host_sgpr_size_per_wf");}
    if (VL_UNLIKELY((io_host_rsp_ready & 0xfeU))) {
        Verilated::overWidthError("io_host_rsp_ready");}
    if (VL_UNLIKELY((io_out_a_ready & 0xfeU))) {
        Verilated::overWidthError("io_out_a_ready");}
    if (VL_UNLIKELY((io_out_d_valid & 0xfeU))) {
        Verilated::overWidthError("io_out_d_valid");}
    if (VL_UNLIKELY((io_out_d_bits_opcode & 0xf8U))) {
        Verilated::overWidthError("io_out_d_bits_opcode");}
    if (VL_UNLIKELY((io_out_d_bits_size & 0xf8U))) {
        Verilated::overWidthError("io_out_d_bits_size");}
    if (VL_UNLIKELY((io_out_d_bits_source & 0xf0U))) {
        Verilated::overWidthError("io_out_d_bits_source");}
}
#endif  // VL_DEBUG
