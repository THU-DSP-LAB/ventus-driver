// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VVentus.h for the primary calling header

#include "verilated.h"

#include "VVentus_Queue_19.h"

VL_ATTR_COLD void VVentus_Queue_19___ctor_var_reset(VVentus_Queue_19* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VVentus__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VVentus_Queue_19___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__clock = VL_RAND_RESET_I(1);
    vlSelf->__PVT__reset = VL_RAND_RESET_I(1);
    vlSelf->__PVT__io_enq_ready = VL_RAND_RESET_I(1);
    vlSelf->__PVT__io_enq_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__io_enq_bits_inst = VL_RAND_RESET_I(32);
    vlSelf->__PVT__io_enq_bits_wid = VL_RAND_RESET_I(2);
    vlSelf->__PVT__io_enq_bits_fp = VL_RAND_RESET_I(1);
    vlSelf->__PVT__io_enq_bits_branch = VL_RAND_RESET_I(2);
    vlSelf->__PVT__io_enq_bits_simt_stack = VL_RAND_RESET_I(1);
    vlSelf->__PVT__io_enq_bits_simt_stack_op = VL_RAND_RESET_I(1);
    vlSelf->__PVT__io_enq_bits_barrier = VL_RAND_RESET_I(1);
    vlSelf->__PVT__io_enq_bits_csr = VL_RAND_RESET_I(2);
    vlSelf->__PVT__io_enq_bits_reverse = VL_RAND_RESET_I(1);
    vlSelf->__PVT__io_enq_bits_sel_alu2 = VL_RAND_RESET_I(2);
    vlSelf->__PVT__io_enq_bits_sel_alu1 = VL_RAND_RESET_I(2);
    vlSelf->__PVT__io_enq_bits_isvec = VL_RAND_RESET_I(1);
    vlSelf->__PVT__io_enq_bits_sel_alu3 = VL_RAND_RESET_I(2);
    vlSelf->__PVT__io_enq_bits_mask = VL_RAND_RESET_I(1);
    vlSelf->__PVT__io_enq_bits_sel_imm = VL_RAND_RESET_I(3);
    vlSelf->__PVT__io_enq_bits_mem_unsigned = VL_RAND_RESET_I(1);
    vlSelf->__PVT__io_enq_bits_alu_fn = VL_RAND_RESET_I(6);
    vlSelf->__PVT__io_enq_bits_mem = VL_RAND_RESET_I(1);
    vlSelf->__PVT__io_enq_bits_mul = VL_RAND_RESET_I(1);
    vlSelf->__PVT__io_enq_bits_mem_cmd = VL_RAND_RESET_I(2);
    vlSelf->__PVT__io_enq_bits_mop = VL_RAND_RESET_I(2);
    vlSelf->__PVT__io_enq_bits_reg_idx1 = VL_RAND_RESET_I(5);
    vlSelf->__PVT__io_enq_bits_reg_idx2 = VL_RAND_RESET_I(5);
    vlSelf->__PVT__io_enq_bits_reg_idx3 = VL_RAND_RESET_I(5);
    vlSelf->__PVT__io_enq_bits_reg_idxw = VL_RAND_RESET_I(5);
    vlSelf->__PVT__io_enq_bits_wfd = VL_RAND_RESET_I(1);
    vlSelf->__PVT__io_enq_bits_fence = VL_RAND_RESET_I(1);
    vlSelf->__PVT__io_enq_bits_sfu = VL_RAND_RESET_I(1);
    vlSelf->__PVT__io_enq_bits_readmask = VL_RAND_RESET_I(1);
    vlSelf->__PVT__io_enq_bits_writemask = VL_RAND_RESET_I(1);
    vlSelf->__PVT__io_enq_bits_wxd = VL_RAND_RESET_I(1);
    vlSelf->__PVT__io_enq_bits_pc = VL_RAND_RESET_I(32);
    vlSelf->__PVT__io_enq_bits_spike_info_pc = VL_RAND_RESET_I(32);
    vlSelf->__PVT__io_enq_bits_spike_info_inst = VL_RAND_RESET_I(32);
    vlSelf->__PVT__io_deq_ready = VL_RAND_RESET_I(1);
    vlSelf->__PVT__io_deq_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__io_deq_bits_inst = VL_RAND_RESET_I(32);
    vlSelf->__PVT__io_deq_bits_wid = VL_RAND_RESET_I(2);
    vlSelf->__PVT__io_deq_bits_fp = VL_RAND_RESET_I(1);
    vlSelf->__PVT__io_deq_bits_branch = VL_RAND_RESET_I(2);
    vlSelf->__PVT__io_deq_bits_simt_stack = VL_RAND_RESET_I(1);
    vlSelf->__PVT__io_deq_bits_simt_stack_op = VL_RAND_RESET_I(1);
    vlSelf->__PVT__io_deq_bits_barrier = VL_RAND_RESET_I(1);
    vlSelf->__PVT__io_deq_bits_csr = VL_RAND_RESET_I(2);
    vlSelf->__PVT__io_deq_bits_reverse = VL_RAND_RESET_I(1);
    vlSelf->__PVT__io_deq_bits_sel_alu2 = VL_RAND_RESET_I(2);
    vlSelf->__PVT__io_deq_bits_sel_alu1 = VL_RAND_RESET_I(2);
    vlSelf->__PVT__io_deq_bits_isvec = VL_RAND_RESET_I(1);
    vlSelf->__PVT__io_deq_bits_sel_alu3 = VL_RAND_RESET_I(2);
    vlSelf->__PVT__io_deq_bits_mask = VL_RAND_RESET_I(1);
    vlSelf->__PVT__io_deq_bits_sel_imm = VL_RAND_RESET_I(3);
    vlSelf->__PVT__io_deq_bits_mem_unsigned = VL_RAND_RESET_I(1);
    vlSelf->__PVT__io_deq_bits_alu_fn = VL_RAND_RESET_I(6);
    vlSelf->__PVT__io_deq_bits_mem = VL_RAND_RESET_I(1);
    vlSelf->__PVT__io_deq_bits_mul = VL_RAND_RESET_I(1);
    vlSelf->__PVT__io_deq_bits_mem_cmd = VL_RAND_RESET_I(2);
    vlSelf->__PVT__io_deq_bits_mop = VL_RAND_RESET_I(2);
    vlSelf->__PVT__io_deq_bits_reg_idx1 = VL_RAND_RESET_I(5);
    vlSelf->__PVT__io_deq_bits_reg_idx2 = VL_RAND_RESET_I(5);
    vlSelf->__PVT__io_deq_bits_reg_idx3 = VL_RAND_RESET_I(5);
    vlSelf->__PVT__io_deq_bits_reg_idxw = VL_RAND_RESET_I(5);
    vlSelf->__PVT__io_deq_bits_wfd = VL_RAND_RESET_I(1);
    vlSelf->__PVT__io_deq_bits_fence = VL_RAND_RESET_I(1);
    vlSelf->__PVT__io_deq_bits_sfu = VL_RAND_RESET_I(1);
    vlSelf->__PVT__io_deq_bits_readmask = VL_RAND_RESET_I(1);
    vlSelf->__PVT__io_deq_bits_writemask = VL_RAND_RESET_I(1);
    vlSelf->__PVT__io_deq_bits_wxd = VL_RAND_RESET_I(1);
    vlSelf->__PVT__io_deq_bits_pc = VL_RAND_RESET_I(32);
    vlSelf->__PVT__io_deq_bits_spike_info_pc = VL_RAND_RESET_I(32);
    vlSelf->__PVT__io_deq_bits_spike_info_inst = VL_RAND_RESET_I(32);
    vlSelf->__PVT__io_flush = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__ram_inst[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->__PVT__ram_inst_MPORT_en = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__ram_wid[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__ram_fp[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__ram_branch[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__ram_simt_stack[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__ram_simt_stack_op[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__ram_barrier[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__ram_csr[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__ram_reverse[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__ram_sel_alu2[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__ram_sel_alu1[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__ram_isvec[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__ram_sel_alu3[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__ram_mask[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__ram_sel_imm[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__ram_mem_unsigned[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__ram_alu_fn[__Vi0] = VL_RAND_RESET_I(6);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__ram_mem[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__ram_mul[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__ram_mem_cmd[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__ram_mop[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__ram_reg_idx1[__Vi0] = VL_RAND_RESET_I(5);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__ram_reg_idx2[__Vi0] = VL_RAND_RESET_I(5);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__ram_reg_idx3[__Vi0] = VL_RAND_RESET_I(5);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__ram_reg_idxw[__Vi0] = VL_RAND_RESET_I(5);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__ram_wfd[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__ram_fence[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__ram_sfu[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__ram_readmask[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__ram_writemask[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__ram_wxd[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__ram_pc[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__ram_spike_info_pc[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__ram_spike_info_inst[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->__PVT__enq_ptr_value = VL_RAND_RESET_I(1);
    vlSelf->__PVT__deq_ptr_value = VL_RAND_RESET_I(1);
    vlSelf->__PVT__maybe_full = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ptr_match = VL_RAND_RESET_I(1);
    vlSelf->__PVT__empty = VL_RAND_RESET_I(1);
    vlSelf->__PVT__full = VL_RAND_RESET_I(1);
    vlSelf->__PVT__do_deq = VL_RAND_RESET_I(1);
}
