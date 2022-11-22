// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VVentus.h for the primary calling header

#include "verilated.h"

#include "VVentus__Syms.h"
#include "VVentus___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VVentus___024root___dump_triggers__ico(VVentus___024root* vlSelf);
#endif  // VL_DEBUG

void VVentus___024root___eval_triggers__ico(VVentus___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VVentus__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VVentus___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.at(0U) = (0U == vlSelf->__VicoIterCount);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VVentus___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

VL_INLINE_OPT void VVentus___024root___ico_sequent__TOP__0(VVentus___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VVentus__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VVentus___024root___ico_sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ GPGPU_top__DOT__l2cache__DOT___mshr_request_T_4;
    CData/*0:0*/ GPGPU_top__DOT__l2cache__DOT___mshr_request_T_9;
    CData/*0:0*/ GPGPU_top__DOT__l2cache__DOT___mshr_request_T_14;
    CData/*0:0*/ GPGPU_top__DOT__l2cache__DOT___mshr_request_T_19;
    CData/*7:0*/ GPGPU_top__DOT__l2cache__DOT___mshr_selectOH2_T_2;
    CData/*7:0*/ GPGPU_top__DOT__l2cache__DOT___mshr_selectOH2_T_5;
    CData/*0:0*/ GPGPU_top__DOT__l2cache__DOT____VdfgTmp_h5c21289d__0;
    CData/*0:0*/ GPGPU_top__DOT__l2cache__DOT__directory__DOT___hits_T_11;
    CData/*0:0*/ GPGPU_top__DOT__l2cache__DOT__directory__DOT___hits_T_15;
    CData/*0:0*/ GPGPU_top__DOT__l2cache__DOT__directory__DOT___cc_dir_io_r_req_valid_T;
    CData/*0:0*/ GPGPU_top__DOT__l2cache__DOT__directory__DOT___io_result_bits_hit_T;
    CData/*7:0*/ GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT___sourceD_wreq_out_bankSel_T_6;
    CData/*7:0*/ GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT___sourceD_wreq_out_bankSel_T_8;
    // Body
    vlSelf->GPGPU_top__DOT__cta__DOT__wf_done_interface__DOT__buffer__DOT__do_deq 
        = ((IData)(vlSelf->io_host_rsp_valid) & (IData)(vlSelf->io_host_rsp_ready));
    if (vlSelf->reset) {
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT___GEN_24 = 0U;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT___GEN_25 = 0U;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT___GEN_26 = 0U;
    } else {
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT___GEN_24 
            = ((IData)(vlSymsp->TOP__GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__lds_res_tbl.__PVT__res_table_done)
                ? (IData)(vlSymsp->TOP__GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__lds_res_tbl.__PVT__res_table_max_size)
                : (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__lds_size_out));
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT___GEN_25 
            = ((IData)(vlSymsp->TOP__GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__vgpr_res_tbl.__PVT__res_table_done)
                ? (IData)(vlSymsp->TOP__GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__vgpr_res_tbl.__PVT__res_table_max_size)
                : (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__vgpr_size_out));
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT___GEN_26 
            = ((IData)(vlSymsp->TOP__GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__sgpr_res_tbl.__PVT__res_table_done)
                ? (IData)(vlSymsp->TOP__GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__sgpr_res_tbl.__PVT__res_table_max_size)
                : (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__sgpr_size_out));
    }
    if (vlSelf->io_out_d_valid) {
        vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_0_io_sinkd_valid 
            = ((0U == (IData)(vlSelf->io_out_d_bits_source)) 
               & (1U == (IData)(vlSelf->io_out_d_bits_opcode)));
        vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_1_io_sinkd_valid 
            = ((1U == (IData)(vlSelf->io_out_d_bits_source)) 
               & (1U == (IData)(vlSelf->io_out_d_bits_opcode)));
        vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_2_io_sinkd_valid 
            = ((2U == (IData)(vlSelf->io_out_d_bits_source)) 
               & (1U == (IData)(vlSelf->io_out_d_bits_opcode)));
        vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_3_io_sinkd_valid 
            = ((3U == (IData)(vlSelf->io_out_d_bits_source)) 
               & (1U == (IData)(vlSelf->io_out_d_bits_opcode)));
        vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkD_io_source 
            = vlSelf->io_out_d_bits_source;
    } else {
        vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_0_io_sinkd_valid = 0U;
        vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_1_io_sinkd_valid = 0U;
        vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_2_io_sinkd_valid = 0U;
        vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_3_io_sinkd_valid = 0U;
        vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkD_io_source 
            = vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkD__DOT__io_source_r;
    }
    GPGPU_top__DOT__l2cache__DOT___mshr_request_T_4 
        = ((((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_0__DOT__sche_a_valid) 
             & (IData)(vlSelf->io_out_a_ready)) | (
                                                   (~ (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT__busy)) 
                                                   & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_0_io_schedule_d_valid))) 
           | (((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__wipeCount) 
               >> 1U) & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_0__DOT__sche_dir_valid)));
    GPGPU_top__DOT__l2cache__DOT___mshr_request_T_9 
        = ((((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_1__DOT__sche_a_valid) 
             & (IData)(vlSelf->io_out_a_ready)) | (
                                                   (~ (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT__busy)) 
                                                   & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_1_io_schedule_d_valid))) 
           | (((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__wipeCount) 
               >> 1U) & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_1__DOT__sche_dir_valid)));
    GPGPU_top__DOT__l2cache__DOT___mshr_request_T_14 
        = ((((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_2__DOT__sche_a_valid) 
             & (IData)(vlSelf->io_out_a_ready)) | (
                                                   (~ (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT__busy)) 
                                                   & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_2_io_schedule_d_valid))) 
           | (((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__wipeCount) 
               >> 1U) & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_2__DOT__sche_dir_valid)));
    GPGPU_top__DOT__l2cache__DOT___mshr_request_T_19 
        = ((((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_3__DOT__sche_a_valid) 
             & (IData)(vlSelf->io_out_a_ready)) | (
                                                   (~ (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT__busy)) 
                                                   & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_3_io_schedule_d_valid))) 
           | (((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__wipeCount) 
               >> 1U) & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_3__DOT__sche_dir_valid)));
    if ((3U == (3U & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkD_io_source)))) {
        vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__reqs_0_index 
            = vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_3__DOT__request_way;
        vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkD_io_opcode 
            = vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_3__DOT__request_opcode;
        vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__head_pop_head2_MPORT_addr 
            = vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_3__DOT__request_put;
        vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__sinkD_req_select_shiftAmount 
            = vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_3__DOT__request_set;
    } else if ((2U == (3U & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkD_io_source)))) {
        vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__reqs_0_index 
            = vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_2__DOT__request_way;
        vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkD_io_opcode 
            = vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_2__DOT__request_opcode;
        vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__head_pop_head2_MPORT_addr 
            = vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_2__DOT__request_put;
        vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__sinkD_req_select_shiftAmount 
            = vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_2__DOT__request_set;
    } else if ((1U == (3U & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkD_io_source)))) {
        vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__reqs_0_index 
            = vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_1__DOT__request_way;
        vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkD_io_opcode 
            = vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_1__DOT__request_opcode;
        vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__head_pop_head2_MPORT_addr 
            = vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_1__DOT__request_put;
        vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__sinkD_req_select_shiftAmount 
            = vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_1__DOT__request_set;
    } else {
        vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__reqs_0_index 
            = vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_0__DOT__request_way;
        vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkD_io_opcode 
            = vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_0__DOT__request_opcode;
        vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__head_pop_head2_MPORT_addr 
            = vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_0__DOT__request_put;
        vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__sinkD_req_select_shiftAmount 
            = vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_0__DOT__request_set;
    }
    vlSelf->GPGPU_top__DOT__l2cache__DOT__mshr_request 
        = (((IData)(GPGPU_top__DOT__l2cache__DOT___mshr_request_T_19) 
            << 3U) | (((IData)(GPGPU_top__DOT__l2cache__DOT___mshr_request_T_14) 
                       << 2U) | (((IData)(GPGPU_top__DOT__l2cache__DOT___mshr_request_T_9) 
                                  << 1U) | (IData)(GPGPU_top__DOT__l2cache__DOT___mshr_request_T_4))));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__head_MPORT_9_en 
        = (0xfU & (((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__valid) 
                    >> (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__head_pop_head2_MPORT_addr)) 
                   & (((1U == (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkD_io_opcode)) 
                       | (0U == (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkD_io_opcode))) 
                      & (IData)(vlSelf->io_out_d_valid))));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__head_pop_head2_MPORT_data 
        = vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__head
        [vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__head_pop_head2_MPORT_addr];
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT____VdfgTmp_hc0824628__0 
        = ((IData)(vlSelf->io_out_d_valid) & ((IData)(1U) 
                                              << (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__sinkD_req_select_shiftAmount)));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT____VdfgTmp_hc46625d2__0 
        = ((IData)(vlSelf->io_out_d_valid) & (((IData)(1U) 
                                               << (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__sinkD_req_select_shiftAmount)) 
                                              >> 1U));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__robin_request 
        = (((IData)(GPGPU_top__DOT__l2cache__DOT___mshr_request_T_19) 
            << 7U) | (((IData)(GPGPU_top__DOT__l2cache__DOT___mshr_request_T_14) 
                       << 6U) | (((IData)(GPGPU_top__DOT__l2cache__DOT___mshr_request_T_9) 
                                  << 5U) | (((IData)(GPGPU_top__DOT__l2cache__DOT___mshr_request_T_4) 
                                             << 4U) 
                                            | ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshr_request) 
                                               & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__robin_filter))))));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT____VdfgTmp_habdfb808__0 
        = ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__head_pop_head2_MPORT_data) 
           == vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__tail
           [vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__head_pop_head2_MPORT_addr]);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__data_io_data2_MPORT_data[0U] 
        = vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__data
        [vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__head_pop_head2_MPORT_data][0U];
    vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__data_io_data2_MPORT_data[1U] 
        = vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__data
        [vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__head_pop_head2_MPORT_data][1U];
    vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__data_io_data2_MPORT_data[2U] 
        = vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__data
        [vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__head_pop_head2_MPORT_data][2U];
    vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__data_io_data2_MPORT_data[3U] 
        = vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__data
        [vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__head_pop_head2_MPORT_data][3U];
    vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__data_io_data2_MPORT_data[4U] 
        = vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__data
        [vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__head_pop_head2_MPORT_data][4U];
    GPGPU_top__DOT__l2cache__DOT___mshr_selectOH2_T_2 
        = (0xffU & ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__robin_request) 
                    | ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__robin_request) 
                       << 1U)));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkD__DOT__full_mask[0U] 
        = ((1U & vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__data_io_data2_MPORT_data[0U])
            ? 0xffffffffU : 0U);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkD__DOT__full_mask[1U] 
        = ((2U & vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__data_io_data2_MPORT_data[0U])
            ? 0xffffffffU : 0U);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkD__DOT__full_mask[2U] 
        = (IData)((((QData)((IData)(((8U & vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__data_io_data2_MPORT_data[0U])
                                      ? 0xffffffffU
                                      : 0U))) << 0x20U) 
                   | (QData)((IData)(((4U & vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__data_io_data2_MPORT_data[0U])
                                       ? 0xffffffffU
                                       : 0U)))));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkD__DOT__full_mask[3U] 
        = (IData)(((((QData)((IData)(((8U & vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__data_io_data2_MPORT_data[0U])
                                       ? 0xffffffffU
                                       : 0U))) << 0x20U) 
                    | (QData)((IData)(((4U & vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__data_io_data2_MPORT_data[0U])
                                        ? 0xffffffffU
                                        : 0U)))) >> 0x20U));
    GPGPU_top__DOT__l2cache__DOT___mshr_selectOH2_T_5 
        = (0xffU & ((IData)(GPGPU_top__DOT__l2cache__DOT___mshr_selectOH2_T_2) 
                    | ((IData)(GPGPU_top__DOT__l2cache__DOT___mshr_selectOH2_T_2) 
                       << 2U)));
    if ((1U == (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkD_io_opcode))) {
        vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkD_io_resp_bits_data[0U] 
            = ((((vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__data_io_data2_MPORT_data[1U] 
                  << 0x1cU) | (vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__data_io_data2_MPORT_data[0U] 
                               >> 4U)) & vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkD__DOT__full_mask[0U]) 
               | ((~ vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkD__DOT__full_mask[0U]) 
                  & vlSelf->io_out_d_bits_data[0U]));
        vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkD_io_resp_bits_data[1U] 
            = ((((vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__data_io_data2_MPORT_data[2U] 
                  << 0x1cU) | (vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__data_io_data2_MPORT_data[1U] 
                               >> 4U)) & vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkD__DOT__full_mask[1U]) 
               | ((~ vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkD__DOT__full_mask[1U]) 
                  & vlSelf->io_out_d_bits_data[1U]));
        vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkD_io_resp_bits_data[2U] 
            = ((((vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__data_io_data2_MPORT_data[3U] 
                  << 0x1cU) | (vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__data_io_data2_MPORT_data[2U] 
                               >> 4U)) & vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkD__DOT__full_mask[2U]) 
               | ((~ vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkD__DOT__full_mask[2U]) 
                  & vlSelf->io_out_d_bits_data[2U]));
        vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkD_io_resp_bits_data[3U] 
            = ((((vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__data_io_data2_MPORT_data[4U] 
                  << 0x1cU) | (vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__data_io_data2_MPORT_data[3U] 
                               >> 4U)) & vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkD__DOT__full_mask[3U]) 
               | ((~ vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkD__DOT__full_mask[3U]) 
                  & vlSelf->io_out_d_bits_data[3U]));
    } else {
        vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkD_io_resp_bits_data[0U] 
            = vlSelf->io_out_d_bits_data[0U];
        vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkD_io_resp_bits_data[1U] 
            = vlSelf->io_out_d_bits_data[1U];
        vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkD_io_resp_bits_data[2U] 
            = vlSelf->io_out_d_bits_data[2U];
        vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkD_io_resp_bits_data[3U] 
            = vlSelf->io_out_d_bits_data[3U];
    }
    vlSelf->GPGPU_top__DOT__l2cache__DOT__mshr_selectOH2 
        = ((~ (0x1feU & (((IData)(GPGPU_top__DOT__l2cache__DOT___mshr_selectOH2_T_5) 
                          << 1U) | ((IData)(GPGPU_top__DOT__l2cache__DOT___mshr_selectOH2_T_5) 
                                    << 5U)))) & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__robin_request));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__mshr_selectOH 
        = (0xfU & (((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshr_selectOH2) 
                    >> 4U) | (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshr_selectOH2)));
    vlSelf->GPGPU_top__DOT__l2cache__DOT___robin_filter_T_1 
        = (0xfU & ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshr_selectOH) 
                   | ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshr_selectOH) 
                      >> 1U)));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__schedule_d_bits_offset 
        = (((((1U & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshr_selectOH))
               ? (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_0__DOT__request_offset)
               : 0U) | ((2U & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshr_selectOH))
                         ? (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_1__DOT__request_offset)
                         : 0U)) | ((4U & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshr_selectOH))
                                    ? (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_2__DOT__request_offset)
                                    : 0U)) | ((8U & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshr_selectOH))
                                               ? (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_3__DOT__request_offset)
                                               : 0U));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__schedule_a_valid 
        = (((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshr_selectOH) 
            & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_0__DOT__sche_a_valid)) 
           | ((((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshr_selectOH) 
                >> 1U) & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_1__DOT__sche_a_valid)) 
              | ((((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshr_selectOH) 
                   >> 2U) & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_2__DOT__sche_a_valid)) 
                 | (((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshr_selectOH) 
                     >> 3U) & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_3__DOT__sche_a_valid)))));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__directory_io_write_bits_way 
        = (((((1U & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshr_selectOH))
               ? (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_0__DOT__request_way)
               : 0U) | ((2U & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshr_selectOH))
                         ? (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_1__DOT__request_way)
                         : 0U)) | ((4U & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshr_selectOH))
                                    ? (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_2__DOT__request_way)
                                    : 0U)) | ((8U & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshr_selectOH))
                                               ? (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_3__DOT__request_way)
                                               : 0U));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__requests__DOT__head_pop_head_addr 
        = (((IData)((0U != (3U & ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshr_selectOH) 
                                  >> 2U)))) << 1U) 
           | (IData)((0U != (0xaU & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshr_selectOH)))));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT___wen_new_T_3 
        = (((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__wipeCount) 
            >> 1U) & (((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshr_selectOH) 
                       & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_0__DOT__sche_dir_valid)) 
                      | ((((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshr_selectOH) 
                           >> 1U) & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_1__DOT__sche_dir_valid)) 
                         | ((((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshr_selectOH) 
                              >> 2U) & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_2__DOT__sche_dir_valid)) 
                            | (((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshr_selectOH) 
                                >> 3U) & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_3__DOT__sche_dir_valid))))));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__directory_io_write_bits_data_tag 
        = (((((1U & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshr_selectOH))
               ? vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_0__DOT__request_tag
               : 0U) | ((2U & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshr_selectOH))
                         ? vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_1__DOT__request_tag
                         : 0U)) | ((4U & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshr_selectOH))
                                    ? vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_2__DOT__request_tag
                                    : 0U)) | ((8U & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshr_selectOH))
                                               ? vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_3__DOT__request_tag
                                               : 0U));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__directory_io_write_bits_set 
        = (((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshr_selectOH) 
            & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_0__DOT__request_set)) 
           | ((((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshr_selectOH) 
                >> 1U) & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_1__DOT__request_set)) 
              | ((((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshr_selectOH) 
                   >> 2U) & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_2__DOT__request_set)) 
                 | (((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshr_selectOH) 
                     >> 3U) & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_3__DOT__request_set)))));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD_io_req_bits_from_mem 
        = (((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshr_selectOH) 
            & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_0_io_schedule_d_valid)) 
           | ((((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshr_selectOH) 
                >> 1U) & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_1_io_schedule_d_valid)) 
              | ((((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshr_selectOH) 
                   >> 2U) & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_2_io_schedule_d_valid)) 
                 | (((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshr_selectOH) 
                     >> 3U) & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_3_io_schedule_d_valid)))));
    if (vlSelf->GPGPU_top__DOT__l2cache__DOT__schedule_a_valid) {
        vlSelf->io_out_a_valid = (1U & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__schedule_a_valid));
        vlSelf->io_out_a_bits_size = 0U;
        vlSelf->io_out_a_bits_opcode = (((((1U & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshr_selectOH))
                                            ? 4U : 0U) 
                                          | ((2U & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshr_selectOH))
                                              ? 4U : 0U)) 
                                         | ((4U & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshr_selectOH))
                                             ? 4U : 0U)) 
                                        | ((8U & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshr_selectOH))
                                            ? 4U : 0U));
        vlSelf->io_out_a_bits_mask = (((((1U & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshr_selectOH))
                                          ? 0xfU : 0U) 
                                        | ((2U & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshr_selectOH))
                                            ? 0xfU : 0U)) 
                                       | ((4U & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshr_selectOH))
                                           ? 0xfU : 0U)) 
                                      | ((8U & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshr_selectOH))
                                          ? 0xfU : 0U));
        vlSelf->io_out_a_bits_data[0U] = (((((1U & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshr_selectOH))
                                              ? vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_0__DOT__request_data[0U]
                                              : 0U) 
                                            | ((2U 
                                                & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshr_selectOH))
                                                ? vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_1__DOT__request_data[0U]
                                                : 0U)) 
                                           | ((4U & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshr_selectOH))
                                               ? vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_2__DOT__request_data[0U]
                                               : 0U)) 
                                          | ((8U & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshr_selectOH))
                                              ? vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_3__DOT__request_data[0U]
                                              : 0U));
        vlSelf->io_out_a_bits_data[1U] = (((((1U & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshr_selectOH))
                                              ? vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_0__DOT__request_data[1U]
                                              : 0U) 
                                            | ((2U 
                                                & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshr_selectOH))
                                                ? vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_1__DOT__request_data[1U]
                                                : 0U)) 
                                           | ((4U & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshr_selectOH))
                                               ? vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_2__DOT__request_data[1U]
                                               : 0U)) 
                                          | ((8U & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshr_selectOH))
                                              ? vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_3__DOT__request_data[1U]
                                              : 0U));
        vlSelf->io_out_a_bits_data[2U] = (((((1U & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshr_selectOH))
                                              ? vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_0__DOT__request_data[2U]
                                              : 0U) 
                                            | ((2U 
                                                & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshr_selectOH))
                                                ? vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_1__DOT__request_data[2U]
                                                : 0U)) 
                                           | ((4U & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshr_selectOH))
                                               ? vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_2__DOT__request_data[2U]
                                               : 0U)) 
                                          | ((8U & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshr_selectOH))
                                              ? vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_3__DOT__request_data[2U]
                                              : 0U));
        vlSelf->io_out_a_bits_data[3U] = (((((1U & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshr_selectOH))
                                              ? vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_0__DOT__request_data[3U]
                                              : 0U) 
                                            | ((2U 
                                                & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshr_selectOH))
                                                ? vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_1__DOT__request_data[3U]
                                                : 0U)) 
                                           | ((4U & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshr_selectOH))
                                               ? vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_2__DOT__request_data[3U]
                                               : 0U)) 
                                          | ((8U & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshr_selectOH))
                                              ? vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_3__DOT__request_data[3U]
                                              : 0U));
        vlSelf->io_out_a_bits_source = vlSelf->GPGPU_top__DOT__l2cache__DOT__requests__DOT__head_pop_head_addr;
    } else {
        vlSelf->io_out_a_valid = (1U & (~ (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__write_buffer__DOT__empty)));
        vlSelf->io_out_a_bits_size = vlSelf->GPGPU_top__DOT__l2cache__DOT__write_buffer__DOT__ram_size
            [vlSelf->GPGPU_top__DOT__l2cache__DOT__write_buffer__DOT__deq_ptr_value];
        vlSelf->io_out_a_bits_opcode = vlSelf->GPGPU_top__DOT__l2cache__DOT__write_buffer__DOT__ram_opcode
            [vlSelf->GPGPU_top__DOT__l2cache__DOT__write_buffer__DOT__deq_ptr_value];
        vlSelf->io_out_a_bits_mask = vlSelf->GPGPU_top__DOT__l2cache__DOT__write_buffer__DOT__ram_mask
            [vlSelf->GPGPU_top__DOT__l2cache__DOT__write_buffer__DOT__deq_ptr_value];
        vlSelf->io_out_a_bits_data[0U] = vlSelf->GPGPU_top__DOT__l2cache__DOT__write_buffer__DOT__ram_data
            [vlSelf->GPGPU_top__DOT__l2cache__DOT__write_buffer__DOT__deq_ptr_value][0U];
        vlSelf->io_out_a_bits_data[1U] = vlSelf->GPGPU_top__DOT__l2cache__DOT__write_buffer__DOT__ram_data
            [vlSelf->GPGPU_top__DOT__l2cache__DOT__write_buffer__DOT__deq_ptr_value][1U];
        vlSelf->io_out_a_bits_data[2U] = vlSelf->GPGPU_top__DOT__l2cache__DOT__write_buffer__DOT__ram_data
            [vlSelf->GPGPU_top__DOT__l2cache__DOT__write_buffer__DOT__deq_ptr_value][2U];
        vlSelf->io_out_a_bits_data[3U] = vlSelf->GPGPU_top__DOT__l2cache__DOT__write_buffer__DOT__ram_data
            [vlSelf->GPGPU_top__DOT__l2cache__DOT__write_buffer__DOT__deq_ptr_value][3U];
        vlSelf->io_out_a_bits_source = vlSelf->GPGPU_top__DOT__l2cache__DOT__write_buffer__DOT__ram_source
            [vlSelf->GPGPU_top__DOT__l2cache__DOT__write_buffer__DOT__deq_ptr_value];
    }
    vlSelf->GPGPU_top__DOT__l2cache__DOT__write_buffer__DOT__do_deq 
        = ((~ (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__write_buffer__DOT__empty)) 
           & ((~ (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__schedule_a_valid)) 
              & (IData)(vlSelf->io_out_a_ready)));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__x6 
        = (3U & (((IData)(1U) << (1U & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__directory_io_write_bits_way))) 
                 | ((2U & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__wipeCount))
                     ? 0U : 3U)));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_0__DOT___T 
        = (((IData)(vlSelf->io_out_a_ready) & (0U == (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__requests__DOT__head_pop_head_addr))) 
           & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_0__DOT__sche_a_valid));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_1__DOT___T 
        = (((IData)(vlSelf->io_out_a_ready) & (1U == (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__requests__DOT__head_pop_head_addr))) 
           & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_1__DOT__sche_a_valid));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_2__DOT___T 
        = (((IData)(vlSelf->io_out_a_ready) & (2U == (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__requests__DOT__head_pop_head_addr))) 
           & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_2__DOT__sche_a_valid));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_3__DOT___T 
        = (((IData)(vlSelf->io_out_a_ready) & (3U == (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__requests__DOT__head_pop_head_addr))) 
           & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_3__DOT__sche_a_valid));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_0__DOT___GEN_15 
        = ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_0_io_sinkd_valid) 
           | ((~ ((((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__wipeCount) 
                    >> 1U) & (0U == (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__requests__DOT__head_pop_head_addr))) 
                  & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_0__DOT__sche_dir_valid))) 
              & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_0__DOT__sche_dir_valid)));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_1__DOT___GEN_15 
        = ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_1_io_sinkd_valid) 
           | ((~ ((((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__wipeCount) 
                    >> 1U) & (1U == (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__requests__DOT__head_pop_head_addr))) 
                  & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_1__DOT__sche_dir_valid))) 
              & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_1__DOT__sche_dir_valid)));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_2__DOT___GEN_15 
        = ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_2_io_sinkd_valid) 
           | ((~ ((((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__wipeCount) 
                    >> 1U) & (2U == (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__requests__DOT__head_pop_head_addr))) 
                  & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_2__DOT__sche_dir_valid))) 
              & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_2__DOT__sche_dir_valid)));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_3__DOT___GEN_15 
        = ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_3_io_sinkd_valid) 
           | ((~ ((((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__wipeCount) 
                    >> 1U) & (3U == (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__requests__DOT__head_pop_head_addr))) 
                  & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_3__DOT__sche_dir_valid))) 
              & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_3__DOT__sche_dir_valid)));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__requests__DOT__head_pop_head_data 
        = vlSelf->GPGPU_top__DOT__l2cache__DOT__requests__DOT__head
        [vlSelf->GPGPU_top__DOT__l2cache__DOT__requests__DOT__head_pop_head_addr];
    vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__cc_dir_io_w_req_valid 
        = (1U & (((~ ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__wipeCount) 
                      >> 1U)) & (~ (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__wipeOff))) 
                 | (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT___wen_new_T_3)));
    if ((2U & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__wipeCount))) {
        vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__cc_dir_io_w_req_bits_data_0 
            = ((vlSelf->GPGPU_top__DOT__l2cache__DOT__directory_io_write_bits_data_tag 
                << 1U) | (IData)((0U != (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshr_selectOH))));
        vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__cc_dir_io_w_req_bits_setIdx 
            = (1U & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__directory_io_write_bits_set));
    } else {
        vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__cc_dir_io_w_req_bits_data_0 = 0U;
        vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__cc_dir_io_w_req_bits_setIdx 
            = (1U & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__wipeCount));
    }
    vlSelf->io_out_a_bits_address = ((((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__schedule_a_valid)
                                        ? vlSelf->GPGPU_top__DOT__l2cache__DOT__directory_io_write_bits_data_tag
                                        : vlSelf->GPGPU_top__DOT__l2cache__DOT__write_buffer__DOT__ram_tag
                                       [vlSelf->GPGPU_top__DOT__l2cache__DOT__write_buffer__DOT__deq_ptr_value]) 
                                      << 5U) | ((((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__schedule_a_valid)
                                                   ? (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__directory_io_write_bits_set)
                                                   : 
                                                  vlSelf->GPGPU_top__DOT__l2cache__DOT__write_buffer__DOT__ram_set
                                                  [vlSelf->GPGPU_top__DOT__l2cache__DOT__write_buffer__DOT__deq_ptr_value]) 
                                                 << 4U) 
                                                | ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__schedule_a_valid)
                                                    ? (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__schedule_d_bits_offset)
                                                    : 
                                                   vlSelf->GPGPU_top__DOT__l2cache__DOT__write_buffer__DOT__ram_offset
                                                   [vlSelf->GPGPU_top__DOT__l2cache__DOT__write_buffer__DOT__deq_ptr_value])));
    GPGPU_top__DOT__l2cache__DOT__directory__DOT___cc_dir_io_r_req_valid_T 
        = (((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT___wen_new_T_3) 
            & ((1U & (vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA_io_a_bits_address 
                      >> 4U)) == (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__directory_io_write_bits_set))) 
           & ((vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA_io_a_bits_address 
               >> 5U) == vlSelf->GPGPU_top__DOT__l2cache__DOT__directory_io_write_bits_data_tag));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__setQuash 
        = ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__wen1) 
           & ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__directory_io_write_bits_set) 
              == (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__set)));
    if (vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD_io_req_bits_from_mem) {
        vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD_io_req_bits_size = 0U;
        vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD_io_req_bits_tag 
            = vlSelf->GPGPU_top__DOT__l2cache__DOT__directory_io_write_bits_data_tag;
        vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD_io_req_bits_offset 
            = vlSelf->GPGPU_top__DOT__l2cache__DOT__schedule_d_bits_offset;
        vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD_io_req_bits_data[0U] 
            = (((((1U & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshr_selectOH))
                   ? ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_0__DOT__sink_d_reg)
                       ? vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkD_io_resp_bits_data[0U]
                       : vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_0__DOT__request_data[0U])
                   : 0U) | ((2U & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshr_selectOH))
                             ? ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_1__DOT__sink_d_reg)
                                 ? vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkD_io_resp_bits_data[0U]
                                 : vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_1__DOT__request_data[0U])
                             : 0U)) | ((4U & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshr_selectOH))
                                        ? ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_2__DOT__sink_d_reg)
                                            ? vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkD_io_resp_bits_data[0U]
                                            : vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_2__DOT__request_data[0U])
                                        : 0U)) | ((8U 
                                                   & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshr_selectOH))
                                                   ? 
                                                  ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_3__DOT__sink_d_reg)
                                                    ? 
                                                   vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkD_io_resp_bits_data[0U]
                                                    : 
                                                   vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_3__DOT__request_data[0U])
                                                   : 0U));
        vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD_io_req_bits_data[1U] 
            = (((((1U & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshr_selectOH))
                   ? ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_0__DOT__sink_d_reg)
                       ? vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkD_io_resp_bits_data[1U]
                       : vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_0__DOT__request_data[1U])
                   : 0U) | ((2U & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshr_selectOH))
                             ? ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_1__DOT__sink_d_reg)
                                 ? vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkD_io_resp_bits_data[1U]
                                 : vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_1__DOT__request_data[1U])
                             : 0U)) | ((4U & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshr_selectOH))
                                        ? ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_2__DOT__sink_d_reg)
                                            ? vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkD_io_resp_bits_data[1U]
                                            : vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_2__DOT__request_data[1U])
                                        : 0U)) | ((8U 
                                                   & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshr_selectOH))
                                                   ? 
                                                  ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_3__DOT__sink_d_reg)
                                                    ? 
                                                   vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkD_io_resp_bits_data[1U]
                                                    : 
                                                   vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_3__DOT__request_data[1U])
                                                   : 0U));
        vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD_io_req_bits_data[2U] 
            = (((((1U & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshr_selectOH))
                   ? ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_0__DOT__sink_d_reg)
                       ? vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkD_io_resp_bits_data[2U]
                       : vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_0__DOT__request_data[2U])
                   : 0U) | ((2U & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshr_selectOH))
                             ? ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_1__DOT__sink_d_reg)
                                 ? vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkD_io_resp_bits_data[2U]
                                 : vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_1__DOT__request_data[2U])
                             : 0U)) | ((4U & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshr_selectOH))
                                        ? ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_2__DOT__sink_d_reg)
                                            ? vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkD_io_resp_bits_data[2U]
                                            : vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_2__DOT__request_data[2U])
                                        : 0U)) | ((8U 
                                                   & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshr_selectOH))
                                                   ? 
                                                  ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_3__DOT__sink_d_reg)
                                                    ? 
                                                   vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkD_io_resp_bits_data[2U]
                                                    : 
                                                   vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_3__DOT__request_data[2U])
                                                   : 0U));
        vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD_io_req_bits_data[3U] 
            = (((((1U & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshr_selectOH))
                   ? ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_0__DOT__sink_d_reg)
                       ? vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkD_io_resp_bits_data[3U]
                       : vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_0__DOT__request_data[3U])
                   : 0U) | ((2U & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshr_selectOH))
                             ? ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_1__DOT__sink_d_reg)
                                 ? vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkD_io_resp_bits_data[3U]
                                 : vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_1__DOT__request_data[3U])
                             : 0U)) | ((4U & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshr_selectOH))
                                        ? ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_2__DOT__sink_d_reg)
                                            ? vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkD_io_resp_bits_data[3U]
                                            : vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_2__DOT__request_data[3U])
                                        : 0U)) | ((8U 
                                                   & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshr_selectOH))
                                                   ? 
                                                  ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_3__DOT__sink_d_reg)
                                                    ? 
                                                   vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkD_io_resp_bits_data[3U]
                                                    : 
                                                   vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_3__DOT__request_data[3U])
                                                   : 0U));
        vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD_io_req_bits_way 
            = vlSelf->GPGPU_top__DOT__l2cache__DOT__directory_io_write_bits_way;
        vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD_io_req_bits_mask 
            = (((((1U & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshr_selectOH))
                   ? (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_0__DOT__request_mask)
                   : 0U) | ((2U & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshr_selectOH))
                             ? (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_1__DOT__request_mask)
                             : 0U)) | ((4U & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshr_selectOH))
                                        ? (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_2__DOT__request_mask)
                                        : 0U)) | ((8U 
                                                   & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshr_selectOH))
                                                   ? (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_3__DOT__request_mask)
                                                   : 0U));
        vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD_io_req_bits_set 
            = vlSelf->GPGPU_top__DOT__l2cache__DOT__directory_io_write_bits_set;
        vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD_io_req_bits_opcode 
            = (((((1U & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshr_selectOH))
                   ? (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_0__DOT__request_opcode)
                   : 0U) | ((2U & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshr_selectOH))
                             ? (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_1__DOT__request_opcode)
                             : 0U)) | ((4U & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshr_selectOH))
                                        ? (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_2__DOT__request_opcode)
                                        : 0U)) | ((8U 
                                                   & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshr_selectOH))
                                                   ? (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_3__DOT__request_opcode)
                                                   : 0U));
        vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__head_pop_head_addr 
            = (((((1U & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshr_selectOH))
                   ? (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_0__DOT__request_put)
                   : 0U) | ((2U & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshr_selectOH))
                             ? (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_1__DOT__request_put)
                             : 0U)) | ((4U & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshr_selectOH))
                                        ? (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_2__DOT__request_put)
                                        : 0U)) | ((8U 
                                                   & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshr_selectOH))
                                                   ? (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_3__DOT__request_put)
                                                   : 0U));
        vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD_io_req_bits_source 
            = vlSelf->GPGPU_top__DOT__l2cache__DOT__requests__DOT__data
            [vlSelf->GPGPU_top__DOT__l2cache__DOT__requests__DOT__head_pop_head_data];
    } else {
        vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD_io_req_bits_size 
            = vlSelf->GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__ram_size
            [vlSelf->GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__deq_ptr_value];
        vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD_io_req_bits_tag 
            = vlSelf->GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__ram_tag
            [vlSelf->GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__deq_ptr_value];
        vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD_io_req_bits_offset 
            = vlSelf->GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__ram_offset
            [vlSelf->GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__deq_ptr_value];
        vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD_io_req_bits_data[0U] 
            = vlSelf->GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__ram_data
            [vlSelf->GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__deq_ptr_value][0U];
        vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD_io_req_bits_data[1U] 
            = vlSelf->GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__ram_data
            [vlSelf->GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__deq_ptr_value][1U];
        vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD_io_req_bits_data[2U] 
            = vlSelf->GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__ram_data
            [vlSelf->GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__deq_ptr_value][2U];
        vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD_io_req_bits_data[3U] 
            = vlSelf->GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__ram_data
            [vlSelf->GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__deq_ptr_value][3U];
        vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD_io_req_bits_way 
            = vlSelf->GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__ram_way
            [vlSelf->GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__deq_ptr_value];
        vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD_io_req_bits_mask 
            = vlSelf->GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__ram_mask
            [vlSelf->GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__deq_ptr_value];
        vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD_io_req_bits_set 
            = vlSelf->GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__ram_set
            [vlSelf->GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__deq_ptr_value];
        vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD_io_req_bits_opcode 
            = vlSelf->GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__ram_opcode
            [vlSelf->GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__deq_ptr_value];
        vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__head_pop_head_addr 
            = vlSelf->GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__ram_put
            [vlSelf->GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__deq_ptr_value];
        vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD_io_req_bits_source 
            = vlSelf->GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__ram_source
            [vlSelf->GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__deq_ptr_value];
    }
    vlSelf->GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__do_deq 
        = (1U & ((~ (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__empty)) 
                 & ((~ (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD_io_req_bits_from_mem)) 
                    & (~ (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT__busy)))));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__requests__DOT__head_MPORT_6_en 
        = (0xfU & (((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__requests__DOT__valid) 
                    >> (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__requests__DOT__head_pop_head_addr)) 
                   & ((~ (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT__busy)) 
                      & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD_io_req_bits_from_mem))));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD_io_req_bits_hit 
        = ((~ (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD_io_req_bits_from_mem)) 
           & vlSelf->GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__ram_hit
           [vlSelf->GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__deq_ptr_value]);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT___io_pb_pop_valid_T 
        = (1U & ((~ (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT__busy)) 
                 & ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD_io_req_bits_from_mem)
                     ? (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD_io_req_bits_from_mem)
                     : (~ (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__empty)))));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__requests__DOT____VdfgTmp_h8585db02__0 
        = ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__requests__DOT__head_pop_head_data) 
           == vlSelf->GPGPU_top__DOT__l2cache__DOT__requests__DOT__tail
           [vlSelf->GPGPU_top__DOT__l2cache__DOT__requests__DOT__head_pop_head_addr]);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__cc_dir__DOT__array_0_MPORT_en 
        = ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__cc_dir_io_w_req_valid) 
           | (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__cc_dir__DOT__resetState));
    if (vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__cc_dir__DOT__resetState) {
        vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__cc_dir__DOT__array_0_MPORT_data = 0U;
        vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__cc_dir__DOT__array_0_MPORT_addr 
            = vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__cc_dir__DOT__wrap_wrap;
    } else {
        vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__cc_dir__DOT__array_0_MPORT_data 
            = vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__cc_dir_io_w_req_bits_data_0;
        vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__cc_dir__DOT__array_0_MPORT_addr 
            = vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__cc_dir_io_w_req_bits_setIdx;
    }
    vlSelf->GPGPU_top__DOT__l2cache__DOT__directory_io_read_ready 
        = (1U & (((~ (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT___wen_new_T_3)) 
                  & ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__wipeCount) 
                     >> 1U)) | (IData)(GPGPU_top__DOT__l2cache__DOT__directory__DOT___cc_dir_io_r_req_valid_T)));
    GPGPU_top__DOT__l2cache__DOT__directory__DOT___io_result_bits_hit_T 
        = ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__setQuash) 
           & (vlSelf->GPGPU_top__DOT__l2cache__DOT__directory_io_write_bits_data_tag 
              == vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__tag));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__hitWay_lo 
        = (((((0x7ffffffU & (vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__cc_dir_io_r_resp_data_1 
                             >> 1U)) == vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__tag) 
             & ((~ (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__setQuash)) 
                & vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__cc_dir_io_r_resp_data_1)) 
            << 1U) | (((0x7ffffffU & (vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__cc_dir_io_r_resp_data_0 
                                      >> 1U)) == vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__tag) 
                      & ((~ (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__setQuash)) 
                         & vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__cc_dir_io_r_resp_data_0)));
    GPGPU_top__DOT__l2cache__DOT__directory__DOT___hits_T_11 
        = (((0x7ffffffU & (vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__cc_dir_io_r_resp_data_2 
                           >> 1U)) == vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__tag) 
           & ((~ (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__setQuash)) 
              & vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__cc_dir_io_r_resp_data_2));
    GPGPU_top__DOT__l2cache__DOT__directory__DOT___hits_T_15 
        = (((0x7ffffffU & (vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__cc_dir_io_r_resp_data_3 
                           >> 1U)) == vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__tag) 
           & ((~ (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__setQuash)) 
              & vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__cc_dir_io_r_resp_data_3));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__head_pop_head_data 
        = vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__head
        [vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__head_pop_head_addr];
    vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__head_MPORT_6_en 
        = (0xfU & (((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__valid) 
                    >> (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__head_pop_head_addr)) 
                   & ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT___io_pb_pop_valid_T) 
                      & (((0U == (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD_io_req_bits_opcode)) 
                          | (1U == (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD_io_req_bits_opcode))) 
                         & ((~ (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD_io_req_bits_from_mem)) 
                            & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD_io_req_bits_hit))))));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__ren 
        = ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__directory_io_read_ready) 
           & ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA_io_a_valid) 
              & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT____VdfgTmp_hdfd098f5__0)));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT___T_1 
        = ((0U != (0xfU & (~ (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__requests__DOT__valid)))) 
           & ((~ (IData)((0xfU == (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__requests__DOT__used)))) 
              & ((4U == (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA_io_req_bits_opcode))
                  ? (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__directory_io_read_ready)
                  : ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__wipeCount) 
                     >> 1U))));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__hitWay_hi 
        = (((IData)(GPGPU_top__DOT__l2cache__DOT__directory__DOT___hits_T_15) 
            << 1U) | (IData)(GPGPU_top__DOT__l2cache__DOT__directory__DOT___hits_T_11));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__hits 
        = (((IData)(GPGPU_top__DOT__l2cache__DOT__directory__DOT___hits_T_15) 
            << 3U) | (((IData)(GPGPU_top__DOT__l2cache__DOT__directory__DOT___hits_T_11) 
                       << 2U) | (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__hitWay_lo)));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT____VdfgTmp_h8585db02__0 
        = ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__head_pop_head_data) 
           == vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__tail
           [vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__head_pop_head_addr]);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__data_io_data_MPORT_data[0U] 
        = vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__data
        [vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__head_pop_head_data][0U];
    vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__data_io_data_MPORT_data[1U] 
        = vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__data
        [vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__head_pop_head_data][1U];
    vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__data_io_data_MPORT_data[2U] 
        = vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__data
        [vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__head_pop_head_data][2U];
    vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__data_io_data_MPORT_data[3U] 
        = vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__data
        [vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__head_pop_head_data][3U];
    vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__data_io_data_MPORT_data[4U] 
        = vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__data
        [vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__head_pop_head_data][4U];
    if (vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT___io_pb_pop_valid_T) {
        vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__reqs_2_index 
            = vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD_io_req_bits_way;
        vlSelf->GPGPU_top__DOT__l2cache__DOT__write_buffer__DOT__ram_mask_MPORT_data 
            = vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD_io_req_bits_mask;
        vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__sourceD_rreq_select_shiftAmount 
            = vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD_io_req_bits_set;
        vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT___GEN_0 
            = vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD_io_req_bits_opcode;
        vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT___GEN_12[0U] 
            = ((vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__data_io_data_MPORT_data[1U] 
                << 0x1cU) | (vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__data_io_data_MPORT_data[0U] 
                             >> 4U));
        vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT___GEN_12[1U] 
            = ((vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__data_io_data_MPORT_data[2U] 
                << 0x1cU) | (vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__data_io_data_MPORT_data[1U] 
                             >> 4U));
        vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT___GEN_12[2U] 
            = ((vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__data_io_data_MPORT_data[3U] 
                << 0x1cU) | (vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__data_io_data_MPORT_data[2U] 
                             >> 4U));
        vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT___GEN_12[3U] 
            = ((vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__data_io_data_MPORT_data[4U] 
                << 0x1cU) | (vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__data_io_data_MPORT_data[3U] 
                             >> 4U));
        vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD_io_bs_wadr_bits_mask 
            = (0xfU & vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__data_io_data_MPORT_data[0U]);
    } else {
        vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__reqs_2_index 
            = vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT__s1_req_reg_way;
        vlSelf->GPGPU_top__DOT__l2cache__DOT__write_buffer__DOT__ram_mask_MPORT_data 
            = vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT__s1_req_reg_mask;
        vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__sourceD_rreq_select_shiftAmount 
            = vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT__s1_req_reg_set;
        vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT___GEN_0 
            = vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT__s1_req_reg_opcode;
        vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT___GEN_12[0U] 
            = vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT__pb_beat_reg_data[0U];
        vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT___GEN_12[1U] 
            = vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT__pb_beat_reg_data[1U];
        vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT___GEN_12[2U] 
            = vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT__pb_beat_reg_data[2U];
        vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT___GEN_12[3U] 
            = vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT__pb_beat_reg_data[3U];
        vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD_io_bs_wadr_bits_mask 
            = (0xfU & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT__pb_beat_reg_mask));
    }
    vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT___used_T_1 
        = (((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__head_MPORT_6_en)
             ? (~ ((IData)(1U) << (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__head_pop_head_data)))
             : 0xfU) & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__used));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT____VdfgTmp_hb8a87d06__0 
        = ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__head_MPORT_6_en) 
           | (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__head_MPORT_9_en));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT___GEN_2 
        = (0xfU & ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__head_MPORT_6_en)
                    ? ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__head_MPORT_9_en)
                        ? (((IData)(1U) << (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__head_pop_head_addr)) 
                           | ((IData)(1U) << (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__head_pop_head2_MPORT_addr)))
                        : ((IData)(1U) << (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__head_pop_head_addr)))
                    : ((IData)(1U) << (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__head_pop_head2_MPORT_addr))));
    if (vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT____VdfgTmp_hc0824628__0) {
        vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_0_io_r_req_bits_setIdx 
            = vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__reqs_0_index;
        vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_1_io_r_req_bits_setIdx 
            = vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__reqs_0_index;
        vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_2_io_r_req_bits_setIdx 
            = vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__reqs_0_index;
        vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_3_io_r_req_bits_setIdx 
            = vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__reqs_0_index;
    } else {
        vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_0_io_r_req_bits_setIdx 
            = vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__reqs_2_index;
        vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_1_io_r_req_bits_setIdx 
            = vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__reqs_2_index;
        vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_2_io_r_req_bits_setIdx 
            = vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__reqs_2_index;
        vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_3_io_r_req_bits_setIdx 
            = vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__reqs_2_index;
    }
    if (vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT____VdfgTmp_hc46625d2__0) {
        vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_4_io_r_req_bits_setIdx 
            = vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__reqs_0_index;
        vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_5_io_r_req_bits_setIdx 
            = vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__reqs_0_index;
        vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_6_io_r_req_bits_setIdx 
            = vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__reqs_0_index;
        vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_7_io_r_req_bits_setIdx 
            = vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__reqs_0_index;
    } else {
        vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_4_io_r_req_bits_setIdx 
            = vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__reqs_2_index;
        vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_5_io_r_req_bits_setIdx 
            = vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__reqs_2_index;
        vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_6_io_r_req_bits_setIdx 
            = vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__reqs_2_index;
        vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_7_io_r_req_bits_setIdx 
            = vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__reqs_2_index;
    }
    GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT___sourceD_wreq_out_bankSel_T_6 
        = ((((2U & ((IData)(1U) << (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__sourceD_rreq_select_shiftAmount)))
              ? 0xfU : 0U) << 4U) | ((1U & ((IData)(1U) 
                                            << (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__sourceD_rreq_select_shiftAmount)))
                                      ? 0xfU : 0U));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT___s1_need_w_T_2 
        = ((0U == (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT___GEN_0)) 
           | (1U == (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT___GEN_0)));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__cc_dir_io_r_req_valid 
        = ((~ (IData)(GPGPU_top__DOT__l2cache__DOT__directory__DOT___cc_dir_io_r_req_valid_T)) 
           & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__ren));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT___T_2 
        = ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA_io_a_valid) 
           & ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT___T_1) 
              & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__hasData)));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA_io_a_ready 
        = ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT___T_1) 
           & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT____VdfgTmp_hdfd098f5__0));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT___hitWay_T_1 
        = ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__hitWay_hi) 
           | (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__hitWay_lo));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__ram_hit_MPORT_data 
        = ((0U != (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__hits)) 
           | (IData)(GPGPU_top__DOT__l2cache__DOT__directory__DOT___io_result_bits_hit_T));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT___valid_T_1 
        = (((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__head_MPORT_6_en)
             ? ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT____VdfgTmp_h8585db02__0)
                 ? (~ ((IData)(1U) << (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__head_pop_head_addr)))
                 : 0xfU) : 0xfU) & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__valid));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__reqs_2_bankSel 
        = (((~ ((~ (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT___io_pb_pop_valid_T)) 
                & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT__read_sent_reg))) 
            & (4U == (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT___GEN_0)))
            ? ((IData)(GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT___sourceD_wreq_out_bankSel_T_6) 
               & (((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__write_buffer__DOT__ram_mask_MPORT_data) 
                   << 4U) | (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__write_buffer__DOT__ram_mask_MPORT_data)))
            : 0U);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT___GEN_23 
        = ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT___s1_need_w_T_2)
            ? ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__write_buffer__DOT__full)
                ? 2U : 3U) : (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT__stateReg));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__write_buffer__DOT__ram_opcode_MPORT_en 
        = ((~ (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__write_buffer__DOT__full)) 
           & ((~ ((~ (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT___io_pb_pop_valid_T)) 
                  & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT__sourceA_sent_reg))) 
              & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT___s1_need_w_T_2)));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT__s1_need_w 
        = ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT___s1_need_w_T_2) 
           & ((~ ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT___io_pb_pop_valid_T)
                   ? (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD_io_req_bits_from_mem)
                   : (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT__s1_req_reg_from_mem))) 
              & ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT___io_pb_pop_valid_T)
                  ? (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD_io_req_bits_hit)
                  : (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT__s1_req_reg_hit))));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT___lists_T_2 
        = (0xfU & (((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT____VdfgTmp_hb8a87d06__0)
                     ? (~ (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT___GEN_2))
                     : 0xfU) & ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__lists) 
                                | (((~ (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__buf_block)) 
                                    & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT___T_2))
                                    ? (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT___freeOH_T_11)
                                    : 0U))));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__tail_MPORT_3_en 
        = ((~ (IData)((0xfU == (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__used)))) 
           & ((~ (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__set_block)) 
              & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT___T_2)));
    vlSelf->GPGPU_top__DOT__sm2L2Arb__DOT__memReqArb_io_in_1_ready 
        = ((~ (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.io_memReq_valid)) 
           & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA_io_a_ready));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__ram_way_MPORT_data 
        = ((0U != (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__hits))
            ? (((IData)((0U != (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__hitWay_hi))) 
                << 1U) | (1U & ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT___hitWay_T_1) 
                                >> 1U))) : ((IData)(GPGPU_top__DOT__l2cache__DOT__directory__DOT___io_result_bits_hit_T)
                                             ? (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__directory_io_write_bits_way)
                                             : ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__set)
                                                 ? (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__state_reg_1)
                                                 : (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__state_reg))));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__ram_opcode_MPORT_en 
        = ((~ ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__ptr_match) 
               & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__maybe_full))) 
           & ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__ram_hit_MPORT_data) 
              & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__ren1)));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__requests__DOT__tail_MPORT_3_en 
        = ((~ (IData)((0xfU == (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__requests__DOT__used)))) 
           & ((~ (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__ram_hit_MPORT_data)) 
              & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__ren1)));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__tagMatches 
        = ((0xfffffff8U & ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__requests__DOT__valid) 
                           & (((~ (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__ram_hit_MPORT_data)) 
                               & (vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__io_result_bits_tag_REG 
                                  == vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_3__DOT__request_tag)) 
                              << 3U))) | ((0xfffffffcU 
                                           & ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__requests__DOT__valid) 
                                              & (((~ (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__ram_hit_MPORT_data)) 
                                                  & (vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__io_result_bits_tag_REG 
                                                     == vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_2__DOT__request_tag)) 
                                                 << 2U))) 
                                          | ((0xfffffffeU 
                                              & ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__requests__DOT__valid) 
                                                 & (((~ (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__ram_hit_MPORT_data)) 
                                                     & (vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__io_result_bits_tag_REG 
                                                        == vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_1__DOT__request_tag)) 
                                                    << 1U))) 
                                             | ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__requests__DOT__valid) 
                                                & ((~ (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__ram_hit_MPORT_data)) 
                                                   & (vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__io_result_bits_tag_REG 
                                                      == vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_0__DOT__request_tag))))));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT___sourceD_wreq_ready_T_1 
        = (((IData)(vlSelf->io_out_d_valid) ? ((1U 
                                                & ((IData)(1U) 
                                                   << (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__sinkD_req_select_shiftAmount)))
                                                ? 0xfU
                                                : 0U)
             : 0U) & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD_io_bs_wadr_bits_mask));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT___sourceD_wreq_ready_T_5 
        = (((IData)(vlSelf->io_out_d_valid) ? ((2U 
                                                & ((IData)(1U) 
                                                   << (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__sinkD_req_select_shiftAmount)))
                                                ? 0xfU
                                                : 0U)
             : 0U) & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD_io_bs_wadr_bits_mask));
    GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT___sourceD_wreq_out_bankSel_T_8 
        = ((IData)(GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT___sourceD_wreq_out_bankSel_T_6) 
           & (((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD_io_bs_wadr_bits_mask) 
               << 4U) | (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD_io_bs_wadr_bits_mask)));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD_io_bs_wadr_valid 
        = ((~ ((~ (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT___io_pb_pop_valid_T)) 
               & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT__write_sent_reg))) 
           & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT__s1_need_w));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__next_MPORT_1_en 
        = ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__tail_MPORT_3_en) 
           & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT___push_valid_T));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__requests__DOT___used_T_4 
        = (0xfU & ((((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__requests__DOT__head_MPORT_6_en)
                      ? (~ ((IData)(1U) << (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__requests__DOT__head_pop_head_data)))
                      : 0xfU) & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__requests__DOT__used)) 
                   | ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__requests__DOT__tail_MPORT_3_en)
                       ? (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__requests__DOT__freeOH)
                       : 0U)));
    vlSelf->GPGPU_top__DOT__l2cache__DOT___requests_io_push_bits_index_T 
        = ((0U != (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__tagMatches))
            ? (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__tagMatches)
            : (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshr_insertOH));
    GPGPU_top__DOT__l2cache__DOT____VdfgTmp_h5c21289d__0 
        = ((~ (IData)((0U != (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__tagMatches)))) 
           & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__ren1));
    if (vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD_io_bs_wadr_valid) {
        vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__regout_sel_1 
            = (1U & (IData)(GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT___sourceD_wreq_out_bankSel_T_8));
        vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__regout_sel_1_1 
            = (1U & ((IData)(GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT___sourceD_wreq_out_bankSel_T_8) 
                     >> 1U));
        vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__regout_sel_1_2 
            = (1U & ((IData)(GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT___sourceD_wreq_out_bankSel_T_8) 
                     >> 2U));
        vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__regout_sel_1_3 
            = (1U & ((IData)(GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT___sourceD_wreq_out_bankSel_T_8) 
                     >> 3U));
        vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__regout_sel_1_4 
            = (1U & ((IData)(GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT___sourceD_wreq_out_bankSel_T_8) 
                     >> 4U));
        vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__regout_sel_1_5 
            = (1U & ((IData)(GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT___sourceD_wreq_out_bankSel_T_8) 
                     >> 5U));
        vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__regout_sel_1_6 
            = (1U & ((IData)(GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT___sourceD_wreq_out_bankSel_T_8) 
                     >> 6U));
        vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__regout_sel_1_7 
            = ((IData)(GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT___sourceD_wreq_out_bankSel_T_8) 
               >> 7U);
        vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__reqs_1_bankSel 
            = GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT___sourceD_wreq_out_bankSel_T_8;
    } else {
        vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__regout_sel_1 = 0U;
        vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__regout_sel_1_1 = 0U;
        vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__regout_sel_1_2 = 0U;
        vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__regout_sel_1_3 = 0U;
        vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__regout_sel_1_4 = 0U;
        vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__regout_sel_1_5 = 0U;
        vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__regout_sel_1_6 = 0U;
        vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__regout_sel_1_7 = 0U;
        vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__reqs_1_bankSel = 0U;
    }
    vlSelf->GPGPU_top__DOT__l2cache__DOT___requests_io_push_bits_index_T_2 
        = (0xfU & ((1U & ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT___requests_io_push_bits_index_T) 
                          >> 4U)) | (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT___requests_io_push_bits_index_T)));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_0_io_allocate_valid 
        = ((IData)(GPGPU_top__DOT__l2cache__DOT____VdfgTmp_h5c21289d__0) 
           & ((~ (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__ram_hit_MPORT_data)) 
              & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshr_insertOH)));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_1_io_allocate_valid 
        = ((IData)(GPGPU_top__DOT__l2cache__DOT____VdfgTmp_h5c21289d__0) 
           & ((~ (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__ram_hit_MPORT_data)) 
              & ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshr_insertOH) 
                 >> 1U)));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_2_io_allocate_valid 
        = ((IData)(GPGPU_top__DOT__l2cache__DOT____VdfgTmp_h5c21289d__0) 
           & ((~ (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__ram_hit_MPORT_data)) 
              & ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshr_insertOH) 
                 >> 2U)));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_3_io_allocate_valid 
        = ((IData)(GPGPU_top__DOT__l2cache__DOT____VdfgTmp_h5c21289d__0) 
           & ((~ (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__ram_hit_MPORT_data)) 
              & ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshr_insertOH) 
                 >> 3U)));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__regout_wen 
        = ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT____VdfgTmp_hc0824628__0) 
           | (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__regout_sel_1));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__regout_wen_1 
        = ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT____VdfgTmp_hc0824628__0) 
           | (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__regout_sel_1_1));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__regout_wen_2 
        = ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT____VdfgTmp_hc0824628__0) 
           | (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__regout_sel_1_2));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__regout_wen_3 
        = ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT____VdfgTmp_hc0824628__0) 
           | (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__regout_sel_1_3));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__regout_wen_4 
        = ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT____VdfgTmp_hc46625d2__0) 
           | (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__regout_sel_1_4));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__regout_wen_5 
        = ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT____VdfgTmp_hc46625d2__0) 
           | (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__regout_sel_1_5));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__regout_wen_6 
        = ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT____VdfgTmp_hc46625d2__0) 
           | (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__regout_sel_1_6));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__regout_wen_7 
        = ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT____VdfgTmp_hc46625d2__0) 
           | (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__regout_sel_1_7));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__reqs_1_bankEn 
        = ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__reqs_1_bankSel) 
           & ((((0U != (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT___sourceD_wreq_ready_T_5))
                 ? 0U : 0xfU) << 4U) | ((0U != (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT___sourceD_wreq_ready_T_1))
                                         ? 0U : 0xfU)));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__reqs_2_bankSum 
        = ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__reqs_1_bankSel) 
           | ((IData)(vlSelf->io_out_d_valid) ? (((
                                                   (2U 
                                                    & ((IData)(1U) 
                                                       << (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__sinkD_req_select_shiftAmount)))
                                                    ? 0xfU
                                                    : 0U) 
                                                  << 4U) 
                                                 | ((1U 
                                                     & ((IData)(1U) 
                                                        << (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__sinkD_req_select_shiftAmount)))
                                                     ? 0xfU
                                                     : 0U))
               : 0U));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__requests__DOT__head_MPORT_2_addr 
        = (((IData)((0U != (3U & ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT___requests_io_push_bits_index_T_2) 
                                  >> 2U)))) << 1U) 
           | (IData)((0U != (0xaU & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT___requests_io_push_bits_index_T_2)))));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_0__DOT___GEN_12 
        = ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_0_io_allocate_valid) 
           | (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_0__DOT__sche_a_valid));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_0__DOT___GEN_16 
        = ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_0_io_sinkd_valid) 
           | ((~ (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_0_io_allocate_valid)) 
              & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_0__DOT__sink_d_reg)));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_1__DOT___GEN_12 
        = ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_1_io_allocate_valid) 
           | (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_1__DOT__sche_a_valid));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_1__DOT___GEN_16 
        = ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_1_io_sinkd_valid) 
           | ((~ (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_1_io_allocate_valid)) 
              & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_1__DOT__sink_d_reg)));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_2__DOT___GEN_12 
        = ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_2_io_allocate_valid) 
           | (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_2__DOT__sche_a_valid));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_2__DOT___GEN_16 
        = ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_2_io_sinkd_valid) 
           | ((~ (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_2_io_allocate_valid)) 
              & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_2__DOT__sink_d_reg)));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_3__DOT___GEN_12 
        = ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_3_io_allocate_valid) 
           | (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_3__DOT__sche_a_valid));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_3__DOT___GEN_16 
        = ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_3_io_sinkd_valid) 
           | ((~ (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_3_io_allocate_valid)) 
              & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_3__DOT__sink_d_reg)));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT___sourceD_rreq_ready_T_1 
        = ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__reqs_2_bankSum) 
           & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__write_buffer__DOT__ram_mask_MPORT_data));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT___sourceD_rreq_ready_T_5 
        = (((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__reqs_2_bankSum) 
            >> 4U) & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__write_buffer__DOT__ram_mask_MPORT_data));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__requests__DOT__tail_push_tail_data 
        = vlSelf->GPGPU_top__DOT__l2cache__DOT__requests__DOT__tail
        [vlSelf->GPGPU_top__DOT__l2cache__DOT__requests__DOT__head_MPORT_2_addr];
    vlSelf->GPGPU_top__DOT__l2cache__DOT__requests__DOT___valid_T_4 
        = (0xfU & ((((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__requests__DOT__head_MPORT_6_en)
                      ? ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__requests__DOT____VdfgTmp_h8585db02__0)
                          ? (~ ((IData)(1U) << (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__requests__DOT__head_pop_head_addr)))
                          : 0xfU) : 0xfU) & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__requests__DOT__valid)) 
                   | ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__requests__DOT__tail_MPORT_3_en)
                       ? ((IData)(1U) << (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__requests__DOT__head_MPORT_2_addr))
                       : 0U)));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__requests__DOT___push_valid_T 
        = (0xfU & ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__requests__DOT__valid) 
                   >> (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__requests__DOT__head_MPORT_2_addr)));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT___sourceD_rreq_out_bankEn_T_6 
        = ((((0U != (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT___sourceD_rreq_ready_T_5))
              ? 0U : 0xfU) << 4U) | ((0U != (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT___sourceD_rreq_ready_T_1))
                                      ? 0U : 0xfU));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__requests__DOT__next_MPORT_1_en 
        = ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__requests__DOT__tail_MPORT_3_en) 
           & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__requests__DOT___push_valid_T));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__reqs_2_bankEn 
        = ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__reqs_2_bankSel) 
           & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT___sourceD_rreq_out_bankEn_T_6));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__regout_en 
        = (1U & ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT____VdfgTmp_hc0824628__0) 
                 | ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__reqs_1_bankEn) 
                    | (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__reqs_2_bankEn))));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__regout_en_1 
        = (1U & ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT____VdfgTmp_hc0824628__0) 
                 | (((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__reqs_1_bankEn) 
                     | (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__reqs_2_bankEn)) 
                    >> 1U)));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__regout_en_2 
        = (1U & ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT____VdfgTmp_hc0824628__0) 
                 | (((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__reqs_1_bankEn) 
                     | (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__reqs_2_bankEn)) 
                    >> 2U)));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__regout_en_3 
        = (1U & ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT____VdfgTmp_hc0824628__0) 
                 | (((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__reqs_1_bankEn) 
                     | (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__reqs_2_bankEn)) 
                    >> 3U)));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__regout_en_4 
        = (1U & ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT____VdfgTmp_hc46625d2__0) 
                 | (((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__reqs_1_bankEn) 
                     | (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__reqs_2_bankEn)) 
                    >> 4U)));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__regout_en_5 
        = (1U & ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT____VdfgTmp_hc46625d2__0) 
                 | (((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__reqs_1_bankEn) 
                     | (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__reqs_2_bankEn)) 
                    >> 5U)));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__regout_en_6 
        = (1U & ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT____VdfgTmp_hc46625d2__0) 
                 | (((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__reqs_1_bankEn) 
                     | (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__reqs_2_bankEn)) 
                    >> 6U)));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__regout_en_7 
        = (1U & ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT____VdfgTmp_hc46625d2__0) 
                 | (((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__reqs_1_bankEn) 
                     | (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__reqs_2_bankEn)) 
                    >> 7U)));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_0_io_r_req_valid 
        = ((~ (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__regout_wen)) 
           & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__regout_en));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_0_io_w_req_valid 
        = ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__regout_wen) 
           & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__regout_en));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_1_io_r_req_valid 
        = ((~ (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__regout_wen_1)) 
           & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__regout_en_1));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_1_io_w_req_valid 
        = ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__regout_wen_1) 
           & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__regout_en_1));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_2_io_r_req_valid 
        = ((~ (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__regout_wen_2)) 
           & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__regout_en_2));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_2_io_w_req_valid 
        = ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__regout_wen_2) 
           & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__regout_en_2));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_3_io_r_req_valid 
        = ((~ (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__regout_wen_3)) 
           & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__regout_en_3));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_3_io_w_req_valid 
        = ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__regout_wen_3) 
           & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__regout_en_3));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_4_io_r_req_valid 
        = ((~ (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__regout_wen_4)) 
           & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__regout_en_4));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_4_io_w_req_valid 
        = ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__regout_wen_4) 
           & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__regout_en_4));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_5_io_r_req_valid 
        = ((~ (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__regout_wen_5)) 
           & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__regout_en_5));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_5_io_w_req_valid 
        = ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__regout_wen_5) 
           & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__regout_en_5));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_6_io_r_req_valid 
        = ((~ (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__regout_wen_6)) 
           & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__regout_en_6));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_6_io_w_req_valid 
        = ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__regout_wen_6) 
           & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__regout_en_6));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_7_io_r_req_valid 
        = ((~ (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__regout_wen_7)) 
           & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__regout_en_7));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_7_io_w_req_valid 
        = ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__regout_wen_7) 
           & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__regout_en_7));
}

void VVentus_SM_wrapper___ico_sequent__TOP__GPGPU_top__DOT__SM_wrapper__0(VVentus_SM_wrapper* vlSelf);
void VVentus_SM_wrapper___ico_sequent__TOP__GPGPU_top__DOT__SM_wrapper_1__0(VVentus_SM_wrapper* vlSelf);

void VVentus___024root___eval_ico(VVentus___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VVentus__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VVentus___024root___eval_ico\n"); );
    // Body
    if (vlSelf->__VicoTriggered.at(0U)) {
        VVentus___024root___ico_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        VVentus_SM_wrapper___ico_sequent__TOP__GPGPU_top__DOT__SM_wrapper__0((&vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper));
        VVentus_SM_wrapper___ico_sequent__TOP__GPGPU_top__DOT__SM_wrapper_1__0((&vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1));
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VVentus___024root___dump_triggers__act(VVentus___024root* vlSelf);
#endif  // VL_DEBUG

void VVentus___024root___eval_triggers__act(VVentus___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VVentus__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VVentus___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.at(0U) = ((IData)(vlSelf->clock) 
                                      & (~ (IData)(vlSelf->__Vtrigrprev__TOP__clock)));
    vlSelf->__Vtrigrprev__TOP__clock = vlSelf->clock;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VVentus___024root___dump_triggers__act(vlSelf);
    }
#endif
}

VL_INLINE_OPT void VVentus___024root___nba_sequent__TOP__0(VVentus___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VVentus__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VVentus___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__prefer_select__DOT___GEN_1;
    CData/*0:0*/ GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__prefer_select__DOT___GEN_5;
    CData/*2:0*/ GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__prefer_select__DOT___GEN_9;
    CData/*0:0*/ GPGPU_top__DOT__l2cache__DOT___mshr_request_T_4;
    CData/*0:0*/ GPGPU_top__DOT__l2cache__DOT___mshr_request_T_9;
    CData/*0:0*/ GPGPU_top__DOT__l2cache__DOT___mshr_request_T_14;
    CData/*0:0*/ GPGPU_top__DOT__l2cache__DOT___mshr_request_T_19;
    CData/*7:0*/ GPGPU_top__DOT__l2cache__DOT___mshr_selectOH2_T_2;
    CData/*7:0*/ GPGPU_top__DOT__l2cache__DOT___mshr_selectOH2_T_5;
    CData/*3:0*/ GPGPU_top__DOT__l2cache__DOT___mshr_insertOH_init_T_3;
    CData/*0:0*/ GPGPU_top__DOT__l2cache__DOT____VdfgTmp_h5c21289d__0;
    CData/*3:0*/ GPGPU_top__DOT__l2cache__DOT__sinkA__DOT___freeOH_T_3;
    CData/*3:0*/ GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT___freeOH_T_3;
    CData/*0:0*/ GPGPU_top__DOT__l2cache__DOT__directory__DOT___hits_T_11;
    CData/*0:0*/ GPGPU_top__DOT__l2cache__DOT__directory__DOT___hits_T_15;
    CData/*0:0*/ GPGPU_top__DOT__l2cache__DOT__directory__DOT___io_result_bits_hit_T;
    CData/*7:0*/ GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT___sourceD_wreq_out_bankSel_T_6;
    CData/*7:0*/ GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT___sourceD_wreq_out_bankSel_T_8;
    CData/*3:0*/ GPGPU_top__DOT__l2cache__DOT__requests__DOT___freeOH_T_3;
    CData/*3:0*/ __Vdly__GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__inflight_tbl_rd_host_st;
    CData/*0:0*/ __Vdly__GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__dis_controller_wg_alloc_valid_i;
    CData/*0:0*/ __Vdlyvdim0__GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__ram_wg_waiting_allocation__DOT__mem__v0;
    QData/*57:0*/ __Vdlyvval__GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__ram_wg_waiting_allocation__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__ram_wg_waiting_allocation__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvdim0__GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__ram_wg_ready_start__DOT__mem__v0;
    VlWide<4>/*104:0*/ __Vdlyvval__GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__ram_wg_ready_start__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__ram_wg_ready_start__DOT__mem__v0;
    CData/*2:0*/ __Vdly__GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__curr_alloc_wf_count;
    CData/*1:0*/ __Vdly__GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__alloc_st;
    CData/*1:0*/ __Vdlyvdim0__GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__info_ram__DOT__mem__v0;
    CData/*7:0*/ __Vdlyvval__GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__info_ram__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__info_ram__DOT__mem__v0;
    CData/*2:0*/ __Vdly__GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__curr_alloc_wf_count;
    CData/*1:0*/ __Vdly__GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__alloc_st;
    CData/*1:0*/ __Vdlyvdim0__GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__info_ram__DOT__mem__v0;
    CData/*7:0*/ __Vdlyvval__GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__info_ram__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__info_ram__DOT__mem__v0;
    CData/*2:0*/ __Vdlyvdim0__GPGPU_top__DOT__cta__DOT__wf_done_interface__DOT__buffer__DOT__ram__v0;
    CData/*4:0*/ __Vdlyvval__GPGPU_top__DOT__cta__DOT__wf_done_interface__DOT__buffer__DOT__ram__v0;
    CData/*0:0*/ __Vdlyvset__GPGPU_top__DOT__cta__DOT__wf_done_interface__DOT__buffer__DOT__ram__v0;
    CData/*1:0*/ __Vdly__GPGPU_top__DOT__l2cache__DOT__sourceD__DOT__stateReg;
    CData/*1:0*/ __Vdlyvdim0__GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__head__v0;
    CData/*1:0*/ __Vdlyvval__GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__head__v0;
    CData/*0:0*/ __Vdlyvset__GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__head__v0;
    CData/*1:0*/ __Vdlyvdim0__GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__head__v1;
    CData/*1:0*/ __Vdlyvval__GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__head__v1;
    CData/*0:0*/ __Vdlyvset__GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__head__v1;
    CData/*1:0*/ __Vdlyvdim0__GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__head__v2;
    CData/*1:0*/ __Vdlyvval__GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__head__v2;
    CData/*0:0*/ __Vdlyvset__GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__head__v2;
    CData/*1:0*/ __Vdlyvdim0__GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__tail__v0;
    CData/*1:0*/ __Vdlyvval__GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__tail__v0;
    CData/*0:0*/ __Vdlyvset__GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__tail__v0;
    CData/*1:0*/ __Vdlyvdim0__GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__next__v0;
    CData/*1:0*/ __Vdlyvval__GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__next__v0;
    CData/*0:0*/ __Vdlyvset__GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__next__v0;
    CData/*1:0*/ __Vdlyvdim0__GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__data__v0;
    VlWide<5>/*131:0*/ __Vdlyvval__GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__data__v0;
    CData/*0:0*/ __Vdlyvset__GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__data__v0;
    CData/*0:0*/ __Vdlyvdim0__GPGPU_top__DOT__l2cache__DOT__directory__DOT__cc_dir__DOT__array_3__v0;
    IData/*27:0*/ __Vdlyvval__GPGPU_top__DOT__l2cache__DOT__directory__DOT__cc_dir__DOT__array_3__v0;
    CData/*0:0*/ __Vdlyvset__GPGPU_top__DOT__l2cache__DOT__directory__DOT__cc_dir__DOT__array_3__v0;
    CData/*0:0*/ __Vdly__GPGPU_top__DOT__l2cache__DOT__directory__DOT__cc_dir__DOT__wrap_wrap;
    CData/*0:0*/ __Vdlyvdim0__GPGPU_top__DOT__l2cache__DOT__directory__DOT__cc_dir__DOT__array_0__v0;
    IData/*27:0*/ __Vdlyvval__GPGPU_top__DOT__l2cache__DOT__directory__DOT__cc_dir__DOT__array_0__v0;
    CData/*0:0*/ __Vdlyvset__GPGPU_top__DOT__l2cache__DOT__directory__DOT__cc_dir__DOT__array_0__v0;
    CData/*0:0*/ __Vdlyvdim0__GPGPU_top__DOT__l2cache__DOT__directory__DOT__cc_dir__DOT__array_1__v0;
    IData/*27:0*/ __Vdlyvval__GPGPU_top__DOT__l2cache__DOT__directory__DOT__cc_dir__DOT__array_1__v0;
    CData/*0:0*/ __Vdlyvset__GPGPU_top__DOT__l2cache__DOT__directory__DOT__cc_dir__DOT__array_1__v0;
    CData/*0:0*/ __Vdlyvdim0__GPGPU_top__DOT__l2cache__DOT__directory__DOT__cc_dir__DOT__array_2__v0;
    IData/*27:0*/ __Vdlyvval__GPGPU_top__DOT__l2cache__DOT__directory__DOT__cc_dir__DOT__array_2__v0;
    CData/*0:0*/ __Vdlyvset__GPGPU_top__DOT__l2cache__DOT__directory__DOT__cc_dir__DOT__array_2__v0;
    CData/*1:0*/ __Vdlyvdim0__GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_0__DOT__array_0__v0;
    IData/*31:0*/ __Vdlyvval__GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_0__DOT__array_0__v0;
    CData/*0:0*/ __Vdlyvset__GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_0__DOT__array_0__v0;
    QData/*63:0*/ __Vdly__GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_0__DOT__bypass_wdata_lfsr;
    CData/*1:0*/ __Vdlyvdim0__GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_1__DOT__array_0__v0;
    IData/*31:0*/ __Vdlyvval__GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_1__DOT__array_0__v0;
    CData/*0:0*/ __Vdlyvset__GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_1__DOT__array_0__v0;
    QData/*63:0*/ __Vdly__GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_1__DOT__bypass_wdata_lfsr;
    CData/*1:0*/ __Vdlyvdim0__GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_2__DOT__array_0__v0;
    IData/*31:0*/ __Vdlyvval__GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_2__DOT__array_0__v0;
    CData/*0:0*/ __Vdlyvset__GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_2__DOT__array_0__v0;
    QData/*63:0*/ __Vdly__GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_2__DOT__bypass_wdata_lfsr;
    CData/*1:0*/ __Vdlyvdim0__GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_3__DOT__array_0__v0;
    IData/*31:0*/ __Vdlyvval__GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_3__DOT__array_0__v0;
    CData/*0:0*/ __Vdlyvset__GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_3__DOT__array_0__v0;
    QData/*63:0*/ __Vdly__GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_3__DOT__bypass_wdata_lfsr;
    CData/*1:0*/ __Vdlyvdim0__GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_4__DOT__array_0__v0;
    IData/*31:0*/ __Vdlyvval__GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_4__DOT__array_0__v0;
    CData/*0:0*/ __Vdlyvset__GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_4__DOT__array_0__v0;
    QData/*63:0*/ __Vdly__GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_4__DOT__bypass_wdata_lfsr;
    CData/*1:0*/ __Vdlyvdim0__GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_5__DOT__array_0__v0;
    IData/*31:0*/ __Vdlyvval__GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_5__DOT__array_0__v0;
    CData/*0:0*/ __Vdlyvset__GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_5__DOT__array_0__v0;
    QData/*63:0*/ __Vdly__GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_5__DOT__bypass_wdata_lfsr;
    CData/*1:0*/ __Vdlyvdim0__GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_6__DOT__array_0__v0;
    IData/*31:0*/ __Vdlyvval__GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_6__DOT__array_0__v0;
    CData/*0:0*/ __Vdlyvset__GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_6__DOT__array_0__v0;
    QData/*63:0*/ __Vdly__GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_6__DOT__bypass_wdata_lfsr;
    CData/*1:0*/ __Vdlyvdim0__GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_7__DOT__array_0__v0;
    IData/*31:0*/ __Vdlyvval__GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_7__DOT__array_0__v0;
    CData/*0:0*/ __Vdlyvset__GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_7__DOT__array_0__v0;
    QData/*63:0*/ __Vdly__GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_7__DOT__bypass_wdata_lfsr;
    CData/*1:0*/ __Vdlyvdim0__GPGPU_top__DOT__l2cache__DOT__requests__DOT__head__v0;
    CData/*1:0*/ __Vdlyvval__GPGPU_top__DOT__l2cache__DOT__requests__DOT__head__v0;
    CData/*0:0*/ __Vdlyvset__GPGPU_top__DOT__l2cache__DOT__requests__DOT__head__v0;
    CData/*1:0*/ __Vdlyvdim0__GPGPU_top__DOT__l2cache__DOT__requests__DOT__head__v1;
    CData/*1:0*/ __Vdlyvval__GPGPU_top__DOT__l2cache__DOT__requests__DOT__head__v1;
    CData/*0:0*/ __Vdlyvset__GPGPU_top__DOT__l2cache__DOT__requests__DOT__head__v1;
    CData/*1:0*/ __Vdlyvdim0__GPGPU_top__DOT__l2cache__DOT__requests__DOT__tail__v0;
    CData/*1:0*/ __Vdlyvval__GPGPU_top__DOT__l2cache__DOT__requests__DOT__tail__v0;
    CData/*0:0*/ __Vdlyvset__GPGPU_top__DOT__l2cache__DOT__requests__DOT__tail__v0;
    CData/*1:0*/ __Vdlyvdim0__GPGPU_top__DOT__l2cache__DOT__requests__DOT__next__v0;
    CData/*1:0*/ __Vdlyvval__GPGPU_top__DOT__l2cache__DOT__requests__DOT__next__v0;
    CData/*0:0*/ __Vdlyvset__GPGPU_top__DOT__l2cache__DOT__requests__DOT__next__v0;
    CData/*1:0*/ __Vdlyvdim0__GPGPU_top__DOT__l2cache__DOT__requests__DOT__data__v0;
    CData/*3:0*/ __Vdlyvval__GPGPU_top__DOT__l2cache__DOT__requests__DOT__data__v0;
    CData/*0:0*/ __Vdlyvset__GPGPU_top__DOT__l2cache__DOT__requests__DOT__data__v0;
    CData/*1:0*/ __Vdlyvdim0__GPGPU_top__DOT__l2cache__DOT__write_buffer__DOT__ram_opcode__v0;
    CData/*0:0*/ __Vdlyvset__GPGPU_top__DOT__l2cache__DOT__write_buffer__DOT__ram_opcode__v0;
    CData/*1:0*/ __Vdlyvdim0__GPGPU_top__DOT__l2cache__DOT__write_buffer__DOT__ram_data__v0;
    VlWide<4>/*127:0*/ __Vdlyvval__GPGPU_top__DOT__l2cache__DOT__write_buffer__DOT__ram_data__v0;
    CData/*0:0*/ __Vdlyvset__GPGPU_top__DOT__l2cache__DOT__write_buffer__DOT__ram_data__v0;
    CData/*1:0*/ __Vdlyvdim0__GPGPU_top__DOT__l2cache__DOT__write_buffer__DOT__ram_offset__v0;
    CData/*3:0*/ __Vdlyvval__GPGPU_top__DOT__l2cache__DOT__write_buffer__DOT__ram_offset__v0;
    CData/*0:0*/ __Vdlyvset__GPGPU_top__DOT__l2cache__DOT__write_buffer__DOT__ram_offset__v0;
    CData/*1:0*/ __Vdlyvdim0__GPGPU_top__DOT__l2cache__DOT__write_buffer__DOT__ram_tag__v0;
    IData/*26:0*/ __Vdlyvval__GPGPU_top__DOT__l2cache__DOT__write_buffer__DOT__ram_tag__v0;
    CData/*0:0*/ __Vdlyvset__GPGPU_top__DOT__l2cache__DOT__write_buffer__DOT__ram_tag__v0;
    CData/*1:0*/ __Vdlyvdim0__GPGPU_top__DOT__l2cache__DOT__write_buffer__DOT__ram_source__v0;
    CData/*3:0*/ __Vdlyvval__GPGPU_top__DOT__l2cache__DOT__write_buffer__DOT__ram_source__v0;
    CData/*0:0*/ __Vdlyvset__GPGPU_top__DOT__l2cache__DOT__write_buffer__DOT__ram_source__v0;
    CData/*1:0*/ __Vdlyvdim0__GPGPU_top__DOT__l2cache__DOT__write_buffer__DOT__ram_size__v0;
    CData/*3:0*/ __Vdlyvval__GPGPU_top__DOT__l2cache__DOT__write_buffer__DOT__ram_size__v0;
    CData/*0:0*/ __Vdlyvset__GPGPU_top__DOT__l2cache__DOT__write_buffer__DOT__ram_size__v0;
    CData/*1:0*/ __Vdlyvdim0__GPGPU_top__DOT__l2cache__DOT__write_buffer__DOT__ram_mask__v0;
    CData/*3:0*/ __Vdlyvval__GPGPU_top__DOT__l2cache__DOT__write_buffer__DOT__ram_mask__v0;
    CData/*0:0*/ __Vdlyvset__GPGPU_top__DOT__l2cache__DOT__write_buffer__DOT__ram_mask__v0;
    CData/*1:0*/ __Vdlyvdim0__GPGPU_top__DOT__l2cache__DOT__write_buffer__DOT__ram_set__v0;
    CData/*0:0*/ __Vdlyvval__GPGPU_top__DOT__l2cache__DOT__write_buffer__DOT__ram_set__v0;
    CData/*0:0*/ __Vdlyvset__GPGPU_top__DOT__l2cache__DOT__write_buffer__DOT__ram_set__v0;
    CData/*1:0*/ __Vdlyvdim0__GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__ram_way__v0;
    CData/*1:0*/ __Vdlyvval__GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__ram_way__v0;
    CData/*0:0*/ __Vdlyvset__GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__ram_way__v0;
    CData/*1:0*/ __Vdlyvdim0__GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__ram_hit__v0;
    CData/*0:0*/ __Vdlyvval__GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__ram_hit__v0;
    CData/*0:0*/ __Vdlyvset__GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__ram_hit__v0;
    CData/*1:0*/ __Vdlyvdim0__GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__ram_set__v0;
    CData/*0:0*/ __Vdlyvval__GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__ram_set__v0;
    CData/*0:0*/ __Vdlyvset__GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__ram_set__v0;
    CData/*1:0*/ __Vdlyvdim0__GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__ram_opcode__v0;
    CData/*2:0*/ __Vdlyvval__GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__ram_opcode__v0;
    CData/*0:0*/ __Vdlyvset__GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__ram_opcode__v0;
    CData/*1:0*/ __Vdlyvdim0__GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__ram_data__v0;
    VlWide<4>/*127:0*/ __Vdlyvval__GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__ram_data__v0;
    CData/*0:0*/ __Vdlyvset__GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__ram_data__v0;
    CData/*1:0*/ __Vdlyvdim0__GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__ram_mask__v0;
    CData/*3:0*/ __Vdlyvval__GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__ram_mask__v0;
    CData/*0:0*/ __Vdlyvset__GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__ram_mask__v0;
    CData/*1:0*/ __Vdlyvdim0__GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__ram_size__v0;
    CData/*0:0*/ __Vdlyvset__GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__ram_size__v0;
    CData/*1:0*/ __Vdlyvdim0__GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__ram_source__v0;
    CData/*3:0*/ __Vdlyvval__GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__ram_source__v0;
    CData/*0:0*/ __Vdlyvset__GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__ram_source__v0;
    CData/*1:0*/ __Vdlyvdim0__GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__ram_tag__v0;
    IData/*26:0*/ __Vdlyvval__GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__ram_tag__v0;
    CData/*0:0*/ __Vdlyvset__GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__ram_tag__v0;
    CData/*1:0*/ __Vdlyvdim0__GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__ram_offset__v0;
    CData/*3:0*/ __Vdlyvval__GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__ram_offset__v0;
    CData/*0:0*/ __Vdlyvset__GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__ram_offset__v0;
    CData/*1:0*/ __Vdlyvdim0__GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__ram_put__v0;
    CData/*1:0*/ __Vdlyvval__GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__ram_put__v0;
    CData/*0:0*/ __Vdlyvset__GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__ram_put__v0;
    // Body
    __Vdly__GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_7__DOT__bypass_wdata_lfsr 
        = vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_7__DOT__bypass_wdata_lfsr;
    __Vdly__GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_6__DOT__bypass_wdata_lfsr 
        = vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_6__DOT__bypass_wdata_lfsr;
    __Vdly__GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_5__DOT__bypass_wdata_lfsr 
        = vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_5__DOT__bypass_wdata_lfsr;
    __Vdly__GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_4__DOT__bypass_wdata_lfsr 
        = vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_4__DOT__bypass_wdata_lfsr;
    __Vdly__GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_3__DOT__bypass_wdata_lfsr 
        = vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_3__DOT__bypass_wdata_lfsr;
    __Vdly__GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_2__DOT__bypass_wdata_lfsr 
        = vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_2__DOT__bypass_wdata_lfsr;
    __Vdly__GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_1__DOT__bypass_wdata_lfsr 
        = vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_1__DOT__bypass_wdata_lfsr;
    __Vdly__GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_0__DOT__bypass_wdata_lfsr 
        = vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_0__DOT__bypass_wdata_lfsr;
    __Vdlyvset__GPGPU_top__DOT__l2cache__DOT__requests__DOT__next__v0 = 0U;
    __Vdlyvset__GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__next__v0 = 0U;
    __Vdlyvset__GPGPU_top__DOT__l2cache__DOT__requests__DOT__tail__v0 = 0U;
    __Vdlyvset__GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__tail__v0 = 0U;
    __Vdlyvset__GPGPU_top__DOT__l2cache__DOT__requests__DOT__head__v0 = 0U;
    __Vdlyvset__GPGPU_top__DOT__l2cache__DOT__requests__DOT__head__v1 = 0U;
    __Vdlyvset__GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__data__v0 = 0U;
    __Vdlyvset__GPGPU_top__DOT__l2cache__DOT__write_buffer__DOT__ram_opcode__v0 = 0U;
    __Vdlyvset__GPGPU_top__DOT__l2cache__DOT__write_buffer__DOT__ram_mask__v0 = 0U;
    __Vdlyvset__GPGPU_top__DOT__l2cache__DOT__write_buffer__DOT__ram_set__v0 = 0U;
    __Vdlyvset__GPGPU_top__DOT__l2cache__DOT__directory__DOT__cc_dir__DOT__array_1__v0 = 0U;
    __Vdlyvset__GPGPU_top__DOT__l2cache__DOT__directory__DOT__cc_dir__DOT__array_0__v0 = 0U;
    __Vdlyvset__GPGPU_top__DOT__l2cache__DOT__directory__DOT__cc_dir__DOT__array_2__v0 = 0U;
    __Vdlyvset__GPGPU_top__DOT__l2cache__DOT__directory__DOT__cc_dir__DOT__array_3__v0 = 0U;
    __Vdly__GPGPU_top__DOT__l2cache__DOT__directory__DOT__cc_dir__DOT__wrap_wrap 
        = vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__cc_dir__DOT__wrap_wrap;
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__head_MPORT_6_en)) 
                                 | (0xfU & ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__valid) 
                                            >> (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__head_pop_head_addr))))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ListBuffer.scala:95 assert (!io.pop.fire() || (io.valid)(io.pop.bits))\n");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__head_MPORT_6_en)) 
                                 | (0xfU & ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__valid) 
                                            >> (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__head_pop_head_addr))))))))) {
        VL_WRITEF("[%0t] %%Error: Ventus.v:71378: Assertion failed in %NGPGPU_top.l2cache.sinkA.putbuffer\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("Ventus.v", 71378, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__head_MPORT_9_en)) 
                                 | (0xfU & ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__valid) 
                                            >> (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__head_pop_head2_MPORT_addr))))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ListBuffer.scala:97 assert(!io.pop2.get.fire()||(io.valid)(io.pop2.get.bits))\n");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__head_MPORT_9_en)) 
                                 | (0xfU & ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__valid) 
                                            >> (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__head_pop_head2_MPORT_addr))))))))) {
        VL_WRITEF("[%0t] %%Error: Ventus.v:71401: Assertion failed in %NGPGPU_top.l2cache.sinkA.putbuffer\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("Ventus.v", 71401, "");
    }
    __Vdlyvset__GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__head__v0 = 0U;
    __Vdlyvset__GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__head__v1 = 0U;
    __Vdlyvset__GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__head__v2 = 0U;
    __Vdlyvset__GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_6__DOT__array_0__v0 = 0U;
    __Vdlyvset__GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_2__DOT__array_0__v0 = 0U;
    __Vdlyvset__GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_7__DOT__array_0__v0 = 0U;
    __Vdlyvset__GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_5__DOT__array_0__v0 = 0U;
    __Vdlyvset__GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_4__DOT__array_0__v0 = 0U;
    __Vdlyvset__GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_3__DOT__array_0__v0 = 0U;
    __Vdlyvset__GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_1__DOT__array_0__v0 = 0U;
    __Vdlyvset__GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_0__DOT__array_0__v0 = 0U;
    __Vdlyvset__GPGPU_top__DOT__l2cache__DOT__write_buffer__DOT__ram_size__v0 = 0U;
    __Vdlyvset__GPGPU_top__DOT__l2cache__DOT__write_buffer__DOT__ram_source__v0 = 0U;
    __Vdlyvset__GPGPU_top__DOT__l2cache__DOT__write_buffer__DOT__ram_tag__v0 = 0U;
    __Vdlyvset__GPGPU_top__DOT__l2cache__DOT__write_buffer__DOT__ram_offset__v0 = 0U;
    __Vdlyvset__GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__ram_size__v0 = 0U;
    __Vdlyvset__GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__ram_data__v0 = 0U;
    __Vdlyvset__GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__ram_way__v0 = 0U;
    __Vdlyvset__GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__ram_offset__v0 = 0U;
    __Vdlyvset__GPGPU_top__DOT__l2cache__DOT__write_buffer__DOT__ram_data__v0 = 0U;
    __Vdlyvset__GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__ram_tag__v0 = 0U;
    __Vdlyvset__GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__ram_mask__v0 = 0U;
    __Vdlyvset__GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__ram_hit__v0 = 0U;
    __Vdlyvset__GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__ram_set__v0 = 0U;
    __Vdlyvset__GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__ram_opcode__v0 = 0U;
    __Vdlyvset__GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__ram_put__v0 = 0U;
    vlSelf->__Vdly__GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen__DOT__wg_slot_id_find_i 
        = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen__DOT__wg_slot_id_find_i;
    __Vdly__GPGPU_top__DOT__l2cache__DOT__sourceD__DOT__stateReg 
        = vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT__stateReg;
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__requests__DOT__head_MPORT_6_en)) 
                                 | (0xfU & ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__requests__DOT__valid) 
                                            >> (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__requests__DOT__head_pop_head_addr))))))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ListBuffer.scala:95 assert (!io.pop.fire() || (io.valid)(io.pop.bits))\n");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__requests__DOT__head_MPORT_6_en)) 
                                 | (0xfU & ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__requests__DOT__valid) 
                                            >> (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__requests__DOT__head_pop_head_addr))))))))) {
        VL_WRITEF("[%0t] %%Error: Ventus.v:73148: Assertion failed in %NGPGPU_top.l2cache.requests\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("Ventus.v", 73148, "");
    }
    __Vdlyvset__GPGPU_top__DOT__l2cache__DOT__requests__DOT__data__v0 = 0U;
    __Vdlyvset__GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__ram_source__v0 = 0U;
    vlSelf->__Vdly__GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__dealloc_st 
        = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__dealloc_st;
    vlSelf->__Vdly__GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__dealloc_st 
        = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__dealloc_st;
    vlSelf->__Vdly__GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__next_served_dealloc_valid 
        = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__next_served_dealloc_valid;
    vlSelf->__Vdly__GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__next_served_dealloc_valid 
        = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__next_served_dealloc_valid;
    vlSelf->__Vdly__GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__next_served_dealloc 
        = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__next_served_dealloc;
    vlSelf->__Vdly__GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__next_served_dealloc 
        = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__next_served_dealloc;
    vlSelf->__Vdly__GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__dealloc_st 
        = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__dealloc_st;
    vlSelf->__Vdly__GPGPU_top__DOT__cta__DOT__cta_sche__DOT__dis_controller_i__DOT__alloc_waiting 
        = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__dis_controller_i__DOT__alloc_waiting;
    __Vdlyvset__GPGPU_top__DOT__cta__DOT__wf_done_interface__DOT__buffer__DOT__ram__v0 = 0U;
    vlSelf->__Vdly__GPGPU_top__DOT__cta__DOT__cta_sche__DOT__dis_controller_i__DOT__alloc_st 
        = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__dis_controller_i__DOT__alloc_st;
    __Vdly__GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__dis_controller_wg_alloc_valid_i 
        = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__dis_controller_wg_alloc_valid_i;
    vlSelf->__Vdly__GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__wg_waiting_alloc_valid 
        = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__wg_waiting_alloc_valid;
    vlSelf->__Vdly__GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__inflight_tbl_alloc_st 
        = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__inflight_tbl_alloc_st;
    vlSelf->__Vdly__GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__alloc_st 
        = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__alloc_st;
    vlSelf->__Vdly__GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__dispatch2cu_wf_tag_dispatch_i 
        = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__dispatch2cu_wf_tag_dispatch_i;
    vlSelf->__Vdly__GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__cu_id_out 
        = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__cu_id_out;
    __Vdly__GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__inflight_tbl_rd_host_st 
        = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__inflight_tbl_rd_host_st;
    __Vdly__GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__curr_alloc_wf_count 
        = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__curr_alloc_wf_count;
    __Vdly__GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__curr_alloc_wf_count 
        = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__curr_alloc_wf_count;
    __Vdly__GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__alloc_st 
        = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__alloc_st;
    __Vdly__GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__alloc_st 
        = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__alloc_st;
    vlSelf->__Vdly__GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__size_ram_valid 
        = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__size_ram_valid;
    vlSelf->__Vdly__GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__wg_id_out 
        = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__wg_id_out;
    vlSelf->__Vdly__GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__size_ram_cu_id_found 
        = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__size_ram_cu_id_found;
    __Vdlyvset__GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__ram_wg_ready_start__DOT__mem__v0 = 0U;
    __Vdlyvset__GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__ram_wg_waiting_allocation__DOT__mem__v0 = 0U;
    __Vdlyvset__GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__info_ram__DOT__mem__v0 = 0U;
    __Vdlyvset__GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__info_ram__DOT__mem__v0 = 0U;
    __Vdly__GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_7__DOT__bypass_wdata_lfsr 
        = ((0ULL == vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_7__DOT__bypass_wdata_lfsr)
            ? 1ULL : vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_7__DOT___bypass_wdata_lfsr_T_2);
    __Vdly__GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_6__DOT__bypass_wdata_lfsr 
        = ((0ULL == vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_6__DOT__bypass_wdata_lfsr)
            ? 1ULL : vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_6__DOT___bypass_wdata_lfsr_T_2);
    __Vdly__GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_5__DOT__bypass_wdata_lfsr 
        = ((0ULL == vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_5__DOT__bypass_wdata_lfsr)
            ? 1ULL : vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_5__DOT___bypass_wdata_lfsr_T_2);
    __Vdly__GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_4__DOT__bypass_wdata_lfsr 
        = ((0ULL == vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_4__DOT__bypass_wdata_lfsr)
            ? 1ULL : vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_4__DOT___bypass_wdata_lfsr_T_2);
    __Vdly__GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_3__DOT__bypass_wdata_lfsr 
        = ((0ULL == vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_3__DOT__bypass_wdata_lfsr)
            ? 1ULL : vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_3__DOT___bypass_wdata_lfsr_T_2);
    __Vdly__GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_2__DOT__bypass_wdata_lfsr 
        = ((0ULL == vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_2__DOT__bypass_wdata_lfsr)
            ? 1ULL : vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_2__DOT___bypass_wdata_lfsr_T_2);
    __Vdly__GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_1__DOT__bypass_wdata_lfsr 
        = ((0ULL == vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_1__DOT__bypass_wdata_lfsr)
            ? 1ULL : vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_1__DOT___bypass_wdata_lfsr_T_2);
    __Vdly__GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_0__DOT__bypass_wdata_lfsr 
        = ((0ULL == vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_0__DOT__bypass_wdata_lfsr)
            ? 1ULL : vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_0__DOT___bypass_wdata_lfsr_T_2);
    if (vlSelf->GPGPU_top__DOT__l2cache__DOT__requests__DOT__next_MPORT_1_en) {
        __Vdlyvval__GPGPU_top__DOT__l2cache__DOT__requests__DOT__next__v0 
            = vlSelf->GPGPU_top__DOT__l2cache__DOT__requests__DOT__head_MPORT_2_data;
        __Vdlyvset__GPGPU_top__DOT__l2cache__DOT__requests__DOT__next__v0 = 1U;
        __Vdlyvdim0__GPGPU_top__DOT__l2cache__DOT__requests__DOT__next__v0 
            = vlSelf->GPGPU_top__DOT__l2cache__DOT__requests__DOT__tail_push_tail_data;
    }
    if (vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__next_MPORT_1_en) {
        __Vdlyvval__GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__next__v0 
            = vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__head_MPORT_2_data;
        __Vdlyvset__GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__next__v0 = 1U;
        __Vdlyvdim0__GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__next__v0 
            = vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__tail_push_tail_data;
    }
    if (vlSelf->GPGPU_top__DOT__l2cache__DOT__requests__DOT__tail_MPORT_3_en) {
        __Vdlyvval__GPGPU_top__DOT__l2cache__DOT__requests__DOT__tail__v0 
            = vlSelf->GPGPU_top__DOT__l2cache__DOT__requests__DOT__head_MPORT_2_data;
        __Vdlyvset__GPGPU_top__DOT__l2cache__DOT__requests__DOT__tail__v0 = 1U;
        __Vdlyvdim0__GPGPU_top__DOT__l2cache__DOT__requests__DOT__tail__v0 
            = vlSelf->GPGPU_top__DOT__l2cache__DOT__requests__DOT__head_MPORT_2_addr;
        __Vdlyvval__GPGPU_top__DOT__l2cache__DOT__requests__DOT__data__v0 
            = vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__io_result_bits_source_REG;
        __Vdlyvset__GPGPU_top__DOT__l2cache__DOT__requests__DOT__data__v0 = 1U;
        __Vdlyvdim0__GPGPU_top__DOT__l2cache__DOT__requests__DOT__data__v0 
            = vlSelf->GPGPU_top__DOT__l2cache__DOT__requests__DOT__head_MPORT_2_data;
    }
    if (vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__tail_MPORT_3_en) {
        __Vdlyvval__GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__tail__v0 
            = vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__head_MPORT_2_data;
        __Vdlyvset__GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__tail__v0 = 1U;
        __Vdlyvdim0__GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__tail__v0 
            = vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__head_MPORT_2_addr;
        __Vdlyvval__GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__data__v0[0U] 
            = ((vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer_io_push_bits_data_data[0U] 
                << 4U) | (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer_io_push_bits_data_mask));
        __Vdlyvval__GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__data__v0[1U] 
            = ((vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer_io_push_bits_data_data[0U] 
                >> 0x1cU) | (vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer_io_push_bits_data_data[1U] 
                             << 4U));
        __Vdlyvval__GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__data__v0[2U] 
            = ((vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer_io_push_bits_data_data[1U] 
                >> 0x1cU) | (vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer_io_push_bits_data_data[2U] 
                             << 4U));
        __Vdlyvval__GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__data__v0[3U] 
            = ((vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer_io_push_bits_data_data[2U] 
                >> 0x1cU) | (vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer_io_push_bits_data_data[3U] 
                             << 4U));
        __Vdlyvval__GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__data__v0[4U] 
            = (vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer_io_push_bits_data_data[3U] 
               >> 0x1cU);
        __Vdlyvset__GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__data__v0 = 1U;
        __Vdlyvdim0__GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__data__v0 
            = vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__head_MPORT_2_data;
    }
    if (((~ (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__requests__DOT___push_valid_T)) 
         & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__requests__DOT__tail_MPORT_3_en))) {
        __Vdlyvval__GPGPU_top__DOT__l2cache__DOT__requests__DOT__head__v0 
            = vlSelf->GPGPU_top__DOT__l2cache__DOT__requests__DOT__head_MPORT_2_data;
        __Vdlyvset__GPGPU_top__DOT__l2cache__DOT__requests__DOT__head__v0 = 1U;
        __Vdlyvdim0__GPGPU_top__DOT__l2cache__DOT__requests__DOT__head__v0 
            = vlSelf->GPGPU_top__DOT__l2cache__DOT__requests__DOT__head_MPORT_2_addr;
    }
    if (vlSelf->GPGPU_top__DOT__l2cache__DOT__requests__DOT__head_MPORT_6_en) {
        __Vdlyvval__GPGPU_top__DOT__l2cache__DOT__requests__DOT__head__v1 
            = (3U & (((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__requests__DOT__next_MPORT_1_en) 
                      & ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__requests__DOT__tail_push_tail_data) 
                         == (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__requests__DOT__head_pop_head_data)))
                      ? ((4U & ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__requests__DOT__freeOH) 
                                >> 2U)) | (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__requests__DOT__head_MPORT_2_data))
                      : vlSelf->GPGPU_top__DOT__l2cache__DOT__requests__DOT__next
                     [vlSelf->GPGPU_top__DOT__l2cache__DOT__requests__DOT__head_pop_head_data]));
        __Vdlyvset__GPGPU_top__DOT__l2cache__DOT__requests__DOT__head__v1 = 1U;
        __Vdlyvdim0__GPGPU_top__DOT__l2cache__DOT__requests__DOT__head__v1 
            = vlSelf->GPGPU_top__DOT__l2cache__DOT__requests__DOT__head_pop_head_addr;
    }
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__command_serviced_array_cancelled_0 
        = ((~ (IData)(vlSelf->reset)) & ((~ (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__command_serviced_array_cancelled_0)) 
                                         & (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT___GEN_11)));
    if (vlSelf->GPGPU_top__DOT__l2cache__DOT__write_buffer__DOT__ram_opcode_MPORT_en) {
        __Vdlyvset__GPGPU_top__DOT__l2cache__DOT__write_buffer__DOT__ram_opcode__v0 = 1U;
        __Vdlyvdim0__GPGPU_top__DOT__l2cache__DOT__write_buffer__DOT__ram_opcode__v0 
            = vlSelf->GPGPU_top__DOT__l2cache__DOT__write_buffer__DOT__enq_ptr_value;
        __Vdlyvval__GPGPU_top__DOT__l2cache__DOT__write_buffer__DOT__ram_mask__v0 
            = vlSelf->GPGPU_top__DOT__l2cache__DOT__write_buffer__DOT__ram_mask_MPORT_data;
        __Vdlyvset__GPGPU_top__DOT__l2cache__DOT__write_buffer__DOT__ram_mask__v0 = 1U;
        __Vdlyvdim0__GPGPU_top__DOT__l2cache__DOT__write_buffer__DOT__ram_mask__v0 
            = vlSelf->GPGPU_top__DOT__l2cache__DOT__write_buffer__DOT__enq_ptr_value;
        __Vdlyvval__GPGPU_top__DOT__l2cache__DOT__write_buffer__DOT__ram_set__v0 
            = vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__sourceD_rreq_select_shiftAmount;
        __Vdlyvset__GPGPU_top__DOT__l2cache__DOT__write_buffer__DOT__ram_set__v0 = 1U;
        __Vdlyvdim0__GPGPU_top__DOT__l2cache__DOT__write_buffer__DOT__ram_set__v0 
            = vlSelf->GPGPU_top__DOT__l2cache__DOT__write_buffer__DOT__enq_ptr_value;
        if (vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT___io_pb_pop_valid_T) {
            __Vdlyvval__GPGPU_top__DOT__l2cache__DOT__write_buffer__DOT__ram_size__v0 
                = vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD_io_req_bits_size;
            __Vdlyvval__GPGPU_top__DOT__l2cache__DOT__write_buffer__DOT__ram_source__v0 
                = vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD_io_req_bits_source;
            __Vdlyvval__GPGPU_top__DOT__l2cache__DOT__write_buffer__DOT__ram_tag__v0 
                = vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD_io_req_bits_tag;
            __Vdlyvval__GPGPU_top__DOT__l2cache__DOT__write_buffer__DOT__ram_offset__v0 
                = vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD_io_req_bits_offset;
        } else {
            __Vdlyvval__GPGPU_top__DOT__l2cache__DOT__write_buffer__DOT__ram_size__v0 
                = vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT__s1_req_reg_size;
            __Vdlyvval__GPGPU_top__DOT__l2cache__DOT__write_buffer__DOT__ram_source__v0 
                = vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT__s1_req_reg_source;
            __Vdlyvval__GPGPU_top__DOT__l2cache__DOT__write_buffer__DOT__ram_tag__v0 
                = vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT__s1_req_reg_tag;
            __Vdlyvval__GPGPU_top__DOT__l2cache__DOT__write_buffer__DOT__ram_offset__v0 
                = vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT__s1_req_reg_offset;
        }
        __Vdlyvset__GPGPU_top__DOT__l2cache__DOT__write_buffer__DOT__ram_size__v0 = 1U;
        __Vdlyvdim0__GPGPU_top__DOT__l2cache__DOT__write_buffer__DOT__ram_size__v0 
            = vlSelf->GPGPU_top__DOT__l2cache__DOT__write_buffer__DOT__enq_ptr_value;
        __Vdlyvset__GPGPU_top__DOT__l2cache__DOT__write_buffer__DOT__ram_source__v0 = 1U;
        __Vdlyvdim0__GPGPU_top__DOT__l2cache__DOT__write_buffer__DOT__ram_source__v0 
            = vlSelf->GPGPU_top__DOT__l2cache__DOT__write_buffer__DOT__enq_ptr_value;
        __Vdlyvset__GPGPU_top__DOT__l2cache__DOT__write_buffer__DOT__ram_tag__v0 = 1U;
        __Vdlyvdim0__GPGPU_top__DOT__l2cache__DOT__write_buffer__DOT__ram_tag__v0 
            = vlSelf->GPGPU_top__DOT__l2cache__DOT__write_buffer__DOT__enq_ptr_value;
        __Vdlyvset__GPGPU_top__DOT__l2cache__DOT__write_buffer__DOT__ram_offset__v0 = 1U;
        __Vdlyvdim0__GPGPU_top__DOT__l2cache__DOT__write_buffer__DOT__ram_offset__v0 
            = vlSelf->GPGPU_top__DOT__l2cache__DOT__write_buffer__DOT__enq_ptr_value;
        if (vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT___s1_need_w_T_2) {
            if (vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT___io_pb_pop_valid_T) {
                __Vdlyvval__GPGPU_top__DOT__l2cache__DOT__write_buffer__DOT__ram_data__v0[0U] 
                    = vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD_io_req_bits_data[0U];
                __Vdlyvval__GPGPU_top__DOT__l2cache__DOT__write_buffer__DOT__ram_data__v0[1U] 
                    = vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD_io_req_bits_data[1U];
                __Vdlyvval__GPGPU_top__DOT__l2cache__DOT__write_buffer__DOT__ram_data__v0[2U] 
                    = vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD_io_req_bits_data[2U];
                __Vdlyvval__GPGPU_top__DOT__l2cache__DOT__write_buffer__DOT__ram_data__v0[3U] 
                    = vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD_io_req_bits_data[3U];
            } else {
                __Vdlyvval__GPGPU_top__DOT__l2cache__DOT__write_buffer__DOT__ram_data__v0[0U] 
                    = vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT__s1_req_reg_data[0U];
                __Vdlyvval__GPGPU_top__DOT__l2cache__DOT__write_buffer__DOT__ram_data__v0[1U] 
                    = vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT__s1_req_reg_data[1U];
                __Vdlyvval__GPGPU_top__DOT__l2cache__DOT__write_buffer__DOT__ram_data__v0[2U] 
                    = vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT__s1_req_reg_data[2U];
                __Vdlyvval__GPGPU_top__DOT__l2cache__DOT__write_buffer__DOT__ram_data__v0[3U] 
                    = vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT__s1_req_reg_data[3U];
            }
        } else {
            __Vdlyvval__GPGPU_top__DOT__l2cache__DOT__write_buffer__DOT__ram_data__v0[0U] 
                = vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT___GEN_12[0U];
            __Vdlyvval__GPGPU_top__DOT__l2cache__DOT__write_buffer__DOT__ram_data__v0[1U] 
                = vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT___GEN_12[1U];
            __Vdlyvval__GPGPU_top__DOT__l2cache__DOT__write_buffer__DOT__ram_data__v0[2U] 
                = vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT___GEN_12[2U];
            __Vdlyvval__GPGPU_top__DOT__l2cache__DOT__write_buffer__DOT__ram_data__v0[3U] 
                = vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT___GEN_12[3U];
        }
        __Vdlyvset__GPGPU_top__DOT__l2cache__DOT__write_buffer__DOT__ram_data__v0 = 1U;
        __Vdlyvdim0__GPGPU_top__DOT__l2cache__DOT__write_buffer__DOT__ram_data__v0 
            = vlSelf->GPGPU_top__DOT__l2cache__DOT__write_buffer__DOT__enq_ptr_value;
    }
    if (((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__cc_dir__DOT__array_0_MPORT_en) 
         & ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__cc_dir__DOT__resetState) 
            | ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__x6) 
               >> 1U)))) {
        __Vdlyvval__GPGPU_top__DOT__l2cache__DOT__directory__DOT__cc_dir__DOT__array_1__v0 
            = vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__cc_dir__DOT__array_0_MPORT_data;
        __Vdlyvset__GPGPU_top__DOT__l2cache__DOT__directory__DOT__cc_dir__DOT__array_1__v0 = 1U;
        __Vdlyvdim0__GPGPU_top__DOT__l2cache__DOT__directory__DOT__cc_dir__DOT__array_1__v0 
            = vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__cc_dir__DOT__array_0_MPORT_addr;
    }
    if (((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__cc_dir__DOT__array_0_MPORT_en) 
         & ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__cc_dir__DOT__resetState) 
            | (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__x6)))) {
        __Vdlyvval__GPGPU_top__DOT__l2cache__DOT__directory__DOT__cc_dir__DOT__array_0__v0 
            = vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__cc_dir__DOT__array_0_MPORT_data;
        __Vdlyvset__GPGPU_top__DOT__l2cache__DOT__directory__DOT__cc_dir__DOT__array_0__v0 = 1U;
        __Vdlyvdim0__GPGPU_top__DOT__l2cache__DOT__directory__DOT__cc_dir__DOT__array_0__v0 
            = vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__cc_dir__DOT__array_0_MPORT_addr;
    }
    if (((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__cc_dir__DOT__array_0_MPORT_en) 
         & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__cc_dir__DOT__resetState))) {
        __Vdlyvval__GPGPU_top__DOT__l2cache__DOT__directory__DOT__cc_dir__DOT__array_2__v0 
            = vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__cc_dir__DOT__array_0_MPORT_data;
        __Vdlyvset__GPGPU_top__DOT__l2cache__DOT__directory__DOT__cc_dir__DOT__array_2__v0 = 1U;
        __Vdlyvdim0__GPGPU_top__DOT__l2cache__DOT__directory__DOT__cc_dir__DOT__array_2__v0 
            = vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__cc_dir__DOT__array_0_MPORT_addr;
        __Vdlyvval__GPGPU_top__DOT__l2cache__DOT__directory__DOT__cc_dir__DOT__array_3__v0 
            = vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__cc_dir__DOT__array_0_MPORT_data;
        __Vdlyvset__GPGPU_top__DOT__l2cache__DOT__directory__DOT__cc_dir__DOT__array_3__v0 = 1U;
        __Vdlyvdim0__GPGPU_top__DOT__l2cache__DOT__directory__DOT__cc_dir__DOT__array_3__v0 
            = vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__cc_dir__DOT__array_0_MPORT_addr;
    }
    if (((~ (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT___push_valid_T)) 
         & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__tail_MPORT_3_en))) {
        __Vdlyvval__GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__head__v0 
            = vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__head_MPORT_2_data;
        __Vdlyvset__GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__head__v0 = 1U;
        __Vdlyvdim0__GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__head__v0 
            = vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__head_MPORT_2_addr;
    }
    if (vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__head_MPORT_9_en) {
        __Vdlyvval__GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__head__v2 
            = (3U & (((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__next_MPORT_1_en) 
                      & ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__tail_push_tail_data) 
                         == (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__head_pop_head2_MPORT_data)))
                      ? (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__freeIdx)
                      : vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__next
                     [vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__head_pop_head2_MPORT_data]));
        __Vdlyvset__GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__head__v2 = 1U;
        __Vdlyvdim0__GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__head__v2 
            = vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__head_pop_head2_MPORT_addr;
    }
    if (((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_6_io_w_req_valid) 
         | (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_6__DOT__resetState))) {
        if (vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_6__DOT__resetState) {
            __Vdlyvval__GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_6__DOT__array_0__v0 = 0U;
            __Vdlyvdim0__GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_6__DOT__array_0__v0 
                = vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_6__DOT__resetSet;
        } else {
            __Vdlyvval__GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_6__DOT__array_0__v0 
                = ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT____VdfgTmp_hc46625d2__0)
                    ? vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkD_io_resp_bits_data[2U]
                    : ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__regout_sel_1_6)
                        ? vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT___GEN_12[2U]
                        : 0U));
            __Vdlyvdim0__GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_6__DOT__array_0__v0 
                = vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_6_io_r_req_bits_setIdx;
        }
        __Vdlyvset__GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_6__DOT__array_0__v0 = 1U;
    }
    if (((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_2_io_w_req_valid) 
         | (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_2__DOT__resetState))) {
        if (vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_2__DOT__resetState) {
            __Vdlyvval__GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_2__DOT__array_0__v0 = 0U;
            __Vdlyvdim0__GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_2__DOT__array_0__v0 
                = vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_2__DOT__resetSet;
        } else {
            __Vdlyvval__GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_2__DOT__array_0__v0 
                = ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT____VdfgTmp_hc0824628__0)
                    ? vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkD_io_resp_bits_data[2U]
                    : ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__regout_sel_1_2)
                        ? vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT___GEN_12[2U]
                        : 0U));
            __Vdlyvdim0__GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_2__DOT__array_0__v0 
                = vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_2_io_r_req_bits_setIdx;
        }
        __Vdlyvset__GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_2__DOT__array_0__v0 = 1U;
    }
    if (((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_7_io_w_req_valid) 
         | (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_7__DOT__resetState))) {
        if (vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_7__DOT__resetState) {
            __Vdlyvval__GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_7__DOT__array_0__v0 = 0U;
            __Vdlyvdim0__GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_7__DOT__array_0__v0 
                = vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_7__DOT__resetSet;
        } else {
            __Vdlyvval__GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_7__DOT__array_0__v0 
                = ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT____VdfgTmp_hc46625d2__0)
                    ? vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkD_io_resp_bits_data[3U]
                    : ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__regout_sel_1_7)
                        ? vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT___GEN_12[3U]
                        : 0U));
            __Vdlyvdim0__GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_7__DOT__array_0__v0 
                = vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_7_io_r_req_bits_setIdx;
        }
        __Vdlyvset__GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_7__DOT__array_0__v0 = 1U;
    }
    if (((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_5_io_w_req_valid) 
         | (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_5__DOT__resetState))) {
        if (vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_5__DOT__resetState) {
            __Vdlyvval__GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_5__DOT__array_0__v0 = 0U;
            __Vdlyvdim0__GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_5__DOT__array_0__v0 
                = vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_5__DOT__resetSet;
        } else {
            __Vdlyvval__GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_5__DOT__array_0__v0 
                = ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT____VdfgTmp_hc46625d2__0)
                    ? vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkD_io_resp_bits_data[1U]
                    : ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__regout_sel_1_5)
                        ? vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT___GEN_12[1U]
                        : 0U));
            __Vdlyvdim0__GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_5__DOT__array_0__v0 
                = vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_5_io_r_req_bits_setIdx;
        }
        __Vdlyvset__GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_5__DOT__array_0__v0 = 1U;
    }
    if (((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_4_io_w_req_valid) 
         | (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_4__DOT__resetState))) {
        if (vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_4__DOT__resetState) {
            __Vdlyvval__GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_4__DOT__array_0__v0 = 0U;
            __Vdlyvdim0__GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_4__DOT__array_0__v0 
                = vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_4__DOT__resetSet;
        } else {
            __Vdlyvval__GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_4__DOT__array_0__v0 
                = ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT____VdfgTmp_hc46625d2__0)
                    ? vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkD_io_resp_bits_data[0U]
                    : ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__regout_sel_1_4)
                        ? vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT___GEN_12[0U]
                        : 0U));
            __Vdlyvdim0__GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_4__DOT__array_0__v0 
                = vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_4_io_r_req_bits_setIdx;
        }
        __Vdlyvset__GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_4__DOT__array_0__v0 = 1U;
    }
    if (((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_3_io_w_req_valid) 
         | (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_3__DOT__resetState))) {
        if (vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_3__DOT__resetState) {
            __Vdlyvval__GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_3__DOT__array_0__v0 = 0U;
            __Vdlyvdim0__GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_3__DOT__array_0__v0 
                = vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_3__DOT__resetSet;
        } else {
            __Vdlyvval__GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_3__DOT__array_0__v0 
                = ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT____VdfgTmp_hc0824628__0)
                    ? vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkD_io_resp_bits_data[3U]
                    : ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__regout_sel_1_3)
                        ? vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT___GEN_12[3U]
                        : 0U));
            __Vdlyvdim0__GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_3__DOT__array_0__v0 
                = vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_3_io_r_req_bits_setIdx;
        }
        __Vdlyvset__GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_3__DOT__array_0__v0 = 1U;
    }
    if (((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_1_io_w_req_valid) 
         | (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_1__DOT__resetState))) {
        if (vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_1__DOT__resetState) {
            __Vdlyvval__GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_1__DOT__array_0__v0 = 0U;
            __Vdlyvdim0__GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_1__DOT__array_0__v0 
                = vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_1__DOT__resetSet;
        } else {
            __Vdlyvval__GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_1__DOT__array_0__v0 
                = ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT____VdfgTmp_hc0824628__0)
                    ? vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkD_io_resp_bits_data[1U]
                    : ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__regout_sel_1_1)
                        ? vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT___GEN_12[1U]
                        : 0U));
            __Vdlyvdim0__GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_1__DOT__array_0__v0 
                = vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_1_io_r_req_bits_setIdx;
        }
        __Vdlyvset__GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_1__DOT__array_0__v0 = 1U;
    }
    if (((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_0_io_w_req_valid) 
         | (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_0__DOT__resetState))) {
        if (vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_0__DOT__resetState) {
            __Vdlyvval__GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_0__DOT__array_0__v0 = 0U;
            __Vdlyvdim0__GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_0__DOT__array_0__v0 
                = vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_0__DOT__resetSet;
        } else {
            __Vdlyvval__GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_0__DOT__array_0__v0 
                = ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT____VdfgTmp_hc0824628__0)
                    ? vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkD_io_resp_bits_data[0U]
                    : ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__regout_sel_1)
                        ? vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT___GEN_12[0U]
                        : 0U));
            __Vdlyvdim0__GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_0__DOT__array_0__v0 
                = vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_0_io_r_req_bits_setIdx;
        }
        __Vdlyvset__GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_0__DOT__array_0__v0 = 1U;
    }
    if (vlSelf->GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__ram_opcode_MPORT_en) {
        __Vdlyvset__GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__ram_size__v0 = 1U;
        __Vdlyvdim0__GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__ram_size__v0 
            = vlSelf->GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__enq_ptr_value;
        __Vdlyvval__GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__ram_data__v0[0U] 
            = vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__io_result_bits_data_REG[0U];
        __Vdlyvval__GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__ram_data__v0[1U] 
            = vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__io_result_bits_data_REG[1U];
        __Vdlyvval__GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__ram_data__v0[2U] 
            = vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__io_result_bits_data_REG[2U];
        __Vdlyvval__GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__ram_data__v0[3U] 
            = vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__io_result_bits_data_REG[3U];
        __Vdlyvset__GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__ram_data__v0 = 1U;
        __Vdlyvdim0__GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__ram_data__v0 
            = vlSelf->GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__enq_ptr_value;
        __Vdlyvval__GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__ram_way__v0 
            = vlSelf->GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__ram_way_MPORT_data;
        __Vdlyvset__GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__ram_way__v0 = 1U;
        __Vdlyvdim0__GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__ram_way__v0 
            = vlSelf->GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__enq_ptr_value;
        __Vdlyvval__GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__ram_offset__v0 
            = vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__io_result_bits_offset_REG;
        __Vdlyvset__GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__ram_offset__v0 = 1U;
        __Vdlyvdim0__GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__ram_offset__v0 
            = vlSelf->GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__enq_ptr_value;
        __Vdlyvval__GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__ram_tag__v0 
            = vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__io_result_bits_tag_REG;
        __Vdlyvset__GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__ram_tag__v0 = 1U;
        __Vdlyvdim0__GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__ram_tag__v0 
            = vlSelf->GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__enq_ptr_value;
        __Vdlyvval__GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__ram_mask__v0 
            = vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__io_result_bits_mask_REG;
        __Vdlyvset__GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__ram_mask__v0 = 1U;
        __Vdlyvdim0__GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__ram_mask__v0 
            = vlSelf->GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__enq_ptr_value;
        __Vdlyvval__GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__ram_hit__v0 
            = vlSelf->GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__ram_hit_MPORT_data;
        __Vdlyvset__GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__ram_hit__v0 = 1U;
        __Vdlyvdim0__GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__ram_hit__v0 
            = vlSelf->GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__enq_ptr_value;
        __Vdlyvval__GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__ram_set__v0 
            = vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__io_result_bits_set_REG;
        __Vdlyvset__GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__ram_set__v0 = 1U;
        __Vdlyvdim0__GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__ram_set__v0 
            = vlSelf->GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__enq_ptr_value;
        __Vdlyvval__GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__ram_opcode__v0 
            = vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__io_result_bits_opcode_REG;
        __Vdlyvset__GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__ram_opcode__v0 = 1U;
        __Vdlyvdim0__GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__ram_opcode__v0 
            = vlSelf->GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__enq_ptr_value;
        __Vdlyvval__GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__ram_put__v0 
            = vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__io_result_bits_put_REG;
        __Vdlyvset__GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__ram_put__v0 = 1U;
        __Vdlyvdim0__GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__ram_put__v0 
            = vlSelf->GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__enq_ptr_value;
        __Vdlyvval__GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__ram_source__v0 
            = vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__io_result_bits_source_REG;
        __Vdlyvset__GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__ram_source__v0 = 1U;
        __Vdlyvdim0__GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__ram_source__v0 
            = vlSelf->GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__enq_ptr_value;
    }
    vlSelf->__Vdly__GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__next_served_dealloc_valid 
        = ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__pending_wg_bitmap_0) 
                                         | ((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__pending_wg_bitmap_1) 
                                            | ((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__pending_wg_bitmap_2) 
                                               | (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__pending_wg_bitmap_3)))));
    vlSelf->__Vdly__GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__next_served_dealloc_valid 
        = ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__pending_wg_bitmap_0) 
                                         | ((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__pending_wg_bitmap_1) 
                                            | ((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__pending_wg_bitmap_2) 
                                               | (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__pending_wg_bitmap_3)))));
    vlSelf->__Vdly__GPGPU_top__DOT__cta__DOT__cta_sche__DOT__dis_controller_i__DOT__alloc_waiting 
        = ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__gpu_interface_dealloc_available_i) 
                                          & (~ (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__dis_controller_i__DOT___GEN_20)))
                                          ? (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__dis_controller_i__DOT___GEN_16)
                                          : (((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__dis_controller_i__DOT__alloc_waiting) 
                                              & (~ (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__dis_controller_i__DOT___GEN_24)))
                                              ? ((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__size_ram_cu_id_found) 
                                                 & ((~ (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__dis_controller_i__DOT___T_15)) 
                                                    & (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__dis_controller_i__DOT___GEN_16)))
                                              : (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__dis_controller_i__DOT___GEN_16))));
    if (vlSelf->GPGPU_top__DOT__cta__DOT__wf_done_interface__DOT__buffer__DOT__ram_MPORT_en) {
        __Vdlyvval__GPGPU_top__DOT__cta__DOT__wf_done_interface__DOT__buffer__DOT__ram__v0 
            = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__inflight_wg_buffer_host_wf_done_wg_id_i;
        __Vdlyvset__GPGPU_top__DOT__cta__DOT__wf_done_interface__DOT__buffer__DOT__ram__v0 = 1U;
        __Vdlyvdim0__GPGPU_top__DOT__cta__DOT__wf_done_interface__DOT__buffer__DOT__ram__v0 
            = vlSelf->GPGPU_top__DOT__cta__DOT__wf_done_interface__DOT__buffer__DOT__enq_ptr_value;
    }
    if (vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__new_index_wr_en) {
        __Vdlyvval__GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__ram_wg_ready_start__DOT__mem__v0[0U] 
            = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__ready_tbl_wr_reg[0U];
        __Vdlyvval__GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__ram_wg_ready_start__DOT__mem__v0[1U] 
            = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__ready_tbl_wr_reg[1U];
        __Vdlyvval__GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__ram_wg_ready_start__DOT__mem__v0[2U] 
            = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__ready_tbl_wr_reg[2U];
        __Vdlyvval__GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__ram_wg_ready_start__DOT__mem__v0[3U] 
            = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__ready_tbl_wr_reg[3U];
        __Vdlyvset__GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__ram_wg_ready_start__DOT__mem__v0 = 1U;
        __Vdlyvdim0__GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__ram_wg_ready_start__DOT__mem__v0 
            = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__new_index;
        __Vdlyvval__GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__ram_wg_waiting_allocation__DOT__mem__v0 
            = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__new_entry_wg_reg;
        __Vdlyvset__GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__ram_wg_waiting_allocation__DOT__mem__v0 = 1U;
        __Vdlyvdim0__GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__ram_wg_waiting_allocation__DOT__mem__v0 
            = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__new_index;
    }
    if (vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__info_ram_wr_en) {
        __Vdlyvval__GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__info_ram__DOT__mem__v0 
            = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__info_ram_wr_reg;
        __Vdlyvset__GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__info_ram__DOT__mem__v0 = 1U;
        __Vdlyvdim0__GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__info_ram__DOT__mem__v0 
            = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__info_ram_wr_addr;
    }
    if (vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__info_ram_wr_en) {
        __Vdlyvval__GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__info_ram__DOT__mem__v0 
            = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__info_ram_wr_reg;
        __Vdlyvset__GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__info_ram__DOT__mem__v0 = 1U;
        __Vdlyvdim0__GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__info_ram__DOT__mem__v0 
            = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__info_ram_wr_addr;
    }
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_7__DOT__array_0_raw_rdata_en_pipe_0 
        = vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_7_io_r_req_valid;
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_6__DOT__array_0_raw_rdata_en_pipe_0 
        = vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_6_io_r_req_valid;
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_5__DOT__array_0_raw_rdata_en_pipe_0 
        = vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_5_io_r_req_valid;
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_4__DOT__array_0_raw_rdata_en_pipe_0 
        = vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_4_io_r_req_valid;
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_3__DOT__array_0_raw_rdata_en_pipe_0 
        = vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_3_io_r_req_valid;
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_2__DOT__array_0_raw_rdata_en_pipe_0 
        = vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_2_io_r_req_valid;
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_1__DOT__array_0_raw_rdata_en_pipe_0 
        = vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_1_io_r_req_valid;
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_0__DOT__array_0_raw_rdata_en_pipe_0 
        = vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_0_io_r_req_valid;
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_6__DOT__bypass_mask_raddr_reg 
        = vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_6_io_r_req_bits_setIdx;
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_2__DOT__bypass_mask_raddr_reg 
        = vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_2_io_r_req_bits_setIdx;
    vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__cc_dir__DOT__array_1_raw_rdata_en_pipe_0 
        = vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__cc_dir_io_r_req_valid;
    vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__cc_dir__DOT__array_2_raw_rdata_en_pipe_0 
        = vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__cc_dir_io_r_req_valid;
    vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__cc_dir__DOT__array_0_raw_rdata_en_pipe_0 
        = vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__cc_dir_io_r_req_valid;
    vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__cc_dir__DOT__array_3_raw_rdata_en_pipe_0 
        = vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__cc_dir_io_r_req_valid;
    if (vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__regout_REG_6) {
        vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__regout_r_6 
            = ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_6__DOT__bypass_mask_need_check)
                ? (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_6__DOT__bypass_wdata_lfsr)
                : vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_6__DOT__array_0
               [vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_6__DOT__array_0_raw_rdata_addr_pipe_0]);
    }
    if (vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__regout_REG_2) {
        vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__regout_r_2 
            = ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_2__DOT__bypass_mask_need_check)
                ? (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_2__DOT__bypass_wdata_lfsr)
                : vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_2__DOT__array_0
               [vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_2__DOT__array_0_raw_rdata_addr_pipe_0]);
    }
    if (vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__regout_REG_7) {
        vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__regout_r_7 
            = (((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_7__DOT__bypass_mask_need_check) 
                & ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_7__DOT__bypass_mask_raddr_reg) 
                   == (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_7__DOT__bypass_mask_waddr_reg)))
                ? (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_7__DOT__bypass_wdata_lfsr)
                : vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_7__DOT__array_0
               [vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_7__DOT__array_0_raw_rdata_addr_pipe_0]);
    }
    if (vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__regout_REG_1) {
        vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__regout_r_1 
            = (((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_1__DOT__bypass_mask_need_check) 
                & ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_1__DOT__bypass_mask_raddr_reg) 
                   == (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_1__DOT__bypass_mask_waddr_reg)))
                ? (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_1__DOT__bypass_wdata_lfsr)
                : vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_1__DOT__array_0
               [vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_1__DOT__array_0_raw_rdata_addr_pipe_0]);
    }
    if (vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__regout_REG) {
        vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__regout_r 
            = (((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_0__DOT__bypass_mask_need_check) 
                & ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_0__DOT__bypass_mask_raddr_reg) 
                   == (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_0__DOT__bypass_mask_waddr_reg)))
                ? (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_0__DOT__bypass_wdata_lfsr)
                : vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_0__DOT__array_0
               [vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_0__DOT__array_0_raw_rdata_addr_pipe_0]);
    }
    if (vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__regout_REG_3) {
        vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__regout_r_3 
            = (((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_3__DOT__bypass_mask_need_check) 
                & ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_3__DOT__bypass_mask_raddr_reg) 
                   == (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_3__DOT__bypass_mask_waddr_reg)))
                ? (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_3__DOT__bypass_wdata_lfsr)
                : vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_3__DOT__array_0
               [vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_3__DOT__array_0_raw_rdata_addr_pipe_0]);
    }
    if (vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__regout_REG_4) {
        vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__regout_r_4 
            = (((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_4__DOT__bypass_mask_need_check) 
                & ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_4__DOT__bypass_mask_raddr_reg) 
                   == (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_4__DOT__bypass_mask_waddr_reg)))
                ? (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_4__DOT__bypass_wdata_lfsr)
                : vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_4__DOT__array_0
               [vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_4__DOT__array_0_raw_rdata_addr_pipe_0]);
    }
    if (vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__regout_REG_5) {
        vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__regout_r_5 
            = (((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_5__DOT__bypass_mask_need_check) 
                & ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_5__DOT__bypass_mask_raddr_reg) 
                   == (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_5__DOT__bypass_mask_waddr_reg)))
                ? (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_5__DOT__bypass_wdata_lfsr)
                : vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_5__DOT__array_0
               [vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_5__DOT__array_0_raw_rdata_addr_pipe_0]);
    }
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__regsel_sourceD 
        = vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__regsel_sourceD_REG;
    vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__cc_dir__DOT__bypass_wdata_REG_0 
        = vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__cc_dir_io_w_req_bits_data_0;
    vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__cc_dir__DOT__bypass_wdata_REG_1 
        = vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__cc_dir_io_w_req_bits_data_0;
    vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__cc_dir__DOT__bypass_wdata_REG_2 
        = vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__cc_dir_io_w_req_bits_data_0;
    vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__cc_dir__DOT__bypass_wdata_REG_3 
        = vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__cc_dir_io_w_req_bits_data_0;
    if (vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__cc_dir_io_r_req_valid) {
        vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__cc_dir__DOT__array_1_raw_rdata_addr_pipe_0 
            = (1U & (vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA_io_a_bits_address 
                     >> 4U));
        vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__cc_dir__DOT__array_0_raw_rdata_addr_pipe_0 
            = (1U & (vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA_io_a_bits_address 
                     >> 4U));
        vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__cc_dir__DOT__array_2_raw_rdata_addr_pipe_0 
            = (1U & (vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA_io_a_bits_address 
                     >> 4U));
        vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__cc_dir__DOT__array_3_raw_rdata_addr_pipe_0 
            = (1U & (vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA_io_a_bits_address 
                     >> 4U));
    }
    if (vlSelf->io_out_d_valid) {
        vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkD__DOT__io_source_r 
            = vlSelf->io_out_d_bits_source;
        vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkD_io_source 
            = vlSelf->io_out_d_bits_source;
    } else {
        vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkD_io_source 
            = vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkD__DOT__io_source_r;
    }
    vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__cc_dir__DOT__bypass_mask_bypass_REG 
        = vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__x6;
    vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__cc_dir__DOT__bypass_mask_waddr_reg 
        = vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__cc_dir_io_w_req_bits_setIdx;
    vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__cc_dir__DOT__bypass_mask_need_check 
        = ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__cc_dir_io_r_req_valid) 
           & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__cc_dir_io_w_req_valid));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__cc_dir__DOT__bypass_mask_raddr_reg 
        = (1U & (vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA_io_a_bits_address 
                 >> 4U));
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__serviced_array_0 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT___GEN_20));
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__chosen_entry_is_valid 
        = ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__waiting_tbl_valid_rotated_0) 
                                         | (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__waiting_tbl_valid_rotated_1)));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT__sourceA_sent_reg 
        = ((~ (IData)(vlSelf->reset)) & ((~ (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__write_buffer__DOT__full)) 
                                         & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT___s1_need_w_T_2)));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT__read_sent_reg 
        = ((~ (IData)(vlSelf->reset)) & (4U == (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT___GEN_0)));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT__write_sent_reg 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT__s1_need_w));
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__chosen_entry 
        = (1U & ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__waiting_tbl_valid_rotated_0)
                                                ? ((IData)(1U) 
                                                   + (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__last_chosen_entry_rr))
                                                : ((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__waiting_tbl_valid_rotated_1) 
                                                   & (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__last_chosen_entry_rr)))));
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wg_throttling__DOT__alloc_en_i 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__alloc_en_1));
    if (vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__ren) {
        vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__tag 
            = (vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA_io_a_bits_address 
               >> 5U);
    }
    if (vlSelf->reset) {
        __Vdly__GPGPU_top__DOT__l2cache__DOT__directory__DOT__cc_dir__DOT__wrap_wrap = 0U;
        vlSelf->__Vdly__GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen__DOT__wg_slot_id_find_i = 0U;
        vlSelf->__Vdly__GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__next_served_dealloc = 0U;
        vlSelf->__Vdly__GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__next_served_dealloc = 0U;
        vlSelf->__Vdly__GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__cu_id_out = 0U;
        vlSelf->__Vdly__GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__size_ram_valid = 0U;
        vlSelf->__Vdly__GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__wg_id_out = 0U;
        vlSelf->__Vdly__GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__size_ram_cu_id_found = 0U;
        vlSelf->GPGPU_top__DOT__cta__DOT__wf_done_interface__DOT__buffer__DOT__maybe_full = 0U;
        vlSelf->GPGPU_top__DOT__cta__DOT__wf_done_interface__DOT__buffer__DOT__deq_ptr_value = 0U;
        vlSelf->GPGPU_top__DOT__l2cache__DOT__write_buffer__DOT__maybe_full = 0U;
        vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_3__DOT__request_data[0U] = 0U;
        vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_3__DOT__request_data[1U] = 0U;
        vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_3__DOT__request_data[2U] = 0U;
        vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_3__DOT__request_data[3U] = 0U;
        vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_2__DOT__request_data[0U] = 0U;
        vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_2__DOT__request_data[1U] = 0U;
        vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_2__DOT__request_data[2U] = 0U;
        vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_2__DOT__request_data[3U] = 0U;
        vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_1__DOT__request_data[0U] = 0U;
        vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_1__DOT__request_data[1U] = 0U;
        vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_1__DOT__request_data[2U] = 0U;
        vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_1__DOT__request_data[3U] = 0U;
        vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_0__DOT__request_data[0U] = 0U;
        vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_0__DOT__request_data[1U] = 0U;
        vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_0__DOT__request_data[2U] = 0U;
        vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_0__DOT__request_data[3U] = 0U;
        vlSelf->GPGPU_top__DOT__l2cache__DOT__write_buffer__DOT__deq_ptr_value = 0U;
        vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_3__DOT__request_way = 0U;
        vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_2__DOT__request_way = 0U;
        vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_1__DOT__request_way = 0U;
        vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_0__DOT__request_way = 0U;
        vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_3__DOT__request_offset = 0U;
        vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_2__DOT__request_offset = 0U;
        vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_1__DOT__request_offset = 0U;
        vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_0__DOT__request_offset = 0U;
        vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__lists = 0U;
        vlSelf->GPGPU_top__DOT__l2cache__DOT__requests__DOT__used = 0U;
        vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__used = 0U;
        vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_3__DOT__request_mask = 0U;
        vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_2__DOT__request_mask = 0U;
        vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_1__DOT__request_mask = 0U;
        vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_0__DOT__request_mask = 0U;
        vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_3__DOT__request_tag = 0U;
        vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_2__DOT__request_tag = 0U;
        vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_1__DOT__request_tag = 0U;
        vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_0__DOT__request_tag = 0U;
        vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_3__DOT__request_put = 0U;
        vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_2__DOT__request_put = 0U;
        vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_1__DOT__request_put = 0U;
        vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_0__DOT__request_put = 0U;
        vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_3__DOT__request_opcode = 0U;
        vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_2__DOT__request_opcode = 0U;
        vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_1__DOT__request_opcode = 0U;
        vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_0__DOT__request_opcode = 0U;
        vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT__s1_req_reg_way = 0U;
        vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT__pb_beat_reg_data[0U] = 0U;
        vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT__pb_beat_reg_data[1U] = 0U;
        vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT__pb_beat_reg_data[2U] = 0U;
        vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT__pb_beat_reg_data[3U] = 0U;
        vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT__s1_req_reg_mask = 0U;
        vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT__s1_req_reg_hit = 0U;
        vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_3__DOT__request_set = 0U;
        vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_2__DOT__request_set = 0U;
        vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_1__DOT__request_set = 0U;
        vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_0__DOT__request_set = 0U;
        vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT__pb_beat_reg_mask = 0U;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__cu_initialized_0 = 0U;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__cu_initialized_1 = 0U;
        vlSelf->GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__maybe_full = 0U;
        vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT__s1_req_reg_from_mem = 0U;
        vlSelf->GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__deq_ptr_value = 0U;
        vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__state_reg = 0U;
        vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__state_reg_1 = 0U;
    } else {
        if (vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__cc_dir__DOT__resetState) {
            __Vdly__GPGPU_top__DOT__l2cache__DOT__directory__DOT__cc_dir__DOT__wrap_wrap 
                = (1U & ((IData)(1U) + (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__cc_dir__DOT__wrap_wrap)));
        }
        vlSelf->__Vdly__GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen__DOT__wg_slot_id_find_i 
            = ((((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen_io_wg_id) 
                 == (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen__DOT__wg_slot_id_find_ram_cam_1_3)) 
                & (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen__DOT__wg_slot_id_bitmap_1_3))
                ? 3U : ((((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen_io_wg_id) 
                          == (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen__DOT__wg_slot_id_find_ram_cam_1_2)) 
                         & (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen__DOT__wg_slot_id_bitmap_1_2))
                         ? 2U : ((((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen_io_wg_id) 
                                   == (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen__DOT__wg_slot_id_find_ram_cam_1_1)) 
                                  & (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen__DOT__wg_slot_id_bitmap_1_1))
                                  ? 1U : ((((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen_io_wg_id) 
                                            == (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen__DOT__wg_slot_id_find_ram_cam_1_0)) 
                                           & (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen__DOT__wg_slot_id_bitmap_1_0))
                                           ? 0U : (
                                                   (((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen_io_wg_id) 
                                                     == (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen__DOT__wg_slot_id_find_ram_cam_0_3)) 
                                                    & (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen__DOT__wg_slot_id_bitmap_0_3))
                                                    ? 3U
                                                    : 
                                                   ((((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen_io_wg_id) 
                                                      == (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen__DOT__wg_slot_id_find_ram_cam_0_2)) 
                                                     & (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen__DOT__wg_slot_id_bitmap_0_2))
                                                     ? 2U
                                                     : 
                                                    (3U 
                                                     & (((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen_io_wg_id) 
                                                         == (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen__DOT__wg_slot_id_find_ram_cam_0_1)) 
                                                        & (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen__DOT__wg_slot_id_bitmap_0_1)))))))));
        vlSelf->__Vdly__GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__next_served_dealloc 
            = ((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__pending_wg_bitmap_0)
                ? 0U : ((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__pending_wg_bitmap_1)
                         ? 1U : ((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__pending_wg_bitmap_2)
                                  ? 2U : ((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__pending_wg_bitmap_3)
                                           ? 3U : 0U))));
        vlSelf->__Vdly__GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__next_served_dealloc 
            = ((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__pending_wg_bitmap_0)
                ? 0U : ((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__pending_wg_bitmap_1)
                         ? 1U : ((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__pending_wg_bitmap_2)
                                  ? 2U : ((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__pending_wg_bitmap_3)
                                           ? 3U : 0U))));
        if ((1U & (~ (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__pipeline_waiting)))) {
            vlSelf->__Vdly__GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__cu_id_out 
                = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__encoded_cu_id;
            vlSelf->__Vdly__GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__size_ram_valid 
                = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__encoded_cu_out_valid;
            vlSelf->__Vdly__GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__wg_id_out 
                = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__encoded_cu_wg_id;
            vlSelf->__Vdly__GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__size_ram_cu_id_found 
                = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__encoded_cu_found_valid;
        }
        if (((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__wf_done_interface__DOT__buffer__DOT__ram_MPORT_en) 
             != (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__wf_done_interface__DOT__buffer__DOT__do_deq))) {
            vlSelf->GPGPU_top__DOT__cta__DOT__wf_done_interface__DOT__buffer__DOT__maybe_full 
                = vlSelf->GPGPU_top__DOT__cta__DOT__wf_done_interface__DOT__buffer__DOT__ram_MPORT_en;
        }
        if (vlSelf->GPGPU_top__DOT__cta__DOT__wf_done_interface__DOT__buffer__DOT__do_deq) {
            vlSelf->GPGPU_top__DOT__cta__DOT__wf_done_interface__DOT__buffer__DOT__deq_ptr_value 
                = vlSelf->GPGPU_top__DOT__cta__DOT__wf_done_interface__DOT__buffer__DOT___value_T_3;
        }
        if (((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__write_buffer__DOT__ram_opcode_MPORT_en) 
             != (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__write_buffer__DOT__do_deq))) {
            vlSelf->GPGPU_top__DOT__l2cache__DOT__write_buffer__DOT__maybe_full 
                = vlSelf->GPGPU_top__DOT__l2cache__DOT__write_buffer__DOT__ram_opcode_MPORT_en;
        }
        if (vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_3_io_allocate_valid) {
            if (vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_3_io_allocate_valid) {
                vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_3__DOT__request_data[0U] 
                    = vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__io_result_bits_data_REG[0U];
                vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_3__DOT__request_data[1U] 
                    = vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__io_result_bits_data_REG[1U];
                vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_3__DOT__request_data[2U] 
                    = vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__io_result_bits_data_REG[2U];
                vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_3__DOT__request_data[3U] 
                    = vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__io_result_bits_data_REG[3U];
                vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_3__DOT__request_way 
                    = vlSelf->GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__ram_way_MPORT_data;
                vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_3__DOT__request_offset 
                    = vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__io_result_bits_offset_REG;
                vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_3__DOT__request_mask 
                    = vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__io_result_bits_mask_REG;
                vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_3__DOT__request_tag 
                    = vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__io_result_bits_tag_REG;
                vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_3__DOT__request_put 
                    = vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__io_result_bits_put_REG;
                vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_3__DOT__request_opcode 
                    = vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__io_result_bits_opcode_REG;
                vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_3__DOT__request_set 
                    = vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__io_result_bits_set_REG;
            } else {
                vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_3__DOT__request_data[0U] = 0U;
                vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_3__DOT__request_data[1U] = 0U;
                vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_3__DOT__request_data[2U] = 0U;
                vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_3__DOT__request_data[3U] = 0U;
                vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_3__DOT__request_way = 0U;
                vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_3__DOT__request_offset = 0U;
                vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_3__DOT__request_mask = 0U;
                vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_3__DOT__request_tag = 0U;
                vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_3__DOT__request_put = 0U;
                vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_3__DOT__request_opcode = 0U;
                vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_3__DOT__request_set = 0U;
            }
        }
        if (vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_2_io_allocate_valid) {
            if (vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_2_io_allocate_valid) {
                vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_2__DOT__request_data[0U] 
                    = vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__io_result_bits_data_REG[0U];
                vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_2__DOT__request_data[1U] 
                    = vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__io_result_bits_data_REG[1U];
                vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_2__DOT__request_data[2U] 
                    = vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__io_result_bits_data_REG[2U];
                vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_2__DOT__request_data[3U] 
                    = vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__io_result_bits_data_REG[3U];
                vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_2__DOT__request_way 
                    = vlSelf->GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__ram_way_MPORT_data;
                vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_2__DOT__request_offset 
                    = vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__io_result_bits_offset_REG;
                vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_2__DOT__request_mask 
                    = vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__io_result_bits_mask_REG;
                vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_2__DOT__request_tag 
                    = vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__io_result_bits_tag_REG;
                vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_2__DOT__request_put 
                    = vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__io_result_bits_put_REG;
                vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_2__DOT__request_opcode 
                    = vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__io_result_bits_opcode_REG;
                vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_2__DOT__request_set 
                    = vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__io_result_bits_set_REG;
            } else {
                vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_2__DOT__request_data[0U] = 0U;
                vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_2__DOT__request_data[1U] = 0U;
                vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_2__DOT__request_data[2U] = 0U;
                vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_2__DOT__request_data[3U] = 0U;
                vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_2__DOT__request_way = 0U;
                vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_2__DOT__request_offset = 0U;
                vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_2__DOT__request_mask = 0U;
                vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_2__DOT__request_tag = 0U;
                vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_2__DOT__request_put = 0U;
                vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_2__DOT__request_opcode = 0U;
                vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_2__DOT__request_set = 0U;
            }
        }
        if (vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_1_io_allocate_valid) {
            if (vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_1_io_allocate_valid) {
                vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_1__DOT__request_data[0U] 
                    = vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__io_result_bits_data_REG[0U];
                vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_1__DOT__request_data[1U] 
                    = vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__io_result_bits_data_REG[1U];
                vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_1__DOT__request_data[2U] 
                    = vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__io_result_bits_data_REG[2U];
                vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_1__DOT__request_data[3U] 
                    = vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__io_result_bits_data_REG[3U];
                vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_1__DOT__request_way 
                    = vlSelf->GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__ram_way_MPORT_data;
                vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_1__DOT__request_offset 
                    = vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__io_result_bits_offset_REG;
                vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_1__DOT__request_mask 
                    = vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__io_result_bits_mask_REG;
                vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_1__DOT__request_tag 
                    = vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__io_result_bits_tag_REG;
                vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_1__DOT__request_put 
                    = vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__io_result_bits_put_REG;
                vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_1__DOT__request_opcode 
                    = vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__io_result_bits_opcode_REG;
                vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_1__DOT__request_set 
                    = vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__io_result_bits_set_REG;
            } else {
                vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_1__DOT__request_data[0U] = 0U;
                vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_1__DOT__request_data[1U] = 0U;
                vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_1__DOT__request_data[2U] = 0U;
                vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_1__DOT__request_data[3U] = 0U;
                vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_1__DOT__request_way = 0U;
                vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_1__DOT__request_offset = 0U;
                vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_1__DOT__request_mask = 0U;
                vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_1__DOT__request_tag = 0U;
                vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_1__DOT__request_put = 0U;
                vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_1__DOT__request_opcode = 0U;
                vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_1__DOT__request_set = 0U;
            }
        }
        if (vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_0_io_allocate_valid) {
            if (vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_0_io_allocate_valid) {
                vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_0__DOT__request_data[0U] 
                    = vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__io_result_bits_data_REG[0U];
                vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_0__DOT__request_data[1U] 
                    = vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__io_result_bits_data_REG[1U];
                vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_0__DOT__request_data[2U] 
                    = vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__io_result_bits_data_REG[2U];
                vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_0__DOT__request_data[3U] 
                    = vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__io_result_bits_data_REG[3U];
                vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_0__DOT__request_way 
                    = vlSelf->GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__ram_way_MPORT_data;
                vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_0__DOT__request_offset 
                    = vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__io_result_bits_offset_REG;
                vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_0__DOT__request_mask 
                    = vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__io_result_bits_mask_REG;
                vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_0__DOT__request_tag 
                    = vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__io_result_bits_tag_REG;
                vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_0__DOT__request_put 
                    = vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__io_result_bits_put_REG;
                vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_0__DOT__request_opcode 
                    = vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__io_result_bits_opcode_REG;
                vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_0__DOT__request_set 
                    = vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__io_result_bits_set_REG;
            } else {
                vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_0__DOT__request_data[0U] = 0U;
                vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_0__DOT__request_data[1U] = 0U;
                vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_0__DOT__request_data[2U] = 0U;
                vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_0__DOT__request_data[3U] = 0U;
                vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_0__DOT__request_way = 0U;
                vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_0__DOT__request_offset = 0U;
                vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_0__DOT__request_mask = 0U;
                vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_0__DOT__request_tag = 0U;
                vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_0__DOT__request_put = 0U;
                vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_0__DOT__request_opcode = 0U;
                vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_0__DOT__request_set = 0U;
            }
        }
        if (vlSelf->GPGPU_top__DOT__l2cache__DOT__write_buffer__DOT__do_deq) {
            vlSelf->GPGPU_top__DOT__l2cache__DOT__write_buffer__DOT__deq_ptr_value 
                = vlSelf->GPGPU_top__DOT__l2cache__DOT__write_buffer__DOT___value_T_3;
        }
        vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__lists 
            = vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT___lists_T_2;
        vlSelf->GPGPU_top__DOT__l2cache__DOT__requests__DOT__used 
            = vlSelf->GPGPU_top__DOT__l2cache__DOT__requests__DOT___used_T_4;
        vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__used 
            = (0xfU & ((((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__head_MPORT_9_en)
                          ? (~ ((IData)(1U) << (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__head_pop_head2_MPORT_data)))
                          : 0xfU) & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT___used_T_1)) 
                       | ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__tail_MPORT_3_en)
                           ? (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__freeOH)
                           : 0U)));
        if (vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT___io_pb_pop_valid_T) {
            vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT__s1_req_reg_way 
                = vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD_io_req_bits_way;
            vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT__pb_beat_reg_data[0U] 
                = ((vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__data_io_data_MPORT_data[1U] 
                    << 0x1cU) | (vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__data_io_data_MPORT_data[0U] 
                                 >> 4U));
            vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT__pb_beat_reg_data[1U] 
                = ((vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__data_io_data_MPORT_data[2U] 
                    << 0x1cU) | (vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__data_io_data_MPORT_data[1U] 
                                 >> 4U));
            vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT__pb_beat_reg_data[2U] 
                = ((vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__data_io_data_MPORT_data[3U] 
                    << 0x1cU) | (vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__data_io_data_MPORT_data[2U] 
                                 >> 4U));
            vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT__pb_beat_reg_data[3U] 
                = ((vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__data_io_data_MPORT_data[4U] 
                    << 0x1cU) | (vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__data_io_data_MPORT_data[3U] 
                                 >> 4U));
            vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT__s1_req_reg_mask 
                = vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD_io_req_bits_mask;
            vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT__s1_req_reg_hit 
                = vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD_io_req_bits_hit;
            vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT__pb_beat_reg_mask 
                = (0xfU & vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__data_io_data_MPORT_data[0U]);
            vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT__s1_req_reg_from_mem 
                = vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD_io_req_bits_from_mem;
        }
        if (vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__cam_up_valid_i) {
            vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__cu_initialized_0 
                = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT___GEN_45;
            vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__cu_initialized_1 
                = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT___GEN_46;
        }
        if (((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__ram_opcode_MPORT_en) 
             != (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__do_deq))) {
            vlSelf->GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__maybe_full 
                = vlSelf->GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__ram_opcode_MPORT_en;
        }
        if (vlSelf->GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__do_deq) {
            vlSelf->GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__deq_ptr_value 
                = vlSelf->GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT___value_T_3;
        }
        if (((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__wen1) 
             & (~ (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__writeSet1)))) {
            vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__state_reg 
                = (1U & (~ (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__writeWay1)));
        } else if ((((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__ren1) 
                     & (~ (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__set))) 
                    & (0U != (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__hits)))) {
            vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__state_reg 
                = (1U & (~ ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT___hitWay_T_1) 
                            >> 1U)));
        }
        if (((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__wen1) 
             & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__writeSet1))) {
            vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__state_reg_1 
                = (1U & (~ (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__writeWay1)));
        } else if ((((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__ren1) 
                     & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__set)) 
                    & (0U != (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__hits)))) {
            vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__state_reg_1 
                = (1U & (~ ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT___hitWay_T_1) 
                            >> 1U)));
        }
    }
    if (vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__ren) {
        vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__set 
            = (1U & (vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA_io_a_bits_address 
                     >> 4U));
    }
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__done_array_0 
        = ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__lds_done_out) 
                                         & ((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__sgpr_done_out) 
                                            & (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__vgpr_done_out))));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_3__DOT__sche_a_valid 
        = ((~ (IData)(vlSelf->reset)) & ((~ (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_3__DOT___T)) 
                                         & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_3__DOT___GEN_12)));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_2__DOT__sche_a_valid 
        = ((~ (IData)(vlSelf->reset)) & ((~ (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_2__DOT___T)) 
                                         & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_2__DOT___GEN_12)));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_1__DOT__sche_a_valid 
        = ((~ (IData)(vlSelf->reset)) & ((~ (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_1__DOT___T)) 
                                         & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_1__DOT___GEN_12)));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_0__DOT__sche_a_valid 
        = ((~ (IData)(vlSelf->reset)) & ((~ (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_0__DOT___T)) 
                                         & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_0__DOT___GEN_12)));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_3__DOT__sche_dir_valid 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_3__DOT___GEN_15));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_2__DOT__sche_dir_valid 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_2__DOT___GEN_15));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_1__DOT__sche_dir_valid 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_1__DOT___GEN_15));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_0__DOT__sche_dir_valid 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_0__DOT___GEN_15));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_3__DOT__sink_d_reg 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_3__DOT___GEN_16));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_2__DOT__sink_d_reg 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_2__DOT___GEN_16));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_1__DOT__sink_d_reg 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_1__DOT___GEN_16));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_0__DOT__sink_d_reg 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_0__DOT___GEN_16));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT__io_d_valid_REG 
        = ((3U == (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT__stateReg)) 
           & (4U == (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT___GEN_0)));
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__handler_wg_done_ack_1 
        = ((~ (IData)(vlSelf->reset)) & ((1U == (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__dealloc_st)) 
                                         & ((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__chosen_done_cu_valid) 
                                            & (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__chosen_done_cu_id))));
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__handler_wg_done_ack_0 
        = ((~ (IData)(vlSelf->reset)) & ((1U == (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__dealloc_st)) 
                                         & ((~ (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__chosen_done_cu_id)) 
                                            & (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__chosen_done_cu_valid))));
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__tbl_walk_rd_valid 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__tbl_walk_rd_en));
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__invalid_due_to_not_ready_handlers_0 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__invalid_due_to_not_ready_i));
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__invalid_due_to_not_ready_handlers_1 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__invalid_due_to_not_ready_i));
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__dispatch2cu_wf_dispatch_handlers_1 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__dispatch2cu_wf_dispatch_i));
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__dispatch2cu_wf_dispatch_handlers_0 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__dispatch2cu_wf_dispatch_i));
    if (__Vdlyvset__GPGPU_top__DOT__l2cache__DOT__requests__DOT__tail__v0) {
        vlSelf->GPGPU_top__DOT__l2cache__DOT__requests__DOT__tail[__Vdlyvdim0__GPGPU_top__DOT__l2cache__DOT__requests__DOT__tail__v0] 
            = __Vdlyvval__GPGPU_top__DOT__l2cache__DOT__requests__DOT__tail__v0;
    }
    if (__Vdlyvset__GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__tail__v0) {
        vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__tail[__Vdlyvdim0__GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__tail__v0] 
            = __Vdlyvval__GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__tail__v0;
    }
    if (__Vdlyvset__GPGPU_top__DOT__l2cache__DOT__requests__DOT__next__v0) {
        vlSelf->GPGPU_top__DOT__l2cache__DOT__requests__DOT__next[__Vdlyvdim0__GPGPU_top__DOT__l2cache__DOT__requests__DOT__next__v0] 
            = __Vdlyvval__GPGPU_top__DOT__l2cache__DOT__requests__DOT__next__v0;
    }
    if (__Vdlyvset__GPGPU_top__DOT__l2cache__DOT__requests__DOT__head__v0) {
        vlSelf->GPGPU_top__DOT__l2cache__DOT__requests__DOT__head[__Vdlyvdim0__GPGPU_top__DOT__l2cache__DOT__requests__DOT__head__v0] 
            = __Vdlyvval__GPGPU_top__DOT__l2cache__DOT__requests__DOT__head__v0;
    }
    if (__Vdlyvset__GPGPU_top__DOT__l2cache__DOT__requests__DOT__head__v1) {
        vlSelf->GPGPU_top__DOT__l2cache__DOT__requests__DOT__head[__Vdlyvdim0__GPGPU_top__DOT__l2cache__DOT__requests__DOT__head__v1] 
            = __Vdlyvval__GPGPU_top__DOT__l2cache__DOT__requests__DOT__head__v1;
    }
    if (__Vdlyvset__GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__data__v0) {
        vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__data[__Vdlyvdim0__GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__data__v0][0U] 
            = __Vdlyvval__GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__data__v0[0U];
        vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__data[__Vdlyvdim0__GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__data__v0][1U] 
            = __Vdlyvval__GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__data__v0[1U];
        vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__data[__Vdlyvdim0__GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__data__v0][2U] 
            = __Vdlyvval__GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__data__v0[2U];
        vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__data[__Vdlyvdim0__GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__data__v0][3U] 
            = __Vdlyvval__GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__data__v0[3U];
        vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__data[__Vdlyvdim0__GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__data__v0][4U] 
            = __Vdlyvval__GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__data__v0[4U];
    }
    if (__Vdlyvset__GPGPU_top__DOT__l2cache__DOT__write_buffer__DOT__ram_opcode__v0) {
        vlSelf->GPGPU_top__DOT__l2cache__DOT__write_buffer__DOT__ram_opcode[__Vdlyvdim0__GPGPU_top__DOT__l2cache__DOT__write_buffer__DOT__ram_opcode__v0] = 0U;
    }
    if (__Vdlyvset__GPGPU_top__DOT__l2cache__DOT__write_buffer__DOT__ram_mask__v0) {
        vlSelf->GPGPU_top__DOT__l2cache__DOT__write_buffer__DOT__ram_mask[__Vdlyvdim0__GPGPU_top__DOT__l2cache__DOT__write_buffer__DOT__ram_mask__v0] 
            = __Vdlyvval__GPGPU_top__DOT__l2cache__DOT__write_buffer__DOT__ram_mask__v0;
    }
    if (__Vdlyvset__GPGPU_top__DOT__l2cache__DOT__write_buffer__DOT__ram_set__v0) {
        vlSelf->GPGPU_top__DOT__l2cache__DOT__write_buffer__DOT__ram_set[__Vdlyvdim0__GPGPU_top__DOT__l2cache__DOT__write_buffer__DOT__ram_set__v0] 
            = __Vdlyvval__GPGPU_top__DOT__l2cache__DOT__write_buffer__DOT__ram_set__v0;
    }
    if (__Vdlyvset__GPGPU_top__DOT__l2cache__DOT__directory__DOT__cc_dir__DOT__array_1__v0) {
        vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__cc_dir__DOT__array_1[__Vdlyvdim0__GPGPU_top__DOT__l2cache__DOT__directory__DOT__cc_dir__DOT__array_1__v0] 
            = __Vdlyvval__GPGPU_top__DOT__l2cache__DOT__directory__DOT__cc_dir__DOT__array_1__v0;
    }
    if (__Vdlyvset__GPGPU_top__DOT__l2cache__DOT__directory__DOT__cc_dir__DOT__array_0__v0) {
        vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__cc_dir__DOT__array_0[__Vdlyvdim0__GPGPU_top__DOT__l2cache__DOT__directory__DOT__cc_dir__DOT__array_0__v0] 
            = __Vdlyvval__GPGPU_top__DOT__l2cache__DOT__directory__DOT__cc_dir__DOT__array_0__v0;
    }
    if (__Vdlyvset__GPGPU_top__DOT__l2cache__DOT__directory__DOT__cc_dir__DOT__array_2__v0) {
        vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__cc_dir__DOT__array_2[__Vdlyvdim0__GPGPU_top__DOT__l2cache__DOT__directory__DOT__cc_dir__DOT__array_2__v0] 
            = __Vdlyvval__GPGPU_top__DOT__l2cache__DOT__directory__DOT__cc_dir__DOT__array_2__v0;
    }
    if (__Vdlyvset__GPGPU_top__DOT__l2cache__DOT__directory__DOT__cc_dir__DOT__array_3__v0) {
        vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__cc_dir__DOT__array_3[__Vdlyvdim0__GPGPU_top__DOT__l2cache__DOT__directory__DOT__cc_dir__DOT__array_3__v0] 
            = __Vdlyvval__GPGPU_top__DOT__l2cache__DOT__directory__DOT__cc_dir__DOT__array_3__v0;
    }
    vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__cc_dir__DOT__wrap_wrap 
        = __Vdly__GPGPU_top__DOT__l2cache__DOT__directory__DOT__cc_dir__DOT__wrap_wrap;
    if (vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__head_MPORT_6_en) {
        __Vdlyvval__GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__head__v1 
            = (3U & (((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__next_MPORT_1_en) 
                      & ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__tail_push_tail_data) 
                         == (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__head_pop_head_data)))
                      ? (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__freeIdx)
                      : vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__next
                     [vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__head_pop_head_data]));
        __Vdlyvset__GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__head__v1 = 1U;
        __Vdlyvdim0__GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__head__v1 
            = vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__head_pop_head_addr;
    }
    if (__Vdlyvset__GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__next__v0) {
        vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__next[__Vdlyvdim0__GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__next__v0] 
            = __Vdlyvval__GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__next__v0;
    }
    if (__Vdlyvset__GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__head__v0) {
        vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__head[__Vdlyvdim0__GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__head__v0] 
            = __Vdlyvval__GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__head__v0;
    }
    if (__Vdlyvset__GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__head__v1) {
        vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__head[__Vdlyvdim0__GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__head__v1] 
            = __Vdlyvval__GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__head__v1;
    }
    if (__Vdlyvset__GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__head__v2) {
        vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__head[__Vdlyvdim0__GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__head__v2] 
            = __Vdlyvval__GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__head__v2;
    }
    if (__Vdlyvset__GPGPU_top__DOT__l2cache__DOT__write_buffer__DOT__ram_size__v0) {
        vlSelf->GPGPU_top__DOT__l2cache__DOT__write_buffer__DOT__ram_size[__Vdlyvdim0__GPGPU_top__DOT__l2cache__DOT__write_buffer__DOT__ram_size__v0] 
            = __Vdlyvval__GPGPU_top__DOT__l2cache__DOT__write_buffer__DOT__ram_size__v0;
    }
    if (__Vdlyvset__GPGPU_top__DOT__l2cache__DOT__write_buffer__DOT__ram_source__v0) {
        vlSelf->GPGPU_top__DOT__l2cache__DOT__write_buffer__DOT__ram_source[__Vdlyvdim0__GPGPU_top__DOT__l2cache__DOT__write_buffer__DOT__ram_source__v0] 
            = __Vdlyvval__GPGPU_top__DOT__l2cache__DOT__write_buffer__DOT__ram_source__v0;
    }
    if (__Vdlyvset__GPGPU_top__DOT__l2cache__DOT__write_buffer__DOT__ram_tag__v0) {
        vlSelf->GPGPU_top__DOT__l2cache__DOT__write_buffer__DOT__ram_tag[__Vdlyvdim0__GPGPU_top__DOT__l2cache__DOT__write_buffer__DOT__ram_tag__v0] 
            = __Vdlyvval__GPGPU_top__DOT__l2cache__DOT__write_buffer__DOT__ram_tag__v0;
    }
    if (__Vdlyvset__GPGPU_top__DOT__l2cache__DOT__write_buffer__DOT__ram_offset__v0) {
        vlSelf->GPGPU_top__DOT__l2cache__DOT__write_buffer__DOT__ram_offset[__Vdlyvdim0__GPGPU_top__DOT__l2cache__DOT__write_buffer__DOT__ram_offset__v0] 
            = __Vdlyvval__GPGPU_top__DOT__l2cache__DOT__write_buffer__DOT__ram_offset__v0;
    }
    if (__Vdlyvset__GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__ram_size__v0) {
        vlSelf->GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__ram_size[__Vdlyvdim0__GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__ram_size__v0] = 0U;
    }
    if (__Vdlyvset__GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__ram_data__v0) {
        vlSelf->GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__ram_data[__Vdlyvdim0__GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__ram_data__v0][0U] 
            = __Vdlyvval__GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__ram_data__v0[0U];
        vlSelf->GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__ram_data[__Vdlyvdim0__GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__ram_data__v0][1U] 
            = __Vdlyvval__GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__ram_data__v0[1U];
        vlSelf->GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__ram_data[__Vdlyvdim0__GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__ram_data__v0][2U] 
            = __Vdlyvval__GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__ram_data__v0[2U];
        vlSelf->GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__ram_data[__Vdlyvdim0__GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__ram_data__v0][3U] 
            = __Vdlyvval__GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__ram_data__v0[3U];
    }
    if (__Vdlyvset__GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__ram_way__v0) {
        vlSelf->GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__ram_way[__Vdlyvdim0__GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__ram_way__v0] 
            = __Vdlyvval__GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__ram_way__v0;
    }
    if (__Vdlyvset__GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__ram_offset__v0) {
        vlSelf->GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__ram_offset[__Vdlyvdim0__GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__ram_offset__v0] 
            = __Vdlyvval__GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__ram_offset__v0;
    }
    if (__Vdlyvset__GPGPU_top__DOT__l2cache__DOT__write_buffer__DOT__ram_data__v0) {
        vlSelf->GPGPU_top__DOT__l2cache__DOT__write_buffer__DOT__ram_data[__Vdlyvdim0__GPGPU_top__DOT__l2cache__DOT__write_buffer__DOT__ram_data__v0][0U] 
            = __Vdlyvval__GPGPU_top__DOT__l2cache__DOT__write_buffer__DOT__ram_data__v0[0U];
        vlSelf->GPGPU_top__DOT__l2cache__DOT__write_buffer__DOT__ram_data[__Vdlyvdim0__GPGPU_top__DOT__l2cache__DOT__write_buffer__DOT__ram_data__v0][1U] 
            = __Vdlyvval__GPGPU_top__DOT__l2cache__DOT__write_buffer__DOT__ram_data__v0[1U];
        vlSelf->GPGPU_top__DOT__l2cache__DOT__write_buffer__DOT__ram_data[__Vdlyvdim0__GPGPU_top__DOT__l2cache__DOT__write_buffer__DOT__ram_data__v0][2U] 
            = __Vdlyvval__GPGPU_top__DOT__l2cache__DOT__write_buffer__DOT__ram_data__v0[2U];
        vlSelf->GPGPU_top__DOT__l2cache__DOT__write_buffer__DOT__ram_data[__Vdlyvdim0__GPGPU_top__DOT__l2cache__DOT__write_buffer__DOT__ram_data__v0][3U] 
            = __Vdlyvval__GPGPU_top__DOT__l2cache__DOT__write_buffer__DOT__ram_data__v0[3U];
    }
    if (__Vdlyvset__GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__ram_tag__v0) {
        vlSelf->GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__ram_tag[__Vdlyvdim0__GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__ram_tag__v0] 
            = __Vdlyvval__GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__ram_tag__v0;
    }
    if (__Vdlyvset__GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__ram_mask__v0) {
        vlSelf->GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__ram_mask[__Vdlyvdim0__GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__ram_mask__v0] 
            = __Vdlyvval__GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__ram_mask__v0;
    }
    if (__Vdlyvset__GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__ram_hit__v0) {
        vlSelf->GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__ram_hit[__Vdlyvdim0__GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__ram_hit__v0] 
            = __Vdlyvval__GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__ram_hit__v0;
    }
    if (__Vdlyvset__GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__ram_set__v0) {
        vlSelf->GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__ram_set[__Vdlyvdim0__GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__ram_set__v0] 
            = __Vdlyvval__GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__ram_set__v0;
    }
    if (__Vdlyvset__GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__ram_opcode__v0) {
        vlSelf->GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__ram_opcode[__Vdlyvdim0__GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__ram_opcode__v0] 
            = __Vdlyvval__GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__ram_opcode__v0;
    }
    if (__Vdlyvset__GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__ram_put__v0) {
        vlSelf->GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__ram_put[__Vdlyvdim0__GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__ram_put__v0] 
            = __Vdlyvval__GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__ram_put__v0;
    }
    if (__Vdlyvset__GPGPU_top__DOT__l2cache__DOT__requests__DOT__data__v0) {
        vlSelf->GPGPU_top__DOT__l2cache__DOT__requests__DOT__data[__Vdlyvdim0__GPGPU_top__DOT__l2cache__DOT__requests__DOT__data__v0] 
            = __Vdlyvval__GPGPU_top__DOT__l2cache__DOT__requests__DOT__data__v0;
    }
    if (__Vdlyvset__GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__ram_source__v0) {
        vlSelf->GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__ram_source[__Vdlyvdim0__GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__ram_source__v0] 
            = __Vdlyvval__GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__ram_source__v0;
    }
    if (__Vdlyvset__GPGPU_top__DOT__cta__DOT__wf_done_interface__DOT__buffer__DOT__ram__v0) {
        vlSelf->GPGPU_top__DOT__cta__DOT__wf_done_interface__DOT__buffer__DOT__ram[__Vdlyvdim0__GPGPU_top__DOT__cta__DOT__wf_done_interface__DOT__buffer__DOT__ram__v0] 
            = __Vdlyvval__GPGPU_top__DOT__cta__DOT__wf_done_interface__DOT__buffer__DOT__ram__v0;
    }
    if (__Vdlyvset__GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_6__DOT__array_0__v0) {
        vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_6__DOT__array_0[__Vdlyvdim0__GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_6__DOT__array_0__v0] 
            = __Vdlyvval__GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_6__DOT__array_0__v0;
    }
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_6__DOT__bypass_wdata_lfsr 
        = __Vdly__GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_6__DOT__bypass_wdata_lfsr;
    if (__Vdlyvset__GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_2__DOT__array_0__v0) {
        vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_2__DOT__array_0[__Vdlyvdim0__GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_2__DOT__array_0__v0] 
            = __Vdlyvval__GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_2__DOT__array_0__v0;
    }
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_2__DOT__bypass_wdata_lfsr 
        = __Vdly__GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_2__DOT__bypass_wdata_lfsr;
    if (__Vdlyvset__GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_7__DOT__array_0__v0) {
        vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_7__DOT__array_0[__Vdlyvdim0__GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_7__DOT__array_0__v0] 
            = __Vdlyvval__GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_7__DOT__array_0__v0;
    }
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_7__DOT__bypass_wdata_lfsr 
        = __Vdly__GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_7__DOT__bypass_wdata_lfsr;
    if (__Vdlyvset__GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_1__DOT__array_0__v0) {
        vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_1__DOT__array_0[__Vdlyvdim0__GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_1__DOT__array_0__v0] 
            = __Vdlyvval__GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_1__DOT__array_0__v0;
    }
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_1__DOT__bypass_wdata_lfsr 
        = __Vdly__GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_1__DOT__bypass_wdata_lfsr;
    if (__Vdlyvset__GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_0__DOT__array_0__v0) {
        vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_0__DOT__array_0[__Vdlyvdim0__GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_0__DOT__array_0__v0] 
            = __Vdlyvval__GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_0__DOT__array_0__v0;
    }
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_0__DOT__bypass_wdata_lfsr 
        = __Vdly__GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_0__DOT__bypass_wdata_lfsr;
    if (__Vdlyvset__GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_3__DOT__array_0__v0) {
        vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_3__DOT__array_0[__Vdlyvdim0__GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_3__DOT__array_0__v0] 
            = __Vdlyvval__GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_3__DOT__array_0__v0;
    }
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_3__DOT__bypass_wdata_lfsr 
        = __Vdly__GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_3__DOT__bypass_wdata_lfsr;
    if (__Vdlyvset__GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_4__DOT__array_0__v0) {
        vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_4__DOT__array_0[__Vdlyvdim0__GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_4__DOT__array_0__v0] 
            = __Vdlyvval__GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_4__DOT__array_0__v0;
    }
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_4__DOT__bypass_wdata_lfsr 
        = __Vdly__GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_4__DOT__bypass_wdata_lfsr;
    if (__Vdlyvset__GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_5__DOT__array_0__v0) {
        vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_5__DOT__array_0[__Vdlyvdim0__GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_5__DOT__array_0__v0] 
            = __Vdlyvval__GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_5__DOT__array_0__v0;
    }
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_5__DOT__bypass_wdata_lfsr 
        = __Vdly__GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_5__DOT__bypass_wdata_lfsr;
    if (vlSelf->reset) {
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wg_throttling__DOT__actual_wg_count_array_0 = 0U;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wg_throttling__DOT__actual_wg_count_array_1 = 0U;
        vlSelf->GPGPU_top__DOT__l2cache__DOT__robin_filter = 0U;
        vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__wipeCount = 0U;
        __Vdly__GPGPU_top__DOT__l2cache__DOT__sourceD__DOT__stateReg = 0U;
        vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT__busy = 0U;
        vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT__stateReg 
            = __Vdly__GPGPU_top__DOT__l2cache__DOT__sourceD__DOT__stateReg;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__dispatch2cu_wf_dispatch_i = 0U;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__info_ram__DOT__rd_word_reg = 0U;
    } else {
        if (vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wg_throttling__DOT__dealloc_en_i) {
            if (vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wg_throttling__DOT__cu_id_i) {
                vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wg_throttling__DOT__actual_wg_count_array_0 
                    = (7U & (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wg_throttling__DOT___GEN_14));
                vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wg_throttling__DOT__actual_wg_count_array_1 
                    = (7U & ((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wg_throttling__DOT___GEN_10) 
                             - (IData)(1U)));
            } else {
                vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wg_throttling__DOT__actual_wg_count_array_0 
                    = (7U & ((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wg_throttling__DOT___GEN_10) 
                             - (IData)(1U)));
                vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wg_throttling__DOT__actual_wg_count_array_1 
                    = (7U & (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wg_throttling__DOT___GEN_15));
            }
        } else {
            vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wg_throttling__DOT__actual_wg_count_array_0 
                = (7U & (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wg_throttling__DOT___GEN_14));
            vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wg_throttling__DOT__actual_wg_count_array_1 
                = (7U & (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wg_throttling__DOT___GEN_15));
        }
        if ((0U != (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshr_request))) {
            vlSelf->GPGPU_top__DOT__l2cache__DOT__robin_filter 
                = (0xfU & (~ ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT___robin_filter_T_1) 
                              | ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT___robin_filter_T_1) 
                                 >> 2U))));
        }
        if ((1U & ((~ (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__wipeDone)) 
                   & (~ (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__wipeOff))))) {
            vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__wipeCount 
                = vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT___wipeCount_T_1;
        }
        if ((0U == (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT__stateReg))) {
            if (vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT___io_pb_pop_valid_T) {
                __Vdly__GPGPU_top__DOT__l2cache__DOT__sourceD__DOT__stateReg 
                    = ((4U == (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT___GEN_0))
                        ? 3U : (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT___GEN_23));
                vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT__busy 
                    = ((4U == (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT___GEN_0)) 
                       | (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT___s1_need_w_T_2));
            } else {
                vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT__busy = 0U;
            }
        } else {
            __Vdly__GPGPU_top__DOT__l2cache__DOT__sourceD__DOT__stateReg 
                = ((1U == (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT__stateReg))
                    ? 3U : ((2U == (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT__stateReg))
                             ? (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT___GEN_30)
                             : (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT___GEN_34)));
            if ((1U != (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT__stateReg))) {
                if ((2U != (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT__stateReg))) {
                    vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT__busy 
                        = vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT___GEN_33;
                }
            }
        }
        vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT__stateReg 
            = __Vdly__GPGPU_top__DOT__l2cache__DOT__sourceD__DOT__stateReg;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__dispatch2cu_wf_dispatch_i 
            = ((1U == (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__alloc_st))
                ? 0U : ((2U == (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__alloc_st))
                         ? 0U : (3U & ((4U == (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__alloc_st))
                                        ? (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT___GEN_51)
                                        : ((8U == (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__alloc_st))
                                            ? (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT___GEN_51)
                                            : 0U)))));
        if (vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__info_ram_rd_en) {
            vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__info_ram__DOT__rd_word_reg 
                = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__info_ram__DOT__mem
                [vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__curr_dealloc_wg_slot];
        }
    }
    if (__Vdlyvset__GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__info_ram__DOT__mem__v0) {
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__info_ram__DOT__mem[__Vdlyvdim0__GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__info_ram__DOT__mem__v0] 
            = __Vdlyvval__GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__info_ram__DOT__mem__v0;
    }
    if (vlSelf->reset) {
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__info_ram__DOT__rd_word_reg = 0U;
    } else if (vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__info_ram_rd_en) {
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__info_ram__DOT__rd_word_reg 
            = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__info_ram__DOT__mem
            [vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__curr_dealloc_wg_slot];
    }
    if (__Vdlyvset__GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__info_ram__DOT__mem__v0) {
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__info_ram__DOT__mem[__Vdlyvdim0__GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__info_ram__DOT__mem__v0] 
            = __Vdlyvval__GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__info_ram__DOT__mem__v0;
    }
    if (vlSelf->reset) {
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__allocator_vgpr_start_out_i = 0U;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__allocator_sgpr_start_out_i = 0U;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__allocator_lds_start_out_i = 0U;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__allocator_wg_id_out_i = 0U;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__allocator_cu_id_out_i = 0U;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__inflight_wg_buffer_gds_base_dispatch_i = 0U;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__inflight_wg_buffer_start_pc_i = 0U;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__inflight_wg_buffer_gpu_wf_size_i = 0U;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__inflight_wg_buffer_gpu_vgpr_size_per_wf_i = 0U;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__inflight_wg_buffer_gpu_sgpr_size_per_wf_i = 0U;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__ram_wg_ready_start__DOT__rd_word_reg[0U] = 0U;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__ram_wg_ready_start__DOT__rd_word_reg[1U] = 0U;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__ram_wg_ready_start__DOT__rd_word_reg[2U] = 0U;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__ram_wg_ready_start__DOT__rd_word_reg[3U] = 0U;
    } else {
        if (vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__dis_controller_i__DOT__dis_controller_wg_alloc_valid_i) {
            vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__allocator_vgpr_start_out_i 
                = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i_io_allocator_vgpr_start_out;
            vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__allocator_sgpr_start_out_i 
                = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i_io_allocator_sgpr_start_out;
            vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__allocator_lds_start_out_i 
                = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i_io_allocator_lds_start_out;
            vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__allocator_wg_id_out_i 
                = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__wg_id_out;
            vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__allocator_cu_id_out_i 
                = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__cu_id_out;
        }
        if (vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__inflight_wg_buffer_gpu_valid_i) {
            vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__inflight_wg_buffer_gds_base_dispatch_i 
                = vlSelf->io_host_req_bits_host_gds_baseaddr;
            vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__inflight_wg_buffer_start_pc_i 
                = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__inflight_wg_buffer_start_pc_i;
            vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__inflight_wg_buffer_gpu_wf_size_i 
                = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__inflight_wg_buffer_gpu_wf_size_i;
            vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__inflight_wg_buffer_gpu_vgpr_size_per_wf_i 
                = (0xfffU & (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__inflight_wg_buffer_gpu_vgpr_size_per_wf_i));
            vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__inflight_wg_buffer_gpu_sgpr_size_per_wf_i 
                = (0xfffU & (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__inflight_wg_buffer_gpu_sgpr_size_per_wf_i));
        }
        if (vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__tbl_walk_rd_en) {
            vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__ram_wg_ready_start__DOT__rd_word_reg[0U] 
                = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__ram_wg_ready_start__DOT__mem
                [vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__tbl_walk_idx][0U];
            vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__ram_wg_ready_start__DOT__rd_word_reg[1U] 
                = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__ram_wg_ready_start__DOT__mem
                [vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__tbl_walk_idx][1U];
            vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__ram_wg_ready_start__DOT__rd_word_reg[2U] 
                = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__ram_wg_ready_start__DOT__mem
                [vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__tbl_walk_idx][2U];
            vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__ram_wg_ready_start__DOT__rd_word_reg[3U] 
                = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__ram_wg_ready_start__DOT__mem
                [vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__tbl_walk_idx][3U];
        }
    }
    if (__Vdlyvset__GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__ram_wg_ready_start__DOT__mem__v0) {
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__ram_wg_ready_start__DOT__mem[__Vdlyvdim0__GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__ram_wg_ready_start__DOT__mem__v0][0U] 
            = __Vdlyvval__GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__ram_wg_ready_start__DOT__mem__v0[0U];
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__ram_wg_ready_start__DOT__mem[__Vdlyvdim0__GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__ram_wg_ready_start__DOT__mem__v0][1U] 
            = __Vdlyvval__GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__ram_wg_ready_start__DOT__mem__v0[1U];
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__ram_wg_ready_start__DOT__mem[__Vdlyvdim0__GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__ram_wg_ready_start__DOT__mem__v0][2U] 
            = __Vdlyvval__GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__ram_wg_ready_start__DOT__mem__v0[2U];
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__ram_wg_ready_start__DOT__mem[__Vdlyvdim0__GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__ram_wg_ready_start__DOT__mem__v0][3U] 
            = __Vdlyvval__GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__ram_wg_ready_start__DOT__mem__v0[3U];
    }
    if (vlSelf->reset) {
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__ram_wg_waiting_allocation__DOT__rd_word_reg = 0ULL;
    } else if (vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__tbl_walk_rd_en) {
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__ram_wg_waiting_allocation__DOT__rd_word_reg 
            = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__ram_wg_waiting_allocation__DOT__mem
            [vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__tbl_walk_idx];
    }
    if (__Vdlyvset__GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__ram_wg_waiting_allocation__DOT__mem__v0) {
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__ram_wg_waiting_allocation__DOT__mem[__Vdlyvdim0__GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__ram_wg_waiting_allocation__DOT__mem__v0] 
            = __Vdlyvval__GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__ram_wg_waiting_allocation__DOT__mem__v0;
    }
    vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__cc_dir__DOT__resetState 
        = ((IData)(vlSelf->reset) | (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__cc_dir__DOT___GEN_2));
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen__DOT__wg_slot_id_bitmap_0_0 
        = ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen__DOT__cancel_valid)
                                          ? ((~ ((~ (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen__DOT__cu_id_cancel)) 
                                                 & (0U 
                                                    == (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen__DOT__wg_slot_id_find_i)))) 
                                             & (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen__DOT___GEN_24))
                                          : (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen__DOT___GEN_24)));
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen__DOT__wg_slot_id_bitmap_0_1 
        = ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen__DOT__cancel_valid)
                                          ? ((~ ((~ (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen__DOT__cu_id_cancel)) 
                                                 & (1U 
                                                    == (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen__DOT__wg_slot_id_find_i)))) 
                                             & (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen__DOT___GEN_25))
                                          : (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen__DOT___GEN_25)));
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen__DOT__wg_slot_id_bitmap_0_2 
        = ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen__DOT__cancel_valid)
                                          ? ((~ ((~ (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen__DOT__cu_id_cancel)) 
                                                 & (2U 
                                                    == (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen__DOT__wg_slot_id_find_i)))) 
                                             & (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen__DOT___GEN_26))
                                          : (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen__DOT___GEN_26)));
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen__DOT__wg_slot_id_bitmap_0_3 
        = ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen__DOT__cancel_valid)
                                          ? ((~ ((~ (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen__DOT__cu_id_cancel)) 
                                                 & (3U 
                                                    == (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen__DOT__wg_slot_id_find_i)))) 
                                             & (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen__DOT___GEN_27))
                                          : (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen__DOT___GEN_27)));
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen__DOT__wg_slot_id_bitmap_1_0 
        = ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen__DOT__cancel_valid)
                                          ? ((~ ((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen__DOT__cu_id_cancel) 
                                                 & (0U 
                                                    == (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen__DOT__wg_slot_id_find_i)))) 
                                             & (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen__DOT___GEN_28))
                                          : (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen__DOT___GEN_28)));
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen__DOT__wg_slot_id_bitmap_1_1 
        = ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen__DOT__cancel_valid)
                                          ? ((~ ((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen__DOT__cu_id_cancel) 
                                                 & (1U 
                                                    == (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen__DOT__wg_slot_id_find_i)))) 
                                             & (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen__DOT___GEN_29))
                                          : (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen__DOT___GEN_29)));
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen__DOT__wg_slot_id_bitmap_1_2 
        = ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen__DOT__cancel_valid)
                                          ? ((~ ((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen__DOT__cu_id_cancel) 
                                                 & (2U 
                                                    == (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen__DOT__wg_slot_id_find_i)))) 
                                             & (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen__DOT___GEN_30))
                                          : (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen__DOT___GEN_30)));
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen__DOT__wg_slot_id_bitmap_1_3 
        = ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen__DOT__cancel_valid)
                                          ? ((~ ((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen__DOT__cu_id_cancel) 
                                                 & (3U 
                                                    == (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen__DOT__wg_slot_id_find_i)))) 
                                             & (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen__DOT___GEN_31))
                                          : (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen__DOT___GEN_31)));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__io_result_bits_source_REG 
        = ((IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.io_memReq_valid)
            ? ((IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__l1Cache2L2Arb__DOT__memReqArb_io_in_0_valid)
                ? ((3U == (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__icache__DOT__mshrAccess__DOT__hasSendStatus_io_next))
                    ? (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__icache__DOT__mshrAccess__DOT__targetInfo_Accesss_3_0)
                    : ((2U == (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__icache__DOT__mshrAccess__DOT__hasSendStatus_io_next))
                        ? (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__icache__DOT__mshrAccess__DOT__targetInfo_Accesss_2_0)
                        : ((1U == (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__icache__DOT__mshrAccess__DOT__hasSendStatus_io_next))
                            ? (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__icache__DOT__mshrAccess__DOT__targetInfo_Accesss_1_0)
                            : (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__icache__DOT__mshrAccess__DOT__targetInfo_Accesss_0_0))))
                : (4U | ((IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__dcache__DOT__MshrAccess_io_miss2mem_valid)
                          ? (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__dcache__DOT__MshrAccess_io_missRspOut_bits_instrId)
                          : ((3U == (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__dcache__DOT__WriteDataBuf__DOT__deqPtr_w_Gen_io_deqPtr_ns))
                              ? (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__dcache__DOT__WriteDataBuf__DOT__instrId_ram_3)
                              : ((2U == (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__dcache__DOT__WriteDataBuf__DOT__deqPtr_w_Gen_io_deqPtr_ns))
                                  ? (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__dcache__DOT__WriteDataBuf__DOT__instrId_ram_2)
                                  : ((1U == (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__dcache__DOT__WriteDataBuf__DOT__deqPtr_w_Gen_io_deqPtr_ns))
                                      ? (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__dcache__DOT__WriteDataBuf__DOT__instrId_ram_1)
                                      : (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__dcache__DOT__WriteDataBuf__DOT__instrId_ram_0)))))))
            : (8U | ((IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__l1Cache2L2Arb__DOT__memReqArb_io_in_0_valid)
                      ? ((3U == (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__icache__DOT__mshrAccess__DOT__hasSendStatus_io_next))
                          ? (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__icache__DOT__mshrAccess__DOT__targetInfo_Accesss_3_0)
                          : ((2U == (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__icache__DOT__mshrAccess__DOT__hasSendStatus_io_next))
                              ? (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__icache__DOT__mshrAccess__DOT__targetInfo_Accesss_2_0)
                              : ((1U == (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__icache__DOT__mshrAccess__DOT__hasSendStatus_io_next))
                                  ? (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__icache__DOT__mshrAccess__DOT__targetInfo_Accesss_1_0)
                                  : (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__icache__DOT__mshrAccess__DOT__targetInfo_Accesss_0_0))))
                      : (4U | ((IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__dcache__DOT__MshrAccess_io_miss2mem_valid)
                                ? (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__dcache__DOT__MshrAccess_io_missRspOut_bits_instrId)
                                : ((3U == (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__dcache__DOT__WriteDataBuf__DOT__deqPtr_w_Gen_io_deqPtr_ns))
                                    ? (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__dcache__DOT__WriteDataBuf__DOT__instrId_ram_3)
                                    : ((2U == (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__dcache__DOT__WriteDataBuf__DOT__deqPtr_w_Gen_io_deqPtr_ns))
                                        ? (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__dcache__DOT__WriteDataBuf__DOT__instrId_ram_2)
                                        : ((1U == (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__dcache__DOT__WriteDataBuf__DOT__deqPtr_w_Gen_io_deqPtr_ns))
                                            ? (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__dcache__DOT__WriteDataBuf__DOT__instrId_ram_1)
                                            : (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__dcache__DOT__WriteDataBuf__DOT__instrId_ram_0)))))))));
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__inflight_wg_buffer_host_wf_done_i 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__dis_controller_wg_dealloc_valid_i));
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__new_index 
        = ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__waiting_tbl_valid_0) 
                                         & (~ (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__waiting_tbl_valid_1))));
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__new_index_wr_en 
        = ((~ (IData)(vlSelf->reset)) & ((1U != (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__inflight_tbl_rd_host_st)) 
                                         & (2U == (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__inflight_tbl_rd_host_st))));
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__inflight_wg_buffer_host_rcvd_ack_i 
        = ((~ (IData)(vlSelf->reset)) & ((1U != (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__inflight_tbl_rd_host_st)) 
                                         & (2U == (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__inflight_tbl_rd_host_st))));
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__info_ram_wr_en 
        = ((~ (IData)(vlSelf->reset)) & ((1U == (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__alloc_st)) 
                                         & (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT___T_1)));
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__info_ram_wr_en 
        = ((~ (IData)(vlSelf->reset)) & ((1U == (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__alloc_st)) 
                                         & (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT___T_1)));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_6__DOT___bypass_wdata_lfsr_T_2 
        = (((QData)((IData)((1U & VL_REDXOR_8((0x1bULL 
                                               & vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_6__DOT__bypass_wdata_lfsr))))) 
            << 0x3fU) | (vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_6__DOT__bypass_wdata_lfsr 
                         >> 1U));
    if (vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_6_io_r_req_valid) {
        vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_6__DOT__bypass_mask_need_check 
            = vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_6_io_w_req_valid;
        vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_6__DOT__array_0_raw_rdata_addr_pipe_0 
            = vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_6_io_r_req_bits_setIdx;
    } else {
        vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_6__DOT__bypass_mask_need_check = 0U;
    }
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__regout_REG_6 
        = ((~ (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__regout_wen_6)) 
           & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__regout_en_6));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_2__DOT___bypass_wdata_lfsr_T_2 
        = (((QData)((IData)((1U & VL_REDXOR_8((0x1bULL 
                                               & vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_2__DOT__bypass_wdata_lfsr))))) 
            << 0x3fU) | (vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_2__DOT__bypass_wdata_lfsr 
                         >> 1U));
    if (vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_2_io_r_req_valid) {
        vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_2__DOT__bypass_mask_need_check 
            = vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_2_io_w_req_valid;
        vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_2__DOT__array_0_raw_rdata_addr_pipe_0 
            = vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_2_io_r_req_bits_setIdx;
    } else {
        vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_2__DOT__bypass_mask_need_check = 0U;
    }
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__regout_REG_2 
        = ((~ (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__regout_wen_2)) 
           & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__regout_en_2));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_7__DOT___bypass_wdata_lfsr_T_2 
        = (((QData)((IData)((1U & VL_REDXOR_8((0x1bULL 
                                               & vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_7__DOT__bypass_wdata_lfsr))))) 
            << 0x3fU) | (vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_7__DOT__bypass_wdata_lfsr 
                         >> 1U));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_7__DOT__bypass_mask_raddr_reg 
        = vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_7_io_r_req_bits_setIdx;
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_7__DOT__bypass_mask_waddr_reg 
        = vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_7_io_r_req_bits_setIdx;
    if (vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_7_io_r_req_valid) {
        vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_7__DOT__bypass_mask_need_check 
            = vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_7_io_w_req_valid;
        vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_7__DOT__array_0_raw_rdata_addr_pipe_0 
            = vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_7_io_r_req_bits_setIdx;
    } else {
        vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_7__DOT__bypass_mask_need_check = 0U;
    }
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__regout_REG_7 
        = ((~ (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__regout_wen_7)) 
           & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__regout_en_7));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_1__DOT___bypass_wdata_lfsr_T_2 
        = (((QData)((IData)((1U & VL_REDXOR_8((0x1bULL 
                                               & vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_1__DOT__bypass_wdata_lfsr))))) 
            << 0x3fU) | (vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_1__DOT__bypass_wdata_lfsr 
                         >> 1U));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_1__DOT__bypass_mask_raddr_reg 
        = vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_1_io_r_req_bits_setIdx;
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_1__DOT__bypass_mask_waddr_reg 
        = vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_1_io_r_req_bits_setIdx;
    if (vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_1_io_r_req_valid) {
        vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_1__DOT__bypass_mask_need_check 
            = vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_1_io_w_req_valid;
        vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_1__DOT__array_0_raw_rdata_addr_pipe_0 
            = vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_1_io_r_req_bits_setIdx;
    } else {
        vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_1__DOT__bypass_mask_need_check = 0U;
    }
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__regout_REG_1 
        = ((~ (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__regout_wen_1)) 
           & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__regout_en_1));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_0__DOT___bypass_wdata_lfsr_T_2 
        = (((QData)((IData)((1U & VL_REDXOR_8((0x1bULL 
                                               & vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_0__DOT__bypass_wdata_lfsr))))) 
            << 0x3fU) | (vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_0__DOT__bypass_wdata_lfsr 
                         >> 1U));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_0__DOT__bypass_mask_raddr_reg 
        = vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_0_io_r_req_bits_setIdx;
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_0__DOT__bypass_mask_waddr_reg 
        = vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_0_io_r_req_bits_setIdx;
    if (vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_0_io_r_req_valid) {
        vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_0__DOT__bypass_mask_need_check 
            = vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_0_io_w_req_valid;
        vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_0__DOT__array_0_raw_rdata_addr_pipe_0 
            = vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_0_io_r_req_bits_setIdx;
    } else {
        vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_0__DOT__bypass_mask_need_check = 0U;
    }
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__regout_REG 
        = ((~ (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__regout_wen)) 
           & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__regout_en));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_3__DOT___bypass_wdata_lfsr_T_2 
        = (((QData)((IData)((1U & VL_REDXOR_8((0x1bULL 
                                               & vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_3__DOT__bypass_wdata_lfsr))))) 
            << 0x3fU) | (vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_3__DOT__bypass_wdata_lfsr 
                         >> 1U));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_3__DOT__bypass_mask_raddr_reg 
        = vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_3_io_r_req_bits_setIdx;
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_3__DOT__bypass_mask_waddr_reg 
        = vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_3_io_r_req_bits_setIdx;
    if (vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_3_io_r_req_valid) {
        vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_3__DOT__bypass_mask_need_check 
            = vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_3_io_w_req_valid;
        vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_3__DOT__array_0_raw_rdata_addr_pipe_0 
            = vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_3_io_r_req_bits_setIdx;
    } else {
        vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_3__DOT__bypass_mask_need_check = 0U;
    }
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__regout_REG_3 
        = ((~ (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__regout_wen_3)) 
           & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__regout_en_3));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_4__DOT___bypass_wdata_lfsr_T_2 
        = (((QData)((IData)((1U & VL_REDXOR_8((0x1bULL 
                                               & vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_4__DOT__bypass_wdata_lfsr))))) 
            << 0x3fU) | (vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_4__DOT__bypass_wdata_lfsr 
                         >> 1U));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_4__DOT__bypass_mask_raddr_reg 
        = vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_4_io_r_req_bits_setIdx;
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_4__DOT__bypass_mask_waddr_reg 
        = vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_4_io_r_req_bits_setIdx;
    if (vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_4_io_r_req_valid) {
        vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_4__DOT__bypass_mask_need_check 
            = vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_4_io_w_req_valid;
        vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_4__DOT__array_0_raw_rdata_addr_pipe_0 
            = vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_4_io_r_req_bits_setIdx;
    } else {
        vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_4__DOT__bypass_mask_need_check = 0U;
    }
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__regout_REG_4 
        = ((~ (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__regout_wen_4)) 
           & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__regout_en_4));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_5__DOT___bypass_wdata_lfsr_T_2 
        = (((QData)((IData)((1U & VL_REDXOR_8((0x1bULL 
                                               & vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_5__DOT__bypass_wdata_lfsr))))) 
            << 0x3fU) | (vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_5__DOT__bypass_wdata_lfsr 
                         >> 1U));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_5__DOT__bypass_mask_raddr_reg 
        = vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_5_io_r_req_bits_setIdx;
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_5__DOT__bypass_mask_waddr_reg 
        = vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_5_io_r_req_bits_setIdx;
    if (vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_5_io_r_req_valid) {
        vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_5__DOT__bypass_mask_need_check 
            = vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_5_io_w_req_valid;
        vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_5__DOT__array_0_raw_rdata_addr_pipe_0 
            = vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_5_io_r_req_bits_setIdx;
    } else {
        vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_5__DOT__bypass_mask_need_check = 0U;
    }
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__regout_REG_5 
        = ((~ (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__regout_wen_5)) 
           & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__regout_en_5));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__decodeDX_0 
        = (((1U & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__regsel_sourceD))
             ? vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__regout_r
             : 0U) | ((0x10U & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__regsel_sourceD))
                       ? vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__regout_r_4
                       : 0U));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__decodeDX_1 
        = (((2U & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__regsel_sourceD))
             ? vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__regout_r_1
             : 0U) | ((0x20U & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__regsel_sourceD))
                       ? vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__regout_r_5
                       : 0U));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__decodeDX_2 
        = (((4U & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__regsel_sourceD))
             ? vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__regout_r_2
             : 0U) | ((0x40U & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__regsel_sourceD))
                       ? vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__regout_r_6
                       : 0U));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__decodeDX_3 
        = (((8U & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__regsel_sourceD))
             ? vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__regout_r_3
             : 0U) | ((0x80U & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__regsel_sourceD))
                       ? vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__regout_r_7
                       : 0U));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__regsel_sourceD_REG 
        = ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__reqs_2_bankSel) 
           & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT___sourceD_rreq_out_bankEn_T_6));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__cc_dir__DOT__bypass_mask_bypass 
        = ((((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__cc_dir__DOT__bypass_mask_need_check) 
             & ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__cc_dir__DOT__bypass_mask_raddr_reg) 
                == (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__cc_dir__DOT__bypass_mask_waddr_reg)))
             ? 0xfU : 0U) & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__cc_dir__DOT__bypass_mask_bypass_REG));
    vlSelf->GPGPU_top__DOT__cta__DOT__wf_done_interface__DOT__buffer__DOT___value_T_3 
        = (7U & ((IData)(1U) + (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__wf_done_interface__DOT__buffer__DOT__deq_ptr_value)));
    vlSelf->io_host_rsp_bits_inflight_wg_buffer_host_wf_done_wg_id 
        = vlSelf->GPGPU_top__DOT__cta__DOT__wf_done_interface__DOT__buffer__DOT__ram
        [vlSelf->GPGPU_top__DOT__cta__DOT__wf_done_interface__DOT__buffer__DOT__deq_ptr_value];
    vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__io_result_bits_data_REG[0U] 
        = vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer_io_push_bits_data_data[0U];
    vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__io_result_bits_data_REG[1U] 
        = vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer_io_push_bits_data_data[1U];
    vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__io_result_bits_data_REG[2U] 
        = vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer_io_push_bits_data_data[2U];
    vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__io_result_bits_data_REG[3U] 
        = vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer_io_push_bits_data_data[3U];
    vlSelf->GPGPU_top__DOT__l2cache__DOT__write_buffer__DOT___value_T_3 
        = (3U & ((IData)(1U) + (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__write_buffer__DOT__deq_ptr_value)));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__io_result_bits_offset_REG 
        = (0xfU & vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA_io_a_bits_address);
    GPGPU_top__DOT__l2cache__DOT__sinkA__DOT___freeOH_T_3 
        = (0xfU & ((~ (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__lists)) 
                   | ((~ (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__lists)) 
                      << 1U)));
    GPGPU_top__DOT__l2cache__DOT__requests__DOT___freeOH_T_3 
        = (0xfU & ((~ (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__requests__DOT__used)) 
                   | ((~ (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__requests__DOT__used)) 
                      << 1U)));
    GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT___freeOH_T_3 
        = (0xfU & ((~ (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__used)) 
                   | ((~ (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__used)) 
                      << 1U)));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__io_result_bits_mask_REG 
        = vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer_io_push_bits_data_mask;
    vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__io_result_bits_tag_REG 
        = (vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA_io_a_bits_address 
           >> 5U);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__io_result_bits_put_REG 
        = vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__head_MPORT_2_addr;
    vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__io_result_bits_opcode_REG 
        = vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA_io_req_bits_opcode;
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__last_chosen_entry_rr 
        = ((IData)(vlSelf->reset) | (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT___GEN_26));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__io_result_bits_set_REG 
        = (1U & (vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA_io_a_bits_address 
                 >> 4U));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT___value_T_3 
        = (3U & ((IData)(1U) + (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__deq_ptr_value)));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__writeSet1 
        = vlSelf->GPGPU_top__DOT__l2cache__DOT__directory_io_write_bits_set;
    vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__ren1 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__ren));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__wen1 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT___wen_new_T_3));
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__lds_done_out 
        = ((~ (IData)(vlSelf->reset)) & ((~ (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__done_cancelled_array_0)) 
                                         & (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT___GEN_12)));
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__sgpr_done_out 
        = ((~ (IData)(vlSelf->reset)) & ((~ (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__done_cancelled_array_0)) 
                                         & (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT___GEN_18)));
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__vgpr_done_out 
        = ((~ (IData)(vlSelf->reset)) & ((~ (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__done_cancelled_array_0)) 
                                         & (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT___GEN_15)));
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wg_throttling__DOT__dealloc_en_i 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__dealloc_en_1));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__wipeOff 
        = vlSelf->reset;
    vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT___wipeCount_T_1 
        = (3U & ((IData)(1U) + (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__wipeCount)));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__wipeDone 
        = (1U & ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__wipeCount) 
                 >> 1U));
    if (vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT___io_pb_pop_valid_T) {
        vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT__s_final_req_offset 
            = vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD_io_req_bits_offset;
        vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT__s_final_req_tag 
            = vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD_io_req_bits_tag;
        vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT__s_final_req_source 
            = vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD_io_req_bits_source;
    } else {
        vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT__s_final_req_offset 
            = vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT__s1_req_reg_offset;
        vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT__s_final_req_tag 
            = vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT__s1_req_reg_tag;
        vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT__s_final_req_source 
            = vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT__s1_req_reg_source;
    }
    vlSelf->GPGPU_top__DOT__SM_wrapper_io_memRsp_valid 
        = ((~ ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT__s_final_req_source) 
               >> 3U)) & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT__io_d_valid_REG));
    vlSelf->GPGPU_top__DOT__SM_wrapper_1_io_memRsp_valid 
        = (((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT__s_final_req_source) 
            >> 3U) & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT__io_d_valid_REG));
    if ((1U & (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__allocator_cu_id_out_i))) {
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT___GEN_66 
            = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__invalid_due_to_not_ready_handlers_1;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT___GEN_48 
            = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__dispatch2cu_wf_dispatch_handlers_1;
    } else {
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT___GEN_66 
            = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__invalid_due_to_not_ready_handlers_0;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT___GEN_48 
            = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__dispatch2cu_wf_dispatch_handlers_0;
    }
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__dispatch2cu_wf_dispatch_i 
        = ((~ (IData)(vlSelf->reset)) & ((1U != (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__alloc_st)) 
                                         & ((2U == (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__alloc_st)) 
                                            & (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT___GEN_26))));
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__invalid_due_to_not_ready_i 
        = ((~ (IData)(vlSelf->reset)) & ((1U != (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__alloc_st)) 
                                         & ((2U == (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__alloc_st)) 
                                            & (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT___GEN_29))));
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__dispatch2cu_wf_dispatch_i 
        = ((~ (IData)(vlSelf->reset)) & ((1U != (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__alloc_st)) 
                                         & ((2U == (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__alloc_st)) 
                                            & (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT___GEN_26))));
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__invalid_due_to_not_ready_i 
        = ((~ (IData)(vlSelf->reset)) & ((1U != (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__alloc_st)) 
                                         & ((2U == (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__alloc_st)) 
                                            & (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT___GEN_29))));
    if (vlSelf->reset) {
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__sgpr_start_out = 0U;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__vgpr_start_out = 0U;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__lds_start_out = 0U;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__dispatch2cu_wf_tag_dispatch_handlers_1 = 0U;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__dispatch2cu_wf_tag_dispatch_handlers_0 = 0U;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_res_tbl__DOT__wf_count_per_wg_slot_1_3 = 0U;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_res_tbl__DOT__wf_count_per_wg_slot_1_2 = 0U;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_res_tbl__DOT__wf_count_per_wg_slot_1_0 = 0U;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_res_tbl__DOT__wf_count_per_wg_slot_0_3 = 0U;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_res_tbl__DOT__wf_count_per_wg_slot_0_1 = 0U;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_res_tbl__DOT__wf_count_per_wg_slot_1_1 = 0U;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_res_tbl__DOT__wf_count_per_wg_slot_0_0 = 0U;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_res_tbl__DOT__wf_count_per_wg_slot_0_2 = 0U;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__allocator_wf_count_i = 0U;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__anded_cam_out = 0U;
    } else {
        if ((1U & (~ (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__pipeline_waiting)))) {
            vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__sgpr_start_out 
                = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__encoded_sgpr_start;
            vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__vgpr_start_out 
                = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__encoded_vgpr_start;
            vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__lds_start_out 
                = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__encoded_lds_start;
            vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__anded_cam_out 
                = ((~ (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__cam_wait_dis_controller_cu_busy)) 
                   & ((((((((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__sgpr_cam__DOT__res_search_en_i) 
                            & ((~ (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__sgpr_cam__DOT__cam_valid_entry_1)) 
                               | ((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__sgpr_cam__DOT__cam_ram_1) 
                                  >= (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__sgpr_cam__DOT__res_search_size_i)))) 
                           << 1U) | ((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__sgpr_cam__DOT__res_search_en_i) 
                                     & ((~ (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__sgpr_cam__DOT__cam_valid_entry_0)) 
                                        | ((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__sgpr_cam__DOT__cam_ram_0) 
                                           >= (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__sgpr_cam__DOT__res_search_size_i))))) 
                         & ((((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__sgpr_cam__DOT__res_search_en_i) 
                              & ((~ (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__vgpr_cam__DOT__cam_valid_entry_1)) 
                                 | ((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__vgpr_cam__DOT__cam_ram_1) 
                                    >= (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__vgpr_cam__DOT__res_search_size_i)))) 
                             << 1U) | ((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__sgpr_cam__DOT__res_search_en_i) 
                                       & ((~ (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__vgpr_cam__DOT__cam_valid_entry_0)) 
                                          | ((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__vgpr_cam__DOT__cam_ram_0) 
                                             >= (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__vgpr_cam__DOT__res_search_size_i)))))) 
                        & ((((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__sgpr_cam__DOT__res_search_en_i) 
                             & ((~ (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__lds_cam__DOT__cam_valid_entry_1)) 
                                | ((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__lds_cam__DOT__cam_ram_1) 
                                   >= (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__lds_cam__DOT__res_search_size_i)))) 
                            << 1U) | ((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__sgpr_cam__DOT__res_search_en_i) 
                                      & ((~ (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__lds_cam__DOT__cam_valid_entry_0)) 
                                         | ((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__lds_cam__DOT__cam_ram_0) 
                                            >= (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__lds_cam__DOT__res_search_size_i)))))) 
                       & ((((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__sgpr_cam__DOT__res_search_en_i) 
                            & ((~ (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__wf_cam__DOT__cam_valid_entry_1)) 
                               | ((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__wf_cam__DOT__cam_ram_1) 
                                  >= (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__wf_cam__DOT__res_search_size_i)))) 
                           << 1U) | ((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__sgpr_cam__DOT__res_search_en_i) 
                                     & ((~ (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__wf_cam__DOT__cam_valid_entry_0)) 
                                        | ((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__wf_cam__DOT__cam_ram_0) 
                                           >= (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__wf_cam__DOT__res_search_size_i)))))) 
                      & ((((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__sgpr_cam__DOT__res_search_en_i) 
                           & ((~ (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__wg_cam__DOT__cam_valid_entry_1)) 
                              | ((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__wg_cam__DOT__cam_ram_1) 
                                 >= (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__wg_cam__DOT__res_search_size_i)))) 
                          << 1U) | ((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__sgpr_cam__DOT__res_search_en_i) 
                                    & ((~ (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__wg_cam__DOT__cam_valid_entry_0)) 
                                       | ((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__wg_cam__DOT__cam_ram_0) 
                                          >= (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__wg_cam__DOT__res_search_size_i)))))));
        }
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__dispatch2cu_wf_tag_dispatch_handlers_1 
            = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__dispatch2cu_wf_tag_dispatch_i;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__dispatch2cu_wf_tag_dispatch_handlers_0 
            = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__dispatch2cu_wf_tag_dispatch_i;
        if (vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__alloc_en_1) {
            if (((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__cu_id_1) 
                 & (3U == (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen__DOT__wg_slot_id_gen_i)))) {
                vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_res_tbl__DOT__wf_count_per_wg_slot_1_3 
                    = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_count1;
            }
            if (((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__cu_id_1) 
                 & (2U == (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen__DOT__wg_slot_id_gen_i)))) {
                vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_res_tbl__DOT__wf_count_per_wg_slot_1_2 
                    = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_count1;
            }
            if (((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__cu_id_1) 
                 & (0U == (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen__DOT__wg_slot_id_gen_i)))) {
                vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_res_tbl__DOT__wf_count_per_wg_slot_1_0 
                    = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_count1;
            }
            if (((~ (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__cu_id_1)) 
                 & (3U == (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen__DOT__wg_slot_id_gen_i)))) {
                vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_res_tbl__DOT__wf_count_per_wg_slot_0_3 
                    = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_count1;
            }
            if (((~ (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__cu_id_1)) 
                 & (1U == (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen__DOT__wg_slot_id_gen_i)))) {
                vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_res_tbl__DOT__wf_count_per_wg_slot_0_1 
                    = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_count1;
            }
            if (((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__cu_id_1) 
                 & (1U == (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen__DOT__wg_slot_id_gen_i)))) {
                vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_res_tbl__DOT__wf_count_per_wg_slot_1_1 
                    = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_count1;
            }
            if (((~ (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__cu_id_1)) 
                 & (0U == (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen__DOT__wg_slot_id_gen_i)))) {
                vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_res_tbl__DOT__wf_count_per_wg_slot_0_0 
                    = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_count1;
            }
            if (((~ (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__cu_id_1)) 
                 & (2U == (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen__DOT__wg_slot_id_gen_i)))) {
                vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_res_tbl__DOT__wf_count_per_wg_slot_0_2 
                    = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_count1;
            }
        }
        if (vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__dis_controller_i__DOT__dis_controller_wg_alloc_valid_i) {
            vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__allocator_wf_count_i 
                = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__wf_count_out;
        }
    }
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__sgpr_cam__DOT__res_search_en_i 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__alloc_valid_i));
    if (vlSelf->reset) {
        vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__valid = 0U;
        vlSelf->GPGPU_top__DOT__l2cache__DOT__requests__DOT__valid = 0U;
        vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_6__DOT__resetSet = 0U;
        vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_2__DOT__resetSet = 0U;
        vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_7__DOT__resetSet = 0U;
        vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_5__DOT__resetSet = 0U;
        vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_4__DOT__resetSet = 0U;
        vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_3__DOT__resetSet = 0U;
        vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_1__DOT__resetSet = 0U;
        vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_0__DOT__resetSet = 0U;
        vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT__s1_req_reg_size = 0U;
        vlSelf->GPGPU_top__DOT__l2cache__DOT__write_buffer__DOT__enq_ptr_value = 0U;
        vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT__s1_req_reg_data[0U] = 0U;
        vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT__s1_req_reg_data[1U] = 0U;
        vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT__s1_req_reg_data[2U] = 0U;
        vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT__s1_req_reg_data[3U] = 0U;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen__DOT__wg_slot_id_find_ram_cam_1_3 = 0U;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen__DOT__wg_slot_id_find_ram_cam_1_2 = 0U;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen__DOT__wg_slot_id_find_ram_cam_1_1 = 0U;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen__DOT__wg_slot_id_find_ram_cam_1_0 = 0U;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen__DOT__wg_slot_id_find_ram_cam_0_3 = 0U;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen__DOT__wg_slot_id_find_ram_cam_0_2 = 0U;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen__DOT__wg_slot_id_find_ram_cam_0_1 = 0U;
        vlSelf->GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__enq_ptr_value = 0U;
        vlSelf->GPGPU_top__DOT__cta__DOT__wf_done_interface__DOT__buffer__DOT__enq_ptr_value = 0U;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__inflight_wg_buffer_host_wf_done_wg_id_i = 0U;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__encoded_cu_id = 0U;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__encoded_cu_out_valid = 0U;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__encoded_cu_wg_id = 0U;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__encoded_cu_found_valid = 0U;
        __Vdly__GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__inflight_tbl_rd_host_st = 1U;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__new_entry_wg_reg = 0ULL;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__ready_tbl_wr_reg[0U] = 0U;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__ready_tbl_wr_reg[1U] = 0U;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__ready_tbl_wr_reg[2U] = 0U;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__ready_tbl_wr_reg[3U] = 0U;
        vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT__s1_req_reg_offset = 0U;
        vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT__s1_req_reg_tag = 0U;
        vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT__s1_req_reg_source = 0U;
    } else {
        vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__valid 
            = (0xfU & ((((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__head_MPORT_9_en)
                          ? ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT____VdfgTmp_habdfb808__0)
                              ? (~ ((IData)(1U) << (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__head_pop_head2_MPORT_addr)))
                              : 0xfU) : 0xfU) & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT___valid_T_1)) 
                       | ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__tail_MPORT_3_en)
                           ? ((IData)(1U) << (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__head_MPORT_2_addr))
                           : 0U)));
        vlSelf->GPGPU_top__DOT__l2cache__DOT__requests__DOT__valid 
            = vlSelf->GPGPU_top__DOT__l2cache__DOT__requests__DOT___valid_T_4;
        if (vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_6__DOT__resetState) {
            vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_6__DOT__resetSet 
                = vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_6__DOT___wrap_value_T_1;
        }
        if (vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_2__DOT__resetState) {
            vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_2__DOT__resetSet 
                = vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_2__DOT___wrap_value_T_1;
        }
        if (vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_7__DOT__resetState) {
            vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_7__DOT__resetSet 
                = vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_7__DOT___wrap_value_T_1;
        }
        if (vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_5__DOT__resetState) {
            vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_5__DOT__resetSet 
                = vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_5__DOT___wrap_value_T_1;
        }
        if (vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_4__DOT__resetState) {
            vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_4__DOT__resetSet 
                = vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_4__DOT___wrap_value_T_1;
        }
        if (vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_3__DOT__resetState) {
            vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_3__DOT__resetSet 
                = vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_3__DOT___wrap_value_T_1;
        }
        if (vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_1__DOT__resetState) {
            vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_1__DOT__resetSet 
                = vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_1__DOT___wrap_value_T_1;
        }
        if (vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_0__DOT__resetState) {
            vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_0__DOT__resetSet 
                = vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_0__DOT___wrap_value_T_1;
        }
        if (vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT___io_pb_pop_valid_T) {
            vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT__s1_req_reg_size 
                = vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD_io_req_bits_size;
            vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT__s1_req_reg_data[0U] 
                = vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD_io_req_bits_data[0U];
            vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT__s1_req_reg_data[1U] 
                = vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD_io_req_bits_data[1U];
            vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT__s1_req_reg_data[2U] 
                = vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD_io_req_bits_data[2U];
            vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT__s1_req_reg_data[3U] 
                = vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD_io_req_bits_data[3U];
            vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT__s1_req_reg_offset 
                = vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD_io_req_bits_offset;
            vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT__s1_req_reg_tag 
                = vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD_io_req_bits_tag;
            vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT__s1_req_reg_source 
                = vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD_io_req_bits_source;
        }
        if (vlSelf->GPGPU_top__DOT__l2cache__DOT__write_buffer__DOT__ram_opcode_MPORT_en) {
            vlSelf->GPGPU_top__DOT__l2cache__DOT__write_buffer__DOT__enq_ptr_value 
                = vlSelf->GPGPU_top__DOT__l2cache__DOT__write_buffer__DOT___value_T_1;
        }
        if (vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen__DOT___T_4) {
            if (((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen_io_cu_id) 
                 & (3U == (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen__DOT__first_slot_id)))) {
                vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen__DOT__wg_slot_id_find_ram_cam_1_3 
                    = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen_io_wg_id;
            }
            if (((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen_io_cu_id) 
                 & (2U == (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen__DOT__first_slot_id)))) {
                vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen__DOT__wg_slot_id_find_ram_cam_1_2 
                    = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen_io_wg_id;
            }
            if (((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen_io_cu_id) 
                 & (1U == (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen__DOT__first_slot_id)))) {
                vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen__DOT__wg_slot_id_find_ram_cam_1_1 
                    = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen_io_wg_id;
            }
            if (((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen_io_cu_id) 
                 & (0U == (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen__DOT__first_slot_id)))) {
                vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen__DOT__wg_slot_id_find_ram_cam_1_0 
                    = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen_io_wg_id;
            }
            if (((~ (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen_io_cu_id)) 
                 & (3U == (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen__DOT__first_slot_id)))) {
                vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen__DOT__wg_slot_id_find_ram_cam_0_3 
                    = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen_io_wg_id;
            }
            if (((~ (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen_io_cu_id)) 
                 & (2U == (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen__DOT__first_slot_id)))) {
                vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen__DOT__wg_slot_id_find_ram_cam_0_2 
                    = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen_io_wg_id;
            }
            if (((~ (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen_io_cu_id)) 
                 & (1U == (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen__DOT__first_slot_id)))) {
                vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen__DOT__wg_slot_id_find_ram_cam_0_1 
                    = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen_io_wg_id;
            }
        }
        if (vlSelf->GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__ram_opcode_MPORT_en) {
            vlSelf->GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__enq_ptr_value 
                = vlSelf->GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT___value_T_1;
        }
        if (vlSelf->GPGPU_top__DOT__cta__DOT__wf_done_interface__DOT__buffer__DOT__ram_MPORT_en) {
            vlSelf->GPGPU_top__DOT__cta__DOT__wf_done_interface__DOT__buffer__DOT__enq_ptr_value 
                = vlSelf->GPGPU_top__DOT__cta__DOT__wf_done_interface__DOT__buffer__DOT___value_T_1;
        }
        if (vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__dis_controller_wg_dealloc_valid_i) {
            vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__inflight_wg_buffer_host_wf_done_wg_id_i 
                = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__gpu_interface_dealloc_wg_id_i;
        }
        if ((1U & (~ (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__pipeline_waiting)))) {
            vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__encoded_cu_id 
                = (3U & (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__prefer_select__DOT__found_id));
            vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__encoded_cu_out_valid 
                = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__anded_cam_out_valid;
            vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__encoded_cu_wg_id 
                = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__anded_cam_wg_id;
            vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__encoded_cu_found_valid 
                = ((2U <= (7U & ((IData)(2U) + (3U 
                                                & (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__anded_cam_wg_id)))))
                    ? ((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__prefer_select__DOT___GEN_11) 
                       | (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__prefer_select__DOT___GEN_8))
                    : ((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__prefer_select__DOT___GEN_15) 
                       | (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__prefer_select__DOT___GEN_8)));
        }
        if ((1U == (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__inflight_tbl_rd_host_st))) {
            if (vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__host_wg_valid_i) {
                if ((1U & ((~ (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__waiting_tbl_valid_0)) 
                           | (~ (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__waiting_tbl_valid_1))))) {
                    __Vdly__GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__inflight_tbl_rd_host_st = 2U;
                }
            }
        } else {
            __Vdly__GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__inflight_tbl_rd_host_st 
                = ((2U == (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__inflight_tbl_rd_host_st))
                    ? 4U : ((4U == (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__inflight_tbl_rd_host_st))
                             ? 8U : (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT___GEN_10)));
        }
        if ((1U != (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__inflight_tbl_rd_host_st))) {
            if ((2U == (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__inflight_tbl_rd_host_st))) {
                vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__new_entry_wg_reg 
                    = (((QData)((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__host_num_wf_i)) 
                        << 0x37U) | (((QData)((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__host_lds_size_total_i)) 
                                      << 0x2aU) | (
                                                   ((QData)((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__host_gds_size_total_i)) 
                                                    << 0x1fU) 
                                                   | (QData)((IData)(
                                                                     (((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__host_wg_id_i) 
                                                                       << 0x1aU) 
                                                                      | (((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__host_vgpr_size_total_i) 
                                                                          << 0xdU) 
                                                                         | (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__host_sgpr_size_total_i))))))));
                vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__ready_tbl_wr_reg[0U] 
                    = (IData)((((QData)((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__host_wf_size_i)) 
                                << 0x1fU) | (QData)((IData)(
                                                            (((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__host_wg_id_i) 
                                                              << 0x1aU) 
                                                             | (((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__host_vgpr_size_per_wf_i) 
                                                                 << 0xdU) 
                                                                | (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__host_sgpr_size_per_wf_i)))))));
                vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__ready_tbl_wr_reg[1U] 
                    = (((IData)((((QData)((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__host_start_pc_i)) 
                                  << 0x20U) | (QData)((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__host_gds_baseaddr_i)))) 
                        << 9U) | (IData)(((((QData)((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__host_wf_size_i)) 
                                            << 0x1fU) 
                                           | (QData)((IData)(
                                                             (((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__host_wg_id_i) 
                                                               << 0x1aU) 
                                                              | (((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__host_vgpr_size_per_wf_i) 
                                                                  << 0xdU) 
                                                                 | (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__host_sgpr_size_per_wf_i)))))) 
                                          >> 0x20U)));
                vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__ready_tbl_wr_reg[2U] 
                    = (((IData)((((QData)((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__host_start_pc_i)) 
                                  << 0x20U) | (QData)((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__host_gds_baseaddr_i)))) 
                        >> 0x17U) | ((IData)(((((QData)((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__host_start_pc_i)) 
                                                << 0x20U) 
                                               | (QData)((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__host_gds_baseaddr_i))) 
                                              >> 0x20U)) 
                                     << 9U));
                vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__ready_tbl_wr_reg[3U] 
                    = ((IData)(((((QData)((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__host_start_pc_i)) 
                                  << 0x20U) | (QData)((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__host_gds_baseaddr_i))) 
                                >> 0x20U)) >> 0x17U);
            }
        }
    }
    vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT__s_final_req_set 
        = ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT___io_pb_pop_valid_T)
            ? (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD_io_req_bits_set)
            : (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT__s1_req_reg_set));
    if (vlSelf->reset) {
        vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT__s1_req_reg_set = 0U;
    } else if (vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT___io_pb_pop_valid_T) {
        vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT__s1_req_reg_set 
            = vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD_io_req_bits_set;
    }
    vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT__s_final_req_opcode 
        = ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT___io_pb_pop_valid_T)
            ? (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD_io_req_bits_opcode)
            : (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT__s1_req_reg_opcode));
    if (vlSelf->reset) {
        vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT__s1_req_reg_opcode = 5U;
        vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__writeWay1 = 0U;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wg_throttling__DOT__cu_id_i = 0U;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__encoded_sgpr_start = 0U;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__encoded_vgpr_start = 0U;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__encoded_lds_start = 0U;
        __Vdly__GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__curr_alloc_wf_count = 0U;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__curr_alloc_wf_slot = 0U;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__dispatch2cu_wf_tag_dispatch_i = 0U;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__info_ram_wr_addr = 0U;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__info_ram_wr_reg = 0U;
        __Vdly__GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__alloc_st = 1U;
        __Vdly__GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__curr_alloc_wf_count = 0U;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__curr_alloc_wf_slot = 0U;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__dispatch2cu_wf_tag_dispatch_i = 0U;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__info_ram_wr_addr = 0U;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__info_ram_wr_reg = 0U;
        __Vdly__GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__alloc_st = 1U;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_count1 = 0U;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__wg_cam__DOT__res_search_size_i = 0U;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__sgpr_cam__DOT__cam_valid_entry_1 = 0U;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__sgpr_cam__DOT__cam_valid_entry_0 = 0U;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__vgpr_cam__DOT__cam_valid_entry_1 = 0U;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__vgpr_cam__DOT__cam_valid_entry_0 = 0U;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__lds_cam__DOT__cam_valid_entry_1 = 0U;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__lds_cam__DOT__cam_valid_entry_0 = 0U;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__wf_cam__DOT__cam_valid_entry_1 = 0U;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__wf_cam__DOT__cam_valid_entry_0 = 0U;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__wg_cam__DOT__cam_valid_entry_1 = 0U;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__wg_cam__DOT__cam_valid_entry_0 = 0U;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__sgpr_cam__DOT__cam_ram_1 = 0U;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__sgpr_cam__DOT__cam_ram_0 = 0U;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__vgpr_cam__DOT__cam_ram_1 = 0U;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__vgpr_cam__DOT__cam_ram_0 = 0U;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__lds_cam__DOT__cam_ram_1 = 0U;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__lds_cam__DOT__cam_ram_0 = 0U;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__wg_cam__DOT__cam_ram_1 = 0U;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__wg_cam__DOT__cam_ram_0 = 0U;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__wf_cam__DOT__cam_ram_1 = 0U;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__wf_cam__DOT__cam_ram_0 = 0U;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__sgpr_cam__DOT__res_search_size_i = 0U;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__vgpr_cam__DOT__res_search_size_i = 0U;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__lds_cam__DOT__res_search_size_i = 0U;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__wf_cam__DOT__res_search_size_i = 0U;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__cam_wait_dis_controller_cu_busy = 0U;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__gpu_interface_dealloc_wg_id_i = 0U;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__anded_cam_out_valid = 0U;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__anded_cam_wg_id = 0U;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__host_num_wf_i = 0U;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__host_lds_size_total_i = 0U;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__host_gds_size_total_i = 0U;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__host_wg_id_i = 0U;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__host_vgpr_size_total_i = 0U;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__host_sgpr_size_total_i = 0U;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__host_start_pc_i = 0U;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__host_wf_size_i = 0U;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__host_vgpr_size_per_wf_i = 0U;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__host_sgpr_size_per_wf_i = 0U;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__host_gds_baseaddr_i = 0U;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__sgpr_cam__DOT__cam_ram_start_1 = 0U;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__sgpr_cam__DOT__cam_ram_start_0 = 0U;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__vgpr_cam__DOT__cam_ram_start_1 = 0U;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__vgpr_cam__DOT__cam_ram_start_0 = 0U;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__lds_cam__DOT__cam_ram_start_1 = 0U;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__lds_cam__DOT__cam_ram_start_0 = 0U;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__next_free_slot = 0U;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__next_free_slot = 0U;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__wf_count_out = 0U;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__cam_up_sgpr_size_i = 0U;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__cam_up_vgpr_size_i = 0U;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__cam_up_lds_size_i = 0U;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__cam_up_wg_count_i = 0U;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__cam_up_wf_count_i = 0U;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__dis_controller_cu_busy_i = 0U;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__cam_wait_valid = 0U;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__cam_wait_wg_id = 0U;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__cam_up_sgpr_strt_i = 0U;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__cam_up_vgpr_strt_i = 0U;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__cam_up_lds_strt_i = 0U;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__cam_up_cu_id_i = 0U;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__encoded_wf_count = 0U;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__sgpr_size_array_0 = 0U;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__vgpr_size_array_0 = 0U;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__lds_size_array_0 = 0U;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__wg_count_array_0 = 0U;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__wf_count_array_0 = 0U;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__alloc_valid_i = 0U;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__alloc_wg_id_i = 0U;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__sgpr_start_array_0 = 0U;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__vgpr_start_array_0 = 0U;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__lds_start_array_0 = 0U;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__anded_cam_wf_count = 0U;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wg_throttling__DOT__wg_count_available_i = 0U;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_res_tbl__DOT__wf_count_out_i_1 = 4U;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_res_tbl__DOT__wf_count_out_i_0 = 4U;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__sgpr_start_out = 0U;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__vgpr_start_out = 0U;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__lds_start_out = 0U;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__cam_wait_wf_count = 0U;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__alloc_num_wf_i = 0U;
    } else {
        if (vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT___io_pb_pop_valid_T) {
            vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT__s1_req_reg_opcode 
                = vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD_io_req_bits_opcode;
        }
        vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__writeWay1 
            = vlSelf->GPGPU_top__DOT__l2cache__DOT__directory_io_write_bits_way;
        if (((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__alloc_en_1) 
             | (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__dealloc_en_1))) {
            vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wg_throttling__DOT__cu_id_i 
                = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__cu_id_1;
        }
        if ((1U == (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__alloc_st))) {
            if (((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__handler_wg_alloc_en_1) 
                 & (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__next_free_slot_valid))) {
                __Vdly__GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__curr_alloc_wf_count 
                    = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__handler_wg_alloc_wf_count_1;
                vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__curr_alloc_wf_slot 
                    = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__next_free_slot;
                vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__info_ram_wr_addr 
                    = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__next_free_slot;
                vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__info_ram_wr_reg 
                    = (((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__handler_wg_alloc_wg_id_1) 
                        << 3U) | (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__handler_wg_alloc_wf_count_1));
                __Vdly__GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__alloc_st = 2U;
            }
        } else if ((2U == (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__alloc_st))) {
            if ((0U != (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__curr_alloc_wf_count))) {
                __Vdly__GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__curr_alloc_wf_count 
                    = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT___GEN_24;
            }
            if ((0U == (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__curr_alloc_wf_count))) {
                __Vdly__GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__alloc_st = 1U;
            }
        }
        if ((1U != (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__alloc_st))) {
            if ((2U == (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__alloc_st))) {
                if ((0U != (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__curr_alloc_wf_count))) {
                    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__dispatch2cu_wf_tag_dispatch_i 
                        = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT___GEN_23;
                }
            }
        }
        if ((1U == (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__alloc_st))) {
            if (((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__handler_wg_alloc_en_0) 
                 & (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__next_free_slot_valid))) {
                __Vdly__GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__curr_alloc_wf_count 
                    = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__handler_wg_alloc_wf_count_0;
                vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__curr_alloc_wf_slot 
                    = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__next_free_slot;
                vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__info_ram_wr_addr 
                    = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__next_free_slot;
                vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__info_ram_wr_reg 
                    = (((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__handler_wg_alloc_wg_id_0) 
                        << 3U) | (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__handler_wg_alloc_wf_count_0));
                __Vdly__GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__alloc_st = 2U;
            }
        } else if ((2U == (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__alloc_st))) {
            if ((0U != (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__curr_alloc_wf_count))) {
                __Vdly__GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__curr_alloc_wf_count 
                    = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT___GEN_24;
            }
            if ((0U == (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__curr_alloc_wf_count))) {
                __Vdly__GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__alloc_st = 1U;
            }
        }
        if ((1U != (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__alloc_st))) {
            if ((2U == (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__alloc_st))) {
                if ((0U != (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__curr_alloc_wf_count))) {
                    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__dispatch2cu_wf_tag_dispatch_i 
                        = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT___GEN_23;
                }
            }
        }
        if (vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen_io_generate) {
            vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_count1 
                = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__wf_count_out;
        } else if (vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen_io_find_and_cancel) {
            vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_count1 = 0U;
        }
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__wg_cam__DOT__res_search_size_i = 1U;
        if (vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__cam_up_valid_i) {
            vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__sgpr_cam__DOT__cam_valid_entry_1 
                = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__sgpr_cam__DOT___GEN_11;
            vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__sgpr_cam__DOT__cam_valid_entry_0 
                = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__sgpr_cam__DOT___GEN_10;
            vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__vgpr_cam__DOT__cam_valid_entry_1 
                = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__vgpr_cam__DOT___GEN_11;
            vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__vgpr_cam__DOT__cam_valid_entry_0 
                = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__vgpr_cam__DOT___GEN_10;
            vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__lds_cam__DOT__cam_valid_entry_1 
                = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__lds_cam__DOT___GEN_11;
            vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__lds_cam__DOT__cam_valid_entry_0 
                = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__lds_cam__DOT___GEN_10;
            vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__wf_cam__DOT__cam_valid_entry_1 
                = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__wf_cam__DOT___GEN_9;
            vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__wf_cam__DOT__cam_valid_entry_0 
                = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__wf_cam__DOT___GEN_8;
            vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__wg_cam__DOT__cam_valid_entry_1 
                = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__wg_cam__DOT___GEN_9;
            vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__wg_cam__DOT__cam_valid_entry_0 
                = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__wg_cam__DOT___GEN_8;
            if ((1U & (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__cam_up_cu_id_i))) {
                vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__sgpr_cam__DOT__cam_ram_1 
                    = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__cam_up_sgpr_size_i;
                vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__vgpr_cam__DOT__cam_ram_1 
                    = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__cam_up_vgpr_size_i;
                vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__lds_cam__DOT__cam_ram_1 
                    = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__cam_up_lds_size_i;
                vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__wg_cam__DOT__cam_ram_1 
                    = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__cam_up_wg_count_i;
                vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__wf_cam__DOT__cam_ram_1 
                    = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__cam_up_wf_count_i;
            }
            if ((1U & (~ (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__cam_up_cu_id_i)))) {
                vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__sgpr_cam__DOT__cam_ram_0 
                    = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__cam_up_sgpr_size_i;
                vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__vgpr_cam__DOT__cam_ram_0 
                    = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__cam_up_vgpr_size_i;
                vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__lds_cam__DOT__cam_ram_0 
                    = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__cam_up_lds_size_i;
                vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__wg_cam__DOT__cam_ram_0 
                    = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__cam_up_wg_count_i;
                vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__wf_cam__DOT__cam_ram_0 
                    = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__cam_up_wf_count_i;
            }
        }
        if ((1U & (~ (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__pipeline_waiting)))) {
            vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__encoded_sgpr_start 
                = ((1U & (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__prefer_select__DOT__found_id))
                    ? (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__sgpr_cam__DOT__cam_ram_start_1)
                    : (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__sgpr_cam__DOT__cam_ram_start_0));
        }
        if (vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__cam_up_valid_i) {
            if ((1U & (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__cam_up_cu_id_i))) {
                vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__sgpr_cam__DOT__cam_ram_start_1 
                    = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__cam_up_sgpr_strt_i;
            }
            if ((1U & (~ (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__cam_up_cu_id_i)))) {
                vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__sgpr_cam__DOT__cam_ram_start_0 
                    = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__cam_up_sgpr_strt_i;
            }
        }
        if ((1U & (~ (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__pipeline_waiting)))) {
            vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__encoded_vgpr_start 
                = ((1U & (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__prefer_select__DOT__found_id))
                    ? (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__vgpr_cam__DOT__cam_ram_start_1)
                    : (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__vgpr_cam__DOT__cam_ram_start_0));
        }
        if (vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__cam_up_valid_i) {
            if ((1U & (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__cam_up_cu_id_i))) {
                vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__vgpr_cam__DOT__cam_ram_start_1 
                    = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__cam_up_vgpr_strt_i;
            }
            if ((1U & (~ (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__cam_up_cu_id_i)))) {
                vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__vgpr_cam__DOT__cam_ram_start_0 
                    = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__cam_up_vgpr_strt_i;
            }
        }
        if ((1U & (~ (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__pipeline_waiting)))) {
            vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__encoded_lds_start 
                = ((1U & (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__prefer_select__DOT__found_id))
                    ? (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__lds_cam__DOT__cam_ram_start_1)
                    : (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__lds_cam__DOT__cam_ram_start_0));
        }
        if (vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__cam_up_valid_i) {
            if ((1U & (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__cam_up_cu_id_i))) {
                vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__lds_cam__DOT__cam_ram_start_1 
                    = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__cam_up_lds_strt_i;
            }
            if ((1U & (~ (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__cam_up_cu_id_i)))) {
                vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__lds_cam__DOT__cam_ram_start_0 
                    = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__cam_up_lds_strt_i;
            }
        }
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__sgpr_cam__DOT__res_search_size_i 
            = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__alloc_sgpr_size_i;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__vgpr_cam__DOT__res_search_size_i 
            = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__alloc_vgpr_size_i;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__lds_cam__DOT__res_search_size_i 
            = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__alloc_lds_size_i;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__wf_cam__DOT__res_search_size_i 
            = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__alloc_num_wf_i;
        if ((1U & (~ (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__pipeline_waiting)))) {
            vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__cam_wait_dis_controller_cu_busy 
                = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__dis_controller_cu_busy_i;
            vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__anded_cam_out_valid 
                = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__cam_wait_valid;
            vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__anded_cam_wg_id 
                = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__cam_wait_wg_id;
            vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__wf_count_out 
                = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__encoded_wf_count;
            vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__dis_controller_cu_busy_i 
                = (3U & (- (IData)((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__dis_controller_i__DOT__cu_groups_allocating_0))));
            vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__cam_wait_valid 
                = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__alloc_valid_i;
            vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__cam_wait_wg_id 
                = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__alloc_wg_id_i;
            vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__encoded_wf_count 
                = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__anded_cam_wf_count;
            vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__alloc_valid_i 
                = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__dis_controller_i__DOT__dis_controller_start_alloc_i;
            vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__alloc_wg_id_i 
                = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__inflight_wg_buffer_alloc_wg_id_i;
            vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__anded_cam_wf_count 
                = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__cam_wait_wf_count;
            vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__cam_wait_wf_count 
                = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__alloc_num_wf_i;
            vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__alloc_num_wf_i 
                = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__inflight_wg_buffer_alloc_num_wf_i;
        }
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__gpu_interface_dealloc_wg_id_i 
            = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__gpu_interface_dealloc_wg_id_i;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__host_num_wf_i 
            = vlSelf->io_host_req_bits_host_num_wf;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__host_lds_size_total_i 
            = vlSelf->io_host_req_bits_host_lds_size_total;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__host_gds_size_total_i 
            = vlSelf->io_host_req_bits_host_gds_size_total;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__host_wg_id_i 
            = vlSelf->io_host_req_bits_host_wg_id;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__host_vgpr_size_total_i 
            = vlSelf->io_host_req_bits_host_vgpr_size_total;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__host_sgpr_size_total_i 
            = vlSelf->io_host_req_bits_host_sgpr_size_total;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__host_start_pc_i 
            = vlSelf->io_host_req_bits_host_start_pc;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__host_wf_size_i 
            = vlSelf->io_host_req_bits_host_wf_size;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__host_vgpr_size_per_wf_i 
            = vlSelf->io_host_req_bits_host_vgpr_size_per_wf;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__host_sgpr_size_per_wf_i 
            = vlSelf->io_host_req_bits_host_sgpr_size_per_wf;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__host_gds_baseaddr_i 
            = vlSelf->io_host_req_bits_host_gds_baseaddr;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__next_free_slot 
            = ((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__used_slot_bitmap_0)
                ? ((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__used_slot_bitmap_1)
                    ? ((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__used_slot_bitmap_2)
                        ? ((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__used_slot_bitmap_3)
                            ? 0U : 3U) : 2U) : 1U) : 0U);
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__next_free_slot 
            = ((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__used_slot_bitmap_0)
                ? ((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__used_slot_bitmap_1)
                    ? ((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__used_slot_bitmap_2)
                        ? ((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__used_slot_bitmap_3)
                            ? 0U : 3U) : 2U) : 1U) : 0U);
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__cam_up_sgpr_size_i 
            = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__sgpr_size_array_0;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__cam_up_vgpr_size_i 
            = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__vgpr_size_array_0;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__cam_up_lds_size_i 
            = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__lds_size_array_0;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__cam_up_wg_count_i 
            = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__wg_count_array_0;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__cam_up_wf_count_i 
            = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__wf_count_array_0;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__cam_up_sgpr_strt_i 
            = (0xfffU & (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__sgpr_start_array_0));
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__cam_up_vgpr_strt_i 
            = (0xfffU & (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__vgpr_start_array_0));
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__cam_up_lds_strt_i 
            = (0xfffU & (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__lds_start_array_0));
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__cam_up_cu_id_i 
            = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__cu_id_array_0;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__sgpr_size_array_0 
            = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__sgpr_size_out;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__vgpr_size_array_0 
            = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__vgpr_size_out;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__lds_size_array_0 
            = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__lds_size_out;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__wg_count_array_0 
            = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wg_throttling__DOT__wg_count_available_i;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__wf_count_array_0 
            = ((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_res_tbl__DOT__cu_id_delay)
                ? (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_res_tbl__DOT__wf_count_out_i_1)
                : (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_res_tbl__DOT__wf_count_out_i_0));
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__sgpr_start_array_0 
            = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__sgpr_start_out;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__vgpr_start_array_0 
            = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__vgpr_start_out;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__lds_start_array_0 
            = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__lds_start_out;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wg_throttling__DOT__wg_count_available_i 
            = ((4U > (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wg_throttling__DOT___GEN_10))
                ? (7U & ((IData)(4U) - (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wg_throttling__DOT___GEN_10)))
                : 0U);
        if (vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__alloc_en_1) {
            if (vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__cu_id_1) {
                vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_res_tbl__DOT__wf_count_out_i_1 
                    = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_res_tbl__DOT___wf_count_out_i_T_1;
            }
            if ((1U & (~ (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__cu_id_1)))) {
                vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_res_tbl__DOT__wf_count_out_i_0 
                    = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_res_tbl__DOT___wf_count_out_i_T_1;
            }
        } else if (vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__dealloc_en_1) {
            if (vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__cu_id_1) {
                vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_res_tbl__DOT__wf_count_out_i_1 
                    = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_res_tbl__DOT___wf_count_out_i_T_3;
            }
            if ((1U & (~ (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__cu_id_1)))) {
                vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_res_tbl__DOT__wf_count_out_i_0 
                    = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_res_tbl__DOT___wf_count_out_i_T_3;
            }
        }
        if (vlSymsp->TOP__GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__sgpr_res_tbl.__PVT__res_table_done) {
            vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__sgpr_start_out 
                = vlSymsp->TOP__GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__sgpr_res_tbl.__PVT__res_table_max_start;
        }
        if (vlSymsp->TOP__GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__vgpr_res_tbl.__PVT__res_table_done) {
            vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__vgpr_start_out 
                = vlSymsp->TOP__GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__vgpr_res_tbl.__PVT__res_table_max_start;
        }
        if (vlSymsp->TOP__GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__lds_res_tbl.__PVT__res_table_done) {
            vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__lds_start_out 
                = vlSymsp->TOP__GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__lds_res_tbl.__PVT__res_table_max_start;
        }
    }
    GPGPU_top__DOT__l2cache__DOT___mshr_insertOH_init_T_3 
        = (0xfU & ((~ (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__requests__DOT__valid)) 
                   | ((~ (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__requests__DOT__valid)) 
                      << 1U)));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_0_io_schedule_d_valid 
        = ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__requests__DOT__valid) 
           & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_0__DOT__sink_d_reg));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_1_io_schedule_d_valid 
        = (((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__requests__DOT__valid) 
            >> 1U) & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_1__DOT__sink_d_reg));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_2_io_schedule_d_valid 
        = (((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__requests__DOT__valid) 
            >> 2U) & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_2__DOT__sink_d_reg));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_3_io_schedule_d_valid 
        = (((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__requests__DOT__valid) 
            >> 3U) & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_3__DOT__sink_d_reg));
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__inflight_tbl_rd_host_st 
        = __Vdly__GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__inflight_tbl_rd_host_st;
    if ((3U == (3U & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkD_io_source)))) {
        vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__reqs_0_index 
            = vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_3__DOT__request_way;
        vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkD_io_opcode 
            = vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_3__DOT__request_opcode;
        vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__head_pop_head2_MPORT_addr 
            = vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_3__DOT__request_put;
        vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__sinkD_req_select_shiftAmount 
            = vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_3__DOT__request_set;
    } else if ((2U == (3U & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkD_io_source)))) {
        vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__reqs_0_index 
            = vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_2__DOT__request_way;
        vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkD_io_opcode 
            = vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_2__DOT__request_opcode;
        vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__head_pop_head2_MPORT_addr 
            = vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_2__DOT__request_put;
        vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__sinkD_req_select_shiftAmount 
            = vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_2__DOT__request_set;
    } else if ((1U == (3U & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkD_io_source)))) {
        vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__reqs_0_index 
            = vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_1__DOT__request_way;
        vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkD_io_opcode 
            = vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_1__DOT__request_opcode;
        vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__head_pop_head2_MPORT_addr 
            = vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_1__DOT__request_put;
        vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__sinkD_req_select_shiftAmount 
            = vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_1__DOT__request_set;
    } else {
        vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__reqs_0_index 
            = vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_0__DOT__request_way;
        vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkD_io_opcode 
            = vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_0__DOT__request_opcode;
        vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__head_pop_head2_MPORT_addr 
            = vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_0__DOT__request_put;
        vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__sinkD_req_select_shiftAmount 
            = vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_0__DOT__request_set;
    }
    vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__cc_dir_io_r_resp_data_1 
        = ((2U & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__cc_dir__DOT__bypass_mask_bypass))
            ? vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__cc_dir__DOT__bypass_wdata_REG_1
            : vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__cc_dir__DOT__array_1
           [vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__cc_dir__DOT__array_1_raw_rdata_addr_pipe_0]);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__cc_dir_io_r_resp_data_0 
        = ((1U & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__cc_dir__DOT__bypass_mask_bypass))
            ? vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__cc_dir__DOT__bypass_wdata_REG_0
            : vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__cc_dir__DOT__array_0
           [vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__cc_dir__DOT__array_0_raw_rdata_addr_pipe_0]);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__cc_dir_io_r_resp_data_3 
        = ((8U & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__cc_dir__DOT__bypass_mask_bypass))
            ? vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__cc_dir__DOT__bypass_wdata_REG_3
            : vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__cc_dir__DOT__array_3
           [vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__cc_dir__DOT__array_3_raw_rdata_addr_pipe_0]);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__cc_dir_io_r_resp_data_2 
        = ((4U & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__cc_dir__DOT__bypass_mask_bypass))
            ? vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__cc_dir__DOT__bypass_wdata_REG_2
            : vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__cc_dir__DOT__array_2
           [vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__cc_dir__DOT__array_2_raw_rdata_addr_pipe_0]);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT___freeOH_T_11 
        = (0xfU & ((~ (0x1eU & (((IData)(GPGPU_top__DOT__l2cache__DOT__sinkA__DOT___freeOH_T_3) 
                                 << 1U) | ((IData)(GPGPU_top__DOT__l2cache__DOT__sinkA__DOT___freeOH_T_3) 
                                           << 3U)))) 
                   & (~ (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__lists))));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__requests__DOT__freeOH 
        = (0xfU & ((~ (0x1eU & (((IData)(GPGPU_top__DOT__l2cache__DOT__requests__DOT___freeOH_T_3) 
                                 << 1U) | ((IData)(GPGPU_top__DOT__l2cache__DOT__requests__DOT___freeOH_T_3) 
                                           << 3U)))) 
                   & (~ (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__requests__DOT__used))));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__freeOH 
        = (0xfU & ((~ (0x1eU & (((IData)(GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT___freeOH_T_3) 
                                 << 1U) | ((IData)(GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT___freeOH_T_3) 
                                           << 3U)))) 
                   & (~ (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__used))));
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__curr_alloc_wf_count 
        = __Vdly__GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__curr_alloc_wf_count;
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__alloc_st 
        = __Vdly__GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__alloc_st;
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT___GEN_51 
        = ((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT___GEN_48)
            ? (0xfU & ((IData)(1U) << (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__allocator_cu_id_out_i)))
            : 0U);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__curr_alloc_wf_count 
        = __Vdly__GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__curr_alloc_wf_count;
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__alloc_st 
        = __Vdly__GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__alloc_st;
    vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__cc_dir__DOT___GEN_2 
        = ((~ ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__cc_dir__DOT__resetState) 
               & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__cc_dir__DOT__wrap_wrap))) 
           & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__cc_dir__DOT__resetState));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_6__DOT___wrap_value_T_1 
        = (3U & ((IData)(1U) + (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_6__DOT__resetSet)));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_6__DOT__resetState 
        = ((IData)(vlSelf->reset) | (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_6__DOT___GEN_2));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_2__DOT___wrap_value_T_1 
        = (3U & ((IData)(1U) + (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_2__DOT__resetSet)));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_2__DOT__resetState 
        = ((IData)(vlSelf->reset) | (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_2__DOT___GEN_2));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_7__DOT___wrap_value_T_1 
        = (3U & ((IData)(1U) + (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_7__DOT__resetSet)));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_7__DOT__resetState 
        = ((IData)(vlSelf->reset) | (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_7__DOT___GEN_2));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_5__DOT___wrap_value_T_1 
        = (3U & ((IData)(1U) + (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_5__DOT__resetSet)));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_5__DOT__resetState 
        = ((IData)(vlSelf->reset) | (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_5__DOT___GEN_2));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_4__DOT___wrap_value_T_1 
        = (3U & ((IData)(1U) + (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_4__DOT__resetSet)));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_4__DOT__resetState 
        = ((IData)(vlSelf->reset) | (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_4__DOT___GEN_2));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_3__DOT___wrap_value_T_1 
        = (3U & ((IData)(1U) + (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_3__DOT__resetSet)));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_3__DOT__resetState 
        = ((IData)(vlSelf->reset) | (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_3__DOT___GEN_2));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_1__DOT___wrap_value_T_1 
        = (3U & ((IData)(1U) + (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_1__DOT__resetSet)));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_1__DOT__resetState 
        = ((IData)(vlSelf->reset) | (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_1__DOT___GEN_2));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_0__DOT___wrap_value_T_1 
        = (3U & ((IData)(1U) + (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_0__DOT__resetSet)));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_0__DOT__resetState 
        = ((IData)(vlSelf->reset) | (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_0__DOT___GEN_2));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__write_buffer__DOT___value_T_1 
        = (3U & ((IData)(1U) + (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__write_buffer__DOT__enq_ptr_value)));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__write_buffer__DOT__ptr_match 
        = ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__write_buffer__DOT__deq_ptr_value) 
           == (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__write_buffer__DOT__enq_ptr_value));
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen__DOT__cancel_valid 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen_io_find_and_cancel));
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen__DOT__cu_id_cancel 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen_io_cu_id));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__mshr_insertOH 
        = (0xfU & ((~ (0x1eU & (((IData)(GPGPU_top__DOT__l2cache__DOT___mshr_insertOH_init_T_3) 
                                 << 1U) | ((IData)(GPGPU_top__DOT__l2cache__DOT___mshr_insertOH_init_T_3) 
                                           << 3U)))) 
                   & (~ (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__requests__DOT__valid))));
    GPGPU_top__DOT__l2cache__DOT___mshr_request_T_4 
        = ((((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_0__DOT__sche_a_valid) 
             & (IData)(vlSelf->io_out_a_ready)) | (
                                                   (~ (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT__busy)) 
                                                   & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_0_io_schedule_d_valid))) 
           | (((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__wipeCount) 
               >> 1U) & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_0__DOT__sche_dir_valid)));
    GPGPU_top__DOT__l2cache__DOT___mshr_request_T_9 
        = ((((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_1__DOT__sche_a_valid) 
             & (IData)(vlSelf->io_out_a_ready)) | (
                                                   (~ (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT__busy)) 
                                                   & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_1_io_schedule_d_valid))) 
           | (((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__wipeCount) 
               >> 1U) & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_1__DOT__sche_dir_valid)));
    GPGPU_top__DOT__l2cache__DOT___mshr_request_T_14 
        = ((((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_2__DOT__sche_a_valid) 
             & (IData)(vlSelf->io_out_a_ready)) | (
                                                   (~ (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT__busy)) 
                                                   & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_2_io_schedule_d_valid))) 
           | (((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__wipeCount) 
               >> 1U) & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_2__DOT__sche_dir_valid)));
    GPGPU_top__DOT__l2cache__DOT___mshr_request_T_19 
        = ((((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_3__DOT__sche_a_valid) 
             & (IData)(vlSelf->io_out_a_ready)) | (
                                                   (~ (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT__busy)) 
                                                   & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_3_io_schedule_d_valid))) 
           | (((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__wipeCount) 
               >> 1U) & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_3__DOT__sche_dir_valid)));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT___value_T_1 
        = (3U & ((IData)(1U) + (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__enq_ptr_value)));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__ptr_match 
        = ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__deq_ptr_value) 
           == (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__enq_ptr_value));
    vlSelf->GPGPU_top__DOT__cta__DOT__wf_done_interface__DOT__buffer__DOT___value_T_1 
        = (7U & ((IData)(1U) + (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__wf_done_interface__DOT__buffer__DOT__enq_ptr_value)));
    vlSelf->GPGPU_top__DOT__cta__DOT__wf_done_interface__DOT__buffer__DOT__ptr_match 
        = ((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__wf_done_interface__DOT__buffer__DOT__deq_ptr_value) 
           == (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__wf_done_interface__DOT__buffer__DOT__enq_ptr_value));
    vlSelf->io_host_req_ready = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__inflight_wg_buffer_host_rcvd_ack_i;
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT___GEN_10 
        = ((8U == (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__inflight_tbl_rd_host_st))
            ? 1U : (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__inflight_tbl_rd_host_st));
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__host_wg_valid_i 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->io_host_req_valid));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__head_MPORT_9_en 
        = (0xfU & (((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__valid) 
                    >> (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__head_pop_head2_MPORT_addr)) 
                   & (((1U == (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkD_io_opcode)) 
                       | (0U == (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkD_io_opcode))) 
                      & (IData)(vlSelf->io_out_d_valid))));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__head_pop_head2_MPORT_data 
        = vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__head
        [vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__head_pop_head2_MPORT_addr];
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT____VdfgTmp_hc0824628__0 
        = ((IData)(vlSelf->io_out_d_valid) & ((IData)(1U) 
                                              << (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__sinkD_req_select_shiftAmount)));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT____VdfgTmp_hc46625d2__0 
        = ((IData)(vlSelf->io_out_d_valid) & (((IData)(1U) 
                                               << (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__sinkD_req_select_shiftAmount)) 
                                              >> 1U));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__head_MPORT_2_addr 
        = (((IData)((0U != (3U & ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT___freeOH_T_11) 
                                  >> 2U)))) << 1U) 
           | (IData)((0U != (0xaU & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT___freeOH_T_11)))));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__requests__DOT___freeIdx_T_1 
        = (0xfU & ((1U & ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__requests__DOT__freeOH) 
                          >> 4U)) | (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__requests__DOT__freeOH)));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT___freeIdx_T_1 
        = (0xfU & ((1U & ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__freeOH) 
                          >> 4U)) | (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__freeOH)));
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__done_cancelled_array_0 
        = ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__serviced_id_valid) 
                                         | ((~ (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen_io_find_and_cancel)) 
                                            & (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT___GEN_6))));
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__next_free_slot_valid 
        = (1U & ((~ (IData)(vlSelf->reset)) & (~ ((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__used_slot_bitmap_0) 
                                                  & ((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__used_slot_bitmap_1) 
                                                     & ((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__used_slot_bitmap_2) 
                                                        & (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__used_slot_bitmap_3)))))));
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__next_free_slot_valid 
        = (1U & ((~ (IData)(vlSelf->reset)) & (~ ((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__used_slot_bitmap_0) 
                                                  & ((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__used_slot_bitmap_1) 
                                                     & ((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__used_slot_bitmap_2) 
                                                        & (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__used_slot_bitmap_3)))))));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__write_buffer__DOT__empty 
        = ((~ (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__write_buffer__DOT__maybe_full)) 
           & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__write_buffer__DOT__ptr_match));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__write_buffer__DOT__full 
        = ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__write_buffer__DOT__ptr_match) 
           & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__write_buffer__DOT__maybe_full));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__mshr_request 
        = (((IData)(GPGPU_top__DOT__l2cache__DOT___mshr_request_T_19) 
            << 3U) | (((IData)(GPGPU_top__DOT__l2cache__DOT___mshr_request_T_14) 
                       << 2U) | (((IData)(GPGPU_top__DOT__l2cache__DOT___mshr_request_T_9) 
                                  << 1U) | (IData)(GPGPU_top__DOT__l2cache__DOT___mshr_request_T_4))));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__empty 
        = ((~ (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__maybe_full)) 
           & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__ptr_match));
    vlSelf->GPGPU_top__DOT__cta__DOT__wf_done_interface__DOT__buffer__DOT__ram_MPORT_en 
        = ((~ ((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__wf_done_interface__DOT__buffer__DOT__ptr_match) 
               & (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__wf_done_interface__DOT__buffer__DOT__maybe_full))) 
           & (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__inflight_wg_buffer_host_wf_done_i));
    vlSelf->io_host_rsp_valid = (1U & (~ ((~ (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__wf_done_interface__DOT__buffer__DOT__maybe_full)) 
                                          & (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__wf_done_interface__DOT__buffer__DOT__ptr_match))));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT____VdfgTmp_habdfb808__0 
        = ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__head_pop_head2_MPORT_data) 
           == vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__tail
           [vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__head_pop_head2_MPORT_addr]);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__data_io_data2_MPORT_data[0U] 
        = vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__data
        [vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__head_pop_head2_MPORT_data][0U];
    vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__data_io_data2_MPORT_data[1U] 
        = vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__data
        [vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__head_pop_head2_MPORT_data][1U];
    vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__data_io_data2_MPORT_data[2U] 
        = vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__data
        [vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__head_pop_head2_MPORT_data][2U];
    vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__data_io_data2_MPORT_data[3U] 
        = vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__data
        [vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__head_pop_head2_MPORT_data][3U];
    vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__data_io_data2_MPORT_data[4U] 
        = vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__data
        [vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__head_pop_head2_MPORT_data][4U];
    vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__tail_push_tail_data 
        = vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__tail
        [vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__head_MPORT_2_addr];
    vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT___push_valid_T 
        = (0xfU & ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__valid) 
                   >> (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__head_MPORT_2_addr)));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__requests__DOT__head_MPORT_2_data 
        = (((IData)((0U != (3U & ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__requests__DOT___freeIdx_T_1) 
                                  >> 2U)))) << 1U) 
           | (IData)((0U != (0xaU & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__requests__DOT___freeIdx_T_1)))));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__head_MPORT_2_data 
        = (((IData)((0U != (3U & ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT___freeIdx_T_1) 
                                  >> 2U)))) << 1U) 
           | (IData)((0U != (0xaU & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT___freeIdx_T_1)))));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_6__DOT___GEN_2 
        = ((~ ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_6__DOT__resetState) 
               & (3U == (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_6__DOT__resetSet)))) 
           & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_6__DOT__resetState));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_2__DOT___GEN_2 
        = ((~ ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_2__DOT__resetState) 
               & (3U == (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_2__DOT__resetSet)))) 
           & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_2__DOT__resetState));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_7__DOT___GEN_2 
        = ((~ ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_7__DOT__resetState) 
               & (3U == (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_7__DOT__resetSet)))) 
           & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_7__DOT__resetState));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_5__DOT___GEN_2 
        = ((~ ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_5__DOT__resetState) 
               & (3U == (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_5__DOT__resetSet)))) 
           & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_5__DOT__resetState));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_4__DOT___GEN_2 
        = ((~ ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_4__DOT__resetState) 
               & (3U == (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_4__DOT__resetSet)))) 
           & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_4__DOT__resetState));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_3__DOT___GEN_2 
        = ((~ ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_3__DOT__resetState) 
               & (3U == (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_3__DOT__resetSet)))) 
           & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_3__DOT__resetState));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_1__DOT___GEN_2 
        = ((~ ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_1__DOT__resetState) 
               & (3U == (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_1__DOT__resetSet)))) 
           & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_1__DOT__resetState));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_0__DOT___GEN_2 
        = ((~ ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_0__DOT__resetState) 
               & (3U == (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_0__DOT__resetSet)))) 
           & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_0__DOT__resetState));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT___GEN_30 
        = ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__write_buffer__DOT__full)
            ? (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT__stateReg)
            : 3U);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__robin_request 
        = (((IData)(GPGPU_top__DOT__l2cache__DOT___mshr_request_T_19) 
            << 7U) | (((IData)(GPGPU_top__DOT__l2cache__DOT___mshr_request_T_14) 
                       << 6U) | (((IData)(GPGPU_top__DOT__l2cache__DOT___mshr_request_T_9) 
                                  << 5U) | (((IData)(GPGPU_top__DOT__l2cache__DOT___mshr_request_T_4) 
                                             << 4U) 
                                            | ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshr_request) 
                                               & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__robin_filter))))));
    vlSelf->GPGPU_top__DOT__cta__DOT__wf_done_interface__DOT__buffer__DOT__do_deq 
        = ((IData)(vlSelf->io_host_rsp_valid) & (IData)(vlSelf->io_host_rsp_ready));
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__prefer_select__DOT___GEN_11 
        = (1U & ((1U & (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__anded_cam_wg_id))
                  ? ((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__anded_cam_out) 
                     >> 1U) : (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__anded_cam_out)));
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__prefer_select__DOT___GEN_15 
        = (1U & ((1U & (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__anded_cam_wg_id))
                  ? ((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__anded_cam_out) 
                     >> 1U) : (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__anded_cam_out)));
    GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__prefer_select__DOT___GEN_1 
        = (1U & ((1U & ((IData)(1U) + (3U & (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__anded_cam_wg_id))))
                  ? ((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__anded_cam_out) 
                     >> 1U) : (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__anded_cam_out)));
    GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__prefer_select__DOT___GEN_5 
        = (1U & ((1U & ((IData)(1U) + (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__anded_cam_wg_id)))
                  ? ((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__anded_cam_out) 
                     >> 1U) : (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__anded_cam_out)));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkD__DOT__full_mask[0U] 
        = ((1U & vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__data_io_data2_MPORT_data[0U])
            ? 0xffffffffU : 0U);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkD__DOT__full_mask[1U] 
        = ((2U & vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__data_io_data2_MPORT_data[0U])
            ? 0xffffffffU : 0U);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkD__DOT__full_mask[2U] 
        = (IData)((((QData)((IData)(((8U & vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__data_io_data2_MPORT_data[0U])
                                      ? 0xffffffffU
                                      : 0U))) << 0x20U) 
                   | (QData)((IData)(((4U & vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__data_io_data2_MPORT_data[0U])
                                       ? 0xffffffffU
                                       : 0U)))));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkD__DOT__full_mask[3U] 
        = (IData)(((((QData)((IData)(((8U & vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__data_io_data2_MPORT_data[0U])
                                       ? 0xffffffffU
                                       : 0U))) << 0x20U) 
                    | (QData)((IData)(((4U & vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__data_io_data2_MPORT_data[0U])
                                        ? 0xffffffffU
                                        : 0U)))) >> 0x20U));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__freeIdx 
        = ((4U & ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__freeOH) 
                  >> 2U)) | (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__head_MPORT_2_data));
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__cam_up_valid_i 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__grt_cam_up_valid_i));
    GPGPU_top__DOT__l2cache__DOT___mshr_selectOH2_T_2 
        = (0xffU & ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__robin_request) 
                    | ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__robin_request) 
                       << 1U)));
    if ((2U <= (7U & ((IData)(1U) + (3U & (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__anded_cam_wg_id)))))) {
        if (GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__prefer_select__DOT___GEN_1) {
            vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__prefer_select__DOT___GEN_8 = 1U;
            GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__prefer_select__DOT___GEN_9 
                = (7U & ((IData)(7U) + (3U & (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__anded_cam_wg_id))));
        } else {
            vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__prefer_select__DOT___GEN_8 = 0U;
            GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__prefer_select__DOT___GEN_9 
                = (7U & 0U);
        }
    } else if (GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__prefer_select__DOT___GEN_5) {
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__prefer_select__DOT___GEN_8 = 1U;
        GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__prefer_select__DOT___GEN_9 
            = (7U & (3U & ((IData)(1U) + (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__anded_cam_wg_id))));
    } else {
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__prefer_select__DOT___GEN_8 = 0U;
        GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__prefer_select__DOT___GEN_9 
            = (7U & 0U);
    }
    if ((1U == (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkD_io_opcode))) {
        vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkD_io_resp_bits_data[0U] 
            = ((((vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__data_io_data2_MPORT_data[1U] 
                  << 0x1cU) | (vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__data_io_data2_MPORT_data[0U] 
                               >> 4U)) & vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkD__DOT__full_mask[0U]) 
               | ((~ vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkD__DOT__full_mask[0U]) 
                  & vlSelf->io_out_d_bits_data[0U]));
        vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkD_io_resp_bits_data[1U] 
            = ((((vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__data_io_data2_MPORT_data[2U] 
                  << 0x1cU) | (vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__data_io_data2_MPORT_data[1U] 
                               >> 4U)) & vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkD__DOT__full_mask[1U]) 
               | ((~ vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkD__DOT__full_mask[1U]) 
                  & vlSelf->io_out_d_bits_data[1U]));
        vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkD_io_resp_bits_data[2U] 
            = ((((vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__data_io_data2_MPORT_data[3U] 
                  << 0x1cU) | (vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__data_io_data2_MPORT_data[2U] 
                               >> 4U)) & vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkD__DOT__full_mask[2U]) 
               | ((~ vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkD__DOT__full_mask[2U]) 
                  & vlSelf->io_out_d_bits_data[2U]));
        vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkD_io_resp_bits_data[3U] 
            = ((((vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__data_io_data2_MPORT_data[4U] 
                  << 0x1cU) | (vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__data_io_data2_MPORT_data[3U] 
                               >> 4U)) & vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkD__DOT__full_mask[3U]) 
               | ((~ vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkD__DOT__full_mask[3U]) 
                  & vlSelf->io_out_d_bits_data[3U]));
    } else {
        vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkD_io_resp_bits_data[0U] 
            = vlSelf->io_out_d_bits_data[0U];
        vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkD_io_resp_bits_data[1U] 
            = vlSelf->io_out_d_bits_data[1U];
        vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkD_io_resp_bits_data[2U] 
            = vlSelf->io_out_d_bits_data[2U];
        vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkD_io_resp_bits_data[3U] 
            = vlSelf->io_out_d_bits_data[3U];
    }
    GPGPU_top__DOT__l2cache__DOT___mshr_selectOH2_T_5 
        = (0xffU & ((IData)(GPGPU_top__DOT__l2cache__DOT___mshr_selectOH2_T_2) 
                    | ((IData)(GPGPU_top__DOT__l2cache__DOT___mshr_selectOH2_T_2) 
                       << 2U)));
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__prefer_select__DOT__found_id 
        = ((2U <= (7U & ((IData)(2U) + (3U & (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__anded_cam_wg_id)))))
            ? ((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__prefer_select__DOT___GEN_11)
                ? (3U & (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__anded_cam_wg_id))
                : (IData)(GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__prefer_select__DOT___GEN_9))
            : ((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__prefer_select__DOT___GEN_15)
                ? (3U & ((IData)(2U) + (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__anded_cam_wg_id)))
                : (IData)(GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__prefer_select__DOT___GEN_9)));
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__grt_cam_up_valid_i 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__serviced_id_valid));
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT___GEN_45 
        = (1U & ((~ (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__cam_up_cu_id_i)) 
                 | (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__cu_initialized_0)));
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT___GEN_46 
        = (1U & ((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__cam_up_cu_id_i) 
                 | (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__cu_initialized_1)));
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__vgpr_cam__DOT___GEN_10 
        = (1U & ((~ (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__cam_up_cu_id_i)) 
                 | (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__vgpr_cam__DOT__cam_valid_entry_0)));
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__vgpr_cam__DOT___GEN_11 
        = (1U & ((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__cam_up_cu_id_i) 
                 | (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__vgpr_cam__DOT__cam_valid_entry_1)));
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__sgpr_cam__DOT___GEN_10 
        = (1U & ((~ (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__cam_up_cu_id_i)) 
                 | (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__sgpr_cam__DOT__cam_valid_entry_0)));
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__sgpr_cam__DOT___GEN_11 
        = (1U & ((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__cam_up_cu_id_i) 
                 | (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__sgpr_cam__DOT__cam_valid_entry_1)));
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__lds_cam__DOT___GEN_10 
        = (1U & ((~ (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__cam_up_cu_id_i)) 
                 | (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__lds_cam__DOT__cam_valid_entry_0)));
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__lds_cam__DOT___GEN_11 
        = (1U & ((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__cam_up_cu_id_i) 
                 | (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__lds_cam__DOT__cam_valid_entry_1)));
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__wf_cam__DOT___GEN_8 
        = (1U & ((~ (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__cam_up_cu_id_i)) 
                 | (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__wf_cam__DOT__cam_valid_entry_0)));
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__wf_cam__DOT___GEN_9 
        = (1U & ((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__cam_up_cu_id_i) 
                 | (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__wf_cam__DOT__cam_valid_entry_1)));
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__wg_cam__DOT___GEN_8 
        = (1U & ((~ (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__cam_up_cu_id_i)) 
                 | (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__wg_cam__DOT__cam_valid_entry_0)));
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__wg_cam__DOT___GEN_9 
        = (1U & ((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__cam_up_cu_id_i) 
                 | (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__wg_cam__DOT__cam_valid_entry_1)));
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__sgpr_size_out 
        = (0x1fffU & (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT___GEN_26));
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__vgpr_size_out 
        = (0x1fffU & (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT___GEN_25));
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__lds_size_out 
        = (0x1fffU & (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT___GEN_24));
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_res_tbl__DOT__cu_id_delay 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__cu_id_1));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__mshr_selectOH2 
        = ((~ (0x1feU & (((IData)(GPGPU_top__DOT__l2cache__DOT___mshr_selectOH2_T_5) 
                          << 1U) | ((IData)(GPGPU_top__DOT__l2cache__DOT___mshr_selectOH2_T_5) 
                                    << 5U)))) & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__robin_request));
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wg_throttling__DOT___GEN_10 
        = ((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wg_throttling__DOT__cu_id_i)
            ? (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wg_throttling__DOT__actual_wg_count_array_1)
            : (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wg_throttling__DOT__actual_wg_count_array_0));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__mshr_selectOH 
        = (0xfU & (((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshr_selectOH2) 
                    >> 4U) | (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshr_selectOH2)));
    if (vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wg_throttling__DOT__alloc_en_i) {
        if (vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wg_throttling__DOT__cu_id_i) {
            vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wg_throttling__DOT___GEN_14 
                = (7U & (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wg_throttling__DOT__actual_wg_count_array_0));
            vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wg_throttling__DOT___GEN_15 
                = (7U & ((IData)(1U) + (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wg_throttling__DOT___GEN_10)));
        } else {
            vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wg_throttling__DOT___GEN_14 
                = (7U & ((IData)(1U) + (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wg_throttling__DOT___GEN_10)));
            vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wg_throttling__DOT___GEN_15 
                = (7U & (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wg_throttling__DOT__actual_wg_count_array_1));
        }
    } else {
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wg_throttling__DOT___GEN_14 
            = (7U & (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wg_throttling__DOT__actual_wg_count_array_0));
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wg_throttling__DOT___GEN_15 
            = (7U & (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wg_throttling__DOT__actual_wg_count_array_1));
    }
    vlSelf->GPGPU_top__DOT__l2cache__DOT___robin_filter_T_1 
        = (0xfU & ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshr_selectOH) 
                   | ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshr_selectOH) 
                      >> 1U)));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__schedule_d_bits_offset 
        = (((((1U & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshr_selectOH))
               ? (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_0__DOT__request_offset)
               : 0U) | ((2U & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshr_selectOH))
                         ? (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_1__DOT__request_offset)
                         : 0U)) | ((4U & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshr_selectOH))
                                    ? (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_2__DOT__request_offset)
                                    : 0U)) | ((8U & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshr_selectOH))
                                               ? (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_3__DOT__request_offset)
                                               : 0U));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__schedule_a_valid 
        = (((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshr_selectOH) 
            & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_0__DOT__sche_a_valid)) 
           | ((((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshr_selectOH) 
                >> 1U) & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_1__DOT__sche_a_valid)) 
              | ((((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshr_selectOH) 
                   >> 2U) & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_2__DOT__sche_a_valid)) 
                 | (((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshr_selectOH) 
                     >> 3U) & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_3__DOT__sche_a_valid)))));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__directory_io_write_bits_way 
        = (((((1U & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshr_selectOH))
               ? (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_0__DOT__request_way)
               : 0U) | ((2U & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshr_selectOH))
                         ? (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_1__DOT__request_way)
                         : 0U)) | ((4U & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshr_selectOH))
                                    ? (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_2__DOT__request_way)
                                    : 0U)) | ((8U & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshr_selectOH))
                                               ? (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_3__DOT__request_way)
                                               : 0U));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__requests__DOT__head_pop_head_addr 
        = (((IData)((0U != (3U & ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshr_selectOH) 
                                  >> 2U)))) << 1U) 
           | (IData)((0U != (0xaU & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshr_selectOH)))));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT___wen_new_T_3 
        = (((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__wipeCount) 
            >> 1U) & (((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshr_selectOH) 
                       & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_0__DOT__sche_dir_valid)) 
                      | ((((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshr_selectOH) 
                           >> 1U) & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_1__DOT__sche_dir_valid)) 
                         | ((((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshr_selectOH) 
                              >> 2U) & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_2__DOT__sche_dir_valid)) 
                            | (((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshr_selectOH) 
                                >> 3U) & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_3__DOT__sche_dir_valid))))));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__directory_io_write_bits_data_tag 
        = (((((1U & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshr_selectOH))
               ? vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_0__DOT__request_tag
               : 0U) | ((2U & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshr_selectOH))
                         ? vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_1__DOT__request_tag
                         : 0U)) | ((4U & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshr_selectOH))
                                    ? vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_2__DOT__request_tag
                                    : 0U)) | ((8U & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshr_selectOH))
                                               ? vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_3__DOT__request_tag
                                               : 0U));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__directory_io_write_bits_set 
        = (((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshr_selectOH) 
            & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_0__DOT__request_set)) 
           | ((((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshr_selectOH) 
                >> 1U) & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_1__DOT__request_set)) 
              | ((((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshr_selectOH) 
                   >> 2U) & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_2__DOT__request_set)) 
                 | (((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshr_selectOH) 
                     >> 3U) & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_3__DOT__request_set)))));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD_io_req_bits_from_mem 
        = (((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshr_selectOH) 
            & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_0_io_schedule_d_valid)) 
           | ((((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshr_selectOH) 
                >> 1U) & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_1_io_schedule_d_valid)) 
              | ((((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshr_selectOH) 
                   >> 2U) & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_2_io_schedule_d_valid)) 
                 | (((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshr_selectOH) 
                     >> 3U) & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_3_io_schedule_d_valid)))));
    if (vlSelf->GPGPU_top__DOT__l2cache__DOT__schedule_a_valid) {
        vlSelf->io_out_a_valid = (1U & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__schedule_a_valid));
        vlSelf->io_out_a_bits_size = 0U;
        vlSelf->io_out_a_bits_opcode = (((((1U & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshr_selectOH))
                                            ? 4U : 0U) 
                                          | ((2U & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshr_selectOH))
                                              ? 4U : 0U)) 
                                         | ((4U & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshr_selectOH))
                                             ? 4U : 0U)) 
                                        | ((8U & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshr_selectOH))
                                            ? 4U : 0U));
        vlSelf->io_out_a_bits_mask = (((((1U & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshr_selectOH))
                                          ? 0xfU : 0U) 
                                        | ((2U & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshr_selectOH))
                                            ? 0xfU : 0U)) 
                                       | ((4U & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshr_selectOH))
                                           ? 0xfU : 0U)) 
                                      | ((8U & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshr_selectOH))
                                          ? 0xfU : 0U));
        vlSelf->io_out_a_bits_data[0U] = (((((1U & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshr_selectOH))
                                              ? vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_0__DOT__request_data[0U]
                                              : 0U) 
                                            | ((2U 
                                                & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshr_selectOH))
                                                ? vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_1__DOT__request_data[0U]
                                                : 0U)) 
                                           | ((4U & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshr_selectOH))
                                               ? vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_2__DOT__request_data[0U]
                                               : 0U)) 
                                          | ((8U & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshr_selectOH))
                                              ? vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_3__DOT__request_data[0U]
                                              : 0U));
        vlSelf->io_out_a_bits_data[1U] = (((((1U & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshr_selectOH))
                                              ? vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_0__DOT__request_data[1U]
                                              : 0U) 
                                            | ((2U 
                                                & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshr_selectOH))
                                                ? vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_1__DOT__request_data[1U]
                                                : 0U)) 
                                           | ((4U & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshr_selectOH))
                                               ? vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_2__DOT__request_data[1U]
                                               : 0U)) 
                                          | ((8U & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshr_selectOH))
                                              ? vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_3__DOT__request_data[1U]
                                              : 0U));
        vlSelf->io_out_a_bits_data[2U] = (((((1U & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshr_selectOH))
                                              ? vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_0__DOT__request_data[2U]
                                              : 0U) 
                                            | ((2U 
                                                & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshr_selectOH))
                                                ? vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_1__DOT__request_data[2U]
                                                : 0U)) 
                                           | ((4U & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshr_selectOH))
                                               ? vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_2__DOT__request_data[2U]
                                               : 0U)) 
                                          | ((8U & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshr_selectOH))
                                              ? vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_3__DOT__request_data[2U]
                                              : 0U));
        vlSelf->io_out_a_bits_data[3U] = (((((1U & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshr_selectOH))
                                              ? vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_0__DOT__request_data[3U]
                                              : 0U) 
                                            | ((2U 
                                                & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshr_selectOH))
                                                ? vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_1__DOT__request_data[3U]
                                                : 0U)) 
                                           | ((4U & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshr_selectOH))
                                               ? vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_2__DOT__request_data[3U]
                                               : 0U)) 
                                          | ((8U & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshr_selectOH))
                                              ? vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_3__DOT__request_data[3U]
                                              : 0U));
        vlSelf->io_out_a_bits_source = vlSelf->GPGPU_top__DOT__l2cache__DOT__requests__DOT__head_pop_head_addr;
    } else {
        vlSelf->io_out_a_valid = (1U & (~ (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__write_buffer__DOT__empty)));
        vlSelf->io_out_a_bits_size = vlSelf->GPGPU_top__DOT__l2cache__DOT__write_buffer__DOT__ram_size
            [vlSelf->GPGPU_top__DOT__l2cache__DOT__write_buffer__DOT__deq_ptr_value];
        vlSelf->io_out_a_bits_opcode = vlSelf->GPGPU_top__DOT__l2cache__DOT__write_buffer__DOT__ram_opcode
            [vlSelf->GPGPU_top__DOT__l2cache__DOT__write_buffer__DOT__deq_ptr_value];
        vlSelf->io_out_a_bits_mask = vlSelf->GPGPU_top__DOT__l2cache__DOT__write_buffer__DOT__ram_mask
            [vlSelf->GPGPU_top__DOT__l2cache__DOT__write_buffer__DOT__deq_ptr_value];
        vlSelf->io_out_a_bits_data[0U] = vlSelf->GPGPU_top__DOT__l2cache__DOT__write_buffer__DOT__ram_data
            [vlSelf->GPGPU_top__DOT__l2cache__DOT__write_buffer__DOT__deq_ptr_value][0U];
        vlSelf->io_out_a_bits_data[1U] = vlSelf->GPGPU_top__DOT__l2cache__DOT__write_buffer__DOT__ram_data
            [vlSelf->GPGPU_top__DOT__l2cache__DOT__write_buffer__DOT__deq_ptr_value][1U];
        vlSelf->io_out_a_bits_data[2U] = vlSelf->GPGPU_top__DOT__l2cache__DOT__write_buffer__DOT__ram_data
            [vlSelf->GPGPU_top__DOT__l2cache__DOT__write_buffer__DOT__deq_ptr_value][2U];
        vlSelf->io_out_a_bits_data[3U] = vlSelf->GPGPU_top__DOT__l2cache__DOT__write_buffer__DOT__ram_data
            [vlSelf->GPGPU_top__DOT__l2cache__DOT__write_buffer__DOT__deq_ptr_value][3U];
        vlSelf->io_out_a_bits_source = vlSelf->GPGPU_top__DOT__l2cache__DOT__write_buffer__DOT__ram_source
            [vlSelf->GPGPU_top__DOT__l2cache__DOT__write_buffer__DOT__deq_ptr_value];
    }
    vlSelf->GPGPU_top__DOT__l2cache__DOT__write_buffer__DOT__do_deq 
        = ((~ (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__write_buffer__DOT__empty)) 
           & ((~ (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__schedule_a_valid)) 
              & (IData)(vlSelf->io_out_a_ready)));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__x6 
        = (3U & (((IData)(1U) << (1U & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__directory_io_write_bits_way))) 
                 | ((2U & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__wipeCount))
                     ? 0U : 3U)));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_0__DOT___T 
        = (((IData)(vlSelf->io_out_a_ready) & (0U == (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__requests__DOT__head_pop_head_addr))) 
           & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_0__DOT__sche_a_valid));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_1__DOT___T 
        = (((IData)(vlSelf->io_out_a_ready) & (1U == (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__requests__DOT__head_pop_head_addr))) 
           & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_1__DOT__sche_a_valid));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_2__DOT___T 
        = (((IData)(vlSelf->io_out_a_ready) & (2U == (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__requests__DOT__head_pop_head_addr))) 
           & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_2__DOT__sche_a_valid));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_3__DOT___T 
        = (((IData)(vlSelf->io_out_a_ready) & (3U == (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__requests__DOT__head_pop_head_addr))) 
           & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_3__DOT__sche_a_valid));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__requests__DOT__head_pop_head_data 
        = vlSelf->GPGPU_top__DOT__l2cache__DOT__requests__DOT__head
        [vlSelf->GPGPU_top__DOT__l2cache__DOT__requests__DOT__head_pop_head_addr];
    vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__cc_dir_io_w_req_valid 
        = (1U & (((~ ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__wipeCount) 
                      >> 1U)) & (~ (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__wipeOff))) 
                 | (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT___wen_new_T_3)));
    if ((2U & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__wipeCount))) {
        vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__cc_dir_io_w_req_bits_data_0 
            = ((vlSelf->GPGPU_top__DOT__l2cache__DOT__directory_io_write_bits_data_tag 
                << 1U) | (IData)((0U != (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshr_selectOH))));
        vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__cc_dir_io_w_req_bits_setIdx 
            = (1U & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__directory_io_write_bits_set));
    } else {
        vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__cc_dir_io_w_req_bits_data_0 = 0U;
        vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__cc_dir_io_w_req_bits_setIdx 
            = (1U & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__wipeCount));
    }
    vlSelf->io_out_a_bits_address = ((((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__schedule_a_valid)
                                        ? vlSelf->GPGPU_top__DOT__l2cache__DOT__directory_io_write_bits_data_tag
                                        : vlSelf->GPGPU_top__DOT__l2cache__DOT__write_buffer__DOT__ram_tag
                                       [vlSelf->GPGPU_top__DOT__l2cache__DOT__write_buffer__DOT__deq_ptr_value]) 
                                      << 5U) | ((((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__schedule_a_valid)
                                                   ? (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__directory_io_write_bits_set)
                                                   : 
                                                  vlSelf->GPGPU_top__DOT__l2cache__DOT__write_buffer__DOT__ram_set
                                                  [vlSelf->GPGPU_top__DOT__l2cache__DOT__write_buffer__DOT__deq_ptr_value]) 
                                                 << 4U) 
                                                | ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__schedule_a_valid)
                                                    ? (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__schedule_d_bits_offset)
                                                    : 
                                                   vlSelf->GPGPU_top__DOT__l2cache__DOT__write_buffer__DOT__ram_offset
                                                   [vlSelf->GPGPU_top__DOT__l2cache__DOT__write_buffer__DOT__deq_ptr_value])));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__setQuash 
        = ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__wen1) 
           & ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__directory_io_write_bits_set) 
              == (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__set)));
    if (vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD_io_req_bits_from_mem) {
        vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD_io_req_bits_size = 0U;
        vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD_io_req_bits_tag 
            = vlSelf->GPGPU_top__DOT__l2cache__DOT__directory_io_write_bits_data_tag;
        vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD_io_req_bits_offset 
            = vlSelf->GPGPU_top__DOT__l2cache__DOT__schedule_d_bits_offset;
        vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD_io_req_bits_data[0U] 
            = (((((1U & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshr_selectOH))
                   ? ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_0__DOT__sink_d_reg)
                       ? vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkD_io_resp_bits_data[0U]
                       : vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_0__DOT__request_data[0U])
                   : 0U) | ((2U & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshr_selectOH))
                             ? ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_1__DOT__sink_d_reg)
                                 ? vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkD_io_resp_bits_data[0U]
                                 : vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_1__DOT__request_data[0U])
                             : 0U)) | ((4U & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshr_selectOH))
                                        ? ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_2__DOT__sink_d_reg)
                                            ? vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkD_io_resp_bits_data[0U]
                                            : vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_2__DOT__request_data[0U])
                                        : 0U)) | ((8U 
                                                   & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshr_selectOH))
                                                   ? 
                                                  ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_3__DOT__sink_d_reg)
                                                    ? 
                                                   vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkD_io_resp_bits_data[0U]
                                                    : 
                                                   vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_3__DOT__request_data[0U])
                                                   : 0U));
        vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD_io_req_bits_data[1U] 
            = (((((1U & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshr_selectOH))
                   ? ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_0__DOT__sink_d_reg)
                       ? vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkD_io_resp_bits_data[1U]
                       : vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_0__DOT__request_data[1U])
                   : 0U) | ((2U & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshr_selectOH))
                             ? ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_1__DOT__sink_d_reg)
                                 ? vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkD_io_resp_bits_data[1U]
                                 : vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_1__DOT__request_data[1U])
                             : 0U)) | ((4U & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshr_selectOH))
                                        ? ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_2__DOT__sink_d_reg)
                                            ? vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkD_io_resp_bits_data[1U]
                                            : vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_2__DOT__request_data[1U])
                                        : 0U)) | ((8U 
                                                   & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshr_selectOH))
                                                   ? 
                                                  ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_3__DOT__sink_d_reg)
                                                    ? 
                                                   vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkD_io_resp_bits_data[1U]
                                                    : 
                                                   vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_3__DOT__request_data[1U])
                                                   : 0U));
        vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD_io_req_bits_data[2U] 
            = (((((1U & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshr_selectOH))
                   ? ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_0__DOT__sink_d_reg)
                       ? vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkD_io_resp_bits_data[2U]
                       : vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_0__DOT__request_data[2U])
                   : 0U) | ((2U & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshr_selectOH))
                             ? ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_1__DOT__sink_d_reg)
                                 ? vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkD_io_resp_bits_data[2U]
                                 : vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_1__DOT__request_data[2U])
                             : 0U)) | ((4U & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshr_selectOH))
                                        ? ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_2__DOT__sink_d_reg)
                                            ? vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkD_io_resp_bits_data[2U]
                                            : vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_2__DOT__request_data[2U])
                                        : 0U)) | ((8U 
                                                   & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshr_selectOH))
                                                   ? 
                                                  ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_3__DOT__sink_d_reg)
                                                    ? 
                                                   vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkD_io_resp_bits_data[2U]
                                                    : 
                                                   vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_3__DOT__request_data[2U])
                                                   : 0U));
        vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD_io_req_bits_data[3U] 
            = (((((1U & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshr_selectOH))
                   ? ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_0__DOT__sink_d_reg)
                       ? vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkD_io_resp_bits_data[3U]
                       : vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_0__DOT__request_data[3U])
                   : 0U) | ((2U & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshr_selectOH))
                             ? ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_1__DOT__sink_d_reg)
                                 ? vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkD_io_resp_bits_data[3U]
                                 : vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_1__DOT__request_data[3U])
                             : 0U)) | ((4U & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshr_selectOH))
                                        ? ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_2__DOT__sink_d_reg)
                                            ? vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkD_io_resp_bits_data[3U]
                                            : vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_2__DOT__request_data[3U])
                                        : 0U)) | ((8U 
                                                   & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshr_selectOH))
                                                   ? 
                                                  ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_3__DOT__sink_d_reg)
                                                    ? 
                                                   vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkD_io_resp_bits_data[3U]
                                                    : 
                                                   vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_3__DOT__request_data[3U])
                                                   : 0U));
        vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD_io_req_bits_way 
            = vlSelf->GPGPU_top__DOT__l2cache__DOT__directory_io_write_bits_way;
        vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD_io_req_bits_mask 
            = (((((1U & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshr_selectOH))
                   ? (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_0__DOT__request_mask)
                   : 0U) | ((2U & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshr_selectOH))
                             ? (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_1__DOT__request_mask)
                             : 0U)) | ((4U & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshr_selectOH))
                                        ? (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_2__DOT__request_mask)
                                        : 0U)) | ((8U 
                                                   & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshr_selectOH))
                                                   ? (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_3__DOT__request_mask)
                                                   : 0U));
        vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD_io_req_bits_set 
            = vlSelf->GPGPU_top__DOT__l2cache__DOT__directory_io_write_bits_set;
        vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD_io_req_bits_opcode 
            = (((((1U & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshr_selectOH))
                   ? (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_0__DOT__request_opcode)
                   : 0U) | ((2U & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshr_selectOH))
                             ? (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_1__DOT__request_opcode)
                             : 0U)) | ((4U & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshr_selectOH))
                                        ? (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_2__DOT__request_opcode)
                                        : 0U)) | ((8U 
                                                   & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshr_selectOH))
                                                   ? (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_3__DOT__request_opcode)
                                                   : 0U));
        vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__head_pop_head_addr 
            = (((((1U & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshr_selectOH))
                   ? (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_0__DOT__request_put)
                   : 0U) | ((2U & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshr_selectOH))
                             ? (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_1__DOT__request_put)
                             : 0U)) | ((4U & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshr_selectOH))
                                        ? (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_2__DOT__request_put)
                                        : 0U)) | ((8U 
                                                   & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshr_selectOH))
                                                   ? (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_3__DOT__request_put)
                                                   : 0U));
        vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD_io_req_bits_source 
            = vlSelf->GPGPU_top__DOT__l2cache__DOT__requests__DOT__data
            [vlSelf->GPGPU_top__DOT__l2cache__DOT__requests__DOT__head_pop_head_data];
    } else {
        vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD_io_req_bits_size 
            = vlSelf->GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__ram_size
            [vlSelf->GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__deq_ptr_value];
        vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD_io_req_bits_tag 
            = vlSelf->GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__ram_tag
            [vlSelf->GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__deq_ptr_value];
        vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD_io_req_bits_offset 
            = vlSelf->GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__ram_offset
            [vlSelf->GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__deq_ptr_value];
        vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD_io_req_bits_data[0U] 
            = vlSelf->GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__ram_data
            [vlSelf->GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__deq_ptr_value][0U];
        vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD_io_req_bits_data[1U] 
            = vlSelf->GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__ram_data
            [vlSelf->GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__deq_ptr_value][1U];
        vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD_io_req_bits_data[2U] 
            = vlSelf->GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__ram_data
            [vlSelf->GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__deq_ptr_value][2U];
        vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD_io_req_bits_data[3U] 
            = vlSelf->GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__ram_data
            [vlSelf->GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__deq_ptr_value][3U];
        vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD_io_req_bits_way 
            = vlSelf->GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__ram_way
            [vlSelf->GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__deq_ptr_value];
        vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD_io_req_bits_mask 
            = vlSelf->GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__ram_mask
            [vlSelf->GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__deq_ptr_value];
        vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD_io_req_bits_set 
            = vlSelf->GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__ram_set
            [vlSelf->GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__deq_ptr_value];
        vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD_io_req_bits_opcode 
            = vlSelf->GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__ram_opcode
            [vlSelf->GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__deq_ptr_value];
        vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__head_pop_head_addr 
            = vlSelf->GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__ram_put
            [vlSelf->GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__deq_ptr_value];
        vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD_io_req_bits_source 
            = vlSelf->GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__ram_source
            [vlSelf->GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__deq_ptr_value];
    }
    vlSelf->GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__do_deq 
        = (1U & ((~ (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__empty)) 
                 & ((~ (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD_io_req_bits_from_mem)) 
                    & (~ (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT__busy)))));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__requests__DOT__head_MPORT_6_en 
        = (0xfU & (((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__requests__DOT__valid) 
                    >> (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__requests__DOT__head_pop_head_addr)) 
                   & ((~ (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT__busy)) 
                      & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD_io_req_bits_from_mem))));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD_io_req_bits_hit 
        = ((~ (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD_io_req_bits_from_mem)) 
           & vlSelf->GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__ram_hit
           [vlSelf->GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__deq_ptr_value]);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT___io_pb_pop_valid_T 
        = (1U & ((~ (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT__busy)) 
                 & ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD_io_req_bits_from_mem)
                     ? (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD_io_req_bits_from_mem)
                     : (~ (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__empty)))));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__requests__DOT____VdfgTmp_h8585db02__0 
        = ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__requests__DOT__head_pop_head_data) 
           == vlSelf->GPGPU_top__DOT__l2cache__DOT__requests__DOT__tail
           [vlSelf->GPGPU_top__DOT__l2cache__DOT__requests__DOT__head_pop_head_addr]);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__cc_dir__DOT__array_0_MPORT_en 
        = ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__cc_dir_io_w_req_valid) 
           | (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__cc_dir__DOT__resetState));
    if (vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__cc_dir__DOT__resetState) {
        vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__cc_dir__DOT__array_0_MPORT_data = 0U;
        vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__cc_dir__DOT__array_0_MPORT_addr 
            = vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__cc_dir__DOT__wrap_wrap;
    } else {
        vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__cc_dir__DOT__array_0_MPORT_data 
            = vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__cc_dir_io_w_req_bits_data_0;
        vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__cc_dir__DOT__array_0_MPORT_addr 
            = vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__cc_dir_io_w_req_bits_setIdx;
    }
    GPGPU_top__DOT__l2cache__DOT__directory__DOT___io_result_bits_hit_T 
        = ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__setQuash) 
           & (vlSelf->GPGPU_top__DOT__l2cache__DOT__directory_io_write_bits_data_tag 
              == vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__tag));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__hitWay_lo 
        = (((((0x7ffffffU & (vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__cc_dir_io_r_resp_data_1 
                             >> 1U)) == vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__tag) 
             & ((~ (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__setQuash)) 
                & vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__cc_dir_io_r_resp_data_1)) 
            << 1U) | (((0x7ffffffU & (vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__cc_dir_io_r_resp_data_0 
                                      >> 1U)) == vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__tag) 
                      & ((~ (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__setQuash)) 
                         & vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__cc_dir_io_r_resp_data_0)));
    GPGPU_top__DOT__l2cache__DOT__directory__DOT___hits_T_11 
        = (((0x7ffffffU & (vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__cc_dir_io_r_resp_data_2 
                           >> 1U)) == vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__tag) 
           & ((~ (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__setQuash)) 
              & vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__cc_dir_io_r_resp_data_2));
    GPGPU_top__DOT__l2cache__DOT__directory__DOT___hits_T_15 
        = (((0x7ffffffU & (vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__cc_dir_io_r_resp_data_3 
                           >> 1U)) == vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__tag) 
           & ((~ (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__setQuash)) 
              & vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__cc_dir_io_r_resp_data_3));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__head_pop_head_data 
        = vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__head
        [vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__head_pop_head_addr];
    vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__head_MPORT_6_en 
        = (0xfU & (((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__valid) 
                    >> (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__head_pop_head_addr)) 
                   & ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT___io_pb_pop_valid_T) 
                      & (((0U == (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD_io_req_bits_opcode)) 
                          | (1U == (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD_io_req_bits_opcode))) 
                         & ((~ (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD_io_req_bits_from_mem)) 
                            & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD_io_req_bits_hit))))));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT___GEN_2 
        = (0xfU & ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__head_MPORT_6_en)
                    ? ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__head_MPORT_9_en)
                        ? (((IData)(1U) << (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__head_pop_head_addr)) 
                           | ((IData)(1U) << (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__head_pop_head2_MPORT_addr)))
                        : ((IData)(1U) << (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__head_pop_head_addr)))
                    : ((IData)(1U) << (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__head_pop_head2_MPORT_addr))));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__hitWay_hi 
        = (((IData)(GPGPU_top__DOT__l2cache__DOT__directory__DOT___hits_T_15) 
            << 1U) | (IData)(GPGPU_top__DOT__l2cache__DOT__directory__DOT___hits_T_11));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__hits 
        = (((IData)(GPGPU_top__DOT__l2cache__DOT__directory__DOT___hits_T_15) 
            << 3U) | (((IData)(GPGPU_top__DOT__l2cache__DOT__directory__DOT___hits_T_11) 
                       << 2U) | (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__hitWay_lo)));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT____VdfgTmp_h8585db02__0 
        = ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__head_pop_head_data) 
           == vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__tail
           [vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__head_pop_head_addr]);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__data_io_data_MPORT_data[0U] 
        = vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__data
        [vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__head_pop_head_data][0U];
    vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__data_io_data_MPORT_data[1U] 
        = vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__data
        [vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__head_pop_head_data][1U];
    vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__data_io_data_MPORT_data[2U] 
        = vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__data
        [vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__head_pop_head_data][2U];
    vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__data_io_data_MPORT_data[3U] 
        = vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__data
        [vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__head_pop_head_data][3U];
    vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__data_io_data_MPORT_data[4U] 
        = vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__data
        [vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__head_pop_head_data][4U];
    if (vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT___io_pb_pop_valid_T) {
        vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__reqs_2_index 
            = vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD_io_req_bits_way;
        vlSelf->GPGPU_top__DOT__l2cache__DOT__write_buffer__DOT__ram_mask_MPORT_data 
            = vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD_io_req_bits_mask;
        vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__sourceD_rreq_select_shiftAmount 
            = vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD_io_req_bits_set;
        vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT___GEN_0 
            = vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD_io_req_bits_opcode;
        vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT___GEN_12[0U] 
            = ((vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__data_io_data_MPORT_data[1U] 
                << 0x1cU) | (vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__data_io_data_MPORT_data[0U] 
                             >> 4U));
        vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT___GEN_12[1U] 
            = ((vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__data_io_data_MPORT_data[2U] 
                << 0x1cU) | (vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__data_io_data_MPORT_data[1U] 
                             >> 4U));
        vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT___GEN_12[2U] 
            = ((vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__data_io_data_MPORT_data[3U] 
                << 0x1cU) | (vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__data_io_data_MPORT_data[2U] 
                             >> 4U));
        vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT___GEN_12[3U] 
            = ((vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__data_io_data_MPORT_data[4U] 
                << 0x1cU) | (vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__data_io_data_MPORT_data[3U] 
                             >> 4U));
        vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD_io_bs_wadr_bits_mask 
            = (0xfU & vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__data_io_data_MPORT_data[0U]);
    } else {
        vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__reqs_2_index 
            = vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT__s1_req_reg_way;
        vlSelf->GPGPU_top__DOT__l2cache__DOT__write_buffer__DOT__ram_mask_MPORT_data 
            = vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT__s1_req_reg_mask;
        vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__sourceD_rreq_select_shiftAmount 
            = vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT__s1_req_reg_set;
        vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT___GEN_0 
            = vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT__s1_req_reg_opcode;
        vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT___GEN_12[0U] 
            = vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT__pb_beat_reg_data[0U];
        vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT___GEN_12[1U] 
            = vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT__pb_beat_reg_data[1U];
        vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT___GEN_12[2U] 
            = vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT__pb_beat_reg_data[2U];
        vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT___GEN_12[3U] 
            = vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT__pb_beat_reg_data[3U];
        vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD_io_bs_wadr_bits_mask 
            = (0xfU & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT__pb_beat_reg_mask));
    }
    vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT___used_T_1 
        = (((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__head_MPORT_6_en)
             ? (~ ((IData)(1U) << (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__head_pop_head_data)))
             : 0xfU) & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__used));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT____VdfgTmp_hb8a87d06__0 
        = ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__head_MPORT_6_en) 
           | (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__head_MPORT_9_en));
    if (vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT____VdfgTmp_hc0824628__0) {
        vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_0_io_r_req_bits_setIdx 
            = vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__reqs_0_index;
        vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_1_io_r_req_bits_setIdx 
            = vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__reqs_0_index;
        vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_2_io_r_req_bits_setIdx 
            = vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__reqs_0_index;
        vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_3_io_r_req_bits_setIdx 
            = vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__reqs_0_index;
    } else {
        vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_0_io_r_req_bits_setIdx 
            = vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__reqs_2_index;
        vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_1_io_r_req_bits_setIdx 
            = vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__reqs_2_index;
        vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_2_io_r_req_bits_setIdx 
            = vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__reqs_2_index;
        vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_3_io_r_req_bits_setIdx 
            = vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__reqs_2_index;
    }
    if (vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT____VdfgTmp_hc46625d2__0) {
        vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_4_io_r_req_bits_setIdx 
            = vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__reqs_0_index;
        vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_5_io_r_req_bits_setIdx 
            = vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__reqs_0_index;
        vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_6_io_r_req_bits_setIdx 
            = vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__reqs_0_index;
        vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_7_io_r_req_bits_setIdx 
            = vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__reqs_0_index;
    } else {
        vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_4_io_r_req_bits_setIdx 
            = vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__reqs_2_index;
        vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_5_io_r_req_bits_setIdx 
            = vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__reqs_2_index;
        vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_6_io_r_req_bits_setIdx 
            = vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__reqs_2_index;
        vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_7_io_r_req_bits_setIdx 
            = vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__reqs_2_index;
    }
    GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT___sourceD_wreq_out_bankSel_T_6 
        = ((((2U & ((IData)(1U) << (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__sourceD_rreq_select_shiftAmount)))
              ? 0xfU : 0U) << 4U) | ((1U & ((IData)(1U) 
                                            << (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__sourceD_rreq_select_shiftAmount)))
                                      ? 0xfU : 0U));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT___s1_need_w_T_2 
        = ((0U == (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT___GEN_0)) 
           | (1U == (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT___GEN_0)));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT___hitWay_T_1 
        = ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__hitWay_hi) 
           | (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__hitWay_lo));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__ram_hit_MPORT_data 
        = ((0U != (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__hits)) 
           | (IData)(GPGPU_top__DOT__l2cache__DOT__directory__DOT___io_result_bits_hit_T));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT___valid_T_1 
        = (((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__head_MPORT_6_en)
             ? ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT____VdfgTmp_h8585db02__0)
                 ? (~ ((IData)(1U) << (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__head_pop_head_addr)))
                 : 0xfU) : 0xfU) & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__valid));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__reqs_2_bankSel 
        = (((~ ((~ (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT___io_pb_pop_valid_T)) 
                & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT__read_sent_reg))) 
            & (4U == (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT___GEN_0)))
            ? ((IData)(GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT___sourceD_wreq_out_bankSel_T_6) 
               & (((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__write_buffer__DOT__ram_mask_MPORT_data) 
                   << 4U) | (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__write_buffer__DOT__ram_mask_MPORT_data)))
            : 0U);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT___GEN_23 
        = ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT___s1_need_w_T_2)
            ? ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__write_buffer__DOT__full)
                ? 2U : 3U) : (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT__stateReg));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__write_buffer__DOT__ram_opcode_MPORT_en 
        = ((~ (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__write_buffer__DOT__full)) 
           & ((~ ((~ (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT___io_pb_pop_valid_T)) 
                  & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT__sourceA_sent_reg))) 
              & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT___s1_need_w_T_2)));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT__s1_need_w 
        = ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT___s1_need_w_T_2) 
           & ((~ ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT___io_pb_pop_valid_T)
                   ? (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD_io_req_bits_from_mem)
                   : (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT__s1_req_reg_from_mem))) 
              & ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT___io_pb_pop_valid_T)
                  ? (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD_io_req_bits_hit)
                  : (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT__s1_req_reg_hit))));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__ram_way_MPORT_data 
        = ((0U != (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__hits))
            ? (((IData)((0U != (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__hitWay_hi))) 
                << 1U) | (1U & ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT___hitWay_T_1) 
                                >> 1U))) : ((IData)(GPGPU_top__DOT__l2cache__DOT__directory__DOT___io_result_bits_hit_T)
                                             ? (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__directory_io_write_bits_way)
                                             : ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__set)
                                                 ? (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__state_reg_1)
                                                 : (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__state_reg))));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__ram_opcode_MPORT_en 
        = ((~ ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__ptr_match) 
               & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__maybe_full))) 
           & ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__ram_hit_MPORT_data) 
              & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__ren1)));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__requests__DOT__tail_MPORT_3_en 
        = ((~ (IData)((0xfU == (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__requests__DOT__used)))) 
           & ((~ (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__ram_hit_MPORT_data)) 
              & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__ren1)));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__tagMatches 
        = ((0xfffffff8U & ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__requests__DOT__valid) 
                           & (((~ (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__ram_hit_MPORT_data)) 
                               & (vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__io_result_bits_tag_REG 
                                  == vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_3__DOT__request_tag)) 
                              << 3U))) | ((0xfffffffcU 
                                           & ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__requests__DOT__valid) 
                                              & (((~ (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__ram_hit_MPORT_data)) 
                                                  & (vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__io_result_bits_tag_REG 
                                                     == vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_2__DOT__request_tag)) 
                                                 << 2U))) 
                                          | ((0xfffffffeU 
                                              & ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__requests__DOT__valid) 
                                                 & (((~ (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__ram_hit_MPORT_data)) 
                                                     & (vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__io_result_bits_tag_REG 
                                                        == vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_1__DOT__request_tag)) 
                                                    << 1U))) 
                                             | ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__requests__DOT__valid) 
                                                & ((~ (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__ram_hit_MPORT_data)) 
                                                   & (vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__io_result_bits_tag_REG 
                                                      == vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_0__DOT__request_tag))))));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT___sourceD_wreq_ready_T_1 
        = (((IData)(vlSelf->io_out_d_valid) ? ((1U 
                                                & ((IData)(1U) 
                                                   << (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__sinkD_req_select_shiftAmount)))
                                                ? 0xfU
                                                : 0U)
             : 0U) & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD_io_bs_wadr_bits_mask));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT___sourceD_wreq_ready_T_5 
        = (((IData)(vlSelf->io_out_d_valid) ? ((2U 
                                                & ((IData)(1U) 
                                                   << (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__sinkD_req_select_shiftAmount)))
                                                ? 0xfU
                                                : 0U)
             : 0U) & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD_io_bs_wadr_bits_mask));
    GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT___sourceD_wreq_out_bankSel_T_8 
        = ((IData)(GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT___sourceD_wreq_out_bankSel_T_6) 
           & (((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD_io_bs_wadr_bits_mask) 
               << 4U) | (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD_io_bs_wadr_bits_mask)));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD_io_bs_wadr_valid 
        = ((~ ((~ (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT___io_pb_pop_valid_T)) 
               & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT__write_sent_reg))) 
           & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT__s1_need_w));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__requests__DOT___used_T_4 
        = (0xfU & ((((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__requests__DOT__head_MPORT_6_en)
                      ? (~ ((IData)(1U) << (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__requests__DOT__head_pop_head_data)))
                      : 0xfU) & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__requests__DOT__used)) 
                   | ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__requests__DOT__tail_MPORT_3_en)
                       ? (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__requests__DOT__freeOH)
                       : 0U)));
    vlSelf->GPGPU_top__DOT__l2cache__DOT___requests_io_push_bits_index_T 
        = ((0U != (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__tagMatches))
            ? (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__tagMatches)
            : (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshr_insertOH));
    GPGPU_top__DOT__l2cache__DOT____VdfgTmp_h5c21289d__0 
        = ((~ (IData)((0U != (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__tagMatches)))) 
           & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__ren1));
    if (vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD_io_bs_wadr_valid) {
        vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__regout_sel_1 
            = (1U & (IData)(GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT___sourceD_wreq_out_bankSel_T_8));
        vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__regout_sel_1_1 
            = (1U & ((IData)(GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT___sourceD_wreq_out_bankSel_T_8) 
                     >> 1U));
        vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__regout_sel_1_2 
            = (1U & ((IData)(GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT___sourceD_wreq_out_bankSel_T_8) 
                     >> 2U));
        vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__regout_sel_1_3 
            = (1U & ((IData)(GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT___sourceD_wreq_out_bankSel_T_8) 
                     >> 3U));
        vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__regout_sel_1_4 
            = (1U & ((IData)(GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT___sourceD_wreq_out_bankSel_T_8) 
                     >> 4U));
        vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__regout_sel_1_5 
            = (1U & ((IData)(GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT___sourceD_wreq_out_bankSel_T_8) 
                     >> 5U));
        vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__regout_sel_1_6 
            = (1U & ((IData)(GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT___sourceD_wreq_out_bankSel_T_8) 
                     >> 6U));
        vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__regout_sel_1_7 
            = ((IData)(GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT___sourceD_wreq_out_bankSel_T_8) 
               >> 7U);
        vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__reqs_1_bankSel 
            = GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT___sourceD_wreq_out_bankSel_T_8;
    } else {
        vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__regout_sel_1 = 0U;
        vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__regout_sel_1_1 = 0U;
        vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__regout_sel_1_2 = 0U;
        vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__regout_sel_1_3 = 0U;
        vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__regout_sel_1_4 = 0U;
        vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__regout_sel_1_5 = 0U;
        vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__regout_sel_1_6 = 0U;
        vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__regout_sel_1_7 = 0U;
        vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__reqs_1_bankSel = 0U;
    }
    vlSelf->GPGPU_top__DOT__l2cache__DOT___requests_io_push_bits_index_T_2 
        = (0xfU & ((1U & ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT___requests_io_push_bits_index_T) 
                          >> 4U)) | (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT___requests_io_push_bits_index_T)));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_0_io_allocate_valid 
        = ((IData)(GPGPU_top__DOT__l2cache__DOT____VdfgTmp_h5c21289d__0) 
           & ((~ (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__ram_hit_MPORT_data)) 
              & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshr_insertOH)));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_1_io_allocate_valid 
        = ((IData)(GPGPU_top__DOT__l2cache__DOT____VdfgTmp_h5c21289d__0) 
           & ((~ (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__ram_hit_MPORT_data)) 
              & ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshr_insertOH) 
                 >> 1U)));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_2_io_allocate_valid 
        = ((IData)(GPGPU_top__DOT__l2cache__DOT____VdfgTmp_h5c21289d__0) 
           & ((~ (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__ram_hit_MPORT_data)) 
              & ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshr_insertOH) 
                 >> 2U)));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_3_io_allocate_valid 
        = ((IData)(GPGPU_top__DOT__l2cache__DOT____VdfgTmp_h5c21289d__0) 
           & ((~ (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__ram_hit_MPORT_data)) 
              & ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshr_insertOH) 
                 >> 3U)));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__regout_wen 
        = ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT____VdfgTmp_hc0824628__0) 
           | (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__regout_sel_1));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__regout_wen_1 
        = ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT____VdfgTmp_hc0824628__0) 
           | (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__regout_sel_1_1));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__regout_wen_2 
        = ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT____VdfgTmp_hc0824628__0) 
           | (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__regout_sel_1_2));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__regout_wen_3 
        = ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT____VdfgTmp_hc0824628__0) 
           | (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__regout_sel_1_3));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__regout_wen_4 
        = ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT____VdfgTmp_hc46625d2__0) 
           | (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__regout_sel_1_4));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__regout_wen_5 
        = ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT____VdfgTmp_hc46625d2__0) 
           | (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__regout_sel_1_5));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__regout_wen_6 
        = ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT____VdfgTmp_hc46625d2__0) 
           | (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__regout_sel_1_6));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__regout_wen_7 
        = ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT____VdfgTmp_hc46625d2__0) 
           | (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__regout_sel_1_7));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__reqs_1_bankEn 
        = ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__reqs_1_bankSel) 
           & ((((0U != (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT___sourceD_wreq_ready_T_5))
                 ? 0U : 0xfU) << 4U) | ((0U != (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT___sourceD_wreq_ready_T_1))
                                         ? 0U : 0xfU)));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__reqs_2_bankSum 
        = ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__reqs_1_bankSel) 
           | ((IData)(vlSelf->io_out_d_valid) ? (((
                                                   (2U 
                                                    & ((IData)(1U) 
                                                       << (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__sinkD_req_select_shiftAmount)))
                                                    ? 0xfU
                                                    : 0U) 
                                                  << 4U) 
                                                 | ((1U 
                                                     & ((IData)(1U) 
                                                        << (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__sinkD_req_select_shiftAmount)))
                                                     ? 0xfU
                                                     : 0U))
               : 0U));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__requests__DOT__head_MPORT_2_addr 
        = (((IData)((0U != (3U & ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT___requests_io_push_bits_index_T_2) 
                                  >> 2U)))) << 1U) 
           | (IData)((0U != (0xaU & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT___requests_io_push_bits_index_T_2)))));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_0__DOT___GEN_12 
        = ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_0_io_allocate_valid) 
           | (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_0__DOT__sche_a_valid));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_1__DOT___GEN_12 
        = ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_1_io_allocate_valid) 
           | (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_1__DOT__sche_a_valid));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_2__DOT___GEN_12 
        = ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_2_io_allocate_valid) 
           | (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_2__DOT__sche_a_valid));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_3__DOT___GEN_12 
        = ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_3_io_allocate_valid) 
           | (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_3__DOT__sche_a_valid));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT___sourceD_rreq_ready_T_1 
        = ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__reqs_2_bankSum) 
           & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__write_buffer__DOT__ram_mask_MPORT_data));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT___sourceD_rreq_ready_T_5 
        = (((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__reqs_2_bankSum) 
            >> 4U) & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__write_buffer__DOT__ram_mask_MPORT_data));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__requests__DOT__tail_push_tail_data 
        = vlSelf->GPGPU_top__DOT__l2cache__DOT__requests__DOT__tail
        [vlSelf->GPGPU_top__DOT__l2cache__DOT__requests__DOT__head_MPORT_2_addr];
    vlSelf->GPGPU_top__DOT__l2cache__DOT__requests__DOT___valid_T_4 
        = (0xfU & ((((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__requests__DOT__head_MPORT_6_en)
                      ? ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__requests__DOT____VdfgTmp_h8585db02__0)
                          ? (~ ((IData)(1U) << (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__requests__DOT__head_pop_head_addr)))
                          : 0xfU) : 0xfU) & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__requests__DOT__valid)) 
                   | ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__requests__DOT__tail_MPORT_3_en)
                       ? ((IData)(1U) << (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__requests__DOT__head_MPORT_2_addr))
                       : 0U)));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__requests__DOT___push_valid_T 
        = (0xfU & ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__requests__DOT__valid) 
                   >> (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__requests__DOT__head_MPORT_2_addr)));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT___sourceD_rreq_out_bankEn_T_6 
        = ((((0U != (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT___sourceD_rreq_ready_T_5))
              ? 0U : 0xfU) << 4U) | ((0U != (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT___sourceD_rreq_ready_T_1))
                                      ? 0U : 0xfU));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__requests__DOT__next_MPORT_1_en 
        = ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__requests__DOT__tail_MPORT_3_en) 
           & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__requests__DOT___push_valid_T));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__reqs_2_bankEn 
        = ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__reqs_2_bankSel) 
           & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT___sourceD_rreq_out_bankEn_T_6));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__regout_en 
        = (1U & ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT____VdfgTmp_hc0824628__0) 
                 | ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__reqs_1_bankEn) 
                    | (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__reqs_2_bankEn))));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__regout_en_1 
        = (1U & ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT____VdfgTmp_hc0824628__0) 
                 | (((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__reqs_1_bankEn) 
                     | (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__reqs_2_bankEn)) 
                    >> 1U)));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__regout_en_2 
        = (1U & ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT____VdfgTmp_hc0824628__0) 
                 | (((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__reqs_1_bankEn) 
                     | (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__reqs_2_bankEn)) 
                    >> 2U)));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__regout_en_3 
        = (1U & ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT____VdfgTmp_hc0824628__0) 
                 | (((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__reqs_1_bankEn) 
                     | (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__reqs_2_bankEn)) 
                    >> 3U)));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__regout_en_4 
        = (1U & ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT____VdfgTmp_hc46625d2__0) 
                 | (((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__reqs_1_bankEn) 
                     | (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__reqs_2_bankEn)) 
                    >> 4U)));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__regout_en_5 
        = (1U & ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT____VdfgTmp_hc46625d2__0) 
                 | (((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__reqs_1_bankEn) 
                     | (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__reqs_2_bankEn)) 
                    >> 5U)));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__regout_en_6 
        = (1U & ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT____VdfgTmp_hc46625d2__0) 
                 | (((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__reqs_1_bankEn) 
                     | (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__reqs_2_bankEn)) 
                    >> 6U)));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__regout_en_7 
        = (1U & ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT____VdfgTmp_hc46625d2__0) 
                 | (((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__reqs_1_bankEn) 
                     | (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__reqs_2_bankEn)) 
                    >> 7U)));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_0_io_r_req_valid 
        = ((~ (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__regout_wen)) 
           & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__regout_en));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_0_io_w_req_valid 
        = ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__regout_wen) 
           & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__regout_en));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_1_io_r_req_valid 
        = ((~ (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__regout_wen_1)) 
           & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__regout_en_1));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_1_io_w_req_valid 
        = ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__regout_wen_1) 
           & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__regout_en_1));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_2_io_r_req_valid 
        = ((~ (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__regout_wen_2)) 
           & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__regout_en_2));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_2_io_w_req_valid 
        = ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__regout_wen_2) 
           & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__regout_en_2));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_3_io_r_req_valid 
        = ((~ (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__regout_wen_3)) 
           & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__regout_en_3));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_3_io_w_req_valid 
        = ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__regout_wen_3) 
           & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__regout_en_3));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_4_io_r_req_valid 
        = ((~ (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__regout_wen_4)) 
           & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__regout_en_4));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_4_io_w_req_valid 
        = ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__regout_wen_4) 
           & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__regout_en_4));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_5_io_r_req_valid 
        = ((~ (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__regout_wen_5)) 
           & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__regout_en_5));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_5_io_w_req_valid 
        = ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__regout_wen_5) 
           & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__regout_en_5));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_6_io_r_req_valid 
        = ((~ (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__regout_wen_6)) 
           & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__regout_en_6));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_6_io_w_req_valid 
        = ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__regout_wen_6) 
           & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__regout_en_6));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_7_io_r_req_valid 
        = ((~ (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__regout_wen_7)) 
           & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__regout_en_7));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_7_io_w_req_valid 
        = ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__regout_wen_7) 
           & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__regout_en_7));
}

VL_INLINE_OPT void VVentus___024root___nba_sequent__TOP__1(VVentus___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VVentus__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VVentus___024root___nba_sequent__TOP__1\n"); );
    // Init
    CData/*0:0*/ GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT___GEN_50;
    CData/*0:0*/ GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT____VdfgTmp_hf1200383__0;
    CData/*2:0*/ GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_res_tbl__DOT___GEN_1;
    CData/*0:0*/ GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT___T_19;
    CData/*0:0*/ GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT___GEN_57;
    CData/*0:0*/ GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT___GEN_58;
    CData/*0:0*/ GPGPU_top__DOT__l2cache__DOT__directory__DOT___cc_dir_io_r_req_valid_T;
    CData/*0:0*/ __Vdly__GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__dis_controller_wg_alloc_valid_i;
    VlWide<4>/*127:0*/ __Vtemp_h9f6176b5__0;
    // Body
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT___GEN_24 
        = (7U & ((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__curr_alloc_wf_count) 
                 - (1U & (~ (IData)((0xfU == (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__cta2warp__DOT__idx_using)))))));
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT___GEN_26 
        = ((0U != (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__curr_alloc_wf_count)) 
           & (~ (IData)((0xfU == (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__cta2warp__DOT__idx_using)))));
    if ((0xfU == (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__cta2warp__DOT__idx_using))) {
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT___GEN_29 
            = (0U != (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__curr_alloc_wf_count));
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT___GEN_23 
            = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__dispatch2cu_wf_tag_dispatch_i;
    } else {
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT___GEN_29 = 0U;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT___GEN_23 
            = (((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__curr_alloc_wf_slot) 
                << 3U) | (7U & ((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__curr_alloc_wf_count) 
                                - (IData)(1U))));
    }
    if ((4U == (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT__s_final_req_opcode))) {
        vlSelf->GPGPU_top__DOT__SM_wrapper_io_memRsp_bits_d_data_1 
            = vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__decodeDX_1;
        vlSelf->GPGPU_top__DOT__SM_wrapper_io_memRsp_bits_d_data_0 
            = vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__decodeDX_0;
        vlSelf->GPGPU_top__DOT__SM_wrapper_io_memRsp_bits_d_data_2 
            = vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__decodeDX_2;
        vlSelf->GPGPU_top__DOT__SM_wrapper_io_memRsp_bits_d_data_3 
            = vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__decodeDX_3;
    } else {
        vlSelf->GPGPU_top__DOT__SM_wrapper_io_memRsp_bits_d_data_1 = 0U;
        vlSelf->GPGPU_top__DOT__SM_wrapper_io_memRsp_bits_d_data_0 = 0U;
        vlSelf->GPGPU_top__DOT__SM_wrapper_io_memRsp_bits_d_data_2 = 0U;
        vlSelf->GPGPU_top__DOT__SM_wrapper_io_memRsp_bits_d_data_3 = 0U;
    }
    vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD_io_d_bits_address 
        = ((vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT__s_final_req_tag 
            << 5U) | (((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT__s_final_req_set) 
                       << 4U) | (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT__s_final_req_offset)));
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT___GEN_24 
        = (7U & ((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__curr_alloc_wf_count) 
                 - (1U & (~ (IData)((0xfU == (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__cta2warp__DOT__idx_using)))))));
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT___GEN_26 
        = ((0U != (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__curr_alloc_wf_count)) 
           & (~ (IData)((0xfU == (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__cta2warp__DOT__idx_using)))));
    if ((0xfU == (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__cta2warp__DOT__idx_using))) {
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT___GEN_29 
            = (0U != (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__curr_alloc_wf_count));
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT___GEN_23 
            = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__dispatch2cu_wf_tag_dispatch_i;
    } else {
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT___GEN_29 = 0U;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT___GEN_23 
            = (((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__curr_alloc_wf_slot) 
                << 3U) | (7U & ((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__curr_alloc_wf_count) 
                                - (IData)(1U))));
    }
    vlSelf->GPGPU_top__DOT__sm2L2Arb__DOT___io_memRspIn_ready_T_6 
        = (((IData)(1U) << (1U & ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT__s_final_req_source) 
                                  >> 3U))) & (((IData)(
                                                       (0U 
                                                        != 
                                                        (((IData)(1U) 
                                                          << 
                                                          (1U 
                                                           & ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT__s_final_req_source) 
                                                              >> 2U))) 
                                                         & ((2U 
                                                             & ((~ (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__dcache__DOT__memRsp_Q__DOT__full)) 
                                                                << 1U)) 
                                                            | (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__icache__DOT__memRsp_Q_io_enq_ready))))) 
                                               << 1U) 
                                              | (0U 
                                                 != 
                                                 (((IData)(1U) 
                                                   << 
                                                   (1U 
                                                    & ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT__s_final_req_source) 
                                                       >> 2U))) 
                                                  & ((2U 
                                                      & ((~ (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__dcache__DOT__memRsp_Q__DOT__full)) 
                                                         << 1U)) 
                                                     | (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__icache__DOT__memRsp_Q_io_enq_ready))))));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA_io_a_valid 
        = (((IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__l1Cache2L2Arb__DOT__memReqArb_io_in_0_valid) 
            | ((0U != (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__dcache__DOT__WriteDataBuf__DOT__unfrozenCount)) 
               | (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__dcache__DOT__MshrAccess_io_miss2mem_valid))) 
           | (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.io_memReq_valid));
    if (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.io_memReq_valid) {
        if (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__l1Cache2L2Arb__DOT__memReqArb_io_in_0_valid) {
            vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA_io_a_bits_address 
                = (((3U == (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__icache__DOT__mshrAccess__DOT__hasSendStatus_io_next))
                     ? vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__icache__DOT__mshrAccess__DOT__blockAddr_Access_3
                     : ((2U == (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__icache__DOT__mshrAccess__DOT__hasSendStatus_io_next))
                         ? vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__icache__DOT__mshrAccess__DOT__blockAddr_Access_2
                         : ((1U == (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__icache__DOT__mshrAccess__DOT__hasSendStatus_io_next))
                             ? vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__icache__DOT__mshrAccess__DOT__blockAddr_Access_1
                             : vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__icache__DOT__mshrAccess__DOT__blockAddr_Access_0))) 
                   << 4U);
            vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer_io_push_bits_data_data[0U] = 0U;
            vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer_io_push_bits_data_data[1U] = 0U;
            vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA_io_req_bits_opcode = 4U;
        } else if (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__dcache__DOT__MshrAccess_io_miss2mem_valid) {
            vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA_io_a_bits_address 
                = (((3U == (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__dcache__DOT__MshrAccess__DOT__hasSendStatus_io_next))
                     ? vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__dcache__DOT__MshrAccess__DOT__blockAddr_Access_3
                     : ((2U == (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__dcache__DOT__MshrAccess__DOT__hasSendStatus_io_next))
                         ? vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__dcache__DOT__MshrAccess__DOT__blockAddr_Access_2
                         : ((1U == (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__dcache__DOT__MshrAccess__DOT__hasSendStatus_io_next))
                             ? vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__dcache__DOT__MshrAccess__DOT__blockAddr_Access_1
                             : vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__dcache__DOT__MshrAccess__DOT__blockAddr_Access_0))) 
                   << 4U);
            vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer_io_push_bits_data_data[0U] = 0U;
            vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer_io_push_bits_data_data[1U] = 0U;
            vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA_io_req_bits_opcode = 4U;
        } else {
            vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA_io_a_bits_address 
                = ((3U == (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__dcache__DOT__WriteDataBuf__DOT__deqPtr_w_Gen_io_deqPtr_ns))
                    ? vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__dcache__DOT__WriteDataBuf__DOT__addr_ram_3
                    : ((2U == (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__dcache__DOT__WriteDataBuf__DOT__deqPtr_w_Gen_io_deqPtr_ns))
                        ? vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__dcache__DOT__WriteDataBuf__DOT__addr_ram_2
                        : ((1U == (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__dcache__DOT__WriteDataBuf__DOT__deqPtr_w_Gen_io_deqPtr_ns))
                            ? vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__dcache__DOT__WriteDataBuf__DOT__addr_ram_1
                            : vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__dcache__DOT__WriteDataBuf__DOT__addr_ram_0)));
            vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer_io_push_bits_data_data[0U] 
                = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__dcache__DOT__MemReqArb_io_in_1_bits_a_data_0;
            vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer_io_push_bits_data_data[1U] 
                = (((IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__dcache__DOT__WriteDataBuf_io_outputBus_bits_data_1_3) 
                    << 0x18U) | (((IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__dcache__DOT__WriteDataBuf_io_outputBus_bits_data_1_2) 
                                  << 0x10U) | (((IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__dcache__DOT__WriteDataBuf_io_outputBus_bits_data_1_1) 
                                                << 8U) 
                                               | (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__dcache__DOT__WriteDataBuf_io_outputBus_bits_data_1_0))));
            vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA_io_req_bits_opcode 
                = (((IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__dcache__DOT__WriteDataBuf_io_outputBus_bits_mask_0) 
                    & ((IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__dcache__DOT__WriteDataBuf_io_outputBus_bits_mask_1) 
                       & ((IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__dcache__DOT__WriteDataBuf_io_outputBus_bits_mask_2) 
                          & (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__dcache__DOT__WriteDataBuf_io_outputBus_bits_mask_3))))
                    ? 0U : 1U);
        }
        __Vtemp_h9f6176b5__0[2U] = (IData)((((QData)((IData)(
                                                             ((IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__l1Cache2L2Arb__DOT__memReqArb_io_in_0_valid)
                                                               ? 0U
                                                               : 
                                                              ((IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__dcache__DOT__MshrAccess_io_miss2mem_valid)
                                                                ? 0U
                                                                : 
                                                               (((IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__dcache__DOT__WriteDataBuf_io_outputBus_bits_data_3_3) 
                                                                 << 0x18U) 
                                                                | (((IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__dcache__DOT__WriteDataBuf_io_outputBus_bits_data_3_2) 
                                                                    << 0x10U) 
                                                                   | (((IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__dcache__DOT__WriteDataBuf_io_outputBus_bits_data_3_1) 
                                                                       << 8U) 
                                                                      | (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__dcache__DOT__WriteDataBuf_io_outputBus_bits_data_3_0)))))))) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              ((IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__l1Cache2L2Arb__DOT__memReqArb_io_in_0_valid)
                                                                ? 0U
                                                                : 
                                                               ((IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__dcache__DOT__MshrAccess_io_miss2mem_valid)
                                                                 ? 0U
                                                                 : 
                                                                (((IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__dcache__DOT__WriteDataBuf_io_outputBus_bits_data_2_3) 
                                                                  << 0x18U) 
                                                                 | (((IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__dcache__DOT__WriteDataBuf_io_outputBus_bits_data_2_2) 
                                                                     << 0x10U) 
                                                                    | (((IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__dcache__DOT__WriteDataBuf_io_outputBus_bits_data_2_1) 
                                                                        << 8U) 
                                                                       | (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__dcache__DOT__WriteDataBuf_io_outputBus_bits_data_2_0))))))))));
        __Vtemp_h9f6176b5__0[3U] = (IData)(((((QData)((IData)(
                                                              ((IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__l1Cache2L2Arb__DOT__memReqArb_io_in_0_valid)
                                                                ? 0U
                                                                : 
                                                               ((IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__dcache__DOT__MshrAccess_io_miss2mem_valid)
                                                                 ? 0U
                                                                 : 
                                                                (((IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__dcache__DOT__WriteDataBuf_io_outputBus_bits_data_3_3) 
                                                                  << 0x18U) 
                                                                 | (((IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__dcache__DOT__WriteDataBuf_io_outputBus_bits_data_3_2) 
                                                                     << 0x10U) 
                                                                    | (((IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__dcache__DOT__WriteDataBuf_io_outputBus_bits_data_3_1) 
                                                                        << 8U) 
                                                                       | (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__dcache__DOT__WriteDataBuf_io_outputBus_bits_data_3_0)))))))) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               ((IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__l1Cache2L2Arb__DOT__memReqArb_io_in_0_valid)
                                                                 ? 0U
                                                                 : 
                                                                ((IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__dcache__DOT__MshrAccess_io_miss2mem_valid)
                                                                  ? 0U
                                                                  : 
                                                                 (((IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__dcache__DOT__WriteDataBuf_io_outputBus_bits_data_2_3) 
                                                                   << 0x18U) 
                                                                  | (((IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__dcache__DOT__WriteDataBuf_io_outputBus_bits_data_2_2) 
                                                                      << 0x10U) 
                                                                     | (((IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__dcache__DOT__WriteDataBuf_io_outputBus_bits_data_2_1) 
                                                                         << 8U) 
                                                                        | (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__dcache__DOT__WriteDataBuf_io_outputBus_bits_data_2_0))))))))) 
                                            >> 0x20U));
        vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer_io_push_bits_data_mask 
            = (((((IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__l1Cache2L2Arb__DOT__memReqArb_io_in_0_valid) 
                  | ((IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__dcache__DOT__MshrAccess_io_miss2mem_valid) 
                     | (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__dcache__DOT__WriteDataBuf_io_outputBus_bits_mask_3))) 
                 << 3U) | (((IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__l1Cache2L2Arb__DOT__memReqArb_io_in_0_valid) 
                            | ((IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__dcache__DOT__MshrAccess_io_miss2mem_valid) 
                               | (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__dcache__DOT__WriteDataBuf_io_outputBus_bits_mask_2))) 
                           << 2U)) | ((((IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__l1Cache2L2Arb__DOT__memReqArb_io_in_0_valid) 
                                        | ((IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__dcache__DOT__MshrAccess_io_miss2mem_valid) 
                                           | (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__dcache__DOT__WriteDataBuf_io_outputBus_bits_mask_1))) 
                                       << 1U) | ((IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__l1Cache2L2Arb__DOT__memReqArb_io_in_0_valid) 
                                                 | ((IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__dcache__DOT__MshrAccess_io_miss2mem_valid) 
                                                    | (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__dcache__DOT__WriteDataBuf_io_outputBus_bits_mask_0)))));
    } else {
        if (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__l1Cache2L2Arb__DOT__memReqArb_io_in_0_valid) {
            vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA_io_a_bits_address 
                = (((3U == (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__icache__DOT__mshrAccess__DOT__hasSendStatus_io_next))
                     ? vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__icache__DOT__mshrAccess__DOT__blockAddr_Access_3
                     : ((2U == (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__icache__DOT__mshrAccess__DOT__hasSendStatus_io_next))
                         ? vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__icache__DOT__mshrAccess__DOT__blockAddr_Access_2
                         : ((1U == (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__icache__DOT__mshrAccess__DOT__hasSendStatus_io_next))
                             ? vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__icache__DOT__mshrAccess__DOT__blockAddr_Access_1
                             : vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__icache__DOT__mshrAccess__DOT__blockAddr_Access_0))) 
                   << 4U);
            vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer_io_push_bits_data_data[0U] = 0U;
            vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer_io_push_bits_data_data[1U] = 0U;
            vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA_io_req_bits_opcode = 4U;
        } else if (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__dcache__DOT__MshrAccess_io_miss2mem_valid) {
            vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA_io_a_bits_address 
                = (((3U == (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__dcache__DOT__MshrAccess__DOT__hasSendStatus_io_next))
                     ? vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__dcache__DOT__MshrAccess__DOT__blockAddr_Access_3
                     : ((2U == (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__dcache__DOT__MshrAccess__DOT__hasSendStatus_io_next))
                         ? vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__dcache__DOT__MshrAccess__DOT__blockAddr_Access_2
                         : ((1U == (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__dcache__DOT__MshrAccess__DOT__hasSendStatus_io_next))
                             ? vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__dcache__DOT__MshrAccess__DOT__blockAddr_Access_1
                             : vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__dcache__DOT__MshrAccess__DOT__blockAddr_Access_0))) 
                   << 4U);
            vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer_io_push_bits_data_data[0U] = 0U;
            vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer_io_push_bits_data_data[1U] = 0U;
            vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA_io_req_bits_opcode = 4U;
        } else {
            vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA_io_a_bits_address 
                = ((3U == (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__dcache__DOT__WriteDataBuf__DOT__deqPtr_w_Gen_io_deqPtr_ns))
                    ? vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__dcache__DOT__WriteDataBuf__DOT__addr_ram_3
                    : ((2U == (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__dcache__DOT__WriteDataBuf__DOT__deqPtr_w_Gen_io_deqPtr_ns))
                        ? vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__dcache__DOT__WriteDataBuf__DOT__addr_ram_2
                        : ((1U == (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__dcache__DOT__WriteDataBuf__DOT__deqPtr_w_Gen_io_deqPtr_ns))
                            ? vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__dcache__DOT__WriteDataBuf__DOT__addr_ram_1
                            : vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__dcache__DOT__WriteDataBuf__DOT__addr_ram_0)));
            vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer_io_push_bits_data_data[0U] 
                = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__dcache__DOT__MemReqArb_io_in_1_bits_a_data_0;
            vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer_io_push_bits_data_data[1U] 
                = (((IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__dcache__DOT__WriteDataBuf_io_outputBus_bits_data_1_3) 
                    << 0x18U) | (((IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__dcache__DOT__WriteDataBuf_io_outputBus_bits_data_1_2) 
                                  << 0x10U) | (((IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__dcache__DOT__WriteDataBuf_io_outputBus_bits_data_1_1) 
                                                << 8U) 
                                               | (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__dcache__DOT__WriteDataBuf_io_outputBus_bits_data_1_0))));
            vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA_io_req_bits_opcode 
                = (((IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__dcache__DOT__WriteDataBuf_io_outputBus_bits_mask_0) 
                    & ((IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__dcache__DOT__WriteDataBuf_io_outputBus_bits_mask_1) 
                       & ((IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__dcache__DOT__WriteDataBuf_io_outputBus_bits_mask_2) 
                          & (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__dcache__DOT__WriteDataBuf_io_outputBus_bits_mask_3))))
                    ? 0U : 1U);
        }
        __Vtemp_h9f6176b5__0[2U] = (IData)((((QData)((IData)(
                                                             ((IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__l1Cache2L2Arb__DOT__memReqArb_io_in_0_valid)
                                                               ? 0U
                                                               : 
                                                              ((IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__dcache__DOT__MshrAccess_io_miss2mem_valid)
                                                                ? 0U
                                                                : 
                                                               (((IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__dcache__DOT__WriteDataBuf_io_outputBus_bits_data_3_3) 
                                                                 << 0x18U) 
                                                                | (((IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__dcache__DOT__WriteDataBuf_io_outputBus_bits_data_3_2) 
                                                                    << 0x10U) 
                                                                   | (((IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__dcache__DOT__WriteDataBuf_io_outputBus_bits_data_3_1) 
                                                                       << 8U) 
                                                                      | (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__dcache__DOT__WriteDataBuf_io_outputBus_bits_data_3_0)))))))) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              ((IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__l1Cache2L2Arb__DOT__memReqArb_io_in_0_valid)
                                                                ? 0U
                                                                : 
                                                               ((IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__dcache__DOT__MshrAccess_io_miss2mem_valid)
                                                                 ? 0U
                                                                 : 
                                                                (((IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__dcache__DOT__WriteDataBuf_io_outputBus_bits_data_2_3) 
                                                                  << 0x18U) 
                                                                 | (((IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__dcache__DOT__WriteDataBuf_io_outputBus_bits_data_2_2) 
                                                                     << 0x10U) 
                                                                    | (((IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__dcache__DOT__WriteDataBuf_io_outputBus_bits_data_2_1) 
                                                                        << 8U) 
                                                                       | (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__dcache__DOT__WriteDataBuf_io_outputBus_bits_data_2_0))))))))));
        __Vtemp_h9f6176b5__0[3U] = (IData)(((((QData)((IData)(
                                                              ((IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__l1Cache2L2Arb__DOT__memReqArb_io_in_0_valid)
                                                                ? 0U
                                                                : 
                                                               ((IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__dcache__DOT__MshrAccess_io_miss2mem_valid)
                                                                 ? 0U
                                                                 : 
                                                                (((IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__dcache__DOT__WriteDataBuf_io_outputBus_bits_data_3_3) 
                                                                  << 0x18U) 
                                                                 | (((IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__dcache__DOT__WriteDataBuf_io_outputBus_bits_data_3_2) 
                                                                     << 0x10U) 
                                                                    | (((IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__dcache__DOT__WriteDataBuf_io_outputBus_bits_data_3_1) 
                                                                        << 8U) 
                                                                       | (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__dcache__DOT__WriteDataBuf_io_outputBus_bits_data_3_0)))))))) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               ((IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__l1Cache2L2Arb__DOT__memReqArb_io_in_0_valid)
                                                                 ? 0U
                                                                 : 
                                                                ((IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__dcache__DOT__MshrAccess_io_miss2mem_valid)
                                                                  ? 0U
                                                                  : 
                                                                 (((IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__dcache__DOT__WriteDataBuf_io_outputBus_bits_data_2_3) 
                                                                   << 0x18U) 
                                                                  | (((IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__dcache__DOT__WriteDataBuf_io_outputBus_bits_data_2_2) 
                                                                      << 0x10U) 
                                                                     | (((IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__dcache__DOT__WriteDataBuf_io_outputBus_bits_data_2_1) 
                                                                         << 8U) 
                                                                        | (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__dcache__DOT__WriteDataBuf_io_outputBus_bits_data_2_0))))))))) 
                                            >> 0x20U));
        vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer_io_push_bits_data_mask 
            = (((((IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__l1Cache2L2Arb__DOT__memReqArb_io_in_0_valid) 
                  | ((IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__dcache__DOT__MshrAccess_io_miss2mem_valid) 
                     | (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__dcache__DOT__WriteDataBuf_io_outputBus_bits_mask_3))) 
                 << 3U) | (((IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__l1Cache2L2Arb__DOT__memReqArb_io_in_0_valid) 
                            | ((IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__dcache__DOT__MshrAccess_io_miss2mem_valid) 
                               | (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__dcache__DOT__WriteDataBuf_io_outputBus_bits_mask_2))) 
                           << 2U)) | ((((IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__l1Cache2L2Arb__DOT__memReqArb_io_in_0_valid) 
                                        | ((IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__dcache__DOT__MshrAccess_io_miss2mem_valid) 
                                           | (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__dcache__DOT__WriteDataBuf_io_outputBus_bits_mask_1))) 
                                       << 1U) | ((IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__l1Cache2L2Arb__DOT__memReqArb_io_in_0_valid) 
                                                 | ((IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__dcache__DOT__MshrAccess_io_miss2mem_valid) 
                                                    | (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__dcache__DOT__WriteDataBuf_io_outputBus_bits_mask_0)))));
    }
    vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer_io_push_bits_data_data[2U] 
        = __Vtemp_h9f6176b5__0[2U];
    vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer_io_push_bits_data_data[3U] 
        = __Vtemp_h9f6176b5__0[3U];
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen__DOT__wg_slot_id_find_i 
        = vlSelf->__Vdly__GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen__DOT__wg_slot_id_find_i;
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__handler_wg_alloc_en_0 
        = ((~ (IData)(vlSelf->reset)) & ((1U == (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__alloc_st))
                                          ? ((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__dis_controller_wg_alloc_valid_i) 
                                             & (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT___GEN_17))
                                          : (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT___GEN_93)));
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__handler_wg_alloc_en_1 
        = ((~ (IData)(vlSelf->reset)) & ((1U == (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__alloc_st))
                                          ? ((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__dis_controller_wg_alloc_valid_i) 
                                             & (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT___GEN_18))
                                          : (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT___GEN_94)));
    if ((3U == (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT__stateReg))) {
        vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT___GEN_34 
            = ((0U != (IData)(vlSelf->GPGPU_top__DOT__sm2L2Arb__DOT___io_memRspIn_ready_T_6))
                ? 0U : (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT__stateReg));
        vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT___GEN_33 
            = ((~ (IData)((0U != (IData)(vlSelf->GPGPU_top__DOT__sm2L2Arb__DOT___io_memRspIn_ready_T_6)))) 
               & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT__busy));
    } else {
        vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT___GEN_34 
            = vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT__stateReg;
        vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT___GEN_33 
            = vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT__busy;
    }
    GPGPU_top__DOT__l2cache__DOT__directory__DOT___cc_dir_io_r_req_valid_T 
        = (((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT___wen_new_T_3) 
            & ((1U & (vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA_io_a_bits_address 
                      >> 4U)) == (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__directory_io_write_bits_set))) 
           & ((vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA_io_a_bits_address 
               >> 5U) == vlSelf->GPGPU_top__DOT__l2cache__DOT__directory_io_write_bits_data_tag));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__hasData 
        = ((0U == (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA_io_req_bits_opcode)) 
           | (1U == (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA_io_req_bits_opcode)));
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__dealloc_en_1 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen_io_find_and_cancel));
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__alloc_en_1 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen_io_generate));
    if (vlSelf->reset) {
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT___GEN_24 = 0U;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT___GEN_25 = 0U;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT___GEN_26 = 0U;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__gpu_interface_alloc_available_i = 0U;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__handler_wg_alloc_wg_id_0 = 0U;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__handler_wg_alloc_wg_id_1 = 0U;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__handler_wg_alloc_wf_count_0 = 0U;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__handler_wg_alloc_wf_count_1 = 0U;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__dispatch2cu_wg_wf_count_i = 0U;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__dispatch2cu_wf_size_dispatch_i = 0U;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__dispatch2cu_sgpr_base_dispatch_i = 0U;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__dispatch2cu_vgpr_base_dispatch_i = 0U;
        vlSelf->__Vdly__GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__dispatch2cu_wf_tag_dispatch_i = 0U;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__dispatch2cu_lds_base_dispatch_i = 0U;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__dispatch2cu_start_pc_dispatch_i = 0U;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__dispatch2cu_gds_base_dispatch_i = 0U;
        vlSelf->__Vdly__GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__alloc_st = 1U;
    } else {
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT___GEN_24 
            = ((IData)(vlSymsp->TOP__GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__lds_res_tbl.__PVT__res_table_done)
                ? (IData)(vlSymsp->TOP__GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__lds_res_tbl.__PVT__res_table_max_size)
                : (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__lds_size_out));
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT___GEN_25 
            = ((IData)(vlSymsp->TOP__GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__vgpr_res_tbl.__PVT__res_table_done)
                ? (IData)(vlSymsp->TOP__GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__vgpr_res_tbl.__PVT__res_table_max_size)
                : (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__vgpr_size_out));
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT___GEN_26 
            = ((IData)(vlSymsp->TOP__GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__sgpr_res_tbl.__PVT__res_table_done)
                ? (IData)(vlSymsp->TOP__GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__sgpr_res_tbl.__PVT__res_table_max_size)
                : (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__sgpr_size_out));
        if ((1U == (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__alloc_st))) {
            vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__gpu_interface_alloc_available_i 
                = (1U & (~ (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__dis_controller_wg_alloc_valid_i)));
            if (vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__dis_controller_wg_alloc_valid_i) {
                vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__handler_wg_alloc_wg_id_0 
                    = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT___GEN_19;
                vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__handler_wg_alloc_wg_id_1 
                    = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT___GEN_20;
                vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__handler_wg_alloc_wf_count_0 
                    = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT___GEN_21;
                vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__handler_wg_alloc_wf_count_1 
                    = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT___GEN_22;
                vlSelf->__Vdly__GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__alloc_st 
                    = ((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__inflight_wg_buffer_gpu_valid_i)
                        ? 4U : 2U);
            }
        } else if ((2U == (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__alloc_st))) {
            if (vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__inflight_wg_buffer_gpu_valid_i) {
                vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__gpu_interface_alloc_available_i = 0U;
                vlSelf->__Vdly__GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__alloc_st = 4U;
            }
            vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__handler_wg_alloc_wg_id_0 
                = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT___GEN_19;
            vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__handler_wg_alloc_wg_id_1 
                = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT___GEN_20;
            vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__handler_wg_alloc_wf_count_0 
                = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT___GEN_21;
            vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__handler_wg_alloc_wf_count_1 
                = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT___GEN_22;
        } else {
            if ((4U != (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__alloc_st))) {
                vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__gpu_interface_alloc_available_i 
                    = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT___GEN_80;
            }
            vlSelf->__Vdly__GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__alloc_st 
                = ((4U == (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__alloc_st))
                    ? (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT___GEN_60)
                    : (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT___GEN_81));
        }
        if ((1U != (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__alloc_st))) {
            if ((2U != (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__alloc_st))) {
                if ((4U == (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__alloc_st))) {
                    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__dispatch2cu_wg_wf_count_i 
                        = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT___GEN_53;
                    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__dispatch2cu_wf_size_dispatch_i 
                        = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT___GEN_54;
                    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__dispatch2cu_sgpr_base_dispatch_i 
                        = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT___GEN_58;
                    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__dispatch2cu_vgpr_base_dispatch_i 
                        = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT___GEN_57;
                    vlSelf->__Vdly__GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__dispatch2cu_wf_tag_dispatch_i 
                        = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT___GEN_52;
                    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__dispatch2cu_lds_base_dispatch_i 
                        = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT___GEN_59;
                    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__dispatch2cu_start_pc_dispatch_i 
                        = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT___GEN_55;
                    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__dispatch2cu_gds_base_dispatch_i 
                        = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT___GEN_56;
                } else {
                    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__dispatch2cu_sgpr_base_dispatch_i 
                        = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT___GEN_78;
                    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__dispatch2cu_vgpr_base_dispatch_i 
                        = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT___GEN_79;
                    vlSelf->__Vdly__GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__dispatch2cu_wf_tag_dispatch_i 
                        = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT___GEN_77;
                }
            }
        }
    }
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__alloc_st 
        = vlSelf->__Vdly__GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__alloc_st;
    vlSelf->GPGPU_top__DOT__l2cache__DOT__directory_io_read_ready 
        = (1U & (((~ (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT___wen_new_T_3)) 
                  & ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__wipeCount) 
                     >> 1U)) | (IData)(GPGPU_top__DOT__l2cache__DOT__directory__DOT___cc_dir_io_r_req_valid_T)));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__buf_block 
        = ((0xfU == (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__used)) 
           & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__hasData));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__set_block 
        = ((0xfU == (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__lists)) 
           & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__hasData));
    if (vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT___GEN_48) {
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT___GEN_54 
            = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__inflight_wg_buffer_gpu_wf_size_i;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT___GEN_59 
            = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__allocator_lds_start_out_i;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT___GEN_55 
            = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__inflight_wg_buffer_start_pc_i;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT___GEN_56 
            = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__inflight_wg_buffer_gds_base_dispatch_i;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT___GEN_58 
            = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__allocator_sgpr_start_out_i;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT___GEN_57 
            = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__allocator_vgpr_start_out_i;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT___GEN_60 = 8U;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT___GEN_53 
            = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__allocator_wf_count_i;
    } else {
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT___GEN_54 
            = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__dispatch2cu_wf_size_dispatch_i;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT___GEN_59 
            = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__dispatch2cu_lds_base_dispatch_i;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT___GEN_55 
            = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__dispatch2cu_start_pc_dispatch_i;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT___GEN_56 
            = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__dispatch2cu_gds_base_dispatch_i;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT___GEN_58 
            = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__dispatch2cu_sgpr_base_dispatch_i;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT___GEN_57 
            = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__dispatch2cu_vgpr_base_dispatch_i;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT___GEN_60 
            = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__alloc_st;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT___GEN_53 
            = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__dispatch2cu_wg_wf_count_i;
    }
    if ((8U == (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__alloc_st))) {
        if (vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT___GEN_48) {
            vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT___GEN_81 
                = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__alloc_st;
            vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT___GEN_80 
                = (1U & (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__gpu_interface_alloc_available_i));
            vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT___GEN_78 
                = (0x1fffU & ((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__dispatch2cu_sgpr_base_dispatch_i) 
                              + (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__inflight_wg_buffer_gpu_sgpr_size_per_wf_i)));
            vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT___GEN_79 
                = (0x1fffU & ((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__dispatch2cu_vgpr_base_dispatch_i) 
                              + (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__inflight_wg_buffer_gpu_vgpr_size_per_wf_i)));
        } else {
            vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT___GEN_81 
                = ((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT___GEN_66)
                    ? (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__alloc_st)
                    : 1U);
            vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT___GEN_80 
                = (1U & ((~ (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT___GEN_66)) 
                         | (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__gpu_interface_alloc_available_i)));
            vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT___GEN_78 
                = (0x1fffU & (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__dispatch2cu_sgpr_base_dispatch_i));
            vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT___GEN_79 
                = (0x1fffU & (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__dispatch2cu_vgpr_base_dispatch_i));
        }
    } else {
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT___GEN_81 
            = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__alloc_st;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT___GEN_80 
            = (1U & (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__gpu_interface_alloc_available_i));
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT___GEN_78 
            = (0x1fffU & (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__dispatch2cu_sgpr_base_dispatch_i));
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT___GEN_79 
            = (0x1fffU & (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__dispatch2cu_vgpr_base_dispatch_i));
    }
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT___T_1 
        = ((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__next_free_slot_valid) 
           & (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__handler_wg_alloc_en_0));
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT___T_1 
        = ((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__next_free_slot_valid) 
           & (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__handler_wg_alloc_en_1));
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__dis_controller_wg_alloc_valid_i 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__dis_controller_i__DOT__dis_controller_wg_alloc_valid_i));
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__inflight_wg_buffer_gpu_valid_i 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__inflight_wg_buffer_gpu_valid_i));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT___T_1 
        = ((0U != (0xfU & (~ (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__requests__DOT__valid)))) 
           & ((~ (IData)((0xfU == (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__requests__DOT__used)))) 
              & ((4U == (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA_io_req_bits_opcode))
                  ? (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__directory_io_read_ready)
                  : ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__wipeCount) 
                     >> 1U))));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT____VdfgTmp_hdfd098f5__0 
        = (1U & ((~ (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__buf_block)) 
                 & (~ (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__set_block))));
    if (vlSelf->reset) {
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__lds_start1 = 0U;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__lds_size1 = 0U;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__vgpr_start1 = 0U;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__vgpr_size1 = 0U;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__sgpr_start1 = 0U;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen__DOT__wg_slot_id_gen_i = 0U;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__sgpr_size1 = 0U;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__cu_id_1 = 0U;
    } else {
        if (((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen_io_generate) 
             | (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen_io_find_and_cancel))) {
            vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__lds_start1 
                = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i_io_allocator_lds_start_out;
            vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__lds_size1 
                = (0xfffU & (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__lds_size_out));
            vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__vgpr_start1 
                = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i_io_allocator_vgpr_start_out;
            vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__vgpr_size1 
                = (0xfffU & (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__vgpr_size_out));
            vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__sgpr_start1 
                = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i_io_allocator_sgpr_start_out;
            vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__sgpr_size1 
                = (0xfffU & (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__sgpr_size_out));
            vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__cu_id_1 
                = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen_io_cu_id;
        }
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen__DOT__wg_slot_id_gen_i 
            = ((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen__DOT___GEN_13)
                ? ((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen__DOT___GEN_9)
                    ? ((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen__DOT___GEN_5)
                        ? ((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen__DOT___GEN_1)
                            ? 0U : 3U) : 2U) : 1U) : 0U);
    }
    GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_res_tbl__DOT___GEN_1 
        = ((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__cu_id_1)
            ? (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_res_tbl__DOT__wf_count_out_i_1)
            : (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_res_tbl__DOT__wf_count_out_i_0));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT___T_2 
        = ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA_io_a_valid) 
           & ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT___T_1) 
              & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__hasData)));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__ren 
        = ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__directory_io_read_ready) 
           & ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA_io_a_valid) 
              & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT____VdfgTmp_hdfd098f5__0)));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA_io_a_ready 
        = ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT___T_1) 
           & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT____VdfgTmp_hdfd098f5__0));
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_res_tbl__DOT___wf_count_out_i_T_1 
        = (7U & ((IData)(GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_res_tbl__DOT___GEN_1) 
                 - (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_count1)));
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_res_tbl__DOT___wf_count_out_i_T_3 
        = (7U & ((IData)(GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_res_tbl__DOT___GEN_1) 
                 + (((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__cu_id_1) 
                     & (3U == (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen__DOT__wg_slot_id_find_i)))
                     ? (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_res_tbl__DOT__wf_count_per_wg_slot_1_3)
                     : (((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__cu_id_1) 
                         & (2U == (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen__DOT__wg_slot_id_find_i)))
                         ? (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_res_tbl__DOT__wf_count_per_wg_slot_1_2)
                         : (((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__cu_id_1) 
                             & (1U == (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen__DOT__wg_slot_id_find_i)))
                             ? (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_res_tbl__DOT__wf_count_per_wg_slot_1_1)
                             : (((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__cu_id_1) 
                                 & (0U == (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen__DOT__wg_slot_id_find_i)))
                                 ? (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_res_tbl__DOT__wf_count_per_wg_slot_1_0)
                                 : (((~ (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__cu_id_1)) 
                                     & (3U == (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen__DOT__wg_slot_id_find_i)))
                                     ? (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_res_tbl__DOT__wf_count_per_wg_slot_0_3)
                                     : (((~ (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__cu_id_1)) 
                                         & (2U == (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen__DOT__wg_slot_id_find_i)))
                                         ? (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_res_tbl__DOT__wf_count_per_wg_slot_0_2)
                                         : (((~ (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__cu_id_1)) 
                                             & (1U 
                                                == (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen__DOT__wg_slot_id_find_i)))
                                             ? (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_res_tbl__DOT__wf_count_per_wg_slot_0_1)
                                             : (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_res_tbl__DOT__wf_count_per_wg_slot_0_0))))))))));
    if (vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__inflight_wg_buffer_gpu_valid_i) {
        if ((1U & (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__allocator_cu_id_out_i))) {
            vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT___GEN_19 
                = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__handler_wg_alloc_wg_id_0;
            vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT___GEN_20 
                = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__allocator_wg_id_out_i;
            vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT___GEN_21 
                = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__handler_wg_alloc_wf_count_0;
            vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT___GEN_22 
                = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__allocator_wf_count_i;
        } else {
            vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT___GEN_19 
                = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__allocator_wg_id_out_i;
            vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT___GEN_20 
                = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__handler_wg_alloc_wg_id_1;
            vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT___GEN_21 
                = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__allocator_wf_count_i;
            vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT___GEN_22 
                = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__handler_wg_alloc_wf_count_1;
        }
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT___GEN_17 
            = (1U & (~ (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__allocator_cu_id_out_i)));
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT___GEN_18 
            = (1U & (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__allocator_cu_id_out_i));
    } else {
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT___GEN_19 
            = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__handler_wg_alloc_wg_id_0;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT___GEN_20 
            = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__handler_wg_alloc_wg_id_1;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT___GEN_21 
            = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__handler_wg_alloc_wf_count_0;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT___GEN_22 
            = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__handler_wg_alloc_wf_count_1;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT___GEN_17 = 0U;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT___GEN_18 = 0U;
    }
    vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT___lists_T_2 
        = (0xfU & (((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT____VdfgTmp_hb8a87d06__0)
                     ? (~ (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT___GEN_2))
                     : 0xfU) & ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__lists) 
                                | (((~ (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__buf_block)) 
                                    & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT___T_2))
                                    ? (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT___freeOH_T_11)
                                    : 0U))));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__tail_MPORT_3_en 
        = ((~ (IData)((0xfU == (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__used)))) 
           & ((~ (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__set_block)) 
              & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT___T_2)));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__cc_dir_io_r_req_valid 
        = ((~ (IData)(GPGPU_top__DOT__l2cache__DOT__directory__DOT___cc_dir_io_r_req_valid_T)) 
           & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__ren));
    vlSelf->GPGPU_top__DOT__sm2L2Arb__DOT__memReqArb_io_in_1_ready 
        = ((~ (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.io_memReq_valid)) 
           & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA_io_a_ready));
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT___GEN_93 
        = ((2U == (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__alloc_st)) 
           & (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT___GEN_17));
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT___GEN_94 
        = ((2U == (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__alloc_st)) 
           & (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT___GEN_18));
    vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__next_MPORT_1_en 
        = ((IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__tail_MPORT_3_en) 
           & (IData)(vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT___push_valid_T));
    if (vlSelf->reset) {
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__lds_size_out = 0U;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__vgpr_size_out = 0U;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__sgpr_size_out = 0U;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__encoded_lds_size = 0U;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__encoded_vgpr_size = 0U;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__encoded_sgpr_size = 0U;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__anded_cam_lds_size = 0U;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__anded_cam_vgpr_size = 0U;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__anded_cam_sgpr_size = 0U;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__cam_wait_lds_size = 0U;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__cam_wait_vgpr_size = 0U;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__cam_wait_sgpr_size = 0U;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__alloc_lds_size_i = 0U;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__alloc_vgpr_size_i = 0U;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__alloc_sgpr_size_i = 0U;
    } else if ((1U & (~ (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__pipeline_waiting)))) {
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__lds_size_out 
            = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__encoded_lds_size;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__vgpr_size_out 
            = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__encoded_vgpr_size;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__sgpr_size_out 
            = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__encoded_sgpr_size;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__encoded_lds_size 
            = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__anded_cam_lds_size;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__encoded_vgpr_size 
            = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__anded_cam_vgpr_size;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__encoded_sgpr_size 
            = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__anded_cam_sgpr_size;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__anded_cam_lds_size 
            = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__cam_wait_lds_size;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__anded_cam_vgpr_size 
            = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__cam_wait_vgpr_size;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__anded_cam_sgpr_size 
            = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__cam_wait_sgpr_size;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__cam_wait_lds_size 
            = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__alloc_lds_size_i;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__cam_wait_vgpr_size 
            = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__alloc_vgpr_size_i;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__cam_wait_sgpr_size 
            = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__alloc_sgpr_size_i;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__alloc_lds_size_i 
            = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__inflight_wg_buffer_alloc_lds_size_i;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__alloc_vgpr_size_i 
            = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__inflight_wg_buffer_alloc_vgpr_size_i;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__alloc_sgpr_size_i 
            = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__inflight_wg_buffer_alloc_sgpr_size_i;
    }
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__pipeline_waiting 
        = ((~ (IData)(vlSelf->reset)) & ((~ (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__dis_controller_i__DOT__dis_controller_alloc_ack_i)) 
                                         & (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT___GEN_0)));
    __Vdly__GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__dis_controller_wg_alloc_valid_i 
        = ((~ (IData)(vlSelf->reset)) & ((1U == (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__inflight_tbl_alloc_st))
                                          ? (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT___GEN_0)
                                          : ((2U == (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__inflight_tbl_alloc_st))
                                              ? ((~ (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__dis_controller_wg_alloc_valid_i)) 
                                                 & (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT___GEN_0))
                                              : (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT___GEN_0))));
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__dis_controller_wg_rejected_valid_i 
        = ((~ (IData)(vlSelf->reset)) & ((1U == (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__inflight_tbl_alloc_st))
                                          ? (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT___GEN_2)
                                          : ((2U == (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__inflight_tbl_alloc_st))
                                              ? ((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__dis_controller_wg_alloc_valid_i)
                                                  ? (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT___GEN_2)
                                                  : (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT___GEN_36))
                                              : (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT___GEN_2))));
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__waiting_tbl_valid_0 
        = ((~ (IData)(vlSelf->reset)) & ((1U == (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__inflight_tbl_alloc_st))
                                          ? (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT___GEN_24)
                                          : ((2U == (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__inflight_tbl_alloc_st))
                                              ? (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT___GEN_24)
                                              : ((4U 
                                                  == (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__inflight_tbl_alloc_st))
                                                  ? (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT___GEN_24)
                                                  : (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT___GEN_124)))));
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__waiting_tbl_valid_1 
        = ((~ (IData)(vlSelf->reset)) & ((1U == (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__inflight_tbl_alloc_st))
                                          ? (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT___GEN_25)
                                          : ((2U == (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__inflight_tbl_alloc_st))
                                              ? (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT___GEN_25)
                                              : ((4U 
                                                  == (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__inflight_tbl_alloc_st))
                                                  ? (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT___GEN_25)
                                                  : (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT___GEN_125)))));
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__wait_tbl_busy 
        = ((~ (IData)(vlSelf->reset)) & ((1U == (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__inflight_tbl_alloc_st))
                                          ? (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT___GEN_35)
                                          : (2U != (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__inflight_tbl_alloc_st))));
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__tbl_walk_rd_en 
        = ((~ (IData)(vlSelf->reset)) & ((1U != (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__inflight_tbl_alloc_st)) 
                                         & ((2U == (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__inflight_tbl_alloc_st))
                                             ? (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT___GEN_43)
                                             : ((4U 
                                                 == (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__inflight_tbl_alloc_st))
                                                 ? (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT___GEN_54)
                                                 : (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT___GEN_136)))));
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__inflight_wg_buffer_gpu_valid_i 
        = ((~ (IData)(vlSelf->reset)) & ((1U != (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__inflight_tbl_alloc_st)) 
                                         & ((2U != (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__inflight_tbl_alloc_st)) 
                                            & ((4U 
                                                != (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__inflight_tbl_alloc_st)) 
                                               & (8U 
                                                  == (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__inflight_tbl_alloc_st))))));
    if (vlSelf->reset) {
        vlSelf->__Vdly__GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__inflight_tbl_alloc_st = 1U;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__waiting_tbl_pending_0 = 0U;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__waiting_tbl_pending_1 = 0U;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__chosen_entry_by_allocator = 0U;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__tbl_walk_wg_id_searched = 0U;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__tbl_walk_idx = 0U;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__dis_controller_wg_alloc_valid_i 
            = __Vdly__GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__dis_controller_wg_alloc_valid_i;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__inflight_wg_buffer_gpu_vgpr_size_per_wf_i = 0U;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__inflight_wg_buffer_gpu_sgpr_size_per_wf_i = 0U;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__inflight_wg_buffer_gpu_wf_size_i = 0U;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__inflight_wg_buffer_start_pc_i = 0U;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__inflight_wg_buffer_alloc_wg_id_i = 0U;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__inflight_wg_buffer_alloc_num_wf_i = 0U;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__inflight_wg_buffer_alloc_vgpr_size_i = 0U;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__inflight_wg_buffer_alloc_sgpr_size_i = 0U;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__inflight_wg_buffer_alloc_lds_size_i = 0U;
        vlSelf->__Vdly__GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__wg_waiting_alloc_valid = 0U;
    } else {
        if ((1U == (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__inflight_tbl_alloc_st))) {
            if (vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__dis_controller_start_alloc_i) {
                vlSelf->__Vdly__GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__inflight_tbl_alloc_st = 2U;
                vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__waiting_tbl_pending_0 
                    = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT___GEN_27;
                vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__waiting_tbl_pending_1 
                    = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT___GEN_28;
                vlSelf->__Vdly__GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__wg_waiting_alloc_valid = 0U;
            } else if (((~ (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__wg_waiting_alloc_valid)) 
                        & ((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__valid_not_pending_0) 
                           | (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__valid_not_pending_1)))) {
                vlSelf->__Vdly__GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__inflight_tbl_alloc_st = 0x40U;
            }
        } else {
            vlSelf->__Vdly__GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__inflight_tbl_alloc_st 
                = ((2U == (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__inflight_tbl_alloc_st))
                    ? ((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__dis_controller_wg_alloc_valid_i)
                        ? 4U : (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT___GEN_40))
                    : ((4U == (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__inflight_tbl_alloc_st))
                        ? (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT___GEN_52)
                        : (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT___GEN_134)));
            if ((2U != (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__inflight_tbl_alloc_st))) {
                if ((4U != (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__inflight_tbl_alloc_st))) {
                    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__waiting_tbl_pending_0 
                        = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT___GEN_126;
                    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__waiting_tbl_pending_1 
                        = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT___GEN_127;
                    vlSelf->__Vdly__GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__wg_waiting_alloc_valid 
                        = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT___GEN_138;
                }
            }
        }
        if ((1U != (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__inflight_tbl_alloc_st))) {
            if ((2U != (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__inflight_tbl_alloc_st))) {
                if ((4U != (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__inflight_tbl_alloc_st))) {
                    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__chosen_entry_by_allocator 
                        = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT___GEN_137;
                    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__inflight_wg_buffer_gpu_vgpr_size_per_wf_i 
                        = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT___GEN_129;
                    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__inflight_wg_buffer_gpu_sgpr_size_per_wf_i 
                        = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT___GEN_130;
                    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__inflight_wg_buffer_gpu_wf_size_i 
                        = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT___GEN_131;
                    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__inflight_wg_buffer_start_pc_i 
                        = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT___GEN_132;
                    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__inflight_wg_buffer_alloc_wg_id_i 
                        = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT___GEN_139;
                    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__inflight_wg_buffer_alloc_num_wf_i 
                        = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT___GEN_140;
                    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__inflight_wg_buffer_alloc_vgpr_size_i 
                        = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT___GEN_141;
                    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__inflight_wg_buffer_alloc_sgpr_size_i 
                        = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT___GEN_142;
                    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__inflight_wg_buffer_alloc_lds_size_i 
                        = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT___GEN_143;
                }
            }
            if ((2U == (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__inflight_tbl_alloc_st))) {
                vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__tbl_walk_wg_id_searched 
                    = ((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__dis_controller_wg_alloc_valid_i)
                        ? (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__allocator_wg_id_out_i)
                        : (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT___GEN_37));
                vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__tbl_walk_idx 
                    = ((~ (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__dis_controller_wg_alloc_valid_i)) 
                       & (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT___GEN_39));
            } else {
                vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__tbl_walk_idx 
                    = ((4U == (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__inflight_tbl_alloc_st))
                        ? (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT___GEN_53)
                        : (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT___GEN_135));
            }
        }
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__dis_controller_wg_alloc_valid_i 
            = __Vdly__GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__dis_controller_wg_alloc_valid_i;
    }
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__inflight_tbl_alloc_st 
        = vlSelf->__Vdly__GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__inflight_tbl_alloc_st;
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT___GEN_0 
        = ((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__encoded_cu_found_valid) 
           | (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__pipeline_waiting));
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__dis_controller_i__DOT__dis_controller_alloc_ack_i 
        = ((~ (IData)(vlSelf->reset)) & ((0U != (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__dis_controller_i__DOT__alloc_st)) 
                                         & ((2U != (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__dis_controller_i__DOT__alloc_st)) 
                                            & ((4U 
                                                == (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__dis_controller_i__DOT__alloc_st)) 
                                               & (~ (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__dis_controller_i__DOT__alloc_waiting))))));
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT___GEN_43 
        = ((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__dis_controller_wg_alloc_valid_i) 
           | (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__dis_controller_wg_rejected_valid_i));
    if ((1U == (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__inflight_tbl_rd_host_st))) {
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT___GEN_24 
            = (1U & (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__waiting_tbl_valid_0));
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT___GEN_25 
            = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__waiting_tbl_valid_1;
    } else if ((2U == (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__inflight_tbl_rd_host_st))) {
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT___GEN_24 
            = (1U & (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__waiting_tbl_valid_0));
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT___GEN_25 
            = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__waiting_tbl_valid_1;
    } else if ((4U == (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__inflight_tbl_rd_host_st))) {
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT___GEN_24 
            = (1U & ((~ (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__new_index)) 
                     | (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__waiting_tbl_valid_0)));
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT___GEN_25 
            = ((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__new_index) 
               | (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__waiting_tbl_valid_1));
    } else {
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT___GEN_24 
            = (1U & (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__waiting_tbl_valid_0));
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT___GEN_25 
            = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__waiting_tbl_valid_1;
    }
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT___GEN_27 
        = (1U & ((~ (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__chosen_entry_by_allocator)) 
                 | (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__waiting_tbl_pending_0)));
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__valid_not_pending_0 
        = ((~ (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__waiting_tbl_pending_0)) 
           & (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__waiting_tbl_valid_0));
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT___GEN_28 
        = ((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__chosen_entry_by_allocator) 
           | (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__waiting_tbl_pending_1));
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__valid_not_pending_1 
        = ((~ (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__waiting_tbl_pending_1)) 
           & (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__waiting_tbl_valid_1));
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT___GEN_39 
        = ((~ (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__dis_controller_wg_rejected_valid_i)) 
           & (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__tbl_walk_idx));
    GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT___GEN_57 
        = ((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__tbl_walk_idx) 
           & (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__waiting_tbl_pending_0));
    GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT___GEN_58 
        = ((~ (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__tbl_walk_idx)) 
           & (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__waiting_tbl_pending_1));
    GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT___T_19 
        = (((0x1fU & (IData)((vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__ram_wg_waiting_allocation__DOT__rd_word_reg 
                              >> 0x1aU))) == (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__tbl_walk_wg_id_searched)) 
           & ((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__tbl_walk_idx)
               ? (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__waiting_tbl_pending_1)
               : (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__waiting_tbl_pending_0)));
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT___GEN_40 
        = ((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__dis_controller_wg_rejected_valid_i)
            ? 0x10U : (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__inflight_tbl_alloc_st));
    if (vlSelf->reset) {
        vlSelf->__Vdly__GPGPU_top__DOT__cta__DOT__cta_sche__DOT__dis_controller_i__DOT__alloc_st = 0U;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__dis_controller_i__DOT__alloc_waiting_cu_id = 0U;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__allocator_wg_id_out_i = 0U;
    } else {
        if ((0U == (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__dis_controller_i__DOT__alloc_st))) {
            if (((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__wg_waiting_alloc_valid) 
                 & ((~ (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__dis_controller_i__DOT__cu_groups_allocating_0)) 
                    | (~ (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__dis_controller_i__DOT__cu_groups_allocating_1))))) {
                vlSelf->__Vdly__GPGPU_top__DOT__cta__DOT__cta_sche__DOT__dis_controller_i__DOT__alloc_st = 2U;
            }
        } else if ((2U == (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__dis_controller_i__DOT__alloc_st))) {
            if (vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__size_ram_valid) {
                vlSelf->__Vdly__GPGPU_top__DOT__cta__DOT__cta_sche__DOT__dis_controller_i__DOT__alloc_st = 4U;
            }
        } else {
            vlSelf->__Vdly__GPGPU_top__DOT__cta__DOT__cta_sche__DOT__dis_controller_i__DOT__alloc_st 
                = ((4U == (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__dis_controller_i__DOT__alloc_st))
                    ? (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__dis_controller_i__DOT___GEN_6)
                    : (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__dis_controller_i__DOT___GEN_7));
        }
        if ((0U != (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__dis_controller_i__DOT__alloc_st))) {
            if ((2U == (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__dis_controller_i__DOT__alloc_st))) {
                if (vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__size_ram_valid) {
                    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__dis_controller_i__DOT__alloc_waiting_cu_id 
                        = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__cu_id_out;
                }
            }
        }
        if (vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__dis_controller_i__DOT__dis_controller_wg_rejected_valid_i) {
            vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__allocator_wg_id_out_i 
                = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__wg_id_out;
        } else if (vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__dis_controller_i__DOT__dis_controller_wg_alloc_valid_i) {
            vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__allocator_wg_id_out_i 
                = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__wg_id_out;
        }
    }
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT___GEN_37 
        = ((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__dis_controller_wg_rejected_valid_i)
            ? (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__allocator_wg_id_out_i)
            : (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__tbl_walk_wg_id_searched));
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__dis_controller_start_alloc_i 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__dis_controller_i__DOT__dis_controller_start_alloc_i));
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__size_ram_valid 
        = vlSelf->__Vdly__GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__size_ram_valid;
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__dis_controller_i__DOT__alloc_waiting 
        = vlSelf->__Vdly__GPGPU_top__DOT__cta__DOT__cta_sche__DOT__dis_controller_i__DOT__alloc_waiting;
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__waiting_tbl_valid_rotated_0 
        = ((0U >= (3U & ((IData)(2U) - (1U & ((IData)(1U) 
                                              + (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__last_chosen_entry_rr))))))
            ? ((1U & (- ((IData)(2U) - (1U & ((IData)(1U) 
                                              + (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__last_chosen_entry_rr))))))
                ? (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__valid_not_pending_1)
                : (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__valid_not_pending_0))
            : ((1U & ((IData)(1U) + (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__last_chosen_entry_rr)))
                ? (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__valid_not_pending_1)
                : (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__valid_not_pending_0)));
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__waiting_tbl_valid_rotated_1 
        = ((1U >= (3U & ((IData)(2U) - (1U & ((IData)(1U) 
                                              + (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__last_chosen_entry_rr))))))
            ? ((1U & ((IData)(1U) - (- (IData)(((IData)(1U) 
                                                + (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__last_chosen_entry_rr))))))
                ? (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__valid_not_pending_1)
                : (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__valid_not_pending_0))
            : ((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__last_chosen_entry_rr)
                ? (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__valid_not_pending_1)
                : (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__valid_not_pending_0)));
    if (vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__tbl_walk_rd_valid) {
        if (GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT___T_19) {
            vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT___GEN_52 = 8U;
            vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT___GEN_53 
                = (1U & (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__tbl_walk_idx));
        } else {
            vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT___GEN_52 
                = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__inflight_tbl_alloc_st;
            vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT___GEN_53 
                = (1U & ((IData)(1U) + (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__tbl_walk_idx)));
        }
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT___GEN_54 
            = (1U & (~ (IData)(GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT___T_19)));
    } else {
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT___GEN_52 
            = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__inflight_tbl_alloc_st;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT___GEN_53 
            = (1U & (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__tbl_walk_idx));
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT___GEN_54 = 0U;
    }
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__wg_id_out 
        = vlSelf->__Vdly__GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__wg_id_out;
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT___GEN_136 
        = ((8U != (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__inflight_tbl_alloc_st)) 
           & ((0x10U == (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__inflight_tbl_alloc_st))
               ? (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT___GEN_54)
               : ((0x20U != (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__inflight_tbl_alloc_st)) 
                  & ((0x40U == (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__inflight_tbl_alloc_st)) 
                     & (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__chosen_entry_is_valid)))));
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__dis_controller_i__DOT__dis_controller_wg_rejected_valid_i 
        = ((~ (IData)(vlSelf->reset)) & ((~ ((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__gpu_interface_dealloc_available_i) 
                                             & (~ (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__dis_controller_i__DOT___GEN_20)))) 
                                         & ((~ (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__size_ram_cu_id_found)) 
                                            & (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__dis_controller_i__DOT____VdfgTmp_h2bb4497e__0))));
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT___GEN_26 
        = ((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__dis_controller_start_alloc_i)
            ? (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__chosen_entry_by_allocator)
            : (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__last_chosen_entry_rr));
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__dis_controller_i__DOT__dis_controller_start_alloc_i 
        = ((~ (IData)(vlSelf->reset)) & ((0U == (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__dis_controller_i__DOT__alloc_st)) 
                                         & ((~ ((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__dis_controller_i__DOT__cu_groups_allocating_0) 
                                                & (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__dis_controller_i__DOT__cu_groups_allocating_1))) 
                                            & (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__wg_waiting_alloc_valid))));
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__dis_controller_i__DOT__alloc_st 
        = vlSelf->__Vdly__GPGPU_top__DOT__cta__DOT__cta_sche__DOT__dis_controller_i__DOT__alloc_st;
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__wg_waiting_alloc_valid 
        = vlSelf->__Vdly__GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__wg_waiting_alloc_valid;
    if ((8U == (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__inflight_tbl_alloc_st))) {
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT___GEN_129 
            = (0x1fffU & ((vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__ram_wg_ready_start__DOT__rd_word_reg[0U] 
                           << 0x13U) | (vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__ram_wg_ready_start__DOT__rd_word_reg[0U] 
                                        >> 0xdU)));
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT___GEN_130 
            = (0x1fffU & vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__ram_wg_ready_start__DOT__rd_word_reg[0U]);
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT___GEN_131 
            = (0x3ffU & ((vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__ram_wg_ready_start__DOT__rd_word_reg[1U] 
                          << 1U) | (vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__ram_wg_ready_start__DOT__rd_word_reg[0U] 
                                    >> 0x1fU)));
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT___GEN_132 
            = ((vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__ram_wg_ready_start__DOT__rd_word_reg[3U] 
                << 0x17U) | (vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__ram_wg_ready_start__DOT__rd_word_reg[2U] 
                             >> 9U));
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT___GEN_137 
            = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__chosen_entry_by_allocator;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT___GEN_139 
            = (0x1fU & (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__inflight_wg_buffer_alloc_wg_id_i));
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT___GEN_140 
            = (7U & (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__inflight_wg_buffer_alloc_num_wf_i));
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT___GEN_141 
            = (0x1fffU & (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__inflight_wg_buffer_alloc_vgpr_size_i));
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT___GEN_142 
            = (0x1fffU & (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__inflight_wg_buffer_alloc_sgpr_size_i));
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT___GEN_143 
            = (0x1fffU & (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__inflight_wg_buffer_alloc_lds_size_i));
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT___GEN_124 
            = ((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__tbl_walk_idx) 
               & (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT___GEN_24));
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT___GEN_125 
            = ((~ (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__tbl_walk_idx)) 
               & (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT___GEN_25));
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT___GEN_126 
            = GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT___GEN_57;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT___GEN_127 
            = GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT___GEN_58;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT___GEN_134 = 0x40U;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT___GEN_135 
            = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__tbl_walk_idx;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT___GEN_138 
            = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__wg_waiting_alloc_valid;
    } else {
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT___GEN_129 
            = (0x1fffU & (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__inflight_wg_buffer_gpu_vgpr_size_per_wf_i));
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT___GEN_130 
            = (0x1fffU & (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__inflight_wg_buffer_gpu_sgpr_size_per_wf_i));
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT___GEN_131 
            = (0x3ffU & (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__inflight_wg_buffer_gpu_wf_size_i));
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT___GEN_132 
            = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__inflight_wg_buffer_start_pc_i;
        if ((0x10U == (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__inflight_tbl_alloc_st))) {
            vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT___GEN_137 
                = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__chosen_entry_by_allocator;
            vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT___GEN_139 
                = (0x1fU & (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__inflight_wg_buffer_alloc_wg_id_i));
            vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT___GEN_140 
                = (7U & (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__inflight_wg_buffer_alloc_num_wf_i));
            vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT___GEN_141 
                = (0x1fffU & (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__inflight_wg_buffer_alloc_vgpr_size_i));
            vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT___GEN_142 
                = (0x1fffU & (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__inflight_wg_buffer_alloc_sgpr_size_i));
            vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT___GEN_143 
                = (0x1fffU & (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__inflight_wg_buffer_alloc_lds_size_i));
            vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT___GEN_126 
                = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__waiting_tbl_pending_0;
            vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT___GEN_127 
                = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__waiting_tbl_pending_1;
            vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT___GEN_134 
                = ((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__tbl_walk_rd_valid)
                    ? ((IData)(GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT___T_19)
                        ? 0x20U : (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__inflight_tbl_alloc_st))
                    : (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__inflight_tbl_alloc_st));
            vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT___GEN_135 
                = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT___GEN_53;
            vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT___GEN_138 
                = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__wg_waiting_alloc_valid;
        } else if ((0x20U == (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__inflight_tbl_alloc_st))) {
            vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT___GEN_137 
                = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__chosen_entry_by_allocator;
            vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT___GEN_139 
                = (0x1fU & (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__inflight_wg_buffer_alloc_wg_id_i));
            vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT___GEN_140 
                = (7U & (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__inflight_wg_buffer_alloc_num_wf_i));
            vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT___GEN_141 
                = (0x1fffU & (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__inflight_wg_buffer_alloc_vgpr_size_i));
            vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT___GEN_142 
                = (0x1fffU & (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__inflight_wg_buffer_alloc_sgpr_size_i));
            vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT___GEN_143 
                = (0x1fffU & (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__inflight_wg_buffer_alloc_lds_size_i));
            vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT___GEN_126 
                = GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT___GEN_57;
            vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT___GEN_127 
                = GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT___GEN_58;
            vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT___GEN_134 = 0x40U;
            vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT___GEN_135 
                = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__tbl_walk_idx;
            vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT___GEN_138 
                = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__wg_waiting_alloc_valid;
        } else {
            if ((0x40U == (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__inflight_tbl_alloc_st))) {
                if (vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__chosen_entry_is_valid) {
                    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT___GEN_137 
                        = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__chosen_entry;
                    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT___GEN_134 = 0x80U;
                    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT___GEN_135 
                        = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__chosen_entry;
                } else {
                    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT___GEN_137 
                        = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__chosen_entry_by_allocator;
                    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT___GEN_134 = 1U;
                    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT___GEN_135 
                        = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__tbl_walk_idx;
                }
                vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT___GEN_139 
                    = (0x1fU & (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__inflight_wg_buffer_alloc_wg_id_i));
                vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT___GEN_140 
                    = (7U & (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__inflight_wg_buffer_alloc_num_wf_i));
                vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT___GEN_141 
                    = (0x1fffU & (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__inflight_wg_buffer_alloc_vgpr_size_i));
                vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT___GEN_142 
                    = (0x1fffU & (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__inflight_wg_buffer_alloc_sgpr_size_i));
                vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT___GEN_143 
                    = (0x1fffU & (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__inflight_wg_buffer_alloc_lds_size_i));
                vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT___GEN_138 
                    = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__wg_waiting_alloc_valid;
            } else {
                vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT___GEN_137 
                    = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__chosen_entry_by_allocator;
                if ((0x80U == (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__inflight_tbl_alloc_st))) {
                    if (vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__tbl_walk_rd_valid) {
                        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT___GEN_139 
                            = (0x1fU & (IData)((vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__ram_wg_waiting_allocation__DOT__rd_word_reg 
                                                >> 0x1aU)));
                        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT___GEN_140 
                            = (7U & (IData)((vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__ram_wg_waiting_allocation__DOT__rd_word_reg 
                                             >> 0x37U)));
                        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT___GEN_141 
                            = (0x1fffU & (IData)((vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__ram_wg_waiting_allocation__DOT__rd_word_reg 
                                                  >> 0xdU)));
                        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT___GEN_142 
                            = (0x1fffU & (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__ram_wg_waiting_allocation__DOT__rd_word_reg));
                        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT___GEN_143 
                            = (0x1fffU & (IData)((vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__ram_wg_waiting_allocation__DOT__rd_word_reg 
                                                  >> 0x2aU)));
                        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT___GEN_134 = 1U;
                    } else {
                        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT___GEN_139 
                            = (0x1fU & (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__inflight_wg_buffer_alloc_wg_id_i));
                        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT___GEN_140 
                            = (7U & (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__inflight_wg_buffer_alloc_num_wf_i));
                        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT___GEN_141 
                            = (0x1fffU & (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__inflight_wg_buffer_alloc_vgpr_size_i));
                        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT___GEN_142 
                            = (0x1fffU & (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__inflight_wg_buffer_alloc_sgpr_size_i));
                        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT___GEN_143 
                            = (0x1fffU & (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__inflight_wg_buffer_alloc_lds_size_i));
                        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT___GEN_134 
                            = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__inflight_tbl_alloc_st;
                    }
                    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT___GEN_138 
                        = ((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__tbl_walk_rd_valid) 
                           | (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__wg_waiting_alloc_valid));
                } else {
                    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT___GEN_139 
                        = (0x1fU & (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__inflight_wg_buffer_alloc_wg_id_i));
                    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT___GEN_140 
                        = (7U & (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__inflight_wg_buffer_alloc_num_wf_i));
                    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT___GEN_141 
                        = (0x1fffU & (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__inflight_wg_buffer_alloc_vgpr_size_i));
                    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT___GEN_142 
                        = (0x1fffU & (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__inflight_wg_buffer_alloc_sgpr_size_i));
                    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT___GEN_143 
                        = (0x1fffU & (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__inflight_wg_buffer_alloc_lds_size_i));
                    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT___GEN_134 
                        = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__inflight_tbl_alloc_st;
                    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT___GEN_138 
                        = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__wg_waiting_alloc_valid;
                }
                vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT___GEN_135 
                    = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__tbl_walk_idx;
            }
            vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT___GEN_126 
                = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__waiting_tbl_pending_0;
            vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT___GEN_127 
                = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__waiting_tbl_pending_1;
        }
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT___GEN_124 
            = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT___GEN_24;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT___GEN_125 
            = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT___GEN_25;
    }
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT___GEN_2 
        = ((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__dis_controller_i__DOT__dis_controller_wg_rejected_valid_i) 
           | (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__dis_controller_wg_rejected_valid_i));
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__dis_controller_i__DOT___GEN_7 
        = ((8U == (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__dis_controller_i__DOT__alloc_st))
            ? 0U : (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__dis_controller_i__DOT__alloc_st));
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__dis_controller_i__DOT___GEN_6 
        = ((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__dis_controller_i__DOT__alloc_waiting)
            ? (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__dis_controller_i__DOT__alloc_st)
            : 8U);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__dis_controller_i__DOT___GEN_16 
        = ((0U == (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__dis_controller_i__DOT__alloc_st))
            ? (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__dis_controller_i__DOT__alloc_waiting)
            : ((2U == (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__dis_controller_i__DOT__alloc_st))
                ? ((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__size_ram_valid) 
                   | (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__dis_controller_i__DOT__alloc_waiting))
                : (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__dis_controller_i__DOT__alloc_waiting)));
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT___GEN_35 
        = ((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__dis_controller_start_alloc_i) 
           | ((~ (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__wg_waiting_alloc_valid)) 
              & ((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__valid_not_pending_0) 
                 | (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__valid_not_pending_1))));
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__dis_controller_i__DOT__cu_groups_allocating_1 
        = ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__grt_wg_alloc_done)
                                          ? ((~ ((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__cu_id_array_0) 
                                                 >> 1U)) 
                                             & (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__dis_controller_i__DOT___GEN_43))
                                          : ((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__grt_wg_dealloc_done)
                                              ? ((~ 
                                                  ((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__cu_id_array_0) 
                                                   >> 1U)) 
                                                 & (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__dis_controller_i__DOT___GEN_43))
                                              : (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__dis_controller_i__DOT___GEN_43))));
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__dis_controller_i__DOT__cu_groups_allocating_0 
        = ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__grt_wg_alloc_done)
                                          ? (((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__cu_id_array_0) 
                                              >> 1U) 
                                             & (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__dis_controller_i__DOT___GEN_42))
                                          : ((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__grt_wg_dealloc_done)
                                              ? (((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__cu_id_array_0) 
                                                  >> 1U) 
                                                 & (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__dis_controller_i__DOT___GEN_42))
                                              : (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__dis_controller_i__DOT___GEN_42))));
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT___GEN_36 
        = ((~ (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__dis_controller_wg_rejected_valid_i)) 
           & (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT___GEN_2));
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__dis_controller_i__DOT___GEN_24 
        = ((2U & (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__dis_controller_i__DOT__alloc_waiting_cu_id))
            ? (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__dis_controller_i__DOT__cu_groups_allocating_1)
            : (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__dis_controller_i__DOT__cu_groups_allocating_0));
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__grt_wg_alloc_done 
        = ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__serviced_id_valid) 
                                         & (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__is_alloc_array_0)));
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__grt_wg_dealloc_done 
        = ((~ (IData)(vlSelf->reset)) & ((~ (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__is_alloc_array_0)) 
                                         & (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__serviced_id_valid)));
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__serviced_id_valid 
        = ((~ (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__serviced_array_0)) 
           & (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__done_array_0));
    if (vlSelf->reset) {
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__cu_id_array_0 = 0U;
    } else if (((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__dis_controller_i__DOT__dis_controller_wg_dealloc_valid_i) 
                & (~ ((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__gpu_interface_cu_id_i) 
                      >> 1U)))) {
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__cu_id_array_0 
            = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__gpu_interface_cu_id_i;
    } else if (((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__dis_controller_i__DOT__dis_controller_wg_alloc_valid_i) 
                & (~ ((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__cu_id_out) 
                      >> 1U)))) {
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__cu_id_array_0 
            = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__cu_id_out;
    }
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__cu_id_out 
        = vlSelf->__Vdly__GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__cu_id_out;
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT___GEN_20 
        = ((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__serviced_id_valid) 
           | ((~ (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__command_serviced_array_cancelled_0)) 
              & (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__serviced_array_0)));
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__is_alloc_array_0 
        = ((~ (IData)(vlSelf->reset)) & ((~ ((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__dis_controller_i__DOT__dis_controller_wg_dealloc_valid_i) 
                                             & (~ ((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__gpu_interface_cu_id_i) 
                                                   >> 1U)))) 
                                         & (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT___GEN_7)));
    if (vlSelf->reset) {
        vlSelf->__Vdly__GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__dealloc_st = 1U;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__gpu_interface_cu_id_i = 0U;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__gpu_interface_dealloc_wg_id_i = 0U;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__handler_wg_done_wg_id_1 = 0U;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__handler_wg_done_wg_id_0 = 0U;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__chosen_done_cu_id = 0U;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__pending_wg_bitmap_0 = 0U;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__pending_wg_bitmap_1 = 0U;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__pending_wg_bitmap_2 = 0U;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__pending_wg_bitmap_3 = 0U;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__curr_dealloc_wg_slot = 0U;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__wg_done_wg_id_i = 0U;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__curr_wf_count = 0U;
        vlSelf->__Vdly__GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__dealloc_st = 1U;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__pending_wg_bitmap_0 = 0U;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__pending_wg_bitmap_1 = 0U;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__pending_wg_bitmap_2 = 0U;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__pending_wg_bitmap_3 = 0U;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__curr_dealloc_wg_slot = 0U;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__wg_done_wg_id_i = 0U;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__curr_wf_count = 0U;
        vlSelf->__Vdly__GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__dealloc_st = 1U;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__pending_wf_count_3 = 0U;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__pending_wf_count_2 = 0U;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__pending_wf_count_1 = 0U;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__pending_wf_count_0 = 0U;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__pending_wf_count_3 = 0U;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__pending_wf_count_2 = 0U;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__pending_wf_count_1 = 0U;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__pending_wf_count_0 = 0U;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu2dispatch_wf_tag_done_i_0 = 0U;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu2dispatch_wf_tag_done_i_1 = 0U;
    } else {
        if ((1U == (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__dealloc_st))) {
            if (vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__chosen_done_cu_valid) {
                vlSelf->__Vdly__GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__dealloc_st = 2U;
                vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__gpu_interface_cu_id_i 
                    = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__chosen_done_cu_id;
                vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__gpu_interface_dealloc_wg_id_i 
                    = ((1U & (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__chosen_done_cu_id))
                        ? (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__handler_wg_done_wg_id_1)
                        : (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__handler_wg_done_wg_id_0));
            }
        } else if ((2U == (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__dealloc_st))) {
            if (vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__dis_controller_wg_dealloc_valid_i) {
                vlSelf->__Vdly__GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__dealloc_st = 1U;
            }
        }
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__handler_wg_done_wg_id_1 
            = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__wg_done_wg_id_i;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__handler_wg_done_wg_id_0 
            = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__wg_done_wg_id_i;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__chosen_done_cu_id 
            = ((~ (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__handler_wg_done_valid_0)) 
               & (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__handler_wg_done_valid_1));
        if ((1U == (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__dealloc_st))) {
            if (vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__next_served_dealloc_valid) {
                vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__curr_dealloc_wg_slot 
                    = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__next_served_dealloc;
                vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__curr_wf_count 
                    = ((3U == (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__next_served_dealloc))
                        ? (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__pending_wf_count_3)
                        : ((2U == (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__next_served_dealloc))
                            ? (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__pending_wf_count_2)
                            : ((1U == (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__next_served_dealloc))
                                ? (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__pending_wf_count_1)
                                : (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__pending_wf_count_0))));
            }
        }
        if (vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu2dispatch_wf_done_i_0) {
            vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__pending_wg_bitmap_0 
                = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT___GEN_112;
            vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__pending_wg_bitmap_1 
                = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT___GEN_113;
            vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__pending_wg_bitmap_2 
                = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT___GEN_114;
            vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__pending_wg_bitmap_3 
                = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT___GEN_115;
            vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__pending_wf_count_3 
                = (7U & ((3U == (3U & ((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu2dispatch_wf_tag_done_i_0) 
                                       >> 3U))) ? ((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT___GEN_119) 
                                                   - (IData)(1U))
                          : (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT___GEN_48)));
            vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__pending_wf_count_2 
                = (7U & ((2U == (3U & ((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu2dispatch_wf_tag_done_i_0) 
                                       >> 3U))) ? ((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT___GEN_119) 
                                                   - (IData)(1U))
                          : (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT___GEN_47)));
            vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__pending_wf_count_1 
                = (7U & ((1U == (3U & ((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu2dispatch_wf_tag_done_i_0) 
                                       >> 3U))) ? ((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT___GEN_119) 
                                                   - (IData)(1U))
                          : (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT___GEN_46)));
            vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__pending_wf_count_0 
                = (7U & ((0U == (3U & ((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu2dispatch_wf_tag_done_i_0) 
                                       >> 3U))) ? ((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT___GEN_119) 
                                                   - (IData)(1U))
                          : (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT___GEN_45)));
        } else {
            if ((1U == (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__dealloc_st))) {
                if (vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__next_served_dealloc_valid) {
                    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__pending_wg_bitmap_0 
                        = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT___GEN_57;
                    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__pending_wg_bitmap_1 
                        = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT___GEN_58;
                    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__pending_wg_bitmap_2 
                        = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT___GEN_59;
                    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__pending_wg_bitmap_3 
                        = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT___GEN_60;
                }
            }
            vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__pending_wf_count_3 
                = (7U & (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT___GEN_48));
            vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__pending_wf_count_2 
                = (7U & (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT___GEN_47));
            vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__pending_wf_count_1 
                = (7U & (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT___GEN_46));
            vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__pending_wf_count_0 
                = (7U & (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT___GEN_45));
        }
        if ((1U == (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__dealloc_st))) {
            if (vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__next_served_dealloc_valid) {
                vlSelf->__Vdly__GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__dealloc_st = 2U;
            }
        } else if ((2U == (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__dealloc_st))) {
            if (vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__info_ram_rd_valid) {
                vlSelf->__Vdly__GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__dealloc_st 
                    = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT___GEN_79;
            }
        } else if ((4U == (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__dealloc_st))) {
            vlSelf->__Vdly__GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__dealloc_st 
                = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT___GEN_87;
        }
        if ((1U != (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__dealloc_st))) {
            if ((2U == (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__dealloc_st))) {
                if (vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__info_ram_rd_valid) {
                    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__wg_done_wg_id_i 
                        = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT___GEN_74;
                }
            }
        }
        if ((1U == (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__dealloc_st))) {
            if (vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__next_served_dealloc_valid) {
                vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__curr_dealloc_wg_slot 
                    = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__next_served_dealloc;
                vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__curr_wf_count 
                    = ((3U == (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__next_served_dealloc))
                        ? (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__pending_wf_count_3)
                        : ((2U == (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__next_served_dealloc))
                            ? (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__pending_wf_count_2)
                            : ((1U == (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__next_served_dealloc))
                                ? (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__pending_wf_count_1)
                                : (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__pending_wf_count_0))));
            }
        }
        if (vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu2dispatch_wf_done_i_1) {
            vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__pending_wg_bitmap_0 
                = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT___GEN_112;
            vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__pending_wg_bitmap_1 
                = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT___GEN_113;
            vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__pending_wg_bitmap_2 
                = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT___GEN_114;
            vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__pending_wg_bitmap_3 
                = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT___GEN_115;
            vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__pending_wf_count_3 
                = (7U & ((3U == (3U & ((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu2dispatch_wf_tag_done_i_1) 
                                       >> 3U))) ? ((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT___GEN_119) 
                                                   - (IData)(1U))
                          : (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT___GEN_48)));
            vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__pending_wf_count_2 
                = (7U & ((2U == (3U & ((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu2dispatch_wf_tag_done_i_1) 
                                       >> 3U))) ? ((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT___GEN_119) 
                                                   - (IData)(1U))
                          : (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT___GEN_47)));
            vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__pending_wf_count_1 
                = (7U & ((1U == (3U & ((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu2dispatch_wf_tag_done_i_1) 
                                       >> 3U))) ? ((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT___GEN_119) 
                                                   - (IData)(1U))
                          : (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT___GEN_46)));
            vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__pending_wf_count_0 
                = (7U & ((0U == (3U & ((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu2dispatch_wf_tag_done_i_1) 
                                       >> 3U))) ? ((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT___GEN_119) 
                                                   - (IData)(1U))
                          : (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT___GEN_45)));
        } else {
            if ((1U == (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__dealloc_st))) {
                if (vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__next_served_dealloc_valid) {
                    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__pending_wg_bitmap_0 
                        = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT___GEN_57;
                    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__pending_wg_bitmap_1 
                        = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT___GEN_58;
                    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__pending_wg_bitmap_2 
                        = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT___GEN_59;
                    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__pending_wg_bitmap_3 
                        = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT___GEN_60;
                }
            }
            vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__pending_wf_count_3 
                = (7U & (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT___GEN_48));
            vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__pending_wf_count_2 
                = (7U & (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT___GEN_47));
            vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__pending_wf_count_1 
                = (7U & (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT___GEN_46));
            vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__pending_wf_count_0 
                = (7U & (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT___GEN_45));
        }
        if ((1U == (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__dealloc_st))) {
            if (vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__next_served_dealloc_valid) {
                vlSelf->__Vdly__GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__dealloc_st = 2U;
            }
        } else if ((2U == (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__dealloc_st))) {
            if (vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__info_ram_rd_valid) {
                vlSelf->__Vdly__GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__dealloc_st 
                    = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT___GEN_79;
            }
        } else if ((4U == (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__dealloc_st))) {
            vlSelf->__Vdly__GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__dealloc_st 
                = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT___GEN_87;
        }
        if ((1U != (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__dealloc_st))) {
            if ((2U == (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__dealloc_st))) {
                if (vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__info_ram_rd_valid) {
                    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__wg_done_wg_id_i 
                        = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT___GEN_74;
                }
            }
        }
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu2dispatch_wf_tag_done_i_0 
            = ((3U == vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__pipe__DOT__exe_data__DOT__ram_ctrl_wid
                [0U]) ? (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__cta2warp__DOT__data_3)
                : ((2U == vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__pipe__DOT__exe_data__DOT__ram_ctrl_wid
                    [0U]) ? (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__cta2warp__DOT__data_2)
                    : ((1U == vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__pipe__DOT__exe_data__DOT__ram_ctrl_wid
                        [0U]) ? (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__cta2warp__DOT__data_1)
                        : (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__cta2warp__DOT__data_0))));
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu2dispatch_wf_tag_done_i_1 
            = ((3U == vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__exe_data__DOT__ram_ctrl_wid
                [0U]) ? (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__cta2warp__DOT__data_3)
                : ((2U == vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__exe_data__DOT__ram_ctrl_wid
                    [0U]) ? (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__cta2warp__DOT__data_2)
                    : ((1U == vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__exe_data__DOT__ram_ctrl_wid
                        [0U]) ? (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__cta2warp__DOT__data_1)
                        : (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__cta2warp__DOT__data_0))));
    }
    GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT___GEN_50 
        = ((1U & (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__cu_id_out))
            ? (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__cu_initialized_1)
            : (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__cu_initialized_0));
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__dis_controller_i__DOT__dis_controller_wg_alloc_valid_i 
        = ((~ (IData)(vlSelf->reset)) & ((~ ((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__gpu_interface_dealloc_available_i) 
                                             & (~ (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__dis_controller_i__DOT___GEN_20)))) 
                                         & ((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__dis_controller_i__DOT____VdfgTmp_h2bb4497e__0) 
                                            & ((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__size_ram_cu_id_found) 
                                               & (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__dis_controller_i__DOT___T_15)))));
    if (GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT___GEN_50) {
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i_io_allocator_vgpr_start_out 
            = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__vgpr_start_out;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i_io_allocator_sgpr_start_out 
            = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__sgpr_start_out;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i_io_allocator_lds_start_out 
            = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__lds_start_out;
    } else {
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i_io_allocator_vgpr_start_out = 0U;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i_io_allocator_sgpr_start_out = 0U;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i_io_allocator_lds_start_out = 0U;
    }
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__dis_controller_i__DOT____VdfgTmp_h2bb4497e__0 
        = ((~ (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__dis_controller_i__DOT___GEN_24)) 
           & (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__dis_controller_i__DOT__alloc_waiting));
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__size_ram_cu_id_found 
        = vlSelf->__Vdly__GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__size_ram_cu_id_found;
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__dis_controller_i__DOT___T_15 
        = ((~ (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__wait_tbl_busy)) 
           & (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__gpu_interface_alloc_available_i));
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT___GEN_0 
        = ((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__dis_controller_i__DOT__dis_controller_wg_alloc_valid_i) 
           | (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__dis_controller_wg_alloc_valid_i));
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen_io_generate 
        = ((~ ((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__cu_id_out) 
               >> 1U)) & (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__dis_controller_i__DOT__dis_controller_wg_alloc_valid_i));
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__gpu_interface_dealloc_available_i 
        = ((~ (IData)(vlSelf->reset)) & ((1U == (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__dealloc_st))
                                          ? (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__chosen_done_cu_valid)
                                          : (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT___GEN_140)));
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT___GEN_7 
        = ((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen_io_generate) 
           | (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__is_alloc_array_0));
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT___GEN_6 
        = ((~ (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen_io_generate)) 
           & (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__done_cancelled_array_0));
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__dealloc_st 
        = vlSelf->__Vdly__GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__dealloc_st;
    if (vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__dis_controller_i__DOT__dis_controller_wg_alloc_valid_i) {
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen_io_wg_id 
            = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__wg_id_out;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen_io_cu_id 
            = (1U & (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__cu_id_out));
    } else {
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen_io_wg_id 
            = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__gpu_interface_dealloc_wg_id_i;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen_io_cu_id 
            = (1U & (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__gpu_interface_cu_id_i));
    }
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__dis_controller_i__DOT___GEN_20 
        = ((2U & (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__gpu_interface_cu_id_i))
            ? (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__dis_controller_i__DOT__cu_groups_allocating_1)
            : (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__dis_controller_i__DOT__cu_groups_allocating_0));
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__dis_controller_wg_dealloc_valid_i 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__dis_controller_i__DOT__dis_controller_wg_dealloc_valid_i));
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__chosen_done_cu_valid 
        = ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__handler_wg_done_valid_0) 
                                         | (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__handler_wg_done_valid_1)));
    if (vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen_io_cu_id) {
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen__DOT___GEN_13 
            = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen__DOT__wg_slot_id_bitmap_1_0;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen__DOT___GEN_9 
            = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen__DOT__wg_slot_id_bitmap_1_1;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen__DOT___GEN_5 
            = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen__DOT__wg_slot_id_bitmap_1_2;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen__DOT___GEN_1 
            = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen__DOT__wg_slot_id_bitmap_1_3;
    } else {
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen__DOT___GEN_13 
            = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen__DOT__wg_slot_id_bitmap_0_0;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen__DOT___GEN_9 
            = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen__DOT__wg_slot_id_bitmap_0_1;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen__DOT___GEN_5 
            = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen__DOT__wg_slot_id_bitmap_0_2;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen__DOT___GEN_1 
            = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen__DOT__wg_slot_id_bitmap_0_3;
    }
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen__DOT__first_slot_id 
        = ((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen__DOT___GEN_13)
            ? ((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen__DOT___GEN_9)
                ? ((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen__DOT___GEN_5)
                    ? ((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen__DOT___GEN_1)
                        ? 0U : 3U) : 2U) : 1U) : 0U);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen__DOT___T_4 
        = ((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen_io_generate) 
           & ((~ (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen__DOT___GEN_13)) 
              | (~ ((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen__DOT___GEN_9) 
                    & ((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen__DOT___GEN_5) 
                       & (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen__DOT___GEN_1))))));
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT___GEN_140 
        = ((~ (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__dis_controller_wg_dealloc_valid_i)) 
           & (2U == (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__dealloc_st)));
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__dis_controller_i__DOT__dis_controller_wg_dealloc_valid_i 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__dis_controller_i__DOT___T_11));
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__handler_wg_done_valid_0 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__wg_done_valid_i));
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__handler_wg_done_valid_1 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__wg_done_valid_i));
    if (vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen__DOT___T_4) {
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen__DOT___GEN_24 
            = (((~ (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen_io_cu_id)) 
                & (0U == (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen__DOT__first_slot_id))) 
               | (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen__DOT__wg_slot_id_bitmap_0_0));
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen__DOT___GEN_25 
            = (((~ (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen_io_cu_id)) 
                & (1U == (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen__DOT__first_slot_id))) 
               | (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen__DOT__wg_slot_id_bitmap_0_1));
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen__DOT___GEN_26 
            = (((~ (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen_io_cu_id)) 
                & (2U == (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen__DOT__first_slot_id))) 
               | (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen__DOT__wg_slot_id_bitmap_0_2));
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen__DOT___GEN_27 
            = (((~ (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen_io_cu_id)) 
                & (3U == (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen__DOT__first_slot_id))) 
               | (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen__DOT__wg_slot_id_bitmap_0_3));
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen__DOT___GEN_28 
            = (((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen_io_cu_id) 
                & (0U == (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen__DOT__first_slot_id))) 
               | (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen__DOT__wg_slot_id_bitmap_1_0));
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen__DOT___GEN_29 
            = (((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen_io_cu_id) 
                & (1U == (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen__DOT__first_slot_id))) 
               | (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen__DOT__wg_slot_id_bitmap_1_1));
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen__DOT___GEN_30 
            = (((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen_io_cu_id) 
                & (2U == (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen__DOT__first_slot_id))) 
               | (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen__DOT__wg_slot_id_bitmap_1_2));
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen__DOT___GEN_31 
            = (((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen_io_cu_id) 
                & (3U == (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen__DOT__first_slot_id))) 
               | (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen__DOT__wg_slot_id_bitmap_1_3));
    } else {
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen__DOT___GEN_24 
            = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen__DOT__wg_slot_id_bitmap_0_0;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen__DOT___GEN_25 
            = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen__DOT__wg_slot_id_bitmap_0_1;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen__DOT___GEN_26 
            = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen__DOT__wg_slot_id_bitmap_0_2;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen__DOT___GEN_27 
            = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen__DOT__wg_slot_id_bitmap_0_3;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen__DOT___GEN_28 
            = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen__DOT__wg_slot_id_bitmap_1_0;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen__DOT___GEN_29 
            = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen__DOT__wg_slot_id_bitmap_1_1;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen__DOT___GEN_30 
            = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen__DOT__wg_slot_id_bitmap_1_2;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen__DOT___GEN_31 
            = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen__DOT__wg_slot_id_bitmap_1_3;
    }
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__dis_controller_i__DOT___T_11 
        = ((~ (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__dis_controller_i__DOT___GEN_20)) 
           & (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__gpu_interface_dealloc_available_i));
    if (vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__dis_controller_i__DOT___T_11) {
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__dis_controller_i__DOT___GEN_42 
            = (1U & ((~ ((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__gpu_interface_cu_id_i) 
                         >> 1U)) | (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__dis_controller_i__DOT__cu_groups_allocating_0)));
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__dis_controller_i__DOT___GEN_43 
            = (1U & (((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__gpu_interface_cu_id_i) 
                      >> 1U) | (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__dis_controller_i__DOT__cu_groups_allocating_1)));
    } else if (vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__dis_controller_i__DOT____VdfgTmp_h2bb4497e__0) {
        if (vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__size_ram_cu_id_found) {
            if (vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__dis_controller_i__DOT___T_15) {
                vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__dis_controller_i__DOT___GEN_42 
                    = (1U & ((~ ((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__dis_controller_i__DOT__alloc_waiting_cu_id) 
                                 >> 1U)) | (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__dis_controller_i__DOT__cu_groups_allocating_0)));
                vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__dis_controller_i__DOT___GEN_43 
                    = (1U & (((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__dis_controller_i__DOT__alloc_waiting_cu_id) 
                              >> 1U) | (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__dis_controller_i__DOT__cu_groups_allocating_1)));
            } else {
                vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__dis_controller_i__DOT___GEN_42 
                    = (1U & (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__dis_controller_i__DOT__cu_groups_allocating_0));
                vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__dis_controller_i__DOT___GEN_43 
                    = (1U & (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__dis_controller_i__DOT__cu_groups_allocating_1));
            }
        } else {
            vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__dis_controller_i__DOT___GEN_42 
                = (1U & (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__dis_controller_i__DOT__cu_groups_allocating_0));
            vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__dis_controller_i__DOT___GEN_43 
                = (1U & (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__dis_controller_i__DOT__cu_groups_allocating_1));
        }
    } else {
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__dis_controller_i__DOT___GEN_42 
            = (1U & (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__dis_controller_i__DOT__cu_groups_allocating_0));
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__dis_controller_i__DOT___GEN_43 
            = (1U & (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__dis_controller_i__DOT__cu_groups_allocating_1));
    }
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen_io_find_and_cancel 
        = ((~ ((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__gpu_interface_cu_id_i) 
               >> 1U)) & (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__dis_controller_i__DOT__dis_controller_wg_dealloc_valid_i));
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__used_slot_bitmap_0 
        = ((~ (IData)(vlSelf->reset)) & ((1U == (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__dealloc_st))
                                          ? (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT___GEN_41)
                                          : ((2U == (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__dealloc_st))
                                              ? ((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__info_ram_rd_valid)
                                                  ? (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT___GEN_75)
                                                  : (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT___GEN_41))
                                              : (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT___GEN_41))));
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__used_slot_bitmap_1 
        = ((~ (IData)(vlSelf->reset)) & ((1U == (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__dealloc_st))
                                          ? (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT___GEN_42)
                                          : ((2U == (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__dealloc_st))
                                              ? ((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__info_ram_rd_valid)
                                                  ? (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT___GEN_76)
                                                  : (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT___GEN_42))
                                              : (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT___GEN_42))));
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__used_slot_bitmap_2 
        = ((~ (IData)(vlSelf->reset)) & ((1U == (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__dealloc_st))
                                          ? (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT___GEN_43)
                                          : ((2U == (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__dealloc_st))
                                              ? ((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__info_ram_rd_valid)
                                                  ? (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT___GEN_77)
                                                  : (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT___GEN_43))
                                              : (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT___GEN_43))));
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__used_slot_bitmap_3 
        = ((~ (IData)(vlSelf->reset)) & ((1U == (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__dealloc_st))
                                          ? (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT___GEN_44)
                                          : ((2U == (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__dealloc_st))
                                              ? ((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__info_ram_rd_valid)
                                                  ? (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT___GEN_78)
                                                  : (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT___GEN_44))
                                              : (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT___GEN_44))));
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__wg_done_valid_i 
        = ((~ (IData)(vlSelf->reset)) & ((1U != (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__dealloc_st)) 
                                         & ((2U == (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__dealloc_st))
                                             ? (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT___GEN_80)
                                             : (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT___GEN_90))));
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__used_slot_bitmap_0 
        = ((~ (IData)(vlSelf->reset)) & ((1U == (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__dealloc_st))
                                          ? (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT___GEN_41)
                                          : ((2U == (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__dealloc_st))
                                              ? ((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__info_ram_rd_valid)
                                                  ? (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT___GEN_75)
                                                  : (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT___GEN_41))
                                              : (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT___GEN_41))));
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__used_slot_bitmap_1 
        = ((~ (IData)(vlSelf->reset)) & ((1U == (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__dealloc_st))
                                          ? (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT___GEN_42)
                                          : ((2U == (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__dealloc_st))
                                              ? ((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__info_ram_rd_valid)
                                                  ? (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT___GEN_76)
                                                  : (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT___GEN_42))
                                              : (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT___GEN_42))));
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__used_slot_bitmap_2 
        = ((~ (IData)(vlSelf->reset)) & ((1U == (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__dealloc_st))
                                          ? (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT___GEN_43)
                                          : ((2U == (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__dealloc_st))
                                              ? ((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__info_ram_rd_valid)
                                                  ? (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT___GEN_77)
                                                  : (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT___GEN_43))
                                              : (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT___GEN_43))));
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__used_slot_bitmap_3 
        = ((~ (IData)(vlSelf->reset)) & ((1U == (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__dealloc_st))
                                          ? (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT___GEN_44)
                                          : ((2U == (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__dealloc_st))
                                              ? ((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__info_ram_rd_valid)
                                                  ? (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT___GEN_78)
                                                  : (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT___GEN_44))
                                              : (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT___GEN_44))));
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__wg_done_valid_i 
        = ((~ (IData)(vlSelf->reset)) & ((1U != (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__dealloc_st)) 
                                         & ((2U == (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__dealloc_st))
                                             ? (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT___GEN_80)
                                             : (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT___GEN_90))));
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT___GEN_11 
        = ((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen_io_find_and_cancel) 
           | ((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen_io_generate) 
              | (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__command_serviced_array_cancelled_0)));
    GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT____VdfgTmp_hf1200383__0 
        = (1U & (~ ((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen_io_generate) 
                    | (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen_io_find_and_cancel))));
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__next_served_dealloc 
        = vlSelf->__Vdly__GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__next_served_dealloc;
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__next_served_dealloc 
        = vlSelf->__Vdly__GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__next_served_dealloc;
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT___GEN_12 
        = ((IData)(vlSymsp->TOP__GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__lds_res_tbl.__PVT__res_table_done) 
           | ((IData)(GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT____VdfgTmp_hf1200383__0) 
              & (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__lds_done_out)));
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT___GEN_15 
        = ((IData)(vlSymsp->TOP__GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__vgpr_res_tbl.__PVT__res_table_done) 
           | ((IData)(GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT____VdfgTmp_hf1200383__0) 
              & (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__vgpr_done_out)));
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT___GEN_18 
        = ((IData)(vlSymsp->TOP__GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__sgpr_res_tbl.__PVT__res_table_done) 
           | ((IData)(GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT____VdfgTmp_hf1200383__0) 
              & (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__sgpr_done_out)));
    if ((1U == (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__alloc_st))) {
        if (vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT___T_1) {
            vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT___GEN_41 
                = ((0U == (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__next_free_slot)) 
                   | (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__used_slot_bitmap_0));
            vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT___GEN_42 
                = ((1U == (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__next_free_slot)) 
                   | (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__used_slot_bitmap_1));
            vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT___GEN_43 
                = ((2U == (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__next_free_slot)) 
                   | (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__used_slot_bitmap_2));
            vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT___GEN_44 
                = ((3U == (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__next_free_slot)) 
                   | (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__used_slot_bitmap_3));
            vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT___GEN_48 
                = ((3U == (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__next_free_slot))
                    ? (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__handler_wg_alloc_wf_count_0)
                    : (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__pending_wf_count_3));
            vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT___GEN_47 
                = ((2U == (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__next_free_slot))
                    ? (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__handler_wg_alloc_wf_count_0)
                    : (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__pending_wf_count_2));
            vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT___GEN_46 
                = ((1U == (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__next_free_slot))
                    ? (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__handler_wg_alloc_wf_count_0)
                    : (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__pending_wf_count_1));
            vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT___GEN_45 
                = ((0U == (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__next_free_slot))
                    ? (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__handler_wg_alloc_wf_count_0)
                    : (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__pending_wf_count_0));
        } else {
            vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT___GEN_41 
                = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__used_slot_bitmap_0;
            vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT___GEN_42 
                = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__used_slot_bitmap_1;
            vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT___GEN_43 
                = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__used_slot_bitmap_2;
            vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT___GEN_44 
                = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__used_slot_bitmap_3;
            vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT___GEN_48 
                = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__pending_wf_count_3;
            vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT___GEN_47 
                = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__pending_wf_count_2;
            vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT___GEN_46 
                = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__pending_wf_count_1;
            vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT___GEN_45 
                = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__pending_wf_count_0;
        }
    } else {
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT___GEN_41 
            = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__used_slot_bitmap_0;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT___GEN_42 
            = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__used_slot_bitmap_1;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT___GEN_43 
            = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__used_slot_bitmap_2;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT___GEN_44 
            = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__used_slot_bitmap_3;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT___GEN_48 
            = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__pending_wf_count_3;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT___GEN_47 
            = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__pending_wf_count_2;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT___GEN_46 
            = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__pending_wf_count_1;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT___GEN_45 
            = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__pending_wf_count_0;
    }
    if ((0U == (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__curr_wf_count))) {
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT___GEN_79 = 4U;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT___GEN_74 
            = (0x1fU & ((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__info_ram__DOT__rd_word_reg) 
                        >> 3U));
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT___GEN_75 
            = ((0U != (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__curr_dealloc_wg_slot)) 
               & (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT___GEN_41));
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT___GEN_76 
            = ((1U != (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__curr_dealloc_wg_slot)) 
               & (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT___GEN_42));
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT___GEN_77 
            = ((2U != (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__curr_dealloc_wg_slot)) 
               & (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT___GEN_43));
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT___GEN_78 
            = ((3U != (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__curr_dealloc_wg_slot)) 
               & (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT___GEN_44));
    } else {
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT___GEN_79 = 1U;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT___GEN_74 
            = (0x1fU & (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__wg_done_wg_id_i));
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT___GEN_75 
            = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT___GEN_41;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT___GEN_76 
            = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT___GEN_42;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT___GEN_77 
            = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT___GEN_43;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT___GEN_78 
            = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT___GEN_44;
    }
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT___GEN_57 
        = ((0U != (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__next_served_dealloc)) 
           & (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__pending_wg_bitmap_0));
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT___GEN_58 
        = ((1U != (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__next_served_dealloc)) 
           & (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__pending_wg_bitmap_1));
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT___GEN_59 
        = ((2U != (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__next_served_dealloc)) 
           & (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__pending_wg_bitmap_2));
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT___GEN_60 
        = ((3U != (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__next_served_dealloc)) 
           & (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__pending_wg_bitmap_3));
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__info_ram_rd_valid 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__info_ram_rd_en));
    if ((1U == (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__alloc_st))) {
        if (vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT___T_1) {
            vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT___GEN_41 
                = ((0U == (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__next_free_slot)) 
                   | (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__used_slot_bitmap_0));
            vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT___GEN_42 
                = ((1U == (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__next_free_slot)) 
                   | (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__used_slot_bitmap_1));
            vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT___GEN_43 
                = ((2U == (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__next_free_slot)) 
                   | (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__used_slot_bitmap_2));
            vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT___GEN_44 
                = ((3U == (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__next_free_slot)) 
                   | (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__used_slot_bitmap_3));
            vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT___GEN_48 
                = ((3U == (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__next_free_slot))
                    ? (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__handler_wg_alloc_wf_count_1)
                    : (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__pending_wf_count_3));
            vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT___GEN_47 
                = ((2U == (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__next_free_slot))
                    ? (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__handler_wg_alloc_wf_count_1)
                    : (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__pending_wf_count_2));
            vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT___GEN_46 
                = ((1U == (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__next_free_slot))
                    ? (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__handler_wg_alloc_wf_count_1)
                    : (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__pending_wf_count_1));
            vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT___GEN_45 
                = ((0U == (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__next_free_slot))
                    ? (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__handler_wg_alloc_wf_count_1)
                    : (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__pending_wf_count_0));
        } else {
            vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT___GEN_41 
                = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__used_slot_bitmap_0;
            vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT___GEN_42 
                = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__used_slot_bitmap_1;
            vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT___GEN_43 
                = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__used_slot_bitmap_2;
            vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT___GEN_44 
                = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__used_slot_bitmap_3;
            vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT___GEN_48 
                = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__pending_wf_count_3;
            vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT___GEN_47 
                = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__pending_wf_count_2;
            vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT___GEN_46 
                = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__pending_wf_count_1;
            vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT___GEN_45 
                = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__pending_wf_count_0;
        }
    } else {
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT___GEN_41 
            = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__used_slot_bitmap_0;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT___GEN_42 
            = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__used_slot_bitmap_1;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT___GEN_43 
            = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__used_slot_bitmap_2;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT___GEN_44 
            = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__used_slot_bitmap_3;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT___GEN_48 
            = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__pending_wf_count_3;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT___GEN_47 
            = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__pending_wf_count_2;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT___GEN_46 
            = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__pending_wf_count_1;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT___GEN_45 
            = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__pending_wf_count_0;
    }
    if ((0U == (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__curr_wf_count))) {
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT___GEN_79 = 4U;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT___GEN_74 
            = (0x1fU & ((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__info_ram__DOT__rd_word_reg) 
                        >> 3U));
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT___GEN_75 
            = ((0U != (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__curr_dealloc_wg_slot)) 
               & (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT___GEN_41));
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT___GEN_76 
            = ((1U != (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__curr_dealloc_wg_slot)) 
               & (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT___GEN_42));
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT___GEN_77 
            = ((2U != (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__curr_dealloc_wg_slot)) 
               & (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT___GEN_43));
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT___GEN_78 
            = ((3U != (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__curr_dealloc_wg_slot)) 
               & (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT___GEN_44));
    } else {
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT___GEN_79 = 1U;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT___GEN_74 
            = (0x1fU & (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__wg_done_wg_id_i));
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT___GEN_75 
            = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT___GEN_41;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT___GEN_76 
            = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT___GEN_42;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT___GEN_77 
            = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT___GEN_43;
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT___GEN_78 
            = vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT___GEN_44;
    }
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT___GEN_57 
        = ((0U != (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__next_served_dealloc)) 
           & (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__pending_wg_bitmap_0));
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT___GEN_58 
        = ((1U != (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__next_served_dealloc)) 
           & (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__pending_wg_bitmap_1));
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT___GEN_59 
        = ((2U != (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__next_served_dealloc)) 
           & (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__pending_wg_bitmap_2));
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT___GEN_60 
        = ((3U != (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__next_served_dealloc)) 
           & (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__pending_wg_bitmap_3));
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__info_ram_rd_valid 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__info_ram_rd_en));
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT___GEN_80 
        = ((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__info_ram_rd_valid) 
           & (0U == (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__curr_wf_count)));
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__info_ram_rd_en 
        = ((~ (IData)(vlSelf->reset)) & ((1U == (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__dealloc_st)) 
                                         & (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__next_served_dealloc_valid)));
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu2dispatch_wf_done_i_0 
        = (1U & ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i_io_cu2dispatch_wf_done)));
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT___GEN_80 
        = ((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__info_ram_rd_valid) 
           & (0U == (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__curr_wf_count)));
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__info_ram_rd_en 
        = ((~ (IData)(vlSelf->reset)) & ((1U == (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__dealloc_st)) 
                                         & (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__next_served_dealloc_valid)));
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu2dispatch_wf_done_i_1 
        = ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i_io_cu2dispatch_wf_done) 
                                         >> 1U));
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__next_served_dealloc_valid 
        = vlSelf->__Vdly__GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__next_served_dealloc_valid;
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__dealloc_st 
        = vlSelf->__Vdly__GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__dealloc_st;
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__next_served_dealloc_valid 
        = vlSelf->__Vdly__GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__next_served_dealloc_valid;
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__dealloc_st 
        = vlSelf->__Vdly__GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__dealloc_st;
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT___GEN_90 
        = ((~ (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__handler_wg_done_ack_0)) 
           & (4U == (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__dealloc_st)));
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT___GEN_87 
        = ((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__handler_wg_done_ack_0)
            ? 1U : (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__dealloc_st));
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT___GEN_112 
        = ((0U == (3U & ((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu2dispatch_wf_tag_done_i_0) 
                         >> 3U))) | ((1U == (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__dealloc_st))
                                      ? ((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__next_served_dealloc_valid)
                                          ? (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT___GEN_57)
                                          : (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__pending_wg_bitmap_0))
                                      : (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__pending_wg_bitmap_0)));
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT___GEN_113 
        = ((1U == (3U & ((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu2dispatch_wf_tag_done_i_0) 
                         >> 3U))) | ((1U == (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__dealloc_st))
                                      ? ((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__next_served_dealloc_valid)
                                          ? (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT___GEN_58)
                                          : (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__pending_wg_bitmap_1))
                                      : (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__pending_wg_bitmap_1)));
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT___GEN_114 
        = ((2U == (3U & ((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu2dispatch_wf_tag_done_i_0) 
                         >> 3U))) | ((1U == (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__dealloc_st))
                                      ? ((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__next_served_dealloc_valid)
                                          ? (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT___GEN_59)
                                          : (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__pending_wg_bitmap_2))
                                      : (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__pending_wg_bitmap_2)));
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT___GEN_115 
        = ((3U == (3U & ((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu2dispatch_wf_tag_done_i_0) 
                         >> 3U))) | ((1U == (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__dealloc_st))
                                      ? ((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__next_served_dealloc_valid)
                                          ? (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT___GEN_60)
                                          : (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__pending_wg_bitmap_3))
                                      : (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__pending_wg_bitmap_3)));
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT___GEN_119 
        = ((3U == (3U & ((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu2dispatch_wf_tag_done_i_0) 
                         >> 3U))) ? (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__pending_wf_count_3)
            : ((2U == (3U & ((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu2dispatch_wf_tag_done_i_0) 
                             >> 3U))) ? (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__pending_wf_count_2)
                : ((1U == (3U & ((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu2dispatch_wf_tag_done_i_0) 
                                 >> 3U))) ? (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__pending_wf_count_1)
                    : (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__pending_wf_count_0))));
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT___GEN_90 
        = ((~ (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__handler_wg_done_ack_1)) 
           & (4U == (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__dealloc_st)));
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT___GEN_87 
        = ((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__handler_wg_done_ack_1)
            ? 1U : (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__dealloc_st));
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT___GEN_112 
        = ((0U == (3U & ((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu2dispatch_wf_tag_done_i_1) 
                         >> 3U))) | ((1U == (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__dealloc_st))
                                      ? ((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__next_served_dealloc_valid)
                                          ? (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT___GEN_57)
                                          : (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__pending_wg_bitmap_0))
                                      : (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__pending_wg_bitmap_0)));
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT___GEN_113 
        = ((1U == (3U & ((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu2dispatch_wf_tag_done_i_1) 
                         >> 3U))) | ((1U == (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__dealloc_st))
                                      ? ((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__next_served_dealloc_valid)
                                          ? (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT___GEN_58)
                                          : (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__pending_wg_bitmap_1))
                                      : (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__pending_wg_bitmap_1)));
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT___GEN_114 
        = ((2U == (3U & ((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu2dispatch_wf_tag_done_i_1) 
                         >> 3U))) | ((1U == (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__dealloc_st))
                                      ? ((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__next_served_dealloc_valid)
                                          ? (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT___GEN_59)
                                          : (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__pending_wg_bitmap_2))
                                      : (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__pending_wg_bitmap_2)));
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT___GEN_115 
        = ((3U == (3U & ((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu2dispatch_wf_tag_done_i_1) 
                         >> 3U))) | ((1U == (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__dealloc_st))
                                      ? ((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__next_served_dealloc_valid)
                                          ? (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT___GEN_60)
                                          : (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__pending_wg_bitmap_3))
                                      : (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__pending_wg_bitmap_3)));
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT___GEN_119 
        = ((3U == (3U & ((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu2dispatch_wf_tag_done_i_1) 
                         >> 3U))) ? (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__pending_wf_count_3)
            : ((2U == (3U & ((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu2dispatch_wf_tag_done_i_1) 
                             >> 3U))) ? (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__pending_wf_count_2)
                : ((1U == (3U & ((IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu2dispatch_wf_tag_done_i_1) 
                                 >> 3U))) ? (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__pending_wf_count_1)
                    : (IData)(vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__pending_wf_count_0))));
}
