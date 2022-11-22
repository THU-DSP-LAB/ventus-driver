// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VVentus.h for the primary calling header

#ifndef VERILATED_VVENTUS_L1TAGACCESS_H_
#define VERILATED_VVENTUS_L1TAGACCESS_H_  // guard

#include "verilated.h"

class VVentus__Syms;

class VVentus_L1TagAccess final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(__PVT__clock,0,0);
        VL_IN8(__PVT__reset,0,0);
        VL_IN8(__PVT__io_r_req_valid,0,0);
        VL_IN8(__PVT__io_r_req_bits_setIdx,4,0);
        VL_IN8(__PVT__io_coreReqReady,0,0);
        VL_IN8(__PVT__io_w_req_valid,0,0);
        VL_IN8(__PVT__io_w_req_bits_setIdx,4,0);
        VL_OUT8(__PVT__io_waymaskReplacement,1,0);
        VL_OUT8(__PVT__io_waymaskHit_st1,1,0);
        VL_OUT8(__PVT__io_hit_st1,0,0);
        CData/*1:0*/ __PVT__Replacement_io_validbits_of_set;
        CData/*0:0*/ __PVT__way_valid_0_0;
        CData/*0:0*/ __PVT__way_valid_0_1;
        CData/*0:0*/ __PVT__way_valid_1_0;
        CData/*0:0*/ __PVT__way_valid_1_1;
        CData/*0:0*/ __PVT__way_valid_2_0;
        CData/*0:0*/ __PVT__way_valid_2_1;
        CData/*0:0*/ __PVT__way_valid_3_0;
        CData/*0:0*/ __PVT__way_valid_3_1;
        CData/*0:0*/ __PVT__way_valid_4_0;
        CData/*0:0*/ __PVT__way_valid_4_1;
        CData/*0:0*/ __PVT__way_valid_5_0;
        CData/*0:0*/ __PVT__way_valid_5_1;
        CData/*0:0*/ __PVT__way_valid_6_0;
        CData/*0:0*/ __PVT__way_valid_6_1;
        CData/*0:0*/ __PVT__way_valid_7_0;
        CData/*0:0*/ __PVT__way_valid_7_1;
        CData/*0:0*/ __PVT__way_valid_8_0;
        CData/*0:0*/ __PVT__way_valid_8_1;
        CData/*0:0*/ __PVT__way_valid_9_0;
        CData/*0:0*/ __PVT__way_valid_9_1;
        CData/*0:0*/ __PVT__way_valid_10_0;
        CData/*0:0*/ __PVT__way_valid_10_1;
        CData/*0:0*/ __PVT__way_valid_11_0;
        CData/*0:0*/ __PVT__way_valid_11_1;
        CData/*0:0*/ __PVT__way_valid_12_0;
        CData/*0:0*/ __PVT__way_valid_12_1;
        CData/*0:0*/ __PVT__way_valid_13_0;
        CData/*0:0*/ __PVT__way_valid_13_1;
        CData/*0:0*/ __PVT__way_valid_14_0;
        CData/*0:0*/ __PVT__way_valid_14_1;
        CData/*0:0*/ __PVT__way_valid_15_0;
        CData/*0:0*/ __PVT__way_valid_15_1;
        CData/*0:0*/ __PVT__way_valid_16_0;
        CData/*0:0*/ __PVT__way_valid_16_1;
        CData/*0:0*/ __PVT__way_valid_17_0;
        CData/*0:0*/ __PVT__way_valid_17_1;
        CData/*0:0*/ __PVT__way_valid_18_0;
        CData/*0:0*/ __PVT__way_valid_18_1;
        CData/*0:0*/ __PVT__way_valid_19_0;
        CData/*0:0*/ __PVT__way_valid_19_1;
        CData/*0:0*/ __PVT__way_valid_20_0;
        CData/*0:0*/ __PVT__way_valid_20_1;
        CData/*0:0*/ __PVT__way_valid_21_0;
        CData/*0:0*/ __PVT__way_valid_21_1;
        CData/*0:0*/ __PVT__way_valid_22_0;
        CData/*0:0*/ __PVT__way_valid_22_1;
        CData/*0:0*/ __PVT__way_valid_23_0;
        CData/*0:0*/ __PVT__way_valid_23_1;
        CData/*0:0*/ __PVT__way_valid_24_0;
        CData/*0:0*/ __PVT__way_valid_24_1;
        CData/*0:0*/ __PVT__way_valid_25_0;
        CData/*0:0*/ __PVT__way_valid_25_1;
        CData/*0:0*/ __PVT__way_valid_26_0;
    };
    struct {
        CData/*0:0*/ __PVT__way_valid_26_1;
        CData/*0:0*/ __PVT__way_valid_27_0;
        CData/*0:0*/ __PVT__way_valid_27_1;
        CData/*0:0*/ __PVT__way_valid_28_0;
        CData/*0:0*/ __PVT__way_valid_28_1;
        CData/*0:0*/ __PVT__way_valid_29_0;
        CData/*0:0*/ __PVT__way_valid_29_1;
        CData/*0:0*/ __PVT__way_valid_30_0;
        CData/*0:0*/ __PVT__way_valid_30_1;
        CData/*0:0*/ __PVT__way_valid_31_0;
        CData/*0:0*/ __PVT__way_valid_31_1;
        CData/*4:0*/ __PVT__iTagChecker_io_way_valid_r;
        CData/*0:0*/ __PVT___GEN_22;
        CData/*0:0*/ __PVT___GEN_54;
        CData/*0:0*/ __PVT___GEN_129;
        CData/*0:0*/ __PVT___GEN_130;
        CData/*0:0*/ __PVT___GEN_131;
        CData/*0:0*/ __PVT___GEN_132;
        CData/*0:0*/ __PVT___GEN_133;
        CData/*0:0*/ __PVT___GEN_134;
        CData/*0:0*/ __PVT___GEN_135;
        CData/*0:0*/ __PVT___GEN_136;
        CData/*0:0*/ __PVT___GEN_137;
        CData/*0:0*/ __PVT___GEN_138;
        CData/*0:0*/ __PVT___GEN_139;
        CData/*0:0*/ __PVT___GEN_140;
        CData/*0:0*/ __PVT___GEN_141;
        CData/*0:0*/ __PVT___GEN_142;
        CData/*0:0*/ __PVT___GEN_143;
        CData/*0:0*/ __PVT___GEN_144;
        CData/*0:0*/ __PVT___GEN_145;
        CData/*0:0*/ __PVT___GEN_146;
        CData/*0:0*/ __PVT___GEN_147;
        CData/*0:0*/ __PVT___GEN_148;
        CData/*0:0*/ __PVT___GEN_149;
        CData/*0:0*/ __PVT___GEN_150;
        CData/*0:0*/ __PVT___GEN_151;
        CData/*0:0*/ __PVT___GEN_152;
        CData/*0:0*/ __PVT___GEN_153;
        CData/*0:0*/ __PVT___GEN_154;
        CData/*0:0*/ __PVT___GEN_155;
        CData/*0:0*/ __PVT___GEN_156;
        CData/*0:0*/ __PVT___GEN_157;
        CData/*0:0*/ __PVT___GEN_158;
        CData/*0:0*/ __PVT___GEN_159;
        CData/*0:0*/ __PVT___GEN_160;
        CData/*0:0*/ __PVT___GEN_161;
        CData/*0:0*/ __PVT___GEN_162;
        CData/*0:0*/ __PVT___GEN_163;
        CData/*0:0*/ __PVT___GEN_164;
        CData/*0:0*/ __PVT___GEN_165;
        CData/*0:0*/ __PVT___GEN_166;
        CData/*0:0*/ __PVT___GEN_167;
        CData/*0:0*/ __PVT___GEN_168;
        CData/*0:0*/ __PVT___GEN_169;
        CData/*0:0*/ __PVT___GEN_170;
        CData/*0:0*/ __PVT___GEN_171;
        CData/*0:0*/ __PVT___GEN_172;
        CData/*0:0*/ __PVT___GEN_173;
        CData/*0:0*/ __PVT___GEN_174;
        CData/*0:0*/ __PVT___GEN_175;
        CData/*0:0*/ __PVT___GEN_176;
        CData/*0:0*/ __PVT___GEN_177;
        CData/*0:0*/ __PVT___GEN_178;
    };
    struct {
        CData/*0:0*/ __PVT___GEN_179;
        CData/*0:0*/ __PVT___GEN_180;
        CData/*0:0*/ __PVT___GEN_181;
        CData/*0:0*/ __PVT___GEN_182;
        CData/*0:0*/ __PVT___GEN_183;
        CData/*0:0*/ __PVT___GEN_184;
        CData/*0:0*/ __PVT___GEN_185;
        CData/*0:0*/ __PVT___GEN_186;
        CData/*0:0*/ __PVT___GEN_187;
        CData/*0:0*/ __PVT___GEN_188;
        CData/*0:0*/ __PVT___GEN_189;
        CData/*0:0*/ __PVT___GEN_190;
        CData/*0:0*/ __PVT___GEN_191;
        CData/*0:0*/ __PVT___GEN_192;
        CData/*0:0*/ __PVT__tagBodyAccess__DOT__array_0_raw_rdata_en_pipe_0;
        CData/*4:0*/ __PVT__tagBodyAccess__DOT__array_0_raw_rdata_addr_pipe_0;
        CData/*0:0*/ __PVT__tagBodyAccess__DOT__array_1_raw_rdata_en_pipe_0;
        CData/*4:0*/ __PVT__tagBodyAccess__DOT__array_1_raw_rdata_addr_pipe_0;
        CData/*0:0*/ __PVT__tagBodyAccess__DOT__bypass_mask_need_check;
        CData/*4:0*/ __PVT__tagBodyAccess__DOT__bypass_mask_waddr_reg;
        CData/*4:0*/ __PVT__tagBodyAccess__DOT__bypass_mask_raddr_reg;
        CData/*1:0*/ __PVT__tagBodyAccess__DOT__bypass_mask_bypass_REG;
        CData/*1:0*/ __PVT__tagBodyAccess__DOT__bypass_mask_bypass;
        CData/*0:0*/ __PVT__tagBodyAccess__DOT__rdata_REG;
        CData/*0:0*/ __PVT__iTagChecker__DOT___io_waymask_T_1;
        CData/*1:0*/ __PVT__Replacement__DOT__victim_1Hidx;
        CData/*1:0*/ __PVT__Replacement__DOT__victim_1Hidx_r;
        VL_IN(__PVT__io_tagFromCore_st1,22,0);
        VL_IN(__PVT__io_w_req_bits_data_0,22,0);
        VL_IN(__PVT__io_w_req_bits_data_1,22,0);
        IData/*22:0*/ __PVT__tagBodyAccess__DOT__array_0_raw_rdata_data;
        IData/*22:0*/ __PVT__tagBodyAccess__DOT__array_1_raw_rdata_data;
        IData/*22:0*/ __PVT__tagBodyAccess__DOT__rdata_r_0;
        IData/*22:0*/ __PVT__tagBodyAccess__DOT__rdata_r_1;
        QData/*63:0*/ __PVT__tagBodyAccess__DOT__bypass_wdata_lfsr;
        QData/*63:0*/ __PVT__tagBodyAccess__DOT___bypass_wdata_lfsr_T_2;
        QData/*63:0*/ __PVT__tagBodyAccess__DOT__bypass_wdata_lfsr_1;
        QData/*63:0*/ __PVT__tagBodyAccess__DOT___bypass_wdata_lfsr_T_6;
        VlUnpacked<IData/*22:0*/, 32> __PVT__tagBodyAccess__DOT__array_0;
        VlUnpacked<IData/*22:0*/, 32> __PVT__tagBodyAccess__DOT__array_1;
    };

    // INTERNAL VARIABLES
    VVentus__Syms* const vlSymsp;

    // CONSTRUCTORS
    VVentus_L1TagAccess(VVentus__Syms* symsp, const char* name);
    ~VVentus_L1TagAccess();
    VL_UNCOPYABLE(VVentus_L1TagAccess);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
