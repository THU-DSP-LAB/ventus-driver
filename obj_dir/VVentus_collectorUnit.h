// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VVentus.h for the primary calling header

#ifndef VERILATED_VVENTUS_COLLECTORUNIT_H_
#define VERILATED_VVENTUS_COLLECTORUNIT_H_  // guard

#include "verilated.h"

class VVentus__Syms;

class VVentus_collectorUnit final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(__PVT__clock,0,0);
        VL_IN8(__PVT__reset,0,0);
        VL_OUT8(__PVT__io_control_ready,0,0);
        VL_IN8(__PVT__io_control_valid,0,0);
        VL_IN8(__PVT__io_control_bits_wid,1,0);
        VL_IN8(__PVT__io_control_bits_fp,0,0);
        VL_IN8(__PVT__io_control_bits_branch,1,0);
        VL_IN8(__PVT__io_control_bits_simt_stack,0,0);
        VL_IN8(__PVT__io_control_bits_simt_stack_op,0,0);
        VL_IN8(__PVT__io_control_bits_barrier,0,0);
        VL_IN8(__PVT__io_control_bits_csr,1,0);
        VL_IN8(__PVT__io_control_bits_reverse,0,0);
        VL_IN8(__PVT__io_control_bits_sel_alu2,1,0);
        VL_IN8(__PVT__io_control_bits_sel_alu1,1,0);
        VL_IN8(__PVT__io_control_bits_isvec,0,0);
        VL_IN8(__PVT__io_control_bits_sel_alu3,1,0);
        VL_IN8(__PVT__io_control_bits_mask,0,0);
        VL_IN8(__PVT__io_control_bits_sel_imm,2,0);
        VL_IN8(__PVT__io_control_bits_mem_unsigned,0,0);
        VL_IN8(__PVT__io_control_bits_alu_fn,5,0);
        VL_IN8(__PVT__io_control_bits_mem,0,0);
        VL_IN8(__PVT__io_control_bits_mul,0,0);
        VL_IN8(__PVT__io_control_bits_mem_cmd,1,0);
        VL_IN8(__PVT__io_control_bits_mop,1,0);
        VL_IN8(__PVT__io_control_bits_reg_idx1,4,0);
        VL_IN8(__PVT__io_control_bits_reg_idx2,4,0);
        VL_IN8(__PVT__io_control_bits_reg_idx3,4,0);
        VL_IN8(__PVT__io_control_bits_reg_idxw,4,0);
        VL_IN8(__PVT__io_control_bits_wfd,0,0);
        VL_IN8(__PVT__io_control_bits_sfu,0,0);
        VL_IN8(__PVT__io_control_bits_readmask,0,0);
        VL_IN8(__PVT__io_control_bits_writemask,0,0);
        VL_IN8(__PVT__io_control_bits_wxd,0,0);
        VL_OUT8(__PVT__io_bankIn_0_ready,0,0);
        VL_IN8(__PVT__io_bankIn_0_valid,0,0);
        VL_IN8(__PVT__io_bankIn_0_bits_regOrder,1,0);
        VL_OUT8(__PVT__io_bankIn_1_ready,0,0);
        VL_IN8(__PVT__io_bankIn_1_valid,0,0);
        VL_IN8(__PVT__io_bankIn_1_bits_regOrder,1,0);
        VL_OUT8(__PVT__io_bankIn_2_ready,0,0);
        VL_IN8(__PVT__io_bankIn_2_valid,0,0);
        VL_IN8(__PVT__io_bankIn_2_bits_regOrder,1,0);
        VL_OUT8(__PVT__io_bankIn_3_ready,0,0);
        VL_IN8(__PVT__io_bankIn_3_valid,0,0);
        VL_IN8(__PVT__io_bankIn_3_bits_regOrder,1,0);
        VL_IN8(__PVT__io_issue_ready,0,0);
        VL_OUT8(__PVT__io_issue_valid,0,0);
        VL_OUT8(__PVT__io_issue_bits_mask_0,0,0);
        VL_OUT8(__PVT__io_issue_bits_mask_1,0,0);
        VL_OUT8(__PVT__io_issue_bits_mask_2,0,0);
        VL_OUT8(__PVT__io_issue_bits_mask_3,0,0);
        VL_OUT8(__PVT__io_issue_bits_control_wid,1,0);
        VL_OUT8(__PVT__io_issue_bits_control_fp,0,0);
        VL_OUT8(__PVT__io_issue_bits_control_branch,1,0);
        VL_OUT8(__PVT__io_issue_bits_control_simt_stack,0,0);
        VL_OUT8(__PVT__io_issue_bits_control_simt_stack_op,0,0);
        VL_OUT8(__PVT__io_issue_bits_control_barrier,0,0);
        VL_OUT8(__PVT__io_issue_bits_control_csr,1,0);
        VL_OUT8(__PVT__io_issue_bits_control_reverse,0,0);
        VL_OUT8(__PVT__io_issue_bits_control_isvec,0,0);
        VL_OUT8(__PVT__io_issue_bits_control_mem_unsigned,0,0);
        VL_OUT8(__PVT__io_issue_bits_control_alu_fn,5,0);
        VL_OUT8(__PVT__io_issue_bits_control_mem,0,0);
        VL_OUT8(__PVT__io_issue_bits_control_mul,0,0);
    };
    struct {
        VL_OUT8(__PVT__io_issue_bits_control_mem_cmd,1,0);
        VL_OUT8(__PVT__io_issue_bits_control_mop,1,0);
        VL_OUT8(__PVT__io_issue_bits_control_reg_idx3,4,0);
        VL_OUT8(__PVT__io_issue_bits_control_reg_idxw,4,0);
        VL_OUT8(__PVT__io_issue_bits_control_wfd,0,0);
        VL_OUT8(__PVT__io_issue_bits_control_sfu,0,0);
        VL_OUT8(__PVT__io_issue_bits_control_readmask,0,0);
        VL_OUT8(__PVT__io_issue_bits_control_writemask,0,0);
        VL_OUT8(__PVT__io_issue_bits_control_wxd,0,0);
        VL_OUT8(__PVT__io_outArbiterIO_0_valid,0,0);
        VL_OUT8(__PVT__io_outArbiterIO_0_bits_rsAddr,4,0);
        VL_OUT8(__PVT__io_outArbiterIO_0_bits_bankID,1,0);
        VL_OUT8(__PVT__io_outArbiterIO_0_bits_rsType,1,0);
        VL_OUT8(__PVT__io_outArbiterIO_1_valid,0,0);
        VL_OUT8(__PVT__io_outArbiterIO_1_bits_rsAddr,4,0);
        VL_OUT8(__PVT__io_outArbiterIO_1_bits_bankID,1,0);
        VL_OUT8(__PVT__io_outArbiterIO_1_bits_rsType,1,0);
        VL_OUT8(__PVT__io_outArbiterIO_2_valid,0,0);
        VL_OUT8(__PVT__io_outArbiterIO_2_bits_rsAddr,4,0);
        VL_OUT8(__PVT__io_outArbiterIO_2_bits_bankID,1,0);
        VL_OUT8(__PVT__io_outArbiterIO_2_bits_rsType,1,0);
        VL_OUT8(__PVT__io_outArbiterIO_3_valid,0,0);
        VL_OUT8(__PVT__io_outArbiterIO_3_bits_rsAddr,4,0);
        VL_OUT8(__PVT__io_outArbiterIO_3_bits_bankID,1,0);
        CData/*2:0*/ __PVT__imm_io_sel;
        CData/*1:0*/ __PVT__controlReg_wid;
        CData/*0:0*/ __PVT__controlReg_fp;
        CData/*1:0*/ __PVT__controlReg_branch;
        CData/*0:0*/ __PVT__controlReg_simt_stack;
        CData/*0:0*/ __PVT__controlReg_simt_stack_op;
        CData/*0:0*/ __PVT__controlReg_barrier;
        CData/*1:0*/ __PVT__controlReg_csr;
        CData/*0:0*/ __PVT__controlReg_reverse;
        CData/*0:0*/ __PVT__controlReg_isvec;
        CData/*1:0*/ __PVT__controlReg_sel_alu3;
        CData/*2:0*/ __PVT__controlReg_sel_imm;
        CData/*0:0*/ __PVT__controlReg_mem_unsigned;
        CData/*5:0*/ __PVT__controlReg_alu_fn;
        CData/*0:0*/ __PVT__controlReg_mem;
        CData/*0:0*/ __PVT__controlReg_mul;
        CData/*1:0*/ __PVT__controlReg_mem_cmd;
        CData/*1:0*/ __PVT__controlReg_mop;
        CData/*4:0*/ __PVT__controlReg_reg_idx3;
        CData/*4:0*/ __PVT__controlReg_reg_idxw;
        CData/*0:0*/ __PVT__controlReg_wfd;
        CData/*0:0*/ __PVT__controlReg_sfu;
        CData/*0:0*/ __PVT__controlReg_readmask;
        CData/*0:0*/ __PVT__controlReg_writemask;
        CData/*0:0*/ __PVT__controlReg_wxd;
        CData/*1:0*/ __PVT__rsType_0;
        CData/*1:0*/ __PVT__rsType_1;
        CData/*1:0*/ __PVT__rsType_2;
        CData/*0:0*/ __PVT__ready_0;
        CData/*0:0*/ __PVT__ready_1;
        CData/*0:0*/ __PVT__ready_2;
        CData/*0:0*/ __PVT__ready_3;
        CData/*0:0*/ __PVT__valid_0;
        CData/*0:0*/ __PVT__valid_1;
        CData/*0:0*/ __PVT__valid_2;
        CData/*0:0*/ __PVT__valid_3;
        CData/*4:0*/ __PVT__regIdx_0;
        CData/*4:0*/ __PVT__regIdx_1;
        CData/*4:0*/ __PVT__regIdx_2;
        CData/*0:0*/ __PVT__mask_0;
    };
    struct {
        CData/*0:0*/ __PVT__mask_1;
        CData/*0:0*/ __PVT__mask_2;
        CData/*0:0*/ __PVT__mask_3;
        CData/*1:0*/ __PVT__state;
        CData/*0:0*/ __PVT___io_outArbiterIO_0_bits_bankID_T;
        CData/*0:0*/ __PVT___io_outArbiterIO_0_bits_bankID_T_1;
        CData/*4:0*/ __PVT__regIdxWire_0;
        CData/*1:0*/ __PVT___io_outArbiterIO_0_bits_rsAddr_T_69;
        CData/*5:0*/ __PVT___io_outArbiterIO_0_bits_rsAddr_T_72;
        CData/*4:0*/ __PVT__regIdxWire_1;
        CData/*5:0*/ __PVT___io_outArbiterIO_1_bits_rsAddr_T_72;
        CData/*4:0*/ __PVT___regIdxWire_2_T_8;
        CData/*4:0*/ __PVT__regIdxWire_2;
        CData/*5:0*/ __PVT___io_outArbiterIO_2_bits_rsAddr_T_72;
        CData/*1:0*/ __PVT___rsTypeWire_2_T_8;
        CData/*0:0*/ __PVT___io_bankIn_0_ready_T;
        CData/*0:0*/ __PVT___GEN_17;
        CData/*0:0*/ __PVT___GEN_29;
        CData/*0:0*/ __PVT___T_20;
        CData/*3:0*/ __PVT___io_control_ready_T_1;
        CData/*0:0*/ __PVT___T_11;
        CData/*0:0*/ __PVT___GEN_36;
        CData/*0:0*/ __PVT___GEN_85;
        CData/*0:0*/ __PVT___GEN_86;
        CData/*0:0*/ __PVT___GEN_87;
        CData/*0:0*/ __PVT___GEN_88;
        CData/*0:0*/ __PVT___T_23;
        CData/*0:0*/ __PVT___T_51;
        CData/*0:0*/ __PVT___GEN_245;
        CData/*0:0*/ __PVT___T_79;
        CData/*0:0*/ __PVT___GEN_295;
        CData/*0:0*/ __PVT___GEN_320;
        CData/*0:0*/ __PVT___GEN_325;
        CData/*0:0*/ __PVT___GEN_326;
        CData/*0:0*/ __PVT___GEN_327;
        CData/*0:0*/ __PVT___GEN_328;
        CData/*0:0*/ __PVT___GEN_329;
        CData/*0:0*/ __PVT___GEN_330;
        CData/*0:0*/ __PVT___T_107;
        VL_IN(__PVT__io_control_bits_inst,31,0);
        VL_IN(__PVT__io_control_bits_pc,31,0);
        VL_IN(__PVT__io_control_bits_spike_info_pc,31,0);
        VL_IN(__PVT__io_control_bits_spike_info_inst,31,0);
        VL_IN(__PVT__io_bankIn_0_bits_data_0,31,0);
        VL_IN(__PVT__io_bankIn_0_bits_data_1,31,0);
        VL_IN(__PVT__io_bankIn_0_bits_data_2,31,0);
        VL_IN(__PVT__io_bankIn_0_bits_data_3,31,0);
        VL_IN(__PVT__io_bankIn_0_bits_v0_0,31,0);
        VL_IN(__PVT__io_bankIn_1_bits_data_0,31,0);
        VL_IN(__PVT__io_bankIn_1_bits_data_1,31,0);
        VL_IN(__PVT__io_bankIn_1_bits_data_2,31,0);
        VL_IN(__PVT__io_bankIn_1_bits_data_3,31,0);
        VL_IN(__PVT__io_bankIn_1_bits_v0_0,31,0);
        VL_IN(__PVT__io_bankIn_2_bits_data_0,31,0);
        VL_IN(__PVT__io_bankIn_2_bits_data_1,31,0);
        VL_IN(__PVT__io_bankIn_2_bits_data_2,31,0);
        VL_IN(__PVT__io_bankIn_2_bits_data_3,31,0);
        VL_IN(__PVT__io_bankIn_2_bits_v0_0,31,0);
        VL_IN(__PVT__io_bankIn_3_bits_data_0,31,0);
        VL_IN(__PVT__io_bankIn_3_bits_data_1,31,0);
        VL_IN(__PVT__io_bankIn_3_bits_data_2,31,0);
        VL_IN(__PVT__io_bankIn_3_bits_data_3,31,0);
        VL_IN(__PVT__io_bankIn_3_bits_v0_0,31,0);
        VL_OUT(__PVT__io_issue_bits_alu_src1_0,31,0);
    };
    struct {
        VL_OUT(__PVT__io_issue_bits_alu_src1_1,31,0);
        VL_OUT(__PVT__io_issue_bits_alu_src1_2,31,0);
        VL_OUT(__PVT__io_issue_bits_alu_src1_3,31,0);
        VL_OUT(__PVT__io_issue_bits_alu_src2_0,31,0);
        VL_OUT(__PVT__io_issue_bits_alu_src2_1,31,0);
        VL_OUT(__PVT__io_issue_bits_alu_src2_2,31,0);
        VL_OUT(__PVT__io_issue_bits_alu_src2_3,31,0);
        VL_OUT(__PVT__io_issue_bits_alu_src3_0,31,0);
        VL_OUT(__PVT__io_issue_bits_alu_src3_1,31,0);
        VL_OUT(__PVT__io_issue_bits_alu_src3_2,31,0);
        VL_OUT(__PVT__io_issue_bits_alu_src3_3,31,0);
        VL_OUT(__PVT__io_issue_bits_control_inst,31,0);
        VL_OUT(__PVT__io_issue_bits_control_pc,31,0);
        VL_OUT(__PVT__io_issue_bits_control_spike_info_pc,31,0);
        VL_OUT(__PVT__io_issue_bits_control_spike_info_inst,31,0);
        IData/*31:0*/ __PVT__imm_io_inst;
        IData/*31:0*/ __PVT__imm_io_out;
        IData/*31:0*/ __PVT__controlReg_inst;
        IData/*31:0*/ __PVT__controlReg_pc;
        IData/*31:0*/ __PVT__controlReg_spike_info_pc;
        IData/*31:0*/ __PVT__controlReg_spike_info_inst;
        IData/*31:0*/ __PVT__rsReg_0_0;
        IData/*31:0*/ __PVT__rsReg_0_1;
        IData/*31:0*/ __PVT__rsReg_0_2;
        IData/*31:0*/ __PVT__rsReg_0_3;
        IData/*31:0*/ __PVT__rsReg_1_0;
        IData/*31:0*/ __PVT__rsReg_1_1;
        IData/*31:0*/ __PVT__rsReg_1_2;
        IData/*31:0*/ __PVT__rsReg_1_3;
        IData/*31:0*/ __PVT__rsReg_2_0;
        IData/*31:0*/ __PVT__rsReg_2_1;
        IData/*31:0*/ __PVT__rsReg_2_2;
        IData/*31:0*/ __PVT__rsReg_2_3;
        IData/*31:0*/ __PVT___GEN_6;
        IData/*31:0*/ __PVT___GEN_7;
        IData/*31:0*/ __PVT___GEN_8;
        IData/*31:0*/ __PVT___GEN_9;
        IData/*31:0*/ __PVT___GEN_18;
        IData/*31:0*/ __PVT___GEN_19;
        IData/*31:0*/ __PVT___GEN_20;
        IData/*31:0*/ __PVT___GEN_21;
        IData/*31:0*/ __PVT___rsReg_2_0_T_1;
        IData/*31:0*/ __PVT___GEN_311;
        IData/*31:0*/ __PVT___GEN_312;
        IData/*31:0*/ __PVT___GEN_313;
        IData/*31:0*/ __PVT___GEN_314;
        IData/*31:0*/ __PVT___GEN_316;
        IData/*31:0*/ __PVT___GEN_317;
        IData/*31:0*/ __PVT___GEN_318;
        IData/*31:0*/ __PVT___GEN_319;
        IData/*31:0*/ __PVT___GEN_321;
        IData/*31:0*/ __PVT___GEN_322;
        IData/*31:0*/ __PVT___GEN_323;
        IData/*31:0*/ __PVT___GEN_324;
        IData/*31:0*/ __PVT___T_112_0;
        IData/*31:0*/ __PVT___T_112_1;
        IData/*31:0*/ __PVT___T_112_2;
        IData/*31:0*/ __PVT___T_112_3;
        IData/*31:0*/ __PVT___T_117_0;
        IData/*31:0*/ __PVT___T_117_1;
        IData/*31:0*/ __PVT___T_117_2;
        IData/*31:0*/ __PVT___T_117_3;
        IData/*31:0*/ __PVT___GEN_336;
        IData/*31:0*/ __PVT___GEN_337;
    };
    struct {
        IData/*31:0*/ __PVT___GEN_338;
        IData/*31:0*/ __PVT___GEN_339;
    };

    // INTERNAL VARIABLES
    VVentus__Syms* const vlSymsp;

    // CONSTRUCTORS
    VVentus_collectorUnit(VVentus__Syms* symsp, const char* name);
    ~VVentus_collectorUnit();
    VL_UNCOPYABLE(VVentus_collectorUnit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
