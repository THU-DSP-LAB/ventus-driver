// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VVentus.h for the primary calling header

#include "verilated.h"

#include "VVentus_Queue_19.h"
#include "VVentus__Syms.h"

VL_ATTR_COLD void VVentus_Queue_19___stl_sequent__TOP__GPGPU_top__DOT__SM_wrapper__pipe__DOT__ibuffer__DOT__fifo_0__0(VVentus_Queue_19* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VVentus__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VVentus_Queue_19___stl_sequent__TOP__GPGPU_top__DOT__SM_wrapper__pipe__DOT__ibuffer__DOT__fifo_0__0\n"); );
    // Body
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
    vlSelf->__PVT__ram_inst_MPORT_en = ((~ (IData)(vlSelf->__PVT__full)) 
                                        & ((0U == (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__icache__DOT__warpid_st2)) 
                                           & (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__pipe__DOT__ibuffer_io_in_valid)));
}

VL_ATTR_COLD void VVentus_Queue_19___stl_sequent__TOP__GPGPU_top__DOT__SM_wrapper__pipe__DOT__ibuffer__DOT__fifo_0__1(VVentus_Queue_19* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VVentus__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VVentus_Queue_19___stl_sequent__TOP__GPGPU_top__DOT__SM_wrapper__pipe__DOT__ibuffer__DOT__fifo_0__1\n"); );
    // Body
    vlSelf->__PVT__do_deq = ((~ (IData)(vlSelf->__PVT__empty)) 
                             & (((~ (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.pipe__DOT__ibuffer2issue__DOT__rrarbit__DOT____VdfgTmp_h25ce2aec__0)) 
                                 & (0U != (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__pipe__DOT__operand_collector__DOT__Demux__DOT___io_in_ready_T_4))) 
                                & (~ (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__pipe__DOT__warp_sche__DOT___warp_ready_T_3))));
}

VL_ATTR_COLD void VVentus_Queue_19___stl_sequent__TOP__GPGPU_top__DOT__SM_wrapper__pipe__DOT__ibuffer__DOT__fifo_1__0(VVentus_Queue_19* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VVentus__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VVentus_Queue_19___stl_sequent__TOP__GPGPU_top__DOT__SM_wrapper__pipe__DOT__ibuffer__DOT__fifo_1__0\n"); );
    // Body
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
    vlSelf->__PVT__ram_inst_MPORT_en = ((~ (IData)(vlSelf->__PVT__full)) 
                                        & ((1U == (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__icache__DOT__warpid_st2)) 
                                           & (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__pipe__DOT__ibuffer_io_in_valid)));
}

VL_ATTR_COLD void VVentus_Queue_19___stl_sequent__TOP__GPGPU_top__DOT__SM_wrapper__pipe__DOT__ibuffer__DOT__fifo_1__1(VVentus_Queue_19* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VVentus__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VVentus_Queue_19___stl_sequent__TOP__GPGPU_top__DOT__SM_wrapper__pipe__DOT__ibuffer__DOT__fifo_1__1\n"); );
    // Body
    vlSelf->__PVT__do_deq = ((~ (IData)(vlSelf->__PVT__empty)) 
                             & ((((~ (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.pipe__DOT__ibuffer2issue__DOT__rrarbit__DOT____VdfgTmp_hb26d187d__0)) 
                                  | (1U > (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__pipe__DOT__ibuffer2issue__DOT__rrarbit__DOT__lastGrant))) 
                                 & (0U != (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__pipe__DOT__operand_collector__DOT__Demux__DOT___io_in_ready_T_4))) 
                                & (~ ((IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__pipe__DOT__warp_sche__DOT___warp_ready_T_3) 
                                      >> 1U))));
}

VL_ATTR_COLD void VVentus_Queue_19___stl_sequent__TOP__GPGPU_top__DOT__SM_wrapper__pipe__DOT__ibuffer__DOT__fifo_2__0(VVentus_Queue_19* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VVentus__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VVentus_Queue_19___stl_sequent__TOP__GPGPU_top__DOT__SM_wrapper__pipe__DOT__ibuffer__DOT__fifo_2__0\n"); );
    // Body
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
    vlSelf->__PVT__ram_inst_MPORT_en = ((~ (IData)(vlSelf->__PVT__full)) 
                                        & ((2U == (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__icache__DOT__warpid_st2)) 
                                           & (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__pipe__DOT__ibuffer_io_in_valid)));
}

VL_ATTR_COLD void VVentus_Queue_19___stl_sequent__TOP__GPGPU_top__DOT__SM_wrapper__pipe__DOT__ibuffer__DOT__fifo_2__1(VVentus_Queue_19* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VVentus__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VVentus_Queue_19___stl_sequent__TOP__GPGPU_top__DOT__SM_wrapper__pipe__DOT__ibuffer__DOT__fifo_2__1\n"); );
    // Body
    vlSelf->__PVT__do_deq = ((~ (IData)(vlSelf->__PVT__empty)) 
                             & ((((~ (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.pipe__DOT__ibuffer2issue__DOT__rrarbit__DOT____VdfgTmp_h02275172__0)) 
                                  | ((~ (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__pipe__DOT__ibuffer2issue__DOT__rrarbit__DOT__validMask_1)) 
                                     & (2U > (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__pipe__DOT__ibuffer2issue__DOT__rrarbit__DOT__lastGrant)))) 
                                 & (0U != (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__pipe__DOT__operand_collector__DOT__Demux__DOT___io_in_ready_T_4))) 
                                & (~ ((IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__pipe__DOT__warp_sche__DOT___warp_ready_T_3) 
                                      >> 2U))));
}

VL_ATTR_COLD void VVentus_Queue_19___stl_sequent__TOP__GPGPU_top__DOT__SM_wrapper__pipe__DOT__ibuffer__DOT__fifo_3__0(VVentus_Queue_19* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VVentus__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VVentus_Queue_19___stl_sequent__TOP__GPGPU_top__DOT__SM_wrapper__pipe__DOT__ibuffer__DOT__fifo_3__0\n"); );
    // Body
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
    vlSelf->__PVT__ram_inst_MPORT_en = ((~ (IData)(vlSelf->__PVT__full)) 
                                        & ((3U == (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__icache__DOT__warpid_st2)) 
                                           & (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__pipe__DOT__ibuffer_io_in_valid)));
}

VL_ATTR_COLD void VVentus_Queue_19___stl_sequent__TOP__GPGPU_top__DOT__SM_wrapper__pipe__DOT__ibuffer__DOT__fifo_3__1(VVentus_Queue_19* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VVentus__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VVentus_Queue_19___stl_sequent__TOP__GPGPU_top__DOT__SM_wrapper__pipe__DOT__ibuffer__DOT__fifo_3__1\n"); );
    // Body
    vlSelf->__PVT__do_deq = ((~ (IData)(vlSelf->__PVT__empty)) 
                             & ((((~ ((IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.pipe__DOT__ibuffer2issue__DOT__rrarbit__DOT____VdfgTmp_h02275172__0) 
                                      | (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__pipe__DOT__ibuffer2issue__DOT__rrarbit_io_in_2_valid))) 
                                  | ((~ (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.pipe__DOT__ibuffer2issue__DOT__rrarbit__DOT____VdfgTmp_h72765326__0)) 
                                     & (3U > (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__pipe__DOT__ibuffer2issue__DOT__rrarbit__DOT__lastGrant)))) 
                                 & (0U != (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__pipe__DOT__operand_collector__DOT__Demux__DOT___io_in_ready_T_4))) 
                                & (~ ((IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper.__PVT__pipe__DOT__warp_sche__DOT___warp_ready_T_3) 
                                      >> 3U))));
}

VL_ATTR_COLD void VVentus_Queue_19___stl_sequent__TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__ibuffer__DOT__fifo_0__0(VVentus_Queue_19* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VVentus__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VVentus_Queue_19___stl_sequent__TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__ibuffer__DOT__fifo_0__0\n"); );
    // Body
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
    vlSelf->__PVT__ram_inst_MPORT_en = ((~ (IData)(vlSelf->__PVT__full)) 
                                        & ((0U == (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__icache__DOT__warpid_st2)) 
                                           & (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__ibuffer_io_in_valid)));
}

VL_ATTR_COLD void VVentus_Queue_19___stl_sequent__TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__ibuffer__DOT__fifo_0__1(VVentus_Queue_19* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VVentus__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VVentus_Queue_19___stl_sequent__TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__ibuffer__DOT__fifo_0__1\n"); );
    // Body
    vlSelf->__PVT__do_deq = ((~ (IData)(vlSelf->__PVT__empty)) 
                             & (((~ (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.pipe__DOT__ibuffer2issue__DOT__rrarbit__DOT____VdfgTmp_h25ce2aec__0)) 
                                 & (0U != (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__Demux__DOT___io_in_ready_T_4))) 
                                & (~ (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__warp_sche__DOT___warp_ready_T_3))));
}

VL_ATTR_COLD void VVentus_Queue_19___stl_sequent__TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__ibuffer__DOT__fifo_1__0(VVentus_Queue_19* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VVentus__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VVentus_Queue_19___stl_sequent__TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__ibuffer__DOT__fifo_1__0\n"); );
    // Body
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
    vlSelf->__PVT__ram_inst_MPORT_en = ((~ (IData)(vlSelf->__PVT__full)) 
                                        & ((1U == (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__icache__DOT__warpid_st2)) 
                                           & (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__ibuffer_io_in_valid)));
}

VL_ATTR_COLD void VVentus_Queue_19___stl_sequent__TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__ibuffer__DOT__fifo_1__1(VVentus_Queue_19* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VVentus__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VVentus_Queue_19___stl_sequent__TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__ibuffer__DOT__fifo_1__1\n"); );
    // Body
    vlSelf->__PVT__do_deq = ((~ (IData)(vlSelf->__PVT__empty)) 
                             & ((((~ (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.pipe__DOT__ibuffer2issue__DOT__rrarbit__DOT____VdfgTmp_hb26d187d__0)) 
                                  | (1U > (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__ibuffer2issue__DOT__rrarbit__DOT__lastGrant))) 
                                 & (0U != (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__Demux__DOT___io_in_ready_T_4))) 
                                & (~ ((IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__warp_sche__DOT___warp_ready_T_3) 
                                      >> 1U))));
}

VL_ATTR_COLD void VVentus_Queue_19___stl_sequent__TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__ibuffer__DOT__fifo_2__0(VVentus_Queue_19* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VVentus__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VVentus_Queue_19___stl_sequent__TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__ibuffer__DOT__fifo_2__0\n"); );
    // Body
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
    vlSelf->__PVT__ram_inst_MPORT_en = ((~ (IData)(vlSelf->__PVT__full)) 
                                        & ((2U == (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__icache__DOT__warpid_st2)) 
                                           & (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__ibuffer_io_in_valid)));
}

VL_ATTR_COLD void VVentus_Queue_19___stl_sequent__TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__ibuffer__DOT__fifo_2__1(VVentus_Queue_19* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VVentus__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VVentus_Queue_19___stl_sequent__TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__ibuffer__DOT__fifo_2__1\n"); );
    // Body
    vlSelf->__PVT__do_deq = ((~ (IData)(vlSelf->__PVT__empty)) 
                             & ((((~ (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.pipe__DOT__ibuffer2issue__DOT__rrarbit__DOT____VdfgTmp_h02275172__0)) 
                                  | ((~ (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__ibuffer2issue__DOT__rrarbit__DOT__validMask_1)) 
                                     & (2U > (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__ibuffer2issue__DOT__rrarbit__DOT__lastGrant)))) 
                                 & (0U != (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__Demux__DOT___io_in_ready_T_4))) 
                                & (~ ((IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__warp_sche__DOT___warp_ready_T_3) 
                                      >> 2U))));
}

VL_ATTR_COLD void VVentus_Queue_19___stl_sequent__TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__ibuffer__DOT__fifo_3__0(VVentus_Queue_19* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VVentus__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VVentus_Queue_19___stl_sequent__TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__ibuffer__DOT__fifo_3__0\n"); );
    // Body
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
    vlSelf->__PVT__ram_inst_MPORT_en = ((~ (IData)(vlSelf->__PVT__full)) 
                                        & ((3U == (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__icache__DOT__warpid_st2)) 
                                           & (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__ibuffer_io_in_valid)));
}

VL_ATTR_COLD void VVentus_Queue_19___stl_sequent__TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__ibuffer__DOT__fifo_3__1(VVentus_Queue_19* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VVentus__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VVentus_Queue_19___stl_sequent__TOP__GPGPU_top__DOT__SM_wrapper_1__pipe__DOT__ibuffer__DOT__fifo_3__1\n"); );
    // Body
    vlSelf->__PVT__do_deq = ((~ (IData)(vlSelf->__PVT__empty)) 
                             & ((((~ ((IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.pipe__DOT__ibuffer2issue__DOT__rrarbit__DOT____VdfgTmp_h02275172__0) 
                                      | (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__ibuffer2issue__DOT__rrarbit_io_in_2_valid))) 
                                  | ((~ (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.pipe__DOT__ibuffer2issue__DOT__rrarbit__DOT____VdfgTmp_h72765326__0)) 
                                     & (3U > (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__ibuffer2issue__DOT__rrarbit__DOT__lastGrant)))) 
                                 & (0U != (IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__operand_collector__DOT__Demux__DOT___io_in_ready_T_4))) 
                                & (~ ((IData)(vlSymsp->TOP__GPGPU_top__DOT__SM_wrapper_1.__PVT__pipe__DOT__warp_sche__DOT___warp_ready_T_3) 
                                      >> 3U))));
}
