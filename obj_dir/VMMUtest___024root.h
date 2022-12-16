// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VMMUtest.h for the primary calling header

#ifndef VERILATED_VMMUTEST___024ROOT_H_
#define VERILATED_VMMUTEST___024ROOT_H_  // guard

#include "verilated.h"

class VMMUtest__Syms;

class VMMUtest___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
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
        CData/*0:0*/ MMUtest__DOT__mmu__DOT__tlb__DOT__l2tlb_req_fifo__DOT__ram_addr_MPORT_en;
        CData/*0:0*/ MMUtest__DOT__mmu__DOT__tlb__DOT__l2tlb_req_fifo__DOT__maybe_full;
        CData/*0:0*/ MMUtest__DOT__mmu__DOT__tlb__DOT__tlb_rsp_fifo__DOT__ram_addr_MPORT_en;
        CData/*0:0*/ MMUtest__DOT__mmu__DOT__tlb__DOT__tlb_rsp_fifo__DOT__maybe_full;
        CData/*0:0*/ MMUtest__DOT__mmu__DOT__tlb__DOT__tlb_rsp_fifo__DOT__do_deq;
        CData/*0:0*/ MMUtest__DOT__mmu__DOT__l2tlb__DOT__ptw_req_fifo__DOT__ram_addr_MPORT_en;
        CData/*0:0*/ MMUtest__DOT__mmu__DOT__l2tlb__DOT__ptw_req_fifo__DOT__maybe_full;
        CData/*0:0*/ MMUtest__DOT__mmu__DOT__l2tlb__DOT__ptw_req_fifo__DOT__do_deq;
        CData/*0:0*/ MMUtest__DOT__mmu__DOT__l2tlb__DOT__l2tlb_rsp_fifo__DOT__ram_addr_MPORT_en;
        CData/*0:0*/ MMUtest__DOT__mmu__DOT__l2tlb__DOT__l2tlb_rsp_fifo__DOT__maybe_full;
        CData/*1:0*/ MMUtest__DOT__mmu__DOT__ptw__DOT__memreq_arb_io_chosen;
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
        CData/*1:0*/ MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_36;
        CData/*1:0*/ MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_37;
        CData/*1:0*/ MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_38;
        CData/*1:0*/ MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_39;
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
        CData/*0:0*/ MMUtest__DOT__mmu__DOT__ptw__DOT__llreq_arb__DOT___ctrl_validMask_grantMask_lastGrant_T;
        CData/*1:0*/ MMUtest__DOT__mmu__DOT__ptw__DOT__llreq_arb__DOT__lastGrant;
        CData/*1:0*/ MMUtest__DOT__mmu__DOT__llptw__DOT__memreq_arb_io_chosen;
        CData/*1:0*/ MMUtest__DOT__mmu__DOT__llptw__DOT__ptwrsp_arb_io_chosen;
        CData/*1:0*/ MMUtest__DOT__mmu__DOT__llptw__DOT__entries_0_source;
        CData/*1:0*/ MMUtest__DOT__mmu__DOT__llptw__DOT__entries_1_source;
    };
    struct {
        CData/*1:0*/ MMUtest__DOT__mmu__DOT__llptw__DOT__entries_2_source;
        CData/*1:0*/ MMUtest__DOT__mmu__DOT__llptw__DOT__entries_3_source;
        CData/*1:0*/ MMUtest__DOT__mmu__DOT__llptw__DOT__state_0;
        CData/*1:0*/ MMUtest__DOT__mmu__DOT__llptw__DOT__state_1;
        CData/*1:0*/ MMUtest__DOT__mmu__DOT__llptw__DOT__state_2;
        CData/*1:0*/ MMUtest__DOT__mmu__DOT__llptw__DOT__state_3;
        CData/*1:0*/ MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_20;
        CData/*1:0*/ MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_21;
        CData/*1:0*/ MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_22;
        CData/*1:0*/ MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_23;
        CData/*1:0*/ MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_40;
        CData/*1:0*/ MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_42;
        CData/*1:0*/ MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_44;
        CData/*1:0*/ MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_46;
        CData/*1:0*/ MMUtest__DOT__mmu__DOT__llptw__DOT__deq_ptr;
        CData/*1:0*/ MMUtest__DOT__mmu__DOT__llptw__DOT__memreq_arb__DOT__lastGrant;
        CData/*1:0*/ MMUtest__DOT__mmu__DOT__llptw__DOT__ptwrsp_arb__DOT__lastGrant;
        CData/*0:0*/ MMUtest__DOT__mmu__DOT__page_cache__DOT__mem_req_fifo__DOT__ram_addr_MPORT_en;
        CData/*0:0*/ MMUtest__DOT__mmu__DOT__page_cache__DOT__mem_req_fifo__DOT__maybe_full;
        CData/*0:0*/ MMUtest__DOT__mmu__DOT__page_cache__DOT__mem_req_fifo__DOT__do_deq;
        CData/*0:0*/ MMUtest__DOT__mmu__DOT__page_cache__DOT__mem_rsp_fifo__DOT__ram_addr_MPORT_en;
        CData/*0:0*/ MMUtest__DOT__mmu__DOT__page_cache__DOT__mem_rsp_fifo__DOT__maybe_full;
        CData/*0:0*/ MMUtest__DOT__mmu__DOT__page_cache__DOT__mem_rsp_fifo__DOT__do_deq;
        CData/*0:0*/ MMUtest__DOT__mmu__DOT__ll_page_cache__DOT__mem_req_fifo__DOT__ram_addr_MPORT_en;
        CData/*0:0*/ MMUtest__DOT__mmu__DOT__ll_page_cache__DOT__mem_req_fifo__DOT__maybe_full;
        CData/*0:0*/ MMUtest__DOT__mmu__DOT__ll_page_cache__DOT__mem_req_fifo__DOT__do_deq;
        CData/*0:0*/ MMUtest__DOT__mmu__DOT__ll_page_cache__DOT__mem_rsp_fifo__DOT__ram_addr_MPORT_en;
        CData/*0:0*/ MMUtest__DOT__mmu__DOT__ll_page_cache__DOT__mem_rsp_fifo__DOT__maybe_full;
        CData/*0:0*/ MMUtest__DOT__mmu__DOT__ll_page_cache__DOT__mem_rsp_fifo__DOT__do_deq;
        CData/*0:0*/ __Vtrigrprev__TOP__clock;
        CData/*0:0*/ __VactContinue;
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
        IData/*26:0*/ MMUtest__DOT__mmu__DOT__ptw__DOT__entries_0_vpn;
        IData/*26:0*/ MMUtest__DOT__mmu__DOT__ptw__DOT__entries_1_vpn;
        IData/*26:0*/ MMUtest__DOT__mmu__DOT__ptw__DOT__entries_2_vpn;
        IData/*26:0*/ MMUtest__DOT__mmu__DOT__ptw__DOT__entries_3_vpn;
        IData/*26:0*/ MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_28;
        IData/*26:0*/ MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_29;
        IData/*26:0*/ MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_30;
        IData/*26:0*/ MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_31;
        IData/*31:0*/ __VstlIterCount;
        IData/*31:0*/ __VicoIterCount;
        IData/*31:0*/ __VactIterCount;
        VL_OUT64(io_out_a_bits_data,63,0);
        VL_IN64(io_out_d_bits_data,63,0);
        QData/*43:0*/ MMUtest__DOT__mmu__DOT__ptw__DOT__entries_0_ppn;
        QData/*43:0*/ MMUtest__DOT__mmu__DOT__ptw__DOT__entries_1_ppn;
        QData/*43:0*/ MMUtest__DOT__mmu__DOT__ptw__DOT__entries_2_ppn;
        QData/*43:0*/ MMUtest__DOT__mmu__DOT__ptw__DOT__entries_3_ppn;
        QData/*43:0*/ MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_62;
        QData/*43:0*/ MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_65;
        QData/*43:0*/ MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_68;
        QData/*43:0*/ MMUtest__DOT__mmu__DOT__ptw__DOT___GEN_71;
        QData/*63:0*/ MMUtest__DOT__mmu__DOT__llptw__DOT__entries_0_addr;
        QData/*63:0*/ MMUtest__DOT__mmu__DOT__llptw__DOT__entries_1_addr;
    };
    struct {
        QData/*63:0*/ MMUtest__DOT__mmu__DOT__llptw__DOT__entries_2_addr;
        QData/*63:0*/ MMUtest__DOT__mmu__DOT__llptw__DOT__entries_3_addr;
        QData/*63:0*/ MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_41;
        QData/*63:0*/ MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_43;
        QData/*63:0*/ MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_45;
        QData/*63:0*/ MMUtest__DOT__mmu__DOT__llptw__DOT___GEN_47;
        VlUnpacked<QData/*63:0*/, 1> MMUtest__DOT__mmu__DOT__tlb__DOT__l2tlb_req_fifo__DOT__ram_addr;
        VlUnpacked<QData/*63:0*/, 1> MMUtest__DOT__mmu__DOT__tlb__DOT__l2tlb_req_fifo__DOT__ram_PTBR;
        VlUnpacked<CData/*1:0*/, 1> MMUtest__DOT__mmu__DOT__tlb__DOT__l2tlb_req_fifo__DOT__ram_source;
        VlUnpacked<QData/*63:0*/, 1> MMUtest__DOT__mmu__DOT__tlb__DOT__tlb_rsp_fifo__DOT__ram_addr;
        VlUnpacked<CData/*1:0*/, 1> MMUtest__DOT__mmu__DOT__tlb__DOT__tlb_rsp_fifo__DOT__ram_source;
        VlUnpacked<QData/*63:0*/, 1> MMUtest__DOT__mmu__DOT__l2tlb__DOT__ptw_req_fifo__DOT__ram_addr;
        VlUnpacked<QData/*63:0*/, 1> MMUtest__DOT__mmu__DOT__l2tlb__DOT__ptw_req_fifo__DOT__ram_PTBR;
        VlUnpacked<CData/*1:0*/, 1> MMUtest__DOT__mmu__DOT__l2tlb__DOT__ptw_req_fifo__DOT__ram_source;
        VlUnpacked<QData/*63:0*/, 1> MMUtest__DOT__mmu__DOT__l2tlb__DOT__l2tlb_rsp_fifo__DOT__ram_addr;
        VlUnpacked<CData/*1:0*/, 1> MMUtest__DOT__mmu__DOT__l2tlb__DOT__l2tlb_rsp_fifo__DOT__ram_source;
        VlUnpacked<QData/*63:0*/, 1> MMUtest__DOT__mmu__DOT__page_cache__DOT__mem_req_fifo__DOT__ram_addr;
        VlUnpacked<CData/*1:0*/, 1> MMUtest__DOT__mmu__DOT__page_cache__DOT__mem_req_fifo__DOT__ram_source;
        VlUnpacked<QData/*63:0*/, 1> MMUtest__DOT__mmu__DOT__page_cache__DOT__mem_rsp_fifo__DOT__ram_addr;
        VlUnpacked<CData/*1:0*/, 1> MMUtest__DOT__mmu__DOT__page_cache__DOT__mem_rsp_fifo__DOT__ram_source;
        VlUnpacked<QData/*63:0*/, 1> MMUtest__DOT__mmu__DOT__ll_page_cache__DOT__mem_req_fifo__DOT__ram_addr;
        VlUnpacked<CData/*1:0*/, 1> MMUtest__DOT__mmu__DOT__ll_page_cache__DOT__mem_req_fifo__DOT__ram_source;
        VlUnpacked<QData/*63:0*/, 1> MMUtest__DOT__mmu__DOT__ll_page_cache__DOT__mem_rsp_fifo__DOT__ram_addr;
        VlUnpacked<CData/*1:0*/, 1> MMUtest__DOT__mmu__DOT__ll_page_cache__DOT__mem_rsp_fifo__DOT__ram_source;
    };
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    VMMUtest__Syms* const vlSymsp;

    // CONSTRUCTORS
    VMMUtest___024root(VMMUtest__Syms* symsp, const char* name);
    ~VMMUtest___024root();
    VL_UNCOPYABLE(VMMUtest___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
