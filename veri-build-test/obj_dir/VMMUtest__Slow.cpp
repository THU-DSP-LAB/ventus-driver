// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMMUtest.h for the primary calling header

#include "VMMUtest.h"
#include "VMMUtest__Syms.h"

//==========

VL_CTOR_IMP(VMMUtest) {
    VMMUtest__Syms* __restrict vlSymsp = __VlSymsp = new VMMUtest__Syms(this, name());
    VMMUtest* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VMMUtest::__Vconfigure(VMMUtest__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

VMMUtest::~VMMUtest() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void VMMUtest::_initial__TOP__1(VMMUtest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMMUtest::_initial__TOP__1\n"); );
    VMMUtest* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->io_out_a_bits_opcode = 4U;
    vlTOPp->io_out_a_bits_size = 0U;
    vlTOPp->io_out_a_bits_mask = 1U;
    vlTOPp->io_out_a_bits_data = 0ULL;
}

void VMMUtest::_settle__TOP__3(VMMUtest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMMUtest::_settle__TOP__3\n"); );
    VMMUtest* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->MMUtest__DOT__mmu__DOT__mem_arb_io_memRspVecOut_0_valid 
        = ((~ ((IData)(vlTOPp->io_out_d_bits_source) 
               >> 2U)) & (IData)(vlTOPp->io_out_d_valid));
    vlTOPp->MMUtest__DOT__mmu__DOT__mem_arb_io_memRspVecOut_1_valid 
        = (((IData)(vlTOPp->io_out_d_bits_source) >> 2U) 
           & (IData)(vlTOPp->io_out_d_valid));
    vlTOPp->io_host_rsp_bits_inflight_wg_buffer_host_wf_done_wg_id 
        = vlTOPp->MMUtest__DOT__mmu__DOT__tlb__DOT__tlb_rsp_fifo__DOT__ram_source
        [0U];
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
    vlTOPp->MMUtest__DOT__mmu__DOT__ptw_io_mem_rsp_ready 
        = ((((2U == (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__state_0)) 
             | (2U == (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__state_1))) 
            | (2U == (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__state_2))) 
           | (2U == (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__state_3)));
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
    vlTOPp->MMUtest__DOT__mmu__DOT__llptw_io_ll_req_ready 
        = ((((0U == (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT__state_0)) 
             | (0U == (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT__state_1))) 
            | (0U == (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT__state_2))) 
           | (0U == (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT__state_3)));
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
    vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__deq_ptr 
        = ((3U == (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__state_0))
            ? 0U : ((3U == (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__state_1))
                     ? 1U : ((3U == (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__state_2))
                              ? 2U : 3U)));
    vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT__deq_ptr 
        = ((3U == (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT__state_0))
            ? 0U : ((3U == (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT__state_1))
                     ? 1U : ((3U == (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT__state_2))
                              ? 2U : 3U)));
    vlTOPp->io_host_req_ready = (1U & (~ (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__tlb__DOT__l2tlb_req_fifo__DOT__maybe_full)));
    vlTOPp->io_host_rsp_valid = vlTOPp->MMUtest__DOT__mmu__DOT__tlb__DOT__tlb_rsp_fifo__DOT__maybe_full;
    vlTOPp->io_out_a_valid = ((IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ll_page_cache__DOT__mem_req_fifo__DOT__maybe_full) 
                              | (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__page_cache__DOT__mem_req_fifo__DOT__maybe_full));
    vlTOPp->MMUtest__DOT__mmu__DOT__tlb__DOT__l2tlb_req_fifo__DOT__do_enq 
        = ((~ (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__tlb__DOT__l2tlb_req_fifo__DOT__maybe_full)) 
           & (IData)(vlTOPp->io_host_req_valid));
    vlTOPp->MMUtest__DOT__mmu__DOT__tlb__DOT__tlb_rsp_fifo__DOT__do_enq 
        = ((~ (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__tlb__DOT__tlb_rsp_fifo__DOT__maybe_full)) 
           & (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__l2tlb__DOT__l2tlb_rsp_fifo__DOT__maybe_full));
    vlTOPp->MMUtest__DOT__mmu__DOT__tlb__DOT__tlb_rsp_fifo__DOT__do_deq 
        = ((IData)(vlTOPp->io_host_rsp_ready) & (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__tlb__DOT__tlb_rsp_fifo__DOT__maybe_full));
    vlTOPp->MMUtest__DOT__mmu__DOT__l2tlb__DOT__ptw_req_fifo__DOT__do_enq 
        = ((~ (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__l2tlb__DOT__ptw_req_fifo__DOT__maybe_full)) 
           & (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__tlb__DOT__l2tlb_req_fifo__DOT__maybe_full));
    vlTOPp->MMUtest__DOT__mmu__DOT__ll_page_cache__DOT__mem_req_fifo__DOT__do_deq 
        = ((IData)(vlTOPp->io_out_a_ready) & (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ll_page_cache__DOT__mem_req_fifo__DOT__maybe_full));
    vlTOPp->io_out_a_bits_source = ((IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ll_page_cache__DOT__mem_req_fifo__DOT__maybe_full)
                                     ? vlTOPp->MMUtest__DOT__mmu__DOT__ll_page_cache__DOT__mem_req_fifo__DOT__ram_source
                                    [0U] : (4U | vlTOPp->MMUtest__DOT__mmu__DOT__page_cache__DOT__mem_req_fifo__DOT__ram_source
                                            [0U]));
    vlTOPp->io_out_a_bits_address = (IData)(((IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ll_page_cache__DOT__mem_req_fifo__DOT__maybe_full)
                                              ? vlTOPp->MMUtest__DOT__mmu__DOT__ll_page_cache__DOT__mem_req_fifo__DOT__ram_addr
                                             [0U] : 
                                             vlTOPp->MMUtest__DOT__mmu__DOT__page_cache__DOT__mem_req_fifo__DOT__ram_addr
                                             [0U]));
    vlTOPp->MMUtest__DOT__mmu__DOT__page_cache__DOT__mem_req_fifo__DOT__do_deq 
        = (((~ (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ll_page_cache__DOT__mem_req_fifo__DOT__maybe_full)) 
            & (IData)(vlTOPp->io_out_a_ready)) & (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__page_cache__DOT__mem_req_fifo__DOT__maybe_full));
    vlTOPp->MMUtest__DOT__mmu__DOT__mem_arb__DOT___io_memRspIn_ready_T_2 
        = ((2U & ((~ (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ll_page_cache__DOT__mem_rsp_fifo__DOT__maybe_full)) 
                  << 1U)) | (1U & (~ (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__page_cache__DOT__mem_rsp_fifo__DOT__maybe_full))));
    vlTOPp->MMUtest__DOT__mmu__DOT__ll_page_cache__DOT__mem_rsp_fifo__DOT__do_enq 
        = ((~ (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ll_page_cache__DOT__mem_rsp_fifo__DOT__maybe_full)) 
           & (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__mem_arb_io_memRspVecOut_0_valid));
    vlTOPp->MMUtest__DOT__mmu__DOT__page_cache__DOT__mem_rsp_fifo__DOT__do_enq 
        = ((~ (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__page_cache__DOT__mem_rsp_fifo__DOT__maybe_full)) 
           & (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__mem_arb_io_memRspVecOut_1_valid));
    vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT__ptwrsp_arb_io_out_valid 
        = ((3U == (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT__ptwrsp_arb_io_chosen))
            ? (3U == (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT__state_3))
            : ((2U == (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT__ptwrsp_arb_io_chosen))
                ? (3U == (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT__state_2))
                : ((1U == (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT__ptwrsp_arb_io_chosen))
                    ? (3U == (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT__state_1))
                    : (3U == (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT__state_0)))));
    vlTOPp->MMUtest__DOT__mmu__DOT__ll_page_cache__DOT__mem_rsp_fifo__DOT__do_deq 
        = ((IData)(vlTOPp->MMUtest__DOT__mmu__DOT__llptw_io_mem_rsp_ready) 
           & (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ll_page_cache__DOT__mem_rsp_fifo__DOT__maybe_full));
    vlTOPp->MMUtest__DOT__mmu__DOT__page_cache__DOT__mem_rsp_fifo__DOT__do_deq 
        = ((IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw_io_mem_rsp_ready) 
           & (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__page_cache__DOT__mem_rsp_fifo__DOT__maybe_full));
    vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT__memreq_arb_io_out_valid 
        = ((3U == (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT__memreq_arb_io_chosen))
            ? (1U == (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT__state_3))
            : ((2U == (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT__memreq_arb_io_chosen))
                ? (1U == (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT__state_2))
                : ((1U == (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT__memreq_arb_io_chosen))
                    ? (1U == (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT__state_1))
                    : (1U == (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT__state_0)))));
    vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__memreq_arb_io_out_valid 
        = ((3U == (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__memreq_arb_io_chosen))
            ? (1U == (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__state_3))
            : ((2U == (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__memreq_arb_io_chosen))
                ? (1U == (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__state_2))
                : ((1U == (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__memreq_arb_io_chosen))
                    ? (1U == (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__state_1))
                    : (1U == (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__state_0)))));
    vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT___T = 
        ((IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw_io_ptw_req_ready) 
         & (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__l2tlb__DOT__ptw_req_fifo__DOT__maybe_full));
    if ((3U == (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__llreq_arb_io_chosen))) {
        vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__llreq_arb_io_out_valid 
            = (3U == (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__state_3));
        vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__llreq_arb_io_out_bits_source 
            = vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_3_source;
    } else {
        vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__llreq_arb_io_out_valid 
            = ((2U == (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__llreq_arb_io_chosen))
                ? (3U == (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__state_2))
                : ((1U == (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__llreq_arb_io_chosen))
                    ? (3U == (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__state_1))
                    : (3U == (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__state_0))));
        vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__llreq_arb_io_out_bits_source 
            = ((2U == (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__llreq_arb_io_chosen))
                ? (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_2_source)
                : ((1U == (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__llreq_arb_io_chosen))
                    ? (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_1_source)
                    : (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__entries_0_source)));
    }
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
    vlTOPp->io_out_d_ready = (0U != (((IData)(1U) << 
                                      (1U & ((IData)(vlTOPp->io_out_d_bits_source) 
                                             >> 2U))) 
                                     & ((2U & ((IData)(vlTOPp->MMUtest__DOT__mmu__DOT__mem_arb__DOT___io_memRspIn_ready_T_2) 
                                               << 1U)) 
                                        | (1U & ((IData)(vlTOPp->MMUtest__DOT__mmu__DOT__mem_arb__DOT___io_memRspIn_ready_T_2) 
                                                 >> 1U)))));
    vlTOPp->MMUtest__DOT__mmu__DOT__l2tlb__DOT__l2tlb_rsp_fifo__DOT__do_enq 
        = ((~ (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__l2tlb__DOT__l2tlb_rsp_fifo__DOT__maybe_full)) 
           & (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT__ptwrsp_arb_io_out_valid));
    vlTOPp->MMUtest__DOT__mmu__DOT__ll_page_cache__DOT__mem_req_fifo__DOT__do_enq 
        = ((~ (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ll_page_cache__DOT__mem_req_fifo__DOT__maybe_full)) 
           & (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT__memreq_arb_io_out_valid));
    vlTOPp->MMUtest__DOT__mmu__DOT__page_cache__DOT__mem_req_fifo__DOT__do_enq 
        = ((~ (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__page_cache__DOT__mem_req_fifo__DOT__maybe_full)) 
           & (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__memreq_arb_io_out_valid));
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
    vlTOPp->MMUtest__DOT__mmu__DOT__llptw__DOT___T 
        = ((IData)(vlTOPp->MMUtest__DOT__mmu__DOT__llptw_io_ll_req_ready) 
           & (IData)(vlTOPp->MMUtest__DOT__mmu__DOT__ptw__DOT__llreq_arb_io_out_valid));
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

void VMMUtest::_eval_initial(VMMUtest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMMUtest::_eval_initial\n"); );
    VMMUtest* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_initial__TOP__1(vlSymsp);
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
}

void VMMUtest::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMMUtest::final\n"); );
    // Variables
    VMMUtest__Syms* __restrict vlSymsp = this->__VlSymsp;
    VMMUtest* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VMMUtest::_eval_settle(VMMUtest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMMUtest::_eval_settle\n"); );
    VMMUtest* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__3(vlSymsp);
}

void VMMUtest::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMMUtest::_ctor_var_reset\n"); );
    // Body
    clock = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    io_host_req_ready = VL_RAND_RESET_I(1);
    io_host_req_valid = VL_RAND_RESET_I(1);
    io_host_req_bits_host_wg_id = VL_RAND_RESET_I(5);
    io_host_req_bits_host_num_wf = VL_RAND_RESET_I(3);
    io_host_req_bits_host_wf_size = VL_RAND_RESET_I(10);
    io_host_req_bits_host_start_pc = VL_RAND_RESET_I(32);
    io_host_req_bits_host_vgpr_size_total = VL_RAND_RESET_I(13);
    io_host_req_bits_host_sgpr_size_total = VL_RAND_RESET_I(13);
    io_host_req_bits_host_lds_size_total = VL_RAND_RESET_I(13);
    io_host_req_bits_host_gds_size_total = VL_RAND_RESET_I(11);
    io_host_req_bits_host_vgpr_size_per_wf = VL_RAND_RESET_I(13);
    io_host_req_bits_host_sgpr_size_per_wf = VL_RAND_RESET_I(13);
    io_host_req_bits_host_gds_baseaddr = VL_RAND_RESET_I(32);
    io_host_rsp_ready = VL_RAND_RESET_I(1);
    io_host_rsp_valid = VL_RAND_RESET_I(1);
    io_host_rsp_bits_inflight_wg_buffer_host_wf_done_wg_id = VL_RAND_RESET_I(5);
    io_out_a_ready = VL_RAND_RESET_I(1);
    io_out_a_valid = VL_RAND_RESET_I(1);
    io_out_a_bits_opcode = VL_RAND_RESET_I(3);
    io_out_a_bits_size = VL_RAND_RESET_I(3);
    io_out_a_bits_source = VL_RAND_RESET_I(4);
    io_out_a_bits_address = VL_RAND_RESET_I(32);
    io_out_a_bits_mask = VL_RAND_RESET_I(2);
    io_out_a_bits_data = VL_RAND_RESET_Q(64);
    io_out_d_ready = VL_RAND_RESET_I(1);
    io_out_d_valid = VL_RAND_RESET_I(1);
    io_out_d_bits_opcode = VL_RAND_RESET_I(3);
    io_out_d_bits_size = VL_RAND_RESET_I(3);
    io_out_d_bits_source = VL_RAND_RESET_I(4);
    io_out_d_bits_data = VL_RAND_RESET_Q(64);
    MMUtest__DOT__mmu__DOT__ptw_io_ptw_req_ready = VL_RAND_RESET_I(1);
    MMUtest__DOT__mmu__DOT__ptw_io_mem_rsp_ready = VL_RAND_RESET_I(1);
    MMUtest__DOT__mmu__DOT__llptw_io_ll_req_ready = VL_RAND_RESET_I(1);
    MMUtest__DOT__mmu__DOT__llptw_io_mem_rsp_ready = VL_RAND_RESET_I(1);
    MMUtest__DOT__mmu__DOT__mem_arb_io_memRspVecOut_0_valid = VL_RAND_RESET_I(1);
    MMUtest__DOT__mmu__DOT__mem_arb_io_memRspVecOut_1_valid = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<1; ++__Vi0) {
            MMUtest__DOT__mmu__DOT__tlb__DOT__l2tlb_req_fifo__DOT__ram_addr[__Vi0] = VL_RAND_RESET_Q(64);
    }}
    { int __Vi0=0; for (; __Vi0<1; ++__Vi0) {
            MMUtest__DOT__mmu__DOT__tlb__DOT__l2tlb_req_fifo__DOT__ram_PTBR[__Vi0] = VL_RAND_RESET_Q(64);
    }}
    { int __Vi0=0; for (; __Vi0<1; ++__Vi0) {
            MMUtest__DOT__mmu__DOT__tlb__DOT__l2tlb_req_fifo__DOT__ram_source[__Vi0] = VL_RAND_RESET_I(2);
    }}
    MMUtest__DOT__mmu__DOT__tlb__DOT__l2tlb_req_fifo__DOT__maybe_full = VL_RAND_RESET_I(1);
    MMUtest__DOT__mmu__DOT__tlb__DOT__l2tlb_req_fifo__DOT__do_enq = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<1; ++__Vi0) {
            MMUtest__DOT__mmu__DOT__tlb__DOT__tlb_rsp_fifo__DOT__ram_addr[__Vi0] = VL_RAND_RESET_Q(64);
    }}
    { int __Vi0=0; for (; __Vi0<1; ++__Vi0) {
            MMUtest__DOT__mmu__DOT__tlb__DOT__tlb_rsp_fifo__DOT__ram_source[__Vi0] = VL_RAND_RESET_I(2);
    }}
    MMUtest__DOT__mmu__DOT__tlb__DOT__tlb_rsp_fifo__DOT__maybe_full = VL_RAND_RESET_I(1);
    MMUtest__DOT__mmu__DOT__tlb__DOT__tlb_rsp_fifo__DOT__do_enq = VL_RAND_RESET_I(1);
    MMUtest__DOT__mmu__DOT__tlb__DOT__tlb_rsp_fifo__DOT__do_deq = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<1; ++__Vi0) {
            MMUtest__DOT__mmu__DOT__l2tlb__DOT__ptw_req_fifo__DOT__ram_addr[__Vi0] = VL_RAND_RESET_Q(64);
    }}
    { int __Vi0=0; for (; __Vi0<1; ++__Vi0) {
            MMUtest__DOT__mmu__DOT__l2tlb__DOT__ptw_req_fifo__DOT__ram_PTBR[__Vi0] = VL_RAND_RESET_Q(64);
    }}
    { int __Vi0=0; for (; __Vi0<1; ++__Vi0) {
            MMUtest__DOT__mmu__DOT__l2tlb__DOT__ptw_req_fifo__DOT__ram_source[__Vi0] = VL_RAND_RESET_I(2);
    }}
    MMUtest__DOT__mmu__DOT__l2tlb__DOT__ptw_req_fifo__DOT__maybe_full = VL_RAND_RESET_I(1);
    MMUtest__DOT__mmu__DOT__l2tlb__DOT__ptw_req_fifo__DOT__do_enq = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<1; ++__Vi0) {
            MMUtest__DOT__mmu__DOT__l2tlb__DOT__l2tlb_rsp_fifo__DOT__ram_addr[__Vi0] = VL_RAND_RESET_Q(64);
    }}
    { int __Vi0=0; for (; __Vi0<1; ++__Vi0) {
            MMUtest__DOT__mmu__DOT__l2tlb__DOT__l2tlb_rsp_fifo__DOT__ram_source[__Vi0] = VL_RAND_RESET_I(2);
    }}
    MMUtest__DOT__mmu__DOT__l2tlb__DOT__l2tlb_rsp_fifo__DOT__maybe_full = VL_RAND_RESET_I(1);
    MMUtest__DOT__mmu__DOT__l2tlb__DOT__l2tlb_rsp_fifo__DOT__do_enq = VL_RAND_RESET_I(1);
    MMUtest__DOT__mmu__DOT__ptw__DOT__memreq_arb_io_out_valid = VL_RAND_RESET_I(1);
    MMUtest__DOT__mmu__DOT__ptw__DOT__memreq_arb_io_chosen = VL_RAND_RESET_I(2);
    MMUtest__DOT__mmu__DOT__ptw__DOT__llreq_arb_io_out_valid = VL_RAND_RESET_I(1);
    MMUtest__DOT__mmu__DOT__ptw__DOT__llreq_arb_io_out_bits_source = VL_RAND_RESET_I(2);
    MMUtest__DOT__mmu__DOT__ptw__DOT__llreq_arb_io_chosen = VL_RAND_RESET_I(2);
    MMUtest__DOT__mmu__DOT__ptw__DOT__entries_0_ppn = VL_RAND_RESET_Q(44);
    MMUtest__DOT__mmu__DOT__ptw__DOT__entries_0_vpn = VL_RAND_RESET_I(27);
    MMUtest__DOT__mmu__DOT__ptw__DOT__entries_0_cur_level = VL_RAND_RESET_I(2);
    MMUtest__DOT__mmu__DOT__ptw__DOT__entries_0_source = VL_RAND_RESET_I(2);
    MMUtest__DOT__mmu__DOT__ptw__DOT__entries_1_ppn = VL_RAND_RESET_Q(44);
    MMUtest__DOT__mmu__DOT__ptw__DOT__entries_1_vpn = VL_RAND_RESET_I(27);
    MMUtest__DOT__mmu__DOT__ptw__DOT__entries_1_cur_level = VL_RAND_RESET_I(2);
    MMUtest__DOT__mmu__DOT__ptw__DOT__entries_1_source = VL_RAND_RESET_I(2);
    MMUtest__DOT__mmu__DOT__ptw__DOT__entries_2_ppn = VL_RAND_RESET_Q(44);
    MMUtest__DOT__mmu__DOT__ptw__DOT__entries_2_vpn = VL_RAND_RESET_I(27);
    MMUtest__DOT__mmu__DOT__ptw__DOT__entries_2_cur_level = VL_RAND_RESET_I(2);
    MMUtest__DOT__mmu__DOT__ptw__DOT__entries_2_source = VL_RAND_RESET_I(2);
    MMUtest__DOT__mmu__DOT__ptw__DOT__entries_3_ppn = VL_RAND_RESET_Q(44);
    MMUtest__DOT__mmu__DOT__ptw__DOT__entries_3_vpn = VL_RAND_RESET_I(27);
    MMUtest__DOT__mmu__DOT__ptw__DOT__entries_3_cur_level = VL_RAND_RESET_I(2);
    MMUtest__DOT__mmu__DOT__ptw__DOT__entries_3_source = VL_RAND_RESET_I(2);
    MMUtest__DOT__mmu__DOT__ptw__DOT__state_0 = VL_RAND_RESET_I(2);
    MMUtest__DOT__mmu__DOT__ptw__DOT__state_1 = VL_RAND_RESET_I(2);
    MMUtest__DOT__mmu__DOT__ptw__DOT__state_2 = VL_RAND_RESET_I(2);
    MMUtest__DOT__mmu__DOT__ptw__DOT__state_3 = VL_RAND_RESET_I(2);
    MMUtest__DOT__mmu__DOT__ptw__DOT__enq_ptr = VL_RAND_RESET_I(2);
    MMUtest__DOT__mmu__DOT__ptw__DOT___T = VL_RAND_RESET_I(1);
    MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_20 = VL_RAND_RESET_I(2);
    MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_21 = VL_RAND_RESET_I(2);
    MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_22 = VL_RAND_RESET_I(2);
    MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_23 = VL_RAND_RESET_I(2);
    MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_24 = VL_RAND_RESET_I(2);
    MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_25 = VL_RAND_RESET_I(2);
    MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_26 = VL_RAND_RESET_I(2);
    MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_27 = VL_RAND_RESET_I(2);
    MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_28 = VL_RAND_RESET_I(27);
    MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_29 = VL_RAND_RESET_I(27);
    MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_30 = VL_RAND_RESET_I(27);
    MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_31 = VL_RAND_RESET_I(27);
    MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_32 = VL_RAND_RESET_Q(44);
    MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_33 = VL_RAND_RESET_Q(44);
    MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_34 = VL_RAND_RESET_Q(44);
    MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_35 = VL_RAND_RESET_Q(44);
    MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_36 = VL_RAND_RESET_I(2);
    MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_37 = VL_RAND_RESET_I(2);
    MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_38 = VL_RAND_RESET_I(2);
    MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_39 = VL_RAND_RESET_I(2);
    MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_44 = VL_RAND_RESET_I(2);
    MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_45 = VL_RAND_RESET_I(2);
    MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_46 = VL_RAND_RESET_I(2);
    MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_47 = VL_RAND_RESET_I(2);
    MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_60 = VL_RAND_RESET_I(2);
    MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_61 = VL_RAND_RESET_I(2);
    MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_62 = VL_RAND_RESET_Q(44);
    MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_63 = VL_RAND_RESET_I(2);
    MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_64 = VL_RAND_RESET_I(2);
    MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_65 = VL_RAND_RESET_Q(44);
    MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_66 = VL_RAND_RESET_I(2);
    MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_67 = VL_RAND_RESET_I(2);
    MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_68 = VL_RAND_RESET_Q(44);
    MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_69 = VL_RAND_RESET_I(2);
    MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_70 = VL_RAND_RESET_I(2);
    MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_71 = VL_RAND_RESET_Q(44);
    MMUtest__DOT__mmu__DOT__ptw__DOT__deq_ptr = VL_RAND_RESET_I(2);
    MMUtest__DOT__mmu__DOT__ptw__DOT___io_ll_req_bits_addr_T_3 = VL_RAND_RESET_Q(59);
    MMUtest__DOT__mmu__DOT__ptw__DOT__memreq_arb__DOT__lastGrant = VL_RAND_RESET_I(2);
    MMUtest__DOT__mmu__DOT__ptw__DOT__llreq_arb__DOT__lastGrant = VL_RAND_RESET_I(2);
    MMUtest__DOT__mmu__DOT__llptw__DOT__memreq_arb_io_out_valid = VL_RAND_RESET_I(1);
    MMUtest__DOT__mmu__DOT__llptw__DOT__memreq_arb_io_chosen = VL_RAND_RESET_I(2);
    MMUtest__DOT__mmu__DOT__llptw__DOT__ptwrsp_arb_io_out_valid = VL_RAND_RESET_I(1);
    MMUtest__DOT__mmu__DOT__llptw__DOT__ptwrsp_arb_io_chosen = VL_RAND_RESET_I(2);
    MMUtest__DOT__mmu__DOT__llptw__DOT__entries_0_addr = VL_RAND_RESET_Q(64);
    MMUtest__DOT__mmu__DOT__llptw__DOT__entries_0_source = VL_RAND_RESET_I(2);
    MMUtest__DOT__mmu__DOT__llptw__DOT__entries_1_addr = VL_RAND_RESET_Q(64);
    MMUtest__DOT__mmu__DOT__llptw__DOT__entries_1_source = VL_RAND_RESET_I(2);
    MMUtest__DOT__mmu__DOT__llptw__DOT__entries_2_addr = VL_RAND_RESET_Q(64);
    MMUtest__DOT__mmu__DOT__llptw__DOT__entries_2_source = VL_RAND_RESET_I(2);
    MMUtest__DOT__mmu__DOT__llptw__DOT__entries_3_addr = VL_RAND_RESET_Q(64);
    MMUtest__DOT__mmu__DOT__llptw__DOT__entries_3_source = VL_RAND_RESET_I(2);
    MMUtest__DOT__mmu__DOT__llptw__DOT__state_0 = VL_RAND_RESET_I(2);
    MMUtest__DOT__mmu__DOT__llptw__DOT__state_1 = VL_RAND_RESET_I(2);
    MMUtest__DOT__mmu__DOT__llptw__DOT__state_2 = VL_RAND_RESET_I(2);
    MMUtest__DOT__mmu__DOT__llptw__DOT__state_3 = VL_RAND_RESET_I(2);
    MMUtest__DOT__mmu__DOT__llptw__DOT__enq_ptr = VL_RAND_RESET_I(2);
    MMUtest__DOT__mmu__DOT__llptw__DOT___T = VL_RAND_RESET_I(1);
    MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_12 = VL_RAND_RESET_I(2);
    MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_13 = VL_RAND_RESET_I(2);
    MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_14 = VL_RAND_RESET_I(2);
    MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_15 = VL_RAND_RESET_I(2);
    MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_16 = VL_RAND_RESET_Q(64);
    MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_17 = VL_RAND_RESET_Q(64);
    MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_18 = VL_RAND_RESET_Q(64);
    MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_19 = VL_RAND_RESET_Q(64);
    MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_20 = VL_RAND_RESET_I(2);
    MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_21 = VL_RAND_RESET_I(2);
    MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_22 = VL_RAND_RESET_I(2);
    MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_23 = VL_RAND_RESET_I(2);
    MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_28 = VL_RAND_RESET_I(2);
    MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_29 = VL_RAND_RESET_I(2);
    MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_30 = VL_RAND_RESET_I(2);
    MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_31 = VL_RAND_RESET_I(2);
    MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_40 = VL_RAND_RESET_I(2);
    MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_41 = VL_RAND_RESET_Q(64);
    MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_42 = VL_RAND_RESET_I(2);
    MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_43 = VL_RAND_RESET_Q(64);
    MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_44 = VL_RAND_RESET_I(2);
    MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_45 = VL_RAND_RESET_Q(64);
    MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_46 = VL_RAND_RESET_I(2);
    MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_47 = VL_RAND_RESET_Q(64);
    MMUtest__DOT__mmu__DOT__llptw__DOT__deq_ptr = VL_RAND_RESET_I(2);
    MMUtest__DOT__mmu__DOT__llptw__DOT__memreq_arb__DOT__lastGrant = VL_RAND_RESET_I(2);
    MMUtest__DOT__mmu__DOT__llptw__DOT__ptwrsp_arb__DOT__lastGrant = VL_RAND_RESET_I(2);
    { int __Vi0=0; for (; __Vi0<1; ++__Vi0) {
            MMUtest__DOT__mmu__DOT__page_cache__DOT__mem_req_fifo__DOT__ram_addr[__Vi0] = VL_RAND_RESET_Q(64);
    }}
    { int __Vi0=0; for (; __Vi0<1; ++__Vi0) {
            MMUtest__DOT__mmu__DOT__page_cache__DOT__mem_req_fifo__DOT__ram_source[__Vi0] = VL_RAND_RESET_I(2);
    }}
    MMUtest__DOT__mmu__DOT__page_cache__DOT__mem_req_fifo__DOT__maybe_full = VL_RAND_RESET_I(1);
    MMUtest__DOT__mmu__DOT__page_cache__DOT__mem_req_fifo__DOT__do_enq = VL_RAND_RESET_I(1);
    MMUtest__DOT__mmu__DOT__page_cache__DOT__mem_req_fifo__DOT__do_deq = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<1; ++__Vi0) {
            MMUtest__DOT__mmu__DOT__page_cache__DOT__mem_rsp_fifo__DOT__ram_addr[__Vi0] = VL_RAND_RESET_Q(64);
    }}
    { int __Vi0=0; for (; __Vi0<1; ++__Vi0) {
            MMUtest__DOT__mmu__DOT__page_cache__DOT__mem_rsp_fifo__DOT__ram_source[__Vi0] = VL_RAND_RESET_I(2);
    }}
    MMUtest__DOT__mmu__DOT__page_cache__DOT__mem_rsp_fifo__DOT__maybe_full = VL_RAND_RESET_I(1);
    MMUtest__DOT__mmu__DOT__page_cache__DOT__mem_rsp_fifo__DOT__do_enq = VL_RAND_RESET_I(1);
    MMUtest__DOT__mmu__DOT__page_cache__DOT__mem_rsp_fifo__DOT__do_deq = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<1; ++__Vi0) {
            MMUtest__DOT__mmu__DOT__ll_page_cache__DOT__mem_req_fifo__DOT__ram_addr[__Vi0] = VL_RAND_RESET_Q(64);
    }}
    { int __Vi0=0; for (; __Vi0<1; ++__Vi0) {
            MMUtest__DOT__mmu__DOT__ll_page_cache__DOT__mem_req_fifo__DOT__ram_source[__Vi0] = VL_RAND_RESET_I(2);
    }}
    MMUtest__DOT__mmu__DOT__ll_page_cache__DOT__mem_req_fifo__DOT__maybe_full = VL_RAND_RESET_I(1);
    MMUtest__DOT__mmu__DOT__ll_page_cache__DOT__mem_req_fifo__DOT__do_enq = VL_RAND_RESET_I(1);
    MMUtest__DOT__mmu__DOT__ll_page_cache__DOT__mem_req_fifo__DOT__do_deq = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<1; ++__Vi0) {
            MMUtest__DOT__mmu__DOT__ll_page_cache__DOT__mem_rsp_fifo__DOT__ram_addr[__Vi0] = VL_RAND_RESET_Q(64);
    }}
    { int __Vi0=0; for (; __Vi0<1; ++__Vi0) {
            MMUtest__DOT__mmu__DOT__ll_page_cache__DOT__mem_rsp_fifo__DOT__ram_source[__Vi0] = VL_RAND_RESET_I(2);
    }}
    MMUtest__DOT__mmu__DOT__ll_page_cache__DOT__mem_rsp_fifo__DOT__maybe_full = VL_RAND_RESET_I(1);
    MMUtest__DOT__mmu__DOT__ll_page_cache__DOT__mem_rsp_fifo__DOT__do_enq = VL_RAND_RESET_I(1);
    MMUtest__DOT__mmu__DOT__ll_page_cache__DOT__mem_rsp_fifo__DOT__do_deq = VL_RAND_RESET_I(1);
    MMUtest__DOT__mmu__DOT__mem_arb__DOT___io_memRspIn_ready_T_2 = VL_RAND_RESET_I(2);
}
