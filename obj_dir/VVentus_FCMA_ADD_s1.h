// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VVentus.h for the primary calling header

#ifndef VERILATED_VVENTUS_FCMA_ADD_S1_H_
#define VERILATED_VVENTUS_FCMA_ADD_S1_H_  // guard

#include "verilated.h"

class VVentus__Syms;

class VVentus_FCMA_ADD_s1 final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(__PVT__io_b_inter_valid,0,0);
        VL_IN8(__PVT__io_b_inter_flags_isNaN,0,0);
        VL_IN8(__PVT__io_b_inter_flags_isInf,0,0);
        VL_IN8(__PVT__io_b_inter_flags_overflow,0,0);
        VL_IN8(__PVT__io_rm,2,0);
        VL_OUT8(__PVT__io_out_rm,2,0);
        VL_OUT8(__PVT__io_out_far_path_out_sign,0,0);
        VL_OUT8(__PVT__io_out_far_path_out_exp,7,0);
        VL_OUT8(__PVT__io_out_near_path_out_sign,0,0);
        VL_OUT8(__PVT__io_out_near_path_out_exp,7,0);
        VL_OUT8(__PVT__io_out_special_case_valid,0,0);
        VL_OUT8(__PVT__io_out_special_case_bits_nan,0,0);
        VL_OUT8(__PVT__io_out_special_case_bits_inf_sign,0,0);
        VL_OUT8(__PVT__io_out_far_path_mul_of,0,0);
        VL_OUT8(__PVT__io_out_near_path_sig_is_zero,0,0);
        VL_OUT8(__PVT__io_out_sel_far_path,0,0);
        CData/*7:0*/ __PVT__far_path_mods_0_io_in_a_exp;
        CData/*0:0*/ __PVT__far_path_mods_0_io_in_effSub;
        CData/*0:0*/ __PVT__far_path_mods_0_io_in_smallAdd;
        CData/*7:0*/ __PVT__near_path_mods_0_io_in_a_exp;
        CData/*0:0*/ __PVT__near_path_mods_0_io_in_need_shift_b;
        CData/*7:0*/ __PVT__near_path_mods_1_io_in_a_exp;
        CData/*0:0*/ __PVT__decode_a___05FisInf;
        CData/*0:0*/ __PVT__b_isInf;
        CData/*0:0*/ __PVT__special_path_hasNaN;
        CData/*0:0*/ __PVT__need_swap;
        CData/*0:0*/ __PVT___near_path_out_T_2;
        CData/*5:0*/ __PVT__near_path_mods_0__DOT__lzc_clz_io_out;
        CData/*0:0*/ __PVT__near_path_mods_0__DOT__exceed_lim;
        CData/*0:0*/ __PVT__near_path_mods_0__DOT__lza_error;
        CData/*0:0*/ __PVT__near_path_mods_0__DOT__lza_ab__DOT__f_1;
        CData/*0:0*/ __PVT__near_path_mods_0__DOT__lza_ab__DOT__f_2;
        CData/*0:0*/ __PVT__near_path_mods_0__DOT__lza_ab__DOT__f_3;
        CData/*0:0*/ __PVT__near_path_mods_0__DOT__lza_ab__DOT__f_4;
        CData/*0:0*/ __PVT__near_path_mods_0__DOT__lza_ab__DOT__f_5;
        CData/*0:0*/ __PVT__near_path_mods_0__DOT__lza_ab__DOT__f_6;
        CData/*0:0*/ __PVT__near_path_mods_0__DOT__lza_ab__DOT__f_7;
        CData/*0:0*/ __PVT__near_path_mods_0__DOT__lza_ab__DOT__f_8;
        CData/*0:0*/ __PVT__near_path_mods_0__DOT__lza_ab__DOT__f_9;
        CData/*0:0*/ __PVT__near_path_mods_0__DOT__lza_ab__DOT__f_10;
        CData/*0:0*/ __PVT__near_path_mods_0__DOT__lza_ab__DOT__f_11;
        CData/*0:0*/ __PVT__near_path_mods_0__DOT__lza_ab__DOT__f_13;
        CData/*0:0*/ __PVT__near_path_mods_0__DOT__lza_ab__DOT__f_14;
        CData/*0:0*/ __PVT__near_path_mods_0__DOT__lza_ab__DOT__f_15;
        CData/*0:0*/ __PVT__near_path_mods_0__DOT__lza_ab__DOT__f_16;
        CData/*0:0*/ __PVT__near_path_mods_0__DOT__lza_ab__DOT__f_17;
        CData/*0:0*/ __PVT__near_path_mods_0__DOT__lza_ab__DOT__f_18;
        CData/*0:0*/ __PVT__near_path_mods_0__DOT__lza_ab__DOT__f_19;
        CData/*0:0*/ __PVT__near_path_mods_0__DOT__lza_ab__DOT__f_20;
        CData/*0:0*/ __PVT__near_path_mods_0__DOT__lza_ab__DOT__f_21;
        CData/*0:0*/ __PVT__near_path_mods_0__DOT__lza_ab__DOT__f_22;
        CData/*0:0*/ __PVT__near_path_mods_0__DOT__lza_ab__DOT__f_23;
        CData/*0:0*/ __PVT__near_path_mods_0__DOT__lza_ab__DOT__f_25;
        CData/*0:0*/ __PVT__near_path_mods_0__DOT__lza_ab__DOT__f_26;
        CData/*0:0*/ __PVT__near_path_mods_0__DOT__lza_ab__DOT__f_27;
        CData/*0:0*/ __PVT__near_path_mods_0__DOT__lza_ab__DOT__f_28;
        CData/*0:0*/ __PVT__near_path_mods_0__DOT__lza_ab__DOT__f_29;
        CData/*0:0*/ __PVT__near_path_mods_0__DOT__lza_ab__DOT__f_30;
        CData/*0:0*/ __PVT__near_path_mods_0__DOT__lza_ab__DOT__f_31;
        CData/*0:0*/ __PVT__near_path_mods_0__DOT__lza_ab__DOT__f_32;
        CData/*0:0*/ __PVT__near_path_mods_0__DOT__lza_ab__DOT__f_33;
        CData/*0:0*/ __PVT__near_path_mods_0__DOT__lza_ab__DOT__f_34;
        CData/*0:0*/ __PVT__near_path_mods_0__DOT__lza_ab__DOT__f_35;
        CData/*0:0*/ __PVT__near_path_mods_0__DOT__lza_ab__DOT__f_37;
    };
    struct {
        CData/*0:0*/ __PVT__near_path_mods_0__DOT__lza_ab__DOT__f_38;
        CData/*0:0*/ __PVT__near_path_mods_0__DOT__lza_ab__DOT__f_39;
        CData/*0:0*/ __PVT__near_path_mods_0__DOT__lza_ab__DOT__f_40;
        CData/*0:0*/ __PVT__near_path_mods_0__DOT__lza_ab__DOT__f_41;
        CData/*0:0*/ __PVT__near_path_mods_0__DOT__lza_ab__DOT__f_42;
        CData/*0:0*/ __PVT__near_path_mods_0__DOT__lza_ab__DOT__f_43;
        CData/*0:0*/ __PVT__near_path_mods_0__DOT__lza_ab__DOT__f_44;
        CData/*0:0*/ __PVT__near_path_mods_0__DOT__lza_ab__DOT__f_45;
        CData/*0:0*/ __PVT__near_path_mods_0__DOT__lza_ab__DOT__f_46;
        CData/*0:0*/ __PVT__near_path_mods_0__DOT__lza_ab__DOT__f_47;
        CData/*0:0*/ __PVT__near_path_mods_0__DOT__lza_ab__DOT__f_48;
        CData/*5:0*/ __PVT__near_path_mods_0__DOT__lza_ab__DOT__io_f_lo_hi_lo;
        CData/*5:0*/ __PVT__near_path_mods_0__DOT__lza_ab__DOT__io_f_hi_hi_lo;
        CData/*5:0*/ __PVT__near_path_mods_1__DOT__lzc_clz_io_out;
        CData/*0:0*/ __PVT__near_path_mods_1__DOT__exceed_lim;
        CData/*0:0*/ __PVT__near_path_mods_1__DOT__lza_error;
        CData/*0:0*/ __PVT__near_path_mods_1__DOT__lza_ab__DOT__f_1;
        CData/*0:0*/ __PVT__near_path_mods_1__DOT__lza_ab__DOT__f_2;
        CData/*0:0*/ __PVT__near_path_mods_1__DOT__lza_ab__DOT__f_3;
        CData/*0:0*/ __PVT__near_path_mods_1__DOT__lza_ab__DOT__f_4;
        CData/*0:0*/ __PVT__near_path_mods_1__DOT__lza_ab__DOT__f_5;
        CData/*0:0*/ __PVT__near_path_mods_1__DOT__lza_ab__DOT__f_6;
        CData/*0:0*/ __PVT__near_path_mods_1__DOT__lza_ab__DOT__f_7;
        CData/*0:0*/ __PVT__near_path_mods_1__DOT__lza_ab__DOT__f_8;
        CData/*0:0*/ __PVT__near_path_mods_1__DOT__lza_ab__DOT__f_9;
        CData/*0:0*/ __PVT__near_path_mods_1__DOT__lza_ab__DOT__f_10;
        CData/*0:0*/ __PVT__near_path_mods_1__DOT__lza_ab__DOT__f_11;
        CData/*0:0*/ __PVT__near_path_mods_1__DOT__lza_ab__DOT__f_13;
        CData/*0:0*/ __PVT__near_path_mods_1__DOT__lza_ab__DOT__f_14;
        CData/*0:0*/ __PVT__near_path_mods_1__DOT__lza_ab__DOT__f_15;
        CData/*0:0*/ __PVT__near_path_mods_1__DOT__lza_ab__DOT__f_16;
        CData/*0:0*/ __PVT__near_path_mods_1__DOT__lza_ab__DOT__f_17;
        CData/*0:0*/ __PVT__near_path_mods_1__DOT__lza_ab__DOT__f_18;
        CData/*0:0*/ __PVT__near_path_mods_1__DOT__lza_ab__DOT__f_19;
        CData/*0:0*/ __PVT__near_path_mods_1__DOT__lza_ab__DOT__f_20;
        CData/*0:0*/ __PVT__near_path_mods_1__DOT__lza_ab__DOT__f_21;
        CData/*0:0*/ __PVT__near_path_mods_1__DOT__lza_ab__DOT__f_22;
        CData/*0:0*/ __PVT__near_path_mods_1__DOT__lza_ab__DOT__f_23;
        CData/*0:0*/ __PVT__near_path_mods_1__DOT__lza_ab__DOT__f_25;
        CData/*0:0*/ __PVT__near_path_mods_1__DOT__lza_ab__DOT__f_26;
        CData/*0:0*/ __PVT__near_path_mods_1__DOT__lza_ab__DOT__f_27;
        CData/*0:0*/ __PVT__near_path_mods_1__DOT__lza_ab__DOT__f_28;
        CData/*0:0*/ __PVT__near_path_mods_1__DOT__lza_ab__DOT__f_29;
        CData/*0:0*/ __PVT__near_path_mods_1__DOT__lza_ab__DOT__f_30;
        CData/*0:0*/ __PVT__near_path_mods_1__DOT__lza_ab__DOT__f_31;
        CData/*0:0*/ __PVT__near_path_mods_1__DOT__lza_ab__DOT__f_32;
        CData/*0:0*/ __PVT__near_path_mods_1__DOT__lza_ab__DOT__f_33;
        CData/*0:0*/ __PVT__near_path_mods_1__DOT__lza_ab__DOT__f_34;
        CData/*0:0*/ __PVT__near_path_mods_1__DOT__lza_ab__DOT__f_35;
        CData/*0:0*/ __PVT__near_path_mods_1__DOT__lza_ab__DOT__f_37;
        CData/*0:0*/ __PVT__near_path_mods_1__DOT__lza_ab__DOT__f_38;
        CData/*0:0*/ __PVT__near_path_mods_1__DOT__lza_ab__DOT__f_39;
        CData/*0:0*/ __PVT__near_path_mods_1__DOT__lza_ab__DOT__f_40;
        CData/*0:0*/ __PVT__near_path_mods_1__DOT__lza_ab__DOT__f_41;
        CData/*0:0*/ __PVT__near_path_mods_1__DOT__lza_ab__DOT__f_42;
        CData/*0:0*/ __PVT__near_path_mods_1__DOT__lza_ab__DOT__f_43;
        CData/*0:0*/ __PVT__near_path_mods_1__DOT__lza_ab__DOT__f_44;
        CData/*0:0*/ __PVT__near_path_mods_1__DOT__lza_ab__DOT__f_45;
        CData/*0:0*/ __PVT__near_path_mods_1__DOT__lza_ab__DOT__f_46;
        CData/*0:0*/ __PVT__near_path_mods_1__DOT__lza_ab__DOT__f_47;
        CData/*0:0*/ __PVT__near_path_mods_1__DOT__lza_ab__DOT__f_48;
        CData/*5:0*/ __PVT__near_path_mods_1__DOT__lza_ab__DOT__io_f_lo_hi_lo;
        CData/*5:0*/ __PVT__near_path_mods_1__DOT__lza_ab__DOT__io_f_hi_hi_lo;
        SData/*8:0*/ __PVT__exp_diff_a_b;
    };
    struct {
        SData/*8:0*/ __PVT__exp_diff_b_a;
        SData/*8:0*/ __PVT___T_5;
        VL_OUT(__PVT__io_out_far_path_out_sig,26,0);
        VL_OUT(__PVT__io_out_near_path_out_sig,26,0);
        IData/*24:0*/ __PVT__near_path_mods_0__DOT__lza_ab__DOT__io_f_hi;
        IData/*24:0*/ __PVT__near_path_mods_1__DOT__lza_ab__DOT__io_f_hi;
        VL_IN64(__PVT__io_a,55,0);
        VL_IN64(__PVT__io_b,55,0);
        QData/*47:0*/ __PVT__far_path_mods_0_io_in_b_sig;
        QData/*47:0*/ __PVT__near_path_mods_0_io_in_a_sig;
        QData/*47:0*/ __PVT__near_path_mods_0_io_in_b_sig;
        QData/*51:0*/ __PVT__far_path_mods_0__DOT__adder_in_sig_b;
        QData/*51:0*/ __PVT__far_path_mods_0__DOT__adder_result;
        QData/*48:0*/ __PVT__near_path_mods_0__DOT__lza_ab_io_f;
        QData/*48:0*/ __PVT__near_path_mods_0__DOT__lzc_clz_io_in;
        QData/*48:0*/ __PVT__near_path_mods_0__DOT__b_sig;
        QData/*49:0*/ __PVT__near_path_mods_0__DOT___a_minus_b_T_3;
        QData/*48:0*/ __PVT__near_path_mods_0__DOT__int_bit_mask;
        QData/*48:0*/ __PVT__near_path_mods_0__DOT___int_bit_predicted_T_1;
        QData/*48:0*/ __PVT__near_path_mods_0__DOT__sig_s1;
        QData/*48:0*/ __PVT__near_path_mods_0__DOT__near_path_sig;
        QData/*48:0*/ __PVT__near_path_mods_1__DOT__lza_ab_io_f;
        QData/*48:0*/ __PVT__near_path_mods_1__DOT__lzc_clz_io_in;
        QData/*48:0*/ __PVT__near_path_mods_1__DOT__b_sig;
        QData/*49:0*/ __PVT__near_path_mods_1__DOT___a_minus_b_T_3;
        QData/*48:0*/ __PVT__near_path_mods_1__DOT__int_bit_mask;
        QData/*48:0*/ __PVT__near_path_mods_1__DOT___int_bit_predicted_T_1;
        QData/*48:0*/ __PVT__near_path_mods_1__DOT__sig_s1;
        QData/*48:0*/ __PVT__near_path_mods_1__DOT__near_path_sig;
    };

    // INTERNAL VARIABLES
    VVentus__Syms* const vlSymsp;

    // CONSTRUCTORS
    VVentus_FCMA_ADD_s1(VVentus__Syms* symsp, const char* name);
    ~VVentus_FCMA_ADD_s1();
    VL_UNCOPYABLE(VVentus_FCMA_ADD_s1);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
