// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VVentus.h for the primary calling header

#ifndef VERILATED_VVENTUS_QUEUE_19_H_
#define VERILATED_VVENTUS_QUEUE_19_H_  // guard

#include "verilated.h"

class VVentus__Syms;

class VVentus_Queue_19 final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(__PVT__clock,0,0);
        VL_IN8(__PVT__reset,0,0);
        VL_OUT8(__PVT__io_enq_ready,0,0);
        VL_IN8(__PVT__io_enq_valid,0,0);
        VL_IN8(__PVT__io_enq_bits_wid,1,0);
        VL_IN8(__PVT__io_enq_bits_fp,0,0);
        VL_IN8(__PVT__io_enq_bits_branch,1,0);
        VL_IN8(__PVT__io_enq_bits_simt_stack,0,0);
        VL_IN8(__PVT__io_enq_bits_simt_stack_op,0,0);
        VL_IN8(__PVT__io_enq_bits_barrier,0,0);
        VL_IN8(__PVT__io_enq_bits_csr,1,0);
        VL_IN8(__PVT__io_enq_bits_reverse,0,0);
        VL_IN8(__PVT__io_enq_bits_sel_alu2,1,0);
        VL_IN8(__PVT__io_enq_bits_sel_alu1,1,0);
        VL_IN8(__PVT__io_enq_bits_isvec,0,0);
        VL_IN8(__PVT__io_enq_bits_sel_alu3,1,0);
        VL_IN8(__PVT__io_enq_bits_mask,0,0);
        VL_IN8(__PVT__io_enq_bits_sel_imm,2,0);
        VL_IN8(__PVT__io_enq_bits_mem_unsigned,0,0);
        VL_IN8(__PVT__io_enq_bits_alu_fn,5,0);
        VL_IN8(__PVT__io_enq_bits_mem,0,0);
        VL_IN8(__PVT__io_enq_bits_mul,0,0);
        VL_IN8(__PVT__io_enq_bits_mem_cmd,1,0);
        VL_IN8(__PVT__io_enq_bits_mop,1,0);
        VL_IN8(__PVT__io_enq_bits_reg_idx1,4,0);
        VL_IN8(__PVT__io_enq_bits_reg_idx2,4,0);
        VL_IN8(__PVT__io_enq_bits_reg_idx3,4,0);
        VL_IN8(__PVT__io_enq_bits_reg_idxw,4,0);
        VL_IN8(__PVT__io_enq_bits_wfd,0,0);
        VL_IN8(__PVT__io_enq_bits_fence,0,0);
        VL_IN8(__PVT__io_enq_bits_sfu,0,0);
        VL_IN8(__PVT__io_enq_bits_readmask,0,0);
        VL_IN8(__PVT__io_enq_bits_writemask,0,0);
        VL_IN8(__PVT__io_enq_bits_wxd,0,0);
        VL_IN8(__PVT__io_deq_ready,0,0);
        VL_OUT8(__PVT__io_deq_valid,0,0);
        VL_OUT8(__PVT__io_deq_bits_wid,1,0);
        VL_OUT8(__PVT__io_deq_bits_fp,0,0);
        VL_OUT8(__PVT__io_deq_bits_branch,1,0);
        VL_OUT8(__PVT__io_deq_bits_simt_stack,0,0);
        VL_OUT8(__PVT__io_deq_bits_simt_stack_op,0,0);
        VL_OUT8(__PVT__io_deq_bits_barrier,0,0);
        VL_OUT8(__PVT__io_deq_bits_csr,1,0);
        VL_OUT8(__PVT__io_deq_bits_reverse,0,0);
        VL_OUT8(__PVT__io_deq_bits_sel_alu2,1,0);
        VL_OUT8(__PVT__io_deq_bits_sel_alu1,1,0);
        VL_OUT8(__PVT__io_deq_bits_isvec,0,0);
        VL_OUT8(__PVT__io_deq_bits_sel_alu3,1,0);
        VL_OUT8(__PVT__io_deq_bits_mask,0,0);
        VL_OUT8(__PVT__io_deq_bits_sel_imm,2,0);
        VL_OUT8(__PVT__io_deq_bits_mem_unsigned,0,0);
        VL_OUT8(__PVT__io_deq_bits_alu_fn,5,0);
        VL_OUT8(__PVT__io_deq_bits_mem,0,0);
        VL_OUT8(__PVT__io_deq_bits_mul,0,0);
        VL_OUT8(__PVT__io_deq_bits_mem_cmd,1,0);
        VL_OUT8(__PVT__io_deq_bits_mop,1,0);
        VL_OUT8(__PVT__io_deq_bits_reg_idx1,4,0);
        VL_OUT8(__PVT__io_deq_bits_reg_idx2,4,0);
        VL_OUT8(__PVT__io_deq_bits_reg_idx3,4,0);
        VL_OUT8(__PVT__io_deq_bits_reg_idxw,4,0);
        VL_OUT8(__PVT__io_deq_bits_wfd,0,0);
        VL_OUT8(__PVT__io_deq_bits_fence,0,0);
        VL_OUT8(__PVT__io_deq_bits_sfu,0,0);
        VL_OUT8(__PVT__io_deq_bits_readmask,0,0);
    };
    struct {
        VL_OUT8(__PVT__io_deq_bits_writemask,0,0);
        VL_OUT8(__PVT__io_deq_bits_wxd,0,0);
        VL_IN8(__PVT__io_flush,0,0);
        CData/*0:0*/ __PVT__ram_inst_MPORT_en;
        CData/*0:0*/ __PVT__enq_ptr_value;
        CData/*0:0*/ __PVT__deq_ptr_value;
        CData/*0:0*/ __PVT__maybe_full;
        CData/*0:0*/ __PVT__ptr_match;
        CData/*0:0*/ __PVT__empty;
        CData/*0:0*/ __PVT__full;
        CData/*0:0*/ __PVT__do_deq;
        VL_IN(__PVT__io_enq_bits_inst,31,0);
        VL_IN(__PVT__io_enq_bits_pc,31,0);
        VL_IN(__PVT__io_enq_bits_spike_info_pc,31,0);
        VL_IN(__PVT__io_enq_bits_spike_info_inst,31,0);
        VL_OUT(__PVT__io_deq_bits_inst,31,0);
        VL_OUT(__PVT__io_deq_bits_pc,31,0);
        VL_OUT(__PVT__io_deq_bits_spike_info_pc,31,0);
        VL_OUT(__PVT__io_deq_bits_spike_info_inst,31,0);
        VlUnpacked<IData/*31:0*/, 2> __PVT__ram_inst;
        VlUnpacked<CData/*1:0*/, 2> __PVT__ram_wid;
        VlUnpacked<CData/*0:0*/, 2> __PVT__ram_fp;
        VlUnpacked<CData/*1:0*/, 2> __PVT__ram_branch;
        VlUnpacked<CData/*0:0*/, 2> __PVT__ram_simt_stack;
        VlUnpacked<CData/*0:0*/, 2> __PVT__ram_simt_stack_op;
        VlUnpacked<CData/*0:0*/, 2> __PVT__ram_barrier;
        VlUnpacked<CData/*1:0*/, 2> __PVT__ram_csr;
        VlUnpacked<CData/*0:0*/, 2> __PVT__ram_reverse;
        VlUnpacked<CData/*1:0*/, 2> __PVT__ram_sel_alu2;
        VlUnpacked<CData/*1:0*/, 2> __PVT__ram_sel_alu1;
        VlUnpacked<CData/*0:0*/, 2> __PVT__ram_isvec;
        VlUnpacked<CData/*1:0*/, 2> __PVT__ram_sel_alu3;
        VlUnpacked<CData/*0:0*/, 2> __PVT__ram_mask;
        VlUnpacked<CData/*2:0*/, 2> __PVT__ram_sel_imm;
        VlUnpacked<CData/*0:0*/, 2> __PVT__ram_mem_unsigned;
        VlUnpacked<CData/*5:0*/, 2> __PVT__ram_alu_fn;
        VlUnpacked<CData/*0:0*/, 2> __PVT__ram_mem;
        VlUnpacked<CData/*0:0*/, 2> __PVT__ram_mul;
        VlUnpacked<CData/*1:0*/, 2> __PVT__ram_mem_cmd;
        VlUnpacked<CData/*1:0*/, 2> __PVT__ram_mop;
        VlUnpacked<CData/*4:0*/, 2> __PVT__ram_reg_idx1;
        VlUnpacked<CData/*4:0*/, 2> __PVT__ram_reg_idx2;
        VlUnpacked<CData/*4:0*/, 2> __PVT__ram_reg_idx3;
        VlUnpacked<CData/*4:0*/, 2> __PVT__ram_reg_idxw;
        VlUnpacked<CData/*0:0*/, 2> __PVT__ram_wfd;
        VlUnpacked<CData/*0:0*/, 2> __PVT__ram_fence;
        VlUnpacked<CData/*0:0*/, 2> __PVT__ram_sfu;
        VlUnpacked<CData/*0:0*/, 2> __PVT__ram_readmask;
        VlUnpacked<CData/*0:0*/, 2> __PVT__ram_writemask;
        VlUnpacked<CData/*0:0*/, 2> __PVT__ram_wxd;
        VlUnpacked<IData/*31:0*/, 2> __PVT__ram_pc;
        VlUnpacked<IData/*31:0*/, 2> __PVT__ram_spike_info_pc;
        VlUnpacked<IData/*31:0*/, 2> __PVT__ram_spike_info_inst;
    };

    // INTERNAL VARIABLES
    VVentus__Syms* const vlSymsp;

    // CONSTRUCTORS
    VVentus_Queue_19(VVentus__Syms* symsp, const char* name);
    ~VVentus_Queue_19();
    VL_UNCOPYABLE(VVentus_Queue_19);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
