// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VVentus.h for the primary calling header

#include "verilated.h"

#include "VVentus___024root.h"

VL_ATTR_COLD void VVentus___024root___eval_static(VVentus___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VVentus__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VVentus___024root___eval_static\n"); );
}

VL_ATTR_COLD void VVentus___024root___eval_initial__TOP(VVentus___024root* vlSelf);

VL_ATTR_COLD void VVentus___024root___eval_initial(VVentus___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VVentus__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VVentus___024root___eval_initial\n"); );
    // Body
    VVentus___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vtrigrprev__TOP__clock = vlSelf->clock;
}

VL_ATTR_COLD void VVentus___024root___eval_initial__TOP(VVentus___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VVentus__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VVentus___024root___eval_initial__TOP\n"); );
    // Body
    vlSelf->io_out_d_ready = 1U;
}

VL_ATTR_COLD void VVentus___024root___eval_final(VVentus___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VVentus__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VVentus___024root___eval_final\n"); );
}

VL_ATTR_COLD void VVentus___024root___eval_triggers__stl(VVentus___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VVentus___024root___dump_triggers__stl(VVentus___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void VVentus___024root___eval_stl(VVentus___024root* vlSelf);

VL_ATTR_COLD void VVentus___024root___eval_settle(VVentus___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VVentus__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VVentus___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        VVentus___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                VVentus___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("Ventus.v", 75594, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            VVentus___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VVentus___024root___dump_triggers__stl(VVentus___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VVentus__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VVentus___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VstlTriggered.at(0U)) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VVentus___024root___dump_triggers__ico(VVentus___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VVentus__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VVentus___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VicoTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VicoTriggered.at(0U)) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VVentus___024root___dump_triggers__act(VVentus___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VVentus__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VVentus___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VactTriggered.at(0U)) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clock)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VVentus___024root___dump_triggers__nba(VVentus___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VVentus__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VVentus___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clock)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VVentus___024root___ctor_var_reset(VVentus___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VVentus__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VVentus___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->io_host_req_ready = VL_RAND_RESET_I(1);
    vlSelf->io_host_req_valid = VL_RAND_RESET_I(1);
    vlSelf->io_host_req_bits_host_wg_id = VL_RAND_RESET_I(5);
    vlSelf->io_host_req_bits_host_num_wf = VL_RAND_RESET_I(3);
    vlSelf->io_host_req_bits_host_wf_size = VL_RAND_RESET_I(10);
    vlSelf->io_host_req_bits_host_start_pc = VL_RAND_RESET_I(32);
    vlSelf->io_host_req_bits_host_vgpr_size_total = VL_RAND_RESET_I(13);
    vlSelf->io_host_req_bits_host_sgpr_size_total = VL_RAND_RESET_I(13);
    vlSelf->io_host_req_bits_host_lds_size_total = VL_RAND_RESET_I(13);
    vlSelf->io_host_req_bits_host_gds_size_total = VL_RAND_RESET_I(11);
    vlSelf->io_host_req_bits_host_vgpr_size_per_wf = VL_RAND_RESET_I(13);
    vlSelf->io_host_req_bits_host_sgpr_size_per_wf = VL_RAND_RESET_I(13);
    vlSelf->io_host_req_bits_host_gds_baseaddr = VL_RAND_RESET_I(32);
    vlSelf->io_host_rsp_ready = VL_RAND_RESET_I(1);
    vlSelf->io_host_rsp_valid = VL_RAND_RESET_I(1);
    vlSelf->io_host_rsp_bits_inflight_wg_buffer_host_wf_done_wg_id = VL_RAND_RESET_I(5);
    vlSelf->io_out_a_ready = VL_RAND_RESET_I(1);
    vlSelf->io_out_a_valid = VL_RAND_RESET_I(1);
    vlSelf->io_out_a_bits_opcode = VL_RAND_RESET_I(3);
    vlSelf->io_out_a_bits_size = VL_RAND_RESET_I(4);
    vlSelf->io_out_a_bits_source = VL_RAND_RESET_I(4);
    vlSelf->io_out_a_bits_address = VL_RAND_RESET_I(32);
    vlSelf->io_out_a_bits_mask = VL_RAND_RESET_I(4);
    VL_RAND_RESET_W(128, vlSelf->io_out_a_bits_data);
    vlSelf->io_out_d_ready = VL_RAND_RESET_I(1);
    vlSelf->io_out_d_valid = VL_RAND_RESET_I(1);
    vlSelf->io_out_d_bits_opcode = VL_RAND_RESET_I(3);
    vlSelf->io_out_d_bits_size = VL_RAND_RESET_I(4);
    vlSelf->io_out_d_bits_source = VL_RAND_RESET_I(4);
    VL_RAND_RESET_W(128, vlSelf->io_out_d_bits_data);
    vlSelf->GPGPU_top__DOT__SM_wrapper_io_memRsp_valid = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__SM_wrapper_io_memRsp_bits_d_data_0 = VL_RAND_RESET_I(32);
    vlSelf->GPGPU_top__DOT__SM_wrapper_io_memRsp_bits_d_data_1 = VL_RAND_RESET_I(32);
    vlSelf->GPGPU_top__DOT__SM_wrapper_io_memRsp_bits_d_data_2 = VL_RAND_RESET_I(32);
    vlSelf->GPGPU_top__DOT__SM_wrapper_io_memRsp_bits_d_data_3 = VL_RAND_RESET_I(32);
    vlSelf->GPGPU_top__DOT__SM_wrapper_1_io_memRsp_valid = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i_io_allocator_vgpr_start_out = VL_RAND_RESET_I(12);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i_io_allocator_sgpr_start_out = VL_RAND_RESET_I(12);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i_io_allocator_lds_start_out = VL_RAND_RESET_I(12);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i_io_cu2dispatch_wf_done = VL_RAND_RESET_I(2);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__alloc_valid_i = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__alloc_wg_id_i = VL_RAND_RESET_I(5);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__alloc_num_wf_i = VL_RAND_RESET_I(3);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__alloc_vgpr_size_i = VL_RAND_RESET_I(13);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__alloc_sgpr_size_i = VL_RAND_RESET_I(13);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__alloc_lds_size_i = VL_RAND_RESET_I(13);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__dis_controller_cu_busy_i = VL_RAND_RESET_I(2);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__cam_up_valid_i = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__cam_up_cu_id_i = VL_RAND_RESET_I(2);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__cam_up_vgpr_strt_i = VL_RAND_RESET_I(12);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__cam_up_vgpr_size_i = VL_RAND_RESET_I(13);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__cam_up_sgpr_strt_i = VL_RAND_RESET_I(12);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__cam_up_sgpr_size_i = VL_RAND_RESET_I(13);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__cam_up_lds_strt_i = VL_RAND_RESET_I(12);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__cam_up_lds_size_i = VL_RAND_RESET_I(13);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__cam_up_wf_count_i = VL_RAND_RESET_I(3);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__cam_up_wg_count_i = VL_RAND_RESET_I(3);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__cam_wait_valid = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__cam_wait_wg_id = VL_RAND_RESET_I(5);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__cam_wait_wf_count = VL_RAND_RESET_I(3);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__cam_wait_vgpr_size = VL_RAND_RESET_I(13);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__cam_wait_sgpr_size = VL_RAND_RESET_I(13);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__cam_wait_lds_size = VL_RAND_RESET_I(13);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__cam_wait_dis_controller_cu_busy = VL_RAND_RESET_I(2);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__anded_cam_out_valid = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__anded_cam_out = VL_RAND_RESET_I(2);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__anded_cam_wg_id = VL_RAND_RESET_I(5);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__anded_cam_wf_count = VL_RAND_RESET_I(3);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__anded_cam_vgpr_size = VL_RAND_RESET_I(13);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__anded_cam_sgpr_size = VL_RAND_RESET_I(13);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__anded_cam_lds_size = VL_RAND_RESET_I(13);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__encoded_cu_out_valid = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__encoded_cu_found_valid = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__encoded_cu_id = VL_RAND_RESET_I(2);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__encoded_cu_wg_id = VL_RAND_RESET_I(5);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__encoded_wf_count = VL_RAND_RESET_I(3);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__encoded_vgpr_size = VL_RAND_RESET_I(13);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__encoded_sgpr_size = VL_RAND_RESET_I(13);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__encoded_lds_size = VL_RAND_RESET_I(13);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__encoded_vgpr_start = VL_RAND_RESET_I(12);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__encoded_sgpr_start = VL_RAND_RESET_I(12);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__encoded_lds_start = VL_RAND_RESET_I(12);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__size_ram_valid = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__size_ram_cu_id_found = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__cu_id_out = VL_RAND_RESET_I(2);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__vgpr_start_out = VL_RAND_RESET_I(12);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__sgpr_start_out = VL_RAND_RESET_I(12);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__lds_start_out = VL_RAND_RESET_I(12);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__wg_id_out = VL_RAND_RESET_I(5);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__wf_count_out = VL_RAND_RESET_I(3);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__vgpr_size_out = VL_RAND_RESET_I(13);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__sgpr_size_out = VL_RAND_RESET_I(13);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__lds_size_out = VL_RAND_RESET_I(13);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__cu_initialized_0 = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__cu_initialized_1 = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__pipeline_waiting = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT___GEN_0 = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT___GEN_45 = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT___GEN_46 = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__vgpr_cam__DOT__res_search_size_i = VL_RAND_RESET_I(13);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__vgpr_cam__DOT__cam_valid_entry_0 = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__vgpr_cam__DOT__cam_valid_entry_1 = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__vgpr_cam__DOT__cam_ram_0 = VL_RAND_RESET_I(13);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__vgpr_cam__DOT__cam_ram_1 = VL_RAND_RESET_I(13);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__vgpr_cam__DOT__cam_ram_start_0 = VL_RAND_RESET_I(12);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__vgpr_cam__DOT__cam_ram_start_1 = VL_RAND_RESET_I(12);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__vgpr_cam__DOT___GEN_10 = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__vgpr_cam__DOT___GEN_11 = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__sgpr_cam__DOT__res_search_en_i = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__sgpr_cam__DOT__res_search_size_i = VL_RAND_RESET_I(13);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__sgpr_cam__DOT__cam_valid_entry_0 = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__sgpr_cam__DOT__cam_valid_entry_1 = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__sgpr_cam__DOT__cam_ram_0 = VL_RAND_RESET_I(13);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__sgpr_cam__DOT__cam_ram_1 = VL_RAND_RESET_I(13);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__sgpr_cam__DOT__cam_ram_start_0 = VL_RAND_RESET_I(12);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__sgpr_cam__DOT__cam_ram_start_1 = VL_RAND_RESET_I(12);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__sgpr_cam__DOT___GEN_10 = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__sgpr_cam__DOT___GEN_11 = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__lds_cam__DOT__res_search_size_i = VL_RAND_RESET_I(13);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__lds_cam__DOT__cam_valid_entry_0 = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__lds_cam__DOT__cam_valid_entry_1 = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__lds_cam__DOT__cam_ram_0 = VL_RAND_RESET_I(13);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__lds_cam__DOT__cam_ram_1 = VL_RAND_RESET_I(13);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__lds_cam__DOT__cam_ram_start_0 = VL_RAND_RESET_I(12);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__lds_cam__DOT__cam_ram_start_1 = VL_RAND_RESET_I(12);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__lds_cam__DOT___GEN_10 = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__lds_cam__DOT___GEN_11 = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__wf_cam__DOT__res_search_size_i = VL_RAND_RESET_I(4);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__wf_cam__DOT__cam_valid_entry_0 = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__wf_cam__DOT__cam_valid_entry_1 = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__wf_cam__DOT__cam_ram_0 = VL_RAND_RESET_I(4);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__wf_cam__DOT__cam_ram_1 = VL_RAND_RESET_I(4);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__wf_cam__DOT___GEN_8 = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__wf_cam__DOT___GEN_9 = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__wg_cam__DOT__res_search_size_i = VL_RAND_RESET_I(4);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__wg_cam__DOT__cam_valid_entry_0 = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__wg_cam__DOT__cam_valid_entry_1 = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__wg_cam__DOT__cam_ram_0 = VL_RAND_RESET_I(4);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__wg_cam__DOT__cam_ram_1 = VL_RAND_RESET_I(4);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__wg_cam__DOT___GEN_8 = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__wg_cam__DOT___GEN_9 = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__prefer_select__DOT___GEN_8 = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__prefer_select__DOT___GEN_11 = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__prefer_select__DOT___GEN_15 = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__prefer_select__DOT__found_id = VL_RAND_RESET_I(3);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__done_array_0 = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__wf_count_array_0 = VL_RAND_RESET_I(3);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__wg_count_array_0 = VL_RAND_RESET_I(3);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__vgpr_start_array_0 = VL_RAND_RESET_I(13);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__vgpr_size_array_0 = VL_RAND_RESET_I(13);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__sgpr_start_array_0 = VL_RAND_RESET_I(13);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__sgpr_size_array_0 = VL_RAND_RESET_I(13);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__lds_start_array_0 = VL_RAND_RESET_I(13);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__lds_size_array_0 = VL_RAND_RESET_I(13);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__cu_id_array_0 = VL_RAND_RESET_I(2);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__serviced_array_0 = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__is_alloc_array_0 = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__done_cancelled_array_0 = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__command_serviced_array_cancelled_0 = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT___GEN_6 = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT___GEN_7 = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT___GEN_11 = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__serviced_id_valid = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__grt_cam_up_valid_i = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__grt_wg_alloc_done = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__grt_wg_dealloc_done = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT___GEN_20 = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen_io_wg_id = VL_RAND_RESET_I(5);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen_io_cu_id = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen_io_find_and_cancel = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen_io_generate = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__alloc_en_1 = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__dealloc_en_1 = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__cu_id_1 = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__lds_size1 = VL_RAND_RESET_I(13);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__vgpr_size1 = VL_RAND_RESET_I(13);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__sgpr_size1 = VL_RAND_RESET_I(13);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_count1 = VL_RAND_RESET_I(3);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__lds_start1 = VL_RAND_RESET_I(13);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__vgpr_start1 = VL_RAND_RESET_I(13);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__sgpr_start1 = VL_RAND_RESET_I(13);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__lds_done_out = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__vgpr_done_out = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__sgpr_done_out = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__lds_size_out = VL_RAND_RESET_I(13);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__vgpr_size_out = VL_RAND_RESET_I(13);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__sgpr_size_out = VL_RAND_RESET_I(13);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__lds_start_out = VL_RAND_RESET_I(13);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__vgpr_start_out = VL_RAND_RESET_I(13);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__sgpr_start_out = VL_RAND_RESET_I(13);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT___GEN_12 = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT___GEN_15 = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT___GEN_18 = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT___GEN_24 = VL_RAND_RESET_I(14);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT___GEN_25 = VL_RAND_RESET_I(14);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT___GEN_26 = VL_RAND_RESET_I(14);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_res_tbl__DOT__wf_count_out_i_0 = VL_RAND_RESET_I(3);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_res_tbl__DOT__wf_count_out_i_1 = VL_RAND_RESET_I(3);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_res_tbl__DOT__wf_count_per_wg_slot_0_0 = VL_RAND_RESET_I(3);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_res_tbl__DOT__wf_count_per_wg_slot_0_1 = VL_RAND_RESET_I(3);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_res_tbl__DOT__wf_count_per_wg_slot_0_2 = VL_RAND_RESET_I(3);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_res_tbl__DOT__wf_count_per_wg_slot_0_3 = VL_RAND_RESET_I(3);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_res_tbl__DOT__wf_count_per_wg_slot_1_0 = VL_RAND_RESET_I(3);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_res_tbl__DOT__wf_count_per_wg_slot_1_1 = VL_RAND_RESET_I(3);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_res_tbl__DOT__wf_count_per_wg_slot_1_2 = VL_RAND_RESET_I(3);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_res_tbl__DOT__wf_count_per_wg_slot_1_3 = VL_RAND_RESET_I(3);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_res_tbl__DOT___wf_count_out_i_T_1 = VL_RAND_RESET_I(3);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_res_tbl__DOT___wf_count_out_i_T_3 = VL_RAND_RESET_I(3);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_res_tbl__DOT__cu_id_delay = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen__DOT__wg_slot_id_find_i = VL_RAND_RESET_I(2);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen__DOT__wg_slot_id_gen_i = VL_RAND_RESET_I(2);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen__DOT__wg_slot_id_bitmap_0_0 = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen__DOT__wg_slot_id_bitmap_0_1 = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen__DOT__wg_slot_id_bitmap_0_2 = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen__DOT__wg_slot_id_bitmap_0_3 = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen__DOT__wg_slot_id_bitmap_1_0 = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen__DOT__wg_slot_id_bitmap_1_1 = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen__DOT__wg_slot_id_bitmap_1_2 = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen__DOT__wg_slot_id_bitmap_1_3 = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen__DOT___GEN_1 = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen__DOT___GEN_5 = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen__DOT___GEN_9 = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen__DOT___GEN_13 = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen__DOT__first_slot_id = VL_RAND_RESET_I(2);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen__DOT___T_4 = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen__DOT___GEN_24 = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen__DOT___GEN_25 = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen__DOT___GEN_26 = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen__DOT___GEN_27 = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen__DOT___GEN_28 = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen__DOT___GEN_29 = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen__DOT___GEN_30 = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen__DOT___GEN_31 = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen__DOT__wg_slot_id_find_ram_cam_0_1 = VL_RAND_RESET_I(5);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen__DOT__wg_slot_id_find_ram_cam_0_2 = VL_RAND_RESET_I(5);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen__DOT__wg_slot_id_find_ram_cam_0_3 = VL_RAND_RESET_I(5);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen__DOT__wg_slot_id_find_ram_cam_1_0 = VL_RAND_RESET_I(5);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen__DOT__wg_slot_id_find_ram_cam_1_1 = VL_RAND_RESET_I(5);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen__DOT__wg_slot_id_find_ram_cam_1_2 = VL_RAND_RESET_I(5);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen__DOT__wg_slot_id_find_ram_cam_1_3 = VL_RAND_RESET_I(5);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen__DOT__cu_id_cancel = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen__DOT__cancel_valid = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wg_throttling__DOT__actual_wg_count_array_0 = VL_RAND_RESET_I(3);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wg_throttling__DOT__actual_wg_count_array_1 = VL_RAND_RESET_I(3);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wg_throttling__DOT__cu_id_i = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wg_throttling__DOT__alloc_en_i = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wg_throttling__DOT__dealloc_en_i = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wg_throttling__DOT__wg_count_available_i = VL_RAND_RESET_I(3);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wg_throttling__DOT___GEN_10 = VL_RAND_RESET_I(3);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wg_throttling__DOT___GEN_14 = VL_RAND_RESET_I(3);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wg_throttling__DOT___GEN_15 = VL_RAND_RESET_I(3);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__host_wg_valid_i = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__host_wg_id_i = VL_RAND_RESET_I(5);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__host_num_wf_i = VL_RAND_RESET_I(3);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__host_wf_size_i = VL_RAND_RESET_I(10);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__host_start_pc_i = VL_RAND_RESET_I(32);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__host_gds_baseaddr_i = VL_RAND_RESET_I(32);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__host_vgpr_size_total_i = VL_RAND_RESET_I(13);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__host_sgpr_size_total_i = VL_RAND_RESET_I(13);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__host_vgpr_size_per_wf_i = VL_RAND_RESET_I(13);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__host_sgpr_size_per_wf_i = VL_RAND_RESET_I(13);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__host_lds_size_total_i = VL_RAND_RESET_I(13);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__host_gds_size_total_i = VL_RAND_RESET_I(11);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__dis_controller_start_alloc_i = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__dis_controller_wg_alloc_valid_i = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__dis_controller_wg_rejected_valid_i = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__gpu_interface_dealloc_wg_id_i = VL_RAND_RESET_I(5);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__inflight_tbl_alloc_st = VL_RAND_RESET_I(8);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__inflight_tbl_rd_host_st = VL_RAND_RESET_I(4);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__allocator_wg_id_out_i = VL_RAND_RESET_I(5);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT___GEN_0 = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT___GEN_2 = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__inflight_wg_buffer_host_wf_done_i = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__inflight_wg_buffer_host_wf_done_wg_id_i = VL_RAND_RESET_I(5);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__waiting_tbl_valid_0 = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__waiting_tbl_valid_1 = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__new_index_wr_en = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__new_entry_wg_reg = VL_RAND_RESET_Q(58);
    VL_RAND_RESET_W(105, vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__ready_tbl_wr_reg);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__inflight_wg_buffer_host_rcvd_ack_i = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__new_index = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT___GEN_10 = VL_RAND_RESET_I(4);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT___GEN_24 = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT___GEN_25 = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__waiting_tbl_pending_0 = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__waiting_tbl_pending_1 = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__chosen_entry = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__chosen_entry_by_allocator = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__chosen_entry_is_valid = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__wait_tbl_busy = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__valid_not_pending_0 = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__valid_not_pending_1 = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__tbl_walk_wg_id_searched = VL_RAND_RESET_I(5);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__tbl_walk_rd_en = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__tbl_walk_idx = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__tbl_walk_rd_valid = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__inflight_wg_buffer_gpu_valid_i = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__inflight_wg_buffer_gpu_vgpr_size_per_wf_i = VL_RAND_RESET_I(13);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__inflight_wg_buffer_gpu_sgpr_size_per_wf_i = VL_RAND_RESET_I(13);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__inflight_wg_buffer_gpu_wf_size_i = VL_RAND_RESET_I(10);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__inflight_wg_buffer_start_pc_i = VL_RAND_RESET_I(32);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__inflight_wg_buffer_alloc_wg_id_i = VL_RAND_RESET_I(5);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__inflight_wg_buffer_alloc_num_wf_i = VL_RAND_RESET_I(3);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__inflight_wg_buffer_alloc_vgpr_size_i = VL_RAND_RESET_I(13);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__inflight_wg_buffer_alloc_sgpr_size_i = VL_RAND_RESET_I(13);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__inflight_wg_buffer_alloc_lds_size_i = VL_RAND_RESET_I(13);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__wg_waiting_alloc_valid = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__last_chosen_entry_rr = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT___GEN_26 = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT___GEN_27 = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT___GEN_28 = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT___GEN_35 = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT___GEN_36 = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT___GEN_37 = VL_RAND_RESET_I(5);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT___GEN_39 = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT___GEN_40 = VL_RAND_RESET_I(8);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT___GEN_43 = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT___GEN_52 = VL_RAND_RESET_I(8);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT___GEN_53 = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT___GEN_54 = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT___GEN_124 = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT___GEN_125 = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT___GEN_126 = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT___GEN_127 = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT___GEN_129 = VL_RAND_RESET_I(13);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT___GEN_130 = VL_RAND_RESET_I(13);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT___GEN_131 = VL_RAND_RESET_I(10);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT___GEN_132 = VL_RAND_RESET_I(32);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT___GEN_134 = VL_RAND_RESET_I(8);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT___GEN_135 = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT___GEN_136 = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT___GEN_137 = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT___GEN_138 = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT___GEN_139 = VL_RAND_RESET_I(5);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT___GEN_140 = VL_RAND_RESET_I(3);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT___GEN_141 = VL_RAND_RESET_I(13);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT___GEN_142 = VL_RAND_RESET_I(13);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT___GEN_143 = VL_RAND_RESET_I(13);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__waiting_tbl_valid_rotated_0 = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__waiting_tbl_valid_rotated_1 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__ram_wg_waiting_allocation__DOT__mem[__Vi0] = VL_RAND_RESET_Q(58);
    }
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__ram_wg_waiting_allocation__DOT__rd_word_reg = VL_RAND_RESET_Q(58);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_RAND_RESET_W(105, vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__ram_wg_ready_start__DOT__mem[__Vi0]);
    }
    VL_RAND_RESET_W(105, vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__ram_wg_ready_start__DOT__rd_word_reg);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__gpu_interface_dealloc_available_i = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__dis_controller_wg_dealloc_valid_i = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__handler_wg_done_ack_0 = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__handler_wg_done_ack_1 = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__chosen_done_cu_valid = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__chosen_done_cu_id = VL_RAND_RESET_I(2);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__handler_wg_done_valid_0 = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__handler_wg_done_valid_1 = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__handler_wg_done_wg_id_0 = VL_RAND_RESET_I(5);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__handler_wg_done_wg_id_1 = VL_RAND_RESET_I(5);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu2dispatch_wf_done_i_0 = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu2dispatch_wf_done_i_1 = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu2dispatch_wf_tag_done_i_0 = VL_RAND_RESET_I(5);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu2dispatch_wf_tag_done_i_1 = VL_RAND_RESET_I(5);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__dealloc_st = VL_RAND_RESET_I(5);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__dis_controller_wg_alloc_valid_i = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__inflight_wg_buffer_gpu_valid_i = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__inflight_wg_buffer_gpu_wf_size_i = VL_RAND_RESET_I(10);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__inflight_wg_buffer_start_pc_i = VL_RAND_RESET_I(32);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__inflight_wg_buffer_gds_base_dispatch_i = VL_RAND_RESET_I(32);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__inflight_wg_buffer_gpu_vgpr_size_per_wf_i = VL_RAND_RESET_I(12);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__inflight_wg_buffer_gpu_sgpr_size_per_wf_i = VL_RAND_RESET_I(12);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__allocator_wg_id_out_i = VL_RAND_RESET_I(5);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__allocator_cu_id_out_i = VL_RAND_RESET_I(2);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__allocator_wf_count_i = VL_RAND_RESET_I(3);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__allocator_vgpr_start_out_i = VL_RAND_RESET_I(12);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__allocator_sgpr_start_out_i = VL_RAND_RESET_I(12);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__allocator_lds_start_out_i = VL_RAND_RESET_I(12);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__gpu_interface_alloc_available_i = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__gpu_interface_cu_id_i = VL_RAND_RESET_I(2);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__gpu_interface_dealloc_wg_id_i = VL_RAND_RESET_I(5);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__dispatch2cu_wf_dispatch_handlers_0 = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__dispatch2cu_wf_dispatch_handlers_1 = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__invalid_due_to_not_ready_handlers_0 = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__invalid_due_to_not_ready_handlers_1 = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__dispatch2cu_wf_tag_dispatch_handlers_0 = VL_RAND_RESET_I(5);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__dispatch2cu_wf_tag_dispatch_handlers_1 = VL_RAND_RESET_I(5);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__handler_wg_alloc_en_0 = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__handler_wg_alloc_en_1 = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__handler_wg_alloc_wg_id_0 = VL_RAND_RESET_I(5);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__handler_wg_alloc_wg_id_1 = VL_RAND_RESET_I(5);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__handler_wg_alloc_wf_count_0 = VL_RAND_RESET_I(3);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__handler_wg_alloc_wf_count_1 = VL_RAND_RESET_I(3);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__dispatch2cu_wf_dispatch_i = VL_RAND_RESET_I(2);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__dispatch2cu_wg_wf_count_i = VL_RAND_RESET_I(3);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__dispatch2cu_wf_size_dispatch_i = VL_RAND_RESET_I(10);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__dispatch2cu_sgpr_base_dispatch_i = VL_RAND_RESET_I(13);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__dispatch2cu_vgpr_base_dispatch_i = VL_RAND_RESET_I(13);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__dispatch2cu_wf_tag_dispatch_i = VL_RAND_RESET_I(5);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__dispatch2cu_lds_base_dispatch_i = VL_RAND_RESET_I(13);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__dispatch2cu_start_pc_dispatch_i = VL_RAND_RESET_I(32);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__dispatch2cu_gds_base_dispatch_i = VL_RAND_RESET_I(32);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__alloc_st = VL_RAND_RESET_I(4);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT___GEN_17 = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT___GEN_18 = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT___GEN_19 = VL_RAND_RESET_I(5);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT___GEN_20 = VL_RAND_RESET_I(5);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT___GEN_21 = VL_RAND_RESET_I(3);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT___GEN_22 = VL_RAND_RESET_I(3);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT___GEN_48 = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT___GEN_51 = VL_RAND_RESET_I(4);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT___GEN_52 = VL_RAND_RESET_I(5);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT___GEN_53 = VL_RAND_RESET_I(3);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT___GEN_54 = VL_RAND_RESET_I(10);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT___GEN_55 = VL_RAND_RESET_I(32);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT___GEN_56 = VL_RAND_RESET_I(32);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT___GEN_57 = VL_RAND_RESET_I(13);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT___GEN_58 = VL_RAND_RESET_I(13);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT___GEN_59 = VL_RAND_RESET_I(13);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT___GEN_60 = VL_RAND_RESET_I(4);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT___GEN_66 = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT___GEN_77 = VL_RAND_RESET_I(5);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT___GEN_78 = VL_RAND_RESET_I(13);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT___GEN_79 = VL_RAND_RESET_I(13);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT___GEN_80 = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT___GEN_81 = VL_RAND_RESET_I(4);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT___GEN_93 = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT___GEN_94 = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT___GEN_140 = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__next_free_slot = VL_RAND_RESET_I(2);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__used_slot_bitmap_0 = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__used_slot_bitmap_1 = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__used_slot_bitmap_2 = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__used_slot_bitmap_3 = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__pending_wg_bitmap_0 = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__pending_wg_bitmap_1 = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__pending_wg_bitmap_2 = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__pending_wg_bitmap_3 = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__pending_wf_count_0 = VL_RAND_RESET_I(3);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__pending_wf_count_1 = VL_RAND_RESET_I(3);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__pending_wf_count_2 = VL_RAND_RESET_I(3);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__pending_wf_count_3 = VL_RAND_RESET_I(3);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__curr_alloc_wf_count = VL_RAND_RESET_I(3);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__curr_alloc_wf_slot = VL_RAND_RESET_I(2);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__dispatch2cu_wf_dispatch_i = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__dispatch2cu_wf_tag_dispatch_i = VL_RAND_RESET_I(5);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__next_served_dealloc_valid = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__next_served_dealloc = VL_RAND_RESET_I(2);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__curr_dealloc_wg_slot = VL_RAND_RESET_I(2);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__info_ram_rd_en = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__info_ram_rd_valid = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__info_ram_wr_en = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__info_ram_wr_addr = VL_RAND_RESET_I(2);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__info_ram_wr_reg = VL_RAND_RESET_I(8);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__wg_done_valid_i = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__wg_done_wg_id_i = VL_RAND_RESET_I(5);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__curr_wf_count = VL_RAND_RESET_I(3);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__alloc_st = VL_RAND_RESET_I(2);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__dealloc_st = VL_RAND_RESET_I(3);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__invalid_due_to_not_ready_i = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__next_free_slot_valid = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT___T_1 = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT___GEN_23 = VL_RAND_RESET_I(5);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT___GEN_24 = VL_RAND_RESET_I(3);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT___GEN_26 = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT___GEN_29 = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT___GEN_41 = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT___GEN_42 = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT___GEN_43 = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT___GEN_44 = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT___GEN_45 = VL_RAND_RESET_I(3);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT___GEN_46 = VL_RAND_RESET_I(3);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT___GEN_47 = VL_RAND_RESET_I(3);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT___GEN_48 = VL_RAND_RESET_I(3);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT___GEN_57 = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT___GEN_58 = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT___GEN_59 = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT___GEN_60 = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT___GEN_74 = VL_RAND_RESET_I(5);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT___GEN_75 = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT___GEN_76 = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT___GEN_77 = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT___GEN_78 = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT___GEN_79 = VL_RAND_RESET_I(3);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT___GEN_80 = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT___GEN_87 = VL_RAND_RESET_I(3);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT___GEN_90 = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT___GEN_112 = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT___GEN_113 = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT___GEN_114 = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT___GEN_115 = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT___GEN_119 = VL_RAND_RESET_I(3);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__info_ram__DOT__mem[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__info_ram__DOT__rd_word_reg = VL_RAND_RESET_I(8);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__next_free_slot = VL_RAND_RESET_I(2);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__used_slot_bitmap_0 = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__used_slot_bitmap_1 = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__used_slot_bitmap_2 = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__used_slot_bitmap_3 = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__pending_wg_bitmap_0 = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__pending_wg_bitmap_1 = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__pending_wg_bitmap_2 = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__pending_wg_bitmap_3 = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__pending_wf_count_0 = VL_RAND_RESET_I(3);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__pending_wf_count_1 = VL_RAND_RESET_I(3);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__pending_wf_count_2 = VL_RAND_RESET_I(3);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__pending_wf_count_3 = VL_RAND_RESET_I(3);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__curr_alloc_wf_count = VL_RAND_RESET_I(3);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__curr_alloc_wf_slot = VL_RAND_RESET_I(2);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__dispatch2cu_wf_dispatch_i = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__dispatch2cu_wf_tag_dispatch_i = VL_RAND_RESET_I(5);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__next_served_dealloc_valid = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__next_served_dealloc = VL_RAND_RESET_I(2);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__curr_dealloc_wg_slot = VL_RAND_RESET_I(2);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__info_ram_rd_en = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__info_ram_rd_valid = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__info_ram_wr_en = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__info_ram_wr_addr = VL_RAND_RESET_I(2);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__info_ram_wr_reg = VL_RAND_RESET_I(8);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__wg_done_valid_i = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__wg_done_wg_id_i = VL_RAND_RESET_I(5);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__curr_wf_count = VL_RAND_RESET_I(3);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__alloc_st = VL_RAND_RESET_I(2);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__dealloc_st = VL_RAND_RESET_I(3);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__invalid_due_to_not_ready_i = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__next_free_slot_valid = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT___T_1 = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT___GEN_23 = VL_RAND_RESET_I(5);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT___GEN_24 = VL_RAND_RESET_I(3);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT___GEN_26 = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT___GEN_29 = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT___GEN_41 = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT___GEN_42 = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT___GEN_43 = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT___GEN_44 = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT___GEN_45 = VL_RAND_RESET_I(3);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT___GEN_46 = VL_RAND_RESET_I(3);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT___GEN_47 = VL_RAND_RESET_I(3);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT___GEN_48 = VL_RAND_RESET_I(3);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT___GEN_57 = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT___GEN_58 = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT___GEN_59 = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT___GEN_60 = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT___GEN_74 = VL_RAND_RESET_I(5);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT___GEN_75 = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT___GEN_76 = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT___GEN_77 = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT___GEN_78 = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT___GEN_79 = VL_RAND_RESET_I(3);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT___GEN_80 = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT___GEN_87 = VL_RAND_RESET_I(3);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT___GEN_90 = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT___GEN_112 = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT___GEN_113 = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT___GEN_114 = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT___GEN_115 = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT___GEN_119 = VL_RAND_RESET_I(3);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__info_ram__DOT__mem[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__info_ram__DOT__rd_word_reg = VL_RAND_RESET_I(8);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__dis_controller_i__DOT__alloc_st = VL_RAND_RESET_I(4);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__dis_controller_i__DOT__cu_groups_allocating_0 = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__dis_controller_i__DOT__cu_groups_allocating_1 = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__dis_controller_i__DOT__alloc_waiting_cu_id = VL_RAND_RESET_I(2);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__dis_controller_i__DOT__alloc_waiting = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__dis_controller_i__DOT__dis_controller_start_alloc_i = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__dis_controller_i__DOT__dis_controller_alloc_ack_i = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__dis_controller_i__DOT__dis_controller_wg_alloc_valid_i = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__dis_controller_i__DOT__dis_controller_wg_dealloc_valid_i = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__dis_controller_i__DOT__dis_controller_wg_rejected_valid_i = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__dis_controller_i__DOT___GEN_6 = VL_RAND_RESET_I(4);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__dis_controller_i__DOT___GEN_7 = VL_RAND_RESET_I(4);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__dis_controller_i__DOT___GEN_16 = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__dis_controller_i__DOT___GEN_20 = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__dis_controller_i__DOT___T_11 = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__dis_controller_i__DOT___GEN_24 = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__dis_controller_i__DOT___T_15 = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__dis_controller_i__DOT___GEN_42 = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__dis_controller_i__DOT___GEN_43 = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__cta__DOT__cta_sche__DOT__dis_controller_i__DOT____VdfgTmp_h2bb4497e__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->GPGPU_top__DOT__cta__DOT__wf_done_interface__DOT__buffer__DOT__ram[__Vi0] = VL_RAND_RESET_I(5);
    }
    vlSelf->GPGPU_top__DOT__cta__DOT__wf_done_interface__DOT__buffer__DOT__ram_MPORT_en = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__cta__DOT__wf_done_interface__DOT__buffer__DOT__enq_ptr_value = VL_RAND_RESET_I(3);
    vlSelf->GPGPU_top__DOT__cta__DOT__wf_done_interface__DOT__buffer__DOT__deq_ptr_value = VL_RAND_RESET_I(3);
    vlSelf->GPGPU_top__DOT__cta__DOT__wf_done_interface__DOT__buffer__DOT__maybe_full = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__cta__DOT__wf_done_interface__DOT__buffer__DOT__ptr_match = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__cta__DOT__wf_done_interface__DOT__buffer__DOT__do_deq = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__cta__DOT__wf_done_interface__DOT__buffer__DOT___value_T_1 = VL_RAND_RESET_I(3);
    vlSelf->GPGPU_top__DOT__cta__DOT__wf_done_interface__DOT__buffer__DOT___value_T_3 = VL_RAND_RESET_I(3);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD_io_req_bits_opcode = VL_RAND_RESET_I(3);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD_io_req_bits_size = VL_RAND_RESET_I(4);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD_io_req_bits_source = VL_RAND_RESET_I(4);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD_io_req_bits_tag = VL_RAND_RESET_I(27);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD_io_req_bits_offset = VL_RAND_RESET_I(4);
    VL_RAND_RESET_W(128, vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD_io_req_bits_data);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD_io_req_bits_mask = VL_RAND_RESET_I(4);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD_io_req_bits_set = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD_io_req_bits_hit = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD_io_req_bits_way = VL_RAND_RESET_I(2);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD_io_req_bits_from_mem = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD_io_d_bits_address = VL_RAND_RESET_I(32);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD_io_bs_wadr_valid = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD_io_bs_wadr_bits_mask = VL_RAND_RESET_I(4);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA_io_req_bits_opcode = VL_RAND_RESET_I(3);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA_io_a_ready = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA_io_a_valid = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA_io_a_bits_address = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(128, vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkD_io_resp_bits_data);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkD_io_source = VL_RAND_RESET_I(4);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkD_io_opcode = VL_RAND_RESET_I(3);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__directory_io_write_bits_way = VL_RAND_RESET_I(2);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__directory_io_write_bits_data_tag = VL_RAND_RESET_I(27);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__directory_io_write_bits_set = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__directory_io_read_ready = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_0_io_allocate_valid = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_0_io_schedule_d_valid = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_0_io_sinkd_valid = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_1_io_allocate_valid = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_1_io_schedule_d_valid = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_1_io_sinkd_valid = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_2_io_allocate_valid = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_2_io_schedule_d_valid = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_2_io_sinkd_valid = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_3_io_allocate_valid = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_3_io_schedule_d_valid = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_3_io_sinkd_valid = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__mshr_request = VL_RAND_RESET_I(4);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__robin_filter = VL_RAND_RESET_I(4);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__robin_request = VL_RAND_RESET_I(8);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__mshr_selectOH2 = VL_RAND_RESET_I(9);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__mshr_selectOH = VL_RAND_RESET_I(4);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__schedule_d_bits_offset = VL_RAND_RESET_I(4);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__schedule_a_valid = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__l2cache__DOT___robin_filter_T_1 = VL_RAND_RESET_I(4);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__tagMatches = VL_RAND_RESET_I(4);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__mshr_insertOH = VL_RAND_RESET_I(5);
    vlSelf->GPGPU_top__DOT__l2cache__DOT___requests_io_push_bits_index_T = VL_RAND_RESET_I(5);
    vlSelf->GPGPU_top__DOT__l2cache__DOT___requests_io_push_bits_index_T_2 = VL_RAND_RESET_I(4);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT___io_pb_pop_valid_T = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT__pb_beat_reg_data);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT__pb_beat_reg_mask = VL_RAND_RESET_I(4);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT__stateReg = VL_RAND_RESET_I(2);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT__s1_req_reg_opcode = VL_RAND_RESET_I(3);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT__s1_req_reg_size = VL_RAND_RESET_I(4);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT__s1_req_reg_source = VL_RAND_RESET_I(4);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT__s1_req_reg_tag = VL_RAND_RESET_I(27);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT__s1_req_reg_offset = VL_RAND_RESET_I(4);
    VL_RAND_RESET_W(128, vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT__s1_req_reg_data);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT__s1_req_reg_mask = VL_RAND_RESET_I(4);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT__s1_req_reg_set = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT__s1_req_reg_hit = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT__s1_req_reg_way = VL_RAND_RESET_I(2);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT__s1_req_reg_from_mem = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT___GEN_0 = VL_RAND_RESET_I(3);
    VL_RAND_RESET_W(128, vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT___GEN_12);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT__busy = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT___s1_need_w_T_2 = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT__s1_need_w = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT__read_sent_reg = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT__sourceA_sent_reg = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT__write_sent_reg = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT___GEN_23 = VL_RAND_RESET_I(2);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT___GEN_30 = VL_RAND_RESET_I(2);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT___GEN_33 = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT___GEN_34 = VL_RAND_RESET_I(2);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT__s_final_req_opcode = VL_RAND_RESET_I(3);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT__s_final_req_source = VL_RAND_RESET_I(4);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT__s_final_req_tag = VL_RAND_RESET_I(27);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT__s_final_req_offset = VL_RAND_RESET_I(4);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT__s_final_req_set = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__sourceD__DOT__io_d_valid_REG = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer_io_push_bits_data_data);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer_io_push_bits_data_mask = VL_RAND_RESET_I(4);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__lists = VL_RAND_RESET_I(4);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__hasData = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT___T_1 = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT___T_2 = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__buf_block = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT___freeOH_T_11 = VL_RAND_RESET_I(5);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT___GEN_2 = VL_RAND_RESET_I(4);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT___lists_T_2 = VL_RAND_RESET_I(4);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__set_block = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT____VdfgTmp_hdfd098f5__0 = 0;
    vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT____VdfgTmp_hb8a87d06__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__head[__Vi0] = VL_RAND_RESET_I(2);
    }
    vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__head_pop_head_addr = VL_RAND_RESET_I(2);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__head_pop_head_data = VL_RAND_RESET_I(2);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__head_pop_head2_MPORT_addr = VL_RAND_RESET_I(2);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__head_pop_head2_MPORT_data = VL_RAND_RESET_I(2);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__head_MPORT_2_data = VL_RAND_RESET_I(2);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__head_MPORT_2_addr = VL_RAND_RESET_I(2);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__head_MPORT_6_en = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__head_MPORT_9_en = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__tail[__Vi0] = VL_RAND_RESET_I(2);
    }
    vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__tail_push_tail_data = VL_RAND_RESET_I(2);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__tail_MPORT_3_en = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__next[__Vi0] = VL_RAND_RESET_I(2);
    }
    vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__next_MPORT_1_en = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(132, vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__data[__Vi0]);
    }
    VL_RAND_RESET_W(132, vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__data_io_data2_MPORT_data);
    VL_RAND_RESET_W(132, vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__data_io_data_MPORT_data);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__valid = VL_RAND_RESET_I(4);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__used = VL_RAND_RESET_I(4);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__freeOH = VL_RAND_RESET_I(5);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT___freeIdx_T_1 = VL_RAND_RESET_I(4);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT__freeIdx = VL_RAND_RESET_I(3);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT___push_valid_T = VL_RAND_RESET_I(4);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT___used_T_1 = VL_RAND_RESET_I(4);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT___valid_T_1 = VL_RAND_RESET_I(4);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT____VdfgTmp_h8585db02__0 = 0;
    vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkA__DOT__putbuffer__DOT____VdfgTmp_habdfb808__0 = 0;
    vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkD__DOT__io_source_r = VL_RAND_RESET_I(4);
    VL_RAND_RESET_W(128, vlSelf->GPGPU_top__DOT__l2cache__DOT__sinkD__DOT__full_mask);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__cc_dir_io_r_req_valid = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__cc_dir_io_r_resp_data_0 = VL_RAND_RESET_I(28);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__cc_dir_io_r_resp_data_1 = VL_RAND_RESET_I(28);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__cc_dir_io_r_resp_data_2 = VL_RAND_RESET_I(28);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__cc_dir_io_r_resp_data_3 = VL_RAND_RESET_I(28);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__cc_dir_io_w_req_valid = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__cc_dir_io_w_req_bits_setIdx = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__cc_dir_io_w_req_bits_data_0 = VL_RAND_RESET_I(28);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__wipeCount = VL_RAND_RESET_I(2);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__wipeOff = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__wipeDone = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT___wipeCount_T_1 = VL_RAND_RESET_I(2);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__ren = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT___wen_new_T_3 = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__ren1 = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__wen1 = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__tag = VL_RAND_RESET_I(27);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__set = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__state_reg = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__state_reg_1 = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__setQuash = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__writeWay1 = VL_RAND_RESET_I(2);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__hits = VL_RAND_RESET_I(4);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__hitWay_hi = VL_RAND_RESET_I(2);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__hitWay_lo = VL_RAND_RESET_I(2);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT___hitWay_T_1 = VL_RAND_RESET_I(2);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__writeSet1 = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__x6 = VL_RAND_RESET_I(2);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__io_result_bits_put_REG = VL_RAND_RESET_I(2);
    VL_RAND_RESET_W(128, vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__io_result_bits_data_REG);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__io_result_bits_offset_REG = VL_RAND_RESET_I(4);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__io_result_bits_set_REG = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__io_result_bits_source_REG = VL_RAND_RESET_I(4);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__io_result_bits_tag_REG = VL_RAND_RESET_I(27);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__io_result_bits_opcode_REG = VL_RAND_RESET_I(3);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__io_result_bits_mask_REG = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__cc_dir__DOT__array_0[__Vi0] = VL_RAND_RESET_I(28);
    }
    vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__cc_dir__DOT__array_0_MPORT_data = VL_RAND_RESET_I(28);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__cc_dir__DOT__array_0_MPORT_addr = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__cc_dir__DOT__array_0_MPORT_en = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__cc_dir__DOT__array_0_raw_rdata_en_pipe_0 = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__cc_dir__DOT__array_0_raw_rdata_addr_pipe_0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__cc_dir__DOT__array_1[__Vi0] = VL_RAND_RESET_I(28);
    }
    vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__cc_dir__DOT__array_1_raw_rdata_en_pipe_0 = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__cc_dir__DOT__array_1_raw_rdata_addr_pipe_0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__cc_dir__DOT__array_2[__Vi0] = VL_RAND_RESET_I(28);
    }
    vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__cc_dir__DOT__array_2_raw_rdata_en_pipe_0 = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__cc_dir__DOT__array_2_raw_rdata_addr_pipe_0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__cc_dir__DOT__array_3[__Vi0] = VL_RAND_RESET_I(28);
    }
    vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__cc_dir__DOT__array_3_raw_rdata_en_pipe_0 = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__cc_dir__DOT__array_3_raw_rdata_addr_pipe_0 = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__cc_dir__DOT__resetState = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__cc_dir__DOT__wrap_wrap = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__cc_dir__DOT___GEN_2 = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__cc_dir__DOT__bypass_wdata_REG_0 = VL_RAND_RESET_I(28);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__cc_dir__DOT__bypass_wdata_REG_1 = VL_RAND_RESET_I(28);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__cc_dir__DOT__bypass_wdata_REG_2 = VL_RAND_RESET_I(28);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__cc_dir__DOT__bypass_wdata_REG_3 = VL_RAND_RESET_I(28);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__cc_dir__DOT__bypass_mask_need_check = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__cc_dir__DOT__bypass_mask_waddr_reg = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__cc_dir__DOT__bypass_mask_raddr_reg = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__cc_dir__DOT__bypass_mask_bypass_REG = VL_RAND_RESET_I(4);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__directory__DOT__cc_dir__DOT__bypass_mask_bypass = VL_RAND_RESET_I(4);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_0_io_r_req_valid = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_0_io_r_req_bits_setIdx = VL_RAND_RESET_I(2);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_0_io_w_req_valid = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_1_io_r_req_valid = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_1_io_r_req_bits_setIdx = VL_RAND_RESET_I(2);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_1_io_w_req_valid = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_2_io_r_req_valid = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_2_io_r_req_bits_setIdx = VL_RAND_RESET_I(2);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_2_io_w_req_valid = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_3_io_r_req_valid = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_3_io_r_req_bits_setIdx = VL_RAND_RESET_I(2);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_3_io_w_req_valid = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_4_io_r_req_valid = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_4_io_r_req_bits_setIdx = VL_RAND_RESET_I(2);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_4_io_w_req_valid = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_5_io_r_req_valid = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_5_io_r_req_bits_setIdx = VL_RAND_RESET_I(2);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_5_io_w_req_valid = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_6_io_r_req_valid = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_6_io_r_req_bits_setIdx = VL_RAND_RESET_I(2);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_6_io_w_req_valid = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_7_io_r_req_valid = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_7_io_r_req_bits_setIdx = VL_RAND_RESET_I(2);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_7_io_w_req_valid = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__sinkD_req_select_shiftAmount = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__reqs_0_index = VL_RAND_RESET_I(2);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__sourceD_rreq_select_shiftAmount = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__reqs_1_bankSel = VL_RAND_RESET_I(8);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__reqs_2_bankSum = VL_RAND_RESET_I(8);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT___sourceD_rreq_ready_T_1 = VL_RAND_RESET_I(4);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT___sourceD_rreq_ready_T_5 = VL_RAND_RESET_I(4);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__reqs_2_index = VL_RAND_RESET_I(2);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__reqs_2_bankSel = VL_RAND_RESET_I(8);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT___sourceD_rreq_out_bankEn_T_6 = VL_RAND_RESET_I(8);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__reqs_2_bankEn = VL_RAND_RESET_I(8);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT___sourceD_wreq_ready_T_1 = VL_RAND_RESET_I(4);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT___sourceD_wreq_ready_T_5 = VL_RAND_RESET_I(4);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__reqs_1_bankEn = VL_RAND_RESET_I(8);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__regout_en = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__regout_sel_1 = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__regout_wen = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__regout_REG = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__regout_r = VL_RAND_RESET_I(32);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__regout_en_1 = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__regout_sel_1_1 = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__regout_wen_1 = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__regout_REG_1 = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__regout_r_1 = VL_RAND_RESET_I(32);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__regout_en_2 = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__regout_sel_1_2 = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__regout_wen_2 = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__regout_REG_2 = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__regout_r_2 = VL_RAND_RESET_I(32);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__regout_en_3 = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__regout_sel_1_3 = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__regout_wen_3 = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__regout_REG_3 = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__regout_r_3 = VL_RAND_RESET_I(32);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__regout_en_4 = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__regout_sel_1_4 = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__regout_wen_4 = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__regout_REG_4 = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__regout_r_4 = VL_RAND_RESET_I(32);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__regout_en_5 = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__regout_sel_1_5 = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__regout_wen_5 = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__regout_REG_5 = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__regout_r_5 = VL_RAND_RESET_I(32);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__regout_en_6 = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__regout_sel_1_6 = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__regout_wen_6 = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__regout_REG_6 = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__regout_r_6 = VL_RAND_RESET_I(32);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__regout_en_7 = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__regout_sel_1_7 = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__regout_wen_7 = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__regout_REG_7 = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__regout_r_7 = VL_RAND_RESET_I(32);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__regsel_sourceD_REG = VL_RAND_RESET_I(8);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__regsel_sourceD = VL_RAND_RESET_I(8);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__decodeDX_0 = VL_RAND_RESET_I(32);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__decodeDX_1 = VL_RAND_RESET_I(32);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__decodeDX_2 = VL_RAND_RESET_I(32);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__decodeDX_3 = VL_RAND_RESET_I(32);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT____VdfgTmp_hc0824628__0 = 0;
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT____VdfgTmp_hc46625d2__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_0__DOT__array_0[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_0__DOT__array_0_raw_rdata_en_pipe_0 = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_0__DOT__array_0_raw_rdata_addr_pipe_0 = VL_RAND_RESET_I(2);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_0__DOT__resetState = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_0__DOT__resetSet = VL_RAND_RESET_I(2);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_0__DOT___wrap_value_T_1 = VL_RAND_RESET_I(2);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_0__DOT___GEN_2 = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_0__DOT__bypass_wdata_lfsr = VL_RAND_RESET_Q(64);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_0__DOT___bypass_wdata_lfsr_T_2 = VL_RAND_RESET_Q(64);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_0__DOT__bypass_mask_need_check = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_0__DOT__bypass_mask_waddr_reg = VL_RAND_RESET_I(2);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_0__DOT__bypass_mask_raddr_reg = VL_RAND_RESET_I(2);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_1__DOT__array_0[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_1__DOT__array_0_raw_rdata_en_pipe_0 = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_1__DOT__array_0_raw_rdata_addr_pipe_0 = VL_RAND_RESET_I(2);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_1__DOT__resetState = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_1__DOT__resetSet = VL_RAND_RESET_I(2);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_1__DOT___wrap_value_T_1 = VL_RAND_RESET_I(2);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_1__DOT___GEN_2 = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_1__DOT__bypass_wdata_lfsr = VL_RAND_RESET_Q(64);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_1__DOT___bypass_wdata_lfsr_T_2 = VL_RAND_RESET_Q(64);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_1__DOT__bypass_mask_need_check = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_1__DOT__bypass_mask_waddr_reg = VL_RAND_RESET_I(2);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_1__DOT__bypass_mask_raddr_reg = VL_RAND_RESET_I(2);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_2__DOT__array_0[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_2__DOT__array_0_raw_rdata_en_pipe_0 = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_2__DOT__array_0_raw_rdata_addr_pipe_0 = VL_RAND_RESET_I(2);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_2__DOT__resetState = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_2__DOT__resetSet = VL_RAND_RESET_I(2);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_2__DOT___wrap_value_T_1 = VL_RAND_RESET_I(2);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_2__DOT___GEN_2 = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_2__DOT__bypass_wdata_lfsr = VL_RAND_RESET_Q(64);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_2__DOT___bypass_wdata_lfsr_T_2 = VL_RAND_RESET_Q(64);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_2__DOT__bypass_mask_need_check = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_2__DOT__bypass_mask_raddr_reg = VL_RAND_RESET_I(2);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_3__DOT__array_0[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_3__DOT__array_0_raw_rdata_en_pipe_0 = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_3__DOT__array_0_raw_rdata_addr_pipe_0 = VL_RAND_RESET_I(2);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_3__DOT__resetState = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_3__DOT__resetSet = VL_RAND_RESET_I(2);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_3__DOT___wrap_value_T_1 = VL_RAND_RESET_I(2);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_3__DOT___GEN_2 = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_3__DOT__bypass_wdata_lfsr = VL_RAND_RESET_Q(64);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_3__DOT___bypass_wdata_lfsr_T_2 = VL_RAND_RESET_Q(64);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_3__DOT__bypass_mask_need_check = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_3__DOT__bypass_mask_waddr_reg = VL_RAND_RESET_I(2);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_3__DOT__bypass_mask_raddr_reg = VL_RAND_RESET_I(2);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_4__DOT__array_0[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_4__DOT__array_0_raw_rdata_en_pipe_0 = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_4__DOT__array_0_raw_rdata_addr_pipe_0 = VL_RAND_RESET_I(2);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_4__DOT__resetState = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_4__DOT__resetSet = VL_RAND_RESET_I(2);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_4__DOT___wrap_value_T_1 = VL_RAND_RESET_I(2);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_4__DOT___GEN_2 = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_4__DOT__bypass_wdata_lfsr = VL_RAND_RESET_Q(64);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_4__DOT___bypass_wdata_lfsr_T_2 = VL_RAND_RESET_Q(64);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_4__DOT__bypass_mask_need_check = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_4__DOT__bypass_mask_waddr_reg = VL_RAND_RESET_I(2);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_4__DOT__bypass_mask_raddr_reg = VL_RAND_RESET_I(2);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_5__DOT__array_0[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_5__DOT__array_0_raw_rdata_en_pipe_0 = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_5__DOT__array_0_raw_rdata_addr_pipe_0 = VL_RAND_RESET_I(2);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_5__DOT__resetState = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_5__DOT__resetSet = VL_RAND_RESET_I(2);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_5__DOT___wrap_value_T_1 = VL_RAND_RESET_I(2);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_5__DOT___GEN_2 = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_5__DOT__bypass_wdata_lfsr = VL_RAND_RESET_Q(64);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_5__DOT___bypass_wdata_lfsr_T_2 = VL_RAND_RESET_Q(64);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_5__DOT__bypass_mask_need_check = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_5__DOT__bypass_mask_waddr_reg = VL_RAND_RESET_I(2);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_5__DOT__bypass_mask_raddr_reg = VL_RAND_RESET_I(2);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_6__DOT__array_0[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_6__DOT__array_0_raw_rdata_en_pipe_0 = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_6__DOT__array_0_raw_rdata_addr_pipe_0 = VL_RAND_RESET_I(2);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_6__DOT__resetState = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_6__DOT__resetSet = VL_RAND_RESET_I(2);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_6__DOT___wrap_value_T_1 = VL_RAND_RESET_I(2);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_6__DOT___GEN_2 = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_6__DOT__bypass_wdata_lfsr = VL_RAND_RESET_Q(64);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_6__DOT___bypass_wdata_lfsr_T_2 = VL_RAND_RESET_Q(64);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_6__DOT__bypass_mask_need_check = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_6__DOT__bypass_mask_raddr_reg = VL_RAND_RESET_I(2);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_7__DOT__array_0[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_7__DOT__array_0_raw_rdata_en_pipe_0 = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_7__DOT__array_0_raw_rdata_addr_pipe_0 = VL_RAND_RESET_I(2);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_7__DOT__resetState = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_7__DOT__resetSet = VL_RAND_RESET_I(2);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_7__DOT___wrap_value_T_1 = VL_RAND_RESET_I(2);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_7__DOT___GEN_2 = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_7__DOT__bypass_wdata_lfsr = VL_RAND_RESET_Q(64);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_7__DOT___bypass_wdata_lfsr_T_2 = VL_RAND_RESET_Q(64);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_7__DOT__bypass_mask_need_check = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_7__DOT__bypass_mask_waddr_reg = VL_RAND_RESET_I(2);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__bankedStore__DOT__cc_banks_7__DOT__bypass_mask_raddr_reg = VL_RAND_RESET_I(2);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->GPGPU_top__DOT__l2cache__DOT__requests__DOT__head[__Vi0] = VL_RAND_RESET_I(2);
    }
    vlSelf->GPGPU_top__DOT__l2cache__DOT__requests__DOT__head_pop_head_addr = VL_RAND_RESET_I(2);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__requests__DOT__head_pop_head_data = VL_RAND_RESET_I(2);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__requests__DOT__head_MPORT_2_data = VL_RAND_RESET_I(2);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__requests__DOT__head_MPORT_2_addr = VL_RAND_RESET_I(2);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__requests__DOT__head_MPORT_6_en = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->GPGPU_top__DOT__l2cache__DOT__requests__DOT__tail[__Vi0] = VL_RAND_RESET_I(2);
    }
    vlSelf->GPGPU_top__DOT__l2cache__DOT__requests__DOT__tail_push_tail_data = VL_RAND_RESET_I(2);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__requests__DOT__tail_MPORT_3_en = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->GPGPU_top__DOT__l2cache__DOT__requests__DOT__next[__Vi0] = VL_RAND_RESET_I(2);
    }
    vlSelf->GPGPU_top__DOT__l2cache__DOT__requests__DOT__next_MPORT_1_en = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->GPGPU_top__DOT__l2cache__DOT__requests__DOT__data[__Vi0] = VL_RAND_RESET_I(4);
    }
    vlSelf->GPGPU_top__DOT__l2cache__DOT__requests__DOT__valid = VL_RAND_RESET_I(4);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__requests__DOT__used = VL_RAND_RESET_I(4);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__requests__DOT__freeOH = VL_RAND_RESET_I(5);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__requests__DOT___freeIdx_T_1 = VL_RAND_RESET_I(4);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__requests__DOT___push_valid_T = VL_RAND_RESET_I(4);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__requests__DOT___used_T_4 = VL_RAND_RESET_I(4);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__requests__DOT___valid_T_4 = VL_RAND_RESET_I(4);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__requests__DOT____VdfgTmp_h8585db02__0 = 0;
    vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_0__DOT__request_opcode = VL_RAND_RESET_I(3);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_0__DOT__request_tag = VL_RAND_RESET_I(27);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_0__DOT__request_offset = VL_RAND_RESET_I(4);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_0__DOT__request_put = VL_RAND_RESET_I(2);
    VL_RAND_RESET_W(128, vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_0__DOT__request_data);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_0__DOT__request_mask = VL_RAND_RESET_I(4);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_0__DOT__request_set = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_0__DOT__request_way = VL_RAND_RESET_I(2);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_0__DOT__sche_a_valid = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_0__DOT__sche_dir_valid = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_0__DOT__sink_d_reg = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_0__DOT___T = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_0__DOT___GEN_12 = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_0__DOT___GEN_15 = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_0__DOT___GEN_16 = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_1__DOT__request_opcode = VL_RAND_RESET_I(3);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_1__DOT__request_tag = VL_RAND_RESET_I(27);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_1__DOT__request_offset = VL_RAND_RESET_I(4);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_1__DOT__request_put = VL_RAND_RESET_I(2);
    VL_RAND_RESET_W(128, vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_1__DOT__request_data);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_1__DOT__request_mask = VL_RAND_RESET_I(4);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_1__DOT__request_set = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_1__DOT__request_way = VL_RAND_RESET_I(2);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_1__DOT__sche_a_valid = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_1__DOT__sche_dir_valid = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_1__DOT__sink_d_reg = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_1__DOT___T = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_1__DOT___GEN_12 = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_1__DOT___GEN_15 = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_1__DOT___GEN_16 = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_2__DOT__request_opcode = VL_RAND_RESET_I(3);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_2__DOT__request_tag = VL_RAND_RESET_I(27);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_2__DOT__request_offset = VL_RAND_RESET_I(4);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_2__DOT__request_put = VL_RAND_RESET_I(2);
    VL_RAND_RESET_W(128, vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_2__DOT__request_data);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_2__DOT__request_mask = VL_RAND_RESET_I(4);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_2__DOT__request_set = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_2__DOT__request_way = VL_RAND_RESET_I(2);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_2__DOT__sche_a_valid = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_2__DOT__sche_dir_valid = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_2__DOT__sink_d_reg = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_2__DOT___T = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_2__DOT___GEN_12 = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_2__DOT___GEN_15 = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_2__DOT___GEN_16 = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_3__DOT__request_opcode = VL_RAND_RESET_I(3);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_3__DOT__request_tag = VL_RAND_RESET_I(27);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_3__DOT__request_offset = VL_RAND_RESET_I(4);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_3__DOT__request_put = VL_RAND_RESET_I(2);
    VL_RAND_RESET_W(128, vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_3__DOT__request_data);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_3__DOT__request_mask = VL_RAND_RESET_I(4);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_3__DOT__request_set = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_3__DOT__request_way = VL_RAND_RESET_I(2);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_3__DOT__sche_a_valid = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_3__DOT__sche_dir_valid = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_3__DOT__sink_d_reg = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_3__DOT___T = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_3__DOT___GEN_12 = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_3__DOT___GEN_15 = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__mshrs_3__DOT___GEN_16 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->GPGPU_top__DOT__l2cache__DOT__write_buffer__DOT__ram_opcode[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->GPGPU_top__DOT__l2cache__DOT__write_buffer__DOT__ram_opcode_MPORT_en = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->GPGPU_top__DOT__l2cache__DOT__write_buffer__DOT__ram_size[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->GPGPU_top__DOT__l2cache__DOT__write_buffer__DOT__ram_source[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->GPGPU_top__DOT__l2cache__DOT__write_buffer__DOT__ram_tag[__Vi0] = VL_RAND_RESET_I(27);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->GPGPU_top__DOT__l2cache__DOT__write_buffer__DOT__ram_offset[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(128, vlSelf->GPGPU_top__DOT__l2cache__DOT__write_buffer__DOT__ram_data[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->GPGPU_top__DOT__l2cache__DOT__write_buffer__DOT__ram_mask[__Vi0] = VL_RAND_RESET_I(4);
    }
    vlSelf->GPGPU_top__DOT__l2cache__DOT__write_buffer__DOT__ram_mask_MPORT_data = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->GPGPU_top__DOT__l2cache__DOT__write_buffer__DOT__ram_set[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->GPGPU_top__DOT__l2cache__DOT__write_buffer__DOT__enq_ptr_value = VL_RAND_RESET_I(2);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__write_buffer__DOT__deq_ptr_value = VL_RAND_RESET_I(2);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__write_buffer__DOT__maybe_full = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__write_buffer__DOT__ptr_match = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__write_buffer__DOT__empty = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__write_buffer__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__write_buffer__DOT__do_deq = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__write_buffer__DOT___value_T_1 = VL_RAND_RESET_I(2);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__write_buffer__DOT___value_T_3 = VL_RAND_RESET_I(2);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__ram_opcode[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__ram_opcode_MPORT_en = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__ram_size[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__ram_source[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__ram_tag[__Vi0] = VL_RAND_RESET_I(27);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__ram_offset[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__ram_put[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(128, vlSelf->GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__ram_data[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__ram_mask[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__ram_set[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__ram_hit[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__ram_hit_MPORT_data = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__ram_way[__Vi0] = VL_RAND_RESET_I(2);
    }
    vlSelf->GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__ram_way_MPORT_data = VL_RAND_RESET_I(2);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__enq_ptr_value = VL_RAND_RESET_I(2);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__deq_ptr_value = VL_RAND_RESET_I(2);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__maybe_full = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__ptr_match = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__empty = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT__do_deq = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT___value_T_1 = VL_RAND_RESET_I(2);
    vlSelf->GPGPU_top__DOT__l2cache__DOT__dir_result_buffer__DOT___value_T_3 = VL_RAND_RESET_I(2);
    vlSelf->GPGPU_top__DOT__sm2L2Arb__DOT__memReqArb_io_in_1_ready = VL_RAND_RESET_I(1);
    vlSelf->GPGPU_top__DOT__sm2L2Arb__DOT___io_memRspIn_ready_T_6 = VL_RAND_RESET_I(2);
    vlSelf->__Vdly__GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__cu_id_out = VL_RAND_RESET_I(2);
    vlSelf->__Vdly__GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__size_ram_cu_id_found = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__size_ram_valid = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__GPGPU_top__DOT__cta__DOT__cta_sche__DOT__allocator_neo_i__DOT__wg_id_out = VL_RAND_RESET_I(5);
    vlSelf->__Vdly__GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__wf_slot_id_gen__DOT__wg_slot_id_find_i = VL_RAND_RESET_I(2);
    vlSelf->__Vdly__GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__inflight_tbl_alloc_st = VL_RAND_RESET_I(8);
    vlSelf->__Vdly__GPGPU_top__DOT__cta__DOT__cta_sche__DOT__inflight_wg_buffer_i__DOT__wg_waiting_alloc_valid = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__dispatch2cu_wf_tag_dispatch_i = VL_RAND_RESET_I(5);
    vlSelf->__Vdly__GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__alloc_st = VL_RAND_RESET_I(4);
    vlSelf->__Vdly__GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__dealloc_st = VL_RAND_RESET_I(5);
    vlSelf->__Vdly__GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__next_served_dealloc_valid = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__dealloc_st = VL_RAND_RESET_I(3);
    vlSelf->__Vdly__GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler__DOT__next_served_dealloc = VL_RAND_RESET_I(2);
    vlSelf->__Vdly__GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__next_served_dealloc_valid = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__dealloc_st = VL_RAND_RESET_I(3);
    vlSelf->__Vdly__GPGPU_top__DOT__cta__DOT__cta_sche__DOT__gpu_interface_i__DOT__cu_handler_1__DOT__next_served_dealloc = VL_RAND_RESET_I(2);
    vlSelf->__Vdly__GPGPU_top__DOT__cta__DOT__cta_sche__DOT__dis_controller_i__DOT__alloc_st = VL_RAND_RESET_I(4);
    vlSelf->__Vdly__GPGPU_top__DOT__cta__DOT__cta_sche__DOT__dis_controller_i__DOT__alloc_waiting = VL_RAND_RESET_I(1);
    vlSelf->__VstlIterCount = 0;
    vlSelf->__VicoIterCount = 0;
    vlSelf->__Vtrigrprev__TOP__clock = VL_RAND_RESET_I(1);
    vlSelf->__VactIterCount = 0;
    vlSelf->__VactContinue = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
