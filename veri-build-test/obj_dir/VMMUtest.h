// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VMMUTEST_H_
#define _VMMUTEST_H_  // guard

#include "verilated_heavy.h"

//==========

class VMMUtest__Syms;

//----------

VL_MODULE(VMMUtest) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    VL_OUT8(io_host_req_ready,0,0);
    VL_IN8(io_host_req_valid,0,0);
    VL_IN8(io_host_req_bits_host_wg_id,4,0);
    VL_IN8(io_host_req_bits_host_num_wf,2,0);
    VL_IN8(io_host_rsp_ready,0,0);
    VL_OUT8(io_host_rsp_valid,0,0);
    VL_OUT8(io_host_rsp_bits_inflight_wg_buffer_host_wf_done_wg_id,4,0);
    VL_IN8(io_out_a_ready,0,0);
    VL_OUT8(io_out_a_valid,0,0);
    VL_OUT8(io_out_a_bits_opcode,2,0);
    VL_OUT8(io_out_a_bits_size,2,0);
    VL_OUT8(io_out_a_bits_source,3,0);
    VL_OUT8(io_out_a_bits_mask,1,0);
    VL_OUT8(io_out_d_ready,0,0);
    VL_IN8(io_out_d_valid,0,0);
    VL_IN8(io_out_d_bits_opcode,2,0);
    VL_IN8(io_out_d_bits_size,2,0);
    VL_IN8(io_out_d_bits_source,3,0);
    VL_IN16(io_host_req_bits_host_wf_size,9,0);
    VL_IN16(io_host_req_bits_host_vgpr_size_total,12,0);
    VL_IN16(io_host_req_bits_host_sgpr_size_total,12,0);
    VL_IN16(io_host_req_bits_host_lds_size_total,12,0);
    VL_IN16(io_host_req_bits_host_gds_size_total,10,0);
    VL_IN16(io_host_req_bits_host_vgpr_size_per_wf,12,0);
    VL_IN16(io_host_req_bits_host_sgpr_size_per_wf,12,0);
    VL_IN(io_host_req_bits_host_start_pc,31,0);
    VL_IN(io_host_req_bits_host_gds_baseaddr,31,0);
    VL_OUT(io_out_a_bits_address,31,0);
    VL_OUT64(io_out_a_bits_data,63,0);
    VL_IN64(io_out_d_bits_data,63,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ MMUtest__DOT__mmu__DOT__ptw_io_ptw_req_ready;
        CData/*0:0*/ MMUtest__DOT__mmu__DOT__ptw_io_mem_rsp_ready;
        CData/*0:0*/ MMUtest__DOT__mmu__DOT__llptw_io_ll_req_ready;
        CData/*0:0*/ MMUtest__DOT__mmu__DOT__llptw_io_mem_rsp_ready;
        CData/*0:0*/ MMUtest__DOT__mmu__DOT__mem_arb_io_memRspVecOut_0_valid;
        CData/*0:0*/ MMUtest__DOT__mmu__DOT__mem_arb_io_memRspVecOut_1_valid;
        CData/*0:0*/ MMUtest__DOT__mmu__DOT__tlb__DOT__l2tlb_req_fifo__DOT__maybe_full;
        CData/*0:0*/ MMUtest__DOT__mmu__DOT__tlb__DOT__l2tlb_req_fifo__DOT__do_enq;
        CData/*0:0*/ MMUtest__DOT__mmu__DOT__tlb__DOT__tlb_rsp_fifo__DOT__maybe_full;
        CData/*0:0*/ MMUtest__DOT__mmu__DOT__tlb__DOT__tlb_rsp_fifo__DOT__do_enq;
        CData/*0:0*/ MMUtest__DOT__mmu__DOT__tlb__DOT__tlb_rsp_fifo__DOT__do_deq;
        CData/*0:0*/ MMUtest__DOT__mmu__DOT__l2tlb__DOT__ptw_req_fifo__DOT__maybe_full;
        CData/*0:0*/ MMUtest__DOT__mmu__DOT__l2tlb__DOT__ptw_req_fifo__DOT__do_enq;
        CData/*0:0*/ MMUtest__DOT__mmu__DOT__l2tlb__DOT__l2tlb_rsp_fifo__DOT__maybe_full;
        CData/*0:0*/ MMUtest__DOT__mmu__DOT__l2tlb__DOT__l2tlb_rsp_fifo__DOT__do_enq;
        CData/*0:0*/ MMUtest__DOT__mmu__DOT__ptw__DOT__memreq_arb_io_out_valid;
        CData/*1:0*/ MMUtest__DOT__mmu__DOT__ptw__DOT__memreq_arb_io_chosen;
        CData/*0:0*/ MMUtest__DOT__mmu__DOT__ptw__DOT__llreq_arb_io_out_valid;
        CData/*1:0*/ MMUtest__DOT__mmu__DOT__ptw__DOT__llreq_arb_io_out_bits_source;
        CData/*1:0*/ MMUtest__DOT__mmu__DOT__ptw__DOT__llreq_arb_io_chosen;
        CData/*1:0*/ MMUtest__DOT__mmu__DOT__ptw__DOT__entries_0_cur_level;
        CData/*1:0*/ MMUtest__DOT__mmu__DOT__ptw__DOT__entries_0_source;
        CData/*1:0*/ MMUtest__DOT__mmu__DOT__ptw__DOT__entries_1_cur_level;
        CData/*1:0*/ MMUtest__DOT__mmu__DOT__ptw__DOT__entries_1_source;
        CData/*1:0*/ MMUtest__DOT__mmu__DOT__ptw__DOT__entries_2_cur_level;
        CData/*1:0*/ MMUtest__DOT__mmu__DOT__ptw__DOT__entries_2_source;
        CData/*1:0*/ MMUtest__DOT__mmu__DOT__ptw__DOT__entries_3_cur_level;
        CData/*1:0*/ MMUtest__DOT__mmu__DOT__ptw__DOT__entries_3_source;
        CData/*1:0*/ MMUtest__DOT__mmu__DOT__ptw__DOT__state_0;
        CData/*1:0*/ MMUtest__DOT__mmu__DOT__ptw__DOT__state_1;
        CData/*1:0*/ MMUtest__DOT__mmu__DOT__ptw__DOT__state_2;
        CData/*1:0*/ MMUtest__DOT__mmu__DOT__ptw__DOT__state_3;
        CData/*1:0*/ MMUtest__DOT__mmu__DOT__ptw__DOT__enq_ptr;
        CData/*0:0*/ MMUtest__DOT__mmu__DOT__ptw__DOT___T;
        CData/*1:0*/ MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_20;
        CData/*1:0*/ MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_21;
        CData/*1:0*/ MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_22;
        CData/*1:0*/ MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_23;
        CData/*1:0*/ MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_24;
        CData/*1:0*/ MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_25;
        CData/*1:0*/ MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_26;
        CData/*1:0*/ MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_27;
        CData/*1:0*/ MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_36;
        CData/*1:0*/ MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_37;
        CData/*1:0*/ MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_38;
        CData/*1:0*/ MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_39;
        CData/*1:0*/ MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_44;
        CData/*1:0*/ MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_45;
        CData/*1:0*/ MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_46;
        CData/*1:0*/ MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_47;
        CData/*1:0*/ MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_60;
        CData/*1:0*/ MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_61;
        CData/*1:0*/ MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_63;
        CData/*1:0*/ MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_64;
        CData/*1:0*/ MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_66;
        CData/*1:0*/ MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_67;
        CData/*1:0*/ MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_69;
        CData/*1:0*/ MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_70;
        CData/*1:0*/ MMUtest__DOT__mmu__DOT__ptw__DOT__deq_ptr;
        CData/*1:0*/ MMUtest__DOT__mmu__DOT__ptw__DOT__memreq_arb__DOT__lastGrant;
        CData/*1:0*/ MMUtest__DOT__mmu__DOT__ptw__DOT__llreq_arb__DOT__lastGrant;
        CData/*0:0*/ MMUtest__DOT__mmu__DOT__llptw__DOT__memreq_arb_io_out_valid;
        CData/*1:0*/ MMUtest__DOT__mmu__DOT__llptw__DOT__memreq_arb_io_chosen;
        CData/*0:0*/ MMUtest__DOT__mmu__DOT__llptw__DOT__ptwrsp_arb_io_out_valid;
    };
    struct {
        CData/*1:0*/ MMUtest__DOT__mmu__DOT__llptw__DOT__ptwrsp_arb_io_chosen;
        CData/*1:0*/ MMUtest__DOT__mmu__DOT__llptw__DOT__entries_0_source;
        CData/*1:0*/ MMUtest__DOT__mmu__DOT__llptw__DOT__entries_1_source;
        CData/*1:0*/ MMUtest__DOT__mmu__DOT__llptw__DOT__entries_2_source;
        CData/*1:0*/ MMUtest__DOT__mmu__DOT__llptw__DOT__entries_3_source;
        CData/*1:0*/ MMUtest__DOT__mmu__DOT__llptw__DOT__state_0;
        CData/*1:0*/ MMUtest__DOT__mmu__DOT__llptw__DOT__state_1;
        CData/*1:0*/ MMUtest__DOT__mmu__DOT__llptw__DOT__state_2;
        CData/*1:0*/ MMUtest__DOT__mmu__DOT__llptw__DOT__state_3;
        CData/*1:0*/ MMUtest__DOT__mmu__DOT__llptw__DOT__enq_ptr;
        CData/*0:0*/ MMUtest__DOT__mmu__DOT__llptw__DOT___T;
        CData/*1:0*/ MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_12;
        CData/*1:0*/ MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_13;
        CData/*1:0*/ MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_14;
        CData/*1:0*/ MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_15;
        CData/*1:0*/ MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_20;
        CData/*1:0*/ MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_21;
        CData/*1:0*/ MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_22;
        CData/*1:0*/ MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_23;
        CData/*1:0*/ MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_28;
        CData/*1:0*/ MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_29;
        CData/*1:0*/ MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_30;
        CData/*1:0*/ MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_31;
        CData/*1:0*/ MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_40;
        CData/*1:0*/ MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_42;
        CData/*1:0*/ MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_44;
        CData/*1:0*/ MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_46;
        CData/*1:0*/ MMUtest__DOT__mmu__DOT__llptw__DOT__deq_ptr;
        CData/*1:0*/ MMUtest__DOT__mmu__DOT__llptw__DOT__memreq_arb__DOT__lastGrant;
        CData/*1:0*/ MMUtest__DOT__mmu__DOT__llptw__DOT__ptwrsp_arb__DOT__lastGrant;
        CData/*0:0*/ MMUtest__DOT__mmu__DOT__page_cache__DOT__mem_req_fifo__DOT__maybe_full;
        CData/*0:0*/ MMUtest__DOT__mmu__DOT__page_cache__DOT__mem_req_fifo__DOT__do_enq;
        CData/*0:0*/ MMUtest__DOT__mmu__DOT__page_cache__DOT__mem_req_fifo__DOT__do_deq;
        CData/*0:0*/ MMUtest__DOT__mmu__DOT__page_cache__DOT__mem_rsp_fifo__DOT__maybe_full;
        CData/*0:0*/ MMUtest__DOT__mmu__DOT__page_cache__DOT__mem_rsp_fifo__DOT__do_enq;
        CData/*0:0*/ MMUtest__DOT__mmu__DOT__page_cache__DOT__mem_rsp_fifo__DOT__do_deq;
        CData/*0:0*/ MMUtest__DOT__mmu__DOT__ll_page_cache__DOT__mem_req_fifo__DOT__maybe_full;
        CData/*0:0*/ MMUtest__DOT__mmu__DOT__ll_page_cache__DOT__mem_req_fifo__DOT__do_enq;
        CData/*0:0*/ MMUtest__DOT__mmu__DOT__ll_page_cache__DOT__mem_req_fifo__DOT__do_deq;
        CData/*0:0*/ MMUtest__DOT__mmu__DOT__ll_page_cache__DOT__mem_rsp_fifo__DOT__maybe_full;
        CData/*0:0*/ MMUtest__DOT__mmu__DOT__ll_page_cache__DOT__mem_rsp_fifo__DOT__do_enq;
        CData/*0:0*/ MMUtest__DOT__mmu__DOT__ll_page_cache__DOT__mem_rsp_fifo__DOT__do_deq;
        CData/*1:0*/ MMUtest__DOT__mmu__DOT__mem_arb__DOT___io_memRspIn_ready_T_2;
        IData/*26:0*/ MMUtest__DOT__mmu__DOT__ptw__DOT__entries_0_vpn;
        IData/*26:0*/ MMUtest__DOT__mmu__DOT__ptw__DOT__entries_1_vpn;
        IData/*26:0*/ MMUtest__DOT__mmu__DOT__ptw__DOT__entries_2_vpn;
        IData/*26:0*/ MMUtest__DOT__mmu__DOT__ptw__DOT__entries_3_vpn;
        IData/*26:0*/ MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_28;
        IData/*26:0*/ MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_29;
        IData/*26:0*/ MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_30;
        IData/*26:0*/ MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_31;
        QData/*43:0*/ MMUtest__DOT__mmu__DOT__ptw__DOT__entries_0_ppn;
        QData/*43:0*/ MMUtest__DOT__mmu__DOT__ptw__DOT__entries_1_ppn;
        QData/*43:0*/ MMUtest__DOT__mmu__DOT__ptw__DOT__entries_2_ppn;
        QData/*43:0*/ MMUtest__DOT__mmu__DOT__ptw__DOT__entries_3_ppn;
        QData/*43:0*/ MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_32;
        QData/*43:0*/ MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_33;
        QData/*43:0*/ MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_34;
        QData/*43:0*/ MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_35;
        QData/*43:0*/ MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_62;
        QData/*43:0*/ MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_65;
        QData/*43:0*/ MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_68;
        QData/*43:0*/ MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_71;
        QData/*58:0*/ MMUtest__DOT__mmu__DOT__ptw__DOT___io_ll_req_bits_addr_T_3;
    };
    struct {
        QData/*63:0*/ MMUtest__DOT__mmu__DOT__llptw__DOT__entries_0_addr;
        QData/*63:0*/ MMUtest__DOT__mmu__DOT__llptw__DOT__entries_1_addr;
        QData/*63:0*/ MMUtest__DOT__mmu__DOT__llptw__DOT__entries_2_addr;
        QData/*63:0*/ MMUtest__DOT__mmu__DOT__llptw__DOT__entries_3_addr;
        QData/*63:0*/ MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_16;
        QData/*63:0*/ MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_17;
        QData/*63:0*/ MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_18;
        QData/*63:0*/ MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_19;
        QData/*63:0*/ MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_41;
        QData/*63:0*/ MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_43;
        QData/*63:0*/ MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_45;
        QData/*63:0*/ MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_47;
        QData/*63:0*/ MMUtest__DOT__mmu__DOT__tlb__DOT__l2tlb_req_fifo__DOT__ram_addr[1];
        QData/*63:0*/ MMUtest__DOT__mmu__DOT__tlb__DOT__l2tlb_req_fifo__DOT__ram_PTBR[1];
        CData/*1:0*/ MMUtest__DOT__mmu__DOT__tlb__DOT__l2tlb_req_fifo__DOT__ram_source[1];
        QData/*63:0*/ MMUtest__DOT__mmu__DOT__tlb__DOT__tlb_rsp_fifo__DOT__ram_addr[1];
        CData/*1:0*/ MMUtest__DOT__mmu__DOT__tlb__DOT__tlb_rsp_fifo__DOT__ram_source[1];
        QData/*63:0*/ MMUtest__DOT__mmu__DOT__l2tlb__DOT__ptw_req_fifo__DOT__ram_addr[1];
        QData/*63:0*/ MMUtest__DOT__mmu__DOT__l2tlb__DOT__ptw_req_fifo__DOT__ram_PTBR[1];
        CData/*1:0*/ MMUtest__DOT__mmu__DOT__l2tlb__DOT__ptw_req_fifo__DOT__ram_source[1];
        QData/*63:0*/ MMUtest__DOT__mmu__DOT__l2tlb__DOT__l2tlb_rsp_fifo__DOT__ram_addr[1];
        CData/*1:0*/ MMUtest__DOT__mmu__DOT__l2tlb__DOT__l2tlb_rsp_fifo__DOT__ram_source[1];
        QData/*63:0*/ MMUtest__DOT__mmu__DOT__page_cache__DOT__mem_req_fifo__DOT__ram_addr[1];
        CData/*1:0*/ MMUtest__DOT__mmu__DOT__page_cache__DOT__mem_req_fifo__DOT__ram_source[1];
        QData/*63:0*/ MMUtest__DOT__mmu__DOT__page_cache__DOT__mem_rsp_fifo__DOT__ram_addr[1];
        CData/*1:0*/ MMUtest__DOT__mmu__DOT__page_cache__DOT__mem_rsp_fifo__DOT__ram_source[1];
        QData/*63:0*/ MMUtest__DOT__mmu__DOT__ll_page_cache__DOT__mem_req_fifo__DOT__ram_addr[1];
        CData/*1:0*/ MMUtest__DOT__mmu__DOT__ll_page_cache__DOT__mem_req_fifo__DOT__ram_source[1];
        QData/*63:0*/ MMUtest__DOT__mmu__DOT__ll_page_cache__DOT__mem_rsp_fifo__DOT__ram_addr[1];
        CData/*1:0*/ MMUtest__DOT__mmu__DOT__ll_page_cache__DOT__mem_rsp_fifo__DOT__ram_source[1];
    };
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    CData/*0:0*/ __Vclklast__TOP__clock;
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    VMMUtest__Syms* __VlSymsp;  // Symbol table
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VMMUtest);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    VMMUtest(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~VMMUtest();
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step() {}
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(VMMUtest__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(VMMUtest__Syms* symsp, bool first);
  private:
    static QData _change_request(VMMUtest__Syms* __restrict vlSymsp);
    static QData _change_request_1(VMMUtest__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__4(VMMUtest__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(VMMUtest__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(VMMUtest__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(VMMUtest__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _initial__TOP__1(VMMUtest__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _sequent__TOP__2(VMMUtest__Syms* __restrict vlSymsp);
    static void _settle__TOP__3(VMMUtest__Syms* __restrict vlSymsp) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
