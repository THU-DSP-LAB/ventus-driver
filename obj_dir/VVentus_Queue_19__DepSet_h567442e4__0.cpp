// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VVentus.h for the primary calling header

#include "verilated.h"

#include "VVentus_Queue_19.h"
#include "VVentus__Syms.h"

VL_INLINE_OPT void VVentus_Queue_19___nba_sequent__TOP__GPGPU_top__DOT__SM_wrapper__pipe__DOT__ibuffer__DOT__fifo_0__0(VVentus_Queue_19* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VVentus__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VVentus_Queue_19___nba_sequent__TOP__GPGPU_top__DOT__SM_wrapper__pipe__DOT__ibuffer__DOT__fifo_0__0\n"); );
    // Init
    CData/*0:0*/ __Vdlyvdim0__ram_readmask__v0;
    CData/*0:0*/ __Vdlyvval__ram_readmask__v0;
    CData/*0:0*/ __Vdlyvset__ram_readmask__v0;
    CData/*0:0*/ __Vdlyvdim0__ram_sfu__v0;
    CData/*0:0*/ __Vdlyvval__ram_sfu__v0;
    CData/*0:0*/ __Vdlyvset__ram_sfu__v0;
    CData/*0:0*/ __Vdlyvdim0__ram_fence__v0;
    CData/*0:0*/ __Vdlyvval__ram_fence__v0;
    CData/*0:0*/ __Vdlyvset__ram_fence__v0;
    CData/*0:0*/ __Vdlyvdim0__ram_wfd__v0;
    CData/*0:0*/ __Vdlyvval__ram_wfd__v0;
    CData/*0:0*/ __Vdlyvset__ram_wfd__v0;
    CData/*0:0*/ __Vdlyvdim0__ram_reg_idxw__v0;
    CData/*4:0*/ __Vdlyvval__ram_reg_idxw__v0;
    CData/*0:0*/ __Vdlyvset__ram_reg_idxw__v0;
    CData/*0:0*/ __Vdlyvdim0__ram_reg_idx2__v0;
    CData/*4:0*/ __Vdlyvval__ram_reg_idx2__v0;
    CData/*0:0*/ __Vdlyvset__ram_reg_idx2__v0;
    CData/*0:0*/ __Vdlyvdim0__ram_reg_idx1__v0;
    CData/*4:0*/ __Vdlyvval__ram_reg_idx1__v0;
    CData/*0:0*/ __Vdlyvset__ram_reg_idx1__v0;
    CData/*0:0*/ __Vdlyvdim0__ram_mop__v0;
    CData/*1:0*/ __Vdlyvval__ram_mop__v0;
    CData/*0:0*/ __Vdlyvset__ram_mop__v0;
    CData/*0:0*/ __Vdlyvdim0__ram_mem_cmd__v0;
    CData/*1:0*/ __Vdlyvval__ram_mem_cmd__v0;
    CData/*0:0*/ __Vdlyvset__ram_mem_cmd__v0;
    CData/*0:0*/ __Vdlyvdim0__ram_mul__v0;
    CData/*0:0*/ __Vdlyvval__ram_mul__v0;
    CData/*0:0*/ __Vdlyvset__ram_mul__v0;
    CData/*0:0*/ __Vdlyvdim0__ram_mem__v0;
    CData/*0:0*/ __Vdlyvval__ram_mem__v0;
    CData/*0:0*/ __Vdlyvset__ram_mem__v0;
    CData/*0:0*/ __Vdlyvdim0__ram_alu_fn__v0;
    CData/*5:0*/ __Vdlyvval__ram_alu_fn__v0;
    CData/*0:0*/ __Vdlyvset__ram_alu_fn__v0;
    CData/*0:0*/ __Vdlyvdim0__ram_mem_unsigned__v0;
    CData/*0:0*/ __Vdlyvval__ram_mem_unsigned__v0;
    CData/*0:0*/ __Vdlyvset__ram_mem_unsigned__v0;
    CData/*0:0*/ __Vdlyvdim0__ram_sel_imm__v0;
    CData/*2:0*/ __Vdlyvval__ram_sel_imm__v0;
    CData/*0:0*/ __Vdlyvset__ram_sel_imm__v0;
    CData/*0:0*/ __Vdlyvdim0__ram_simt_stack__v0;
    CData/*0:0*/ __Vdlyvval__ram_simt_stack__v0;
    CData/*0:0*/ __Vdlyvset__ram_simt_stack__v0;
    CData/*0:0*/ __Vdlyvdim0__ram_branch__v0;
    CData/*1:0*/ __Vdlyvval__ram_branch__v0;
    CData/*0:0*/ __Vdlyvset__ram_branch__v0;
    CData/*0:0*/ __Vdly__enq_ptr_value;
    CData/*0:0*/ __Vdlyvdim0__ram_simt_stack_op__v0;
    CData/*0:0*/ __Vdlyvval__ram_simt_stack_op__v0;
    CData/*0:0*/ __Vdlyvset__ram_simt_stack_op__v0;
    CData/*0:0*/ __Vdlyvdim0__ram_inst__v0;
    IData/*31:0*/ __Vdlyvval__ram_inst__v0;
    CData/*0:0*/ __Vdlyvset__ram_inst__v0;
    CData/*0:0*/ __Vdlyvdim0__ram_reg_idx3__v0;
    CData/*4:0*/ __Vdlyvval__ram_reg_idx3__v0;
    CData/*0:0*/ __Vdlyvset__ram_reg_idx3__v0;
    CData/*0:0*/ __Vdlyvdim0__ram_isvec__v0;
    CData/*0:0*/ __Vdlyvval__ram_isvec__v0;
    CData/*0:0*/ __Vdlyvset__ram_isvec__v0;
    CData/*0:0*/ __Vdlyvdim0__ram_barrier__v0;
    CData/*0:0*/ __Vdlyvval__ram_barrier__v0;
    CData/*0:0*/ __Vdlyvset__ram_barrier__v0;
    CData/*0:0*/ __Vdlyvdim0__ram_csr__v0;
    CData/*1:0*/ __Vdlyvval__ram_csr__v0;
    CData/*0:0*/ __Vdlyvset__ram_csr__v0;
    CData/*0:0*/ __Vdlyvdim0__ram_wid__v0;
    CData/*1:0*/ __Vdlyvval__ram_wid__v0;
    CData/*0:0*/ __Vdlyvset__ram_wid__v0;
    CData/*0:0*/ __Vdlyvdim0__ram_reverse__v0;
    CData/*0:0*/ __Vdlyvval__ram_reverse__v0;
    CData/*0:0*/ __Vdlyvset__ram_reverse__v0;
    CData/*0:0*/ __Vdlyvdim0__ram_fp__v0;
    CData/*0:0*/ __Vdlyvval__ram_fp__v0;
    CData/*0:0*/ __Vdlyvset__ram_fp__v0;
    CData/*0:0*/ __Vdlyvdim0__ram_sel_alu2__v0;
    CData/*1:0*/ __Vdlyvval__ram_sel_alu2__v0;
    CData/*0:0*/ __Vdlyvset__ram_sel_alu2__v0;
    CData/*0:0*/ __Vdlyvdim0__ram_sel_alu1__v0;
    CData/*1:0*/ __Vdlyvval__ram_sel_alu1__v0;
    CData/*0:0*/ __Vdlyvset__ram_sel_alu1__v0;
    CData/*0:0*/ __Vdlyvdim0__ram_sel_alu3__v0;
    CData/*1:0*/ __Vdlyvval__ram_sel_alu3__v0;
    CData/*0:0*/ __Vdlyvset__ram_sel_alu3__v0;
    CData/*0:0*/ __Vdlyvdim0__ram_mask__v0;
    CData/*0:0*/ __Vdlyvval__ram_mask__v0;
    CData/*0:0*/ __Vdlyvset__ram_mask__v0;
    CData/*0:0*/ __Vdlyvdim0__ram_writemask__v0;
    CData/*0:0*/ __Vdlyvval__ram_writemask__v0;
    CData/*0:0*/ __Vdlyvset__ram_writemask__v0;
    CData/*0:0*/ __Vdlyvdim0__ram_wxd__v0;
    CData/*0:0*/ __Vdlyvval__ram_wxd__v0;
    CData/*0:0*/ __Vdlyvset__ram_wxd__v0;
    CData/*0:0*/ __Vdlyvdim0__ram_pc__v0;
    IData/*31:0*/ __Vdlyvval__ram_pc__v0;
    CData/*0:0*/ __Vdlyvset__ram_pc__v0;
    CData/*0:0*/ __Vdlyvdim0__ram_spike_info_pc__v0;
    IData/*31:0*/ __Vdlyvval__ram_spike_info_pc__v0;
    CData/*0:0*/ __Vdlyvset__ram_spike_info_pc__v0;
    CData/*0:0*/ __Vdlyvdim0__ram_spike_info_inst__v0;
    IData/*31:0*/ __Vdlyvval__ram_spike_info_inst__v0;
    CData/*0:0*/ __Vdlyvset__ram_spike_info_inst__v0;
    CData/*0:0*/ __Vdly__deq_ptr_value;
    // Body
    __Vdlyvset__ram_writemask__v0 = 0U;
    __Vdlyvset__ram_reverse__v0 = 0U;
    __Vdlyvset__ram_mem_unsigned__v0 = 0U;
    __Vdlyvset__ram_mul__v0 = 0U;
    __Vdlyvset__ram_mem_cmd__v0 = 0U;
    __Vdlyvset__ram_readmask__v0 = 0U;
    __Vdlyvset__ram_alu_fn__v0 = 0U;
    __Vdlyvset__ram_spike_info_pc__v0 = 0U;
    __Vdlyvset__ram_fence__v0 = 0U;
    __Vdlyvset__ram_pc__v0 = 0U;
    __Vdlyvset__ram_sel_imm__v0 = 0U;
    __Vdlyvset__ram_spike_info_inst__v0 = 0U;
    __Vdlyvset__ram_mop__v0 = 0U;
    __Vdlyvset__ram_inst__v0 = 0U;
    __Vdlyvset__ram_branch__v0 = 0U;
    __Vdlyvset__ram_simt_stack_op__v0 = 0U;
    __Vdlyvset__ram_csr__v0 = 0U;
    __Vdlyvset__ram_sfu__v0 = 0U;
    __Vdlyvset__ram_fp__v0 = 0U;
    __Vdlyvset__ram_simt_stack__v0 = 0U;
    __Vdlyvset__ram_wxd__v0 = 0U;
    __Vdlyvset__ram_wfd__v0 = 0U;
    __Vdlyvset__ram_barrier__v0 = 0U;
    __Vdlyvset__ram_reg_idxw__v0 = 0U;
    __Vdlyvset__ram_sel_alu1__v0 = 0U;
    __Vdlyvset__ram_mask__v0 = 0U;
    __Vdlyvset__ram_sel_alu2__v0 = 0U;
    __Vdlyvset__ram_reg_idx3__v0 = 0U;
    __Vdlyvset__ram_sel_alu3__v0 = 0U;
    __Vdlyvset__ram_reg_idx1__v0 = 0U;
    __Vdly__enq_ptr_value = vlSelf->__PVT__enq_ptr_value;
    __Vdlyvset__ram_mem__v0 = 0U;
    __Vdlyvset__ram_reg_idx2__v0 = 0U;
    __Vdlyvset__ram_isvec__v0 = 0U;
    __Vdlyvset__ram_wid__v0 = 0U;
    __Vdly__deq_ptr_value = vlSelf->__PVT__deq_ptr_value;
    if (vlSelf->__PVT__ram_inst_MPORT_en) {
        __Vdlyvval__ram_writemask__v0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__pipe__DOT__ibuffer__DOT__fifo_0_io_enq_bits_writemask;
        __Vdlyvset__ram_writemask__v0 = 1U;
        __Vdlyvdim0__ram_writemask__v0 = vlSelf->__PVT__enq_ptr_value;
        __Vdlyvval__ram_reverse__v0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__pipe__DOT__ibuffer__DOT__fifo_0_io_enq_bits_reverse;
        __Vdlyvset__ram_reverse__v0 = 1U;
        __Vdlyvdim0__ram_reverse__v0 = vlSelf->__PVT__enq_ptr_value;
        __Vdlyvval__ram_mem_unsigned__v0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__pipe__DOT__ibuffer__DOT__fifo_0_io_enq_bits_mem_unsigned;
        __Vdlyvset__ram_mem_unsigned__v0 = 1U;
        __Vdlyvdim0__ram_mem_unsigned__v0 = vlSelf->__PVT__enq_ptr_value;
        __Vdlyvval__ram_mul__v0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__pipe__DOT__ibuffer__DOT__fifo_0_io_enq_bits_mul;
        __Vdlyvset__ram_mul__v0 = 1U;
        __Vdlyvdim0__ram_mul__v0 = vlSelf->__PVT__enq_ptr_value;
        __Vdlyvval__ram_mem_cmd__v0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__pipe__DOT__ibuffer__DOT__fifo_0_io_enq_bits_mem_cmd;
        __Vdlyvset__ram_mem_cmd__v0 = 1U;
        __Vdlyvdim0__ram_mem_cmd__v0 = vlSelf->__PVT__enq_ptr_value;
        __Vdlyvval__ram_readmask__v0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__pipe__DOT__ibuffer__DOT__fifo_0_io_enq_bits_readmask;
        __Vdlyvset__ram_readmask__v0 = 1U;
        __Vdlyvdim0__ram_readmask__v0 = vlSelf->__PVT__enq_ptr_value;
        __Vdlyvval__ram_alu_fn__v0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__pipe__DOT__ibuffer__DOT__fifo_0_io_enq_bits_alu_fn;
        __Vdlyvset__ram_alu_fn__v0 = 1U;
        __Vdlyvdim0__ram_alu_fn__v0 = vlSelf->__PVT__enq_ptr_value;
        __Vdlyvval__ram_spike_info_pc__v0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__icache__DOT__addr_st2;
        __Vdlyvset__ram_spike_info_pc__v0 = 1U;
        __Vdlyvdim0__ram_spike_info_pc__v0 = vlSelf->__PVT__enq_ptr_value;
        __Vdlyvval__ram_fence__v0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__pipe__DOT__ibuffer__DOT__fifo_0_io_enq_bits_fence;
        __Vdlyvset__ram_fence__v0 = 1U;
        __Vdlyvdim0__ram_fence__v0 = vlSelf->__PVT__enq_ptr_value;
        __Vdlyvval__ram_pc__v0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__icache__DOT__addr_st2;
        __Vdlyvset__ram_pc__v0 = 1U;
        __Vdlyvdim0__ram_pc__v0 = vlSelf->__PVT__enq_ptr_value;
        __Vdlyvval__ram_sel_imm__v0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__pipe__DOT__ibuffer__DOT__fifo_0_io_enq_bits_sel_imm;
        __Vdlyvset__ram_sel_imm__v0 = 1U;
        __Vdlyvdim0__ram_sel_imm__v0 = vlSelf->__PVT__enq_ptr_value;
        __Vdlyvval__ram_spike_info_inst__v0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__icache__DOT__data_after_blockOffset_st2;
        __Vdlyvset__ram_spike_info_inst__v0 = 1U;
        __Vdlyvdim0__ram_spike_info_inst__v0 = vlSelf->__PVT__enq_ptr_value;
        __Vdlyvval__ram_mop__v0 = (3U & (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__icache__DOT__data_after_blockOffset_st2 
                                         >> 0x1aU));
        __Vdlyvset__ram_mop__v0 = 1U;
        __Vdlyvdim0__ram_mop__v0 = vlSelf->__PVT__enq_ptr_value;
        __Vdlyvval__ram_inst__v0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__icache__DOT__data_after_blockOffset_st2;
        __Vdlyvset__ram_inst__v0 = 1U;
        __Vdlyvdim0__ram_inst__v0 = vlSelf->__PVT__enq_ptr_value;
        __Vdlyvval__ram_branch__v0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__pipe__DOT__ibuffer__DOT__fifo_0_io_enq_bits_branch;
        __Vdlyvset__ram_branch__v0 = 1U;
        __Vdlyvdim0__ram_branch__v0 = vlSelf->__PVT__enq_ptr_value;
        __Vdlyvval__ram_simt_stack_op__v0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__pipe__DOT__ibuffer__DOT__fifo_0_io_enq_bits_simt_stack_op;
        __Vdlyvset__ram_simt_stack_op__v0 = 1U;
        __Vdlyvdim0__ram_simt_stack_op__v0 = vlSelf->__PVT__enq_ptr_value;
        __Vdlyvval__ram_csr__v0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__pipe__DOT__ibuffer__DOT__fifo_0_io_enq_bits_csr;
        __Vdlyvset__ram_csr__v0 = 1U;
        __Vdlyvdim0__ram_csr__v0 = vlSelf->__PVT__enq_ptr_value;
        __Vdlyvval__ram_sfu__v0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__pipe__DOT__ibuffer__DOT__fifo_0_io_enq_bits_sfu;
        __Vdlyvset__ram_sfu__v0 = 1U;
        __Vdlyvdim0__ram_sfu__v0 = vlSelf->__PVT__enq_ptr_value;
        __Vdlyvval__ram_fp__v0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__pipe__DOT__ibuffer__DOT__fifo_0_io_enq_bits_fp;
        __Vdlyvset__ram_fp__v0 = 1U;
        __Vdlyvdim0__ram_fp__v0 = vlSelf->__PVT__enq_ptr_value;
        __Vdlyvval__ram_simt_stack__v0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__pipe__DOT__ibuffer__DOT__fifo_0_io_enq_bits_simt_stack;
        __Vdlyvset__ram_simt_stack__v0 = 1U;
        __Vdlyvdim0__ram_simt_stack__v0 = vlSelf->__PVT__enq_ptr_value;
        __Vdlyvval__ram_wxd__v0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__pipe__DOT__ibuffer__DOT__fifo_0_io_enq_bits_wxd;
        __Vdlyvset__ram_wxd__v0 = 1U;
        __Vdlyvdim0__ram_wxd__v0 = vlSelf->__PVT__enq_ptr_value;
        __Vdlyvval__ram_wfd__v0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__pipe__DOT__ibuffer__DOT__fifo_0_io_enq_bits_wfd;
        __Vdlyvset__ram_wfd__v0 = 1U;
        __Vdlyvdim0__ram_wfd__v0 = vlSelf->__PVT__enq_ptr_value;
        __Vdlyvval__ram_barrier__v0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__pipe__DOT__ibuffer__DOT__fifo_0_io_enq_bits_barrier;
        __Vdlyvset__ram_barrier__v0 = 1U;
        __Vdlyvdim0__ram_barrier__v0 = vlSelf->__PVT__enq_ptr_value;
        __Vdlyvval__ram_reg_idxw__v0 = (0x1fU & (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__icache__DOT__data_after_blockOffset_st2 
                                                 >> 7U));
        __Vdlyvset__ram_reg_idxw__v0 = 1U;
        __Vdlyvdim0__ram_reg_idxw__v0 = vlSelf->__PVT__enq_ptr_value;
        __Vdlyvval__ram_sel_alu1__v0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__pipe__DOT__ibuffer__DOT__fifo_0_io_enq_bits_sel_alu1;
        __Vdlyvset__ram_sel_alu1__v0 = 1U;
        __Vdlyvdim0__ram_sel_alu1__v0 = vlSelf->__PVT__enq_ptr_value;
        __Vdlyvval__ram_mask__v0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__pipe__DOT__ibuffer__DOT__fifo_0_io_enq_bits_mask;
        __Vdlyvset__ram_mask__v0 = 1U;
        __Vdlyvdim0__ram_mask__v0 = vlSelf->__PVT__enq_ptr_value;
        __Vdlyvval__ram_sel_alu2__v0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__pipe__DOT__ibuffer__DOT__fifo_0_io_enq_bits_sel_alu2;
        __Vdlyvset__ram_sel_alu2__v0 = 1U;
        __Vdlyvdim0__ram_sel_alu2__v0 = vlSelf->__PVT__enq_ptr_value;
        __Vdlyvval__ram_reg_idx3__v0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__pipe__DOT__ibuffer__DOT__fifo_0_io_enq_bits_reg_idx3;
        __Vdlyvset__ram_reg_idx3__v0 = 1U;
        __Vdlyvdim0__ram_reg_idx3__v0 = vlSelf->__PVT__enq_ptr_value;
        __Vdlyvval__ram_sel_alu3__v0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__pipe__DOT__ibuffer__DOT__fifo_0_io_enq_bits_sel_alu3;
        __Vdlyvset__ram_sel_alu3__v0 = 1U;
        __Vdlyvdim0__ram_sel_alu3__v0 = vlSelf->__PVT__enq_ptr_value;
        __Vdlyvval__ram_reg_idx1__v0 = (0x1fU & (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__icache__DOT__data_after_blockOffset_st2 
                                                 >> 0xfU));
        __Vdlyvset__ram_reg_idx1__v0 = 1U;
        __Vdlyvdim0__ram_reg_idx1__v0 = vlSelf->__PVT__enq_ptr_value;
        __Vdlyvval__ram_mem__v0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__pipe__DOT__ibuffer__DOT__fifo_0_io_enq_bits_mem;
        __Vdlyvset__ram_mem__v0 = 1U;
        __Vdlyvdim0__ram_mem__v0 = vlSelf->__PVT__enq_ptr_value;
        __Vdlyvval__ram_reg_idx2__v0 = (0x1fU & (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__icache__DOT__data_after_blockOffset_st2 
                                                 >> 0x14U));
        __Vdlyvset__ram_reg_idx2__v0 = 1U;
        __Vdlyvdim0__ram_reg_idx2__v0 = vlSelf->__PVT__enq_ptr_value;
        __Vdlyvval__ram_isvec__v0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__pipe__DOT__ibuffer__DOT__fifo_0_io_enq_bits_isvec;
        __Vdlyvset__ram_isvec__v0 = 1U;
        __Vdlyvdim0__ram_isvec__v0 = vlSelf->__PVT__enq_ptr_value;
        __Vdlyvval__ram_wid__v0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__icache__DOT__warpid_st2;
        __Vdlyvset__ram_wid__v0 = 1U;
        __Vdlyvdim0__ram_wid__v0 = vlSelf->__PVT__enq_ptr_value;
    }
    if (vlSymsp->TOP.reset) {
        __Vdly__enq_ptr_value = 0U;
        __Vdly__deq_ptr_value = 0U;
        vlSelf->__PVT__maybe_full = 0U;
    } else if (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__pipe__DOT__ibuffer__DOT__fifo_0_io_flush) {
        __Vdly__enq_ptr_value = 0U;
        __Vdly__deq_ptr_value = 0U;
        vlSelf->__PVT__maybe_full = 0U;
    } else {
        if (vlSelf->__PVT__ram_inst_MPORT_en) {
            __Vdly__enq_ptr_value = (1U & ((IData)(1U) 
                                           + (IData)(vlSelf->__PVT__enq_ptr_value)));
        }
        if (vlSelf->__PVT__do_deq) {
            __Vdly__deq_ptr_value = (1U & ((IData)(1U) 
                                           + (IData)(vlSelf->__PVT__deq_ptr_value)));
        }
        if (((IData)(vlSelf->__PVT__ram_inst_MPORT_en) 
             != (IData)(vlSelf->__PVT__do_deq))) {
            vlSelf->__PVT__maybe_full = vlSelf->__PVT__ram_inst_MPORT_en;
        }
    }
    if (__Vdlyvset__ram_writemask__v0) {
        vlSelf->__PVT__ram_writemask[__Vdlyvdim0__ram_writemask__v0] 
            = __Vdlyvval__ram_writemask__v0;
    }
    if (__Vdlyvset__ram_reverse__v0) {
        vlSelf->__PVT__ram_reverse[__Vdlyvdim0__ram_reverse__v0] 
            = __Vdlyvval__ram_reverse__v0;
    }
    if (__Vdlyvset__ram_mem_unsigned__v0) {
        vlSelf->__PVT__ram_mem_unsigned[__Vdlyvdim0__ram_mem_unsigned__v0] 
            = __Vdlyvval__ram_mem_unsigned__v0;
    }
    if (__Vdlyvset__ram_mul__v0) {
        vlSelf->__PVT__ram_mul[__Vdlyvdim0__ram_mul__v0] 
            = __Vdlyvval__ram_mul__v0;
    }
    if (__Vdlyvset__ram_mem_cmd__v0) {
        vlSelf->__PVT__ram_mem_cmd[__Vdlyvdim0__ram_mem_cmd__v0] 
            = __Vdlyvval__ram_mem_cmd__v0;
    }
    if (__Vdlyvset__ram_readmask__v0) {
        vlSelf->__PVT__ram_readmask[__Vdlyvdim0__ram_readmask__v0] 
            = __Vdlyvval__ram_readmask__v0;
    }
    if (__Vdlyvset__ram_alu_fn__v0) {
        vlSelf->__PVT__ram_alu_fn[__Vdlyvdim0__ram_alu_fn__v0] 
            = __Vdlyvval__ram_alu_fn__v0;
    }
    if (__Vdlyvset__ram_spike_info_pc__v0) {
        vlSelf->__PVT__ram_spike_info_pc[__Vdlyvdim0__ram_spike_info_pc__v0] 
            = __Vdlyvval__ram_spike_info_pc__v0;
    }
    if (__Vdlyvset__ram_fence__v0) {
        vlSelf->__PVT__ram_fence[__Vdlyvdim0__ram_fence__v0] 
            = __Vdlyvval__ram_fence__v0;
    }
    if (__Vdlyvset__ram_pc__v0) {
        vlSelf->__PVT__ram_pc[__Vdlyvdim0__ram_pc__v0] 
            = __Vdlyvval__ram_pc__v0;
    }
    if (__Vdlyvset__ram_sel_imm__v0) {
        vlSelf->__PVT__ram_sel_imm[__Vdlyvdim0__ram_sel_imm__v0] 
            = __Vdlyvval__ram_sel_imm__v0;
    }
    if (__Vdlyvset__ram_spike_info_inst__v0) {
        vlSelf->__PVT__ram_spike_info_inst[__Vdlyvdim0__ram_spike_info_inst__v0] 
            = __Vdlyvval__ram_spike_info_inst__v0;
    }
    if (__Vdlyvset__ram_mop__v0) {
        vlSelf->__PVT__ram_mop[__Vdlyvdim0__ram_mop__v0] 
            = __Vdlyvval__ram_mop__v0;
    }
    if (__Vdlyvset__ram_inst__v0) {
        vlSelf->__PVT__ram_inst[__Vdlyvdim0__ram_inst__v0] 
            = __Vdlyvval__ram_inst__v0;
    }
    if (__Vdlyvset__ram_branch__v0) {
        vlSelf->__PVT__ram_branch[__Vdlyvdim0__ram_branch__v0] 
            = __Vdlyvval__ram_branch__v0;
    }
    if (__Vdlyvset__ram_simt_stack_op__v0) {
        vlSelf->__PVT__ram_simt_stack_op[__Vdlyvdim0__ram_simt_stack_op__v0] 
            = __Vdlyvval__ram_simt_stack_op__v0;
    }
    if (__Vdlyvset__ram_csr__v0) {
        vlSelf->__PVT__ram_csr[__Vdlyvdim0__ram_csr__v0] 
            = __Vdlyvval__ram_csr__v0;
    }
    if (__Vdlyvset__ram_sfu__v0) {
        vlSelf->__PVT__ram_sfu[__Vdlyvdim0__ram_sfu__v0] 
            = __Vdlyvval__ram_sfu__v0;
    }
    if (__Vdlyvset__ram_fp__v0) {
        vlSelf->__PVT__ram_fp[__Vdlyvdim0__ram_fp__v0] 
            = __Vdlyvval__ram_fp__v0;
    }
    if (__Vdlyvset__ram_simt_stack__v0) {
        vlSelf->__PVT__ram_simt_stack[__Vdlyvdim0__ram_simt_stack__v0] 
            = __Vdlyvval__ram_simt_stack__v0;
    }
    if (__Vdlyvset__ram_wxd__v0) {
        vlSelf->__PVT__ram_wxd[__Vdlyvdim0__ram_wxd__v0] 
            = __Vdlyvval__ram_wxd__v0;
    }
    if (__Vdlyvset__ram_wfd__v0) {
        vlSelf->__PVT__ram_wfd[__Vdlyvdim0__ram_wfd__v0] 
            = __Vdlyvval__ram_wfd__v0;
    }
    if (__Vdlyvset__ram_barrier__v0) {
        vlSelf->__PVT__ram_barrier[__Vdlyvdim0__ram_barrier__v0] 
            = __Vdlyvval__ram_barrier__v0;
    }
    if (__Vdlyvset__ram_reg_idxw__v0) {
        vlSelf->__PVT__ram_reg_idxw[__Vdlyvdim0__ram_reg_idxw__v0] 
            = __Vdlyvval__ram_reg_idxw__v0;
    }
    if (__Vdlyvset__ram_sel_alu1__v0) {
        vlSelf->__PVT__ram_sel_alu1[__Vdlyvdim0__ram_sel_alu1__v0] 
            = __Vdlyvval__ram_sel_alu1__v0;
    }
    if (__Vdlyvset__ram_mask__v0) {
        vlSelf->__PVT__ram_mask[__Vdlyvdim0__ram_mask__v0] 
            = __Vdlyvval__ram_mask__v0;
    }
    if (__Vdlyvset__ram_sel_alu2__v0) {
        vlSelf->__PVT__ram_sel_alu2[__Vdlyvdim0__ram_sel_alu2__v0] 
            = __Vdlyvval__ram_sel_alu2__v0;
    }
    if (__Vdlyvset__ram_reg_idx3__v0) {
        vlSelf->__PVT__ram_reg_idx3[__Vdlyvdim0__ram_reg_idx3__v0] 
            = __Vdlyvval__ram_reg_idx3__v0;
    }
    if (__Vdlyvset__ram_sel_alu3__v0) {
        vlSelf->__PVT__ram_sel_alu3[__Vdlyvdim0__ram_sel_alu3__v0] 
            = __Vdlyvval__ram_sel_alu3__v0;
    }
    if (__Vdlyvset__ram_reg_idx1__v0) {
        vlSelf->__PVT__ram_reg_idx1[__Vdlyvdim0__ram_reg_idx1__v0] 
            = __Vdlyvval__ram_reg_idx1__v0;
    }
    if (__Vdlyvset__ram_mem__v0) {
        vlSelf->__PVT__ram_mem[__Vdlyvdim0__ram_mem__v0] 
            = __Vdlyvval__ram_mem__v0;
    }
    if (__Vdlyvset__ram_reg_idx2__v0) {
        vlSelf->__PVT__ram_reg_idx2[__Vdlyvdim0__ram_reg_idx2__v0] 
            = __Vdlyvval__ram_reg_idx2__v0;
    }
    if (__Vdlyvset__ram_isvec__v0) {
        vlSelf->__PVT__ram_isvec[__Vdlyvdim0__ram_isvec__v0] 
            = __Vdlyvval__ram_isvec__v0;
    }
    if (__Vdlyvset__ram_wid__v0) {
        vlSelf->__PVT__ram_wid[__Vdlyvdim0__ram_wid__v0] 
            = __Vdlyvval__ram_wid__v0;
    }
    vlSelf->__PVT__enq_ptr_value = __Vdly__enq_ptr_value;
    vlSelf->__PVT__deq_ptr_value = __Vdly__deq_ptr_value;
    vlSelf->__PVT__io_deq_bits_fp = vlSelf->__PVT__ram_fp
        [vlSelf->__PVT__deq_ptr_value];
    vlSelf->__PVT__io_deq_bits_simt_stack_op = vlSelf->__PVT__ram_simt_stack_op
        [vlSelf->__PVT__deq_ptr_value];
    vlSelf->__PVT__io_deq_bits_csr = vlSelf->__PVT__ram_csr
        [vlSelf->__PVT__deq_ptr_value];
    vlSelf->__PVT__io_deq_bits_sfu = vlSelf->__PVT__ram_sfu
        [vlSelf->__PVT__deq_ptr_value];
    vlSelf->__PVT__io_deq_bits_simt_stack = vlSelf->__PVT__ram_simt_stack
        [vlSelf->__PVT__deq_ptr_value];
    vlSelf->__PVT__io_deq_bits_wfd = vlSelf->__PVT__ram_wfd
        [vlSelf->__PVT__deq_ptr_value];
    vlSelf->__PVT__io_deq_bits_wxd = vlSelf->__PVT__ram_wxd
        [vlSelf->__PVT__deq_ptr_value];
    vlSelf->__PVT__io_deq_bits_reg_idxw = vlSelf->__PVT__ram_reg_idxw
        [vlSelf->__PVT__deq_ptr_value];
    vlSelf->__PVT__io_deq_bits_barrier = vlSelf->__PVT__ram_barrier
        [vlSelf->__PVT__deq_ptr_value];
    vlSelf->__PVT__io_deq_bits_sel_alu1 = vlSelf->__PVT__ram_sel_alu1
        [vlSelf->__PVT__deq_ptr_value];
    vlSelf->__PVT__io_deq_bits_mask = vlSelf->__PVT__ram_mask
        [vlSelf->__PVT__deq_ptr_value];
    vlSelf->__PVT__io_deq_bits_sel_alu2 = vlSelf->__PVT__ram_sel_alu2
        [vlSelf->__PVT__deq_ptr_value];
    vlSelf->__PVT__io_deq_bits_reg_idx3 = vlSelf->__PVT__ram_reg_idx3
        [vlSelf->__PVT__deq_ptr_value];
    vlSelf->__PVT__io_deq_bits_sel_alu3 = vlSelf->__PVT__ram_sel_alu3
        [vlSelf->__PVT__deq_ptr_value];
    vlSelf->__PVT__io_deq_bits_reg_idx1 = vlSelf->__PVT__ram_reg_idx1
        [vlSelf->__PVT__deq_ptr_value];
    vlSelf->__PVT__io_deq_bits_mem = vlSelf->__PVT__ram_mem
        [vlSelf->__PVT__deq_ptr_value];
    vlSelf->__PVT__io_deq_bits_reg_idx2 = vlSelf->__PVT__ram_reg_idx2
        [vlSelf->__PVT__deq_ptr_value];
    vlSelf->__PVT__io_deq_bits_isvec = vlSelf->__PVT__ram_isvec
        [vlSelf->__PVT__deq_ptr_value];
    vlSelf->__PVT__ptr_match = ((IData)(vlSelf->__PVT__deq_ptr_value) 
                                == (IData)(vlSelf->__PVT__enq_ptr_value));
    vlSelf->__PVT__empty = ((~ (IData)(vlSelf->__PVT__maybe_full)) 
                            & (IData)(vlSelf->__PVT__ptr_match));
    vlSelf->__PVT__full = ((IData)(vlSelf->__PVT__ptr_match) 
                           & (IData)(vlSelf->__PVT__maybe_full));
}

VL_INLINE_OPT void VVentus_Queue_19___nba_sequent__TOP__GPGPU_top__DOT__SM_wrapper__pipe__DOT__ibuffer__DOT__fifo_0__1(VVentus_Queue_19* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VVentus__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VVentus_Queue_19___nba_sequent__TOP__GPGPU_top__DOT__SM_wrapper__pipe__DOT__ibuffer__DOT__fifo_0__1\n"); );
    // Body
    vlSelf->__PVT__ram_inst_MPORT_en = ((~ (IData)(vlSelf->__PVT__full)) 
                                        & ((0U == (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__icache__DOT__warpid_st2)) 
                                           & (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__pipe__DOT__ibuffer_io_in_valid)));
    vlSelf->__PVT__do_deq = ((~ (IData)(vlSelf->__PVT__empty)) 
                             & (((~ (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.pipe__DOT__ibuffer2issue__DOT__rrarbit__DOT____VdfgTmp_h25ce2aec__0)) 
                                 & (0U != (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__pipe__DOT__operand_collector__DOT__Demux__DOT___io_in_ready_T_4))) 
                                & (~ (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__pipe__DOT__warp_sche__DOT___warp_ready_T_3))));
}

VL_INLINE_OPT void VVentus_Queue_19___nba_sequent__TOP__GPGPU_top__DOT__SM_wrapper__pipe__DOT__ibuffer__DOT__fifo_1__0(VVentus_Queue_19* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VVentus__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VVentus_Queue_19___nba_sequent__TOP__GPGPU_top__DOT__SM_wrapper__pipe__DOT__ibuffer__DOT__fifo_1__0\n"); );
    // Init
    CData/*0:0*/ __Vdlyvdim0__ram_readmask__v0;
    CData/*0:0*/ __Vdlyvval__ram_readmask__v0;
    CData/*0:0*/ __Vdlyvset__ram_readmask__v0;
    CData/*0:0*/ __Vdlyvdim0__ram_sfu__v0;
    CData/*0:0*/ __Vdlyvval__ram_sfu__v0;
    CData/*0:0*/ __Vdlyvset__ram_sfu__v0;
    CData/*0:0*/ __Vdlyvdim0__ram_fence__v0;
    CData/*0:0*/ __Vdlyvval__ram_fence__v0;
    CData/*0:0*/ __Vdlyvset__ram_fence__v0;
    CData/*0:0*/ __Vdlyvdim0__ram_wfd__v0;
    CData/*0:0*/ __Vdlyvval__ram_wfd__v0;
    CData/*0:0*/ __Vdlyvset__ram_wfd__v0;
    CData/*0:0*/ __Vdlyvdim0__ram_reg_idxw__v0;
    CData/*4:0*/ __Vdlyvval__ram_reg_idxw__v0;
    CData/*0:0*/ __Vdlyvset__ram_reg_idxw__v0;
    CData/*0:0*/ __Vdlyvdim0__ram_reg_idx2__v0;
    CData/*4:0*/ __Vdlyvval__ram_reg_idx2__v0;
    CData/*0:0*/ __Vdlyvset__ram_reg_idx2__v0;
    CData/*0:0*/ __Vdlyvdim0__ram_reg_idx1__v0;
    CData/*4:0*/ __Vdlyvval__ram_reg_idx1__v0;
    CData/*0:0*/ __Vdlyvset__ram_reg_idx1__v0;
    CData/*0:0*/ __Vdlyvdim0__ram_mop__v0;
    CData/*1:0*/ __Vdlyvval__ram_mop__v0;
    CData/*0:0*/ __Vdlyvset__ram_mop__v0;
    CData/*0:0*/ __Vdlyvdim0__ram_mem_cmd__v0;
    CData/*1:0*/ __Vdlyvval__ram_mem_cmd__v0;
    CData/*0:0*/ __Vdlyvset__ram_mem_cmd__v0;
    CData/*0:0*/ __Vdlyvdim0__ram_mul__v0;
    CData/*0:0*/ __Vdlyvval__ram_mul__v0;
    CData/*0:0*/ __Vdlyvset__ram_mul__v0;
    CData/*0:0*/ __Vdlyvdim0__ram_mem__v0;
    CData/*0:0*/ __Vdlyvval__ram_mem__v0;
    CData/*0:0*/ __Vdlyvset__ram_mem__v0;
    CData/*0:0*/ __Vdlyvdim0__ram_alu_fn__v0;
    CData/*5:0*/ __Vdlyvval__ram_alu_fn__v0;
    CData/*0:0*/ __Vdlyvset__ram_alu_fn__v0;
    CData/*0:0*/ __Vdlyvdim0__ram_mem_unsigned__v0;
    CData/*0:0*/ __Vdlyvval__ram_mem_unsigned__v0;
    CData/*0:0*/ __Vdlyvset__ram_mem_unsigned__v0;
    CData/*0:0*/ __Vdlyvdim0__ram_sel_imm__v0;
    CData/*2:0*/ __Vdlyvval__ram_sel_imm__v0;
    CData/*0:0*/ __Vdlyvset__ram_sel_imm__v0;
    CData/*0:0*/ __Vdlyvdim0__ram_simt_stack__v0;
    CData/*0:0*/ __Vdlyvval__ram_simt_stack__v0;
    CData/*0:0*/ __Vdlyvset__ram_simt_stack__v0;
    CData/*0:0*/ __Vdlyvdim0__ram_branch__v0;
    CData/*1:0*/ __Vdlyvval__ram_branch__v0;
    CData/*0:0*/ __Vdlyvset__ram_branch__v0;
    CData/*0:0*/ __Vdly__enq_ptr_value;
    CData/*0:0*/ __Vdlyvdim0__ram_simt_stack_op__v0;
    CData/*0:0*/ __Vdlyvval__ram_simt_stack_op__v0;
    CData/*0:0*/ __Vdlyvset__ram_simt_stack_op__v0;
    CData/*0:0*/ __Vdlyvdim0__ram_inst__v0;
    IData/*31:0*/ __Vdlyvval__ram_inst__v0;
    CData/*0:0*/ __Vdlyvset__ram_inst__v0;
    CData/*0:0*/ __Vdlyvdim0__ram_reg_idx3__v0;
    CData/*4:0*/ __Vdlyvval__ram_reg_idx3__v0;
    CData/*0:0*/ __Vdlyvset__ram_reg_idx3__v0;
    CData/*0:0*/ __Vdlyvdim0__ram_isvec__v0;
    CData/*0:0*/ __Vdlyvval__ram_isvec__v0;
    CData/*0:0*/ __Vdlyvset__ram_isvec__v0;
    CData/*0:0*/ __Vdlyvdim0__ram_barrier__v0;
    CData/*0:0*/ __Vdlyvval__ram_barrier__v0;
    CData/*0:0*/ __Vdlyvset__ram_barrier__v0;
    CData/*0:0*/ __Vdlyvdim0__ram_csr__v0;
    CData/*1:0*/ __Vdlyvval__ram_csr__v0;
    CData/*0:0*/ __Vdlyvset__ram_csr__v0;
    CData/*0:0*/ __Vdlyvdim0__ram_wid__v0;
    CData/*1:0*/ __Vdlyvval__ram_wid__v0;
    CData/*0:0*/ __Vdlyvset__ram_wid__v0;
    CData/*0:0*/ __Vdlyvdim0__ram_reverse__v0;
    CData/*0:0*/ __Vdlyvval__ram_reverse__v0;
    CData/*0:0*/ __Vdlyvset__ram_reverse__v0;
    CData/*0:0*/ __Vdlyvdim0__ram_fp__v0;
    CData/*0:0*/ __Vdlyvval__ram_fp__v0;
    CData/*0:0*/ __Vdlyvset__ram_fp__v0;
    CData/*0:0*/ __Vdlyvdim0__ram_sel_alu2__v0;
    CData/*1:0*/ __Vdlyvval__ram_sel_alu2__v0;
    CData/*0:0*/ __Vdlyvset__ram_sel_alu2__v0;
    CData/*0:0*/ __Vdlyvdim0__ram_sel_alu1__v0;
    CData/*1:0*/ __Vdlyvval__ram_sel_alu1__v0;
    CData/*0:0*/ __Vdlyvset__ram_sel_alu1__v0;
    CData/*0:0*/ __Vdlyvdim0__ram_sel_alu3__v0;
    CData/*1:0*/ __Vdlyvval__ram_sel_alu3__v0;
    CData/*0:0*/ __Vdlyvset__ram_sel_alu3__v0;
    CData/*0:0*/ __Vdlyvdim0__ram_mask__v0;
    CData/*0:0*/ __Vdlyvval__ram_mask__v0;
    CData/*0:0*/ __Vdlyvset__ram_mask__v0;
    CData/*0:0*/ __Vdlyvdim0__ram_writemask__v0;
    CData/*0:0*/ __Vdlyvval__ram_writemask__v0;
    CData/*0:0*/ __Vdlyvset__ram_writemask__v0;
    CData/*0:0*/ __Vdlyvdim0__ram_wxd__v0;
    CData/*0:0*/ __Vdlyvval__ram_wxd__v0;
    CData/*0:0*/ __Vdlyvset__ram_wxd__v0;
    CData/*0:0*/ __Vdlyvdim0__ram_pc__v0;
    IData/*31:0*/ __Vdlyvval__ram_pc__v0;
    CData/*0:0*/ __Vdlyvset__ram_pc__v0;
    CData/*0:0*/ __Vdlyvdim0__ram_spike_info_pc__v0;
    IData/*31:0*/ __Vdlyvval__ram_spike_info_pc__v0;
    CData/*0:0*/ __Vdlyvset__ram_spike_info_pc__v0;
    CData/*0:0*/ __Vdlyvdim0__ram_spike_info_inst__v0;
    IData/*31:0*/ __Vdlyvval__ram_spike_info_inst__v0;
    CData/*0:0*/ __Vdlyvset__ram_spike_info_inst__v0;
    CData/*0:0*/ __Vdly__deq_ptr_value;
    // Body
    __Vdlyvset__ram_writemask__v0 = 0U;
    __Vdlyvset__ram_reverse__v0 = 0U;
    __Vdlyvset__ram_mem_unsigned__v0 = 0U;
    __Vdlyvset__ram_mul__v0 = 0U;
    __Vdlyvset__ram_mem_cmd__v0 = 0U;
    __Vdlyvset__ram_readmask__v0 = 0U;
    __Vdlyvset__ram_alu_fn__v0 = 0U;
    __Vdlyvset__ram_spike_info_pc__v0 = 0U;
    __Vdlyvset__ram_fence__v0 = 0U;
    __Vdlyvset__ram_pc__v0 = 0U;
    __Vdlyvset__ram_sel_imm__v0 = 0U;
    __Vdlyvset__ram_spike_info_inst__v0 = 0U;
    __Vdlyvset__ram_mop__v0 = 0U;
    __Vdlyvset__ram_inst__v0 = 0U;
    __Vdlyvset__ram_branch__v0 = 0U;
    __Vdlyvset__ram_simt_stack_op__v0 = 0U;
    __Vdlyvset__ram_csr__v0 = 0U;
    __Vdlyvset__ram_sfu__v0 = 0U;
    __Vdlyvset__ram_fp__v0 = 0U;
    __Vdlyvset__ram_simt_stack__v0 = 0U;
    __Vdlyvset__ram_wxd__v0 = 0U;
    __Vdlyvset__ram_wfd__v0 = 0U;
    __Vdlyvset__ram_barrier__v0 = 0U;
    __Vdlyvset__ram_reg_idxw__v0 = 0U;
    __Vdlyvset__ram_sel_alu1__v0 = 0U;
    __Vdlyvset__ram_mask__v0 = 0U;
    __Vdlyvset__ram_sel_alu2__v0 = 0U;
    __Vdlyvset__ram_reg_idx3__v0 = 0U;
    __Vdlyvset__ram_sel_alu3__v0 = 0U;
    __Vdlyvset__ram_reg_idx1__v0 = 0U;
    __Vdly__enq_ptr_value = vlSelf->__PVT__enq_ptr_value;
    __Vdlyvset__ram_mem__v0 = 0U;
    __Vdlyvset__ram_reg_idx2__v0 = 0U;
    __Vdlyvset__ram_isvec__v0 = 0U;
    __Vdlyvset__ram_wid__v0 = 0U;
    __Vdly__deq_ptr_value = vlSelf->__PVT__deq_ptr_value;
    if (vlSelf->__PVT__ram_inst_MPORT_en) {
        __Vdlyvval__ram_writemask__v0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__pipe__DOT__ibuffer__DOT__fifo_0_io_enq_bits_writemask;
        __Vdlyvset__ram_writemask__v0 = 1U;
        __Vdlyvdim0__ram_writemask__v0 = vlSelf->__PVT__enq_ptr_value;
        __Vdlyvval__ram_reverse__v0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__pipe__DOT__ibuffer__DOT__fifo_0_io_enq_bits_reverse;
        __Vdlyvset__ram_reverse__v0 = 1U;
        __Vdlyvdim0__ram_reverse__v0 = vlSelf->__PVT__enq_ptr_value;
        __Vdlyvval__ram_mem_unsigned__v0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__pipe__DOT__ibuffer__DOT__fifo_0_io_enq_bits_mem_unsigned;
        __Vdlyvset__ram_mem_unsigned__v0 = 1U;
        __Vdlyvdim0__ram_mem_unsigned__v0 = vlSelf->__PVT__enq_ptr_value;
        __Vdlyvval__ram_mul__v0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__pipe__DOT__ibuffer__DOT__fifo_0_io_enq_bits_mul;
        __Vdlyvset__ram_mul__v0 = 1U;
        __Vdlyvdim0__ram_mul__v0 = vlSelf->__PVT__enq_ptr_value;
        __Vdlyvval__ram_mem_cmd__v0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__pipe__DOT__ibuffer__DOT__fifo_0_io_enq_bits_mem_cmd;
        __Vdlyvset__ram_mem_cmd__v0 = 1U;
        __Vdlyvdim0__ram_mem_cmd__v0 = vlSelf->__PVT__enq_ptr_value;
        __Vdlyvval__ram_readmask__v0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__pipe__DOT__ibuffer__DOT__fifo_0_io_enq_bits_readmask;
        __Vdlyvset__ram_readmask__v0 = 1U;
        __Vdlyvdim0__ram_readmask__v0 = vlSelf->__PVT__enq_ptr_value;
        __Vdlyvval__ram_alu_fn__v0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__pipe__DOT__ibuffer__DOT__fifo_0_io_enq_bits_alu_fn;
        __Vdlyvset__ram_alu_fn__v0 = 1U;
        __Vdlyvdim0__ram_alu_fn__v0 = vlSelf->__PVT__enq_ptr_value;
        __Vdlyvval__ram_spike_info_pc__v0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__icache__DOT__addr_st2;
        __Vdlyvset__ram_spike_info_pc__v0 = 1U;
        __Vdlyvdim0__ram_spike_info_pc__v0 = vlSelf->__PVT__enq_ptr_value;
        __Vdlyvval__ram_fence__v0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__pipe__DOT__ibuffer__DOT__fifo_0_io_enq_bits_fence;
        __Vdlyvset__ram_fence__v0 = 1U;
        __Vdlyvdim0__ram_fence__v0 = vlSelf->__PVT__enq_ptr_value;
        __Vdlyvval__ram_pc__v0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__icache__DOT__addr_st2;
        __Vdlyvset__ram_pc__v0 = 1U;
        __Vdlyvdim0__ram_pc__v0 = vlSelf->__PVT__enq_ptr_value;
        __Vdlyvval__ram_sel_imm__v0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__pipe__DOT__ibuffer__DOT__fifo_0_io_enq_bits_sel_imm;
        __Vdlyvset__ram_sel_imm__v0 = 1U;
        __Vdlyvdim0__ram_sel_imm__v0 = vlSelf->__PVT__enq_ptr_value;
        __Vdlyvval__ram_spike_info_inst__v0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__icache__DOT__data_after_blockOffset_st2;
        __Vdlyvset__ram_spike_info_inst__v0 = 1U;
        __Vdlyvdim0__ram_spike_info_inst__v0 = vlSelf->__PVT__enq_ptr_value;
        __Vdlyvval__ram_mop__v0 = (3U & (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__icache__DOT__data_after_blockOffset_st2 
                                         >> 0x1aU));
        __Vdlyvset__ram_mop__v0 = 1U;
        __Vdlyvdim0__ram_mop__v0 = vlSelf->__PVT__enq_ptr_value;
        __Vdlyvval__ram_inst__v0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__icache__DOT__data_after_blockOffset_st2;
        __Vdlyvset__ram_inst__v0 = 1U;
        __Vdlyvdim0__ram_inst__v0 = vlSelf->__PVT__enq_ptr_value;
        __Vdlyvval__ram_branch__v0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__pipe__DOT__ibuffer__DOT__fifo_0_io_enq_bits_branch;
        __Vdlyvset__ram_branch__v0 = 1U;
        __Vdlyvdim0__ram_branch__v0 = vlSelf->__PVT__enq_ptr_value;
        __Vdlyvval__ram_simt_stack_op__v0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__pipe__DOT__ibuffer__DOT__fifo_0_io_enq_bits_simt_stack_op;
        __Vdlyvset__ram_simt_stack_op__v0 = 1U;
        __Vdlyvdim0__ram_simt_stack_op__v0 = vlSelf->__PVT__enq_ptr_value;
        __Vdlyvval__ram_csr__v0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__pipe__DOT__ibuffer__DOT__fifo_0_io_enq_bits_csr;
        __Vdlyvset__ram_csr__v0 = 1U;
        __Vdlyvdim0__ram_csr__v0 = vlSelf->__PVT__enq_ptr_value;
        __Vdlyvval__ram_sfu__v0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__pipe__DOT__ibuffer__DOT__fifo_0_io_enq_bits_sfu;
        __Vdlyvset__ram_sfu__v0 = 1U;
        __Vdlyvdim0__ram_sfu__v0 = vlSelf->__PVT__enq_ptr_value;
        __Vdlyvval__ram_fp__v0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__pipe__DOT__ibuffer__DOT__fifo_0_io_enq_bits_fp;
        __Vdlyvset__ram_fp__v0 = 1U;
        __Vdlyvdim0__ram_fp__v0 = vlSelf->__PVT__enq_ptr_value;
        __Vdlyvval__ram_simt_stack__v0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__pipe__DOT__ibuffer__DOT__fifo_0_io_enq_bits_simt_stack;
        __Vdlyvset__ram_simt_stack__v0 = 1U;
        __Vdlyvdim0__ram_simt_stack__v0 = vlSelf->__PVT__enq_ptr_value;
        __Vdlyvval__ram_wxd__v0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__pipe__DOT__ibuffer__DOT__fifo_0_io_enq_bits_wxd;
        __Vdlyvset__ram_wxd__v0 = 1U;
        __Vdlyvdim0__ram_wxd__v0 = vlSelf->__PVT__enq_ptr_value;
        __Vdlyvval__ram_wfd__v0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__pipe__DOT__ibuffer__DOT__fifo_0_io_enq_bits_wfd;
        __Vdlyvset__ram_wfd__v0 = 1U;
        __Vdlyvdim0__ram_wfd__v0 = vlSelf->__PVT__enq_ptr_value;
        __Vdlyvval__ram_barrier__v0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__pipe__DOT__ibuffer__DOT__fifo_0_io_enq_bits_barrier;
        __Vdlyvset__ram_barrier__v0 = 1U;
        __Vdlyvdim0__ram_barrier__v0 = vlSelf->__PVT__enq_ptr_value;
        __Vdlyvval__ram_reg_idxw__v0 = (0x1fU & (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__icache__DOT__data_after_blockOffset_st2 
                                                 >> 7U));
        __Vdlyvset__ram_reg_idxw__v0 = 1U;
        __Vdlyvdim0__ram_reg_idxw__v0 = vlSelf->__PVT__enq_ptr_value;
        __Vdlyvval__ram_sel_alu1__v0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__pipe__DOT__ibuffer__DOT__fifo_0_io_enq_bits_sel_alu1;
        __Vdlyvset__ram_sel_alu1__v0 = 1U;
        __Vdlyvdim0__ram_sel_alu1__v0 = vlSelf->__PVT__enq_ptr_value;
        __Vdlyvval__ram_mask__v0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__pipe__DOT__ibuffer__DOT__fifo_0_io_enq_bits_mask;
        __Vdlyvset__ram_mask__v0 = 1U;
        __Vdlyvdim0__ram_mask__v0 = vlSelf->__PVT__enq_ptr_value;
        __Vdlyvval__ram_sel_alu2__v0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__pipe__DOT__ibuffer__DOT__fifo_0_io_enq_bits_sel_alu2;
        __Vdlyvset__ram_sel_alu2__v0 = 1U;
        __Vdlyvdim0__ram_sel_alu2__v0 = vlSelf->__PVT__enq_ptr_value;
        __Vdlyvval__ram_reg_idx3__v0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__pipe__DOT__ibuffer__DOT__fifo_0_io_enq_bits_reg_idx3;
        __Vdlyvset__ram_reg_idx3__v0 = 1U;
        __Vdlyvdim0__ram_reg_idx3__v0 = vlSelf->__PVT__enq_ptr_value;
        __Vdlyvval__ram_sel_alu3__v0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__pipe__DOT__ibuffer__DOT__fifo_0_io_enq_bits_sel_alu3;
        __Vdlyvset__ram_sel_alu3__v0 = 1U;
        __Vdlyvdim0__ram_sel_alu3__v0 = vlSelf->__PVT__enq_ptr_value;
        __Vdlyvval__ram_reg_idx1__v0 = (0x1fU & (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__icache__DOT__data_after_blockOffset_st2 
                                                 >> 0xfU));
        __Vdlyvset__ram_reg_idx1__v0 = 1U;
        __Vdlyvdim0__ram_reg_idx1__v0 = vlSelf->__PVT__enq_ptr_value;
        __Vdlyvval__ram_mem__v0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__pipe__DOT__ibuffer__DOT__fifo_0_io_enq_bits_mem;
        __Vdlyvset__ram_mem__v0 = 1U;
        __Vdlyvdim0__ram_mem__v0 = vlSelf->__PVT__enq_ptr_value;
        __Vdlyvval__ram_reg_idx2__v0 = (0x1fU & (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__icache__DOT__data_after_blockOffset_st2 
                                                 >> 0x14U));
        __Vdlyvset__ram_reg_idx2__v0 = 1U;
        __Vdlyvdim0__ram_reg_idx2__v0 = vlSelf->__PVT__enq_ptr_value;
        __Vdlyvval__ram_isvec__v0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__pipe__DOT__ibuffer__DOT__fifo_0_io_enq_bits_isvec;
        __Vdlyvset__ram_isvec__v0 = 1U;
        __Vdlyvdim0__ram_isvec__v0 = vlSelf->__PVT__enq_ptr_value;
        __Vdlyvval__ram_wid__v0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__icache__DOT__warpid_st2;
        __Vdlyvset__ram_wid__v0 = 1U;
        __Vdlyvdim0__ram_wid__v0 = vlSelf->__PVT__enq_ptr_value;
    }
    if (vlSymsp->TOP.reset) {
        __Vdly__enq_ptr_value = 0U;
        __Vdly__deq_ptr_value = 0U;
        vlSelf->__PVT__maybe_full = 0U;
    } else if (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__pipe__DOT__ibuffer__DOT__fifo_1_io_flush) {
        __Vdly__enq_ptr_value = 0U;
        __Vdly__deq_ptr_value = 0U;
        vlSelf->__PVT__maybe_full = 0U;
    } else {
        if (vlSelf->__PVT__ram_inst_MPORT_en) {
            __Vdly__enq_ptr_value = (1U & ((IData)(1U) 
                                           + (IData)(vlSelf->__PVT__enq_ptr_value)));
        }
        if (vlSelf->__PVT__do_deq) {
            __Vdly__deq_ptr_value = (1U & ((IData)(1U) 
                                           + (IData)(vlSelf->__PVT__deq_ptr_value)));
        }
        if (((IData)(vlSelf->__PVT__ram_inst_MPORT_en) 
             != (IData)(vlSelf->__PVT__do_deq))) {
            vlSelf->__PVT__maybe_full = vlSelf->__PVT__ram_inst_MPORT_en;
        }
    }
    if (__Vdlyvset__ram_writemask__v0) {
        vlSelf->__PVT__ram_writemask[__Vdlyvdim0__ram_writemask__v0] 
            = __Vdlyvval__ram_writemask__v0;
    }
    if (__Vdlyvset__ram_reverse__v0) {
        vlSelf->__PVT__ram_reverse[__Vdlyvdim0__ram_reverse__v0] 
            = __Vdlyvval__ram_reverse__v0;
    }
    if (__Vdlyvset__ram_mem_unsigned__v0) {
        vlSelf->__PVT__ram_mem_unsigned[__Vdlyvdim0__ram_mem_unsigned__v0] 
            = __Vdlyvval__ram_mem_unsigned__v0;
    }
    if (__Vdlyvset__ram_mul__v0) {
        vlSelf->__PVT__ram_mul[__Vdlyvdim0__ram_mul__v0] 
            = __Vdlyvval__ram_mul__v0;
    }
    if (__Vdlyvset__ram_mem_cmd__v0) {
        vlSelf->__PVT__ram_mem_cmd[__Vdlyvdim0__ram_mem_cmd__v0] 
            = __Vdlyvval__ram_mem_cmd__v0;
    }
    if (__Vdlyvset__ram_readmask__v0) {
        vlSelf->__PVT__ram_readmask[__Vdlyvdim0__ram_readmask__v0] 
            = __Vdlyvval__ram_readmask__v0;
    }
    if (__Vdlyvset__ram_alu_fn__v0) {
        vlSelf->__PVT__ram_alu_fn[__Vdlyvdim0__ram_alu_fn__v0] 
            = __Vdlyvval__ram_alu_fn__v0;
    }
    if (__Vdlyvset__ram_spike_info_pc__v0) {
        vlSelf->__PVT__ram_spike_info_pc[__Vdlyvdim0__ram_spike_info_pc__v0] 
            = __Vdlyvval__ram_spike_info_pc__v0;
    }
    if (__Vdlyvset__ram_fence__v0) {
        vlSelf->__PVT__ram_fence[__Vdlyvdim0__ram_fence__v0] 
            = __Vdlyvval__ram_fence__v0;
    }
    if (__Vdlyvset__ram_pc__v0) {
        vlSelf->__PVT__ram_pc[__Vdlyvdim0__ram_pc__v0] 
            = __Vdlyvval__ram_pc__v0;
    }
    if (__Vdlyvset__ram_sel_imm__v0) {
        vlSelf->__PVT__ram_sel_imm[__Vdlyvdim0__ram_sel_imm__v0] 
            = __Vdlyvval__ram_sel_imm__v0;
    }
    if (__Vdlyvset__ram_spike_info_inst__v0) {
        vlSelf->__PVT__ram_spike_info_inst[__Vdlyvdim0__ram_spike_info_inst__v0] 
            = __Vdlyvval__ram_spike_info_inst__v0;
    }
    if (__Vdlyvset__ram_mop__v0) {
        vlSelf->__PVT__ram_mop[__Vdlyvdim0__ram_mop__v0] 
            = __Vdlyvval__ram_mop__v0;
    }
    if (__Vdlyvset__ram_inst__v0) {
        vlSelf->__PVT__ram_inst[__Vdlyvdim0__ram_inst__v0] 
            = __Vdlyvval__ram_inst__v0;
    }
    if (__Vdlyvset__ram_branch__v0) {
        vlSelf->__PVT__ram_branch[__Vdlyvdim0__ram_branch__v0] 
            = __Vdlyvval__ram_branch__v0;
    }
    if (__Vdlyvset__ram_simt_stack_op__v0) {
        vlSelf->__PVT__ram_simt_stack_op[__Vdlyvdim0__ram_simt_stack_op__v0] 
            = __Vdlyvval__ram_simt_stack_op__v0;
    }
    if (__Vdlyvset__ram_csr__v0) {
        vlSelf->__PVT__ram_csr[__Vdlyvdim0__ram_csr__v0] 
            = __Vdlyvval__ram_csr__v0;
    }
    if (__Vdlyvset__ram_sfu__v0) {
        vlSelf->__PVT__ram_sfu[__Vdlyvdim0__ram_sfu__v0] 
            = __Vdlyvval__ram_sfu__v0;
    }
    if (__Vdlyvset__ram_fp__v0) {
        vlSelf->__PVT__ram_fp[__Vdlyvdim0__ram_fp__v0] 
            = __Vdlyvval__ram_fp__v0;
    }
    if (__Vdlyvset__ram_simt_stack__v0) {
        vlSelf->__PVT__ram_simt_stack[__Vdlyvdim0__ram_simt_stack__v0] 
            = __Vdlyvval__ram_simt_stack__v0;
    }
    if (__Vdlyvset__ram_wxd__v0) {
        vlSelf->__PVT__ram_wxd[__Vdlyvdim0__ram_wxd__v0] 
            = __Vdlyvval__ram_wxd__v0;
    }
    if (__Vdlyvset__ram_wfd__v0) {
        vlSelf->__PVT__ram_wfd[__Vdlyvdim0__ram_wfd__v0] 
            = __Vdlyvval__ram_wfd__v0;
    }
    if (__Vdlyvset__ram_barrier__v0) {
        vlSelf->__PVT__ram_barrier[__Vdlyvdim0__ram_barrier__v0] 
            = __Vdlyvval__ram_barrier__v0;
    }
    if (__Vdlyvset__ram_reg_idxw__v0) {
        vlSelf->__PVT__ram_reg_idxw[__Vdlyvdim0__ram_reg_idxw__v0] 
            = __Vdlyvval__ram_reg_idxw__v0;
    }
    if (__Vdlyvset__ram_sel_alu1__v0) {
        vlSelf->__PVT__ram_sel_alu1[__Vdlyvdim0__ram_sel_alu1__v0] 
            = __Vdlyvval__ram_sel_alu1__v0;
    }
    if (__Vdlyvset__ram_mask__v0) {
        vlSelf->__PVT__ram_mask[__Vdlyvdim0__ram_mask__v0] 
            = __Vdlyvval__ram_mask__v0;
    }
    if (__Vdlyvset__ram_sel_alu2__v0) {
        vlSelf->__PVT__ram_sel_alu2[__Vdlyvdim0__ram_sel_alu2__v0] 
            = __Vdlyvval__ram_sel_alu2__v0;
    }
    if (__Vdlyvset__ram_reg_idx3__v0) {
        vlSelf->__PVT__ram_reg_idx3[__Vdlyvdim0__ram_reg_idx3__v0] 
            = __Vdlyvval__ram_reg_idx3__v0;
    }
    if (__Vdlyvset__ram_sel_alu3__v0) {
        vlSelf->__PVT__ram_sel_alu3[__Vdlyvdim0__ram_sel_alu3__v0] 
            = __Vdlyvval__ram_sel_alu3__v0;
    }
    if (__Vdlyvset__ram_reg_idx1__v0) {
        vlSelf->__PVT__ram_reg_idx1[__Vdlyvdim0__ram_reg_idx1__v0] 
            = __Vdlyvval__ram_reg_idx1__v0;
    }
    if (__Vdlyvset__ram_mem__v0) {
        vlSelf->__PVT__ram_mem[__Vdlyvdim0__ram_mem__v0] 
            = __Vdlyvval__ram_mem__v0;
    }
    if (__Vdlyvset__ram_reg_idx2__v0) {
        vlSelf->__PVT__ram_reg_idx2[__Vdlyvdim0__ram_reg_idx2__v0] 
            = __Vdlyvval__ram_reg_idx2__v0;
    }
    if (__Vdlyvset__ram_isvec__v0) {
        vlSelf->__PVT__ram_isvec[__Vdlyvdim0__ram_isvec__v0] 
            = __Vdlyvval__ram_isvec__v0;
    }
    if (__Vdlyvset__ram_wid__v0) {
        vlSelf->__PVT__ram_wid[__Vdlyvdim0__ram_wid__v0] 
            = __Vdlyvval__ram_wid__v0;
    }
    vlSelf->__PVT__enq_ptr_value = __Vdly__enq_ptr_value;
    vlSelf->__PVT__deq_ptr_value = __Vdly__deq_ptr_value;
    vlSelf->__PVT__io_deq_bits_fp = vlSelf->__PVT__ram_fp
        [vlSelf->__PVT__deq_ptr_value];
    vlSelf->__PVT__io_deq_bits_simt_stack_op = vlSelf->__PVT__ram_simt_stack_op
        [vlSelf->__PVT__deq_ptr_value];
    vlSelf->__PVT__io_deq_bits_csr = vlSelf->__PVT__ram_csr
        [vlSelf->__PVT__deq_ptr_value];
    vlSelf->__PVT__io_deq_bits_sfu = vlSelf->__PVT__ram_sfu
        [vlSelf->__PVT__deq_ptr_value];
    vlSelf->__PVT__io_deq_bits_simt_stack = vlSelf->__PVT__ram_simt_stack
        [vlSelf->__PVT__deq_ptr_value];
    vlSelf->__PVT__io_deq_bits_wfd = vlSelf->__PVT__ram_wfd
        [vlSelf->__PVT__deq_ptr_value];
    vlSelf->__PVT__io_deq_bits_wxd = vlSelf->__PVT__ram_wxd
        [vlSelf->__PVT__deq_ptr_value];
    vlSelf->__PVT__io_deq_bits_reg_idxw = vlSelf->__PVT__ram_reg_idxw
        [vlSelf->__PVT__deq_ptr_value];
    vlSelf->__PVT__io_deq_bits_barrier = vlSelf->__PVT__ram_barrier
        [vlSelf->__PVT__deq_ptr_value];
    vlSelf->__PVT__io_deq_bits_sel_alu1 = vlSelf->__PVT__ram_sel_alu1
        [vlSelf->__PVT__deq_ptr_value];
    vlSelf->__PVT__io_deq_bits_mask = vlSelf->__PVT__ram_mask
        [vlSelf->__PVT__deq_ptr_value];
    vlSelf->__PVT__io_deq_bits_sel_alu2 = vlSelf->__PVT__ram_sel_alu2
        [vlSelf->__PVT__deq_ptr_value];
    vlSelf->__PVT__io_deq_bits_reg_idx3 = vlSelf->__PVT__ram_reg_idx3
        [vlSelf->__PVT__deq_ptr_value];
    vlSelf->__PVT__io_deq_bits_sel_alu3 = vlSelf->__PVT__ram_sel_alu3
        [vlSelf->__PVT__deq_ptr_value];
    vlSelf->__PVT__io_deq_bits_reg_idx1 = vlSelf->__PVT__ram_reg_idx1
        [vlSelf->__PVT__deq_ptr_value];
    vlSelf->__PVT__io_deq_bits_mem = vlSelf->__PVT__ram_mem
        [vlSelf->__PVT__deq_ptr_value];
    vlSelf->__PVT__io_deq_bits_reg_idx2 = vlSelf->__PVT__ram_reg_idx2
        [vlSelf->__PVT__deq_ptr_value];
    vlSelf->__PVT__io_deq_bits_isvec = vlSelf->__PVT__ram_isvec
        [vlSelf->__PVT__deq_ptr_value];
    vlSelf->__PVT__ptr_match = ((IData)(vlSelf->__PVT__deq_ptr_value) 
                                == (IData)(vlSelf->__PVT__enq_ptr_value));
    vlSelf->__PVT__empty = ((~ (IData)(vlSelf->__PVT__maybe_full)) 
                            & (IData)(vlSelf->__PVT__ptr_match));
    vlSelf->__PVT__full = ((IData)(vlSelf->__PVT__ptr_match) 
                           & (IData)(vlSelf->__PVT__maybe_full));
}

VL_INLINE_OPT void VVentus_Queue_19___nba_sequent__TOP__GPGPU_top__DOT__SM_wrapper__pipe__DOT__ibuffer__DOT__fifo_1__1(VVentus_Queue_19* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VVentus__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VVentus_Queue_19___nba_sequent__TOP__GPGPU_top__DOT__SM_wrapper__pipe__DOT__ibuffer__DOT__fifo_1__1\n"); );
    // Body
    vlSelf->__PVT__ram_inst_MPORT_en = ((~ (IData)(vlSelf->__PVT__full)) 
                                        & ((1U == (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__icache__DOT__warpid_st2)) 
                                           & (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__pipe__DOT__ibuffer_io_in_valid)));
    vlSelf->__PVT__do_deq = ((~ (IData)(vlSelf->__PVT__empty)) 
                             & ((((~ (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.pipe__DOT__ibuffer2issue__DOT__rrarbit__DOT____VdfgTmp_hb26d187d__0)) 
                                  | (1U > (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__pipe__DOT__ibuffer2issue__DOT__rrarbit__DOT__lastGrant))) 
                                 & (0U != (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__pipe__DOT__operand_collector__DOT__Demux__DOT___io_in_ready_T_4))) 
                                & (~ ((IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__pipe__DOT__warp_sche__DOT___warp_ready_T_3) 
                                      >> 1U))));
}

VL_INLINE_OPT void VVentus_Queue_19___nba_sequent__TOP__GPGPU_top__DOT__SM_wrapper__pipe__DOT__ibuffer__DOT__fifo_2__0(VVentus_Queue_19* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VVentus__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VVentus_Queue_19___nba_sequent__TOP__GPGPU_top__DOT__SM_wrapper__pipe__DOT__ibuffer__DOT__fifo_2__0\n"); );
    // Init
    CData/*0:0*/ __Vdlyvdim0__ram_readmask__v0;
    CData/*0:0*/ __Vdlyvval__ram_readmask__v0;
    CData/*0:0*/ __Vdlyvset__ram_readmask__v0;
    CData/*0:0*/ __Vdlyvdim0__ram_sfu__v0;
    CData/*0:0*/ __Vdlyvval__ram_sfu__v0;
    CData/*0:0*/ __Vdlyvset__ram_sfu__v0;
    CData/*0:0*/ __Vdlyvdim0__ram_fence__v0;
    CData/*0:0*/ __Vdlyvval__ram_fence__v0;
    CData/*0:0*/ __Vdlyvset__ram_fence__v0;
    CData/*0:0*/ __Vdlyvdim0__ram_wfd__v0;
    CData/*0:0*/ __Vdlyvval__ram_wfd__v0;
    CData/*0:0*/ __Vdlyvset__ram_wfd__v0;
    CData/*0:0*/ __Vdlyvdim0__ram_reg_idxw__v0;
    CData/*4:0*/ __Vdlyvval__ram_reg_idxw__v0;
    CData/*0:0*/ __Vdlyvset__ram_reg_idxw__v0;
    CData/*0:0*/ __Vdlyvdim0__ram_reg_idx2__v0;
    CData/*4:0*/ __Vdlyvval__ram_reg_idx2__v0;
    CData/*0:0*/ __Vdlyvset__ram_reg_idx2__v0;
    CData/*0:0*/ __Vdlyvdim0__ram_reg_idx1__v0;
    CData/*4:0*/ __Vdlyvval__ram_reg_idx1__v0;
    CData/*0:0*/ __Vdlyvset__ram_reg_idx1__v0;
    CData/*0:0*/ __Vdlyvdim0__ram_mop__v0;
    CData/*1:0*/ __Vdlyvval__ram_mop__v0;
    CData/*0:0*/ __Vdlyvset__ram_mop__v0;
    CData/*0:0*/ __Vdlyvdim0__ram_mem_cmd__v0;
    CData/*1:0*/ __Vdlyvval__ram_mem_cmd__v0;
    CData/*0:0*/ __Vdlyvset__ram_mem_cmd__v0;
    CData/*0:0*/ __Vdlyvdim0__ram_mul__v0;
    CData/*0:0*/ __Vdlyvval__ram_mul__v0;
    CData/*0:0*/ __Vdlyvset__ram_mul__v0;
    CData/*0:0*/ __Vdlyvdim0__ram_mem__v0;
    CData/*0:0*/ __Vdlyvval__ram_mem__v0;
    CData/*0:0*/ __Vdlyvset__ram_mem__v0;
    CData/*0:0*/ __Vdlyvdim0__ram_alu_fn__v0;
    CData/*5:0*/ __Vdlyvval__ram_alu_fn__v0;
    CData/*0:0*/ __Vdlyvset__ram_alu_fn__v0;
    CData/*0:0*/ __Vdlyvdim0__ram_mem_unsigned__v0;
    CData/*0:0*/ __Vdlyvval__ram_mem_unsigned__v0;
    CData/*0:0*/ __Vdlyvset__ram_mem_unsigned__v0;
    CData/*0:0*/ __Vdlyvdim0__ram_sel_imm__v0;
    CData/*2:0*/ __Vdlyvval__ram_sel_imm__v0;
    CData/*0:0*/ __Vdlyvset__ram_sel_imm__v0;
    CData/*0:0*/ __Vdlyvdim0__ram_simt_stack__v0;
    CData/*0:0*/ __Vdlyvval__ram_simt_stack__v0;
    CData/*0:0*/ __Vdlyvset__ram_simt_stack__v0;
    CData/*0:0*/ __Vdlyvdim0__ram_branch__v0;
    CData/*1:0*/ __Vdlyvval__ram_branch__v0;
    CData/*0:0*/ __Vdlyvset__ram_branch__v0;
    CData/*0:0*/ __Vdly__enq_ptr_value;
    CData/*0:0*/ __Vdlyvdim0__ram_simt_stack_op__v0;
    CData/*0:0*/ __Vdlyvval__ram_simt_stack_op__v0;
    CData/*0:0*/ __Vdlyvset__ram_simt_stack_op__v0;
    CData/*0:0*/ __Vdlyvdim0__ram_inst__v0;
    IData/*31:0*/ __Vdlyvval__ram_inst__v0;
    CData/*0:0*/ __Vdlyvset__ram_inst__v0;
    CData/*0:0*/ __Vdlyvdim0__ram_reg_idx3__v0;
    CData/*4:0*/ __Vdlyvval__ram_reg_idx3__v0;
    CData/*0:0*/ __Vdlyvset__ram_reg_idx3__v0;
    CData/*0:0*/ __Vdlyvdim0__ram_isvec__v0;
    CData/*0:0*/ __Vdlyvval__ram_isvec__v0;
    CData/*0:0*/ __Vdlyvset__ram_isvec__v0;
    CData/*0:0*/ __Vdlyvdim0__ram_barrier__v0;
    CData/*0:0*/ __Vdlyvval__ram_barrier__v0;
    CData/*0:0*/ __Vdlyvset__ram_barrier__v0;
    CData/*0:0*/ __Vdlyvdim0__ram_csr__v0;
    CData/*1:0*/ __Vdlyvval__ram_csr__v0;
    CData/*0:0*/ __Vdlyvset__ram_csr__v0;
    CData/*0:0*/ __Vdlyvdim0__ram_wid__v0;
    CData/*1:0*/ __Vdlyvval__ram_wid__v0;
    CData/*0:0*/ __Vdlyvset__ram_wid__v0;
    CData/*0:0*/ __Vdlyvdim0__ram_reverse__v0;
    CData/*0:0*/ __Vdlyvval__ram_reverse__v0;
    CData/*0:0*/ __Vdlyvset__ram_reverse__v0;
    CData/*0:0*/ __Vdlyvdim0__ram_fp__v0;
    CData/*0:0*/ __Vdlyvval__ram_fp__v0;
    CData/*0:0*/ __Vdlyvset__ram_fp__v0;
    CData/*0:0*/ __Vdlyvdim0__ram_sel_alu2__v0;
    CData/*1:0*/ __Vdlyvval__ram_sel_alu2__v0;
    CData/*0:0*/ __Vdlyvset__ram_sel_alu2__v0;
    CData/*0:0*/ __Vdlyvdim0__ram_sel_alu1__v0;
    CData/*1:0*/ __Vdlyvval__ram_sel_alu1__v0;
    CData/*0:0*/ __Vdlyvset__ram_sel_alu1__v0;
    CData/*0:0*/ __Vdlyvdim0__ram_sel_alu3__v0;
    CData/*1:0*/ __Vdlyvval__ram_sel_alu3__v0;
    CData/*0:0*/ __Vdlyvset__ram_sel_alu3__v0;
    CData/*0:0*/ __Vdlyvdim0__ram_mask__v0;
    CData/*0:0*/ __Vdlyvval__ram_mask__v0;
    CData/*0:0*/ __Vdlyvset__ram_mask__v0;
    CData/*0:0*/ __Vdlyvdim0__ram_writemask__v0;
    CData/*0:0*/ __Vdlyvval__ram_writemask__v0;
    CData/*0:0*/ __Vdlyvset__ram_writemask__v0;
    CData/*0:0*/ __Vdlyvdim0__ram_wxd__v0;
    CData/*0:0*/ __Vdlyvval__ram_wxd__v0;
    CData/*0:0*/ __Vdlyvset__ram_wxd__v0;
    CData/*0:0*/ __Vdlyvdim0__ram_pc__v0;
    IData/*31:0*/ __Vdlyvval__ram_pc__v0;
    CData/*0:0*/ __Vdlyvset__ram_pc__v0;
    CData/*0:0*/ __Vdlyvdim0__ram_spike_info_pc__v0;
    IData/*31:0*/ __Vdlyvval__ram_spike_info_pc__v0;
    CData/*0:0*/ __Vdlyvset__ram_spike_info_pc__v0;
    CData/*0:0*/ __Vdlyvdim0__ram_spike_info_inst__v0;
    IData/*31:0*/ __Vdlyvval__ram_spike_info_inst__v0;
    CData/*0:0*/ __Vdlyvset__ram_spike_info_inst__v0;
    CData/*0:0*/ __Vdly__deq_ptr_value;
    // Body
    __Vdlyvset__ram_writemask__v0 = 0U;
    __Vdlyvset__ram_reverse__v0 = 0U;
    __Vdlyvset__ram_mem_unsigned__v0 = 0U;
    __Vdlyvset__ram_mul__v0 = 0U;
    __Vdlyvset__ram_mem_cmd__v0 = 0U;
    __Vdlyvset__ram_readmask__v0 = 0U;
    __Vdlyvset__ram_alu_fn__v0 = 0U;
    __Vdlyvset__ram_spike_info_pc__v0 = 0U;
    __Vdlyvset__ram_fence__v0 = 0U;
    __Vdlyvset__ram_pc__v0 = 0U;
    __Vdlyvset__ram_sel_imm__v0 = 0U;
    __Vdlyvset__ram_spike_info_inst__v0 = 0U;
    __Vdlyvset__ram_mop__v0 = 0U;
    __Vdlyvset__ram_inst__v0 = 0U;
    __Vdlyvset__ram_branch__v0 = 0U;
    __Vdlyvset__ram_simt_stack_op__v0 = 0U;
    __Vdlyvset__ram_csr__v0 = 0U;
    __Vdlyvset__ram_sfu__v0 = 0U;
    __Vdlyvset__ram_fp__v0 = 0U;
    __Vdlyvset__ram_simt_stack__v0 = 0U;
    __Vdlyvset__ram_wxd__v0 = 0U;
    __Vdlyvset__ram_wfd__v0 = 0U;
    __Vdlyvset__ram_barrier__v0 = 0U;
    __Vdlyvset__ram_reg_idxw__v0 = 0U;
    __Vdlyvset__ram_sel_alu1__v0 = 0U;
    __Vdlyvset__ram_mask__v0 = 0U;
    __Vdlyvset__ram_sel_alu2__v0 = 0U;
    __Vdlyvset__ram_reg_idx3__v0 = 0U;
    __Vdlyvset__ram_sel_alu3__v0 = 0U;
    __Vdlyvset__ram_reg_idx1__v0 = 0U;
    __Vdly__enq_ptr_value = vlSelf->__PVT__enq_ptr_value;
    __Vdlyvset__ram_mem__v0 = 0U;
    __Vdlyvset__ram_reg_idx2__v0 = 0U;
    __Vdlyvset__ram_isvec__v0 = 0U;
    __Vdlyvset__ram_wid__v0 = 0U;
    __Vdly__deq_ptr_value = vlSelf->__PVT__deq_ptr_value;
    if (vlSelf->__PVT__ram_inst_MPORT_en) {
        __Vdlyvval__ram_writemask__v0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__pipe__DOT__ibuffer__DOT__fifo_0_io_enq_bits_writemask;
        __Vdlyvset__ram_writemask__v0 = 1U;
        __Vdlyvdim0__ram_writemask__v0 = vlSelf->__PVT__enq_ptr_value;
        __Vdlyvval__ram_reverse__v0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__pipe__DOT__ibuffer__DOT__fifo_0_io_enq_bits_reverse;
        __Vdlyvset__ram_reverse__v0 = 1U;
        __Vdlyvdim0__ram_reverse__v0 = vlSelf->__PVT__enq_ptr_value;
        __Vdlyvval__ram_mem_unsigned__v0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__pipe__DOT__ibuffer__DOT__fifo_0_io_enq_bits_mem_unsigned;
        __Vdlyvset__ram_mem_unsigned__v0 = 1U;
        __Vdlyvdim0__ram_mem_unsigned__v0 = vlSelf->__PVT__enq_ptr_value;
        __Vdlyvval__ram_mul__v0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__pipe__DOT__ibuffer__DOT__fifo_0_io_enq_bits_mul;
        __Vdlyvset__ram_mul__v0 = 1U;
        __Vdlyvdim0__ram_mul__v0 = vlSelf->__PVT__enq_ptr_value;
        __Vdlyvval__ram_mem_cmd__v0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__pipe__DOT__ibuffer__DOT__fifo_0_io_enq_bits_mem_cmd;
        __Vdlyvset__ram_mem_cmd__v0 = 1U;
        __Vdlyvdim0__ram_mem_cmd__v0 = vlSelf->__PVT__enq_ptr_value;
        __Vdlyvval__ram_readmask__v0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__pipe__DOT__ibuffer__DOT__fifo_0_io_enq_bits_readmask;
        __Vdlyvset__ram_readmask__v0 = 1U;
        __Vdlyvdim0__ram_readmask__v0 = vlSelf->__PVT__enq_ptr_value;
        __Vdlyvval__ram_alu_fn__v0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__pipe__DOT__ibuffer__DOT__fifo_0_io_enq_bits_alu_fn;
        __Vdlyvset__ram_alu_fn__v0 = 1U;
        __Vdlyvdim0__ram_alu_fn__v0 = vlSelf->__PVT__enq_ptr_value;
        __Vdlyvval__ram_spike_info_pc__v0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__icache__DOT__addr_st2;
        __Vdlyvset__ram_spike_info_pc__v0 = 1U;
        __Vdlyvdim0__ram_spike_info_pc__v0 = vlSelf->__PVT__enq_ptr_value;
        __Vdlyvval__ram_fence__v0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__pipe__DOT__ibuffer__DOT__fifo_0_io_enq_bits_fence;
        __Vdlyvset__ram_fence__v0 = 1U;
        __Vdlyvdim0__ram_fence__v0 = vlSelf->__PVT__enq_ptr_value;
        __Vdlyvval__ram_pc__v0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__icache__DOT__addr_st2;
        __Vdlyvset__ram_pc__v0 = 1U;
        __Vdlyvdim0__ram_pc__v0 = vlSelf->__PVT__enq_ptr_value;
        __Vdlyvval__ram_sel_imm__v0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__pipe__DOT__ibuffer__DOT__fifo_0_io_enq_bits_sel_imm;
        __Vdlyvset__ram_sel_imm__v0 = 1U;
        __Vdlyvdim0__ram_sel_imm__v0 = vlSelf->__PVT__enq_ptr_value;
        __Vdlyvval__ram_spike_info_inst__v0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__icache__DOT__data_after_blockOffset_st2;
        __Vdlyvset__ram_spike_info_inst__v0 = 1U;
        __Vdlyvdim0__ram_spike_info_inst__v0 = vlSelf->__PVT__enq_ptr_value;
        __Vdlyvval__ram_mop__v0 = (3U & (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__icache__DOT__data_after_blockOffset_st2 
                                         >> 0x1aU));
        __Vdlyvset__ram_mop__v0 = 1U;
        __Vdlyvdim0__ram_mop__v0 = vlSelf->__PVT__enq_ptr_value;
        __Vdlyvval__ram_inst__v0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__icache__DOT__data_after_blockOffset_st2;
        __Vdlyvset__ram_inst__v0 = 1U;
        __Vdlyvdim0__ram_inst__v0 = vlSelf->__PVT__enq_ptr_value;
        __Vdlyvval__ram_branch__v0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__pipe__DOT__ibuffer__DOT__fifo_0_io_enq_bits_branch;
        __Vdlyvset__ram_branch__v0 = 1U;
        __Vdlyvdim0__ram_branch__v0 = vlSelf->__PVT__enq_ptr_value;
        __Vdlyvval__ram_simt_stack_op__v0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__pipe__DOT__ibuffer__DOT__fifo_0_io_enq_bits_simt_stack_op;
        __Vdlyvset__ram_simt_stack_op__v0 = 1U;
        __Vdlyvdim0__ram_simt_stack_op__v0 = vlSelf->__PVT__enq_ptr_value;
        __Vdlyvval__ram_csr__v0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__pipe__DOT__ibuffer__DOT__fifo_0_io_enq_bits_csr;
        __Vdlyvset__ram_csr__v0 = 1U;
        __Vdlyvdim0__ram_csr__v0 = vlSelf->__PVT__enq_ptr_value;
        __Vdlyvval__ram_sfu__v0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__pipe__DOT__ibuffer__DOT__fifo_0_io_enq_bits_sfu;
        __Vdlyvset__ram_sfu__v0 = 1U;
        __Vdlyvdim0__ram_sfu__v0 = vlSelf->__PVT__enq_ptr_value;
        __Vdlyvval__ram_fp__v0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__pipe__DOT__ibuffer__DOT__fifo_0_io_enq_bits_fp;
        __Vdlyvset__ram_fp__v0 = 1U;
        __Vdlyvdim0__ram_fp__v0 = vlSelf->__PVT__enq_ptr_value;
        __Vdlyvval__ram_simt_stack__v0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__pipe__DOT__ibuffer__DOT__fifo_0_io_enq_bits_simt_stack;
        __Vdlyvset__ram_simt_stack__v0 = 1U;
        __Vdlyvdim0__ram_simt_stack__v0 = vlSelf->__PVT__enq_ptr_value;
        __Vdlyvval__ram_wxd__v0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__pipe__DOT__ibuffer__DOT__fifo_0_io_enq_bits_wxd;
        __Vdlyvset__ram_wxd__v0 = 1U;
        __Vdlyvdim0__ram_wxd__v0 = vlSelf->__PVT__enq_ptr_value;
        __Vdlyvval__ram_wfd__v0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__pipe__DOT__ibuffer__DOT__fifo_0_io_enq_bits_wfd;
        __Vdlyvset__ram_wfd__v0 = 1U;
        __Vdlyvdim0__ram_wfd__v0 = vlSelf->__PVT__enq_ptr_value;
        __Vdlyvval__ram_barrier__v0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__pipe__DOT__ibuffer__DOT__fifo_0_io_enq_bits_barrier;
        __Vdlyvset__ram_barrier__v0 = 1U;
        __Vdlyvdim0__ram_barrier__v0 = vlSelf->__PVT__enq_ptr_value;
        __Vdlyvval__ram_reg_idxw__v0 = (0x1fU & (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__icache__DOT__data_after_blockOffset_st2 
                                                 >> 7U));
        __Vdlyvset__ram_reg_idxw__v0 = 1U;
        __Vdlyvdim0__ram_reg_idxw__v0 = vlSelf->__PVT__enq_ptr_value;
        __Vdlyvval__ram_sel_alu1__v0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__pipe__DOT__ibuffer__DOT__fifo_0_io_enq_bits_sel_alu1;
        __Vdlyvset__ram_sel_alu1__v0 = 1U;
        __Vdlyvdim0__ram_sel_alu1__v0 = vlSelf->__PVT__enq_ptr_value;
        __Vdlyvval__ram_mask__v0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__pipe__DOT__ibuffer__DOT__fifo_0_io_enq_bits_mask;
        __Vdlyvset__ram_mask__v0 = 1U;
        __Vdlyvdim0__ram_mask__v0 = vlSelf->__PVT__enq_ptr_value;
        __Vdlyvval__ram_sel_alu2__v0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__pipe__DOT__ibuffer__DOT__fifo_0_io_enq_bits_sel_alu2;
        __Vdlyvset__ram_sel_alu2__v0 = 1U;
        __Vdlyvdim0__ram_sel_alu2__v0 = vlSelf->__PVT__enq_ptr_value;
        __Vdlyvval__ram_reg_idx3__v0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__pipe__DOT__ibuffer__DOT__fifo_0_io_enq_bits_reg_idx3;
        __Vdlyvset__ram_reg_idx3__v0 = 1U;
        __Vdlyvdim0__ram_reg_idx3__v0 = vlSelf->__PVT__enq_ptr_value;
        __Vdlyvval__ram_sel_alu3__v0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__pipe__DOT__ibuffer__DOT__fifo_0_io_enq_bits_sel_alu3;
        __Vdlyvset__ram_sel_alu3__v0 = 1U;
        __Vdlyvdim0__ram_sel_alu3__v0 = vlSelf->__PVT__enq_ptr_value;
        __Vdlyvval__ram_reg_idx1__v0 = (0x1fU & (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__icache__DOT__data_after_blockOffset_st2 
                                                 >> 0xfU));
        __Vdlyvset__ram_reg_idx1__v0 = 1U;
        __Vdlyvdim0__ram_reg_idx1__v0 = vlSelf->__PVT__enq_ptr_value;
        __Vdlyvval__ram_mem__v0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__pipe__DOT__ibuffer__DOT__fifo_0_io_enq_bits_mem;
        __Vdlyvset__ram_mem__v0 = 1U;
        __Vdlyvdim0__ram_mem__v0 = vlSelf->__PVT__enq_ptr_value;
        __Vdlyvval__ram_reg_idx2__v0 = (0x1fU & (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__icache__DOT__data_after_blockOffset_st2 
                                                 >> 0x14U));
        __Vdlyvset__ram_reg_idx2__v0 = 1U;
        __Vdlyvdim0__ram_reg_idx2__v0 = vlSelf->__PVT__enq_ptr_value;
        __Vdlyvval__ram_isvec__v0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__pipe__DOT__ibuffer__DOT__fifo_0_io_enq_bits_isvec;
        __Vdlyvset__ram_isvec__v0 = 1U;
        __Vdlyvdim0__ram_isvec__v0 = vlSelf->__PVT__enq_ptr_value;
        __Vdlyvval__ram_wid__v0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__icache__DOT__warpid_st2;
        __Vdlyvset__ram_wid__v0 = 1U;
        __Vdlyvdim0__ram_wid__v0 = vlSelf->__PVT__enq_ptr_value;
    }
    if (vlSymsp->TOP.reset) {
        __Vdly__enq_ptr_value = 0U;
        __Vdly__deq_ptr_value = 0U;
        vlSelf->__PVT__maybe_full = 0U;
    } else if (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__pipe__DOT__ibuffer__DOT__fifo_2_io_flush) {
        __Vdly__enq_ptr_value = 0U;
        __Vdly__deq_ptr_value = 0U;
        vlSelf->__PVT__maybe_full = 0U;
    } else {
        if (vlSelf->__PVT__ram_inst_MPORT_en) {
            __Vdly__enq_ptr_value = (1U & ((IData)(1U) 
                                           + (IData)(vlSelf->__PVT__enq_ptr_value)));
        }
        if (vlSelf->__PVT__do_deq) {
            __Vdly__deq_ptr_value = (1U & ((IData)(1U) 
                                           + (IData)(vlSelf->__PVT__deq_ptr_value)));
        }
        if (((IData)(vlSelf->__PVT__ram_inst_MPORT_en) 
             != (IData)(vlSelf->__PVT__do_deq))) {
            vlSelf->__PVT__maybe_full = vlSelf->__PVT__ram_inst_MPORT_en;
        }
    }
    if (__Vdlyvset__ram_writemask__v0) {
        vlSelf->__PVT__ram_writemask[__Vdlyvdim0__ram_writemask__v0] 
            = __Vdlyvval__ram_writemask__v0;
    }
    if (__Vdlyvset__ram_reverse__v0) {
        vlSelf->__PVT__ram_reverse[__Vdlyvdim0__ram_reverse__v0] 
            = __Vdlyvval__ram_reverse__v0;
    }
    if (__Vdlyvset__ram_mem_unsigned__v0) {
        vlSelf->__PVT__ram_mem_unsigned[__Vdlyvdim0__ram_mem_unsigned__v0] 
            = __Vdlyvval__ram_mem_unsigned__v0;
    }
    if (__Vdlyvset__ram_mul__v0) {
        vlSelf->__PVT__ram_mul[__Vdlyvdim0__ram_mul__v0] 
            = __Vdlyvval__ram_mul__v0;
    }
    if (__Vdlyvset__ram_mem_cmd__v0) {
        vlSelf->__PVT__ram_mem_cmd[__Vdlyvdim0__ram_mem_cmd__v0] 
            = __Vdlyvval__ram_mem_cmd__v0;
    }
    if (__Vdlyvset__ram_readmask__v0) {
        vlSelf->__PVT__ram_readmask[__Vdlyvdim0__ram_readmask__v0] 
            = __Vdlyvval__ram_readmask__v0;
    }
    if (__Vdlyvset__ram_alu_fn__v0) {
        vlSelf->__PVT__ram_alu_fn[__Vdlyvdim0__ram_alu_fn__v0] 
            = __Vdlyvval__ram_alu_fn__v0;
    }
    if (__Vdlyvset__ram_spike_info_pc__v0) {
        vlSelf->__PVT__ram_spike_info_pc[__Vdlyvdim0__ram_spike_info_pc__v0] 
            = __Vdlyvval__ram_spike_info_pc__v0;
    }
    if (__Vdlyvset__ram_fence__v0) {
        vlSelf->__PVT__ram_fence[__Vdlyvdim0__ram_fence__v0] 
            = __Vdlyvval__ram_fence__v0;
    }
    if (__Vdlyvset__ram_pc__v0) {
        vlSelf->__PVT__ram_pc[__Vdlyvdim0__ram_pc__v0] 
            = __Vdlyvval__ram_pc__v0;
    }
    if (__Vdlyvset__ram_sel_imm__v0) {
        vlSelf->__PVT__ram_sel_imm[__Vdlyvdim0__ram_sel_imm__v0] 
            = __Vdlyvval__ram_sel_imm__v0;
    }
    if (__Vdlyvset__ram_spike_info_inst__v0) {
        vlSelf->__PVT__ram_spike_info_inst[__Vdlyvdim0__ram_spike_info_inst__v0] 
            = __Vdlyvval__ram_spike_info_inst__v0;
    }
    if (__Vdlyvset__ram_mop__v0) {
        vlSelf->__PVT__ram_mop[__Vdlyvdim0__ram_mop__v0] 
            = __Vdlyvval__ram_mop__v0;
    }
    if (__Vdlyvset__ram_inst__v0) {
        vlSelf->__PVT__ram_inst[__Vdlyvdim0__ram_inst__v0] 
            = __Vdlyvval__ram_inst__v0;
    }
    if (__Vdlyvset__ram_branch__v0) {
        vlSelf->__PVT__ram_branch[__Vdlyvdim0__ram_branch__v0] 
            = __Vdlyvval__ram_branch__v0;
    }
    if (__Vdlyvset__ram_simt_stack_op__v0) {
        vlSelf->__PVT__ram_simt_stack_op[__Vdlyvdim0__ram_simt_stack_op__v0] 
            = __Vdlyvval__ram_simt_stack_op__v0;
    }
    if (__Vdlyvset__ram_csr__v0) {
        vlSelf->__PVT__ram_csr[__Vdlyvdim0__ram_csr__v0] 
            = __Vdlyvval__ram_csr__v0;
    }
    if (__Vdlyvset__ram_sfu__v0) {
        vlSelf->__PVT__ram_sfu[__Vdlyvdim0__ram_sfu__v0] 
            = __Vdlyvval__ram_sfu__v0;
    }
    if (__Vdlyvset__ram_fp__v0) {
        vlSelf->__PVT__ram_fp[__Vdlyvdim0__ram_fp__v0] 
            = __Vdlyvval__ram_fp__v0;
    }
    if (__Vdlyvset__ram_simt_stack__v0) {
        vlSelf->__PVT__ram_simt_stack[__Vdlyvdim0__ram_simt_stack__v0] 
            = __Vdlyvval__ram_simt_stack__v0;
    }
    if (__Vdlyvset__ram_wxd__v0) {
        vlSelf->__PVT__ram_wxd[__Vdlyvdim0__ram_wxd__v0] 
            = __Vdlyvval__ram_wxd__v0;
    }
    if (__Vdlyvset__ram_wfd__v0) {
        vlSelf->__PVT__ram_wfd[__Vdlyvdim0__ram_wfd__v0] 
            = __Vdlyvval__ram_wfd__v0;
    }
    if (__Vdlyvset__ram_barrier__v0) {
        vlSelf->__PVT__ram_barrier[__Vdlyvdim0__ram_barrier__v0] 
            = __Vdlyvval__ram_barrier__v0;
    }
    if (__Vdlyvset__ram_reg_idxw__v0) {
        vlSelf->__PVT__ram_reg_idxw[__Vdlyvdim0__ram_reg_idxw__v0] 
            = __Vdlyvval__ram_reg_idxw__v0;
    }
    if (__Vdlyvset__ram_sel_alu1__v0) {
        vlSelf->__PVT__ram_sel_alu1[__Vdlyvdim0__ram_sel_alu1__v0] 
            = __Vdlyvval__ram_sel_alu1__v0;
    }
    if (__Vdlyvset__ram_mask__v0) {
        vlSelf->__PVT__ram_mask[__Vdlyvdim0__ram_mask__v0] 
            = __Vdlyvval__ram_mask__v0;
    }
    if (__Vdlyvset__ram_sel_alu2__v0) {
        vlSelf->__PVT__ram_sel_alu2[__Vdlyvdim0__ram_sel_alu2__v0] 
            = __Vdlyvval__ram_sel_alu2__v0;
    }
    if (__Vdlyvset__ram_reg_idx3__v0) {
        vlSelf->__PVT__ram_reg_idx3[__Vdlyvdim0__ram_reg_idx3__v0] 
            = __Vdlyvval__ram_reg_idx3__v0;
    }
    if (__Vdlyvset__ram_sel_alu3__v0) {
        vlSelf->__PVT__ram_sel_alu3[__Vdlyvdim0__ram_sel_alu3__v0] 
            = __Vdlyvval__ram_sel_alu3__v0;
    }
    if (__Vdlyvset__ram_reg_idx1__v0) {
        vlSelf->__PVT__ram_reg_idx1[__Vdlyvdim0__ram_reg_idx1__v0] 
            = __Vdlyvval__ram_reg_idx1__v0;
    }
    if (__Vdlyvset__ram_mem__v0) {
        vlSelf->__PVT__ram_mem[__Vdlyvdim0__ram_mem__v0] 
            = __Vdlyvval__ram_mem__v0;
    }
    if (__Vdlyvset__ram_reg_idx2__v0) {
        vlSelf->__PVT__ram_reg_idx2[__Vdlyvdim0__ram_reg_idx2__v0] 
            = __Vdlyvval__ram_reg_idx2__v0;
    }
    if (__Vdlyvset__ram_isvec__v0) {
        vlSelf->__PVT__ram_isvec[__Vdlyvdim0__ram_isvec__v0] 
            = __Vdlyvval__ram_isvec__v0;
    }
    if (__Vdlyvset__ram_wid__v0) {
        vlSelf->__PVT__ram_wid[__Vdlyvdim0__ram_wid__v0] 
            = __Vdlyvval__ram_wid__v0;
    }
    vlSelf->__PVT__enq_ptr_value = __Vdly__enq_ptr_value;
    vlSelf->__PVT__deq_ptr_value = __Vdly__deq_ptr_value;
    vlSelf->__PVT__io_deq_bits_fp = vlSelf->__PVT__ram_fp
        [vlSelf->__PVT__deq_ptr_value];
    vlSelf->__PVT__io_deq_bits_simt_stack_op = vlSelf->__PVT__ram_simt_stack_op
        [vlSelf->__PVT__deq_ptr_value];
    vlSelf->__PVT__io_deq_bits_csr = vlSelf->__PVT__ram_csr
        [vlSelf->__PVT__deq_ptr_value];
    vlSelf->__PVT__io_deq_bits_sfu = vlSelf->__PVT__ram_sfu
        [vlSelf->__PVT__deq_ptr_value];
    vlSelf->__PVT__io_deq_bits_simt_stack = vlSelf->__PVT__ram_simt_stack
        [vlSelf->__PVT__deq_ptr_value];
    vlSelf->__PVT__io_deq_bits_wfd = vlSelf->__PVT__ram_wfd
        [vlSelf->__PVT__deq_ptr_value];
    vlSelf->__PVT__io_deq_bits_wxd = vlSelf->__PVT__ram_wxd
        [vlSelf->__PVT__deq_ptr_value];
    vlSelf->__PVT__io_deq_bits_reg_idxw = vlSelf->__PVT__ram_reg_idxw
        [vlSelf->__PVT__deq_ptr_value];
    vlSelf->__PVT__io_deq_bits_barrier = vlSelf->__PVT__ram_barrier
        [vlSelf->__PVT__deq_ptr_value];
    vlSelf->__PVT__io_deq_bits_sel_alu1 = vlSelf->__PVT__ram_sel_alu1
        [vlSelf->__PVT__deq_ptr_value];
    vlSelf->__PVT__io_deq_bits_mask = vlSelf->__PVT__ram_mask
        [vlSelf->__PVT__deq_ptr_value];
    vlSelf->__PVT__io_deq_bits_sel_alu2 = vlSelf->__PVT__ram_sel_alu2
        [vlSelf->__PVT__deq_ptr_value];
    vlSelf->__PVT__io_deq_bits_reg_idx3 = vlSelf->__PVT__ram_reg_idx3
        [vlSelf->__PVT__deq_ptr_value];
    vlSelf->__PVT__io_deq_bits_sel_alu3 = vlSelf->__PVT__ram_sel_alu3
        [vlSelf->__PVT__deq_ptr_value];
    vlSelf->__PVT__io_deq_bits_reg_idx1 = vlSelf->__PVT__ram_reg_idx1
        [vlSelf->__PVT__deq_ptr_value];
    vlSelf->__PVT__io_deq_bits_mem = vlSelf->__PVT__ram_mem
        [vlSelf->__PVT__deq_ptr_value];
    vlSelf->__PVT__io_deq_bits_reg_idx2 = vlSelf->__PVT__ram_reg_idx2
        [vlSelf->__PVT__deq_ptr_value];
    vlSelf->__PVT__io_deq_bits_isvec = vlSelf->__PVT__ram_isvec
        [vlSelf->__PVT__deq_ptr_value];
    vlSelf->__PVT__ptr_match = ((IData)(vlSelf->__PVT__deq_ptr_value) 
                                == (IData)(vlSelf->__PVT__enq_ptr_value));
    vlSelf->__PVT__empty = ((~ (IData)(vlSelf->__PVT__maybe_full)) 
                            & (IData)(vlSelf->__PVT__ptr_match));
    vlSelf->__PVT__full = ((IData)(vlSelf->__PVT__ptr_match) 
                           & (IData)(vlSelf->__PVT__maybe_full));
}

VL_INLINE_OPT void VVentus_Queue_19___nba_sequent__TOP__GPGPU_top__DOT__SM_wrapper__pipe__DOT__ibuffer__DOT__fifo_2__1(VVentus_Queue_19* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VVentus__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VVentus_Queue_19___nba_sequent__TOP__GPGPU_top__DOT__SM_wrapper__pipe__DOT__ibuffer__DOT__fifo_2__1\n"); );
    // Body
    vlSelf->__PVT__ram_inst_MPORT_en = ((~ (IData)(vlSelf->__PVT__full)) 
                                        & ((2U == (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__icache__DOT__warpid_st2)) 
                                           & (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__pipe__DOT__ibuffer_io_in_valid)));
    vlSelf->__PVT__do_deq = ((~ (IData)(vlSelf->__PVT__empty)) 
                             & ((((~ (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.pipe__DOT__ibuffer2issue__DOT__rrarbit__DOT____VdfgTmp_h02275172__0)) 
                                  | ((~ (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__pipe__DOT__ibuffer2issue__DOT__rrarbit__DOT__validMask_1)) 
                                     & (2U > (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__pipe__DOT__ibuffer2issue__DOT__rrarbit__DOT__lastGrant)))) 
                                 & (0U != (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__pipe__DOT__operand_collector__DOT__Demux__DOT___io_in_ready_T_4))) 
                                & (~ ((IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__pipe__DOT__warp_sche__DOT___warp_ready_T_3) 
                                      >> 2U))));
}

VL_INLINE_OPT void VVentus_Queue_19___nba_sequent__TOP__GPGPU_top__DOT__SM_wrapper__pipe__DOT__ibuffer__DOT__fifo_3__0(VVentus_Queue_19* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VVentus__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VVentus_Queue_19___nba_sequent__TOP__GPGPU_top__DOT__SM_wrapper__pipe__DOT__ibuffer__DOT__fifo_3__0\n"); );
    // Init
    CData/*0:0*/ __Vdlyvdim0__ram_readmask__v0;
    CData/*0:0*/ __Vdlyvval__ram_readmask__v0;
    CData/*0:0*/ __Vdlyvset__ram_readmask__v0;
    CData/*0:0*/ __Vdlyvdim0__ram_sfu__v0;
    CData/*0:0*/ __Vdlyvval__ram_sfu__v0;
    CData/*0:0*/ __Vdlyvset__ram_sfu__v0;
    CData/*0:0*/ __Vdlyvdim0__ram_fence__v0;
    CData/*0:0*/ __Vdlyvval__ram_fence__v0;
    CData/*0:0*/ __Vdlyvset__ram_fence__v0;
    CData/*0:0*/ __Vdlyvdim0__ram_wfd__v0;
    CData/*0:0*/ __Vdlyvval__ram_wfd__v0;
    CData/*0:0*/ __Vdlyvset__ram_wfd__v0;
    CData/*0:0*/ __Vdlyvdim0__ram_reg_idxw__v0;
    CData/*4:0*/ __Vdlyvval__ram_reg_idxw__v0;
    CData/*0:0*/ __Vdlyvset__ram_reg_idxw__v0;
    CData/*0:0*/ __Vdlyvdim0__ram_reg_idx2__v0;
    CData/*4:0*/ __Vdlyvval__ram_reg_idx2__v0;
    CData/*0:0*/ __Vdlyvset__ram_reg_idx2__v0;
    CData/*0:0*/ __Vdlyvdim0__ram_reg_idx1__v0;
    CData/*4:0*/ __Vdlyvval__ram_reg_idx1__v0;
    CData/*0:0*/ __Vdlyvset__ram_reg_idx1__v0;
    CData/*0:0*/ __Vdlyvdim0__ram_mop__v0;
    CData/*1:0*/ __Vdlyvval__ram_mop__v0;
    CData/*0:0*/ __Vdlyvset__ram_mop__v0;
    CData/*0:0*/ __Vdlyvdim0__ram_mem_cmd__v0;
    CData/*1:0*/ __Vdlyvval__ram_mem_cmd__v0;
    CData/*0:0*/ __Vdlyvset__ram_mem_cmd__v0;
    CData/*0:0*/ __Vdlyvdim0__ram_mul__v0;
    CData/*0:0*/ __Vdlyvval__ram_mul__v0;
    CData/*0:0*/ __Vdlyvset__ram_mul__v0;
    CData/*0:0*/ __Vdlyvdim0__ram_mem__v0;
    CData/*0:0*/ __Vdlyvval__ram_mem__v0;
    CData/*0:0*/ __Vdlyvset__ram_mem__v0;
    CData/*0:0*/ __Vdlyvdim0__ram_alu_fn__v0;
    CData/*5:0*/ __Vdlyvval__ram_alu_fn__v0;
    CData/*0:0*/ __Vdlyvset__ram_alu_fn__v0;
    CData/*0:0*/ __Vdlyvdim0__ram_mem_unsigned__v0;
    CData/*0:0*/ __Vdlyvval__ram_mem_unsigned__v0;
    CData/*0:0*/ __Vdlyvset__ram_mem_unsigned__v0;
    CData/*0:0*/ __Vdlyvdim0__ram_sel_imm__v0;
    CData/*2:0*/ __Vdlyvval__ram_sel_imm__v0;
    CData/*0:0*/ __Vdlyvset__ram_sel_imm__v0;
    CData/*0:0*/ __Vdlyvdim0__ram_simt_stack__v0;
    CData/*0:0*/ __Vdlyvval__ram_simt_stack__v0;
    CData/*0:0*/ __Vdlyvset__ram_simt_stack__v0;
    CData/*0:0*/ __Vdlyvdim0__ram_branch__v0;
    CData/*1:0*/ __Vdlyvval__ram_branch__v0;
    CData/*0:0*/ __Vdlyvset__ram_branch__v0;
    CData/*0:0*/ __Vdly__enq_ptr_value;
    CData/*0:0*/ __Vdlyvdim0__ram_simt_stack_op__v0;
    CData/*0:0*/ __Vdlyvval__ram_simt_stack_op__v0;
    CData/*0:0*/ __Vdlyvset__ram_simt_stack_op__v0;
    CData/*0:0*/ __Vdlyvdim0__ram_inst__v0;
    IData/*31:0*/ __Vdlyvval__ram_inst__v0;
    CData/*0:0*/ __Vdlyvset__ram_inst__v0;
    CData/*0:0*/ __Vdlyvdim0__ram_reg_idx3__v0;
    CData/*4:0*/ __Vdlyvval__ram_reg_idx3__v0;
    CData/*0:0*/ __Vdlyvset__ram_reg_idx3__v0;
    CData/*0:0*/ __Vdlyvdim0__ram_isvec__v0;
    CData/*0:0*/ __Vdlyvval__ram_isvec__v0;
    CData/*0:0*/ __Vdlyvset__ram_isvec__v0;
    CData/*0:0*/ __Vdlyvdim0__ram_barrier__v0;
    CData/*0:0*/ __Vdlyvval__ram_barrier__v0;
    CData/*0:0*/ __Vdlyvset__ram_barrier__v0;
    CData/*0:0*/ __Vdlyvdim0__ram_csr__v0;
    CData/*1:0*/ __Vdlyvval__ram_csr__v0;
    CData/*0:0*/ __Vdlyvset__ram_csr__v0;
    CData/*0:0*/ __Vdlyvdim0__ram_wid__v0;
    CData/*1:0*/ __Vdlyvval__ram_wid__v0;
    CData/*0:0*/ __Vdlyvset__ram_wid__v0;
    CData/*0:0*/ __Vdlyvdim0__ram_reverse__v0;
    CData/*0:0*/ __Vdlyvval__ram_reverse__v0;
    CData/*0:0*/ __Vdlyvset__ram_reverse__v0;
    CData/*0:0*/ __Vdlyvdim0__ram_fp__v0;
    CData/*0:0*/ __Vdlyvval__ram_fp__v0;
    CData/*0:0*/ __Vdlyvset__ram_fp__v0;
    CData/*0:0*/ __Vdlyvdim0__ram_sel_alu2__v0;
    CData/*1:0*/ __Vdlyvval__ram_sel_alu2__v0;
    CData/*0:0*/ __Vdlyvset__ram_sel_alu2__v0;
    CData/*0:0*/ __Vdlyvdim0__ram_sel_alu1__v0;
    CData/*1:0*/ __Vdlyvval__ram_sel_alu1__v0;
    CData/*0:0*/ __Vdlyvset__ram_sel_alu1__v0;
    CData/*0:0*/ __Vdlyvdim0__ram_sel_alu3__v0;
    CData/*1:0*/ __Vdlyvval__ram_sel_alu3__v0;
    CData/*0:0*/ __Vdlyvset__ram_sel_alu3__v0;
    CData/*0:0*/ __Vdlyvdim0__ram_mask__v0;
    CData/*0:0*/ __Vdlyvval__ram_mask__v0;
    CData/*0:0*/ __Vdlyvset__ram_mask__v0;
    CData/*0:0*/ __Vdlyvdim0__ram_writemask__v0;
    CData/*0:0*/ __Vdlyvval__ram_writemask__v0;
    CData/*0:0*/ __Vdlyvset__ram_writemask__v0;
    CData/*0:0*/ __Vdlyvdim0__ram_wxd__v0;
    CData/*0:0*/ __Vdlyvval__ram_wxd__v0;
    CData/*0:0*/ __Vdlyvset__ram_wxd__v0;
    CData/*0:0*/ __Vdlyvdim0__ram_pc__v0;
    IData/*31:0*/ __Vdlyvval__ram_pc__v0;
    CData/*0:0*/ __Vdlyvset__ram_pc__v0;
    CData/*0:0*/ __Vdlyvdim0__ram_spike_info_pc__v0;
    IData/*31:0*/ __Vdlyvval__ram_spike_info_pc__v0;
    CData/*0:0*/ __Vdlyvset__ram_spike_info_pc__v0;
    CData/*0:0*/ __Vdlyvdim0__ram_spike_info_inst__v0;
    IData/*31:0*/ __Vdlyvval__ram_spike_info_inst__v0;
    CData/*0:0*/ __Vdlyvset__ram_spike_info_inst__v0;
    CData/*0:0*/ __Vdly__deq_ptr_value;
    // Body
    __Vdlyvset__ram_writemask__v0 = 0U;
    __Vdlyvset__ram_reverse__v0 = 0U;
    __Vdlyvset__ram_mem_unsigned__v0 = 0U;
    __Vdlyvset__ram_mul__v0 = 0U;
    __Vdlyvset__ram_mem_cmd__v0 = 0U;
    __Vdlyvset__ram_readmask__v0 = 0U;
    __Vdlyvset__ram_alu_fn__v0 = 0U;
    __Vdlyvset__ram_spike_info_pc__v0 = 0U;
    __Vdlyvset__ram_fence__v0 = 0U;
    __Vdlyvset__ram_pc__v0 = 0U;
    __Vdlyvset__ram_sel_imm__v0 = 0U;
    __Vdlyvset__ram_spike_info_inst__v0 = 0U;
    __Vdlyvset__ram_mop__v0 = 0U;
    __Vdlyvset__ram_inst__v0 = 0U;
    __Vdlyvset__ram_branch__v0 = 0U;
    __Vdlyvset__ram_simt_stack_op__v0 = 0U;
    __Vdlyvset__ram_csr__v0 = 0U;
    __Vdlyvset__ram_sfu__v0 = 0U;
    __Vdlyvset__ram_fp__v0 = 0U;
    __Vdlyvset__ram_simt_stack__v0 = 0U;
    __Vdlyvset__ram_wxd__v0 = 0U;
    __Vdlyvset__ram_wfd__v0 = 0U;
    __Vdlyvset__ram_barrier__v0 = 0U;
    __Vdlyvset__ram_reg_idxw__v0 = 0U;
    __Vdlyvset__ram_sel_alu1__v0 = 0U;
    __Vdlyvset__ram_mask__v0 = 0U;
    __Vdlyvset__ram_sel_alu2__v0 = 0U;
    __Vdlyvset__ram_reg_idx3__v0 = 0U;
    __Vdlyvset__ram_sel_alu3__v0 = 0U;
    __Vdlyvset__ram_reg_idx1__v0 = 0U;
    __Vdly__enq_ptr_value = vlSelf->__PVT__enq_ptr_value;
    __Vdlyvset__ram_mem__v0 = 0U;
    __Vdlyvset__ram_reg_idx2__v0 = 0U;
    __Vdlyvset__ram_isvec__v0 = 0U;
    __Vdlyvset__ram_wid__v0 = 0U;
    __Vdly__deq_ptr_value = vlSelf->__PVT__deq_ptr_value;
    if (vlSelf->__PVT__ram_inst_MPORT_en) {
        __Vdlyvval__ram_writemask__v0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__pipe__DOT__ibuffer__DOT__fifo_0_io_enq_bits_writemask;
        __Vdlyvset__ram_writemask__v0 = 1U;
        __Vdlyvdim0__ram_writemask__v0 = vlSelf->__PVT__enq_ptr_value;
        __Vdlyvval__ram_reverse__v0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__pipe__DOT__ibuffer__DOT__fifo_0_io_enq_bits_reverse;
        __Vdlyvset__ram_reverse__v0 = 1U;
        __Vdlyvdim0__ram_reverse__v0 = vlSelf->__PVT__enq_ptr_value;
        __Vdlyvval__ram_mem_unsigned__v0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__pipe__DOT__ibuffer__DOT__fifo_0_io_enq_bits_mem_unsigned;
        __Vdlyvset__ram_mem_unsigned__v0 = 1U;
        __Vdlyvdim0__ram_mem_unsigned__v0 = vlSelf->__PVT__enq_ptr_value;
        __Vdlyvval__ram_mul__v0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__pipe__DOT__ibuffer__DOT__fifo_0_io_enq_bits_mul;
        __Vdlyvset__ram_mul__v0 = 1U;
        __Vdlyvdim0__ram_mul__v0 = vlSelf->__PVT__enq_ptr_value;
        __Vdlyvval__ram_mem_cmd__v0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__pipe__DOT__ibuffer__DOT__fifo_0_io_enq_bits_mem_cmd;
        __Vdlyvset__ram_mem_cmd__v0 = 1U;
        __Vdlyvdim0__ram_mem_cmd__v0 = vlSelf->__PVT__enq_ptr_value;
        __Vdlyvval__ram_readmask__v0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__pipe__DOT__ibuffer__DOT__fifo_0_io_enq_bits_readmask;
        __Vdlyvset__ram_readmask__v0 = 1U;
        __Vdlyvdim0__ram_readmask__v0 = vlSelf->__PVT__enq_ptr_value;
        __Vdlyvval__ram_alu_fn__v0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__pipe__DOT__ibuffer__DOT__fifo_0_io_enq_bits_alu_fn;
        __Vdlyvset__ram_alu_fn__v0 = 1U;
        __Vdlyvdim0__ram_alu_fn__v0 = vlSelf->__PVT__enq_ptr_value;
        __Vdlyvval__ram_spike_info_pc__v0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__icache__DOT__addr_st2;
        __Vdlyvset__ram_spike_info_pc__v0 = 1U;
        __Vdlyvdim0__ram_spike_info_pc__v0 = vlSelf->__PVT__enq_ptr_value;
        __Vdlyvval__ram_fence__v0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__pipe__DOT__ibuffer__DOT__fifo_0_io_enq_bits_fence;
        __Vdlyvset__ram_fence__v0 = 1U;
        __Vdlyvdim0__ram_fence__v0 = vlSelf->__PVT__enq_ptr_value;
        __Vdlyvval__ram_pc__v0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__icache__DOT__addr_st2;
        __Vdlyvset__ram_pc__v0 = 1U;
        __Vdlyvdim0__ram_pc__v0 = vlSelf->__PVT__enq_ptr_value;
        __Vdlyvval__ram_sel_imm__v0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__pipe__DOT__ibuffer__DOT__fifo_0_io_enq_bits_sel_imm;
        __Vdlyvset__ram_sel_imm__v0 = 1U;
        __Vdlyvdim0__ram_sel_imm__v0 = vlSelf->__PVT__enq_ptr_value;
        __Vdlyvval__ram_spike_info_inst__v0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__icache__DOT__data_after_blockOffset_st2;
        __Vdlyvset__ram_spike_info_inst__v0 = 1U;
        __Vdlyvdim0__ram_spike_info_inst__v0 = vlSelf->__PVT__enq_ptr_value;
        __Vdlyvval__ram_mop__v0 = (3U & (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__icache__DOT__data_after_blockOffset_st2 
                                         >> 0x1aU));
        __Vdlyvset__ram_mop__v0 = 1U;
        __Vdlyvdim0__ram_mop__v0 = vlSelf->__PVT__enq_ptr_value;
        __Vdlyvval__ram_inst__v0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__icache__DOT__data_after_blockOffset_st2;
        __Vdlyvset__ram_inst__v0 = 1U;
        __Vdlyvdim0__ram_inst__v0 = vlSelf->__PVT__enq_ptr_value;
        __Vdlyvval__ram_branch__v0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__pipe__DOT__ibuffer__DOT__fifo_0_io_enq_bits_branch;
        __Vdlyvset__ram_branch__v0 = 1U;
        __Vdlyvdim0__ram_branch__v0 = vlSelf->__PVT__enq_ptr_value;
        __Vdlyvval__ram_simt_stack_op__v0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__pipe__DOT__ibuffer__DOT__fifo_0_io_enq_bits_simt_stack_op;
        __Vdlyvset__ram_simt_stack_op__v0 = 1U;
        __Vdlyvdim0__ram_simt_stack_op__v0 = vlSelf->__PVT__enq_ptr_value;
        __Vdlyvval__ram_csr__v0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__pipe__DOT__ibuffer__DOT__fifo_0_io_enq_bits_csr;
        __Vdlyvset__ram_csr__v0 = 1U;
        __Vdlyvdim0__ram_csr__v0 = vlSelf->__PVT__enq_ptr_value;
        __Vdlyvval__ram_sfu__v0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__pipe__DOT__ibuffer__DOT__fifo_0_io_enq_bits_sfu;
        __Vdlyvset__ram_sfu__v0 = 1U;
        __Vdlyvdim0__ram_sfu__v0 = vlSelf->__PVT__enq_ptr_value;
        __Vdlyvval__ram_fp__v0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__pipe__DOT__ibuffer__DOT__fifo_0_io_enq_bits_fp;
        __Vdlyvset__ram_fp__v0 = 1U;
        __Vdlyvdim0__ram_fp__v0 = vlSelf->__PVT__enq_ptr_value;
        __Vdlyvval__ram_simt_stack__v0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__pipe__DOT__ibuffer__DOT__fifo_0_io_enq_bits_simt_stack;
        __Vdlyvset__ram_simt_stack__v0 = 1U;
        __Vdlyvdim0__ram_simt_stack__v0 = vlSelf->__PVT__enq_ptr_value;
        __Vdlyvval__ram_wxd__v0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__pipe__DOT__ibuffer__DOT__fifo_0_io_enq_bits_wxd;
        __Vdlyvset__ram_wxd__v0 = 1U;
        __Vdlyvdim0__ram_wxd__v0 = vlSelf->__PVT__enq_ptr_value;
        __Vdlyvval__ram_wfd__v0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__pipe__DOT__ibuffer__DOT__fifo_0_io_enq_bits_wfd;
        __Vdlyvset__ram_wfd__v0 = 1U;
        __Vdlyvdim0__ram_wfd__v0 = vlSelf->__PVT__enq_ptr_value;
        __Vdlyvval__ram_barrier__v0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__pipe__DOT__ibuffer__DOT__fifo_0_io_enq_bits_barrier;
        __Vdlyvset__ram_barrier__v0 = 1U;
        __Vdlyvdim0__ram_barrier__v0 = vlSelf->__PVT__enq_ptr_value;
        __Vdlyvval__ram_reg_idxw__v0 = (0x1fU & (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__icache__DOT__data_after_blockOffset_st2 
                                                 >> 7U));
        __Vdlyvset__ram_reg_idxw__v0 = 1U;
        __Vdlyvdim0__ram_reg_idxw__v0 = vlSelf->__PVT__enq_ptr_value;
        __Vdlyvval__ram_sel_alu1__v0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__pipe__DOT__ibuffer__DOT__fifo_0_io_enq_bits_sel_alu1;
        __Vdlyvset__ram_sel_alu1__v0 = 1U;
        __Vdlyvdim0__ram_sel_alu1__v0 = vlSelf->__PVT__enq_ptr_value;
        __Vdlyvval__ram_mask__v0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__pipe__DOT__ibuffer__DOT__fifo_0_io_enq_bits_mask;
        __Vdlyvset__ram_mask__v0 = 1U;
        __Vdlyvdim0__ram_mask__v0 = vlSelf->__PVT__enq_ptr_value;
        __Vdlyvval__ram_sel_alu2__v0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__pipe__DOT__ibuffer__DOT__fifo_0_io_enq_bits_sel_alu2;
        __Vdlyvset__ram_sel_alu2__v0 = 1U;
        __Vdlyvdim0__ram_sel_alu2__v0 = vlSelf->__PVT__enq_ptr_value;
        __Vdlyvval__ram_reg_idx3__v0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__pipe__DOT__ibuffer__DOT__fifo_0_io_enq_bits_reg_idx3;
        __Vdlyvset__ram_reg_idx3__v0 = 1U;
        __Vdlyvdim0__ram_reg_idx3__v0 = vlSelf->__PVT__enq_ptr_value;
        __Vdlyvval__ram_sel_alu3__v0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__pipe__DOT__ibuffer__DOT__fifo_0_io_enq_bits_sel_alu3;
        __Vdlyvset__ram_sel_alu3__v0 = 1U;
        __Vdlyvdim0__ram_sel_alu3__v0 = vlSelf->__PVT__enq_ptr_value;
        __Vdlyvval__ram_reg_idx1__v0 = (0x1fU & (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__icache__DOT__data_after_blockOffset_st2 
                                                 >> 0xfU));
        __Vdlyvset__ram_reg_idx1__v0 = 1U;
        __Vdlyvdim0__ram_reg_idx1__v0 = vlSelf->__PVT__enq_ptr_value;
        __Vdlyvval__ram_mem__v0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__pipe__DOT__ibuffer__DOT__fifo_0_io_enq_bits_mem;
        __Vdlyvset__ram_mem__v0 = 1U;
        __Vdlyvdim0__ram_mem__v0 = vlSelf->__PVT__enq_ptr_value;
        __Vdlyvval__ram_reg_idx2__v0 = (0x1fU & (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__icache__DOT__data_after_blockOffset_st2 
                                                 >> 0x14U));
        __Vdlyvset__ram_reg_idx2__v0 = 1U;
        __Vdlyvdim0__ram_reg_idx2__v0 = vlSelf->__PVT__enq_ptr_value;
        __Vdlyvval__ram_isvec__v0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__pipe__DOT__ibuffer__DOT__fifo_0_io_enq_bits_isvec;
        __Vdlyvset__ram_isvec__v0 = 1U;
        __Vdlyvdim0__ram_isvec__v0 = vlSelf->__PVT__enq_ptr_value;
        __Vdlyvval__ram_wid__v0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__icache__DOT__warpid_st2;
        __Vdlyvset__ram_wid__v0 = 1U;
        __Vdlyvdim0__ram_wid__v0 = vlSelf->__PVT__enq_ptr_value;
    }
    if (vlSymsp->TOP.reset) {
        __Vdly__enq_ptr_value = 0U;
        __Vdly__deq_ptr_value = 0U;
        vlSelf->__PVT__maybe_full = 0U;
    } else if (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__pipe__DOT__ibuffer__DOT__fifo_3_io_flush) {
        __Vdly__enq_ptr_value = 0U;
        __Vdly__deq_ptr_value = 0U;
        vlSelf->__PVT__maybe_full = 0U;
    } else {
        if (vlSelf->__PVT__ram_inst_MPORT_en) {
            __Vdly__enq_ptr_value = (1U & ((IData)(1U) 
                                           + (IData)(vlSelf->__PVT__enq_ptr_value)));
        }
        if (vlSelf->__PVT__do_deq) {
            __Vdly__deq_ptr_value = (1U & ((IData)(1U) 
                                           + (IData)(vlSelf->__PVT__deq_ptr_value)));
        }
        if (((IData)(vlSelf->__PVT__ram_inst_MPORT_en) 
             != (IData)(vlSelf->__PVT__do_deq))) {
            vlSelf->__PVT__maybe_full = vlSelf->__PVT__ram_inst_MPORT_en;
        }
    }
    if (__Vdlyvset__ram_writemask__v0) {
        vlSelf->__PVT__ram_writemask[__Vdlyvdim0__ram_writemask__v0] 
            = __Vdlyvval__ram_writemask__v0;
    }
    if (__Vdlyvset__ram_reverse__v0) {
        vlSelf->__PVT__ram_reverse[__Vdlyvdim0__ram_reverse__v0] 
            = __Vdlyvval__ram_reverse__v0;
    }
    if (__Vdlyvset__ram_mem_unsigned__v0) {
        vlSelf->__PVT__ram_mem_unsigned[__Vdlyvdim0__ram_mem_unsigned__v0] 
            = __Vdlyvval__ram_mem_unsigned__v0;
    }
    if (__Vdlyvset__ram_mul__v0) {
        vlSelf->__PVT__ram_mul[__Vdlyvdim0__ram_mul__v0] 
            = __Vdlyvval__ram_mul__v0;
    }
    if (__Vdlyvset__ram_mem_cmd__v0) {
        vlSelf->__PVT__ram_mem_cmd[__Vdlyvdim0__ram_mem_cmd__v0] 
            = __Vdlyvval__ram_mem_cmd__v0;
    }
    if (__Vdlyvset__ram_readmask__v0) {
        vlSelf->__PVT__ram_readmask[__Vdlyvdim0__ram_readmask__v0] 
            = __Vdlyvval__ram_readmask__v0;
    }
    if (__Vdlyvset__ram_alu_fn__v0) {
        vlSelf->__PVT__ram_alu_fn[__Vdlyvdim0__ram_alu_fn__v0] 
            = __Vdlyvval__ram_alu_fn__v0;
    }
    if (__Vdlyvset__ram_spike_info_pc__v0) {
        vlSelf->__PVT__ram_spike_info_pc[__Vdlyvdim0__ram_spike_info_pc__v0] 
            = __Vdlyvval__ram_spike_info_pc__v0;
    }
    if (__Vdlyvset__ram_fence__v0) {
        vlSelf->__PVT__ram_fence[__Vdlyvdim0__ram_fence__v0] 
            = __Vdlyvval__ram_fence__v0;
    }
    if (__Vdlyvset__ram_pc__v0) {
        vlSelf->__PVT__ram_pc[__Vdlyvdim0__ram_pc__v0] 
            = __Vdlyvval__ram_pc__v0;
    }
    if (__Vdlyvset__ram_sel_imm__v0) {
        vlSelf->__PVT__ram_sel_imm[__Vdlyvdim0__ram_sel_imm__v0] 
            = __Vdlyvval__ram_sel_imm__v0;
    }
    if (__Vdlyvset__ram_spike_info_inst__v0) {
        vlSelf->__PVT__ram_spike_info_inst[__Vdlyvdim0__ram_spike_info_inst__v0] 
            = __Vdlyvval__ram_spike_info_inst__v0;
    }
    if (__Vdlyvset__ram_mop__v0) {
        vlSelf->__PVT__ram_mop[__Vdlyvdim0__ram_mop__v0] 
            = __Vdlyvval__ram_mop__v0;
    }
    if (__Vdlyvset__ram_inst__v0) {
        vlSelf->__PVT__ram_inst[__Vdlyvdim0__ram_inst__v0] 
            = __Vdlyvval__ram_inst__v0;
    }
    if (__Vdlyvset__ram_branch__v0) {
        vlSelf->__PVT__ram_branch[__Vdlyvdim0__ram_branch__v0] 
            = __Vdlyvval__ram_branch__v0;
    }
    if (__Vdlyvset__ram_simt_stack_op__v0) {
        vlSelf->__PVT__ram_simt_stack_op[__Vdlyvdim0__ram_simt_stack_op__v0] 
            = __Vdlyvval__ram_simt_stack_op__v0;
    }
    if (__Vdlyvset__ram_csr__v0) {
        vlSelf->__PVT__ram_csr[__Vdlyvdim0__ram_csr__v0] 
            = __Vdlyvval__ram_csr__v0;
    }
    if (__Vdlyvset__ram_sfu__v0) {
        vlSelf->__PVT__ram_sfu[__Vdlyvdim0__ram_sfu__v0] 
            = __Vdlyvval__ram_sfu__v0;
    }
    if (__Vdlyvset__ram_fp__v0) {
        vlSelf->__PVT__ram_fp[__Vdlyvdim0__ram_fp__v0] 
            = __Vdlyvval__ram_fp__v0;
    }
    if (__Vdlyvset__ram_simt_stack__v0) {
        vlSelf->__PVT__ram_simt_stack[__Vdlyvdim0__ram_simt_stack__v0] 
            = __Vdlyvval__ram_simt_stack__v0;
    }
    if (__Vdlyvset__ram_wxd__v0) {
        vlSelf->__PVT__ram_wxd[__Vdlyvdim0__ram_wxd__v0] 
            = __Vdlyvval__ram_wxd__v0;
    }
    if (__Vdlyvset__ram_wfd__v0) {
        vlSelf->__PVT__ram_wfd[__Vdlyvdim0__ram_wfd__v0] 
            = __Vdlyvval__ram_wfd__v0;
    }
    if (__Vdlyvset__ram_barrier__v0) {
        vlSelf->__PVT__ram_barrier[__Vdlyvdim0__ram_barrier__v0] 
            = __Vdlyvval__ram_barrier__v0;
    }
    if (__Vdlyvset__ram_reg_idxw__v0) {
        vlSelf->__PVT__ram_reg_idxw[__Vdlyvdim0__ram_reg_idxw__v0] 
            = __Vdlyvval__ram_reg_idxw__v0;
    }
    if (__Vdlyvset__ram_sel_alu1__v0) {
        vlSelf->__PVT__ram_sel_alu1[__Vdlyvdim0__ram_sel_alu1__v0] 
            = __Vdlyvval__ram_sel_alu1__v0;
    }
    if (__Vdlyvset__ram_mask__v0) {
        vlSelf->__PVT__ram_mask[__Vdlyvdim0__ram_mask__v0] 
            = __Vdlyvval__ram_mask__v0;
    }
    if (__Vdlyvset__ram_sel_alu2__v0) {
        vlSelf->__PVT__ram_sel_alu2[__Vdlyvdim0__ram_sel_alu2__v0] 
            = __Vdlyvval__ram_sel_alu2__v0;
    }
    if (__Vdlyvset__ram_reg_idx3__v0) {
        vlSelf->__PVT__ram_reg_idx3[__Vdlyvdim0__ram_reg_idx3__v0] 
            = __Vdlyvval__ram_reg_idx3__v0;
    }
    if (__Vdlyvset__ram_sel_alu3__v0) {
        vlSelf->__PVT__ram_sel_alu3[__Vdlyvdim0__ram_sel_alu3__v0] 
            = __Vdlyvval__ram_sel_alu3__v0;
    }
    if (__Vdlyvset__ram_reg_idx1__v0) {
        vlSelf->__PVT__ram_reg_idx1[__Vdlyvdim0__ram_reg_idx1__v0] 
            = __Vdlyvval__ram_reg_idx1__v0;
    }
    if (__Vdlyvset__ram_mem__v0) {
        vlSelf->__PVT__ram_mem[__Vdlyvdim0__ram_mem__v0] 
            = __Vdlyvval__ram_mem__v0;
    }
    if (__Vdlyvset__ram_reg_idx2__v0) {
        vlSelf->__PVT__ram_reg_idx2[__Vdlyvdim0__ram_reg_idx2__v0] 
            = __Vdlyvval__ram_reg_idx2__v0;
    }
    if (__Vdlyvset__ram_isvec__v0) {
        vlSelf->__PVT__ram_isvec[__Vdlyvdim0__ram_isvec__v0] 
            = __Vdlyvval__ram_isvec__v0;
    }
    if (__Vdlyvset__ram_wid__v0) {
        vlSelf->__PVT__ram_wid[__Vdlyvdim0__ram_wid__v0] 
            = __Vdlyvval__ram_wid__v0;
    }
    vlSelf->__PVT__enq_ptr_value = __Vdly__enq_ptr_value;
    vlSelf->__PVT__deq_ptr_value = __Vdly__deq_ptr_value;
    vlSelf->__PVT__io_deq_bits_fp = vlSelf->__PVT__ram_fp
        [vlSelf->__PVT__deq_ptr_value];
    vlSelf->__PVT__io_deq_bits_simt_stack_op = vlSelf->__PVT__ram_simt_stack_op
        [vlSelf->__PVT__deq_ptr_value];
    vlSelf->__PVT__io_deq_bits_csr = vlSelf->__PVT__ram_csr
        [vlSelf->__PVT__deq_ptr_value];
    vlSelf->__PVT__io_deq_bits_sfu = vlSelf->__PVT__ram_sfu
        [vlSelf->__PVT__deq_ptr_value];
    vlSelf->__PVT__io_deq_bits_simt_stack = vlSelf->__PVT__ram_simt_stack
        [vlSelf->__PVT__deq_ptr_value];
    vlSelf->__PVT__io_deq_bits_wfd = vlSelf->__PVT__ram_wfd
        [vlSelf->__PVT__deq_ptr_value];
    vlSelf->__PVT__io_deq_bits_wxd = vlSelf->__PVT__ram_wxd
        [vlSelf->__PVT__deq_ptr_value];
    vlSelf->__PVT__io_deq_bits_reg_idxw = vlSelf->__PVT__ram_reg_idxw
        [vlSelf->__PVT__deq_ptr_value];
    vlSelf->__PVT__io_deq_bits_barrier = vlSelf->__PVT__ram_barrier
        [vlSelf->__PVT__deq_ptr_value];
    vlSelf->__PVT__io_deq_bits_sel_alu1 = vlSelf->__PVT__ram_sel_alu1
        [vlSelf->__PVT__deq_ptr_value];
    vlSelf->__PVT__io_deq_bits_mask = vlSelf->__PVT__ram_mask
        [vlSelf->__PVT__deq_ptr_value];
    vlSelf->__PVT__io_deq_bits_sel_alu2 = vlSelf->__PVT__ram_sel_alu2
        [vlSelf->__PVT__deq_ptr_value];
    vlSelf->__PVT__io_deq_bits_reg_idx3 = vlSelf->__PVT__ram_reg_idx3
        [vlSelf->__PVT__deq_ptr_value];
    vlSelf->__PVT__io_deq_bits_sel_alu3 = vlSelf->__PVT__ram_sel_alu3
        [vlSelf->__PVT__deq_ptr_value];
    vlSelf->__PVT__io_deq_bits_reg_idx1 = vlSelf->__PVT__ram_reg_idx1
        [vlSelf->__PVT__deq_ptr_value];
    vlSelf->__PVT__io_deq_bits_mem = vlSelf->__PVT__ram_mem
        [vlSelf->__PVT__deq_ptr_value];
    vlSelf->__PVT__io_deq_bits_reg_idx2 = vlSelf->__PVT__ram_reg_idx2
        [vlSelf->__PVT__deq_ptr_value];
    vlSelf->__PVT__io_deq_bits_isvec = vlSelf->__PVT__ram_isvec
        [vlSelf->__PVT__deq_ptr_value];
    vlSelf->__PVT__ptr_match = ((IData)(vlSelf->__PVT__deq_ptr_value) 
                                == (IData)(vlSelf->__PVT__enq_ptr_value));
    vlSelf->__PVT__empty = ((~ (IData)(vlSelf->__PVT__maybe_full)) 
                            & (IData)(vlSelf->__PVT__ptr_match));
    vlSelf->__PVT__full = ((IData)(vlSelf->__PVT__ptr_match) 
                           & (IData)(vlSelf->__PVT__maybe_full));
}

VL_INLINE_OPT void VVentus_Queue_19___nba_sequent__TOP__GPGPU_top__DOT__SM_wrapper__pipe__DOT__ibuffer__DOT__fifo_3__1(VVentus_Queue_19* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VVentus__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VVentus_Queue_19___nba_sequent__TOP__GPGPU_top__DOT__SM_wrapper__pipe__DOT__ibuffer__DOT__fifo_3__1\n"); );
    // Body
    vlSelf->__PVT__ram_inst_MPORT_en = ((~ (IData)(vlSelf->__PVT__full)) 
                                        & ((3U == (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__icache__DOT__warpid_st2)) 
                                           & (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__pipe__DOT__ibuffer_io_in_valid)));
    vlSelf->__PVT__do_deq = ((~ (IData)(vlSelf->__PVT__empty)) 
                             & ((((~ ((IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.pipe__DOT__ibuffer2issue__DOT__rrarbit__DOT____VdfgTmp_h02275172__0) 
                                      | (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__pipe__DOT__ibuffer2issue__DOT__rrarbit_io_in_2_valid))) 
                                  | ((~ (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.pipe__DOT__ibuffer2issue__DOT__rrarbit__DOT____VdfgTmp_h72765326__0)) 
                                     & (3U > (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__pipe__DOT__ibuffer2issue__DOT__rrarbit__DOT__lastGrant)))) 
                                 & (0U != (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__pipe__DOT__operand_collector__DOT__Demux__DOT___io_in_ready_T_4))) 
                                & (~ ((IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__pipe__DOT__warp_sche__DOT___warp_ready_T_3) 
                                      >> 3U))));
}

VL_INLINE_OPT void VVentus_Queue_19___nba_sequent__TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__ibuffer__DOT__fifo_0__0(VVentus_Queue_19* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VVentus__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VVentus_Queue_19___nba_sequent__TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__ibuffer__DOT__fifo_0__0\n"); );
    // Init
    CData/*0:0*/ __Vdlyvdim0__ram_readmask__v0;
    CData/*0:0*/ __Vdlyvval__ram_readmask__v0;
    CData/*0:0*/ __Vdlyvset__ram_readmask__v0;
    CData/*0:0*/ __Vdlyvdim0__ram_sfu__v0;
    CData/*0:0*/ __Vdlyvval__ram_sfu__v0;
    CData/*0:0*/ __Vdlyvset__ram_sfu__v0;
    CData/*0:0*/ __Vdlyvdim0__ram_fence__v0;
    CData/*0:0*/ __Vdlyvval__ram_fence__v0;
    CData/*0:0*/ __Vdlyvset__ram_fence__v0;
    CData/*0:0*/ __Vdlyvdim0__ram_wfd__v0;
    CData/*0:0*/ __Vdlyvval__ram_wfd__v0;
    CData/*0:0*/ __Vdlyvset__ram_wfd__v0;
    CData/*0:0*/ __Vdlyvdim0__ram_reg_idxw__v0;
    CData/*4:0*/ __Vdlyvval__ram_reg_idxw__v0;
    CData/*0:0*/ __Vdlyvset__ram_reg_idxw__v0;
    CData/*0:0*/ __Vdlyvdim0__ram_reg_idx2__v0;
    CData/*4:0*/ __Vdlyvval__ram_reg_idx2__v0;
    CData/*0:0*/ __Vdlyvset__ram_reg_idx2__v0;
    CData/*0:0*/ __Vdlyvdim0__ram_reg_idx1__v0;
    CData/*4:0*/ __Vdlyvval__ram_reg_idx1__v0;
    CData/*0:0*/ __Vdlyvset__ram_reg_idx1__v0;
    CData/*0:0*/ __Vdlyvdim0__ram_mop__v0;
    CData/*1:0*/ __Vdlyvval__ram_mop__v0;
    CData/*0:0*/ __Vdlyvset__ram_mop__v0;
    CData/*0:0*/ __Vdlyvdim0__ram_mem_cmd__v0;
    CData/*1:0*/ __Vdlyvval__ram_mem_cmd__v0;
    CData/*0:0*/ __Vdlyvset__ram_mem_cmd__v0;
    CData/*0:0*/ __Vdlyvdim0__ram_mul__v0;
    CData/*0:0*/ __Vdlyvval__ram_mul__v0;
    CData/*0:0*/ __Vdlyvset__ram_mul__v0;
    CData/*0:0*/ __Vdlyvdim0__ram_mem__v0;
    CData/*0:0*/ __Vdlyvval__ram_mem__v0;
    CData/*0:0*/ __Vdlyvset__ram_mem__v0;
    CData/*0:0*/ __Vdlyvdim0__ram_alu_fn__v0;
    CData/*5:0*/ __Vdlyvval__ram_alu_fn__v0;
    CData/*0:0*/ __Vdlyvset__ram_alu_fn__v0;
    CData/*0:0*/ __Vdlyvdim0__ram_mem_unsigned__v0;
    CData/*0:0*/ __Vdlyvval__ram_mem_unsigned__v0;
    CData/*0:0*/ __Vdlyvset__ram_mem_unsigned__v0;
    CData/*0:0*/ __Vdlyvdim0__ram_sel_imm__v0;
    CData/*2:0*/ __Vdlyvval__ram_sel_imm__v0;
    CData/*0:0*/ __Vdlyvset__ram_sel_imm__v0;
    CData/*0:0*/ __Vdlyvdim0__ram_simt_stack__v0;
    CData/*0:0*/ __Vdlyvval__ram_simt_stack__v0;
    CData/*0:0*/ __Vdlyvset__ram_simt_stack__v0;
    CData/*0:0*/ __Vdlyvdim0__ram_branch__v0;
    CData/*1:0*/ __Vdlyvval__ram_branch__v0;
    CData/*0:0*/ __Vdlyvset__ram_branch__v0;
    CData/*0:0*/ __Vdly__enq_ptr_value;
    CData/*0:0*/ __Vdlyvdim0__ram_simt_stack_op__v0;
    CData/*0:0*/ __Vdlyvval__ram_simt_stack_op__v0;
    CData/*0:0*/ __Vdlyvset__ram_simt_stack_op__v0;
    CData/*0:0*/ __Vdlyvdim0__ram_inst__v0;
    IData/*31:0*/ __Vdlyvval__ram_inst__v0;
    CData/*0:0*/ __Vdlyvset__ram_inst__v0;
    CData/*0:0*/ __Vdlyvdim0__ram_reg_idx3__v0;
    CData/*4:0*/ __Vdlyvval__ram_reg_idx3__v0;
    CData/*0:0*/ __Vdlyvset__ram_reg_idx3__v0;
    CData/*0:0*/ __Vdlyvdim0__ram_isvec__v0;
    CData/*0:0*/ __Vdlyvval__ram_isvec__v0;
    CData/*0:0*/ __Vdlyvset__ram_isvec__v0;
    CData/*0:0*/ __Vdlyvdim0__ram_barrier__v0;
    CData/*0:0*/ __Vdlyvval__ram_barrier__v0;
    CData/*0:0*/ __Vdlyvset__ram_barrier__v0;
    CData/*0:0*/ __Vdlyvdim0__ram_csr__v0;
    CData/*1:0*/ __Vdlyvval__ram_csr__v0;
    CData/*0:0*/ __Vdlyvset__ram_csr__v0;
    CData/*0:0*/ __Vdlyvdim0__ram_wid__v0;
    CData/*1:0*/ __Vdlyvval__ram_wid__v0;
    CData/*0:0*/ __Vdlyvset__ram_wid__v0;
    CData/*0:0*/ __Vdlyvdim0__ram_reverse__v0;
    CData/*0:0*/ __Vdlyvval__ram_reverse__v0;
    CData/*0:0*/ __Vdlyvset__ram_reverse__v0;
    CData/*0:0*/ __Vdlyvdim0__ram_fp__v0;
    CData/*0:0*/ __Vdlyvval__ram_fp__v0;
    CData/*0:0*/ __Vdlyvset__ram_fp__v0;
    CData/*0:0*/ __Vdlyvdim0__ram_sel_alu2__v0;
    CData/*1:0*/ __Vdlyvval__ram_sel_alu2__v0;
    CData/*0:0*/ __Vdlyvset__ram_sel_alu2__v0;
    CData/*0:0*/ __Vdlyvdim0__ram_sel_alu1__v0;
    CData/*1:0*/ __Vdlyvval__ram_sel_alu1__v0;
    CData/*0:0*/ __Vdlyvset__ram_sel_alu1__v0;
    CData/*0:0*/ __Vdlyvdim0__ram_sel_alu3__v0;
    CData/*1:0*/ __Vdlyvval__ram_sel_alu3__v0;
    CData/*0:0*/ __Vdlyvset__ram_sel_alu3__v0;
    CData/*0:0*/ __Vdlyvdim0__ram_mask__v0;
    CData/*0:0*/ __Vdlyvval__ram_mask__v0;
    CData/*0:0*/ __Vdlyvset__ram_mask__v0;
    CData/*0:0*/ __Vdlyvdim0__ram_writemask__v0;
    CData/*0:0*/ __Vdlyvval__ram_writemask__v0;
    CData/*0:0*/ __Vdlyvset__ram_writemask__v0;
    CData/*0:0*/ __Vdlyvdim0__ram_wxd__v0;
    CData/*0:0*/ __Vdlyvval__ram_wxd__v0;
    CData/*0:0*/ __Vdlyvset__ram_wxd__v0;
    CData/*0:0*/ __Vdlyvdim0__ram_pc__v0;
    IData/*31:0*/ __Vdlyvval__ram_pc__v0;
    CData/*0:0*/ __Vdlyvset__ram_pc__v0;
    CData/*0:0*/ __Vdlyvdim0__ram_spike_info_pc__v0;
    IData/*31:0*/ __Vdlyvval__ram_spike_info_pc__v0;
    CData/*0:0*/ __Vdlyvset__ram_spike_info_pc__v0;
    CData/*0:0*/ __Vdlyvdim0__ram_spike_info_inst__v0;
    IData/*31:0*/ __Vdlyvval__ram_spike_info_inst__v0;
    CData/*0:0*/ __Vdlyvset__ram_spike_info_inst__v0;
    CData/*0:0*/ __Vdly__deq_ptr_value;
    // Body
    __Vdlyvset__ram_writemask__v0 = 0U;
    __Vdlyvset__ram_reverse__v0 = 0U;
    __Vdlyvset__ram_mem_unsigned__v0 = 0U;
    __Vdlyvset__ram_mul__v0 = 0U;
    __Vdlyvset__ram_mem_cmd__v0 = 0U;
    __Vdlyvset__ram_readmask__v0 = 0U;
    __Vdlyvset__ram_alu_fn__v0 = 0U;
    __Vdlyvset__ram_spike_info_pc__v0 = 0U;
    __Vdlyvset__ram_fence__v0 = 0U;
    __Vdlyvset__ram_pc__v0 = 0U;
    __Vdlyvset__ram_sel_imm__v0 = 0U;
    __Vdlyvset__ram_spike_info_inst__v0 = 0U;
    __Vdlyvset__ram_mop__v0 = 0U;
    __Vdlyvset__ram_inst__v0 = 0U;
    __Vdlyvset__ram_branch__v0 = 0U;
    __Vdlyvset__ram_simt_stack_op__v0 = 0U;
    __Vdlyvset__ram_csr__v0 = 0U;
    __Vdlyvset__ram_sfu__v0 = 0U;
    __Vdlyvset__ram_fp__v0 = 0U;
    __Vdlyvset__ram_simt_stack__v0 = 0U;
    __Vdlyvset__ram_wxd__v0 = 0U;
    __Vdlyvset__ram_wfd__v0 = 0U;
    __Vdlyvset__ram_barrier__v0 = 0U;
    __Vdlyvset__ram_reg_idxw__v0 = 0U;
    __Vdlyvset__ram_sel_alu1__v0 = 0U;
    __Vdlyvset__ram_mask__v0 = 0U;
    __Vdlyvset__ram_sel_alu2__v0 = 0U;
    __Vdlyvset__ram_reg_idx3__v0 = 0U;
    __Vdlyvset__ram_sel_alu3__v0 = 0U;
    __Vdlyvset__ram_reg_idx1__v0 = 0U;
    __Vdly__enq_ptr_value = vlSelf->__PVT__enq_ptr_value;
    __Vdlyvset__ram_mem__v0 = 0U;
    __Vdlyvset__ram_reg_idx2__v0 = 0U;
    __Vdlyvset__ram_isvec__v0 = 0U;
    __Vdlyvset__ram_wid__v0 = 0U;
    __Vdly__deq_ptr_value = vlSelf->__PVT__deq_ptr_value;
    if (vlSelf->__PVT__ram_inst_MPORT_en) {
        __Vdlyvval__ram_writemask__v0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__ibuffer__DOT__fifo_0_io_enq_bits_writemask;
        __Vdlyvset__ram_writemask__v0 = 1U;
        __Vdlyvdim0__ram_writemask__v0 = vlSelf->__PVT__enq_ptr_value;
        __Vdlyvval__ram_reverse__v0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__ibuffer__DOT__fifo_0_io_enq_bits_reverse;
        __Vdlyvset__ram_reverse__v0 = 1U;
        __Vdlyvdim0__ram_reverse__v0 = vlSelf->__PVT__enq_ptr_value;
        __Vdlyvval__ram_mem_unsigned__v0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__ibuffer__DOT__fifo_0_io_enq_bits_mem_unsigned;
        __Vdlyvset__ram_mem_unsigned__v0 = 1U;
        __Vdlyvdim0__ram_mem_unsigned__v0 = vlSelf->__PVT__enq_ptr_value;
        __Vdlyvval__ram_mul__v0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__ibuffer__DOT__fifo_0_io_enq_bits_mul;
        __Vdlyvset__ram_mul__v0 = 1U;
        __Vdlyvdim0__ram_mul__v0 = vlSelf->__PVT__enq_ptr_value;
        __Vdlyvval__ram_mem_cmd__v0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__ibuffer__DOT__fifo_0_io_enq_bits_mem_cmd;
        __Vdlyvset__ram_mem_cmd__v0 = 1U;
        __Vdlyvdim0__ram_mem_cmd__v0 = vlSelf->__PVT__enq_ptr_value;
        __Vdlyvval__ram_readmask__v0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__ibuffer__DOT__fifo_0_io_enq_bits_readmask;
        __Vdlyvset__ram_readmask__v0 = 1U;
        __Vdlyvdim0__ram_readmask__v0 = vlSelf->__PVT__enq_ptr_value;
        __Vdlyvval__ram_alu_fn__v0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__ibuffer__DOT__fifo_0_io_enq_bits_alu_fn;
        __Vdlyvset__ram_alu_fn__v0 = 1U;
        __Vdlyvdim0__ram_alu_fn__v0 = vlSelf->__PVT__enq_ptr_value;
        __Vdlyvval__ram_spike_info_pc__v0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__icache__DOT__addr_st2;
        __Vdlyvset__ram_spike_info_pc__v0 = 1U;
        __Vdlyvdim0__ram_spike_info_pc__v0 = vlSelf->__PVT__enq_ptr_value;
        __Vdlyvval__ram_fence__v0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__ibuffer__DOT__fifo_0_io_enq_bits_fence;
        __Vdlyvset__ram_fence__v0 = 1U;
        __Vdlyvdim0__ram_fence__v0 = vlSelf->__PVT__enq_ptr_value;
        __Vdlyvval__ram_pc__v0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__icache__DOT__addr_st2;
        __Vdlyvset__ram_pc__v0 = 1U;
        __Vdlyvdim0__ram_pc__v0 = vlSelf->__PVT__enq_ptr_value;
        __Vdlyvval__ram_sel_imm__v0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__ibuffer__DOT__fifo_0_io_enq_bits_sel_imm;
        __Vdlyvset__ram_sel_imm__v0 = 1U;
        __Vdlyvdim0__ram_sel_imm__v0 = vlSelf->__PVT__enq_ptr_value;
        __Vdlyvval__ram_spike_info_inst__v0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__icache__DOT__data_after_blockOffset_st2;
        __Vdlyvset__ram_spike_info_inst__v0 = 1U;
        __Vdlyvdim0__ram_spike_info_inst__v0 = vlSelf->__PVT__enq_ptr_value;
        __Vdlyvval__ram_mop__v0 = (3U & (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__icache__DOT__data_after_blockOffset_st2 
                                         >> 0x1aU));
        __Vdlyvset__ram_mop__v0 = 1U;
        __Vdlyvdim0__ram_mop__v0 = vlSelf->__PVT__enq_ptr_value;
        __Vdlyvval__ram_inst__v0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__icache__DOT__data_after_blockOffset_st2;
        __Vdlyvset__ram_inst__v0 = 1U;
        __Vdlyvdim0__ram_inst__v0 = vlSelf->__PVT__enq_ptr_value;
        __Vdlyvval__ram_branch__v0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__ibuffer__DOT__fifo_0_io_enq_bits_branch;
        __Vdlyvset__ram_branch__v0 = 1U;
        __Vdlyvdim0__ram_branch__v0 = vlSelf->__PVT__enq_ptr_value;
        __Vdlyvval__ram_simt_stack_op__v0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__ibuffer__DOT__fifo_0_io_enq_bits_simt_stack_op;
        __Vdlyvset__ram_simt_stack_op__v0 = 1U;
        __Vdlyvdim0__ram_simt_stack_op__v0 = vlSelf->__PVT__enq_ptr_value;
        __Vdlyvval__ram_csr__v0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__ibuffer__DOT__fifo_0_io_enq_bits_csr;
        __Vdlyvset__ram_csr__v0 = 1U;
        __Vdlyvdim0__ram_csr__v0 = vlSelf->__PVT__enq_ptr_value;
        __Vdlyvval__ram_sfu__v0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__ibuffer__DOT__fifo_0_io_enq_bits_sfu;
        __Vdlyvset__ram_sfu__v0 = 1U;
        __Vdlyvdim0__ram_sfu__v0 = vlSelf->__PVT__enq_ptr_value;
        __Vdlyvval__ram_fp__v0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__ibuffer__DOT__fifo_0_io_enq_bits_fp;
        __Vdlyvset__ram_fp__v0 = 1U;
        __Vdlyvdim0__ram_fp__v0 = vlSelf->__PVT__enq_ptr_value;
        __Vdlyvval__ram_simt_stack__v0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__ibuffer__DOT__fifo_0_io_enq_bits_simt_stack;
        __Vdlyvset__ram_simt_stack__v0 = 1U;
        __Vdlyvdim0__ram_simt_stack__v0 = vlSelf->__PVT__enq_ptr_value;
        __Vdlyvval__ram_wxd__v0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__ibuffer__DOT__fifo_0_io_enq_bits_wxd;
        __Vdlyvset__ram_wxd__v0 = 1U;
        __Vdlyvdim0__ram_wxd__v0 = vlSelf->__PVT__enq_ptr_value;
        __Vdlyvval__ram_wfd__v0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__ibuffer__DOT__fifo_0_io_enq_bits_wfd;
        __Vdlyvset__ram_wfd__v0 = 1U;
        __Vdlyvdim0__ram_wfd__v0 = vlSelf->__PVT__enq_ptr_value;
        __Vdlyvval__ram_barrier__v0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__ibuffer__DOT__fifo_0_io_enq_bits_barrier;
        __Vdlyvset__ram_barrier__v0 = 1U;
        __Vdlyvdim0__ram_barrier__v0 = vlSelf->__PVT__enq_ptr_value;
        __Vdlyvval__ram_reg_idxw__v0 = (0x1fU & (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__icache__DOT__data_after_blockOffset_st2 
                                                 >> 7U));
        __Vdlyvset__ram_reg_idxw__v0 = 1U;
        __Vdlyvdim0__ram_reg_idxw__v0 = vlSelf->__PVT__enq_ptr_value;
        __Vdlyvval__ram_sel_alu1__v0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__ibuffer__DOT__fifo_0_io_enq_bits_sel_alu1;
        __Vdlyvset__ram_sel_alu1__v0 = 1U;
        __Vdlyvdim0__ram_sel_alu1__v0 = vlSelf->__PVT__enq_ptr_value;
        __Vdlyvval__ram_mask__v0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__ibuffer__DOT__fifo_0_io_enq_bits_mask;
        __Vdlyvset__ram_mask__v0 = 1U;
        __Vdlyvdim0__ram_mask__v0 = vlSelf->__PVT__enq_ptr_value;
        __Vdlyvval__ram_sel_alu2__v0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__ibuffer__DOT__fifo_0_io_enq_bits_sel_alu2;
        __Vdlyvset__ram_sel_alu2__v0 = 1U;
        __Vdlyvdim0__ram_sel_alu2__v0 = vlSelf->__PVT__enq_ptr_value;
        __Vdlyvval__ram_reg_idx3__v0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__ibuffer__DOT__fifo_0_io_enq_bits_reg_idx3;
        __Vdlyvset__ram_reg_idx3__v0 = 1U;
        __Vdlyvdim0__ram_reg_idx3__v0 = vlSelf->__PVT__enq_ptr_value;
        __Vdlyvval__ram_sel_alu3__v0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__ibuffer__DOT__fifo_0_io_enq_bits_sel_alu3;
        __Vdlyvset__ram_sel_alu3__v0 = 1U;
        __Vdlyvdim0__ram_sel_alu3__v0 = vlSelf->__PVT__enq_ptr_value;
        __Vdlyvval__ram_reg_idx1__v0 = (0x1fU & (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__icache__DOT__data_after_blockOffset_st2 
                                                 >> 0xfU));
        __Vdlyvset__ram_reg_idx1__v0 = 1U;
        __Vdlyvdim0__ram_reg_idx1__v0 = vlSelf->__PVT__enq_ptr_value;
        __Vdlyvval__ram_mem__v0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__ibuffer__DOT__fifo_0_io_enq_bits_mem;
        __Vdlyvset__ram_mem__v0 = 1U;
        __Vdlyvdim0__ram_mem__v0 = vlSelf->__PVT__enq_ptr_value;
        __Vdlyvval__ram_reg_idx2__v0 = (0x1fU & (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__icache__DOT__data_after_blockOffset_st2 
                                                 >> 0x14U));
        __Vdlyvset__ram_reg_idx2__v0 = 1U;
        __Vdlyvdim0__ram_reg_idx2__v0 = vlSelf->__PVT__enq_ptr_value;
        __Vdlyvval__ram_isvec__v0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__ibuffer__DOT__fifo_0_io_enq_bits_isvec;
        __Vdlyvset__ram_isvec__v0 = 1U;
        __Vdlyvdim0__ram_isvec__v0 = vlSelf->__PVT__enq_ptr_value;
        __Vdlyvval__ram_wid__v0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__icache__DOT__warpid_st2;
        __Vdlyvset__ram_wid__v0 = 1U;
        __Vdlyvdim0__ram_wid__v0 = vlSelf->__PVT__enq_ptr_value;
    }
    if (vlSymsp->TOP.reset) {
        __Vdly__enq_ptr_value = 0U;
        __Vdly__deq_ptr_value = 0U;
        vlSelf->__PVT__maybe_full = 0U;
    } else if (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__ibuffer__DOT__fifo_0_io_flush) {
        __Vdly__enq_ptr_value = 0U;
        __Vdly__deq_ptr_value = 0U;
        vlSelf->__PVT__maybe_full = 0U;
    } else {
        if (vlSelf->__PVT__ram_inst_MPORT_en) {
            __Vdly__enq_ptr_value = (1U & ((IData)(1U) 
                                           + (IData)(vlSelf->__PVT__enq_ptr_value)));
        }
        if (vlSelf->__PVT__do_deq) {
            __Vdly__deq_ptr_value = (1U & ((IData)(1U) 
                                           + (IData)(vlSelf->__PVT__deq_ptr_value)));
        }
        if (((IData)(vlSelf->__PVT__ram_inst_MPORT_en) 
             != (IData)(vlSelf->__PVT__do_deq))) {
            vlSelf->__PVT__maybe_full = vlSelf->__PVT__ram_inst_MPORT_en;
        }
    }
    if (__Vdlyvset__ram_writemask__v0) {
        vlSelf->__PVT__ram_writemask[__Vdlyvdim0__ram_writemask__v0] 
            = __Vdlyvval__ram_writemask__v0;
    }
    if (__Vdlyvset__ram_reverse__v0) {
        vlSelf->__PVT__ram_reverse[__Vdlyvdim0__ram_reverse__v0] 
            = __Vdlyvval__ram_reverse__v0;
    }
    if (__Vdlyvset__ram_mem_unsigned__v0) {
        vlSelf->__PVT__ram_mem_unsigned[__Vdlyvdim0__ram_mem_unsigned__v0] 
            = __Vdlyvval__ram_mem_unsigned__v0;
    }
    if (__Vdlyvset__ram_mul__v0) {
        vlSelf->__PVT__ram_mul[__Vdlyvdim0__ram_mul__v0] 
            = __Vdlyvval__ram_mul__v0;
    }
    if (__Vdlyvset__ram_mem_cmd__v0) {
        vlSelf->__PVT__ram_mem_cmd[__Vdlyvdim0__ram_mem_cmd__v0] 
            = __Vdlyvval__ram_mem_cmd__v0;
    }
    if (__Vdlyvset__ram_readmask__v0) {
        vlSelf->__PVT__ram_readmask[__Vdlyvdim0__ram_readmask__v0] 
            = __Vdlyvval__ram_readmask__v0;
    }
    if (__Vdlyvset__ram_alu_fn__v0) {
        vlSelf->__PVT__ram_alu_fn[__Vdlyvdim0__ram_alu_fn__v0] 
            = __Vdlyvval__ram_alu_fn__v0;
    }
    if (__Vdlyvset__ram_spike_info_pc__v0) {
        vlSelf->__PVT__ram_spike_info_pc[__Vdlyvdim0__ram_spike_info_pc__v0] 
            = __Vdlyvval__ram_spike_info_pc__v0;
    }
    if (__Vdlyvset__ram_fence__v0) {
        vlSelf->__PVT__ram_fence[__Vdlyvdim0__ram_fence__v0] 
            = __Vdlyvval__ram_fence__v0;
    }
    if (__Vdlyvset__ram_pc__v0) {
        vlSelf->__PVT__ram_pc[__Vdlyvdim0__ram_pc__v0] 
            = __Vdlyvval__ram_pc__v0;
    }
    if (__Vdlyvset__ram_sel_imm__v0) {
        vlSelf->__PVT__ram_sel_imm[__Vdlyvdim0__ram_sel_imm__v0] 
            = __Vdlyvval__ram_sel_imm__v0;
    }
    if (__Vdlyvset__ram_spike_info_inst__v0) {
        vlSelf->__PVT__ram_spike_info_inst[__Vdlyvdim0__ram_spike_info_inst__v0] 
            = __Vdlyvval__ram_spike_info_inst__v0;
    }
    if (__Vdlyvset__ram_mop__v0) {
        vlSelf->__PVT__ram_mop[__Vdlyvdim0__ram_mop__v0] 
            = __Vdlyvval__ram_mop__v0;
    }
    if (__Vdlyvset__ram_inst__v0) {
        vlSelf->__PVT__ram_inst[__Vdlyvdim0__ram_inst__v0] 
            = __Vdlyvval__ram_inst__v0;
    }
    if (__Vdlyvset__ram_branch__v0) {
        vlSelf->__PVT__ram_branch[__Vdlyvdim0__ram_branch__v0] 
            = __Vdlyvval__ram_branch__v0;
    }
    if (__Vdlyvset__ram_simt_stack_op__v0) {
        vlSelf->__PVT__ram_simt_stack_op[__Vdlyvdim0__ram_simt_stack_op__v0] 
            = __Vdlyvval__ram_simt_stack_op__v0;
    }
    if (__Vdlyvset__ram_csr__v0) {
        vlSelf->__PVT__ram_csr[__Vdlyvdim0__ram_csr__v0] 
            = __Vdlyvval__ram_csr__v0;
    }
    if (__Vdlyvset__ram_sfu__v0) {
        vlSelf->__PVT__ram_sfu[__Vdlyvdim0__ram_sfu__v0] 
            = __Vdlyvval__ram_sfu__v0;
    }
    if (__Vdlyvset__ram_fp__v0) {
        vlSelf->__PVT__ram_fp[__Vdlyvdim0__ram_fp__v0] 
            = __Vdlyvval__ram_fp__v0;
    }
    if (__Vdlyvset__ram_simt_stack__v0) {
        vlSelf->__PVT__ram_simt_stack[__Vdlyvdim0__ram_simt_stack__v0] 
            = __Vdlyvval__ram_simt_stack__v0;
    }
    if (__Vdlyvset__ram_wxd__v0) {
        vlSelf->__PVT__ram_wxd[__Vdlyvdim0__ram_wxd__v0] 
            = __Vdlyvval__ram_wxd__v0;
    }
    if (__Vdlyvset__ram_wfd__v0) {
        vlSelf->__PVT__ram_wfd[__Vdlyvdim0__ram_wfd__v0] 
            = __Vdlyvval__ram_wfd__v0;
    }
    if (__Vdlyvset__ram_barrier__v0) {
        vlSelf->__PVT__ram_barrier[__Vdlyvdim0__ram_barrier__v0] 
            = __Vdlyvval__ram_barrier__v0;
    }
    if (__Vdlyvset__ram_reg_idxw__v0) {
        vlSelf->__PVT__ram_reg_idxw[__Vdlyvdim0__ram_reg_idxw__v0] 
            = __Vdlyvval__ram_reg_idxw__v0;
    }
    if (__Vdlyvset__ram_sel_alu1__v0) {
        vlSelf->__PVT__ram_sel_alu1[__Vdlyvdim0__ram_sel_alu1__v0] 
            = __Vdlyvval__ram_sel_alu1__v0;
    }
    if (__Vdlyvset__ram_mask__v0) {
        vlSelf->__PVT__ram_mask[__Vdlyvdim0__ram_mask__v0] 
            = __Vdlyvval__ram_mask__v0;
    }
    if (__Vdlyvset__ram_sel_alu2__v0) {
        vlSelf->__PVT__ram_sel_alu2[__Vdlyvdim0__ram_sel_alu2__v0] 
            = __Vdlyvval__ram_sel_alu2__v0;
    }
    if (__Vdlyvset__ram_reg_idx3__v0) {
        vlSelf->__PVT__ram_reg_idx3[__Vdlyvdim0__ram_reg_idx3__v0] 
            = __Vdlyvval__ram_reg_idx3__v0;
    }
    if (__Vdlyvset__ram_sel_alu3__v0) {
        vlSelf->__PVT__ram_sel_alu3[__Vdlyvdim0__ram_sel_alu3__v0] 
            = __Vdlyvval__ram_sel_alu3__v0;
    }
    if (__Vdlyvset__ram_reg_idx1__v0) {
        vlSelf->__PVT__ram_reg_idx1[__Vdlyvdim0__ram_reg_idx1__v0] 
            = __Vdlyvval__ram_reg_idx1__v0;
    }
    if (__Vdlyvset__ram_mem__v0) {
        vlSelf->__PVT__ram_mem[__Vdlyvdim0__ram_mem__v0] 
            = __Vdlyvval__ram_mem__v0;
    }
    if (__Vdlyvset__ram_reg_idx2__v0) {
        vlSelf->__PVT__ram_reg_idx2[__Vdlyvdim0__ram_reg_idx2__v0] 
            = __Vdlyvval__ram_reg_idx2__v0;
    }
    if (__Vdlyvset__ram_isvec__v0) {
        vlSelf->__PVT__ram_isvec[__Vdlyvdim0__ram_isvec__v0] 
            = __Vdlyvval__ram_isvec__v0;
    }
    if (__Vdlyvset__ram_wid__v0) {
        vlSelf->__PVT__ram_wid[__Vdlyvdim0__ram_wid__v0] 
            = __Vdlyvval__ram_wid__v0;
    }
    vlSelf->__PVT__enq_ptr_value = __Vdly__enq_ptr_value;
    vlSelf->__PVT__deq_ptr_value = __Vdly__deq_ptr_value;
    vlSelf->__PVT__io_deq_bits_fp = vlSelf->__PVT__ram_fp
        [vlSelf->__PVT__deq_ptr_value];
    vlSelf->__PVT__io_deq_bits_simt_stack_op = vlSelf->__PVT__ram_simt_stack_op
        [vlSelf->__PVT__deq_ptr_value];
    vlSelf->__PVT__io_deq_bits_csr = vlSelf->__PVT__ram_csr
        [vlSelf->__PVT__deq_ptr_value];
    vlSelf->__PVT__io_deq_bits_sfu = vlSelf->__PVT__ram_sfu
        [vlSelf->__PVT__deq_ptr_value];
    vlSelf->__PVT__io_deq_bits_simt_stack = vlSelf->__PVT__ram_simt_stack
        [vlSelf->__PVT__deq_ptr_value];
    vlSelf->__PVT__io_deq_bits_wfd = vlSelf->__PVT__ram_wfd
        [vlSelf->__PVT__deq_ptr_value];
    vlSelf->__PVT__io_deq_bits_wxd = vlSelf->__PVT__ram_wxd
        [vlSelf->__PVT__deq_ptr_value];
    vlSelf->__PVT__io_deq_bits_reg_idxw = vlSelf->__PVT__ram_reg_idxw
        [vlSelf->__PVT__deq_ptr_value];
    vlSelf->__PVT__io_deq_bits_barrier = vlSelf->__PVT__ram_barrier
        [vlSelf->__PVT__deq_ptr_value];
    vlSelf->__PVT__io_deq_bits_sel_alu1 = vlSelf->__PVT__ram_sel_alu1
        [vlSelf->__PVT__deq_ptr_value];
    vlSelf->__PVT__io_deq_bits_mask = vlSelf->__PVT__ram_mask
        [vlSelf->__PVT__deq_ptr_value];
    vlSelf->__PVT__io_deq_bits_sel_alu2 = vlSelf->__PVT__ram_sel_alu2
        [vlSelf->__PVT__deq_ptr_value];
    vlSelf->__PVT__io_deq_bits_reg_idx3 = vlSelf->__PVT__ram_reg_idx3
        [vlSelf->__PVT__deq_ptr_value];
    vlSelf->__PVT__io_deq_bits_sel_alu3 = vlSelf->__PVT__ram_sel_alu3
        [vlSelf->__PVT__deq_ptr_value];
    vlSelf->__PVT__io_deq_bits_reg_idx1 = vlSelf->__PVT__ram_reg_idx1
        [vlSelf->__PVT__deq_ptr_value];
    vlSelf->__PVT__io_deq_bits_mem = vlSelf->__PVT__ram_mem
        [vlSelf->__PVT__deq_ptr_value];
    vlSelf->__PVT__io_deq_bits_reg_idx2 = vlSelf->__PVT__ram_reg_idx2
        [vlSelf->__PVT__deq_ptr_value];
    vlSelf->__PVT__io_deq_bits_isvec = vlSelf->__PVT__ram_isvec
        [vlSelf->__PVT__deq_ptr_value];
    vlSelf->__PVT__ptr_match = ((IData)(vlSelf->__PVT__deq_ptr_value) 
                                == (IData)(vlSelf->__PVT__enq_ptr_value));
    vlSelf->__PVT__empty = ((~ (IData)(vlSelf->__PVT__maybe_full)) 
                            & (IData)(vlSelf->__PVT__ptr_match));
    vlSelf->__PVT__full = ((IData)(vlSelf->__PVT__ptr_match) 
                           & (IData)(vlSelf->__PVT__maybe_full));
}

VL_INLINE_OPT void VVentus_Queue_19___nba_sequent__TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__ibuffer__DOT__fifo_0__1(VVentus_Queue_19* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VVentus__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VVentus_Queue_19___nba_sequent__TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__ibuffer__DOT__fifo_0__1\n"); );
    // Body
    vlSelf->__PVT__ram_inst_MPORT_en = ((~ (IData)(vlSelf->__PVT__full)) 
                                        & ((0U == (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__icache__DOT__warpid_st2)) 
                                           & (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__ibuffer_io_in_valid)));
    vlSelf->__PVT__do_deq = ((~ (IData)(vlSelf->__PVT__empty)) 
                             & (((~ (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.pipe__DOT__ibuffer2issue__DOT__rrarbit__DOT____VdfgTmp_h25ce2aec__0)) 
                                 & (0U != (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__Demux__DOT___io_in_ready_T_4))) 
                                & (~ (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__warp_sche__DOT___warp_ready_T_3))));
}

VL_INLINE_OPT void VVentus_Queue_19___nba_sequent__TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__ibuffer__DOT__fifo_1__0(VVentus_Queue_19* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VVentus__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VVentus_Queue_19___nba_sequent__TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__ibuffer__DOT__fifo_1__0\n"); );
    // Init
    CData/*0:0*/ __Vdlyvdim0__ram_readmask__v0;
    CData/*0:0*/ __Vdlyvval__ram_readmask__v0;
    CData/*0:0*/ __Vdlyvset__ram_readmask__v0;
    CData/*0:0*/ __Vdlyvdim0__ram_sfu__v0;
    CData/*0:0*/ __Vdlyvval__ram_sfu__v0;
    CData/*0:0*/ __Vdlyvset__ram_sfu__v0;
    CData/*0:0*/ __Vdlyvdim0__ram_fence__v0;
    CData/*0:0*/ __Vdlyvval__ram_fence__v0;
    CData/*0:0*/ __Vdlyvset__ram_fence__v0;
    CData/*0:0*/ __Vdlyvdim0__ram_wfd__v0;
    CData/*0:0*/ __Vdlyvval__ram_wfd__v0;
    CData/*0:0*/ __Vdlyvset__ram_wfd__v0;
    CData/*0:0*/ __Vdlyvdim0__ram_reg_idxw__v0;
    CData/*4:0*/ __Vdlyvval__ram_reg_idxw__v0;
    CData/*0:0*/ __Vdlyvset__ram_reg_idxw__v0;
    CData/*0:0*/ __Vdlyvdim0__ram_reg_idx2__v0;
    CData/*4:0*/ __Vdlyvval__ram_reg_idx2__v0;
    CData/*0:0*/ __Vdlyvset__ram_reg_idx2__v0;
    CData/*0:0*/ __Vdlyvdim0__ram_reg_idx1__v0;
    CData/*4:0*/ __Vdlyvval__ram_reg_idx1__v0;
    CData/*0:0*/ __Vdlyvset__ram_reg_idx1__v0;
    CData/*0:0*/ __Vdlyvdim0__ram_mop__v0;
    CData/*1:0*/ __Vdlyvval__ram_mop__v0;
    CData/*0:0*/ __Vdlyvset__ram_mop__v0;
    CData/*0:0*/ __Vdlyvdim0__ram_mem_cmd__v0;
    CData/*1:0*/ __Vdlyvval__ram_mem_cmd__v0;
    CData/*0:0*/ __Vdlyvset__ram_mem_cmd__v0;
    CData/*0:0*/ __Vdlyvdim0__ram_mul__v0;
    CData/*0:0*/ __Vdlyvval__ram_mul__v0;
    CData/*0:0*/ __Vdlyvset__ram_mul__v0;
    CData/*0:0*/ __Vdlyvdim0__ram_mem__v0;
    CData/*0:0*/ __Vdlyvval__ram_mem__v0;
    CData/*0:0*/ __Vdlyvset__ram_mem__v0;
    CData/*0:0*/ __Vdlyvdim0__ram_alu_fn__v0;
    CData/*5:0*/ __Vdlyvval__ram_alu_fn__v0;
    CData/*0:0*/ __Vdlyvset__ram_alu_fn__v0;
    CData/*0:0*/ __Vdlyvdim0__ram_mem_unsigned__v0;
    CData/*0:0*/ __Vdlyvval__ram_mem_unsigned__v0;
    CData/*0:0*/ __Vdlyvset__ram_mem_unsigned__v0;
    CData/*0:0*/ __Vdlyvdim0__ram_sel_imm__v0;
    CData/*2:0*/ __Vdlyvval__ram_sel_imm__v0;
    CData/*0:0*/ __Vdlyvset__ram_sel_imm__v0;
    CData/*0:0*/ __Vdlyvdim0__ram_simt_stack__v0;
    CData/*0:0*/ __Vdlyvval__ram_simt_stack__v0;
    CData/*0:0*/ __Vdlyvset__ram_simt_stack__v0;
    CData/*0:0*/ __Vdlyvdim0__ram_branch__v0;
    CData/*1:0*/ __Vdlyvval__ram_branch__v0;
    CData/*0:0*/ __Vdlyvset__ram_branch__v0;
    CData/*0:0*/ __Vdly__enq_ptr_value;
    CData/*0:0*/ __Vdlyvdim0__ram_simt_stack_op__v0;
    CData/*0:0*/ __Vdlyvval__ram_simt_stack_op__v0;
    CData/*0:0*/ __Vdlyvset__ram_simt_stack_op__v0;
    CData/*0:0*/ __Vdlyvdim0__ram_inst__v0;
    IData/*31:0*/ __Vdlyvval__ram_inst__v0;
    CData/*0:0*/ __Vdlyvset__ram_inst__v0;
    CData/*0:0*/ __Vdlyvdim0__ram_reg_idx3__v0;
    CData/*4:0*/ __Vdlyvval__ram_reg_idx3__v0;
    CData/*0:0*/ __Vdlyvset__ram_reg_idx3__v0;
    CData/*0:0*/ __Vdlyvdim0__ram_isvec__v0;
    CData/*0:0*/ __Vdlyvval__ram_isvec__v0;
    CData/*0:0*/ __Vdlyvset__ram_isvec__v0;
    CData/*0:0*/ __Vdlyvdim0__ram_barrier__v0;
    CData/*0:0*/ __Vdlyvval__ram_barrier__v0;
    CData/*0:0*/ __Vdlyvset__ram_barrier__v0;
    CData/*0:0*/ __Vdlyvdim0__ram_csr__v0;
    CData/*1:0*/ __Vdlyvval__ram_csr__v0;
    CData/*0:0*/ __Vdlyvset__ram_csr__v0;
    CData/*0:0*/ __Vdlyvdim0__ram_wid__v0;
    CData/*1:0*/ __Vdlyvval__ram_wid__v0;
    CData/*0:0*/ __Vdlyvset__ram_wid__v0;
    CData/*0:0*/ __Vdlyvdim0__ram_reverse__v0;
    CData/*0:0*/ __Vdlyvval__ram_reverse__v0;
    CData/*0:0*/ __Vdlyvset__ram_reverse__v0;
    CData/*0:0*/ __Vdlyvdim0__ram_fp__v0;
    CData/*0:0*/ __Vdlyvval__ram_fp__v0;
    CData/*0:0*/ __Vdlyvset__ram_fp__v0;
    CData/*0:0*/ __Vdlyvdim0__ram_sel_alu2__v0;
    CData/*1:0*/ __Vdlyvval__ram_sel_alu2__v0;
    CData/*0:0*/ __Vdlyvset__ram_sel_alu2__v0;
    CData/*0:0*/ __Vdlyvdim0__ram_sel_alu1__v0;
    CData/*1:0*/ __Vdlyvval__ram_sel_alu1__v0;
    CData/*0:0*/ __Vdlyvset__ram_sel_alu1__v0;
    CData/*0:0*/ __Vdlyvdim0__ram_sel_alu3__v0;
    CData/*1:0*/ __Vdlyvval__ram_sel_alu3__v0;
    CData/*0:0*/ __Vdlyvset__ram_sel_alu3__v0;
    CData/*0:0*/ __Vdlyvdim0__ram_mask__v0;
    CData/*0:0*/ __Vdlyvval__ram_mask__v0;
    CData/*0:0*/ __Vdlyvset__ram_mask__v0;
    CData/*0:0*/ __Vdlyvdim0__ram_writemask__v0;
    CData/*0:0*/ __Vdlyvval__ram_writemask__v0;
    CData/*0:0*/ __Vdlyvset__ram_writemask__v0;
    CData/*0:0*/ __Vdlyvdim0__ram_wxd__v0;
    CData/*0:0*/ __Vdlyvval__ram_wxd__v0;
    CData/*0:0*/ __Vdlyvset__ram_wxd__v0;
    CData/*0:0*/ __Vdlyvdim0__ram_pc__v0;
    IData/*31:0*/ __Vdlyvval__ram_pc__v0;
    CData/*0:0*/ __Vdlyvset__ram_pc__v0;
    CData/*0:0*/ __Vdlyvdim0__ram_spike_info_pc__v0;
    IData/*31:0*/ __Vdlyvval__ram_spike_info_pc__v0;
    CData/*0:0*/ __Vdlyvset__ram_spike_info_pc__v0;
    CData/*0:0*/ __Vdlyvdim0__ram_spike_info_inst__v0;
    IData/*31:0*/ __Vdlyvval__ram_spike_info_inst__v0;
    CData/*0:0*/ __Vdlyvset__ram_spike_info_inst__v0;
    CData/*0:0*/ __Vdly__deq_ptr_value;
    // Body
    __Vdlyvset__ram_writemask__v0 = 0U;
    __Vdlyvset__ram_reverse__v0 = 0U;
    __Vdlyvset__ram_mem_unsigned__v0 = 0U;
    __Vdlyvset__ram_mul__v0 = 0U;
    __Vdlyvset__ram_mem_cmd__v0 = 0U;
    __Vdlyvset__ram_readmask__v0 = 0U;
    __Vdlyvset__ram_alu_fn__v0 = 0U;
    __Vdlyvset__ram_spike_info_pc__v0 = 0U;
    __Vdlyvset__ram_fence__v0 = 0U;
    __Vdlyvset__ram_pc__v0 = 0U;
    __Vdlyvset__ram_sel_imm__v0 = 0U;
    __Vdlyvset__ram_spike_info_inst__v0 = 0U;
    __Vdlyvset__ram_mop__v0 = 0U;
    __Vdlyvset__ram_inst__v0 = 0U;
    __Vdlyvset__ram_branch__v0 = 0U;
    __Vdlyvset__ram_simt_stack_op__v0 = 0U;
    __Vdlyvset__ram_csr__v0 = 0U;
    __Vdlyvset__ram_sfu__v0 = 0U;
    __Vdlyvset__ram_fp__v0 = 0U;
    __Vdlyvset__ram_simt_stack__v0 = 0U;
    __Vdlyvset__ram_wxd__v0 = 0U;
    __Vdlyvset__ram_wfd__v0 = 0U;
    __Vdlyvset__ram_barrier__v0 = 0U;
    __Vdlyvset__ram_reg_idxw__v0 = 0U;
    __Vdlyvset__ram_sel_alu1__v0 = 0U;
    __Vdlyvset__ram_mask__v0 = 0U;
    __Vdlyvset__ram_sel_alu2__v0 = 0U;
    __Vdlyvset__ram_reg_idx3__v0 = 0U;
    __Vdlyvset__ram_sel_alu3__v0 = 0U;
    __Vdlyvset__ram_reg_idx1__v0 = 0U;
    __Vdly__enq_ptr_value = vlSelf->__PVT__enq_ptr_value;
    __Vdlyvset__ram_mem__v0 = 0U;
    __Vdlyvset__ram_reg_idx2__v0 = 0U;
    __Vdlyvset__ram_isvec__v0 = 0U;
    __Vdlyvset__ram_wid__v0 = 0U;
    __Vdly__deq_ptr_value = vlSelf->__PVT__deq_ptr_value;
    if (vlSelf->__PVT__ram_inst_MPORT_en) {
        __Vdlyvval__ram_writemask__v0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__ibuffer__DOT__fifo_0_io_enq_bits_writemask;
        __Vdlyvset__ram_writemask__v0 = 1U;
        __Vdlyvdim0__ram_writemask__v0 = vlSelf->__PVT__enq_ptr_value;
        __Vdlyvval__ram_reverse__v0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__ibuffer__DOT__fifo_0_io_enq_bits_reverse;
        __Vdlyvset__ram_reverse__v0 = 1U;
        __Vdlyvdim0__ram_reverse__v0 = vlSelf->__PVT__enq_ptr_value;
        __Vdlyvval__ram_mem_unsigned__v0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__ibuffer__DOT__fifo_0_io_enq_bits_mem_unsigned;
        __Vdlyvset__ram_mem_unsigned__v0 = 1U;
        __Vdlyvdim0__ram_mem_unsigned__v0 = vlSelf->__PVT__enq_ptr_value;
        __Vdlyvval__ram_mul__v0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__ibuffer__DOT__fifo_0_io_enq_bits_mul;
        __Vdlyvset__ram_mul__v0 = 1U;
        __Vdlyvdim0__ram_mul__v0 = vlSelf->__PVT__enq_ptr_value;
        __Vdlyvval__ram_mem_cmd__v0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__ibuffer__DOT__fifo_0_io_enq_bits_mem_cmd;
        __Vdlyvset__ram_mem_cmd__v0 = 1U;
        __Vdlyvdim0__ram_mem_cmd__v0 = vlSelf->__PVT__enq_ptr_value;
        __Vdlyvval__ram_readmask__v0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__ibuffer__DOT__fifo_0_io_enq_bits_readmask;
        __Vdlyvset__ram_readmask__v0 = 1U;
        __Vdlyvdim0__ram_readmask__v0 = vlSelf->__PVT__enq_ptr_value;
        __Vdlyvval__ram_alu_fn__v0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__ibuffer__DOT__fifo_0_io_enq_bits_alu_fn;
        __Vdlyvset__ram_alu_fn__v0 = 1U;
        __Vdlyvdim0__ram_alu_fn__v0 = vlSelf->__PVT__enq_ptr_value;
        __Vdlyvval__ram_spike_info_pc__v0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__icache__DOT__addr_st2;
        __Vdlyvset__ram_spike_info_pc__v0 = 1U;
        __Vdlyvdim0__ram_spike_info_pc__v0 = vlSelf->__PVT__enq_ptr_value;
        __Vdlyvval__ram_fence__v0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__ibuffer__DOT__fifo_0_io_enq_bits_fence;
        __Vdlyvset__ram_fence__v0 = 1U;
        __Vdlyvdim0__ram_fence__v0 = vlSelf->__PVT__enq_ptr_value;
        __Vdlyvval__ram_pc__v0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__icache__DOT__addr_st2;
        __Vdlyvset__ram_pc__v0 = 1U;
        __Vdlyvdim0__ram_pc__v0 = vlSelf->__PVT__enq_ptr_value;
        __Vdlyvval__ram_sel_imm__v0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__ibuffer__DOT__fifo_0_io_enq_bits_sel_imm;
        __Vdlyvset__ram_sel_imm__v0 = 1U;
        __Vdlyvdim0__ram_sel_imm__v0 = vlSelf->__PVT__enq_ptr_value;
        __Vdlyvval__ram_spike_info_inst__v0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__icache__DOT__data_after_blockOffset_st2;
        __Vdlyvset__ram_spike_info_inst__v0 = 1U;
        __Vdlyvdim0__ram_spike_info_inst__v0 = vlSelf->__PVT__enq_ptr_value;
        __Vdlyvval__ram_mop__v0 = (3U & (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__icache__DOT__data_after_blockOffset_st2 
                                         >> 0x1aU));
        __Vdlyvset__ram_mop__v0 = 1U;
        __Vdlyvdim0__ram_mop__v0 = vlSelf->__PVT__enq_ptr_value;
        __Vdlyvval__ram_inst__v0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__icache__DOT__data_after_blockOffset_st2;
        __Vdlyvset__ram_inst__v0 = 1U;
        __Vdlyvdim0__ram_inst__v0 = vlSelf->__PVT__enq_ptr_value;
        __Vdlyvval__ram_branch__v0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__ibuffer__DOT__fifo_0_io_enq_bits_branch;
        __Vdlyvset__ram_branch__v0 = 1U;
        __Vdlyvdim0__ram_branch__v0 = vlSelf->__PVT__enq_ptr_value;
        __Vdlyvval__ram_simt_stack_op__v0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__ibuffer__DOT__fifo_0_io_enq_bits_simt_stack_op;
        __Vdlyvset__ram_simt_stack_op__v0 = 1U;
        __Vdlyvdim0__ram_simt_stack_op__v0 = vlSelf->__PVT__enq_ptr_value;
        __Vdlyvval__ram_csr__v0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__ibuffer__DOT__fifo_0_io_enq_bits_csr;
        __Vdlyvset__ram_csr__v0 = 1U;
        __Vdlyvdim0__ram_csr__v0 = vlSelf->__PVT__enq_ptr_value;
        __Vdlyvval__ram_sfu__v0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__ibuffer__DOT__fifo_0_io_enq_bits_sfu;
        __Vdlyvset__ram_sfu__v0 = 1U;
        __Vdlyvdim0__ram_sfu__v0 = vlSelf->__PVT__enq_ptr_value;
        __Vdlyvval__ram_fp__v0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__ibuffer__DOT__fifo_0_io_enq_bits_fp;
        __Vdlyvset__ram_fp__v0 = 1U;
        __Vdlyvdim0__ram_fp__v0 = vlSelf->__PVT__enq_ptr_value;
        __Vdlyvval__ram_simt_stack__v0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__ibuffer__DOT__fifo_0_io_enq_bits_simt_stack;
        __Vdlyvset__ram_simt_stack__v0 = 1U;
        __Vdlyvdim0__ram_simt_stack__v0 = vlSelf->__PVT__enq_ptr_value;
        __Vdlyvval__ram_wxd__v0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__ibuffer__DOT__fifo_0_io_enq_bits_wxd;
        __Vdlyvset__ram_wxd__v0 = 1U;
        __Vdlyvdim0__ram_wxd__v0 = vlSelf->__PVT__enq_ptr_value;
        __Vdlyvval__ram_wfd__v0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__ibuffer__DOT__fifo_0_io_enq_bits_wfd;
        __Vdlyvset__ram_wfd__v0 = 1U;
        __Vdlyvdim0__ram_wfd__v0 = vlSelf->__PVT__enq_ptr_value;
        __Vdlyvval__ram_barrier__v0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__ibuffer__DOT__fifo_0_io_enq_bits_barrier;
        __Vdlyvset__ram_barrier__v0 = 1U;
        __Vdlyvdim0__ram_barrier__v0 = vlSelf->__PVT__enq_ptr_value;
        __Vdlyvval__ram_reg_idxw__v0 = (0x1fU & (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__icache__DOT__data_after_blockOffset_st2 
                                                 >> 7U));
        __Vdlyvset__ram_reg_idxw__v0 = 1U;
        __Vdlyvdim0__ram_reg_idxw__v0 = vlSelf->__PVT__enq_ptr_value;
        __Vdlyvval__ram_sel_alu1__v0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__ibuffer__DOT__fifo_0_io_enq_bits_sel_alu1;
        __Vdlyvset__ram_sel_alu1__v0 = 1U;
        __Vdlyvdim0__ram_sel_alu1__v0 = vlSelf->__PVT__enq_ptr_value;
        __Vdlyvval__ram_mask__v0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__ibuffer__DOT__fifo_0_io_enq_bits_mask;
        __Vdlyvset__ram_mask__v0 = 1U;
        __Vdlyvdim0__ram_mask__v0 = vlSelf->__PVT__enq_ptr_value;
        __Vdlyvval__ram_sel_alu2__v0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__ibuffer__DOT__fifo_0_io_enq_bits_sel_alu2;
        __Vdlyvset__ram_sel_alu2__v0 = 1U;
        __Vdlyvdim0__ram_sel_alu2__v0 = vlSelf->__PVT__enq_ptr_value;
        __Vdlyvval__ram_reg_idx3__v0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__ibuffer__DOT__fifo_0_io_enq_bits_reg_idx3;
        __Vdlyvset__ram_reg_idx3__v0 = 1U;
        __Vdlyvdim0__ram_reg_idx3__v0 = vlSelf->__PVT__enq_ptr_value;
        __Vdlyvval__ram_sel_alu3__v0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__ibuffer__DOT__fifo_0_io_enq_bits_sel_alu3;
        __Vdlyvset__ram_sel_alu3__v0 = 1U;
        __Vdlyvdim0__ram_sel_alu3__v0 = vlSelf->__PVT__enq_ptr_value;
        __Vdlyvval__ram_reg_idx1__v0 = (0x1fU & (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__icache__DOT__data_after_blockOffset_st2 
                                                 >> 0xfU));
        __Vdlyvset__ram_reg_idx1__v0 = 1U;
        __Vdlyvdim0__ram_reg_idx1__v0 = vlSelf->__PVT__enq_ptr_value;
        __Vdlyvval__ram_mem__v0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__ibuffer__DOT__fifo_0_io_enq_bits_mem;
        __Vdlyvset__ram_mem__v0 = 1U;
        __Vdlyvdim0__ram_mem__v0 = vlSelf->__PVT__enq_ptr_value;
        __Vdlyvval__ram_reg_idx2__v0 = (0x1fU & (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__icache__DOT__data_after_blockOffset_st2 
                                                 >> 0x14U));
        __Vdlyvset__ram_reg_idx2__v0 = 1U;
        __Vdlyvdim0__ram_reg_idx2__v0 = vlSelf->__PVT__enq_ptr_value;
        __Vdlyvval__ram_isvec__v0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__ibuffer__DOT__fifo_0_io_enq_bits_isvec;
        __Vdlyvset__ram_isvec__v0 = 1U;
        __Vdlyvdim0__ram_isvec__v0 = vlSelf->__PVT__enq_ptr_value;
        __Vdlyvval__ram_wid__v0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__icache__DOT__warpid_st2;
        __Vdlyvset__ram_wid__v0 = 1U;
        __Vdlyvdim0__ram_wid__v0 = vlSelf->__PVT__enq_ptr_value;
    }
    if (vlSymsp->TOP.reset) {
        __Vdly__enq_ptr_value = 0U;
        __Vdly__deq_ptr_value = 0U;
        vlSelf->__PVT__maybe_full = 0U;
    } else if (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__ibuffer__DOT__fifo_1_io_flush) {
        __Vdly__enq_ptr_value = 0U;
        __Vdly__deq_ptr_value = 0U;
        vlSelf->__PVT__maybe_full = 0U;
    } else {
        if (vlSelf->__PVT__ram_inst_MPORT_en) {
            __Vdly__enq_ptr_value = (1U & ((IData)(1U) 
                                           + (IData)(vlSelf->__PVT__enq_ptr_value)));
        }
        if (vlSelf->__PVT__do_deq) {
            __Vdly__deq_ptr_value = (1U & ((IData)(1U) 
                                           + (IData)(vlSelf->__PVT__deq_ptr_value)));
        }
        if (((IData)(vlSelf->__PVT__ram_inst_MPORT_en) 
             != (IData)(vlSelf->__PVT__do_deq))) {
            vlSelf->__PVT__maybe_full = vlSelf->__PVT__ram_inst_MPORT_en;
        }
    }
    if (__Vdlyvset__ram_writemask__v0) {
        vlSelf->__PVT__ram_writemask[__Vdlyvdim0__ram_writemask__v0] 
            = __Vdlyvval__ram_writemask__v0;
    }
    if (__Vdlyvset__ram_reverse__v0) {
        vlSelf->__PVT__ram_reverse[__Vdlyvdim0__ram_reverse__v0] 
            = __Vdlyvval__ram_reverse__v0;
    }
    if (__Vdlyvset__ram_mem_unsigned__v0) {
        vlSelf->__PVT__ram_mem_unsigned[__Vdlyvdim0__ram_mem_unsigned__v0] 
            = __Vdlyvval__ram_mem_unsigned__v0;
    }
    if (__Vdlyvset__ram_mul__v0) {
        vlSelf->__PVT__ram_mul[__Vdlyvdim0__ram_mul__v0] 
            = __Vdlyvval__ram_mul__v0;
    }
    if (__Vdlyvset__ram_mem_cmd__v0) {
        vlSelf->__PVT__ram_mem_cmd[__Vdlyvdim0__ram_mem_cmd__v0] 
            = __Vdlyvval__ram_mem_cmd__v0;
    }
    if (__Vdlyvset__ram_readmask__v0) {
        vlSelf->__PVT__ram_readmask[__Vdlyvdim0__ram_readmask__v0] 
            = __Vdlyvval__ram_readmask__v0;
    }
    if (__Vdlyvset__ram_alu_fn__v0) {
        vlSelf->__PVT__ram_alu_fn[__Vdlyvdim0__ram_alu_fn__v0] 
            = __Vdlyvval__ram_alu_fn__v0;
    }
    if (__Vdlyvset__ram_spike_info_pc__v0) {
        vlSelf->__PVT__ram_spike_info_pc[__Vdlyvdim0__ram_spike_info_pc__v0] 
            = __Vdlyvval__ram_spike_info_pc__v0;
    }
    if (__Vdlyvset__ram_fence__v0) {
        vlSelf->__PVT__ram_fence[__Vdlyvdim0__ram_fence__v0] 
            = __Vdlyvval__ram_fence__v0;
    }
    if (__Vdlyvset__ram_pc__v0) {
        vlSelf->__PVT__ram_pc[__Vdlyvdim0__ram_pc__v0] 
            = __Vdlyvval__ram_pc__v0;
    }
    if (__Vdlyvset__ram_sel_imm__v0) {
        vlSelf->__PVT__ram_sel_imm[__Vdlyvdim0__ram_sel_imm__v0] 
            = __Vdlyvval__ram_sel_imm__v0;
    }
    if (__Vdlyvset__ram_spike_info_inst__v0) {
        vlSelf->__PVT__ram_spike_info_inst[__Vdlyvdim0__ram_spike_info_inst__v0] 
            = __Vdlyvval__ram_spike_info_inst__v0;
    }
    if (__Vdlyvset__ram_mop__v0) {
        vlSelf->__PVT__ram_mop[__Vdlyvdim0__ram_mop__v0] 
            = __Vdlyvval__ram_mop__v0;
    }
    if (__Vdlyvset__ram_inst__v0) {
        vlSelf->__PVT__ram_inst[__Vdlyvdim0__ram_inst__v0] 
            = __Vdlyvval__ram_inst__v0;
    }
    if (__Vdlyvset__ram_branch__v0) {
        vlSelf->__PVT__ram_branch[__Vdlyvdim0__ram_branch__v0] 
            = __Vdlyvval__ram_branch__v0;
    }
    if (__Vdlyvset__ram_simt_stack_op__v0) {
        vlSelf->__PVT__ram_simt_stack_op[__Vdlyvdim0__ram_simt_stack_op__v0] 
            = __Vdlyvval__ram_simt_stack_op__v0;
    }
    if (__Vdlyvset__ram_csr__v0) {
        vlSelf->__PVT__ram_csr[__Vdlyvdim0__ram_csr__v0] 
            = __Vdlyvval__ram_csr__v0;
    }
    if (__Vdlyvset__ram_sfu__v0) {
        vlSelf->__PVT__ram_sfu[__Vdlyvdim0__ram_sfu__v0] 
            = __Vdlyvval__ram_sfu__v0;
    }
    if (__Vdlyvset__ram_fp__v0) {
        vlSelf->__PVT__ram_fp[__Vdlyvdim0__ram_fp__v0] 
            = __Vdlyvval__ram_fp__v0;
    }
    if (__Vdlyvset__ram_simt_stack__v0) {
        vlSelf->__PVT__ram_simt_stack[__Vdlyvdim0__ram_simt_stack__v0] 
            = __Vdlyvval__ram_simt_stack__v0;
    }
    if (__Vdlyvset__ram_wxd__v0) {
        vlSelf->__PVT__ram_wxd[__Vdlyvdim0__ram_wxd__v0] 
            = __Vdlyvval__ram_wxd__v0;
    }
    if (__Vdlyvset__ram_wfd__v0) {
        vlSelf->__PVT__ram_wfd[__Vdlyvdim0__ram_wfd__v0] 
            = __Vdlyvval__ram_wfd__v0;
    }
    if (__Vdlyvset__ram_barrier__v0) {
        vlSelf->__PVT__ram_barrier[__Vdlyvdim0__ram_barrier__v0] 
            = __Vdlyvval__ram_barrier__v0;
    }
    if (__Vdlyvset__ram_reg_idxw__v0) {
        vlSelf->__PVT__ram_reg_idxw[__Vdlyvdim0__ram_reg_idxw__v0] 
            = __Vdlyvval__ram_reg_idxw__v0;
    }
    if (__Vdlyvset__ram_sel_alu1__v0) {
        vlSelf->__PVT__ram_sel_alu1[__Vdlyvdim0__ram_sel_alu1__v0] 
            = __Vdlyvval__ram_sel_alu1__v0;
    }
    if (__Vdlyvset__ram_mask__v0) {
        vlSelf->__PVT__ram_mask[__Vdlyvdim0__ram_mask__v0] 
            = __Vdlyvval__ram_mask__v0;
    }
    if (__Vdlyvset__ram_sel_alu2__v0) {
        vlSelf->__PVT__ram_sel_alu2[__Vdlyvdim0__ram_sel_alu2__v0] 
            = __Vdlyvval__ram_sel_alu2__v0;
    }
    if (__Vdlyvset__ram_reg_idx3__v0) {
        vlSelf->__PVT__ram_reg_idx3[__Vdlyvdim0__ram_reg_idx3__v0] 
            = __Vdlyvval__ram_reg_idx3__v0;
    }
    if (__Vdlyvset__ram_sel_alu3__v0) {
        vlSelf->__PVT__ram_sel_alu3[__Vdlyvdim0__ram_sel_alu3__v0] 
            = __Vdlyvval__ram_sel_alu3__v0;
    }
    if (__Vdlyvset__ram_reg_idx1__v0) {
        vlSelf->__PVT__ram_reg_idx1[__Vdlyvdim0__ram_reg_idx1__v0] 
            = __Vdlyvval__ram_reg_idx1__v0;
    }
    if (__Vdlyvset__ram_mem__v0) {
        vlSelf->__PVT__ram_mem[__Vdlyvdim0__ram_mem__v0] 
            = __Vdlyvval__ram_mem__v0;
    }
    if (__Vdlyvset__ram_reg_idx2__v0) {
        vlSelf->__PVT__ram_reg_idx2[__Vdlyvdim0__ram_reg_idx2__v0] 
            = __Vdlyvval__ram_reg_idx2__v0;
    }
    if (__Vdlyvset__ram_isvec__v0) {
        vlSelf->__PVT__ram_isvec[__Vdlyvdim0__ram_isvec__v0] 
            = __Vdlyvval__ram_isvec__v0;
    }
    if (__Vdlyvset__ram_wid__v0) {
        vlSelf->__PVT__ram_wid[__Vdlyvdim0__ram_wid__v0] 
            = __Vdlyvval__ram_wid__v0;
    }
    vlSelf->__PVT__enq_ptr_value = __Vdly__enq_ptr_value;
    vlSelf->__PVT__deq_ptr_value = __Vdly__deq_ptr_value;
    vlSelf->__PVT__io_deq_bits_fp = vlSelf->__PVT__ram_fp
        [vlSelf->__PVT__deq_ptr_value];
    vlSelf->__PVT__io_deq_bits_simt_stack_op = vlSelf->__PVT__ram_simt_stack_op
        [vlSelf->__PVT__deq_ptr_value];
    vlSelf->__PVT__io_deq_bits_csr = vlSelf->__PVT__ram_csr
        [vlSelf->__PVT__deq_ptr_value];
    vlSelf->__PVT__io_deq_bits_sfu = vlSelf->__PVT__ram_sfu
        [vlSelf->__PVT__deq_ptr_value];
    vlSelf->__PVT__io_deq_bits_simt_stack = vlSelf->__PVT__ram_simt_stack
        [vlSelf->__PVT__deq_ptr_value];
    vlSelf->__PVT__io_deq_bits_wfd = vlSelf->__PVT__ram_wfd
        [vlSelf->__PVT__deq_ptr_value];
    vlSelf->__PVT__io_deq_bits_wxd = vlSelf->__PVT__ram_wxd
        [vlSelf->__PVT__deq_ptr_value];
    vlSelf->__PVT__io_deq_bits_reg_idxw = vlSelf->__PVT__ram_reg_idxw
        [vlSelf->__PVT__deq_ptr_value];
    vlSelf->__PVT__io_deq_bits_barrier = vlSelf->__PVT__ram_barrier
        [vlSelf->__PVT__deq_ptr_value];
    vlSelf->__PVT__io_deq_bits_sel_alu1 = vlSelf->__PVT__ram_sel_alu1
        [vlSelf->__PVT__deq_ptr_value];
    vlSelf->__PVT__io_deq_bits_mask = vlSelf->__PVT__ram_mask
        [vlSelf->__PVT__deq_ptr_value];
    vlSelf->__PVT__io_deq_bits_sel_alu2 = vlSelf->__PVT__ram_sel_alu2
        [vlSelf->__PVT__deq_ptr_value];
    vlSelf->__PVT__io_deq_bits_reg_idx3 = vlSelf->__PVT__ram_reg_idx3
        [vlSelf->__PVT__deq_ptr_value];
    vlSelf->__PVT__io_deq_bits_sel_alu3 = vlSelf->__PVT__ram_sel_alu3
        [vlSelf->__PVT__deq_ptr_value];
    vlSelf->__PVT__io_deq_bits_reg_idx1 = vlSelf->__PVT__ram_reg_idx1
        [vlSelf->__PVT__deq_ptr_value];
    vlSelf->__PVT__io_deq_bits_mem = vlSelf->__PVT__ram_mem
        [vlSelf->__PVT__deq_ptr_value];
    vlSelf->__PVT__io_deq_bits_reg_idx2 = vlSelf->__PVT__ram_reg_idx2
        [vlSelf->__PVT__deq_ptr_value];
    vlSelf->__PVT__io_deq_bits_isvec = vlSelf->__PVT__ram_isvec
        [vlSelf->__PVT__deq_ptr_value];
    vlSelf->__PVT__ptr_match = ((IData)(vlSelf->__PVT__deq_ptr_value) 
                                == (IData)(vlSelf->__PVT__enq_ptr_value));
    vlSelf->__PVT__empty = ((~ (IData)(vlSelf->__PVT__maybe_full)) 
                            & (IData)(vlSelf->__PVT__ptr_match));
    vlSelf->__PVT__full = ((IData)(vlSelf->__PVT__ptr_match) 
                           & (IData)(vlSelf->__PVT__maybe_full));
}

VL_INLINE_OPT void VVentus_Queue_19___nba_sequent__TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__ibuffer__DOT__fifo_1__1(VVentus_Queue_19* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VVentus__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VVentus_Queue_19___nba_sequent__TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__ibuffer__DOT__fifo_1__1\n"); );
    // Body
    vlSelf->__PVT__ram_inst_MPORT_en = ((~ (IData)(vlSelf->__PVT__full)) 
                                        & ((1U == (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__icache__DOT__warpid_st2)) 
                                           & (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__ibuffer_io_in_valid)));
    vlSelf->__PVT__do_deq = ((~ (IData)(vlSelf->__PVT__empty)) 
                             & ((((~ (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.pipe__DOT__ibuffer2issue__DOT__rrarbit__DOT____VdfgTmp_hb26d187d__0)) 
                                  | (1U > (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__ibuffer2issue__DOT__rrarbit__DOT__lastGrant))) 
                                 & (0U != (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__Demux__DOT___io_in_ready_T_4))) 
                                & (~ ((IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__warp_sche__DOT___warp_ready_T_3) 
                                      >> 1U))));
}

VL_INLINE_OPT void VVentus_Queue_19___nba_sequent__TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__ibuffer__DOT__fifo_2__0(VVentus_Queue_19* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VVentus__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VVentus_Queue_19___nba_sequent__TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__ibuffer__DOT__fifo_2__0\n"); );
    // Init
    CData/*0:0*/ __Vdlyvdim0__ram_readmask__v0;
    CData/*0:0*/ __Vdlyvval__ram_readmask__v0;
    CData/*0:0*/ __Vdlyvset__ram_readmask__v0;
    CData/*0:0*/ __Vdlyvdim0__ram_sfu__v0;
    CData/*0:0*/ __Vdlyvval__ram_sfu__v0;
    CData/*0:0*/ __Vdlyvset__ram_sfu__v0;
    CData/*0:0*/ __Vdlyvdim0__ram_fence__v0;
    CData/*0:0*/ __Vdlyvval__ram_fence__v0;
    CData/*0:0*/ __Vdlyvset__ram_fence__v0;
    CData/*0:0*/ __Vdlyvdim0__ram_wfd__v0;
    CData/*0:0*/ __Vdlyvval__ram_wfd__v0;
    CData/*0:0*/ __Vdlyvset__ram_wfd__v0;
    CData/*0:0*/ __Vdlyvdim0__ram_reg_idxw__v0;
    CData/*4:0*/ __Vdlyvval__ram_reg_idxw__v0;
    CData/*0:0*/ __Vdlyvset__ram_reg_idxw__v0;
    CData/*0:0*/ __Vdlyvdim0__ram_reg_idx2__v0;
    CData/*4:0*/ __Vdlyvval__ram_reg_idx2__v0;
    CData/*0:0*/ __Vdlyvset__ram_reg_idx2__v0;
    CData/*0:0*/ __Vdlyvdim0__ram_reg_idx1__v0;
    CData/*4:0*/ __Vdlyvval__ram_reg_idx1__v0;
    CData/*0:0*/ __Vdlyvset__ram_reg_idx1__v0;
    CData/*0:0*/ __Vdlyvdim0__ram_mop__v0;
    CData/*1:0*/ __Vdlyvval__ram_mop__v0;
    CData/*0:0*/ __Vdlyvset__ram_mop__v0;
    CData/*0:0*/ __Vdlyvdim0__ram_mem_cmd__v0;
    CData/*1:0*/ __Vdlyvval__ram_mem_cmd__v0;
    CData/*0:0*/ __Vdlyvset__ram_mem_cmd__v0;
    CData/*0:0*/ __Vdlyvdim0__ram_mul__v0;
    CData/*0:0*/ __Vdlyvval__ram_mul__v0;
    CData/*0:0*/ __Vdlyvset__ram_mul__v0;
    CData/*0:0*/ __Vdlyvdim0__ram_mem__v0;
    CData/*0:0*/ __Vdlyvval__ram_mem__v0;
    CData/*0:0*/ __Vdlyvset__ram_mem__v0;
    CData/*0:0*/ __Vdlyvdim0__ram_alu_fn__v0;
    CData/*5:0*/ __Vdlyvval__ram_alu_fn__v0;
    CData/*0:0*/ __Vdlyvset__ram_alu_fn__v0;
    CData/*0:0*/ __Vdlyvdim0__ram_mem_unsigned__v0;
    CData/*0:0*/ __Vdlyvval__ram_mem_unsigned__v0;
    CData/*0:0*/ __Vdlyvset__ram_mem_unsigned__v0;
    CData/*0:0*/ __Vdlyvdim0__ram_sel_imm__v0;
    CData/*2:0*/ __Vdlyvval__ram_sel_imm__v0;
    CData/*0:0*/ __Vdlyvset__ram_sel_imm__v0;
    CData/*0:0*/ __Vdlyvdim0__ram_simt_stack__v0;
    CData/*0:0*/ __Vdlyvval__ram_simt_stack__v0;
    CData/*0:0*/ __Vdlyvset__ram_simt_stack__v0;
    CData/*0:0*/ __Vdlyvdim0__ram_branch__v0;
    CData/*1:0*/ __Vdlyvval__ram_branch__v0;
    CData/*0:0*/ __Vdlyvset__ram_branch__v0;
    CData/*0:0*/ __Vdly__enq_ptr_value;
    CData/*0:0*/ __Vdlyvdim0__ram_simt_stack_op__v0;
    CData/*0:0*/ __Vdlyvval__ram_simt_stack_op__v0;
    CData/*0:0*/ __Vdlyvset__ram_simt_stack_op__v0;
    CData/*0:0*/ __Vdlyvdim0__ram_inst__v0;
    IData/*31:0*/ __Vdlyvval__ram_inst__v0;
    CData/*0:0*/ __Vdlyvset__ram_inst__v0;
    CData/*0:0*/ __Vdlyvdim0__ram_reg_idx3__v0;
    CData/*4:0*/ __Vdlyvval__ram_reg_idx3__v0;
    CData/*0:0*/ __Vdlyvset__ram_reg_idx3__v0;
    CData/*0:0*/ __Vdlyvdim0__ram_isvec__v0;
    CData/*0:0*/ __Vdlyvval__ram_isvec__v0;
    CData/*0:0*/ __Vdlyvset__ram_isvec__v0;
    CData/*0:0*/ __Vdlyvdim0__ram_barrier__v0;
    CData/*0:0*/ __Vdlyvval__ram_barrier__v0;
    CData/*0:0*/ __Vdlyvset__ram_barrier__v0;
    CData/*0:0*/ __Vdlyvdim0__ram_csr__v0;
    CData/*1:0*/ __Vdlyvval__ram_csr__v0;
    CData/*0:0*/ __Vdlyvset__ram_csr__v0;
    CData/*0:0*/ __Vdlyvdim0__ram_wid__v0;
    CData/*1:0*/ __Vdlyvval__ram_wid__v0;
    CData/*0:0*/ __Vdlyvset__ram_wid__v0;
    CData/*0:0*/ __Vdlyvdim0__ram_reverse__v0;
    CData/*0:0*/ __Vdlyvval__ram_reverse__v0;
    CData/*0:0*/ __Vdlyvset__ram_reverse__v0;
    CData/*0:0*/ __Vdlyvdim0__ram_fp__v0;
    CData/*0:0*/ __Vdlyvval__ram_fp__v0;
    CData/*0:0*/ __Vdlyvset__ram_fp__v0;
    CData/*0:0*/ __Vdlyvdim0__ram_sel_alu2__v0;
    CData/*1:0*/ __Vdlyvval__ram_sel_alu2__v0;
    CData/*0:0*/ __Vdlyvset__ram_sel_alu2__v0;
    CData/*0:0*/ __Vdlyvdim0__ram_sel_alu1__v0;
    CData/*1:0*/ __Vdlyvval__ram_sel_alu1__v0;
    CData/*0:0*/ __Vdlyvset__ram_sel_alu1__v0;
    CData/*0:0*/ __Vdlyvdim0__ram_sel_alu3__v0;
    CData/*1:0*/ __Vdlyvval__ram_sel_alu3__v0;
    CData/*0:0*/ __Vdlyvset__ram_sel_alu3__v0;
    CData/*0:0*/ __Vdlyvdim0__ram_mask__v0;
    CData/*0:0*/ __Vdlyvval__ram_mask__v0;
    CData/*0:0*/ __Vdlyvset__ram_mask__v0;
    CData/*0:0*/ __Vdlyvdim0__ram_writemask__v0;
    CData/*0:0*/ __Vdlyvval__ram_writemask__v0;
    CData/*0:0*/ __Vdlyvset__ram_writemask__v0;
    CData/*0:0*/ __Vdlyvdim0__ram_wxd__v0;
    CData/*0:0*/ __Vdlyvval__ram_wxd__v0;
    CData/*0:0*/ __Vdlyvset__ram_wxd__v0;
    CData/*0:0*/ __Vdlyvdim0__ram_pc__v0;
    IData/*31:0*/ __Vdlyvval__ram_pc__v0;
    CData/*0:0*/ __Vdlyvset__ram_pc__v0;
    CData/*0:0*/ __Vdlyvdim0__ram_spike_info_pc__v0;
    IData/*31:0*/ __Vdlyvval__ram_spike_info_pc__v0;
    CData/*0:0*/ __Vdlyvset__ram_spike_info_pc__v0;
    CData/*0:0*/ __Vdlyvdim0__ram_spike_info_inst__v0;
    IData/*31:0*/ __Vdlyvval__ram_spike_info_inst__v0;
    CData/*0:0*/ __Vdlyvset__ram_spike_info_inst__v0;
    CData/*0:0*/ __Vdly__deq_ptr_value;
    // Body
    __Vdlyvset__ram_writemask__v0 = 0U;
    __Vdlyvset__ram_reverse__v0 = 0U;
    __Vdlyvset__ram_mem_unsigned__v0 = 0U;
    __Vdlyvset__ram_mul__v0 = 0U;
    __Vdlyvset__ram_mem_cmd__v0 = 0U;
    __Vdlyvset__ram_readmask__v0 = 0U;
    __Vdlyvset__ram_alu_fn__v0 = 0U;
    __Vdlyvset__ram_spike_info_pc__v0 = 0U;
    __Vdlyvset__ram_fence__v0 = 0U;
    __Vdlyvset__ram_pc__v0 = 0U;
    __Vdlyvset__ram_sel_imm__v0 = 0U;
    __Vdlyvset__ram_spike_info_inst__v0 = 0U;
    __Vdlyvset__ram_mop__v0 = 0U;
    __Vdlyvset__ram_inst__v0 = 0U;
    __Vdlyvset__ram_branch__v0 = 0U;
    __Vdlyvset__ram_simt_stack_op__v0 = 0U;
    __Vdlyvset__ram_csr__v0 = 0U;
    __Vdlyvset__ram_sfu__v0 = 0U;
    __Vdlyvset__ram_fp__v0 = 0U;
    __Vdlyvset__ram_simt_stack__v0 = 0U;
    __Vdlyvset__ram_wxd__v0 = 0U;
    __Vdlyvset__ram_wfd__v0 = 0U;
    __Vdlyvset__ram_barrier__v0 = 0U;
    __Vdlyvset__ram_reg_idxw__v0 = 0U;
    __Vdlyvset__ram_sel_alu1__v0 = 0U;
    __Vdlyvset__ram_mask__v0 = 0U;
    __Vdlyvset__ram_sel_alu2__v0 = 0U;
    __Vdlyvset__ram_reg_idx3__v0 = 0U;
    __Vdlyvset__ram_sel_alu3__v0 = 0U;
    __Vdlyvset__ram_reg_idx1__v0 = 0U;
    __Vdly__enq_ptr_value = vlSelf->__PVT__enq_ptr_value;
    __Vdlyvset__ram_mem__v0 = 0U;
    __Vdlyvset__ram_reg_idx2__v0 = 0U;
    __Vdlyvset__ram_isvec__v0 = 0U;
    __Vdlyvset__ram_wid__v0 = 0U;
    __Vdly__deq_ptr_value = vlSelf->__PVT__deq_ptr_value;
    if (vlSelf->__PVT__ram_inst_MPORT_en) {
        __Vdlyvval__ram_writemask__v0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__ibuffer__DOT__fifo_0_io_enq_bits_writemask;
        __Vdlyvset__ram_writemask__v0 = 1U;
        __Vdlyvdim0__ram_writemask__v0 = vlSelf->__PVT__enq_ptr_value;
        __Vdlyvval__ram_reverse__v0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__ibuffer__DOT__fifo_0_io_enq_bits_reverse;
        __Vdlyvset__ram_reverse__v0 = 1U;
        __Vdlyvdim0__ram_reverse__v0 = vlSelf->__PVT__enq_ptr_value;
        __Vdlyvval__ram_mem_unsigned__v0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__ibuffer__DOT__fifo_0_io_enq_bits_mem_unsigned;
        __Vdlyvset__ram_mem_unsigned__v0 = 1U;
        __Vdlyvdim0__ram_mem_unsigned__v0 = vlSelf->__PVT__enq_ptr_value;
        __Vdlyvval__ram_mul__v0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__ibuffer__DOT__fifo_0_io_enq_bits_mul;
        __Vdlyvset__ram_mul__v0 = 1U;
        __Vdlyvdim0__ram_mul__v0 = vlSelf->__PVT__enq_ptr_value;
        __Vdlyvval__ram_mem_cmd__v0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__ibuffer__DOT__fifo_0_io_enq_bits_mem_cmd;
        __Vdlyvset__ram_mem_cmd__v0 = 1U;
        __Vdlyvdim0__ram_mem_cmd__v0 = vlSelf->__PVT__enq_ptr_value;
        __Vdlyvval__ram_readmask__v0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__ibuffer__DOT__fifo_0_io_enq_bits_readmask;
        __Vdlyvset__ram_readmask__v0 = 1U;
        __Vdlyvdim0__ram_readmask__v0 = vlSelf->__PVT__enq_ptr_value;
        __Vdlyvval__ram_alu_fn__v0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__ibuffer__DOT__fifo_0_io_enq_bits_alu_fn;
        __Vdlyvset__ram_alu_fn__v0 = 1U;
        __Vdlyvdim0__ram_alu_fn__v0 = vlSelf->__PVT__enq_ptr_value;
        __Vdlyvval__ram_spike_info_pc__v0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__icache__DOT__addr_st2;
        __Vdlyvset__ram_spike_info_pc__v0 = 1U;
        __Vdlyvdim0__ram_spike_info_pc__v0 = vlSelf->__PVT__enq_ptr_value;
        __Vdlyvval__ram_fence__v0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__ibuffer__DOT__fifo_0_io_enq_bits_fence;
        __Vdlyvset__ram_fence__v0 = 1U;
        __Vdlyvdim0__ram_fence__v0 = vlSelf->__PVT__enq_ptr_value;
        __Vdlyvval__ram_pc__v0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__icache__DOT__addr_st2;
        __Vdlyvset__ram_pc__v0 = 1U;
        __Vdlyvdim0__ram_pc__v0 = vlSelf->__PVT__enq_ptr_value;
        __Vdlyvval__ram_sel_imm__v0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__ibuffer__DOT__fifo_0_io_enq_bits_sel_imm;
        __Vdlyvset__ram_sel_imm__v0 = 1U;
        __Vdlyvdim0__ram_sel_imm__v0 = vlSelf->__PVT__enq_ptr_value;
        __Vdlyvval__ram_spike_info_inst__v0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__icache__DOT__data_after_blockOffset_st2;
        __Vdlyvset__ram_spike_info_inst__v0 = 1U;
        __Vdlyvdim0__ram_spike_info_inst__v0 = vlSelf->__PVT__enq_ptr_value;
        __Vdlyvval__ram_mop__v0 = (3U & (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__icache__DOT__data_after_blockOffset_st2 
                                         >> 0x1aU));
        __Vdlyvset__ram_mop__v0 = 1U;
        __Vdlyvdim0__ram_mop__v0 = vlSelf->__PVT__enq_ptr_value;
        __Vdlyvval__ram_inst__v0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__icache__DOT__data_after_blockOffset_st2;
        __Vdlyvset__ram_inst__v0 = 1U;
        __Vdlyvdim0__ram_inst__v0 = vlSelf->__PVT__enq_ptr_value;
        __Vdlyvval__ram_branch__v0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__ibuffer__DOT__fifo_0_io_enq_bits_branch;
        __Vdlyvset__ram_branch__v0 = 1U;
        __Vdlyvdim0__ram_branch__v0 = vlSelf->__PVT__enq_ptr_value;
        __Vdlyvval__ram_simt_stack_op__v0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__ibuffer__DOT__fifo_0_io_enq_bits_simt_stack_op;
        __Vdlyvset__ram_simt_stack_op__v0 = 1U;
        __Vdlyvdim0__ram_simt_stack_op__v0 = vlSelf->__PVT__enq_ptr_value;
        __Vdlyvval__ram_csr__v0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__ibuffer__DOT__fifo_0_io_enq_bits_csr;
        __Vdlyvset__ram_csr__v0 = 1U;
        __Vdlyvdim0__ram_csr__v0 = vlSelf->__PVT__enq_ptr_value;
        __Vdlyvval__ram_sfu__v0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__ibuffer__DOT__fifo_0_io_enq_bits_sfu;
        __Vdlyvset__ram_sfu__v0 = 1U;
        __Vdlyvdim0__ram_sfu__v0 = vlSelf->__PVT__enq_ptr_value;
        __Vdlyvval__ram_fp__v0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__ibuffer__DOT__fifo_0_io_enq_bits_fp;
        __Vdlyvset__ram_fp__v0 = 1U;
        __Vdlyvdim0__ram_fp__v0 = vlSelf->__PVT__enq_ptr_value;
        __Vdlyvval__ram_simt_stack__v0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__ibuffer__DOT__fifo_0_io_enq_bits_simt_stack;
        __Vdlyvset__ram_simt_stack__v0 = 1U;
        __Vdlyvdim0__ram_simt_stack__v0 = vlSelf->__PVT__enq_ptr_value;
        __Vdlyvval__ram_wxd__v0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__ibuffer__DOT__fifo_0_io_enq_bits_wxd;
        __Vdlyvset__ram_wxd__v0 = 1U;
        __Vdlyvdim0__ram_wxd__v0 = vlSelf->__PVT__enq_ptr_value;
        __Vdlyvval__ram_wfd__v0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__ibuffer__DOT__fifo_0_io_enq_bits_wfd;
        __Vdlyvset__ram_wfd__v0 = 1U;
        __Vdlyvdim0__ram_wfd__v0 = vlSelf->__PVT__enq_ptr_value;
        __Vdlyvval__ram_barrier__v0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__ibuffer__DOT__fifo_0_io_enq_bits_barrier;
        __Vdlyvset__ram_barrier__v0 = 1U;
        __Vdlyvdim0__ram_barrier__v0 = vlSelf->__PVT__enq_ptr_value;
        __Vdlyvval__ram_reg_idxw__v0 = (0x1fU & (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__icache__DOT__data_after_blockOffset_st2 
                                                 >> 7U));
        __Vdlyvset__ram_reg_idxw__v0 = 1U;
        __Vdlyvdim0__ram_reg_idxw__v0 = vlSelf->__PVT__enq_ptr_value;
        __Vdlyvval__ram_sel_alu1__v0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__ibuffer__DOT__fifo_0_io_enq_bits_sel_alu1;
        __Vdlyvset__ram_sel_alu1__v0 = 1U;
        __Vdlyvdim0__ram_sel_alu1__v0 = vlSelf->__PVT__enq_ptr_value;
        __Vdlyvval__ram_mask__v0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__ibuffer__DOT__fifo_0_io_enq_bits_mask;
        __Vdlyvset__ram_mask__v0 = 1U;
        __Vdlyvdim0__ram_mask__v0 = vlSelf->__PVT__enq_ptr_value;
        __Vdlyvval__ram_sel_alu2__v0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__ibuffer__DOT__fifo_0_io_enq_bits_sel_alu2;
        __Vdlyvset__ram_sel_alu2__v0 = 1U;
        __Vdlyvdim0__ram_sel_alu2__v0 = vlSelf->__PVT__enq_ptr_value;
        __Vdlyvval__ram_reg_idx3__v0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__ibuffer__DOT__fifo_0_io_enq_bits_reg_idx3;
        __Vdlyvset__ram_reg_idx3__v0 = 1U;
        __Vdlyvdim0__ram_reg_idx3__v0 = vlSelf->__PVT__enq_ptr_value;
        __Vdlyvval__ram_sel_alu3__v0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__ibuffer__DOT__fifo_0_io_enq_bits_sel_alu3;
        __Vdlyvset__ram_sel_alu3__v0 = 1U;
        __Vdlyvdim0__ram_sel_alu3__v0 = vlSelf->__PVT__enq_ptr_value;
        __Vdlyvval__ram_reg_idx1__v0 = (0x1fU & (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__icache__DOT__data_after_blockOffset_st2 
                                                 >> 0xfU));
        __Vdlyvset__ram_reg_idx1__v0 = 1U;
        __Vdlyvdim0__ram_reg_idx1__v0 = vlSelf->__PVT__enq_ptr_value;
        __Vdlyvval__ram_mem__v0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__ibuffer__DOT__fifo_0_io_enq_bits_mem;
        __Vdlyvset__ram_mem__v0 = 1U;
        __Vdlyvdim0__ram_mem__v0 = vlSelf->__PVT__enq_ptr_value;
        __Vdlyvval__ram_reg_idx2__v0 = (0x1fU & (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__icache__DOT__data_after_blockOffset_st2 
                                                 >> 0x14U));
        __Vdlyvset__ram_reg_idx2__v0 = 1U;
        __Vdlyvdim0__ram_reg_idx2__v0 = vlSelf->__PVT__enq_ptr_value;
        __Vdlyvval__ram_isvec__v0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__ibuffer__DOT__fifo_0_io_enq_bits_isvec;
        __Vdlyvset__ram_isvec__v0 = 1U;
        __Vdlyvdim0__ram_isvec__v0 = vlSelf->__PVT__enq_ptr_value;
        __Vdlyvval__ram_wid__v0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__icache__DOT__warpid_st2;
        __Vdlyvset__ram_wid__v0 = 1U;
        __Vdlyvdim0__ram_wid__v0 = vlSelf->__PVT__enq_ptr_value;
    }
    if (vlSymsp->TOP.reset) {
        __Vdly__enq_ptr_value = 0U;
        __Vdly__deq_ptr_value = 0U;
        vlSelf->__PVT__maybe_full = 0U;
    } else if (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__ibuffer__DOT__fifo_2_io_flush) {
        __Vdly__enq_ptr_value = 0U;
        __Vdly__deq_ptr_value = 0U;
        vlSelf->__PVT__maybe_full = 0U;
    } else {
        if (vlSelf->__PVT__ram_inst_MPORT_en) {
            __Vdly__enq_ptr_value = (1U & ((IData)(1U) 
                                           + (IData)(vlSelf->__PVT__enq_ptr_value)));
        }
        if (vlSelf->__PVT__do_deq) {
            __Vdly__deq_ptr_value = (1U & ((IData)(1U) 
                                           + (IData)(vlSelf->__PVT__deq_ptr_value)));
        }
        if (((IData)(vlSelf->__PVT__ram_inst_MPORT_en) 
             != (IData)(vlSelf->__PVT__do_deq))) {
            vlSelf->__PVT__maybe_full = vlSelf->__PVT__ram_inst_MPORT_en;
        }
    }
    if (__Vdlyvset__ram_writemask__v0) {
        vlSelf->__PVT__ram_writemask[__Vdlyvdim0__ram_writemask__v0] 
            = __Vdlyvval__ram_writemask__v0;
    }
    if (__Vdlyvset__ram_reverse__v0) {
        vlSelf->__PVT__ram_reverse[__Vdlyvdim0__ram_reverse__v0] 
            = __Vdlyvval__ram_reverse__v0;
    }
    if (__Vdlyvset__ram_mem_unsigned__v0) {
        vlSelf->__PVT__ram_mem_unsigned[__Vdlyvdim0__ram_mem_unsigned__v0] 
            = __Vdlyvval__ram_mem_unsigned__v0;
    }
    if (__Vdlyvset__ram_mul__v0) {
        vlSelf->__PVT__ram_mul[__Vdlyvdim0__ram_mul__v0] 
            = __Vdlyvval__ram_mul__v0;
    }
    if (__Vdlyvset__ram_mem_cmd__v0) {
        vlSelf->__PVT__ram_mem_cmd[__Vdlyvdim0__ram_mem_cmd__v0] 
            = __Vdlyvval__ram_mem_cmd__v0;
    }
    if (__Vdlyvset__ram_readmask__v0) {
        vlSelf->__PVT__ram_readmask[__Vdlyvdim0__ram_readmask__v0] 
            = __Vdlyvval__ram_readmask__v0;
    }
    if (__Vdlyvset__ram_alu_fn__v0) {
        vlSelf->__PVT__ram_alu_fn[__Vdlyvdim0__ram_alu_fn__v0] 
            = __Vdlyvval__ram_alu_fn__v0;
    }
    if (__Vdlyvset__ram_spike_info_pc__v0) {
        vlSelf->__PVT__ram_spike_info_pc[__Vdlyvdim0__ram_spike_info_pc__v0] 
            = __Vdlyvval__ram_spike_info_pc__v0;
    }
    if (__Vdlyvset__ram_fence__v0) {
        vlSelf->__PVT__ram_fence[__Vdlyvdim0__ram_fence__v0] 
            = __Vdlyvval__ram_fence__v0;
    }
    if (__Vdlyvset__ram_pc__v0) {
        vlSelf->__PVT__ram_pc[__Vdlyvdim0__ram_pc__v0] 
            = __Vdlyvval__ram_pc__v0;
    }
    if (__Vdlyvset__ram_sel_imm__v0) {
        vlSelf->__PVT__ram_sel_imm[__Vdlyvdim0__ram_sel_imm__v0] 
            = __Vdlyvval__ram_sel_imm__v0;
    }
    if (__Vdlyvset__ram_spike_info_inst__v0) {
        vlSelf->__PVT__ram_spike_info_inst[__Vdlyvdim0__ram_spike_info_inst__v0] 
            = __Vdlyvval__ram_spike_info_inst__v0;
    }
    if (__Vdlyvset__ram_mop__v0) {
        vlSelf->__PVT__ram_mop[__Vdlyvdim0__ram_mop__v0] 
            = __Vdlyvval__ram_mop__v0;
    }
    if (__Vdlyvset__ram_inst__v0) {
        vlSelf->__PVT__ram_inst[__Vdlyvdim0__ram_inst__v0] 
            = __Vdlyvval__ram_inst__v0;
    }
    if (__Vdlyvset__ram_branch__v0) {
        vlSelf->__PVT__ram_branch[__Vdlyvdim0__ram_branch__v0] 
            = __Vdlyvval__ram_branch__v0;
    }
    if (__Vdlyvset__ram_simt_stack_op__v0) {
        vlSelf->__PVT__ram_simt_stack_op[__Vdlyvdim0__ram_simt_stack_op__v0] 
            = __Vdlyvval__ram_simt_stack_op__v0;
    }
    if (__Vdlyvset__ram_csr__v0) {
        vlSelf->__PVT__ram_csr[__Vdlyvdim0__ram_csr__v0] 
            = __Vdlyvval__ram_csr__v0;
    }
    if (__Vdlyvset__ram_sfu__v0) {
        vlSelf->__PVT__ram_sfu[__Vdlyvdim0__ram_sfu__v0] 
            = __Vdlyvval__ram_sfu__v0;
    }
    if (__Vdlyvset__ram_fp__v0) {
        vlSelf->__PVT__ram_fp[__Vdlyvdim0__ram_fp__v0] 
            = __Vdlyvval__ram_fp__v0;
    }
    if (__Vdlyvset__ram_simt_stack__v0) {
        vlSelf->__PVT__ram_simt_stack[__Vdlyvdim0__ram_simt_stack__v0] 
            = __Vdlyvval__ram_simt_stack__v0;
    }
    if (__Vdlyvset__ram_wxd__v0) {
        vlSelf->__PVT__ram_wxd[__Vdlyvdim0__ram_wxd__v0] 
            = __Vdlyvval__ram_wxd__v0;
    }
    if (__Vdlyvset__ram_wfd__v0) {
        vlSelf->__PVT__ram_wfd[__Vdlyvdim0__ram_wfd__v0] 
            = __Vdlyvval__ram_wfd__v0;
    }
    if (__Vdlyvset__ram_barrier__v0) {
        vlSelf->__PVT__ram_barrier[__Vdlyvdim0__ram_barrier__v0] 
            = __Vdlyvval__ram_barrier__v0;
    }
    if (__Vdlyvset__ram_reg_idxw__v0) {
        vlSelf->__PVT__ram_reg_idxw[__Vdlyvdim0__ram_reg_idxw__v0] 
            = __Vdlyvval__ram_reg_idxw__v0;
    }
    if (__Vdlyvset__ram_sel_alu1__v0) {
        vlSelf->__PVT__ram_sel_alu1[__Vdlyvdim0__ram_sel_alu1__v0] 
            = __Vdlyvval__ram_sel_alu1__v0;
    }
    if (__Vdlyvset__ram_mask__v0) {
        vlSelf->__PVT__ram_mask[__Vdlyvdim0__ram_mask__v0] 
            = __Vdlyvval__ram_mask__v0;
    }
    if (__Vdlyvset__ram_sel_alu2__v0) {
        vlSelf->__PVT__ram_sel_alu2[__Vdlyvdim0__ram_sel_alu2__v0] 
            = __Vdlyvval__ram_sel_alu2__v0;
    }
    if (__Vdlyvset__ram_reg_idx3__v0) {
        vlSelf->__PVT__ram_reg_idx3[__Vdlyvdim0__ram_reg_idx3__v0] 
            = __Vdlyvval__ram_reg_idx3__v0;
    }
    if (__Vdlyvset__ram_sel_alu3__v0) {
        vlSelf->__PVT__ram_sel_alu3[__Vdlyvdim0__ram_sel_alu3__v0] 
            = __Vdlyvval__ram_sel_alu3__v0;
    }
    if (__Vdlyvset__ram_reg_idx1__v0) {
        vlSelf->__PVT__ram_reg_idx1[__Vdlyvdim0__ram_reg_idx1__v0] 
            = __Vdlyvval__ram_reg_idx1__v0;
    }
    if (__Vdlyvset__ram_mem__v0) {
        vlSelf->__PVT__ram_mem[__Vdlyvdim0__ram_mem__v0] 
            = __Vdlyvval__ram_mem__v0;
    }
    if (__Vdlyvset__ram_reg_idx2__v0) {
        vlSelf->__PVT__ram_reg_idx2[__Vdlyvdim0__ram_reg_idx2__v0] 
            = __Vdlyvval__ram_reg_idx2__v0;
    }
    if (__Vdlyvset__ram_isvec__v0) {
        vlSelf->__PVT__ram_isvec[__Vdlyvdim0__ram_isvec__v0] 
            = __Vdlyvval__ram_isvec__v0;
    }
    if (__Vdlyvset__ram_wid__v0) {
        vlSelf->__PVT__ram_wid[__Vdlyvdim0__ram_wid__v0] 
            = __Vdlyvval__ram_wid__v0;
    }
    vlSelf->__PVT__enq_ptr_value = __Vdly__enq_ptr_value;
    vlSelf->__PVT__deq_ptr_value = __Vdly__deq_ptr_value;
    vlSelf->__PVT__io_deq_bits_fp = vlSelf->__PVT__ram_fp
        [vlSelf->__PVT__deq_ptr_value];
    vlSelf->__PVT__io_deq_bits_simt_stack_op = vlSelf->__PVT__ram_simt_stack_op
        [vlSelf->__PVT__deq_ptr_value];
    vlSelf->__PVT__io_deq_bits_csr = vlSelf->__PVT__ram_csr
        [vlSelf->__PVT__deq_ptr_value];
    vlSelf->__PVT__io_deq_bits_sfu = vlSelf->__PVT__ram_sfu
        [vlSelf->__PVT__deq_ptr_value];
    vlSelf->__PVT__io_deq_bits_simt_stack = vlSelf->__PVT__ram_simt_stack
        [vlSelf->__PVT__deq_ptr_value];
    vlSelf->__PVT__io_deq_bits_wfd = vlSelf->__PVT__ram_wfd
        [vlSelf->__PVT__deq_ptr_value];
    vlSelf->__PVT__io_deq_bits_wxd = vlSelf->__PVT__ram_wxd
        [vlSelf->__PVT__deq_ptr_value];
    vlSelf->__PVT__io_deq_bits_reg_idxw = vlSelf->__PVT__ram_reg_idxw
        [vlSelf->__PVT__deq_ptr_value];
    vlSelf->__PVT__io_deq_bits_barrier = vlSelf->__PVT__ram_barrier
        [vlSelf->__PVT__deq_ptr_value];
    vlSelf->__PVT__io_deq_bits_sel_alu1 = vlSelf->__PVT__ram_sel_alu1
        [vlSelf->__PVT__deq_ptr_value];
    vlSelf->__PVT__io_deq_bits_mask = vlSelf->__PVT__ram_mask
        [vlSelf->__PVT__deq_ptr_value];
    vlSelf->__PVT__io_deq_bits_sel_alu2 = vlSelf->__PVT__ram_sel_alu2
        [vlSelf->__PVT__deq_ptr_value];
    vlSelf->__PVT__io_deq_bits_reg_idx3 = vlSelf->__PVT__ram_reg_idx3
        [vlSelf->__PVT__deq_ptr_value];
    vlSelf->__PVT__io_deq_bits_sel_alu3 = vlSelf->__PVT__ram_sel_alu3
        [vlSelf->__PVT__deq_ptr_value];
    vlSelf->__PVT__io_deq_bits_reg_idx1 = vlSelf->__PVT__ram_reg_idx1
        [vlSelf->__PVT__deq_ptr_value];
    vlSelf->__PVT__io_deq_bits_mem = vlSelf->__PVT__ram_mem
        [vlSelf->__PVT__deq_ptr_value];
    vlSelf->__PVT__io_deq_bits_reg_idx2 = vlSelf->__PVT__ram_reg_idx2
        [vlSelf->__PVT__deq_ptr_value];
    vlSelf->__PVT__io_deq_bits_isvec = vlSelf->__PVT__ram_isvec
        [vlSelf->__PVT__deq_ptr_value];
    vlSelf->__PVT__ptr_match = ((IData)(vlSelf->__PVT__deq_ptr_value) 
                                == (IData)(vlSelf->__PVT__enq_ptr_value));
    vlSelf->__PVT__empty = ((~ (IData)(vlSelf->__PVT__maybe_full)) 
                            & (IData)(vlSelf->__PVT__ptr_match));
    vlSelf->__PVT__full = ((IData)(vlSelf->__PVT__ptr_match) 
                           & (IData)(vlSelf->__PVT__maybe_full));
}

VL_INLINE_OPT void VVentus_Queue_19___nba_sequent__TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__ibuffer__DOT__fifo_2__1(VVentus_Queue_19* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VVentus__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VVentus_Queue_19___nba_sequent__TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__ibuffer__DOT__fifo_2__1\n"); );
    // Body
    vlSelf->__PVT__ram_inst_MPORT_en = ((~ (IData)(vlSelf->__PVT__full)) 
                                        & ((2U == (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__icache__DOT__warpid_st2)) 
                                           & (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__ibuffer_io_in_valid)));
    vlSelf->__PVT__do_deq = ((~ (IData)(vlSelf->__PVT__empty)) 
                             & ((((~ (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.pipe__DOT__ibuffer2issue__DOT__rrarbit__DOT____VdfgTmp_h02275172__0)) 
                                  | ((~ (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__ibuffer2issue__DOT__rrarbit__DOT__validMask_1)) 
                                     & (2U > (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__ibuffer2issue__DOT__rrarbit__DOT__lastGrant)))) 
                                 & (0U != (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__Demux__DOT___io_in_ready_T_4))) 
                                & (~ ((IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__warp_sche__DOT___warp_ready_T_3) 
                                      >> 2U))));
}

VL_INLINE_OPT void VVentus_Queue_19___nba_sequent__TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__ibuffer__DOT__fifo_3__0(VVentus_Queue_19* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VVentus__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VVentus_Queue_19___nba_sequent__TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__ibuffer__DOT__fifo_3__0\n"); );
    // Init
    CData/*0:0*/ __Vdlyvdim0__ram_readmask__v0;
    CData/*0:0*/ __Vdlyvval__ram_readmask__v0;
    CData/*0:0*/ __Vdlyvset__ram_readmask__v0;
    CData/*0:0*/ __Vdlyvdim0__ram_sfu__v0;
    CData/*0:0*/ __Vdlyvval__ram_sfu__v0;
    CData/*0:0*/ __Vdlyvset__ram_sfu__v0;
    CData/*0:0*/ __Vdlyvdim0__ram_fence__v0;
    CData/*0:0*/ __Vdlyvval__ram_fence__v0;
    CData/*0:0*/ __Vdlyvset__ram_fence__v0;
    CData/*0:0*/ __Vdlyvdim0__ram_wfd__v0;
    CData/*0:0*/ __Vdlyvval__ram_wfd__v0;
    CData/*0:0*/ __Vdlyvset__ram_wfd__v0;
    CData/*0:0*/ __Vdlyvdim0__ram_reg_idxw__v0;
    CData/*4:0*/ __Vdlyvval__ram_reg_idxw__v0;
    CData/*0:0*/ __Vdlyvset__ram_reg_idxw__v0;
    CData/*0:0*/ __Vdlyvdim0__ram_reg_idx2__v0;
    CData/*4:0*/ __Vdlyvval__ram_reg_idx2__v0;
    CData/*0:0*/ __Vdlyvset__ram_reg_idx2__v0;
    CData/*0:0*/ __Vdlyvdim0__ram_reg_idx1__v0;
    CData/*4:0*/ __Vdlyvval__ram_reg_idx1__v0;
    CData/*0:0*/ __Vdlyvset__ram_reg_idx1__v0;
    CData/*0:0*/ __Vdlyvdim0__ram_mop__v0;
    CData/*1:0*/ __Vdlyvval__ram_mop__v0;
    CData/*0:0*/ __Vdlyvset__ram_mop__v0;
    CData/*0:0*/ __Vdlyvdim0__ram_mem_cmd__v0;
    CData/*1:0*/ __Vdlyvval__ram_mem_cmd__v0;
    CData/*0:0*/ __Vdlyvset__ram_mem_cmd__v0;
    CData/*0:0*/ __Vdlyvdim0__ram_mul__v0;
    CData/*0:0*/ __Vdlyvval__ram_mul__v0;
    CData/*0:0*/ __Vdlyvset__ram_mul__v0;
    CData/*0:0*/ __Vdlyvdim0__ram_mem__v0;
    CData/*0:0*/ __Vdlyvval__ram_mem__v0;
    CData/*0:0*/ __Vdlyvset__ram_mem__v0;
    CData/*0:0*/ __Vdlyvdim0__ram_alu_fn__v0;
    CData/*5:0*/ __Vdlyvval__ram_alu_fn__v0;
    CData/*0:0*/ __Vdlyvset__ram_alu_fn__v0;
    CData/*0:0*/ __Vdlyvdim0__ram_mem_unsigned__v0;
    CData/*0:0*/ __Vdlyvval__ram_mem_unsigned__v0;
    CData/*0:0*/ __Vdlyvset__ram_mem_unsigned__v0;
    CData/*0:0*/ __Vdlyvdim0__ram_sel_imm__v0;
    CData/*2:0*/ __Vdlyvval__ram_sel_imm__v0;
    CData/*0:0*/ __Vdlyvset__ram_sel_imm__v0;
    CData/*0:0*/ __Vdlyvdim0__ram_simt_stack__v0;
    CData/*0:0*/ __Vdlyvval__ram_simt_stack__v0;
    CData/*0:0*/ __Vdlyvset__ram_simt_stack__v0;
    CData/*0:0*/ __Vdlyvdim0__ram_branch__v0;
    CData/*1:0*/ __Vdlyvval__ram_branch__v0;
    CData/*0:0*/ __Vdlyvset__ram_branch__v0;
    CData/*0:0*/ __Vdly__enq_ptr_value;
    CData/*0:0*/ __Vdlyvdim0__ram_simt_stack_op__v0;
    CData/*0:0*/ __Vdlyvval__ram_simt_stack_op__v0;
    CData/*0:0*/ __Vdlyvset__ram_simt_stack_op__v0;
    CData/*0:0*/ __Vdlyvdim0__ram_inst__v0;
    IData/*31:0*/ __Vdlyvval__ram_inst__v0;
    CData/*0:0*/ __Vdlyvset__ram_inst__v0;
    CData/*0:0*/ __Vdlyvdim0__ram_reg_idx3__v0;
    CData/*4:0*/ __Vdlyvval__ram_reg_idx3__v0;
    CData/*0:0*/ __Vdlyvset__ram_reg_idx3__v0;
    CData/*0:0*/ __Vdlyvdim0__ram_isvec__v0;
    CData/*0:0*/ __Vdlyvval__ram_isvec__v0;
    CData/*0:0*/ __Vdlyvset__ram_isvec__v0;
    CData/*0:0*/ __Vdlyvdim0__ram_barrier__v0;
    CData/*0:0*/ __Vdlyvval__ram_barrier__v0;
    CData/*0:0*/ __Vdlyvset__ram_barrier__v0;
    CData/*0:0*/ __Vdlyvdim0__ram_csr__v0;
    CData/*1:0*/ __Vdlyvval__ram_csr__v0;
    CData/*0:0*/ __Vdlyvset__ram_csr__v0;
    CData/*0:0*/ __Vdlyvdim0__ram_wid__v0;
    CData/*1:0*/ __Vdlyvval__ram_wid__v0;
    CData/*0:0*/ __Vdlyvset__ram_wid__v0;
    CData/*0:0*/ __Vdlyvdim0__ram_reverse__v0;
    CData/*0:0*/ __Vdlyvval__ram_reverse__v0;
    CData/*0:0*/ __Vdlyvset__ram_reverse__v0;
    CData/*0:0*/ __Vdlyvdim0__ram_fp__v0;
    CData/*0:0*/ __Vdlyvval__ram_fp__v0;
    CData/*0:0*/ __Vdlyvset__ram_fp__v0;
    CData/*0:0*/ __Vdlyvdim0__ram_sel_alu2__v0;
    CData/*1:0*/ __Vdlyvval__ram_sel_alu2__v0;
    CData/*0:0*/ __Vdlyvset__ram_sel_alu2__v0;
    CData/*0:0*/ __Vdlyvdim0__ram_sel_alu1__v0;
    CData/*1:0*/ __Vdlyvval__ram_sel_alu1__v0;
    CData/*0:0*/ __Vdlyvset__ram_sel_alu1__v0;
    CData/*0:0*/ __Vdlyvdim0__ram_sel_alu3__v0;
    CData/*1:0*/ __Vdlyvval__ram_sel_alu3__v0;
    CData/*0:0*/ __Vdlyvset__ram_sel_alu3__v0;
    CData/*0:0*/ __Vdlyvdim0__ram_mask__v0;
    CData/*0:0*/ __Vdlyvval__ram_mask__v0;
    CData/*0:0*/ __Vdlyvset__ram_mask__v0;
    CData/*0:0*/ __Vdlyvdim0__ram_writemask__v0;
    CData/*0:0*/ __Vdlyvval__ram_writemask__v0;
    CData/*0:0*/ __Vdlyvset__ram_writemask__v0;
    CData/*0:0*/ __Vdlyvdim0__ram_wxd__v0;
    CData/*0:0*/ __Vdlyvval__ram_wxd__v0;
    CData/*0:0*/ __Vdlyvset__ram_wxd__v0;
    CData/*0:0*/ __Vdlyvdim0__ram_pc__v0;
    IData/*31:0*/ __Vdlyvval__ram_pc__v0;
    CData/*0:0*/ __Vdlyvset__ram_pc__v0;
    CData/*0:0*/ __Vdlyvdim0__ram_spike_info_pc__v0;
    IData/*31:0*/ __Vdlyvval__ram_spike_info_pc__v0;
    CData/*0:0*/ __Vdlyvset__ram_spike_info_pc__v0;
    CData/*0:0*/ __Vdlyvdim0__ram_spike_info_inst__v0;
    IData/*31:0*/ __Vdlyvval__ram_spike_info_inst__v0;
    CData/*0:0*/ __Vdlyvset__ram_spike_info_inst__v0;
    CData/*0:0*/ __Vdly__deq_ptr_value;
    // Body
    __Vdlyvset__ram_writemask__v0 = 0U;
    __Vdlyvset__ram_reverse__v0 = 0U;
    __Vdlyvset__ram_mem_unsigned__v0 = 0U;
    __Vdlyvset__ram_mul__v0 = 0U;
    __Vdlyvset__ram_mem_cmd__v0 = 0U;
    __Vdlyvset__ram_readmask__v0 = 0U;
    __Vdlyvset__ram_alu_fn__v0 = 0U;
    __Vdlyvset__ram_spike_info_pc__v0 = 0U;
    __Vdlyvset__ram_fence__v0 = 0U;
    __Vdlyvset__ram_pc__v0 = 0U;
    __Vdlyvset__ram_sel_imm__v0 = 0U;
    __Vdlyvset__ram_spike_info_inst__v0 = 0U;
    __Vdlyvset__ram_mop__v0 = 0U;
    __Vdlyvset__ram_inst__v0 = 0U;
    __Vdlyvset__ram_branch__v0 = 0U;
    __Vdlyvset__ram_simt_stack_op__v0 = 0U;
    __Vdlyvset__ram_csr__v0 = 0U;
    __Vdlyvset__ram_sfu__v0 = 0U;
    __Vdlyvset__ram_fp__v0 = 0U;
    __Vdlyvset__ram_simt_stack__v0 = 0U;
    __Vdlyvset__ram_wxd__v0 = 0U;
    __Vdlyvset__ram_wfd__v0 = 0U;
    __Vdlyvset__ram_barrier__v0 = 0U;
    __Vdlyvset__ram_reg_idxw__v0 = 0U;
    __Vdlyvset__ram_sel_alu1__v0 = 0U;
    __Vdlyvset__ram_mask__v0 = 0U;
    __Vdlyvset__ram_sel_alu2__v0 = 0U;
    __Vdlyvset__ram_reg_idx3__v0 = 0U;
    __Vdlyvset__ram_sel_alu3__v0 = 0U;
    __Vdlyvset__ram_reg_idx1__v0 = 0U;
    __Vdly__enq_ptr_value = vlSelf->__PVT__enq_ptr_value;
    __Vdlyvset__ram_mem__v0 = 0U;
    __Vdlyvset__ram_reg_idx2__v0 = 0U;
    __Vdlyvset__ram_isvec__v0 = 0U;
    __Vdlyvset__ram_wid__v0 = 0U;
    __Vdly__deq_ptr_value = vlSelf->__PVT__deq_ptr_value;
    if (vlSelf->__PVT__ram_inst_MPORT_en) {
        __Vdlyvval__ram_writemask__v0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__ibuffer__DOT__fifo_0_io_enq_bits_writemask;
        __Vdlyvset__ram_writemask__v0 = 1U;
        __Vdlyvdim0__ram_writemask__v0 = vlSelf->__PVT__enq_ptr_value;
        __Vdlyvval__ram_reverse__v0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__ibuffer__DOT__fifo_0_io_enq_bits_reverse;
        __Vdlyvset__ram_reverse__v0 = 1U;
        __Vdlyvdim0__ram_reverse__v0 = vlSelf->__PVT__enq_ptr_value;
        __Vdlyvval__ram_mem_unsigned__v0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__ibuffer__DOT__fifo_0_io_enq_bits_mem_unsigned;
        __Vdlyvset__ram_mem_unsigned__v0 = 1U;
        __Vdlyvdim0__ram_mem_unsigned__v0 = vlSelf->__PVT__enq_ptr_value;
        __Vdlyvval__ram_mul__v0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__ibuffer__DOT__fifo_0_io_enq_bits_mul;
        __Vdlyvset__ram_mul__v0 = 1U;
        __Vdlyvdim0__ram_mul__v0 = vlSelf->__PVT__enq_ptr_value;
        __Vdlyvval__ram_mem_cmd__v0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__ibuffer__DOT__fifo_0_io_enq_bits_mem_cmd;
        __Vdlyvset__ram_mem_cmd__v0 = 1U;
        __Vdlyvdim0__ram_mem_cmd__v0 = vlSelf->__PVT__enq_ptr_value;
        __Vdlyvval__ram_readmask__v0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__ibuffer__DOT__fifo_0_io_enq_bits_readmask;
        __Vdlyvset__ram_readmask__v0 = 1U;
        __Vdlyvdim0__ram_readmask__v0 = vlSelf->__PVT__enq_ptr_value;
        __Vdlyvval__ram_alu_fn__v0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__ibuffer__DOT__fifo_0_io_enq_bits_alu_fn;
        __Vdlyvset__ram_alu_fn__v0 = 1U;
        __Vdlyvdim0__ram_alu_fn__v0 = vlSelf->__PVT__enq_ptr_value;
        __Vdlyvval__ram_spike_info_pc__v0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__icache__DOT__addr_st2;
        __Vdlyvset__ram_spike_info_pc__v0 = 1U;
        __Vdlyvdim0__ram_spike_info_pc__v0 = vlSelf->__PVT__enq_ptr_value;
        __Vdlyvval__ram_fence__v0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__ibuffer__DOT__fifo_0_io_enq_bits_fence;
        __Vdlyvset__ram_fence__v0 = 1U;
        __Vdlyvdim0__ram_fence__v0 = vlSelf->__PVT__enq_ptr_value;
        __Vdlyvval__ram_pc__v0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__icache__DOT__addr_st2;
        __Vdlyvset__ram_pc__v0 = 1U;
        __Vdlyvdim0__ram_pc__v0 = vlSelf->__PVT__enq_ptr_value;
        __Vdlyvval__ram_sel_imm__v0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__ibuffer__DOT__fifo_0_io_enq_bits_sel_imm;
        __Vdlyvset__ram_sel_imm__v0 = 1U;
        __Vdlyvdim0__ram_sel_imm__v0 = vlSelf->__PVT__enq_ptr_value;
        __Vdlyvval__ram_spike_info_inst__v0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__icache__DOT__data_after_blockOffset_st2;
        __Vdlyvset__ram_spike_info_inst__v0 = 1U;
        __Vdlyvdim0__ram_spike_info_inst__v0 = vlSelf->__PVT__enq_ptr_value;
        __Vdlyvval__ram_mop__v0 = (3U & (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__icache__DOT__data_after_blockOffset_st2 
                                         >> 0x1aU));
        __Vdlyvset__ram_mop__v0 = 1U;
        __Vdlyvdim0__ram_mop__v0 = vlSelf->__PVT__enq_ptr_value;
        __Vdlyvval__ram_inst__v0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__icache__DOT__data_after_blockOffset_st2;
        __Vdlyvset__ram_inst__v0 = 1U;
        __Vdlyvdim0__ram_inst__v0 = vlSelf->__PVT__enq_ptr_value;
        __Vdlyvval__ram_branch__v0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__ibuffer__DOT__fifo_0_io_enq_bits_branch;
        __Vdlyvset__ram_branch__v0 = 1U;
        __Vdlyvdim0__ram_branch__v0 = vlSelf->__PVT__enq_ptr_value;
        __Vdlyvval__ram_simt_stack_op__v0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__ibuffer__DOT__fifo_0_io_enq_bits_simt_stack_op;
        __Vdlyvset__ram_simt_stack_op__v0 = 1U;
        __Vdlyvdim0__ram_simt_stack_op__v0 = vlSelf->__PVT__enq_ptr_value;
        __Vdlyvval__ram_csr__v0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__ibuffer__DOT__fifo_0_io_enq_bits_csr;
        __Vdlyvset__ram_csr__v0 = 1U;
        __Vdlyvdim0__ram_csr__v0 = vlSelf->__PVT__enq_ptr_value;
        __Vdlyvval__ram_sfu__v0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__ibuffer__DOT__fifo_0_io_enq_bits_sfu;
        __Vdlyvset__ram_sfu__v0 = 1U;
        __Vdlyvdim0__ram_sfu__v0 = vlSelf->__PVT__enq_ptr_value;
        __Vdlyvval__ram_fp__v0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__ibuffer__DOT__fifo_0_io_enq_bits_fp;
        __Vdlyvset__ram_fp__v0 = 1U;
        __Vdlyvdim0__ram_fp__v0 = vlSelf->__PVT__enq_ptr_value;
        __Vdlyvval__ram_simt_stack__v0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__ibuffer__DOT__fifo_0_io_enq_bits_simt_stack;
        __Vdlyvset__ram_simt_stack__v0 = 1U;
        __Vdlyvdim0__ram_simt_stack__v0 = vlSelf->__PVT__enq_ptr_value;
        __Vdlyvval__ram_wxd__v0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__ibuffer__DOT__fifo_0_io_enq_bits_wxd;
        __Vdlyvset__ram_wxd__v0 = 1U;
        __Vdlyvdim0__ram_wxd__v0 = vlSelf->__PVT__enq_ptr_value;
        __Vdlyvval__ram_wfd__v0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__ibuffer__DOT__fifo_0_io_enq_bits_wfd;
        __Vdlyvset__ram_wfd__v0 = 1U;
        __Vdlyvdim0__ram_wfd__v0 = vlSelf->__PVT__enq_ptr_value;
        __Vdlyvval__ram_barrier__v0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__ibuffer__DOT__fifo_0_io_enq_bits_barrier;
        __Vdlyvset__ram_barrier__v0 = 1U;
        __Vdlyvdim0__ram_barrier__v0 = vlSelf->__PVT__enq_ptr_value;
        __Vdlyvval__ram_reg_idxw__v0 = (0x1fU & (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__icache__DOT__data_after_blockOffset_st2 
                                                 >> 7U));
        __Vdlyvset__ram_reg_idxw__v0 = 1U;
        __Vdlyvdim0__ram_reg_idxw__v0 = vlSelf->__PVT__enq_ptr_value;
        __Vdlyvval__ram_sel_alu1__v0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__ibuffer__DOT__fifo_0_io_enq_bits_sel_alu1;
        __Vdlyvset__ram_sel_alu1__v0 = 1U;
        __Vdlyvdim0__ram_sel_alu1__v0 = vlSelf->__PVT__enq_ptr_value;
        __Vdlyvval__ram_mask__v0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__ibuffer__DOT__fifo_0_io_enq_bits_mask;
        __Vdlyvset__ram_mask__v0 = 1U;
        __Vdlyvdim0__ram_mask__v0 = vlSelf->__PVT__enq_ptr_value;
        __Vdlyvval__ram_sel_alu2__v0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__ibuffer__DOT__fifo_0_io_enq_bits_sel_alu2;
        __Vdlyvset__ram_sel_alu2__v0 = 1U;
        __Vdlyvdim0__ram_sel_alu2__v0 = vlSelf->__PVT__enq_ptr_value;
        __Vdlyvval__ram_reg_idx3__v0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__ibuffer__DOT__fifo_0_io_enq_bits_reg_idx3;
        __Vdlyvset__ram_reg_idx3__v0 = 1U;
        __Vdlyvdim0__ram_reg_idx3__v0 = vlSelf->__PVT__enq_ptr_value;
        __Vdlyvval__ram_sel_alu3__v0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__ibuffer__DOT__fifo_0_io_enq_bits_sel_alu3;
        __Vdlyvset__ram_sel_alu3__v0 = 1U;
        __Vdlyvdim0__ram_sel_alu3__v0 = vlSelf->__PVT__enq_ptr_value;
        __Vdlyvval__ram_reg_idx1__v0 = (0x1fU & (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__icache__DOT__data_after_blockOffset_st2 
                                                 >> 0xfU));
        __Vdlyvset__ram_reg_idx1__v0 = 1U;
        __Vdlyvdim0__ram_reg_idx1__v0 = vlSelf->__PVT__enq_ptr_value;
        __Vdlyvval__ram_mem__v0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__ibuffer__DOT__fifo_0_io_enq_bits_mem;
        __Vdlyvset__ram_mem__v0 = 1U;
        __Vdlyvdim0__ram_mem__v0 = vlSelf->__PVT__enq_ptr_value;
        __Vdlyvval__ram_reg_idx2__v0 = (0x1fU & (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__icache__DOT__data_after_blockOffset_st2 
                                                 >> 0x14U));
        __Vdlyvset__ram_reg_idx2__v0 = 1U;
        __Vdlyvdim0__ram_reg_idx2__v0 = vlSelf->__PVT__enq_ptr_value;
        __Vdlyvval__ram_isvec__v0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__ibuffer__DOT__fifo_0_io_enq_bits_isvec;
        __Vdlyvset__ram_isvec__v0 = 1U;
        __Vdlyvdim0__ram_isvec__v0 = vlSelf->__PVT__enq_ptr_value;
        __Vdlyvval__ram_wid__v0 = vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__icache__DOT__warpid_st2;
        __Vdlyvset__ram_wid__v0 = 1U;
        __Vdlyvdim0__ram_wid__v0 = vlSelf->__PVT__enq_ptr_value;
    }
    if (vlSymsp->TOP.reset) {
        __Vdly__enq_ptr_value = 0U;
        __Vdly__deq_ptr_value = 0U;
        vlSelf->__PVT__maybe_full = 0U;
    } else if (vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__ibuffer__DOT__fifo_3_io_flush) {
        __Vdly__enq_ptr_value = 0U;
        __Vdly__deq_ptr_value = 0U;
        vlSelf->__PVT__maybe_full = 0U;
    } else {
        if (vlSelf->__PVT__ram_inst_MPORT_en) {
            __Vdly__enq_ptr_value = (1U & ((IData)(1U) 
                                           + (IData)(vlSelf->__PVT__enq_ptr_value)));
        }
        if (vlSelf->__PVT__do_deq) {
            __Vdly__deq_ptr_value = (1U & ((IData)(1U) 
                                           + (IData)(vlSelf->__PVT__deq_ptr_value)));
        }
        if (((IData)(vlSelf->__PVT__ram_inst_MPORT_en) 
             != (IData)(vlSelf->__PVT__do_deq))) {
            vlSelf->__PVT__maybe_full = vlSelf->__PVT__ram_inst_MPORT_en;
        }
    }
    if (__Vdlyvset__ram_writemask__v0) {
        vlSelf->__PVT__ram_writemask[__Vdlyvdim0__ram_writemask__v0] 
            = __Vdlyvval__ram_writemask__v0;
    }
    if (__Vdlyvset__ram_reverse__v0) {
        vlSelf->__PVT__ram_reverse[__Vdlyvdim0__ram_reverse__v0] 
            = __Vdlyvval__ram_reverse__v0;
    }
    if (__Vdlyvset__ram_mem_unsigned__v0) {
        vlSelf->__PVT__ram_mem_unsigned[__Vdlyvdim0__ram_mem_unsigned__v0] 
            = __Vdlyvval__ram_mem_unsigned__v0;
    }
    if (__Vdlyvset__ram_mul__v0) {
        vlSelf->__PVT__ram_mul[__Vdlyvdim0__ram_mul__v0] 
            = __Vdlyvval__ram_mul__v0;
    }
    if (__Vdlyvset__ram_mem_cmd__v0) {
        vlSelf->__PVT__ram_mem_cmd[__Vdlyvdim0__ram_mem_cmd__v0] 
            = __Vdlyvval__ram_mem_cmd__v0;
    }
    if (__Vdlyvset__ram_readmask__v0) {
        vlSelf->__PVT__ram_readmask[__Vdlyvdim0__ram_readmask__v0] 
            = __Vdlyvval__ram_readmask__v0;
    }
    if (__Vdlyvset__ram_alu_fn__v0) {
        vlSelf->__PVT__ram_alu_fn[__Vdlyvdim0__ram_alu_fn__v0] 
            = __Vdlyvval__ram_alu_fn__v0;
    }
    if (__Vdlyvset__ram_spike_info_pc__v0) {
        vlSelf->__PVT__ram_spike_info_pc[__Vdlyvdim0__ram_spike_info_pc__v0] 
            = __Vdlyvval__ram_spike_info_pc__v0;
    }
    if (__Vdlyvset__ram_fence__v0) {
        vlSelf->__PVT__ram_fence[__Vdlyvdim0__ram_fence__v0] 
            = __Vdlyvval__ram_fence__v0;
    }
    if (__Vdlyvset__ram_pc__v0) {
        vlSelf->__PVT__ram_pc[__Vdlyvdim0__ram_pc__v0] 
            = __Vdlyvval__ram_pc__v0;
    }
    if (__Vdlyvset__ram_sel_imm__v0) {
        vlSelf->__PVT__ram_sel_imm[__Vdlyvdim0__ram_sel_imm__v0] 
            = __Vdlyvval__ram_sel_imm__v0;
    }
    if (__Vdlyvset__ram_spike_info_inst__v0) {
        vlSelf->__PVT__ram_spike_info_inst[__Vdlyvdim0__ram_spike_info_inst__v0] 
            = __Vdlyvval__ram_spike_info_inst__v0;
    }
    if (__Vdlyvset__ram_mop__v0) {
        vlSelf->__PVT__ram_mop[__Vdlyvdim0__ram_mop__v0] 
            = __Vdlyvval__ram_mop__v0;
    }
    if (__Vdlyvset__ram_inst__v0) {
        vlSelf->__PVT__ram_inst[__Vdlyvdim0__ram_inst__v0] 
            = __Vdlyvval__ram_inst__v0;
    }
    if (__Vdlyvset__ram_branch__v0) {
        vlSelf->__PVT__ram_branch[__Vdlyvdim0__ram_branch__v0] 
            = __Vdlyvval__ram_branch__v0;
    }
    if (__Vdlyvset__ram_simt_stack_op__v0) {
        vlSelf->__PVT__ram_simt_stack_op[__Vdlyvdim0__ram_simt_stack_op__v0] 
            = __Vdlyvval__ram_simt_stack_op__v0;
    }
    if (__Vdlyvset__ram_csr__v0) {
        vlSelf->__PVT__ram_csr[__Vdlyvdim0__ram_csr__v0] 
            = __Vdlyvval__ram_csr__v0;
    }
    if (__Vdlyvset__ram_sfu__v0) {
        vlSelf->__PVT__ram_sfu[__Vdlyvdim0__ram_sfu__v0] 
            = __Vdlyvval__ram_sfu__v0;
    }
    if (__Vdlyvset__ram_fp__v0) {
        vlSelf->__PVT__ram_fp[__Vdlyvdim0__ram_fp__v0] 
            = __Vdlyvval__ram_fp__v0;
    }
    if (__Vdlyvset__ram_simt_stack__v0) {
        vlSelf->__PVT__ram_simt_stack[__Vdlyvdim0__ram_simt_stack__v0] 
            = __Vdlyvval__ram_simt_stack__v0;
    }
    if (__Vdlyvset__ram_wxd__v0) {
        vlSelf->__PVT__ram_wxd[__Vdlyvdim0__ram_wxd__v0] 
            = __Vdlyvval__ram_wxd__v0;
    }
    if (__Vdlyvset__ram_wfd__v0) {
        vlSelf->__PVT__ram_wfd[__Vdlyvdim0__ram_wfd__v0] 
            = __Vdlyvval__ram_wfd__v0;
    }
    if (__Vdlyvset__ram_barrier__v0) {
        vlSelf->__PVT__ram_barrier[__Vdlyvdim0__ram_barrier__v0] 
            = __Vdlyvval__ram_barrier__v0;
    }
    if (__Vdlyvset__ram_reg_idxw__v0) {
        vlSelf->__PVT__ram_reg_idxw[__Vdlyvdim0__ram_reg_idxw__v0] 
            = __Vdlyvval__ram_reg_idxw__v0;
    }
    if (__Vdlyvset__ram_sel_alu1__v0) {
        vlSelf->__PVT__ram_sel_alu1[__Vdlyvdim0__ram_sel_alu1__v0] 
            = __Vdlyvval__ram_sel_alu1__v0;
    }
    if (__Vdlyvset__ram_mask__v0) {
        vlSelf->__PVT__ram_mask[__Vdlyvdim0__ram_mask__v0] 
            = __Vdlyvval__ram_mask__v0;
    }
    if (__Vdlyvset__ram_sel_alu2__v0) {
        vlSelf->__PVT__ram_sel_alu2[__Vdlyvdim0__ram_sel_alu2__v0] 
            = __Vdlyvval__ram_sel_alu2__v0;
    }
    if (__Vdlyvset__ram_reg_idx3__v0) {
        vlSelf->__PVT__ram_reg_idx3[__Vdlyvdim0__ram_reg_idx3__v0] 
            = __Vdlyvval__ram_reg_idx3__v0;
    }
    if (__Vdlyvset__ram_sel_alu3__v0) {
        vlSelf->__PVT__ram_sel_alu3[__Vdlyvdim0__ram_sel_alu3__v0] 
            = __Vdlyvval__ram_sel_alu3__v0;
    }
    if (__Vdlyvset__ram_reg_idx1__v0) {
        vlSelf->__PVT__ram_reg_idx1[__Vdlyvdim0__ram_reg_idx1__v0] 
            = __Vdlyvval__ram_reg_idx1__v0;
    }
    if (__Vdlyvset__ram_mem__v0) {
        vlSelf->__PVT__ram_mem[__Vdlyvdim0__ram_mem__v0] 
            = __Vdlyvval__ram_mem__v0;
    }
    if (__Vdlyvset__ram_reg_idx2__v0) {
        vlSelf->__PVT__ram_reg_idx2[__Vdlyvdim0__ram_reg_idx2__v0] 
            = __Vdlyvval__ram_reg_idx2__v0;
    }
    if (__Vdlyvset__ram_isvec__v0) {
        vlSelf->__PVT__ram_isvec[__Vdlyvdim0__ram_isvec__v0] 
            = __Vdlyvval__ram_isvec__v0;
    }
    if (__Vdlyvset__ram_wid__v0) {
        vlSelf->__PVT__ram_wid[__Vdlyvdim0__ram_wid__v0] 
            = __Vdlyvval__ram_wid__v0;
    }
    vlSelf->__PVT__enq_ptr_value = __Vdly__enq_ptr_value;
    vlSelf->__PVT__deq_ptr_value = __Vdly__deq_ptr_value;
    vlSelf->__PVT__io_deq_bits_fp = vlSelf->__PVT__ram_fp
        [vlSelf->__PVT__deq_ptr_value];
    vlSelf->__PVT__io_deq_bits_simt_stack_op = vlSelf->__PVT__ram_simt_stack_op
        [vlSelf->__PVT__deq_ptr_value];
    vlSelf->__PVT__io_deq_bits_csr = vlSelf->__PVT__ram_csr
        [vlSelf->__PVT__deq_ptr_value];
    vlSelf->__PVT__io_deq_bits_sfu = vlSelf->__PVT__ram_sfu
        [vlSelf->__PVT__deq_ptr_value];
    vlSelf->__PVT__io_deq_bits_simt_stack = vlSelf->__PVT__ram_simt_stack
        [vlSelf->__PVT__deq_ptr_value];
    vlSelf->__PVT__io_deq_bits_wfd = vlSelf->__PVT__ram_wfd
        [vlSelf->__PVT__deq_ptr_value];
    vlSelf->__PVT__io_deq_bits_wxd = vlSelf->__PVT__ram_wxd
        [vlSelf->__PVT__deq_ptr_value];
    vlSelf->__PVT__io_deq_bits_reg_idxw = vlSelf->__PVT__ram_reg_idxw
        [vlSelf->__PVT__deq_ptr_value];
    vlSelf->__PVT__io_deq_bits_barrier = vlSelf->__PVT__ram_barrier
        [vlSelf->__PVT__deq_ptr_value];
    vlSelf->__PVT__io_deq_bits_sel_alu1 = vlSelf->__PVT__ram_sel_alu1
        [vlSelf->__PVT__deq_ptr_value];
    vlSelf->__PVT__io_deq_bits_mask = vlSelf->__PVT__ram_mask
        [vlSelf->__PVT__deq_ptr_value];
    vlSelf->__PVT__io_deq_bits_sel_alu2 = vlSelf->__PVT__ram_sel_alu2
        [vlSelf->__PVT__deq_ptr_value];
    vlSelf->__PVT__io_deq_bits_reg_idx3 = vlSelf->__PVT__ram_reg_idx3
        [vlSelf->__PVT__deq_ptr_value];
    vlSelf->__PVT__io_deq_bits_sel_alu3 = vlSelf->__PVT__ram_sel_alu3
        [vlSelf->__PVT__deq_ptr_value];
    vlSelf->__PVT__io_deq_bits_reg_idx1 = vlSelf->__PVT__ram_reg_idx1
        [vlSelf->__PVT__deq_ptr_value];
    vlSelf->__PVT__io_deq_bits_mem = vlSelf->__PVT__ram_mem
        [vlSelf->__PVT__deq_ptr_value];
    vlSelf->__PVT__io_deq_bits_reg_idx2 = vlSelf->__PVT__ram_reg_idx2
        [vlSelf->__PVT__deq_ptr_value];
    vlSelf->__PVT__io_deq_bits_isvec = vlSelf->__PVT__ram_isvec
        [vlSelf->__PVT__deq_ptr_value];
    vlSelf->__PVT__ptr_match = ((IData)(vlSelf->__PVT__deq_ptr_value) 
                                == (IData)(vlSelf->__PVT__enq_ptr_value));
    vlSelf->__PVT__empty = ((~ (IData)(vlSelf->__PVT__maybe_full)) 
                            & (IData)(vlSelf->__PVT__ptr_match));
    vlSelf->__PVT__full = ((IData)(vlSelf->__PVT__ptr_match) 
                           & (IData)(vlSelf->__PVT__maybe_full));
}

VL_INLINE_OPT void VVentus_Queue_19___nba_sequent__TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__ibuffer__DOT__fifo_3__1(VVentus_Queue_19* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VVentus__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VVentus_Queue_19___nba_sequent__TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__ibuffer__DOT__fifo_3__1\n"); );
    // Body
    vlSelf->__PVT__ram_inst_MPORT_en = ((~ (IData)(vlSelf->__PVT__full)) 
                                        & ((3U == (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__icache__DOT__warpid_st2)) 
                                           & (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__ibuffer_io_in_valid)));
    vlSelf->__PVT__do_deq = ((~ (IData)(vlSelf->__PVT__empty)) 
                             & ((((~ ((IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.pipe__DOT__ibuffer2issue__DOT__rrarbit__DOT____VdfgTmp_h02275172__0) 
                                      | (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__ibuffer2issue__DOT__rrarbit_io_in_2_valid))) 
                                  | ((~ (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.pipe__DOT__ibuffer2issue__DOT__rrarbit__DOT____VdfgTmp_h72765326__0)) 
                                     & (3U > (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__ibuffer2issue__DOT__rrarbit__DOT__lastGrant)))) 
                                 & (0U != (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__Demux__DOT___io_in_ready_T_4))) 
                                & (~ ((IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__warp_sche__DOT___warp_ready_T_3) 
                                      >> 3U))));
}
